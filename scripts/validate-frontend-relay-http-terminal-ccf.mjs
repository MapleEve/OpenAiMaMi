import { existsSync, readFileSync } from "node:fs";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const closeoutPath = repoPath("docs/reconstruction/frontend-current-source-closeouts.json");
const mapPath = "docs/reconstruction/relay-http-terminal-current-source-map.md";
const closeoutId = "relay-targeted-http-terminal-ui-trigger-current-source-chain";
const sidecarReport =
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-relay-core-bootstrap/frontend-callchain-report.json";
const gateReport = "evidence/full-chain/internal/audits/audits/windows-1.0.9-relay/gate-report.json";
const commands = [
  "test_relay_provider",
  "test_relay_draft",
  "fetch_relay_models_draft",
];
const expectedSignalFiles = [
  gateReport,
  sidecarReport,
  "src/contracts/ipc/commands.ts",
  "src/features/relay/panels/panels.tsx",
  "src/features/relay/hooks/page.ts",
  "src/features/relay/hooks/mutation.ts",
  "src/services/relay/index.ts",
  "src/mocks/fixtures/commands.ts",
  "src-tauri/src/lib.rs",
  "src-tauri/src/commands/relay.rs",
  "src-tauri/src/application/usecase/relay.rs",
  "src-tauri/src/application/usecase/relay/models.rs",
];
const requiredNonClaims = [
  "不声明 Windows raw/internal readyToImplement 已恢复。",
  "不声明 implementation_use、gate_accepted 或 full_leaf_100 已恢复。",
  "不修改任何 gate-report 字段。",
  "不把 macOS 证据推导为 Windows 行为。",
  "不声明真实 HTTP 网络、远端模型拉取或外部代理行为已经恢复。",
];
const sourceSnippets = new Map([
  [
    mapPath,
    [
      "# relay HTTP-terminal 当前源码映射",
      "`test_relay_provider`",
      "`test_relay_draft`",
      "`fetch_relay_models_draft`",
      "relay test retry/stream retry 错误语义",
      "不声明真实 HTTP 网络",
      "npm run validate:frontend-relay-http-terminal-ccf",
      "npm run validate:backend-relay-owner",
    ],
  ],
  [
    gateReport,
    [
      "\"strictImplementationUse_commands\"",
      "\"test_relay_provider\"",
      "\"test_relay_draft\"",
      "\"fetch_relay_models_draft\"",
      "Remaining blocker to readyToImplement = dim1 frontend CCF not_closed_windows",
      "doNotInferWindowsFromMacOS",
    ],
  ],
  [
    sidecarReport,
    [
      "\"status\": \"current-source-relay-skeleton-non-gating\"",
      "\"gate_report_fields_unchanged\": true",
      "\"fetch_relay_models_draft\"",
      "\"test_relay_draft\"",
      "\"test_relay_provider\"",
    ],
  ],
  [
    "src/contracts/ipc/commands.ts",
    [
      "\"command\": \"test_relay_provider\"",
      "\"command\": \"test_relay_draft\"",
      "\"command\": \"fetch_relay_models_draft\"",
    ],
  ],
  [
    "src/features/relay/panels/panels.tsx",
    [
      "onTest={() => void controller.actions.testProvider(provider)}",
      "onFetchModels={() => void controller.actions.fetchModels()}",
      "onTestDraft={() => void controller.actions.testDraft()}",
    ],
  ],
  [
    "src/features/relay/hooks/page.ts",
    [
      "const testDraft = async () => {",
      "module.providerActions.testDraft.run(buildDraftInput())",
      "const fetchModels = async () => {",
      "module.providerActions.fetchModelsDraft.run(buildDraftInput())",
      "const testProvider = async (provider: RelayProviderRow) => {",
      "module.providerActions.testProvider.run(provider.id)",
    ],
  ],
  [
    "src/features/relay/hooks/mutation.ts",
    [
      "relayService.test(providerId)",
      "relayService.testDraft(input)",
      "relayService.fetchModelsDraft(input)",
      "testProvider: {",
      "testDraft: {",
      "fetchModelsDraft: {",
    ],
  ],
  [
    "src/services/relay/index.ts",
    [
      "invokeIpc<CoreEnvelope<RelayTestPayload>>(\"test_relay_provider\"",
      "invokeIpc<CoreEnvelope<RelayTestPayload>>(\"test_relay_draft\"",
      "invokeIpc<CoreEnvelope<string[]>>(\"fetch_relay_models_draft\"",
    ],
  ],
  [
    "src/mocks/fixtures/commands.ts",
    [
      "fetch_relay_models_draft: relayModelsHandler",
      "const baseUrl = readRecordString(input, [\"baseUrl\", \"url\", \"endpoint\"], \"\");",
      "return { ...envelope, data: baseUrl ? relayModelsFromArgs(context) : [] };",
      "test_relay_draft: relayTestHandler",
      "test_relay_provider: relayTestHandler",
    ],
  ],
  [
    "src-tauri/src/lib.rs",
    [
      "commands::relay::fetch_relay_models_draft",
      "commands::relay::test_relay_draft",
      "commands::relay::test_relay_provider",
    ],
  ],
  [
    "src-tauri/src/commands/relay.rs",
    [
      "pub fn test_relay_provider",
      "pub fn test_relay_draft",
      "pub fn fetch_relay_models_draft",
    ],
  ],
  [
    "src-tauri/src/application/usecase/relay.rs",
    [
      "pub fn test_relay_provider",
      "test_relay_provider_with_platform",
      "platform.test_relay_mock_terminal",
      "relay_repository::record_provider_health",
      "pub fn test_relay_draft",
      "test_relay_draft_with_platform",
      "fetch_relay_models_draft_uses_mock_terminal_without_state_write",
      "test_relay_draft_uses_mock_terminal_without_state_write",
      "test_relay_provider_writes_health_result_to_repository",
    ],
  ],
  [
    "src-tauri/src/application/usecase/relay/models.rs",
    [
      "pub fn fetch_relay_models_draft",
      "fetch_relay_models_draft_with_platform",
      "platform.fetch_models_mock_terminal",
      "relay_core::parse_model_ids",
    ],
  ],
]);

