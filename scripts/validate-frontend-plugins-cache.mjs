import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  cache: join(repoRoot, "src", "features", "plugins", "cache", "index.ts"),
  query: join(repoRoot, "src", "features", "plugins", "hooks", "query.ts"),
  refresh: join(repoRoot, "src", "features", "plugins", "hooks", "refresh.ts"),
  mutation: join(repoRoot, "src", "features", "plugins", "hooks", "mutation.ts"),
  packageJson: join(repoRoot, "package.json"),
};

function repoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function readRequired(path) {
  if (!existsSync(path)) {
    failures.push(`缺少必需文件：${repoPath(path)}`);
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

function assertStaticPluginsContract(cache, query, refresh, mutation, packageJson) {
  assertIncludes("plugins cache 导出 query、refresh、mutation helper", cache, [
    "export const PluginsCache",
    "export const PluginsQueryKeys",
    "export const PLUGINS_LIST_QUERY_KEY",
    "export function nextPluginsCacheSequence",
    "export function writePluginsCachePayload",
    "export function writePluginsListQueryPayload",
    "export async function writePluginsRefreshPayload",
    "export function beginPluginsMutationSequence",
    "export async function optimisticallyUpdatePluginsToggle",
    "export function rollbackPluginsToggle",
    "export async function writePluginsMutationPayload",
    "export async function invalidatePluginsContractQueries",
  ]);
  assertIncludes("plugins cache 持有 latest accepted 与 mutation fence", cache, [
    "let pluginsLatestAcceptedSequence = 0;",
    "let pluginsMutationFenceSequence = 0;",
    "sequence < pluginsMutationFenceSequence",
  ]);

  const writerBody = extractFunctionBody(cache, "writePluginsCachePayload");
  assertOrder("plugins writer 先检查 mutation fence 再写 authoritative payload", writerBody, [
    "sequence < pluginsMutationFenceSequence",
    "return false",
    "sequence < pluginsLatestAcceptedSequence",
    "return false",
    "pluginsLatestAcceptedSequence = sequence",
    "writePluginsAuthoritativePayload",
  ]);

  assertOrder("plugins mutation begin 提升 fence sequence", extractFunctionBody(cache, "beginPluginsMutationSequence"), [
    "const sequence = nextPluginsCacheSequence();",
    "pluginsMutationFenceSequence = Math.max(",
    "return sequence;",
  ]);

  assertOrder("plugins optimistic toggle 先 fence 再 cancel 再写 optimistic query", extractFunctionBody(cache, "optimisticallyUpdatePluginsToggle"), [
    "const sequence = beginPluginsMutationSequence();",
    "await queryClient.cancelQueries({ queryKey: PLUGINS_LIST_QUERY_KEY });",
    "const previousList = queryClient.getQueryData",
    "queryClient.setQueryData",
    "previousList,",
    "sequence,",
  ]);

  assertOrder("plugins rollback 不能覆盖更新的 optimistic mutation", extractFunctionBody(cache, "rollbackPluginsToggle"), [
    "context && context.sequence < pluginsMutationFenceSequence",
    "return;",
    "context?.previousList",
    "queryClient.setQueryData",
  ]);

  assertOrder("plugins refresh payload 走 active-only-refresh gate 后再写 query", extractFunctionBody(cache, "writePluginsRefreshPayload"), [
    "writePluginsCachePayload(",
    "\"active-only-refresh\"",
    "if (!accepted) return;",
    "queryClient.setQueryData(PLUGINS_LIST_QUERY_KEY, payload);",
    "await invalidatePluginsContractQueries(queryClient);",
  ]);

  assertOrder("plugins mutation payload 通过 context sequence 写 cache 后再 fanout", extractFunctionBody(cache, "writePluginsMutationPayload"), [
    "context?.sequence ?? nextPluginsCacheSequence()",
    "if (!accepted) return;",
    "isPluginsToggleEnvelope(payload)",
    "queryClient.setQueryData(PLUGINS_LIST_QUERY_KEY, toPluginsListEnvelope(payload));",
    "await invalidatePluginsContractQueries(queryClient);",
  ]);

  assertIncludes("plugins query hook 为 full query 预留 sequence 并走 cache helper", query, [
    "const sequence = nextPluginsCacheSequence();",
    "const payload = await pluginsService.list();",
    "writePluginsListQueryPayload(",
    "queryClient,",
    "payload,",
    "sequence,",
  ]);
  assertNotMatches("plugins query hook 不直接写 query cache", query, [
    [/\bsetQueryData\s*\(/, "query hook 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "query hook 不得直接 invalidateQueries"],
    [/\bcancelQueries\s*\(/, "query hook 不得直接 cancelQueries"],
  ]);

  assertIncludes("plugins refresh hook 返回 payload+sequence 并委托 cache helper", refresh, [
    "const sequence = nextPluginsCacheSequence();",
    "const payload = await pluginsService.list();",
    "return { payload, sequence };",
    "writePluginsRefreshPayload(queryClient, payload, sequence)",
  ]);
  assertNotMatches("plugins refresh hook 不直接写 query cache", refresh, [
    [/\bsetQueryData\s*\(/, "refresh hook 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "refresh hook 不得直接 invalidateQueries"],
    [/\bcancelQueries\s*\(/, "refresh hook 不得直接 cancelQueries"],
  ]);

  assertIncludes("plugins toggle mutation 使用 optimistic context 和 rollback", mutation, [
    "optimisticallyUpdatePluginsToggle(queryClient, id, enabled)",
    "rollbackPluginsToggle(queryClient, context)",
    "writePluginsMutationPayload(queryClient, payload, context)",
  ]);
  assertNotMatches("plugins mutation hook 不直接写 query cache", mutation, [
    [/\bsetQueryData\s*\(/, "mutation hook 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "mutation hook 不得直接 invalidateQueries"],
    [/\bcancelQueries\s*\(/, "mutation hook 不得直接 cancelQueries"],
  ]);

  if (
    packageJson.scripts?.["validate:frontend-plugins-cache"] ===
    "node scripts/validate-frontend-plugins-cache.mjs"
  ) {
    pass("package.json 注册 plugins cache validator");
  } else {
    fail("package.json 注册 plugins cache validator");
  }
}

function createPluginsRaceHarness() {
  let latestAcceptedSequence = 0;
  let mutationFenceSequence = 0;
  let value = "empty";
  let listValue = "empty";
  const trace = [];

  function write(source, sequence, nextValue) {
    trace.push(`尝试:${source}:${sequence}:${nextValue}`);
    if (sequence < mutationFenceSequence) {
      trace.push(`拒绝:fence:${nextValue}`);
      return false;
    }
    if (sequence < latestAcceptedSequence) {
      trace.push(`拒绝:latest:${nextValue}`);
      return false;
    }
    latestAcceptedSequence = sequence;
    value = nextValue;
    trace.push(`写入:${nextValue}`);
    return true;
  }

  function beginMutation(sequence, optimisticValue) {
    mutationFenceSequence = Math.max(mutationFenceSequence, sequence);
    const previousList = listValue;
    listValue = optimisticValue;
    trace.push(`optimistic:${sequence}:${optimisticValue}`);
    return { sequence, previousList };
  }

  function rollback(context) {
    if (!context) {
      trace.push("rollback:cancelled");
      return false;
    }
    if (context.sequence < mutationFenceSequence) {
      trace.push(`rollback:stale:${context.sequence}`);
      return false;
    }
    listValue = context.previousList;
    trace.push(`rollback:${context.sequence}:${context.previousList}`);
    return true;
  }

  function abort(context) {
    trace.push(`abort:${context?.sequence ?? "none"}`);
    return rollback(context);
  }

  function cancelBeforeMutate() {
    trace.push("cancel:before-mutate");
    return rollback(undefined);
  }

  return {
    trace,
    write,
    beginMutation,
    rollback,
    abort,
    cancelBeforeMutate,
    value: () => value,
    listValue: () => listValue,
    fence: (sequence) => {
      mutationFenceSequence = Math.max(mutationFenceSequence, sequence);
      trace.push(`fence:${sequence}`);
    },
  };
}

function runRefreshRaceSimulation() {
  const harness = createPluginsRaceHarness();
  harness.write("full-refresh", 1, "baseline");
  harness.beginMutation(3, "toggle-enabled-optimistic");
  harness.write("mutation-payload", 3, "toggle-enabled");
  const staleRefreshAccepted = harness.write("full-refresh", 2, "stale-list");
  const delayedRefreshAccepted = harness.write("active-only-refresh", 1, "delayed-list");
  const replayAccepted = harness.write("active-only-refresh", 2, "event-replay-list");
  const freshRefreshAccepted = harness.write("active-only-refresh", 4, "fresh-list");

  if (
    !staleRefreshAccepted &&
    !delayedRefreshAccepted &&
    !replayAccepted &&
    freshRefreshAccepted &&
    harness.value() === "fresh-list"
  ) {
    pass(`竞态模拟：plugins 旧 refresh / event replay 不覆盖 toggle mutation（${harness.trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：plugins 旧 refresh / event replay 不覆盖 toggle mutation", harness.trace.join(" | "));
}

function runConcurrentMutationSimulation() {
  const harness = createPluginsRaceHarness();
  harness.write("full-refresh", 1, "baseline");
  harness.beginMutation(2, "plugin-enabled");
  harness.beginMutation(3, "plugin-disabled");
  const oldMutationAccepted = harness.write("mutation-payload", 2, "old-enabled-payload");
  const latestMutationAccepted = harness.write("mutation-payload", 3, "latest-disabled-payload");

  if (!oldMutationAccepted && latestMutationAccepted && harness.value() === "latest-disabled-payload") {
    pass(`竞态模拟：plugins 并发 mutation 只接受最新 payload（${harness.trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：plugins 并发 mutation 只接受最新 payload", harness.trace.join(" | "));
}

function runFailureRollbackSimulation() {
  const harness = createPluginsRaceHarness();
  harness.write("full-refresh", 1, "baseline");
  const first = harness.beginMutation(2, "first-optimistic");
  const second = harness.beginMutation(3, "second-optimistic");
  const staleRollback = harness.rollback(first);
  const currentRollback = harness.rollback(second);

  if (!staleRollback && currentRollback && harness.listValue() === "first-optimistic") {
    pass(`竞态模拟：plugins failure rollback 不覆盖更新 optimistic，当前失败才回滚（${harness.trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：plugins failure rollback 不覆盖更新 optimistic", harness.trace.join(" | "));
}

function runCancelAbortSimulation() {
  const harness = createPluginsRaceHarness();
  harness.write("full-refresh", 1, "baseline");
  const cancelled = harness.cancelBeforeMutate();
  const context = harness.beginMutation(2, "pending-optimistic");
  const aborted = harness.abort(context);
  const delayedAfterAbort = harness.write("active-only-refresh", 1, "delayed-after-abort");

  if (!cancelled && aborted && !delayedAfterAbort && harness.listValue() === "empty") {
    pass(`竞态模拟：plugins cancel/abort 不写入 stale payload（${harness.trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：plugins cancel/abort 不写入 stale payload", harness.trace.join(" | "));
}

const cache = readRequired(files.cache);
const query = readRequired(files.query);
const refresh = readRequired(files.refresh);
const mutation = readRequired(files.mutation);
const packageJson = parseJson(files.packageJson);

assertStaticPluginsContract(cache, query, refresh, mutation, packageJson);
runRefreshRaceSimulation();
runConcurrentMutationSimulation();
runFailureRollbackSimulation();
runCancelAbortSimulation();

if (failures.length > 0) {
  console.error("FAIL plugins 前端 cache/sequence validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS plugins 前端 cache/sequence validator");
