import { existsSync, readFileSync } from "node:fs";
import { dirname, join, relative, sep } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const failures = [];

const pendingCommands = [
  "load_pending_auto_switch",
  "dismiss_pending_auto_switch",
  "confirm_pending_auto_switch",
  "confirm_pending_auto_switch_and_restart_codex",
];

const files = {
  map: "docs/reconstruction/daemon-autoswitch-current-source-map.md",
  closeouts: "docs/reconstruction/frontend-current-source-closeouts.json",
  sourceMap: "docs/reconstruction/source-map.md",
  reconstructionReadme: "docs/reconstruction/README.md",
  packageJson: "package.json",
  frontendValidator: "scripts/validate-frontend.mjs",
  systemService: "src/services/system/index.ts",
  daemonService: "src/services/daemon-autoswitch/index.ts",
  query: "src/features/daemon-autoswitch/hooks/query.ts",
  mutation: "src/features/daemon-autoswitch/hooks/mutation.ts",
  runtime: "src/features/daemon-autoswitch/hooks/runtime.ts",
  cache: "src/features/daemon-autoswitch/cache/index.ts",
  pendingRuntime: "src/app/runtime/pending.ts",
  promptHost: "src/app/providers/prompt.tsx",
  mocks: "src/mocks/fixtures/commands.ts",
  ipcContracts: "src/contracts/ipc/commands.ts",
};

function repoPath(path) {
  return join(repoRoot, path);
}

function toRepoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function readRequired(path) {
  const fullPath = repoPath(path);
  if (!existsSync(fullPath)) {
    failures.push(`缺少必需文件：${path}`);
    return "";
  }
  return readFileSync(fullPath, "utf8");
}

function readJson(path) {
  const text = readRequired(path);
  if (!text) return {};
  try {
    return JSON.parse(text);
  } catch (error) {
    failures.push(`${path} JSON 解析失败：${error.message}`);
    return {};
  }
}

function pass(label) {
  console.log(`通过：${label}`);
}

function fail(label, detail = "") {
  failures.push(`${label}${detail ? `：${detail}` : ""}`);
}

function assertIncludes(label, text, fragments) {
  const missing = fragments.filter((fragment) => !text.includes(fragment));
  if (missing.length === 0) {
    pass(label);
    return;
  }
  fail(label, `缺少片段 ${missing.map((item) => JSON.stringify(item)).join("、")}`);
}

function assertNotIncludes(label, text, fragments) {
  const matched = fragments.filter((fragment) => text.includes(fragment));
  if (matched.length === 0) {
    pass(label);
    return;
  }
  fail(label, `不允许出现片段 ${matched.map((item) => JSON.stringify(item)).join("、")}`);
}

function assertNoRegex(label, text, checks) {
  const matched = checks.filter(([pattern]) => pattern.test(text));
  if (matched.length === 0) {
    pass(label);
    return;
  }
  for (const [, message] of matched) {
    fail(label, message);
  }
}

function assertArraySet(label, actual, expected) {
  if (!Array.isArray(actual)) {
    fail(label, "必须是数组");
    return;
  }
  const actualSet = new Set(actual);
  const expectedSet = new Set(expected);
  for (const value of expectedSet) {
    if (!actualSet.has(value)) fail(label, `缺少 ${value}`);
  }
  for (const value of actualSet) {
    if (!expectedSet.has(value)) fail(label, `不允许 ${String(value)}`);
  }
  if (actual.length !== actualSet.size) {
    fail(label, "存在重复条目");
  }
  if (failures.length === 0) pass(label);
}

function findContractBlock(source, command) {
  const commandMarker = `"command": "${command}"`;
  const commandIndex = source.indexOf(commandMarker);
  if (commandIndex < 0) return "";
  const start = source.lastIndexOf("{", commandIndex);
  const nextStart = source.indexOf("\n  {", commandIndex + commandMarker.length);
  const end = nextStart > 0 ? nextStart : source.indexOf("\n] as const", commandIndex);
  return source.slice(start, end);
}

