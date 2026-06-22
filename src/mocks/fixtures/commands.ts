import {
  IPC_COMMAND_DEFINITIONS,
  type IpcArgs,
  type IpcCommandName,
} from "@/contracts/ipc";
import i18n from "@/lib/i18n";
import type { CoreEnvelope, CoreWarning } from "@/types";
import type {
  AccountExportPayload,
  AccountImportPayload,
  AccountImportPreviewPayload,
  AccountMonitorPayload,
  AccountSessionImportPayload,
  ApiModePayload,
  ApiProxyDetectPayload,
  ApiProxyMode,
  ApiProxyTestPayload,
  AppPathState,
  AutoSwitchConfigPayload,
  AutoSwitchRuntimeState,
  BackendSkeletonStatus,
  ChangeAnalyticsPayload,
  CleanPayload,
  CoreSnapshotPayload,
  CustomInstructionCurrentState,
  CustomInstructionHistoryEntry,
  CustomInstructionPreviewPayload,
  CustomInstructionStatePayload,
  DaemonRunPayload,
  DiagnosePayload,
  InstalledSkillSummary,
  McpServerListPayload,
  McpServerMutationPayload,
  McpServerRemovePayload,
  McpServerSummary,
  McpTransport,
  MysteryRouteGrant,
  NotificationClientStatePayload,
  QuotaHistoryPayload,
  RelayActivePayload,
  RelayDiagnosticIssuePayload,
  RelayDiagnosticPayload,
  RelayExportPayload,
  RelayExtraHeaders,
  RelayImportPayload,
  RelayPassthroughAuditEntry,
  RelayProviderPayload,
  RelayProxyPayload,
  RelayRouterIssueFixPayload,
  RelayRouterTogglePayload,
  RelayStatePayload,
  RelayTestPayload,
  RuntimeExtensionConfigPayload,
  RuntimeExtensionListPayload,
  RuntimeExtensionPluginPayload,
  RuntimeExtensionSettingsValue,
  RuntimeExtensionTogglePayload,
  PendingAutoSwitchStatePayload,
  SessionAnalyticsPayload,
  SessionsDeletePayload,
  SessionsListPayload,
  SkillBackupListPayload,
  SkillDeleteBackupPayload,
  SkillImportPayload,
  SkillListPayload,
  SkillRemovePayload,
  SkillRestorePayload,
  SystemActionPayload,
  TokenAnalyticsPayload,
  ToolAnalyticsPayload,
  TrayIconWindowPayload,
  TrayLocalePayload,
  TrayMenuEventPayload,
  TrayMenuSnapshotPayload,
  TrayRelayUsageQuotaModelPayload,
  RebuildRegistryPayload,
  UpdateInstallabilityPayload,
  LogoutPayload,
  RemovePayload,
  SwitchPayload,
  UsageAnalyticsPayload,
} from "@/types";
import type { IpcMockStepResult } from "@/mocks/ipc";
import {
  createEvidenceBackedIpcFixture,
  type EvidenceBackedIpcFixture,
} from "./index";

export interface IpcCommandFixture {
  argKeys: readonly string[];
  command: IpcCommandName;
  domain: (typeof IPC_COMMAND_DEFINITIONS)[number]["domain"];
  handler: IpcCommandHandler;
  source: (typeof IPC_COMMAND_DEFINITIONS)[number]["source"];
  tier: (typeof IPC_COMMAND_DEFINITIONS)[number]["tier"];
  wrapperNames: readonly string[];
}

export type IpcCommandMockData =
  | EvidenceBackedIpcFixture
  | AccountExportPayload
  | AccountImportPayload
  | AccountImportPreviewPayload
  | AccountMonitorPayload
  | AccountSessionImportPayload
  | ApiModePayload
  | ApiProxyDetectPayload
  | ApiProxyTestPayload
  | AutoSwitchConfigPayload
  | BackendSkeletonStatus
  | ChangeAnalyticsPayload
  | CleanPayload
  | CoreSnapshotPayload
  | CustomInstructionPreviewPayload
  | CustomInstructionStatePayload
  | DaemonRunPayload
  | DiagnosePayload
  | LogoutPayload
  | McpServerListPayload
  | McpServerMutationPayload
  | McpServerRemovePayload
  | MysteryRouteGrant[]
  | NotificationClientStatePayload
  | RemovePayload
  | RelayActivePayload
  | RelayDiagnosticPayload
  | RelayExportPayload
  | RelayImportPayload
  | RelayProviderPayload
  | RelayProxyPayload
  | RelayRouterIssueFixPayload
  | RelayRouterTogglePayload
  | RelayStatePayload
  | RelayTestPayload
  | RuntimeExtensionConfigPayload
  | RuntimeExtensionListPayload
  | RuntimeExtensionTogglePayload
  | PendingAutoSwitchStatePayload
  | RebuildRegistryPayload
  | QuotaHistoryPayload
  | SessionAnalyticsPayload
  | SessionsDeletePayload
  | SessionsListPayload
  | SkillBackupListPayload
  | SkillDeleteBackupPayload
  | SkillImportPayload
  | SkillListPayload
  | SkillRemovePayload
  | SkillRestorePayload
  | SystemActionPayload
  | SwitchPayload
  | TokenAnalyticsPayload
  | ToolAnalyticsPayload
  | TrayIconWindowPayload
  | TrayLocalePayload
  | TrayMenuEventPayload
  | TrayMenuSnapshotPayload
  | TrayRelayUsageQuotaModelPayload
  | UpdateInstallabilityPayload
  | UsageAnalyticsPayload
  | null
  | unknown[]
  | boolean
  | string
  | Record<string, unknown>;

export type IpcCommandHandler = (context: {
  args?: IpcArgs;
  command: IpcCommandName;
  steps: IpcMockStepResult[];
}) => CoreEnvelope<IpcCommandMockData>;

export function createDefaultIpcCommandHandler(): IpcCommandHandler {
  return ({ args, command, steps }) =>
    createRaceAwareIpcEnvelope({ args, command, steps });
}

const defaultHandler = createDefaultIpcCommandHandler();

function mockCopy(key: string): string {
  return i18n.t(key);
}

function createRaceAwareIpcEnvelope(
  context: Parameters<IpcCommandHandler>[0],
): CoreEnvelope<EvidenceBackedIpcFixture> {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const raceWarnings = createStateRaceContractWarnings(context.steps);
  if (raceWarnings.length === 0) return envelope;
  return { ...envelope, warnings: [...envelope.warnings, ...raceWarnings] };
}

function createStateRaceContractWarnings(
  steps: IpcMockStepResult[],
): CoreWarning[] {
  if (steps.length === 0) return [];

  const scenario = steps[0]?.scenario;
  const warnings: CoreWarning[] = [];

  if (steps.some((step) => step.delayMs >= 500)) {
    warnings.push({
      code: "MOCK_DELAYED_RESPONSE",
      message: "mock scenario includes a delayed IPC response",
    });
  }

  if (scenario === "stale" && hasOutOfOrderSequence(steps)) {
    warnings.push({
      code: "MOCK_STALE_RESPONSE",
      message: "mock scenario returns an older sequence after a newer result",
    });
  }

  if (scenario === "concurrency" && hasOutOfOrderSequence(steps)) {
    warnings.push({
      code: "MOCK_CONCURRENT_RESPONSE",
      message: "mock scenario exercises duplicate in-flight IPC responses",
    });
  }

  if (hasReplayOlderThanMutation(steps)) {
    warnings.push({
      code: "MOCK_EVENT_REPLAY",
      message: "mock scenario replays an event older than the mutation result",
    });
  }

  if (hasReplacementAfterOutcome(steps, "cancel")) {
    warnings.push({
      code: "MOCK_CANCELLED_RESPONSE",
      message: "mock scenario cancels a stale response before replacement data",
    });
  }

  if (hasReplacementAfterOutcome(steps, "abort")) {
    warnings.push({
      code: "MOCK_ABORTED_RESPONSE",
      message: "mock scenario aborts a stale response before replacement data",
    });
  }

  return warnings;
}

function hasOutOfOrderSequence(steps: IpcMockStepResult[]) {
  return steps.some((candidate, candidateIndex) =>
    steps.some(
      (other, otherIndex) =>
        otherIndex > candidateIndex &&
        candidate.delayMs > other.delayMs &&
        candidate.sequence < other.sequence,
    ),
  );
}

function hasReplayOlderThanMutation(steps: IpcMockStepResult[]) {
  const mutation = steps.find((step) => step.stepName.includes("mutation"));
  const replay = steps.find((step) => step.outcome === "replay");
  return Boolean(mutation && replay && replay.sequence < mutation.sequence);
}

function hasReplacementAfterOutcome(
  steps: IpcMockStepResult[],
  outcome: "abort" | "cancel",
) {
  const terminalSequences = steps
    .filter((step) => step.outcome === outcome)
    .map((step) => step.sequence);
  if (terminalSequences.length === 0) return false;
  const terminalSequence = Math.max(...terminalSequences);
  return steps.some(
    (step) => step.outcome === "resolve" && step.sequence > terminalSequence,
  );
}

function withMockData<T extends IpcCommandMockData>(
  context: Parameters<IpcCommandHandler>[0],
  data: T,
): CoreEnvelope<T> {
  const envelope = createRaceAwareIpcEnvelope(context);
  return { ...envelope, data };
}

const writeBooleanArgHandler: IpcCommandHandler = (context) =>
  withMockData(context, context.args?.enabled === true);

const systemHotspotMockState = {
  enabled: false,
  hasNotch: true,
  ready: false,
};

const systemImageCompatMockState = {
  enabled: true,
};

const hotspotEnabledHandler: IpcCommandHandler = (context) =>
  withMockData(context, systemHotspotMockState.enabled);

