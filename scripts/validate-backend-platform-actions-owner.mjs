import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  usecaseMod: join(backendRoot, "application", "usecase", "mod.rs"),
  platformActions: join(backendRoot, "application", "usecase", "platform_actions.rs"),
  systemRoot: join(backendRoot, "application", "usecase", "system.rs"),
  maintenanceUsecase: join(backendRoot, "application", "usecase", "maintenance.rs"),
  settingsUsecase: join(backendRoot, "application", "usecase", "settings.rs"),
  systemCommands: join(backendRoot, "commands", "system.rs"),
  contractsMod: join(backendRoot, "contracts", "mod.rs"),
  contractsPlatformActions: join(backendRoot, "contracts", "platform_actions.rs"),
  contractsSystem: join(backendRoot, "contracts", "system.rs"),
  contractsMaintenance: join(backendRoot, "contracts", "maintenance.rs"),
};
const failures = [];

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

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);

const usecaseMod = raw.get("usecaseMod");
requirePattern(
  "平台动作 usecase 模块声明",
  usecaseMod.path,
  usecaseMod.content,
  /\bpub\s+mod\s+platform_actions\s*;/,
  "公开平台动作必须是 application/usecase 下的独立 owner",
);

const platformActions = raw.get("platformActions");
for (const [label, pattern] of [
  ["update installability action", /\bpub\s+fn\s+check_update_installability\s*\(\s*system\s*:\s*&impl\s+AppSystemPort\s*\)/],
  ["graceful update restart action", /\bpub\s+fn\s+graceful_restart_for_update\s*\(\s*process\s*:\s*&impl\s+AppProcessPort\s*\)/],
  ["restart app action", /\bpub\s+fn\s+restart_app\s*\(\s*process\s*:\s*&impl\s+AppProcessPort\s*\)/],
  ["force kill action", /\bpub\s+fn\s+force_kill_app\s*\(\s*process\s*:\s*&impl\s+AppProcessPort\s*\)/],
  ["open path action", /\bpub\s+fn\s+open_path\s*\(\s*[\s\S]*shell\s*:\s*&impl\s+AppShellPort\s*,\s*[\s\S]*path\s*:\s*String\s*,?\s*[\s\S]*\)/],
  ["system info action", /\bpub\s+fn\s+system_info\s*\(\s*system\s*:\s*&impl\s+AppSystemPort\s*\)/],
  ["focus main window action", /\bpub\s+fn\s+focus_main_window\s*\(\s*window\s*:\s*&impl\s+AppWindowPort\s*\)/],
  ["platform status module", /"platform_actions"/],
  ["platform effect status", /\bBackendEffect\s*::\s*Platform\b/],
]) {
  requirePattern(label, platformActions.path, platformActions.content, pattern, "平台动作 owner 必须承载公开平台动作和状态组装");
}

for (const [label, pattern] of [
  ["Repository 依赖", /\bRepository\b|\bsettings_repository\b|\bconfig_repository\b|\bdaemon_usecase\b/g],
  ["Tauri 依赖", /\btauri\s*::|State\s*</g],
  ["真实文件系统事务", /\bstd\s*::\s*fs\b|\btokio\s*::\s*fs\b/g],
]) {
  rejectPattern(label, platformActions.path, platformActions.content, pattern, "平台动作 owner 只能编排窄平台端口，不 owning 仓储或 IPC");
}

