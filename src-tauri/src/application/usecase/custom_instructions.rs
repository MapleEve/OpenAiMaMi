use crate::application::service;
use crate::contracts::{
    CustomInstructionCurrentState, CustomInstructionHistoryAction, CustomInstructionHistoryEntry,
    CustomInstructionPreviewPayload, CustomInstructionProtectionState,
    CustomInstructionStatePayload,
};
use crate::core::error::CoreError;
use crate::core::model::custom_instructions::{
    CustomInstructionHistoryAction as DomainHistoryAction, CustomInstructionHistorySnapshot,
    CustomInstructionProtection, ParsedCustomInstructionBlock, HISTORY_LIMIT,
};
use crate::core::parser::custom_instructions as custom_instruction_core;
use crate::repository::{custom_instructions as custom_instruction_repository, Repository};

pub fn load_state(repo: &Repository) -> Result<CustomInstructionStatePayload, CoreError> {
    custom_instruction_repository::ensure_storage(repo)?;
    let parsed = read_parsed_global_file(repo)?;
    let history = custom_instruction_repository::load_history(repo)?;
    Ok(build_state_payload(repo, parsed, history))
}

pub fn preview_apply(
    repo: &Repository,
    content: String,
) -> Result<CustomInstructionPreviewPayload, CoreError> {
    custom_instruction_repository::ensure_storage(repo)?;
    custom_instruction_core::validate_managed_content(&content)?;
    let parsed = read_parsed_global_file(repo)?;
    custom_instruction_core::ensure_not_protected(&parsed)?;
    let resulting_content =
        custom_instruction_core::compose_with_managed_content(&parsed, &content);

    Ok(CustomInstructionPreviewPayload {
        global_path: custom_instruction_repository::global_path(repo),
        protection_state: to_contract_protection_state(parsed.protection_state),
        issue_message: parsed.issue_message,
        current_managed_content: parsed.managed_content,
        next_managed_content: custom_instruction_core::normalize_managed_content(&content),
        resulting_content,
    })
}

pub fn apply(
    repo: &Repository,
    content: String,
    template_code: Option<String>,
    template_title: Option<String>,
    source: Option<String>,
) -> Result<CustomInstructionStatePayload, CoreError> {
    custom_instruction_repository::ensure_storage(repo)?;
    custom_instruction_core::validate_managed_content(&content)?;
    let parsed = read_parsed_global_file(repo)?;
    custom_instruction_core::ensure_not_protected(&parsed)?;
    let next_content = custom_instruction_core::compose_with_managed_content(&parsed, &content);

    if next_content != parsed.raw_content {
        save_history_snapshot(
            repo,
            DomainHistoryAction::Apply,
            source.unwrap_or_else(|| "manual".to_string()),
            template_code,
            template_title,
            parsed.raw_content,
        )?;
        custom_instruction_repository::write_global_file(repo, &next_content)?;
    }

    load_state(repo)
}

pub fn clear_block(repo: &Repository) -> Result<CustomInstructionStatePayload, CoreError> {
    custom_instruction_repository::ensure_storage(repo)?;
    let parsed = read_parsed_global_file(repo)?;
    custom_instruction_core::ensure_not_protected(&parsed)?;

    if !parsed.managed_block_present {
        return load_state(repo);
    }

    let next_content = custom_instruction_core::clear_managed_content(&parsed);
    if next_content != parsed.raw_content {
        save_history_snapshot(
            repo,
            DomainHistoryAction::Clear,
            "clear".to_string(),
            None,
            None,
            parsed.raw_content,
        )?;
        if next_content.is_empty() {
            custom_instruction_repository::remove_global_file(repo)?;
        } else {
            custom_instruction_repository::write_global_file(repo, &next_content)?;
        }
    }

    load_state(repo)
}

