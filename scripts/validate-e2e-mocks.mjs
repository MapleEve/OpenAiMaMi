import fs from "node:fs";
import path from "node:path";
import process from "node:process";

const repoRoot = process.cwd();
const scenariosRoot = path.join(repoRoot, "src", "mocks", "e2e", "scenarios");
const requiredScenarios = [
  {
    kind: "normal",
    file: "normal.ts",
    exportName: "normalScenario",
    outcomes: ["resolve"],
  },
  {
    kind: "empty",
    file: "empty.ts",
    exportName: "emptyScenario",
    outcomes: ["resolve-empty"],
  },
  {
    kind: "failure",
    file: "failure.ts",
    exportName: "failureScenario",
    outcomes: ["resolve", "reject"],
  },
  {
    kind: "delayed",
    file: "delayed.ts",
    exportName: "delayedScenario",
    outcomes: ["resolve"],
    minMaxDelayMs: 500,
  },
  {
    kind: "stale",
    file: "stale.ts",
    exportName: "staleScenario",
    outcomes: ["resolve"],
    requiresOutOfOrderSequence: true,
  },
  {
    kind: "concurrency",
    file: "concurrency.ts",
    exportName: "concurrencyScenario",
    outcomes: ["resolve"],
    requiresOutOfOrderSequence: true,
  },
  {
    kind: "cancel",
    file: "cancel.ts",
    exportName: "cancelScenario",
    outcomes: ["cancel", "resolve"],
  },
  {
    kind: "abort",
    file: "abort.ts",
    exportName: "abortScenario",
    outcomes: ["abort", "resolve"],
  },
  {
    kind: "event-replay",
    file: "replay.ts",
    exportName: "eventReplayScenario",
    outcomes: ["resolve", "replay"],
    requiresReplayOlderThanMutation: true,
  },
];

const failures = [];
const skillsCommands = [
  "load_installed_skills",
  "load_skill_backups",
  "import_skill",
  "remove_skill",
  "restore_skill_backup",
  "delete_skill_backup",
];

function repoPath(file) {
  return path.relative(repoRoot, file).replaceAll(path.sep, "/");
}

function readRequired(file) {
  if (!fs.existsSync(file)) {
    failures.push(`缺少文件：${repoPath(file)}`);
    return "";
  }
  return fs.readFileSync(file, "utf8");
}

function assertIncludes(label, text, snippets) {
  for (const snippet of snippets) {
    if (!text.includes(snippet)) {
      failures.push(`${label} 缺少结构片段：${snippet}`);
    }
  }
}

function escapeRegExp(value) {
  return value.replace(/[.*+?^${}()|[\]\\]/g, "\\$&");
}

function readCommandHandlerName(commandFixtureText, command) {
  const match = commandFixtureText.match(
    new RegExp(`\\b${escapeRegExp(command)}\\s*:\\s*([A-Za-z0-9_]+)`),
  );
  return match?.[1] ?? null;
}

function assertCommandHandler(commandFixtureText, command, expectedHandler) {
  const handler = readCommandHandlerName(commandFixtureText, command);
  if (!handler) {
    failures.push(`src/mocks/fixtures/commands.ts 缺少 ${command} 的专用处理器映射`);
    return;
  }
  if (handler !== expectedHandler) {
    failures.push(
      `src/mocks/fixtures/commands.ts 中 ${command} 必须绑定 ${expectedHandler}，当前为 ${handler}`,
    );
  }
}

function assertNotGenericHandler(commandFixtureText, command) {
  const genericHandlers = new Set([
    "defaultHandler",
    "readFalseHandler",
    "writeBooleanArgHandler",
    "unitHandler",
  ]);
  const handler = readCommandHandlerName(commandFixtureText, command);
  if (handler && genericHandlers.has(handler)) {
    failures.push(
      `src/mocks/fixtures/commands.ts 中 ${command} 仍绑定泛型或固定占位处理器：${handler}`,
    );
  }
}

function assertNotIncludes(label, text, snippets) {
  for (const snippet of snippets) {
    if (text.includes(snippet)) {
      failures.push(`${label} 不得包含结构片段：${snippet}`);
    }
  }
}

function assertMatches(label, text, checks) {
  for (const [pattern, description] of checks) {
    if (!pattern.test(text)) {
      failures.push(`${label} 缺少结构模式：${description}`);
    }
  }
}

function readDeclarationHeader(label, text, startToken) {
  const start = text.indexOf(startToken);
  if (start < 0) {
    failures.push(`${label} 缺少声明：${startToken}`);
    return "";
  }
  const open = text.indexOf("{", start);
  if (open < 0) {
    failures.push(`${label} 缺少可解析的声明头`);
    return "";
  }
  return text.slice(start, open);
}

function readDelimitedBody(label, text, startToken) {
  const start = text.indexOf(startToken);
  if (start < 0) {
    failures.push(`${label} 缺少声明：${startToken}`);
    return "";
  }
  const open = text.indexOf("{", start);
  if (open < 0) {
    failures.push(`${label} 缺少可解析的函数体或对象体`);
    return "";
  }

  let depth = 0;
  for (let index = open; index < text.length; index += 1) {
    const char = text[index];
    if (char === "{") depth += 1;
    if (char === "}") {
      depth -= 1;
      if (depth === 0) return text.slice(open + 1, index);
    }
  }

  failures.push(`${label} 函数体或对象体没有闭合`);
  return "";
}

function parseScenarioSteps(file, text) {
  const stepMatches = [
    ...text.matchAll(
      /\{\s*name:\s*"([^"]+)"\s*,\s*delayMs:\s*(\d+)\s*,\s*outcome:\s*"([^"]+)"\s*,\s*sequence:\s*(\d+)\s*,?\s*\}/g,
    ),
  ];

  if (stepMatches.length === 0) {
    failures.push(`${repoPath(file)} 没有可验证的 steps`);
  }

  return stepMatches.map((match) => ({
    name: match[1],
    delayMs: Number(match[2]),
    outcome: match[3],
    sequence: Number(match[4]),
  }));
}