const setHotspotEnabledHandler: IpcCommandHandler = (context) => {
  systemHotspotMockState.enabled = readArgBoolean(
    context.args,
    "enabled",
    systemHotspotMockState.enabled,
  );
  return withMockData(context, systemHotspotMockState.enabled);
};

const hotspotReadyHandler: IpcCommandHandler = (context) => {
  systemHotspotMockState.ready = true;
  return withMockData(context, systemHotspotMockState.ready);
};

const hasNotchHandler: IpcCommandHandler = (context) =>
  withMockData(context, systemHotspotMockState.hasNotch);

const imageCompatHandler: IpcCommandHandler = (context) =>
  withMockData(context, systemImageCompatMockState.enabled);

const setImageCompatHandler: IpcCommandHandler = (context) => {
  systemImageCompatMockState.enabled = readArgBoolean(
    context.args,
    "enabled",
    systemImageCompatMockState.enabled,
  );
  return withMockData(context, systemImageCompatMockState.enabled);
};

const systemUsageMockState = {
  lastScanAt: 1_700_000_000_000,
  refreshCount: 0,
  refreshInterval: "1m",
  usageLastError: null as string | null,
  usageSource: "local" as CoreSnapshotPayload["status"]["usageSource"],
  usageStatus: "unknown" as CoreSnapshotPayload["status"]["apiConnectivity"]["usageStatus"],
};

const apiProxyMockState: ApiModePayload["api"]["proxy"] = {
  mode: "direct",
  url: null,
};

const usageRefreshIntervalHandler: IpcCommandHandler = (context) =>
  withMockData(context, systemUsageMockState.refreshInterval);

const setUsageRefreshIntervalHandler: IpcCommandHandler = (context) => {
  systemUsageMockState.refreshInterval = readRefreshIntervalArg(
    context.args,
    "interval",
    systemUsageMockState.refreshInterval,
  );
  return withMockData(context, systemUsageMockState.refreshInterval);
};

const systemActionHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: SystemActionPayload = {
    backendStatus: envelope.data.status,
  };
  if (context.command === "reset_codex_config") {
    data.configCleared = true;
  }
  if (context.command === "force_kill_codex") {
    data.killedCount = 0;
    data.terminatedProcessCount = 0;
    data.processes = [];
  }
  return { ...envelope, data };
};

function trayBackendStatus(
  context: Parameters<IpcCommandHandler>[0],
  note: string,
): BackendSkeletonStatus {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope.data.status,
    module: "tray",
    command: context.command,
    restored: false,
    note,
    boundary: {
      repositoryChecked: false,
      repositoryPathKnown: false,
      platformChecked: true,
      coreChecked: true,
      effect: "pending",
    },
  };
}

const trayQuotaModel = (
  backendStatus: BackendSkeletonStatus,
): TrayRelayUsageQuotaModelPayload => ({
  backendStatus,
  activeProviderLabel: null,
  quotaPercent: null,
  modelLabel: null,
});

const createTrayIconWindowHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const backendStatus = trayBackendStatus(
    context,
    "托盘图标窗口已接入 IPC/mock 合同；mock 不创建真实系统托盘窗口。",
  );
  const data: TrayIconWindowPayload = {
    backendStatus,
    trayId: "main",
    created: false,
  };
  return { ...envelope, data };
};

const createOrRefreshTrayMenuHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const backendStatus = trayBackendStatus(
    context,
    "托盘菜单刷新已接入 IPC/mock 合同；mock 只返回菜单形状，不注册原生菜单。",
  );
  const items = [
    { id: "tray_open_main", labelKey: "tray.openMain", enabled: true },
    { id: "tray_quit", labelKey: "tray.quit", enabled: true },
  ];
  const data: TrayMenuSnapshotPayload = {
    backendStatus,
    itemCount: items.length,
    items,
    quotaModel: trayQuotaModel(backendStatus),
  };
  return { ...envelope, data };
};

function classifyTrayMenuEvent(eventId: string): Omit<TrayMenuEventPayload, "backendStatus"> {
  if (eventId.startsWith("tray_account:")) {
    const accountKey = eventId.slice("tray_account:".length) || null;
    return {
      eventId,
      action: "switch_account",
      route: null,
      accountKey,
      shouldFocusMain: false,
      shouldQuit: false,
      sourceArchiveExtra: false,
    };
  }

  if (eventId === "tray_quit") {
    return {
      eventId,
      action: "quit",
      route: null,
      accountKey: null,
      shouldFocusMain: false,
      shouldQuit: true,
      sourceArchiveExtra: false,
    };
  }

  if (eventId === "tray_router_open") {
    return {
      eventId,
      action: "navigate",
      route: "relayModel",
      accountKey: null,
      shouldFocusMain: true,
      shouldQuit: false,
      sourceArchiveExtra: true,
    };
  }

  if (
    eventId === "tray_open_main" ||
    eventId === "tray_active_title" ||
    eventId === "tray_active_subtitle"
  ) {
    return {
      eventId,
      action: "focus_main",
      route: "overview",
      accountKey: null,
      shouldFocusMain: true,
      shouldQuit: false,
      sourceArchiveExtra: false,
    };
  }

  return {
    eventId,
    action: "unknown",
    route: null,
    accountKey: null,
    shouldFocusMain: false,
    shouldQuit: false,
    sourceArchiveExtra: false,
  };
}

const handleTrayMenuEventHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const eventId = readArgString(context.args, "eventId", "");
  const data: TrayMenuEventPayload = {
    backendStatus: trayBackendStatus(
      context,
      "托盘菜单事件已接入 IPC/mock 合同；mock 只做事件分类，不执行窗口、账号或退出副作用。",
    ),
    ...classifyTrayMenuEvent(eventId),
  };
  return { ...envelope, data };
};

const setTrayLocaleHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: TrayLocalePayload = {
    backendStatus: trayBackendStatus(
      context,
      "托盘语言刷新已接入 IPC/mock 合同；mock 不重建真实原生菜单。",
    ),
    language: readArgString(context.args, "language", "zh"),
    refreshed: false,
  };
  return { ...envelope, data };
};

const trayRelayUsageQuotaModelHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const backendStatus = trayBackendStatus(
    context,
    "托盘 relay 使用量模型已接入 IPC/mock 合同；mock 不读取真实账号或配额状态。",
  );
  return { ...envelope, data: trayQuotaModel(backendStatus) };
};

const runtimeWatcherMockState = {
  notifySequence: 0,
  lastActivityAt: null as number | null,
  lastFullRefreshRequestedAt: null as number | null,
  usageWatcherStarted: false,
  autoSwitchPendingWatcherStarted: false,
};

const runtimeWatcherStatusHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const now = Date.now();
  let note = "system runtime watcher 已恢复进程内状态合同；mock 不创建真实线程、不发送事件。";

  if (context.command === "note_usage_refresh_activity") {
    runtimeWatcherMockState.lastActivityAt = now;
    runtimeWatcherMockState.notifySequence += 1;
    note = "使用量刷新活动已写入 mock watcher state，并递增 notify 序列。";
  }
  if (context.command === "schedule_full_runtime_refresh") {
    const coalesced =
      runtimeWatcherMockState.lastFullRefreshRequestedAt !== null &&
      now - runtimeWatcherMockState.lastFullRefreshRequestedAt < 8_000;
    if (!coalesced) {
      runtimeWatcherMockState.lastFullRefreshRequestedAt = now;
      runtimeWatcherMockState.notifySequence += 1;
    }
    note = coalesced
      ? "全量运行时刷新请求命中 mock 8 秒 debounce。"
      : "全量运行时刷新请求已写入 mock watcher state。";
  }
  if (context.command === "start_auto_switch_pending_watcher") {
    const alreadyStarted = runtimeWatcherMockState.autoSwitchPendingWatcherStarted;
    runtimeWatcherMockState.autoSwitchPendingWatcherStarted = true;
    note = alreadyStarted
      ? "自动切换 pending watcher mock once guard 已启动。"
      : "自动切换 pending watcher mock once guard 已写入。";
  }
  if (context.command === "start_usage_refresh_watcher") {
    const alreadyStarted = runtimeWatcherMockState.usageWatcherStarted;
    runtimeWatcherMockState.usageWatcherStarted = true;
    note = alreadyStarted
      ? "使用量刷新 watcher mock once guard 已启动。"
      : "使用量刷新 watcher mock once guard 已写入。";
  }
  if (context.command === "update_usage_refresh_schedule") {
    runtimeWatcherMockState.notifySequence += 1;
    note = `使用量刷新间隔 ${systemUsageMockState.refreshInterval} 已写入 mock watcher state。`;
  }

  const data: BackendSkeletonStatus = {
    ...envelope.data.status,
    restored: true,
    note,
    boundary: {
      repositoryChecked: true,
      repositoryPathKnown: true,
      platformChecked: true,
      coreChecked: true,
      effect: "no_op",
    },
  };
  return { ...envelope, data };
};

const bootstrapCacheMockState: {
  writtenAt: number | null;
  usageAnalytics: UsageAnalyticsPayload | null;
  mcpServers: McpServerSummary[];
  installedSkills: InstalledSkillSummary[];
} = {
  writtenAt: null,
  usageAnalytics: null,
  mcpServers: [],
  installedSkills: [],
};

const daemonAutoswitchMockState = {
  enabled: false,
  threshold5hPercent: 80,
  thresholdWeeklyPercent: 80,
  serviceState: "unknown" as AutoSwitchRuntimeState,
  serviceLabel: "",
  executedAt: null as number | null,
  runOnce: false,
  currentAccountKey: "",
  candidateAccountKey: "",
  dismissedAt: null as string | null,
};

