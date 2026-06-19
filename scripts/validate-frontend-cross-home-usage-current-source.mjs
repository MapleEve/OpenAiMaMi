import { existsSync, readFileSync } from "node:fs";
import { join } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const npmScript = "validate:frontend-cross-home-usage-current-source";
const validatorScript = "validate-frontend-cross-home-usage-current-source.mjs";
const currentSourceMap = "docs/reconstruction/cross-home-usage-frontend-current-source-map.md";
const closeoutId = "cross-home-usage-frontend-current-source-non-gating-closeout";
const gateReportPath =
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-home-usage-frontend/gate-report.json";
const allowedFailureKeys = [
  `${gateReportPath}\u0000gate_accepted\u0000false`,
  `${gateReportPath}\u0000implementation_use\u0000false`,
  `${gateReportPath}\u0000cluster_gate_summary.readyToImplement\u00000`,
];

const files = {
  packageJson: "package.json",
  frontendAggregator: "scripts/validate-frontend.mjs",
  closeouts: "docs/reconstruction/frontend-current-source-closeouts.json",
  closeoutValidator: "scripts/validate-frontend-current-source-closeouts.mjs",
  map: currentSourceMap,
  sourceMap: "docs/reconstruction/source-map.md",
  reconstructionReadme: "docs/reconstruction/README.md",
  gateReport: gateReportPath,
  overviewRoute: "src/routes/desktop/main/overview/page.tsx",
  overviewContent: "src/features/overview/Content.tsx",
  overviewPage: "src/features/overview/components/page.tsx",
  overviewQuery: "src/features/overview/hooks/query.ts",
  overviewMutation: "src/features/overview/hooks/mutation.ts",
  overviewPageHook: "src/features/overview/hooks/page.ts",
  overviewCache: "src/features/overview/cache/index.ts",
  overviewDataPanel: "src/features/overview/panels/data.tsx",
  analyticsCache: "src/features/analytics/cache/index.ts",
  analyticsQuery: "src/features/analytics/hooks/query.ts",
  accountsService: "src/services/accounts/index.ts",
  systemService: "src/services/system/index.ts",
  analyticsService: "src/services/analytics/index.ts",
  mockCommands: "src/mocks/fixtures/commands.ts",
  ipcContracts: "src/contracts/ipc/commands.ts",
};

function pathOf(path) {
  return join(repoRoot, ...path.split("/"));
}

function readRequired(path) {
  const absolutePath = pathOf(path);
  if (!existsSync(absolutePath)) {
    failures.push(`缺少文件：${path}`);
    return "";
  }
  return readFileSync(absolutePath, "utf8");
}

function parseJson(path) {
  const content = readRequired(path);
  if (!content) return null;
  try {
    return JSON.parse(content);
  } catch (error) {
    failures.push(`${path} 不是合法 JSON：${error.message}`);
    return null;
  }
}

function compact(text) {
  return text.replace(/\s+/g, "");
}

function assertIncludes(label, content, snippets) {
  const compactContent = compact(content);
  const missing = snippets.filter(
    (snippet) => !content.includes(snippet) && !compactContent.includes(compact(snippet)),
  );
  if (missing.length > 0) {
    failures.push(`${label} 缺少片段：${missing.join("；")}`);
  }
}

function assertNotIncludes(label, content, snippets) {
  const hits = snippets.filter((snippet) => content.includes(snippet));
  if (hits.length > 0) {
    failures.push(`${label} 不允许出现片段：${hits.join("；")}`);
  }
}

function assertEqual(label, actual, expected) {
  if (actual !== expected) {
    failures.push(`${label} 应为 ${JSON.stringify(expected)}，实际为 ${JSON.stringify(actual)}`);
  }
}

function assertArrayExact(label, actual, expected) {
  if (!Array.isArray(actual)) {
    failures.push(`${label} 必须是数组`);
    return;
  }
  const actualSet = new Set(actual);
  const expectedSet = new Set(expected);
  const missing = expected.filter((item) => !actualSet.has(item));
  const extra = actual.filter((item) => !expectedSet.has(item));
  if (missing.length > 0) failures.push(`${label} 缺少：${missing.join("；")}`);
  if (extra.length > 0) failures.push(`${label} 不允许：${extra.join("；")}`);
  if (actual.length !== actualSet.size) failures.push(`${label} 存在重复条目`);
}

function validateGateReport(gateReport) {
  if (!gateReport) return;
  assertEqual("gate report bundle", gateReport.bundle, "cross-1.0.9-home-usage-frontend");
  assertEqual("gate report tier", gateReport.gate_tier, "consumerStartReady");
  assertEqual("gate report gate_accepted", gateReport.gate_accepted, false);
  assertEqual("gate report implementation_use", gateReport.implementation_use, false);
  assertEqual("gate report prewrite decision", gateReport.prewrite_gate_decision, "ALLOW");
  assertEqual("gate report prewrite mode", gateReport.prewrite_gate_write_mode, "first");
  assertEqual(
    "gate report scope",
    gateReport.scope,
    "home-dashboard + usage-snapshot-panel (OverviewPage + AnalyticsPanel)",
  );
  assertEqual("gate report consumerStartReady", gateReport.cluster_gate_summary?.consumerStartReady, 1);
  assertEqual("gate report strictImplementationUse", gateReport.cluster_gate_summary?.strictImplementationUse, 0);
  assertEqual("gate report readyToImplement", gateReport.cluster_gate_summary?.readyToImplement, 0);
  assertIncludes("gate report 前端专属边界", JSON.stringify(gateReport), [
    "frontend source tree only",
    "no backend IDA",
    "Frontend-only bundle; backend verification delegated to per-command bundles",
  ]);
}

