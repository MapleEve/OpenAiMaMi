use std::collections::HashMap;
use std::sync::Mutex;

// single-flight core 只提供领域级操作收敛语义，不拥有业务事务、平台副作用或 IPC 返回。
#[derive(Debug, Default)]
pub(crate) struct SingleFlightRegistry {
    inner: Mutex<SingleFlightState>,
}

pub(crate) trait OperationCoalescingPort {
    fn begin(&self, operation_key: &str, now_epoch_seconds: i64) -> OperationStart;
    fn complete(&self, token: &SingleFlightToken, now_epoch_seconds: i64) -> OperationFinish;
    fn abort(&self, token: &SingleFlightToken, now_epoch_seconds: i64) -> OperationFinish;
    fn snapshot(&self, operation_key: &str) -> Option<SingleFlightSnapshot>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct SingleFlightToken {
    operation_key: String,
    sequence: u64,
    started_at_epoch_seconds: i64,
}

impl SingleFlightToken {
    pub(crate) fn operation_key(&self) -> &str {
        &self.operation_key
    }

    pub(crate) fn sequence(&self) -> u64 {
        self.sequence
    }

    pub(crate) fn started_at_epoch_seconds(&self) -> i64 {
        self.started_at_epoch_seconds
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) enum OperationStart {
    Started(SingleFlightToken),
    Coalesced(SingleFlightToken),
}

impl OperationStart {
    pub(crate) fn token(&self) -> &SingleFlightToken {
        match self {
            Self::Started(token) | Self::Coalesced(token) => token,
        }
    }

