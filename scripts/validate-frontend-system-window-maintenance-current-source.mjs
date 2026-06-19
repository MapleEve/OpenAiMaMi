import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const closeoutId = "system-window-maintenance-frontend-callchain-non-gating-closeout";
const currentSourceMapPath =
  "docs/reconstruction/system-window-maintenance-current-source-map.md";
const npmScript = "validate:frontend-system-window-maintenance-current-source";
const validatorScript = "validate-frontend-system-window-maintenance-current-source.mjs";
const closedCommands = [
  "focus_main_window",
  "open_path",
  "clean",
  "rebuild_registry",
  "graceful_restart_for_update",
  "restart_codex",
];

const files = {
  closeouts: "docs/reconstruction/frontend-current-source-closeouts.json",
  currentSourceMap: currentSourceMapPath,
  sourceMap: "docs/reconstruction/source-map.md",
  reconstructionReadme: "docs/reconstruction/README.md",
  rootReadme: "README.md",
  packageJson: "package.json",
  frontendAggregate: "scripts/validate-frontend.mjs",
  closeoutValidator: "scripts/validate-frontend-current-source-closeouts.mjs",
  e2eMocksValidator: "scripts/validate-e2e-mocks.mjs",
  routeRegistry: "src/routes/registry/registry.tsx",
  routeShell: "src/routes/desktop/main/maintenance/page.tsx",
  featureRoot: "src/features/maintenance/index.ts",
  content: "src/features/maintenance/Content.tsx",
  contract: "src/features/maintenance/contract.ts",
  maintenanceService: "src/services/maintenance/index.ts",
  systemService: "src/services/system/index.ts",
  query: "src/features/maintenance/hooks/query.ts",
  mutation: "src/features/maintenance/hooks/mutation.ts",
  cache: "src/features/maintenance/cache/index.ts",
  mockCommands: "src/mocks/fixtures/commands.ts",
  ipcContracts: "src/contracts/ipc/commands.ts",
  tauriLib: "src-tauri/src/lib.rs",
  maintenanceCommand: "src-tauri/src/commands/maintenance.rs",
  maintenanceUsecase: "src-tauri/src/application/usecase/maintenance.rs",
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
const map = readRequired(files.currentSourceMap);
const sourceMap = readRequired(files.sourceMap);
const reconstructionReadme = readRequired(files.reconstructionReadme);
const rootReadme = readRequired(files.rootReadme);
const packageJson = parseJson(files.packageJson);
const frontendAggregate = readRequired(files.frontendAggregate);
const closeoutValidator = readRequired(files.closeoutValidator);
const e2eMocksValidator = readRequired(files.e2eMocksValidator);

const closeout = closeouts?.closeouts?.find((item) => item.id === closeoutId);
if (!closeout) {
  failures.push(`frontend-current-source-closeouts.json 缺少 ${closeoutId}`);
} else {
  if (closeout.module !== "system-window-maintenance") {
    failures.push(`${closeoutId} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeoutId} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== currentSourceMapPath) {
    failures.push(`${closeoutId} currentSourceMap 必须指向 ${currentSourceMapPath}`);
  }
  requireArraySet(`${closeoutId} currentSourceCommands`, closeout.currentSourceCommands, closedCommands);
  requireArraySet(`${closeoutId} closedCommands`, closeout.closedCommands, closedCommands);
  if (!(closeout.notClosedCommands ?? []).includes("load_snapshot")) {
    failures.push(`${closeoutId} 必须保留 load_snapshot 为未关闭状态`);
  }
  for (const required of [
    "不声明全量叶子验收完成",
    "不启用后端真实恢复",
    "不修改 gate-report",
    "不声明 MAC/WIN 100%",
    "不关闭 load_snapshot",
    "不登记 accounts 或 plugins 的 gate-report 失败字段",
    "不登记任何 full_leaf_100=false 字段",
  ]) {
    if (!(closeout.nonClaims ?? []).includes(required)) {
      failures.push(`${closeoutId} 缺少 nonClaims：${required}`);
    }
  }
  requireIncludes(`${closeoutId} reason`, closeout.reason ?? "", [
    "system/window/maintenance",
    "前端 service/facade/API/mock/e2e-validator 链路",
    "非 gating 证据",
  ]);
  for (const signal of closeout.requiredSourceSignals ?? []) {
    requireSignal(signal);
  }
}

requireIncludes("system-window-maintenance current-source map", map, [
  "# system-window-maintenance 前端 current-source 证据映射",
  "src/routes/registry/registry.tsx",
  "src/routes/desktop/main/maintenance/page.tsx",
  "src/features/maintenance/contract.ts",
  "src/services/maintenance/index.ts",
  "src/services/system/index.ts",
  "src/features/maintenance/hooks/query.ts",
  "src/features/maintenance/hooks/mutation.ts",
  "src/features/maintenance/cache/index.ts",
  "src/mocks/fixtures/commands.ts",
  "src/contracts/ipc/commands.ts",
  "focus_main_window",
  "open_path",
  "clean",
  "rebuild_registry",
  "graceful_restart_for_update",
  "restart_codex",
  "load_snapshot",
  "不启用后端真实恢复",
  "不声明 MAC/WIN 100%",
  "不关闭 `load_snapshot`",
  "不处理 `voice`",
  `scripts/${validatorScript}`,
]);

requireIncludes("source-map system-window-maintenance 索引", sourceMap, [
  currentSourceMapPath,
  "system-window-maintenance 前端当前源码链路",
  `scripts/${validatorScript}`,
]);
requireIncludes("reconstruction README system-window-maintenance 索引", reconstructionReadme, [
  currentSourceMapPath,
  "system-window-maintenance 前端当前源码链路",
  `scripts/${validatorScript}`,
]);
requireIncludes("README 前端归纳", rootReadme, [
  "README 只保留长期有效的归纳状态",
  "具体模块进度",
  "验证脚本",
]);

if (packageJson?.scripts?.[npmScript] !== `node scripts/${validatorScript}`) {
  failures.push(`package.json 未登记 ${npmScript}`);
}
if (!frontendAggregate.includes(validatorScript)) {
  failures.push(`scripts/validate-frontend.mjs 未纳入 ${validatorScript}`);
}
requireIncludes("closeout 聚合 validator 绑定 map", closeoutValidator, [
  "SYSTEM_WINDOW_MAINTENANCE_CURRENT_SOURCE_MAP",
  currentSourceMapPath,
  "currentSourceMap",
]);
requireIncludes("E2E mock validator 仍覆盖维护窗口命令", e2eMocksValidator, [
  '["clean", "cleanHandler"]',
  '["rebuild_registry", "rebuildRegistryHandler"]',
  '["focus_main_window", "systemActionHandler"]',
  '["open_path", "systemActionHandler"]',
  '["restart_codex", "systemActionHandler"]',
  '["graceful_restart_for_update", "systemActionHandler"]',
]);

requireIncludes(files.routeRegistry, readRequired(files.routeRegistry), [
  'route: "maintenance"',
  'titleKey: "nav.maintenance"',
  'preload: () => import("@/routes/desktop/main/maintenance/page")',
  '["imageCompat"]',
  '["maintenance", "system-info"]',
  '["maintenance", "snapshot"]',
]);
requireIncludes(files.routeShell, readRequired(files.routeShell), [
  'import { MaintenanceFeature } from "@/features/maintenance";',
  "return <MaintenanceFeature />;",
]);
requireIncludes(files.featureRoot, readRequired(files.featureRoot), [
  "MaintenanceProvider",
  "MaintenanceContent",
]);
requireIncludes(files.content, readRequired(files.content), [
  'moduleId="maintenance"',
  "DUMPED_MAINTENANCE_COMMANDS",
  "<MaintenancePage />",
]);
requireIncludes(files.contract, readRequired(files.contract), [
  '"clean"',
  '"open_path"',
  '"rebuild_registry"',
  '"restart_codex"',
]);
requireIncludes(files.maintenanceService, readRequired(files.maintenanceService), [
  "clean: () => readEnvelopeData(systemService.clean())",
  "rebuildRegistry: () => readEnvelopeData(systemService.rebuildRegistry())",
  "restartCodex: systemService.restartCodex",
  "openPath: systemService.openPath",
  "loadSnapshot: (localOnly = true) => readEnvelopeData(systemService.loadSnapshot(localOnly))",
]);
requireIncludes(files.systemService, readRequired(files.systemService), [
  'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("load_snapshot", { localOnly })',
  'invokeIpc<CoreEnvelope<CleanPayload>>("clean")',
  'invokeIpc<CoreEnvelope<RebuildRegistryPayload>>("rebuild_registry")',
  'invokeIpc<CoreEnvelope<SystemActionPayload>>("graceful_restart_for_update")',
  'invokeIpc<CoreEnvelope<SystemActionPayload>>("restart_codex")',
  'invokeIpc<CoreEnvelope<SystemActionPayload>>("open_path", { path })',
  'invokeIpc<CoreEnvelope<SystemActionPayload>>("focus_main_window")',
]);
requireIncludes(files.query, readRequired(files.query), [
  "MAINTENANCE_SNAPSHOT_QUERY_KEY",
  "maintenanceService.loadSnapshot(true)",
  "runMaintenanceQuery(",
]);
requireIncludes(files.mutation, readRequired(files.mutation), [
  "maintenanceService.clean()",
  "maintenanceService.rebuildRegistry()",
  "maintenanceService.restartCodex()",
  "maintenanceService.openPath(",
  "writeMaintenanceMutationPayload",
  "invalidateMaintenanceContractQueries",
]);
requireIncludes(files.cache, readRequired(files.cache), [
  "createModuleCacheOwner<MaintenanceCachePayload>",
  "MAINTENANCE_IMAGE_COMPAT_QUERY_KEY",
  "MAINTENANCE_SYSTEM_INFO_QUERY_KEY",
  "MAINTENANCE_SNAPSHOT_QUERY_KEY",
  "maintenanceMutationFences",
]);
requireIncludes(files.mockCommands, readRequired(files.mockCommands), [
  "clean: cleanHandler",
  "rebuild_registry: rebuildRegistryHandler",
  "graceful_restart_for_update: systemActionHandler",
  "restart_codex: systemActionHandler",
  "open_path: systemActionHandler",
  "focus_main_window: systemActionHandler",
  "load_snapshot: coreSnapshotHandler",
]);
requireIncludes(files.ipcContracts, readRequired(files.ipcContracts), [
  '"command": "open_path"',
  '"command": "restart_codex"',
  '"command": "graceful_restart_for_update"',
  '"command": "focus_main_window"',
  '"command": "load_snapshot"',
]);
requireIncludes(files.tauriLib, readRequired(files.tauriLib), [
  "commands::maintenance::clean",
  "commands::maintenance::rebuild_registry",
]);
requireIncludes(files.maintenanceCommand, readRequired(files.maintenanceCommand), [
  "pub fn clean",
  "pub fn rebuild_registry",
  "usecase::maintenance::clean",
  "usecase::maintenance::rebuild_registry",
]);
requireIncludes(files.maintenanceUsecase, readRequired(files.maintenanceUsecase), [
  "pub fn clean",
  "pub fn rebuild_registry",
]);

requireNoPositiveClaims(
  "system-window-maintenance current-source 公开链",
  [
    map,
    sourceMap,
    reconstructionReadme,
    rootReadme,
    JSON.stringify(closeout ?? {}),
  ].join("\n"),
  [
    "full_leaf_100 已完成",
    "gate_accepted 已完成",
    "implementation_use 已完成",
    "MAC/WIN 100% 已完成",
    "load_snapshot 已关闭",
    "voice 已接入",
  ],
);

if (failures.length > 0) {
  console.error("FAIL system-window-maintenance 前端 current-source validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  `PASS system-window-maintenance 前端 current-source validator：${closedCommands.length} 条 non-gating command、load_snapshot 边界、源码链、mock、IPC contract 和索引均已核对。`,
);