const systemRoot = raw.get("systemRoot");
for (const [label, pattern] of [
  ["system platform_actions 子模块", /\bmod\s+platform_actions\s*;/],
  ["system platform_actions re-export", /\bpub\s+use\s+self\s*::\s*platform_actions\s*::/],
  ["system 平台动作函数", /\bpub\s+fn\s+(check_update_installability|graceful_restart_for_update|restart_app|force_kill_app|open_path|system_info|focus_main_window)\s*\(/],
]) {
  rejectPattern(label, systemRoot.path, systemRoot.content, pattern, "平台动作不得回流到 system owner");
}

const maintenanceUsecase = raw.get("maintenanceUsecase");
for (const [label, pattern] of [
  ["maintenance 进程动作调用", /\bplatform_actions\s*::\s*(force_kill_app|restart_app)\s*\(\s*process\s*\)/],
  ["maintenance open_path 调用", /\bplatform_actions\s*::\s*open_path\s*\(\s*shell\s*,\s*path\s*\)\s*\??/],
  ["maintenance system_info 调用", /\bplatform_actions\s*::\s*system_info\s*\(\s*system_port\s*\)/],
]) {
  requirePattern(label, maintenanceUsecase.path, maintenanceUsecase.content, pattern, "maintenance 必须调用独立平台动作 owner");
}
rejectPattern(
  "maintenance system 平台动作复用",
  maintenanceUsecase.path,
  maintenanceUsecase.content,
  /\bsystem\s*::\s*(force_kill_app|restart_app|open_path|system_info)\b/g,
  "maintenance 不得再通过 system 中转平台动作",
);
const settingsUsecase = raw.get("settingsUsecase");
for (const [label, pattern] of [
  ["settings update installability 调用", /\bplatform_actions\s*::\s*check_update_installability\s*\(\s*system\s*\)/],
  ["settings graceful restart 调用", /\bplatform_actions\s*::\s*graceful_restart_for_update\s*\(\s*process\s*\)/],
]) {
  requirePattern(label, settingsUsecase.path, settingsUsecase.content, pattern, "settings 必须调用独立平台动作 owner");
}
for (const [label, pattern] of [
  ["settings 直接更新检查实现", /\bsystem\s*\.\s*update_installability\s*\(\s*\)/g],
  ["settings 直接重启实现", /\bprocess\s*\.\s*graceful_restart_for_update\s*\(\s*\)/g],
]) {
  rejectPattern(label, settingsUsecase.path, settingsUsecase.content, pattern, "settings 不得复制平台动作逻辑");
}

const systemCommands = raw.get("systemCommands");
requirePattern(
  "focus_main_window command 调用独立 owner",
  systemCommands.path,
  systemCommands.content,
  /\busecase\s*::\s*platform_actions\s*::\s*focus_main_window\s*\(\s*&window\s*\)/,
  "system command 只做 IPC adapter，平台动作必须进入独立 owner",
);

const contractsMod = raw.get("contractsMod");
requirePattern(
  "平台动作 contracts 模块声明",
  contractsMod.path,
  contractsMod.content,
  /\bpub\s+mod\s+platform_actions\s*;/,
  "平台动作 DTO 必须有独立合同 owner",
);
requirePattern(
  "平台动作 contracts re-export",
  contractsMod.path,
  contractsMod.content,
  /\bpub\s+use\s+platform_actions::\*\s*;/,
  "平台动作 DTO 必须保持 crate::contracts::{Type} 兼容",
);

const contractsPlatformActions = raw.get("contractsPlatformActions");
for (const typeName of ["SystemInfoPayload", "SystemActionPayload", "UpdateInstallabilityPayload"]) {
  requirePattern(
    `${typeName} 合同 owner`,
    contractsPlatformActions.path,
    contractsPlatformActions.content,
    new RegExp(`\\bpub\\s+struct\\s+${typeName}\\b`),
    `${typeName} 必须定义在 contracts/platform_actions.rs`,
  );
}

for (const [label, file] of [
  ["system 合同旧平台动作 DTO", raw.get("contractsSystem")],
  ["maintenance 合同旧更新 DTO", raw.get("contractsMaintenance")],
]) {
  rejectPattern(
    label,
    file.path,
    file.content,
    /\bpub\s+struct\s+(SystemInfoPayload|SystemActionPayload|UpdateInstallabilityPayload)\b/g,
    "平台动作 DTO 必须迁入 contracts/platform_actions.rs",
  );
}

if (failures.length > 0) {
  console.error("FAIL 后端平台动作 owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端平台动作 owner 校验通过：平台动作 usecase 和 DTO 已脱离 system/maintenance/settings 中转。");
