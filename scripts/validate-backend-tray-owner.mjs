import { existsSync, readFileSync } from "node:fs";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const failures = [];

const ownerFiles = [
  "src-tauri/src/contracts/tray.rs",
  "src-tauri/src/application/usecase/tray.rs",
  "src-tauri/src/commands/tray.rs",
  "src-tauri/src/core/model/tray.rs",
  "src-tauri/src/core/tray.rs",
  "src-tauri/src/platform/tray.rs",
  "src-tauri/src/repository/tray.rs",
];

const windowsAcceptedTrayTargets = [
  "create_tray_icon_window",
  "create_or_refresh_tray_menu",
  "handle_tray_menu_event",
  "tray_relay_usage_quota_model",
];

const currentSourceExtraCommands = ["set_tray_locale"];
const currentSourceExtraEventIds = ["tray_router_open"];
const allTrayCommands = [...windowsAcceptedTrayTargets, ...currentSourceExtraCommands];

const forbiddenRustSideEffects = [
  "TrayIconBuilder",
  "Shell_NotifyIcon",
  ".set_menu(",
  ".set_icon(",
  ".set_tooltip(",
  ".set_title(",
  ".emit(",
  "focus_main_window",
  "exit_app",
  "process::exit",
  "std::process::exit",
];

const paths = {
  windowsGate:
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/gate-report.json",
  windowsManifest:
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/manifest.json",
  macosGate:
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-tray/gate-report.json",
  evidenceMap: "docs/reconstruction/tray-current-source-evidence-map.md",
};

function repoPath(path) {
  return join(repoRoot, path);
}

function readText(path) {
  const fullPath = repoPath(path);
  if (!existsSync(fullPath)) {
    failures.push(`缺少文件：${path}`);
    return "";
  }
  return readFileSync(fullPath, "utf8");
}

function readJson(path) {
  const text = readText(path);
  if (!text) return null;
  try {
    return JSON.parse(text);
  } catch (error) {
    failures.push(`${path} 不是合法 JSON：${error.message}`);
    return null;
  }
}

function requireIncludes(path, snippets) {
  const text = readText(path);
  for (const snippet of snippets) {
    if (!text.includes(snippet)) {
      failures.push(`${path} 缺少片段：${snippet}`);
    }
  }
}

function requireNotIncludes(path, snippets, reason) {
  const text = readText(path);
  for (const snippet of snippets) {
    if (text.includes(snippet)) {
      failures.push(`${path} 不允许出现 ${snippet}：${reason}`);
    }
  }
}

