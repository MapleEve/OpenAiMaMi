import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  packageJson: "package.json",
  frontendAggregator: "scripts/validate-frontend.mjs",
  currentSourceCloseouts: "docs/reconstruction/frontend-current-source-closeouts.json",
  currentSourceCloseoutValidator: "scripts/validate-frontend-current-source-closeouts.mjs",
  map: "docs/reconstruction/system-usage-current-source-map.md",
  sourceMap: "docs/reconstruction/source-map.md",
  reconstructionReadme: "docs/reconstruction/README.md",
  runtimeEvents: "src/app/runtime/events.ts",
  systemService: "src/services/system/index.ts",
  settingsService: "src/services/settings/index.ts",
  settingsQuery: "src/features/settings/hooks/query.ts",
  settingsMutation: "src/features/settings/hooks/mutation.ts",
  settingsCache: "src/features/settings/cache/index.ts",
  overviewMutation: "src/features/overview/hooks/mutation.ts",
  overviewCache: "src/features/overview/cache/index.ts",
  analyticsService: "src/services/analytics/index.ts",
};

const closeoutId = "system-usage-current-source-frontend-chain";
const npmScript = "validate:frontend-system-usage-current-source";
const validatorScript = "validate-frontend-system-usage-current-source.mjs";
const currentSourceMap = "docs/reconstruction/system-usage-current-source-map.md";
const commands = [
  "get_usage_refresh_interval",
  "set_usage_refresh_interval",
  "refresh_usage_snapshot",
];
const watcherSignals = [
  "note_usage_refresh_activity",
  "schedule_full_runtime_refresh",
  "start_auto_switch_pending_watcher",
  "start_usage_refresh_watcher",
  "update_usage_refresh_schedule",
];

function toPath(path) {
  return join(repoRoot, ...path.split("/"));
}

function repoPath(path) {
  return relative(repoRoot, path).split(sep).join("/");
}

function readRequired(path) {
  const absolutePath = toPath(path);
  if (!existsSync(absolutePath)) {
    failures.push(`缺少必要文件：${path}`);
    return "";
  }
  return readFileSync(absolutePath, "utf8");
}

function parseJson(path) {
  const content = readRequired(path);
  if (!content) return {};
  try {
    return JSON.parse(content);
  } catch (error) {
    failures.push(`${path} 不是合法 JSON：${error.message}`);
    return {};
  }
}

function compact(text) {
  return text.replace(/\s+/g, "");
}

function pass(label) {
  console.log(`通过：${label}`);
}

function fail(label, detail = "") {
  failures.push(`${label}${detail ? `：${detail}` : ""}`);
}

function assertIncludes(label, text, snippets) {
  const compactText = compact(text);
  const missing = snippets.filter(
    (snippet) => !text.includes(snippet) && !compactText.includes(compact(snippet)),
  );
  if (missing.length === 0) {
    pass(label);
    return;
  }
  fail(label, `缺少片段 ${missing.map((item) => JSON.stringify(item)).join("、")}`);
}

function assertNotIncludes(label, text, snippets) {
  const matched = snippets.filter((snippet) => text.includes(snippet));
  if (matched.length === 0) {
    pass(label);
    return;
  }
  fail(label, `不允许片段 ${matched.map((item) => JSON.stringify(item)).join("、")}`);
}

function assertRegex(label, text, pattern) {
  if (pattern.test(text)) {
    pass(label);
    return;
  }
  fail(label, `未匹配 ${String(pattern)}`);
}