function daemonAutoswitchConfigPayload(
  backendStatus: BackendSkeletonStatus,
): AutoSwitchConfigPayload {
  return {
    backendStatus,
    autoSwitch: {
      enabled: daemonAutoswitchMockState.enabled,
      threshold5hPercent: daemonAutoswitchMockState.threshold5hPercent,
      thresholdWeeklyPercent: daemonAutoswitchMockState.thresholdWeeklyPercent,
      serviceState: daemonAutoswitchMockState.serviceState,
      serviceLabel: daemonAutoswitchMockState.serviceLabel,
    },
  };
}

const bootstrapStateHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: {
      backendStatus: envelope.data.status,
      writtenAt: bootstrapCacheMockState.writtenAt,
      snapshotProgressive: null,
      usageAnalytics: cloneUsageAnalytics(bootstrapCacheMockState.usageAnalytics),
      mcpServers: cloneMcpServers(bootstrapCacheMockState.mcpServers),
      installedSkills: cloneInstalledSkills(bootstrapCacheMockState.installedSkills),
      executedAt: daemonAutoswitchMockState.executedAt,
      runOnce: daemonAutoswitchMockState.runOnce,
      autoSwitchEnabled: daemonAutoswitchMockState.enabled,
      activeAccountKey: null,
      switchedAccountKey: null,
      pendingSwitchAccountKey: daemonAutoswitchMockState.candidateAccountKey || null,
    },
  };
};

const pendingAutoSwitchStateHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: {
      backendStatus: envelope.data.status,
      currentAccountKey: daemonAutoswitchMockState.currentAccountKey,
      candidateAccountKey: daemonAutoswitchMockState.candidateAccountKey,
      dismissedAt: daemonAutoswitchMockState.dismissedAt,
    },
  };
};

const runDaemonOnceHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  daemonAutoswitchMockState.executedAt = Date.now();
  daemonAutoswitchMockState.runOnce = true;
  daemonAutoswitchMockState.serviceState = "running";
  daemonAutoswitchMockState.serviceLabel = "模拟守护任务已运行";
  const data: DaemonRunPayload = {
    backendStatus: envelope.data.status,
    executedAt: daemonAutoswitchMockState.executedAt,
    runOnce: daemonAutoswitchMockState.runOnce,
    autoSwitchEnabled: daemonAutoswitchMockState.enabled,
    serviceState: daemonAutoswitchMockState.serviceState,
  };
  return { ...envelope, data };
};

const setAutoSwitchHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  daemonAutoswitchMockState.enabled = readArgBoolean(
    context.args,
    "enabled",
    daemonAutoswitchMockState.enabled,
  );
  daemonAutoswitchMockState.serviceState = daemonAutoswitchMockState.enabled
    ? "running"
    : "stopped";
  daemonAutoswitchMockState.serviceLabel = daemonAutoswitchMockState.enabled
    ? "模拟自动切换已启用"
    : "模拟自动切换已停用";
  return {
    ...envelope,
    data: daemonAutoswitchConfigPayload(envelope.data.status),
  };
};

const configureAutoSwitchHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  daemonAutoswitchMockState.enabled = readArgBoolean(
    context.args,
    "enabled",
    daemonAutoswitchMockState.enabled,
  );
  daemonAutoswitchMockState.threshold5hPercent = readArgPositiveInteger(
    context.args,
    "threshold5hPercent",
    daemonAutoswitchMockState.threshold5hPercent,
  );
  daemonAutoswitchMockState.thresholdWeeklyPercent = readArgPositiveInteger(
    context.args,
    "thresholdWeeklyPercent",
    daemonAutoswitchMockState.thresholdWeeklyPercent,
  );
  return {
    ...envelope,
    data: daemonAutoswitchConfigPayload(envelope.data.status),
  };
};

const dismissPendingAutoSwitchHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  daemonAutoswitchMockState.dismissedAt = new Date().toISOString();
  daemonAutoswitchMockState.candidateAccountKey = "";
  return { ...envelope, data: daemonAutoswitchMockState.dismissedAt };
};

const confirmPendingAutoSwitchHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  daemonAutoswitchMockState.currentAccountKey =
    daemonAutoswitchMockState.candidateAccountKey ||
    daemonAutoswitchMockState.currentAccountKey;
  daemonAutoswitchMockState.candidateAccountKey = "";
  daemonAutoswitchMockState.dismissedAt = null;
  return { ...envelope, data: null };
};

function emptyAppPathState(): AppPathState {
  return {
    codexHome: "<codex-home>",
    accountsPath: "<codex-home>/accounts",
    authPath: "<codex-home>/auth.json",
    registryPath: "<codex-home>/registry.json",
    sessionsPath: "<codex-home>/sessions",
    launchAgentPath: "<codex-home>/launch-agent",
    autoSwitchLogPath: "<codex-home>/logs/auto-switch.log",
    authExists: false,
    registryExists: false,
    sessionsExists: false,
  };
}

function diagnosticSkeletonState(): NonNullable<DiagnosePayload["repositoryState"]> {
  return {
    checked: false,
    state: "pending",
    detail: null,
  };
}

const cleanHandler: IpcCommandHandler = (context) => {
  const data: CleanPayload = {
    authBackupsRemoved: 0,
    registryBackupsRemoved: 0,
    staleEntriesRemoved: 0,
  };
  return withMockData(context, data);
};

const rebuildRegistryHandler: IpcCommandHandler = (context) => {
  const data: RebuildRegistryPayload = {
    accountCount: 0,
    activeAccountKey: null,
    registryUpdated: false,
  };
  return withMockData(context, data);
};

const diagnoseHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: DiagnosePayload = {
    backendStatus: envelope.data.status,
    checkedAt: null,
    paths: emptyAppPathState(),
    coreVersion: "",
    platform: { os: "unknown", arch: "unknown", infoSource: "mock" },
    registryState: { accountCount: 0 },
    sessionState: { latestRolloutFound: false },
    apiState: {
      usageAttemptCount: 0,
      usageSuccessCount: 0,
      nameAttemptCount: 0,
      nameSuccessCount: 0,
      lastUsageFailure: null,
      lastUsageFailureAccount: null,
      lastNameFailure: null,
      lastNameFailureAccount: null,
    },
    diagnosticSnapshot: {
      rootPath: "",
      sourcePath: "",
      statusCode: "pending",
      message: "Skeleton diagnostic pending; no repository checks were executed.",
      probes: [],
    },
    catalogIntegrity: {
      sourcePath: "<codex-home>/config.toml",
      catalogSourcePath: "<codex-home>/codex_router_catalog.json",
      diagnosticBoundary: "diagnostics.catalog_integrity.repository_read",
      pending: false,
      status: "restored",
      detail: mockCopy("relay.mock.fix.readOnlyAcknowledgedDetail"),
      codexProviderCount: 0,
      catalogExists: false,
      configTomlHasRouter: false,
      configTomlHasCatalog: false,
      configTomlSyntaxValid: true,
      configTomlSyntaxReason: null,
      configProfileConflict: false,
      configProfileConflictReason: null,
      managedBlockExists: false,
      routerEnabled: false,
      userTopLevelProfile: null,
      configStaleReason: null,
      hasIssues: false,
    },
    pendingDiagnostics: [
      {
        field: "auth_file_shape",
        status: "repository_read",
        detail: null,
      },
      {
        field: "registry_file_shape",
        status: "repository_read",
        detail: null,
      },
      {
        field: "session_rollout_file_shape",
        status: "repository_read",
        detail: null,
      },
      { field: "repository", status: "pending", detail: null },
      { field: "platform", status: "pending", detail: null },
    ],
    repositoryState: diagnosticSkeletonState(),
    platformState: diagnosticSkeletonState(),
    diagnosticBoundary: "skeleton",
  };
  return { ...envelope, data };
};

const updateInstallabilityHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: UpdateInstallabilityPayload = {
    backendStatus: envelope.data.status,
    canInstall: false,
    code: "mock_pending",
    executablePath: null,
    bundlePath: null,
    translocated: false,
    quarantined: false,
  };
  return { ...envelope, data };
};

const accountMonitorHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: AccountMonitorPayload = {
    backendStatus: envelope.data.status,
  };
  return { ...envelope, data };
};

const accountSwitchHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: SwitchPayload = {
    backendStatus: envelope.data.status,
    previousAccountKey: null,
    activeAccountKey: readArgOptionalString(context.args, "accountKey"),
    activeAccount: null,
    authUpdated: false,
    registryUpdated: false,
  };
  return { ...envelope, data };
};

const accountLogoutHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: LogoutPayload = {
    backendStatus: envelope.data.status,
    authRemoved: false,
    authBackedUp: false,
  };
  return { ...envelope, data };
};

const accountRemoveHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const removedAccountKeys = readArgStringArray(context.args, "accountKeys");
  const data: RemovePayload = {
    backendStatus: envelope.data.status,
    removedAccountKeys,
    removedCount: removedAccountKeys.length,
    previousAccountKey: null,
  };
  return { ...envelope, data };
};

function emptyAccountImportPayload(
  backendStatus: AccountImportPayload["backendStatus"],
): AccountImportPayload {
  return {
    backendStatus,
    importedCount: 0,
    importedAccountKeys: [],
    skipped: [],
    registryAccountCount: 0,
    activeAccountKey: null,
  };
}

const accountImportHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return { ...envelope, data: emptyAccountImportPayload(envelope.data.status) };
};

const accountSessionImportHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: AccountSessionImportPayload = {
    backendStatus: envelope.data.status,
    imported: false,
    accountKey: null,
    email: null,
    plan: null,
    snapshotPath: null,
    registryAccountCount: 0,
    activeAccountKey: null,
    refreshTokenPlaceholder: false,
  };
  return { ...envelope, data };
};

const accountExportHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: AccountExportPayload = {
    backendStatus: envelope.data.status,
    targetPath: readArgString(context.args, "targetPath", ""),
    accountCount: 0,
    exportedAt: null,
    skipped: [],
  };
  return { ...envelope, data };
};

const accountPreviewImportHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: AccountImportPreviewPayload = {
    backendStatus: envelope.data.status,
    filePath: readArgString(context.args, "filePath", ""),
    schemaVersion: 1,
    kind: "account-export",
    appVersion: null,
    exportedAt: null,
    exportedHostname: null,
    entries: [],
    accountCount: 0,
    conflictCount: 0,
  };
  return { ...envelope, data };
};

const loadSessionsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: SessionsListPayload = {
    backendStatus: envelope.data.status,
    items: [],
    total: 0,
    sourcePath: "",
    lastScanAt: 0,
  };
  return { ...envelope, data };
};

const deleteSessionsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const ids = readArgStringArray(context.args, "ids");
  const data: SessionsDeletePayload = {
    backendStatus: envelope.data.status,
    requestedIds: ids,
    deletedIds: ids,
    skippedIds: [],
    deletedCount: ids.length,
    sourcePath: "",
  };
  return { ...envelope, data };
};

const mcpMockState: { servers: McpServerSummary[] } = {
  servers: [],
};

const loadMcpServersHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const items = readMcpMockServers();
  syncBootstrapMcpServers();
  const data: McpServerListPayload = {
    status: envelope.data.status,
    items,
    total: items.length,
    sourcePath: "",
    lastScanAt: bootstrapCacheMockState.writtenAt ?? 0,
  };
  return { ...envelope, data };
};

const upsertMcpServerHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const server = mcpServerFromArgs(context.args);
  upsertMcpMockServer(server);
  const data: McpServerMutationPayload = {
    status: envelope.data.status,
    server,
    total: readMcpMockServers().length,
    sourcePath: "",
  };
  return { ...envelope, data };
};

const setMcpServerEnabledHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const server = mcpServerFromArgs(context.args, context.args?.enabled === true);
  upsertMcpMockServer(server);
  const data: McpServerMutationPayload = {
    status: envelope.data.status,
    server,
    total: readMcpMockServers().length,
    sourcePath: "",
  };
  return { ...envelope, data };
};

const removeMcpServerHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const removedName = readArgString(context.args, "name", "");
  removeMcpMockServer(removedName);
  const data: McpServerRemovePayload = {
    status: envelope.data.status,
    removedName,
    total: readMcpMockServers().length,
    sourcePath: "",
  };
  return { ...envelope, data };
};

function mcpServerFromArgs(
  args: IpcArgs | undefined,
  enabled = args?.enabled === true,
): McpServerSummary {
  return {
    name: readArgString(args, "name", ""),
    transport: normalizeMcpTransport(readArgString(args, "transport", "unknown")),
    enabled,
    sourcePath: "",
    command: readArgOptionalString(args, "command"),
    args: readArgStringArray(args, "args"),
    url: readArgOptionalString(args, "url"),
    headers: readArgStringRecord(args, "headers"),
    environment: readArgStringRecord(args, "environment"),
  };
}

function normalizeMcpTransport(value: string): McpTransport {
  return value === "stdio" || value === "http" || value === "sse"
    ? value
    : "unknown";
}

function cloneMcpServer(server: McpServerSummary): McpServerSummary {
  return {
    ...server,
    args: [...server.args],
    headers: { ...server.headers },
    environment: { ...server.environment },
  };
}

function cloneMcpServers(servers: McpServerSummary[]) {
  return servers.map(cloneMcpServer);
}

function readMcpMockServers() {
  return cloneMcpServers(mcpMockState.servers);
}

function upsertMcpMockServer(server: McpServerSummary) {
  if (!server.name) return;
  const next = cloneMcpServer(server);
  const index = mcpMockState.servers.findIndex((item) => item.name === server.name);
  if (index >= 0) {
    mcpMockState.servers[index] = next;
    return;
  }
  mcpMockState.servers.push(next);
}

function removeMcpMockServer(name: string) {
  if (!name) return;
  mcpMockState.servers = mcpMockState.servers.filter((item) => item.name !== name);
}

function syncBootstrapMcpServers() {
  bootstrapCacheMockState.mcpServers = readMcpMockServers();
  touchBootstrapCache();
}

function cloneUsageAnalytics(payload: UsageAnalyticsPayload | null) {
  if (!payload) return null;
  return {
    ...payload,
    today: { ...payload.today },
    sessionStats: { ...payload.sessionStats },
    dailyActivity: payload.dailyActivity.map((item) => ({ ...item })),
  };
}

const loadUsageAnalyticsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: UsageAnalyticsPayload = {
    backendStatus: envelope.data.status,
    today: {
      sessionCount: 0,
      totalFileSize: 0,
      activeMinutesEstimate: 0,
    },
    sessionStats: {
      totalSessions: 0,
      totalSizeBytes: 0,
      activeDays: 0,
      avgSessionsPerActiveDay: 0,
      mostActiveDate: null,
      mostActiveCount: 0,
    },
    dailyActivity: [],
  };
  bootstrapCacheMockState.usageAnalytics = cloneUsageAnalytics(data);
  touchBootstrapCache();
  return { ...envelope, data };
};

const loadQuotaHistoryHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: QuotaHistoryPayload = {
    backendStatus: envelope.data.status,
    accountKey: readArgOptionalString(context.args, "accountKey"),
    points: [],
  };
  return { ...envelope, data };
};

const loadSessionAnalyticsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const range = readArgString(context.args, "range", "week");
  const data: SessionAnalyticsPayload = {
    backendStatus: envelope.data.status,
    range: normalizeAnalyticsRange(range),
    totalSessions: 0,
    avgTurns: 0,
    activeDays: 0,
    series: [],
  };
  return { ...envelope, data };
};

const loadTokenAnalyticsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const range = readArgString(context.args, "range", "week");
  const data: TokenAnalyticsPayload = {
    backendStatus: envelope.data.status,
    range: normalizeAnalyticsRange(range),
    totalTokens: 0,
    avgPerSession: 0,
    inputPct: 0,
    outputPct: 0,
    reasoningPct: 0,
    inputTotal: 0,
    outputTotal: 0,
    reasoningTotal: 0,
    series: [],
  };
  return { ...envelope, data };
};

const loadToolAnalyticsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const range = readArgString(context.args, "range", "week");
  const data: ToolAnalyticsPayload = {
    backendStatus: envelope.data.status,
    range: normalizeAnalyticsRange(range),
    totalCalls: 0,
    distinctCount: 0,
    searchCount: 0,
    editCount: 0,
    topTools: [],
  };
  return { ...envelope, data };
};

const loadChangeAnalyticsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const range = readArgString(context.args, "range", "week");
  const data: ChangeAnalyticsPayload = {
    backendStatus: envelope.data.status,
    range: normalizeAnalyticsRange(range),
    totalCommands: 0,
    writeCommands: 0,
    readCommands: 0,
    otherCommands: 0,
    series: [],
  };
  return { ...envelope, data };
};

function normalizeAnalyticsRange(value: string) {
  return value === "today" || value === "month" ? value : "week";
}

const pluginsMockState: {
  items: RuntimeExtensionPluginPayload[];
  settings: Record<string, RuntimeExtensionSettingsValue>;
} = {
  items: [
    {
      id: "web-tools",
      name: "",
      title: null,
      description: null,
      version: "1.0.0",
      author: "AiMaMi",
      category: "proxy-tool",
      capabilities: [0],
      builtin: true,
      path: null,
      enabled: false,
      settings: {},
    },
    {
      id: "image-support",
      name: "",
      title: null,
      description: null,
      version: "1.0.0",
      author: "AiMaMi",
      category: "proxy-tool",
      capabilities: [1],
      builtin: true,
      path: null,
      enabled: false,
      settings: {},
    },
  ],
  settings: {
    "web-tools": {} as RuntimeExtensionSettingsValue,
    "image-support": {} as RuntimeExtensionSettingsValue,
  } as Record<string, RuntimeExtensionSettingsValue>,
};

function readPluginMockItems() {
  return pluginsMockState.items.map(readPluginMockPayload);
}

function readPluginMockPayload(plugin: RuntimeExtensionPluginPayload) {
  return {
    ...plugin,
    ...readPluginMockCopy(plugin.id),
  };
}

function readPluginMockCopy(id: string) {
  if (id === "web-tools") {
    const title = mockCopy("plugins.mock.webTools.title");
    return { name: title, title };
  }
  if (id === "image-support") {
    const title = mockCopy("plugins.mock.imageSupport.title");
    return { name: title, title };
  }
  return {};
}

function findPluginMock(id: string) {
  return pluginsMockState.items.find((plugin) => plugin.id === id) ?? null;
}

const listPluginsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const items = readPluginMockItems();
  const data: RuntimeExtensionListPayload = {
    backendStatus: envelope.data.status,
    items,
    total: items.length,
    sourcePath: "open-aimami/plugins.json",
    lastScanAt: 0,
  };
  return { ...envelope, data };
};

const togglePluginHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const id = readArgString(context.args, "id", "");
  const enabled = context.args?.enabled === true;
  const plugin = findPluginMock(id) ?? {
    id,
    name: id,
    title: null,
    description: null,
    version: null,
    author: null,
    category: null,
    capabilities: [],
    builtin: false,
    path: null,
    enabled,
    settings: pluginsMockState.settings[id] ?? {},
  };
  plugin.enabled = enabled;
  const items = readPluginMockItems();
  const data: RuntimeExtensionTogglePayload = {
    backendStatus: envelope.data.status,
    plugin: readPluginMockPayload(plugin),
    items,
    total: items.length,
    sourcePath: "open-aimami/plugins.json",
    lastScanAt: 0,
  };
  return { ...envelope, data };
};

const getPluginConfigHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const id = readArgString(context.args, "id", "");
  const data: RuntimeExtensionConfigPayload = {
    backendStatus: envelope.data.status,
    id,
    settings: pluginsMockState.settings[id] ?? {},
    sourcePath: "open-aimami/plugins.json",
    updated: false,
  };
  return { ...envelope, data };
};

const updatePluginConfigHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const id = readArgString(context.args, "id", "");
  const settings = normalizePluginSettingsValue(context.args?.settings);
  pluginsMockState.settings[id] = settings;
  const plugin = findPluginMock(id);
  if (plugin) {
    plugin.settings = settings;
  }
  const data: RuntimeExtensionConfigPayload = {
    backendStatus: envelope.data.status,
    id,
    settings,
    sourcePath: "open-aimami/plugins.json",
    updated: true,
  };
  return { ...envelope, data };
};

function normalizePluginSettingsValue(value: unknown): RuntimeExtensionSettingsValue {
  if (
    value === null ||
    typeof value === "boolean" ||
    typeof value === "string"
  ) {
    return value;
  }
  if (typeof value === "number") {
    return Number.isFinite(value) ? value : null;
  }
  if (Array.isArray(value)) {
    return value.map((item) => normalizePluginSettingsValue(item));
  }
  if (value && typeof value === "object") {
    return Object.fromEntries(
      Object.entries(value).map(([key, item]) => [
        key,
        normalizePluginSettingsValue(item),
      ]),
    );
  }
  return {};
}

function readArgString(args: IpcArgs | undefined, key: string, fallback: string) {
  const value = args?.[key];
  return typeof value === "string" && value.trim() ? value : fallback;
}

function readArgBoolean(args: IpcArgs | undefined, key: string, fallback: boolean) {
  const value = args?.[key];
  return typeof value === "boolean" ? value : fallback;
}

function readArgPositiveInteger(args: IpcArgs | undefined, key: string, fallback: number) {
  const value = args?.[key];
  return typeof value === "number" && Number.isInteger(value) && value > 0
    ? value
    : fallback;
}

function readRefreshIntervalArg(
  args: IpcArgs | undefined,
  key: string,
  fallback: string,
) {
  const value = args?.[key];
  return value === "30s" || value === "1m" || value === "3m" || value === "5m"
    ? value
    : fallback;
}

function readApiProxyModeArg(args: IpcArgs | undefined, fallback: ApiProxyMode) {
  const value = args?.mode;
  return value === "direct" || value === "manual" ? value : fallback;
}

function normalizeApiProxyUrlArg(args: IpcArgs | undefined) {
  const value = args?.url;
  return typeof value === "string" && value.trim() ? value.trim() : null;
}

function createApiModePayload(): ApiModePayload {
  return {
    api: {
      proxy: { ...apiProxyMockState },
    },
  };
}

function createApiProxyTestPayload(
  mode: ApiProxyMode,
  url: string | null,
): ApiProxyTestPayload {
  const reachable = mode === "direct" || (mode === "manual" && Boolean(url?.includes("://")));
  return {
    code: reachable ? "proxy.accepted" : "proxy.invalid",
    reachable,
    statusCode: null,
    message: reachable
      ? mockCopy(
          mode === "manual"
            ? "settings.apiProxyTestReachableManual"
            : "settings.apiProxyTestReachableDirect",
        )
      : mockCopy("settings.apiProxyTestInvalidConfig"),
  };
}

const setApiProxyConfigHandler: IpcCommandHandler = (context) => {
  apiProxyMockState.mode = readApiProxyModeArg(context.args, apiProxyMockState.mode);
  apiProxyMockState.url = normalizeApiProxyUrlArg(context.args);
  return withMockData(context, createApiModePayload());
};

const testApiProxyConfigHandler: IpcCommandHandler = (context) => {
  const mode = readApiProxyModeArg(context.args, "direct");
  const url = normalizeApiProxyUrlArg(context.args);
  return withMockData(context, createApiProxyTestPayload(mode, url));
};

const detectApiProxyConfigHandler: IpcCommandHandler = (context) =>
  withMockData(context, {
    found: false,
    mode: null,
    url: null,
    probe: createApiProxyTestPayload("direct", null),
  });

function readArgOptionalString(args: IpcArgs | undefined, key: string) {
  const value = args?.[key];
  return typeof value === "string" && value.trim() ? value : null;
}

function readArgStringArray(args: IpcArgs | undefined, key: string) {
  const value = args?.[key];
  return Array.isArray(value)
    ? value.filter((item): item is string => typeof item === "string" && item.trim().length > 0)
    : [];
}

function readArgStringRecord(args: IpcArgs | undefined, key: string) {
  const value = args?.[key];
  if (!value || typeof value !== "object" || Array.isArray(value)) return {};
  return Object.fromEntries(
    Object.entries(value).filter(
      (entry): entry is [string, string] => typeof entry[1] === "string",
    ),
  );
}

function skillSummaryFromId(id: string): InstalledSkillSummary {
  return {
    id,
    name: id,
    title: null,
    summary: null,
    relativePath: id,
    directoryPath: "",
    skillFilePath: "",
    updatedAt: null,
  };
}

function skillBackupFromId(id: string) {
  return {
    id,
    skillID: id,
    name: id,
    title: null,
    relativePath: id,
    backupPath: "",
    createdAt: 0,
  };
}

const skillsMockState: { installed: InstalledSkillSummary[] } = {
  installed: [],
};

const loadInstalledSkillsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const items = readInstalledSkillSummaries();
  syncBootstrapInstalledSkills();
  return {
    ...envelope,
    data: {
      status: envelope.data.status,
      items,
      total: items.length,
      rootPath: "",
      lastScanAt: bootstrapCacheMockState.writtenAt ?? 0,
    },
  };
};

const loadSkillBackupsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: {
      status: envelope.data.status,
      items: [],
      total: 0,
      rootPath: "",
      lastScanAt: 0,
    },
  };
};

const importSkillHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const id = readArgString(context.args, "path", "mock-skill");
  const skill = skillSummaryFromId(id);
  const replacedExisting = upsertInstalledSkill(skill);
  return {
    ...envelope,
    data: {
      status: envelope.data.status,
      skill,
      replacedExisting,
      backup: null,
    },
  };
};

const removeSkillHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const id = readArgString(context.args, "id", "mock-skill");
  removeInstalledSkill(id);
  return {
    ...envelope,
    data: {
      status: envelope.data.status,
      removedSkillID: id,
      backup: skillBackupFromId(id),
      remainingInstalledCount: readInstalledSkillSummaries().length,
    },
  };
};

const restoreSkillBackupHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const id = readArgString(context.args, "id", "mock-skill");
  const restoredSkill = skillSummaryFromId(id);
  upsertInstalledSkill(restoredSkill);
  return {
    ...envelope,
    data: {
      status: envelope.data.status,
      restoredSkill,
      backup: skillBackupFromId(id),
      rollbackBackup: null,
    },
  };
};

const deleteSkillBackupHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const id = readArgString(context.args, "id", "mock-skill");
  return {
    ...envelope,
    data: {
      status: envelope.data.status,
      deletedBackupID: id,
      remainingBackupCount: 0,
    },
  };
};

function cloneInstalledSkill(skill: InstalledSkillSummary): InstalledSkillSummary {
  return { ...skill };
}

function cloneInstalledSkills(skills: InstalledSkillSummary[]) {
  return skills.map(cloneInstalledSkill);
}

function readInstalledSkillSummaries() {
  return cloneInstalledSkills(skillsMockState.installed);
}

function upsertInstalledSkill(skill: InstalledSkillSummary) {
  const next = cloneInstalledSkill(skill);
  const index = skillsMockState.installed.findIndex((item) => item.id === skill.id);
  if (index >= 0) {
    skillsMockState.installed[index] = next;
    return true;
  }
  skillsMockState.installed.push(next);
  return false;
}

function removeInstalledSkill(id: string) {
  skillsMockState.installed = skillsMockState.installed.filter((item) => item.id !== id);
}

function syncBootstrapInstalledSkills() {
  bootstrapCacheMockState.installedSkills = readInstalledSkillSummaries();
  touchBootstrapCache();
}

const customInstructionsMockState: {
  current: CustomInstructionCurrentState;
  history: CustomInstructionHistoryEntry[];
} = {
  current: {
    globalPath: "",
    fileExists: false,
    managedBlockPresent: false,
    protectionState: "ready",
    issueMessage: null,
    managedContent: "",
    lastAppliedAt: null,
    lastTemplateCode: null,
    lastTemplateTitle: null,
  },
  history: [],
};

const customInstructionSnapshots = new Map<string, string>();

function customInstructionsStatePayload(): CustomInstructionStatePayload {
  return {
    current: { ...customInstructionsMockState.current },
    history: customInstructionsMockState.history.map((entry) => ({ ...entry })),
  };
}

function readCustomInstructionContent(args: IpcArgs | undefined) {
  const value = args?.content;
  return typeof value === "string" ? value : "";
}

function recordCustomInstructionHistory(
  action: CustomInstructionHistoryEntry["action"],
  content: string,
  args: IpcArgs | undefined,
) {
  const createdAt = Date.now();
  const entry: CustomInstructionHistoryEntry = {
    id: `mock-custom-instruction-${customInstructionsMockState.history.length + 1}`,
    createdAt,
    action,
    source: readArgString(args, "source", "mock"),
    templateCode: readArgOptionalString(args, "templateCode"),
    templateTitle: readArgOptionalString(args, "templateTitle"),
  };
  customInstructionSnapshots.set(entry.id, content);
  customInstructionsMockState.history = [
    entry,
    ...customInstructionsMockState.history,
  ];
  return entry;
}

