import {
  IPC_COMMAND_DEFINITIONS,
  type IpcArgs,
  type IpcCommandName,
} from "@/contracts/ipc";
import type { CoreEnvelope } from "@/types";
import type {
  AccountExportPayload,
  AccountImportPayload,
  AccountImportPreviewPayload,
  AccountMonitorPayload,
  AccountSessionImportPayload,
  AppPathState,
  ChangeAnalyticsPayload,
  CleanPayload,
  CoreSnapshotPayload,
  DiagnosePayload,
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
  | ChangeAnalyticsPayload
  | CleanPayload
  | CoreSnapshotPayload
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
    createEvidenceBackedIpcFixture(command, args, steps);
}

const defaultHandler = createDefaultIpcCommandHandler();

function withMockData<T extends IpcCommandMockData>(
  context: Parameters<IpcCommandHandler>[0],
  data: T,
): CoreEnvelope<T> {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  return { ...envelope, data };
}

const readFalseHandler: IpcCommandHandler = (context) => withMockData(context, false);

const writeBooleanArgHandler: IpcCommandHandler = (context) =>
  withMockData(context, context.args?.enabled === true);

const systemHotspotMockState = {
  enabled: false,
  hasNotch: true,
  ready: false,
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

const systemUsageMockState = {
  lastScanAt: 1_700_000_000_000,
  refreshCount: 0,
  refreshInterval: "1m",
  usageLastError: null as string | null,
  usageSource: "local" as CoreSnapshotPayload["status"]["usageSource"],
  usageStatus: "unknown" as CoreSnapshotPayload["status"]["apiConnectivity"]["usageStatus"],
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: SystemActionPayload = {
    backendStatus: envelope.data.status,
  };
  return { ...envelope, data };
};

const bootstrapStateHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  return {
    ...envelope,
    data: {
      backendStatus: envelope.data.status,
      executedAt: null,
      runOnce: false,
      autoSwitchEnabled: false,
      activeAccountKey: null,
      switchedAccountKey: null,
      pendingSwitchAccountKey: null,
    },
  };
};

const pendingAutoSwitchStateHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  return {
    ...envelope,
    data: {
      backendStatus: envelope.data.status,
      currentAccountKey: "",
      candidateAccountKey: "",
      dismissedAt: null,
    },
  };
};

function emptyAppPathState(): AppPathState {
  return {
    codexHome: "",
    accountsPath: "",
    authPath: "",
    registryPath: "",
    sessionsPath: "",
    launchAgentPath: "",
    autoSwitchLogPath: "",
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
    pendingDiagnostics: [
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: AccountMonitorPayload = {
    backendStatus: envelope.data.status,
  };
  return { ...envelope, data };
};

const accountSwitchHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: LogoutPayload = {
    backendStatus: envelope.data.status,
    authRemoved: false,
    authBackedUp: false,
  };
  return { ...envelope, data };
};

const accountRemoveHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  return { ...envelope, data: emptyAccountImportPayload(envelope.data.status) };
};

const accountSessionImportHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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

const loadMcpServersHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: McpServerListPayload = {
    status: envelope.data.status,
    items: [],
    total: 0,
    sourcePath: "",
    lastScanAt: 0,
  };
  return { ...envelope, data };
};

const upsertMcpServerHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const server = mcpServerFromArgs(context.args);
  const data: McpServerMutationPayload = {
    status: envelope.data.status,
    server,
    total: server.name ? 1 : 0,
    sourcePath: "",
  };
  return { ...envelope, data };
};

const setMcpServerEnabledHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const server = mcpServerFromArgs(context.args, context.args?.enabled === true);
  const data: McpServerMutationPayload = {
    status: envelope.data.status,
    server,
    total: server.name ? 1 : 0,
    sourcePath: "",
  };
  return { ...envelope, data };
};

const removeMcpServerHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: McpServerRemovePayload = {
    status: envelope.data.status,
    removedName: readArgString(context.args, "name", ""),
    total: 0,
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

const loadUsageAnalyticsHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  return { ...envelope, data };
};

const loadQuotaHistoryHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: QuotaHistoryPayload = {
    backendStatus: envelope.data.status,
    accountKey: readArgOptionalString(context.args, "accountKey"),
    points: [],
  };
  return { ...envelope, data };
};

const loadSessionAnalyticsHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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

function pluginSummaryFromId(
  id: string,
  enabled: boolean,
): RuntimeExtensionPluginPayload {
  return {
    id,
    name: id,
    title: null,
    description: null,
    path: null,
    enabled,
  };
}

const listPluginsHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: RuntimeExtensionListPayload = {
    backendStatus: envelope.data.status,
    items: [],
    total: 0,
    sourcePath: "",
    lastScanAt: 0,
  };
  return { ...envelope, data };
};

const togglePluginHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const id = readArgString(context.args, "id", "");
  const plugin = pluginSummaryFromId(id, context.args?.enabled === true);
  const data: RuntimeExtensionTogglePayload = {
    backendStatus: envelope.data.status,
    plugin,
    items: plugin.id ? [plugin] : [],
    total: plugin.id ? 1 : 0,
    sourcePath: "",
    lastScanAt: 0,
  };
  return { ...envelope, data };
};

const getPluginConfigHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: RuntimeExtensionConfigPayload = {
    backendStatus: envelope.data.status,
    id: readArgString(context.args, "id", ""),
    settings: {},
    sourcePath: "",
    updated: false,
  };
  return { ...envelope, data };
};

const updatePluginConfigHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: RuntimeExtensionConfigPayload = {
    backendStatus: envelope.data.status,
    id: readArgString(context.args, "id", ""),
    settings: normalizePluginSettingsValue(context.args?.settings),
    sourcePath: "",
    updated: false,
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

function skillSummaryFromId(id: string) {
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

const loadInstalledSkillsHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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

const loadSkillBackupsHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const id = readArgString(context.args, "path", "mock-skill");
  return {
    ...envelope,
    data: {
      status: envelope.data.status,
      skill: skillSummaryFromId(id),
      replacedExisting: false,
      backup: null,
    },
  };
};

const removeSkillHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const id = readArgString(context.args, "id", "mock-skill");
  return {
    ...envelope,
    data: {
      status: envelope.data.status,
      removedSkillID: id,
      backup: skillBackupFromId(id),
      remainingInstalledCount: 0,
    },
  };
};

const restoreSkillBackupHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const id = readArgString(context.args, "id", "mock-skill");
  return {
    ...envelope,
    data: {
      status: envelope.data.status,
      restoredSkill: skillSummaryFromId(id),
      backup: skillBackupFromId(id),
      rollbackBackup: null,
    },
  };
};

const deleteSkillBackupHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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

const systemInfoHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
        proxy: {
          mode: "direct",
          url: null,
        },
      },
      apiConnectivity: {
        usageStatus: systemUsageMockState.usageStatus,
        usageLastError: systemUsageMockState.usageLastError,
      },
    },
  };
}

const coreSnapshotHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const localOnly = readArgBoolean(context.args, "localOnly", false);
  const data = createCoreSnapshotPayload(envelope.data.status, localOnly);
  return { ...envelope, data };
};

const refreshUsageSnapshotHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  systemUsageMockState.refreshCount += 1;
  systemUsageMockState.lastScanAt += 1_000;
  systemUsageMockState.usageSource = "api";
  systemUsageMockState.usageStatus = "reachable";
  systemUsageMockState.usageLastError = null;
  const data = createCoreSnapshotPayload(envelope.data.status, false);
  return { ...envelope, data };
};

const notificationClientStateHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  withMockData(context, [...mysteryUnlockMockState.grants]);

const mergeMysteryUnlockGrantsHandler: IpcCommandHandler = (context) => {
  const grants = context.args?.grants;
  if (Array.isArray(grants)) {
    mergeMysteryUnlockGrants(normalizeMysteryRouteGrants(grants));
  }
  return withMockData(context, [...mysteryUnlockMockState.grants]);
};

function mergeMysteryUnlockGrants(grants: MysteryRouteGrant[]) {
  for (const grant of grants) {
    if (isMysteryRouteGranted(grant.route)) {
      mysteryUnlockMockState.grants = mysteryUnlockMockState.grants.map((item) =>
        item.route === grant.route && grant.epochMs >= item.epochMs ? grant : item,
      );
      continue;
    }
    mysteryUnlockMockState.grants = [...mysteryUnlockMockState.grants, grant];
  }
}

function isMysteryRouteGranted(route: string) {
  return mysteryUnlockMockState.grants.some((grant) => grant.route === route);
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

const remoteDeviceSecretHandler: IpcCommandHandler = (context) =>
  withMockData(
    context,
    "00000000-0000-4000-8000-000000000000-00000000-0000-4000-8000-000000000001",
  );

const deviceIdHandler: IpcCommandHandler = (context) =>
  withMockData(context, "00000000-0000-4000-8000-000000000000");

const unitHandler: IpcCommandHandler = (context) => withMockData(context, null);

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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  return {
    ...envelope,
    data: relayStateFromStatus(envelope.data.status),
  };
};

const relayProviderHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  return {
    ...envelope,
    data: relayProviderFromArgs(context),
  };
};

const relayStateMutationHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const data: RelayTestPayload = {
    backendStatus: envelope.data.status,
    ok: true,
    health: 100,
    latencyMs: 0,
    statusCode: 200,
    message: null,
    errorMessage: null,
    models: [],
  };
  return { ...envelope, data };
};

const relayModelsHandler: IpcCommandHandler = (context) => withMockData(context, []);

const relayActiveHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  return {
    ...envelope,
    data: relayProxyFromStatus(envelope.data.status),
  };
};

const relayRouterToggleHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
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

const relayAuditHandler: IpcCommandHandler = (context) =>
  withMockData(context, [] as RelayPassthroughAuditEntry[]);

function relayDiagnosticFromStatus(
  backendStatus: RelayDiagnosticPayload["backendStatus"],
): RelayDiagnosticPayload {
  const items: RelayDiagnosticIssuePayload[] = [];
  return {
    backendStatus,
    checkedAt: null,
    ok: false,
    codexProviderCount: 0,
    catalogPath: null,
    sourcePath: "",
    catalogSourcePath: null,
    diagnosticBoundary: "skeleton",
    pending: true,
    catalogExists: false,
    configTomlHasRouter: false,
    configTomlHasCatalog: false,
    config_toml_has_router: false,
    config_toml_has_catalog: false,
    userTopLevelProfile: null,
    configStaleReason: null,
    threadMigrationExists: false,
    routerEnabled: false,
    hasIssues: false,
    issues: items,
    items,
    summary: "Skeleton diagnostic pending; no repository or platform checks were executed.",
    repositoryState: diagnosticSkeletonState(),
    platformState: diagnosticSkeletonState(),
  };
}

const relayDiagnosticHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  return {
    ...envelope,
    data: relayDiagnosticFromStatus(envelope.data.status),
  };
};

const relayFixHandler: IpcCommandHandler = (context) => {
  const envelope = createEvidenceBackedIpcFixture(
    context.command,
    context.args,
    context.steps,
  );
  const itemId = readArgString(context.args, "itemId", "");
  const data: RelayRouterIssueFixPayload = {
    backendStatus: envelope.data.status,
    itemId,
    issueId: itemId,
    fixed: false,
    requiresRestart: false,
    message: "",
    details: null,
    diagnostics: relayDiagnosticFromStatus(envelope.data.status),
  };
  return { ...envelope, data };
};

const daemonAutoSwitchCommandHandlers: Partial<
  Record<IpcCommandName, IpcCommandHandler>
> = {
  confirm_pending_auto_switch: unitHandler,
  confirm_pending_auto_switch_and_restart_codex: unitHandler,
  dismiss_pending_auto_switch: unitHandler,
  load_bootstrap_state: bootstrapStateHandler,
  load_pending_auto_switch: pendingAutoSwitchStateHandler,
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
  get_image_compat: readFalseHandler,
  get_usage_refresh_interval: usageRefreshIntervalHandler,
  graceful_restart_for_update: systemActionHandler,
  has_notch: hasNotchHandler,
  hotspot_ready: hotspotReadyHandler,
  set_hotspot_enabled: setHotspotEnabledHandler,
  set_image_compat: writeBooleanArgHandler,
  set_usage_refresh_interval: setUsageRefreshIntervalHandler,
};

const systemCommandHandlers: Partial<Record<IpcCommandName, IpcCommandHandler>> = {
  focus_main_window: systemActionHandler,
  force_kill_codex: systemActionHandler,
  get_device_id: deviceIdHandler,
  get_mystery_unlock_grants: getMysteryUnlockGrantsHandler,
  get_notification_client_state: notificationClientStateHandler,
  get_or_create_remote_device_secret: remoteDeviceSecretHandler,
  graceful_restart_for_update: systemActionHandler,
  import_remote_device_secret_if_empty: unitHandler,
  load_snapshot: coreSnapshotHandler,
  merge_mystery_unlock_grants: mergeMysteryUnlockGrantsHandler,
  open_path: systemActionHandler,
  refresh_usage_snapshot: refreshUsageSnapshotHandler,
  reset_codex_config: systemActionHandler,
  restart_codex: systemActionHandler,
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
        pluginsCommandHandlers[definition.command] ??
        skillsCommandHandlers[definition.command] ??
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
