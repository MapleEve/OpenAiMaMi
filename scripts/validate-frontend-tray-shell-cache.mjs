import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  sharedCache: join(repoRoot, "src", "features", "_shared", "cache.ts"),
  runtimeEvents: join(repoRoot, "src", "app", "runtime", "events.ts"),
  cache: join(repoRoot, "src", "features", "tray-shell", "cache", "index.ts"),
  query: join(repoRoot, "src", "features", "tray-shell", "hooks", "query.ts"),
  mutation: join(repoRoot, "src", "features", "tray-shell", "hooks", "mutation.ts"),
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

function assertStaticTrayShellContract(sharedCache, runtimeEvents, cache, query, mutation) {
  assertIncludes("shared cache 保留 replay / mutation-payload source 语义", sharedCache, [
    "export type ModuleCacheSource",
    '| "mutation-payload"',
    '| "replay"',
    "mutationFenceAt?: number;",
  ]);

  assertIncludes("runtime event 只通过 tray-shell cache owner 定位 query root", runtimeEvents, [
    'import { TrayShellCache } from "@/features/tray-shell/cache";',
    '"tray-shell": runtimeModuleQueryKeys(TrayShellCache.queryKeys.root)',
  ]);
  assertNotMatches("runtime event 不复刻 tray-shell notification client 裸 key", runtimeEvents, [
    [/TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY|notification-client/, "runtime event 不得直接消费 tray-shell notification client query key"],
  ]);

  assertIncludes("tray-shell cache 导出 typed owner、notification query key 与 fence helper", cache, [
    "export const TrayShellCache",
    'createModuleCacheOwner<TrayShellCachePayload>("tray-shell")',
    "export const TrayShellQueryKeys = TrayShellCache.queryKeys;",
    "export const TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY",
    '"notification-client"',
    "const trayShellQuerySequences = new Map<string, number>();",
    "const trayShellMutationFences = new Map<string, number>();",
    "function canAcceptTrayShellPayload(",
    "function beginTrayShellCommandFence(",
    "export async function prepareTrayShellCommandAckFence(",
    "export function writeTrayShellQueryPayload",
    "export async function runTrayShellQuery",
    "export async function invalidateTrayShellCommandAckFence",
  ]);

  assertOrder("tray-shell query sequence 按 queryKey 独立递增", extractFunctionBody(cache, "nextTrayShellQuerySequence"), [
    "const serialized = serializeTrayShellQueryKey(queryKey);",
    "const next = (trayShellQuerySequences.get(serialized) ?? 0) + 1;",
    "trayShellQuerySequences.set(serialized, next);",
    "return next;",
  ]);

  assertOrder("tray-shell accept gate 同时挡旧 query、delayed response 与 mutation fence", extractFunctionBody(cache, "canAcceptTrayShellPayload"), [
    "const latestStarted = trayShellQuerySequences.get(serialized) ?? 0;",
    "const mutationFence = trayShellMutationFences.get(serialized) ?? 0;",
    'if (source === "mutation-payload")',
    "return sequence >= mutationFence;",
    "return sequence >= latestStarted && sequence >= mutationFence;",
  ]);

  assertOrder("tray-shell focus ack fence 先提升 query sequence 再记录 mutation fence", extractFunctionBody(cache, "beginTrayShellCommandFence"), [
    "const sequence = nextTrayShellQuerySequence(queryKey);",
    "trayShellMutationFences.set(",
    "Math.max(trayShellMutationFences.get(serialized) ?? 0, sequence)",
    "return sequence;",
  ]);

  const prepareFenceBody = extractFunctionBody(cache, "prepareTrayShellCommandAckFence");
  assertOrder("tray-shell focus ack prepare 只建栅栏并取消 notification client query", prepareFenceBody, [
    "const queryKeys = [TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY];",
    "sequence: beginTrayShellCommandFence(queryKey),",
    "queryClient.cancelQueries({ queryKey })",
    "return { sequences };",
  ]);
  assertNotMatches("tray-shell focus ack prepare 不写 notification client query payload", prepareFenceBody, [
    [/\bsetQueryData\s*\(/, "prepare fence 不得 setQueryData"],
    [/\bwriteTrayShellQueryPayload\s*\(/, "prepare fence 不得写 query payload"],
    [/\bwriteTrayShellAuthoritativePayload\s*\(/, "prepare fence 不得写 authoritative payload"],
  ]);

  assertOrder("tray-shell writer 先通过 sequence/fence gate 再写 query 与 authoritative payload", extractFunctionBody(cache, "writeTrayShellQueryPayload"), [
    'options.source === "mutation-payload"',
    "beginTrayShellCommandFence(queryKey)",
    "nextTrayShellQuerySequence(queryKey)",
    "if (!canAcceptTrayShellPayload(queryKey, options.source, sequence))",
    "return false;",
    "queryClient.setQueryData<TPayload>(queryKey, payload);",
    "writeTrayShellAuthoritativePayload(queryClient,",
    "return true;",
  ]);

  assertOrder("tray-shell query runner 在 load 前预留 sequence，delayed 返回必须重新过 gate", extractFunctionBody(cache, "runTrayShellQuery"), [
    "const sequence = nextTrayShellQuerySequence(queryKey);",
    "const payload = await load();",
    "const accepted = writeTrayShellQueryPayload(queryClient, queryKey, payload,",
    "source,",
    "sequence,",
    "if (!accepted)",
    "return queryClient.getQueryData<TPayload>(queryKey) ?? payload;",
  ]);

  assertOrder("tray-shell command ack success 只失效合同 query", extractFunctionBody(cache, "invalidateTrayShellCommandAckFence"), [
    "await invalidateTrayShellContractQueries(queryClient);",
  ]);

  assertIncludes("tray-shell notification query 只通过 cache runner 访问 system service", query, [
    "useTrayShellNotificationQuery",
    "useQuery<TrayShellNotificationEnvelope>",
    "queryKey: TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY",
    "runTrayShellQuery(",
    "systemService.getNotificationClientState()",
  ]);
  assertNotMatches("tray-shell query hook 不直接写或取消 TanStack cache", query, [
    [/\bsetQueryData\s*\(/, "query hook 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "query hook 不得直接 invalidateQueries"],
    [/\bcancelQueries\s*\(/, "query hook 不得直接 cancelQueries"],
    [/\buseMutation\b/, "query hook 不得 owning mutation"],
  ]);

  assertIncludes("tray-shell focus mutation 只委托 ack fence helper", mutation, [
    "useTrayShellFocusMainWindowMutation",
    "systemService.focusMainWindow()",
    "onMutate: () => prepareTrayShellCommandAckFence(queryClient)",
    "await invalidateTrayShellCommandAckFence(queryClient);",
  ]);
  assertNotMatches("tray-shell mutation hook 不直接覆盖 notification client query", mutation, [
    [/TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY/, "mutation hook 不得直接消费 notification client query key"],
    [/\bwriteTrayShellQueryPayload\b/, "mutation hook 不得直接写 notification client query payload"],
    [/\bsetQueryData\s*\(/, "mutation hook 不得直接 setQueryData"],
    [/\bcancelQueries\s*\(/, "mutation hook 不得直接 cancelQueries"],
    [/\binvalidateQueries\s*\(/, "mutation hook 不得直接 invalidateQueries"],
  ]);
}

function createTrayShellRaceHarness() {
  const notificationKey = JSON.stringify(["tray-shell", "notification-client"]);
  const querySequences = new Map();
  const mutationFences = new Map();
  const queryData = new Map();
  const trace = [];
  let moduleSequence = 0;

  function nextQuerySequence(key = notificationKey) {
    const next = (querySequences.get(key) ?? 0) + 1;
    querySequences.set(key, next);
    trace.push(`start:${next}`);
    return next;
  }

  function canAccept(key, source, sequence) {
    const latestStarted = querySequences.get(key) ?? 0;
    const mutationFence = mutationFences.get(key) ?? 0;
    if (source === "mutation-payload") {
      return sequence >= mutationFence;
    }
    return sequence >= latestStarted && sequence >= mutationFence;
  }

  function beginFocusAckFence(key = notificationKey) {
    const sequence = nextQuerySequence(key);
    mutationFences.set(key, Math.max(mutationFences.get(key) ?? 0, sequence));
    trace.push(`fence:${sequence}`);
    return { queryKey: key, sequence };
  }

  function write(source, sequence, value, key = notificationKey) {
    trace.push(`尝试:${source}:${sequence}:${value}`);
    if (!canAccept(key, source, sequence)) {
      trace.push(`拒绝:${source}:${sequence}:${value}`);
      return false;
    }
    queryData.set(key, value);
    moduleSequence += 1;
    trace.push(`写入:${source}:${sequence}:${value}:module-${moduleSequence}`);
    return true;
  }

  return {
    trace,
    beginFocusAckFence,
    nextQuerySequence,
    write,
    value: (key = notificationKey) => queryData.get(key) ?? "empty",
  };
}

function runStaleQuerySimulation() {
  const harness = createTrayShellRaceHarness();
  const staleSequence = harness.nextQuerySequence();
  const freshSequence = harness.nextQuerySequence();
  const freshAccepted = harness.write("full-refresh", freshSequence, "fresh-client");
  const staleAccepted = harness.write("full-refresh", staleSequence, "stale-client");

  if (!staleAccepted && freshAccepted && harness.value() === "fresh-client") {
    pass(`竞态模拟：tray-shell stale query 不覆盖 notification client query（${harness.trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：tray-shell stale query 不覆盖 notification client query", harness.trace.join(" | "));
}

function runDelayedFocusAckSimulation() {
  const harness = createTrayShellRaceHarness();
  const baselineSequence = harness.nextQuerySequence();
  harness.write("full-refresh", baselineSequence, "baseline-client");
  const delayedSequence = harness.nextQuerySequence();
  const fence = harness.beginFocusAckFence();
  const delayedAccepted = harness.write("full-refresh", delayedSequence, "delayed-client");
  const freshSequence = harness.nextQuerySequence();
  const freshAccepted = harness.write("full-refresh", freshSequence, "fresh-after-focus");

  if (
    fence.sequence > delayedSequence &&
    !delayedAccepted &&
    freshAccepted &&
    harness.value() === "fresh-after-focus"
  ) {
    pass(`竞态模拟：tray-shell delayed response 不越过 focus ack fence（${harness.trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：tray-shell delayed response 不越过 focus ack fence", harness.trace.join(" | "));
}

function runEventReplaySimulation() {
  const harness = createTrayShellRaceHarness();
  const baselineSequence = harness.nextQuerySequence();
  harness.write("full-refresh", baselineSequence, "baseline-client");
  const fence = harness.beginFocusAckFence();
  const replayAccepted = harness.write("replay", baselineSequence, "replayed-client");
  const activeOnlySequence = harness.nextQuerySequence();
  const activeOnlyAccepted = harness.write(
    "active-only-refresh",
    activeOnlySequence,
    "active-only-client",
  );

  if (
    fence.sequence > baselineSequence &&
    !replayAccepted &&
    activeOnlyAccepted &&
    harness.value() === "active-only-client"
  ) {
    pass(`竞态模拟：tray-shell event replay 不覆盖 notification client query（${harness.trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：tray-shell event replay 不覆盖 notification client query", harness.trace.join(" | "));
}

function runFocusAckNoPayloadSimulation() {
  const harness = createTrayShellRaceHarness();
  const baselineSequence = harness.nextQuerySequence();
  harness.write("full-refresh", baselineSequence, "baseline-client");
  const before = harness.value();
  const fence = harness.beginFocusAckFence();
  const after = harness.value();
  const staleAckWindowAccepted = harness.write("runtime-event", fence.sequence - 1, "stale-ack-window");

  if (before === after && !staleAckWindowAccepted && harness.value() === "baseline-client") {
    pass(`竞态模拟：tray-shell focus/ack mutation fence 不写入也不覆盖 notification client query（${harness.trace.join(" | ")}）`);
    return;
  }
  fail(
    "竞态模拟：tray-shell focus/ack mutation fence 不写入也不覆盖 notification client query",
    harness.trace.join(" | "),
  );
}

const sharedCache = readRequired(files.sharedCache);
const runtimeEvents = readRequired(files.runtimeEvents);
const cache = readRequired(files.cache);
const query = readRequired(files.query);
const mutation = readRequired(files.mutation);

assertStaticTrayShellContract(sharedCache, runtimeEvents, cache, query, mutation);
runStaleQuerySimulation();
runDelayedFocusAckSimulation();
runEventReplaySimulation();
runFocusAckNoPayloadSimulation();

if (failures.length > 0) {
  console.error("FAIL tray-shell 前端 cache/sequence validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS tray-shell 前端 cache/sequence validator");
