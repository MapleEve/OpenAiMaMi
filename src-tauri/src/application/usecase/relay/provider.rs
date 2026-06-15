use super::payload::{
    active_provider_id, draft_from_input, provider_payload_from_domain, repository_error_warning,
    repository_warning, state_payload_from_domain, state_payload_from_repo,
};
use crate::contracts::{
    CoreWarning, RelayProviderDraftInput, RelayProviderPayload, RelayStatePayload,
};
use crate::core::relay as relay_core;
use crate::repository::{relay as relay_repository, Repository};
use serde_json::Value;

pub fn upsert_relay_provider(
    repo: &Repository,
    input: RelayProviderDraftInput,
) -> (RelayProviderPayload, CoreWarning) {
    let command = "upsert_relay_provider";
    let draft = draft_from_input(&input);
    let provider = relay_core::provider_from_draft(command, &draft, None, None);
    match relay_repository::upsert_provider(repo, provider.clone()) {
        Ok(state) => {
            let active = active_provider_id(&state).as_ref() == Some(&provider.id);
            (
                provider_payload_from_domain(
                    command,
                    &provider,
                    active,
                    input.extra_headers.clone().unwrap_or(Value::Null),
                ),
                repository_warning(command),
            )
        }
        Err(_) => (
            provider_payload_from_domain(
                command,
                &provider,
                false,
                input.extra_headers.clone().unwrap_or(Value::Null),
            ),
            repository_error_warning(command),
        ),
    }
}

pub fn delete_relay_provider(
    repo: &Repository,
    provider_id: String,
) -> (RelayStatePayload, CoreWarning) {
    let command = "delete_relay_provider";
    match relay_repository::delete_provider(repo, &provider_id) {
        Ok(state) => (
            state_payload_from_domain(command, state),
            repository_warning(command),
        ),
        Err(_) => (
            state_payload_from_repo(repo, command),
            repository_error_warning(command),
        ),
    }
}

pub fn activate_relay_provider(
    repo: &Repository,
    provider_id: String,
    ide: String,
) -> (RelayStatePayload, CoreWarning) {
    let command = "activate_relay_provider";
    match relay_repository::activate_provider(repo, &provider_id, &ide) {
        Ok(state) => (
            state_payload_from_domain(command, state),
            repository_warning(command),
        ),
        Err(_) => (
            state_payload_from_repo(repo, command),
            repository_error_warning(command),
        ),
    }
}

pub fn deactivate_relay_provider(
    repo: &Repository,
    provider_id: String,
    ide: String,
) -> (RelayStatePayload, CoreWarning) {
    let command = "deactivate_relay_provider";
    match relay_repository::deactivate_provider(repo, &provider_id, &ide) {
        Ok(state) => (
            state_payload_from_domain(command, state),
            repository_warning(command),
        ),
        Err(_) => (
            state_payload_from_repo(repo, command),
            repository_error_warning(command),
        ),
    }
}

pub fn set_relay_provider_network(
    repo: &Repository,
    provider_id: String,
    network: String,
) -> (RelayProviderPayload, CoreWarning) {
    let command = "set_relay_provider_network";
    let input = RelayProviderDraftInput {
        provider_id: Some(provider_id),
        network: Some(network.clone()),
        ..RelayProviderDraftInput::default()
    };
    let draft = draft_from_input(&input);
    let fallback = relay_core::provider_from_draft(command, &draft, None, None);
    match relay_repository::set_provider_network(repo, &fallback.id, &network) {
        Ok(Some(provider)) => (
            provider_payload_from_domain(command, &provider, false, Value::Null),
            repository_warning(command),
        ),
        Ok(None) => (
            provider_payload_from_domain(command, &fallback, false, Value::Null),
            repository_warning(command),
        ),
        Err(_) => (
            provider_payload_from_domain(command, &fallback, false, Value::Null),
            repository_error_warning(command),
        ),
    }
}
