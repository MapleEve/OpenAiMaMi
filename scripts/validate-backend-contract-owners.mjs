import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const contractsRoot = join(repoRoot, "src-tauri", "src", "contracts");
const failures = [];

const ownerFiles = {
  system: join(contractsRoot, "system.rs"),
  settings: join(contractsRoot, "settings.rs"),
  bootstrap: join(contractsRoot, "bootstrap.rs"),
  daemon: join(contractsRoot, "daemon.rs"),
  maintenance: join(contractsRoot, "maintenance.rs"),
  platform_actions: join(contractsRoot, "platform_actions.rs"),
  diagnostics: join(contractsRoot, "diagnostics.rs"),
  mystery: join(contractsRoot, "mystery.rs"),
  mod: join(contractsRoot, "mod.rs"),
  voice: join(contractsRoot, "voice.rs"),
};

const expectedTypes = {
  settings: [
    "ApiProxyMode",
    "ApiReachabilityStatus",
    "ApiProxyConfigPayload",
    "AppSettingsFile",
    "ApiConfigPayload",
    "ApiConnectivityPayload",
    "ApiModePayload",
    "ApiProxyTestPayload",
    "ApiProxyDetectPayload",
  ],
  bootstrap: ["BootstrapCacheFile", "BootstrapStatePayload"],
  daemon: [
    "AutoSwitchRuntimeState",
    "AutoSwitchStatusPayload",
    "AutoSwitchConfigPayload",
    "DaemonRunPayload",
    "PendingAutoSwitchStatePayload",
  ],
  maintenance: ["CleanPayload", "RebuildRegistryPayload"],
  platform_actions: ["SystemInfoPayload", "SystemActionPayload", "UpdateInstallabilityPayload"],
  diagnostics: [
    "DiagnosePayload",
    "DiagnosePlatform",
    "DiagnoseDiagnosticSnapshotPayload",
    "DiagnoseDiagnosticProbePayload",
    "DiagnoseDiagnosticFieldPayload",
    "DiagnoseRegistryState",
    "DiagnoseSessionState",
    "DiagnoseApiState",
  ],
  mystery: ["MysteryRouteGrant"],
};

const systemForbiddenDefinitions = [
  "AppSettingsFile",
  "ApiProxyMode",
  "ApiProxyConfigPayload",
  "ApiProxyTestPayload",
  "ApiProxyDetectPayload",
  "DiagnosePayload",
  "DiagnosePlatform",
  "DiagnoseDiagnosticSnapshotPayload",
  "DiagnoseDiagnosticProbePayload",
  "DiagnoseDiagnosticFieldPayload",
  "CleanPayload",
  "RebuildRegistryPayload",
  "SystemInfoPayload",
  "SystemActionPayload",
  "UpdateInstallabilityPayload",
  "DaemonRunPayload",
  "PendingAutoSwitchStatePayload",
  "MysteryRouteGrant",
];

function toRelative(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function readRequired(path, label) {
  if (!existsSync(path)) {
    failures.push(`${toRelative(path)} 缺少 ${label}`);
    return "";
  }

  return readFileSync(path, "utf8");
}

function requirePattern(label, path, content, pattern, reason) {
  if (!pattern.test(content)) {
    failures.push(`${toRelative(path)} 缺少 ${label}：${reason}`);
  }
}

function rejectPattern(label, path, content, pattern, reason) {
  if (pattern.test(content)) {
    failures.push(`${toRelative(path)} 禁止出现 ${label}：${reason}`);
  }
}

const files = new Map(
  Object.entries(ownerFiles).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);

const system = files.get("system");
for (const typeName of systemForbiddenDefinitions) {
  rejectPattern(
    `${typeName} 定义`,
    system.path,
    system.content,
    new RegExp(`\\b(pub\\s+)?(struct|enum)\\s+${typeName}\\b`),
    "system.rs 只能保留 system/snapshot/platform action 合同，跨域 DTO 必须迁出",
  );
}

for (const [owner, typeNames] of Object.entries(expectedTypes)) {
  const file = files.get(owner);
  for (const typeName of typeNames) {
    requirePattern(
      `${typeName} owner 类型`,
      file.path,
      file.content,
      new RegExp(`\\b(pub\\s+)?(struct|enum)\\s+${typeName}\\b`),
      `${typeName} 必须定义在 contracts/${owner}.rs`,
    );
  }
}

const modFile = files.get("mod");
for (const owner of [
  "settings",
  "bootstrap",
  "daemon",
  "maintenance",
  "platform_actions",
  "diagnostics",
  "mystery",
]) {
  requirePattern(
    `${owner} module`,
    modFile.path,
    modFile.content,
    new RegExp(`\\bpub\\s+mod\\s+${owner}\\s*;`),
    `contracts/mod.rs 必须声明 ${owner} owner 模块`,
  );
  requirePattern(
    `${owner} re-export`,
    modFile.path,
    modFile.content,
    new RegExp(`\\bpub\\s+use\\s+${owner}::\\*\\s*;`),
    `contracts/mod.rs 必须 re-export ${owner} owner，保持 crate::contracts::{Type} 兼容`,
  );
}

const settings = files.get("settings");
for (const [label, pattern] of [
  ["mysteryUnlockedRoutes 兼容 alias", /alias\s*=\s*"mysteryUnlockedRoutes"/],
  ["remote_device_secret 兼容 alias", /alias\s*=\s*"remote_device_secret"/],
  ["default_usage_refresh_interval 默认值", /default\s*=\s*"default_usage_refresh_interval"/],
  ["MysteryRouteGrant owner 引入", /contracts::mystery::MysteryRouteGrant/],
]) {
  requirePattern(label, settings.path, settings.content, pattern, "settings 合同必须保留旧 settings.json serde 形状兼容");
}

const mystery = files.get("mystery");
requirePattern(
  "epochMs rename",
  mystery.path,
  mystery.content,
  /rename\s*=\s*"epochMs"/,
  "MysteryRouteGrant 必须保留 camelCase 输出字段",
);
requirePattern(
  "epoch_ms alias",
  mystery.path,
  mystery.content,
  /alias\s*=\s*"epoch_ms"/,
  "MysteryRouteGrant 必须保留 snake_case 输入兼容",
);

const voice = files.get("voice");
for (const typeName of Object.values(expectedTypes).flat()) {
  rejectPattern(
    `${typeName} voice 接入`,
    voice.path,
    voice.content,
    new RegExp(`\\b${typeName}\\b`),
    "voice 合同不能接入本次拆出的 owner 类型",
  );
}

if (failures.length > 0) {
  console.error("FAIL 后端合同 owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端合同 owner 校验通过：system 跨域 DTO 已迁出，新 owner 模块、serde 兼容和 voice 边界均符合要求。");