function validateScenarioRegistry() {
  const indexPath = path.join(scenariosRoot, "index.ts");
  const typesPath = path.join(scenariosRoot, "types.ts");
  const indexText = readRequired(indexPath);
  const typesText = readRequired(typesPath);
  const kinds = requiredScenarios.map((scenario) => scenario.kind);

  for (const kind of kinds) {
    const presetKey = kind.includes("-") ? `"${kind}":` : `${kind}:`;
    assertIncludes("src/mocks/e2e/scenarios/index.ts", indexText, [
      `"${kind}"`,
      presetKey,
    ]);
    assertIncludes("src/mocks/e2e/scenarios/types.ts", typesText, [`| "${kind}"`]);
  }

  assertIncludes("src/mocks/e2e/scenarios/index.ts", indexText, [
    "E2E_SCENARIO_KINDS",
    "e2eScenarioPresets",
    "getE2eScenario",
    "createE2eScenarioConfig",
    "SKILLS_E2E_COMMANDS",
  ]);
}

function validateSkillsCommandMirror() {
  const skillsPath = path.join(scenariosRoot, "skills.ts");
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const skillsText = readRequired(skillsPath);
  const commandFixtureText = readRequired(commandFixturePath);
  assertIncludes("src/mocks/e2e/scenarios/skills.ts", skillsText, [
    "SKILLS_E2E_COMMANDS",
    "satisfies readonly IpcCommandName[]",
  ]);
  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "skillsCommandHandlers",
    "skillsMockState",
    "readInstalledSkillSummaries",
    "syncBootstrapInstalledSkills",
    "bootstrapCacheMockState.installedSkills",
    "loadInstalledSkillsHandler",
    "loadSkillBackupsHandler",
    "importSkillHandler",
    "removeSkillHandler",
    "restoreSkillBackupHandler",
    "deleteSkillBackupHandler",
    "skillSummaryFromId",
    "skillBackupFromId",
  ]);

  for (const command of skillsCommands) {
    assertIncludes("src/mocks/e2e/scenarios/skills.ts", skillsText, [
      `"${command}"`,
    ]);
    assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
      `${command}:`,
    ]);
  }

  for (const field of [
    "items: []",
    "items,",
    "total: 0",
    "rootPath: \"\"",
    "lastScanAt: 0",
    "replacedExisting",
    "removedSkillID",
    "remainingInstalledCount",
    "restoredSkill",
    "rollbackBackup",
    "deletedBackupID",
    "remainingBackupCount",
  ]) {
    assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [field]);
  }
}

function validateScenarioFiles() {
  for (const scenario of requiredScenarios) {
    const file = path.join(scenariosRoot, scenario.file);
    const text = readRequired(file);
    const label = repoPath(file);
    assertIncludes(label, text, [
      `export const ${scenario.exportName}`,
      `kind: "${scenario.kind}"`,
      'commands: ["all"]',
    ]);

    const steps = parseScenarioSteps(file, text);
    for (const outcome of scenario.outcomes) {
      if (!steps.some((step) => step.outcome === outcome)) {
        failures.push(`${label} 缺少 outcome：${outcome}`);
      }
    }

    if (scenario.minMaxDelayMs) {
      const maxDelay = Math.max(...steps.map((step) => step.delayMs));
      if (maxDelay < scenario.minMaxDelayMs) {
        failures.push(`${label} delayed 场景最大 delayMs 小于 ${scenario.minMaxDelayMs}`);
      }
    }

    if (scenario.requiresOutOfOrderSequence) {
      const hasLateOlderStep = steps.some((candidate, candidateIndex) =>
        steps.some(
          (other, otherIndex) =>
            otherIndex > candidateIndex &&
            candidate.delayMs > other.delayMs &&
            candidate.sequence < other.sequence,
        ),
      );
      if (!hasLateOlderStep) {
        failures.push(`${label} 缺少晚返回旧序列覆盖风险`);
      }
    }

    if (scenario.requiresReplayOlderThanMutation) {
      const mutation = steps.find((step) => step.name.includes("mutation"));
      const replay = steps.find((step) => step.outcome === "replay");
      if (!mutation || !replay || replay.sequence >= mutation.sequence) {
        failures.push(`${label} replay sequence 必须小于 mutation sequence`);
      }
    }
  }
}

function validateRaceContractMockHelpers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const commandFixtureText = readRequired(commandFixturePath);
  const defaultHandlerBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts createDefaultIpcCommandHandler",
    commandFixtureText,
    "export function createDefaultIpcCommandHandler",
  );
  const withMockDataBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts withMockData",
    commandFixtureText,
    "function withMockData",
  );
  const raceEnvelopeBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts createRaceAwareIpcEnvelope",
    commandFixtureText,
    "function createRaceAwareIpcEnvelope",
  );
  const raceWarningsBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts createStateRaceContractWarnings",
    commandFixtureText,
    "function createStateRaceContractWarnings",
  );
  const replacementBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts hasReplacementAfterOutcome",
    commandFixtureText,
    "function hasReplacementAfterOutcome",
  );
  const factoryCallCount = [
    ...commandFixtureText.matchAll(/\bcreateEvidenceBackedIpcFixture\(/g),
  ].length;
  const helperCallCount = [
    ...commandFixtureText.matchAll(/\bcreateRaceAwareIpcEnvelope\(context\)/g),
  ].length;

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "CoreWarning",
    "createRaceAwareIpcEnvelope",
    "createStateRaceContractWarnings",
    "hasOutOfOrderSequence",
    "hasReplayOlderThanMutation",
    "hasReplacementAfterOutcome",
    "MOCK_DELAYED_RESPONSE",
    "MOCK_STALE_RESPONSE",
    "MOCK_CONCURRENT_RESPONSE",
    "MOCK_EVENT_REPLAY",
    "MOCK_CANCELLED_RESPONSE",
    "MOCK_ABORTED_RESPONSE",
  ]);
  assertIncludes(
    "src/mocks/fixtures/commands.ts createDefaultIpcCommandHandler",
    defaultHandlerBody,
    ["createRaceAwareIpcEnvelope({ args, command, steps })"],
  );
  assertIncludes("src/mocks/fixtures/commands.ts withMockData", withMockDataBody, [
    "createRaceAwareIpcEnvelope(context)",
  ]);
  assertIncludes(
    "src/mocks/fixtures/commands.ts createRaceAwareIpcEnvelope",
    raceEnvelopeBody,
    [
      "createEvidenceBackedIpcFixture(",
      "createStateRaceContractWarnings(context.steps)",
      "warnings: [...envelope.warnings, ...raceWarnings]",
    ],
  );
  assertIncludes(
    "src/mocks/fixtures/commands.ts createStateRaceContractWarnings",
    raceWarningsBody,
    [
      "step.delayMs >= 500",
      'scenario === "stale" && hasOutOfOrderSequence(steps)',
      'scenario === "concurrency" && hasOutOfOrderSequence(steps)',
      "hasReplayOlderThanMutation(steps)",
      'hasReplacementAfterOutcome(steps, "cancel")',
      'hasReplacementAfterOutcome(steps, "abort")',
    ],
  );
  assertIncludes(
    "src/mocks/fixtures/commands.ts hasReplacementAfterOutcome",
    replacementBody,
    [
      "terminalSequences.length === 0",
      'step.outcome === "resolve" && step.sequence > terminalSequence',
    ],
  );

  if (factoryCallCount !== 1) {
    failures.push(
      `src/mocks/fixtures/commands.ts must route direct envelope creation through createRaceAwareIpcEnvelope; found ${factoryCallCount} createEvidenceBackedIpcFixture calls`,
    );
  }

  if (helperCallCount < 10) {
    failures.push(
      `src/mocks/fixtures/commands.ts createRaceAwareIpcEnvelope(context) is not used by specialized handlers; found ${helperCallCount} calls`,
    );
  }

  if (/\bvoice\b|Voice/.test(commandFixtureText)) {
    failures.push(
      "src/mocks/fixtures/commands.ts must not register or call voice mocks from the E2E fixture entry",
    );
  }
}

