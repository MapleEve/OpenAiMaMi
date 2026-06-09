import { existsSync, readFileSync } from "node:fs";
import { dirname, join, relative, sep } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const closeoutPath = join(repoRoot, "docs", "reconstruction", "frontend-current-source-closeouts.json");
const failures = [];
const RELAY_CURRENT_SOURCE_SKELETON_ID = "relay-current-source-skeleton";
const RELAY_CURRENT_SOURCE_SIDECAR =
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-relay-core-bootstrap/frontend-callchain-report.json";
const RELAY_CURRENT_SOURCE_GATE_REPORTS = [
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-relay/gate-report.json",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-relay/gate-report.json",
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-relay-core-bootstrap/gate-report.json",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-relay-core/gate-report.json",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/gate-report.json",
];
const RELAY_CURRENT_SOURCE_COMMANDS = [
  "activate_relay_provider",
  "deactivate_relay_provider",
  "delete_relay_provider",
  "diagnose_codex_router",
  "export_relay_config",
  "fetch_relay_models_draft",
  "fix_codex_router_issue",
  "get_passthrough_audit_log",
  "get_relay_active",
  "get_relay_proxy_status",
  "import_relay_config",
  "load_relay_state",
  "run_codex_router_diagnostics",
  "set_block_official_passthrough",
  "set_codex_router_enabled",
  "set_relay_provider_network",
  "test_relay_draft",
  "test_relay_provider",
  "upsert_relay_provider",
];
const RELAY_CURRENT_SOURCE_NON_CLAIMS = [
  "不声明真实代理业务已经恢复。",
  "不声明真实配置持久化已经恢复。",
  "不声明真实 daemon 或 proxy runner 已经恢复。",
  "不声明真实 HTTP、model fetch 或 SSE 行为已经恢复。",
  "不声明真实 import/export IO 已经恢复。",
  "不声明 full_leaf_100，也不修改任何 gate-report 字段。",
];

function repoPath(path) {
  return join(repoRoot, ...path.split("/"));
}

function toRepoPath(file) {
  return relative(repoRoot, file).split(sep).join("/");
}

function readJson(path) {
  return JSON.parse(readFileSync(path, "utf8"));
}

function requireIncludes(file, snippets) {
  const path = repoPath(file);
  if (!existsSync(path)) {
    failures.push(`缺少 closeout 源码文件：${file}`);
    return;
  }

  const text = readFileSync(path, "utf8");
  for (const snippet of snippets) {
    if (!text.includes(snippet)) {
      failures.push(`${file} 缺少 closeout 片段：${snippet}`);
    }
  }
}

function getJsonPath(value, path) {
  let current = value;
  for (const part of path.split(".")) {
    if (!current || typeof current !== "object" || !(part in current)) {
      return { exists: false, value: undefined };
    }
    current = current[part];
  }
  return { exists: true, value: current };
}

function valuesEqual(actual, expected) {
  return JSON.stringify(actual) === JSON.stringify(expected);
}

