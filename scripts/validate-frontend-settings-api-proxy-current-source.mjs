import { existsSync, readFileSync } from "node:fs";
import { dirname, join, relative, sep } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const failures = [];

const files = {
  validator: "scripts/validate-frontend-settings-api-proxy-current-source.mjs",
  frontendAggregator: "scripts/validate-frontend.mjs",
  packageJson: "package.json",
  mapDoc: "docs/reconstruction/settings-api-proxy-current-source-map.md",
  sourceMap: "docs/reconstruction/source-map.md",
  reconstructionReadme: "docs/reconstruction/README.md",
  settingsBackendMap: "docs/reconstruction/settings-current-source-evidence-map.md",
  systemService: "src/services/system/index.ts",
  settingsService: "src/services/settings/index.ts",
  apiFacade: "src/lib/api.ts",
  ipcCommands: "src/contracts/ipc/commands.ts",
  settingsContract: "src/features/settings/contract.ts",
  settingsMutation: "src/features/settings/hooks/mutation.ts",
  settingsPageHook: "src/features/settings/hooks/page.ts",
  settingsCache: "src/features/settings/cache/index.ts",
  proxyDialog: "src/features/settings/dialogs/proxy.tsx",
  modePanel: "src/features/settings/panels/mode.tsx",
  settingsPage: "src/features/settings/components/page.tsx",
  commandMocks: "src/mocks/fixtures/commands.ts",
  e2eMockValidator: "scripts/validate-e2e-mocks.mjs",
};

const npmScript = "validate:frontend-settings-api-proxy-current-source";
const validatorScript = "validate-frontend-settings-api-proxy-current-source.mjs";
const mapDocPath = "docs/reconstruction/settings-api-proxy-current-source-map.md";
const apiProxyCommands = [
  "set_api_proxy_config",
  "test_api_proxy_config",
  "detect_api_proxy_config",
];
const apiProxyWrappers = [
  "setApiProxyConfig",
  "testApiProxyConfig",
  "detectApiProxyConfig",
];
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
  for (const [, message] of matched) fail(label, message);
}

