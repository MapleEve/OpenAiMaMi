import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  cache: join(repoRoot, "src", "features", "daemon-autoswitch", "cache", "index.ts"),
  query: join(repoRoot, "src", "features", "daemon-autoswitch", "hooks", "query.ts"),
  mutation: join(repoRoot, "src", "features", "daemon-autoswitch", "hooks", "mutation.ts"),
  runtime: join(repoRoot, "src", "features", "daemon-autoswitch", "hooks", "runtime.ts"),
  runtimeBootstrap: join(repoRoot, "src", "app", "runtime", "bootstrap.ts"),
  service: join(repoRoot, "src", "services", "daemon-autoswitch", "index.ts"),
  mocks: join(repoRoot, "src", "mocks", "fixtures", "commands.ts"),
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

function countMatches(text, pattern) {
  return [...text.matchAll(pattern)].length;
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
  const signatureEnd = /\)\s*\{/g;
  signatureEnd.lastIndex = markerIndex;
  const match = signatureEnd.exec(source);
  const openBraceIndex = match ? match.index + match[0].lastIndexOf("{") : -1;
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

function assertStaticDaemonAutoswitchContract(
  cache,
  query,
  mutation,
  runtime,
  runtimeBootstrap,
  service,
  mocks,
  packageJson,
) {
  assertIncludes("daemon-autoswitch cache 导出核心 helper", cache, [
    "export const DaemonAutoswitchCache",
    "export const DaemonAutoswitchQueryKeys",
    "export const DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY",
    "export const DAEMON_AUTOSWITCH_PENDING_QUERY_KEY",
    "export function beginDaemonAutoswitchMutation",
    "export async function prepareDaemonAutoswitchMutation",
    "export function writeDaemonAutoswitchQueryPayload",
    "export async function runDaemonAutoswitchQuery",
    "export async function writeDaemonAutoswitchMutationPayload",
    "export async function invalidateDaemonAutoswitchContractQueries",
    "export async function invalidateDaemonAutoswitchCrossModuleQueries",
    "export async function applyDaemonAutoswitchRuntimeEventToCache",
  ]);
  assertIncludes("runtime bootstrap 通过 daemon cache helper 写 seed", runtimeBootstrap, [
    "runDaemonAutoswitchQuery(",
    "DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY",
    "() => api.loadBootstrapState()",
  ]);
  assertNotMatches("runtime bootstrap 不绕过 daemon cache helper 直写 query cache", runtimeBootstrap, [
    [/setQueryData\s*\(\s*DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY/, "runtime bootstrap 不得直接写 daemon bootstrap query key"],
  ]);
  assertIncludes("daemon-autoswitch cache 持有 query sequence 与 mutation fence", cache, [
    "const daemonAutoswitchQuerySequences = new Map<string, number>();",
    "const daemonAutoswitchMutationFences = new Map<string, number>();",
    "function reserveDaemonAutoswitchQuerySequence",
    "function canAcceptDaemonAutoswitchPayload",
  ]);

  const runQueryBody = extractFunctionBody(cache, "runDaemonAutoswitchQuery");
  assertOrder("daemon query load 前预留 sequence，load 后经 gate 写 cache", runQueryBody, [
    "const sequence = reserveDaemonAutoswitchQuerySequence(queryKey);",
    "const payload = await load();",
    "writeDaemonAutoswitchQueryPayload(",
    "queryKey,",
    "source: \"full-refresh\"",
    "sequence,",
  ]);

  const writerBody = extractFunctionBody(cache, "writeDaemonAutoswitchQueryPayload");
  assertRegex(
    "daemon query payload 写入前检查 sequence gate",
    writerBody,
    /if\s*\(\s*!\s*canAcceptDaemonAutoswitchPayload\(\s*queryKey,\s*source,\s*sequence\s*\)\s*\)\s*\{[\s\S]*?return\s+false\s*;[\s\S]*?\}[\s\S]*?writeDaemonAutoswitchAuthoritativePayload/,
  );
  assertRegex(
    "daemon stale query 不能越过 mutation fence",
    extractFunctionBody(cache, "canAcceptDaemonAutoswitchPayload"),
    /return\s+sequence\s*>=\s*latestStarted\s*&&\s*sequence\s*>=\s*mutationFence\s*;/,
  );

  const beginBody = extractFunctionBody(cache, "beginDaemonAutoswitchMutation");
  assertOrder("daemon mutation begin 提升全部 query fence", beginBody, [
    "const sequence = nextDaemonAutoswitchOperationSequence();",
    "for (const queryKey of DAEMON_AUTOSWITCH_WRITABLE_QUERY_KEYS)",
    "daemonAutoswitchMutationFences.set(",
    "Math.max(",
    "return sequence;",
  ]);

  const prepareBody = extractFunctionBody(cache, "prepareDaemonAutoswitchMutation");
  assertOrder("daemon mutation 前 begin 并 cancel query", prepareBody, [
    "const sequence = beginDaemonAutoswitchMutation();",
    "queryClient.cancelQueries({ queryKey })",
    "return { sequence };",
  ]);

  const mutationWriterBody = extractFunctionBody(cache, "writeDaemonAutoswitchMutationPayload");
  assertOrder("daemon mutation payload 通过 context sequence 写入并失效合同 query", mutationWriterBody, [
    "writeDaemonAutoswitchQueryPayload(",
    'source: "mutation-payload"',
    "sequence,",
    "await invalidateDaemonAutoswitchContractQueries(queryClient);",
    "await invalidateDaemonAutoswitchCrossModuleQueries(queryClient);",
  ]);
  assertIncludes("daemon mutation writer 有默认 fence sequence", cache, [
    "sequence = beginDaemonAutoswitchMutation()",
  ]);

  assertIncludes("daemon query hook 引入 runDaemonAutoswitchQuery 和两个 query key", query, [
    "runDaemonAutoswitchQuery",
    "DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY",
    "DAEMON_AUTOSWITCH_PENDING_QUERY_KEY",
    "daemonAutoswitchService.loadBootstrapState()",
    "daemonAutoswitchService.loadPendingAutoSwitch()",
  ]);
  if (countMatches(query, /runDaemonAutoswitchQuery\(/g) === 2) {
    pass("daemon 两个 query 全部走 runDaemonAutoswitchQuery");
  } else {
    fail("daemon 两个 query 全部走 runDaemonAutoswitchQuery", "runDaemonAutoswitchQuery 调用次数不是 2");
  }
  assertNotMatches("daemon query hook 不直接写 TanStack cache", query, [
    [/\bsetQueryData\s*\(/, "query hook 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "query hook 不得直接 invalidateQueries"],
    [/\bcancelQueries\s*\(/, "query hook 不得直接 cancelQueries"],
  ]);

  for (const name of [
    "runOnceMutation",
    "setAutoSwitchMutation",
    "dismissPendingMutation",
  ]) {
    const block = extractConstMutationBlock(mutation, name);
    assertIncludes(`${name} 使用 prepare/write helper`, block, [
      "onMutate: () => cancelDaemonAutoswitchQueries(queryClient)",
      "onSuccess: (payload, _variables, context)",
      "writeDaemonAutoswitchMutationPayload(",
      "context?.sequence",
    ]);
    assertOrder(`${name} 使用 onMutate context sequence`, block, [
    "onMutate:",
      "cancelDaemonAutoswitchQueries",
      "onSuccess:",
      "writeDaemonAutoswitchMutationPayload",
      "context?.sequence",
    ]);
  }
  const confirmBlock = extractConstMutationBlock(mutation, "confirmPendingAndRestartMutation");
  assertIncludes("confirm pending restart mutation 只通过 fence 和合同失效重载", confirmBlock, [
    "cancelDaemonAutoswitchQueries(queryClient)",
    "reloadDaemonAutoswitchAfterMutation(queryClient)",
  ]);
  assertNotMatches("daemon mutation hook 不绕过 cache helper 写 query data", mutation, [
    [/\bsetQueryData\s*\(/, "mutation hook 不得直接 setQueryData"],
  ]);

  assertIncludes("daemon runtime 只通过 cache helper 消费事件", runtime, [
    "daemonAutoswitchService.subscribePendingAutoSwitch",
    "applyDaemonAutoswitchRuntimeEventToCache(",
    '"auto-switch-pending"',
  ]);
  assertNotMatches("daemon runtime 不直接操作 query cache 或 query key", runtime, [
    [/\binvalidateQueries\s*\(/, "runtime hook 不得直接 invalidateQueries"],
    [/DAEMON_AUTOSWITCH_.*QUERY_KEY/, "runtime hook 不得直接消费 query key"],
    [/setQueryData\s*\(/, "runtime hook 不得直接 setQueryData"],
  ]);

  assertIncludes("daemon service facade 保持窄入口", service, [
    'const AUTO_SWITCH_PENDING_EVENT = "auto-switch-pending";',
    "listen<PendingAutoSwitchEventPayload>",
    "unlisten?.()",
    "setAutoSwitch",
    "configureAutoSwitch",
    "loadBootstrapState",
    "loadPendingAutoSwitch",
    "dismissPendingAutoSwitch",
    "confirmPendingAutoSwitch",
    "confirmPendingAutoSwitchAndRestartCodex",
    "subscribePendingAutoSwitch",
    "runDaemonOnce",
  ]);

  assertIncludes("daemon E2E mock 使用专用 payload handler", mocks, [
    "const daemonAutoswitchMockState",
    "const runDaemonOnceHandler",
    "const setAutoSwitchHandler",
    "const configureAutoSwitchHandler",
    "const dismissPendingAutoSwitchHandler",
    "const confirmPendingAutoSwitchHandler",
    "configure_auto_switch: configureAutoSwitchHandler",
    "confirm_pending_auto_switch: confirmPendingAutoSwitchHandler",
    "confirm_pending_auto_switch_and_restart_codex: confirmPendingAutoSwitchHandler",
    "dismiss_pending_auto_switch: dismissPendingAutoSwitchHandler",
    "run_daemon_once: runDaemonOnceHandler",
    "set_auto_switch: setAutoSwitchHandler",
  ]);

  if (
    packageJson.scripts?.["validate:frontend-daemon-autoswitch-cache"] ===
    "node scripts/validate-frontend-daemon-autoswitch-cache.mjs"
  ) {
    pass("package.json 注册 daemon autoswitch cache validator");
  } else {
    fail("package.json 注册 daemon autoswitch cache validator");
  }
}

function runRaceSimulation() {
  const latestStarted = new Map();
  const fence = new Map();
  const trace = [];
  let sequence = 0;

  function reserve(key) {
    sequence += 1;
    latestStarted.set(key, Math.max(latestStarted.get(key) ?? 0, sequence));
    return sequence;
  }

  function beginMutation(keys) {
    sequence += 1;
    for (const key of keys) {
      fence.set(key, Math.max(fence.get(key) ?? 0, sequence));
    }
    return sequence;
  }

  function canAccept(key, source, itemSequence) {
    if (source === "mutation-payload") return true;
    return (
      itemSequence >= (latestStarted.get(key) ?? 0) &&
      itemSequence >= (fence.get(key) ?? 0)
    );
  }

  const bootstrapQuery = reserve("bootstrap");
  const pendingQuery = reserve("pending");
  const mutation = beginMutation(["bootstrap", "pending"]);
  trace.push(`bootstrap:${bootstrapQuery}`);
  trace.push(`pending:${pendingQuery}`);
  trace.push(`mutation:${mutation}`);

  const staleBootstrapAccepted = canAccept("bootstrap", "full-refresh", bootstrapQuery);
  const stalePendingAccepted = canAccept("pending", "full-refresh", pendingQuery);
  const mutationAccepted = canAccept("bootstrap", "mutation-payload", mutation);

  if (!staleBootstrapAccepted && !stalePendingAccepted && mutationAccepted) {
    pass(`竞态模拟：旧 query 不覆盖 daemon mutation payload（${trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：旧 query 不覆盖 daemon mutation payload", trace.join(" | "));
}

const cache = readRequired(files.cache);
const query = readRequired(files.query);
const mutation = readRequired(files.mutation);
const runtime = readRequired(files.runtime);
const runtimeBootstrap = readRequired(files.runtimeBootstrap);
const service = readRequired(files.service);
const mocks = readRequired(files.mocks);
const packageJson = parseJson(files.packageJson);

assertStaticDaemonAutoswitchContract(
  cache,
  query,
  mutation,
  runtime,
  runtimeBootstrap,
  service,
  mocks,
  packageJson,
);
runRaceSimulation();

if (failures.length > 0) {
  console.error("FAIL daemon-autoswitch 前端 cache/sequence validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS daemon-autoswitch 前端 cache/sequence validator");
