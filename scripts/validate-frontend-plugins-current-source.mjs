import { existsSync, readFileSync } from "node:fs";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const failures = [];

const CLOSEOUT_ID = "plugins-current-route-api-command-mock-chain";
const MAP_PATH = "docs/reconstruction/plugins-current-source-evidence-map.md";
const CLOSEOUT_PATH = "docs/reconstruction/frontend-current-source-closeouts.json";
const QUEUE_PATH = "docs/reconstruction/frontend-leaf-restoration-queue.json";
const RAW_ACCEPTANCE =
  "evidence/full-chain/raw/aimami/1.0.9/windows/plugins_frontend_acceptance_mapping/evidence/acceptance-matrix.json";
const WINDOWS_FRONTEND_DOC =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-plugins/frontend/FRONTEND-FULL-CHAIN-109.md";
const MACOS_FRONTEND_DOC =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-plugins/frontend/FRONTEND-FULL-CHAIN-109.md";
const PLUGINS_COMMAND_CONTRACT = "src/features/plugins/contract.ts";
const IPC_COMMAND_CONTRACT = "src/contracts/ipc/commands.ts";

const PLUGIN_COMMAND_WRAPPERS = [
  ["list_plugins", "listPlugins"],
  ["toggle_plugin", "togglePlugin"],
  ["get_plugin_config", "getPluginConfig"],
  ["update_plugin_config", "updatePluginConfig"],
];

const SOURCE_SIGNAL_REQUIREMENTS = new Map([
  [
    "src/routes/registry/registry.tsx",
    [
      'route: "plugins"',
      'titleKey: "nav.plugins"',
      "icon: Puzzle",
      "visible: true",
      'highIoQueryKeys: routeHighIoQueryKeys("plugins", [["plugins-list"]])',
      'import("@/routes/desktop/main/plugins/page")',
    ],
  ],
  [
    "src/routes/desktop/main/plugins/page.tsx",
    ["PluginsFeature", "return <PluginsFeature />"],
  ],
  [
    "src/features/plugins/Content.tsx",
    ["DUMPED_PLUGINS_COMMANDS", "<PluginsPage />", "DumpedContractBoundary"],
  ],
  [
    PLUGINS_COMMAND_CONTRACT,
    [
      "DUMPED_PLUGINS_COMMANDS",
      '"command": "list_plugins"',
      '"command": "toggle_plugin"',
      '"command": "get_plugin_config"',
      '"command": "update_plugin_config"',
    ],
  ],
  [
    IPC_COMMAND_CONTRACT,
    [
      "IPC_COMMAND_DEFINITIONS",
      '"domain": "runtime-extensions"',
      '"command": "list_plugins"',
      '"command": "toggle_plugin"',
      '"command": "get_plugin_config"',
      '"command": "update_plugin_config"',
      '"wrapperNames"',
    ],
  ],
  [
    "src/features/plugins/panels/page.tsx",
    [
      "controller.togglePlugin.run",
      "plugins.empty",
      "plugins.enabledCount",
      "controller.pluginsQuery.isLoading",
      "<Switch",
    ],
  ],
  [
    "src/features/plugins/hooks/query.ts",
    [
      "PLUGINS_LIST_QUERY_KEY",
      "pluginsService.list()",
      "writePluginsListQueryPayload",
      "staleTime: Infinity",
    ],
  ],
  [
    "src/features/plugins/hooks/refresh.ts",
    ["pluginsService.list()", "writePluginsRefreshPayload"],
  ],
  [
    "src/features/plugins/hooks/mutation.ts",
    [
      "pluginsService.toggle",
      "optimisticallyUpdatePluginsToggle",
      "rollbackPluginsToggle",
      "writePluginsMutationPayload",
    ],
  ],
  [
    "src/services/plugins/index.ts",
    [
      "runtimeExtensionsService",
      "list: () => runtimeExtensionsService.listPlugins()",
      "runtimeExtensionsService.togglePlugin(id, enabled)",
      "runtimeExtensionsService.getPluginConfig(id)",
      "runtimeExtensionsService.updatePluginConfig(id, settings)",
    ],
  ],
  [
    "src/services/runtime-extensions/index.ts",
    [
      'invokeIpc<RuntimeExtensionListEnvelope>("list_plugins")',
      'invokeIpc<RuntimeExtensionToggleEnvelope>("toggle_plugin"',
      'invokeIpc<RuntimeExtensionConfigEnvelope>("get_plugin_config"',
      'invokeIpc<RuntimeExtensionConfigEnvelope>("update_plugin_config"',
    ],
  ],
  [
    "src/mocks/fixtures/commands.ts",
    [
      "const listPluginsHandler",
      "const togglePluginHandler",
      "const getPluginConfigHandler",
      "const updatePluginConfigHandler",
      "const pluginsCommandHandlers",
      "list_plugins: listPluginsHandler",
      "toggle_plugin: togglePluginHandler",
      "get_plugin_config: getPluginConfigHandler",
      "update_plugin_config: updatePluginConfigHandler",
    ],
  ],
]);