function assertArrayExact(label, actual, expected) {
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

function extractBalancedBlock(source, openBraceIndex) {
  if (openBraceIndex < 0) return "";
  let depth = 0;
  let inString = false;
  let stringQuote = "";
  let escaping = false;
  let inLineComment = false;
  let inBlockComment = false;

  for (let index = openBraceIndex; index < source.length; index += 1) {
    const char = source[index];
    const next = source[index + 1] ?? "";
    if (inLineComment) {
      if (char === "\n") inLineComment = false;
      continue;
    }
    if (inBlockComment) {
      if (char === "*" && next === "/") {
        inBlockComment = false;
        index += 1;
      }
      continue;
    }
    if (inString) {
      if (escaping) {
        escaping = false;
      } else if (char === "\\") {
        escaping = true;
      } else if (char === stringQuote) {
        inString = false;
        stringQuote = "";
      }
      continue;
    }
    if (char === "/" && next === "/") {
      inLineComment = true;
      index += 1;
      continue;
    }
    if (char === "/" && next === "*") {
      inBlockComment = true;
      index += 1;
      continue;
    }
    if (char === '"' || char === "'" || char === "`") {
      inString = true;
      stringQuote = char;
      continue;
    }
    if (char === "{") {
      depth += 1;
      continue;
    }
    if (char === "}") {
      depth -= 1;
      if (depth === 0) return source.slice(openBraceIndex + 1, index);
    }
  }
  return "";
}

function extractFunctionBody(source, functionName) {
  const marker = `function ${functionName}`;
  const markerIndex = source.indexOf(marker);
  if (markerIndex < 0) {
    fail(`${functionName} 函数存在`);
    return "";
  }
  const openBraceIndex = source.indexOf("{", markerIndex);
  const body = extractBalancedBlock(source, openBraceIndex);
  if (!body) fail(`${functionName} 函数体可解析`);
  return body;
}

function extractConstMutationBlock(source, name) {
  const marker = `const ${name} = useMutation({`;
  const markerIndex = source.indexOf(marker);
  if (markerIndex < 0) {
    fail(`${name} mutation 存在`);
    return "";
  }
  const openBraceIndex = source.indexOf("{", markerIndex);
  const body = extractBalancedBlock(source, openBraceIndex);
  if (!body) fail(`${name} mutation 代码块可解析`);
  return body;
}

function findCloseout(closeouts) {
  const matches = (closeouts.closeouts ?? []).filter((item) => item.id === closeoutId);
  if (matches.length !== 1) {
    fail("系统用量当前源码 closeout 唯一", `实际数量 ${matches.length}`);
    return null;
  }
  pass("系统用量当前源码 closeout 唯一");
  return matches[0];
}

function assertMapBoundary(mapText) {
  assertIncludes("证据 map 写明中文标题", mapText, [
    "系统用量当前源码证据映射",
  ]);
  assertIncludes("证据 map 写明三条 usage 命令", mapText, commands);
  assertIncludes("证据 map 写明当前源码 owner 文件", mapText, [
    files.systemService,
    files.settingsService,
    files.runtimeEvents,
    files.settingsQuery,
    files.settingsMutation,
    files.settingsCache,
    files.overviewMutation,
    files.overviewCache,
    files.analyticsService,
  ]);
  assertIncludes("证据 map 写明未恢复边界", mapText, [
    "不修改 raw/internal 证据",
    "不声明 `gate_accepted`、`implementation_use`、`full_leaf_100` 或 `dim6` 已完成",
    "不恢复真实平台 watcher、daemon、runtime event、后台线程、计划调度或平台副作用",
    "不新增 route、sidebar、header、tray、plugins config 或 `voice` 入口",
    "usage schedule runtime event reload",
    "applySettingsRuntimeEventToCache",
  ]);
  assertNotIncludes("证据 map 不写个人路径或敏感材料", mapText, [
    "C:\\Users\\",
    "C:/Users/",
    "/Users/",
    "sk-",
    "ghp_",
    "gho_",
    "BEGIN PRIVATE KEY",
  ]);
}

function assertRegistrations(packageJson, frontendAggregator, sourceMap, reconstructionReadme) {
  if (packageJson.scripts?.[npmScript] === `node scripts/${validatorScript}`) {
    pass("package.json 注册系统用量当前源码验证入口");
  } else {
    fail("package.json 注册系统用量当前源码验证入口");
  }
  assertIncludes("前端聚合验证纳入系统用量当前源码验证器", frontendAggregator, [
    `["${validatorScript}"]`,
  ]);
  assertIncludes("source-map 注册系统用量当前源码 map", sourceMap, [
    currentSourceMap,
    `scripts/${validatorScript}`,
    "`system-usage` 前端当前源码链路",
  ]);
  assertIncludes("重建 README 注册系统用量当前源码 map", reconstructionReadme, [
    currentSourceMap,
    `scripts/${validatorScript}`,
    "`system-usage` 前端当前源码链路",
  ]);
}

function assertSystemService(systemService) {
  assertIncludes("system service 收口三条 usage IPC", systemService, [
    "refreshUsageSnapshot: ()",
    'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("refresh_usage_snapshot")',
    "getUsageRefreshInterval: ()",
    'invokeIpc<CoreEnvelope<string>>("get_usage_refresh_interval")',
    "setUsageRefreshInterval: (interval: string)",
    'invokeIpc<CoreEnvelope<string>>("set_usage_refresh_interval", { interval })',
  ]);
  assertNotIncludes("系统用量当前源码不接入 voice", systemService, [
    "voice",
    "Voice",
  ]);
}

function assertSettingsLayer(settingsService, settingsQuery, settingsMutation, settingsCache) {
  assertIncludes("settings service 只代理 usage interval facade", settingsService, [
    "getUsageRefreshInterval: systemService.getUsageRefreshInterval",
    "setUsageRefreshInterval: systemService.setUsageRefreshInterval",
  ]);
  assertIncludes("settings query 使用 usage interval cache owner", settingsQuery, [
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "runSettingsQuery(queryClient, SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "settingsService.getUsageRefreshInterval()",
    "normalizeSettingsRefreshInterval",
  ]);
  assertNotIncludes("settings query 不直接写 TanStack cache", settingsQuery, [
    "setQueryData(",
    "invalidateQueries(",
    "cancelQueries(",
  ]);
  assertIncludes("settings mutation 使用 usage interval mutation fence", settingsMutation, [
    "useSettingsRefreshIntervalMutation",
    "beginSettingsMutation(SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY)",
    "queryClient.cancelQueries",
    "writeSettingsMutationPayload(",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
  ]);
  assertRegex(
    "settings mutation 调用 setUsageRefreshInterval facade",
    settingsMutation,
    /settingsService\s*\.\s*setUsageRefreshInterval\s*\(\s*interval\s*\)/,
  );
  assertNotIncludes("settings mutation 不绕过 cache helper 写 query data", settingsMutation, [
    "setQueryData(",
  ]);
  assertIncludes("settings cache owning usage interval key 与 runtime event target", settingsCache, [
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "SETTINGS_RUNTIME_EVENT_TARGET_QUERY_KEYS",
    "SETTINGS_USAGE_SCHEDULE_RUNTIME_EVENT_CACHE_TARGETS",
    "SETTINGS_RUNTIME_EVENT_CACHE_TARGETS",
    "applySettingsRuntimeEventToCache",
    '"usage-refresh-schedule-reload"',
    "SettingsUsageRefreshIntervalQueryKey",
    "beginSettingsMutation",
    "runSettingsQuery",
    "writeSettingsMutationPayload",
    "invalidateSettingsContractQueries",
  ]);
  assertIncludes("settings cache 持有 sequence 与 mutation fence", settingsCache, [
    "const settingsQuerySequences = new Map<string, number>();",
    "const settingsMutationFences = new Map<string, number>();",
    "function canAcceptSettingsPayload",
  ]);
  assertRegex(
    "settings cache query payload 不越过 mutation fence",
    extractFunctionBody(settingsCache, "canAcceptSettingsPayload"),
    /return\s+sequence\s*>=\s*latestStarted\s*&&\s*sequence\s*>=\s*mutationFence\s*;/,
  );
  assertIncludes("settings cache invalidate 覆盖 usage interval key", extractFunctionBody(settingsCache, "invalidateSettingsContractQueries"), [
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
  ]);
  assertIncludes("settings cache helper 消费 usage schedule runtime event", extractFunctionBody(settingsCache, "applySettingsRuntimeEventToCache"), [
    "SETTINGS_RUNTIME_EVENT_CACHE_TARGETS[eventName]",
    "payload.mode",
    "invalidateSettingsRuntimeEventTargets",
  ]);
}

function assertRuntimeEventLayer(runtimeEvents) {
  assertIncludes("runtime events 保留后端 schedule event 诊断字段", runtimeEvents, [
    "command?: string;",
    "statusCode?: string;",
    "command: payload.command",
    "statusCode: payload.statusCode",
  ]);
  assertIncludes("runtime events 将 settings reload 委托给 settings cache helper", runtimeEvents, [
    "applySettingsRuntimeEventToCache",
    "delegateRuntimeEventToModuleCacheHelper",
    'event.moduleId !== "settings"',
    '"usage-refresh-schedule-reload"',
    "return true;",
  ]);
  assertIncludes("runtime events replay 先过 sequence cursor", runtimeEvents, [
    "acceptRuntimeEventSequence(queryClient, event)",
    "event.sequence <= current.sequence",
    "delegateRuntimeEventToModuleCacheHelper(queryClient, event)",
  ]);
  assertNotIncludes("runtime events 不直接消费 settings 裸 query key", runtimeEvents, [
    "SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY",
    "SETTINGS_HAS_NOTCH_QUERY_KEY",
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "SETTINGS_IMAGE_COMPAT_QUERY_KEY",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
  ]);
}

function assertOverviewAndAnalytics(overviewMutation, overviewCache, analyticsService) {
  assertIncludes("overview usage refresh mutation 经 cache helper 写入", overviewMutation, [
    "refreshUsageMutation",
    "accountsService.refreshUsageSnapshot()",
    "prepareOverviewMutation(queryClient, [OVERVIEW_SNAPSHOT_QUERY_KEY])",
    "writeOverviewMutationPayload(",
    "OVERVIEW_SNAPSHOT_QUERY_KEY",
    "invalidateOverviewUsageMutationQueries(queryClient)",
  ]);
  const refreshUsageMutation = extractConstMutationBlock(overviewMutation, "refreshUsageMutation");
  assertIncludes("overview refresh usage mutation 使用 snapshot sequence", refreshUsageMutation, [
    "prepareOverviewMutation(queryClient, [OVERVIEW_SNAPSHOT_QUERY_KEY])",
    "readOverviewMutationSequence(context, OVERVIEW_SNAPSHOT_QUERY_KEY)",
  ]);
  assertIncludes("overview cache owning usage/snapshot query 与 mutation fence", overviewCache, [
    "OVERVIEW_SNAPSHOT_QUERY_KEY",
    "OVERVIEW_USAGE_QUERY_KEY",
    "const overviewQuerySequences = new Map<string, number>();",
    "const overviewMutationFences = new Map<string, number>();",
    "function canAcceptOverviewPayload",
    "writeOverviewMutationPayload",
    "invalidateOverviewUsageMutationQueries",
  ]);
  assertIncludes("overview usage refresh 失效 analytics query", extractFunctionBody(overviewCache, "invalidateOverviewUsageMutationQueries"), [
    "invalidateOverviewContractQueries(queryClient)",
    'queryKey: ["usage-analytics"]',
    'queryKey: ["analytics", "usage"]',
  ]);
  assertRegex(
    "overview cache query payload 不越过 mutation fence",
    extractFunctionBody(overviewCache, "canAcceptOverviewPayload"),
    /return\s+sequence\s*>=\s*latestStarted\s*&&\s*sequence\s*>=\s*mutationFence\s*;/,
  );
  assertIncludes("analytics service owning usage analytics 读取", analyticsService, [
    "loadUsageAnalytics: () =>",
    'invokeIpc<CoreEnvelope<UsageAnalyticsPayload>>("load_usage_analytics")',
  ]);
}

function assertCloseout(closeout, closeoutValidator) {
  if (!closeout) return;
  if (closeout.module === "system-usage" && closeout.status === "current-source-closed-partial") {
    pass("closeout module/status 限定 system-usage partial");
  } else {
    fail("closeout module/status 限定 system-usage partial", `${String(closeout.module)} / ${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap === currentSourceMap) {
    pass("closeout 注册独立 evidence map");
  } else {
    fail("closeout 注册独立 evidence map", String(closeout.currentSourceMap));
  }
  assertArrayExact("closeout 只登记三条 usage 命令", closeout.currentSourceCommands, commands);
  assertArrayExact("closeout 只登记 system usage sidecar", closeout.sidecarReports, [
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/frontend-callchain-report.json",
  ]);
  const signalFiles = (closeout.requiredSourceSignals ?? []).map((signal) => signal.file);
  assertArrayExact("closeout source signals 不扩大到 voice 或其他模块", signalFiles, [
    currentSourceMap,
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/frontend-callchain-report.json",
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json",
    files.runtimeEvents,
    files.systemService,
    files.settingsService,
    files.settingsQuery,
    files.settingsMutation,
    files.settingsCache,
    files.overviewMutation,
    files.overviewCache,
    files.analyticsService,
  ]);
  if (Object.prototype.hasOwnProperty.call(closeout, "closedGateReportFailures")) {
    fail("closeout 不登记 gate failure 关闭字段");
  } else {
    pass("closeout 不登记 gate failure 关闭字段");
  }
  const closeoutText = JSON.stringify(closeout);
  assertIncludes("closeout 写明未恢复边界", closeoutText, [
    "不修改 raw/internal 证据",
    "不声明 gate_accepted、implementation_use、dim6、full_leaf_100 已完成",
    "不恢复真实平台 watcher、daemon、runtime event 或后台调度副作用",
    "不新增 route、sidebar、header、tray、plugins config 或 voice 入口",
  ]);
  assertNotIncludes("closeout 命令范围排除 watcher/schedule 信号", (closeout.currentSourceCommands ?? []).join("\n"), watcherSignals);
  assertIncludes("closeout 聚合验证器接入系统用量当前源码", closeoutValidator, [
    "SYSTEM_USAGE_CURRENT_SOURCE_CLOSEOUT_ID",
    "validateSystemUsageCurrentSourceCloseout",
    `closeout.id === SYSTEM_USAGE_CURRENT_SOURCE_CLOSEOUT_ID`,
  ]);
}

const packageJson = parseJson(files.packageJson);
const frontendAggregator = readRequired(files.frontendAggregator);
const closeouts = parseJson(files.currentSourceCloseouts);
const closeoutValidator = readRequired(files.currentSourceCloseoutValidator);
const mapText = readRequired(files.map);
const sourceMap = readRequired(files.sourceMap);
const reconstructionReadme = readRequired(files.reconstructionReadme);
const runtimeEvents = readRequired(files.runtimeEvents);
const systemService = readRequired(files.systemService);
const settingsService = readRequired(files.settingsService);
const settingsQuery = readRequired(files.settingsQuery);
const settingsMutation = readRequired(files.settingsMutation);
const settingsCache = readRequired(files.settingsCache);
const overviewMutation = readRequired(files.overviewMutation);
const overviewCache = readRequired(files.overviewCache);
const analyticsService = readRequired(files.analyticsService);

assertMapBoundary(mapText);
assertRegistrations(packageJson, frontendAggregator, sourceMap, reconstructionReadme);
assertSystemService(systemService);
assertSettingsLayer(settingsService, settingsQuery, settingsMutation, settingsCache);
assertRuntimeEventLayer(runtimeEvents);
assertOverviewAndAnalytics(overviewMutation, overviewCache, analyticsService);
assertCloseout(findCloseout(closeouts), closeoutValidator);

for (const path of Object.values(files)) {
  if (path.startsWith("README")) {
    fail("验证器读取范围不应触碰根 README");
  }
  if (!existsSync(toPath(path))) {
    fail("验证器输入文件实际存在", repoPath(toPath(path)));
  }
}

if (failures.length > 0) {
  console.error("FAIL: system usage 当前源码验证失败");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("通过：系统用量当前源码 evidence map 与验证器边界");