const failures = [];

function repoPath(path) {
  return join(repoRoot, ...path.split("/"));
}

function readJson(path) {
  return JSON.parse(readFileSync(path, "utf8"));
}

function readText(path) {
  return readFileSync(repoPath(path), "utf8");
}

function requireSet(label, actual, expected) {
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
  if (actual.length !== actualSet.size) failures.push(`${label} 存在重复条目`);
}

function requireFileIncludes(file, snippets) {
  const path = repoPath(file);
  if (!existsSync(path)) {
    failures.push(`缺少 relay HTTP-terminal CCF 文件：${file}`);
    return;
  }
  const text = readText(file);
  for (const snippet of snippets) {
    if (!text.includes(snippet)) {
      failures.push(`${file} 缺少 relay HTTP-terminal CCF 片段：${snippet}`);
    }
  }
}

const closeouts = readJson(closeoutPath);
const closeout = (closeouts.closeouts ?? []).find((entry) => entry.id === closeoutId);
if (!closeout) {
  failures.push(`缺少 closeout：${closeoutId}`);
} else {
  if (closeout.module !== "relay-http-terminal") {
    failures.push(`${closeoutId} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeoutId} status=${String(closeout.status)}`);
  }
  requireSet(`${closeoutId} currentSourceCommands`, closeout.currentSourceCommands, commands);
  requireSet(`${closeoutId} gateReports`, closeout.gateReports, [gateReport]);
  requireSet(`${closeoutId} sidecarReports`, closeout.sidecarReports, [sidecarReport]);
  requireSet(
    `${closeoutId} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    expectedSignalFiles,
  );

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of requiredNonClaims) {
    if (!nonClaims.includes(required)) failures.push(`${closeoutId} 缺少 nonClaims：${required}`);
  }
  if (
    typeof closeout.reason !== "string" ||
    !closeout.reason.includes("current-source partial closeout") ||
    !closeout.reason.includes("UI 触发链") ||
    !closeout.reason.includes("不声明 Windows readyToImplement")
  ) {
    failures.push(`${closeoutId} reason 必须声明 current-source partial closeout、UI 触发链和不声明 Windows readyToImplement`);
  }

  for (const signal of closeout.requiredSourceSignals ?? []) {
    requireFileIncludes(signal.file, signal.includes ?? []);
  }
}

for (const [file, snippets] of sourceSnippets) {
  requireFileIncludes(file, snippets);
}

const gate = readJson(repoPath(gateReport));
requireSet(
  `${gateReport} strictImplementationUse_commands`,
  gate.strictImplementationUse_commands,
  commands,
);
for (const command of commands) {
  const blocker = gate.strictImplementationUse_blockers?.[command];
  if (
    typeof blocker !== "string" ||
    !blocker.includes("dim1 frontend CCF not_closed_windows")
  ) {
    failures.push(`${gateReport} ${command} 缺少 dim1 frontend CCF not_closed_windows 残留说明`);
  }
}

const sidecar = readJson(repoPath(sidecarReport));
if (sidecar.full_leaf !== false || sidecar.gate_report_fields_unchanged !== true) {
  failures.push(`${sidecarReport} 必须保持非 full leaf 且 gate 字段不变`);
}
for (const command of commands) {
  if (!sidecar.current_source_ipc_commands?.includes(command)) {
    failures.push(`${sidecarReport} current_source_ipc_commands 缺少 ${command}`);
  }
}

if (failures.length > 0) {
  console.error("relay HTTP-terminal 当前源码 UI 触发链验证失败：");
  for (const failure of failures) console.error(`- ${failure}`);
  process.exit(1);
}

console.log("relay HTTP-terminal 当前源码 UI 触发链验证通过：3/3。");
