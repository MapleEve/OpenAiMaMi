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
];

const trayCommands = [
  "create_tray_icon_window",
  "create_or_refresh_tray_menu",
  "handle_tray_menu_event",
  "set_tray_locale",
  "tray_relay_usage_quota_model",
];

const forbiddenRustSideEffects = [
  "TrayIconBuilder",
  "Shell_NotifyIcon",
  ".set_menu(",
  ".set_icon(",
  ".set_tooltip(",
  ".set_title(",
  ".emit(",
  "process::exit",
  "std::process::exit",
];

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

function requireIncludes(path, snippets) {
  const text = readText(path);
  for (const snippet of snippets) {
    if (!text.includes(snippet)) {
      failures.push(`${path} 缺少片段：${snippet}`);
    }
  }
}

for (const file of ownerFiles) {
  readText(file);
}

requireIncludes("src-tauri/src/contracts/mod.rs", [
  "pub mod tray;",
  "pub use tray::*;",
]);
requireIncludes("src-tauri/src/application/usecase/mod.rs", ["pub mod tray;"]);
requireIncludes("src-tauri/src/commands/mod.rs", ["pub mod tray;"]);
requireIncludes("src-tauri/src/core/model/mod.rs", ["pub mod tray;"]);
requireIncludes("src-tauri/src/core/mod.rs", ["pub mod tray;"]);

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
  "empty_tray_quota_model",
  "empty_menu_item_keys",
]);
requireIncludes("src-tauri/src/application/usecase/tray.rs", [
  "tray_core::classify_tray_menu_event",
  "tray_status(platform, \"handle_tray_menu_event\")",
  "BackendEffect::Pending",
]);
requireIncludes("src-tauri/src/commands/tray.rs", [
  "CoreEnvelope::ok",
  "TrayPlatformAdapter",
]);

for (const command of trayCommands) {
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

if (failures.length > 0) {
  console.error("backend tray owner 验证失败：");
  failures.forEach((failure) => console.error(`- ${failure}`));
  process.exit(1);
}

console.log("backend tray owner 验证通过");