function validateClosedGateReportFailures(closeout) {
  const entries = closeout.closedGateReportFailures ?? [];
  const classifications = new Set(["non-recoverable", "scope-selection"]);
  const seen = new Set();

  for (const entry of entries) {
    if (!entry || typeof entry !== "object") {
      failures.push(`${closeout.id} closedGateReportFailures 条目必须是对象`);
      continue;
    }

    const { report, path, value, classification, reason } = entry;
    if (typeof report !== "string" || report.length === 0) {
      failures.push(`${closeout.id} closedGateReportFailures 缺少 report`);
      continue;
    }
    if (report.includes("/accounts/") || report.includes("-accounts/") || report.includes("/plugins/") || report.includes("-plugins/")) {
      failures.push(`${closeout.id} closedGateReportFailures 不允许登记 accounts/plugins report：${report}`);
    }
    if (typeof path !== "string" || path.length === 0) {
      failures.push(`${closeout.id} closedGateReportFailures 缺少 path`);
      continue;
    }
    if (path.endsWith("full_leaf_100")) {
      failures.push(`${closeout.id} closedGateReportFailures 不允许登记 full_leaf_100 噪声条目：${report} ${path}`);
    }
    if (!classifications.has(classification)) {
      failures.push(`${closeout.id} ${report} ${path} classification=${String(classification)}`);
    }
    if (typeof reason !== "string" || reason.trim().length === 0) {
      failures.push(`${closeout.id} ${report} ${path} 缺少 reason`);
    }

    const key = `${report}\u0000${path}\u0000${JSON.stringify(value)}`;
    if (seen.has(key)) {
      failures.push(`${closeout.id} closedGateReportFailures 存在重复条目：${report} ${path}`);
    }
    seen.add(key);

    const reportPath = repoPath(report);
    if (!existsSync(reportPath)) {
      failures.push(`${closeout.id} 缺少 gate-report：${report}`);
      continue;
    }
    const gate = readJson(reportPath);
    const actual = getJsonPath(gate, path);
    if (!actual.exists) {
      failures.push(`${closeout.id} ${report} 缺少 path：${path}`);
      continue;
    }
    if (!valuesEqual(actual.value, value)) {
      failures.push(
        `${closeout.id} ${report} ${path} value 已变化：期望 ${JSON.stringify(value)}，实际 ${JSON.stringify(actual.value)}。请删除过期 closeout 噪声条目。`,
      );
    }
  }
}
function validateSidecarReports(closeout) {
  for (const report of closeout.sidecarReports ?? []) {
    const path = repoPath(report);
    if (!existsSync(path)) {
      failures.push(`${closeout.id} 缺少 sidecar report：${report}`);
      continue;
    }
    const sidecar = readJson(path);
    if (sidecar.full_leaf !== false) {
      failures.push(`${report} full_leaf=${String(sidecar.full_leaf)}`);
    }
    if (sidecar.gate_report_fields_unchanged !== true) {
      failures.push(`${report} gate_report_fields_unchanged=${String(sidecar.gate_report_fields_unchanged)}`);
    }
    if (sidecar.backend_platform_evidence_required !== true) {
      failures.push(`${report} backend_platform_evidence_required=${String(sidecar.backend_platform_evidence_required)}`);
    }
  }
}
function validateClosedDocs(moduleName, docs) {
  for (const doc of docs ?? []) {
    if (!existsSync(repoPath(doc))) {
      failures.push(`${moduleName} closeout 缺少旧 frontend 文档：${doc}`);
    }
  }
}

function validateRequiredSignals(closeout) {
  for (const signal of closeout.requiredSourceSignals ?? []) {
    requireIncludes(signal.file, signal.includes ?? []);
  }
}

function validatePluginsCloseout(closeout) {
  const rawPath = repoPath(closeout.rawAcceptance);
  if (!existsSync(rawPath)) {
    failures.push(`缺少 plugins raw acceptance：${closeout.rawAcceptance}`);
    return;
  }

  const raw = readJson(rawPath);
  const commands = new Map((raw.commands ?? []).map((command) => [command.command, command]));

  for (const commandName of closeout.closedCommands ?? []) {
    const command = commands.get(commandName);
    if (!command) {
      failures.push(`plugins closeout raw acceptance 缺少 ${commandName}`);
      continue;
    }
    if (command.uiTriggerObserved !== true || command.blocked !== false) {
      failures.push(
        `plugins closeout ${commandName} 不能关闭：uiTriggerObserved=${command.uiTriggerObserved} blocked=${command.blocked}`,
      );
    }
  }

  for (const commandName of closeout.notClosedCommands ?? []) {
    const command = commands.get(commandName);
    if (!command) {
      failures.push(`plugins closeout raw acceptance 缺少 ${commandName}`);
      continue;
    }
    if (command.uiTriggerObserved !== false || command.blocked !== true) {
      failures.push(
        `plugins closeout ${commandName} 不得标为未关闭以外状态：uiTriggerObserved=${command.uiTriggerObserved} blocked=${command.blocked}`,
      );
    }
  }

  const expectedManifestStatuses = [
    {
      arrayName: "FRONTEND_DUMPED_MODULE_RESTORATION_MATRIX",
      module: "plugins",
      command: "get_plugin_config",
      source: "assets/index-CL22l5v8.js",
      status: "contract-service-only",
    },
    {
      arrayName: "FRONTEND_DUMPED_MODULE_RESTORATION_MATRIX",
      module: "plugins",
      command: "update_plugin_config",
      source: "assets/index-CL22l5v8.js",
      status: "contract-service-only",
    },
  ];
  const expectedKeys = new Set(expectedManifestStatuses.map(manifestCloseoutKey));
  const actualKeys = new Set((closeout.closedManifestStatuses ?? []).map(manifestCloseoutKey));
  for (const entry of closeout.closedManifestStatuses ?? []) {
    if (!expectedKeys.has(manifestCloseoutKey(entry))) {
      failures.push(`plugins closeout 不允许关闭未验证 manifest 状态：${JSON.stringify(entry)}`);
    }
    if (entry.status !== "contract-service-only") {
      failures.push(`plugins closeout 不得把 config manifest 状态提升为 ${String(entry.status)}`);
    }
  }
  for (const expectedEntry of expectedManifestStatuses) {
    if (!actualKeys.has(manifestCloseoutKey(expectedEntry))) {
      failures.push(`plugins closeout 缺少 config manifest closeout：${expectedEntry.command}`);
    }
  }

  validateClosedDocs("plugins", closeout.closedFrontendDocs);
  validateRequiredSignals(closeout);
}

