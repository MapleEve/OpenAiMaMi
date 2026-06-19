import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const closeoutId = "accounts-analytics-index-query-owner-closed-chain";
const currentSourceMapPath = "docs/reconstruction/accounts-analytics-current-source-map.md";
const validatorScript = "validate-frontend-accounts-analytics-current-source.mjs";
const npmScript = "validate:frontend-accounts-analytics-current-source";
const currentSourceCommands = [
  "load_snapshot",
  "refresh_usage_snapshot",
  "load_usage_analytics",
  "load_quota_history",
  "load_token_analytics",
  "load_tool_analytics",
  "load_change_analytics",
];
const expectedGateReports = [
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-accounts/gate-report.json",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-accounts/gate-report.json",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-sessions-analytics/gate-report.json",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-sessions-analytics/gate-report.json",
];

const files = {
  closeouts: "docs/reconstruction/frontend-current-source-closeouts.json",
  currentSourceMap: currentSourceMapPath,
  sourceMap: "docs/reconstruction/source-map.md",
  reconstructionReadme: "docs/reconstruction/README.md",
  packageJson: "package.json",
  frontendAggregate: "scripts/validate-frontend.mjs",
  closeoutValidator: "scripts/validate-frontend-current-source-closeouts.mjs",
  backendAnalyticsValidator: "scripts/validate-backend-analytics-owner.mjs",
  backendSessionsValidator: "scripts/validate-backend-sessions-owner.mjs",
  backendEvidenceMap: "docs/reconstruction/sessions-analytics-current-source-evidence-map.md",
  frontendManifest: "src/restoration/frontend-manifest/index.ts",
  routeRegistry: "src/routes/registry/registry.tsx",
  accountsService: "src/services/accounts/index.ts",
  systemService: "src/services/system/index.ts",
  analyticsService: "src/services/analytics/index.ts",
  accountsCache: "src/features/accounts/cache/index.ts",
  accountsMutation: "src/features/accounts/hooks/mutation.ts",
  analyticsCache: "src/features/analytics/cache/index.ts",
  analyticsQuery: "src/features/analytics/hooks/query.ts",
  overviewQuery: "src/features/overview/hooks/query.ts",
  overviewMutation: "src/features/overview/hooks/mutation.ts",
  sessionsQuery: "src/features/sessions/hooks/query.ts",
  mockCommands: "src/mocks/fixtures/commands.ts",
  ipcContracts: "src/contracts/ipc/commands.ts",
  tauriLib: "src-tauri/src/lib.rs",
  systemCommand: "src-tauri/src/commands/system.rs",
  systemUsecase: "src-tauri/src/application/usecase/system.rs",
  snapshotBootstrap: "src-tauri/src/application/usecase/system/snapshot_bootstrap.rs",
  analyticsCommand: "src-tauri/src/commands/analytics.rs",
  analyticsUsecase: "src-tauri/src/application/usecase/analytics.rs",
  analyticsRepository: "src-tauri/src/repository/analytics.rs",
  quotaRepository: "src-tauri/src/repository/quota.rs",
  analyticsContracts: "src-tauri/src/contracts/analytics.rs",
};

function pathOf(path) {
  return join(repoRoot, ...path.split("/"));
}

function repoPath(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
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
    failures.push(`${path} JSON 解析失败：${error.message}`);
    return null;
  }
}

function compact(text) {
  return text.replace(/\s+/g, "");
}

function requireIncludes(label, content, fragments) {
  const compactContent = compact(content);
  const missing = fragments.filter(
    (fragment) => !content.includes(fragment) && !compactContent.includes(compact(fragment)),
  );
  if (missing.length > 0) {
    failures.push(`${label} 缺少片段：${missing.join("；")}`);
  }
}

function requireNoPositiveClaims(label, content, fragments) {
  const negationMarkers = ["不", "未", "无", "禁止", "不得", "不能", "只"];
  const lines = content.split(/\r?\n/);
  for (const fragment of fragments) {
    const compactFragment = compact(fragment);
    for (const line of lines) {
      const variants = [
        [line, fragment],
        [compact(line), compactFragment],
      ];
      const matched = variants.some(([value, expected]) => {
        const index = value.indexOf(expected);
        if (index < 0) return false;
        const prefix = value.slice(Math.max(0, index - 18), index);
        return !negationMarkers.some((marker) => prefix.includes(marker));
      });
      if (matched) {
        failures.push(`${label} 禁止出现正向完成声明：${fragment}`);
        break;
      }
    }
  }
}