function validateIpcMockBridge() {
  const ipcMockPath = path.join(repoRoot, "src", "mocks", "ipc", "index.ts");
  const fixturePath = path.join(repoRoot, "src", "mocks", "fixtures", "index.ts");
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const ipcMockText = readRequired(ipcMockPath);
  const fixtureText = readRequired(fixturePath);
  const commandFixtureText = readRequired(commandFixturePath);

  assertIncludes("src/mocks/ipc/index.ts", ipcMockText, [
    "createE2eScenarioConfig",
    "getE2eScenario",
    "resolveIpcMockSteps",
    "createIpcMockResponse",
    "const steps = resolveIpcMockSteps",
    "fixture.handler({ args, command, steps })",
  ]);
  assertIncludes("src/mocks/fixtures/index.ts", fixtureText, [
    "scenario:",
    "outcome: step.outcome",
    "sequence: step.sequence",
    "stepName: step.stepName",
    "resolveEnvelopeStatus",
  ]);
  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "assertIpcFixtureCoverage",
    "IPC_COMMAND_DEFINITIONS.reduce",
    "createEvidenceBackedIpcFixture",
  ]);
}

function validateRelayMockPayloadHandlers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const ipcCommandsPath = path.join(repoRoot, "src", "contracts", "ipc", "commands.ts");
  const typesPath = path.join(repoRoot, "src", "types", "index.ts");
  const commandFixtureText = readRequired(commandFixturePath);
  const ipcCommandsText = readRequired(ipcCommandsPath);
  const typesText = readRequired(typesPath);
  const relayCommands = [
    ...ipcCommandsText.matchAll(
      /\{\s*"domain":\s*"relay"[\s\S]*?"command":\s*"([^"]+)"/g,
    ),
  ].map((match) => match[1]);

  if (relayCommands.length === 0) {
    failures.push("src/contracts/ipc/commands.ts 没有可验证的 relay command");
    return;
  }

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "const relayCommandHandlers",
    "relayCommandHandlers[definition.command] ??",
    "relayStateFromStatus",
    "relayProviderFromArgs",
    "relayModelsFromArgs",
    "fetch_relay_models_draft: relayModelsHandler",
    "\"model-a\"",
    "\"model-b\"",
    "RelayExtraHeaders",
    "readRelayExtraHeaders(input.extraHeaders)",
    "relayDiagnosticFromStatus",
    "restored: true",
    "repositoryChecked: true",
    "repositoryPathKnown: true",
    "effect: \"no_op\"",
    "ok: issues.length === 0",
    "checkedAt: null",
    "sourcePath: \"\"",
    "catalogSourcePath: null",
    "pending: false",
    "id: \"missing_router_block\"",
    "configStaleReason: missingRouterBlock ? \"missing_router_block\" : null",
    "hasIssues: issues.length > 0",
    "diagnosticBoundary: \"relay.repository.diagnostic\"",
    "repositoryState: diagnosticSkeletonState()",
    "platformState: diagnosticSkeletonState()",
  ]);

  assertIncludes("src/types/index.ts", typesText, [
    "export interface RelayDiagnosticPayload",
    "backendStatus: BackendSkeletonStatus;",
    "checkedAt: string | null;",
    "sourcePath: string;",
    "catalogSourcePath: string | null;",
    "diagnosticBoundary: string;",
    "pending: boolean;",
    "config_toml_has_router?: boolean;",
    "config_toml_has_catalog?: boolean;",
    "repositoryState?: DiagnosticSkeletonStatePayload;",
    "platformState?: DiagnosticSkeletonStatePayload;",
  ]);

  if (commandFixtureText.includes("input.extraHeaders as string | Record<string, string>")) {
    failures.push("src/mocks/fixtures/commands.ts relay mock 不得用 inline headers union 回退 typed 合同");
  }

  for (const command of relayCommands) {
    if (!commandFixtureText.includes(`${command}:`)) {
      failures.push(`src/mocks/fixtures/commands.ts 缺少 relay 专用 handler：${command}`);
    }
  }
}

function validateAccountsMockPayloadHandlers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const ipcCommandsPath = path.join(repoRoot, "src", "contracts", "ipc", "commands.ts");
  const commandFixtureText = readRequired(commandFixturePath);
  const ipcCommandsText = readRequired(ipcCommandsPath);
  const accountsCommands = [
    ...ipcCommandsText.matchAll(
      /\{\s*"domain":\s*"accounts"[\s\S]*?"command":\s*"([^"]+)"/g,
    ),
  ].map((match) => match[1]);

  if (accountsCommands.length === 0) {
    failures.push("src/contracts/ipc/commands.ts 没有可验证的 accounts command");
    return;
  }

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "const accountsCommandHandlers",
    "accountsCommandHandlers[definition.command] ??",
    "accountMonitorHandler",
    "accountSwitchHandler",
    "accountSessionImportHandler",
    "accountPreviewImportHandler",
    "emptyAccountImportPayload",
  ]);

  for (const command of accountsCommands) {
    if (!commandFixtureText.includes(`${command}:`)) {
      failures.push(`src/mocks/fixtures/commands.ts 缺少 accounts 专用 handler：${command}`);
    }
  }
}

