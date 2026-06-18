use crate::application::service::{current_timestamp, pending_status, restored_status};
use crate::contracts::analytics::{
    AnalyticsRange, ChangeAnalyticsPayload, ChangeDaySeriesPayload, DailyActivityPayload,
    QuotaHistoryPayload, QuotaHistoryPointPayload, SessionStatsPayload, TodaySummaryPayload,
    TokenAnalyticsPayload, ToolAnalyticsPayload, UsageAnalyticsPayload,
};
use crate::contracts::BackendEffect;
use crate::core::model::analytics::{
    aggregate_public_change_analytics, aggregate_public_usage, PublicAnalyticsRange,
};
use crate::repository::{
    analytics as analytics_repository, bootstrap, quota as quota_repository, Repository,
};

pub(crate) struct AnalyticsUseCaseBoundary;

pub(crate) trait AnalyticsUseCaseBoundaryPort {}

/// 读取整体用量分析的用户动作边界，只组装公开 session 文件事实聚合与 bootstrap cache 写回。
pub fn load_usage_analytics(repo: &Repository) -> UsageAnalyticsPayload {
    let aggregate = aggregate_public_usage(
        analytics_repository::load_public_session_facts(repo),
        current_timestamp(),
    );
    let max_activity_count = aggregate.most_active_count;
    let daily_activity = aggregate
        .daily_activity
        .into_iter()
        .map(|day| DailyActivityPayload {
            date: day.date.clone(),
            session_count: day.session_count,
            total_file_size: day.total_file_size,
            activity_level: day.activity_level(max_activity_count),
            active_minutes: day.active_minutes,
            tokens: day.tokens,
        })
        .collect();

    let payload = UsageAnalyticsPayload {
        backend_status: restored_status("analytics", "load_usage_analytics", BackendEffect::NoOp),
        today: TodaySummaryPayload {
            session_count: aggregate.today_session_count,
            total_file_size: aggregate.today_total_file_size,
            active_minutes_estimate: aggregate.active_minutes_estimate,
        },
        session_stats: SessionStatsPayload {
            total_sessions: aggregate.total_sessions,
            total_size_bytes: aggregate.total_size_bytes,
            active_days: aggregate.active_days,
            avg_sessions_per_active_day: aggregate.avg_sessions_per_active_day,
            most_active_date: aggregate.most_active_date,
            most_active_count: aggregate.most_active_count,
        },
        daily_activity,
    };
    if let Ok(usage_analytics) = serde_json::to_value(&payload) {
        let _ =
            bootstrap::store_bootstrap_usage_analytics(repo, current_timestamp(), usage_analytics);
    }
    payload
}

/// 读取配额历史的用户动作边界；只探测公开缓存来源，不推断配额百分比。
pub fn load_quota_history(repo: &Repository, account_key: Option<String>) -> QuotaHistoryPayload {
    let history =
        quota_repository::load_public_quota_history(repo, normalize_optional_string(account_key));
    QuotaHistoryPayload {
        backend_status: pending_status(
            "analytics",
            "load_quota_history",
            quota_history_pending_note(history.cache_source_available),
        ),
        account_key: history.account_key,
        points: history
            .points
            .into_iter()
            .map(|point| QuotaHistoryPointPayload {
                timestamp: point.timestamp,
                account_key: point.account_key,
                primary_used_percent: point.primary_used_percent,
                secondary_used_percent: point.secondary_used_percent,
            })
            .collect(),
    }
}

/// 读取 token 分析的用户动作边界；真实 token 口径等待证据补齐。
pub fn load_token_analytics(_repo: &Repository, range: Option<String>) -> TokenAnalyticsPayload {
    let normalized_range = AnalyticsRange::from_input(range);
    let _range_day_span = public_range_from_contract(normalized_range).day_span();
    TokenAnalyticsPayload {
        backend_status: pending_status(
            "analytics",
            "load_token_analytics",
            "token 分析只完成公开 IPC 骨架；当前不推断闭源 token 统计口径。",
        ),
        range: normalized_range,
        total_tokens: 0,
        avg_per_session: 0.0,
        input_pct: 0.0,
        output_pct: 0.0,
        reasoning_pct: 0.0,
        input_total: 0,
        output_total: 0,
        reasoning_total: 0,
        series: Vec::new(),
    }
}

/// 读取工具分析的用户动作边界；真实工具分类等待证据补齐。
pub fn load_tool_analytics(_repo: &Repository, range: Option<String>) -> ToolAnalyticsPayload {
    let normalized_range = AnalyticsRange::from_input(range);
    let _range_day_span = public_range_from_contract(normalized_range).day_span();
    ToolAnalyticsPayload {
        backend_status: pending_status(
            "analytics",
            "load_tool_analytics",
            "工具分析只完成公开 IPC 骨架；当前不推断闭源工具分类规则。",
        ),
        range: normalized_range,
        total_calls: 0,
        distinct_count: 0,
        search_count: 0,
        edit_count: 0,
        top_tools: Vec::new(),
    }
}

/// 读取变更分析的用户动作边界，只聚合公开 rollout JSONL 命令事实。
pub fn load_change_analytics(repo: &Repository, range: Option<String>) -> ChangeAnalyticsPayload {
    let normalized_range = AnalyticsRange::from_input(range);
    let aggregate = aggregate_public_change_analytics(
        analytics_repository::load_public_change_command_facts(repo),
        current_timestamp(),
        public_range_from_contract(normalized_range),
    );
    ChangeAnalyticsPayload {
        backend_status: restored_status("analytics", "load_change_analytics", BackendEffect::NoOp),
        range: normalized_range,
        total_commands: aggregate.total_commands,
        write_commands: aggregate.write_commands,
        read_commands: aggregate.read_commands,
        other_commands: aggregate.other_commands,
        series: aggregate
            .series
            .into_iter()
            .map(|day| ChangeDaySeriesPayload {
                date: day.date,
                commands: day.commands,
                write_ops: day.write_ops,
                read_ops: day.read_ops,
            })
            .collect(),
    }
}

fn normalize_optional_string(value: Option<String>) -> Option<String> {
    value.and_then(|item| {
        let trimmed = item.trim().to_string();
        if trimmed.is_empty() {
            None
        } else {
            Some(trimmed)
        }
    })
}

fn public_range_from_contract(range: AnalyticsRange) -> PublicAnalyticsRange {
    match range {
        AnalyticsRange::Today => PublicAnalyticsRange::Today,
        AnalyticsRange::Week => PublicAnalyticsRange::Week,
        AnalyticsRange::Month => PublicAnalyticsRange::Month,
    }
}

fn quota_history_pending_note(cache_source_available: bool) -> &'static str {
    if cache_source_available {
        "配额历史已探测公开 bootstrap cache，但没有可证明的配额历史字段；当前不推断配额百分比。"
    } else {
        "配额历史只完成公开 IPC 骨架；当前没有可证明的本地配额历史来源。"
    }
}
