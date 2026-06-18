import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  sequence: join(repoRoot, "src", "features", "mcp", "cache", "sequence.ts"),
  cache: join(repoRoot, "src", "features", "mcp", "cache", "index.ts"),
  query: join(repoRoot, "src", "features", "mcp", "hooks", "query.ts"),
  mutation: join(repoRoot, "src", "features", "mcp", "hooks", "mutation.ts"),
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

function assertStaticMcpContract(sequence, cache, query, mutation, packageJson) {
  assertIncludes("mcp sequence 持有 refresh 与 mutation fence", sequence, [
    "let mcpLatestAcceptedSequence = 0;",
    "let mcpMutationFenceSequence = 0;",
    "export function beginMcpMutationSequence()",
    "export function acceptMcpCacheSequence(",
    "source !== \"mutation-payload\" && sequence < mcpMutationFenceSequence",
  ]);

  assertOrder("mcp mutation begin 先预留 fence sequence", extractFunctionBody(sequence, "beginMcpMutationSequence"), [
    "const sequence = nextMcpCacheSequence();",
    "mcpMutationFenceSequence = Math.max(",
    "return sequence;",
  ]);

  assertOrder("mcp accept 先挡旧 refresh 再挡乱序 payload", extractFunctionBody(sequence, "acceptMcpCacheSequence"), [
    "source !== \"mutation-payload\" && sequence < mcpMutationFenceSequence",
    "return false",
    "sequence < mcpLatestAcceptedSequence",
    "return false",
    "mcpLatestAcceptedSequence = sequence",
    "return true",
  ]);

  assertIncludes("mcp cache 导出 query、mutation、prepare helper", cache, [
    "export const McpCache",
    "export const MCP_SERVERS_QUERY_KEY",
    "export { beginMcpMutationSequence, nextMcpCacheSequence }",
    "export function writeMcpCachePayload",
    "export async function prepareMcpMutation",
    "export async function writeMcpMutationPayload",
    "export async function invalidateMcpContractQueries",
  ]);

  assertOrder("mcp writer 带 source 检查 sequence gate 后写 authoritative payload", extractFunctionBody(cache, "writeMcpCachePayload"), [
    "acceptMcpCacheSequence(source, sequence)",
    "return false",
    "writeMcpAuthoritativePayload",
    "source,",
    "sequence,",
    "return true",
  ]);

  assertOrder("mcp prepare mutation 先 fence 再 cancel query", extractFunctionBody(cache, "prepareMcpMutation"), [
    "const sequence = beginMcpMutationSequence();",
    "await queryClient.cancelQueries({ queryKey: MCP_SERVERS_QUERY_KEY });",
    "return { sequence };",
  ]);

  assertOrder("mcp mutation payload 使用 onMutate context sequence", extractFunctionBody(cache, "writeMcpMutationPayload"), [
    "context?.sequence ?? beginMcpMutationSequence()",
    "if (!accepted) return;",
    "writeMcpServersMutationPayload(queryClient, payload);",
    "await invalidateMcpContractQueries(queryClient);",
  ]);

  assertIncludes("mcp query hook 为 full refresh 预留 sequence 并委托 cache helper", query, [
    "const sequence = nextMcpCacheSequence();",
    "const payload = await mcpService.loadServers();",
    "writeMcpCachePayload(",
    "queryClient,",
    "payload,",
    "\"full-refresh\"",
    "sequence,",
  ]);
  assertNotMatches("mcp query hook 不直接写 query cache", query, [
    [/\bsetQueryData\s*\(/, "query hook 不得直接 setQueryData"],
    [/\bcancelQueries\s*\(/, "query hook 不得直接 cancelQueries"],
  ]);

  assertIncludes("mcp mutation hooks 统一使用 prepare context", mutation, [
    "prepareMcpMutation(queryClient)",
    "writeMcpMutationPayload(queryClient, payload, context)",
  ]);
  assertNotMatches("mcp mutation hooks 不直接拼底层 query 操作", mutation, [
    [/\bcancelQueries\s*\(/, "mutation hook 不得直接 cancelQueries"],
    [/\bsetQueryData\s*\(/, "mutation hook 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "mutation hook 不得直接 invalidateQueries"],
    [/MCP_SERVERS_QUERY_KEY/, "mutation hook 不得直接依赖 query key"],
  ]);

  if (
    packageJson.scripts?.["validate:frontend-mcp-cache"] ===
    "node scripts/validate-frontend-mcp-cache.mjs"
  ) {
    pass("package.json 注册 mcp cache validator");
  } else {
    fail("package.json 注册 mcp cache validator");
  }
}

function runRaceSimulation() {
  let latestAcceptedSequence = 0;
  let mutationFenceSequence = 0;
  let value = "empty";
  const trace = [];

  function write(source, sequence, nextValue) {
    trace.push(`尝试:${source}:${sequence}:${nextValue}`);
    if (source !== "mutation-payload" && sequence < mutationFenceSequence) {
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

  write("full-refresh", 1, "baseline");
  mutationFenceSequence = 3;
  const staleRefreshAccepted = write("full-refresh", 2, "stale-list");
  const mutationAccepted = write("mutation-payload", 3, "toggle-enabled");
  const delayedRefreshAccepted = write("full-refresh", 1, "delayed-list");
  const freshRefreshAccepted = write("full-refresh", 4, "fresh-list");

  if (
    !staleRefreshAccepted &&
    mutationAccepted &&
    !delayedRefreshAccepted &&
    freshRefreshAccepted &&
    value === "fresh-list"
  ) {
    pass(`竞态模拟：mcp 旧 refresh 不覆盖 mutation fence（${trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：mcp 旧 refresh 不覆盖 mutation fence", trace.join(" | "));
}

const sequence = readRequired(files.sequence);
const cache = readRequired(files.cache);
const query = readRequired(files.query);
const mutation = readRequired(files.mutation);
const packageJson = parseJson(files.packageJson);

assertStaticMcpContract(sequence, cache, query, mutation, packageJson);
runRaceSimulation();

if (failures.length > 0) {
  console.error("FAIL mcp 前端 cache/sequence validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS mcp 前端 cache/sequence validator");