function validateAnalyticsMockPayloadHandlers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const ipcCommandsPath = path.join(repoRoot, "src", "contracts", "ipc", "commands.ts");
  const commandFixtureText = readRequired(commandFixturePath);
  const ipcCommandsText = readRequired(ipcCommandsPath);
  const analyticsCommands = [
    ...ipcCommandsText.matchAll(
      /\{\s*"domain":\s*"analytics"[\s\S]*?"command":\s*"([^"]+)"/g,
    ),
  ].map((match) => match[1]);

  if (analyticsCommands.length === 0) {
    failures.push("src/contracts/ipc/commands.ts 没有可验证的 analytics command");
    return;
  }

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "const analyticsCommandHandlers",
    "analyticsCommandHandlers[definition.command] ??",
    "loadUsageAnalyticsHandler",
    "bootstrapCacheMockState.usageAnalytics",
    "cloneUsageAnalytics(data)",
    "loadQuotaHistoryHandler",
    "loadSessionAnalyticsHandler",
    "loadTokenAnalyticsHandler",
    "loadToolAnalyticsHandler",
    "loadChangeAnalyticsHandler",
  ]);

  for (const command of analyticsCommands) {
    if (!commandFixtureText.includes(`${command}:`)) {
      failures.push(`src/mocks/fixtures/commands.ts 缺少 analytics 专用 handler：${command}`);
    }
  }
}

function validatePluginsMockPayloadHandlers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const ipcCommandsPath = path.join(repoRoot, "src", "contracts", "ipc", "commands.ts");
  const commandFixtureText = readRequired(commandFixturePath);
  const ipcCommandsText = readRequired(ipcCommandsPath);
  const pluginsCommands = [
    ...ipcCommandsText.matchAll(
      /\{\s*"domain":\s*"runtime-extensions"[\s\S]*?"command":\s*"([^"]+)"/g,
    ),
  ].map((match) => match[1]);

  if (pluginsCommands.length === 0) {
    failures.push("src/contracts/ipc/commands.ts 没有可验证的 runtime-extensions command");
    return;
  }

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "const pluginsCommandHandlers",
    "pluginsCommandHandlers[definition.command] ??",
    "listPluginsHandler",
    "togglePluginHandler",
    "getPluginConfigHandler",
    "updatePluginConfigHandler",
    "RuntimeExtensionListPayload",
    "RuntimeExtensionTogglePayload",
    "RuntimeExtensionConfigPayload",
  ]);

  for (const command of pluginsCommands) {
    if (!commandFixtureText.includes(`${command}:`)) {
      failures.push(`src/mocks/fixtures/commands.ts 缺少 plugins 专用 handler：${command}`);
    }
  }
}

function validateMcpMockPayloadHandlers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const ipcCommandsPath = path.join(repoRoot, "src", "contracts", "ipc", "commands.ts");
  const commandFixtureText = readRequired(commandFixturePath);
  const ipcCommandsText = readRequired(ipcCommandsPath);
  const mcpCommands = [
    ...ipcCommandsText.matchAll(
      /\{\s*"domain":\s*"mcp"[\s\S]*?"command":\s*"([^"]+)"/g,
    ),
  ].map((match) => match[1]);

  if (mcpCommands.length === 0) {
    failures.push("src/contracts/ipc/commands.ts 没有可验证的 mcp command");
    return;
  }

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "const mcpCommandHandlers",
    "mcpCommandHandlers[definition.command] ??",
    "mcpMockState",
    "readMcpMockServers",
    "syncBootstrapMcpServers",
    "bootstrapCacheMockState.mcpServers",
    "loadMcpServersHandler",
    "upsertMcpServerHandler",
    "setMcpServerEnabledHandler",
    "removeMcpServerHandler",
    "McpServerListPayload",
    "McpServerMutationPayload",
    "McpServerRemovePayload",
  ]);

  for (const command of mcpCommands) {
    if (!commandFixtureText.includes(`${command}:`)) {
      failures.push(`src/mocks/fixtures/commands.ts 缺少 mcp 专用 handler：${command}`);
    }
  }
}

function validateSystemActionMockPayloadHandlers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const commandFixtureText = readRequired(commandFixturePath);
  const actionCommands = [
    "focus_main_window",
    "force_kill_codex",
    "graceful_restart_for_update",
    "open_path",
    "reset_codex_config",
    "restart_codex",
  ];

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "SystemActionPayload",
    "const systemActionHandler",
    "const runtimeWatcherStatusHandler",
    "runtimeWatcherMockState",
    "note_usage_refresh_activity: runtimeWatcherStatusHandler",
    "schedule_full_runtime_refresh: runtimeWatcherStatusHandler",
    "start_auto_switch_pending_watcher: runtimeWatcherStatusHandler",
    "start_usage_refresh_watcher: runtimeWatcherStatusHandler",
    "update_usage_refresh_schedule: runtimeWatcherStatusHandler",
    "effect: \"no_op\"",
    "const systemCommandHandlers",
    "systemCommandHandlers[definition.command] ??",
    "hotspot_ready: hotspotReadyHandler",
  ]);

  for (const command of actionCommands) {
    if (!commandFixtureText.includes(`${command}: systemActionHandler`)) {
      failures.push(`src/mocks/fixtures/commands.ts 缺少 system action 专用 handler：${command}`);
    }
  }

  if (commandFixtureText.includes("const evidenceObjectHandler")) {
    failures.push("src/mocks/fixtures/commands.ts 不得保留 system generic evidence object handler");
  }
}

