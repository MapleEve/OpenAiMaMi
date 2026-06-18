use crate::contracts::MysteryRouteGrant;
use crate::core::error::CoreError;
use crate::repository::settings as settings_repository;
use crate::repository::Repository;
use std::collections::BTreeMap;

// mystery usecase owning settings.json 中 unlock grant 的清理、合并和持久化事务。
pub fn get_mystery_unlock_grants(repo: &Repository) -> Result<Vec<MysteryRouteGrant>, CoreError> {
    let now_ms = current_epoch_ms();
    let grants = active_normalized_grants(
        settings_repository::load_mystery_unlock_grants(repo)?,
        now_ms,
    );
    settings_repository::save_mystery_unlock_grants(repo, grants.clone())?;
    Ok(grants)
}

pub fn merge_mystery_unlock_grants(
    repo: &Repository,
    grants: Vec<MysteryRouteGrant>,
) -> Result<Vec<MysteryRouteGrant>, CoreError> {
    let now_ms = current_epoch_ms();
    let mut merged = BTreeMap::<String, MysteryRouteGrant>::new();

    for grant in active_normalized_grants(
        settings_repository::load_mystery_unlock_grants(repo)?,
        now_ms,
    ) {
        merged.insert(grant.route.clone(), grant);
    }

    for grant in active_normalized_grants(grants, now_ms) {
        merged
            .entry(grant.route.clone())
            .and_modify(|item| {
                if grant.epoch_ms >= item.epoch_ms {
                    *item = grant.clone();
                }
            })
            .or_insert(grant);
    }

    let output = merged.into_values().collect::<Vec<_>>();
    settings_repository::save_mystery_unlock_grants(repo, output.clone())?;
    Ok(output)
}

fn active_normalized_grants(grants: Vec<MysteryRouteGrant>, now_ms: i64) -> Vec<MysteryRouteGrant> {
    grants
        .into_iter()
        .filter_map(|grant| {
            let route = normalize_mystery_route(&grant.route);
            if route.is_empty() || grant.epoch_ms < now_ms {
                return None;
            }
            Some(MysteryRouteGrant { route, ..grant })
        })
        .collect()
}

fn current_epoch_ms() -> i64 {
    chrono::Utc::now().timestamp_millis()
}

fn normalize_mystery_route(route: &str) -> String {
    route.trim().trim_matches('/').to_string()
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::contracts::AppSettingsFile;

    #[test]
    fn get_mystery_unlock_grants_filters_expired_normalizes_and_persists_cleanup() {
        let repo = Repository::with_temp_file_system("mystery-grants-filter");
        let now_ms = current_epoch_ms();
        let settings = AppSettingsFile {
            mystery_unlock_grants: vec![
                MysteryRouteGrant {
                    route: "/route-from-registry/".to_string(),
                    epoch_ms: now_ms + 60_000,
                },
                MysteryRouteGrant {
                    route: "expired-route".to_string(),
                    epoch_ms: now_ms - 60_000,
                },
            ],
            ..AppSettingsFile::default()
        };
        settings_repository::save_app_settings(&repo, &settings).expect("save settings");

        let grants = get_mystery_unlock_grants(&repo).expect("load grants");

        assert_eq!(
            grants,
            vec![MysteryRouteGrant {
                route: "route-from-registry".to_string(),
                epoch_ms: now_ms + 60_000,
            }]
        );
        assert_eq!(
            settings_repository::load_app_settings(&repo)
                .expect("reload settings")
                .mystery_unlock_grants,
            grants
        );
    }

    #[test]
    fn merge_mystery_unlock_grants_keeps_unknown_routes_and_persists_sorted_latest() {
        let repo = Repository::with_temp_file_system("mystery-grants-merge");
        let now_ms = current_epoch_ms();
        let settings = AppSettingsFile {
            mystery_unlock_grants: vec![
                MysteryRouteGrant {
                    route: "alpha".to_string(),
                    epoch_ms: now_ms + 10_000,
                },
                MysteryRouteGrant {
                    route: "expired-existing".to_string(),
                    epoch_ms: now_ms - 10_000,
                },
            ],
            ..AppSettingsFile::default()
        };
        settings_repository::save_app_settings(&repo, &settings).expect("save settings");

        let grants = merge_mystery_unlock_grants(
            &repo,
            vec![
                MysteryRouteGrant {
                    route: "/beta/".to_string(),
                    epoch_ms: now_ms + 20_000,
                },
                MysteryRouteGrant {
                    route: "alpha".to_string(),
                    epoch_ms: now_ms + 30_000,
                },
                MysteryRouteGrant {
                    route: "route-owned-by-frontend".to_string(),
                    epoch_ms: now_ms + 40_000,
                },
                MysteryRouteGrant {
                    route: "expired-incoming".to_string(),
                    epoch_ms: now_ms - 40_000,
                },
            ],
        )
        .expect("merge grants");

        assert_eq!(
            grants,
            vec![
                MysteryRouteGrant {
                    route: "alpha".to_string(),
                    epoch_ms: now_ms + 30_000,
                },
                MysteryRouteGrant {
                    route: "beta".to_string(),
                    epoch_ms: now_ms + 20_000,
                },
                MysteryRouteGrant {
                    route: "route-owned-by-frontend".to_string(),
                    epoch_ms: now_ms + 40_000,
                },
            ]
        );
        assert_eq!(
            settings_repository::load_app_settings(&repo)
                .expect("reload settings")
                .mystery_unlock_grants,
            grants
        );
    }
}