function writeCustomInstructionContent(
  content: string,
  args: IpcArgs | undefined,
) {
  customInstructionsMockState.current = {
    ...customInstructionsMockState.current,
    fileExists: content.trim().length > 0,
    managedBlockPresent: content.trim().length > 0,
    protectionState: "ready",
    issueMessage: null,
    managedContent: content,
    lastAppliedAt: Date.now(),
    lastTemplateCode: readArgOptionalString(args, "templateCode"),
    lastTemplateTitle: readArgOptionalString(args, "templateTitle"),
  };
}

const loadCustomInstructionStateHandler: IpcCommandHandler = (context) =>
  withMockData(context, customInstructionsStatePayload());

const previewCustomInstructionApplyHandler: IpcCommandHandler = (context) => {
  const content = readCustomInstructionContent(context.args);
  const data: CustomInstructionPreviewPayload = {
    globalPath: customInstructionsMockState.current.globalPath,
    protectionState: customInstructionsMockState.current.protectionState,
    issueMessage: customInstructionsMockState.current.issueMessage,
    currentManagedContent: customInstructionsMockState.current.managedContent,
    nextManagedContent: content,
    resultingContent: content,
  };
  return withMockData(context, data);
};

const applyCustomInstructionHandler: IpcCommandHandler = (context) => {
  const content = readCustomInstructionContent(context.args);
  recordCustomInstructionHistory("apply", content, context.args);
  writeCustomInstructionContent(content, context.args);
  return withMockData(context, customInstructionsStatePayload());
};

const clearCustomInstructionBlockHandler: IpcCommandHandler = (context) => {
  recordCustomInstructionHistory(
    "clear",
    customInstructionsMockState.current.managedContent,
    context.args,
  );
  writeCustomInstructionContent("", context.args);
  return withMockData(context, customInstructionsStatePayload());
};

const rollbackCustomInstructionHandler: IpcCommandHandler = (context) => {
  const historyId = readArgString(context.args, "historyId", "");
  const content =
    customInstructionSnapshots.get(historyId) ??
    customInstructionsMockState.current.managedContent;
  recordCustomInstructionHistory("rollback", content, context.args);
  writeCustomInstructionContent(content, context.args);
  return withMockData(context, customInstructionsStatePayload());
};

function touchBootstrapCache() {
  bootstrapCacheMockState.writtenAt = Date.now();
}

const systemInfoHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: {
      backendStatus: envelope.data.status,
      os: "unknown",
      osVersion: "unknown",
      arch: "unknown",
      hostname: "",
    },
  };
};

function createCoreSnapshotPayload(
  backendStatus: CoreSnapshotPayload["backendStatus"],
  localOnly: boolean,
): CoreSnapshotPayload {
  const usageSource = localOnly ? "local" : systemUsageMockState.usageSource;
  return {
    backendStatus,
    accounts: [],
    status: {
      paths: emptyAppPathState(),
      lastScanAt: systemUsageMockState.lastScanAt,
      usageSource,
      autoSwitch: {
        enabled: false,
        threshold5hPercent: 80,
        thresholdWeeklyPercent: 80,
        serviceState: "unknown",
        serviceLabel: "",
      },
      api: {
        proxy: { ...apiProxyMockState },
      },
      apiConnectivity: {
        usageStatus: systemUsageMockState.usageStatus,
        usageLastError: systemUsageMockState.usageLastError,
      },
    },
  };
}

const coreSnapshotHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const localOnly = readArgBoolean(context.args, "localOnly", false);
  const data = createCoreSnapshotPayload(envelope.data.status, localOnly);
  return { ...envelope, data };
};

const refreshUsageSnapshotHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  systemUsageMockState.refreshCount += 1;
  systemUsageMockState.lastScanAt += 1_000;
  systemUsageMockState.usageSource = "api";
  systemUsageMockState.usageStatus = "reachable";
  systemUsageMockState.usageLastError = null;
  const data = createCoreSnapshotPayload(envelope.data.status, false);
  return { ...envelope, data };
};

const notificationClientStateHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: {
      backendStatus: envelope.data.status,
      deviceId: "00000000-0000-4000-8000-000000000000",
      notificationsSince: 0,
    },
  };
};

const mysteryUnlockMockState = {
  grants: [] as MysteryRouteGrant[],
};

const getMysteryUnlockGrantsHandler: IpcCommandHandler = (context) =>
  withMockData(context, pruneMysteryUnlockGrants());

const mergeMysteryUnlockGrantsHandler: IpcCommandHandler = (context) => {
  const grants = context.args?.grants;
  if (Array.isArray(grants)) {
    mergeMysteryUnlockGrants(normalizeMysteryRouteGrants(grants));
  }
  return withMockData(context, [...mysteryUnlockMockState.grants]);
};

function mergeMysteryUnlockGrants(grants: MysteryRouteGrant[]) {
  mysteryUnlockMockState.grants = pruneMysteryUnlockGrants();
  for (const incomingGrant of grants) {
    const grant = {
      ...incomingGrant,
      route: normalizeMysteryRoute(incomingGrant.route),
    };
    if (!isMysteryRouteAllowed(grant.route)) continue;
    if (isMysteryRouteGranted(grant.route)) {
      mysteryUnlockMockState.grants = mysteryUnlockMockState.grants.map((item) =>
        item.route === grant.route && grant.epochMs >= item.epochMs ? grant : item,
      );
      continue;
    }
    mysteryUnlockMockState.grants = [...mysteryUnlockMockState.grants, grant];
  }
  mysteryUnlockMockState.grants = sortMysteryUnlockGrants(mysteryUnlockMockState.grants);
}

function isMysteryRouteGranted(route: string) {
  return mysteryUnlockMockState.grants.some(
    (grant) => grant.route === normalizeMysteryRoute(route),
  );
}

function normalizeMysteryRouteGrants(value: unknown[]): MysteryRouteGrant[] {
  return value.flatMap((item) => {
    if (!item || typeof item !== "object" || Array.isArray(item)) return [];
    const record = item as Record<string, unknown>;
    const route = typeof record.route === "string" ? record.route : "";
    const epochValue = record.epochMs ?? record.epoch_ms;
    const epochMs =
      typeof epochValue === "number" && Number.isFinite(epochValue)
        ? epochValue
        : 0;
    return route ? [{ route, epochMs }] : [];
  });
}

function pruneMysteryUnlockGrants() {
  const now = Date.now();
  mysteryUnlockMockState.grants = sortMysteryUnlockGrants(
    mysteryUnlockMockState.grants.filter((grant) => grant.epochMs >= now),
  );
  return [...mysteryUnlockMockState.grants];
}

function sortMysteryUnlockGrants(grants: MysteryRouteGrant[]) {
  return [...grants].sort((left, right) => left.route.localeCompare(right.route));
}

function normalizeMysteryRoute(route: string) {
  return route.trim().replace(/^\/+|\/+$/g, "");
}

function isMysteryRouteAllowed(route: string) {
  return [
    "mcp",
    "skills",
    "overview",
    "accounts",
    "sessions",
    "plugins",
    "relayModel",
    "settings",
    "maintenance",
  ].includes(normalizeMysteryRoute(route));
}

const REMOTE_DEVICE_SECRET_FIXTURE =
  "00000000-0000-4000-8000-000000000000-00000000-0000-4000-8000-000000000001";

const remoteDeviceSecretMockState = {
  secret: "",
};

const remoteDeviceSecretHandler: IpcCommandHandler = (context) => {
  if (!remoteDeviceSecretMockState.secret.trim()) {
    remoteDeviceSecretMockState.secret = REMOTE_DEVICE_SECRET_FIXTURE;
  }
  return withMockData(context, remoteDeviceSecretMockState.secret);
};

const importRemoteDeviceSecretIfEmptyHandler: IpcCommandHandler = (context) => {
  const secret = (
    readArgString(context.args, "secret", "") ||
    readArgString(context.args, "sensitive-field", "")
  ).trim();
  if (secret && !remoteDeviceSecretMockState.secret.trim()) {
    remoteDeviceSecretMockState.secret = secret;
  }
  return withMockData(context, null);
};

const deviceIdHandler: IpcCommandHandler = (context) =>
  withMockData(context, "00000000-0000-4000-8000-000000000000");

function relayProxyFromStatus(
  backendStatus: RelayProxyPayload["backendStatus"],
): RelayProxyPayload {
  return {
    backendStatus,
    running: false,
    port: 0,
    baseUrl: "",
    codexBaseUrl: "",
    lastError: null,
  };
}

function relayStateFromStatus(
  backendStatus: RelayStatePayload["backendStatus"],
  overrides: Partial<RelayStatePayload> = {},
): RelayStatePayload {
  const proxy = relayProxyFromStatus(backendStatus);
  return {
    backendStatus,
    schemaVersion: 4,
    providers: [],
    activeByIde: { codex: [] },
    proxy,
    codexRouterEnabled: false,
    blockOfficialPassthrough: false,
    lastCodexRoute: null,
    enabled: false,
    activeProviderId: null,
    proxyStatus: proxy,
    sourcePath: "",
    ...overrides,
  };
}

function readArgRecord(args: IpcArgs | undefined, key: string) {
  const value = args?.[key];
  return value && typeof value === "object" && !Array.isArray(value)
    ? (value as Record<string, unknown>)
    : {};
}

function readRecordString(
  record: Record<string, unknown>,
  keys: string[],
  fallback: string,
) {
  for (const key of keys) {
    const value = record[key];
    if (typeof value === "string" && value.trim()) return value;
  }
  return fallback;
}