function validateMaintenanceSystemWindowEvidence() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const systemServicePath = path.join(repoRoot, "src", "services", "system", "index.ts");
  const typesPath = path.join(repoRoot, "src", "types", "index.ts");
  const maintenanceServicePath = path.join(
    repoRoot,
    "src",
    "services",
    "maintenance",
    "index.ts",
  );
  const commandFixtureText = readRequired(commandFixturePath);
  const systemServiceText = readRequired(systemServicePath);
  const typesText = readRequired(typesPath);
  const maintenanceServiceText = readRequired(maintenanceServicePath);
  const requiredHandlers = [
    ["clean", "cleanHandler"],
    ["rebuild_registry", "rebuildRegistryHandler"],
    ["diagnose", "diagnoseHandler"],
    ["check_update_installability", "updateInstallabilityHandler"],
    ["load_bootstrap_state", "bootstrapStateHandler"],
    ["load_pending_auto_switch", "pendingAutoSwitchStateHandler"],
    ["focus_main_window", "systemActionHandler"],
    ["open_path", "systemActionHandler"],
    ["restart_codex", "systemActionHandler"],
    ["graceful_restart_for_update", "systemActionHandler"],
    ["force_kill_codex", "systemActionHandler"],
    ["reset_codex_config", "systemActionHandler"],
  ];

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "CleanPayload",
    "RebuildRegistryPayload",
    "DiagnosePayload",
    "UpdateInstallabilityPayload",
    "function diagnosticSkeletonState",
    "const cleanHandler",
    "const rebuildRegistryHandler",
    "const diagnoseHandler",
    "backendStatus: envelope.data.status",
    "checkedAt: null",
    "infoSource: \"mock\"",
    "diagnosticSnapshot:",
    "pendingDiagnostics:",
    "repositoryState: diagnosticSkeletonState()",
    "platformState: diagnosticSkeletonState()",
    "diagnosticBoundary: \"skeleton\"",
    "writtenAt",
    "snapshotProgressive",
    "usageAnalytics",
    "mcpServers",
    "installedSkills",
    "bootstrapCacheMockState",
    "cloneUsageAnalytics(bootstrapCacheMockState.usageAnalytics)",
    "cloneMcpServers(bootstrapCacheMockState.mcpServers)",
    "cloneInstalledSkills(bootstrapCacheMockState.installedSkills)",
    "const updateInstallabilityHandler",
    "const daemonAutoSwitchCommandHandlers",
    "const maintenanceCommandHandlers",
    "const settingsCommandHandlers",
    "daemonAutoSwitchCommandHandlers[definition.command] ??",
    "maintenanceCommandHandlers[definition.command] ??",
    "settingsCommandHandlers[definition.command] ??",
  ]);

  const bootstrapStateBody =
    commandFixtureText.match(
      /const bootstrapStateHandler[\s\S]*?const pendingAutoSwitchStateHandler/,
    )?.[0] ?? "";
  assertNotIncludes(
    "src/mocks/fixtures/commands.ts bootstrapStateHandler",
    bootstrapStateBody,
    ["writtenAt: null", "usageAnalytics: null", "mcpServers: []", "installedSkills: []"],
  );

  for (const [command, handler] of requiredHandlers) {
    if (!commandFixtureText.includes(`${command}: ${handler}`)) {
      failures.push(`src/mocks/fixtures/commands.ts 缺少 maintenance/system/window 专用 handler：${command}`);
    }
  }

  assertIncludes("src/types/index.ts", typesText, [
    "export interface DiagnosePayload",
    "backendStatus: BackendSkeletonStatus;",
    "checkedAt?: string | number | null;",
    "platform: { os: string; arch: string; infoSource: string };",
    "diagnosticSnapshot: DiagnoseDiagnosticSnapshotPayload;",
    "pendingDiagnostics: DiagnoseDiagnosticFieldPayload[];",
    "repositoryState?: DiagnosticSkeletonStatePayload;",
    "platformState?: DiagnosticSkeletonStatePayload;",
    "diagnosticBoundary?: string;",
  ]);

  assertIncludes("src/services/system/index.ts", systemServiceText, [
    'invokeIpc<CoreEnvelope<BootstrapStatePayload>>("load_bootstrap_state")',
    'invokeIpc<CoreEnvelope<CleanPayload>>("clean")',
    'invokeIpc<CoreEnvelope<RebuildRegistryPayload>>("rebuild_registry")',
    'invokeIpc<CoreEnvelope<DiagnosePayload>>("diagnose")',
    '"load_pending_auto_switch"',
    '"check_update_installability"',
    '"graceful_restart_for_update"',
    '"restart_codex"',
    '"force_kill_codex"',
    '"reset_codex_config"',
    '"open_path"',
    '"focus_main_window"',
  ]);

  assertIncludes("src/services/maintenance/index.ts", maintenanceServiceText, [
    "clean: () => readEnvelopeData(systemService.clean())",
    "rebuildRegistry: () => readEnvelopeData(systemService.rebuildRegistry())",
    "diagnose: () => readEnvelopeData(systemService.diagnose())",
    "restartCodex: systemService.restartCodex",
    "forceKillCodex: systemService.forceKillCodex",
    "resetCodexConfig: systemService.resetCodexConfig",
    "openPath: systemService.openPath",
  ]);
}

function validateDaemonAutoswitchMockPayloadHandlers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const commandFixtureText = readRequired(commandFixturePath);
  const requiredHandlers = [
    ["configure_auto_switch", "configureAutoSwitchHandler"],
    ["confirm_pending_auto_switch", "confirmPendingAutoSwitchHandler"],
    [
      "confirm_pending_auto_switch_and_restart_codex",
      "confirmPendingAutoSwitchHandler",
    ],
    ["dismiss_pending_auto_switch", "dismissPendingAutoSwitchHandler"],
    ["load_bootstrap_state", "bootstrapStateHandler"],
    ["load_pending_auto_switch", "pendingAutoSwitchStateHandler"],
    ["run_daemon_once", "runDaemonOnceHandler"],
    ["set_auto_switch", "setAutoSwitchHandler"],
  ];

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "AutoSwitchConfigPayload",
    "AutoSwitchRuntimeState",
    "DaemonRunPayload",
    "PendingAutoSwitchStatePayload",
    "const daemonAutoswitchMockState",
    "function daemonAutoswitchConfigPayload",
    "const runDaemonOnceHandler",
    "const setAutoSwitchHandler",
    "const configureAutoSwitchHandler",
    "const dismissPendingAutoSwitchHandler",
    "const confirmPendingAutoSwitchHandler",
    "const daemonAutoSwitchCommandHandlers",
  ]);

  for (const [command, handler] of requiredHandlers) {
    assertCommandHandler(commandFixtureText, command, handler);
    assertNotGenericHandler(commandFixtureText, command);
  }
}

