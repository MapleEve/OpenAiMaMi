import { existsSync, readdirSync, readFileSync } from "node:fs";
import { basename, join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const srcRoot = join(repoRoot, "src");
const featuresRoot = join(srcRoot, "features");
const routesRoot = join(srcRoot, "routes", "desktop", "main");
const servicesRoot = join(srcRoot, "services");

const featureModules = [
  "accounts",
  "analytics",
  "custom-instructions",
  "daemon-autoswitch",
  "maintenance",
  "mcp",
  "overview",
  "plugins",
  "relay",
  "sessions",
  "settings",
  "skills",
  "tray-shell",
  "voice",
];

const modulesWithService = [
  "accounts",
  "analytics",
  "custom-instructions",
  "daemon-autoswitch",
  "maintenance",
  "mcp",
  "plugins",
  "relay",
  "sessions",
  "settings",
  "skills",
  "voice",
];

const strictFeaturePageShells = [
  "accounts",
  "analytics",
  "custom-instructions",
  "daemon-autoswitch",
  "maintenance",
  "mcp",
  "overview",
  "plugins",
  "relay",
  "sessions",
  "settings",
  "skills",
  "tray-shell",
];

const providerContentPageShells = [
  "skills",
  "voice",
];

const requiredFeatureFiles = [
  "Provider.tsx",
  "StoreUpdater.tsx",
  "Content.tsx",
  "cache/index.ts",
  "hooks/index.ts",
  "store/index.ts",
  "types/index.ts",
  "components/index.ts",
  "dialogs/index.ts",
  "panels/index.ts",
  "utils/index.ts",
];

const forbiddenReferenceNames = [
  [108, 111, 98, 101, 104, 117, 98],
  [76, 111, 98, 101, 72, 117, 98],
  [108, 111, 98, 101, 104, 117, 98, 47, 108, 111, 98, 101, 104, 117, 98],
].map((codes) => String.fromCharCode(...codes));

const failures = [];

function repoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function readRequired(path) {
  if (!existsSync(path)) {
    failures.push(`缺少文件：${repoPath(path)}`);
    return "";
  }
  return readFileSync(path, "utf8");
}

function walkFiles(root, predicate) {
  if (!existsSync(root)) return [];
  const ignoredDirectories = new Set([".git", "node_modules", "dist", "target"]);
  const pending = [root];
  const files = [];

  while (pending.length > 0) {
    const current = pending.pop();
    if (!current) continue;

    for (const entry of readdirSync(current, { withFileTypes: true })) {
      const next = join(current, entry.name);
      if (entry.isDirectory()) {
        if (!ignoredDirectories.has(entry.name)) pending.push(next);
        continue;
      }
      if (!predicate || predicate(next)) files.push(next);
    }
  }

  return files.sort();
}

function validateSourceFileNames() {
  const sourceFiles = walkFiles(srcRoot, (file) => /\.(css|json|md|ts|tsx)$/i.test(file));
  for (const file of sourceFiles) {
    if (basename(file).includes("-")) {
      failures.push(`${repoPath(file)} 文件名不得使用连字符；目录已表达 owner，文件名只能保留单词职责`);
    }
  }

  console.log(`PASS src 文件名单词化：${sourceFiles.length}/${sourceFiles.length}`);
}

function assertIncludes(file, content, snippets) {
  for (const snippet of snippets) {
    if (!content.includes(snippet)) {
      failures.push(`${file} 缺少结构片段：${snippet}`);
    }
  }
}

function assertNotMatches(file, content, patterns) {
  for (const [pattern, reason] of patterns) {
    if (pattern.test(content)) {
      failures.push(`${file} 出现禁止边界：${reason}`);
    }
  }
}

function assertOnlyBarrelReExports(file, content, owners) {
  const reExportPattern =
    /export\s+(?:type\s+)?(?:\*|\{[\s\S]*?\})\s+from\s+["']([^"']+)["'];?/g;
  const reExports = [...content.matchAll(reExportPattern)].map((match) => match[1]);
  const allowedPaths = new Set(owners.map((owner) => `./${owner}`));
  const remainder = content
    .replace(reExportPattern, "")
    .replace(/\/\/.*$/gm, "")
    .replace(/\/\*[\s\S]*?\*\//g, "")
    .trim();

  if (remainder) {
    failures.push(`${file} 只能作为 re-export barrel，不得包含 hook 实现、cache 写入或 页面控制器`);
  }

  for (const owner of owners) {
    if (!reExports.includes(`./${owner}`)) {
      failures.push(`${file} 必须 re-export ./${owner} owner`);
    }
  }

  for (const reExport of reExports) {
    if (!allowedPaths.has(reExport)) {
      failures.push(
        `${file} 只能 re-export ${owners
          .map((owner) => `./${owner}`)
          .join("、")}，不得导出 ${reExport}`,
      );
    }
  }
}

function validateAccountsDeepOwnerBoundaries() {
  const accountsRoot = join(featuresRoot, "accounts");
  const hooksIndexPath = join(accountsRoot, "hooks", "index.ts");
  const queryPath = join(accountsRoot, "hooks", "query.ts");
  const mutationPath = join(accountsRoot, "hooks", "mutation.ts");
  const actionPath = join(accountsRoot, "hooks", "action.ts");
  const pagePath = join(accountsRoot, "hooks", "page.ts");
  const cachePath = join(accountsRoot, "cache", "index.ts");
  const typesPath = join(accountsRoot, "types", "index.ts");
  const controllerConsumerPaths = [
    ...walkFiles(join(accountsRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(accountsRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(accountsRoot, "components"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const action = readRequired(actionPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const types = readRequired(typesPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((file) => readRequired(file))
    .join("\n");

  assertOnlyBarrelReExports("src/features/accounts/hooks/index.ts", hooksIndex, [
    "query",
    "mutation",
    "action",
    "page",
  ]);
  assertNotMatches("src/features/accounts/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "accounts hooks/index can only re-export split owners"],
    [/\b(writeAccounts|setQueryData|invalidateQueries|cancelQueries|Accounts[A-Za-z]*QueryKeys)\b/, "accounts hooks/index 不得持有 cache 写入 or query keys"],
    [/@\/services\/accounts|@\/services\/system|@\/services\/maintenance|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|accountsService\.|systemService\.|maintenanceService\.|invokeIpc|invoke\(/, "accounts hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/accounts/hooks/query.ts", query, [
    "useAccountsCacheController",
    "useModuleCacheController(AccountsCache)",
    "useAccountsPageQueries",
    "useQuery",
    "useQueryClient",
    "accountsService.loadSnapshot(true)",
    "AccountsAuthoritativeQueryKeys",
    "AccountsDumpedQueryKeys",
    "writeAccountsSnapshotPayload",
    "AccountsSnapshotEnvelope",
  ]);
  assertNotMatches("src/features/accounts/hooks/query.ts", query, [
    [/\buseMutation\b/, "accounts 查询归属 不得持有 mutation"],
    [/\buse(State|Reducer|Memo|Callback)\b/, "accounts 查询归属 不得持有 页面/控制器 UI 状态 or view models"],
    [/\b(writeAccountsMutationPayload|invalidateAccountsDumpedQueries|setQueryData|cancelQueries)\b/, "accounts 查询归属 必须委托 mutation writes and 失效"],
    [/useTranslation|AccountsPageController|setQuery|setPlanFilter|setSelectedKey|envelopeData|readArray|accountEmail|accountKey|accountPlan|isActiveAccount/, "accounts 查询归属 不得持有 页面控制器, locale 格式化, or view model 解析"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "accounts 查询归属 必须使用 accounts service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "accounts 查询归属 必须保留 typed authoritative payloads"],
  ]);

  assertIncludes("src/features/accounts/hooks/mutation.ts", mutation, [
    "useAccountsPageMutations",
    "useMutation",
    "useQueryClient",
    "accountsService.beginAddAccountAttachMonitor",
    "accountsService.refreshUsageSnapshot",
    "accountsService.switchAccount",
    "accountsService.switchAccountAndRestartCodex",
    "accountsService.removeAccounts",
    "accountsService.logout",
    "accountsService.importChatGptSessionAccount",
    "accountsService.exportAccountsToFile",
    "accountsService.previewAccountImport",
    "accountsService.importAccountsFromFile",
    "writeAccountsMutationPayload",
    "writeAccountsSnapshotPayload",
    "invalidateAccountsDumpedQueries",
  ]);
  assertNotMatches("src/features/accounts/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "accounts 变更操作归属 不得持有 query"],
    [/\buse(State|Reducer|Effect|Memo|Callback)\b/, "accounts 变更操作归属 不得持有 页面/控制器 UI 状态"],
    [/\bsetQueryData\b/, "accounts 变更操作归属 必须委托 cache 写入 to cache helper"],
    [/useTranslation|AccountsPageController|setQuery|setPlanFilter|setSelectedKey|envelopeData|readArray|accountEmail|accountPlan|isActiveAccount/, "accounts 变更操作归属 不得持有 页面控制器, locale 格式化, or view model 解析"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "accounts 变更操作归属 必须使用 accounts service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|useMutation<unknown/, "accounts 变更操作归属 必须保留 类型化 mutation payload"],
  ]);

  assertIncludes("src/features/accounts/hooks/action.ts", action, [
    "useAccountsPathActions",
    "accountsService.openPath",
  ]);
  assertNotMatches("src/features/accounts/hooks/action.ts", action, [
    [/\buse(Query|Mutation|QueryClient)\b/, "accounts 动作归属 must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|writeAccounts|Accounts[A-Za-z]*QueryKeys)\b/, "accounts 动作归属 must not write cache or consume query keys"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "accounts 动作归属 must not bypass service wrapper"],
    [/useTranslation|AccountsPageController|setQuery|setPlanFilter|setSelectedKey|envelopeData|readArray/, "accounts 动作归属 不得持有 页面控制器 or UI view model"],
  ]);

  assertIncludes("src/features/accounts/hooks/page.ts", page, [
    "useAccountsPageController",
    "AccountsPageController",
    "useAccountsPageQueries",
    "useAccountsPageMutations",
    "useAccountsPathActions",
    "useState",
    "useMemo",
    "envelopeData",
    "readArray<AccountRecord>",
    "accountEmail",
    "accountKey",
    "accountPlan",
    "isActiveAccount",
  ]);
  assertNotMatches("src/features/accounts/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "accounts page/controller may compose split owner hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|writeAccounts|Accounts[A-Za-z]*QueryKeys)\b/, "accounts page/controller must not write cache, invalidate, cancel, or consume query keys"],
    [/@\/services\/accounts|@\/services\/system|@\/services\/maintenance|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|accountsService\.|systemService\.|maintenanceService\.|invokeIpc|invoke\(/, "accounts page/controller must not access service/API/IPC directly"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "accounts page/controller must not use generic authoritative payloads"],
  ]);

  assertIncludes("src/features/accounts/types/index.ts", types, [
    "export type AccountsMutationPayload",
    "export type AccountsMutationEnvelope",
    "export type AccountsSnapshotEnvelope",
    "export type AccountsCachePayload",
    "export interface AccountsPageQueries",
    "export interface AccountsPageMutations",
    "export interface AccountsPathActions",
    "export interface AccountsModuleController",
    "export interface AccountsPageController",
  ]);
  assertNotMatches("src/features/accounts/types/index.ts", types, [
    [/AccountsPageController\s*=\s*ReturnType|ReturnType<typeof useAccountsPageController>|ReturnType<typeof useAccountsModule>/, "accounts controller contract must be explicit, not ReturnType"],
    [/AccountsCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "accounts types owner 必须保留 typed cache payloads"],
  ]);

  assertIncludes("src/features/accounts/cache/index.ts", cache, [
    "createModuleCacheOwner<AccountsCachePayload>(\"accounts\")",
    "AccountsDumpedQueryKeys",
    "AccountsAuthoritativeQueryKeys",
    "writeAccountsSnapshotPayload",
    "writeAccountsMutationPayload",
    "invalidateAccountsDumpedQueries",
    "setQueryData<ModuleCacheEnvelope<AccountsCachePayload>>",
    "mutationFenceAt",
    "isStaleEnvelope",
    "next.sequence < current.sequence",
  ]);
  assertNotMatches("src/features/accounts/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "accounts cache owner 不得持有 React hooks"],
    [/@\/services\/accounts|@\/services\/system|@\/services\/maintenance|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|accountsService\.|systemService\.|maintenanceService\.|invokeIpc|invoke\(/, "accounts cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("accounts"\)|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "accounts cache owner 必须保留 typed payloads"],
  ]);

  if (
    controllerConsumerText.includes("ReturnType<typeof useAccountsPageController>") ||
    controllerConsumerText.includes("ReturnType<typeof useAccountsModule>")
  ) {
    failures.push("src/features/accounts panels/dialogs/components must consume explicit Accounts controller types, not hook ReturnType");
  }
  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+Accounts[A-Za-z]*(?:Controller|Props)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/accounts panels/dialogs/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS accounts deep owner gate executed: hooks/index, query, mutation, action, page, cache, types, panels/dialogs/components");
}

function validateSessionsDeepOwnerBoundaries() {
  const sessionsRoot = join(featuresRoot, "sessions");
  const hooksIndexPath = join(sessionsRoot, "hooks", "index.ts");
  const queryPath = join(sessionsRoot, "hooks", "query.ts");
  const mutationPath = join(sessionsRoot, "hooks", "mutation.ts");
  const pagePath = join(sessionsRoot, "hooks", "page.ts");
  const cachePath = join(sessionsRoot, "cache", "index.ts");
  const typesPath = join(sessionsRoot, "types", "index.ts");
  const controllerConsumerPaths = [
    ...walkFiles(join(sessionsRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(sessionsRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(sessionsRoot, "components"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const types = readRequired(typesPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((file) => readRequired(file))
    .join("\n");

  assertOnlyBarrelReExports("src/features/sessions/hooks/index.ts", hooksIndex, [
    "query",
    "mutation",
    "page",
  ]);
  assertNotMatches("src/features/sessions/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback|useRef)\b/, "sessions hooks/index can only re-export split owners"],
    [/\b(writeSessions|writeAnalytics|fenceAnalytics|setQueryData|invalidateQueries|cancelQueries|Sessions[A-Za-z]*QueryKeys|Analytics[A-Za-z]*QueryKeys)\b/, "sessions hooks/index 不得持有 cache 写入 or query keys"],
    [/@\/services\/sessions|@\/services\/analytics|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|sessionsService\.|analyticsService\.|invokeIpc|invoke\(/, "sessions hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/sessions/hooks/query.ts", query, [
    "SessionsCacheEnvelope",
    "useSessionsCacheController",
    "useModuleCacheController(SessionsCache)",
    "useSessionsPageQueries",
    "useQuery",
    "useQueryClient",
    "SessionsAuthoritativeQueryKeys",
    "SessionsDumpedQueryKeys",
    "AnalyticsAuthoritativeQueryKeys",
    "AnalyticsDumpedQueryKeys",
    "sessionsService.loadSessions",
    "analyticsService.loadUsageAnalytics",
    "writeSessionsListPayload",
    "writeAnalyticsPanelPayload",
  ]);
  assertNotMatches("src/features/sessions/hooks/query.ts", query, [
    [/\buseMutation\b/, "sessions 查询归属 不得持有 mutation"],
    [/\buse(State|Reducer|Memo|Callback)\b/, "sessions 查询归属 不得持有 页面/控制器 UI 状态 or view models"],
    [/\b(writeSessionsMutationPayload|invalidateSessionsDumpedQueries|fenceAnalyticsPanelPayload|setQueryData|cancelQueries)\b/, "sessions 查询归属 必须委托 mutation writes, fences, and 失效"],
    [/useTranslation|SessionsPageController|SessionsModuleController|setSelected|setExpanded|setFocused|deleteRequest|setDeleteRequest|buildSessionGroups|countOrphans|flattenGroups|formatBytes|readNumber|selectDeletedSessionIds/, "sessions 查询归属 不得持有 页面控制器, locale 格式化, view model, or delete 弹窗状态"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "sessions 查询归属 必须使用 sessions/analytics service wrappers, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|CoreEnvelope<unknown>|response\.data/, "sessions 查询归属 必须保留 typed authoritative payloads"],
  ]);

  assertIncludes("src/features/sessions/hooks/mutation.ts", mutation, [
    "SessionsDeleteEnvelope",
    "useSessionsPageMutations",
    "useMutation",
    "useQueryClient",
    "sessionsService.deleteSessions",
    "writeSessionsMutationPayload",
    "fenceAnalyticsPanelPayload",
    "invalidateSessionsDumpedQueries",
  ]);
  if (!/refreshPromiseRef|singleFlight|refreshPromise/.test(mutation)) {
    failures.push("src/features/sessions/hooks/mutation.ts must own single-flight refresh");
  }
  assertNotMatches("src/features/sessions/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "sessions 变更操作归属 不得持有 query"],
    [/\buse(State|Reducer|Effect|Memo|Callback)\b/, "sessions 变更操作归属 不得持有 页面/控制器 UI 状态"],
    [/\bsetQueryData\b/, "sessions 变更操作归属 必须委托 cache 写入 to cache helper"],
    [/useTranslation|SessionsPageController|setSelected|setExpanded|setFocused|deleteRequest|setDeleteRequest|buildSessionGroups|countOrphans|flattenGroups|formatBytes|readNumber/, "sessions 变更操作归属 不得持有 页面控制器, locale 格式化, view model, or delete 弹窗状态"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "sessions 变更操作归属 必须使用 sessions service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|CoreEnvelope<unknown>|useMutation<unknown|Promise<unknown>|response\.data/, "sessions 变更操作归属 必须保留 类型化 mutation payload"],
  ]);

  assertIncludes("src/features/sessions/hooks/page.ts", page, [
    "useSessionsModule",
    "SessionsModuleController",
    "useSessionsPageController",
    "SessionsPageController",
    "useSessionsPageQueries",
    "useSessionsPageMutations",
    "useState",
    "useMemo",
    "useTranslation",
    "buildSessionGroups",
    "countOrphans",
    "flattenGroups",
    "formatBytes",
    "readNumber",
    "selectDeletedSessionIds",
    "deleteRequest",
  ]);
  assertNotMatches("src/features/sessions/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "sessions page/controller may compose split owner hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|writeSessions|writeAnalytics|fenceAnalytics|Sessions[A-Za-z]*QueryKeys|Analytics[A-Za-z]*QueryKeys)\b/, "sessions page/controller must not write cache, invalidate, cancel, or consume query keys"],
    [/@\/services\/sessions|@\/services\/analytics|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|sessionsService\.|analyticsService\.|invokeIpc|invoke\(/, "sessions page/controller must not access service/API/IPC directly"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|CoreEnvelope<unknown>|response\.data/, "sessions page/controller must not use generic authoritative payloads"],
  ]);

  assertIncludes("src/features/sessions/types/index.ts", types, [
    "export type SessionsListEnvelope",
    "export type SessionsDeleteEnvelope",
    "export type SessionsMutationPayload",
    "export type SessionsMutationEnvelope",
    "export type SessionsCachePayload",
    "export interface SessionsModuleController",
    "export interface SessionsPageQueries",
    "export interface SessionsPageMutations",
    "export interface SessionsPageController",
  ]);
  assertNotMatches("src/features/sessions/types/index.ts", types, [
    [/Sessions[A-Za-z]*(?:Controller|Queries|Mutations)\s*=\s*ReturnType|ReturnType<typeof useSessions[A-Za-z]*/, "sessions controller contracts must be explicit, not hook ReturnType"],
    [/SessionsCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown|CoreEnvelope<unknown>/, "sessions types owner 必须保留 typed cache payloads"],
  ]);

  assertIncludes("src/features/sessions/cache/index.ts", cache, [
    "createModuleCacheOwner<SessionsCachePayload>(\"sessions\")",
    "SessionsDumpedQueryKeys",
    "SessionsAuthoritativeQueryKeys",
    "writeSessionsListPayload",
    "writeSessionsMutationPayload",
    "invalidateSessionsDumpedQueries",
    "setQueryData<ModuleCacheEnvelope<SessionsCachePayload>>",
    "mutationFenceAt",
    "isStaleEnvelope",
    "next.sequence < current.sequence",
  ]);
  assertNotMatches("src/features/sessions/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback|Ref)\b/, "sessions cache owner 不得持有 React hooks"],
    [/@\/services\/sessions|@\/services\/analytics|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|sessionsService\.|analyticsService\.|invokeIpc|invoke\(/, "sessions cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("sessions"\)|ModuleCacheEnvelope<unknown>|payload:\s*unknown|CoreEnvelope<unknown>/, "sessions cache owner 必须保留 typed payloads"],
  ]);

  if (
    controllerConsumerText.includes("ReturnType<typeof useSessionsPageController>") ||
    controllerConsumerText.includes("ReturnType<typeof useSessionsModule>")
  ) {
    failures.push("src/features/sessions panels/dialogs/components must consume explicit Sessions controller types, not hook ReturnType");
  }
  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+Sessions[A-Za-z]*(?:Controller|Props|Queries|Mutations)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/sessions panels/dialogs/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS sessions deep owner gate executed: hooks/index, query, mutation, page, cache, types, panels/dialogs/components");
}

function validateAnalyticsDeepOwnerBoundaries() {
  const analyticsRoot = join(featuresRoot, "analytics");
  const hooksIndexPath = join(analyticsRoot, "hooks", "index.ts");
  const queryPath = join(analyticsRoot, "hooks", "query.ts");
  const pagePath = join(analyticsRoot, "hooks", "page.ts");
  const cachePath = join(analyticsRoot, "cache", "index.ts");
  const typesPath = join(analyticsRoot, "types", "index.ts");
  const controllerConsumerPaths = [
    ...walkFiles(join(analyticsRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(analyticsRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(analyticsRoot, "components"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const types = readRequired(typesPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((file) => readRequired(file))
    .join("\n");

  assertOnlyBarrelReExports("src/features/analytics/hooks/index.ts", hooksIndex, [
    "query",
    "page",
  ]);
  assertNotMatches("src/features/analytics/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "analytics hooks/index can only re-export split owners"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|writeAnalytics|fenceAnalytics|Analytics[A-Za-z]*QueryKeys)\b/, "analytics hooks/index 不得持有 cache 写入 or query keys"],
    [/@\/services\/analytics|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|analyticsService\.|invokeIpc|invoke\(/, "analytics hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/analytics/hooks/query.ts", query, [
    "useAnalyticsCacheController",
    "useModuleCacheController(AnalyticsCache)",
    "useAnalyticsModule",
    "useQuery",
    "useQueryClient",
    "analyticsService.loadUsageAnalytics",
    "analyticsService.loadSessionAnalytics",
    "analyticsService.loadTokenAnalytics",
    "analyticsService.loadToolAnalytics",
    "analyticsService.loadChangeAnalytics",
    "analyticsService.loadQuotaHistory",
    "AnalyticsPanelQueryDescriptors",
    "readAnalyticsPanelEnvelope",
    "runAnalyticsPanelQuery",
    "AnalyticsCacheEnvelope<AnalyticsUsageEnvelope>",
    "AnalyticsCacheEnvelope<AnalyticsSessionEnvelope>",
    "AnalyticsCacheEnvelope<AnalyticsTokenEnvelope>",
    "AnalyticsCacheEnvelope<AnalyticsToolEnvelope>",
    "AnalyticsCacheEnvelope<AnalyticsChangeEnvelope>",
    "AnalyticsCacheEnvelope<AnalyticsQuotaEnvelope>",
  ]);
  assertNotMatches("src/features/analytics/hooks/query.ts", query, [
    [/\buseMutation\b/, "analytics 查询归属 不得持有 mutation"],
    [/\buse(State|Reducer|Memo)\b/, "analytics 查询归属 不得持有 页面/控制器 UI 状态 or view models"],
    [/useTranslation|formatInvokeError|build[A-Za-z]*(Panel|Model)|AnalyticsPageController|setActivePanel|setRange|setActivityRange|setQuotaAccountKey/, "analytics 查询归属 不得持有 页面控制器, locale 格式化, or panel view models"],
    [/\b(useRef|sequenceRef|nextSequence|writeAnalyticsPanelPayload)\b/, "analytics 查询归属 必须委托 sequence allocation and cache 写入 to cache helper"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "analytics 查询归属 必须使用 analytics service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "analytics 查询归属 必须保留 typed authoritative payloads"],
  ]);

  assertIncludes("src/features/analytics/hooks/page.ts", page, [
    "useAnalyticsPageController",
    "AnalyticsPageController",
    "useAnalyticsModule",
    "useState",
    "useMemo",
    "useTranslation",
    "PANELS",
    "ANALYTICS_RANGES",
    "ACTIVITY_RANGES",
    "buildActivityPanel",
    "buildSessionsPanel",
    "buildTokenPanel",
    "buildToolsPanel",
    "buildChangesPanel",
    "buildQuotaPanel",
  ]);
  assertNotMatches("src/features/analytics/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "analytics page/controller may compose query hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|writeAnalytics|fenceAnalytics|Analytics[A-Za-z]*QueryKeys)\b/, "analytics page/controller must not write cache, invalidate, cancel, or consume query keys"],
    [/@\/services\/analytics|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|analyticsService\.|invokeIpc|invoke\(/, "analytics page/controller must not access service/API/IPC directly"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "analytics page/controller must not use generic authoritative payloads"],
  ]);

  assertIncludes("src/features/analytics/types/index.ts", types, [
    "export type AnalyticsUsageEnvelope",
    "export type AnalyticsSessionEnvelope",
    "export type AnalyticsTokenEnvelope",
    "export type AnalyticsToolEnvelope",
    "export type AnalyticsChangeEnvelope",
    "export type AnalyticsQuotaEnvelope",
    "export type AnalyticsCachePayload",
    "export interface AnalyticsPageController",
  ]);
  assertNotMatches("src/features/analytics/types/index.ts", types, [
    [/AnalyticsPageController\s*=\s*ReturnType|ReturnType<typeof useAnalyticsPageController>/, "analytics controller contract must be explicit, not ReturnType"],
    [/AnalyticsCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "analytics types owner 必须保留 typed cache payloads"],
  ]);

  assertIncludes("src/features/analytics/cache/index.ts", cache, [
    "createModuleCacheOwner<AnalyticsCachePayload>(\"analytics\")",
    "AnalyticsDumpedQueryKeys",
    "AnalyticsAuthoritativeQueryKeys",
    "AnalyticsPanelQueryDescriptors",
    "readAnalyticsPanelEnvelope",
    "runAnalyticsPanelQuery",
    "writeAnalyticsPanelPayload",
    "analyticsCacheSequence",
    "reserveAnalyticsPanelSequence",
    "isReservedAnalyticsPanelResponseStale",
    "setQueryData<ModuleCacheEnvelope<AnalyticsCachePayload>>",
    "mutationFenceAt",
    "isStaleEnvelope",
    "next.sequence < current.sequence",
  ]);
  assertNotMatches("src/features/analytics/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "analytics cache owner 不得持有 React hooks"],
    [/@\/services\/analytics|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|analyticsService\.|invokeIpc|invoke\(/, "analytics cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("analytics"\)|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "analytics cache owner 必须保留 typed payloads"],
  ]);

  if (controllerConsumerText.includes("ReturnType<typeof useAnalyticsPageController>")) {
    failures.push("src/features/analytics panels/dialogs/components must consume explicit Analytics controller types, not hook ReturnType");
  }
  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+Analytics[A-Za-z]*(?:Controller|Props)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/analytics panels/dialogs/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS analytics deep owner gate executed: hooks/index, query, page, cache, types, panels/dialogs/components");
}

function validateCustomInstructionsDeepOwnerBoundaries() {
  const customInstructionsRoot = join(featuresRoot, "custom-instructions");
  const hooksIndexPath = join(customInstructionsRoot, "hooks", "index.ts");
  const queryPath = join(customInstructionsRoot, "hooks", "query.ts");
  const mutationPath = join(customInstructionsRoot, "hooks", "mutation.ts");
  const actionPath = join(customInstructionsRoot, "hooks", "action.ts");
  const pagePath = join(customInstructionsRoot, "hooks", "page.ts");
  const cachePath = join(customInstructionsRoot, "cache", "index.ts");
  const typesPath = join(customInstructionsRoot, "types", "index.ts");
  const controllerConsumerPaths = [
    ...walkFiles(join(customInstructionsRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(customInstructionsRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(customInstructionsRoot, "components"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const action = readRequired(actionPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const types = readRequired(typesPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((file) => readRequired(file))
    .join("\n");

  const hooksIndexReExportPattern =
    /export\s+(type\s+)?(?:\*|\{[\s\S]*?\})\s+from\s+["']([^"']+)["'];?/g;
  const hooksIndexReExports = [...hooksIndex.matchAll(hooksIndexReExportPattern)].map(
    (match) => ({ typeOnly: Boolean(match[1]), path: match[2] }),
  );
  const hooksIndexRemainder = hooksIndex
    .replace(hooksIndexReExportPattern, "")
    .replace(/\/\/.*$/gm, "")
    .replace(/\/\*[\s\S]*?\*\//g, "")
    .trim();
  const hooksIndexAllowedReExports = new Set([
    "./query",
    "./mutation",
    "./action",
    "./page",
    "../types",
  ]);
  if (hooksIndexRemainder) {
    failures.push("src/features/custom-instructions/hooks/index.ts 只能作为 re-export barrel，不得包含 hook 实现、cache 写入或 页面控制器");
  }
  for (const owner of ["query", "mutation", "action", "page"]) {
    if (!hooksIndexReExports.some((item) => item.path === `./${owner}`)) {
      failures.push(`src/features/custom-instructions/hooks/index.ts 必须 re-export ./${owner} owner`);
    }
  }
  for (const reExport of hooksIndexReExports) {
    if (!hooksIndexAllowedReExports.has(reExport.path)) {
      failures.push(`src/features/custom-instructions/hooks/index.ts 不得导出 ${reExport.path}`);
    }
    if (reExport.path === "../types" && !reExport.typeOnly) {
      failures.push("src/features/custom-instructions/hooks/index.ts 只能从 ../types re-export 显式 controller 类型");
    }
  }
  assertNotMatches("src/features/custom-instructions/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "custom-instructions hooks/index can only re-export split owners"],
    [/\b(runCustomInstructionsStateQuery|writeCustomInstructions|setQueryData|invalidateQueries|cancelQueries|CUSTOM_INSTRUCTION_[A-Z0-9_]+_QUERY_KEY)\b/, "custom-instructions hooks/index 不得持有 query keys or cache 写入"],
    [/@\/services\/custom-instructions|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|customInstructionsService\.|systemService\.|invokeIpc|invoke\(/, "custom-instructions hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/custom-instructions/hooks/query.ts", query, [
    "useCustomInstructionsCacheController",
    "useModuleCacheController(CustomInstructionsCache)",
    "useCustomInstructionQueries",
    "useQuery",
    "useQueryClient",
    "CUSTOM_INSTRUCTION_STATE_QUERY_KEY",
    "CUSTOM_INSTRUCTION_TEMPLATES_QUERY_KEY",
    "runCustomInstructionsStateQuery",
    "customInstructionsService.loadState",
    "mergeCustomInstructionTemplates",
  ]);
  assertNotMatches("src/features/custom-instructions/hooks/query.ts", query, [
    [/\buseMutation\b/, "custom-instructions 查询归属 不得持有 mutation"],
    [/\buse(State|Reducer|Memo|Callback)\b/, "custom-instructions 查询归属 不得持有 页面/控制器 UI 状态 or view models"],
    [/\b(writeCustomInstructionsStateMutationPayload|invalidateCustomInstructionsContractQueries|setQueryData|cancelQueries)\b/, "custom-instructions 查询归属 必须委托 mutation writes and 失效"],
    [/toast\(|useTranslation|useBusyAction|CustomInstructionsPageController|loadErrorPanel|setDraftContent|setPreview|setPendingApply/, "custom-instructions 查询归属 不得持有 页面控制器, locale 格式化, busy 动作, or 弹窗状态"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "custom-instructions 查询归属 必须使用 module service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "custom-instructions 查询归属 必须保留 typed authoritative payloads"],
  ]);

  assertIncludes("src/features/custom-instructions/hooks/mutation.ts", mutation, [
    "useCustomInstructionMutations",
    "useMutation",
    "useQueryClient",
    "customInstructionsService.previewApply",
    "customInstructionsService.apply",
    "customInstructionsService.clearBlock",
    "customInstructionsService.rollback",
    "prepareCustomInstructionsMutation",
    "writeCustomInstructionsStateMutationPayload",
  ]);
  assertNotMatches("src/features/custom-instructions/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "custom-instructions 变更操作归属 不得持有 query"],
    [/\buse(State|Reducer|Effect|Memo|Callback)\b/, "custom-instructions 变更操作归属 不得持有 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "custom-instructions 变更操作归属 必须委托 mutation fence, cache 写入, query 取消, and 失效 to cache helper"],
    [/toast\(|useTranslation|useBusyAction|CustomInstructionsPageController|setDraftContent|setPreview|setPendingApply|previewOpen|clearOpen/, "custom-instructions 变更操作归属 不得持有 页面控制器, locale 格式化, busy 动作, or 弹窗状态"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "custom-instructions 变更操作归属 必须使用 module service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|useMutation<unknown|Promise<unknown>/, "custom-instructions 变更操作归属 必须保留 类型化 mutation payload"],
  ]);

  assertIncludes("src/features/custom-instructions/hooks/action.ts", action, [
    "useCustomInstructionPathActions",
    "customInstructionsService.openPath",
  ]);
  assertNotMatches("src/features/custom-instructions/hooks/action.ts", action, [
    [/\buse(Query|Mutation|QueryClient)\b/, "custom-instructions 动作归属 must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|runCustomInstructionsStateQuery|writeCustomInstructions|CUSTOM_INSTRUCTION_[A-Z0-9_]+_QUERY_KEY)\b/, "custom-instructions 动作归属 must not write cache or consume query keys"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "custom-instructions 动作归属 must not bypass service wrapper"],
    [/toast\(|useTranslation|useBusyAction|CustomInstructionsPageController|setDraftContent|setPreview|setPendingApply/, "custom-instructions 动作归属 不得持有 页面控制器 or UI feedback"],
  ]);

  assertIncludes("src/features/custom-instructions/hooks/page.ts", page, [
    "useCustomInstructionsPageController",
    "CustomInstructionsPageController",
    "useCustomInstructionQueries",
    "useCustomInstructionMutations",
    "useCustomInstructionPathActions",
    "useState",
    "useMemo",
    "useTranslation",
    "useBusyAction",
    "stateQuery.isError",
    "templatesQuery.isError",
    "loadErrorPanel",
  ]);
  assertNotMatches("src/features/custom-instructions/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "custom-instructions page/controller may compose split hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|runCustomInstructionsStateQuery|writeCustomInstructions|CUSTOM_INSTRUCTION_[A-Z0-9_]+_QUERY_KEY)\b/, "custom-instructions page/controller must not write cache, invalidate, cancel, or consume query keys"],
    [/@\/services\/custom-instructions|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|customInstructionsService\.|systemService\.|invokeIpc|invoke\(/, "custom-instructions page/controller must not access service/API/IPC directly"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|response\.data/, "custom-instructions page/controller must not use generic authoritative payloads"],
  ]);

  assertIncludes("src/features/custom-instructions/types/index.ts", types, [
    "export type CustomInstructionsStateQueryKey",
    "export type CustomInstructionsTemplatesQueryKey",
    "export type CustomInstructionsCachePayload",
    "export type CustomInstructionsCacheEnvelope",
    "export interface CustomInstructionsPageController",
  ]);
  assertIncludes("src/features/custom-instructions/types/index.ts", types, [
    "export interface CustomInstructionsHeaderPanelController",
    "export interface CustomInstructionsLoadErrorPanelController",
    "export interface CustomInstructionsConfigurePanelController",
    "export interface CustomInstructionsTemplatesPanelController",
    "export interface CustomInstructionsBodyPanelController",
    "export interface CustomInstructionsPreviewDialogController",
    "export interface CustomInstructionsClearDialogController",
  ]);
  assertNotMatches("src/features/custom-instructions/types/index.ts", types, [
    [/CustomInstructionsPageController\s*=\s*ReturnType|ReturnType<typeof useCustomInstructionsPageController>/, "custom-instructions controller contract must be explicit, not ReturnType"],
    [/CustomInstructionsCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "custom-instructions types owner 必须保留 typed cache payloads"],
  ]);

  assertIncludes("src/features/custom-instructions/cache/index.ts", cache, [
    "createModuleCacheOwner<CustomInstructionsCachePayload>(\"custom-instructions\")",
    "Omit<CustomInstructionsCacheEnvelope<TPayload>, \"moduleId\">",
    "CUSTOM_INSTRUCTION_STATE_QUERY_KEY",
    "CUSTOM_INSTRUCTION_TEMPLATES_QUERY_KEY",
    "writeCustomInstructionsAuthoritativePayload",
    "writeCustomInstructionsStatePayload",
    "runCustomInstructionsStateQuery",
    "prepareCustomInstructionsMutation",
    "writeCustomInstructionsStateMutationPayload",
    "beginCustomInstructionsMutationSequence",
    "invalidateCustomInstructionsContractQueries",
    "setQueryData<CustomInstructionStatePayload>",
  ]);
  if (
    !cache.includes("nextCustomInstructionsCacheSequence") ||
    !(
      cache.includes("customInstructionsLatestAcceptedSequence") ||
      cache.includes("sequence <")
    )
  ) {
    failures.push("src/features/custom-instructions/cache/index.ts must own sequence/stale/delayed response protection");
  }
  assertNotMatches("src/features/custom-instructions/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "custom-instructions cache owner 不得持有 React hooks"],
    [/@\/services\/custom-instructions|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|customInstructionsService\.|systemService\.|invokeIpc|invoke\(/, "custom-instructions cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("custom-instructions"\)|CustomInstructionsCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "custom-instructions cache owner 必须保留 typed payloads"],
  ]);

  if (controllerConsumerText.includes("ReturnType<typeof useCustomInstructionsPageController>")) {
    failures.push("src/features/custom-instructions panels/dialogs/components must consume explicit CustomInstructions controller types, not hook ReturnType");
  }
  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+CustomInstructions[A-Za-z]*(?:Controller|Props)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/custom-instructions panels/dialogs/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS custom-instructions deep owner gate executed: hooks/index, query, mutation, action, page, cache, types, panels/dialogs/components");
}

function validateMcpDeepOwnerBoundaries() {
  const mcpRoot = join(featuresRoot, "mcp");
  const hooksIndexPath = join(mcpRoot, "hooks", "index.ts");
  const queryPath = join(mcpRoot, "hooks", "query.ts");
  const mutationPath = join(mcpRoot, "hooks", "mutation.ts");
  const pagePath = join(mcpRoot, "hooks", "page.ts");
  const cachePath = join(mcpRoot, "cache", "index.ts");
  const sequencePath = join(mcpRoot, "cache", "sequence.ts");
  const typesPath = join(mcpRoot, "types", "index.ts");
  const panelPaths = [
    join(mcpRoot, "panels", "overview.tsx"),
    join(mcpRoot, "panels", "servers.tsx"),
    join(mcpRoot, "dialogs", "editor.tsx"),
    join(mcpRoot, "dialogs", "remove.tsx"),
  ];
  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const cacheSequence = existsSync(sequencePath) ? readRequired(sequencePath) : "";
  const types = readRequired(typesPath);
  const panelOwnerText = panelPaths.map((file) => readRequired(file)).join("\n");
  const cacheOwnerText = `${cache}\n${cacheSequence}`;

  const barrelRemainder = hooksIndex
    .replace(/export\s+(?:type\s+)?(?:\*|\{[\s\S]*?\})\s+from\s+["'][^"']+["'];?/g, "")
    .replace(/\/\/.*$/gm, "")
    .replace(/\/\*[\s\S]*?\*\//g, "")
    .trim();

  if (barrelRemainder) {
    failures.push("src/features/mcp/hooks/index.ts 只能作为 re-export barrel，不得包含 hook 实现、cache 写入或 页面控制器");
  }
  for (const ownerFile of ["query", "mutation", "page"]) {
    if (!hooksIndex.includes(`from "./${ownerFile}"`) && !hooksIndex.includes(`from './${ownerFile}'`)) {
      failures.push(`src/features/mcp/hooks/index.ts 必须 re-export ./${ownerFile} owner`);
    }
  }
  assertNotMatches("src/features/mcp/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "mcp hooks/index 只能聚合 re-export，不得 owning query/mutation/controller"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "mcp hooks/index 不得 owning TanStack cache 操作"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "mcp hooks/index 不得直接拼底层 IPC transport"],
  ]);

  assertIncludes("src/features/mcp/hooks/query.ts", query, [
    "useQuery",
    "useQueryClient",
    "MCP_SERVERS_QUERY_KEY",
    "mcpService.loadServers",
    "writeMcpCachePayload",
  ]);
  assertNotMatches("src/features/mcp/hooks/query.ts", query, [
    [/\buseMutation\b/, "mcp 查询归属 不得 owning mutation"],
    [/\buse(State|Reducer)\b/, "mcp 查询归属 不得 owning 页面短生命周期 UI state"],
    [/\b(setQueryData|cancelQueries)\b/, "mcp 查询归属 不得 owning mutation cache 写入或取消"],
    [/toast\(|navigator\.clipboard/, "mcp 查询归属 不得 owning toast 或剪贴板 UI 组合"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "mcp 查询归属 必须经 mcp service wrapper，不得直接拼 IPC"],
  ]);

  assertIncludes("src/features/mcp/hooks/mutation.ts", mutation, [
    "useMutation",
    "useQueryClient",
    "mcpService.setServerEnabled",
    "mcpService.removeServer",
    "mcpService.upsertServer",
    "prepareMcpMutation",
    "writeMcpMutationPayload",
  ]);
  assertNotMatches("src/features/mcp/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "mcp 变更操作归属 不得 owning query"],
    [/\buse(State|Reducer|Effect|Memo)\b/, "mcp 变更操作归属 不得 owning 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "mcp 变更操作归属 必须把 mutation fence、cache 写入、失效和取消交给 cache helper"],
    [/toast\(|navigator\.clipboard/, "mcp 变更操作归属 不得 owning toast 或剪贴板 UI 组合"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "mcp 变更操作归属 必须经 mcp service wrapper，不得直接拼 IPC"],
  ]);

  assertIncludes("src/features/mcp/hooks/page.ts", page, [
    "useMcpPageController",
    "McpPageController",
    "useState",
    "createMcpServerFormDraft",
    "getMcpPagination",
    "useMcpServers",
    "useMcpServerMutations",
    "useUpsertMcpServerMutation",
    "toast",
  ]);
  assertNotMatches("src/features/mcp/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "mcp page/controller 只能组合 query/mutation hook，不得直接 owning TanStack"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "mcp page/controller 不得直接写 cache、失效 query 或取消 query"],
    [/@\/services\/mcp|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "mcp page/controller 不得直接拼底层 IPC transport 或 service wrapper"],
  ]);
  assertIncludes("src/features/mcp/types/index.ts", types, [
    "export interface McpPageController",
    "export interface McpOverviewController",
    "export interface McpServersController",
    "export interface McpPaginationController",
    "export interface McpEditorController",
    "export interface McpRemoveController",
  ]);
  if (panelOwnerText.includes("ReturnType<typeof useMcpPageController>") || panelOwnerText.includes("../hooks")) {
    failures.push("src/features/mcp/panels 和 dialogs 必须消费 types controller 合同，不得反向依赖 hooks ReturnType");
  }

  assertIncludes("src/features/mcp/cache/index.ts", cache, [
    "createModuleCacheOwner<McpCachePayload>(\"mcp\")",
    "MCP_SERVERS_QUERY_KEY",
    "writeMcpAuthoritativePayload",
    "writeMcpCachePayload",
    "prepareMcpMutation",
    "writeMcpMutationPayload",
    "beginMcpMutationSequence",
    "setQueryData<McpListEnvelope>",
    "invalidateMcpContractQueries",
    "invalidateQueries({ queryKey: MCP_SERVERS_QUERY_KEY })",
  ]);
  if (
    !cacheOwnerText.includes("nextMcpCacheSequence") ||
    !(
      cacheOwnerText.includes("acceptMcpCacheSequence") ||
      cacheOwnerText.includes("mcpLatestAcceptedSequence") ||
      cacheOwnerText.includes("sequence <")
    )
  ) {
    failures.push("src/features/mcp/cache/index.ts 必须托管 mutation payload sequence 或等价 stale/delayed response 防护");
  }
  assertNotMatches("src/features/mcp/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "mcp cache owner 不得 owning React hook"],
    [/@\/services\/mcp|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "mcp cache owner 不得直接拼 IPC 或调用 service"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "mcp cache owner 必须保留 typed payload"],
  ]);

  console.log("PASS mcp 深层 owner 边界门禁已执行：hooks/index、query、mutation、page、cache");
}

function validatePluginsDeepOwnerBoundaries() {
  const pluginsRoot = join(featuresRoot, "plugins");
  const hooksIndexPath = join(pluginsRoot, "hooks", "index.ts");
  const queryPath = join(pluginsRoot, "hooks", "query.ts");
  const refreshPath = join(pluginsRoot, "hooks", "refresh.ts");
  const mutationPath = join(pluginsRoot, "hooks", "mutation.ts");
  const pagePath = join(pluginsRoot, "hooks", "page.ts");
  const cachePath = join(pluginsRoot, "cache", "index.ts");
  const sequencePath = join(pluginsRoot, "cache", "sequence.ts");
  const typesPath = join(pluginsRoot, "types", "index.ts");
  const componentPagePath = join(pluginsRoot, "components", "page.tsx");
  const panelPagePath = join(pluginsRoot, "panels", "page.tsx");
  const dialogsIndexPath = join(pluginsRoot, "dialogs", "index.ts");
  const panelPaths = [
    ...walkFiles(join(pluginsRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(pluginsRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const refresh = readRequired(refreshPath);
  const mutation = readRequired(mutationPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const cacheSequence = existsSync(sequencePath) ? readRequired(sequencePath) : "";
  const types = readRequired(typesPath);
  const componentPage = readRequired(componentPagePath);
  const panelPage = readRequired(panelPagePath);
  const dialogsIndex = readRequired(dialogsIndexPath);
  const panelOwnerText = panelPaths.map((file) => readRequired(file)).join("\n");
  const cacheOwnerText = `${cache}\n${cacheSequence}`;
  const forbiddenPluginsConfigOwnerSignals = [
    "usePluginConfigQuery",
    "usePluginsConfigMutation",
    "pluginsService.getConfig",
    "pluginsService.updateConfig",
    "getPluginsConfigQueryKey",
    "writePluginsConfigQueryPayload",
    "beginPluginsConfigMutation",
    "rollbackPluginsConfig",
    "PluginsConfigSection",
    "pluginConfigQueryKey",
    "getPluginConfig",
    "updatePluginConfig",
  ];
  const pluginsConfigOwnerTargets = [
    ["src/features/plugins/hooks/index.ts", hooksIndex],
    ["src/features/plugins/hooks/query.ts", query],
    ["src/features/plugins/hooks/refresh.ts", refresh],
    ["src/features/plugins/hooks/mutation.ts", mutation],
    ["src/features/plugins/hooks/page.ts", page],
    ["src/features/plugins/cache/index.ts", cache],
    ["src/features/plugins/components/page.tsx", componentPage],
    ["src/features/plugins/panels 和 dialogs", panelOwnerText],
    ["src/features/plugins/dialogs/index.ts", dialogsIndex],
  ];

  for (const [file, content] of pluginsConfigOwnerTargets) {
    for (const signal of forbiddenPluginsConfigOwnerSignals) {
      if (content.includes(signal)) {
        failures.push(`${file} 缺少可见配置 UI 证据，不得提升 config owner 信号：${signal}`);
      }
    }
  }

  assertOnlyBarrelReExports("src/features/plugins/hooks/index.ts", hooksIndex, [
    "query",
    "refresh",
    "mutation",
    "page",
  ]);
  assertNotMatches("src/features/plugins/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "plugins hooks/index 只能聚合 re-export，不得 owning query/mutation/controller"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "plugins hooks/index 不得 owning TanStack cache 操作"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "plugins hooks/index 不得直接拼底层 IPC transport"],
  ]);

  assertIncludes("src/features/plugins/hooks/query.ts", query, [
    "useQuery",
    "useQueryClient",
    "useModuleCacheController",
    "PluginsCache",
    "PLUGINS_LIST_QUERY_KEY",
    "pluginsService.list",
    "writePluginsListQueryPayload",
  ]);
  assertNotMatches("src/features/plugins/hooks/query.ts", query, [
    [/\buseMutation\b/, "plugins 查询归属 不得 owning mutation 或 refresh mutation"],
    [/\buse(State|Reducer)\b/, "plugins 查询归属 不得 owning 页面短生命周期 UI state"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "plugins 查询归属 不得 owning cache 写入、失效或取消"],
    [/toast\(|useToast|navigator\.clipboard/, "plugins 查询归属 不得 owning toast 或 UI 组合"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "plugins 查询归属 必须经 plugins service wrapper，不得直接拼 IPC"],
  ]);

  assertIncludes("src/features/plugins/hooks/refresh.ts", refresh, [
    "useMutation",
    "useQueryClient",
    "pluginsService.list",
    "nextPluginsCacheSequence",
    "writePluginsRefreshPayload",
  ]);
  if (!/nextPluginsCacheSequence\(\)[\s\S]*pluginsService\.list\(\)/.test(refresh)) {
    failures.push("src/features/plugins/hooks/refresh.ts 必须在请求发起前分配 refresh sequence");
  }
  assertNotMatches("src/features/plugins/hooks/refresh.ts", refresh, [
    [/\buseQuery\b/, "plugins refresh owner 不得 owning list query"],
    [/\buse(State|Reducer|Effect|Memo)\b/, "plugins refresh owner 不得 owning 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "plugins refresh owner 必须把 cache 写入、失效和取消交给 cache helper"],
    [/writePluginsMutationPayload|optimisticallyUpdatePluginsToggle|rollbackPluginsToggle/, "plugins refresh owner 不得 owning toggle mutation payload、optimistic 更新 或 rollback"],
    [/pluginsService\.(getConfig|updateConfig)|getPluginConfig|updatePluginConfig/, "plugins refresh owner 不得消费 config service"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "plugins refresh owner 必须经 plugins service wrapper，不得直接拼 IPC"],
  ]);

  assertIncludes("src/features/plugins/hooks/mutation.ts", mutation, [
    "useMutation",
    "useQueryClient",
    "pluginsService.toggle",
    "optimisticallyUpdatePluginsToggle",
    "rollbackPluginsToggle",
    "writePluginsMutationPayload",
  ]);
  assertNotMatches("src/features/plugins/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "plugins 变更操作归属 不得 owning query"],
    [/\buse(State|Reducer|Effect|Memo)\b/, "plugins 变更操作归属 不得 owning 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "plugins 变更操作归属 必须把 optimistic 更新、rollback、cache 写入和失效交给 cache helper"],
    [/writePluginsRefreshPayload|pluginsService\.list/, "plugins 变更操作归属 不得 owning refresh/list 请求"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "plugins 变更操作归属 必须经 plugins service wrapper，不得直接拼 IPC"],
  ]);

  assertIncludes("src/features/plugins/hooks/page.ts", page, [
    "usePluginsPageController",
    "PluginsPageController",
    "usePluginsListQuery",
    "usePluginsRefreshMutation",
    "usePluginsToggleMutation",
    "refreshAction",
    "togglePlugin",
  ]);
  assertNotMatches("src/features/plugins/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "plugins page/controller 只能组合 query/refresh/mutation hook，不得直接 owning TanStack"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|nextPluginsCacheSequence|writePlugins|PLUGINS_LIST_QUERY_KEY)\b/, "plugins page/controller 不得直接写 cache、失效 query、分配 sequence 或消费 query key"],
    [/@\/services\/plugins|@\/services\/runtime-extensions|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|pluginsService|invokeIpc|invoke\(/, "plugins page/controller 不得直接访问 service、API 或 IPC"],
  ]);

  assertIncludes("src/features/plugins/types/index.ts", types, [
    "export interface PluginsPageController",
    "export interface PluginsPageAction",
    "export interface PluginsTogglePluginAction",
    "export interface PluginsPagePanelProps",
    "pluginsQuery",
    "refreshAction",
    "togglePlugin",
  ]);
  if (
    panelOwnerText.includes("ReturnType<typeof usePluginsPageController>") ||
    panelOwnerText.includes("../hooks")
  ) {
    failures.push("src/features/plugins/panels 和 dialogs 必须消费 types controller 合同，不得反向依赖 hooks ReturnType");
  }

  assertIncludes("src/features/plugins/cache/index.ts", cache, [
    "createModuleCacheOwner<PluginsCachePayload>(\"plugins\")",
    "PLUGINS_LIST_QUERY_KEY",
    "writePluginsAuthoritativePayload",
    "writePluginsListQueryPayload",
    "writePluginsRefreshPayload",
    "optimisticallyUpdatePluginsToggle",
    "rollbackPluginsToggle",
    "writePluginsMutationPayload",
    "invalidatePluginsContractQueries",
    "invalidateQueries({ queryKey: PLUGINS_LIST_QUERY_KEY })",
  ]);
  if (
    !cacheOwnerText.includes("nextPluginsCacheSequence") ||
    !(
      cacheOwnerText.includes("pluginsLatestAcceptedSequence") ||
      cacheOwnerText.includes("acceptPluginsCacheSequence") ||
      cacheOwnerText.includes("sequence <")
    )
  ) {
    failures.push("src/features/plugins/cache/index.ts 或 cache/sequence.ts 必须托管 sequence/stale/delayed response 防护");
  }
  assertNotMatches("src/features/plugins/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "plugins cache owner 不得 owning React hook"],
    [/@\/services\/plugins|@\/services\/runtime-extensions|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "plugins cache owner 不得直接拼 IPC 或调用 service"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "plugins cache owner 必须保留 typed payload"],
  ]);

  assertIncludes("src/features/plugins/panels/page.tsx", panelPage, [
    "Button",
    "Switch",
    "PluginsPageHeader",
    "controller.refreshAction",
    "PluginsListSection",
    "PluginRows",
    "controller.togglePlugin.run",
  ]);

  console.log("PASS plugins 深层 owner 边界门禁已执行：list/toggle/refresh owner 保留，config UI owner 未提升");
}

function validateRuntimeExtensionsPluginsOwnerMerge() {
  const runtimeExtensionsFeatureRoot = join(featuresRoot, "runtime-extensions");
  const runtimeExtensionsServicePath = join(servicesRoot, "runtime-extensions", "index.ts");
  const pluginsServicePath = join(servicesRoot, "plugins", "index.ts");
  const runtimeFeatureFiles = walkFiles(runtimeExtensionsFeatureRoot, (file) =>
    /\.(ts|tsx)$/.test(file),
  );
  const forbiddenFeatureOwnerEntries = [
    "Provider.tsx",
    "StoreUpdater.tsx",
    "Content.tsx",
    "cache",
    "hooks",
    "dialogs",
    "panels",
    "components",
    "store",
    "types",
  ];
  const forbiddenPluginServiceSignals = [
    "@/contracts/ipc",
    "invokeIpc",
    '"list_plugins"',
    '"toggle_plugin"',
    '"get_plugin_config"',
    '"update_plugin_config"',
  ];

  if (runtimeFeatureFiles.length > 0) {
    failures.push(
      `src/features/runtime-extensions 不得新增 TS/TSX 可见 模块归属 文件：${runtimeFeatureFiles.map(repoPath).join(", ")}`,
    );
  }

  for (const entry of forbiddenFeatureOwnerEntries) {
    if (existsSync(join(runtimeExtensionsFeatureRoot, entry))) {
      failures.push(`src/features/runtime-extensions/${entry} 会形成重复 模块归属，当前可见 owner 只能是 plugins`);
    }
  }

  const runtimeAgents = readRequired(join(runtimeExtensionsFeatureRoot, "AGENTS.md"));
  assertIncludes("src/features/runtime-extensions/AGENTS.md", runtimeAgents, [
    "runtime-extensions 是 IPC domain 和 service 能力边界",
    "不作为可见 模块归属",
    "plugins 是当前 runtime extension 可见页面",
  ]);
  assertNotMatches("src/features/runtime-extensions/AGENTS.md", runtimeAgents, [
    [/唯一 模块归属/, "runtime-extensions feature 规则不得再声明自己是可见 模块归属"],
  ]);

  const runtimeService = readRequired(runtimeExtensionsServicePath);
  assertIncludes("src/services/runtime-extensions/index.ts", runtimeService, [
    "invokeIpc",
    '"list_plugins"',
    '"toggle_plugin"',
    '"get_plugin_config"',
    '"update_plugin_config"',
    "runtimeExtensionsService",
  ]);

  const pluginsService = readRequired(pluginsServicePath);
  assertIncludes("src/services/plugins/index.ts", pluginsService, [
    "@/services/runtime-extensions",
    "runtimeExtensionsService.listPlugins",
    "runtimeExtensionsService.togglePlugin",
    "runtimeExtensionsService.getPluginConfig",
    "runtimeExtensionsService.updatePluginConfig",
  ]);
  for (const signal of forbiddenPluginServiceSignals) {
    if (pluginsService.includes(signal)) {
      failures.push(`src/services/plugins/index.ts 只能作为 visible wrapper，不得重复拼 runtime-extensions IPC：${signal}`);
    }
  }

  console.log("PASS runtime-extensions/plugins owner 合并门禁已执行：runtime-extensions 只保留 IPC/service 能力边界");
}

function validateTrayShellDeepOwnerBoundaries() {
  const trayShellRoot = join(featuresRoot, "tray-shell");
  const hooksIndexPath = join(trayShellRoot, "hooks", "index.ts");
  const queryPath = join(trayShellRoot, "hooks", "query.ts");
  const mutationPath = join(trayShellRoot, "hooks", "mutation.ts");
  const pagePath = join(trayShellRoot, "hooks", "page.ts");
  const actionPath = join(trayShellRoot, "hooks", "action.ts");
  const cachePath = join(trayShellRoot, "cache", "index.ts");
  const typesPath = join(trayShellRoot, "types", "index.ts");
  const panelPaths = walkFiles(join(trayShellRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file));

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const types = readRequired(typesPath);
  const panelOwnerText = panelPaths.map((file) => readRequired(file)).join("\n");

  assertOnlyBarrelReExports("src/features/tray-shell/hooks/index.ts", hooksIndex, [
    "query",
    "mutation",
    "page",
  ]);
  if (existsSync(actionPath)) {
    failures.push("src/features/tray-shell/hooks/action.ts 不得保留独立 动作归属；focus main window action 必须归 hooks/mutation.ts");
  }
  assertNotMatches("src/features/tray-shell/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "tray-shell hooks/index 只能聚合 re-export，不得 owning query/mutation/controller"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "tray-shell hooks/index 不得 owning TanStack cache 操作"],
    [/@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "tray-shell hooks/index 不得直接访问 service、API 或 IPC"],
  ]);

  assertIncludes("src/features/tray-shell/hooks/query.ts", query, [
    "useTrayShellCacheController",
    "useModuleCacheController(TrayShellCache)",
    "useTrayShellNotificationQuery",
    "useQuery<TrayShellNotificationEnvelope>",
    "useQueryClient",
    "TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY",
    "runTrayShellQuery(",
    "systemService.getNotificationClientState()",
  ]);
  if (
    /const\s+TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY/.test(query) ||
    query.includes("TrayShellQueryKeys")
  ) {
    failures.push("src/features/tray-shell/hooks/query.ts 不得重复声明 tray-shell query key，必须消费 cache owner 导出的 key");
  }
  assertNotMatches("src/features/tray-shell/hooks/query.ts", query, [
    [/\buseMutation\b/, "tray-shell 查询归属 只能 owning cache controller 和 notification query"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "tray-shell 查询归属 不得 owning mutation cache 写入、失效或取消"],
    [/systemService\.focusMainWindow|focus-main-window|TrayShellActionModel/, "tray-shell 查询归属 不得 owning focus main window action"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "tray-shell 查询归属 必须经 system service wrapper，不得直接拼 IPC"],
  ]);

  assertIncludes("src/features/tray-shell/hooks/mutation.ts", mutation, [
    "useTrayShellFocusMainWindowMutation",
    "useTrayShellFocusMainWindowAction",
    "TrayShellActionModel",
    "useMutation",
    "useQueryClient",
    "systemService.focusMainWindow()",
    "prepareTrayShellCommandAckFence(queryClient)",
    "invalidateTrayShellCommandAckFence(queryClient)",
  ]);
  assertNotMatches("src/features/tray-shell/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "tray-shell 变更操作归属 不得 owning notification query"],
    [/\buse(State|Reducer|Effect|Memo)\b/, "tray-shell 变更操作归属 不得 owning 页面/控制器 UI 状态"],
    [/systemService\.getNotificationClientState|TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY/, "tray-shell 变更操作归属 不得 owning notification query service 或 query key"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "tray-shell 变更操作归属 必须经 system service wrapper，不得直接拼 IPC"],
  ]);

  assertIncludes("src/features/tray-shell/hooks/page.ts", page, [
    "useTrayShellPageController",
    "TrayShellPageController",
    "useTrayShellNotificationQuery",
    "useTrayShellFocusMainWindowAction",
    "selectTrayShellClient",
    "selectTrayShellReady",
  ]);
  assertNotMatches("src/features/tray-shell/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "tray-shell page/controller 只能组合 query/mutation hook，不得直接 owning TanStack"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY|TrayShellCache)\b/, "tray-shell page/controller 不得直接写 cache、失效 query 或消费 query key/cache owner"],
    [/@\/services\/system|systemService\.|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "tray-shell page/controller 不得直接访问 service、API 或 IPC"],
  ]);

  assertIncludes("src/features/tray-shell/types/index.ts", types, [
    "export interface TrayShellPageController",
    "export type TrayShellMetricModel",
    "export type TrayShellRuntimeRowModel",
    "export interface TrayShellRuntimePanelModel",
    "export interface TrayShellActionModel",
    "export type TrayShellCachePayload",
    "export type TrayShellCacheEnvelope",
  ]);
  assertNotMatches("src/features/tray-shell/types/index.ts", types, [
    [/TrayShellCacheEnvelope<TPayload = unknown>|payload:\s*unknown/, "tray-shell types owner 必须保留 typed payload"],
    [/id:\s*string|labelKey:\s*string/, "tray-shell action/metric/runtime model 不得回退宽泛 string contract"],
  ]);

  assertIncludes("src/features/tray-shell/cache/index.ts", cache, [
    "createModuleCacheOwner<TrayShellCachePayload>(\"tray-shell\")",
    "Omit<TrayShellCacheEnvelope<TPayload>, \"moduleId\">",
    "TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY",
    "writeTrayShellQueryPayload",
    "runTrayShellQuery",
    "prepareTrayShellCommandAckFence",
    "beginTrayShellCommandFence",
    "trayShellMutationFences",
    "canAcceptTrayShellPayload",
    "queryClient.cancelQueries({ queryKey })",
    "source === \"mutation-payload\"",
    "sequence >= mutationFence",
    "invalidateTrayShellContractQueries",
  ]);
  assertNotMatches("src/features/tray-shell/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "tray-shell cache owner 不得 owning React hook"],
    [/@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "tray-shell cache owner 不得直接访问 service、API 或 IPC"],
    [/createModuleCacheOwner\("tray-shell"\)|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "tray-shell cache owner 必须保留 typed payload"],
  ]);

  if (panelOwnerText.includes("ReturnType<typeof useTrayShellPageController>") || panelOwnerText.includes("../hooks")) {
    failures.push("src/features/tray-shell/panels 必须消费 types controller 合同，不得反向依赖 hooks ReturnType");
  }

  console.log("PASS tray-shell 深层 owner 边界门禁已执行：hooks/index、query、mutation、page、cache、types、panels");
}

function validateSettingsDeepOwnerBoundaries() {
  const settingsRoot = join(featuresRoot, "settings");
  const hooksIndexPath = join(settingsRoot, "hooks", "index.ts");
  const queryPath = join(settingsRoot, "hooks", "query.ts");
  const mutationPath = join(settingsRoot, "hooks", "mutation.ts");
  const actionPath = join(settingsRoot, "hooks", "action.ts");
  const pagePath = join(settingsRoot, "hooks", "page.ts");
  const cachePath = join(settingsRoot, "cache", "index.ts");
  const typesPath = join(settingsRoot, "types", "index.ts");
  const legacyProxyComponentPath = join(settingsRoot, "components", "proxy.tsx");
  const settingsPageComponentPath = join(settingsRoot, "components", "page.tsx");
  const proxyDialogPath = join(settingsRoot, "dialogs", "proxy.tsx");
  const controllerConsumerPaths = [
    ...walkFiles(join(settingsRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(settingsRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(settingsRoot, "components"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const action = readRequired(actionPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const types = readRequired(typesPath);
  const settingsPageComponent = readRequired(settingsPageComponentPath);
  const proxyDialog = readRequired(proxyDialogPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((file) => readRequired(file))
    .join("\n");

  if (existsSync(legacyProxyComponentPath)) {
    failures.push("src/features/settings/components/proxy.tsx must not exist; API proxy dialog owner is src/features/settings/dialogs/proxy.tsx");
  }
  assertIncludes("src/features/settings/components/page.tsx", settingsPageComponent, [
    'import { SettingsApiProxyDialog, SettingsThresholdDialog } from "../dialogs";',
    "<SettingsApiProxyDialog controller={controller} />",
  ]);
  assertNotMatches("src/features/settings/components/page.tsx", settingsPageComponent, [
    [/components\/proxy|\bApiProxyDialog\b/, "settings page must not import legacy API proxy component"],
  ]);
  assertIncludes("src/features/settings/dialogs/proxy.tsx", proxyDialog, [
    'import type { SettingsControllerProps } from "../types";',
    "export function SettingsApiProxyDialog",
    "}: SettingsControllerProps)",
    "controller.proxyDialog",
    "controller.actions.detectProxy",
    "controller.actions.testProxy",
    "controller.actions.saveProxy",
  ]);
  assertNotMatches("src/features/settings/dialogs/proxy.tsx", proxyDialog, [
    [/useApiProxyMutations|useBusyAction|toast\(/, "settings API proxy dialog must consume controller state/actions, not own mutations, busy 动作, or toast"],
    [/@\/services\/settings|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "settings API proxy dialog must not access service/API/IPC directly"],
  ]);

  assertOnlyBarrelReExports("src/features/settings/hooks/index.ts", hooksIndex, [
    "query",
    "mutation",
    "action",
    "page",
  ]);
  assertNotMatches("src/features/settings/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "settings hooks/index can only re-export split owners"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|beginSettingsMutation|writeSettings)/, "settings hooks/index 不得持有 cache 写入"],
    [/@\/services\/settings|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "settings hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/settings/hooks/query.ts", query, [
    "useSettingsCacheController",
    "useModuleCacheController(SettingsCache)",
    "useQuery",
    "useQueryClient",
    "runSettingsQuery",
    "settingsService.loadSnapshot",
    "settingsService.hasNotch",
    "settingsService.getHotspotEnabled",
    "settingsService.getImageCompat",
    "settingsService.getUsageRefreshInterval",
    "settingsService.getAppVersion",
    "SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY",
    "SETTINGS_HAS_NOTCH_QUERY_KEY",
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "SETTINGS_IMAGE_COMPAT_QUERY_KEY",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
  ]);
  assertNotMatches("src/features/settings/hooks/query.ts", query, [
    [/\buseMutation\b/, "settings 查询归属 不得持有 mutation"],
    [/\buseReducer\b/, "settings 查询归属 不得持有 page/controller reducer state"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|beginSettingsMutation|writeSettingsMutationPayload)\b/, "settings 查询归属 必须委托 cache 写入 and mutation fences"],
    [/toast\(|useBusyAction/, "settings 查询归属 不得持有 toast or busy UI actions"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "settings 查询归属 必须使用 settings service wrapper, 不得直接使用 IPC/API transport"],
  ]);

  assertIncludes("src/features/settings/hooks/mutation.ts", mutation, [
    "useMutation",
    "useQueryClient",
    "settingsService.setAutoSwitch",
    "settingsService.configureAutoSwitch",
    "settingsService.setHotspotEnabled",
    "settingsService.hotspotReady",
    "settingsService.setImageCompat",
    "setUsageRefreshInterval",
    "settingsService.setApiProxyConfig",
    "settingsService.testApiProxyConfig",
    "settingsService.detectApiProxyConfig",
    "settingsService.checkUpdateInstallability",
    "beginSettingsMutation",
    "writeSettingsMutationPayload",
  ]);
  assertNotMatches("src/features/settings/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "settings 变更操作归属 不得持有 query"],
    [/\buse(State|Reducer|Effect|Memo)\b/, "settings 变更操作归属 不得持有 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries)\b/, "settings 变更操作归属 必须委托 cache 写入 and 失效 to cache helper"],
    [/toast\(|useBusyAction/, "settings 变更操作归属 不得持有 toast or busy UI actions"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "settings 变更操作归属 必须使用 settings service wrapper, 不得直接使用 IPC/API transport"],
  ]);

  assertIncludes("src/features/settings/hooks/action.ts", action, [
    "useSettingsBusyActions",
    "useBusyAction",
    "updateCheckAction",
    "detectProxyAction",
    "testProxyAction",
    "saveProxyAction",
  ]);
  assertNotMatches("src/features/settings/hooks/action.ts", action, [
    [/\buse(Query|Mutation|QueryClient)\b/, "settings 动作归属 may compose module hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|beginSettingsMutation|writeSettings|SETTINGS_[A-Z0-9_]+_QUERY_KEY)\b/, "settings 动作归属 must not write cache or consume query keys"],
    [/@\/services\/settings|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|settingsService\.|systemService\.|invokeIpc|invoke\(/, "settings 动作归属 must not access service/API/IPC directly"],
  ]);

  assertIncludes("src/features/settings/hooks/page.ts", page, [
    "useSettingsPageController",
    "SettingsPageController",
    "SettingsPageProps",
    "useState",
  ]);
  assertNotMatches("src/features/settings/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "settings page/controller may compose query/mutation/action hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|beginSettingsMutation|writeSettings|SETTINGS_[A-Z0-9_]+_QUERY_KEY)\b/, "settings page/controller must not write cache or consume query keys"],
    [/@\/services\/settings|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|settingsService\.|systemService\.|invokeIpc|invoke\(/, "settings page/controller must not access service/API/IPC directly"],
  ]);

  assertIncludes("src/features/settings/types/index.ts", types, [
    "export interface SettingsPageController",
    "export interface SettingsStatusController",
    "export interface SettingsAppearanceController",
    "export interface SettingsModeSwitchController",
    "export interface SettingsAboutController",
    "export interface SettingsThresholdDialogController",
    "export interface SettingsProxyDialogController",
    "export interface SettingsPageActions",
    "export interface SettingsControllerProps",
    "export type SettingsCachePayload",
    "export type SettingsCacheEnvelope",
  ]);
  assertNotMatches("src/features/settings/types/index.ts", types, [
    [/SettingsPageController\s*=\s*ReturnType|ReturnType<typeof useSettingsPageController>/, "settings controller contract must be explicit, not ReturnType"],
    [/SettingsCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "settings types owner 必须保留 typed cache payloads"],
  ]);

  assertIncludes("src/features/settings/cache/index.ts", cache, [
    "createModuleCacheOwner<SettingsCachePayload>(\"settings\")",
    "Omit<SettingsCacheEnvelope<TPayload>, \"moduleId\">",
    "SETTINGS_RUNTIME_EVENT_TARGET_QUERY_KEYS",
    "SettingsCache.queryKeys.root",
    "SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY",
    "SETTINGS_HAS_NOTCH_QUERY_KEY",
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "SETTINGS_IMAGE_COMPAT_QUERY_KEY",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "TKey extends SettingsWritableQueryKey",
    "SettingsQueryPayloadForKey<TKey>",
    "writeSettingsAuthoritativePayload",
    "writeSettingsQueryPayload",
    "runSettingsQuery",
    "beginSettingsMutation",
    "writeSettingsMutationPayload",
    "invalidateSettingsContractQueries",
    "queryClient.setQueryData<SettingsQueryPayloadForKey<TKey>>",
    "SettingsCache.invalidateContractQueries(queryClient)",
  ]);
  if (!cache.includes("settingsMutationFences") || !cache.includes("canAcceptSettingsPayload")) {
    failures.push("src/features/settings/cache/index.ts must own mutation fences and stale/delayed response acceptance");
  }
  assertNotMatches("src/features/settings/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "settings cache owner 不得持有 React hooks"],
    [/@\/services\/settings|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "settings cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("settings"\)|SettingsCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "settings cache owner 必须保留 typed payloads"],
  ]);

  const runtimeEvents = readRequired(join(srcRoot, "app", "runtime", "events.ts"));
  assertIncludes("src/app/runtime/events.ts", runtimeEvents, [
    "SETTINGS_RUNTIME_EVENT_TARGET_QUERY_KEYS",
    "settings: runtimeModuleQueryKeys(...SETTINGS_RUNTIME_EVENT_TARGET_QUERY_KEYS)",
  ]);
  assertNotMatches("src/app/runtime/events.ts", runtimeEvents, [
    [/SettingsCache\.queryKeys\.root/, "runtime events must consume settings cache owner target list instead of settings root directly"],
    [/\bSETTINGS_(?:RUNTIME_STATE_DISPLAY|HAS_NOTCH|HOTSPOT_ENABLED|IMAGE_COMPAT|USAGE_REFRESH_INTERVAL)_QUERY_KEY\b/, "runtime events must not consume settings bare query keys directly"],
  ]);

  if (controllerConsumerText.includes("ReturnType<typeof useSettingsPageController>")) {
    failures.push("src/features/settings panels/dialogs/components must consume explicit Settings controller types, not hook ReturnType");
  }
  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+Settings[A-Za-z]*(?:Controller|Props)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/settings panels/dialogs/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS settings deep owner gate executed: hooks/index, query, mutation, action, page, cache, types, panels/dialogs/components");
}

function validateSkillsDeepOwnerBoundaries() {
  const skillsRoot = join(featuresRoot, "skills");
  const hooksIndexPath = join(skillsRoot, "hooks", "index.ts");
  const queryPath = join(skillsRoot, "hooks", "query.ts");
  const mutationPath = join(skillsRoot, "hooks", "mutation.ts");
  const pagePath = join(skillsRoot, "hooks", "page.ts");
  const cachePath = join(skillsRoot, "cache", "index.ts");
  const sequencePath = join(skillsRoot, "cache", "sequence.ts");
  const typesPath = join(skillsRoot, "types", "index.ts");
  const controllerConsumerPaths = [
    ...walkFiles(join(skillsRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(skillsRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(skillsRoot, "components"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const cacheSequence = existsSync(sequencePath) ? readRequired(sequencePath) : "";
  const types = readRequired(typesPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((file) => readRequired(file))
    .join("\n");
  const cacheOwnerText = `${cache}\n${cacheSequence}`;

  assertOnlyBarrelReExports("src/features/skills/hooks/index.ts", hooksIndex, [
    "query",
    "mutation",
    "page",
  ]);
  assertNotMatches("src/features/skills/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "skills hooks/index can only re-export split owners"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|nextSkillsCacheSequence|writeSkills)/, "skills hooks/index 不得持有 cache 写入 or sequence"],
    [/@\/services\/skills|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|skillsService\.|invokeIpc|invoke\(/, "skills hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/skills/hooks/query.ts", query, [
    "useSkillsCacheController",
    "useModuleCacheController(SkillsCache)",
    "useQuery",
    "useQueryClient",
    "SKILLS_INSTALLED_QUERY_KEY",
    "SKILLS_BACKUPS_QUERY_KEY",
    "skillsService.loadInstalled",
    "skillsService.loadBackups",
    "writeSkillsCachePayload",
  ]);
  assertNotMatches("src/features/skills/hooks/query.ts", query, [
    [/\buseMutation\b/, "skills 查询归属 不得持有 mutation"],
    [/\buse(State|Reducer)\b/, "skills 查询归属 不得持有 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|writeSkillsMutationPayload)\b/, "skills 查询归属 必须委托 cache 写入, 失效, and mutation payloads"],
    [/toast\(|navigator\.clipboard/, "skills 查询归属 不得持有 toast or 剪贴板 UI"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "skills 查询归属 必须使用 skills service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "skills 查询归属 必须保留 typed authoritative payloads"],
  ]);

  assertIncludes("src/features/skills/hooks/mutation.ts", mutation, [
    "useMutation",
    "useQueryClient",
    "skillsService.pickSkillDirectory",
    "skillsService.importSkill",
    "skillsService.removeSkill",
    "skillsService.restoreBackup",
    "skillsService.deleteBackup",
    "prepareSkillsMutation",
    "writeSkillsMutationPayload",
  ]);
  if (!/skillsService\.pickSkillDirectory\(\)[\s\S]*return null;[\s\S]*if \(payload\)[\s\S]*writeSkillsMutationPayload\(queryClient, payload, context\)/.test(mutation)) {
    failures.push("src/features/skills/hooks/mutation.ts 必须保留 import cancel as silent null no-op before writeSkillsMutationPayload");
  }
  assertNotMatches("src/features/skills/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "skills 变更操作归属 不得持有 query"],
    [/\buse(State|Reducer|Effect|Memo)\b/, "skills 变更操作归属 不得持有 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "skills 变更操作归属 必须委托 mutation fence, cache 写入, query 取消, and 失效 to cache helper"],
    [/toast\(|navigator\.clipboard/, "skills 变更操作归属 不得持有 toast or 剪贴板 UI"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "skills 变更操作归属 必须使用 skills service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "skills 变更操作归属 必须保留 类型化 mutation payload"],
  ]);

  assertIncludes("src/features/skills/hooks/page.ts", page, [
    "useSkillsPageController",
    "SkillsPageController",
    "useState",
    "useSkillsPageQueries",
    "useSkillsPageMutations",
    "activeQuery.isError",
    "queryFailureAlert",
    "activeQuery.refetch()",
    "skills.loadFailed",
    "skills.loadFailedDesc",
  ]);
  assertNotMatches("src/features/skills/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "skills page/controller may compose query/mutation hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|nextSkillsCacheSequence|writeSkills|SKILLS_[A-Z0-9_]+_QUERY_KEY)\b/, "skills page/controller must not write cache, invalidate, cancel, allocate sequence, or consume query keys"],
    [/@\/services\/skills|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|skillsService\.|invokeIpc|invoke\(/, "skills page/controller must not access service/API/IPC directly"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "skills page/controller must not use generic authoritative payloads"],
  ]);

  assertIncludes("src/features/skills/types/index.ts", types, [
    "export type SkillsInstalledEnvelope",
    "export type SkillsBackupsEnvelope",
    "export type SkillsMutationPayload",
    "export type SkillsMutationEnvelope",
    "export type SkillsCachePayload",
    "export interface SkillsPageController",
  ]);
  if (!/export interface Skills[A-Za-z]*(Panel|Dialogs?|Dialog|Controller)Props\b/.test(types)) {
    failures.push("src/features/skills/types/index.ts must declare explicit panel/dialog/controller props types");
  }
  assertNotMatches("src/features/skills/types/index.ts", types, [
    [/SkillsPageController\s*=\s*ReturnType|ReturnType<typeof useSkillsPageController>/, "skills controller contract must be explicit, not ReturnType"],
    [/SkillsCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "skills types owner 必须保留 typed cache payloads"],
  ]);

  assertIncludes("src/features/skills/cache/index.ts", cache, [
    "createModuleCacheOwner<SkillsCachePayload>(\"skills\")",
    "Omit<SkillsCacheEnvelope, \"moduleId\">",
    "SKILLS_INSTALLED_QUERY_KEY",
    "SKILLS_BACKUPS_QUERY_KEY",
    "writeSkillsAuthoritativePayload",
    "writeSkillsCachePayload",
    "prepareSkillsMutation",
    "writeSkillsMutationPayload",
    "beginSkillsMutationSequence",
    "invalidateSkillsContractQueries",
    "setQueryData<CoreEnvelope<SkillListPayload>>",
    "setQueryData<CoreEnvelope<SkillBackupListPayload>>",
    "invalidateQueries({ queryKey: SKILLS_INSTALLED_QUERY_KEY })",
    "invalidateQueries({ queryKey: SKILLS_BACKUPS_QUERY_KEY })",
  ]);
  if (
    !cacheOwnerText.includes("nextSkillsCacheSequence") ||
    !(
      cacheOwnerText.includes("acceptSkillsCacheSequence") ||
      cacheOwnerText.includes("skillsLatestAcceptedSequence") ||
      cacheOwnerText.includes("sequence <")
    )
  ) {
    failures.push("src/features/skills/cache/index.ts or cache/sequence.ts must own sequence/stale/delayed response protection");
  }
  assertNotMatches("src/features/skills/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "skills cache owner 不得持有 React hooks"],
    [/@\/services\/skills|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|skillsService\.|invokeIpc|invoke\(/, "skills cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("skills"\)|SkillsCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "skills cache owner 必须保留 typed payloads"],
  ]);

  if (controllerConsumerText.includes("ReturnType<typeof useSkillsPageController>")) {
    failures.push("src/features/skills panels/dialogs/components must consume explicit Skills controller types, not hook ReturnType");
  }
  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+Skills[A-Za-z]*(?:Controller|Props)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/skills panels/dialogs/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS skills deep owner gate executed: hooks/index, query, mutation, page, cache, types, panels/dialogs/components");
}

function validateRelayDeepOwnerBoundaries() {
  const relayRoot = join(featuresRoot, "relay");
  const hooksIndexPath = join(relayRoot, "hooks", "index.ts");
  const queryPath = join(relayRoot, "hooks", "query.ts");
  const mutationPath = join(relayRoot, "hooks", "mutation.ts");
  const runtimePath = join(relayRoot, "hooks", "runtime.ts");
  const pagePath = join(relayRoot, "hooks", "page.ts");
  const cachePath = join(relayRoot, "cache", "index.ts");
  const sequencePath = join(relayRoot, "cache", "sequence.ts");
  const typesPath = join(relayRoot, "types", "index.ts");
  const controllerConsumerPaths = [
    ...walkFiles(join(relayRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(relayRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(relayRoot, "components"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const runtime = readRequired(runtimePath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const cacheSequence = existsSync(sequencePath) ? readRequired(sequencePath) : "";
  const types = readRequired(typesPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((file) => readRequired(file))
    .join("\n");
  const cacheOwnerText = `${cache}\n${cacheSequence}`;

  assertOnlyBarrelReExports("src/features/relay/hooks/index.ts", hooksIndex, [
    "query",
    "mutation",
    "runtime",
    "page",
  ]);
  assertNotMatches("src/features/relay/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "relay hooks/index can only re-export split owners"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|nextRelayCacheSequence|writeRelay)/, "relay hooks/index 不得持有 cache 写入, 失效, cancellation, or sequence"],
    [/@\/services\/relay|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|relayService\.|systemService\.|invokeIpc|invoke\(/, "relay hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/relay/hooks/query.ts", query, [
    "useRelayCacheController",
    "useModuleCacheController(RelayCache)",
    "useQuery",
    "useQueryClient",
    "RELAY_STATE_QUERY_KEY",
    "relayActiveStateQueryKey",
    "relayService.loadState",
    "relayService.getActive",
    "relayService.getProxyStatus",
    "relayService.getPassthroughAuditLog",
    "runRelayQuery",
    "full-refresh",
  ]);
  assertNotMatches("src/features/relay/hooks/query.ts", query, [
    [/\buseMutation\b/, "relay 查询归属 不得持有 mutation"],
    [/\buse(State|Reducer)\b/, "relay 查询归属 不得持有 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|writeRelayMutationPayload)\b/, "relay 查询归属 必须委托 cache 写入, 失效, cancellation, and mutation payloads"],
    [/toast\(|navigator\.clipboard/, "relay 查询归属 不得持有 toast or 浏览器 UI"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "relay 查询归属 必须使用 relay service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "relay 查询归属 必须保留 typed authoritative payloads"],
  ]);

  assertIncludes("src/features/relay/hooks/mutation.ts", mutation, [
    "useMutation",
    "useQueryClient",
    "relayService.upsert",
    "relayService.delete",
    "relayService.activate",
    "relayService.deactivate",
    "relayService.setCodexRouterEnabled",
    "writeRelayMutationPayload",
    "invalidateRelayContractQueries",
    "cancelQueries",
  ]);
  assertNotMatches("src/features/relay/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "relay 变更操作归属 不得持有 query"],
    [/\buse(State|Reducer|Effect|Memo)\b/, "relay 变更操作归属 不得持有 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries)\b/, "relay 变更操作归属 必须委托 cache 写入 and 失效 to cache helper"],
    [/toast\(|navigator\.clipboard/, "relay 变更操作归属 不得持有 toast or 浏览器 UI"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "relay 变更操作归属 必须使用 relay service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|useMutation<unknown|Promise<unknown>/, "relay 变更操作归属 必须保留 类型化 mutation payload"],
  ]);

  assertIncludes("src/features/relay/hooks/runtime.ts", runtime, [
    "useRelayRuntimeEvents",
    "useEffect",
    "useQueryClient",
    "relayService.subscribeRouterToggleProgress",
    "return relayService.subscribeRouterToggleProgress",
    "parseRelayRouterToggleProgress",
    "writeRelayRouterToggleProgress",
    "RELAY_ROUTER_TOGGLE_PROGRESS_QUERY_KEY",
  ]);
  assertNotMatches("src/features/relay/hooks/runtime.ts", runtime, [
    [/\buse(Query|Mutation)\b/, "relay 运行时归属 不得持有 query or mutation"],
    [/\buse(State|Reducer|Memo|Callback)\b/, "relay 运行时归属 不得持有 页面/控制器 UI 状态"],
    [/\bsetQueryData\b/, "relay 运行时归属 must write router progress through cache helper only"],
    [/relayService\.(?!subscribeRouterToggleProgress\b)\w+/, "relay 运行时归属 must not call relay service commands beyond router progress subscription"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "relay 运行时归属 必须使用 relay service event facade, 不得直接使用 IPC/API transport"],
  ]);

  assertIncludes("src/features/relay/hooks/page.ts", page, [
    "useRelayPageController",
    "RelayPageController",
    "useState",
    "useMemo",
    "useRelayPageQueries",
    "useRelayPageMutations",
    "useRelayRuntimeEvents",
    "toast",
    "formatExtraHeaders(extraHeaders: RelayExtraHeaders | undefined)",
  ]);
  assertNotMatches("src/features/relay/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "relay page/controller may compose split owner hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|nextRelayCacheSequence|writeRelay|RELAY_[A-Z0-9_]+_QUERY_KEY|relay[A-Za-z]*QueryKey)\b/, "relay page/controller must not write cache, invalidate, cancel, allocate sequence, or consume query keys"],
    [/@\/services\/relay|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|relayService\.|systemService\.|invokeIpc|invoke\(/, "relay page/controller must not access service/API/IPC directly"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|formatExtraHeaders\(provider:\s*unknown\)/, "relay page/controller must not use generic authoritative payloads"],
  ]);

  assertIncludes("src/features/relay/types/index.ts", types, [
    "export type RelayQueryDataPayload",
    "export type RelayMutationDataPayload",
    "export type RelayCachePayload",
    "export type RelayCacheDataPayload",
    "export type RelayKnownQueryPayload",
    "export interface RelayPageController",
  ]);
  if (!/export interface Relay[A-Za-z]*(Panel|Panels|Dialogs?|Dialog|Controller)Props\b/.test(types)) {
    failures.push("src/features/relay/types/index.ts must declare explicit panel/dialog/controller props types");
  }
  assertNotMatches("src/features/relay/types/index.ts", types, [
    [/RelayPageController\s*=\s*ReturnType|ReturnType<typeof useRelayPageController>/, "relay controller contract must be explicit, not ReturnType"],
    [/RelayCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "relay types owner 必须保留 typed cache payloads"],
  ]);

  assertIncludes("src/features/relay/cache/index.ts", cache, [
    "createModuleCacheOwner<RelayCachePayload>(\"relay\")",
    "Omit<RelayCacheEnvelope<TPayload>, \"moduleId\">",
    "RELAY_STATE_QUERY_KEY",
    "RELAY_ROUTER_TOGGLE_PROGRESS_QUERY_KEY",
    "writeRelayAuthoritativePayload",
    "writeRelayQueryPayload",
    "writeRelayMutationPayload",
    "writeRelayStateQueryPayload",
    "writeRelayRouterToggleQueryPayload",
    "writeRelayRouterToggleProgress",
    "invalidateRelayContractQueries",
    "setQueryData<CoreEnvelope<RelayStatePayload>>",
  ]);
  if (
    !cacheOwnerText.includes("nextRelayCacheSequence") ||
    !(
      cacheOwnerText.includes("acceptRelayCacheSequence") ||
      cacheOwnerText.includes("relayLatestAcceptedSequence") ||
      cacheOwnerText.includes("sequence <")
    )
  ) {
    failures.push("src/features/relay/cache/index.ts or cache/sequence.ts must own full-refresh/mutation sequence and stale/delayed response protection");
  }
  assertNotMatches("src/features/relay/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "relay cache owner 不得持有 React hooks"],
    [/@\/services\/relay|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|relayService\.|systemService\.|invokeIpc|invoke\(/, "relay cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("relay"\)|RelayCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "relay cache owner 必须保留 typed payloads"],
  ]);

  if (controllerConsumerText.includes("ReturnType<typeof useRelayPageController>")) {
    failures.push("src/features/relay panels/dialogs/components must consume explicit Relay controller types, not hook ReturnType");
  }
  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+Relay[A-Za-z]*(?:Controller|Props)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/relay panels/dialogs/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS relay deep owner gate executed: hooks/index, query, mutation, runtime, page, cache, types, panels/dialogs/components");
}

function validateMaintenanceDeepOwnerBoundaries() {
  const maintenanceRoot = join(featuresRoot, "maintenance");
  const hooksIndexPath = join(maintenanceRoot, "hooks", "index.ts");
  const queryPath = join(maintenanceRoot, "hooks", "query.ts");
  const mutationPath = join(maintenanceRoot, "hooks", "mutation.ts");
  const pagePath = join(maintenanceRoot, "hooks", "page.ts");
  const cachePath = join(maintenanceRoot, "cache", "index.ts");
  const typesPath = join(maintenanceRoot, "types", "index.ts");
  const controllerConsumerPaths = [
    join(maintenanceRoot, "dialogs", "index.ts"),
    join(maintenanceRoot, "dialogs", "diagnostics.tsx"),
    join(maintenanceRoot, "dialogs", "restart.tsx"),
    join(maintenanceRoot, "panels", "index.ts"),
    join(maintenanceRoot, "components", "index.ts"),
    join(maintenanceRoot, "components", "page.tsx"),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const types = readRequired(typesPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((path) => readRequired(path))
    .join("\n");

  assertOnlyBarrelReExports("src/features/maintenance/hooks/index.ts", hooksIndex, [
    "query",
    "mutation",
    "page",
  ]);
  assertNotMatches("src/features/maintenance/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "maintenance hooks/index can only re-export split owners"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|beginMaintenanceMutation|prepareMaintenanceMutation|writeMaintenance|Maintenance[A-Za-z]*QueryKeys|MAINTENANCE_[A-Z0-9_]+_QUERY_KEY)\b/, "maintenance hooks/index 不得持有 cache 写入 or query keys"],
    [/@\/services\/maintenance|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|maintenanceService\.|systemService\.|invokeIpc|invoke\(/, "maintenance hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/maintenance/hooks/query.ts", query, [
    "useQuery",
    "useQueryClient",
    "runMaintenanceQuery",
    "MAINTENANCE_IMAGE_COMPAT_QUERY_KEY",
    "MAINTENANCE_SYSTEM_INFO_QUERY_KEY",
    "maintenanceService.getImageCompat",
    "maintenanceService.getSystemInfo",
  ]);
  assertNotMatches("src/features/maintenance/hooks/query.ts", query, [
    [/\buseMutation\b/, "maintenance 查询归属 不得持有 mutation"],
    [/\buse(State|Reducer|Memo)\b/, "maintenance 查询归属 不得持有 页面/控制器 UI 状态 or view models"],
    [/\b(beginMaintenanceMutation|prepareMaintenanceMutation|writeMaintenanceActionPayload|writeMaintenanceMutationPayload|invalidateMaintenanceContractQueries|setQueryData|cancelQueries)\b/, "maintenance 查询归属 必须委托 mutation fences, cache 写入, and 失效"],
    [/toast\(|useTranslation|formatInvokeError|MaintenancePageController|restartDialog|routerDiagnosticsDialog|setActionResult|setActionRunning/, "maintenance 查询归属 不得持有 页面控制器, locale 格式化, or 弹窗状态"],
    [/@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|systemService\.|invokeIpc|invoke\(/, "maintenance 查询归属 必须使用 maintenance service wrapper, 不得直接使用 system/API/IPC transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "maintenance 查询归属 必须保留 typed authoritative payloads"],
  ]);

  assertIncludes("src/features/maintenance/hooks/mutation.ts", mutation, [
    "useMutation",
    "useQueryClient",
    "prepareMaintenanceMutation",
    "writeMaintenanceActionPayload",
    "writeMaintenanceMutationPayload",
    "invalidateMaintenanceContractQueries",
    "maintenanceService.diagnose",
    "maintenanceService.clean",
    "maintenanceService.rebuildRegistry",
    "maintenanceService.runCodexRouterDiagnostics",
    "maintenanceService.fixCodexRouterIssue",
  ]);
  assertNotMatches("src/features/maintenance/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "maintenance 变更操作归属 不得持有 query"],
    [/\buse(State|Reducer|Effect|Memo)\b/, "maintenance 变更操作归属 不得持有 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries)\b/, "maintenance 变更操作归属 必须委托 cache 写入 and 失效 to cache helper"],
    [/toast\(|useTranslation|MaintenancePageController|restartDialog|routerDiagnosticsDialog|setActionResult|setActionRunning/, "maintenance 变更操作归属 不得持有 页面控制器, locale 格式化, or 弹窗状态"],
    [/@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|systemService\.|invokeIpc|invoke\(/, "maintenance 变更操作归属 必须使用 maintenance service wrapper, 不得直接使用 system/API/IPC transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|useMutation<unknown|Promise<unknown>/, "maintenance 变更操作归属 必须保留 类型化 mutation payload"],
  ]);

  assertIncludes("src/features/maintenance/hooks/page.ts", page, [
    "useMaintenance",
    "MaintenancePageController",
    "restartDialog",
    "routerDiagnosticsDialog",
  ]);
  assertNotMatches("src/features/maintenance/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "maintenance page/controller may compose split owner hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|beginMaintenanceMutation|prepareMaintenanceMutation|writeMaintenance|Maintenance[A-Za-z]*QueryKeys|MAINTENANCE_[A-Z0-9_]+_QUERY_KEY)\b/, "maintenance page/controller must not write cache, invalidate, cancel, allocate fences, or consume query keys"],
    [/@\/services\/maintenance|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|maintenanceService\.|systemService\.|invokeIpc|invoke\(/, "maintenance page/controller must not access service/API/IPC directly"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "maintenance page/controller must not use generic authoritative payloads"],
  ]);

  assertIncludes("src/features/maintenance/types/index.ts", types, [
    "export type MaintenanceCachePayload",
    "export type MaintenanceQueryPayloadForKey",
    "export interface MaintenancePageController",
  ]);
  assertNotMatches("src/features/maintenance/types/index.ts", types, [
    [/MaintenancePageController\s*=\s*ReturnType|ReturnType<typeof useMaintenancePageController>/, "maintenance controller contract must be explicit, not ReturnType"],
    [/MaintenanceCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "maintenance types owner 必须保留 typed cache payloads"],
  ]);

  assertNotMatches("src/features/maintenance/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "maintenance cache owner 不得持有 React hooks"],
    [/@\/services\/maintenance|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|maintenanceService\.|systemService\.|invokeIpc|invoke\(/, "maintenance cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("maintenance"\)|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "maintenance cache owner 必须保留 typed payloads"],
  ]);

  if (controllerConsumerText.includes("ReturnType<typeof useMaintenancePageController>")) {
    failures.push("src/features/maintenance dialogs/panels/components must consume explicit Maintenance controller types, not hook ReturnType");
  }

  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+Maintenance[A-Za-z]*(?:Controller|Props)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/maintenance dialogs/panels/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS maintenance deep owner gate executed: hooks/index, query, mutation, page, cache, types, dialogs/panels/components");
}

function validateDaemonAutoswitchDeepOwnerBoundaries() {
  const daemonRoot = join(featuresRoot, "daemon-autoswitch");
  const hooksIndexPath = join(daemonRoot, "hooks", "index.ts");
  const queryPath = join(daemonRoot, "hooks", "query.ts");
  const mutationPath = join(daemonRoot, "hooks", "mutation.ts");
  const runtimePath = join(daemonRoot, "hooks", "runtime.ts");
  const pagePath = join(daemonRoot, "hooks", "page.ts");
  const cachePath = join(daemonRoot, "cache", "index.ts");
  const typesPath = join(daemonRoot, "types", "index.ts");
  const controllerConsumerPaths = [
    ...walkFiles(join(daemonRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(daemonRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(daemonRoot, "components"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const runtime = readRequired(runtimePath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const types = readRequired(typesPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((path) => readRequired(path))
    .join("\n");

  assertOnlyBarrelReExports("src/features/daemon-autoswitch/hooks/index.ts", hooksIndex, [
    "query",
    "mutation",
    "runtime",
    "page",
  ]);
  assertNotMatches("src/features/daemon-autoswitch/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "daemon-autoswitch hooks/index can only re-export split owners"],
    [/\b(writeDaemonAutoswitch|setQueryData|invalidateQueries|cancelQueries|DaemonAutoswitch[A-Za-z]*QueryKeys|DAEMON_AUTOSWITCH_[A-Z0-9_]+_QUERY_KEY)\b/, "daemon-autoswitch hooks/index 不得持有 cache 写入 or query keys"],
    [/@\/services\/daemon-autoswitch|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|daemonAutoswitchService\.|systemService\.|invokeIpc|invoke\(/, "daemon-autoswitch hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/daemon-autoswitch/hooks/query.ts", query, [
    "useDaemonAutoswitchCacheController",
    "useModuleCacheController(DaemonAutoswitchCache)",
    "useDaemonAutoswitchBootstrapQuery",
    "useDaemonAutoswitchPendingQuery",
    "useQuery",
    "useQueryClient",
    "runDaemonAutoswitchQuery",
    "daemonAutoswitchService.loadBootstrapState",
    "daemonAutoswitchService.loadPendingAutoSwitch",
  ]);
  assertNotMatches("src/features/daemon-autoswitch/hooks/query.ts", query, [
    [/\buseMutation\b/, "daemon-autoswitch 查询归属 不得持有 mutation"],
    [/\buseEffect\b/, "daemon-autoswitch 查询归属 不得持有 runtime subscriptions"],
    [/\buse(State|Reducer|Memo|Callback)\b/, "daemon-autoswitch 查询归属 不得持有 页面/控制器 UI 状态 or view models"],
    [/\b(cancelDaemonAutoswitchQueries|writeDaemonAutoswitchMutationPayload|invalidateDaemonAutoswitchContractQueries|setQueryData|cancelQueries)\b/, "daemon-autoswitch 查询归属 必须委托 mutation writes, cancellation, and 失效"],
    [/useTranslation|DaemonAutoswitchPageController|useDaemonAutoswitchModule|useDaemonAutoswitchPendingPrompt|metrics|panels|labelKey|envelopeData|readBoolean|readString/, "daemon-autoswitch 查询归属 不得持有 页面控制器, locale, or view model 解析"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "daemon-autoswitch 查询归属 必须使用 daemon-autoswitch service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|CoreEnvelope<unknown>|response\.data/, "daemon-autoswitch 查询归属 必须保留 typed authoritative payloads"],
  ]);

  assertIncludes("src/features/daemon-autoswitch/hooks/mutation.ts", mutation, [
    "useMutation",
    "useQueryClient",
    "daemonAutoswitchService.runDaemonOnce",
    "daemonAutoswitchService.setAutoSwitch",
    "daemonAutoswitchService.dismissPendingAutoSwitch",
    "daemonAutoswitchService.confirmPendingAutoSwitchAndRestartCodex",
    "cancelDaemonAutoswitchQueries",
    "writeDaemonAutoswitchMutationPayload",
    "invalidateDaemonAutoswitchContractQueries",
  ]);
  assertNotMatches("src/features/daemon-autoswitch/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "daemon-autoswitch 变更操作归属 不得持有 query"],
    [/\buse(State|Reducer|Effect|Memo|Callback)\b/, "daemon-autoswitch 变更操作归属 不得持有 页面/控制器 UI 状态"],
    [/\bsetQueryData\b/, "daemon-autoswitch 变更操作归属 必须委托 cache 写入 to cache helper"],
    [/useTranslation|DaemonAutoswitchPageController|useDaemonAutoswitchModule|useDaemonAutoswitchPendingPrompt|metrics|panels|labelKey|envelopeData|readBoolean|readString/, "daemon-autoswitch 变更操作归属 不得持有 页面控制器, locale, or view model 解析"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "daemon-autoswitch 变更操作归属 必须使用 daemon-autoswitch service wrapper, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|CoreEnvelope<unknown>|useMutation<unknown|Promise<unknown>|response\.data/, "daemon-autoswitch 变更操作归属 必须保留 类型化 mutation payload"],
  ]);

  assertIncludes("src/features/daemon-autoswitch/hooks/runtime.ts", runtime, [
    "useDaemonAutoswitchRuntimeSubscriptions",
    "useEffect",
    "useQueryClient",
    "daemonAutoswitchService.subscribePendingAutoSwitch",
    "applyDaemonAutoswitchRuntimeEventToCache",
    "\"auto-switch-pending\"",
  ]);
  assertNotMatches("src/features/daemon-autoswitch/hooks/runtime.ts", runtime, [
    [/\buse(Query|Mutation)\b/, "daemon-autoswitch 运行时归属 不得持有 query or mutation"],
    [/\buse(State|Reducer|Memo|Callback)\b/, "daemon-autoswitch 运行时归属 不得持有 页面/控制器 UI 状态"],
    [/\bsetQueryData\b/, "daemon-autoswitch 运行时归属 must invalidate through cache/query helper only"],
    [/\binvalidateQueries\b/, "daemon-autoswitch 运行时归属 must call cache helper, not invalidate queries directly"],
    [/\bDAEMON_AUTOSWITCH_[A-Z0-9_]+_QUERY_KEY\b/, "daemon-autoswitch 运行时归属 must not consume query keys directly"],
    [/useTranslation|DaemonAutoswitchPageController|useDaemonAutoswitchModule|useDaemonAutoswitchPendingPrompt|metrics|panels|labelKey|envelopeData|readBoolean|readString/, "daemon-autoswitch 运行时归属 不得持有 页面控制器, locale, or view model 解析"],
    [/daemonAutoswitchService\.(?!subscribePendingAutoSwitch\b)\w+/, "daemon-autoswitch 运行时归属 must not call daemon-autoswitch service commands beyond pending subscription"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "daemon-autoswitch 运行时归属 必须使用 service event facade, 不得直接使用 IPC/API transport"],
  ]);

  assertIncludes("src/features/daemon-autoswitch/hooks/page.ts", page, [
    "useDaemonAutoswitchPendingPrompt",
    "useDaemonAutoswitchModule",
    "useDaemonAutoswitchPageController",
    "DaemonAutoswitchPageController",
    "metrics",
    "panels",
    "useDaemonAutoswitchPageQueries",
    "useDaemonAutoswitchPageMutations",
    "useDaemonAutoswitchRuntimeSubscriptions",
  ]);
  assertNotMatches("src/features/daemon-autoswitch/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "daemon-autoswitch page/controller may compose split owner hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|writeDaemonAutoswitch|DaemonAutoswitch[A-Za-z]*QueryKeys|DAEMON_AUTOSWITCH_[A-Z0-9_]+_QUERY_KEY)\b/, "daemon-autoswitch page/controller must not write cache, invalidate, cancel, or consume query keys"],
    [/@\/services\/daemon-autoswitch|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|daemonAutoswitchService\.|systemService\.|invokeIpc|invoke\(/, "daemon-autoswitch page/controller must not access service/API/IPC directly"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|CoreEnvelope<unknown>|response\.data/, "daemon-autoswitch page/controller must not use generic authoritative payloads"],
  ]);

  assertIncludes("src/features/daemon-autoswitch/types/index.ts", types, [
    "export type DaemonAutoswitchCachePayload",
    "export type DaemonAutoswitchMutationEnvelope",
    "export type DaemonAutoswitchMutationPayload",
    "export interface DaemonAutoswitchPageQueries",
    "export interface DaemonAutoswitchPageMutations",
    "export interface DaemonAutoswitchRuntime",
    "export interface DaemonAutoswitchPageController",
  ]);
  assertNotMatches("src/features/daemon-autoswitch/types/index.ts", types, [
    [/DaemonAutoswitch[A-Za-z]*(?:Controller|Queries|Mutations)\s*=\s*ReturnType|ReturnType<typeof useDaemonAutoswitch[A-Za-z]*/, "daemon-autoswitch controller/query/mutation/runtime contracts must be explicit, not hook ReturnType"],
    [/DaemonAutoswitchCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown|CoreEnvelope<unknown>/, "daemon-autoswitch types owner 必须保留 typed cache payloads"],
  ]);

  assertIncludes("src/features/daemon-autoswitch/cache/index.ts", cache, [
    "createModuleCacheOwner<DaemonAutoswitchCachePayload>(\"daemon-autoswitch\")",
    "Omit<DaemonAutoswitchCacheEnvelope<TPayload>, \"moduleId\">",
    "writeDaemonAutoswitchAuthoritativePayload",
    "invalidateDaemonAutoswitchContractQueries",
    "invalidateAccountsDumpedQueries",
    "DAEMON_AUTOSWITCH_RUNTIME_EVENT_CACHE_TARGETS",
    "applyDaemonAutoswitchRuntimeEventToCache",
  ]);
  assertNotMatches("src/features/daemon-autoswitch/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "daemon-autoswitch cache owner 不得持有 React hooks"],
    [/@\/services\/daemon-autoswitch|@\/services\/system|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|daemonAutoswitchService\.|systemService\.|invokeIpc|invoke\(/, "daemon-autoswitch cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("daemon-autoswitch"\)|DaemonAutoswitchCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "daemon-autoswitch cache owner 必须保留 typed payloads"],
    [/queryKey:\s*\[\s*["']accounts["']\s*\]/, "daemon-autoswitch cache owner must reference accounts cache helper instead of bare accounts key"],
    [/queryKey:\s*\[\s*["']runtime-state["']\s*,\s*["']display["']\s*\]/, "daemon-autoswitch cache owner must reference module cache helper instead of bare runtime display key"],
    [/queryKey:\s*\[\s*["']quota-history["']\s*\]/, "daemon-autoswitch cache owner must reference module cache helper instead of bare quota key"],
  ]);

  if (controllerConsumerText.includes("ReturnType<typeof useDaemonAutoswitchPageController>")) {
    failures.push("src/features/daemon-autoswitch panels/dialogs/components must consume explicit DaemonAutoswitch controller types, not hook ReturnType");
  }
  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+DaemonAutoswitch[A-Za-z]*(?:Controller|Props)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/daemon-autoswitch panels/dialogs/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS daemon-autoswitch deep owner gate executed: hooks/index, query, mutation, runtime, page, cache, types, panels/dialogs/components");
}

function validateOverviewDeepOwnerBoundaries() {
  const overviewRoot = join(featuresRoot, "overview");
  const hooksIndexPath = join(overviewRoot, "hooks", "index.ts");
  const queryPath = join(overviewRoot, "hooks", "query.ts");
  const mutationPath = join(overviewRoot, "hooks", "mutation.ts");
  const pagePath = join(overviewRoot, "hooks", "page.ts");
  const cachePath = join(overviewRoot, "cache", "index.ts");
  const typesPath = join(overviewRoot, "types", "index.ts");
  const controllerConsumerPaths = [
    ...walkFiles(join(overviewRoot, "panels"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(overviewRoot, "dialogs"), (file) => /\.(ts|tsx)$/.test(file)),
    ...walkFiles(join(overviewRoot, "components"), (file) => /\.(ts|tsx)$/.test(file)),
  ];

  const hooksIndex = readRequired(hooksIndexPath);
  const query = readRequired(queryPath);
  const mutation = readRequired(mutationPath);
  const page = readRequired(pagePath);
  const cache = readRequired(cachePath);
  const types = readRequired(typesPath);
  const controllerConsumerText = controllerConsumerPaths
    .map((file) => readRequired(file))
    .join("\n");

  assertOnlyBarrelReExports("src/features/overview/hooks/index.ts", hooksIndex, [
    "query",
    "mutation",
    "page",
  ]);
  assertNotMatches("src/features/overview/hooks/index.ts", hooksIndex, [
    [/\b(useQuery|useMutation|useQueryClient|useState|useReducer|useEffect|useMemo|useCallback)\b/, "overview hooks/index can only re-export split owners"],
    [/\b(writeOverview|setQueryData|invalidateQueries|cancelQueries|Overview[A-Za-z]*QueryKeys|OVERVIEW_[A-Z0-9_]+_QUERY_KEY)\b/, "overview hooks/index 不得持有 cache 写入 or query keys"],
    [/@\/services\/(?:accounts|analytics|mcp|skills|system)|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|(?:accounts|analytics|mcp|skills|system)Service\.|invokeIpc|invoke\(/, "overview hooks/index must not access service/API/IPC"],
  ]);

  assertIncludes("src/features/overview/hooks/query.ts", query, [
    "useOverviewCacheController",
    "useModuleCacheController(OverviewCache)",
    "useOverviewPageQueries",
    "useQuery",
    "useQueryClient",
    "accountsService.loadSnapshot(true)",
    "analyticsService.loadUsageAnalytics",
    "mcpService.loadServers",
    "skillsService.loadInstalled",
    "systemService.getDeviceId",
    "systemService.getNotificationClientState",
    "systemService.getMysteryUnlockGrants",
    "runOverviewQuery",
  ]);
  assertNotMatches("src/features/overview/hooks/query.ts", query, [
    [/\buseMutation\b/, "overview 查询归属 不得持有 mutation"],
    [/\buse(State|Reducer|Memo)\b/, "overview 查询归属 不得持有 页面/控制器 UI 状态 or view models"],
    [/\b(writeOverviewMutationPayload|writeOverviewMysteryGrantsPayload|invalidateOverviewContractQueries|setQueryData|cancelQueries)\b/, "overview 查询归属 必须委托 mutation writes and 失效"],
    [/toast\(|useTranslation|OverviewPageController|setRemoteDeviceSecret|importRemoteSecret/, "overview 查询归属 不得持有 页面控制器, locale 格式化, or 弹窗状态"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "overview 查询归属 必须使用 module service wrappers, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "overview 查询归属 必须保留 typed authoritative payloads"],
  ]);

  assertIncludes("src/features/overview/hooks/mutation.ts", mutation, [
    "useOverviewPageMutations",
    "useMutation",
    "useQueryClient",
    "accountsService.refreshUsageSnapshot",
    "systemService.focusMainWindow",
    "systemService.getOrCreateRemoteDeviceSecret",
    "systemService.importRemoteDeviceSecretIfEmpty",
    "systemService.mergeMysteryUnlockGrants",
    "writeOverviewMutationPayload",
    "writeOverviewMysteryGrantsPayload",
    "prepareOverviewMutation",
    "invalidateOverviewUsageMutationQueries",
    "invalidateOverviewMysteryGrantsQueries",
  ]);
  assertNotMatches("src/features/overview/hooks/mutation.ts", mutation, [
    [/\buseQuery\b/, "overview 变更操作归属 不得持有 query"],
    [/\buse(State|Reducer|Effect|Memo)\b/, "overview 变更操作归属 不得持有 页面/控制器 UI 状态"],
    [/\b(setQueryData|invalidateQueries)\b/, "overview 变更操作归属 必须委托 cache 写入 and 失效 to cache helper"],
    [/toast\(|useTranslation|OverviewPageController|setRemoteDeviceSecret|importRemoteSecret(?:Draft|Open|Dialog)/, "overview 变更操作归属 不得持有 页面控制器, locale 格式化, or 弹窗状态"],
    [/@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "overview 变更操作归属 必须使用 module service wrappers, 不得直接使用 IPC/API transport"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown|useMutation<unknown/, "overview 变更操作归属 必须保留 类型化 mutation payload"],
  ]);

  assertIncludes("src/features/overview/hooks/page.ts", page, [
    "useOverviewPageController",
    "OverviewPageController",
    "useOverviewPageQueries",
    "useOverviewPageMutations",
    "useState",
    "useTranslation",
    "envelopeData<CoreSnapshotPayload>",
    "envelopeData<MysteryRouteGrant[]>",
    "id: \"mystery-grants\"",
    "payload: mysteryUnlockGrants",
    "module.mergeMysteryGrantsMutation.mutateAsync",
    "readArray<DailyActivity>",
    "readArray<McpServerSummary>",
    "readArray<InstalledSkillSummary>",
  ]);
  assertNotMatches("src/features/overview/hooks/page.ts", page, [
    [/\buse(Query|Mutation|QueryClient)\b/, "overview page/controller may compose split owner hooks but must not call TanStack directly"],
    [/\b(setQueryData|invalidateQueries|cancelQueries|writeOverview|Overview[A-Za-z]*QueryKeys|OVERVIEW_[A-Z0-9_]+_QUERY_KEY)\b/, "overview page/controller must not write cache, invalidate, cancel, or consume query keys"],
    [/@\/services\/(?:accounts|analytics|mcp|skills|system)|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|(?:accounts|analytics|mcp|skills|system)Service\.|invokeIpc|invoke\(/, "overview page/controller must not access service/API/IPC directly"],
    [/ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "overview page/controller must not use generic authoritative payloads"],
  ]);

  assertIncludes("src/features/overview/types/index.ts", types, [
    "export type OverviewSnapshotEnvelope",
    "export type OverviewUsageEnvelope",
    "export type OverviewMcpEnvelope",
    "export type OverviewSkillsEnvelope",
    "export type OverviewNotificationEnvelope",
    "export type OverviewMysteryGrantsEnvelope",
    "export type OverviewCachePayload",
    "export interface OverviewPageController",
  ]);
  assertNotMatches("src/features/overview/types/index.ts", types, [
    [/OverviewPageController\s*=\s*ReturnType|ReturnType<typeof useOverviewPageController>/, "overview controller contract must be explicit, not ReturnType"],
    [/OverviewCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown|items:\s*unknown\[\]/, "overview types owner 必须保留 typed cache payloads"],
  ]);

  assertIncludes("src/features/overview/cache/index.ts", cache, [
    "createModuleCacheOwner<OverviewCachePayload>(\"overview\")",
    "OverviewQueryKeys",
    "OVERVIEW_MYSTERY_GRANTS_QUERY_KEY",
    "writeOverviewAuthoritativePayload",
    "writeOverviewQueryPayload",
    "writeOverviewMutationPayload",
    "writeOverviewMysteryGrantsPayload",
    "invalidateOverviewContractQueries",
    "Omit<OverviewCacheEnvelope<TPayload>, \"moduleId\">",
  ]);
  assertNotMatches("src/features/overview/cache/index.ts", cache, [
    [/\buse(Query|Mutation|QueryClient|State|Reducer|Effect|Memo|Callback)\b/, "overview cache owner 不得持有 React hooks"],
    [/@\/services\/(?:accounts|analytics|mcp|skills|system)|@\/lib\/api|@\/contracts\/ipc|@tauri-apps\/api|(?:accounts|analytics|mcp|skills|system)Service\.|invokeIpc|invoke\(/, "overview cache owner must not access service/API/IPC"],
    [/createModuleCacheOwner\("overview"\)|OverviewCacheEnvelope<TPayload = unknown>|ModuleCacheEnvelope<unknown>|payload:\s*unknown/, "overview cache owner 必须保留 typed payloads"],
  ]);

  if (controllerConsumerText.includes("ReturnType<typeof useOverviewPageController>")) {
    failures.push("src/features/overview panels/dialogs/components must consume explicit Overview controller types, not hook ReturnType");
  }
  if (
    /(?:import|export)\s+type[^;]*from\s+["']\.\.\/hooks["']/.test(controllerConsumerText) ||
    /import\s+\{[\s\S]*?\btype\s+Overview[A-Za-z]*(?:Controller|Props)\b[\s\S]*?\}\s+from\s+["']\.\.\/hooks["']/.test(controllerConsumerText)
  ) {
    failures.push("src/features/overview panels/dialogs/components must import controller/props types from ../types, not ../hooks");
  }

  console.log("PASS overview deep owner gate executed: hooks/index, query, mutation, page, cache, types, panels/dialogs/components");
}

function validateFeatureDeepOwners() {
  for (const moduleId of featureModules) {
    const moduleRoot = join(featuresRoot, moduleId);
    for (const requiredFile of requiredFeatureFiles) {
      readRequired(join(moduleRoot, requiredFile));
    }

    const provider = readRequired(join(moduleRoot, "Provider.tsx"));
    const updater = readRequired(join(moduleRoot, "StoreUpdater.tsx"));
    const content = readRequired(join(moduleRoot, "Content.tsx"));
    assertIncludes(`src/features/${moduleId}/Provider.tsx`, provider, ["Provider"]);
    assertIncludes(`src/features/${moduleId}/StoreUpdater.tsx`, updater, ["StoreUpdater"]);
    assertIncludes(`src/features/${moduleId}/Content.tsx`, content, ["Content"]);
  }

  console.log(`PASS feature 深层 owner 文件：${featureModules.length}/${featureModules.length}`);
}

function validateRouteShells() {
  const routeModules = featureModules.filter((moduleId) => moduleId !== "voice");
  for (const moduleId of routeModules) {
    const routeFile = join(routesRoot, moduleId, "page.tsx");
    const text = readRequired(routeFile);
    assertIncludes(`src/routes/desktop/main/${moduleId}/page.tsx`, text, [
      `@/features/${moduleId}`,
      "Route",
    ]);
    assertNotMatches(`src/routes/desktop/main/${moduleId}/page.tsx`, text, [
      [/\buse(State|Reducer|Effect|Memo|Callback)\b/, "route shell 不得持有页面私有业务状态"],
      [/\buse(Query|Mutation)\b/, "route shell 不得 owning TanStack 查询或 mutation"],
      [/@\/lib\/api|@\/services|invokeIpc/, "route shell 不得直接访问 API/service/IPC"],
    ]);
  }

  console.log(`PASS route shell 纯度：${routeModules.length}/${routeModules.length}`);
}

function validateFeaturePageShells() {
  for (const moduleId of strictFeaturePageShells) {
    const pageFile = join(featuresRoot, moduleId, "components", "page.tsx");
    const text = readRequired(pageFile);
    const label = `src/features/${moduleId}/components/page.tsx`;
    const declaredFunctions = [
      ...text.matchAll(/(?:^|\n)function\s+([A-Z][A-Za-z0-9_]*)\s*\(/g),
    ].map((match) => match[1]);
    const expectedPageName = `${moduleId
      .split("-")
      .map((part) => part.charAt(0).toUpperCase() + part.slice(1))
      .join("")}Page`;
    const unexpectedFunctions = declaredFunctions.filter((name) => name !== expectedPageName);

    if (providerContentPageShells.includes(moduleId)) {
      assertIncludes(label, text, ["../Provider", "../Content"]);
      assertNotMatches(label, text, [
        [/\.\.\/hooks/, "module page 必须只装配 Provider 和 Content，不得直接持有模块 hook"],
        [/\.\.\/panels/, "module page 必须只装配 Provider 和 Content，不得直接挂载面板"],
        [/\.\.\/dialogs/, "module page 必须只装配 Provider 和 Content，不得直接挂载弹窗"],
      ]);
    } else {
      assertIncludes(label, text, ["../hooks"]);
    }
    assertNotMatches(label, text, [
      [/\buse(State|Reducer|Effect|Memo|Callback)\b/, "module page 只能作为 shell，不得 owning 组件私有状态或复杂派生"],
      [/\buse(Query|Mutation)\b/, "module page 不得直接 owning TanStack query/mutation"],
      [/@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "module page 不得绕过 hook/service 直接访问 IPC"],
      [/\b(readString|readNumber|readPath|readArray|envelopeData|selectSessionRecords|selectSessionsEnvelopeData|buildSessionGroups|countOrphans|formatBytes|formatEpoch|formatPlan|quotaPercent|tokenStatusCode|accountEmail|accountKey)\b/, "module page 不得 owning 数据解析、筛选、统计或格式化 helper"],
    ]);

    if (unexpectedFunctions.length > 0) {
      failures.push(`${label} 仍声明页面内子组件或 helper：${unexpectedFunctions.join(", ")}`);
    }
  }

  console.log(`PASS module page shell 纯度：${strictFeaturePageShells.length}/${strictFeaturePageShells.length}`);
}

function validateServiceOwners() {
  const serviceIndex = readRequired(join(servicesRoot, "index.ts"));
  for (const moduleId of modulesWithService) {
    readRequired(join(servicesRoot, moduleId, "index.ts"));
    if (!serviceIndex.includes(`"./${moduleId}"`)) {
      failures.push(`src/services/index.ts 未聚合模块 service：${moduleId}`);
    }
  }

  console.log(`PASS service owner 聚合：${modulesWithService.length}/${modulesWithService.length}`);
}

function validateSystemServiceFacadeOwners() {
  const systemCommands = [
    "check_update_installability",
    "clean",
    "configure_auto_switch",
    "confirm_pending_auto_switch",
    "confirm_pending_auto_switch_and_restart_codex",
    "detect_api_proxy_config",
    "dismiss_pending_auto_switch",
    "diagnose",
    "force_kill_codex",
    "get_hotspot_enabled",
    "get_image_compat",
    "get_system_info",
    "get_usage_refresh_interval",
    "graceful_restart_for_update",
    "has_notch",
    "hotspot_ready",
    "load_snapshot",
    "load_pending_auto_switch",
    "open_path",
    "rebuild_registry",
    "reset_codex_config",
    "restart_codex",
    "run_daemon_once",
    "set_api_proxy_config",
    "set_auto_switch",
    "set_hotspot_enabled",
    "set_image_compat",
    "set_usage_refresh_interval",
    "test_api_proxy_config",
  ];

  const systemServiceText = readRequired(join(servicesRoot, "system", "index.ts"));
  for (const command of systemCommands) {
    if (!systemServiceText.includes(`"${command}"`)) {
      failures.push(`src/services/system/index.ts 缺少 system IPC wrapper：${command}`);
    }
  }

  for (const moduleId of ["maintenance", "settings", "daemon-autoswitch"]) {
    const servicePath = join(servicesRoot, moduleId, "index.ts");
    const text = readRequired(servicePath);
    if (!text.includes("@/services/system")) {
      failures.push(`${repoPath(servicePath)} 必须通过 systemService 承接 system IPC`);
    }
    for (const command of systemCommands) {
      if (text.includes(`"${command}"`) || text.includes(`'${command}'`)) {
        failures.push(`${repoPath(servicePath)} 不得直接包装 system IPC：${command}`);
      }
    }
  }

  console.log("PASS system service facade owner 收口");
}

function validateNoBypassIpcInComponents() {
  const componentFiles = walkFiles(featuresRoot, (file) => {
    const normalized = repoPath(file);
    return normalized.includes("/components/") && /\.(ts|tsx)$/.test(file);
  });

  for (const file of componentFiles) {
    const text = readRequired(file);
    assertNotMatches(repoPath(file), text, [
      [/@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "业务组件不得绕过模块 hook/service 直接拼 IPC"],
      [/@\/lib\/api/, "业务组件不得直接消费全局 API 门面"],
    ]);
  }

  console.log(`PASS 业务组件 IPC 边界：${componentFiles.length}/${componentFiles.length}`);
}

function validateNoGlobalApiInFeatureHooks() {
  const hookFiles = walkFiles(featuresRoot, (file) => {
    const normalized = repoPath(file);
    return normalized.endsWith("/hooks/index.ts") || normalized.endsWith("/hooks/index.tsx");
  });

  for (const file of hookFiles) {
    const text = readRequired(file);
    assertNotMatches(repoPath(file), text, [
      [/@\/lib\/api/, "模块 hook 不得直接消费全局 API 门面，必须经模块 service wrapper"],
      [/@\/contracts\/ipc|@tauri-apps\/api|invokeIpc|invoke\(/, "模块 hook 不得绕过 service 直接拼 IPC"],
    ]);
  }

  console.log(`PASS 模块 hook service 边界：${hookFiles.length}/${hookFiles.length}`);
}

function validateTanStackOwners() {
  const ownerFiles = walkFiles(featuresRoot, (file) => {
    if (!/\.(ts|tsx)$/.test(file)) return false;
    const normalized = repoPath(file);
    if (normalized.includes("/_shared/")) return false;
    if (normalized.includes("/hooks/") || normalized.includes("/cache/")) return false;
    return (
      normalized.includes("/components/") ||
      normalized.includes("/panels/") ||
      normalized.includes("/dialogs/") ||
      normalized.endsWith("/Content.tsx") ||
      normalized.endsWith("/Provider.tsx") ||
      normalized.endsWith("/StoreUpdater.tsx")
    );
  });

  for (const file of ownerFiles) {
    const text = readRequired(file);
    assertNotMatches(repoPath(file), text, [
      [/\buse(Query|Mutation|QueryClient)\b/, "TanStack query/mutation 只能归 hooks/cache owner"],
      [/\b(setQueryData|invalidateQueries|cancelQueries)\b/, "TanStack cache 写入和失效只能归 hooks/cache owner"],
    ]);
  }

  console.log(`PASS TanStack owner 边界：${ownerFiles.length}/${ownerFiles.length}`);
}

function validateNoForbiddenReferenceNames() {
  const files = walkFiles(srcRoot, (file) => /\.(css|js|json|jsx|md|mjs|ts|tsx|txt)$/i.test(file));
  files.push(
    ...walkFiles(join(repoRoot, "scripts"), (file) => /\.(js|mjs)$/i.test(file)),
    join(repoRoot, "package.json"),
  );

  for (const file of files) {
    const lower = readRequired(file).toLowerCase();
    for (const forbiddenName of forbiddenReferenceNames) {
      if (lower.includes(forbiddenName.toLowerCase())) {
        failures.push(`${repoPath(file)} 出现外部参考项目名称`);
      }
    }
  }

  console.log("PASS 外部参考项目名未写入前端源码和脚本");
}

function validateNoDuplicatePublicCommonRoots() {
  const forbiddenDirectories = [
    join(srcRoot, "lib" + "s"),
    join(srcRoot, "shared"),
    join(srcRoot, "common"),
    join(srcRoot, "public"),
    join(srcRoot, "shared", "lib"),
  ];

  for (const directory of forbiddenDirectories) {
    if (existsSync(directory)) {
      failures.push(`${repoPath(directory)} 是重复公共库目录；前端公共门面只能归属 src/lib`);
    }
  }

  console.log("PASS 前端公共库目录唯一：src/lib");
}

function validateNoFeaturePublicCommonOwnerRoots() {
  const forbiddenFeatureOwnerNames = new Set(["shared", "common", "public", "lib", "libs"]);
  for (const moduleName of featureModules) {
    const modulePath = join(featuresRoot, moduleName);
    if (!existsSync(modulePath)) continue;
    for (const entry of readdirSync(modulePath, { withFileTypes: true })) {
      if (entry.isDirectory() && forbiddenFeatureOwnerNames.has(entry.name)) {
        failures.push(`${repoPath(join(modulePath, entry.name))} 是模块内重复公共 owner；复杂模块只能使用既定深层 owner`);
      }
    }
  }

  console.log("PASS 前端模块内无重复公共 owner");
}

validateSourceFileNames();
validateNoDuplicatePublicCommonRoots();
validateNoFeaturePublicCommonOwnerRoots();
validateFeatureDeepOwners();
validateAccountsDeepOwnerBoundaries();
validateSessionsDeepOwnerBoundaries();
validateAnalyticsDeepOwnerBoundaries();
validateCustomInstructionsDeepOwnerBoundaries();
validateMcpDeepOwnerBoundaries();
validatePluginsDeepOwnerBoundaries();
validateRuntimeExtensionsPluginsOwnerMerge();
validateTrayShellDeepOwnerBoundaries();
validateSettingsDeepOwnerBoundaries();
validateSkillsDeepOwnerBoundaries();
validateRelayDeepOwnerBoundaries();
validateMaintenanceDeepOwnerBoundaries();
validateDaemonAutoswitchDeepOwnerBoundaries();
validateOverviewDeepOwnerBoundaries();
validateRouteShells();
validateFeaturePageShells();
validateServiceOwners();
validateSystemServiceFacadeOwners();
validateNoBypassIpcInComponents();
validateNoGlobalApiInFeatureHooks();
validateTanStackOwners();
validateNoForbiddenReferenceNames();

if (failures.length > 0) {
  console.error("前端 owner 分层验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("前端 owner 分层验证通过。");
