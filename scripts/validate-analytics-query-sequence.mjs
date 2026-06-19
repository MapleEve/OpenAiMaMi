import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  query: join(repoRoot, "src", "features", "analytics", "hooks", "query.ts"),
  cache: join(repoRoot, "src", "features", "analytics", "cache", "index.ts"),
  staleScenario: join(repoRoot, "src", "mocks", "e2e", "scenarios", "stale.ts"),
  delayedScenario: join(repoRoot, "src", "mocks", "e2e", "scenarios", "delayed.ts"),
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

function assertIncludes(label, text, fragments) {
  for (const fragment of fragments) {
    if (!text.includes(fragment)) {
      failures.push(`${label} 缺少片段：${fragment}`);
    }
  }
}

function assertNotMatches(label, text, checks) {
  for (const [pattern, message] of checks) {
    if (pattern.test(text)) {
      failures.push(`${label} ${message}`);
    }
  }
}

function assertOrder(label, text, fragments) {
  let previousIndex = -1;
  for (const fragment of fragments) {
    const nextIndex = text.indexOf(fragment);
    if (nextIndex < 0) {
      failures.push(`${label} 缺少顺序片段：${fragment}`);
      return;
    }
    if (nextIndex <= previousIndex) {
      failures.push(`${label} 顺序错误：${fragments.join(" -> ")}`);
      return;
    }
    previousIndex = nextIndex;
  }
}

function countMatches(text, pattern) {
  return [...text.matchAll(pattern)].length;
}

function parseScenarioSteps(label, text) {
  const steps = [
    ...text.matchAll(
      /\{\s*name:\s*"([^"]+)"\s*,\s*delayMs:\s*(\d+)\s*,\s*outcome:\s*"([^"]+)"\s*,\s*sequence:\s*(\d+)\s*,?\s*\}/g,
    ),
  ].map((match) => ({
    name: match[1],
    delayMs: Number(match[2]),
    outcome: match[3],
    sequence: Number(match[4]),
  }));

  if (steps.length === 0) {
    failures.push(`${label} 缺少可验证的 steps`);
  }

  return steps;
}

function assertOutOfOrderOlderResponse(label, steps) {
  const hasLateOlderStep = steps.some((candidate, candidateIndex) =>
    steps.some(
      (other, otherIndex) =>
        otherIndex > candidateIndex &&
        candidate.delayMs > other.delayMs &&
        candidate.sequence < other.sequence,
    ),
  );
  if (!hasLateOlderStep) {
    failures.push(`${label} 缺少旧序列晚返回场景`);
  }
}

const query = readRequired(files.query);
const cache = readRequired(files.cache);
const staleScenario = readRequired(files.staleScenario);
const delayedScenario = readRequired(files.delayedScenario);

assertIncludes("src/features/analytics/hooks/query.ts", query, [
  "AnalyticsPanelQueryDescriptors.usage",
  "AnalyticsPanelQueryDescriptors.sessions",
  "AnalyticsPanelQueryDescriptors.tokens",
  "AnalyticsPanelQueryDescriptors.tools",
  "AnalyticsPanelQueryDescriptors.changes",
  "AnalyticsPanelQueryDescriptors.quota",
  "readAnalyticsPanelEnvelope",
  "runAnalyticsPanelQuery",
]);
assertNotMatches("src/features/analytics/hooks/query.ts", query, [
  [/\buseRef\b/, "不得通过 hook useRef owning sequence"],
  [/\bsequenceRef\b/, "不得在 hook 保存 sequenceRef"],
  [/\bnextSequence\b/, "不得在 hook 分配 nextSequence"],
  [/\bwriteAnalyticsPanelPayload\b/, "不得在 hook 直接写 authoritative cache"],
  [/source:\s*"mutation-payload"/, "只读 query 不得伪造 mutation payload"],
]);

if (countMatches(query, /runAnalyticsPanelQuery\(/g) < 6) {
  failures.push("src/features/analytics/hooks/query.ts 六类 analytics query 必须全部调用 runAnalyticsPanelQuery");
}
if (countMatches(query, /readAnalyticsPanelEnvelope\(/g) < 6) {
  failures.push("src/features/analytics/hooks/query.ts 六类 analytics envelope 必须全部调用 readAnalyticsPanelEnvelope");
}

assertIncludes("src/features/analytics/cache/index.ts", cache, [
  "AnalyticsDumpedQueryKeys",
  "AnalyticsAuthoritativeQueryKeys",
  "AnalyticsPanelQueryDescriptors",
  "let analyticsCacheSequence",
  "const analyticsLatestReservedSequenceByKey",
  "function nextAnalyticsCacheSequence",
  "function reserveAnalyticsPanelSequence",
  "function isReservedAnalyticsPanelResponseStale",
  "return sequence < latestReservedSequence",
  "export async function runAnalyticsPanelQuery",
  "Exclude<ModuleCacheSource, \"mutation-payload\">",
  "writeAnalyticsPanelPayload",
  "next.sequence < current.sequence",
]);
assertOrder("analytics query helper 必须请求前预留 sequence", cache, [
  "const sequence = reserveAnalyticsPanelSequence",
  "const payload = await load()",
  "if (isReservedAnalyticsPanelResponseStale",
  "writeAnalyticsPanelPayload",
]);

assertOutOfOrderOlderResponse(
  "src/mocks/e2e/scenarios/stale.ts",
  parseScenarioSteps("src/mocks/e2e/scenarios/stale.ts", staleScenario),
);
assertOutOfOrderOlderResponse(
  "src/mocks/e2e/scenarios/delayed.ts",
  parseScenarioSteps("src/mocks/e2e/scenarios/delayed.ts", delayedScenario),
);

if (failures.length > 0) {
  console.error("FAIL analytics query/cache sequence 验证失败");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS analytics query/cache sequence 验证通过");