function validateRelayCloseout(closeout) {
  validateClosedDocs("relay", closeout.closedFrontendDocs);

  const expectedCommands = new Set([
    "set_block_official_passthrough",
    "get_passthrough_audit_log",
  ]);

  for (const commandName of closeout.closedCommands ?? []) {
    if (!expectedCommands.has(commandName)) {
      failures.push(`relay closeout 不允许关闭未验证命令：${commandName}`);
    }
  }
  for (const commandName of expectedCommands) {
    if (!(closeout.closedCommands ?? []).includes(commandName)) {
      failures.push(`relay closeout 缺少命令：${commandName}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateStringArraySet(label, actual, expected) {
  if (!Array.isArray(actual)) {
    failures.push(`${label} 必须是数组`);
    return;
  }

  const actualSet = new Set(actual);
  const expectedSet = new Set(expected);
  for (const value of expectedSet) {
    if (!actualSet.has(value)) failures.push(`${label} 缺少：${value}`);
  }
  for (const value of actualSet) {
    if (!expectedSet.has(value)) failures.push(`${label} 不允许：${String(value)}`);
  }
  if (actual.length !== actualSet.size) {
    failures.push(`${label} 存在重复条目`);
  }
}

function requireNoRelaySkeletonGatePromotionFields(closeout) {
  for (const field of [
    "closedCommands",
    "closedManifestStatuses",
    "closedGateReportFailures",
    "gateReports",
  ]) {
    const value = closeout[field];
    if (Array.isArray(value) && value.length > 0) {
      failures.push(`${closeout.id} 不得登记 ${field}；本 closeout 只能登记非 gating 当前源码骨架证据`);
    }
  }
}

function validateRelaySkeletonNonClaims(closeout, sidecar) {
  const closeoutNonClaims = closeout.nonClaims ?? [];
  const sidecarNonClaims = sidecar.non_claims ?? [];
  for (const required of RELAY_CURRENT_SOURCE_NON_CLAIMS) {
    if (!closeoutNonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
    if (!sidecarNonClaims.includes(required)) {
      failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} 缺少 non_claims：${required}`);
    }
  }
}

function validateRelayCurrentSourceCommandSignals() {
  const commandStringFiles = [
    "src/contracts/ipc/commands.ts",
    "src/services/relay/index.ts",
    "src/features/relay/contract.ts",
  ];
  for (const command of RELAY_CURRENT_SOURCE_COMMANDS) {
    for (const file of commandStringFiles) {
      requireIncludes(file, [`"${command}"`]);
    }
    requireIncludes("src/mocks/fixtures/commands.ts", [`${command}:`]);
    requireIncludes("src-tauri/src/lib.rs", [`commands::relay::${command}`]);
    requireIncludes("src-tauri/src/commands/relay.rs", [`pub fn ${command}`]);
    requireIncludes("src-tauri/src/application/usecase/relay.rs", [`pub fn ${command}`]);
  }
}