function validateMaintenanceSystemScenarioCoverage() {
  const coverageScenarios = [
    ["failure.ts", "reject"],
    ["delayed.ts", "resolve"],
    ["stale.ts", "resolve"],
    ["replay.ts", "replay"],
  ];

  for (const [fileName, outcome] of coverageScenarios) {
    const file = path.join(scenariosRoot, fileName);
    const text = readRequired(file);
    const label = repoPath(file);
    assertIncludes(label, text, ['commands: ["all"]', `outcome: "${outcome}"`]);

    const steps = parseScenarioSteps(file, text);
    if (fileName === "delayed.ts" && Math.max(...steps.map((step) => step.delayMs)) < 500) {
      failures.push(`${label} 不能证明 delayed 场景覆盖 maintenance/system/window 命令族`);
    }

    if (fileName === "stale.ts") {
      const hasLateOlderStep = steps.some((candidate, candidateIndex) =>
        steps.some(
          (other, otherIndex) =>
            otherIndex > candidateIndex &&
            candidate.delayMs > other.delayMs &&
            candidate.sequence < other.sequence,
        ),
      );
      if (!hasLateOlderStep) {
        failures.push(`${label} 不能证明 stale 场景覆盖 maintenance/system/window 命令族`);
      }
    }

    if (fileName === "replay.ts") {
      const mutation = steps.find((step) => step.name.includes("mutation"));
      const replay = steps.find((step) => step.outcome === "replay");
      if (!mutation || !replay || replay.sequence >= mutation.sequence) {
        failures.push(`${label} 不能证明 replay 场景覆盖 maintenance/system/window 命令族`);
      }
    }
  }
}

function validateOverviewMockPayloadHandlers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const commandFixtureText = readRequired(commandFixturePath);
  const overviewHandlers = [
    ["get_device_id", "deviceIdHandler"],
    ["get_mystery_unlock_grants", "getMysteryUnlockGrantsHandler"],
    ["get_notification_client_state", "notificationClientStateHandler"],
    ["get_or_create_remote_device_secret", "remoteDeviceSecretHandler"],
    ["import_remote_device_secret_if_empty", "importRemoteDeviceSecretIfEmptyHandler"],
    ["load_snapshot", "coreSnapshotHandler"],
    ["merge_mystery_unlock_grants", "mergeMysteryUnlockGrantsHandler"],
    ["refresh_usage_snapshot", "refreshUsageSnapshotHandler"],
  ];

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "CoreSnapshotPayload",
    "NotificationClientStatePayload",
    "MysteryRouteGrant[]",
    "const coreSnapshotHandler",
    "const deviceIdHandler",
    "const remoteDeviceSecretHandler",
    "const importRemoteDeviceSecretIfEmptyHandler",
    "remoteDeviceSecretMockState",
    'readArgString(context.args, "secret", "")',
    'readArgString(context.args, "sensitive-field", "")',
    "normalizeMysteryRouteGrants",
    "record.epoch_ms",
  ]);

  for (const [command, handler] of overviewHandlers) {
    if (!commandFixtureText.includes(`${command}: ${handler}`)) {
      failures.push(`src/mocks/fixtures/commands.ts 缺少 overview 专用 handler：${command}`);
    }
  }
}

