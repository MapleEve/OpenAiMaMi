import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  cache: join(repoRoot, "src", "features", "maintenance", "cache", "index.ts"),
  query: join(repoRoot, "src", "features", "maintenance", "hooks", "query.ts"),
  mutation: join(repoRoot, "src", "features", "maintenance", "hooks", "mutation.ts"),
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

function assertStaticCacheContract(cache, query, mutation, packageJson) {
  assertIncludes("maintenance cache 导出核心 helper", cache, [
    "export function beginMaintenanceMutation",
    "export async function prepareMaintenanceMutation",
    "export function writeMaintenanceQueryPayload",
    "export async function runMaintenanceQuery",
    "export async function writeMaintenanceMutationPayload",
    "export async function invalidateMaintenanceContractQueries",
  ]);
  assertIncludes("maintenance cache 持有 query sequence 与 mutation fence", cache, [
    "const maintenanceQuerySequences = new Map<string, number>();",
    "const maintenanceMutationFences = new Map<string, number>();",
    "function nextMaintenanceQuerySequence",
    "function canAcceptMaintenancePayload",
  ]);

  const runQueryBody = extractFunctionBody(cache, "runMaintenanceQuery");
  assertOrder("query load 前预留 sequence，load 后经 gate 写 cache", runQueryBody, [
    "const sequence = nextMaintenanceQuerySequence(queryKey);",
    "const payload = await load();",
    "writeMaintenanceQueryPayload(queryClient, queryKey, payload,",
    "sequence,",
  ]);

  const writerBody = extractFunctionBody(cache, "writeMaintenanceQueryPayload");
  assertRegex(
    "query payload 写入前检查 sequence gate",
    writerBody,
    /if\s*\(\s*!\s*canAcceptMaintenancePayload\(\s*queryKey,\s*options\.source,\s*sequence\s*\)\s*\)\s*\{[\s\S]*?return\s+false\s*;[\s\S]*?\}[\s\S]*?queryClient\.setQueryData[\s\S]*?writeMaintenanceAuthoritativePayload/,
  );
  assertRegex(
    "stale query 不能越过 mutation fence",
    extractFunctionBody(cache, "canAcceptMaintenancePayload"),
    /return\s+sequence\s*>=\s*latestStarted\s*&&\s*sequence\s*>=\s*mutationFence\s*;/,
  );

  const beginBody = extractFunctionBody(cache, "beginMaintenanceMutation");
  assertOrder("mutation begin 提升 fence sequence", beginBody, [
    "const sequence = nextMaintenanceQuerySequence(queryKey);",
    "maintenanceMutationFences.set(",
    "Math.max(",
    "return sequence;",
  ]);

  const prepareBody = extractFunctionBody(cache, "prepareMaintenanceMutation");
  assertOrder("mutation 前 begin 并 cancel query", prepareBody, [
    "const sequence = beginMaintenanceMutation(queryKey);",
    "await queryClient.cancelQueries({ queryKey });",
    "return { sequence };",
  ]);

  const mutationWriterBody = extractFunctionBody(cache, "writeMaintenanceMutationPayload");
  assertOrder("mutation payload 通过 context sequence 写入并失效合同 query", mutationWriterBody, [
    "writeMaintenanceQueryPayload(queryClient, queryKey, payload,",
    'source: "mutation-payload"',
    "sequence,",
    "await invalidateMaintenanceContractQueries(queryClient);",
  ]);

  const invalidateBody = extractFunctionBody(cache, "invalidateMaintenanceContractQueries");
  assertIncludes("maintenance invalidation 覆盖三个合同 query key", invalidateBody, [
    "MAINTENANCE_IMAGE_COMPAT_QUERY_KEY",
    "MAINTENANCE_SYSTEM_INFO_QUERY_KEY",
    "MAINTENANCE_SNAPSHOT_QUERY_KEY",
  ]);

  assertIncludes("maintenance query hook 引入 runMaintenanceQuery 和三个 query key", query, [
    "runMaintenanceQuery",
    "MAINTENANCE_SYSTEM_INFO_QUERY_KEY",
    "MAINTENANCE_IMAGE_COMPAT_QUERY_KEY",
    "MAINTENANCE_SNAPSHOT_QUERY_KEY",
  ]);
  if (countMatches(query, /runMaintenanceQuery\(/g) === 3) {
    pass("maintenance 三个 query 全部走 runMaintenanceQuery");
  } else {
    fail("maintenance 三个 query 全部走 runMaintenanceQuery", "runMaintenanceQuery 调用次数不是 3");
  }
  assertNotMatches("maintenance query hook 不直接写 TanStack cache", query, [
    [/\bsetQueryData\s*\(/, "query hook 不得直接 setQueryData"],
  ]);

  const imageCompatMutation = extractConstMutationBlock(mutation, "setImageCompatMutation");
  assertIncludes("set image compat mutation 使用 prepare/write helper", imageCompatMutation, [
    "prepareMaintenanceMutation(queryClient, MAINTENANCE_IMAGE_COMPAT_QUERY_KEY)",
    "writeMaintenanceMutationPayload(",
    "context?.sequence",
  ]);
  assertOrder("set image compat mutation 使用 onMutate context sequence", imageCompatMutation, [
    "onMutate:",
    "prepareMaintenanceMutation",
    "onSuccess:",
    "writeMaintenanceMutationPayload",
    "context?.sequence",
  ]);
  assertNotMatches("maintenance mutation hook 不绕过 cache helper 写 query data", mutation, [
    [/\bsetQueryData\s*\(/, "mutation hook 不得直接 setQueryData"],
  ]);

  if (
    packageJson.scripts?.["validate:frontend-maintenance-cache"] ===
    "node scripts/validate-frontend-maintenance-cache.mjs"
  ) {
    pass("package.json 注册 maintenance cache validator");
  } else {
    fail("package.json 注册 maintenance cache validator");
  }
}

function runRaceSimulation() {
  const state = new Map();
  const fence = new Map();
  const trace = [];

  function write(key, source, sequence, value) {
    const latestStarted = state.get(key)?.latestStarted ?? 0;
    const mutationFence = fence.get(key) ?? 0;
    trace.push(`尝试:${key}:${source}:${sequence}:${value}`);
    if (source !== "mutation-payload" && (sequence < latestStarted || sequence < mutationFence)) {
      trace.push(`拒绝:${value}`);
      return false;
    }
    state.set(key, { latestStarted: Math.max(latestStarted, sequence), value });
    trace.push(`写入:${value}`);
    return true;
  }

  fence.set("imageCompat", 2);
  write("imageCompat", "mutation-payload", 2, "mutation-result");
  const staleAccepted = write("imageCompat", "full-refresh", 1, "stale-query");

  if (!staleAccepted && state.get("imageCompat")?.value === "mutation-result") {
    pass(`竞态模拟：旧 query 不覆盖 mutation payload（${trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：旧 query 不覆盖 mutation payload", trace.join(" | "));
}

const cache = readRequired(files.cache);
const query = readRequired(files.query);
const mutation = readRequired(files.mutation);
const packageJson = parseJson(files.packageJson);

assertStaticCacheContract(cache, query, mutation, packageJson);
runRaceSimulation();

if (failures.length > 0) {
  console.error("FAIL maintenance 前端 cache/sequence validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS maintenance 前端 cache/sequence validator");