function validateRelayCurrentSourceSkeletonCloseout(closeout) {
  requireNoRelaySkeletonGatePromotionFields(closeout);

  const expectedSidecars = [RELAY_CURRENT_SOURCE_SIDECAR];
  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    expectedSidecars,
  );
  validateSidecarReports(closeout);

  const sidecarPath = repoPath(RELAY_CURRENT_SOURCE_SIDECAR);
  if (!existsSync(sidecarPath)) {
    failures.push(`${closeout.id} 缺少 sidecar report：${RELAY_CURRENT_SOURCE_SIDECAR}`);
    validateRequiredSignals(closeout);
    return;
  }

  const sidecar = readJson(sidecarPath);
  if (sidecar.schema !== "open-aimami.frontend_callchain_report.v1") {
    failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} schema=${String(sidecar.schema)}`);
  }
  if (sidecar.status !== "current-source-relay-skeleton-non-gating") {
    failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} status=${String(sidecar.status)}`);
  }
  if (Array.isArray(sidecar.closed_frontend_commands) && sidecar.closed_frontend_commands.length > 0) {
    failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} 不得登记 closed_frontend_commands`);
  }

  validateStringArraySet(
    `${RELAY_CURRENT_SOURCE_SIDECAR} current_source_ipc_commands`,
    sidecar.current_source_ipc_commands,
    RELAY_CURRENT_SOURCE_COMMANDS,
  );
  validateStringArraySet(
    `${RELAY_CURRENT_SOURCE_SIDECAR} gate_reports`,
    sidecar.gate_reports,
    RELAY_CURRENT_SOURCE_GATE_REPORTS,
  );
  for (const report of sidecar.gate_reports ?? []) {
    if (!existsSync(repoPath(report))) {
      failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} 缺少 gate-report：${report}`);
    }
  }

  const sourceSignals = sidecar.source_signals ?? {};
  for (const file of Object.values(sourceSignals)) {
    if (typeof file !== "string" || !existsSync(repoPath(file))) {
      failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} source_signals 缺少文件：${String(file)}`);
    }
  }

  validateRelaySkeletonNonClaims(closeout, sidecar);
  validateRelayCurrentSourceCommandSignals();
  validateRequiredSignals(closeout);
}

function manifestCloseoutKey(record) {
  return [
    record.arrayName ?? "",
    record.module ?? record.owner ?? "",
    record.queryKey ?? "",
    record.command ?? "",
    record.source ?? "",
    record.status ?? "",
  ].join("\u0000");
}

function validateGateReports(closeout, options = {}) {
  const reports = closeout.gateReports ?? [];
  if (reports.length === 0) {
    failures.push(`${closeout.id} 缺少 gate-report 证据`);
    return;
  }

  for (const report of reports) {
    const path = repoPath(report);
    if (!existsSync(path)) {
      failures.push(`${closeout.id} 缺少 gate-report：${report}`);
      continue;
    }
    const gate = readJson(path);
    for (const field of ["readyToImplement", "implementation_use", "gate_accepted", "full_leaf_100"]) {
      if (gate[field] !== true) {
        failures.push(`${report} ${field}=${String(gate[field])}`);
      }
    }
    const status = String(gate.status ?? "");
    const acceptedStatus = status === "PASS" || status.startsWith("accepted_full_leaf_100");
    if (options.requirePassStatus === true && gate.status !== "PASS") {
      failures.push(`${report} status=${String(gate.status)}`);
    }
    if (options.requirePassStatus !== true && !acceptedStatus) {
      failures.push(`${report} status=${String(gate.status)}`);
    }
    if (
      options.requireFrontendConsumerHandoff === true &&
      gate.frontendConsumerHandoff?.status !== "complete_current_source_frontend_chain"
    ) {
      failures.push(`${report} frontendConsumerHandoff.status=${String(gate.frontendConsumerHandoff?.status)}`);
    }
  }
}

function validateMcpSkillsCloseout(closeout) {
  validateClosedDocs("mcp-skills", closeout.closedFrontendDocs);
  validateGateReports(closeout, {
    requirePassStatus: true,
    requireFrontendConsumerHandoff: true,
  });

  const expected = [
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_INDEX_QUERY_MATRIX",
      module: "mcp",
      queryKey: "mcp-servers",
      source: "assets/index-CL22l5v8.js",
      status: "owner-closed",
    },
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_INDEX_QUERY_MATRIX",
      module: "skills",
      queryKey: "installed-skills",
      source: "assets/index-CL22l5v8.js",
      status: "owner-closed",
    },
  ];
  const expectedKeys = new Set(expected.map(manifestCloseoutKey));
  const actualKeys = new Set((closeout.closedManifestStatuses ?? []).map(manifestCloseoutKey));

  for (const entry of closeout.closedManifestStatuses ?? []) {
    if (!expectedKeys.has(manifestCloseoutKey(entry))) {
      failures.push(`${closeout.id} 不允许关闭未验证 manifest 状态：${JSON.stringify(entry)}`);
    }
    if (entry.status !== "owner-closed") {
      failures.push(`${closeout.id} 不得把 manifest 状态提升为 ${String(entry.status)}`);
    }
  }
  for (const expectedEntry of expected) {
    if (!actualKeys.has(manifestCloseoutKey(expectedEntry))) {
      failures.push(`${closeout.id} 缺少 manifest closeout：${expectedEntry.module}/${expectedEntry.queryKey}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateAccountsAnalyticsCloseout(closeout) {
  validateClosedDocs("accounts-analytics", closeout.closedFrontendDocs);
  validateGateReports(closeout);

  const expected = [
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_INDEX_QUERY_MATRIX",
      module: "accounts",
      queryKey: "quota-history",
      source: "assets/index-CL22l5v8.js",
      status: "owner-closed",
    },
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_INDEX_QUERY_MATRIX",
      module: "analytics",
      queryKey: "usage-analytics",
      source: "assets/index-CL22l5v8.js",
      status: "owner-closed",
    },
  ];
  const expectedKeys = new Set(expected.map(manifestCloseoutKey));
  const actualKeys = new Set((closeout.closedManifestStatuses ?? []).map(manifestCloseoutKey));

  for (const entry of closeout.closedManifestStatuses ?? []) {
    if (!expectedKeys.has(manifestCloseoutKey(entry))) {
      failures.push(`${closeout.id} 不允许关闭未验证 manifest 状态：${JSON.stringify(entry)}`);
    }
    if (entry.status !== "owner-closed") {
      failures.push(`${closeout.id} 不得把 manifest 状态提升为 ${String(entry.status)}`);
    }
  }
  for (const expectedEntry of expected) {
    if (!actualKeys.has(manifestCloseoutKey(expectedEntry))) {
      failures.push(`${closeout.id} 缺少 manifest closeout：${expectedEntry.module}/${expectedEntry.queryKey}`);
    }
  }

  const boundaryNotes = closeout.backendBoundaryNotes ?? [];
  if (!boundaryNotes.some((note) => note.includes("Rust analytics 后端仍是边界占位"))) {
    failures.push(`${closeout.id} 必须声明 analytics Rust 后端仍是边界占位`);
  }
  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "不把 accounts 或 analytics 的 manifest 状态改成 covered。",
    "不声明全文案验收完成。",
    "不声明 MAC/WIN 100% leaf 已完成。",
    "不声明 analytics Rust command/usecase/repository 已可调用闭合。",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateAppShellSourceOnlyCloseout(closeout) {
  validateClosedDocs("app-shell", closeout.closedFrontendDocs);

  const expected = [
    {
      arrayName: "FRONTEND_DUMPED_INDEX_ASSET_SOURCES",
      owner: "app-shell",
      source: "assets/index-CL22l5v8.js",
      status: "source-only",
    },
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_DESKTOP_MESSAGE_QUERY_MATRIX",
      module: "app-shell",
      queryKey: "desktop-message",
      source: "assets/index-CL22l5v8.js",
      status: "source-only",
    },
  ];
  const expectedKeys = new Set(expected.map(manifestCloseoutKey));
  const actualKeys = new Set((closeout.closedManifestStatuses ?? []).map(manifestCloseoutKey));

  for (const entry of closeout.closedManifestStatuses ?? []) {
    if (!expectedKeys.has(manifestCloseoutKey(entry))) {
      failures.push(`${closeout.id} 不允许关闭未验证 manifest 状态：${JSON.stringify(entry)}`);
    }
    if (entry.status !== "source-only") {
      failures.push(`${closeout.id} 不得把 manifest 状态提升为 ${String(entry.status)}`);
    }
  }
  for (const expectedEntry of expected) {
    if (!actualKeys.has(manifestCloseoutKey(expectedEntry))) {
      failures.push(`${closeout.id} 缺少 manifest closeout：${expectedEntry.owner ?? expectedEntry.module}`);
    }
  }

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "不把 app-shell 的 source-only manifest 状态改成 covered。",
    "不声明 update/restart/window-path 后端完整恢复。",
    "不声明 desktop-message 存在可审计 endpoint。",
    "不声明全文案验收完成。",
    "不声明 MAC/WIN 100% leaf 已完成。",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateSystemWindowMaintenanceCloseout(closeout) {
  const expectedCommands = new Set([
    "focus_main_window",
    "open_path",
    "clean",
    "rebuild_registry",
    "graceful_restart_for_update",
    "restart_codex",
  ]);
  const actualCommands = new Set(closeout.closedCommands ?? []);
  for (const command of expectedCommands) {
    if (!actualCommands.has(command)) {
      failures.push(`${closeout.id} 缺少 closedCommands：${command}`);
    }
  }
  for (const command of actualCommands) {
    if (!expectedCommands.has(command)) {
      failures.push(`${closeout.id} 不允许关闭命令：${command}`);
    }
  }
  if (!(closeout.notClosedCommands ?? []).includes("load_snapshot")) {
    failures.push(`${closeout.id} 必须显式保留 load_snapshot 为未关闭状态`);
  }

  const requiredSidecars = new Set([
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/frontend-callchain-report.json",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-maintenance/frontend-callchain-report.json",
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/frontend-callchain-report.json",
  ]);
  const actualSidecars = new Set(closeout.sidecarReports ?? []);
  for (const sidecar of requiredSidecars) {
    if (!actualSidecars.has(sidecar)) {
      failures.push(`${closeout.id} 缺少 sidecarReports：${sidecar}`);
    }
  }
  for (const sidecar of actualSidecars) {
    if (!requiredSidecars.has(sidecar)) {
      failures.push(`${closeout.id} 不允许登记 sidecar report：${sidecar}`);
    }
  }

  validateSidecarReports(closeout);
  validateClosedGateReportFailures(closeout);

  const expectedGateFailureKeys = new Set([
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000gate_accepted\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000implementation_use\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000dim6_missing\u0000true",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.focus_main_window.gate_accepted\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.focus_main_window.implementation_use\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.open_path.gate_accepted\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.open_path.implementation_use\u0000false",
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/gate-report.json\u0000gate_accepted\u0000false",
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/gate-report.json\u0000implementation_use\u0000false",
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/gate-report.json\u0000dim6_missing\u0000true",
  ]);
  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  for (const expected of expectedGateFailureKeys) {
    if (!actualGateFailureKeys.has(expected)) {
      failures.push(`${closeout.id} 缺少允许登记的 gate-report failure：${expected}`);
    }
  }
  for (const actual of actualGateFailureKeys) {
    if (!expectedGateFailureKeys.has(actual)) {
      failures.push(`${closeout.id} 不允许登记 gate-report failure：${actual}`);
    }
  }

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "\u4e0d\u58f0\u660e\u5168\u91cf\u53f6\u5b50\u9a8c\u6536\u5b8c\u6210",
    "\u4e0d\u542f\u7528\u540e\u7aef\u771f\u5b9e\u6062\u590d",
    "\u4e0d\u4fee\u6539 gate-report",
    "\u4e0d\u58f0\u660e MAC/WIN 100%",
    "\u4e0d\u5173\u95ed load_snapshot",
    "\u4e0d\u767b\u8bb0 accounts \u6216 plugins \u7684 gate-report \u5931\u8d25\u5b57\u6bb5",
    "\u4e0d\u767b\u8bb0\u4efb\u4f55 full_leaf_100=false \u5b57\u6bb5",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}