function requireArraySet(label, actual, expected) {
  if (!Array.isArray(actual)) {
    failures.push(`${label} 必须是数组`);
    return;
  }
  const actualSet = new Set(actual);
  const expectedSet = new Set(expected);
  const missing = expected.filter((item) => !actualSet.has(item));
  const extra = actual.filter((item) => !expectedSet.has(item));
  if (missing.length > 0) failures.push(`${label} 缺少：${missing.join("、")}`);
  if (extra.length > 0) failures.push(`${label} 不允许：${extra.join("、")}`);
  if (actual.length !== actualSet.size) failures.push(`${label} 存在重复条目`);
}

function requireSignal(signal) {
  const content = readRequired(signal.file);
  if (!content) return;
  requireIncludes(signal.file, content, signal.includes ?? []);
}

const closeouts = parseJson(files.closeouts);
const currentSourceMap = readRequired(files.currentSourceMap);
const sourceMap = readRequired(files.sourceMap);
const reconstructionReadme = readRequired(files.reconstructionReadme);
const packageJson = parseJson(files.packageJson);
const frontendAggregate = readRequired(files.frontendAggregate);
const closeoutValidator = readRequired(files.closeoutValidator);

const closeout = closeouts?.closeouts?.find((item) => item.id === closeoutId);
if (!closeout) {
  failures.push(`frontend-current-source-closeouts.json 缺少 ${closeoutId}`);
} else {
  if (closeout.module !== "accounts-analytics") {
    failures.push(`${closeoutId} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeoutId} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== currentSourceMapPath) {
    failures.push(`${closeoutId} currentSourceMap 必须指向 ${currentSourceMapPath}`);
  }

  const manifestPairs = new Set(
    (closeout.closedManifestStatuses ?? []).map(
      (item) => `${item.module}:${item.queryKey}:${item.status}`,
    ),
  );
  for (const expected of [
    "accounts:quota-history:owner-closed",
    "analytics:usage-analytics:owner-closed",
  ]) {
    if (!manifestPairs.has(expected)) {
      failures.push(`${closeoutId} 缺少 manifest 状态：${expected}`);
    }
  }

  requireArraySet(`${closeoutId} gateReports`, closeout.gateReports, expectedGateReports);
  requireArraySet(
    `${closeoutId} currentSourceCommands`,
    closeout.currentSourceCommands,
    currentSourceCommands,
  );

  for (const signal of closeout.requiredSourceSignals ?? []) {
    requireSignal(signal);
  }

  const boundaryNotes = closeout.backendBoundaryNotes ?? [];
  if (!boundaryNotes.some((note) => note.includes("Rust analytics 后端已恢复公开 session/rollout 文件事实聚合"))) {
    failures.push(`${closeoutId} 必须说明 Rust analytics 后端已恢复公开 session/rollout 文件事实聚合`);
  }
  if (!boundaryNotes.some((note) => note.includes("闭源 token 与严格运行时统计口径仍不声明恢复"))) {
    failures.push(`${closeoutId} 必须说明闭源 token 与严格运行时统计口径仍不声明恢复`);
  }

  for (const required of [
    "不把 accounts 或 analytics 的 manifest 状态改成 covered。",
    "不声明全文案验收完成。",
    "不声明 MAC/WIN 100% leaf 已完成。",
    "不声明 analytics 闭源 token、真实运行时统计或严格平台 parity 已完成。",
  ]) {
    if (!(closeout.nonClaims ?? []).includes(required)) {
      failures.push(`${closeoutId} 缺少 nonClaims：${required}`);
    }
  }

  requireIncludes(`${closeoutId} reason`, closeout.reason ?? "", [
    "app-shell index query",
    "owner-closed",
    "overview 只是 consumer",
    "不修改 manifest 状态",
    "不关闭 plugins 或 voice",
  ]);
}

requireIncludes("accounts/analytics current-source map", currentSourceMap, [
  "# accounts/analytics 前端链路与后端公开 owner 证据映射",
  "`quota-history`",
  "`usage-analytics`",
  "owner-closed",
  "src/features/accounts/cache/index.ts",
  "src/features/analytics/cache/index.ts",
  "src-tauri/src/commands/analytics.rs",
  "src-tauri/src/repository/quota.rs",
  "不把 `accounts` 或 `analytics` 的 manifest 状态改成 `covered`",
  "不声明 analytics 闭源 token、真实运行时统计或严格平台 parity 已完成",
  "不接入 `voice`",
  `scripts/${validatorScript}`,
]);

requireIncludes("source-map accounts/analytics 索引", sourceMap, [
  currentSourceMapPath,
  "accounts/analytics 前端链路与后端公开 owner",
  `scripts/${validatorScript}`,
]);

requireIncludes("reconstruction README accounts/analytics 索引", reconstructionReadme, [
  currentSourceMapPath,
  "accounts/analytics 前端链路与后端公开 owner",
  `scripts/${validatorScript}`,
]);


if (packageJson?.scripts?.[npmScript] !== `node scripts/${validatorScript}`) {
  failures.push(`package.json 未登记 ${npmScript}`);
}
if (!frontendAggregate.includes(validatorScript)) {
  failures.push(`scripts/validate-frontend.mjs 未纳入 ${validatorScript}`);
}
requireIncludes("closeout 聚合 validator 绑定 map", closeoutValidator, [
  "ACCOUNTS_ANALYTICS_CURRENT_SOURCE_MAP",
  currentSourceMapPath,
  "currentSourceMap",
]);

requireIncludes(files.backendEvidenceMap, readRequired(files.backendEvidenceMap), [
  "load_usage_analytics",
  "load_quota_history",
  "accounts/quota-history.jsonl",
  "不声明真实运行时统计口径",
]);
requireIncludes(files.backendAnalyticsValidator, readRequired(files.backendAnalyticsValidator), [
  "sessions-analytics-current-source-evidence-map.md",
  "公开 session/rollout/quota-history 文件事实聚合",
  "load_quota_history 必须恢复为公开 quota-history JSONL 点位",
]);
requireIncludes(files.backendSessionsValidator, readRequired(files.backendSessionsValidator), [
  "load_session_analytics",
  "analytics_repository::load_public_session_facts",
]);

requireIncludes(files.frontendManifest, readRequired(files.frontendManifest), [
  'module: "accounts"',
  'queryKey: "quota-history"',
  'status: "owner-closed"',
  'ownerCache: "src/features/accounts/cache/index.ts"',
  'module: "analytics"',
  'queryKey: "usage-analytics"',
  'ownerCache: "src/features/analytics/cache/index.ts"',
]);
requireIncludes(files.routeRegistry, readRequired(files.routeRegistry), [
  '["quota-history"]',
  '["usage-analytics"]',
]);
requireIncludes(files.accountsService, readRequired(files.accountsService), [
  "loadSnapshot: (localOnly = true) => systemService.loadSnapshot(localOnly)",
  "refreshUsageSnapshot: () => systemService.refreshUsageSnapshot()",
]);
requireIncludes(files.systemService, readRequired(files.systemService), [
  'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("load_snapshot"',
  'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("refresh_usage_snapshot")',
]);
requireIncludes(files.analyticsService, readRequired(files.analyticsService), [
  'invokeIpc<CoreEnvelope<UsageAnalyticsPayload>>("load_usage_analytics")',
  'invokeIpc<CoreEnvelope<QuotaHistoryPayload>>("load_quota_history"',
  "loadTokenAnalytics",
  "loadToolAnalytics",
  "loadChangeAnalytics",
]);
requireIncludes(files.accountsCache, readRequired(files.accountsCache), [
  'createModuleCacheOwner<AccountsCachePayload>("accounts")',
  "AccountsDumpedQueryKeys",
  'quotaHistory: ["quota-history"]',
  "invalidateAccountsDumpedQueries",
]);
requireIncludes(files.accountsMutation, readRequired(files.accountsMutation), [
  "refreshUsageSnapshotMutation",
  "accountsService.refreshUsageSnapshot()",
  "invalidateAccountsDumpedQueries(queryClient)",
]);
requireIncludes(files.analyticsCache, readRequired(files.analyticsCache), [
  'createModuleCacheOwner<AnalyticsCachePayload>("analytics")',
  "AnalyticsDumpedQueryKeys",
  'usage: ["usage-analytics"]',
  "writeAnalyticsPanelPayload",
]);
requireIncludes(files.analyticsQuery, readRequired(files.analyticsQuery), [
  "AnalyticsPanelQueryDescriptors.usage",
  "analyticsService.loadUsageAnalytics()",
  "analyticsService.loadQuotaHistory(quotaAccountKey)",
  "runAnalyticsPanelQuery",
]);
requireIncludes(files.overviewQuery, readRequired(files.overviewQuery), [
  "accountsService.loadSnapshot(true)",
  "analyticsService.loadUsageAnalytics()",
]);
requireIncludes(files.overviewMutation, readRequired(files.overviewMutation), [
  "refreshUsageMutation",
  "accountsService.refreshUsageSnapshot()",
  "invalidateOverviewUsageMutationQueries(queryClient)",
]);
requireIncludes(files.sessionsQuery, readRequired(files.sessionsQuery), [
  "AnalyticsDumpedQueryKeys.usage",
  "analyticsService.loadUsageAnalytics()",
]);
requireIncludes(files.mockCommands, readRequired(files.mockCommands), [
  "load_snapshot: coreSnapshotHandler",
  "refresh_usage_snapshot: refreshUsageSnapshotHandler",
  "load_usage_analytics: loadUsageAnalyticsHandler",
  "load_quota_history: loadQuotaHistoryHandler",
]);
requireIncludes(files.ipcContracts, readRequired(files.ipcContracts), [
  '"command": "load_snapshot"',
  '"command": "refresh_usage_snapshot"',
  '"command": "load_usage_analytics"',
  '"command": "load_quota_history"',
]);
requireIncludes(files.tauriLib, readRequired(files.tauriLib), [
  "commands::system::load_snapshot",
  "commands::system::refresh_usage_snapshot",
  "commands::analytics::load_usage_analytics",
  "commands::analytics::load_quota_history",
  "commands::analytics::load_token_analytics",
  "commands::analytics::load_tool_analytics",
  "commands::analytics::load_change_analytics",
]);
requireIncludes(files.systemCommand, readRequired(files.systemCommand), [
  "pub fn load_snapshot",
  "pub fn refresh_usage_snapshot",
  "usecase::system::load_snapshot",
  "usecase::system::refresh_usage_snapshot",
]);
requireIncludes(files.systemUsecase, readRequired(files.systemUsecase), [
  "pub fn refresh_usage_snapshot",
  '"refresh_usage_snapshot"',
]);
requireIncludes(files.snapshotBootstrap, readRequired(files.snapshotBootstrap), [
  "pub fn load_snapshot",
  'restored_status("system", "load_snapshot"',
]);
requireIncludes(files.analyticsCommand, readRequired(files.analyticsCommand), [
  "pub fn load_usage_analytics",
  "pub fn load_quota_history",
  "pub fn load_token_analytics",
  "pub fn load_tool_analytics",
  "pub fn load_change_analytics",
  "usecase::analytics::load_usage_analytics",
]);
requireIncludes(files.analyticsUsecase, readRequired(files.analyticsUsecase), [
  "pub fn load_usage_analytics",
  "pub fn load_quota_history",
  "pub fn load_token_analytics",
  "pub fn load_tool_analytics",
  "pub fn load_change_analytics",
  "analytics_repository::load_public_session_facts(repo)",
  '"load_usage_analytics"',
  '"load_quota_history"',
]);
requireIncludes(files.analyticsRepository, readRequired(files.analyticsRepository), [
  "pub fn load_public_session_facts",
  "sessions::load_session_file_metadata",
]);
requireIncludes(files.quotaRepository, readRequired(files.quotaRepository), [
  "pub fn load_public_quota_history",
  "repo.paths().quota_history_path",
  "repo.fs().read_to_string(path)?",
  "compact_quota_history_if_needed",
]);
requireIncludes(files.analyticsContracts, readRequired(files.analyticsContracts), [
  "pub struct UsageAnalyticsPayload",
  "pub struct QuotaHistoryPayload",
  "pub struct TokenAnalyticsPayload",
  "pub struct ToolAnalyticsPayload",
  "pub struct ChangeAnalyticsPayload",
]);

requireNoPositiveClaims(
  "accounts/analytics current-source 公开链",
  [currentSourceMap, sourceMap, reconstructionReadme, JSON.stringify(closeout ?? {})].join("\n"),
  [
    "全文案验收完成",
    "MAC/WIN 100% leaf 已完成",
    "analytics 闭源 token、真实运行时统计或严格平台 parity 已完成",
    "voice 已接入",
  ],
);

if (failures.length > 0) {
  console.error("FAIL accounts/analytics 前后端 current-source validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS accounts/analytics 前后端 current-source validator：quota-history 与 usage-analytics 的前端 owner、后端公开文件事实 owner、索引和未声明边界均已核对。",
);