function repoPath(path) {
  return join(repoRoot, path);
}

function readText(path) {
  const fullPath = repoPath(path);
  if (!existsSync(fullPath)) {
    failures.push(`missing file: ${path}`);
    return "";
  }
  return readFileSync(fullPath, "utf8");
}

function readJson(path) {
  const text = readText(path);
  if (!text) return null;
  try {
    return JSON.parse(text);
  } catch (error) {
    failures.push(`${path} is not valid JSON: ${error.message}`);
    return null;
  }
}

function requireIncludes(path, snippets) {
  const text = readText(path);
  for (const snippet of snippets) {
    if (!text.includes(snippet)) {
      failures.push(`${path} missing snippet: ${snippet}`);
    }
  }
  return text;
}

function requireArraySet(label, actual, expected) {
  if (!Array.isArray(actual)) {
    failures.push(`${label} must be an array`);
    return;
  }
  const actualSet = new Set(actual);
  const expectedSet = new Set(expected);
  for (const value of expectedSet) {
    if (!actualSet.has(value)) failures.push(`${label} missing: ${value}`);
  }
  for (const value of actualSet) {
    if (!expectedSet.has(value)) failures.push(`${label} unexpected: ${value}`);
  }
}

function commandBlock(path, text, commandName) {
  const needle = `"command": "${commandName}"`;
  const commandIndex = text.indexOf(needle);
  if (commandIndex === -1) {
    failures.push(`${path} missing command contract: ${commandName}`);
    return "";
  }
  const start = text.lastIndexOf("\n  {", commandIndex);
  const end = text.indexOf("\n  }", commandIndex);
  if (start === -1 || end === -1) {
    failures.push(`${path} cannot isolate command contract: ${commandName}`);
    return "";
  }
  return text.slice(start, end + 5);
}

function validateDumpedAndIpcContracts() {
  const dumpedText = requireIncludes(PLUGINS_COMMAND_CONTRACT, ["DUMPED_PLUGINS_COMMANDS"]);
  const ipcText = requireIncludes(IPC_COMMAND_CONTRACT, ["IPC_COMMAND_DEFINITIONS"]);

  for (const [commandName, wrapperName] of PLUGIN_COMMAND_WRAPPERS) {
    const dumpedBlock = commandBlock(PLUGINS_COMMAND_CONTRACT, dumpedText, commandName);
    if (dumpedBlock && !dumpedBlock.includes(`"${wrapperName}"`)) {
      failures.push(`${PLUGINS_COMMAND_CONTRACT} ${commandName} missing wrapper ${wrapperName}`);
    }

    const ipcBlock = commandBlock(IPC_COMMAND_CONTRACT, ipcText, commandName);
    if (ipcBlock && !ipcBlock.includes('"domain": "runtime-extensions"')) {
      failures.push(`${IPC_COMMAND_CONTRACT} ${commandName} must stay in runtime-extensions domain`);
    }
    if (ipcBlock && !ipcBlock.includes(`"${wrapperName}"`)) {
      failures.push(`${IPC_COMMAND_CONTRACT} ${commandName} missing wrapper ${wrapperName}`);
    }
  }

  for (const commandName of ["get_plugin_config", "update_plugin_config"]) {
    const dumpedBlock = commandBlock(PLUGINS_COMMAND_CONTRACT, dumpedText, commandName);
    if (!dumpedBlock) continue;
    if (!dumpedBlock.includes('"controlFlowCount": 0')) {
      failures.push(`${PLUGINS_COMMAND_CONTRACT} ${commandName} must remain non-visible contract-only dumped signal`);
    }
    if (dumpedBlock.includes('"assets/plugins-page-BOi_QT1c.js"')) {
      failures.push(`${PLUGINS_COMMAND_CONTRACT} ${commandName} must not be promoted to plugins page UI leaf`);
    }
  }
}

