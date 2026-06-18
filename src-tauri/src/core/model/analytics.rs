use chrono::{TimeZone, Utc};
use std::collections::BTreeMap;

// analytics 模型只聚合公开可重建的本地文件事实，不表达闭源 token、严格运行时工具或配额统计口径。
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
    pub turn_count: i32,
    pub activity_timestamps: Vec<i64>,
}

impl PublicSessionFileFact {
    pub fn new(
        id: String,
        updated_at: i64,
        created_at: Option<i64>,
        file_size: i64,
        turn_count: i32,
    ) -> Self {
        Self {
            id,
            updated_at,
            created_at,
            file_size: file_size.max(0),
            turn_count: turn_count.max(0),
            activity_timestamps: Vec::new(),
        }
    }

    pub fn with_activity_timestamps(mut self, timestamps: Vec<i64>) -> Self {
        self.activity_timestamps = timestamps
            .into_iter()
            .filter(|timestamp| *timestamp >= 0)
            .collect();
        self
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
        if self.session_count <= 0 || max_count <= 0 {
            0.0
        } else {
            (((self.session_count as f64 + 1.0).ln() * 4.0) / (max_count as f64 + 1.0).ln())
                .clamp(1.0, 4.0)
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
    pub avg_turns: f64,
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

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PublicCommandFact {
    pub timestamp: i64,
    pub command: String,
}

impl PublicCommandFact {
    pub fn new(timestamp: i64, command: String) -> Self {
        Self {
            timestamp,
            command: command.trim().to_string(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PublicToolCallFact {
    pub timestamp: i64,
    pub path: String,
}

impl PublicToolCallFact {
    pub fn new(timestamp: i64, path: String) -> Self {
        Self {
            timestamp,
            path: path.trim().to_string(),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PublicToolCallKind {
    Search,
    Edit,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PublicToolRankItem {
    pub path: String,
    pub count: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PublicToolAggregate {
    pub total_calls: i32,
    pub distinct_count: i32,
    pub search_count: i32,
    pub edit_count: i32,
    pub top_tools: Vec<PublicToolRankItem>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PublicCommandKind {
    Write,
    Read,
    Other,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PublicChangeDay {
    pub date: String,
    pub commands: i32,
    pub write_ops: i32,
    pub read_ops: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PublicChangeAggregate {
    pub total_commands: i32,
    pub write_commands: i32,
    pub read_commands: i32,
    pub other_commands: i32,
    pub series: Vec<PublicChangeDay>,
}

pub fn aggregate_public_usage(
    facts: Vec<PublicSessionFileFact>,
    now_epoch_seconds: i64,
) -> PublicUsageAggregate {
    let today = date_key(now_epoch_seconds);
    let mut by_day = BTreeMap::<String, PublicUsageDayBucket>::new();
    let mut total_size_bytes = 0i64;
    let mut total_turns = 0i32;

    for fact in facts {
        let date = date_key(fact.updated_at);
        let entry = by_day.entry(date).or_default();
        entry.session_count = entry.session_count.saturating_add(1);
        entry.total_file_size = entry.total_file_size.saturating_add(fact.file_size.max(0));
        if fact.activity_timestamps.is_empty() {
            entry.activity_timestamps.push(fact.updated_at);
        } else {
            entry.activity_timestamps.extend(fact.activity_timestamps);
        }
        total_size_bytes = total_size_bytes.saturating_add(fact.file_size.max(0));
        total_turns = total_turns.saturating_add(fact.turn_count.max(0));
    }

    let total_sessions = by_day
        .values()
        .fold(0i32, |acc, item| acc.saturating_add(item.session_count));
    let active_days = by_day
        .values()
        .filter(|item| item.session_count > 0)
        .count() as i32;
    let avg_sessions_per_active_day = if active_days == 0 {
        0.0
    } else {
        total_sessions as f64 / active_days as f64
    };
    let avg_turns = if total_sessions == 0 {
        0.0
    } else {
        total_turns as f64 / total_sessions as f64
    };
    let (most_active_date, most_active_count) = by_day
        .iter()
        .max_by(|left, right| {
            left.1
                .session_count
                .cmp(&right.1.session_count)
                .then_with(|| right.0.cmp(left.0))
        })
        .map(|(date, bucket)| (Some(date.clone()), bucket.session_count))
        .unwrap_or((None, 0));
    let today_entry = by_day.get(&today).cloned().unwrap_or_default();
    let daily_activity = public_usage_window(now_epoch_seconds)
        .into_iter()
        .map(|date| {
            let bucket = by_day.get(&date).cloned().unwrap_or_default();
            PublicDailyActivity {
                date,
                session_count: bucket.session_count,
                total_file_size: bucket.total_file_size,
                active_minutes: None,
                tokens: None,
            }
        })
        .collect::<Vec<_>>();

    PublicUsageAggregate {
        today_session_count: today_entry.session_count,
        today_total_file_size: today_entry.total_file_size,
        active_minutes_estimate: estimate_active_minutes(&today_entry.activity_timestamps),
        total_sessions,
        total_size_bytes,
        active_days,
        avg_sessions_per_active_day,
        avg_turns,
        most_active_date,
        most_active_count,
        daily_activity,
    }
}

#[derive(Debug, Clone, Default)]
struct PublicUsageDayBucket {
    session_count: i32,
    total_file_size: i64,
    activity_timestamps: Vec<i64>,
}

fn public_usage_window(now_epoch_seconds: i64) -> Vec<String> {
    let first = now_epoch_seconds.saturating_sub(364 * 24 * 60 * 60);
    (0..365)
        .map(|offset| date_key(first.saturating_add(offset * 24 * 60 * 60)))
        .collect()
}

fn estimate_active_minutes(timestamps: &[i64]) -> i32 {
    if timestamps.is_empty() {
        return 0;
    }

    let mut sorted = timestamps
        .iter()
        .copied()
        .filter(|timestamp| *timestamp >= 0)
        .collect::<Vec<_>>();
    if sorted.is_empty() {
        return 0;
    }
    sorted.sort_unstable();
    sorted.dedup();

    let mut active_minutes = 1i32;
    for pair in sorted.windows(2) {
        let gap = pair[1].saturating_sub(pair[0]);
        if gap >= 301 {
            active_minutes = active_minutes.saturating_add(1);
        } else if gap > 0 {
            let minutes = ((gap + 59) / 60).clamp(1, 300) as i32;
            active_minutes = active_minutes.saturating_add(minutes);
        }
    }

    active_minutes.min(1_440)
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

pub fn aggregate_public_change_analytics(
    facts: Vec<PublicCommandFact>,
    now_epoch_seconds: i64,
    range: PublicAnalyticsRange,
) -> PublicChangeAggregate {
    let earliest = now_epoch_seconds.saturating_sub(
        range
            .day_span()
            .saturating_sub(1)
            .saturating_mul(24 * 60 * 60),
    );
    let mut by_day = BTreeMap::<String, (i32, i32, i32)>::new();
    let mut total_commands = 0i32;
    let mut write_commands = 0i32;
    let mut read_commands = 0i32;

    for fact in facts
        .into_iter()
        .filter(|fact| fact.timestamp >= earliest && fact.timestamp <= now_epoch_seconds)
    {
        total_commands = total_commands.saturating_add(1);
        let day = date_key(fact.timestamp);
        let entry = by_day.entry(day).or_insert((0, 0, 0));
        entry.0 = entry.0.saturating_add(1);

        match classify_public_command(&fact.command) {
            PublicCommandKind::Write => {
                write_commands = write_commands.saturating_add(1);
                entry.1 = entry.1.saturating_add(1);
            }
            PublicCommandKind::Read => {
                read_commands = read_commands.saturating_add(1);
                entry.2 = entry.2.saturating_add(1);
            }
            PublicCommandKind::Other => {}
        }
    }

    let mut series = Vec::new();
    for offset in 0..range.day_span() {
        let timestamp = earliest.saturating_add(offset.saturating_mul(24 * 60 * 60));
        let date = date_key(timestamp);
        let bucket = by_day.get(&date).copied().unwrap_or((0, 0, 0));
        series.push(PublicChangeDay {
            date,
            commands: bucket.0,
            write_ops: bucket.1,
            read_ops: bucket.2,
        });
    }

    PublicChangeAggregate {
        total_commands,
        write_commands,
        read_commands,
        other_commands: total_commands.saturating_sub(write_commands.saturating_add(read_commands)),
        series,
    }
}

pub fn aggregate_public_tool_analytics(
    facts: Vec<PublicToolCallFact>,
    now_epoch_seconds: i64,
    range: PublicAnalyticsRange,
) -> PublicToolAggregate {
    let earliest = now_epoch_seconds.saturating_sub(
        range
            .day_span()
            .saturating_sub(1)
            .saturating_mul(24 * 60 * 60),
    );
    let mut by_path = BTreeMap::<String, i32>::new();
    let mut total_calls = 0i32;
    let mut search_count = 0i32;
    let mut edit_count = 0i32;

    for fact in facts
        .into_iter()
        .filter(|fact| fact.timestamp >= earliest && fact.timestamp <= now_epoch_seconds)
    {
        let path = if fact.path.trim().is_empty() {
            "unknown".to_string()
        } else {
            fact.path
        };
        total_calls = total_calls.saturating_add(1);
        let count = by_path.entry(path.clone()).or_insert(0);
        *count = count.saturating_add(1);
        match classify_public_tool_call(&path) {
            PublicToolCallKind::Search => search_count = search_count.saturating_add(1),
            PublicToolCallKind::Edit => edit_count = edit_count.saturating_add(1),
        }
    }

    let mut top_tools = by_path
        .iter()
        .map(|(path, count)| PublicToolRankItem {
            path: path.clone(),
            count: *count,
        })
        .collect::<Vec<_>>();
    top_tools.sort_by(|left, right| {
        right
            .count
            .cmp(&left.count)
            .then_with(|| left.path.cmp(&right.path))
    });
    top_tools.truncate(10);

    PublicToolAggregate {
        total_calls,
        distinct_count: by_path.len() as i32,
        search_count,
        edit_count,
        top_tools,
    }
}

pub fn classify_public_tool_call(path: &str) -> PublicToolCallKind {
    let normalized = path.trim().to_lowercase();
    if SEARCH_TOOL_PATTERNS
        .iter()
        .any(|pattern| normalized.contains(pattern))
    {
        PublicToolCallKind::Search
    } else {
        PublicToolCallKind::Edit
    }
}

pub fn classify_public_command(command: &str) -> PublicCommandKind {
    let normalized = command.trim().to_lowercase();
    if normalized.is_empty() {
        return PublicCommandKind::Other;
    }

    if WRITE_COMMAND_PATTERNS
        .iter()
        .any(|pattern| normalized.contains(pattern))
    {
        return PublicCommandKind::Write;
    }

    if READ_COMMAND_PATTERNS
        .iter()
        .any(|pattern| normalized.contains(pattern))
    {
        return PublicCommandKind::Read;
    }

    PublicCommandKind::Other
}

fn date_key(epoch_seconds: i64) -> String {
    Utc.timestamp_opt(epoch_seconds.max(0), 0)
        .single()
        .unwrap_or_else(|| Utc.timestamp_opt(0, 0).single().expect("valid epoch"))
        .format("%Y-%m-%d")
        .to_string()
}

const WRITE_COMMAND_PATTERNS: &[&str] = &[
    "sed ",
    "sed\t",
    "echo >",
    "echo >>",
    "cat >",
    "cat >>",
    "tee ",
    "cp ",
    "mv ",
    "mkdir ",
    "rm ",
    "touch ",
    "chmod ",
    "chown ",
    "write",
    "patch ",
    "git commit",
    "git add",
    "npm install",
    "pip install",
    "cargo add",
];

const READ_COMMAND_PATTERNS: &[&str] = &[
    "cat ",
    "head ",
    "tail ",
    "less ",
    "more ",
    "grep ",
    "rg ",
    "find ",
    "ls ",
    "pwd",
    "wc ",
    "file ",
    "stat ",
    "du ",
    "df ",
    "git status",
    "git log",
    "git diff",
    "git show",
    "npm list",
    "cargo check",
];

const SEARCH_TOOL_PATTERNS: &[&str] = &[
    "search", "query", "list", "read", "view", "resolve", "fetch",
];

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn aggregate_public_usage_counts_session_file_facts_by_day() {
        let facts = vec![
            PublicSessionFileFact::new("a".to_string(), 1_710_000_000, None, 100, 2),
            PublicSessionFileFact::new("b".to_string(), 1_710_000_100, None, 50, 4),
            PublicSessionFileFact::new("c".to_string(), 1_710_086_400, None, 25, 0),
        ];

        let aggregate = aggregate_public_usage(facts, 1_710_000_000);

        assert_eq!(aggregate.total_sessions, 3);
        assert_eq!(aggregate.total_size_bytes, 175);
        assert_eq!(aggregate.active_days, 2);
        assert_eq!(aggregate.most_active_date, Some("2024-03-09".to_string()));
        assert_eq!(aggregate.most_active_count, 2);
        assert_eq!(aggregate.today_session_count, 2);
        assert_eq!(aggregate.today_total_file_size, 150);
        assert_eq!(aggregate.active_minutes_estimate, 3);
        assert_eq!(aggregate.avg_turns, 2.0);
        assert_eq!(aggregate.daily_activity.len(), 365);
        let today = aggregate
            .daily_activity
            .iter()
            .find(|item| item.date == "2024-03-09")
            .expect("today activity");
        assert_eq!(today.session_count, 2);
        assert_eq!(today.total_file_size, 150);
        assert_eq!(today.activity_level(aggregate.most_active_count), 4.0);
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
            PublicSessionFileFact::new("old".to_string(), 1_709_913_600, None, 100, 10),
            PublicSessionFileFact::new("today".to_string(), 1_710_000_000, None, 50, 2),
        ];

        let aggregate =
            aggregate_public_usage_for_range(facts, 1_710_000_000, PublicAnalyticsRange::Today);

        assert_eq!(aggregate.total_sessions, 1);
        assert_eq!(aggregate.total_size_bytes, 50);
        assert_eq!(aggregate.avg_turns, 2.0);
        assert_eq!(aggregate.active_days, 1);
        assert_eq!(aggregate.daily_activity.len(), 365);
        assert_eq!(
            aggregate
                .daily_activity
                .iter()
                .filter(|item| item.session_count > 0)
                .count(),
            1
        );
    }

    #[test]
    fn aggregate_public_change_analytics_classifies_and_zero_fills_window() {
        let facts = vec![
            PublicCommandFact::new(1_710_000_000, "git status".to_string()),
            PublicCommandFact::new(1_710_000_100, "cat > notes.txt".to_string()),
            PublicCommandFact::new(1_710_086_400, "python script.py".to_string()),
        ];

        let aggregate =
            aggregate_public_change_analytics(facts, 1_710_000_000, PublicAnalyticsRange::Today);

        assert_eq!(aggregate.total_commands, 2);
        assert_eq!(aggregate.write_commands, 1);
        assert_eq!(aggregate.read_commands, 1);
        assert_eq!(aggregate.other_commands, 0);
        assert_eq!(aggregate.series.len(), 1);
        assert_eq!(aggregate.series[0].commands, 2);
        assert_eq!(aggregate.series[0].write_ops, 1);
        assert_eq!(aggregate.series[0].read_ops, 1);
    }

    #[test]
    fn classify_public_command_uses_write_table_before_read_table() {
        assert_eq!(
            classify_public_command("cat > output.txt"),
            PublicCommandKind::Write
        );
        assert_eq!(classify_public_command("git diff"), PublicCommandKind::Read);
        assert_eq!(
            classify_public_command("python run.py"),
            PublicCommandKind::Other
        );
    }

    #[test]
    fn aggregate_public_tool_analytics_groups_paths_and_truncates_top_tools() {
        let mut facts = vec![
            PublicToolCallFact::new(1_710_000_000, "web_search".to_string()),
            PublicToolCallFact::new(1_710_000_100, "web_search".to_string()),
            PublicToolCallFact::new(1_710_000_200, "apply_patch".to_string()),
            PublicToolCallFact::new(1_709_913_600, "old_read".to_string()),
        ];
        for index in 0..12 {
            facts.push(PublicToolCallFact::new(
                1_710_000_300 + index,
                format!("tool_{index}"),
            ));
        }

        let aggregate =
            aggregate_public_tool_analytics(facts, 1_710_000_500, PublicAnalyticsRange::Today);

        assert_eq!(aggregate.total_calls, 15);
        assert_eq!(aggregate.distinct_count, 14);
        assert_eq!(aggregate.search_count, 2);
        assert_eq!(aggregate.edit_count, 13);
        assert_eq!(aggregate.top_tools.len(), 10);
        assert_eq!(aggregate.top_tools[0].path, "web_search");
        assert_eq!(aggregate.top_tools[0].count, 2);
    }

    #[test]
    fn classify_public_tool_call_uses_search_terms_with_edit_fallback() {
        assert_eq!(
            classify_public_tool_call("tools/list_projects"),
            PublicToolCallKind::Search
        );
        assert_eq!(
            classify_public_tool_call("apply_patch"),
            PublicToolCallKind::Edit
        );
    }
}