function relayProviderFromArgs(
  context: Parameters<IpcCommandHandler>[0],
): RelayProviderPayload {
  const envelope = createRaceAwareIpcEnvelope(context);
  const input = readArgRecord(context.args, "input");
  const providerId = readArgString(
    context.args,
    "providerId",
    readRecordString(input, ["id", "providerId"], "mock-relay-provider"),
  );
  return {
    backendStatus: envelope.data.status,
    id: providerId,
    ide: readRecordString(input, ["ide"], "codex"),
    name: readRecordString(input, ["name", "label"], providerId),
    baseUrl: readRecordString(input, ["baseUrl", "url", "endpoint"], ""),
    apiKey: null,
    apiKeyStored: input.apiKeyStored === true,
    model: readRecordString(input, ["model", "defaultModel"], ""),
    wireApi: readRecordString(input, ["wireApi"], "openai-chat"),
    extraHeaders: readRelayExtraHeaders(input.extraHeaders),
    network: readRecordString(input, ["network"], "system"),
    active: false,
    healthScore: null,
    latencyMs: null,
    lastTestedAt: null,
    updatedAt: null,
    lastError: null,
    errorMessage: null,
    modelsSample: [],
  };
}

function readRelayExtraHeaders(value: unknown): RelayExtraHeaders {
  if (typeof value === "string") return value;
  if (!value || typeof value !== "object" || Array.isArray(value)) return null;
  const entries = Object.entries(value).filter(
    (entry): entry is [string, string] => typeof entry[1] === "string",
  );
  return Object.fromEntries(entries);
}

const loadRelayStateHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: relayStateFromStatus(envelope.data.status),
  };
};

const relayProviderHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: relayProviderFromArgs(context),
  };
};

const relayStateMutationHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const providerId = readArgString(context.args, "providerId", "");
  const ide = readArgString(context.args, "ide", "codex");
  const activeByIde =
    context.command === "activate_relay_provider" && providerId
      ? { [ide]: [providerId] }
      : { [ide]: [] };
  return {
    ...envelope,
    data: relayStateFromStatus(envelope.data.status, {
      activeByIde,
      activeProviderId: activeByIde[ide][0] ?? null,
      lastCodexRoute: activeByIde[ide][0] ?? null,
    }),
  };
};

const relayTestHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const input = readArgRecord(context.args, "input");
  const baseUrl = readRecordString(input, ["baseUrl", "url", "endpoint"], "");
  const providerId = readArgString(context.args, "providerId", "");
  const missingTarget =
    context.command === "test_relay_draft" ? !baseUrl : !providerId;
  const models = relayModelsFromArgs(context);
  const data: RelayTestPayload = {
    backendStatus: envelope.data.status,
    ok: !missingTarget,
    health: missingTarget ? 0 : 100,
    latencyMs: missingTarget ? 0 : 24,
    statusCode: missingTarget ? null : 200,
    message: missingTarget ? null : mockCopy("relay.mock.test.success"),
    errorMessage: missingTarget ? mockCopy("relay.mock.test.missingTarget") : null,
    models: missingTarget ? [] : models,
  };
  return { ...envelope, data };
};

function relayModelsFromArgs(context: Parameters<IpcCommandHandler>[0]) {
  const input = readArgRecord(context.args, "input");
  const preferred = readRecordString(input, ["model", "defaultModel"], "");
  return preferred ? [preferred, "model-a", "model-b"] : ["model-a", "model-b"];
}

const relayModelsHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const input = readArgRecord(context.args, "input");
  const baseUrl = readRecordString(input, ["baseUrl", "url", "endpoint"], "");
  return { ...envelope, data: baseUrl ? relayModelsFromArgs(context) : [] };
};

const relayActiveHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: {
      backendStatus: envelope.data.status,
      enabled: false,
      activeProvider: null,
      activeProviderId: null,
      ide: "codex",
    },
  };
};

const relayProxyHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: relayProxyFromStatus(envelope.data.status),
  };
};

const relayRouterToggleHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const enabled = context.args?.enabled === true;
  const data: RelayRouterTogglePayload = {
    backendStatus: envelope.data.status,
    state: relayStateFromStatus(envelope.data.status, {
      codexRouterEnabled: enabled,
      enabled,
    }),
    migration: {
      action: enabled ? "preserve" : "none",
      migratedCount: 0,
      rolledBackCount: 0,
      skippedCount: 0,
      targetProvider: null,
      targetModel: null,
      manifestPath: null,
    },
    codexLaunchError: null,
  };
  return { ...envelope, data };
};

const relayExportHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: RelayExportPayload = {
    backendStatus: envelope.data.status,
    schemaVersion: 4,
    exportedBy: "OpenAiMami",
    exportedAt: null,
    filePath: readArgString(context.args, "filePath", ""),
    includeApiKeys: context.args?.includeApiKeys === true,
    providerCount: 0,
    providers: [],
  };
  return { ...envelope, data };
};

const relayImportHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const data: RelayImportPayload = {
    backendStatus: envelope.data.status,
    filePath: readArgString(context.args, "filePath", ""),
    importedCount: 0,
    skippedCount: 0,
    total: 0,
    skipped: [],
  };
  return { ...envelope, data };
};

function readRelayAuditFixture(): RelayPassthroughAuditEntry[] {
  return [
    {
      timestamp: "2026-06-01T08:00:00.000Z",
      event: "request",
      direction: "outbound",
      providerId: "openai",
      model: "gpt-4.1",
      blocked: false,
      message: null,
    },
    {
      timestamp: "2026-06-01T08:00:01.000Z",
      event: "response",
      direction: "inbound",
      providerId: "openai",
      model: "gpt-4.1",
      blocked: false,
      message: mockCopy("relay.mock.audit.ok"),
    },
    {
      timestamp: "2026-06-01T08:00:02.000Z",
      event: "blocked",
      direction: "outbound",
      providerId: null,
      model: null,
      blocked: true,
      message: mockCopy("relay.mock.audit.officialPassthroughBlocked"),
    },
  ];
}

const relayAuditHandler: IpcCommandHandler = (context) => {
  const limit = readArgPositiveInteger(context.args, "limit", 50);
  return withMockData(context, readRelayAuditFixture().slice(-limit));
};

function relayDiagnosticFromStatus(
  backendStatus: RelayDiagnosticPayload["backendStatus"],
  options: { missingRouterBlock?: boolean } = {},
): RelayDiagnosticPayload {
  const restoredStatus = {
    ...backendStatus,
    restored: true,
    boundary: {
      ...backendStatus.boundary,
      repositoryChecked: true,
      repositoryPathKnown: true,
      platformChecked: false,
      coreChecked: true,
      effect: "no_op",
    },
  } satisfies RelayDiagnosticPayload["backendStatus"];
  const missingRouterBlock = options.missingRouterBlock === true;
  const issues: RelayDiagnosticIssuePayload[] = missingRouterBlock
    ? [
        {
          id: "missing_router_block",
          title: mockCopy("relay.mock.diagnostic.missingRouterBlock.title"),
          message: mockCopy("relay.mock.diagnostic.missingRouterBlock.message"),
          detail: mockCopy("relay.mock.diagnostic.missingRouterBlock.detail"),
          severity: "medium",
          status: "medium",
          fixable: true,
        },
      ]
    : [];
  const routerEnabledMessage = mockCopy(
    missingRouterBlock
      ? "relay.mock.diagnostic.routerEnabled.enabled"
      : "relay.mock.diagnostic.routerEnabled.disabled",
  );
  const managedRouterBlockMessage = mockCopy(
    missingRouterBlock
      ? "relay.mock.diagnostic.managedRouterBlock.missing"
      : "relay.mock.diagnostic.managedRouterBlock.notRequired",
  );
  const items: RelayDiagnosticIssuePayload[] = [
    {
      id: "router_enabled",
      label: mockCopy("relay.mock.diagnostic.routerEnabled.label"),
      message: routerEnabledMessage,
      detail: routerEnabledMessage,
      severity: "ok",
      status: "ok",
      fixable: false,
    },
    {
      id: "missing_router_block",
      label: mockCopy("relay.mock.diagnostic.managedRouterBlock.label"),
      message: managedRouterBlockMessage,
      detail: managedRouterBlockMessage,
      severity: missingRouterBlock ? "medium" : "ok",
      status: missingRouterBlock ? "medium" : "ok",
      fixable: missingRouterBlock,
    },
  ];
  return {
    backendStatus: restoredStatus,
    checkedAt: null,
    ok: issues.length === 0,
    codexProviderCount: 0,
    catalogPath: null,
    sourcePath: "",
    catalogSourcePath: null,
    diagnosticBoundary: "relay.repository.diagnostic",
    pending: false,
    catalogExists: false,
    configTomlHasRouter: false,
    configTomlHasCatalog: false,
    config_toml_has_router: false,
    config_toml_has_catalog: false,
    userTopLevelProfile: null,
    configStaleReason: missingRouterBlock ? "missing_router_block" : null,
    threadMigrationExists: false,
    routerEnabled: missingRouterBlock,
    hasIssues: issues.length > 0,
    issues,
    items,
    summary: issues.length > 0
      ? mockCopy("relay.mock.diagnostic.summary.hasIssues")
      : mockCopy("relay.mock.diagnostic.summary.noIssues"),
    repositoryState: diagnosticSkeletonState(),
    platformState: diagnosticSkeletonState(),
  };
}

const relayDiagnosticHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  return {
    ...envelope,
    data: relayDiagnosticFromStatus(envelope.data.status),
  };
};

const relayFixHandler: IpcCommandHandler = (context) => {
  const envelope = createRaceAwareIpcEnvelope(context);
  const itemId = readArgString(context.args, "itemId", "");
  const fixResult = relayRouterFixResult(itemId);
  const data: RelayRouterIssueFixPayload = {
    backendStatus: envelope.data.status,
    itemId,
    issueId: itemId,
    fixed: fixResult.fixed,
    requiresRestart: fixResult.requiresRestart,
    message: fixResult.message,
    details: fixResult.details,
    diagnostics: relayDiagnosticFromStatus(envelope.data.status),
  };
  return { ...envelope, data };
};

