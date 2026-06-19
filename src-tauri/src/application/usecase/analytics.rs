use crate::application::service::{current_timestamp, restored_status};
use crate::contracts::analytics::{
    AnalyticsRange, ChangeAnalyticsPayload, ChangeDaySeriesPayload, DailyActivityPayload,
    QuotaHistoryPayload, QuotaHistoryPointPayload, SessionStatsPayload, TodaySummaryPayload,
    TokenAnalyticsPayload, TokenDaySeriesPayload, ToolAnalyticsPayload, ToolRankItemPayload,
    UsageAnalyticsPayload,
};
use crate::contracts::BackendEffect;
use crate::core::error::CoreError;
use crate::core::model::analytics::{
    aggregate_public_change_analytics, aggregate_public_token_analytics,
    aggregate_public_tool_analytics, aggregate_public_usage, PublicAnalyticsRange,
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
        backend_status: restored_status(
            "analytics",
            "load_usage_analytics",
            BackendEffect::RepositoryWrite,
        ),
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

/// 读取配额历史的用户动作边界，只组装公开 quota-history JSONL 点位。
pub fn load_quota_history(
    repo: &Repository,
    account_key: Option<String>,
) -> Result<QuotaHistoryPayload, CoreError> {
    let history =
        quota_repository::load_public_quota_history(repo, normalize_optional_string(account_key))?;
    Ok(QuotaHistoryPayload {
        backend_status: restored_status(
            "analytics",
            "load_quota_history",
            BackendEffect::RepositoryWrite,
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
    })
}

/// 读取 token 分析的用户动作边界，只聚合公开 session/rollout JSONL usage 字段。
pub fn load_token_analytics(repo: &Repository, range: Option<String>) -> TokenAnalyticsPayload {
    let normalized_range = AnalyticsRange::from_input(range);
    let aggregate = aggregate_public_token_analytics(
        analytics_repository::load_public_token_facts(repo),
        current_timestamp(),
        public_range_from_contract(normalized_range),
    );
    TokenAnalyticsPayload {
        backend_status: restored_status(
            "analytics",
            "load_token_analytics",
            BackendEffect::RepositoryRead,
        ),
        range: normalized_range,
        total_tokens: aggregate.total_tokens,
        avg_per_session: aggregate.avg_per_session,
        input_pct: aggregate.input_pct,
        output_pct: aggregate.output_pct,
        reasoning_pct: aggregate.reasoning_pct,
        input_total: aggregate.input_total,
        output_total: aggregate.output_total,
        reasoning_total: aggregate.reasoning_total,
        series: aggregate
            .series
            .into_iter()
            .map(|day| TokenDaySeriesPayload {
                date: day.date,
                input_tokens: day.input_tokens,
                output_tokens: day.output_tokens,
                reasoning_tokens: day.reasoning_tokens,
                total_tokens: day.total_tokens,
                cumulative: day.cumulative,
            })
            .collect(),
    }
}

/// 读取工具分析的用户动作边界，只聚合公开 rollout JSONL function_call 事实。
pub fn load_tool_analytics(repo: &Repository, range: Option<String>) -> ToolAnalyticsPayload {
    let normalized_range = AnalyticsRange::from_input(range);
    let aggregate = aggregate_public_tool_analytics(
        analytics_repository::load_public_tool_call_facts(repo),
        current_timestamp(),
        public_range_from_contract(normalized_range),
    );
    ToolAnalyticsPayload {
        backend_status: restored_status(
            "analytics",
            "load_tool_analytics",
            BackendEffect::RepositoryRead,
        ),
        range: normalized_range,
        total_calls: aggregate.total_calls,
        distinct_count: aggregate.distinct_count,
        search_count: aggregate.search_count,
        edit_count: aggregate.edit_count,
        top_tools: aggregate
            .top_tools
            .into_iter()
            .map(|item| ToolRankItemPayload {
                path: item.path,
                count: item.count,
            })
            .collect(),
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
        backend_status: restored_status(
            "analytics",
            "load_change_analytics",
            BackendEffect::RepositoryRead,
        ),
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