function extractBalancedBlock(source, openBraceIndex) {
  if (openBraceIndex < 0) return "";
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

function extractConstObjectBody(source, name) {
  const marker = `const ${name}`;
  const markerIndex = source.indexOf(marker);
  if (markerIndex < 0) {
    fail(`${name} 对象存在`);
    return "";
  }
  const openBraceIndex = source.indexOf("{", markerIndex);
  const body = extractBalancedBlock(source, openBraceIndex);
  if (!body) fail(`${name} 对象可解析`);
  return body;
}

function assertPackageAndAggregator(packageJson, frontendAggregator) {
  if (packageJson.scripts?.[npmScript] === `node scripts/${validatorScript}`) {
    pass("package.json 登记 settings API proxy 专名验证入口");
  } else {
    fail("package.json 登记 settings API proxy 专名验证入口", String(packageJson.scripts?.[npmScript]));
  }

  assertIncludes("前端聚合验证纳入 settings API proxy 专名验证器", frontendAggregator, [
    `["${validatorScript}"]`,
  ]);
}

function assertServiceAndApiChain(systemService, settingsService, apiFacade) {
  assertIncludes("system service 收口三条 API proxy IPC", systemService, [
    "ApiModePayload",
    "ApiProxyDetectPayload",
    "ApiProxyTestPayload",
    "setApiProxyConfig: (mode: ApiProxyMode, url?: string | null) =>",
    'invokeIpc<CoreEnvelope<ApiModePayload>>("set_api_proxy_config"',
    "testApiProxyConfig: (mode: ApiProxyMode, url?: string | null) =>",
    'invokeIpc<CoreEnvelope<ApiProxyTestPayload>>("test_api_proxy_config"',
    "detectApiProxyConfig: () =>",
    'invokeIpc<CoreEnvelope<ApiProxyDetectPayload>>("detect_api_proxy_config")',
  ]);
  assertNotIncludes("system service 的 API proxy 链路不接 voice", systemService, [
    "voiceService",
    "loadVoice",
    "saveVoice",
    "testVoice",
    "startVoice",
  ]);

  assertIncludes("settings service 只代理 system service 的 API proxy facade", settingsService, [
    "setApiProxyConfig: systemService.setApiProxyConfig",
    "testApiProxyConfig: systemService.testApiProxyConfig",
    "detectApiProxyConfig: systemService.detectApiProxyConfig",
  ]);

  assertIncludes("src/lib/api.ts 暴露统一 API facade", apiFacade, [
    "setApiProxyConfig: settingsService.setApiProxyConfig",
    "testApiProxyConfig: settingsService.testApiProxyConfig",
    "detectApiProxyConfig: settingsService.detectApiProxyConfig",
  ]);
}

function assertIpcContract(ipcCommands, settingsContract) {
  for (const command of apiProxyCommands) {
    assertIncludes(`IPC command contract 覆盖 ${command}`, ipcCommands, [
      '"domain": "settings"',
      `"command": "${command}"`,
      '"source": "minified"',
      '"tier": "P1"',
    ]);
  }
  assertIncludes("IPC command contract 保留 API proxy wrapper 和参数", ipcCommands, [
    '"setApiProxyConfig"',
    '"testApiProxyConfig"',
    '"detectApiProxyConfig"',
    '"mode"',
    '"url"',
    '"argKeys": []',
  ]);

  assertIncludes("settings contract dump 记录三条 API proxy 命令", settingsContract, [
    ...apiProxyCommands,
    ...apiProxyWrappers,
    '"argKeys": [',
    '"mode"',
    '"url"',
    '"controlFlowCount": 1',
  ]);
}

function assertMutationAndCache(settingsMutation, settingsCache) {
  assertIncludes("API proxy mutation hook 使用 settings service facade", settingsMutation, [
    "useApiProxyMutations",
    "settingsService.setApiProxyConfig(mode, normalizeSettingsProxyUrl(mode, url))",
    "settingsService.testApiProxyConfig(mode, normalizeSettingsProxyUrl(mode, url))",
    "settingsService.detectApiProxyConfig()",
    "writeSettingsApiProxyMutationPayload(queryClient, result.data)",
    "onTested?.(result.data)",
    "onDetected?.(result.data)",
  ]);
  assertNotIncludes("API proxy mutation hook 不直接写 TanStack cache", settingsMutation, [
    "setQueryData(",
  ]);

  assertIncludes("settings cache owning API proxy mutation payload 写回 runtime snapshot", settingsCache, [
    "writeSettingsApiProxyMutationPayload",
    "payload: ApiModePayload",
    "api: payload.api",
    "SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY",
  ]);
}

function assertControllerAndUi(pageHook, proxyDialog, modePanel, settingsPage) {
  assertIncludes("settings 页面控制器持有 API proxy 短生命周期 UI 状态", pageHook, [
    "const [proxyDialogOpen, setProxyDialogOpen] = useState(false)",
    'const [draftProxyMode, setDraftProxyMode] = useState<ApiProxyMode>("direct")',
    'const [draftProxyUrl, setDraftProxyUrl] = useState("")',
    "const [proxyTestResult, setProxyTestResult] = useState<ApiProxyTestPayload | null>(null)",
    "runtimeState.currentProxy.mode",
    "runtimeState.currentProxy.url",
    "manualProxyMissing",
    "handleTestProxy",
    "handleDetectProxy",
    "handleSaveProxy",
  ]);
  assertIncludes("settings 页面控制器将 API proxy 动作交给 busy action 和 mutation", pageHook, [
    "detectProxyAction.run",
    "testProxyAction.run",
    "saveProxyAction.run",
    "detectProxyMutation.mutateAsync()",
    "testProxyMutation.mutateAsync({ mode: draftProxyMode, url: draftProxyUrl })",
    "saveProxyMutation.mutateAsync({ mode: draftProxyMode, url: draftProxyUrl })",
    "onRefreshUsageStatus?.()",
    "formatSettingsProxySaveError(t, error)",
  ]);

  assertIncludes("mode panel 只打开 API proxy 对话框并展示当前模式", modePanel, [
    "modeSwitch.currentProxy.mode",
    "settingsProxyModeBadgeLabel(t, modeSwitch.currentProxy.mode)",
    "controller.actions.openProxyDialog",
    't("settings.apiProxy")',
    't("settings.apiProxyDesc")',
  ]);

  assertIncludes("API proxy dialog 只消费 controller 状态和动作", proxyDialog, [
    "SettingsApiProxyDialog",
    "controller.proxyDialog",
    "formatSettingsProxyTestResult",
    't("settings.apiProxyDialogTitle")',
    't("settings.apiProxyModeDirect")',
    't("settings.apiProxyModeManual")',
    "controller.actions.setProxyMode",
    "controller.actions.setProxyUrl",
    "controller.actions.detectProxy",
    "controller.actions.testProxy",
    "controller.actions.saveProxy",
    "dialog.manualProxyMissing",
  ]);
  assertNotIncludes("API proxy dialog 不直接调用 service/API/IPC", proxyDialog, [
    "settingsService",
    "systemService",
    "invokeIpc",
    "useMutation",
    "useQuery",
  ]);

  assertIncludes("settings page 装配 API proxy dialog", settingsPage, [
    "SettingsApiProxyDialog",
    "useSettingsPageController(props)",
    "<SettingsModeSwitchPanel controller={controller} />",
    "<SettingsApiProxyDialog controller={controller} />",
  ]);
}

function assertMockBoundary(commandMocks, e2eMockValidator) {
  const settingsHandlers = extractConstObjectBody(commandMocks, "settingsCommandHandlers");
  assertIncludes("mock fixture 保留 race-aware envelope 和默认 evidence fixture 兜底", commandMocks, [
    "createDefaultIpcCommandHandler",
    "createEvidenceBackedIpcFixture",
    "const defaultHandler = createDefaultIpcCommandHandler();",
    "settingsCommandHandlers[definition.command] ??",
    "defaultHandler",
  ]);
  assertIncludes("settings API proxy mock 当前使用专用 handler 且只模拟 env/probe payload", commandMocks, [
    "function createApiProxyTestPayload",
    "const apiProxyMockEnvironmentCandidates",
    "const apiProxyMockReachableUrls",
    "setApiProxyConfigHandler",
    "testApiProxyConfigHandler",
    "detectApiProxyConfigHandler",
    "statusCode: null",
    "found: true",
    "mode: \"manual\"",
    "probe: createApiProxyTestPayload(\"manual\", apiProxyMockEnvironmentCandidates[0])",
    "mockCopy(",
    "settings.apiProxyTestReachableManual",
    "settings.apiProxyTestReachableDirect",
    "settings.apiProxyTestInvalidConfig",
    "settings.apiProxyTestNetworkFailed",
  ]);
  assertIncludes("settings command handler 映射三条 API proxy 命令", settingsHandlers, [
    "detect_api_proxy_config: detectApiProxyConfigHandler",
    "set_api_proxy_config: setApiProxyConfigHandler",
    "test_api_proxy_config: testApiProxyConfigHandler",
  ]);
  assertNotIncludes("mock fixture 不调用真实网络或系统代理 API", commandMocks, [
    "real network probe",
    "real system proxy scan",
    "fetch(",
    "XMLHttpRequest",
    "TcpStream",
    "networksetup",
    "system proxy scan",
    "network probe completed",
  ]);

  assertIncludes("E2E mock validator 保留 settings handler 聚合边界", e2eMockValidator, [
    "const settingsCommandHandlers",
    "settingsCommandHandlers[definition.command] ??",
    "validateStatefulSystemHotspotUsageMysteryMocks();",
  ]);
  assertIncludes("E2E mock validator 保留 API proxy env/probe 模拟断言", e2eMockValidator, [
    "const apiProxyMockEnvironmentCandidates",
    "const apiProxyMockReachableUrls",
    "apiProxyMockReachableUrls.has(normalizedUrl)",
  ]);
  assertNotIncludes("E2E mock validator 不把 API proxy 写成真实 OS/network 调用", e2eMockValidator, [
    "real network probe",
    "system proxy scan",
    "真实网络探测完成",
    "系统代理扫描完成",
  ]);
}

function assertDocs(mapDoc, sourceMap, reconstructionReadme, settingsBackendMap) {
  assertIncludes("settings API proxy map 写明中文标题和验证入口", mapDoc, [
    "# settings API proxy 当前源码映射",
    "## 已做",
    "## 未做",
    "## 验证入口",
    `scripts/${validatorScript}`,
    `npm run ${npmScript}`,
  ]);
  assertIncludes("settings API proxy map 写明当前源码链路", mapDoc, [
    files.systemService,
    files.settingsService,
    files.apiFacade,
    files.ipcCommands,
    files.settingsContract,
    files.settingsMutation,
    files.settingsPageHook,
    files.settingsCache,
    files.proxyDialog,
    files.modePanel,
    files.settingsPage,
    files.commandMocks,
    files.e2eMockValidator,
    "专用 mock handler",
    "保存结果写回 snapshot",
    "statusCode: null",
    ...apiProxyCommands,
  ]);
  assertIncludes("settings API proxy map 写明未声明边界", mapDoc, [
    "不接入 voice",
    "前端不直接执行真实网络探测或系统代理扫描",
    "后端 current-source 只声明受限平台端口探针",
    "不声明 100% 还原",
    "不声明 full leaf 完成",
    "不声明全功能完成",
  ]);
  assertNotMatches("settings API proxy map 不包含正向完成声明", mapDoc, [
    [/(^|[^不])声明\s*(?:100%|百分百|full leaf|full_leaf|full_leaf_100|全功能|真实网络探测|系统代理扫描).*?(?:完成|还原|接入)/u, "包含正向完成声明"],
    [/(?:已经|已)\s*(?:100%|百分百|full leaf|full_leaf|full_leaf_100|全功能|真实网络探测|系统代理扫描).*?(?:完成|还原|接入)/u, "包含已完成式声明"],
  ]);
  assertNotMatches("settings API proxy map 不包含本机路径或凭据", mapDoc, [
    [/[A-Za-z]:[\\/]+Users[\\/]+[^`"'\s]+/u, "包含本机用户目录路径"],
    [/(?:sk|ghp|gho|github_pat)_[A-Za-z0-9_]{10,}/u, "包含疑似凭据"],
    [/BEGIN (?:RSA |OPENSSH |PRIVATE )?PRIVATE KEY/u, "包含私钥片段"],
  ]);

  assertIncludes("source-map 索引 settings API proxy map 和验证脚本", sourceMap, [
    mapDocPath,
    `scripts/${validatorScript}`,
    "settings API proxy 当前源码链路",
  ]);
  assertIncludes("reconstruction README 索引 settings API proxy map 和验证脚本", reconstructionReadme, [
    mapDocPath,
    `scripts/${validatorScript}`,
    "settings API proxy 当前源码链路",
  ]);
  assertIncludes("settings 后端 owner map 保留 API proxy 受限探针边界", settingsBackendMap, [
    "API proxy",
    "平台端口",
    "200ms TCP",
    "voice",
  ]);

}

const packageJson = readJson(files.packageJson);
const texts = Object.fromEntries(
  Object.entries(files).map(([key, file]) => [key, readRequired(file)]),
);

assertPackageAndAggregator(packageJson, texts.frontendAggregator);
assertServiceAndApiChain(texts.systemService, texts.settingsService, texts.apiFacade);
assertIpcContract(texts.ipcCommands, texts.settingsContract);
assertMutationAndCache(texts.settingsMutation, texts.settingsCache);
assertControllerAndUi(
  texts.settingsPageHook,
  texts.proxyDialog,
  texts.modePanel,
  texts.settingsPage,
);
assertMockBoundary(texts.commandMocks, texts.e2eMockValidator);
assertDocs(
  texts.mapDoc,
  texts.sourceMap,
  texts.reconstructionReadme,
  texts.settingsBackendMap,
);

for (const file of Object.values(files)) {
  if (file === "README.md" || file.endsWith("/../README.md")) {
    fail("验证器读取范围不得触碰根 README");
  }
  if (!existsSync(toPath(file))) {
    fail("验证器输入文件实际存在", toRepoPath(toPath(file)));
  }
}

if (failures.length > 0) {
  console.error("FAIL：settings API proxy 前端 current-source 验证失败");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS：settings API proxy 前端 current-source 映射与验证入口通过");
