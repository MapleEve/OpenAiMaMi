use crate::application::service::current_timestamp;
use crate::core::error::CoreError;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;

// settings-secret usecase 只负责设备标识和远端设备 secret 的 settings 持久化事务。
pub struct NotificationClientSettingsState {
    pub device_id: String,
    pub notifications_since: i64,
}

pub fn get_device_id(repo: &Repository) -> Result<String, CoreError> {
    let mut settings = settings_repository::load_app_settings(repo)?;
    if let Some(id) = settings.device_id.clone() {
        return Ok(id);
    }
    let id = uuid::Uuid::new_v4().to_string();
    settings.device_id = Some(id.clone());
    settings_repository::save_app_settings(repo, &settings)?;
    Ok(id)
}

pub fn get_or_create_notification_client_state(
    repo: &Repository,
) -> Result<NotificationClientSettingsState, CoreError> {
    let mut settings = settings_repository::load_app_settings(repo)?;
    if let Some(device_id) = current_device_id(&settings.device_id) {
        if settings.notifications_since > 0 {
            return Ok(NotificationClientSettingsState {
                device_id,
                notifications_since: settings.notifications_since,
            });
        }
    }

    let device_id = uuid::Uuid::new_v4().to_string();
    let notifications_since = current_timestamp();
    settings.device_id = Some(device_id.clone());
    settings.notifications_since = notifications_since;
    settings_repository::save_app_settings(repo, &settings)?;

    Ok(NotificationClientSettingsState {
        device_id,
        notifications_since,
    })
}

pub fn get_or_create_remote_device_secret(repo: &Repository) -> Result<String, CoreError> {
    let mut settings = settings_repository::load_app_settings(repo)?;
    if let Some(secret) = current_remote_device_secret(&settings.remote_device_secret) {
        return Ok(secret);
    }

    let secret = format!("{}-{}", uuid::Uuid::new_v4(), uuid::Uuid::new_v4());
    settings.remote_device_secret = Some(secret.clone());
    settings_repository::save_app_settings(repo, &settings)?;
    Ok(secret)
}

pub fn import_remote_device_secret_if_empty(
    repo: &Repository,
    secret: String,
) -> Result<(), CoreError> {
    let Some(secret) = normalize_remote_device_secret(&secret) else {
        return Ok(());
    };

    let mut settings = settings_repository::load_app_settings(repo)?;
    if current_remote_device_secret(&settings.remote_device_secret).is_some() {
        return Ok(());
    }

    settings.remote_device_secret = Some(secret);
    settings_repository::save_app_settings(repo, &settings)
}

fn normalize_remote_device_secret(secret: &str) -> Option<String> {
    let trimmed = secret.trim();
    if trimmed.is_empty() {
        None
    } else {
        Some(trimmed.to_string())
    }
}

fn current_device_id(device_id: &Option<String>) -> Option<String> {
    device_id
        .as_deref()
        .and_then(normalize_remote_device_secret)
}

fn current_remote_device_secret(secret: &Option<String>) -> Option<String> {
    secret.as_deref().and_then(normalize_remote_device_secret)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn remote_device_secret_creates_persists_and_reuses_uuid_pair() {
        let repo = Repository::with_temp_file_system("remote-secret-create");

        let secret = get_or_create_remote_device_secret(&repo).expect("create remote secret");

        assert_eq!(secret.len(), 73);
        assert_eq!(secret.chars().filter(|value| *value == '-').count(), 9);
        assert_eq!(
            settings_repository::load_app_settings(&repo)
                .expect("reload settings")
                .remote_device_secret,
            Some(secret.clone())
        );
        assert_eq!(
            get_or_create_remote_device_secret(&repo).expect("reuse remote secret"),
            secret
        );
    }

    #[test]
    fn remote_device_secret_imports_only_when_empty() {
        let repo = Repository::with_temp_file_system("remote-secret-import");

        import_remote_device_secret_if_empty(&repo, "  imported-secret  ".to_string())
            .expect("import secret");
        assert_eq!(
            settings_repository::load_app_settings(&repo)
                .expect("reload settings")
                .remote_device_secret,
            Some("imported-secret".to_string())
        );

        import_remote_device_secret_if_empty(&repo, "replacement-secret".to_string())
            .expect("skip overwrite");
        assert_eq!(
            settings_repository::load_app_settings(&repo)
                .expect("reload settings")
                .remote_device_secret,
            Some("imported-secret".to_string())
        );
    }

    #[test]
    fn remote_device_secret_import_ignores_blank_without_creating_settings() {
        let repo = Repository::with_temp_file_system("remote-secret-blank");

        import_remote_device_secret_if_empty(&repo, "   ".to_string()).expect("ignore blank");

        assert!(!repo.fs().exists(&repo.paths().settings_path));
    }

    #[test]
    fn notification_client_state_creates_and_reuses_settings_pair() {
        let repo = Repository::with_temp_file_system("notification-client-create");

        let created =
            get_or_create_notification_client_state(&repo).expect("create notification state");

        assert!(!created.device_id.is_empty());
        assert!(created.notifications_since > 0);

        let settings = settings_repository::load_app_settings(&repo).expect("reload settings");
        assert_eq!(settings.device_id, Some(created.device_id.clone()));
        assert_eq!(settings.notifications_since, created.notifications_since);

        let reused =
            get_or_create_notification_client_state(&repo).expect("reuse notification state");
        assert_eq!(reused.device_id, created.device_id);
        assert_eq!(reused.notifications_since, created.notifications_since);
    }

    #[test]
    fn notification_client_state_recreates_when_timestamp_missing() {
        let repo = Repository::with_temp_file_system("notification-client-recreate");
        let mut settings = settings_repository::load_app_settings(&repo).expect("load defaults");
        settings.device_id = Some("previous-device".to_string());
        settings.notifications_since = 0;
        settings_repository::save_app_settings(&repo, &settings).expect("seed settings");

        let created =
            get_or_create_notification_client_state(&repo).expect("create missing timestamp");

        assert_ne!(created.device_id, "previous-device");
        assert!(created.notifications_since > 0);
    }
}