function validateStatefulSystemHotspotUsageMysteryMocks() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const ipcCommandsPath = path.join(repoRoot, "src", "contracts", "ipc", "commands.ts");
  const systemServicePath = path.join(repoRoot, "src", "services", "system", "index.ts");
  const settingsServicePath = path.join(
    repoRoot,
    "src",
    "services",
    "settings",
    "index.ts",
  );
  const commandFixtureText = readRequired(commandFixturePath);
  const ipcCommandsText = readRequired(ipcCommandsPath);
  const systemServiceText = readRequired(systemServicePath);
  const settingsServiceText = readRequired(settingsServicePath);
  const hotspotStateBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts systemHotspotMockState",
    commandFixtureText,
    "const systemHotspotMockState",
  );
  const usageStateBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts systemUsageMockState",
    commandFixtureText,
    "const systemUsageMockState",
  );
  const setHotspotBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts setHotspotEnabledHandler",
    commandFixtureText,
    "const setHotspotEnabledHandler",
  );
  const hotspotReadyBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts hotspotReadyHandler",
    commandFixtureText,
    "const hotspotReadyHandler",
  );
  const setUsageIntervalBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts setUsageRefreshIntervalHandler",
    commandFixtureText,
    "const setUsageRefreshIntervalHandler",
  );
  const readRefreshIntervalBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts readRefreshIntervalArg",
    commandFixtureText,
    "function readRefreshIntervalArg",
  );
  const coreSnapshotBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts createCoreSnapshotPayload",
    commandFixtureText,
    "function createCoreSnapshotPayload",
  );
  const coreSnapshotSignature = readDeclarationHeader(
    "src/mocks/fixtures/commands.ts createCoreSnapshotPayload",
    commandFixtureText,
    "function createCoreSnapshotPayload",
  );
  const coreSnapshotPayloadBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts createCoreSnapshotPayload return payload",
    coreSnapshotBody,
    "return",
  );
  const refreshUsageBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts refreshUsageSnapshotHandler",
    commandFixtureText,
    "const refreshUsageSnapshotHandler",
  );
  const mergeMysteryHandlerBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts mergeMysteryUnlockGrantsHandler",
    commandFixtureText,
    "const mergeMysteryUnlockGrantsHandler",
  );
  const mergeMysteryBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts mergeMysteryUnlockGrants",
    commandFixtureText,
    "function mergeMysteryUnlockGrants",
  );
  const normalizeMysteryBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts normalizeMysteryRouteGrants",
    commandFixtureText,
    "function normalizeMysteryRouteGrants",
  );
  const mysteryAllowedBody = readDelimitedBody(
    "src/mocks/fixtures/commands.ts isMysteryRouteAllowed",
    commandFixtureText,
    "function isMysteryRouteAllowed",
  );
  const targetHandlers = [
    ["get_hotspot_enabled", "hotspotEnabledHandler"],
    ["set_hotspot_enabled", "setHotspotEnabledHandler"],
    ["hotspot_ready", "hotspotReadyHandler"],
    ["has_notch", "hasNotchHandler"],
    ["get_usage_refresh_interval", "usageRefreshIntervalHandler"],
    ["set_usage_refresh_interval", "setUsageRefreshIntervalHandler"],
    ["load_snapshot", "coreSnapshotHandler"],
    ["refresh_usage_snapshot", "refreshUsageSnapshotHandler"],
    ["get_mystery_unlock_grants", "getMysteryUnlockGrantsHandler"],
    ["merge_mystery_unlock_grants", "mergeMysteryUnlockGrantsHandler"],
  ];

  for (const [command, handler] of targetHandlers) {
    assertIncludes("src/contracts/ipc/commands.ts", ipcCommandsText, [
      `"command": "${command}"`,
    ]);
    assertCommandHandler(commandFixtureText, command, handler);
    assertNotGenericHandler(commandFixtureText, command);
  }

  assertIncludes("src/services/system/index.ts", systemServiceText, [
    'invokeIpc<CoreEnvelope<boolean>>("get_hotspot_enabled")',
    'invokeIpc<CoreEnvelope<boolean>>("set_hotspot_enabled", { enabled })',
    'invokeIpc<CoreEnvelope<boolean>>("hotspot_ready")',
    'invokeIpc<CoreEnvelope<string>>("get_usage_refresh_interval")',
    'invokeIpc<CoreEnvelope<string>>("set_usage_refresh_interval", { interval })',
    'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("load_snapshot", { localOnly })',
    'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("refresh_usage_snapshot")',
    'invokeIpc<CoreEnvelope<MysteryRouteGrant[]>>("get_mystery_unlock_grants")',
    'invokeIpc<CoreEnvelope<MysteryRouteGrant[]>>("merge_mystery_unlock_grants", {',
    "grants: toMysteryRouteGrantArgs(grants)",
  ]);
  assertIncludes("src/services/settings/index.ts", settingsServiceText, [
    "getUsageRefreshInterval: systemService.getUsageRefreshInterval",
    "setUsageRefreshInterval: systemService.setUsageRefreshInterval",
    "getHotspotEnabled: systemService.getHotspotEnabled",
    "setHotspotEnabled: systemService.setHotspotEnabled",
    "hotspotReady: systemService.hotspotReady",
  ]);

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "const settingsCommandHandlers",
    "const systemCommandHandlers",
    "settingsCommandHandlers[definition.command] ??",
    "systemCommandHandlers[definition.command] ??",
    "withMockData(context, systemHotspotMockState.enabled)",
    "withMockData(context, systemHotspotMockState.hasNotch)",
    "withMockData(context, systemUsageMockState.refreshInterval)",
    "const mysteryUnlockMockState",
    "withMockData(context, [...mysteryUnlockMockState.grants])",
  ]);

  assertIncludes("src/mocks/fixtures/commands.ts systemHotspotMockState", hotspotStateBody, [
    "enabled: false",
    "hasNotch: true",
    "ready: false",
  ]);
  assertIncludes("src/mocks/fixtures/commands.ts systemUsageMockState", usageStateBody, [
    "lastScanAt: 1_700_000_000_000",
    "refreshCount: 0",
    "refreshInterval: \"1m\"",
    "usageSource: \"local\"",
    "usageStatus: \"unknown\"",
  ]);
  assertIncludes("src/mocks/fixtures/commands.ts setHotspotEnabledHandler", setHotspotBody, [
    "systemHotspotMockState.enabled = readArgBoolean(",
    "systemHotspotMockState.enabled,",
    "return withMockData(context, systemHotspotMockState.enabled);",
  ]);
  assertIncludes("src/mocks/fixtures/commands.ts hotspotReadyHandler", hotspotReadyBody, [
    "systemHotspotMockState.ready = true;",
    "return withMockData(context, systemHotspotMockState.ready);",
  ]);
  assertIncludes(
    "src/mocks/fixtures/commands.ts setUsageRefreshIntervalHandler",
    setUsageIntervalBody,
    [
      "systemUsageMockState.refreshInterval = readRefreshIntervalArg(",
      "systemUsageMockState.refreshInterval,",
      "return withMockData(context, systemUsageMockState.refreshInterval);",
    ],
  );
  assertIncludes("src/mocks/fixtures/commands.ts readRefreshIntervalArg", readRefreshIntervalBody, [
    "value === \"30s\" || value === \"1m\" || value === \"3m\" || value === \"5m\"",
    ": fallback",
  ]);
  assertMatches(
    "src/mocks/fixtures/commands.ts createCoreSnapshotPayload signature",
    coreSnapshotSignature,
    [
      [
        /\bfunction\s+createCoreSnapshotPayload\s*\(\s*backendStatus\s*:\s*CoreSnapshotPayload\["backendStatus"\]\s*,\s*localOnly\s*:\s*boolean\s*,?\s*\)\s*:\s*CoreSnapshotPayload\s*$/,
        'function createCoreSnapshotPayload(backendStatus: CoreSnapshotPayload["backendStatus"], localOnly: boolean): CoreSnapshotPayload',
      ],
    ],
  );
  assertIncludes(
    "src/mocks/fixtures/commands.ts createCoreSnapshotPayload return payload",
    coreSnapshotPayloadBody,
    ["backendStatus,"],
  );
  assertIncludes("src/mocks/fixtures/commands.ts createCoreSnapshotPayload", coreSnapshotBody, [
    "const usageSource = localOnly ? \"local\" : systemUsageMockState.usageSource;",
    "lastScanAt: systemUsageMockState.lastScanAt",
    "usageSource,",
    "usageStatus: systemUsageMockState.usageStatus",
    "usageLastError: systemUsageMockState.usageLastError",
  ]);
  assertNotIncludes("src/mocks/fixtures/commands.ts createCoreSnapshotPayload", coreSnapshotBody, [
    "envelope",
  ]);
  assertIncludes("src/mocks/fixtures/commands.ts refreshUsageSnapshotHandler", refreshUsageBody, [
    "systemUsageMockState.refreshCount += 1;",
    "systemUsageMockState.lastScanAt += 1_000;",
    "systemUsageMockState.usageSource = \"api\";",
    "systemUsageMockState.usageStatus = \"reachable\";",
    "systemUsageMockState.usageLastError = null;",
    "const data = createCoreSnapshotPayload(envelope.data.status, false);",
  ]);
  assertIncludes(
    "src/mocks/fixtures/commands.ts mergeMysteryUnlockGrantsHandler",
    mergeMysteryHandlerBody,
    [
      "const grants = context.args?.grants;",
      "if (Array.isArray(grants))",
      "mergeMysteryUnlockGrants(normalizeMysteryRouteGrants(grants));",
      "return withMockData(context, [...mysteryUnlockMockState.grants]);",
    ],
  );
  assertIncludes("src/mocks/fixtures/commands.ts mergeMysteryUnlockGrants", mergeMysteryBody, [
    "isMysteryRouteGranted(grant.route)",
    "item.route === grant.route && grant.epochMs >= item.epochMs ? grant : item",
    "mysteryUnlockMockState.grants = [...mysteryUnlockMockState.grants, grant];",
  ]);
  assertIncludes("src/mocks/fixtures/commands.ts normalizeMysteryRouteGrants", normalizeMysteryBody, [
    "const epochValue = record.epochMs ?? record.epoch_ms;",
    "Number.isFinite(epochValue)",
    "route ? [{ route, epochMs }] : []",
  ]);
  assertIncludes("src/mocks/fixtures/commands.ts isMysteryRouteAllowed", mysteryAllowedBody, [
    "\"overview\"",
    "\"accounts\"",
    "\"sessions\"",
    "\"mcp\"",
    "\"skills\"",
    "\"plugins\"",
    "\"relayModel\"",
    "\"maintenance\"",
    "\"settings\"",
  ]);
  assertNotIncludes("src/mocks/fixtures/commands.ts isMysteryRouteAllowed", mysteryAllowedBody, [
    "\"subscription\"",
    "\"customInstructions\"",
  ]);
  assertNotIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "mystery_route_allowed",
    "route_allowed",
  ]);

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "const systemHotspotMockState",
    "withMockData(context, systemHotspotMockState.enabled)",
    "systemHotspotMockState.enabled = readArgBoolean(",
    "systemHotspotMockState.ready = true",
    "withMockData(context, systemHotspotMockState.ready)",
    "withMockData(context, systemHotspotMockState.hasNotch)",
    "const systemUsageMockState",
    "withMockData(context, systemUsageMockState.refreshInterval)",
    "systemUsageMockState.refreshInterval = readRefreshIntervalArg(",
    "value === \"30s\" || value === \"1m\" || value === \"3m\" || value === \"5m\"",
    "function createCoreSnapshotPayload(",
    "backendStatus,",
    "lastScanAt: systemUsageMockState.lastScanAt",
    "systemUsageMockState.usageSource",
    "usageSource,",
    "usageStatus: systemUsageMockState.usageStatus",
    "systemUsageMockState.refreshCount += 1",
    "systemUsageMockState.lastScanAt += 1_000",
    "systemUsageMockState.usageSource = \"api\"",
    "const mysteryUnlockMockState",
    "withMockData(context, [...mysteryUnlockMockState.grants])",
    "mergeMysteryUnlockGrants(normalizeMysteryRouteGrants(grants))",
    "function isMysteryRouteGranted(route: string)",
    "record.epoch_ms",
    "route ? [{ route, epochMs }] : []",
  ]);
}

