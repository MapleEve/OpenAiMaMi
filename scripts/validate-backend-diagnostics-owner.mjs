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
  repositoryDiagnostics: join(backendRoot, "repository", "diagnostics.rs"),
  repositoryRelay: join(backendRoot, "repository", "relay.rs"),
  repositoryPathState: join(backendRoot, "repository", "path_state.rs"),
  systemRoot: join(backendRoot, "application", "usecase", "system.rs"),
  maintenanceUsecase: join(backendRoot, "application", "usecase", "maintenance.rs"),
  contractsDiagnostics: join(backendRoot, "contracts", "diagnostics.rs"),
  contractsMod: join(backendRoot, "contracts", "mod.rs"),
  frontendTypes: join(repoRoot, "src", "types", "index.ts"),
  mockCommands: join(repoRoot, "src", "mocks", "fixtures", "commands.ts"),
  diagnosticsMap: join(repoRoot, "docs", "reconstruction", "diagnostics-current-source-evidence-map.md"),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  reconstructionReadme: join(repoRoot, "docs", "reconstruction", "README.md"),
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
  ["diagnostics platform public projection", /公开 diagnose DTO 只投影 os\/arch[\s\S]*?DiagnosePlatform\s*\{[\s\S]*?os\s*:\s*info\.os,[\s\S]*?arch\s*:\s*info\.arch,[\s\S]*?info_source\s*:\s*"platform\.system"\s*\.to_string\s*\(\s*\)/],
  ["diagnostics backend status", /\bfn\s+diagnose_backend_status\s*\(/],
  ["diagnostics module status", /module\s*:\s*"diagnostics"\s*\.to_string\s*\(\s*\)/],
  ["diagnostics restored status", /\brestored\s*:\s*true\s*,/],
  ["diagnostics repository read effect", /\beffect\s*:\s*BackendEffect\s*::\s*RepositoryRead\s*,/],
  ["diagnostics catalog integrity payload", /\bcatalog_integrity\s*:\s*make_catalog_integrity_payload\s*\(\s*repo\s*\)/],
  ["catalog integrity helper", /\bfn\s+make_catalog_integrity_payload\s*\(\s*repo\s*:\s*&Repository\s*\)\s*->\s*DiagnoseCatalogIntegrityPayload/],
  ["catalog integrity relay repository fact", /\brelay_repository\s*::\s*load_router_diagnostic_skeleton\s*\(\s*repo\s*,\s*"catalog_integrity"\s*\)/],
  ["catalog integrity repository read boundary", /diagnostics\.catalog_integrity\.repository_read/],
  ["catalog integrity TOML syntax issue gate", /!skeleton\.config_toml_syntax_valid/],
  ["catalog integrity profile conflict issue gate", /\|\|\s*skeleton\.config_profile_conflict/],
  ["catalog integrity TOML syntax payload", /config_toml_syntax_valid\s*:\s*skeleton\.config_toml_syntax_valid/],
  ["catalog integrity TOML syntax reason payload", /config_toml_syntax_reason\s*:\s*skeleton\.config_toml_syntax_reason/],
  ["catalog integrity profile conflict payload", /config_profile_conflict\s*:\s*skeleton\.config_profile_conflict/],
  ["catalog integrity profile conflict reason payload", /config_profile_conflict_reason\s*:\s*skeleton\.config_profile_conflict_reason/],
  ["diagnostics pending deep fields", /registry\/keychain\/sqlite 深诊断引擎和修复逻辑仍为 pending/],
  ["pending diagnostics fields", /\bfn\s+make_pending_diagnostic_fields\s*\(/],
  ["unsupported pending no-op boundary", /未支持的深层诊断项只能表达为待处理[\s\S]*?diagnose 不执行平台动作/],
  ["pending diagnostics status literal", /status\s*:\s*"pending"\s*\.to_string\s*\(\s*\)/],
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
  ["平台能力探针外泄", /\bcapability_probes\s*\(/g],
  ["平台私有字段外泄", /\binfo\s*\.\s*(hostname|os_version)\b|\b(hostname|os_version)\s*:/g],
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

const repositoryDiagnostics = raw.get("repositoryDiagnostics");
for (const [label, pattern] of [
  ["diagnostic snapshot loader", /\bpub\s+fn\s+load_system_diagnostic_snapshot\s*\(\s*repo\s*:\s*&Repository\s*\)\s*->\s*Result\s*<\s*DiagnosticSnapshot\s*,\s*CoreError\s*>/],
  ["codex home path probe", /"diagnostics\.path\.codex_home"/],
  ["accounts path probe", /"diagnostics\.path\.accounts"/],
  ["auth path probe", /"diagnostics\.path\.auth"/],
  ["registry path probe", /"diagnostics\.path\.registry"/],
  ["sessions path probe", /"diagnostics\.path\.sessions"/],
  ["config path probe", /"diagnostics\.path\.config"/],
  ["registry item count", /\bregistry_account_count\s*\(\s*repo\s*\)\?/],
  ["sessions child count", /\bchild_count\s*\(\s*repo\s*,\s*&paths\.sessions_dir\s*\)\?/],
  ["repository FS exists probe", /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(/],
  ["repository JSON items field", /\.get\s*\(\s*"items"\s*\)/],
  ["repository JSON items array", /serde_json::Value::as_array/],
  ["repository JSON items length", /\.len\s*\(\s*\)\s+as\s+i32/],
]) {
  requirePattern(label, repositoryDiagnostics.path, repositoryDiagnostics.content, pattern, "diagnostics repository 必须只读生成路径和数量快照");
}
for (const [label, pattern] of [
  ["诊断修复写入", /\bwrite(_to_string|_json|_json_pretty)?\b|\bremove_file\b|\bcreate_dir_all\b|\brename\b|\bcopy\b|\bset_permissions\b/g],
  ["平台行为", /\bcrate\s*::\s*platform\b|\bSystemPlatformAdapter\b|\bDiagnosticPlatformPort\b/g],
  ["外部进程", /\bCommand\s*::\s*new\b|\bstd\s*::\s*process\b/g],
]) {
  rejectPattern(label, repositoryDiagnostics.path, repositoryDiagnostics.content, pattern, "diagnostics repository 只能读取本地文件事实，不执行修复或平台副作用");
}

const repositoryRelay = raw.get("repositoryRelay");
for (const [label, pattern] of [
  ["relay router diagnostic skeleton", /\bpub\s+fn\s+load_router_diagnostic_skeleton\s*\([\s\S]*?repo\s*:\s*&Repository\s*,[\s\S]*?command\s*:\s*&str[\s\S]*?\)\s*->\s*RelayDiagnosticSkeleton/],
  ["relay catalog exists fact", /\bcatalog_exists\s*:\s*snapshot\.catalog_exists/],
  ["relay config router fact", /\bconfig_toml_has_router\s*:\s*analysis\.config_toml_has_router/],
  ["relay config catalog fact", /\bconfig_toml_has_catalog\s*:\s*analysis\.config_toml_has_catalog/],
  ["relay config TOML syntax fact", /\bconfig_toml_syntax_valid\s*:\s*analysis\.config_toml_syntax_valid/],
  ["relay config profile conflict fact", /\bconfig_profile_conflict\s*:\s*analysis\.config_profile_conflict/],
  ["relay managed block fact", /\bmanaged_block_exists\s*:\s*analysis\.managed_block_exists/],
]) {
  requirePattern(label, repositoryRelay.path, repositoryRelay.content, pattern, "catalog_integrity 只能复用 relay repository 只读本地事实");
}

const applicationPorts = raw.get("applicationPorts");
requirePattern(
  "诊断平台端口声明",
  applicationPorts.path,
  applicationPorts.content,
  /\bpub\(crate\)\s+trait\s+DiagnosticPlatformPort\b/,
  "diagnostics 用例必须通过应用层平台端口消费系统能力",
);
requirePattern(
  "诊断平台端口类型化骨架注释",
  applicationPorts.path,
  applicationPorts.content,
  /诊断平台端口只暴露结构化平台信息和能力探针类型化骨架，不实现注册表、钥匙串、sqlite、TOML 修复或平台动作/,
  "DiagnosticPlatformPort 必须声明未支持的平台诊断只能停留在端口骨架",
);
requirePattern(
  "诊断能力探针类型化骨架",
  applicationPorts.path,
  applicationPorts.content,
  /\bpub\(crate\)\s+struct\s+DiagnosticCapabilityProbe\b/,
  "能力探针只能作为类型化骨架保留在 application port",
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
  "DiagnoseCatalogIntegrityPayload",
]) {
  requirePattern(
    `${typeName} 合同 owner`,
    contractsDiagnostics.path,
    contractsDiagnostics.content,
    new RegExp(`\\bpub\\s+struct\\s+${typeName}\\b`),
    `${typeName} 必须定义在 contracts/diagnostics.rs`,
  );
}
requirePattern(
  "公开平台 DTO 只含 os/arch/source",
  contractsDiagnostics.path,
  contractsDiagnostics.content,
  /公开平台 DTO 只包含 os\/arch\/source[\s\S]*?pub\s+struct\s+DiagnosePlatform\s*\{[\s\S]*?pub\s+os\s*:\s*String,[\s\S]*?pub\s+arch\s*:\s*String,[\s\S]*?pub\s+info_source\s*:\s*String,[\s\S]*?\}/,
  "DiagnosePlatform 不得暴露 hostname、os_version 或能力探针",
);
for (const [label, pattern] of [
  ["诊断 catalog TOML 语法字段", /\bpub\s+config_toml_syntax_valid\s*:\s*bool\s*,/],
  ["诊断 catalog TOML 语法原因字段", /\bpub\s+config_toml_syntax_reason\s*:\s*Option\s*<\s*String\s*>\s*,/],
  ["诊断 catalog profile 冲突字段", /\bpub\s+config_profile_conflict\s*:\s*bool\s*,/],
  ["诊断 catalog profile 冲突原因字段", /\bpub\s+config_profile_conflict_reason\s*:\s*Option\s*<\s*String\s*>\s*,/],
]) {
  requirePattern(label, contractsDiagnostics.path, contractsDiagnostics.content, pattern, "catalog_integrity DTO 必须镜像 relay repository 的只读诊断事实");
}
for (const [label, pattern] of [
  ["公开 DTO 平台私有字段", /\bpub\s+(hostname|os_version|osVersion)\s*:/g],
  ["公开 DTO 能力探针字段", /\bpub\s+(capability_probes|capabilityProbes)\s*:/g],
]) {
  rejectPattern(label, contractsDiagnostics.path, contractsDiagnostics.content, pattern, "diagnostics 公开合同不得外泄平台私有信息或未恢复能力探针");
}

const frontendTypes = raw.get("frontendTypes");
for (const [label, pattern] of [
  ["前端 catalog integrity 类型", /\bexport\s+interface\s+DiagnoseCatalogIntegrityPayload\b/],
  ["前端 diagnose catalog 字段", /\bcatalogIntegrity\s*:\s*DiagnoseCatalogIntegrityPayload\s*;/],
  ["前端 catalog path 字段", /\bcatalogSourcePath\s*:\s*string\s*\|\s*null\s*;/],
  ["前端 catalog TOML 语法字段", /\bconfigTomlSyntaxValid\s*:\s*boolean\s*;/],
  ["前端 catalog TOML 语法原因字段", /\bconfigTomlSyntaxReason\s*:\s*string\s*\|\s*null\s*;/],
  ["前端 catalog profile 冲突字段", /\bconfigProfileConflict\s*:\s*boolean\s*;/],
  ["前端 catalog profile 冲突原因字段", /\bconfigProfileConflictReason\s*:\s*string\s*\|\s*null\s*;/],
  ["前端 catalog issue 字段", /\bhasIssues\s*:\s*boolean\s*;/],
]) {
  requirePattern(label, frontendTypes.path, frontendTypes.content, pattern, "改 diagnostics DTO 必须同步前端 TypeScript 类型");
}

const mockCommands = raw.get("mockCommands");
for (const [label, pattern] of [
  ["diagnose mock catalog 字段", /\bcatalogIntegrity\s*:\s*\{/],
  ["diagnose mock catalog 边界", /diagnostics\.catalog_integrity\.repository_read/],
  ["diagnose mock catalog TOML 语法镜像", /\bconfigTomlSyntaxValid\s*:\s*true/],
  ["diagnose mock catalog profile 冲突镜像", /\bconfigProfileConflict\s*:\s*false/],
  ["diagnose mock catalog issue 镜像", /\bhasIssues\s*:\s*false/],
]) {
  requirePattern(label, mockCommands.path, mockCommands.content, pattern, "改 diagnostics DTO 必须同步 E2E mock 合同");
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

const diagnosticsMap = raw.get("diagnosticsMap");
for (const [label, pattern] of [
  ["diagnostics map 标题", /^# diagnostics current-source 证据映射/m],
  ["diagnostics map restored/repository-read", /backend_status\.restored=true[\s\S]*BackendEffect::RepositoryRead/],
  ["diagnostics map application ports", /src-tauri\/src\/application\/ports\.rs[\s\S]*能力探针类型化骨架[\s\S]*hostname[\s\S]*os_version/],
  ["diagnostics map repository probes", /codex_home[\s\S]*accounts_dir[\s\S]*auth_path[\s\S]*registry_path[\s\S]*sessions_dir[\s\S]*config_path/],
  ["diagnostics map platform public projection", /diagnose` payload 只公开 os、arch 和 info_source[\s\S]*能力探针保持类型化骨架[\s\S]*平台动作不进入公开诊断 DTO/],
  ["diagnostics map catalog integrity", /catalog_integrity[\s\S]*config\.toml[\s\S]*codex_router_catalog\.json[\s\S]*语法[\s\S]*profile[\s\S]*只读探针/],
  ["diagnostics map pending fields", /auth_integrity[\s\S]*api_key_integrity[\s\S]*db_orphan_providers[\s\S]*rollout_orphan_providers[\s\S]*repair_logic[\s\S]*平台动作/],
  ["diagnostics map pending no-op boundary", /只保留端口骨架、待处理和空操作边界/],
  ["diagnostics map validator", /scripts\/validate-backend-diagnostics-owner\.mjs/],
  ["diagnostics map no full leaf claim", /不声明双平台全 leaf 已完成/],
]) {
  requirePattern(label, diagnosticsMap.path, diagnosticsMap.content, pattern, "diagnostics current-source map 必须记录只读快照、pending 边界和验证入口");
}

const sourceMap = raw.get("sourceMap");
requirePattern(
  "source-map diagnostics 注册",
  sourceMap.path,
  sourceMap.content,
  /docs\/reconstruction\/diagnostics-current-source-evidence-map\.md[\s\S]*scripts\/validate-backend-diagnostics-owner\.mjs[\s\S]*restored\/RepositoryRead 状态/,
  "source-map 必须登记 diagnostics current-source map 和 owner validator",
);

const reconstructionReadme = raw.get("reconstructionReadme");
requirePattern(
  "reconstruction README diagnostics 注册",
  reconstructionReadme.path,
  reconstructionReadme.content,
  /diagnostics-current-source-evidence-map\.md[\s\S]*diagnose[\s\S]*只读 repository snapshot[\s\S]*pending 深诊断边界/,
  "docs/reconstruction/README.md 必须登记 diagnostics current-source map",
);

if (failures.length > 0) {
  console.error("FAIL 后端 diagnostics owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端 diagnostics owner 校验通过：诊断 usecase、DTO、ports、repository 只读快照、catalog_integrity 只读探针、平台私有字段不外泄、TypeScript 类型、E2E mock、restored/RepositoryRead 状态和 current-source map 均已脱离 system 中转。");