function validateCloseout(closeouts) {
  const matches = (closeouts?.closeouts ?? []).filter((item) => item.id === closeoutId);
  if (matches.length !== 1) {
    failures.push(`${closeoutId} 必须唯一，实际数量 ${matches.length}`);
    return;
  }

  const closeout = matches[0];
  assertEqual("cross-home closeout module", closeout.module, "cross-home-usage-frontend");
  assertEqual("cross-home closeout status", closeout.status, "current-source-closed-partial");
  assertEqual("cross-home closeout currentSourceMap", closeout.currentSourceMap, currentSourceMap);
  assertArrayExact("cross-home closeout gateReports", closeout.gateReports, [gateReportPath]);

  const failureKeys = (closeout.closedGateReportFailures ?? []).map(
    (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
  );
  assertArrayExact("cross-home closeout 只登记允许失败字段", failureKeys, allowedFailureKeys);

  const signalFiles = (closeout.requiredSourceSignals ?? []).map((signal) => signal.file);
  for (const required of [
    currentSourceMap,
    files.gateReport,
    files.overviewQuery,
    files.analyticsService,
    files.systemService,
    files.mockCommands,
  ]) {
    if (!signalFiles.includes(required)) {
      failures.push(`${closeoutId} requiredSourceSignals 缺少 ${required}`);
    }
  }

  assertIncludes("cross-home closeout 未声明边界", JSON.stringify(closeout), [
    "前端专属包",
    "后端验证委托",
    "不声明 raw/internal gate 已通过",
    "不声明真实平台 parity",
    "不声明 dim6 已恢复",
    "不声明 full_leaf_100 恢复",
  ]);
}

function validateRegistrations(packageJson, frontendAggregator, sourceMap, reconstructionReadme) {
  if (packageJson?.scripts?.[npmScript] !== `node scripts/${validatorScript}`) {
    failures.push(`package.json 未登记 ${npmScript}`);
  }
  assertIncludes("前端聚合 validator 已登记", frontendAggregator, [[validatorScript].join("")]);
  assertIncludes("source-map 已索引 cross-home map", sourceMap, [
    currentSourceMap,
    `scripts/${validatorScript}`,
    "cross-home-usage 前端当前源码链路",
  ]);
  assertIncludes("重建 README 已索引 cross-home map", reconstructionReadme, [
    currentSourceMap,
    `scripts/${validatorScript}`,
    "cross-home-usage 前端当前源码链路",
  ]);
}

function validateMap(mapText) {
  assertIncludes("cross-home map 写明标题和证据边界", mapText, [
    "# cross-home-usage 前端当前源码证据映射",
    gateReportPath,
    "consumerStartReady",
    "prewrite_gate_decision=ALLOW",
    "gate_accepted",
    "implementation_use",
    "readyToImplement",
    "home-dashboard + usage-snapshot-panel",
  ]);
  assertIncludes("cross-home map 写明当前源码 owner", mapText, [
    files.overviewRoute,
    files.overviewContent,
    files.overviewQuery,
    files.overviewMutation,
    files.overviewCache,
    files.analyticsQuery,
    files.analyticsCache,
    files.accountsService,
    files.systemService,
    files.analyticsService,
    files.mockCommands,
    files.ipcContracts,
  ]);
  assertIncludes("cross-home map 写明未声明边界", mapText, [
    "不修改 `gate-report.json`",
    "不声明 `gate_accepted`、`implementation_use` 或 `readyToImplement` 已恢复",
    "不声明 `full_leaf`、`full_leaf_100`、`dim6`",
    "不声明该 cross 包完成后端 IDA 验证",
    "不恢复真实 watcher、daemon、runtime event、后台采集、平台副作用、真实运行时统计或闭源 token 统计",
    "不新增 route、sidebar、header、tray、prompt host、plugins config 或 `voice` 入口",
  ]);
  assertIncludes("cross-home map 写明 validator 接入", mapText, [
    `scripts/${validatorScript}`,
    npmScript,
  ]);
  assertNotIncludes("cross-home map 不含敏感路径或凭据形态", mapText, [
    "C:\\Users\\",
    "C:/Users/",
    "/Users/",
    "sk-",
    "ghp_",
    "BEGIN PRIVATE KEY",
  ]);
}

function validateSourceChain(contents) {
  assertIncludes("overview route 只挂载模块入口", contents.overviewRoute, ["OverviewFeature"]);
  assertIncludes("overview content 挂载 dumped contract boundary", contents.overviewContent, [
    "DumpedContractBoundary",
    'moduleId="overview"',
    "DUMPED_OVERVIEW_COMMANDS",
    "<OverviewPage />",
  ]);
  assertIncludes("overview page 使用模块 controller", contents.overviewPage, [
    "useOverviewPageController",
    "OverviewShell",
  ]);
  assertIncludes("overview query 读取 snapshot 与 usage", contents.overviewQuery, [
    "OVERVIEW_SNAPSHOT_QUERY_KEY",
    "OVERVIEW_USAGE_QUERY_KEY",
    "accountsService.loadSnapshot(true)",
    "analyticsService.loadUsageAnalytics()",
  ]);
  assertIncludes("overview refresh mutation 经 cache helper", contents.overviewMutation, [
    "refreshUsageMutation",
    "accountsService.refreshUsageSnapshot()",
    "prepareOverviewMutation(queryClient, [OVERVIEW_SNAPSHOT_QUERY_KEY])",
    "writeOverviewMutationPayload",
    "invalidateOverviewUsageMutationQueries(queryClient)",
  ]);
  assertIncludes("overview cache owning usage invalidation", contents.overviewCache, [
    "OVERVIEW_SNAPSHOT_QUERY_KEY",
    "OVERVIEW_USAGE_QUERY_KEY",
    "overviewQuerySequences",
    "overviewMutationFences",
    "writeOverviewMutationPayload",
    "invalidateOverviewUsageMutationQueries",
    'queryKey: ["usage-analytics"]',
    'queryKey: ["analytics", "usage"]',
  ]);
  assertIncludes("overview page 派生 usage 展示", contents.overviewPageHook, [
    'readNumber(usage, ["today.sessionCount"])',
    'readNumber(usage, ["today.activeMinutesEstimate"])',
    'id: "usage"',
    'readArray<DailyActivity>(usage, ["dailyActivity"])',
    'emptyKey: "analytics.emptySeries"',
    'id: "refresh-usage-snapshot"',
  ]);
  assertIncludes("overview data panel 只渲染 records", contents.overviewDataPanel, [
    "OverviewRecordList<OverviewRecordPayload>",
    'panel.kind === "records"',
    't("common.refresh")',
  ]);
  assertIncludes("analytics cache owning usage query", contents.analyticsCache, [
    "AnalyticsDumpedQueryKeys",
    'usage: ["usage-analytics"]',
    "AnalyticsPanelQueryDescriptors",
    "runAnalyticsPanelQuery",
    "writeAnalyticsPanelPayload",
  ]);
  assertIncludes("analytics query 读取 usage analytics", contents.analyticsQuery, [
    "AnalyticsPanelQueryDescriptors.usage()",
    "runAnalyticsPanelQuery(queryClient, usagePanelQuery",
    "analyticsService.loadUsageAnalytics()",
  ]);
  assertIncludes("service facade 收口 IPC", contents.accountsService + contents.systemService + contents.analyticsService, [
    "loadSnapshot: (localOnly = true) => systemService.loadSnapshot(localOnly)",
    "refreshUsageSnapshot: () => systemService.refreshUsageSnapshot()",
    'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("load_snapshot"',
    'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("refresh_usage_snapshot")',
    'invokeIpc<CoreEnvelope<UsageAnalyticsPayload>>("load_usage_analytics")',
  ]);
  assertIncludes("mock handler 登记首页用量链路", contents.mockCommands, [
    "cloneUsageAnalytics",
    "loadUsageAnalyticsHandler",
    "refreshUsageSnapshotHandler",
    "load_snapshot: coreSnapshotHandler",
    "refresh_usage_snapshot: refreshUsageSnapshotHandler",
    "load_usage_analytics: loadUsageAnalyticsHandler",
  ]);
  assertIncludes("IPC contract 登记首页用量命令", contents.ipcContracts, [
    '"command": "load_snapshot"',
    '"command": "refresh_usage_snapshot"',
    '"command": "load_usage_analytics"',
  ]);
}

const packageJson = parseJson(files.packageJson);
const closeouts = parseJson(files.closeouts);
const gateReport = parseJson(files.gateReport);
const contents = Object.fromEntries(
  Object.entries(files).map(([key, path]) => [
    key,
    key === "packageJson" || key === "closeouts" || key === "gateReport" ? "" : readRequired(path),
  ]),
);

validateGateReport(gateReport);
validateCloseout(closeouts);
validateRegistrations(
  packageJson,
  contents.frontendAggregator,
  contents.sourceMap,
  contents.reconstructionReadme,
);
validateMap(contents.map);
validateSourceChain(contents);
assertIncludes("closeout validator 固定 cross-home map", contents.closeoutValidator, [
  "CROSS_HOME_USAGE_FRONTEND_CURRENT_SOURCE_MAP",
  currentSourceMap,
  "currentSourceMap",
]);

if (failures.length > 0) {
  console.error("FAIL cross-home-usage 前端当前源码验证");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("通过：cross-home-usage 前端当前源码 map、closeout、源码链路和未声明边界");
