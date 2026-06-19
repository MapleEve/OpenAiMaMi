import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  packageJson: join(repoRoot, "package.json"),
  frontendAggregator: join(repoRoot, "scripts", "validate-frontend.mjs"),
  runtimeEvents: join(repoRoot, "src", "app", "runtime", "events.ts"),
  systemService: join(repoRoot, "src", "services", "system", "index.ts"),
  settingsService: join(repoRoot, "src", "services", "settings", "index.ts"),
  settingsCache: join(repoRoot, "src", "features", "settings", "cache", "index.ts"),
  settingsQuery: join(repoRoot, "src", "features", "settings", "hooks", "query.ts"),
  settingsMutation: join(repoRoot, "src", "features", "settings", "hooks", "mutation.ts"),
  settingsTypes: join(repoRoot, "src", "features", "settings", "types", "index.ts"),
  overviewCache: join(repoRoot, "src", "features", "overview", "cache", "index.ts"),
  overviewQuery: join(repoRoot, "src", "features", "overview", "hooks", "query.ts"),
  overviewMutation: join(repoRoot, "src", "features", "overview", "hooks", "mutation.ts"),
  overviewTypes: join(repoRoot, "src", "features", "overview", "types", "index.ts"),
  restorationQueue: join(
    repoRoot,
    "docs",
    "reconstruction",
    "frontend-leaf-restoration-queue.json",
  ),
};

function repoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function readRequired(path) {
  if (!existsSync(path)) {
    failures.push(`缺少必要文件：${repoPath(path)}`);
    return "";
  }
  return readFileSync(path, "utf8");
}