function relayRouterFixResult(itemId: string) {
  if (
    itemId === "missing_router_block" ||
    itemId === "missing_catalog_file" ||
    itemId === "config_stale" ||
    itemId === "catalog_path_validity" ||
    itemId === "config_toml_router" ||
    itemId === "config_toml_catalog" ||
    itemId === "all"
  ) {
    return {
      fixed: true,
      requiresRestart: true,
      message: mockCopy("relay.mock.fix.autoFixed"),
      details: [
        mockCopy("relay.mock.fix.autoFixedDetailConfig"),
        mockCopy("relay.mock.fix.autoFixedDetailCatalog"),
      ],
    };
  }
  if (itemId === "stale_router_entries") {
    return {
      fixed: true,
      requiresRestart: true,
      message: mockCopy("relay.mock.fix.staleRouterEntriesRemoved"),
      details: [mockCopy("relay.mock.fix.staleRouterEntriesRemovedDetail")],
    };
  }
  if (itemId === "user_top_level_profile" || itemId === "config_profile_conflict") {
    return {
      fixed: false,
      requiresRestart: false,
      message: mockCopy("relay.mock.fix.manualProfileRequired"),
      details: [mockCopy("relay.mock.fix.manualProfileRequiredDetail")],
    };
  }
  return {
    fixed: false,
    requiresRestart: false,
    message: mockCopy("relay.mock.fix.readOnlyAcknowledged"),
    details: [mockCopy("relay.mock.fix.readOnlyAcknowledgedDetail")],
  };
}

const daemonAutoSwitchCommandHandlers: Partial<
  Record<IpcCommandName, IpcCommandHandler>
> = {
  configure_auto_switch: configureAutoSwitchHandler,
  confirm_pending_auto_switch: confirmPendingAutoSwitchHandler,
  confirm_pending_auto_switch_and_restart_codex: confirmPendingAutoSwitchHandler,
  dismiss_pending_auto_switch: dismissPendingAutoSwitchHandler,
  load_bootstrap_state: bootstrapStateHandler,
  load_pending_auto_switch: pendingAutoSwitchStateHandler,
  run_daemon_once: runDaemonOnceHandler,
  set_auto_switch: setAutoSwitchHandler,
};

const maintenanceCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  clean: cleanHandler,
  diagnose: diagnoseHandler,
  force_kill_codex: systemActionHandler,
  get_system_info: systemInfoHandler,
  open_path: systemActionHandler,
  rebuild_registry: rebuildRegistryHandler,
  reset_codex_config: systemActionHandler,
  restart_codex: systemActionHandler,
};

const settingsCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  check_update_installability: updateInstallabilityHandler,
  get_hotspot_enabled: hotspotEnabledHandler,
  get_image_compat: imageCompatHandler,
  get_usage_refresh_interval: usageRefreshIntervalHandler,
  graceful_restart_for_update: systemActionHandler,
  has_notch: hasNotchHandler,
  hotspot_ready: hotspotReadyHandler,
  detect_api_proxy_config: detectApiProxyConfigHandler,
  set_hotspot_enabled: setHotspotEnabledHandler,
  set_image_compat: setImageCompatHandler,
  set_api_proxy_config: setApiProxyConfigHandler,
  set_usage_refresh_interval: setUsageRefreshIntervalHandler,
  test_api_proxy_config: testApiProxyConfigHandler,
};

const systemCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  focus_main_window: systemActionHandler,
  force_kill_codex: systemActionHandler,
  get_device_id: deviceIdHandler,
  get_mystery_unlock_grants: getMysteryUnlockGrantsHandler,
  get_notification_client_state: notificationClientStateHandler,
  get_or_create_remote_device_secret: remoteDeviceSecretHandler,
  graceful_restart_for_update: systemActionHandler,
  import_remote_device_secret_if_empty: importRemoteDeviceSecretIfEmptyHandler,
  load_snapshot: coreSnapshotHandler,
  merge_mystery_unlock_grants: mergeMysteryUnlockGrantsHandler,
  note_usage_refresh_activity: runtimeWatcherStatusHandler,
  open_path: systemActionHandler,
  refresh_usage_snapshot: refreshUsageSnapshotHandler,
  reset_codex_config: systemActionHandler,
  restart_codex: systemActionHandler,
  schedule_full_runtime_refresh: runtimeWatcherStatusHandler,
  start_auto_switch_pending_watcher: runtimeWatcherStatusHandler,
  start_usage_refresh_watcher: runtimeWatcherStatusHandler,
  update_usage_refresh_schedule: runtimeWatcherStatusHandler,
};

const accountsCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  begin_add_account_attach_monitor: accountMonitorHandler,
  export_accounts_to_file: accountExportHandler,
  import_accounts_from_file: accountImportHandler,
  import_chatgpt_session_account: accountSessionImportHandler,
  logout: accountLogoutHandler,
  preview_account_import: accountPreviewImportHandler,
  remove_accounts: accountRemoveHandler,
  switch_account: accountSwitchHandler,
  switch_account_and_restart_codex: accountSwitchHandler,
};

const analyticsCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  load_change_analytics: loadChangeAnalyticsHandler,
  load_quota_history: loadQuotaHistoryHandler,
  load_session_analytics: loadSessionAnalyticsHandler,
  load_token_analytics: loadTokenAnalyticsHandler,
  load_tool_analytics: loadToolAnalyticsHandler,
  load_usage_analytics: loadUsageAnalyticsHandler,
};

const mcpCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  load_mcp_servers: loadMcpServersHandler,
  remove_mcp_server: removeMcpServerHandler,
  set_mcp_server_enabled: setMcpServerEnabledHandler,
  upsert_mcp_server: upsertMcpServerHandler,
};

const sessionsCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  delete_sessions: deleteSessionsHandler,
  import_chatgpt_session_account: accountSessionImportHandler,
  load_session_analytics: loadSessionAnalyticsHandler,
  load_sessions: loadSessionsHandler,
};

const skillsCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  delete_skill_backup: deleteSkillBackupHandler,
  import_skill: importSkillHandler,
  load_installed_skills: loadInstalledSkillsHandler,
  load_skill_backups: loadSkillBackupsHandler,
  remove_skill: removeSkillHandler,
  restore_skill_backup: restoreSkillBackupHandler,
};

const customInstructionsCommandHandlers: Partial<
  Record<IpcCommandName, IpcCommandHandler>
> = {
  apply_custom_instruction: applyCustomInstructionHandler,
  clear_custom_instruction_block: clearCustomInstructionBlockHandler,
  load_custom_instruction_state: loadCustomInstructionStateHandler,
  preview_custom_instruction_apply: previewCustomInstructionApplyHandler,
  rollback_custom_instruction: rollbackCustomInstructionHandler,
};

const pluginsCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  get_plugin_config: getPluginConfigHandler,
  list_plugins: listPluginsHandler,
  toggle_plugin: togglePluginHandler,
  update_plugin_config: updatePluginConfigHandler,
};

const relayCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  activate_relay_provider: relayStateMutationHandler,
  deactivate_relay_provider: relayStateMutationHandler,
  delete_relay_provider: relayStateMutationHandler,
  diagnose_codex_router: relayDiagnosticHandler,
  export_relay_config: relayExportHandler,
  fetch_relay_models_draft: relayModelsHandler,
  fix_codex_router_issue: relayFixHandler,
  get_passthrough_audit_log: relayAuditHandler,
  get_relay_active: relayActiveHandler,
  get_relay_proxy_status: relayProxyHandler,
  import_relay_config: relayImportHandler,
  load_relay_state: loadRelayStateHandler,
  run_codex_router_diagnostics: relayDiagnosticHandler,
  set_block_official_passthrough: writeBooleanArgHandler,
  set_codex_router_enabled: relayRouterToggleHandler,
  set_relay_provider_network: relayProviderHandler,
  test_relay_draft: relayTestHandler,
  test_relay_provider: relayTestHandler,
  upsert_relay_provider: relayProviderHandler,
};

const trayCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  create_or_refresh_tray_menu: createOrRefreshTrayMenuHandler,
  create_tray_icon_window: createTrayIconWindowHandler,
  handle_tray_menu_event: handleTrayMenuEventHandler,
  set_tray_locale: setTrayLocaleHandler,
  tray_relay_usage_quota_model: trayRelayUsageQuotaModelHandler,
};

export const ipcCommandFixtures = IPC_COMMAND_DEFINITIONS.reduce(
  (fixtures, definition) => {
    fixtures[definition.command] = {
      argKeys: definition.argKeys,
      command: definition.command,
      domain: definition.domain,
      handler:
        accountsCommandHandlers[definition.command] ??
        sessionsCommandHandlers[definition.command] ??
        analyticsCommandHandlers[definition.command] ??
        mcpCommandHandlers[definition.command] ??
        relayCommandHandlers[definition.command] ??
        trayCommandHandlers[definition.command] ??
        pluginsCommandHandlers[definition.command] ??
        skillsCommandHandlers[definition.command] ??
        customInstructionsCommandHandlers[definition.command] ??
        daemonAutoSwitchCommandHandlers[definition.command] ??
        maintenanceCommandHandlers[definition.command] ??
        settingsCommandHandlers[definition.command] ??
        systemCommandHandlers[definition.command] ??
        defaultHandler,
      source: definition.source,
      tier: definition.tier,
      wrapperNames: definition.wrapperNames,
    };
    return fixtures;
  },
  {} as Record<IpcCommandName, IpcCommandFixture>,
);

export function getIpcCommandFixture(command: IpcCommandName) {
  return ipcCommandFixtures[command];
}

export function assertIpcFixtureCoverage() {
  const missing = IPC_COMMAND_DEFINITIONS.filter(
    (definition) => !ipcCommandFixtures[definition.command],
  ).map((definition) => definition.command);

  return {
    covered: IPC_COMMAND_DEFINITIONS.length - missing.length,
    missing,
    total: IPC_COMMAND_DEFINITIONS.length,
  };
}