function validateStatefulSystemScenarioCoverage() {
  const coverageScenarios = [
    ["failure.ts", "reject"],
    ["delayed.ts", "resolve"],
    ["stale.ts", "resolve"],
    ["concurrency.ts", "resolve"],
    ["cancel.ts", "cancel"],
    ["abort.ts", "abort"],
    ["replay.ts", "replay"],
  ];

  for (const [fileName, outcome] of coverageScenarios) {
    const file = path.join(scenariosRoot, fileName);
    const text = readRequired(file);
    const label = repoPath(file);
    assertIncludes(label, text, ['commands: ["all"]', `outcome: "${outcome}"`]);
    const steps = parseScenarioSteps(file, text);

    if (fileName === "delayed.ts" && Math.max(...steps.map((step) => step.delayMs)) < 500) {
      failures.push(`${label} 不能证明 hotspot、usage、mystery 覆盖延迟响应`);
    }

    if (fileName === "stale.ts" || fileName === "concurrency.ts") {
      const hasLateOlderStep = steps.some((candidate, candidateIndex) =>
        steps.some(
          (other, otherIndex) =>
            otherIndex > candidateIndex &&
            candidate.delayMs > other.delayMs &&
            candidate.sequence < other.sequence,
        ),
      );
      if (!hasLateOlderStep) {
        failures.push(`${label} 不能证明 hotspot、usage、mystery 覆盖陈旧响应或并发晚返回`);
      }
    }

    if (fileName === "replay.ts") {
      const mutation = steps.find((step) => step.name.includes("mutation"));
      const replay = steps.find((step) => step.outcome === "replay");
      if (!mutation || !replay || replay.sequence >= mutation.sequence) {
        failures.push(`${label} 不能证明 hotspot、usage、mystery 覆盖事件重放`);
      }
    }
  }
}

function validateSessionsMockPayloadHandlers() {
  const commandFixturePath = path.join(
    repoRoot,
    "src",
    "mocks",
    "fixtures",
    "commands.ts",
  );
  const ipcCommandsPath = path.join(repoRoot, "src", "contracts", "ipc", "commands.ts");
  const commandFixtureText = readRequired(commandFixturePath);
  const ipcCommandsText = readRequired(ipcCommandsPath);
  const sessionsCommands = [
    ...ipcCommandsText.matchAll(
      /\{\s*"domain":\s*"sessions"[\s\S]*?"command":\s*"([^"]+)"/g,
    ),
  ].map((match) => match[1]);

  if (sessionsCommands.length === 0) {
    failures.push("src/contracts/ipc/commands.ts 没有可验证的 sessions command");
    return;
  }

  assertIncludes("src/mocks/fixtures/commands.ts", commandFixtureText, [
    "const sessionsCommandHandlers",
    "sessionsCommandHandlers[definition.command] ??",
    "loadSessionsHandler",
    "deleteSessionsHandler",
    "loadSessionAnalyticsHandler",
    "loadUsageAnalyticsHandler",
    "deletedIds",
    "items: []",
  ]);

  for (const command of sessionsCommands) {
    if (!commandFixtureText.includes(`${command}:`)) {
      failures.push(`src/mocks/fixtures/commands.ts 缺少 sessions 专用 handler：${command}`);
    }
  }
}

validateScenarioRegistry();
validateSkillsCommandMirror();
validateScenarioFiles();
validateRaceContractMockHelpers();
validateAccountsMockPayloadHandlers();
validateAnalyticsMockPayloadHandlers();
validateMcpMockPayloadHandlers();
validatePluginsMockPayloadHandlers();
validateSessionsMockPayloadHandlers();
validateRelayMockPayloadHandlers();
validateSystemActionMockPayloadHandlers();
validateMaintenanceSystemWindowEvidence();
validateDaemonAutoswitchMockPayloadHandlers();
validateMaintenanceSystemScenarioCoverage();
validateOverviewMockPayloadHandlers();
validateStatefulSystemHotspotUsageMysteryMocks();
validateStatefulSystemScenarioCoverage();
validateIpcMockBridge();

if (failures.length > 0) {
  console.error("E2E mock 场景验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(`E2E mock 场景验证通过：${requiredScenarios.length}/${requiredScenarios.length}`);
