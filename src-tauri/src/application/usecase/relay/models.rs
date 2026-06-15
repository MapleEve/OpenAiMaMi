use super::payload::{draft_from_input, model_fetch_warning};
use crate::application::{ports::RelayPlatformPort, service::default_relay_platform};
use crate::contracts::{CoreWarning, RelayProviderDraftInput};
use crate::core::relay as relay_core;
use crate::repository::Repository;

pub fn fetch_relay_models_draft(
    _repo: &Repository,
    input: RelayProviderDraftInput,
) -> (Vec<String>, CoreWarning) {
    let platform = default_relay_platform();
    fetch_relay_models_draft_with_platform(input, &platform)
}

fn fetch_relay_models_draft_with_platform(
    input: RelayProviderDraftInput,
    platform: &impl RelayPlatformPort,
) -> (Vec<String>, CoreWarning) {
    let command = "fetch_relay_models_draft";
    let draft = draft_from_input(&input);
    let result = relay_core::prepare_fetch_models_request(command, &draft)
        .and_then(|request| platform.fetch_models_mock_terminal(&request))
        .and_then(|response_body| relay_core::parse_model_ids(&response_body));

    match result {
        Ok(models) => (models, model_fetch_warning(command)),
        Err(error) => (
            Vec::new(),
            CoreWarning {
                code: format!("relay.{command}.mock_terminal_error"),
                message: error.sanitized_message(),
            },
        ),
    }
}
