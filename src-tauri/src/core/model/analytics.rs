use chrono::{TimeZone, Utc};
use std::collections::BTreeMap;

// analytics 模型只聚合公开可重建的本地文件事实，不表达闭源 token、工具或配额统计口径。
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PublicAnalyticsRange {
    Today,
    Week,
    Month,
}

impl PublicAnalyticsRange {
    pub const fn day_span(self) -> i64 {
        match self {
            Self::Today => 1,
            Self::Week => 7,
            Self::Month => 30,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PublicSessionFileFact {
    pub id: String,
    pub updated_at: i64,
    pub created_at: Option<i64>,
    pub file_size: i64,
}

impl PublicSessionFileFact {
    pub fn new(id: String, updated_at: i64, created_at: Option<i64>, file_size: i64) -> Self {
        Self {
            id,
            updated_at,
            created_at,
            file_size: file_size.max(0),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PublicDailyActivity {
    pub date: String,
    pub session_count: i32,
    pub total_file_size: i64,
    pub active_minutes: Option<i32>,
    pub tokens: Option<i64>,
}

impl PublicDailyActivity {
    pub fn activity_level(&self, max_count: i32) -> f64 {
        if max_count <= 0 {
            0.0
        } else {
            self.session_count as f64 / max_count as f64
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct PublicUsageAggregate {
    pub today_session_count: i32,
    pub today_total_file_size: i64,
    pub active_minutes_estimate: i32,
    pub total_sessions: i32,
    pub total_size_bytes: i64,
    pub active_days: i32,
    pub avg_sessions_per_active_day: f64,
    pub most_active_date: Option<String>,
    pub most_active_count: i32,
    pub daily_activity: Vec<PublicDailyActivity>,
}

#[derive(Debug, Clone, PartialEq)]
pub struct PublicQuotaHistory {
    pub account_key: Option<String>,
    pub cache_source_available: bool,
    pub points: Vec<PublicQuotaHistoryPoint>,
}

impl PublicQuotaHistory {
    pub fn empty(account_key: Option<String>, cache_source_available: bool) -> Self {
        Self {
            account_key,
            cache_source_available,
            points: Vec::new(),
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct PublicQuotaHistoryPoint {
    pub timestamp: i64,
    pub account_key: String,
    pub primary_used_percent: Option<f64>,
    pub secondary_used_percent: Option<f64>,
}

pub fn aggregate_public_usage(
    facts: Vec<PublicSessionFileFact>,
    now_epoch_seconds: i64,
) -> PublicUsageAggregate {
    let today = date_key(now_epoch_seconds);
    let mut by_day = BTreeMap::<String, (i32, i64)>::new();
    let mut total_size_bytes = 0i64;

    for fact in facts {
        let date = date_key(fact.updated_at);
        let entry = by_day.entry(date).or_insert((0, 0));
        entry.0 = entry.0.saturating_add(1);
        entry.1 = entry.1.saturating_add(fact.file_size.max(0));
        total_size_bytes = total_size_bytes.saturating_add(fact.file_size.max(0));
    }

    let mut daily_activity = by_day
        .iter()
        .map(
            |(date, (session_count, total_file_size))| PublicDailyActivity {
                date: date.clone(),
                session_count: *session_count,
                total_file_size: *total_file_size,
                active_minutes: None,
                tokens: None,
            },
        )
        .collect::<Vec<_>>();
    daily_activity.sort_by(|left, right| left.date.cmp(&right.date));

    let total_sessions = daily_activity
        .iter()
        .fold(0i32, |acc, item| acc.saturating_add(item.session_count));
    let active_days = daily_activity.len() as i32;
    let avg_sessions_per_active_day = if active_days == 0 {
        0.0
    } else {
        total_sessions as f64 / active_days as f64
    };
    let (most_active_date, most_active_count) = daily_activity
        .iter()
        .max_by(|left, right| {
            left.session_count
                .cmp(&right.session_count)
                .then_with(|| right.date.cmp(&left.date))
        })
        .map(|item| (Some(item.date.clone()), item.session_count))
        .unwrap_or((None, 0));
    let today_entry = by_day.get(&today).copied().unwrap_or((0, 0));

    PublicUsageAggregate {
        today_session_count: today_entry.0,
        today_total_file_size: today_entry.1,
        // 公开 session 文件元数据无法证明真实活跃时长，骨架保持 0。
        active_minutes_estimate: 0,
        total_sessions,
        total_size_bytes,
        active_days,
        avg_sessions_per_active_day,
        most_active_date,
        most_active_count,
        daily_activity,
    }
}

pub fn aggregate_public_usage_for_range(
    facts: Vec<PublicSessionFileFact>,
    now_epoch_seconds: i64,
    range: PublicAnalyticsRange,
) -> PublicUsageAggregate {
    let earliest = now_epoch_seconds.saturating_sub(
        range
            .day_span()
            .saturating_sub(1)
            .saturating_mul(24 * 60 * 60),
    );
    let filtered = facts
        .into_iter()
        .filter(|fact| fact.updated_at >= earliest && fact.updated_at <= now_epoch_seconds)
        .collect::<Vec<_>>();
    aggregate_public_usage(filtered, now_epoch_seconds)
}

fn date_key(epoch_seconds: i64) -> String {
    Utc.timestamp_opt(epoch_seconds.max(0), 0)
        .single()
        .unwrap_or_else(|| Utc.timestamp_opt(0, 0).single().expect("valid epoch"))
        .format("%Y-%m-%d")
        .to_string()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn aggregate_public_usage_counts_session_file_facts_by_day() {
        let facts = vec![
            PublicSessionFileFact::new("a".to_string(), 1_710_000_000, None, 100),
            PublicSessionFileFact::new("b".to_string(), 1_710_000_100, None, 50),
            PublicSessionFileFact::new("c".to_string(), 1_710_086_400, None, 25),
        ];

        let aggregate = aggregate_public_usage(facts, 1_710_000_000);

        assert_eq!(aggregate.total_sessions, 3);
        assert_eq!(aggregate.total_size_bytes, 175);
        assert_eq!(aggregate.active_days, 2);
        assert_eq!(aggregate.most_active_date, Some("2024-03-09".to_string()));
        assert_eq!(aggregate.most_active_count, 2);
        assert_eq!(aggregate.today_session_count, 2);
        assert_eq!(aggregate.today_total_file_size, 150);
        assert_eq!(aggregate.active_minutes_estimate, 0);
        assert_eq!(aggregate.daily_activity.len(), 2);
        assert!(aggregate
            .daily_activity
            .iter()
            .all(|item| item.tokens.is_none()));
    }

    #[test]
    fn public_range_declares_day_span_without_external_sources() {
        assert_eq!(PublicAnalyticsRange::Today.day_span(), 1);
        assert_eq!(PublicAnalyticsRange::Week.day_span(), 7);
        assert_eq!(PublicAnalyticsRange::Month.day_span(), 30);
    }

    #[test]
    fn aggregate_public_usage_for_range_filters_old_session_file_facts() {
        let facts = vec![
            PublicSessionFileFact::new("old".to_string(), 1_709_913_600, None, 100),
            PublicSessionFileFact::new("today".to_string(), 1_710_000_000, None, 50),
        ];

        let aggregate =
            aggregate_public_usage_for_range(facts, 1_710_000_000, PublicAnalyticsRange::Today);

        assert_eq!(aggregate.total_sessions, 1);
        assert_eq!(aggregate.total_size_bytes, 50);
        assert_eq!(aggregate.active_days, 1);
        assert_eq!(aggregate.daily_activity.len(), 1);
    }
}
