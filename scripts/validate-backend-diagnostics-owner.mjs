import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  applicationPorts: join(backendRoot, "application", "ports.rs"),
  maintenanceCommand: join(backendRoot, "commands", "maintenance.rs"),
  usecaseMod: join(backendRoot, "application", "usecase", "mod.rs"),
  diagnosticsUsecase: join(backendRoot, "application", "usecase", "diagnostics.rs"),
  pathStateUsecase: join(backendRoot, "application", "usecase", "path_state.rs"),
  systemPlatform: join(backendRoot, "platform", "system.rs"),
  repositoryPathState: join(backendRoot, "repository", "path_state.rs"),
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
  ["diagnose action", /\bpub\s+fn\s+diagnose\s*\(\s*repo\s*:\s*&Repository\s*,\s*platform\s*:\s*&impl\s+DiagnosticPlatformPort\s*,?\s*\)/],
  ["diagnostics repository snapshot", /\bload_system_diagnostic_snapshot\s*\(\s*repo\s*\)/],
  ["diagnostics platform port", /\bDiagnosticPlatformPort\b/],
  ["diagnostics platform payload", /\bmake_diagnose_platform\s*\(\s*platform\s*\)/],
  ["diagnostics backend status", /\bfn\s+diagnose_backend_status\s*\(/],
  ["diagnostics module status", /module\s*:\s*"diagnostics"\s*\.to_string\s*\(\s*\)/],
  ["pending diagnostics fields", /\bfn\s+make_pending_diagnostic_fields\s*\(/],
  ["diagnostic snapshot payload", /\bfn\s+make_diagnostic_snapshot_payload\s*\(/],
  ["diagnostic repository path state", /\bload_app_path_state\s*\(\s*repo\s*\)/],
  ["diagnostic path state merge", /\bfn\s+make_path_state\s*\(\s*state\s*:\s*RepositoryPathState\s*\)\s*->\s*AppPathState/],
  ["diagnostic path DTO conversion", /\bapp_path_state_from_repository\s*\(\s*state\s*\)/],
]) {
  requirePattern(label, diagnosticsUsecase.path, diagnosticsUsecase.content, pattern, "diagnostics owner 必须承载只读诊断 payload 组装");
}

for (const [label, pattern] of [
  ["直接 FS 路径探测", /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(/g],
  ["直接平台常量读取", /\bstd\s*::\s*env\s*::\s*consts\b/g],
  ["system 私有模块依赖", /\bsuper\s*::\s*snapshot_bootstrap\b|\bsystem\s*::/g],
  ["bootstrap cache owner", /\bbootstrap_repository\b/g],
  ["settings secret owner", /\bremote_device_secret\b/g],
  ["daemon owner", /\bdaemon_usecase\b/g],
  ["平台动作 owner", /\bApp(Process|Shell|System|Window)Port\b|\bplatform_actions\b/g],
]) {
  rejectPattern(label, diagnosticsUsecase.path, diagnosticsUsecase.content, pattern, "diagnostics owner 必须保持只读诊断范围");
}

const pathStateUsecase = raw.get("pathStateUsecase");
for (const [label, pattern] of [
  ["路径状态 DTO 转换层", /\bpub\s+fn\s+make_app_path_state\s*\(\s*repo\s*:\s*&Repository\s*\)\s*->\s*AppPathState/],
  ["repository fact loader", /\bload_app_path_state\s*\(\s*repo\s*\)/],
  ["repository fact conversion", /\bpub\s+fn\s+app_path_state_from_repository\s*\(\s*state\s*:\s*RepositoryPathState\s*\)\s*->\s*AppPathState/],
]) {
  requirePattern(label, pathStateUsecase.path, pathStateUsecase.content, pattern, "路径状态 DTO 转换必须归属 application/usecase/path_state.rs");
}
rejectPattern(
  "路径状态辅助层直接 FS 探测",
  pathStateUsecase.path,
  pathStateUsecase.content,
  /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(/g,
  "path_state usecase 辅助层只能转换仓储事实，不得直接读取 FS",
);

const repositoryPathState = raw.get("repositoryPathState");
for (const [label, pattern] of [
  ["repository path state fact", /\bpub\s+struct\s+RepositoryPathState\b/],
  ["repository path state loader", /\bpub\s+fn\s+load_app_path_state\s*\(\s*repo\s*:\s*&Repository\s*\)\s*->\s*RepositoryPathState/],
  ["auth 存在性事实", /\bauth_exists\s*:\s*repo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(\s*&paths\.auth_path\s*\)/],
  ["registry 存在性事实", /\bregistry_exists\s*:\s*repo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(\s*&paths\.registry_path\s*\)/],
  ["sessions 存在性事实", /\bsessions_exists\s*:\s*repo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(\s*&paths\.sessions_dir\s*\)/],
]) {
  requirePattern(label, repositoryPathState.path, repositoryPathState.content, pattern, "路径存在性事实必须归属 repository/path_state.rs");
}

const applicationPorts = raw.get("applicationPorts");
requirePattern(
  "诊断平台端口声明",
  applicationPorts.path,
  applicationPorts.content,
  /\bpub\(crate\)\s+trait\s+DiagnosticPlatformPort\b/,
  "diagnostics 用例必须通过应用层平台端口消费系统能力",
);

const systemPlatform = raw.get("systemPlatform");
for (const [label, pattern] of [
  ["系统平台实现诊断端口", /\bimpl\s+DiagnosticPlatformPort\s+for\s+SystemPlatformAdapter\b/],
  ["诊断平台信息转换", /\bDiagnosticPlatformInfo\s*\{/],
  ["诊断能力探针边界", /\bfn\s+capability_probes\s*\(&self\)\s*->\s*Vec\s*<\s*DiagnosticCapabilityProbe\s*>/],
]) {
  requirePattern(label, systemPlatform.path, systemPlatform.content, pattern, "平台能力必须归属 platform/system.rs");
}

const maintenanceCommand = raw.get("maintenanceCommand");
for (const [label, pattern] of [
  ["diagnose command 创建系统平台适配器", /\blet\s+system\s*=\s*SystemPlatformAdapter\s*;/],
  ["diagnose command 传入系统平台适配器", /\busecase\s*::\s*maintenance\s*::\s*diagnose\s*\(\s*&repo\s*,\s*&system\s*\)/],
]) {
  requirePattern(label, maintenanceCommand.path, maintenanceCommand.content, pattern, "Tauri command 必须只装配平台 adapter 并交给 usecase");
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
  /\bdiagnostics\s*::\s*diagnose\s*\(\s*repo\s*,\s*platform\s*\)\s*\?/,
  "maintenance diagnose 必须调用独立 diagnostics owner",
);
requirePattern(
  "maintenance diagnose 接收诊断平台端口",
  maintenanceUsecase.path,
  maintenanceUsecase.content,
  /\bpub\s+fn\s+diagnose\s*\(\s*repo\s*:\s*&Repository\s*,\s*platform\s*:\s*&impl\s+DiagnosticPlatformPort\s*,?\s*\)/,
  "maintenance diagnose 必须转传 DiagnosticPlatformPort",
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
