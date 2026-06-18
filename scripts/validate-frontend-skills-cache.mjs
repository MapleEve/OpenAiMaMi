import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  cache: join(repoRoot, "src", "features", "skills", "cache", "index.ts"),
  query: join(repoRoot, "src", "features", "skills", "hooks", "query.ts"),
  mutation: join(repoRoot, "src", "features", "skills", "hooks", "mutation.ts"),
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

function assertStaticSkillsContract(cache, query, mutation, packageJson) {
  assertIncludes("skills cache 持有 installed/backups query key 与 mutation fence", cache, [
    "export const SKILLS_INSTALLED_QUERY_KEY",
    "export const SKILLS_BACKUPS_QUERY_KEY",
    "let skillsLatestAcceptedSequence = 0;",
    "let skillsMutationFenceSequence = 0;",
    "source !== \"mutation-payload\" && sequence < skillsMutationFenceSequence",
  ]);

  assertOrder("skills writer 先挡旧 refresh 再写 authoritative payload", extractFunctionBody(cache, "writeSkillsCachePayload"), [
    "source !== \"mutation-payload\" && sequence < skillsMutationFenceSequence",
    "return false",
    "sequence < skillsLatestAcceptedSequence",
    "return false",
    "skillsLatestAcceptedSequence = sequence",
    "writeSkillsAuthoritativePayload",
    "return true",
  ]);

  assertOrder("skills mutation begin 提升 fence sequence", extractFunctionBody(cache, "beginSkillsMutationSequence"), [
    "const sequence = nextSkillsCacheSequence();",
    "skillsMutationFenceSequence = Math.max(",
    "return sequence;",
  ]);

  assertOrder("skills prepare mutation 统一取消 installed/backups query", extractFunctionBody(cache, "prepareSkillsMutation"), [
    "const sequence = beginSkillsMutationSequence();",
    "queryClient.cancelQueries({ queryKey: SKILLS_INSTALLED_QUERY_KEY })",
    "queryClient.cancelQueries({ queryKey: SKILLS_BACKUPS_QUERY_KEY })",
    "return { sequence };",
  ]);

  assertOrder("skills mutation payload 使用 onMutate context sequence", extractFunctionBody(cache, "writeSkillsMutationPayload"), [
    "context?.sequence ?? beginSkillsMutationSequence()",
    "if (!accepted) return;",
    "writeSkillsQueryMutationPayload(queryClient, payload);",
    "await invalidateSkillsContractQueries(queryClient);",
  ]);

  assertIncludes("skills query hook 为两条 query 预留 sequence 并委托 cache helper", query, [
    "const sequence = nextSkillsQuerySequence();",
    "skillsService.loadInstalled()",
    "skillsService.loadBackups()",
    "writeSkillsCachePayload(",
    "\"full-refresh\"",
    "queryClient.getQueryData<typeof payload>(SKILLS_INSTALLED_QUERY_KEY)",
    "queryClient.getQueryData<typeof payload>(SKILLS_BACKUPS_QUERY_KEY)",
  ]);
  assertNotMatches("skills query hook 不直接写 mutation cache", query, [
    [/\buseMutation\b/, "query hook 不得 owning mutation"],
    [/\bsetQueryData\s*\(/, "query hook 不得直接 setQueryData"],
    [/\bcancelQueries\s*\(/, "query hook 不得直接 cancelQueries"],
  ]);

  assertIncludes("skills mutation hook 统一使用 prepare context", mutation, [
    "prepareSkillsMutation(queryClient)",
    "writeSkillsMutationPayload(queryClient, payload, context)",
    "if (path) return skillsService.importSkill(path);",
    "return null;",
  ]);
  assertNotMatches("skills mutation hook 不直接拼 query 操作", mutation, [
    [/\bSKILLS_[A-Z0-9_]+_QUERY_KEY\b/, "mutation hook 不得直接消费 query key"],
    [/\bcancelQueries\s*\(/, "mutation hook 不得直接 cancelQueries"],
    [/\bsetQueryData\s*\(/, "mutation hook 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "mutation hook 不得直接 invalidateQueries"],
  ]);

  if (
    packageJson.scripts?.["validate:frontend-skills-cache"] ===
    "node scripts/validate-frontend-skills-cache.mjs"
  ) {
    pass("package.json 注册 skills cache validator");
  } else {
    fail("package.json 注册 skills cache validator");
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

  write("full-refresh", 1, "baseline-installed");
  mutationFenceSequence = 3;
  const staleInstalledAccepted = write("full-refresh", 2, "stale-installed");
  const mutationAccepted = write("mutation-payload", 3, "import-skill");
  const delayedBackupsAccepted = write("full-refresh", 1, "delayed-backups");
  const freshAccepted = write("full-refresh", 4, "fresh-installed");

  if (
    !staleInstalledAccepted &&
    mutationAccepted &&
    !delayedBackupsAccepted &&
    freshAccepted &&
    value === "fresh-installed"
  ) {
    pass(`竞态模拟：skills 旧 refresh 不覆盖 mutation fence（${trace.join(" | ")}）`);
    return;
  }
  fail("竞态模拟：skills 旧 refresh 不覆盖 mutation fence", trace.join(" | "));
}

const cache = readRequired(files.cache);
const query = readRequired(files.query);
const mutation = readRequired(files.mutation);
const packageJson = parseJson(files.packageJson);

assertStaticSkillsContract(cache, query, mutation, packageJson);
runRaceSimulation();

if (failures.length > 0) {
  console.error("FAIL skills 前端 cache/sequence validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS skills 前端 cache/sequence validator");