const closeouts = readJson(closeoutPath);
if (closeouts.schema !== "open-aimami.frontend_current_source_closeouts.v1") {
  failures.push(`${toRepoPath(closeoutPath)} schema 不匹配`);
}

for (const closeout of closeouts.closeouts ?? []) {
  if (closeout.id === "plugins-current-route-api-command-mock-chain") {
    validatePluginsCloseout(closeout);
  } else if (closeout.id === "mcp-skills-index-query-owner-closed-chain") {
    validateMcpSkillsCloseout(closeout);
  } else if (closeout.id === "accounts-analytics-index-query-owner-closed-chain") {
    validateAccountsAnalyticsCloseout(closeout);
  } else if (closeout.id === "app-shell-source-only-index-and-desktop-message-boundary") {
    validateAppShellSourceOnlyCloseout(closeout);
  } else if (closeout.id === "system-window-maintenance-frontend-callchain-non-gating-closeout") {
    validateSystemWindowMaintenanceCloseout(closeout);
  } else if (closeout.id === "relay-passthrough-audit-backend-skeleton-chain") {
    validateRelayCloseout(closeout);
  } else if (closeout.id === RELAY_CURRENT_SOURCE_SKELETON_ID) {
    validateRelayCurrentSourceSkeletonCloseout(closeout);
  } else {
    failures.push(`未知 closeout id：${closeout.id}`);
  }
}

if (failures.length > 0) {
  console.error("前端当前源码 closeout 验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(`前端当前源码 closeout 验证通过：${(closeouts.closeouts ?? []).length} 项。`);
