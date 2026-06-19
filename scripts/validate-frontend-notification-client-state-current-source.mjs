import { existsSync, readFileSync } from "node:fs";
import { dirname, join, relative, sep } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const failures = [];

const files = {
  packageJson: "package.json",
  frontendAggregator: "scripts/validate-frontend.mjs",
  systemService: "src/services/system/index.ts",
  overviewQuery: "src/features/overview/hooks/query.ts",
  trayShellQuery: "src/features/tray-shell/hooks/query.ts",
  trayShellCache: "src/features/tray-shell/cache/index.ts",
  ipcCommands: "src/contracts/ipc/commands.ts",
  commandMocks: "src/mocks/fixtures/commands.ts",
  e2eMockValidator: "scripts/validate-e2e-mocks.mjs",
  mapDoc: "docs/reconstruction/notification-client-state-current-source-map.md",
};

const npmScript =
  "validate:frontend-notification-client-state-current-source";
const validatorScript =
  "validate-frontend-notification-client-state-current-source.mjs";
const command = "get_notification_client_state";
const wrapperName = "getNotificationClientState";
const handlerName = "notificationClientStateHandler";

function toPath(file) {
  return join(repoRoot, ...file.split("/"));
}

function toRepoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function readRequired(file) {
  const path = toPath(file);
  if (!existsSync(path)) {
    failures.push(`缺少必要文件：${file}`);
    return "";
  }
  return readFileSync(path, "utf8");
}

function readJson(file) {
  const text = readRequired(file);
  if (!text) return {};
  try {
    return JSON.parse(text);
  } catch (error) {
    failures.push(`${file} 不是合法 JSON：${error.message}`);
    return {};
  }
}

function compact(text) {
  return text.replace(/\s+/g, "");
}

function pass(label) {
  console.log(`通过：${label}`);
}

function fail(label, detail = "") {
  failures.push(`${label}${detail ? `：${detail}` : ""}`);
}

function assertIncludes(label, text, snippets) {
  const compactText = compact(text);
  const missing = snippets.filter(
    (snippet) => !text.includes(snippet) && !compactText.includes(compact(snippet)),
  );
  if (missing.length === 0) {
    pass(label);
    return;
  }
  fail(label, `缺少片段 ${missing.map((item) => JSON.stringify(item)).join("、")}`);
}