function validateRawAcceptance() {
  const raw = readJson(RAW_ACCEPTANCE);
  if (!raw) return;

  const commands = new Map((raw.commands ?? []).map((item) => [item.command, item]));
  for (const commandName of ["list_plugins", "toggle_plugin"]) {
    const command = commands.get(commandName);
    if (!command) {
      failures.push(`${RAW_ACCEPTANCE} missing command ${commandName}`);
      continue;
    }
    if (command.uiTriggerObserved !== true || command.blocked !== false) {
      failures.push(
        `${commandName} must stay visible/unblocked in raw acceptance; got uiTriggerObserved=${String(
          command.uiTriggerObserved,
        )} blocked=${String(command.blocked)}`,
      );
    }
  }

  for (const commandName of ["get_plugin_config", "update_plugin_config"]) {
    const command = commands.get(commandName);
    if (!command) {
      failures.push(`${RAW_ACCEPTANCE} missing command ${commandName}`);
      continue;
    }
    if (command.uiTriggerObserved !== false || command.blocked !== true) {
      failures.push(
        `${commandName} must stay non-visible/blocked in raw acceptance; got uiTriggerObserved=${String(
          command.uiTriggerObserved,
        )} blocked=${String(command.blocked)}`,
      );
    }
  }

  for (const [key, expected] of [
    ["consumerStartReady", false],
    ["readyToImplement", false],
    ["implementation_use", false],
    ["gate_accepted", false],
    ["full_leaf_100", false],
  ]) {
    if (raw.globalGate?.[key] !== expected) {
      failures.push(`${RAW_ACCEPTANCE} globalGate.${key}=${String(raw.globalGate?.[key])}`);
    }
  }
}

function validateHistoricalFrontendDocs() {
  for (const doc of [WINDOWS_FRONTEND_DOC, MACOS_FRONTEND_DOC]) {
    requireIncludes(doc, [
      "No `src/components/plugins` route/page is present.",
      "No `list_plugins`, `toggle_plugin`, `get_plugin_config`, or `update_plugin_config` wrapper exists",
      "No plugin registry bootstrap slice, sidebar route, page mount, query field, or default shell load point exists",
      "Consumers implementing upstream plugin registry parity must add the missing frontend route/API/command/mock chain.",
    ]);
  }
}

function validateCurrentSource() {
  for (const [path, snippets] of SOURCE_SIGNAL_REQUIREMENTS) {
    requireIncludes(path, snippets);
  }
}

function validateCloseout() {
  const closeouts = readJson(CLOSEOUT_PATH);
  if (!closeouts) return;

  const closeout = closeouts.closeouts?.find?.((item) => item.id === CLOSEOUT_ID);
  if (!closeout) {
    failures.push(`${CLOSEOUT_PATH} missing ${CLOSEOUT_ID}`);
    return;
  }

  if (closeout.module !== "plugins") failures.push(`${CLOSEOUT_ID} module=${String(closeout.module)}`);
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${CLOSEOUT_ID} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== MAP_PATH) {
    failures.push(`${CLOSEOUT_ID} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }
  if (closeout.rawAcceptance !== RAW_ACCEPTANCE) {
    failures.push(`${CLOSEOUT_ID} rawAcceptance=${String(closeout.rawAcceptance)}`);
  }
  requireArraySet(`${CLOSEOUT_ID} closedCommands`, closeout.closedCommands, [
    "list_plugins",
    "toggle_plugin",
  ]);
  requireArraySet(`${CLOSEOUT_ID} notClosedCommands`, closeout.notClosedCommands, [
    "get_plugin_config",
    "update_plugin_config",
  ]);
  requireArraySet(`${CLOSEOUT_ID} closedFrontendDocs`, closeout.closedFrontendDocs, [
    MACOS_FRONTEND_DOC,
    WINDOWS_FRONTEND_DOC,
  ]);

  const manifestStatuses = new Map(
    (closeout.closedManifestStatuses ?? []).map((item) => [item.command, item.status]),
  );
  for (const commandName of ["get_plugin_config", "update_plugin_config"]) {
    if (manifestStatuses.get(commandName) !== "contract-service-only") {
      failures.push(`${CLOSEOUT_ID} ${commandName} must remain contract-service-only`);
    }
  }

  const signalFiles = new Set((closeout.requiredSourceSignals ?? []).map((item) => item.file));
  for (const expected of [MAP_PATH, ...SOURCE_SIGNAL_REQUIREMENTS.keys()]) {
    if (!signalFiles.has(expected)) {
      failures.push(`${CLOSEOUT_ID} requiredSourceSignals missing ${expected}`);
    }
  }
}

function validateQueue() {
  const queue = readJson(QUEUE_PATH);
  if (!queue) return;
  const blocked = queue.nextQueue?.find?.((item) => item.id === "plugins-config-visible-leaf");
  if (!blocked) {
    failures.push(`${QUEUE_PATH} missing plugins-config-visible-leaf`);
    return;
  }
  if (blocked.status !== "blocked-by-raw-observation") {
    failures.push(`${QUEUE_PATH} plugins-config-visible-leaf status=${String(blocked.status)}`);
  }
  if (!String(blocked.blocker ?? "").includes("get/update config")) {
    failures.push(`${QUEUE_PATH} plugins-config-visible-leaf blocker must mention get/update config`);
  }
}

function validateDoc() {
  const text = requireIncludes(MAP_PATH, [
    "# plugins current-source 证据映射",
    "current-source partial closeout",
    RAW_ACCEPTANCE,
    WINDOWS_FRONTEND_DOC,
    MACOS_FRONTEND_DOC,
    CLOSEOUT_PATH,
    QUEUE_PATH,
    "`list_plugins`",
    "`toggle_plugin`",
    "`get_plugin_config`",
    "`update_plugin_config`",
    "不把 `get_plugin_config` / `update_plugin_config` 写成有可见配置 UI leaf",
    "不声明 raw/internal gate 已通过",
    "不声明 `gate_accepted`、`implementation_use` 或 `full_leaf_100` 已恢复",
    "不声明前端已达到双平台全 leaf 完成状态",
    "scripts/validate-frontend-plugins-current-source.mjs",
  ]);

  for (const path of SOURCE_SIGNAL_REQUIREMENTS.keys()) {
    if (!text.includes(`\`${path}\``)) {
      failures.push(`${MAP_PATH} missing source path reference: ${path}`);
    }
  }

  rejectMachineOrSecretLikeText(MAP_PATH, text);
  rejectPositiveBoundaryClaims(MAP_PATH, text);
}