function assertContractCommand(source, command, wrapper) {
  const block = findContractBlock(source, command);
  if (!block) {
    fail(`IPC contract 登记 ${command}`, "缺少命令块");
    return;
  }
  assertIncludes(`IPC contract 登记 ${command}`, block, [
    '"domain": "daemon-autoswitch"',
    `"command": "${command}"`,
    `"${wrapper}"`,
    '"tier": "P1"',
  ]);
}

function assertCloseout(closeouts) {
  const closeout = (closeouts.closeouts ?? []).find(
    (item) =>
      item.id ===
      "daemon-autoswitch-pending-auto-switch-current-source-frontend-chain",
  );
  if (!closeout) {
    fail("closeout 登记", "缺少 daemon-autoswitch pending current-source 条目");
    return;
  }

  const allowedFields = new Set([
    "id",
    "module",
    "status",
    "currentSourceMap",
    "currentSourceCommands",
    "requiredSourceSignals",
    "backendBoundaryNotes",
    "nonClaims",
    "reason",
  ]);
  for (const field of Object.keys(closeout)) {
    if (!allowedFields.has(field)) {
      fail("closeout 字段边界", `不允许字段 ${field}`);
    }
  }
  if (closeout.module !== "daemon-autoswitch") {
    fail("closeout module", `实际为 ${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    fail("closeout status", `实际为 ${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== files.map) {
    fail("closeout currentSourceMap", `实际为 ${String(closeout.currentSourceMap)}`);
  }

  assertArraySet("closeout currentSourceCommands", closeout.currentSourceCommands, pendingCommands);
  assertArraySet(
    "closeout requiredSourceSignals 文件",
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    [
      files.map,
      files.systemService,
      files.daemonService,
      files.query,
      files.mutation,
      files.runtime,
      files.cache,
      files.pendingRuntime,
      files.promptHost,
      files.mocks,
      files.ipcContracts,
    ],
  );

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  assertIncludes("closeout 未声明边界", nonClaimsText, [
    "不修改 raw/internal 证据",
    "不声明 gate_accepted、implementation_use、dim6、full_leaf_100 已完成",
    "不恢复后端待确认队列、真实账号切换、真实重启、真实 watcher 或平台副作用",
    "不新增 route、sidebar、header、tray、settings 或 voice 入口",
    "不把 mock handler 等同真实后端行为",
  ]);

  const backendNotes = (closeout.backendBoundaryNotes ?? []).join("\n");
  assertIncludes("closeout 后端边界", backendNotes, [
    "后端待确认队列、真实账号切换、真实重启、真实 watcher 仍未恢复",
  ]);

  const reason = closeout.reason ?? "";
  assertIncludes("closeout reason", reason, [
    "当前源码部分收口",
    "system service",
    "daemon-autoswitch service facade",
    "query/mutation/cache/runtime subscription",
    "prompt host",
    "mock handlers",
    "IPC contracts",
    "不声明真实后端待确认队列、真实账号切换、真实重启或真实 watcher 已恢复",
  ]);

  for (const signal of closeout.requiredSourceSignals ?? []) {
    const text = readRequired(signal.file);
    assertIncludes(`${signal.file} source signal`, text, signal.includes ?? []);
  }
}

const mapText = readRequired(files.map);
const closeouts = readJson(files.closeouts);
const sourceMap = readRequired(files.sourceMap);
const reconstructionReadme = readRequired(files.reconstructionReadme);
const packageJson = readJson(files.packageJson);
const frontendValidator = readRequired(files.frontendValidator);
const systemService = readRequired(files.systemService);
const daemonService = readRequired(files.daemonService);
const query = readRequired(files.query);
const mutation = readRequired(files.mutation);
const runtime = readRequired(files.runtime);
const cache = readRequired(files.cache);
const pendingRuntime = readRequired(files.pendingRuntime);
const promptHost = readRequired(files.promptHost);
const mocks = readRequired(files.mocks);
const ipcContracts = readRequired(files.ipcContracts);

assertIncludes("evidence map 说明边界", mapText, [
  "自动切换待确认状态当前源码证据映射",
  "当前源码部分收口",
  "load_pending_auto_switch",
  "dismiss_pending_auto_switch",
  "confirm_pending_auto_switch",
  "confirm_pending_auto_switch_and_restart_codex",
  "后端待确认队列、真实账号切换、真实重启或真实 watcher 已恢复",
  "不新增 route、sidebar、header、tray、settings 入口或 `voice` 入口",
  "不把 mock handler 等同真实后端行为",
]);
assertNoRegex("evidence map 不写个人绝对路径", mapText, [
  [/[A-Za-z]:\\/, "不允许出现本机绝对路径"],
  [/Users[\\/]/, "不允许出现用户目录路径"],
]);
assertNotIncludes("evidence map 不声明 gate 完成", mapText, [
  "gate_accepted 已完成",
  "implementation_use 已完成",
  "dim6 已完成",
  "full_leaf_100 已完成",
]);

assertIncludes("source-map 注册 daemon-autoswitch current-source map", sourceMap, [
  files.map,
  "scripts/validate-frontend-daemon-autoswitch-current-source.mjs",
  "待确认自动切换",
]);
assertIncludes("reconstruction README 注册 daemon-autoswitch current-source map", reconstructionReadme, [
  files.map,
  "待确认自动切换",
  "scripts/validate-frontend-daemon-autoswitch-current-source.mjs",
]);

if (
  packageJson.scripts?.["validate:frontend-daemon-autoswitch-current-source"] ===
  "node scripts/validate-frontend-daemon-autoswitch-current-source.mjs"
) {
  pass("package.json 注册 daemon-autoswitch current-source validator");
} else {
  fail("package.json 注册 daemon-autoswitch current-source validator");
}
assertIncludes("validate-frontend 聚合 daemon-autoswitch current-source validator", frontendValidator, [
  '["validate-frontend-daemon-autoswitch-current-source.mjs"]',
]);

assertIncludes("system service 覆盖四条 pending IPC", systemService, [
  "PendingAutoSwitchStatePayload",
  "loadPendingAutoSwitch: () =>",
  '"load_pending_auto_switch"',
  "dismissPendingAutoSwitch: () =>",
  '"dismiss_pending_auto_switch"',
  "confirmPendingAutoSwitch: () =>",
  '"confirm_pending_auto_switch"',
  "confirmPendingAutoSwitchAndRestartCodex: () =>",
  '"confirm_pending_auto_switch_and_restart_codex"',
]);

assertIncludes("daemon-autoswitch service facade 覆盖 pending 命令和事件", daemonService, [
  'const AUTO_SWITCH_PENDING_EVENT = "auto-switch-pending";',
  "listen<PendingAutoSwitchEventPayload>",
  "unlisten?.()",
  "loadPendingAutoSwitch: systemService.loadPendingAutoSwitch",
  "dismissPendingAutoSwitch: systemService.dismissPendingAutoSwitch",
  "confirmPendingAutoSwitch: systemService.confirmPendingAutoSwitch",
  "confirmPendingAutoSwitchAndRestartCodex:",
  "systemService.confirmPendingAutoSwitchAndRestartCodex",
  "subscribePendingAutoSwitch",
]);

assertIncludes("daemon-autoswitch query 读取 pending 走 cache helper", query, [
  "DAEMON_AUTOSWITCH_PENDING_QUERY_KEY",
  "runDaemonAutoswitchQuery",
  "daemonAutoswitchService.loadPendingAutoSwitch()",
  "useDaemonAutoswitchPendingQuery",
]);
assertNotIncludes("daemon-autoswitch query 不直接写 cache", query, [
  "setQueryData(",
  "invalidateQueries(",
  "cancelQueries(",
]);

assertIncludes("daemon-autoswitch mutation 覆盖 dismiss 与重启变体", mutation, [
  "prepareDaemonAutoswitchMutation",
  "writeDaemonAutoswitchMutationPayload",
  "dismissPendingMutation",
  "daemonAutoswitchService.dismissPendingAutoSwitch()",
  "confirmPendingAndRestartMutation",
  "daemonAutoswitchService.confirmPendingAutoSwitchAndRestartCodex()",
  "reloadDaemonAutoswitchAfterMutation(queryClient)",
  "invalidateDaemonAutoswitchContractQueries(queryClient)",
]);

assertIncludes("daemon-autoswitch cache 持有 pending key、mutation fence 与 runtime 映射", cache, [
  "DAEMON_AUTOSWITCH_PENDING_QUERY_KEY",
  "DAEMON_AUTOSWITCH_RUNTIME_EVENT_CACHE_TARGETS",
  '"auto-switch-pending"',
  "DAEMON_AUTOSWITCH_PENDING_QUERY_KEY, type: \"active\"",
  "runDaemonAutoswitchQuery",
  "prepareDaemonAutoswitchMutation",
  "writeDaemonAutoswitchMutationPayload",
  "applyDaemonAutoswitchRuntimeEventToCache",
]);

assertIncludes("daemon-autoswitch runtime subscription 只通过 cache helper 消费事件", runtime, [
  "daemonAutoswitchService.subscribePendingAutoSwitch",
  "applyDaemonAutoswitchRuntimeEventToCache(",
  '"auto-switch-pending"',
]);
assertNotIncludes("daemon-autoswitch runtime hook 不直接写 TanStack cache", runtime, [
  "setQueryData(",
  "invalidateQueries(",
  "DAEMON_AUTOSWITCH_PENDING_QUERY_KEY",
]);

assertIncludes("pending runtime hook 转换 prompt view model", pendingRuntime, [
  "useDaemonAutoswitchPendingPrompt",
  "buildPendingAutoSwitchView",
  "currentAccount.email",
  "candidateAccount.email",
  "prompt.dismissPendingAction.run",
  "prompt.confirmPendingAndRestartAction.run",
]);

assertIncludes("PromptHost 渲染待确认自动切换 prompt", promptHost, [
  "usePendingAutoSwitchPrompt",
  "showPendingAutoSwitchPrompt",
  "PendingAutoSwitchPromptDialog",
  "settings.autoSwitchPromptTitle",
  "settings.autoSwitchPromptSkip",
  "settings.autoSwitchPromptConfirm",
]);

assertIncludes("E2E mock 覆盖四条 pending 命令", mocks, [
  "const pendingAutoSwitchStateHandler",
  "const dismissPendingAutoSwitchHandler",
  "const confirmPendingAutoSwitchHandler",
  "daemonAutoswitchMockState",
  "confirm_pending_auto_switch: confirmPendingAutoSwitchHandler",
  "confirm_pending_auto_switch_and_restart_codex: confirmPendingAutoSwitchHandler",
  "dismiss_pending_auto_switch: dismissPendingAutoSwitchHandler",
  "load_pending_auto_switch: pendingAutoSwitchStateHandler",
]);

assertContractCommand(ipcContracts, "load_pending_auto_switch", "loadPendingAutoSwitch");
assertContractCommand(ipcContracts, "dismiss_pending_auto_switch", "dismissPendingAutoSwitch");
assertContractCommand(ipcContracts, "confirm_pending_auto_switch", "confirmPendingAutoSwitch");
assertContractCommand(
  ipcContracts,
  "confirm_pending_auto_switch_and_restart_codex",
  "confirmPendingAutoSwitchAndRestartCodex",
);

assertCloseout(closeouts);

if (failures.length > 0) {
  console.error("FAIL: daemon-autoswitch 待确认自动切换当前源码验证失败");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  `PASS: daemon-autoswitch 待确认自动切换当前源码验证通过，检查文件 ${Object.keys(files).length} 个。`,
);
