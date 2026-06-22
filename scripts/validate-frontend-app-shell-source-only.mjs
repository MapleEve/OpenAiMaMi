import { existsSync, readFileSync } from "node:fs";
import { join } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const npmScript = "validate:frontend-app-shell-source-only";
const validatorScript = "validate-frontend-app-shell-source-only.mjs";
const currentSourceMap =
  "docs/reconstruction/app-shell-source-only-current-source-map.md";
const closeoutId = "app-shell-source-only-index-and-desktop-message-boundary";

const files = {
  packageJson: "package.json",
  frontendAggregator: "scripts/validate-frontend.mjs",
  dumpedValidator: "scripts/validate-frontend-dumped.mjs",
  closeouts: "docs/reconstruction/frontend-current-source-closeouts.json",
  closeoutValidator: "scripts/validate-frontend-current-source-closeouts.mjs",
  map: currentSourceMap,
  sourceMap: "docs/reconstruction/source-map.md",
  reconstructionReadme: "docs/reconstruction/README.md",
  rootReadme: "README.md",
  rootReadmeCn: "README-cn.md",
  manifest: "src/restoration/frontend-manifest/index.ts",
  messageRuntime: "src/app/runtime/message.ts",
  popoverRuntime: "src/app/runtime/popover.tsx",
  secretRuntime: "src/app/runtime/secret.ts",
  rootEntry: "src/entry/root.tsx",
  systemService: "src/services/system/index.ts",
  platformActions: "src-tauri/src/application/usecase/platform_actions.rs",
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

function readJson(path) {
  const text = readRequired(path);
  if (!text) return {};
  try {
    return JSON.parse(text);
  } catch (error) {
    failures.push(`${path} JSON 解析失败：${error.message}`);
    return {};
  }
}

function compact(text) {
  return text.replace(/\s+/g, "");
}

function pass(label) {
  console.log(`通过：${label}`);
}

function assertIncludes(label, text, snippets) {
  const compactText = compact(text);
  const missing = snippets.filter(
    (snippet) =>
      !text.includes(snippet) && !compactText.includes(compact(snippet)),
  );
  if (missing.length === 0) {
    pass(label);
    return;
  }
  failures.push(
    `${label} 缺少片段：${missing.map((item) => JSON.stringify(item)).join("、")}`,
  );
}

function assertNotIncludes(label, text, snippets) {
  const matched = snippets.filter((snippet) => text.includes(snippet));
  if (matched.length === 0) {
    pass(label);
    return;
  }
  failures.push(
    `${label} 不允许片段：${matched.map((item) => JSON.stringify(item)).join("、")}`,
  );
}

function findCloseout(closeouts) {
  const matches = (closeouts.closeouts ?? []).filter(
    (item) => item.id === closeoutId,
  );
  if (matches.length !== 1) {
    failures.push(`${closeoutId} 必须唯一，实际数量 ${matches.length}`);
    return null;
  }
  pass("app-shell closeout 唯一");
  return matches[0];
}

function assertRegistrations(packageJson, frontendAggregator) {
  if (packageJson.scripts?.[npmScript] === `node scripts/${validatorScript}`) {
    pass("package.json 注册 app-shell source-only validator");
  } else {
    failures.push(`package.json 未登记 ${npmScript}`);
  }
  assertIncludes("前端聚合验证接入 app-shell source-only validator", frontendAggregator, [
    `["${validatorScript}"]`,
  ]);
}

function assertMap(mapText) {
  assertIncludes("map 写明 app-shell source-only 范围", mapText, [
    "# app-shell source-only 当前源码证据映射",
    "index asset source",
    "remote secret runtime",
    "desktop-message query key",
    "popover consumer",
    "system service wrapper",
    "platform_actions 后端边界",
    "source-only",
  ]);
  assertIncludes("map 写明 desktop-message 与 endpoint 边界", mapText, [
    "DESKTOP_MESSAGE_QUERY_KEY = [\"desktop-message\"]",
    "loadDesktopMessageBoundary",
    "没有可审计 endpoint",
    "不能补未经审计的 endpoint",
  ]);
  assertIncludes("map 写明不声明边界", mapText, [
    "不把 app-shell 的 source-only manifest 状态改成 covered",
    "不给 `desktop-message` 编造可审计 endpoint",
    "不新增 route、runtime initializer、mock handler 或后端命令入口",
    "不声明 update、restart 或 window-path 后端完整恢复",
    "不修改 raw/internal gate-report",
    "不处理 `voice`",
  ]);
  assertIncludes("map 写明验证入口", mapText, [
    `scripts/${validatorScript}`,
    `npm run ${npmScript}`,
    "scripts/validate-frontend-dumped.mjs",
    "scripts/validate-frontend-current-source-closeouts.mjs",
  ]);
  assertNotIncludes("map 不声明完成态", mapText, [
    "app-shell 已 covered",
    "desktop-message endpoint 已恢复",
    "update/restart/window-path 后端完整恢复",
    "full_leaf_100 已完成",
  ]);
}

function assertCloseout(closeouts, closeoutValidator) {
  const closeout = findCloseout(closeouts);
  if (!closeout) return;
  if (closeout.currentSourceMap === currentSourceMap) {
    pass("app-shell closeout 绑定 source-only map");
  } else {
    failures.push(
      `${closeoutId} currentSourceMap 必须为 ${currentSourceMap}，实际为 ${String(closeout.currentSourceMap)}`,
    );
  }
  assertIncludes("app-shell closeout 保持 source-only 和 non-claim", JSON.stringify(closeout), [
    "source-only",
    "desktop-message",
    "不把 app-shell 的 source-only manifest 状态改成 covered。",
    "不声明 desktop-message 存在可审计 endpoint。",
    "不声明 update/restart/window-path 后端完整恢复。",
  ]);
  assertIncludes("closeout 聚合 validator 固定 app-shell source-only map", closeoutValidator, [
    "APP_SHELL_SOURCE_ONLY_CURRENT_SOURCE_MAP",
    currentSourceMap,
    "validateAppShellSourceOnlyCloseout",
    "desktop-message",
    "不处理 `voice`",
  ]);
}

function assertManifest(manifest) {
  assertIncludes("manifest 登记 app-shell index source-only", manifest, [
    "FRONTEND_DUMPED_INDEX_ASSET_SOURCES",
    'owner: "app-shell"',
    'source: "assets/index-CL22l5v8.js"',
    'status: "source-only"',
    '"check_update_installability"',
    '"graceful_restart_for_update"',
    '"open_path"',
    '"import_remote_device_secret_if_empty"',
    '"get_or_create_remote_device_secret"',
  ]);
  assertIncludes("manifest 登记 desktop-message source-only 查询矩阵", manifest, [
    "FRONTEND_DUMPED_APP_SHELL_DESKTOP_MESSAGE_QUERY_MATRIX",
    'module: "app-shell"',
    'queryKey: "desktop-message"',
    'status: "source-only"',
    'runtimeOwner: "src/app/runtime/message.ts"',
    'surface: "src/app/runtime/popover.tsx"',
    "没有可审计 endpoint",
  ]);
  assertNotIncludes("manifest 不把 desktop-message 提升为 covered", manifest, [
    'queryKey: "desktop-message",\n    status: "covered"',
    'owner: "app-shell",\n    source: "assets/index-CL22l5v8.js",\n    status: "covered"',
  ]);
}

function assertMessageRuntime(messageRuntime) {
  assertIncludes("message runtime 锁定 desktop-message source-only owner", messageRuntime, [
    'DESKTOP_MESSAGE_QUERY_KEY = ["desktop-message"]',
    "DESKTOP_MESSAGE_SOURCE_STATUS",
    '"source-only"',
    "DESKTOP_MESSAGE_SOURCE_REASON",
    "missingAuditableEndpoint",
    "loadDesktopMessageBoundary",
    "不能在这里补一个未经审计的 endpoint",
    "return createDesktopMessageQueryData(null)",
    "queryKey: DESKTOP_MESSAGE_QUERY_KEY",
  ]);
  assertNotIncludes("message runtime 不直接调用未经审计 endpoint", messageRuntime, [
    "invokeIpc",
    "fetch(",
    "desktop_message",
    "get_desktop_message",
    "load_desktop_message",
  ]);
}

function assertPopoverConsumer(popoverRuntime) {
  assertIncludes("popover 只消费 message owner hook", popoverRuntime, [
    'import { useDesktopMessageQuery } from "./message";',
    "const query = useDesktopMessageQuery(open)",
    "void query.refetch()",
  ]);
  assertNotIncludes("popover 不 owning desktop-message query", popoverRuntime, [
    "@tanstack/react-query",
    "useQuery(",
    "DESKTOP_MESSAGE_QUERY_KEY",
    '["desktop-message"]',
    "['desktop-message']",
  ]);
}

function assertSecretRuntime(secretRuntime) {
  assertIncludes("secret runtime 保持 remote secret 启动迁移边界", secretRuntime, [
    "ensureRuntimeRemoteDeviceSecret",
    "REMOTE_DEVICE_SECRET_QUERY_KEY",
    "localStorage.getItem",
    "systemService.importRemoteDeviceSecretIfEmpty",
    "systemService.getOrCreateRemoteDeviceSecret",
    "queryClient.setQueryData<string | null>",
    "localStorage.removeItem",
  ]);
}

function assertSystemService(systemService) {
  assertIncludes("system service 保留 app-shell wrapper", systemService, [
    "checkUpdateInstallability: () =>",
    '"check_update_installability"',
    "gracefulRestartForUpdate: () =>",
    '"graceful_restart_for_update"',
    "openPath: (path: string) =>",
    '"open_path"',
    "getMysteryUnlockGrants: () =>",
    '"get_mystery_unlock_grants"',
    "mergeMysteryUnlockGrants: (grants: MysteryRouteGrant[]) =>",
    '"merge_mystery_unlock_grants"',
    "getOrCreateRemoteDeviceSecret: () =>",
    '"get_or_create_remote_device_secret"',
    "importRemoteDeviceSecretIfEmpty: (secret: string) =>",
    '"import_remote_device_secret_if_empty"',
  ]);
}

function assertPlatformActions(platformActions) {
  assertIncludes("platform_actions 保留公开后端边界", platformActions, [
    "pub fn check_update_installability",
    "pub fn graceful_restart_for_update",
    "pub fn open_path",
    "unsupported_status",
  ]);
}

function assertDumpedValidator(dumpedValidator) {
  assertIncludes("validate-frontend-dumped 保留 app-shell source-only 检查", dumpedValidator, [
    "validateIndexAssetSourceManifest",
    'owner: "app-shell", status: "source-only"',
    "validateAppShellRemoteSecretRestorationMatrix",
    "validateAppShellDesktopMessageQueryMatrix",
    "desktop-message query matrix 必须写明 source-only 原因",
    "不能只把 app-shell query 计为跳过",
  ]);
}

function assertIndexes(sourceMap, reconstructionReadme, rootReadme, rootReadmeCn) {
  assertIncludes("source-map 索引 app-shell source-only map", sourceMap, [
    currentSourceMap,
    `scripts/${validatorScript}`,
    "app-shell source-only 当前源码边界",
  ]);
  assertIncludes("reconstruction README 索引 app-shell source-only map", reconstructionReadme, [
    currentSourceMap,
    `scripts/${validatorScript}`,
    "app-shell source-only 当前源码边界",
  ]);
  assertIncludes("根 README 五行归纳表包含 source-only 边界验证", rootReadme, [
    "| 前端 |",
    "source-only 边界验证",
    "current-source 专名验证",
  ]);
  if (rootReadme === rootReadmeCn) {
    pass("README.md 与 README-cn.md 字节级一致");
  } else {
    failures.push("README.md 与 README-cn.md 必须字节级一致");
  }
}

function assertNoForbiddenEntrypointEdits(rootEntry) {
  assertIncludes("entry/root 只挂载 runtime initializer 和 router", rootEntry, [
    "RuntimeInitializer",
    "TrayNavigationInitializer",
    "AppRouter",
  ]);
  assertNotIncludes("entry/root 不新增 desktop-message route 或 mock 入口", rootEntry, [
    "DesktopMessagePopover",
    "desktop-message",
    "mock",
  ]);
}

const packageJson = readJson(files.packageJson);
const closeouts = readJson(files.closeouts);
const contents = Object.fromEntries(
  Object.entries(files).map(([key, path]) => [
    key,
    key === "packageJson" || key === "closeouts" ? "" : readRequired(path),
  ]),
);

assertRegistrations(packageJson, contents.frontendAggregator);
assertMap(contents.map);
assertCloseout(closeouts, contents.closeoutValidator);
assertManifest(contents.manifest);
assertMessageRuntime(contents.messageRuntime);
assertPopoverConsumer(contents.popoverRuntime);
assertSecretRuntime(contents.secretRuntime);
assertSystemService(contents.systemService);
assertPlatformActions(contents.platformActions);
assertDumpedValidator(contents.dumpedValidator);
assertIndexes(
  contents.sourceMap,
  contents.reconstructionReadme,
  contents.rootReadme,
  contents.rootReadmeCn,
);
assertNoForbiddenEntrypointEdits(contents.rootEntry);

for (const path of Object.values(files)) {
  if (!existsSync(pathOf(path))) {
    failures.push(`验证输入文件不存在：${path}`);
  }
}

if (failures.length > 0) {
  console.error("失败：app-shell source-only 当前源码验证未通过");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("通过：app-shell source-only 当前源码 map、closeout、索引和源码边界验证通过");