function rejectMachineOrSecretLikeText(path, text) {
  const userDir = ["Users"].join("");
  const homeDir = ["home"].join("");
  const privateImageHost = ["private", "user", "images.githubusercontent.com"].join("-");
  const forbiddenPatterns = [
    /[A-Za-z]:\\/,
    new RegExp(`C:/${userDir}/`),
    new RegExp(`/${userDir}/[^/\\s]+`),
    new RegExp(`/${homeDir}/[^/\\s]+`),
    new RegExp(privateImageHost.replaceAll(".", "\\.")),
    /\b[A-Za-z0-9_]*TOKEN[A-Za-z0-9_]*=/,
    /\b[A-Za-z0-9_]*SECRET[A-Za-z0-9_]*=/,
  ];
  for (const pattern of forbiddenPatterns) {
    if (pattern.test(text)) {
      failures.push(`${path} contains a machine path or secret-like token: ${pattern}`);
    }
  }
}

function rejectPositiveBoundaryClaims(path, text) {
  const phrases = [
    "可见配置 UI leaf",
    "raw/internal gate",
    "gate_accepted",
    "implementation_use",
    "full_leaf_100",
    "双平台全 leaf 完成",
  ];

  for (const [index, line] of text.split(/\r?\n/).entries()) {
    for (const phrase of phrases) {
      if (!line.includes(phrase)) continue;
      if (line.includes("不") || line.includes("未") || line.includes("没有") || line.includes("blocked")) {
        continue;
      }
      failures.push(`${path}:${index + 1} has an unqualified boundary claim: ${line.trim()}`);
    }
  }
}

function validateEntrypoints() {
  const packageJson = readJson("package.json");
  if (!packageJson) return;
  const script = packageJson.scripts?.["validate:frontend-plugins-current-source"];
  if (script !== "node scripts/validate-frontend-plugins-current-source.mjs") {
    failures.push(`package.json validate:frontend-plugins-current-source=${String(script)}`);
  }

  requireIncludes("scripts/validate-frontend.mjs", [
    '["validate-frontend-plugins-current-source.mjs"]',
  ]);
}

validateDoc();
validateRawAcceptance();
validateHistoricalFrontendDocs();
validateCurrentSource();
validateDumpedAndIpcContracts();
validateCloseout();
validateQueue();
validateEntrypoints();

if (failures.length > 0) {
  console.error("FAIL plugins 前端 current-source 验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS plugins 前端 current-source 验证通过");