function readProductionRust(path) {
  return readText(path).split(/\n#\[cfg\(test\)\]/u)[0] ?? "";
}

function requireProductionNotIncludes(path, snippets, reason) {
  const text = readProductionRust(path);
  for (const snippet of snippets) {
    if (text.includes(snippet)) {
      failures.push(`${path} 生产路径不允许出现 ${snippet}：${reason}`);
    }
  }
}

for (const file of ownerFiles) {
  readText(file);
}

const windowsGate = readJson(paths.windowsGate);
if (windowsGate) {
  if (windowsGate.status !== "accepted_full_leaf_100_windows_ida") {
    failures.push(`${paths.windowsGate} status=${String(windowsGate.status)}`);
  }
  for (const target of windowsAcceptedTrayTargets) {
    if (!windowsGate.acceptedTargets?.includes(target)) {
      failures.push(`${paths.windowsGate} acceptedTargets 缺少 ${target}`);
    }
  }
  for (const target of currentSourceExtraCommands) {
    if (windowsGate.acceptedTargets?.includes(target)) {
      failures.push(`${paths.windowsGate} 不应把 current-source extra ${target} 登记为 Windows accepted target`);
    }
  }
  const routerDelta = windowsGate.productDelta?.find?.(
    (item) => item.id === "tray_router_open",
  );
  if (
    routerDelta?.status !==
    "source archive_extra_classifier_not_upstream_windows_menu_item"
  ) {
    failures.push(`${paths.windowsGate} 缺少 tray_router_open current-source extra 边界`);
  }
}

const windowsManifest = readJson(paths.windowsManifest);
if (windowsManifest) {
  if (windowsManifest.platformPolicy?.doNotInferWindowsFromMacOS !== true) {
    failures.push(`${paths.windowsManifest} 必须保留 doNotInferWindowsFromMacOS=true`);
  }
  if (windowsManifest.platformPolicy?.windowsIndependent !== true) {
    failures.push(`${paths.windowsManifest} 必须保留 windowsIndependent=true`);
  }
}

const macosGate = readJson(paths.macosGate);
if (macosGate && !String(macosGate.status).includes("macos_tray_via_system_shell_init")) {
  failures.push(`${paths.macosGate} 未指向 macOS system-shell-init tray reducer`);
}

requireIncludes("src-tauri/src/contracts/mod.rs", [
  "pub mod tray;",
  "pub use tray::*;",
]);
requireIncludes("src-tauri/src/application/usecase/mod.rs", ["pub mod tray;"]);
requireIncludes("src-tauri/src/commands/mod.rs", ["pub mod tray;"]);
requireIncludes("src-tauri/src/core/model/mod.rs", ["pub mod tray;"]);
requireIncludes("src-tauri/src/core/mod.rs", ["pub mod tray;"]);
requireIncludes("src-tauri/src/repository/mod.rs", ["pub mod tray;"]);

requireIncludes("src-tauri/src/application/ports.rs", [
  "TrayPlatformCapability",
  "trait TrayPlatformPort",
  "fn tray_capability(&self) -> TrayPlatformCapability;",
]);
requireIncludes("src-tauri/src/platform/tray.rs", [
  "pub(crate) struct TrayPlatformAdapter",
  "impl TrayPlatformPort for TrayPlatformAdapter",
  "creates_native_icon: false",
  "emits_navigation_event: false",
]);
requireIncludes("src-tauri/src/contracts/tray.rs", [
  "pub struct TrayMenuEventInput",
  "pub struct TrayMenuSnapshotPayload",
  "pub struct TrayMenuEventPayload",
  "pub struct TrayLocalePayload",
  "pub struct TrayRelayUsageQuotaModelPayload",
]);
requireIncludes("src-tauri/src/core/tray.rs", [
  "classify_tray_menu_event",
  "tray_router_open",
  "source_archive_extra: event_id == \"tray_router_open\"",
  "quota_model_from_public_fact",
  "empty_tray_quota_model",
  "empty_menu_item_keys",
]);
requireNotIncludes(
  "src-tauri/src/core/tray.rs",
  ['("tray_router_open"', "tray.routerOpen"],
  "tray_router_open 只能作为 current-source classifier extra，不能作为 Windows accepted 菜单项",
);
requireIncludes("src-tauri/src/application/usecase/tray.rs", [
  "tray_core::classify_tray_menu_event",
  "tray_repository::load_tray_quota_fact(repo)",
  "tray_core::quota_model_from_public_fact",
  "tray_repository_status(platform, \"tray_relay_usage_quota_model\")",
  "restored: true",
  "repository_checked: true",
  "repository_path_known: true",
  "BackendEffect::RepositoryRead",
  "tray_status(platform, \"handle_tray_menu_event\")",
  "BackendEffect::Pending",
]);
requireIncludes("src-tauri/src/commands/tray.rs", [
  "CoreEnvelope::ok",
  "TrayPlatformAdapter",
  "State<'_, Mutex<Repository>>",
  "pub fn create_or_refresh_tray_menu(\n    repo: State<'_, Mutex<Repository>>",
  "usecase::tray::create_or_refresh_tray_menu(&repo, &platform)",
  "pub fn tray_relay_usage_quota_model(\n    repo: State<'_, Mutex<Repository>>",
  "usecase::tray::tray_relay_usage_quota_model(&repo, &platform)",
]);
requireIncludes("src-tauri/src/repository/tray.rs", [
  "pub(crate) struct TrayRepository",
  "pub(crate) fn load_tray_quota_fact(repo: &Repository)",
  "accounts_repository::load_registry(repo)",
  "relay_repository::load_relay_state(repo)",
  "quota_repository::load_latest_public_quota_point(repo",
  "RELAY_DEFAULT_IDE",
]);
requireIncludes("src-tauri/src/repository/quota.rs", [
  "pub(crate) fn load_latest_public_quota_point",
  "不触发历史压缩写回",
]);

requireProductionNotIncludes(
  "src-tauri/src/application/usecase/tray.rs",
  [
    "load_public_quota_history",
    "compact_quota_history_if_needed",
    "write_string",
    "create_dir_all",
    "save_registry",
    "usecase::accounts::switch_account",
    "accounts_repository::copy_snapshot_to_auth",
    "accounts_repository::backup_auth_if_present",
    "activate_provider",
    "set_router_enabled",
    "upsert_provider",
    "delete_provider",
    "record_provider_health",
  ],
  "tray usecase 只能编排公开文件事实读取，不触发写入、账号切换或 relay mutation",
);
requireProductionNotIncludes(
  "src-tauri/src/repository/tray.rs",
  [
    "load_public_quota_history",
    "compact_quota_history_if_needed",
    "write_string",
    "create_dir_all",
    "save_registry",
    "usecase::accounts::switch_account",
    "accounts_repository::copy_snapshot_to_auth",
    "accounts_repository::backup_auth_if_present",
    "activate_provider",
    "set_router_enabled",
    "upsert_provider",
    "delete_provider",
    "record_provider_health",
  ],
  "tray repository 只能组合公开文件只读事实，不触发写入、账号切换或 relay mutation",
);

for (const command of allTrayCommands) {
  requireIncludes("src-tauri/src/lib.rs", [`commands::tray::${command}`]);
  requireIncludes("src-tauri/src/commands/tray.rs", [`pub fn ${command}`]);
}

for (const file of ownerFiles) {
  const text = readText(file);
  for (const forbidden of forbiddenRustSideEffects) {
    if (text.includes(forbidden)) {
      failures.push(`${file} 不允许出现真实托盘副作用：${forbidden}`);
    }
  }
}

requireIncludes(paths.evidenceMap, [
  "# tray current-source 证据映射",
  "Windows accepted tray target",
  "current-source extra",
  "`create_tray_icon_window`",
  "`create_or_refresh_tray_menu`",
  "`handle_tray_menu_event`",
  "`tray_relay_usage_quota_model`",
  "`set_tray_locale`",
  "`tray_router_open`",
  "不声明 macOS dim6",
  "不创建真实原生托盘",
  "公开本地文件事实",
  "不读取运行时 relay state",
  "不执行账号切换",
  "scripts/validate-backend-tray-owner.mjs",
]);

for (const target of windowsAcceptedTrayTargets) {
  requireIncludes(paths.evidenceMap, [`Windows accepted tray target | \`${target}\``]);
}
for (const command of currentSourceExtraCommands) {
  requireIncludes(paths.evidenceMap, [`current-source extra | \`${command}\``]);
}
for (const eventId of currentSourceExtraEventIds) {
  requireIncludes(paths.evidenceMap, [`current-source extra | \`${eventId}\``]);
}

requireNotIncludes(
  paths.evidenceMap,
  [
    "macOS dim6 已闭合到当前源码",
    "已声明真实运行闭合",
    "使用真实 TrayIconBuilder 已恢复",
    "真实菜单已恢复",
    "emit navigate 已恢复",
    "relay state 真实读取已恢复",
    "账号切换已恢复",
    "native tray refresh 已恢复",
  ],
  "tray current-source 文档只能记录骨架和边界，不能声明真实原生托盘闭合",
);

if (failures.length > 0) {
  console.error("backend tray owner 验证失败：");
  failures.forEach((failure) => console.error(`- ${failure}`));
  process.exit(1);
}

console.log("backend tray owner 验证通过");