pub fn rollback(
    repo: &Repository,
    history_id: String,
) -> Result<CustomInstructionStatePayload, CoreError> {
    custom_instruction_repository::ensure_storage(repo)?;
    let snapshot = custom_instruction_repository::find_history_snapshot(repo, &history_id)?
        .ok_or_else(|| CoreError::NotFound(format!("历史记录不存在：{history_id}")))?;
    let parsed = read_parsed_global_file(repo)?;
    custom_instruction_core::ensure_not_protected(&parsed)?;

    save_history_snapshot(
        repo,
        DomainHistoryAction::Rollback,
        "rollback".to_string(),
        snapshot.template_code.clone(),
        snapshot.template_title.clone(),
        parsed.raw_content,
    )?;

    if snapshot.full_content.is_empty() {
        custom_instruction_repository::remove_global_file(repo)?;
    } else {
        custom_instruction_repository::write_global_file(repo, &snapshot.full_content)?;
    }

    load_state(repo)
}

fn read_parsed_global_file(repo: &Repository) -> Result<ParsedCustomInstructionBlock, CoreError> {
    let (file_exists, raw_content) = custom_instruction_repository::read_global_file(repo)?;
    Ok(custom_instruction_core::parse_managed_block(
        file_exists,
        raw_content,
    ))
}

fn save_history_snapshot(
    repo: &Repository,
    action: DomainHistoryAction,
    source: String,
    template_code: Option<String>,
    template_title: Option<String>,
    full_content: String,
) -> Result<(), CoreError> {
    let created_at = service::current_timestamp();
    let random = uuid::Uuid::new_v4().simple().to_string();
    let snapshot = CustomInstructionHistorySnapshot::new(
        format!("{created_at}-{}", &random[..8]),
        created_at,
        action,
        source,
        template_code,
        template_title,
        full_content,
    );
    custom_instruction_repository::write_history_snapshot(repo, &snapshot)?;
    custom_instruction_repository::trim_history(repo, HISTORY_LIMIT)
}

fn build_state_payload(
    repo: &Repository,
    parsed: ParsedCustomInstructionBlock,
    history: Vec<CustomInstructionHistorySnapshot>,
) -> CustomInstructionStatePayload {
    let latest = history.first();
    CustomInstructionStatePayload {
        current: CustomInstructionCurrentState {
            global_path: custom_instruction_repository::global_path(repo),
            file_exists: parsed.file_exists,
            managed_block_present: parsed.managed_block_present,
            protection_state: to_contract_protection_state(parsed.protection_state),
            issue_message: parsed.issue_message,
            managed_content: parsed.managed_content,
            last_applied_at: latest.map(|item| item.created_at),
            last_template_code: latest.and_then(|item| item.template_code.clone()),
            last_template_title: latest.and_then(|item| item.template_title.clone()),
        },
        history: history.iter().map(to_contract_history_entry).collect(),
    }
}

fn to_contract_history_entry(
    snapshot: &CustomInstructionHistorySnapshot,
) -> CustomInstructionHistoryEntry {
    CustomInstructionHistoryEntry {
        id: snapshot.id.clone(),
        created_at: snapshot.created_at,
        action: to_contract_history_action(snapshot.action.clone()),
        source: snapshot.source.clone(),
        template_code: snapshot.template_code.clone(),
        template_title: snapshot.template_title.clone(),
    }
}

fn to_contract_history_action(action: DomainHistoryAction) -> CustomInstructionHistoryAction {
    match action {
        DomainHistoryAction::Apply => CustomInstructionHistoryAction::Apply,
        DomainHistoryAction::Clear => CustomInstructionHistoryAction::Clear,
        DomainHistoryAction::Rollback => CustomInstructionHistoryAction::Rollback,
    }
}

fn to_contract_protection_state(
    state: CustomInstructionProtection,
) -> CustomInstructionProtectionState {
    match state {
        CustomInstructionProtection::Ready => CustomInstructionProtectionState::Ready,
        CustomInstructionProtection::Unmanaged => CustomInstructionProtectionState::Unmanaged,
        CustomInstructionProtection::Protected => CustomInstructionProtectionState::Protected,
    }
}