function parseJson(path) {
  const content = readRequired(path);
  if (!content) return {};
  try {
    return JSON.parse(content);
  } catch (error) {
    failures.push(`${repoPath(path)} JSON 解析失败：${error.message}`);
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

function assertNotMatches(label, text, checks) {
  const matched = checks.filter(([pattern]) => pattern.test(text));
  if (matched.length === 0) {
    pass(label);
    return;
  }
  for (const [, message] of matched) {
    fail(label, message);
  }
}

function assertRegex(label, text, pattern) {
  if (pattern.test(text)) {
    pass(label);
    return;
  }
  fail(label, `未匹配 ${String(pattern)}`);
}

function assertOrder(label, text, fragments) {
  let offset = 0;
  for (const fragment of fragments) {
    const index = text.indexOf(fragment, offset);
    if (index < 0) {
      fail(label, `缺少顺序片段 ${JSON.stringify(fragment)}`);
      return;
    }
    offset = index + fragment.length;
  }
  pass(label);
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

  let parenDepth = 0;
  let hasSeenParams = false;
  let openBraceIndex = -1;
  for (let index = markerIndex + marker.length; index < source.length; index += 1) {
    const char = source[index];
    if (char === "(") {
      parenDepth += 1;
      hasSeenParams = true;
      continue;
    }
    if (char === ")") {
      parenDepth -= 1;
      continue;
    }
    if (char === "{" && hasSeenParams && parenDepth === 0) {
      openBraceIndex = index;
      break;
    }
  }

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

function assertSystemServiceContract(systemService, settingsService) {
  assertIncludes("system service 收口 usage、hotspot、mystery grants IPC", systemService, [
    'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("refresh_usage_snapshot")',
    'invokeIpc<CoreEnvelope<string>>("get_usage_refresh_interval")',
    'invokeIpc<CoreEnvelope<string>>("set_usage_refresh_interval", { interval })',
    'invokeIpc<CoreEnvelope<MysteryRouteGrant[]>>("get_mystery_unlock_grants")',
    'invokeIpc<CoreEnvelope<MysteryRouteGrant[]>>("merge_mystery_unlock_grants"',
    'invokeIpc<CoreEnvelope<boolean>>("get_hotspot_enabled")',
    'invokeIpc<CoreEnvelope<boolean>>("set_hotspot_enabled", { enabled })',
  ]);
  assertIncludes("settings service 只代理 system service 的 usage 与 hotspot 能力", settingsService, [
    "getUsageRefreshInterval: systemService.getUsageRefreshInterval",
    "setUsageRefreshInterval: systemService.setUsageRefreshInterval",
    "getHotspotEnabled: systemService.getHotspotEnabled",
    "setHotspotEnabled: systemService.setHotspotEnabled",
  ]);
}

function assertSettingsContract(cache, query, mutation, types) {
  assertIncludes("settings types 声明 hotspot 与 usage query key/payload", types, [
    'export type SettingsHotspotEnabledQueryKey = readonly ["hotspot-enabled"];',
    "export type SettingsUsageRefreshIntervalQueryKey = readonly [",
    "SettingsHotspotEnabledQueryKey",
    "SettingsUsageRefreshIntervalQueryKey",
    "SettingsQueryPayloadForKey<TKey extends SettingsWritableQueryKey>",
  ]);

  assertIncludes("settings cache 导出 usage 与 hotspot query key/helper", cache, [
    "SETTINGS_RUNTIME_EVENT_TARGET_QUERY_KEYS",
    "SETTINGS_USAGE_SCHEDULE_RUNTIME_EVENT_CACHE_TARGETS",
    "SETTINGS_RUNTIME_EVENT_CACHE_TARGETS",
    "SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY",
    "SETTINGS_HAS_NOTCH_QUERY_KEY",
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "SETTINGS_IMAGE_COMPAT_QUERY_KEY",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "export function beginSettingsMutation",
    "export function writeSettingsQueryPayload",
    "export async function runSettingsQuery",
    "export async function writeSettingsMutationPayload",
    "export async function applySettingsRuntimeEventToCache",
    "export async function invalidateSettingsContractQueries",
  ]);
  assertIncludes("settings cache 持有 query sequence 与 mutation fence", cache, [
    "const settingsQuerySequences = new Map<string, number>();",
    "const settingsMutationFences = new Map<string, number>();",
    "function canAcceptSettingsPayload",
  ]);
  assertIncludes("settings runtime reload target query keys are owned by cache", cache, [
    "export const SETTINGS_RUNTIME_EVENT_TARGET_QUERY_KEYS = [",
    "SettingsCache.queryKeys.root",
    "SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY",
    "SETTINGS_HAS_NOTCH_QUERY_KEY",
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "SETTINGS_IMAGE_COMPAT_QUERY_KEY",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "] as const satisfies readonly QueryKey[];",
  ]);
  assertIncludes("settings usage schedule runtime event 只经 cache helper 声明 target", cache, [
    "export type SettingsRuntimeEventName = \"usage-refresh-schedule-reload\";",
    "export const SETTINGS_USAGE_SCHEDULE_RUNTIME_EVENT_CACHE_TARGETS = [",
    "SettingsCache.queryKeys.root",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "export const SETTINGS_RUNTIME_EVENT_CACHE_TARGETS = {",
    "\"usage-refresh-schedule-reload\": SETTINGS_USAGE_SCHEDULE_RUNTIME_EVENT_CACHE_TARGETS",
    "applySettingsRuntimeEventToCache",
  ]);

  const acceptBody = extractFunctionBody(cache, "canAcceptSettingsPayload");
  assertRegex(
    "settings stale/delayed/replay query 不得越过 mutation fence",
    acceptBody,
    /return\s+sequence\s*>=\s*latestStarted\s*&&\s*sequence\s*>=\s*mutationFence\s*;/,
  );
  assertRegex(
    "settings mutation payload 必须服从 mutation fence",
    acceptBody,
    /if\s*\(\s*source\s*===\s*"mutation-payload"\s*\)\s*\{[\s\S]*?return\s+sequence\s*>=\s*mutationFence\s*;[\s\S]*?\}/,
  );

  assertOrder("settings mutation begin 提升 query fence", extractFunctionBody(cache, "beginSettingsMutation"), [
    "const sequence = nextSettingsQuerySequence(queryKey);",
    "settingsMutationFences.set(",
    "Math.max(",
    "return sequence;",
  ]);
  assertOrder("settings query 预留 sequence 后通过 cache helper 写入", extractFunctionBody(cache, "runSettingsQuery"), [
    "const sequence = nextSettingsQuerySequence(queryKey);",
    "const payload = await load();",
    "writeSettingsQueryPayload(queryClient, queryKey, payload,",
    "sequence,",
  ]);
  assertOrder("settings writer 先过 gate 再写 TanStack 与 authoritative cache", extractFunctionBody(cache, "writeSettingsQueryPayload"), [
    "if (!canAcceptSettingsPayload(queryKey, options.source, sequence))",
    "return false;",
    "queryClient.setQueryData",
    "writeSettingsAuthoritativePayload",
    "return true;",
  ]);
  assertOrder("settings mutation payload 先写 cache 再失效合同 query", extractFunctionBody(cache, "writeSettingsMutationPayload"), [
    "writeSettingsQueryPayload(queryClient, queryKey, payload,",
    'source: "mutation-payload"',
    "sequence,",
    "if (accepted)",
    "await invalidateSettingsContractQueries(queryClient);",
  ]);
  assertIncludes("settings 失效 覆盖 usage 与 hotspot query key", extractFunctionBody(cache, "invalidateSettingsContractQueries"), [
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
  ]);

  assertIncludes("settings query hook 中 hotspot 与 usage 只走 runSettingsQuery", query, [
    "runSettingsQuery(queryClient, SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "settingsService.getHotspotEnabled()",
    "runSettingsQuery(queryClient, SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "settingsService.getUsageRefreshInterval()",
  ]);
  assertNotMatches("settings query hook 不直接写 TanStack cache", query, [
    [/\bsetQueryData\s*\(/, "query hook 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "query hook 不得直接 invalidateQueries"],
    [/\bcancelQueries\s*\(/, "query hook 不得直接 cancelQueries"],
  ]);

  const hotspotMutation = extractFunctionBody(mutation, "useSettingsHotspotMutation");
  assertOrder("settings hotspot mutation 用 context sequence 写 mutation payload", hotspotMutation, [
    "beginSettingsMutation(SETTINGS_HOTSPOT_ENABLED_QUERY_KEY)",
    "queryClient.cancelQueries",
    "return { sequence };",
    "writeSettingsMutationPayload(",
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "context?.sequence",
  ]);
  const refreshIntervalMutation = extractFunctionBody(
    mutation,
    "useSettingsRefreshIntervalMutation",
  );
  assertOrder("settings usage interval mutation 用 context sequence 写 mutation payload", refreshIntervalMutation, [
    "beginSettingsMutation(SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY)",
    "queryClient.cancelQueries",
    "return { sequence };",
    "writeSettingsMutationPayload(",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "context?.sequence",
  ]);
  assertNotMatches("settings mutation hook 不绕过 cache helper 写 query data", mutation, [
    [/\bsetQueryData\s*\(/, "mutation hook 不得直接 setQueryData"],
  ]);
}

function assertOverviewContract(cache, query, mutation, types) {
  assertIncludes("overview types 声明 usage 与 mystery grants envelope", types, [
    "export type OverviewUsageEnvelope = CoreEnvelope<UsageAnalyticsPayload>;",
    "export type OverviewMysteryGrantsEnvelope = CoreEnvelope<MysteryRouteGrant[]>;",
    "OverviewUsageEnvelope",
    "OverviewMysteryGrantsEnvelope",
  ]);
  assertIncludes("overview cache 导出 usage 与 mystery grants query key/helper", cache, [
    "OVERVIEW_USAGE_QUERY_KEY",
    "OVERVIEW_MYSTERY_GRANTS_QUERY_KEY",
    "export function beginOverviewMutation",
    "export async function prepareOverviewMutation",
    "export function readOverviewMutationSequence",
    "export function writeOverviewQueryPayload",
    "export async function runOverviewQuery",
    "export async function writeOverviewMutationPayload",
    "export async function writeOverviewMysteryGrantsPayload",
    "export async function invalidateOverviewUsageMutationQueries",
    "export async function invalidateOverviewMysteryGrantsQueries",
  ]);
  assertIncludes("overview cache 持有 query sequence 与 mutation fence", cache, [
    "const overviewQuerySequences = new Map<string, number>();",
    "const overviewMutationFences = new Map<string, number>();",
    "function canAcceptOverviewPayload",
  ]);

  const acceptBody = extractFunctionBody(cache, "canAcceptOverviewPayload");
  assertRegex(
    "overview stale/delayed/replay query 不得越过 mutation fence",
    acceptBody,
    /return\s+sequence\s*>=\s*latestStarted\s*&&\s*sequence\s*>=\s*mutationFence\s*;/,
  );
  assertRegex(
    "overview mutation payload 必须服从 mutation fence",
    acceptBody,
    /if\s*\(\s*source\s*===\s*"mutation-payload"\s*\)\s*\{[\s\S]*?return\s+sequence\s*>=\s*mutationFence\s*;[\s\S]*?\}/,
  );
  assertOrder("overview mutation prepare 先提升 fence 再 cancel query", extractFunctionBody(cache, "prepareOverviewMutation"), [
    "beginOverviewMutation(queryKey)",
    "queryClient.cancelQueries({ queryKey })",
    "return { sequences };",
  ]);
  assertOrder("overview query 预留 sequence 后通过 cache helper 写入", extractFunctionBody(cache, "runOverviewQuery"), [
    "const sequence = nextOverviewQuerySequence(queryKey);",
    "const payload = await load();",
    "writeOverviewQueryPayload(queryClient, queryKey, payload,",
    "sequence,",
  ]);
  assertOrder("overview writer 先过 gate 再写 TanStack 与 authoritative cache", extractFunctionBody(cache, "writeOverviewQueryPayload"), [
    "if (!canAcceptOverviewPayload(queryKey, options.source, sequence))",
    "return false;",
    "queryClient.setQueryData",
    "writeOverviewAuthoritativePayload",
    "return true;",
  ]);
  assertOrder("overview mutation payload 先写 cache 再失效合同 query", extractFunctionBody(cache, "writeOverviewMutationPayload"), [
    "writeOverviewQueryPayload(queryClient, queryKey, payload,",
    'source: "mutation-payload"',
    "sequence,",
    "if (accepted)",
    "await invalidateOverviewContractQueries(queryClient);",
  ]);
  assertIncludes("overview usage mutation 失效 覆盖 usage analytics query", extractFunctionBody(cache, "invalidateOverviewUsageMutationQueries"), [
    "invalidateOverviewContractQueries(queryClient)",
    'queryKey: ["usage-analytics"]',
    'queryKey: ["analytics", "usage"]',
  ]);
  assertIncludes("overview mystery grants 失效 覆盖 mystery grants query key", extractFunctionBody(cache, "invalidateOverviewMysteryGrantsQueries"), [
    "invalidateOverviewContractQueries(queryClient)",
    "OVERVIEW_MYSTERY_GRANTS_QUERY_KEY",
  ]);

  assertIncludes("overview query hook 中 usage 与 mystery grants 只走 runOverviewQuery", query, [
    "runOverviewQuery(queryClient, OVERVIEW_USAGE_QUERY_KEY",
    "analyticsService.loadUsageAnalytics()",
    "runOverviewQuery(queryClient, OVERVIEW_MYSTERY_GRANTS_QUERY_KEY",
    "systemService.getMysteryUnlockGrants()",
  ]);
  assertNotMatches("overview query hook 不直接写 TanStack cache", query, [
    [/\bsetQueryData\s*\(/, "query hook 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "query hook 不得直接 invalidateQueries"],
    [/\bcancelQueries\s*\(/, "query hook 不得直接 cancelQueries"],
  ]);

  const refreshUsageMutation = extractConstMutationBlock(
    mutation,
    "refreshUsageMutation",
  );
  assertOrder("overview refresh usage mutation 用 snapshot context sequence 写 mutation payload", refreshUsageMutation, [
    "prepareOverviewMutation(queryClient, [OVERVIEW_SNAPSHOT_QUERY_KEY])",
    "writeOverviewMutationPayload(",
    "OVERVIEW_SNAPSHOT_QUERY_KEY",
    "readOverviewMutationSequence(context, OVERVIEW_SNAPSHOT_QUERY_KEY)",
    "invalidateOverviewUsageMutationQueries(queryClient)",
  ]);
  const mergeMysteryMutation = extractConstMutationBlock(
    mutation,
    "mergeMysteryGrantsMutation",
  );
  assertOrder("overview mystery grants mutation 用 context sequence 写 mutation payload", mergeMysteryMutation, [
    "prepareOverviewMutation(queryClient, [OVERVIEW_MYSTERY_GRANTS_QUERY_KEY])",
    "writeOverviewMysteryGrantsPayload(",
    "readOverviewMutationSequence(context, OVERVIEW_MYSTERY_GRANTS_QUERY_KEY)",
  ]);
  assertNotMatches("overview mutation hook 不绕过 cache helper 写 query data", mutation, [
    [/\bsetQueryData\s*\(/, "mutation hook 不得直接 setQueryData"],
  ]);
}

function assertQueueStillOpen(queue) {
  const requiredAreas = ["system-usage", "system-hotspot", "mystery-unlock"];
  const failuresByArea = queue.gateReportFailures ?? [];
  const missingAreas = requiredAreas.filter(
    (area) => !failuresByArea.some((item) => item.area === area),
  );
  if (missingAreas.length === 0) {
    pass("恢复队列仍记录 usage、hotspot、mystery grants 未完成边界");
  } else {
    fail("恢复队列仍记录 usage、hotspot、mystery grants 未完成边界", missingAreas.join("、"));
  }

  const wronglyClosed = failuresByArea.filter(
    (item) =>
      requiredAreas.includes(item.area) &&
      (item.path === "gate_accepted" || item.path === "implementation_use") &&
      item.value !== false,
  );
  if (wronglyClosed.length === 0) {
    pass("恢复队列未把目标边界伪声明为 gate 或 implementation 完成");
  } else {
    fail("恢复队列未把目标边界伪声明为 gate 或 implementation 完成", JSON.stringify(wronglyClosed));
  }
}

function assertRegistration(packageJson, frontendAggregator) {
  if (
    packageJson.scripts?.["validate:frontend-system-usage-hotspot-mystery-cache"] ===
    "node scripts/validate-frontend-system-usage-hotspot-mystery-cache.mjs"
  ) {
    pass("package.json 注册 system usage/hotspot/mystery cache validator");
  } else {
    fail("package.json 注册 system usage/hotspot/mystery cache validator");
  }

  assertIncludes("前端聚合验证接入 system usage/hotspot/mystery cache validator", frontendAggregator, [
    '["validate-frontend-system-usage-hotspot-mystery-cache.mjs"]',
  ]);
}

function createSequenceHarness() {
  const latestStarted = new Map();
  const mutationFence = new Map();
  const values = new Map();
  const trace = [];

  function nextQuerySequence(key) {
    const next = (latestStarted.get(key) ?? 0) + 1;
    latestStarted.set(key, next);
    trace.push(`预留:${key}:${next}`);
    return next;
  }

  function beginMutation(key) {
    const sequence = nextQuerySequence(key);
    mutationFence.set(key, Math.max(mutationFence.get(key) ?? 0, sequence));
    trace.push(`fence:${key}:${sequence}`);
    return sequence;
  }

  function write(key, source, sequence, value) {
    const latest = latestStarted.get(key) ?? 0;
    const fence = mutationFence.get(key) ?? 0;
    trace.push(`尝试:${key}:${source}:${sequence}:${value}`);
    if (source === "mutation-payload") {
      if (sequence < fence) {
        trace.push(`拒绝:fence:${key}:${value}`);
        return false;
      }
    } else if (sequence < latest || sequence < fence) {
      trace.push(`拒绝:query:${key}:${value}`);
      return false;
    }
    latestStarted.set(key, Math.max(latest, sequence));
    values.set(key, value);
    trace.push(`写入:${key}:${value}`);
    return true;
  }

  return {
    trace,
    nextQuerySequence,
    beginMutation,
    write,
    read: (key) => values.get(key),
  };
}

function runSettingsRaceSimulation() {
  const harness = createSequenceHarness();
  const key = "settings:hotspot";

  const baseline = harness.nextQuerySequence(key);
  harness.write(key, "full-refresh", baseline, "off");
  const mutation = harness.beginMutation(key);
  const mutationAccepted = harness.write(key, "mutation-payload", mutation, "on");
  const staleAccepted = harness.write(key, "full-refresh", baseline, "stale-off");
  const replayAccepted = harness.write(key, "runtime-event-replay", baseline, "replay-off");
  const fresh = harness.nextQuerySequence(key);
  const freshAccepted = harness.write(key, "full-refresh", fresh, "fresh-on");

  if (
    mutationAccepted &&
    !staleAccepted &&
    !replayAccepted &&
    freshAccepted &&
    harness.read(key) === "fresh-on"
  ) {
    pass(`竞态模拟：settings hotspot mutation payload 不被 stale/delayed/replay 覆盖：${harness.trace.join(" | ")}`);
    return;
  }
  fail("竞态模拟：settings hotspot mutation payload 不被 stale/delayed/replay 覆盖", harness.trace.join(" | "));
}

function runSettingsUsageIntervalSimulation() {
  const harness = createSequenceHarness();
  const key = "settings:usage-refresh-interval";

  const first = harness.nextQuerySequence(key);
  const second = harness.nextQuerySequence(key);
  const delayedFirstAccepted = harness.write(key, "full-refresh", first, "5m-delayed");
  const secondAccepted = harness.write(key, "full-refresh", second, "15m");
  const mutation = harness.beginMutation(key);
  const mutationAccepted = harness.write(key, "mutation-payload", mutation, "30m");
  const staleSecondAccepted = harness.write(key, "full-refresh", second, "15m-replay");

  if (
    !delayedFirstAccepted &&
    secondAccepted &&
    mutationAccepted &&
    !staleSecondAccepted &&
    harness.read(key) === "30m"
  ) {
    pass(`竞态模拟：settings usage interval 只接受最新 query 或 mutation payload：${harness.trace.join(" | ")}`);
    return;
  }
  fail("竞态模拟：settings usage interval 只接受最新 query 或 mutation payload", harness.trace.join(" | "));
}

function runOverviewUsageSimulation() {
  const harness = createSequenceHarness();
  const usageKey = "overview:usage";
  const snapshotKey = "overview:snapshot";

  const usageFirst = harness.nextQuerySequence(usageKey);
  const usageSecond = harness.nextQuerySequence(usageKey);
  const delayedUsageAccepted = harness.write(
    usageKey,
    "full-refresh",
    usageFirst,
    "usage-delayed",
  );
  const latestUsageAccepted = harness.write(
    usageKey,
    "full-refresh",
    usageSecond,
    "usage-latest",
  );

  const snapshotMutation = harness.beginMutation(snapshotKey);
  const snapshotMutationAccepted = harness.write(
    snapshotKey,
    "mutation-payload",
    snapshotMutation,
    "snapshot-after-refresh",
  );
  const staleSnapshotAccepted = harness.write(
    snapshotKey,
    "full-refresh",
    snapshotMutation - 1,
    "snapshot-stale",
  );

  if (
    !delayedUsageAccepted &&
    latestUsageAccepted &&
    snapshotMutationAccepted &&
    !staleSnapshotAccepted &&
    harness.read(usageKey) === "usage-latest" &&
    harness.read(snapshotKey) === "snapshot-after-refresh"
  ) {
    pass(`竞态模拟：overview usage query 与 refresh usage mutation 不被旧响应覆盖：${harness.trace.join(" | ")}`);
    return;
  }
  fail("竞态模拟：overview usage query 与 refresh usage mutation 不被旧响应覆盖", harness.trace.join(" | "));
}

function runOverviewMysteryGrantsSimulation() {
  const harness = createSequenceHarness();
  const key = "overview:mystery-grants";

  const baseline = harness.nextQuerySequence(key);
  harness.write(key, "full-refresh", baseline, "grant-a");
  const firstMutation = harness.beginMutation(key);
  const secondMutation = harness.beginMutation(key);
  const oldMutationAccepted = harness.write(
    key,
    "mutation-payload",
    firstMutation,
    "grant-old",
  );
  const latestMutationAccepted = harness.write(
    key,
    "mutation-payload",
    secondMutation,
    "grant-latest",
  );
  const replayAccepted = harness.write(
    key,
    "event-replay",
    baseline,
    "grant-replay",
  );

  if (
    !oldMutationAccepted &&
    latestMutationAccepted &&
    !replayAccepted &&
    harness.read(key) === "grant-latest"
  ) {
    pass(`竞态模拟：overview mystery grants 只接受最新 mutation payload：${harness.trace.join(" | ")}`);
    return;
  }
  fail("竞态模拟：overview mystery grants 只接受最新 mutation payload", harness.trace.join(" | "));
}

const packageJson = parseJson(files.packageJson);
const frontendAggregator = readRequired(files.frontendAggregator);
const runtimeEvents = readRequired(files.runtimeEvents);
const systemService = readRequired(files.systemService);
const settingsService = readRequired(files.settingsService);
const settingsCache = readRequired(files.settingsCache);
const settingsQuery = readRequired(files.settingsQuery);
const settingsMutation = readRequired(files.settingsMutation);
const settingsTypes = readRequired(files.settingsTypes);
const overviewCache = readRequired(files.overviewCache);
const overviewQuery = readRequired(files.overviewQuery);
const overviewMutation = readRequired(files.overviewMutation);
const overviewTypes = readRequired(files.overviewTypes);
const restorationQueue = parseJson(files.restorationQueue);

assertIncludes("runtime settings reload 委托 settings cache helper", runtimeEvents, [
  "applySettingsRuntimeEventToCache",
  "delegateRuntimeEventToModuleCacheHelper",
  '"usage-refresh-schedule-reload"',
  'event.moduleId !== "settings"',
  "command: payload.command",
  "statusCode: payload.statusCode",
]);
assertSystemServiceContract(systemService, settingsService);
assertSettingsContract(settingsCache, settingsQuery, settingsMutation, settingsTypes);
assertOverviewContract(overviewCache, overviewQuery, overviewMutation, overviewTypes);
assertQueueStillOpen(restorationQueue);
assertRegistration(packageJson, frontendAggregator);
runSettingsRaceSimulation();
runSettingsUsageIntervalSimulation();
runOverviewUsageSimulation();
runOverviewMysteryGrantsSimulation();

if (/\bvoice\b/i.test(systemService)) {
  fail("system usage/hotspot/mystery cache validator 未接入 voice 边界");
} else {
  pass("system usage/hotspot/mystery cache validator 未接入 voice 边界");
}

if (failures.length > 0) {
  console.error("FAIL system usage/hotspot/mystery 前端 cache/sequence validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS system usage/hotspot/mystery 前端 cache/sequence validator");
