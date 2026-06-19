import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const closeoutId = "custom-instructions-frontend-current-source-chain";
const currentSourceMapPath =
  "docs/reconstruction/custom-instructions-frontend-current-source-map.md";
const commands = [
  "load_custom_instruction_state",
  "preview_custom_instruction_apply",
  "apply_custom_instruction",
  "clear_custom_instruction_block",
  "rollback_custom_instruction",
];

const files = {
  closeouts: join(repoRoot, "docs", "reconstruction", "frontend-current-source-closeouts.json"),
  currentSourceMap: join(repoRoot, currentSourceMapPath),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  reconstructionReadme: join(repoRoot, "docs", "reconstruction", "README.md"),
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

function compact(value) {
  return value.replace(/\s+/g, "");
}

function requireIncludes(label, content, fragments) {
  const compactContent = compact(content);
  const missing = fragments.filter(
    (fragment) =>
      !content.includes(fragment) && !compactContent.includes(compact(fragment)),
  );
  if (missing.length > 0) {
    failures.push(`${label} 缺少片段：${missing.join("；")}`);
  }
}

function requireNoIncludes(label, content, fragments) {
  const negationMarkers = ["不", "未", "无", "禁止", "不得", "不能"];
  const lines = content.split(/\r?\n/);
  for (const fragment of fragments) {
    const compactFragment = compact(fragment);
    for (const line of lines) {
      const variants = [
        [line, fragment],
        [compact(line), compactFragment],
      ];
      const hasPositiveClaim = variants.some(([value, expected]) => {
        const index = value.indexOf(expected);
        if (index < 0) return false;
        const prefix = value.slice(Math.max(0, index - 16), index);
        return !negationMarkers.some((marker) => prefix.includes(marker));
      });
      if (hasPositiveClaim) {
        failures.push(`${label} 禁止出现正向声明：${fragment}`);
        break;
      }
    }
  }
}

function requireArraySet(label, actual, expected) {
  const actualSet = new Set(actual ?? []);
  const expectedSet = new Set(expected);
  for (const item of expectedSet) {
    if (!actualSet.has(item)) failures.push(`${label} 缺少：${item}`);
  }
  for (const item of actualSet) {
    if (!expectedSet.has(item)) failures.push(`${label} 不允许：${item}`);
  }
}

function requireFileSignal(signal) {
  const filePath = join(repoRoot, signal.file);
  const content = readRequired(filePath);
  if (!content) return;
  requireIncludes(signal.file, content, signal.includes ?? []);
}

const closeouts = parseJson(files.closeouts);
const currentSourceMap = readRequired(files.currentSourceMap);
const sourceMap = readRequired(files.sourceMap);
const reconstructionReadme = readRequired(files.reconstructionReadme);
const packageJson = parseJson(files.packageJson);
const frontendAggregate = readRequired(files.frontendAggregate);

const closeout = closeouts?.closeouts?.find((item) => item.id === closeoutId);
if (!closeout) {
  failures.push(`frontend-current-source-closeouts.json 缺少 ${closeoutId}`);
} else {
  if (closeout.module !== "custom-instructions") {
    failures.push(`${closeoutId} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeoutId} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== currentSourceMapPath) {
    failures.push(`${closeoutId} currentSourceMap 必须指向 ${currentSourceMapPath}`);
  }
  requireArraySet(`${closeoutId} currentSourceCommands`, closeout.currentSourceCommands, commands);

  for (const signal of closeout.requiredSourceSignals ?? []) {
    requireFileSignal(signal);
  }

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "不修改 raw/internal 证据。",
    "不声明 gate_accepted、implementation_use、full_leaf 或 full_leaf_100 已完成。",
    "不声明双平台全 leaf、全文案验收或闭源业务完整恢复。",
    "不新增 route、sidebar、header、tray、settings 或 voice 入口。",
    "不把 mock handler 等同真实后端行为。",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeoutId} 缺少 nonClaims：${required}`);
    }
  }
  requireIncludes(`${closeoutId} reason`, closeout.reason ?? "", [
    "当前源码部分收口",
    "route、service、query、mutation、cache、dialog、panel、mock 和 IPC contract",
    "不处理 voice",
    "不声明 full_leaf_100",
  ]);
}

requireIncludes("custom-instructions 前端 current-source map", currentSourceMap, [
  "# custom-instructions 前端 current-source 证据映射",
  "load_custom_instruction_state",
  "preview_custom_instruction_apply",
  "apply_custom_instruction",
  "clear_custom_instruction_block",
  "rollback_custom_instruction",
  "src/features/custom-instructions/cache/index.ts",
  "src/mocks/fixtures/commands.ts",
  "不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成",
  "不碰 `voice`",
  "scripts/validate-frontend-custom-instructions-current-source.mjs",
]);

requireIncludes("source-map custom-instructions 前端索引", sourceMap, [
  currentSourceMapPath,
  "custom-instructions 前端当前源码链路",
  "scripts/validate-frontend-custom-instructions-current-source.mjs",
]);
requireIncludes("reconstruction README custom-instructions 前端索引", reconstructionReadme, [
  currentSourceMapPath,
  "custom-instructions 前端当前源码链路",
  "scripts/validate-frontend-custom-instructions-current-source.mjs",
]);

if (
  packageJson?.scripts?.["validate:frontend-custom-instructions-current-source"] !==
  "node scripts/validate-frontend-custom-instructions-current-source.mjs"
) {
  failures.push("package.json 未登记 validate:frontend-custom-instructions-current-source");
}
if (!frontendAggregate.includes("validate-frontend-custom-instructions-current-source.mjs")) {
  failures.push("scripts/validate-frontend.mjs 未纳入 custom-instructions current-source validator");
}

requireNoIncludes("custom-instructions current-source 公开源码链", [
  currentSourceMap,
  sourceMap,
  reconstructionReadme,
].join("\n"), [
  "full_leaf_100 已完成",
  "gate_accepted 已完成",
  "implementation_use 已完成",
  "voice 已接入",
]);

if (failures.length > 0) {
  console.error("FAIL custom-instructions 前端 current-source validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS custom-instructions 前端 current-source validator：route、service、query、mutation、cache、dialog、panel、mock 和 IPC contract 均可回指公开源码。",
);
