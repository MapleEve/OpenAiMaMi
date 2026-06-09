use crate::application::service::{pending_status as make_pending_status, restored_status};
use crate::contracts::accounts::{
    AccountExportPayload, AccountImportPayload, AccountImportPreviewPayload, AccountMonitorPayload,
    LogoutPayload, RemovePayload, SwitchPayload,
};
use crate::contracts::{BackendEffect, BackendSkeletonStatus};
use crate::core::error::CoreError;
use crate::repository::accounts as accounts_repository;
use crate::repository::Repository;

const MODULE: &str = "accounts";
const PENDING_NOTE: &str =
    "账号后端能力当前仅补齐 IPC 空骨架，真实文件读写与平台副作用等待证据补齐。";

// 账号监听需要浏览器会话和运行时事件，这里只保留已登记的待恢复边界。
pub fn begin_add_account_attach_monitor(
    _repo: &Repository,
) -> Result<AccountMonitorPayload, CoreError> {
    Ok(AccountMonitorPayload {
        backend_status: pending_status("begin_add_account_attach_monitor"),
    })
}

pub fn switch_account(repo: &Repository, account_key: String) -> Result<SwitchPayload, CoreError> {
    accounts_repository::switch_account(repo, restored("switch_account"), account_key)
}

pub fn switch_account_and_restart_codex(
    repo: &Repository,
    account_key: String,
) -> Result<SwitchPayload, CoreError> {
    let mut payload = accounts_repository::switch_account(
        repo,
        restored("switch_account_and_restart_codex"),
        account_key,
    )?;
    payload
        .backend_status
        .note
        .push_str(" 当前公开后端已恢复账号文件切换；外部程序重启仍由平台层后续补齐。");
    Ok(payload)
}

pub fn remove_accounts(
    repo: &Repository,
    account_keys: Vec<String>,
) -> Result<RemovePayload, CoreError> {
    accounts_repository::remove_accounts(repo, restored("remove_accounts"), account_keys)
}

pub fn logout(repo: &Repository) -> Result<LogoutPayload, CoreError> {
    accounts_repository::logout(repo, restored("logout"))
}

pub fn export_accounts_to_file(
    repo: &Repository,
    target_path: String,
    account_keys: Option<Vec<String>>,
) -> Result<AccountExportPayload, CoreError> {
    accounts_repository::export_accounts_to_file(
        repo,
        restored("export_accounts_to_file"),
        target_path,
        account_keys,
    )
}

pub fn preview_account_import(
    repo: &Repository,
    file_path: String,
) -> Result<AccountImportPreviewPayload, CoreError> {
    accounts_repository::preview_account_import(repo, restored("preview_account_import"), file_path)
}

pub fn import_accounts_from_file(
    repo: &Repository,
    file_path: String,
    overwrite_existing: bool,
    selected_keys: Option<Vec<String>>,
) -> Result<AccountImportPayload, CoreError> {
    accounts_repository::import_accounts_from_file(
        repo,
        restored("import_accounts_from_file"),
        file_path,
        overwrite_existing,
        selected_keys,
    )
}

fn restored(command: &str) -> BackendSkeletonStatus {
    restored_status(MODULE, command, BackendEffect::NoOp)
}

fn pending_status(command: &str) -> BackendSkeletonStatus {
    make_pending_status(MODULE, command, PENDING_NOTE)
}
