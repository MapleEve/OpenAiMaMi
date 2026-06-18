use crate::application::usecase;
use crate::contracts::{CoreEnvelope, MysteryRouteGrant};
use crate::repository::Repository;
use std::sync::Mutex;
use tauri::State;

#[tauri::command]
pub fn get_mystery_unlock_grants(
    repo: State<'_, Mutex<Repository>>,
) -> Result<CoreEnvelope<Vec<MysteryRouteGrant>>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::mystery::get_mystery_unlock_grants(&repo)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}

#[tauri::command]
pub fn merge_mystery_unlock_grants(
    repo: State<'_, Mutex<Repository>>,
    grants: Vec<MysteryRouteGrant>,
) -> Result<CoreEnvelope<Vec<MysteryRouteGrant>>, String> {
    let repo = repo.lock().map_err(|error| error.to_string())?;
    usecase::mystery::merge_mystery_unlock_grants(&repo, grants)
        .map(CoreEnvelope::ok)
        .map_err(|error| error.to_string())
}