function assertNotIncludes(label, text, snippets) {
  const matched = snippets.filter((snippet) => text.includes(snippet));
  if (matched.length === 0) {
    pass(label);
    return;
  }
  fail(label, `不允许片段 ${matched.map((item) => JSON.stringify(item)).join("、")}`);
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

function assertPackageAndAggregator(packageJson, frontendAggregator) {
  if (packageJson.scripts?.[npmScript] === `node scripts/${validatorScript}`) {
    pass("package.json 注册 notification client state current-source validator");
  } else {
    fail(
      "package.json 注册 notification client state current-source validator",
      String(packageJson.scripts?.[npmScript]),
    );
  }

  assertIncludes("前端聚合验证纳入 notification client state validator", frontendAggregator, [
    `["${validatorScript}"]`,
  ]);
}

function assertSystemService(systemService) {
  assertIncludes("system service 经统一 IPC wrapper 暴露 notification client state", systemService, [
    'import { invokeIpc } from "@/contracts/ipc";',
    "NotificationClientStatePayload",
    `${wrapperName}: () =>`,
    "invokeIpc<CoreEnvelope<NotificationClientStatePayload>>(",
    `"${command}"`,
  ]);

  assertNotIncludes("system service 不直接从 Tauri core 或窗口对象绕过 IPC wrapper", systemService, [
    '@tauri-apps/api/core',
    '@tauri-apps/api/tauri',
    'window.__TAURI__',
    'window.__TAURI_INTERNALS__',
    '__TAURI_INVOKE__',
  ]);
}

function assertQueryOwners(overviewQuery, trayShellQuery, trayShellCache) {
  assertIncludes("overview query 通过 overview cache runner 读取 notification client state", overviewQuery, [
    "OVERVIEW_NOTIFICATION_STATE_QUERY_KEY",
    "OverviewCache",
    "runOverviewQuery",
    "queryKey: OVERVIEW_NOTIFICATION_STATE_QUERY_KEY",
    "runOverviewQuery(queryClient, OVERVIEW_NOTIFICATION_STATE_QUERY_KEY",
    `systemService.${wrapperName}()`,
  ]);
  assertNotMatches("overview query 不直接写入或取消 TanStack cache", overviewQuery, [
    [/\bsetQueryData\s*\(/, "overview query 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "overview query 不得直接 invalidateQueries"],
    [/\bcancelQueries\s*\(/, "overview query 不得直接 cancelQueries"],
    [/\buseMutation\b/, "overview query 不得 owning mutation"],
  ]);

  assertIncludes("tray-shell query 通过 tray-shell cache runner 读取 notification client state", trayShellQuery, [
    "TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY",
    "TrayShellCache",
    "runTrayShellQuery",
    "queryKey: TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY",
    "runTrayShellQuery(",
    `systemService.${wrapperName}()`,
  ]);
  assertNotMatches("tray-shell query 不直接写入或取消 TanStack cache", trayShellQuery, [
    [/\bsetQueryData\s*\(/, "tray-shell query 不得直接 setQueryData"],
    [/\binvalidateQueries\s*\(/, "tray-shell query 不得直接 invalidateQueries"],
    [/\bcancelQueries\s*\(/, "tray-shell query 不得直接 cancelQueries"],
    [/\buseMutation\b/, "tray-shell query 不得 owning mutation"],
  ]);

  assertIncludes("tray-shell cache owning notification client query key 与 runner", trayShellCache, [
    "TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY",
    '"notification-client"',
    "writeTrayShellQueryPayload",
    "runTrayShellQuery",
    "queryClient.setQueryData<TPayload>(queryKey, payload)",
    "writeTrayShellAuthoritativePayload(queryClient",
  ]);
}

function assertIpcAndMocks(ipcCommands, commandMocks) {
  assertIncludes("IPC command contract 覆盖 get_notification_client_state", ipcCommands, [
    '"domain": "system"',
    `"command": "${command}"`,
    `"${wrapperName}"`,
    '"argKeys": []',
    '"tier": "P1"',
  ]);

  assertIncludes("E2E command fixture 覆盖 notification client state handler", commandMocks, [
    "NotificationClientStatePayload",
    `const ${handlerName}: IpcCommandHandler`,
    "createRaceAwareIpcEnvelope(context)",
    "deviceId:",
    "notificationsSince:",
    `${command}: ${handlerName}`,
  ]);
  assertNotIncludes("notification client state mock 不声明真实平台通知副作用", commandMocks, [
    "tray native notification",
    "Notification.requestPermission",
    "new Notification(",
    "platform notification",
  ]);
}

function assertE2eValidatorCoverage(e2eMockValidator) {
  assertIncludes("validate-e2e-mocks 仍覆盖 notification client state command handler", e2eMockValidator, [
    "validateOverviewMockPayloadHandlers",
    `["${command}", "${handlerName}"]`,
    "NotificationClientStatePayload",
    "validateOverviewMockPayloadHandlers();",
  ]);
}

function assertMapDoc(mapDoc) {
  assertIncludes("map 文档保留 notification client state current-source 范围", mapDoc, [
    "get_notification_client_state current-source",
    command,
    "settings 持久化",
    "不修改 raw/internal gate-report",
    "不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成",
  ]);
  assertIncludes("map 文档明确不声明通知运行时、平台通知或 tray native notification 恢复", mapDoc, [
    "不声明通知客户端运行时",
    "托盘通知",
    "平台通知",
    "tray native notification",
    "已经恢复",
  ]);
  assertIncludes("map 文档明确不碰 voice", mapDoc, [
    "不碰 `voice`",
    "不把 notification client state 接入 `voice`",
  ]);
  assertIncludes("map 文档登记专门前端 validator 入口", mapDoc, [
    `scripts/${validatorScript}`,
    `npm run ${npmScript}`,
  ]);
  assertNotIncludes("map 文档不声明通知功能完整恢复", mapDoc, [
    "通知功能已完整恢复",
    "通知功能已经完整恢复",
    "notification full leaf complete",
    "full_leaf_100 已完成",
  ]);
}

const packageJson = readJson(files.packageJson);
const texts = {
  frontendAggregator: readRequired(files.frontendAggregator),
  systemService: readRequired(files.systemService),
  overviewQuery: readRequired(files.overviewQuery),
  trayShellQuery: readRequired(files.trayShellQuery),
  trayShellCache: readRequired(files.trayShellCache),
  ipcCommands: readRequired(files.ipcCommands),
  commandMocks: readRequired(files.commandMocks),
  e2eMockValidator: readRequired(files.e2eMockValidator),
  mapDoc: readRequired(files.mapDoc),
};

assertPackageAndAggregator(packageJson, texts.frontendAggregator);
assertSystemService(texts.systemService);
assertQueryOwners(
  texts.overviewQuery,
  texts.trayShellQuery,
  texts.trayShellCache,
);
assertIpcAndMocks(texts.ipcCommands, texts.commandMocks);
assertE2eValidatorCoverage(texts.e2eMockValidator);
assertMapDoc(texts.mapDoc);

for (const file of Object.values(files)) {
  if (!existsSync(toPath(file))) {
    fail("validator 输入文件实际存在", toRepoPath(toPath(file)));
  }
}

if (failures.length > 0) {
  console.error("FAIL：notification client state 前端 current-source 验证失败");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS：notification client state 前端 current-source 验证通过");
