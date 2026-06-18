import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  closeouts: join(repoRoot, "docs", "reconstruction", "frontend-current-source-closeouts.json"),
  packageJson: join(repoRoot, "package.json"),
  frontendAggregate: join(repoRoot, "scripts", "validate-frontend.mjs"),
};

function toRepoPath(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function readRequired(path) {
  if (!existsSync(path)) {
    failures.push(`缺少文件：${toRepoPath(path)}`);
    return "";
  }
  return readFileSync(path, "utf8");
}

function parseJson(path) {
  const content = readRequired(path);
  if (!content) return null;
  try {
    return JSON.parse(content);
  } catch (error) {
    failures.push(`${toRepoPath(path)} JSON 解析失败：${error.message}`);
    return null;
  }
}

function requireIncludes(label, content, fragments) {
  const missing = fragments.filter((fragment) => !content.includes(fragment));
  if (missing.length > 0) {
    failures.push(`${label} 缺少片段：${missing.join("；")}`);
  }
}

function requireFileSignal(signal) {
  const filePath = join(repoRoot, signal.file);
  const content = readRequired(filePath);
  if (!content) return;
  requireIncludes(signal.file, content, signal.includes ?? []);
}

const closeouts = parseJson(files.closeouts);
const packageJson = parseJson(files.packageJson);
const frontendAggregate = readRequired(files.frontendAggregate);

const closeout = closeouts?.closeouts?.find(
  (item) => item.id === "mcp-skills-index-query-owner-closed-chain",
);
if (!closeout) {
  failures.push("frontend-current-source-closeouts.json 缺少 mcp/skills index query closeout");
} else {
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`mcp/skills closeout status 必须保持 current-source-closed-partial，当前为 ${closeout.status}`);
  }

  const manifestPairs = new Set(
    (closeout.closedManifestStatuses ?? []).map((item) =>
      `${item.module}:${item.queryKey}:${item.status}`,
    ),
  );
  for (const expected of [
    "mcp:mcp-servers:owner-closed",
    "skills:installed-skills:owner-closed",
  ]) {
    if (!manifestPairs.has(expected)) {
      failures.push(`mcp/skills closeout 缺少 manifest 状态：${expected}`);
    }
  }

  for (const gatePath of closeout.gateReports ?? []) {
    if (!existsSync(join(repoRoot, gatePath))) {
      failures.push(`mcp/skills closeout 缺少 gate-report：${gatePath}`);
    }
  }

  for (const signal of closeout.requiredSourceSignals ?? []) {
    requireFileSignal(signal);
  }

  requireIncludes("mcp/skills closeout reason", closeout.reason ?? "", [
    "只关闭 app-shell index query 的 owner-closed 队列项",
    "不声明全文案验收",
    "不声明 MAC/WIN 100% leaf 已完成",
  ]);
}

if (
  packageJson?.scripts?.["validate:frontend-mcp-skills-current-source"] !==
  "node scripts/validate-frontend-mcp-skills-current-source.mjs"
) {
  failures.push("package.json 未登记 validate:frontend-mcp-skills-current-source");
}

if (!frontendAggregate.includes("validate-frontend-mcp-skills-current-source.mjs")) {
  failures.push("scripts/validate-frontend.mjs 未纳入 mcp/skills current-source validator");
}

if (failures.length > 0) {
  console.error("FAIL mcp/skills 前端 current-source validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS mcp/skills 前端 current-source validator：service、query、cache、overview、mock、后端入口和 owner-closed closeout 均可回指公开源码。");