    pub(crate) fn is_coalesced(&self) -> bool {
        matches!(self, Self::Coalesced(_))
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) enum OperationFinish {
    Accepted {
        sequence: u64,
        finished_at_epoch_seconds: i64,
        state: OperationState,
    },
    Stale {
        attempted_sequence: u64,
        accepted_sequence: Option<u64>,
    },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub(crate) enum OperationState {
    Running,
    Completed,
    Aborted,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub(crate) struct SingleFlightSnapshot {
    pub(crate) operation_key: String,
    pub(crate) sequence: u64,
    pub(crate) state: OperationState,
    pub(crate) started_at_epoch_seconds: i64,
    pub(crate) finished_at_epoch_seconds: Option<i64>,
}

#[derive(Debug, Default)]
struct SingleFlightState {
    next_sequence: u64,
    operations: HashMap<String, OperationSlot>,
}

#[derive(Debug, Clone)]
struct OperationSlot {
    token: SingleFlightToken,
    state: OperationState,
    finished_at_epoch_seconds: Option<i64>,
}

impl OperationCoalescingPort for SingleFlightRegistry {
    fn begin(&self, operation_key: &str, now_epoch_seconds: i64) -> OperationStart {
        let mut state = self.lock_state();
        if let Some(slot) = state.operations.get(operation_key) {
            if slot.state == OperationState::Running {
                return OperationStart::Coalesced(slot.token.clone());
            }
        }

        let sequence = state.next_sequence();
        let token = SingleFlightToken {
            operation_key: operation_key.to_string(),
            sequence,
            started_at_epoch_seconds: now_epoch_seconds,
        };
        state.operations.insert(
            token.operation_key.clone(),
            OperationSlot {
                token: token.clone(),
                state: OperationState::Running,
                finished_at_epoch_seconds: None,
            },
        );
        OperationStart::Started(token)
    }

    fn complete(&self, token: &SingleFlightToken, now_epoch_seconds: i64) -> OperationFinish {
        self.finish(token, now_epoch_seconds, OperationState::Completed)
    }

    fn abort(&self, token: &SingleFlightToken, now_epoch_seconds: i64) -> OperationFinish {
        self.finish(token, now_epoch_seconds, OperationState::Aborted)
    }

    fn snapshot(&self, operation_key: &str) -> Option<SingleFlightSnapshot> {
        let state = self.lock_state();
        state
            .operations
            .get(operation_key)
            .map(OperationSlot::snapshot)
    }
}

impl SingleFlightRegistry {
    fn lock_state(&self) -> std::sync::MutexGuard<'_, SingleFlightState> {
        self.inner
            .lock()
            .unwrap_or_else(|poisoned| poisoned.into_inner())
    }

    fn finish(
        &self,
        token: &SingleFlightToken,
        now_epoch_seconds: i64,
        next_state: OperationState,
    ) -> OperationFinish {
        let mut state = self.lock_state();
        let Some(slot) = state.operations.get_mut(token.operation_key()) else {
            return OperationFinish::Stale {
                attempted_sequence: token.sequence(),
                accepted_sequence: None,
            };
        };

        if slot.token.sequence() != token.sequence() {
            return OperationFinish::Stale {
                attempted_sequence: token.sequence(),
                accepted_sequence: Some(slot.token.sequence()),
            };
        }

        slot.state = next_state;
        slot.finished_at_epoch_seconds = Some(now_epoch_seconds);
        OperationFinish::Accepted {
            sequence: token.sequence(),
            finished_at_epoch_seconds: now_epoch_seconds,
            state: next_state,
        }
    }
}

impl SingleFlightState {
    fn next_sequence(&mut self) -> u64 {
        self.next_sequence = self.next_sequence.saturating_add(1);
        self.next_sequence
    }
}

impl OperationSlot {
    fn snapshot(&self) -> SingleFlightSnapshot {
        SingleFlightSnapshot {
            operation_key: self.token.operation_key.clone(),
            sequence: self.token.sequence,
            state: self.state,
            started_at_epoch_seconds: self.token.started_at_epoch_seconds,
            finished_at_epoch_seconds: self.finished_at_epoch_seconds,
        }
    }
}

// 旧边界名保留给架构文档和下游 owner 检查，真实收敛能力由 SingleFlightRegistry 承载。
pub(crate) struct OperationCoalescingBoundary;

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn duplicate_begin_coalesces_to_existing_token() {
        let registry = SingleFlightRegistry::default();

        let first = registry.begin("usage-refresh", 100);
        let second = registry.begin("usage-refresh", 101);

        assert!(matches!(first, OperationStart::Started(_)));
        assert!(second.is_coalesced());
        assert_eq!(first.token().sequence(), second.token().sequence());
        assert_eq!(second.token().started_at_epoch_seconds(), 100);
    }

    #[test]
    fn completed_operation_allows_next_sequence() {
        let registry = SingleFlightRegistry::default();
        let first = registry.begin("runtime-reload", 200).token().clone();

        assert_eq!(
            registry.complete(&first, 205),
            OperationFinish::Accepted {
                sequence: 1,
                finished_at_epoch_seconds: 205,
                state: OperationState::Completed,
            }
        );

        let second = registry.begin("runtime-reload", 210);

        assert!(matches!(second, OperationStart::Started(_)));
        assert_eq!(second.token().sequence(), 2);
    }

    #[test]
    fn stale_finish_cannot_overwrite_newer_sequence() {
        let registry = SingleFlightRegistry::default();
        let first = registry.begin("mutation", 300).token().clone();
        let _ = registry.complete(&first, 301);
        let second = registry.begin("mutation", 302).token().clone();

        assert_eq!(
            registry.complete(&first, 303),
            OperationFinish::Stale {
                attempted_sequence: 1,
                accepted_sequence: Some(2),
            }
        );
        assert_eq!(
            registry
                .snapshot("mutation")
                .map(|snapshot| snapshot.sequence),
            Some(second.sequence())
        );
    }

    #[test]
    fn abort_records_state_and_allows_restart() {
        let registry = SingleFlightRegistry::default();
        let first = registry.begin("event-replay", 400).token().clone();

        assert_eq!(
            registry.abort(&first, 401),
            OperationFinish::Accepted {
                sequence: 1,
                finished_at_epoch_seconds: 401,
                state: OperationState::Aborted,
            }
        );
        assert_eq!(
            registry
                .snapshot("event-replay")
                .map(|snapshot| snapshot.state),
            Some(OperationState::Aborted)
        );

        let second = registry.begin("event-replay", 402);

        assert_eq!(second.token().sequence(), 2);
        assert!(!second.is_coalesced());
    }
}
