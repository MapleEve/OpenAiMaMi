import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  map: "docs/reconstruction/mystery-unlock-current-source-map.md",
  closeouts: "docs/reconstruction/frontend-current-source-closeouts.json",
  closeoutValidator: "scripts/validate-frontend-current-source-closeouts.mjs",
  mysteryGatesValidator: "scripts/validate-frontend-mystery-gates.mjs",
  sourceMap: "docs/reconstruction/source-map.md",
  reconstructionReadme: "docs/reconstruction/README.md",
  packageJson: "package.json",
  frontendAggregator: "scripts/validate-frontend.mjs",
  systemService: "src/services/system/index.ts",
  overviewCache: "src/features/overview/cache/index.ts",
  overviewQuery: "src/features/overview/hooks/query.ts",
  overviewMutation: "src/features/overview/hooks/mutation.ts",
  routeGates: "src/routes/registry/gates.ts",
  routerShell: "src/app/router/shell.tsx",
  mocks: "src/mocks/fixtures/commands.ts",
  ipcContracts: "src/contracts/ipc/commands.ts",
  backendMysteryCommands: "src-tauri/src/commands/mystery.rs",
  backendMysteryUsecase: "src-tauri/src/application/usecase/mystery.rs",
  backendSettingsRepository: "src-tauri/src/repository/settings.rs",
  backendMysteryContract: "src-tauri/src/contracts/mystery.rs",
  backendMysteryValidator: "scripts/validate-backend-mystery-owner.mjs",
};

const npmScript = "validate:frontend-mystery-unlock-current-source";
const validatorScript = "validate-frontend-mystery-unlock-current-source.mjs";
const grantsCloseoutId = "mystery-unlock-grants-current-source-chain";
const routeCloseoutId = "mystery-route-allowed-current-source-helper-chain";
const commands = ["get_mystery_unlock_grants", "merge_mystery_unlock_grants"];
const forbiddenHelperCommands = ["mystery_route_allowed", "route_allowed"];
const gateReport = "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json";
const grantsGateFailureKeys = [
  `${gateReport}\u0000gate_accepted\u0000false`,
  `${gateReport}\u0000implementation_use\u0000false`,
  `${gateReport}\u0000dim6_missing\u0000true`,
  `${gateReport}\u0000leaves.get_mystery_unlock_grants.gate_accepted\u0000false`,
  `${gateReport}\u0000leaves.get_mystery_unlock_grants.implementation_use\u0000false`,
  `${gateReport}\u0000leaves.merge_mystery_unlock_grants.gate_accepted\u0000false`,
  `${gateReport}\u0000leaves.merge_mystery_unlock_grants.implementation_use\u0000false`,
  `${gateReport}\u0000cluster_gate_summary.readyToImplement\u00000`,
];
const routeGateFailureKeys = [
  `${gateReport}\u0000leaves.mystery_route_allowed.gate_accepted\u0000false`,
  `${gateReport}\u0000leaves.mystery_route_allowed.implementation_use\u0000false`,
];
const forbiddenCompletionClaims = [
  "accepted_full_leaf_100",
  "\"gate_accepted\": true",
  "\"implementation_use\": true",
  "\"dim6_missing\": false",
  "\"full_leaf\": true",
  "\"full_leaf_100\": true",
];

function repoPath(path) {
  return join(repoRoot, ...path.split("/"));
}

function toRepoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function readRequired(path) {
  const fullPath = repoPath(path);
  if (!existsSync(fullPath)) {
    failures.push(`缺少必要文件：${path}`);
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

function compact(text) {
  return text.replace(/\s+/g, "");
}

function assertIncludes(label, text, fragments) {
  const compactText = compact(text);
  const missing = fragments.filter(
    (fragment) => !text.includes(fragment) && !compactText.includes(compact(fragment)),
  );
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
  fail(label, `不允许片段 ${matched.map((item) => JSON.stringify(item)).join("、")}`);
}

function assertArraySet(label, actual, expected) {
  if (!Array.isArray(actual)) {
    fail(label, "必须是数组");
    return;
  }
  const actualSet = new Set(actual);
  const expectedSet = new Set(expected);
  const missing = expected.filter((item) => !actualSet.has(item));
  const extra = actual.filter((item) => !expectedSet.has(item));
  if (missing.length === 0 && extra.length === 0 && actual.length === actualSet.size) {
    pass(label);
    return;
  }
  if (missing.length > 0) fail(label, `缺少 ${missing.join("、")}`);
  if (extra.length > 0) fail(label, `不允许 ${extra.join("、")}`);
  if (actual.length !== actualSet.size) fail(label, "存在重复条目");
}

function assertGateFailureKeys(label, closeout, expected) {
  const entries = closeout?.closedGateReportFailures;
  if (!Array.isArray(entries)) {
    fail(label, "缺少 closedGateReportFailures");
    return;
  }
  const actual = entries.map(
    (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
  );
  assertArraySet(label, actual, expected);
  for (const entry of entries) {
    if (String(entry.path).includes("full_leaf_100")) {
      fail(label, `不得登记 full_leaf_100：${entry.path}`);
    }
    if (entry.classification !== "scope-selection") {
      fail(label, `classification 必须是 scope-selection：${String(entry.classification)}`);
    }
    if (typeof entry.reason !== "string" || !entry.reason.includes("不声明")) {
      fail(label, `reason 必须说明不声明完成：${String(entry.reason)}`);
    }
  }
}

function findCloseout(closeouts, id) {
  const matches = (closeouts.closeouts ?? []).filter((item) => item.id === id);
  if (matches.length !== 1) {
    fail(`${id} closeout 唯一`, `实际数量 ${matches.length}`);
    return null;
  }
  pass(`${id} closeout 唯一`);
  return matches[0];
}

function assertMap(mapText) {
  assertIncludes("map 写明 mystery unlock current-source 标题和范围", mapText, [
    "mystery unlock 前后端当前源码证据映射",
    "get_mystery_unlock_grants",
    "merge_mystery_unlock_grants",
    "后端 command / usecase",
    "后端 repository / DTO",
    "resolveMysteryGrantRoute",
    "resolveRouteVisibility",
    "route helper",
    "不是 IPC command",
  ]);
  assertIncludes("map 写明 owner 文件", mapText, [
    files.ipcContracts,
    files.systemService,
    files.overviewCache,
    files.overviewQuery,
    files.overviewMutation,
    files.backendMysteryCommands,
    files.backendMysteryUsecase,
    files.backendSettingsRepository,
    files.backendMysteryContract,
    files.routeGates,
    files.routerShell,
    files.mocks,
  ]);
  assertIncludes("map 写明未声明边界", mapText, [
    "不修改任何 raw/internal `gate-report.json`",
    "只登记 `macos-1.0.9-mystery-unlock/gate-report.json` 中非 `full_leaf_100` 的 10 个非绿字段",
    "不登记 `full_leaf_100`，不把登记视为 gate 通过",
    "不声明 `dim6`、`gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成",
    "不接入 `voice`",
    "不声明后端闭源业务",
  ]);
  assertNotIncludes("map 不声明完成态", mapText, forbiddenCompletionClaims);
  assertNotIncludes("map 不写本机路径或密钥", mapText, [
    "C:\\Users\\",
    "C:/Users/",
    "/Users/",
    "sk-",
    "ghp_",
    "BEGIN PRIVATE KEY",
  ]);
}

function assertRegistrations(packageJson, frontendAggregator, sourceMap, reconstructionReadme) {
  if (packageJson.scripts?.[npmScript] === `node scripts/${validatorScript}`) {
    pass("package.json 注册 mystery unlock current-source validator");
  } else {
    fail("package.json 注册 mystery unlock current-source validator");
  }
  assertIncludes("前端聚合验证接入 mystery unlock validator", frontendAggregator, [
    `["${validatorScript}"]`,
  ]);
  assertIncludes("source-map 注册 mystery unlock map", sourceMap, [
    files.map,
    `scripts/${validatorScript}`,
    "mystery unlock grants 与 route gate/helper",
  ]);
  assertIncludes("reconstruction README 注册 mystery unlock map", reconstructionReadme, [
    files.map,
    `scripts/${validatorScript}`,
    "mystery unlock grants 与 route gate/helper",
  ]);
}

function assertIpcContracts(ipcContracts) {
  for (const command of commands) {
    assertIncludes(`IPC contract 登记 ${command}`, ipcContracts, [
      '"domain": "system"',
      `"command": "${command}"`,
      '"tier": "P1"',
    ]);
  }
  assertNotIncludes("IPC contract 不登记 route helper", ipcContracts, forbiddenHelperCommands);
}

function assertSystemService(systemService) {
  assertIncludes("system service 包装两个 mystery grants IPC", systemService, [
    "MysteryRouteGrant",
    "getMysteryUnlockGrants: () =>",
    'invokeIpc<CoreEnvelope<MysteryRouteGrant[]>>("get_mystery_unlock_grants")',
    "mergeMysteryUnlockGrants: (grants: MysteryRouteGrant[]) =>",
    "grants: toMysteryRouteGrantArgs(grants)",
    'invokeIpc<CoreEnvelope<MysteryRouteGrant[]>>("merge_mystery_unlock_grants"',
  ]);
  assertNotIncludes("system service 不把 route helper 当 IPC", systemService, forbiddenHelperCommands);
}

function assertOverview(overviewCache, overviewQuery, overviewMutation) {
  assertIncludes("overview cache owning mystery grants key 和 mutation writer", overviewCache, [
    "OVERVIEW_MYSTERY_GRANTS_QUERY_KEY",
    '"mystery-unlock-grants"',
    "prepareOverviewMutation",
    "writeOverviewMysteryGrantsPayload",
    "invalidateOverviewMysteryGrantsQueries",
    "function canAcceptOverviewPayload",
  ]);
  assertIncludes("overview query 使用 cache helper 读取 grants", overviewQuery, [
    "overviewMysteryUnlockGrantsQueryOptions",
    "OVERVIEW_MYSTERY_GRANTS_QUERY_KEY",
    "runOverviewQuery(queryClient, OVERVIEW_MYSTERY_GRANTS_QUERY_KEY",
    "systemService.getMysteryUnlockGrants()",
    "export function useOverviewMysteryUnlockGrantsQuery",
  ]);
  assertIncludes("overview mutation 使用 mutation fence 写入 grants payload", overviewMutation, [
    "mergeMysteryGrantsMutation",
    "systemService.mergeMysteryUnlockGrants(grants)",
    "prepareOverviewMutation(queryClient, [OVERVIEW_MYSTERY_GRANTS_QUERY_KEY])",
    "writeOverviewMysteryGrantsPayload(",
    "readOverviewMutationSequence(context, OVERVIEW_MYSTERY_GRANTS_QUERY_KEY)",
  ]);
  assertNotIncludes("overview hooks 不把 route helper 当 command", overviewQuery + overviewMutation, forbiddenHelperCommands);
}

function assertBackendMysteryOwner(commandsFile, usecaseFile, settingsRepository, contractFile, validatorFile) {
  assertIncludes("后端 mystery command 只做 IPC adapter", commandsFile, [
    "pub fn get_mystery_unlock_grants",
    "pub fn merge_mystery_unlock_grants",
    "usecase::mystery::get_mystery_unlock_grants(&repo)",
    "usecase::mystery::merge_mystery_unlock_grants(&repo, grants)",
    "CoreEnvelope::ok",
  ]);
  assertIncludes("后端 mystery usecase owning 清理合并持久化事务", usecaseFile, [
    "settings_repository::load_mystery_unlock_grants(repo)?",
    "settings_repository::save_mystery_unlock_grants(repo, grants.clone())?",
    "settings_repository::save_mystery_unlock_grants(repo, output.clone())?",
    "fn active_normalized_grants",
    "fn normalize_mystery_route",
    "BTreeMap::<String, MysteryRouteGrant>::new()",
  ]);
  assertNotIncludes("后端 mystery usecase 不 owning 前端 route allowlist", usecaseFile, [
    "is_mystery_route_allowed",
    "allowed_mystery",
    "allowlist",
    '"relayModel"',
  ]);
  assertIncludes("settings repository owning mystery grants 读写", settingsRepository, [
    "pub fn load_mystery_unlock_grants(repo: &Repository)",
    "pub fn save_mystery_unlock_grants(",
    "settings.mystery_unlock_grants = grants",
  ]);
  assertIncludes("后端 MysteryRouteGrant DTO 独立 owner", contractFile, [
    "pub struct MysteryRouteGrant",
    "pub route: String",
    '#[serde(rename = "epochMs", alias = "epoch_ms")]',
    "pub epoch_ms: i64",
  ]);
  assertIncludes("后端 mystery owner validator 已登记边界", validatorFile, [
    "mystery grants 已迁出 system",
    "后端不得判断前端 route 是否允许",
    "voice 空骨架不得接入 mystery grants",
  ]);
}

function assertRouteGate(routeGates, routerShell, mysteryGatesValidator) {
  assertIncludes("route gates helper 校验 route 和 grant 过期时间", routeGates, [
    "resolveMysteryGrantRoute",
    "relayModel: \"relay\"",
    "isAppRoute(mappedRoute)",
    "grant.epochMs >= nowMs",
    "resolveRouteVisibility",
    "isRouteVisibleByMysteryGrant(route, context.grants, context.nowMs)",
  ]);
  assertNotIncludes("route gates helper 不登记 IPC command", routeGates, [
    "invokeIpc",
    "get_mystery_unlock_grants",
    "merge_mystery_unlock_grants",
    ...forbiddenHelperCommands,
  ]);
  assertIncludes("router shell 将 grants context 接入 route gate", routerShell, [
    "useOverviewMysteryUnlockGrantsQuery()",
    "envelopeData<MysteryRouteGrant[]>",
    "getRouteMeta(activeRoute, mysteryRouteGateContext)",
    "getVisibleRouteMeta(mysteryRouteGateContext)",
    "useRoutePrewarm(mysteryRouteGateContext)",
    "mysteryRouteGate:",
  ]);
  assertIncludes("mystery gates validator 保留 route registry 细粒度校验", mysteryGatesValidator, [
    "resolveMysteryGrantRoute",
    "resolveRouteVisibility",
    "getVisibleRouteMeta(mysteryRouteGateContext)",
    "preloadVisibleRoutes(context)",
    "registry.tsx",
    "objects.tsx",
  ]);
}

function assertMocks(mocks) {
  assertIncludes("E2E mock 覆盖 mystery grants 两个 IPC", mocks, [
    "const mysteryUnlockMockState",
    "const getMysteryUnlockGrantsHandler",
    "const mergeMysteryUnlockGrantsHandler",
    "get_mystery_unlock_grants: getMysteryUnlockGrantsHandler",
    "merge_mystery_unlock_grants: mergeMysteryUnlockGrantsHandler",
    "return withMockData(context, [...mysteryUnlockMockState.grants]);",
  ]);
  assertNotIncludes("E2E mock 不登记 route helper command", mocks, forbiddenHelperCommands);
}

function assertCloseouts(closeouts, closeoutValidator) {
  const grantsCloseout = findCloseout(closeouts, grantsCloseoutId);
  const routeCloseout = findCloseout(closeouts, routeCloseoutId);

  if (grantsCloseout) {
    const allowedFields = [
      "id",
      "module",
      "status",
      "currentSourceMap",
      "currentSourceCommands",
      "sidecarReports",
      "requiredSourceSignals",
      "closedGateReportFailures",
      "nonClaims",
      "reason",
    ];
    assertArraySet("grants closeout 字段边界", Object.keys(grantsCloseout), allowedFields);
    if (grantsCloseout.module !== "mystery-unlock-grants") {
      fail("grants closeout module", String(grantsCloseout.module));
    }
    if (grantsCloseout.status !== "current-source-closed-partial") {
      fail("grants closeout status", String(grantsCloseout.status));
    }
    if (grantsCloseout.currentSourceMap !== files.map) {
      fail("grants closeout currentSourceMap", String(grantsCloseout.currentSourceMap));
    }
    assertArraySet("grants closeout 只登记两个真实 IPC", grantsCloseout.currentSourceCommands, commands);
    assertGateFailureKeys("grants closeout 只登记允许的非 full_leaf_100 gate 非绿字段", grantsCloseout, grantsGateFailureKeys);
    const signalFiles = (grantsCloseout.requiredSourceSignals ?? []).map((signal) => signal.file);
    assertArraySet("grants closeout requiredSourceSignals", signalFiles, [
      files.map,
      "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/frontend-callchain-report.json",
      files.ipcContracts,
      files.systemService,
      files.overviewQuery,
      files.overviewMutation,
      files.overviewCache,
      files.mocks,
      files.backendMysteryCommands,
      files.backendMysteryUsecase,
      files.backendSettingsRepository,
      files.backendMysteryContract,
      files.backendMysteryValidator,
    ]);
  }

  if (routeCloseout) {
    const allowedFields = [
      "id",
      "module",
      "status",
      "currentSourceMap",
      "requiredSourceSignals",
      "closedGateReportFailures",
      "nonClaims",
      "reason",
    ];
    assertArraySet("route helper closeout 字段边界", Object.keys(routeCloseout), allowedFields);
    if (routeCloseout.module !== "mystery-route-allowed") {
      fail("route helper closeout module", String(routeCloseout.module));
    }
    if (routeCloseout.status !== "current-source-closed-partial") {
      fail("route helper closeout status", String(routeCloseout.status));
    }
    if (routeCloseout.currentSourceMap !== files.map) {
      fail("route helper closeout currentSourceMap", String(routeCloseout.currentSourceMap));
    }
    if (Object.prototype.hasOwnProperty.call(routeCloseout, "currentSourceCommands")) {
      fail("route helper closeout 不登记 IPC command");
    } else {
      pass("route helper closeout 不登记 IPC command");
    }
    assertGateFailureKeys("route helper closeout 只登记允许的非 full_leaf_100 gate 非绿字段", routeCloseout, routeGateFailureKeys);
    const signalFiles = (routeCloseout.requiredSourceSignals ?? []).map((signal) => signal.file);
    assertArraySet("route helper closeout requiredSourceSignals", signalFiles, [
      files.map,
      files.routeGates,
      files.routerShell,
      files.mysteryGatesValidator,
      files.overviewQuery,
      files.overviewMutation,
      files.overviewCache,
    ]);
  }

  const closeoutText = JSON.stringify([grantsCloseout, routeCloseout]);
  assertIncludes("mystery closeouts 写明未恢复边界", closeoutText, [
    "不修改 gate-report",
    "只登记",
    "非 full_leaf_100 gate 非绿字段",
    "不声明 dim6、gate_accepted、implementation_use、full_leaf_100 已完成",
    "route helper 不是 IPC command",
    "不接入 voice",
  ]);
  assertNotIncludes("mystery closeouts 不声明完成态", closeoutText, forbiddenCompletionClaims);
  assertIncludes("closeout 聚合验证器接入 mystery current-source gate 非绿字段约束", closeoutValidator, [
    "MYSTERY_UNLOCK_CURRENT_SOURCE_MAP",
    "validateMysteryUnlockGrantsCloseout",
    "validateMysteryRouteAllowedCloseout",
    "closedGateReportFailures",
    "MYSTERY_UNLOCK_GRANTS_GATE_FAILURE_KEYS",
  ]);
}

const packageJson = readJson(files.packageJson);
const frontendAggregator = readRequired(files.frontendAggregator);
const closeouts = readJson(files.closeouts);
const closeoutValidator = readRequired(files.closeoutValidator);
const mysteryGatesValidator = readRequired(files.mysteryGatesValidator);
const sourceMap = readRequired(files.sourceMap);
const reconstructionReadme = readRequired(files.reconstructionReadme);
const mapText = readRequired(files.map);
const systemService = readRequired(files.systemService);
const overviewCache = readRequired(files.overviewCache);
const overviewQuery = readRequired(files.overviewQuery);
const overviewMutation = readRequired(files.overviewMutation);
const routeGates = readRequired(files.routeGates);
const routerShell = readRequired(files.routerShell);
const mocks = readRequired(files.mocks);
const ipcContracts = readRequired(files.ipcContracts);
const backendMysteryCommands = readRequired(files.backendMysteryCommands);
const backendMysteryUsecase = readRequired(files.backendMysteryUsecase);
const backendSettingsRepository = readRequired(files.backendSettingsRepository);
const backendMysteryContract = readRequired(files.backendMysteryContract);
const backendMysteryValidator = readRequired(files.backendMysteryValidator);

assertMap(mapText);
assertRegistrations(packageJson, frontendAggregator, sourceMap, reconstructionReadme);
assertIpcContracts(ipcContracts);
assertSystemService(systemService);
assertOverview(overviewCache, overviewQuery, overviewMutation);
assertBackendMysteryOwner(
  backendMysteryCommands,
  backendMysteryUsecase,
  backendSettingsRepository,
  backendMysteryContract,
  backendMysteryValidator,
);
assertRouteGate(routeGates, routerShell, mysteryGatesValidator);
assertMocks(mocks);
assertCloseouts(closeouts, closeoutValidator);

for (const path of Object.values(files)) {
  if (!existsSync(repoPath(path))) {
    fail("验证器输入文件实际存在", toRepoPath(repoPath(path)));
  }
}

if (failures.length > 0) {
  console.error("FAIL: mystery unlock current-source 验证失败");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS: mystery unlock grants 与 route gate current-source partial 验证通过");
