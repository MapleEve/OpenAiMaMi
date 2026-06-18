import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  usecaseMod: join(backendRoot, "application", "usecase", "mod.rs"),
  diagnosticsUsecase: join(backendRoot, "application", "usecase", "diagnostics.rs"),
  systemRoot: join(backendRoot, "application", "usecase", "system.rs"),
  maintenanceUsecase: join(backendRoot, "application", "usecase", "maintenance.rs"),
  contractsDiagnostics: join(backendRoot, "contracts", "diagnostics.rs"),
  contractsMod: join(backendRoot, "contracts", "mod.rs"),
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
  "diagnostics usecase 模块声明",
  usecaseMod.path,
  usecaseMod.content,
  /\bpub\s+mod\s+diagnostics\s*;/,
  "公开诊断必须是 application/usecase 下的独立 owner",
);

const diagnosticsUsecase = raw.get("diagnosticsUsecase");
for (const [label, pattern] of [
  ["diagnose action", /\bpub\s+fn\s+diagnose\s*\(\s*repo\s*:\s*&Repository\s*\)/],
  ["diagnostics repository snapshot", /\bload_system_diagnostic_snapshot\s*\(\s*repo\s*\)/],
  ["diagnostics backend status", /\bfn\s+diagnose_backend_status\s*\(/],
  ["diagnostics module status", /module\s*:\s*"diagnostics"\s*\.to_string\s*\(\s*\)/],
  ["pending diagnostics fields", /\bfn\s+make_pending_diagnostic_fields\s*\(/],
  ["diagnostic snapshot payload", /\bfn\s+make_diagnostic_snapshot_payload\s*\(/],
  ["diagnostic path state", /\bfn\s+make_path_state\s*\(\s*repo\s*:\s*&Repository\s*\)\s*->\s*AppPathState/],
]) {
  requirePattern(label, diagnosticsUsecase.path, diagnosticsUsecase.content, pattern, "diagnostics owner 必须承载只读诊断 payload 组装");
}

for (const [label, pattern] of [
  ["system 私有模块依赖", /\bsuper\s*::\s*snapshot_bootstrap\b|\bsystem\s*::/g],
  ["bootstrap cache owner", /\bbootstrap_repository\b/g],
  ["settings secret owner", /\bremote_device_secret\b/g],
  ["daemon owner", /\bdaemon_usecase\b/g],
  ["平台动作 owner", /\bApp(Process|Shell|System|Window)Port\b|\bplatform_actions\b/g],
]) {
  rejectPattern(label, diagnosticsUsecase.path, diagnosticsUsecase.content, pattern, "diagnostics owner 必须保持只读诊断范围");
}

const systemRoot = raw.get("systemRoot");
for (const [label, pattern] of [
  ["system diagnostics 子模块", /\bmod\s+diagnostics\s*;/],
  ["system diagnostics re-export", /\bpub\s+use\s+self\s*::\s*diagnostics\s*::/],
  ["system diagnose wrapper", /\bpub\s+fn\s+diagnose\s*\(/],
]) {
  rejectPattern(label, systemRoot.path, systemRoot.content, pattern, "diagnostics 不得回流到 system owner");
}

const maintenanceUsecase = raw.get("maintenanceUsecase");
requirePattern(
  "maintenance diagnose 调用 diagnostics owner",
  maintenanceUsecase.path,
  maintenanceUsecase.content,
  /\bdiagnostics\s*::\s*diagnose\s*\(\s*repo\s*\)\s*\?/,
  "maintenance diagnose 必须调用独立 diagnostics owner",
);
rejectPattern(
  "maintenance system diagnose 中转",
  maintenanceUsecase.path,
  maintenanceUsecase.content,
  /\bsystem\s*::\s*diagnose\s*\(\s*repo\s*\)/g,
  "maintenance 不得再通过 system 中转诊断",
);

const contractsDiagnostics = raw.get("contractsDiagnostics");
for (const typeName of [
  "DiagnosePayload",
  "DiagnosePlatform",
  "DiagnoseDiagnosticSnapshotPayload",
  "DiagnoseDiagnosticProbePayload",
  "DiagnoseDiagnosticFieldPayload",
]) {
  requirePattern(
    `${typeName} 合同 owner`,
    contractsDiagnostics.path,
    contractsDiagnostics.content,
    new RegExp(`\\bpub\\s+struct\\s+${typeName}\\b`),
    `${typeName} 必须定义在 contracts/diagnostics.rs`,
  );
}

const contractsMod = raw.get("contractsMod");
requirePattern(
  "diagnostics contracts 模块声明",
  contractsMod.path,
  contractsMod.content,
  /\bpub\s+mod\s+diagnostics\s*;/,
  "诊断 DTO 必须有独立合同 owner",
);
requirePattern(
  "diagnostics contracts re-export",
  contractsMod.path,
  contractsMod.content,
  /\bpub\s+use\s+diagnostics::\*\s*;/,
  "诊断 DTO 必须保持 crate::contracts::{Type} 兼容",
);

if (failures.length > 0) {
  console.error("FAIL 后端 diagnostics owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端 diagnostics owner 校验通过：诊断 usecase 和 DTO 已脱离 system 中转。");
