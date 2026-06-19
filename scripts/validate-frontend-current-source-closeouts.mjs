import { existsSync, readFileSync } from "node:fs";
import { dirname, join, relative, sep } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const closeoutPath = join(repoRoot, "docs", "reconstruction", "frontend-current-source-closeouts.json");
const failures = [];
const RELAY_CURRENT_SOURCE_SKELETON_ID = "relay-current-source-skeleton";
const RELAY_CURRENT_SOURCE_SIDECAR =
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-relay-core-bootstrap/frontend-callchain-report.json";
const RELAY_CURRENT_SOURCE_GATE_REPORTS = [
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-relay/gate-report.json",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-relay/gate-report.json",
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-relay-core-bootstrap/gate-report.json",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-relay-core/gate-report.json",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/gate-report.json",
];
const RELAY_CURRENT_SOURCE_WINDOWS_CORE_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/gate-report.json";
const RELAY_CURRENT_SOURCE_BOOTSTRAP_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-relay-core-bootstrap/gate-report.json";
const RELAY_CURRENT_SOURCE_GATE_FAILURE_CLUSTERS = [
  "relay_codex_writer",
  "relay_diagnostic",
  "relay_health_audit",
  "bootstrap",
  "relay_fetch_models",
  "relay_translator",
  "relay_proxy_config",
  "relay_image_compat",
  "relay_sse",
];
const RELAY_CURRENT_SOURCE_GATE_FAILURE_FIELDS = [
  "readyToImplement",
  "gate_accepted",
  "implementation_use",
];
const RELAY_CURRENT_SOURCE_WINDOWS_CORE_GATE_FAILURE_KEYS =
  RELAY_CURRENT_SOURCE_GATE_FAILURE_CLUSTERS.flatMap((cluster) =>
    RELAY_CURRENT_SOURCE_GATE_FAILURE_FIELDS.map(
      (field) =>
        `${RELAY_CURRENT_SOURCE_WINDOWS_CORE_GATE_REPORT}\u0000clusters.${cluster}.${field}\u0000false`,
    ),
  );
const RELAY_CURRENT_SOURCE_BOOTSTRAP_GATE_FAILURE_KEYS = [
  `${RELAY_CURRENT_SOURCE_BOOTSTRAP_GATE_REPORT}\u0000readyToImplement\u0000false`,
  `${RELAY_CURRENT_SOURCE_BOOTSTRAP_GATE_REPORT}\u0000implementation_use\u0000false`,
  `${RELAY_CURRENT_SOURCE_BOOTSTRAP_GATE_REPORT}\u0000gate_accepted\u0000false`,
];
const RELAY_CURRENT_SOURCE_GATE_FAILURE_KEYS = [
  ...RELAY_CURRENT_SOURCE_WINDOWS_CORE_GATE_FAILURE_KEYS,
  ...RELAY_CURRENT_SOURCE_BOOTSTRAP_GATE_FAILURE_KEYS,
];
const RELAY_CURRENT_SOURCE_COMMANDS = [
  "activate_relay_provider",
  "deactivate_relay_provider",
  "delete_relay_provider",
  "diagnose_codex_router",
  "export_relay_config",
  "fetch_relay_models_draft",
  "fix_codex_router_issue",
  "get_passthrough_audit_log",
  "get_relay_active",
  "get_relay_proxy_status",
  "import_relay_config",
  "load_relay_state",
  "run_codex_router_diagnostics",
  "set_block_official_passthrough",
  "set_codex_router_enabled",
  "set_relay_provider_network",
  "test_relay_draft",
  "test_relay_provider",
  "upsert_relay_provider",
];
const RELAY_HTTP_TERMINAL_CCF_CLOSEOUT_ID =
  "relay-targeted-http-terminal-ui-trigger-current-source-chain";
const RELAY_HTTP_TERMINAL_CCF_MAP =
  "docs/reconstruction/relay-http-terminal-current-source-map.md";
const RELAY_HTTP_TERMINAL_CCF_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-relay/gate-report.json";
const RELAY_HTTP_TERMINAL_CCF_SIDECAR = RELAY_CURRENT_SOURCE_SIDECAR;
const RELAY_HTTP_TERMINAL_CCF_COMMANDS = [
  "test_relay_provider",
  "test_relay_draft",
  "fetch_relay_models_draft",
];
const RELAY_HTTP_TERMINAL_CCF_SIGNAL_FILES = [
  RELAY_HTTP_TERMINAL_CCF_GATE_REPORT,
  RELAY_HTTP_TERMINAL_CCF_SIDECAR,
  "src/contracts/ipc/commands.ts",
  "src/features/relay/panels/panels.tsx",
  "src/features/relay/hooks/page.ts",
  "src/features/relay/hooks/mutation.ts",
  "src/services/relay/index.ts",
  "src/mocks/fixtures/commands.ts",
  "src-tauri/src/lib.rs",
  "src-tauri/src/commands/relay.rs",
  "src-tauri/src/application/usecase/relay.rs",
  "src-tauri/src/application/usecase/relay/models.rs",
];
const RELAY_HTTP_TERMINAL_CCF_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceMap",
  "currentSourceCommands",
  "gateReports",
  "sidecarReports",
  "requiredSourceSignals",
  "nonClaims",
  "reason",
];
const ACCOUNTS_ANALYTICS_CURRENT_SOURCE_MAP =
  "docs/reconstruction/accounts-analytics-current-source-map.md";
const ACCOUNTS_ANALYTICS_CURRENT_SOURCE_COMMANDS = [
  "load_snapshot",
  "refresh_usage_snapshot",
  "load_usage_analytics",
  "load_quota_history",
  "load_token_analytics",
  "load_tool_analytics",
  "load_change_analytics",
];
const TRAY_CURRENT_SOURCE_CLOSEOUT_ID =
  "tray-windows-current-source-native-event-frontend-chain";
const TRAY_CURRENT_SOURCE_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/gate-report.json";
const TRAY_CURRENT_SOURCE_FRONTEND_DOC =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/frontend/FRONTEND-FULL-CHAIN-109.md";
const TRAY_CURRENT_SOURCE_COMMANDS = [
  "create_tray_icon_window",
  "create_or_refresh_tray_menu",
  "handle_tray_menu_event",
  "set_tray_locale",
  "tray_relay_usage_quota_model",
];
const TRAY_CURRENT_SOURCE_ACCEPTED_TARGETS = [
  "create_tray_icon_window",
  "create_or_refresh_tray_menu",
  "handle_tray_menu_event",
  "tray_relay_usage_quota_model",
];
const TRAY_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceCommands",
  "gateReports",
  "frontendChainDocs",
  "requiredSourceSignals",
  "nonClaims",
  "reason",
];
const RELAY_CURRENT_SOURCE_USECASE_FILES = new Map([
  ["activate_relay_provider", "src-tauri/src/application/usecase/relay/provider.rs"],
  ["deactivate_relay_provider", "src-tauri/src/application/usecase/relay/provider.rs"],
  ["delete_relay_provider", "src-tauri/src/application/usecase/relay/provider.rs"],
  ["set_relay_provider_network", "src-tauri/src/application/usecase/relay/provider.rs"],
  ["upsert_relay_provider", "src-tauri/src/application/usecase/relay/provider.rs"],
  ["diagnose_codex_router", "src-tauri/src/application/usecase/relay/diagnostics.rs"],
  ["fix_codex_router_issue", "src-tauri/src/application/usecase/relay/diagnostics.rs"],
  ["run_codex_router_diagnostics", "src-tauri/src/application/usecase/relay/diagnostics.rs"],
  ["fetch_relay_models_draft", "src-tauri/src/application/usecase/relay/models.rs"],
]);
const RELAY_CURRENT_SOURCE_NON_CLAIMS = [
  "不声明真实代理业务已经恢复。",
  "不声明真实配置持久化已经恢复。",
  "不声明真实 daemon 或 proxy runner 已经恢复。",
  "不声明真实 HTTP、model fetch 或 SSE 行为已经恢复。",
  "不声明真实 import/export IO 已经恢复。",
  "不声明 full_leaf_100，也不修改任何 gate-report 字段。",
];
const RELAY_PROXY_CONFIG_DIM6_CLOSEOUT_ID =
  "relay-proxy-config-dim6-stale-gate-registration";
const RELAY_PROXY_CONFIG_DIM6_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-relay-core/gate-report.json";
const RELAY_PROXY_CONFIG_DIM6_MAPPING =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-relay-core/logic/RELAY-CORE-ACCEPTANCE-MAPPING-109.md";
const RELAY_PROXY_CONFIG_DIM6_DISTILLED =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-relay-core/logic/PROXY-CONFIG-DISTILLED-109.md";
const RELAY_PROXY_CONFIG_DIM6_GATE_FAILURE_KEYS = [
  `${RELAY_PROXY_CONFIG_DIM6_GATE_REPORT}\u0000cluster_gates.18.dim6_missing\u0000true`,
];
const RELAY_PROXY_CONFIG_DIM6_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "sidecarReports",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];
const SYSTEM_HOTSPOT_USAGE_MYSTERY_CLOSEOUT_ID =
  "system-hotspot-usage-mystery-frontend-callchain-non-gating-closeout";
const SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECARS = [
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/frontend-callchain-report.json",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/frontend-callchain-report.json",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/frontend-callchain-report.json",
];
const SYSTEM_HOTSPOT_USAGE_MYSTERY_COMMANDS = [
  "get_hotspot_enabled",
  "set_hotspot_enabled",
  "hotspot_ready",
  "get_usage_refresh_interval",
  "set_usage_refresh_interval",
  "refresh_usage_snapshot",
  "get_mystery_unlock_grants",
  "merge_mystery_unlock_grants",
];
const SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECAR_COMMANDS = new Map([
  [
    SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECARS[0],
    ["get_hotspot_enabled", "set_hotspot_enabled", "hotspot_ready"],
  ],
  [
    SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECARS[1],
    [
      "get_usage_refresh_interval",
      "set_usage_refresh_interval",
      "refresh_usage_snapshot",
    ],
  ],
  [
    SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECARS[2],
    ["get_mystery_unlock_grants", "merge_mystery_unlock_grants"],
  ],
]);
const SYSTEM_HOTSPOT_USAGE_MYSTERY_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "sidecarReports",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];
const SYSTEM_HOTSPOT_USAGE_GATE_FAILURE_KEYS = [
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.get_hotspot_enabled.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.get_hotspot_enabled.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.set_hotspot_enabled.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.set_hotspot_enabled.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.hotspot_ready.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.hotspot_ready.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000cluster_gate_summary.readyToImplement\u00000",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.get_usage_refresh_interval.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.get_usage_refresh_interval.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.set_usage_refresh_interval.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.set_usage_refresh_interval.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.refresh_usage_snapshot.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.refresh_usage_snapshot.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000cluster_gate_summary.readyToImplement\u00000",
];
const SYSTEM_HOTSPOT_USAGE_MYSTERY_REQUIRED_SIGNAL_FILES = [
  ...SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECARS,
  "src/contracts/ipc/commands.ts",
  "src/services/system/index.ts",
  "src/services/settings/index.ts",
  "src/services/accounts/index.ts",
  "src/services/analytics/index.ts",
  "src/features/settings/hooks/query.ts",
  "src/features/settings/hooks/mutation.ts",
  "src/features/settings/cache/index.ts",
  "src/features/settings/hooks/page.ts",
  "src/features/settings/panels/appearance.tsx",
  "src/features/settings/panels/mode.tsx",
  "src/features/overview/hooks/query.ts",
  "src/features/overview/hooks/mutation.ts",
  "src/features/overview/cache/index.ts",
  "src/features/overview/hooks/page.ts",
  "src/features/overview/panels/data.tsx",
  "src/features/accounts/hooks/mutation.ts",
  "src/mocks/fixtures/commands.ts",
  "scripts/validate-e2e-mocks.mjs",
];
const SYSTEM_HOTSPOT_USAGE_MYSTERY_NON_CLAIMS = [
  "不声明全量叶子验收完成。",
  "不声明后端平台实现、真实业务逻辑或 raw/internal dim6 已经恢复。",
  "不修改任何 gate-report 字段。",
  "只把 Windows system-hotspot 与 system-usage 两组真实 IPC 的 current-source 前端链路和已有后端骨架边界纳入 strict leaf-copy partial closeout。",
  "不声明 implementation_use 或 full_leaf_100。",
  "不把 mystery_route_allowed 当作当前公开源码 IPC 命令，也不声明其已关闭。",
  "不纳入 mystery-unlock 的 gate-report 失败字段，不处理 mystery_route_allowed。",
];
const SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECAR_NON_CLAIMS = [
  "不声明全量叶子验收完成。",
  "不声明后端平台实现已经恢复。",
  "不声明 raw/internal dim6 已经补齐。",
  "不修改 gate-report 字段。",
  "不声明 implementation_use 或 full_leaf_100。",
];
const SYSTEM_USAGE_CURRENT_SOURCE_CLOSEOUT_ID =
  "system-usage-current-source-frontend-chain";
const SYSTEM_USAGE_CURRENT_SOURCE_MAP =
  "docs/reconstruction/system-usage-current-source-map.md";
const SYSTEM_USAGE_CURRENT_SOURCE_SIDECAR =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/frontend-callchain-report.json";
const SYSTEM_USAGE_CURRENT_SOURCE_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json";
const SYSTEM_USAGE_CURRENT_SOURCE_COMMANDS = [
  "get_usage_refresh_interval",
  "set_usage_refresh_interval",
  "refresh_usage_snapshot",
];
const SYSTEM_USAGE_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceMap",
  "currentSourceCommands",
  "sidecarReports",
  "requiredSourceSignals",
  "nonClaims",
  "reason",
];
const SYSTEM_USAGE_CURRENT_SOURCE_SIGNAL_FILES = [
  SYSTEM_USAGE_CURRENT_SOURCE_MAP,
  SYSTEM_USAGE_CURRENT_SOURCE_SIDECAR,
  SYSTEM_USAGE_CURRENT_SOURCE_GATE_REPORT,
  "src/services/system/index.ts",
  "src/services/settings/index.ts",
  "src/features/settings/hooks/query.ts",
  "src/features/settings/hooks/mutation.ts",
  "src/features/settings/cache/index.ts",
  "src/features/overview/hooks/mutation.ts",
  "src/features/overview/cache/index.ts",
  "src/services/analytics/index.ts",
];
const DAEMON_AUTOSWITCH_CURRENT_SOURCE_CLOSEOUT_ID =
  "daemon-autoswitch-pending-auto-switch-current-source-frontend-chain";
const DAEMON_AUTOSWITCH_CURRENT_SOURCE_MAP =
  "docs/reconstruction/daemon-autoswitch-current-source-map.md";
const DAEMON_AUTOSWITCH_CURRENT_SOURCE_COMMANDS = [
  "load_pending_auto_switch",
  "dismiss_pending_auto_switch",
  "confirm_pending_auto_switch",
  "confirm_pending_auto_switch_and_restart_codex",
];
const DAEMON_AUTOSWITCH_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceMap",
  "currentSourceCommands",
  "requiredSourceSignals",
  "backendBoundaryNotes",
  "nonClaims",
  "reason",
];
const DAEMON_AUTOSWITCH_CURRENT_SOURCE_SIGNAL_FILES = [
  DAEMON_AUTOSWITCH_CURRENT_SOURCE_MAP,
  "src/services/system/index.ts",
  "src/services/daemon-autoswitch/index.ts",
  "src/features/daemon-autoswitch/hooks/query.ts",
  "src/features/daemon-autoswitch/hooks/mutation.ts",
  "src/features/daemon-autoswitch/hooks/runtime.ts",
  "src/features/daemon-autoswitch/cache/index.ts",
  "src/app/runtime/pending.ts",
  "src/app/providers/prompt.tsx",
  "src/mocks/fixtures/commands.ts",
  "src/contracts/ipc/commands.ts",
];
const NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_CLOSEOUT_ID =
  "notification-client-state-current-source-frontend-chain";
const NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_MAP =
  "docs/reconstruction/notification-client-state-current-source-map.md";
const NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_COMMANDS = [
  "get_notification_client_state",
];
const NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceMap",
  "currentSourceCommands",
  "requiredSourceSignals",
  "nonClaims",
  "reason",
];
const NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_REQUIRED_SIGNALS = [
  {
    file: NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_MAP,
    includes: [
      "get_notification_client_state current-source 证据映射",
      "`get_notification_client_state`",
      "不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成",
      "不声明通知客户端运行时、推送订阅、轮询、后台 watcher、Tauri event、托盘通知或平台通知能力已经恢复",
      "不碰 `voice`",
    ],
  },
  {
    file: "src/services/system/index.ts",
    includes: [
      "getNotificationClientState: () =>",
      "invokeIpc<CoreEnvelope<NotificationClientStatePayload>>(",
      "\"get_notification_client_state\"",
    ],
  },
  {
    file: "src/features/overview/types/index.ts",
    includes: [
      "NotificationClientStatePayload",
      "OverviewNotificationEnvelope",
      "notificationStateQuery: OverviewNotificationQuery",
      "id: \"notification-state\"",
    ],
  },
  {
    file: "src/features/overview/cache/index.ts",
    includes: [
      "OVERVIEW_NOTIFICATION_STATE_QUERY_KEY",
      "\"notification-client-state\"",
      "runOverviewQuery",
      "writeOverviewQueryPayload",
    ],
  },
  {
    file: "src/features/overview/hooks/query.ts",
    includes: [
      "notificationStateQuery = useQuery",
      "OVERVIEW_NOTIFICATION_STATE_QUERY_KEY",
      "systemService.getNotificationClientState()",
      "runOverviewQuery",
    ],
  },
  {
    file: "src/features/overview/hooks/page.ts",
    includes: [
      "NotificationClientStatePayload",
      "module.notificationStateQuery.data",
      "void notificationState",
    ],
  },
  {
    file: "src/features/tray-shell/types/index.ts",
    includes: [
      "TrayShellNotificationEnvelope",
      "CoreEnvelope<NotificationClientStatePayload>",
      "TrayShellCachePayload = TrayShellNotificationEnvelope",
      "titleKey: \"trayShell.notificationClient\"",
    ],
  },
  {
    file: "src/features/tray-shell/cache/index.ts",
    includes: [
      "createModuleCacheOwner<TrayShellCachePayload>(\"tray-shell\")",
      "TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY",
      "\"notification-client\"",
      "runTrayShellQuery",
    ],
  },
  {
    file: "src/features/tray-shell/hooks/query.ts",
    includes: [
      "useTrayShellNotificationQuery",
      "TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY",
      "systemService.getNotificationClientState()",
      "runTrayShellQuery",
    ],
  },
  {
    file: "src/features/tray-shell/hooks/page.ts",
    includes: [
      "useTrayShellNotificationQuery",
      "NotificationClientStatePayload",
      "selectTrayShellReady(notification)",
      "titleKey: \"trayShell.notificationClient\"",
    ],
  },
  {
    file: "src/features/tray-shell/hooks/mutation.ts",
    includes: [
      "useTrayShellFocusMainWindowMutation",
      "systemService.focusMainWindow()",
      "prepareTrayShellCommandAckFence(queryClient)",
      "invalidateTrayShellCommandAckFence(queryClient)",
    ],
  },
  {
    file: "src/features/tray-shell/utils/index.ts",
    includes: [
      "selectTrayShellClient",
      "NotificationClientStatePayload",
      "value?.deviceId",
      "selectTrayShellReady",
    ],
  },
  {
    file: "src/contracts/ipc/commands.ts",
    includes: [
      "\"domain\": \"system\"",
      "\"command\": \"get_notification_client_state\"",
      "\"getNotificationClientState\"",
      "\"argKeys\": []",
    ],
  },
  {
    file: "src/mocks/fixtures/commands.ts",
    includes: [
      "NotificationClientStatePayload",
      "const notificationClientStateHandler",
      "notificationsSince: 0",
      "get_notification_client_state: notificationClientStateHandler",
    ],
  },
  {
    file: "scripts/validate-e2e-mocks.mjs",
    includes: [
      "validateOverviewMockPayloadHandlers",
      "[\"get_notification_client_state\", \"notificationClientStateHandler\"]",
      "NotificationClientStatePayload",
      "overview 专用 handler",
    ],
  },
];
const NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_SIGNAL_FILES =
  NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_REQUIRED_SIGNALS.map(
    (signal) => signal.file,
  );
const CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_CLOSEOUT_ID =
  "custom-instructions-frontend-current-source-chain";
const CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_MAP =
  "docs/reconstruction/custom-instructions-frontend-current-source-map.md";
const CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_COMMANDS = [
  "load_custom_instruction_state",
  "preview_custom_instruction_apply",
  "apply_custom_instruction",
  "clear_custom_instruction_block",
  "rollback_custom_instruction",
];
const CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceMap",
  "currentSourceCommands",
  "requiredSourceSignals",
  "nonClaims",
  "reason",
];
const CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_SIGNAL_FILES = [
  CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_MAP,
  "src/restoration/frontend-manifest/index.ts",
  "src/routes/registry/registry.tsx",
  "src/routes/desktop/main/custom-instructions/page.tsx",
  "src/features/custom-instructions/index.ts",
  "src/features/custom-instructions/Content.tsx",
  "src/services/custom-instructions/index.ts",
  "src/features/custom-instructions/hooks/query.ts",
  "src/features/custom-instructions/hooks/mutation.ts",
  "src/features/custom-instructions/cache/index.ts",
  "src/features/custom-instructions/hooks/page.ts",
  "src/features/custom-instructions/dialogs/apply.tsx",
  "src/features/custom-instructions/dialogs/clear.tsx",
  "src/features/custom-instructions/panels/configure.tsx",
  "src/mocks/fixtures/commands.ts",
  "src/contracts/ipc/commands.ts",
];
const ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_CLOSEOUT_ID =
  "accounts-sessions-frontend-current-source-chain";
const ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_MAP =
  "docs/reconstruction/accounts-sessions-frontend-current-source-map.md";
const ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_COMMANDS = [
  "begin_add_account_attach_monitor",
  "export_accounts_to_file",
  "import_accounts_from_file",
  "logout",
  "preview_account_import",
  "remove_accounts",
  "switch_account",
  "switch_account_and_restart_codex",
  "delete_sessions",
  "import_chatgpt_session_account",
  "load_session_analytics",
  "load_sessions",
];
const ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceMap",
  "currentSourceCommands",
  "requiredSourceSignals",
  "nonClaims",
  "reason",
];
const ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_SIGNAL_FILES = [
  ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_MAP,
  "src/restoration/frontend-manifest/index.ts",
  "src/routes/registry/registry.tsx",
  "src/routes/desktop/main/accounts/page.tsx",
  "src/routes/desktop/main/sessions/page.tsx",
  "src/features/accounts/index.ts",
  "src/features/accounts/Content.tsx",
  "src/features/sessions/index.ts",
  "src/features/sessions/Content.tsx",
  "src/services/accounts/index.ts",
  "src/services/sessions/index.ts",
  "src/features/accounts/hooks/query.ts",
  "src/features/accounts/hooks/mutation.ts",
  "src/features/accounts/cache/index.ts",
  "src/features/accounts/hooks/page.ts",
  "src/features/accounts/components/page.tsx",
  "src/features/accounts/dialogs/index.ts",
  "src/features/accounts/panels/index.ts",
  "src/features/sessions/hooks/query.ts",
  "src/features/sessions/hooks/mutation.ts",
  "src/features/sessions/cache/index.ts",
  "src/features/sessions/hooks/page.ts",
  "src/features/sessions/components/page.tsx",
  "src/features/sessions/dialogs/index.ts",
  "src/features/sessions/panels/index.ts",
  "src/mocks/fixtures/commands.ts",
  "src/contracts/ipc/commands.ts",
];
const MYSTERY_UNLOCK_GRANTS_CLOSEOUT_ID =
  "mystery-unlock-grants-current-source-chain";
const MYSTERY_UNLOCK_GRANTS_SIDECAR =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/frontend-callchain-report.json";
const MYSTERY_UNLOCK_GRANTS_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json";
const MYSTERY_UNLOCK_GRANTS_COMMANDS = [
  "get_mystery_unlock_grants",
  "merge_mystery_unlock_grants",
];
const MYSTERY_UNLOCK_GRANTS_GATE_FAILURE_KEYS = [
  `${MYSTERY_UNLOCK_GRANTS_GATE_REPORT}\u0000leaves.get_mystery_unlock_grants.gate_accepted\u0000false`,
  `${MYSTERY_UNLOCK_GRANTS_GATE_REPORT}\u0000leaves.get_mystery_unlock_grants.implementation_use\u0000false`,
  `${MYSTERY_UNLOCK_GRANTS_GATE_REPORT}\u0000leaves.merge_mystery_unlock_grants.gate_accepted\u0000false`,
  `${MYSTERY_UNLOCK_GRANTS_GATE_REPORT}\u0000leaves.merge_mystery_unlock_grants.implementation_use\u0000false`,
];
const MYSTERY_UNLOCK_GRANTS_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "sidecarReports",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];
const MYSTERY_ROUTE_ALLOWED_CLOSEOUT_ID =
  "mystery-route-allowed-current-source-helper-chain";
const MYSTERY_ROUTE_ALLOWED_GATE_FAILURE_KEYS = [
  `${MYSTERY_UNLOCK_GRANTS_GATE_REPORT}\u0000leaves.mystery_route_allowed.gate_accepted\u0000false`,
  `${MYSTERY_UNLOCK_GRANTS_GATE_REPORT}\u0000leaves.mystery_route_allowed.implementation_use\u0000false`,
];
const MYSTERY_ROUTE_ALLOWED_SIGNAL_FILES = [
  "src/routes/registry/gates.ts",
  "src/routes/registry/meta.ts",
  "src/routes/registry/preload.ts",
  "src/routes/registry/registry.tsx",
  "src/routes/registry/objects.tsx",
  "src/app/router/shell.tsx",
  "src/app/router/prewarm.ts",
  "src/features/overview/hooks/query.ts",
  "src/features/overview/cache/index.ts",
  "src/features/overview/hooks/mutation.ts",
];
const MYSTERY_ROUTE_ALLOWED_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];
const BOOTSTRAP_SYSTEM_CURRENT_SOURCE_CLOSEOUT_ID =
  "bootstrap-system-current-source-reconcile-sidecars";
const BOOTSTRAP_SYSTEM_CURRENT_SOURCE_SIDECARS = [
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-bootstrap/frontend-callchain-report.json",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-bootstrap/frontend-callchain-report.json",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system/frontend-callchain-report.json",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system-shell-init/frontend-callchain-report.json",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/frontend-callchain-report.json",
];
const BOOTSTRAP_SYSTEM_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "sidecarReports",
  "requiredSourceSignals",
  "nonClaims",
  "reason",
];
const BOOTSTRAP_SYSTEM_CURRENT_SOURCE_FORBIDDEN_GATE_FIELDS = [
  "closedGateReportFailures",
  "closedManifestStatuses",
  "closedFrontendDocs",
  "closedCommands",
  "notClosedCommands",
  "gateReports",
  "rawAcceptance",
];
const BOOTSTRAP_SYSTEM_CURRENT_SOURCE_NON_CLAIM_SNIPPETS = [
  "不声明全量叶子验收完成",
  "不修改 gate-report 字段",
  "不新增 closedGateReportFailures 或 closedManifestStatuses",
  "implementation_use",
  "gate_accepted",
  "full_leaf_100",
];
const BOOTSTRAP_CURRENT_SOURCE_GATE_CLOSEOUT_ID =
  "bootstrap-current-source-chain-gate-failure-registration";
const BOOTSTRAP_CURRENT_SOURCE_SIDECARS = [
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-bootstrap/frontend-callchain-report.json",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-bootstrap/frontend-callchain-report.json",
];
const BOOTSTRAP_CURRENT_SOURCE_COMMANDS = [
  "load_bootstrap_state",
  "load_pending_auto_switch",
  "dismiss_pending_auto_switch",
  "confirm_pending_auto_switch",
  "confirm_pending_auto_switch_and_restart_codex",
  "load_snapshot",
];
const BOOTSTRAP_CURRENT_SOURCE_GATE_FAILURE_KEYS = [
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-bootstrap/gate-report.json\u0000readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-bootstrap/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-bootstrap/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-bootstrap/gate-report.json\u0000gate_summary.readyToImplement\u00000",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-bootstrap/gate-report.json\u0000gate_summary.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-bootstrap/gate-report.json\u0000gate_summary.implementation_use\u0000false",
];
const BOOTSTRAP_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "sidecarReports",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];
const SYSTEM_WATCHER_CURRENT_SOURCE_CLOSEOUT_ID =
  "system-runtime-watcher-current-source-skeleton-chain";
const SYSTEM_WATCHER_CURRENT_SOURCE_SIDECAR =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system/frontend-callchain-report.json";
const SYSTEM_WATCHER_CURRENT_SOURCE_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system/gate-report.json";
const SYSTEM_WATCHER_CURRENT_SOURCE_SIGNALS = [
  "note_usage_refresh_activity",
  "schedule_full_runtime_refresh",
  "start_auto_switch_pending_watcher",
  "start_usage_refresh_watcher",
  "update_usage_refresh_schedule",
];
const SYSTEM_WATCHER_CURRENT_SOURCE_GATE_FAILURE_KEYS =
  SYSTEM_WATCHER_CURRENT_SOURCE_SIGNALS.map(
    (signal) =>
      `${SYSTEM_WATCHER_CURRENT_SOURCE_GATE_REPORT}\u0000per_command_gate.${signal}.readyToImplement\u0000false`,
  );
const SYSTEM_WATCHER_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "sidecarReports",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];
const SYSTEM_SHELL_INIT_DUPLICATE_CLOSEOUT_ID =
  "system-shell-init-duplicate-outtake-non-authoritative";
const SYSTEM_SHELL_INIT_DUPLICATE_SIDECAR =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system-shell-init/frontend-callchain-report.json";
const SYSTEM_SHELL_INIT_DUPLICATE_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system-shell-init/gate-report.json";
const SYSTEM_SHELL_INIT_DUPLICATE_GATE_FAILURE_KEYS = [
  `${SYSTEM_SHELL_INIT_DUPLICATE_GATE_REPORT}\u0000readyToImplement\u0000false`,
  `${SYSTEM_SHELL_INIT_DUPLICATE_GATE_REPORT}\u0000implementation_use\u0000false`,
  `${SYSTEM_SHELL_INIT_DUPLICATE_GATE_REPORT}\u0000gate_accepted\u0000false`,
];
const SYSTEM_SHELL_INIT_DUPLICATE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "sidecarReports",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];
const WINDOWS_SYSTEM_CURRENT_SOURCE_CLOSEOUT_ID =
  "windows-system-current-source-strict-chain";
const WINDOWS_SYSTEM_CURRENT_SOURCE_SIDECAR =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/frontend-callchain-report.json";
const WINDOWS_SYSTEM_CURRENT_SOURCE_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json";
const WINDOWS_SYSTEM_CURRENT_SOURCE_COMMANDS = [
  "force_kill_codex",
  "diagnose_codex_router",
  "diagnose",
];
const WINDOWS_SYSTEM_CURRENT_SOURCE_GATE_FAILURE_FIELDS = [
  "readyToImplement",
  "implementation_use",
  "gate_accepted",
];
const WINDOWS_SYSTEM_CURRENT_SOURCE_GATE_FAILURE_KEYS =
  WINDOWS_SYSTEM_CURRENT_SOURCE_COMMANDS.flatMap((command) =>
    WINDOWS_SYSTEM_CURRENT_SOURCE_GATE_FAILURE_FIELDS.map(
      (field) =>
        `${WINDOWS_SYSTEM_CURRENT_SOURCE_GATE_REPORT}\u0000per_command.${command}.${field}\u0000false`,
    ),
  );
const WINDOWS_SYSTEM_CURRENT_SOURCE_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "sidecarReports",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];

const UI_THEME_CURRENT_SOURCE_CLOSEOUT_ID =
  "ui-theme-current-source-theme-chain";
const UI_THEME_CURRENT_SOURCE_MAP =
  "docs/reconstruction/ui-theme-current-source-map.md";
const SYSTEM_WINDOW_MAINTENANCE_CURRENT_SOURCE_MAP =
  "docs/reconstruction/system-window-maintenance-current-source-map.md";
const UI_THEME_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json";
const UI_THEME_RAW_IMPLEMENTATION_TARGET =
  "evidence/full-chain/raw/aimami/1.0.9/windows-x64/ui/cmd_set_app_theme_coroutine/implementation-targets.txt";
const UI_THEME_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceMap",
  "gateReports",
  "rawImplementationTargets",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];
const UI_THEME_REQUIRED_SIGNAL_FILES = [
  UI_THEME_CURRENT_SOURCE_MAP,
  UI_THEME_GATE_REPORT,
  UI_THEME_RAW_IMPLEMENTATION_TARGET,
  "src/lib/api.ts",
  "src/services/theme/index.ts",
  "src/hooks/theme.ts",
  "src/app/providers/settings.tsx",
  "src/components/layout/sidebar.tsx",
  "src/features/settings/panels/appearance.tsx",
  "src/locales/zh.json",
  "src/locales/en.json",
];
const UI_THEME_GATE_FAILURE_KEYS = [
  `${UI_THEME_GATE_REPORT}\u0000gate_accepted\u0000false`,
  `${UI_THEME_GATE_REPORT}\u0000implementation_use\u0000false`,
  `${UI_THEME_GATE_REPORT}\u0000dim6_missing\u0000true`,
  `${UI_THEME_GATE_REPORT}\u0000leaves.set_app_theme.gate_accepted\u0000false`,
  `${UI_THEME_GATE_REPORT}\u0000leaves.set_app_theme.implementation_use\u0000false`,
  `${UI_THEME_GATE_REPORT}\u0000leaves.theme_platform_diff.gate_accepted\u0000false`,
  `${UI_THEME_GATE_REPORT}\u0000leaves.theme_platform_diff.implementation_use\u0000false`,
  `${UI_THEME_GATE_REPORT}\u0000cluster_gate_summary.readyToImplement\u00000`,
];
const CROSS_HOME_USAGE_FRONTEND_CLOSEOUT_ID =
  "cross-home-usage-frontend-current-source-non-gating-closeout";
const CROSS_HOME_USAGE_FRONTEND_CURRENT_SOURCE_MAP =
  "docs/reconstruction/cross-home-usage-frontend-current-source-map.md";
const CROSS_HOME_USAGE_FRONTEND_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-home-usage-frontend/gate-report.json";
const CROSS_HOME_USAGE_FRONTEND_ALLOWED_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceMap",
  "gateReports",
  "requiredSourceSignals",
  "backendBoundaryNotes",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];
const CROSS_HOME_USAGE_FRONTEND_GATE_FAILURE_KEYS = [
  `${CROSS_HOME_USAGE_FRONTEND_GATE_REPORT}\u0000gate_accepted\u0000false`,
  `${CROSS_HOME_USAGE_FRONTEND_GATE_REPORT}\u0000implementation_use\u0000false`,
  `${CROSS_HOME_USAGE_FRONTEND_GATE_REPORT}\u0000cluster_gate_summary.readyToImplement\u00000`,
];
const UI_THEME_MAP_SNIPPETS = [
  "不修改 raw/internal gate-report",
  "不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成",
  "src/features/settings/panels/appearance.tsx",
  "src/components/layout/sidebar.tsx",
  "src/app/providers/settings.tsx",
  "src/hooks/theme.ts",
  "api.setAppTheme",
  "themeService.setTheme",
  "@tauri-apps/api/app",
  "setTheme",
  "localStorage",
  "matchMedia",
  "dark",
  "src/locales/zh.json",
  "src/locales/en.json",
  "不应新增 OS theme 读取或 DWM material API",
];
const UI_THEME_NON_CLAIM_SNIPPETS = [
  "不修改 raw/internal gate-report",
  "不声明 gate_accepted",
  "不声明 implementation_use",
  "不声明 full_leaf 或 full_leaf_100",
  "不新增 OS theme 读取",
  "不新增 DWM material API",
];

function repoPath(path) {
  return join(repoRoot, ...path.split("/"));
}

function toRepoPath(file) {
  return relative(repoRoot, file).split(sep).join("/");
}

function readJson(path) {
  return JSON.parse(readFileSync(path, "utf8"));
}

function readText(path) {
  return readFileSync(path, "utf8");
}

function compactForSignal(value) {
  return value.replace(/\s+/g, "");
}

function requireIncludes(file, snippets) {
  const path = repoPath(file);
  if (!existsSync(path)) {
    failures.push(`缺少 closeout 源码文件：${file}`);
    return;
  }

  const text = readFileSync(path, "utf8");
  const compactText = compactForSignal(text);
  for (const snippet of snippets) {
    if (!text.includes(snippet) && !compactText.includes(compactForSignal(snippet))) {
      failures.push(`${file} 缺少 closeout 片段：${snippet}`);
    }
  }
}

function requireExcludes(file, snippets) {
  const path = repoPath(file);
  if (!existsSync(path)) {
    failures.push(`缺少 closeout 源码文件：${file}`);
    return;
  }

  const text = readFileSync(path, "utf8");
  for (const snippet of snippets) {
    if (text.includes(snippet)) {
      failures.push(`${file} 不允许出现 closeout 片段：${snippet}`);
    }
  }
}

function getJsonPath(value, path) {
  let current = value;
  for (const part of path.split(".")) {
    if (!current || typeof current !== "object" || !(part in current)) {
      return { exists: false, value: undefined };
    }
    current = current[part];
  }
  return { exists: true, value: current };
}

function valuesEqual(actual, expected) {
  return JSON.stringify(actual) === JSON.stringify(expected);
}

function validateClosedGateReportFailures(closeout) {
  const entries = closeout.closedGateReportFailures ?? [];
  const classifications = new Set(["non-recoverable", "scope-selection"]);
  const seen = new Set();

  for (const entry of entries) {
    if (!entry || typeof entry !== "object") {
      failures.push(`${closeout.id} closedGateReportFailures 条目必须是对象`);
      continue;
    }

    const { report, path, value, classification, reason } = entry;
    if (typeof report !== "string" || report.length === 0) {
      failures.push(`${closeout.id} closedGateReportFailures 缺少 report`);
      continue;
    }
    if (report.includes("/accounts/") || report.includes("-accounts/") || report.includes("/plugins/") || report.includes("-plugins/")) {
      failures.push(`${closeout.id} closedGateReportFailures 不允许登记 accounts/plugins report：${report}`);
    }
    if (typeof path !== "string" || path.length === 0) {
      failures.push(`${closeout.id} closedGateReportFailures 缺少 path`);
      continue;
    }
    if (path.endsWith("full_leaf_100")) {
      failures.push(`${closeout.id} closedGateReportFailures 不允许登记 full_leaf_100 噪声条目：${report} ${path}`);
    }
    const allowedClassifications =
      closeout.id === SYSTEM_HOTSPOT_USAGE_MYSTERY_CLOSEOUT_ID
        ? new Set([...classifications, "范围选择"])
        : classifications;
    if (!allowedClassifications.has(classification)) {
      failures.push(`${closeout.id} ${report} ${path} classification=${String(classification)}`);
    }
    if (typeof reason !== "string" || reason.trim().length === 0) {
      failures.push(`${closeout.id} ${report} ${path} 缺少 reason`);
    }
    if (
      closeout.id === SYSTEM_HOTSPOT_USAGE_MYSTERY_CLOSEOUT_ID &&
      classification !== "范围选择"
    ) {
      failures.push(`${closeout.id} ${report} ${path} classification 必须使用中文范围选择`);
    }
    if (
      closeout.id === SYSTEM_HOTSPOT_USAGE_MYSTERY_CLOSEOUT_ID &&
      (report.includes("mystery") || path.includes("mystery"))
    ) {
      failures.push(`${closeout.id} 不允许登记 mystery gate key：${report} ${path}`);
    }
    if (
      closeout.id === SYSTEM_HOTSPOT_USAGE_MYSTERY_CLOSEOUT_ID &&
      (!reason.includes("current-source") ||
        (!reason.includes("前端链路") && !reason.includes("前端调用链")) ||
        !reason.includes("后端骨架") ||
        reason.includes("full leaf"))
    ) {
      failures.push(`${closeout.id} ${report} ${path} reason 必须声明 current-source 前端链路、后端骨架和 partial closeout 边界`);
    }

    const key = `${report}\u0000${path}\u0000${JSON.stringify(value)}`;
    if (seen.has(key)) {
      failures.push(`${closeout.id} closedGateReportFailures 存在重复条目：${report} ${path}`);
    }
    seen.add(key);

    const reportPath = repoPath(report);
    if (!existsSync(reportPath)) {
      failures.push(`${closeout.id} 缺少 gate-report：${report}`);
      continue;
    }
    const gate = readJson(reportPath);
    const actual = getJsonPath(gate, path);
    if (!actual.exists) {
      failures.push(`${closeout.id} ${report} 缺少 path：${path}`);
      continue;
    }
    if (!valuesEqual(actual.value, value)) {
      failures.push(
        `${closeout.id} ${report} ${path} value 已变化：期望 ${JSON.stringify(value)}，实际 ${JSON.stringify(actual.value)}。请删除过期 closeout 噪声条目。`,
      );
    }
  }
}
function validateSidecarReports(closeout) {
  for (const report of closeout.sidecarReports ?? []) {
    const path = repoPath(report);
    if (!existsSync(path)) {
      failures.push(`${closeout.id} 缺少 sidecar report：${report}`);
      continue;
    }
    const sidecar = readJson(path);
    if (sidecar.full_leaf !== false) {
      failures.push(`${report} full_leaf=${String(sidecar.full_leaf)}`);
    }
    if (sidecar.gate_report_fields_unchanged !== true) {
      failures.push(`${report} gate_report_fields_unchanged=${String(sidecar.gate_report_fields_unchanged)}`);
    }
    if (sidecar.backend_platform_evidence_required !== true) {
      failures.push(`${report} backend_platform_evidence_required=${String(sidecar.backend_platform_evidence_required)}`);
    }
  }
}
function validateClosedDocs(moduleName, docs) {
  for (const doc of docs ?? []) {
    if (!existsSync(repoPath(doc))) {
      failures.push(`${moduleName} closeout 缺少旧 frontend 文档：${doc}`);
    }
  }
}

function validateRequiredSignals(closeout) {
  for (const signal of closeout.requiredSourceSignals ?? []) {
    requireIncludes(signal.file, signal.includes ?? []);
  }
}

function rejectRequiredSignalIncludes(closeout, file, snippets) {
  for (const signal of closeout.requiredSourceSignals ?? []) {
    if (signal.file !== file) {
      continue;
    }
    for (const snippet of snippets) {
      if ((signal.includes ?? []).includes(snippet)) {
        failures.push(`${closeout.id} 不允许旧 owner source signal 回流：${file} ${snippet}`);
      }
    }
  }
}

function validatePluginsCloseout(closeout) {
  const rawPath = repoPath(closeout.rawAcceptance);
  if (!existsSync(rawPath)) {
    failures.push(`缺少 plugins raw acceptance：${closeout.rawAcceptance}`);
    return;
  }

  const raw = readJson(rawPath);
  const commands = new Map((raw.commands ?? []).map((command) => [command.command, command]));

  for (const commandName of closeout.closedCommands ?? []) {
    const command = commands.get(commandName);
    if (!command) {
      failures.push(`plugins closeout raw acceptance 缺少 ${commandName}`);
      continue;
    }
    if (command.uiTriggerObserved !== true || command.blocked !== false) {
      failures.push(
        `plugins closeout ${commandName} 不能关闭：uiTriggerObserved=${command.uiTriggerObserved} blocked=${command.blocked}`,
      );
    }
  }

  for (const commandName of closeout.notClosedCommands ?? []) {
    const command = commands.get(commandName);
    if (!command) {
      failures.push(`plugins closeout raw acceptance 缺少 ${commandName}`);
      continue;
    }
    if (command.uiTriggerObserved !== false || command.blocked !== true) {
      failures.push(
        `plugins closeout ${commandName} 不得标为未关闭以外状态：uiTriggerObserved=${command.uiTriggerObserved} blocked=${command.blocked}`,
      );
    }
  }

  const expectedManifestStatuses = [
    {
      arrayName: "FRONTEND_DUMPED_MODULE_RESTORATION_MATRIX",
      module: "plugins",
      command: "get_plugin_config",
      source: "assets/index-CL22l5v8.js",
      status: "contract-service-only",
    },
    {
      arrayName: "FRONTEND_DUMPED_MODULE_RESTORATION_MATRIX",
      module: "plugins",
      command: "update_plugin_config",
      source: "assets/index-CL22l5v8.js",
      status: "contract-service-only",
    },
  ];
  const expectedKeys = new Set(expectedManifestStatuses.map(manifestCloseoutKey));
  const actualKeys = new Set((closeout.closedManifestStatuses ?? []).map(manifestCloseoutKey));
  for (const entry of closeout.closedManifestStatuses ?? []) {
    if (!expectedKeys.has(manifestCloseoutKey(entry))) {
      failures.push(`plugins closeout 不允许关闭未验证 manifest 状态：${JSON.stringify(entry)}`);
    }
    if (entry.status !== "contract-service-only") {
      failures.push(`plugins closeout 不得把 config manifest 状态提升为 ${String(entry.status)}`);
    }
  }
  for (const expectedEntry of expectedManifestStatuses) {
    if (!actualKeys.has(manifestCloseoutKey(expectedEntry))) {
      failures.push(`plugins closeout 缺少 config manifest closeout：${expectedEntry.command}`);
    }
  }

  validateClosedDocs("plugins", closeout.closedFrontendDocs);
  validateRequiredSignals(closeout);
}

function validateRelayCloseout(closeout) {
  validateClosedDocs("relay", closeout.closedFrontendDocs);

  const expectedCommands = new Set([
    "set_block_official_passthrough",
    "get_passthrough_audit_log",
  ]);

  for (const commandName of closeout.closedCommands ?? []) {
    if (!expectedCommands.has(commandName)) {
      failures.push(`relay closeout 不允许关闭未验证命令：${commandName}`);
    }
  }
  for (const commandName of expectedCommands) {
    if (!(closeout.closedCommands ?? []).includes(commandName)) {
      failures.push(`relay closeout 缺少命令：${commandName}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateStringArraySet(label, actual, expected) {
  if (!Array.isArray(actual)) {
    failures.push(`${label} 必须是数组`);
    return;
  }

  const actualSet = new Set(actual);
  const expectedSet = new Set(expected);
  for (const value of expectedSet) {
    if (!actualSet.has(value)) failures.push(`${label} 缺少：${value}`);
  }
  for (const value of actualSet) {
    if (!expectedSet.has(value)) failures.push(`${label} 不允许：${String(value)}`);
  }
  if (actual.length !== actualSet.size) {
    failures.push(`${label} 存在重复条目`);
  }
}

function requireNoRelaySkeletonGatePromotionFields(closeout) {
  for (const field of [
    "closedCommands",
    "closedManifestStatuses",
    "gateReports",
  ]) {
    const value = closeout[field];
    if (Array.isArray(value) && value.length > 0) {
      failures.push(`${closeout.id} 不得登记 ${field}；本 closeout 只能登记非 gating 当前源码骨架证据`);
    }
  }
}

function validateRelaySkeletonNonClaims(closeout, sidecar) {
  const closeoutNonClaims = closeout.nonClaims ?? [];
  const sidecarNonClaims = sidecar.non_claims ?? [];
  for (const required of RELAY_CURRENT_SOURCE_NON_CLAIMS) {
    if (!closeoutNonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
    if (!sidecarNonClaims.includes(required)) {
      failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} 缺少 non_claims：${required}`);
    }
  }
}

function validateRelayCurrentSourceCommandSignals() {
  const commandStringFiles = [
    "src/contracts/ipc/commands.ts",
    "src/services/relay/index.ts",
    "src/features/relay/contract.ts",
  ];
  for (const command of RELAY_CURRENT_SOURCE_COMMANDS) {
    for (const file of commandStringFiles) {
      requireIncludes(file, [`"${command}"`]);
    }
    requireIncludes("src/mocks/fixtures/commands.ts", [`${command}:`]);
    requireIncludes("src-tauri/src/lib.rs", [`commands::relay::${command}`]);
    requireIncludes("src-tauri/src/commands/relay.rs", [`pub fn ${command}`]);
    requireIncludes(
      RELAY_CURRENT_SOURCE_USECASE_FILES.get(command) ?? "src-tauri/src/application/usecase/relay.rs",
      [`pub fn ${command}`],
    );
  }
}

function validateRelayCurrentSourceSkeletonCloseout(closeout) {
  requireNoRelaySkeletonGatePromotionFields(closeout);

  const expectedSidecars = [RELAY_CURRENT_SOURCE_SIDECAR];
  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    expectedSidecars,
  );
  validateSidecarReports(closeout);

  const sidecarPath = repoPath(RELAY_CURRENT_SOURCE_SIDECAR);
  if (!existsSync(sidecarPath)) {
    failures.push(`${closeout.id} 缺少 sidecar report：${RELAY_CURRENT_SOURCE_SIDECAR}`);
    validateRequiredSignals(closeout);
    return;
  }

  const sidecar = readJson(sidecarPath);
  if (sidecar.schema !== "open-aimami.frontend_callchain_report.v1") {
    failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} schema=${String(sidecar.schema)}`);
  }
  if (sidecar.status !== "current-source-relay-skeleton-non-gating") {
    failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} status=${String(sidecar.status)}`);
  }
  if (Array.isArray(sidecar.closed_frontend_commands) && sidecar.closed_frontend_commands.length > 0) {
    failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} 不得登记 closed_frontend_commands`);
  }

  validateStringArraySet(
    `${RELAY_CURRENT_SOURCE_SIDECAR} current_source_ipc_commands`,
    sidecar.current_source_ipc_commands,
    RELAY_CURRENT_SOURCE_COMMANDS,
  );
  validateStringArraySet(
    `${RELAY_CURRENT_SOURCE_SIDECAR} gate_reports`,
    sidecar.gate_reports,
    RELAY_CURRENT_SOURCE_GATE_REPORTS,
  );
  for (const report of sidecar.gate_reports ?? []) {
    if (!existsSync(repoPath(report))) {
      failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} 缺少 gate-report：${report}`);
    }
  }

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    RELAY_CURRENT_SOURCE_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  const sourceSignals = sidecar.source_signals ?? {};
  for (const file of Object.values(sourceSignals)) {
    if (typeof file !== "string" || !existsSync(repoPath(file))) {
      failures.push(`${RELAY_CURRENT_SOURCE_SIDECAR} source_signals 缺少文件：${String(file)}`);
    }
  }

  validateRelaySkeletonNonClaims(closeout, sidecar);
  validateRelayCurrentSourceCommandSignals();
  validateRequiredSignals(closeout);
}

function validateRelayHttpTerminalCcfCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, RELAY_HTTP_TERMINAL_CCF_ALLOWED_FIELDS);
  if (closeout.module !== "relay-http-terminal") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== RELAY_HTTP_TERMINAL_CCF_MAP) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }

  validateStringArraySet(
    `${closeout.id} currentSourceCommands`,
    closeout.currentSourceCommands ?? [],
    RELAY_HTTP_TERMINAL_CCF_COMMANDS,
  );
  validateStringArraySet(
    `${closeout.id} gateReports`,
    closeout.gateReports ?? [],
    [RELAY_HTTP_TERMINAL_CCF_GATE_REPORT],
  );
  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    [RELAY_HTTP_TERMINAL_CCF_SIDECAR],
  );
  validateStringArraySet(
    `${closeout.id} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    RELAY_HTTP_TERMINAL_CCF_SIGNAL_FILES,
  );
  validateSidecarReports(closeout);
  validateRequiredSignals(closeout);

  const gate = readJson(repoPath(RELAY_HTTP_TERMINAL_CCF_GATE_REPORT));
  validateStringArraySet(
    `${RELAY_HTTP_TERMINAL_CCF_GATE_REPORT} strictImplementationUse_commands`,
    gate.strictImplementationUse_commands ?? [],
    RELAY_HTTP_TERMINAL_CCF_COMMANDS,
  );
  for (const command of RELAY_HTTP_TERMINAL_CCF_COMMANDS) {
    const blocker = gate.strictImplementationUse_blockers?.[command];
    if (
      typeof blocker !== "string" ||
      !blocker.includes("dim1 frontend CCF not_closed_windows")
    ) {
      failures.push(`${RELAY_HTTP_TERMINAL_CCF_GATE_REPORT} ${command} 缺少 Windows frontend CCF 残留说明`);
    }
  }

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "不声明 Windows raw/internal readyToImplement 已恢复。",
    "不声明 implementation_use、gate_accepted 或 full_leaf_100 已恢复。",
    "不修改任何 gate-report 字段。",
    "不把 macOS 证据推导为 Windows 行为。",
    "不声明真实 HTTP 网络、远端模型拉取或外部代理行为已经恢复。",
    "不声明这三条命令已从 Windows strictImplementationUse 晋升。",
    "不处理 voice。",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const snippet of [
    "current-source partial closeout",
    "UI 触发链",
    "不声明 Windows readyToImplement",
  ]) {
    if (!reason.includes(snippet)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${snippet}`);
    }
  }
}

function validateTrayCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, TRAY_CURRENT_SOURCE_ALLOWED_FIELDS);
  if (closeout.module !== "tray") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }

  validateStringArraySet(
    `${closeout.id} currentSourceCommands`,
    closeout.currentSourceCommands ?? [],
    TRAY_CURRENT_SOURCE_COMMANDS,
  );
  validateStringArraySet(
    `${closeout.id} gateReports`,
    closeout.gateReports ?? [],
    [TRAY_CURRENT_SOURCE_GATE_REPORT],
  );
  validateStringArraySet(
    `${closeout.id} frontendChainDocs`,
    closeout.frontendChainDocs ?? [],
    [TRAY_CURRENT_SOURCE_FRONTEND_DOC],
  );
  validateRequiredSignals(closeout);

  const gate = readJson(repoPath(TRAY_CURRENT_SOURCE_GATE_REPORT));
  if (gate.status !== "accepted_full_leaf_100_windows_ida") {
    failures.push(`${TRAY_CURRENT_SOURCE_GATE_REPORT} status=${String(gate.status)}`);
  }
  validateStringArraySet(
    `${TRAY_CURRENT_SOURCE_GATE_REPORT} acceptedTargets`,
    gate.acceptedTargets ?? [],
    TRAY_CURRENT_SOURCE_ACCEPTED_TARGETS,
  );
  const routerDelta = gate.productDelta?.find?.(
    (entry) => entry.id === "tray_router_open",
  );
  if (
    routerDelta?.status !==
    "source archive_extra_classifier_not_upstream_windows_menu_item"
  ) {
    failures.push(`${TRAY_CURRENT_SOURCE_GATE_REPORT} 缺少 tray_router_open 当前源码额外路径边界`);
  }

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "不修改 gate-report 字段。",
    "不声明新增 Windows 1.0.9 上游菜单项。",
    "不声明 tray_router_open 是 Windows 1.0.9 原始菜单项；它只能作为当前源码归档额外路径登记。",
    "不新增可见 route、sidebar、header、页面入口或菜单入口。",
    "不处理 voice。",
    "不声明当前前端 mock 等同真实 OS tray 行为。",
    "不声明后端真实 tray native 实现已完整恢复。",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  for (const snippet of [
    "current-source partial closeout",
    "tray:navigate",
    "不声明真实原生托盘实现已恢复",
  ]) {
    if (!String(closeout.reason ?? "").includes(snippet)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${snippet}`);
    }
  }

  for (const command of TRAY_CURRENT_SOURCE_COMMANDS) {
    requireIncludes("src-tauri/src/lib.rs", [`commands::tray::${command}`]);
    requireIncludes("src-tauri/src/commands/tray.rs", [`pub fn ${command}`]);
  }
  requireIncludes("src/app/runtime/tray.tsx", [
    "listen<TrayNavigationPayload>(\"tray:navigate\"",
    "relayModel",
    "navigateHashRoute",
  ]);
  requireIncludes("src/app/providers/settings.tsx", ["api.setTrayLocale(lang)"]);
  requireIncludes("src/entry/root.tsx", ["<TrayNavigationInitializer />"]);
  requireIncludes("src/mocks/fixtures/commands.ts", [
    "const trayCommandHandlers",
    "tray_router_open",
  ]);
}

function validateRelayProxyConfigDim6Closeout(closeout) {
  validateAllowedCloseoutFields(closeout, RELAY_PROXY_CONFIG_DIM6_ALLOWED_FIELDS);
  if (closeout.module !== "relay-proxy-config") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }

  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    [RELAY_PROXY_CONFIG_DIM6_MAPPING, RELAY_PROXY_CONFIG_DIM6_DISTILLED],
  );
  for (const report of closeout.sidecarReports ?? []) {
    if (!existsSync(repoPath(report))) {
      failures.push(`${closeout.id} 缺少 relay proxy config 证据文件：${report}`);
    }
  }

  const gate = readJson(repoPath(RELAY_PROXY_CONFIG_DIM6_GATE_REPORT));
  const cluster = gate.cluster_gates?.[18];
  if (cluster?.cluster !== "relay_proxy_config") {
    failures.push(`${RELAY_PROXY_CONFIG_DIM6_GATE_REPORT} cluster_gates.18.cluster=${String(cluster?.cluster)}`);
  }
  if (cluster?.dim6_missing !== true) {
    failures.push(
      `${RELAY_PROXY_CONFIG_DIM6_GATE_REPORT} cluster_gates.18.dim6_missing=${String(
        cluster?.dim6_missing,
      )}`,
    );
  }
  if (!String(cluster?.notes ?? "").includes("13 leaves")) {
    failures.push(`${RELAY_PROXY_CONFIG_DIM6_GATE_REPORT} cluster_gates.18 缺少 13 leaves 说明`);
  }

  const mappingText = readText(repoPath(RELAY_PROXY_CONFIG_DIM6_MAPPING));
  for (const required of [
    "### T5. relay_proxy_config",
    "**dim6_status**: closed",
    "relay_proxy_config | macOS sub-cluster",
    "relay_proxy_config | Windows sub-cluster",
    "relay-transport-closeout-109",
    "Transport sub-clusters relay_forward_chain+relay_sse+relay_ws_handlers+relay_passthrough_helpers+relay_proxy_config dim6 closed",
  ]) {
    if (!mappingText.includes(required)) {
      failures.push(`${RELAY_PROXY_CONFIG_DIM6_MAPPING} 缺少 dim6 证据片段：${required}`);
    }
  }

  const distilledText = readText(repoPath(RELAY_PROXY_CONFIG_DIM6_DISTILLED));
  for (const required of [
    "Bundle**: macos-1.0.9-relay-core",
    "relay_proxy_config",
    "set_api_proxy_config",
    "detect_api_proxy_config",
    "test_api_proxy_config",
    "sanitize_proxy_config",
  ]) {
    if (!distilledText.includes(required)) {
      failures.push(`${RELAY_PROXY_CONFIG_DIM6_DISTILLED} 缺少 proxy config 证据片段：${required}`);
    }
  }

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    RELAY_PROXY_CONFIG_DIM6_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 gate-report",
    "不声明 full_leaf_100",
    "不声明 relay-core 全量 readyToImplement",
    "不登记 cross relay-core-bootstrap、relay、mystery 或 voice",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "relay_proxy_config",
    "cluster_gates.18.dim6_missing",
    "current-source partial closeout",
    "RELAY-CORE-ACCEPTANCE-MAPPING-109",
    "full_leaf_100",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateAllowedCloseoutFields(closeout, allowedFields) {
  const expected = new Set(allowedFields);
  const actual = Object.keys(closeout);
  for (const field of actual) {
    if (!expected.has(field)) {
      failures.push(`${closeout.id} 不允许顶层字段：${field}`);
    }
  }
  for (const field of expected) {
    if (!Object.prototype.hasOwnProperty.call(closeout, field)) {
      failures.push(`${closeout.id} 缺少顶层字段：${field}`);
    }
  }
}

function validateSystemHotspotUsageMysterySidecar(report, expectedCommands) {
  const path = repoPath(report);
  if (!existsSync(path)) {
    failures.push(`${SYSTEM_HOTSPOT_USAGE_MYSTERY_CLOSEOUT_ID} 缺少 sidecar report：${report}`);
    return null;
  }

  const sidecar = readJson(path);
  if (sidecar.schema !== "open-aimami.frontend_callchain_report.v1") {
    failures.push(`${report} schema=${String(sidecar.schema)}`);
  }
  if (sidecar.status !== "current-source-frontend-chain-closed-non-gating") {
    failures.push(`${report} status=${String(sidecar.status)}`);
  }
  if (sidecar.full_leaf !== false) {
    failures.push(`${report} full_leaf=${String(sidecar.full_leaf)}`);
  }
  if (sidecar.gate_report_fields_unchanged !== true) {
    failures.push(`${report} gate_report_fields_unchanged=${String(sidecar.gate_report_fields_unchanged)}`);
  }
  if (sidecar.backend_platform_evidence_required !== true) {
    failures.push(`${report} backend_platform_evidence_required=${String(sidecar.backend_platform_evidence_required)}`);
  }
  for (const field of [
    "closed_frontend_commands",
    "closedCommands",
    "not_closed_commands",
    "notClosedCommands",
  ]) {
    if (Object.prototype.hasOwnProperty.call(sidecar, field)) {
      failures.push(`${report} 不允许声明 ${field}；本 sidecar 只能记录当前源码 IPC 信号`);
    }
  }

  validateStringArraySet(
    `${report} current_source_ipc_commands`,
    sidecar.current_source_ipc_commands,
    expectedCommands,
  );
  if ((sidecar.current_source_ipc_commands ?? []).includes("mystery_route_allowed")) {
    failures.push(`${report} 不得把 mystery_route_allowed 当作 current_source_ipc_commands`);
  }

  const nonClaims = sidecar.non_claims ?? [];
  for (const required of SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECAR_NON_CLAIMS) {
    if (!nonClaims.includes(required)) {
      failures.push(`${report} 缺少 non_claims：${required}`);
    }
  }
  if (typeof sidecar.evidence_note !== "string" || sidecar.evidence_note.trim().length === 0) {
    failures.push(`${report} 缺少中文 evidence_note`);
  }

  const sourceSignals = sidecar.source_signals ?? {};
  for (const file of Object.values(sourceSignals)) {
    if (typeof file !== "string" || !existsSync(repoPath(file))) {
      failures.push(`${report} source_signals 缺少文件：${String(file)}`);
    }
  }

  return sidecar;
}

function validateSystemHotspotUsageMysterySourceSignals() {
  for (const command of SYSTEM_HOTSPOT_USAGE_MYSTERY_COMMANDS) {
    requireIncludes("src/contracts/ipc/commands.ts", [`"command": "${command}"`]);
    requireIncludes("src/mocks/fixtures/commands.ts", [`${command}:`]);
  }

  requireIncludes("src/services/system/index.ts", [
    'invokeIpc<CoreEnvelope<boolean>>("get_hotspot_enabled")',
    'invokeIpc<CoreEnvelope<boolean>>("set_hotspot_enabled", { enabled })',
    'invokeIpc<CoreEnvelope<boolean>>("hotspot_ready")',
    'invokeIpc<CoreEnvelope<string>>("get_usage_refresh_interval")',
    'invokeIpc<CoreEnvelope<string>>("set_usage_refresh_interval", { interval })',
    'invokeIpc<CoreEnvelope<CoreSnapshotPayload>>("refresh_usage_snapshot")',
    'invokeIpc<CoreEnvelope<MysteryRouteGrant[]>>("get_mystery_unlock_grants")',
    'invokeIpc<CoreEnvelope<MysteryRouteGrant[]>>("merge_mystery_unlock_grants", {',
  ]);
  requireIncludes("src/services/settings/index.ts", [
    "getUsageRefreshInterval: systemService.getUsageRefreshInterval",
    "setUsageRefreshInterval: systemService.setUsageRefreshInterval",
    "getHotspotEnabled: systemService.getHotspotEnabled",
    "setHotspotEnabled: systemService.setHotspotEnabled",
    "hotspotReady: systemService.hotspotReady",
  ]);
  requireIncludes("scripts/validate-e2e-mocks.mjs", [
    '["get_hotspot_enabled", "hotspotEnabledHandler"]',
    '["set_hotspot_enabled", "setHotspotEnabledHandler"]',
    '["hotspot_ready", "hotspotReadyHandler"]',
    '["get_usage_refresh_interval", "usageRefreshIntervalHandler"]',
    '["set_usage_refresh_interval", "setUsageRefreshIntervalHandler"]',
    '["refresh_usage_snapshot", "refreshUsageSnapshotHandler"]',
    '["get_mystery_unlock_grants", "getMysteryUnlockGrantsHandler"]',
    '["merge_mystery_unlock_grants", "mergeMysteryUnlockGrantsHandler"]',
    '"mystery_route_allowed"',
  ]);
  for (const file of [
    "src/contracts/ipc/commands.ts",
    "src/services/system/index.ts",
    "src/mocks/fixtures/commands.ts",
  ]) {
    requireExcludes(file, ["mystery_route_allowed", "route_allowed"]);
  }
}

function validateSystemHotspotUsageMysteryCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, SYSTEM_HOTSPOT_USAGE_MYSTERY_ALLOWED_FIELDS);
  if (closeout.module !== "system-hotspot-usage-mystery") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }

  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECARS,
  );
  validateStringArraySet(
    `${closeout.id} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    SYSTEM_HOTSPOT_USAGE_MYSTERY_REQUIRED_SIGNAL_FILES,
  );
  validateSidecarReports(closeout);

  const currentSourceCommands = new Set();
  for (const [report, commands] of SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECAR_COMMANDS) {
    const sidecar = validateSystemHotspotUsageMysterySidecar(report, commands);
    for (const command of sidecar?.current_source_ipc_commands ?? []) {
      currentSourceCommands.add(command);
    }
  }
  validateStringArraySet(
    `${closeout.id} current_source_ipc_commands`,
    [...currentSourceCommands],
    SYSTEM_HOTSPOT_USAGE_MYSTERY_COMMANDS,
  );

  const mysterySidecar = readJson(repoPath(SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECARS[2]));
  validateStringArraySet(
    `${SYSTEM_HOTSPOT_USAGE_MYSTERY_SIDECARS[2]} gate_report_helper_gaps`,
    mysterySidecar.gate_report_helper_gaps,
    ["mystery_route_allowed"],
  );

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    SYSTEM_HOTSPOT_USAGE_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of SYSTEM_HOTSPOT_USAGE_MYSTERY_NON_CLAIMS) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
  }
  if (typeof closeout.reason !== "string" || !closeout.reason.includes("非 gating")) {
    failures.push(`${closeout.id} reason 必须声明非 gating 当前源码链路边界`);
  }

  validateSystemHotspotUsageMysterySourceSignals();
  validateRequiredSignals(closeout);
}

function validateSystemUsageCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, SYSTEM_USAGE_CURRENT_SOURCE_ALLOWED_FIELDS);
  if (closeout.module !== "system-usage") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== SYSTEM_USAGE_CURRENT_SOURCE_MAP) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }

  validateStringArraySet(
    `${closeout.id} currentSourceCommands`,
    closeout.currentSourceCommands ?? [],
    SYSTEM_USAGE_CURRENT_SOURCE_COMMANDS,
  );
  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    [SYSTEM_USAGE_CURRENT_SOURCE_SIDECAR],
  );
  validateStringArraySet(
    `${closeout.id} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    SYSTEM_USAGE_CURRENT_SOURCE_SIGNAL_FILES,
  );
  validateSidecarReports(closeout);

  if (Object.prototype.hasOwnProperty.call(closeout, "closedGateReportFailures")) {
    failures.push(`${closeout.id} 不允许登记 closedGateReportFailures；本条只验证当前源码链路和未声明边界`);
  }

  const sidecar = readJson(repoPath(SYSTEM_USAGE_CURRENT_SOURCE_SIDECAR));
  validateStringArraySet(
    `${SYSTEM_USAGE_CURRENT_SOURCE_SIDECAR} current_source_ipc_commands`,
    sidecar.current_source_ipc_commands ?? [],
    SYSTEM_USAGE_CURRENT_SOURCE_COMMANDS,
  );
  if (sidecar.full_leaf !== false) {
    failures.push(`${SYSTEM_USAGE_CURRENT_SOURCE_SIDECAR} full_leaf=${String(sidecar.full_leaf)}`);
  }
  if (sidecar.gate_report_fields_unchanged !== true) {
    failures.push(
      `${SYSTEM_USAGE_CURRENT_SOURCE_SIDECAR} gate_report_fields_unchanged=${String(
        sidecar.gate_report_fields_unchanged,
      )}`,
    );
  }
  if (sidecar.backend_platform_evidence_required !== true) {
    failures.push(
      `${SYSTEM_USAGE_CURRENT_SOURCE_SIDECAR} backend_platform_evidence_required=${String(
        sidecar.backend_platform_evidence_required,
      )}`,
    );
  }

  const mapText = existsSync(repoPath(SYSTEM_USAGE_CURRENT_SOURCE_MAP))
    ? readText(repoPath(SYSTEM_USAGE_CURRENT_SOURCE_MAP))
    : "";
  for (const required of [
    "系统用量当前源码证据映射",
    "get_usage_refresh_interval",
    "set_usage_refresh_interval",
    "refresh_usage_snapshot",
    "不修改 raw/internal 证据",
    "不声明 `gate_accepted`、`implementation_use`、`full_leaf_100` 或 `dim6` 已完成",
    "不恢复真实平台 watcher、daemon、runtime event、后台线程、计划调度或平台副作用",
    "不新增 route、sidebar、header、tray、plugins config 或 `voice` 入口",
  ]) {
    if (!mapText.includes(required)) {
      failures.push(`${SYSTEM_USAGE_CURRENT_SOURCE_MAP} 缺少说明片段：${required}`);
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 raw/internal 证据",
    "不声明 gate_accepted、implementation_use、dim6、full_leaf_100 已完成",
    "不恢复真实平台 watcher、daemon、runtime event 或后台调度副作用",
    "不新增 route、sidebar、header、tray、plugins config 或 voice 入口",
    "不把 system-hotspot、mystery-unlock 或 watcher/schedule 信号纳入本条 system-usage 边界",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "current-source partial closeout",
    "system service",
    "settings facade",
    "settings query/mutation/cache",
    "overview usage refresh/cache",
    "analytics service",
    "不修改 raw/internal 证据",
    "不声明 gate_accepted、implementation_use、dim6 或 full_leaf_100 已完成",
    "不恢复真实 watcher、daemon、runtime event 或平台副作用",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  for (const command of [
    "note_usage_refresh_activity",
    "schedule_full_runtime_refresh",
    "start_auto_switch_pending_watcher",
    "start_usage_refresh_watcher",
    "update_usage_refresh_schedule",
    "get_hotspot_enabled",
    "set_hotspot_enabled",
    "hotspot_ready",
    "get_mystery_unlock_grants",
    "merge_mystery_unlock_grants",
  ]) {
    if ((closeout.currentSourceCommands ?? []).includes(command)) {
      failures.push(`${closeout.id} 不允许把非 usage 命令纳入 currentSourceCommands：${command}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateDaemonAutoswitchCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, DAEMON_AUTOSWITCH_CURRENT_SOURCE_ALLOWED_FIELDS);
  if (closeout.module !== "daemon-autoswitch") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== DAEMON_AUTOSWITCH_CURRENT_SOURCE_MAP) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }

  validateStringArraySet(
    `${closeout.id} currentSourceCommands`,
    closeout.currentSourceCommands ?? [],
    DAEMON_AUTOSWITCH_CURRENT_SOURCE_COMMANDS,
  );
  validateStringArraySet(
    `${closeout.id} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    DAEMON_AUTOSWITCH_CURRENT_SOURCE_SIGNAL_FILES,
  );

  for (const forbiddenField of [
    "gateReports",
    "sidecarReports",
    "closedGateReportFailures",
    "closedManifestStatuses",
    "closedCommands",
    "closedFrontendDocs",
    "rawAcceptance",
  ]) {
    if (Object.prototype.hasOwnProperty.call(closeout, forbiddenField)) {
      failures.push(`${closeout.id} 不允许登记 ${forbiddenField}；本条只验证当前前端源码链路`);
    }
  }

  const mapText = existsSync(repoPath(DAEMON_AUTOSWITCH_CURRENT_SOURCE_MAP))
    ? readText(repoPath(DAEMON_AUTOSWITCH_CURRENT_SOURCE_MAP))
    : "";
  for (const required of [
    "自动切换待确认状态当前源码证据映射",
    "load_pending_auto_switch",
    "dismiss_pending_auto_switch",
    "confirm_pending_auto_switch",
    "confirm_pending_auto_switch_and_restart_codex",
    "不修改 raw/internal 证据",
    "不声明 `gate_accepted`、`implementation_use`、`dim6`、`full_leaf` 或 `full_leaf_100` 已完成",
    "不恢复后端待确认队列、真实账号切换、真实重启、真实 watcher、后台线程或平台副作用",
    "不新增 route、sidebar、header、tray、settings 入口或 `voice` 入口",
  ]) {
    if (!mapText.includes(required)) {
      failures.push(`${DAEMON_AUTOSWITCH_CURRENT_SOURCE_MAP} 缺少说明片段：${required}`);
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 raw/internal 证据",
    "不声明 gate_accepted、implementation_use、dim6、full_leaf_100 已完成",
    "不恢复后端待确认队列、真实账号切换、真实重启、真实 watcher 或平台副作用",
    "不新增 route、sidebar、header、tray、settings 或 voice 入口",
    "不把 mock handler 等同真实后端行为",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const backendNotes = (closeout.backendBoundaryNotes ?? []).join("\n");
  if (!backendNotes.includes("后端待确认队列、真实账号切换、真实重启、真实 watcher 仍未恢复")) {
    failures.push(`${closeout.id} backendBoundaryNotes 必须声明后端待确认队列、真实账号切换、真实重启、真实 watcher 仍未恢复`);
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "当前源码部分收口",
    "system service",
    "daemon-autoswitch service facade",
    "query/mutation/cache/runtime subscription",
    "prompt host",
    "mock handlers",
    "IPC contracts",
    "不声明真实后端待确认队列、真实账号切换、真实重启或真实 watcher 已恢复",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  for (const forbiddenCommand of [
    "start_auto_switch_pending_watcher",
    "start_usage_refresh_watcher",
    "schedule_full_runtime_refresh",
    "restart_codex",
    "graceful_restart_for_update",
  ]) {
    if ((closeout.currentSourceCommands ?? []).includes(forbiddenCommand)) {
      failures.push(`${closeout.id} 不允许把真实 watcher/restart 命令纳入 currentSourceCommands：${forbiddenCommand}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateCustomInstructionsFrontendCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(
    closeout,
    CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_ALLOWED_FIELDS,
  );
  if (closeout.module !== "custom-instructions") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_MAP) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }

  validateStringArraySet(
    `${closeout.id} currentSourceCommands`,
    closeout.currentSourceCommands ?? [],
    CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_COMMANDS,
  );
  validateStringArraySet(
    `${closeout.id} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_SIGNAL_FILES,
  );

  for (const forbiddenField of [
    "gateReports",
    "sidecarReports",
    "closedGateReportFailures",
    "closedManifestStatuses",
    "closedCommands",
    "closedFrontendDocs",
    "rawAcceptance",
    "backendBoundaryNotes",
  ]) {
    if (Object.prototype.hasOwnProperty.call(closeout, forbiddenField)) {
      failures.push(`${closeout.id} 不允许登记 ${forbiddenField}；本条只验证当前前端源码链路`);
    }
  }

  const mapText = existsSync(repoPath(CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_MAP))
    ? readText(repoPath(CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_MAP))
    : "";
  for (const required of [
    "custom-instructions 前端 current-source 证据映射",
    "load_custom_instruction_state",
    "preview_custom_instruction_apply",
    "apply_custom_instruction",
    "clear_custom_instruction_block",
    "rollback_custom_instruction",
    "不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成",
    "不碰 `voice`",
  ]) {
    if (!mapText.includes(required)) {
      failures.push(`${CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_MAP} 缺少说明片段：${required}`);
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 raw/internal 证据",
    "不声明 gate_accepted、implementation_use、full_leaf 或 full_leaf_100 已完成",
    "不声明双平台全 leaf、全文案验收或闭源业务完整恢复",
    "不新增 route、sidebar、header、tray、settings 或 voice 入口",
    "不把 mock handler 等同真实后端行为",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "当前源码部分收口",
    "route、service、query、mutation、cache、dialog、panel、mock 和 IPC contract",
    "不处理 voice",
    "不声明 full_leaf_100",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateNotificationClientStateFrontendCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(
    closeout,
    NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_ALLOWED_FIELDS,
  );
  if (closeout.module !== "notification-client-state") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }
  if (
    closeout.currentSourceMap !==
    NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_MAP
  ) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }

  validateStringArraySet(
    `${closeout.id} currentSourceCommands`,
    closeout.currentSourceCommands ?? [],
    NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_COMMANDS,
  );
  validateStringArraySet(
    `${closeout.id} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_SIGNAL_FILES,
  );

  for (const forbiddenField of [
    "gateReports",
    "sidecarReports",
    "closedGateReportFailures",
    "closedManifestStatuses",
    "closedCommands",
    "closedFrontendDocs",
    "rawAcceptance",
    "backendBoundaryNotes",
  ]) {
    if (Object.prototype.hasOwnProperty.call(closeout, forbiddenField)) {
      failures.push(`${closeout.id} 不允许登记 ${forbiddenField}；本条只验证当前前端源码调用链`);
    }
  }

  const signalsByFile = new Map(
    (closeout.requiredSourceSignals ?? []).map((signal) => [signal.file, signal]),
  );
  for (const expected of NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_REQUIRED_SIGNALS) {
    const actual = signalsByFile.get(expected.file);
    if (!actual) {
      failures.push(`${closeout.id} 缺少 requiredSourceSignals 文件：${expected.file}`);
      continue;
    }
    for (const snippet of expected.includes) {
      if (!(actual.includes ?? []).includes(snippet)) {
        failures.push(`${closeout.id} ${expected.file} 缺少 source signal：${snippet}`);
      }
    }
    requireIncludes(expected.file, expected.includes);
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 raw/internal 证据",
    "不声明 gate_accepted、implementation_use、full_leaf 或 full_leaf_100 已完成",
    "不声明通知客户端运行时、远端推送订阅、通知轮询、后台 watcher、Tauri event、托盘通知或平台通知能力恢复",
    "不新增 voice 入口",
    "不把 mock handler 当真实后端行为",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "当前源码部分收口",
    "get_notification_client_state",
    "system service、overview、tray-shell、IPC contract、mock handler 和 E2E mock validator",
    "不声明通知运行时",
    "不新增 voice",
    "不把 mock handler 当真实后端行为",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateAccountsSessionsFrontendCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(
    closeout,
    ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_ALLOWED_FIELDS,
  );
  if (closeout.module !== "accounts-sessions") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_MAP) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }

  validateStringArraySet(
    `${closeout.id} currentSourceCommands`,
    closeout.currentSourceCommands ?? [],
    ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_COMMANDS,
  );
  validateStringArraySet(
    `${closeout.id} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_SIGNAL_FILES,
  );

  for (const forbiddenField of [
    "gateReports",
    "sidecarReports",
    "closedGateReportFailures",
    "closedManifestStatuses",
    "closedCommands",
    "closedFrontendDocs",
    "rawAcceptance",
    "backendBoundaryNotes",
  ]) {
    if (Object.prototype.hasOwnProperty.call(closeout, forbiddenField)) {
      failures.push(`${closeout.id} 不允许登记 ${forbiddenField}；本条只验证当前前端源码链路`);
    }
  }

  const mapText = existsSync(repoPath(ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_MAP))
    ? readText(repoPath(ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_MAP))
    : "";
  for (const required of [
    "accounts/sessions 前端 current-source 证据映射",
    "begin_add_account_attach_monitor",
    "switch_account_and_restart_codex",
    "import_chatgpt_session_account",
    "load_sessions",
    "不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成",
    "不碰 `voice`",
  ]) {
    if (!mapText.includes(required)) {
      failures.push(`${ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_MAP} 缺少说明片段：${required}`);
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 raw/internal 证据",
    "不声明 gate_accepted、implementation_use、full_leaf 或 full_leaf_100 已完成",
    "不声明双平台全 leaf、全文案验收或闭源业务完整恢复",
    "不声明 ChatGPT session account 导入真实业务已恢复",
    "不把 mock handler 等同真实后端行为",
    "不碰 voice",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "当前源码部分收口",
    "accounts 八条 IPC 与 sessions 四条 IPC",
    "route、service、query、mutation、cache、dialog、panel、mock 和 IPC contract",
    "不处理 voice",
    "不声明 full_leaf_100",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateMysteryUnlockGrantsCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, MYSTERY_UNLOCK_GRANTS_ALLOWED_FIELDS);
  if (closeout.module !== "mystery-unlock-grants") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }

  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    [MYSTERY_UNLOCK_GRANTS_SIDECAR],
  );
  validateSidecarReports(closeout);

  const sidecar = readJson(repoPath(MYSTERY_UNLOCK_GRANTS_SIDECAR));
  validateStringArraySet(
    `${MYSTERY_UNLOCK_GRANTS_SIDECAR} current_source_ipc_commands`,
    sidecar.current_source_ipc_commands ?? [],
    MYSTERY_UNLOCK_GRANTS_COMMANDS,
  );
  validateStringArraySet(
    `${MYSTERY_UNLOCK_GRANTS_SIDECAR} gate_report_helper_gaps`,
    sidecar.gate_report_helper_gaps ?? [],
    ["mystery_route_allowed"],
  );

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    MYSTERY_UNLOCK_GRANTS_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  for (const entry of closeout.closedGateReportFailures ?? []) {
    if (
      entry.path.includes("mystery_route_allowed") ||
      entry.path === "gate_accepted" ||
      entry.path === "implementation_use" ||
      entry.path === "dim6_missing" ||
      entry.path.startsWith("cluster_gate_summary")
    ) {
      failures.push(`${closeout.id} 不允许登记 mystery 聚合或 helper gate：${entry.path}`);
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 gate-report",
    "不声明 raw/internal dim6 已补齐",
    "不声明 implementation_use、gate_accepted 或 full_leaf_100 已恢复",
    "不登记 mystery_route_allowed",
    "不登记 top-level、cluster summary 或 dim6 gate 字段",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "current-source partial closeout",
    "get_mystery_unlock_grants",
    "merge_mystery_unlock_grants",
    "mystery_route_allowed",
    "full_leaf_100",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/lib.rs", [
    "commands::system::get_mystery_unlock_grants",
    "commands::system::merge_mystery_unlock_grants",
  ]);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/commands/system.rs", [
    "pub fn get_mystery_unlock_grants",
    "pub fn merge_mystery_unlock_grants",
  ]);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/application/usecase/system.rs", [
    "pub fn mystery_unlock_grants",
    "pub fn merge_mystery_unlock_grants",
  ]);
}

function validateMysteryRouteAllowedCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, MYSTERY_ROUTE_ALLOWED_ALLOWED_FIELDS);
  if (closeout.module !== "mystery-route-allowed") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }

  validateStringArraySet(
    `${closeout.id} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    MYSTERY_ROUTE_ALLOWED_SIGNAL_FILES,
  );

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    MYSTERY_ROUTE_ALLOWED_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  for (const entry of closeout.closedGateReportFailures ?? []) {
    if (
      entry.path === "gate_accepted" ||
      entry.path === "implementation_use" ||
      entry.path === "dim6_missing" ||
      entry.path.includes("readyToImplement") ||
      entry.path.includes("full_leaf_100") ||
      entry.path.startsWith("cluster_gate_summary") ||
      entry.path.startsWith("clusters.") ||
      entry.path.startsWith("cluster_gates.")
    ) {
      failures.push(`${closeout.id} 不允许登记 top-level、cluster summary、dim6、readyToImplement 或 full_leaf_100：${entry.path}`);
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 gate-report",
    "不声明 IPC command",
    "不声明 raw/internal dim6、implementation_use、gate_accepted、full_leaf_100 恢复",
    "不登记 top-level/cluster summary/dim6 gate 字段",
    "不恢复 voice",
    "不把 mock helper 当真实后端行为",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "current-source route gate/helper 链路",
    "不是 IPC command closeout",
    "resolveMysteryGrantRoute",
    "resolveRouteVisibility",
    "不登记 top-level、cluster summary、dim6 或 full_leaf_100",
    "不恢复 voice",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
  for (const file of [
    "src/contracts/ipc/commands.ts",
    "src/services/system/index.ts",
    "src/mocks/fixtures/commands.ts",
  ]) {
    requireExcludes(file, ["mystery_route_allowed", "route_allowed"]);
  }
}

function validateBootstrapSystemCurrentSourceSidecar(report) {
  const path = repoPath(report);
  if (!existsSync(path)) {
    failures.push(`${BOOTSTRAP_SYSTEM_CURRENT_SOURCE_CLOSEOUT_ID} 缺少 sidecar report：${report}`);
    return;
  }

  const sidecar = readJson(path);
  if (sidecar.full_leaf !== false) {
    failures.push(`${report} full_leaf 必须为 false，实际为 ${String(sidecar.full_leaf)}`);
  }
  if (sidecar.gate_report_fields_unchanged !== true) {
    failures.push(
      `${report} gate_report_fields_unchanged 必须为 true，实际为 ${String(sidecar.gate_report_fields_unchanged)}`,
    );
  }
  if (sidecar.backend_platform_evidence_required !== true) {
    failures.push(
      `${report} backend_platform_evidence_required 必须为 true，实际为 ${String(sidecar.backend_platform_evidence_required)}`,
    );
  }

  if (
    report === BOOTSTRAP_SYSTEM_CURRENT_SOURCE_SIDECARS[3] &&
    !JSON.stringify(sidecar).includes("duplicate_local_outtake_not_authoritative")
  ) {
    failures.push(
      `${report} 必须包含 duplicate_local_outtake_not_authoritative，避免把本地重复 outtake 当作 authoritative closeout`,
    );
  }
}

function validateBootstrapSystemCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, BOOTSTRAP_SYSTEM_CURRENT_SOURCE_ALLOWED_FIELDS);
  for (const field of BOOTSTRAP_SYSTEM_CURRENT_SOURCE_FORBIDDEN_GATE_FIELDS) {
    if (Object.prototype.hasOwnProperty.call(closeout, field)) {
      failures.push(`${closeout.id} 不允许登记 gate closeout 字段：${field}`);
    }
  }

  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    BOOTSTRAP_SYSTEM_CURRENT_SOURCE_SIDECARS,
  );
  validateSidecarReports(closeout);

  for (const report of BOOTSTRAP_SYSTEM_CURRENT_SOURCE_SIDECARS) {
    validateBootstrapSystemCurrentSourceSidecar(report);
  }

  const nonClaims = closeout.nonClaims ?? [];
  const nonClaimsText = nonClaims.join("\n");
  for (const snippet of BOOTSTRAP_SYSTEM_CURRENT_SOURCE_NON_CLAIM_SNIPPETS) {
    if (!nonClaimsText.includes(snippet)) {
      failures.push(`${closeout.id} nonClaims 必须包含中文声明片段：${snippet}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateBootstrapCurrentSourceGateCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, BOOTSTRAP_CURRENT_SOURCE_ALLOWED_FIELDS);
  if (closeout.module !== "bootstrap") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }

  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    BOOTSTRAP_CURRENT_SOURCE_SIDECARS,
  );
  validateSidecarReports(closeout);

  for (const report of BOOTSTRAP_CURRENT_SOURCE_SIDECARS) {
    validateBootstrapSystemCurrentSourceSidecar(report);
    const sidecar = readJson(repoPath(report));
    if (sidecar.status !== "current-source-frontend-chain-recorded-non-gating") {
      failures.push(`${report} status=${String(sidecar.status)}`);
    }
    validateStringArraySet(
      `${report} currentSourceSignals.commands`,
      sidecar.currentSourceSignals?.commands ?? [],
      BOOTSTRAP_CURRENT_SOURCE_COMMANDS,
    );
    const sidecarText = JSON.stringify(sidecar);
    for (const required of [
      "不声明全量叶子验收完成",
      "不修改 gate-report 字段",
      "不声明 implementation_use、gate_accepted 或 full_leaf_100",
      "不声明 bootstrap 后端平台真实能力已经恢复",
    ]) {
      if (!sidecarText.includes(required)) {
        failures.push(`${report} 缺少边界声明：${required}`);
      }
    }
  }

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    BOOTSTRAP_CURRENT_SOURCE_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  for (const entry of closeout.closedGateReportFailures ?? []) {
    if (entry.path.includes("full_leaf_100")) {
      failures.push(`${closeout.id} 不允许登记 full_leaf_100：${entry.report} ${entry.path}`);
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 gate-report",
    "不声明 raw/internal gate 已通过",
    "不声明 implementation_use、gate_accepted 或 full_leaf_100 已恢复",
    "不登记 full_leaf_100",
    "不处理 system watcher、system-shell-init、relay、mystery 或 voice",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "current-source partial closeout",
    "load_bootstrap_state",
    "load_pending_auto_switch",
    "load_snapshot",
    "不声明 raw/internal gate",
    "full_leaf_100",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/lib.rs", [
    "commands::system::diagnose",
    "commands::system::force_kill_codex",
    "commands::system::load_pending_auto_switch",
    "commands::system::dismiss_pending_auto_switch",
    "commands::system::confirm_pending_auto_switch",
    "commands::system::confirm_pending_auto_switch_and_restart_codex",
  ]);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/commands/system.rs", [
    "pub fn diagnose",
    "pub fn force_kill_codex",
    "pub fn load_pending_auto_switch",
    "pub fn dismiss_pending_auto_switch",
    "pub fn confirm_pending_auto_switch",
    "pub fn confirm_pending_auto_switch_and_restart_codex",
  ]);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/application/usecase/system.rs", [
    "pub use self::diagnostics::diagnose",
    "pub use self::platform_actions::",
    "pub fn load_pending_auto_switch",
    "pub fn dismiss_pending_auto_switch",
    "pub fn confirm_pending_auto_switch",
    "daemon_usecase::load_pending_auto_switch()",
  ]);
}

function validateSystemWatcherCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, SYSTEM_WATCHER_CURRENT_SOURCE_ALLOWED_FIELDS);
  if (closeout.module !== "system-runtime-watcher") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }

  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    [SYSTEM_WATCHER_CURRENT_SOURCE_SIDECAR],
  );
  validateSidecarReports(closeout);

  const sidecar = readJson(repoPath(SYSTEM_WATCHER_CURRENT_SOURCE_SIDECAR));
  if (sidecar.status !== "current-source-runtime-watcher-skeleton-recorded-non-gating") {
    failures.push(`${SYSTEM_WATCHER_CURRENT_SOURCE_SIDECAR} status=${String(sidecar.status)}`);
  }
  if (sidecar.full_leaf !== false) {
    failures.push(`${SYSTEM_WATCHER_CURRENT_SOURCE_SIDECAR} full_leaf=${String(sidecar.full_leaf)}`);
  }
  if (sidecar.gate_report_fields_unchanged !== true) {
    failures.push(
      `${SYSTEM_WATCHER_CURRENT_SOURCE_SIDECAR} gate_report_fields_unchanged=${String(
        sidecar.gate_report_fields_unchanged,
      )}`,
    );
  }
  if (sidecar.backend_platform_evidence_required !== true) {
    failures.push(
      `${SYSTEM_WATCHER_CURRENT_SOURCE_SIDECAR} backend_platform_evidence_required=${String(
        sidecar.backend_platform_evidence_required,
      )}`,
    );
  }

  const sidecarText = JSON.stringify(sidecar);
  for (const signal of SYSTEM_WATCHER_CURRENT_SOURCE_SIGNALS) {
    if (!sidecarText.includes(signal)) {
      failures.push(`${SYSTEM_WATCHER_CURRENT_SOURCE_SIDECAR} 缺少 watcher 信号：${signal}`);
    }
  }
  for (const required of [
    "src-tauri/src/core/runtime.rs",
    "src-tauri/src/core/model/runtime.rs",
    "src-tauri/src/repository/runtime.rs",
    "src-tauri/src/platform/runtime.rs",
    "不声明 watcher、schedule、condvar、后台线程、runtime event 或真实平台副作用已经恢复",
    "不声明这 5 个 watcher / schedule 信号有直接前端 IPC 入口",
  ]) {
    if (!sidecarText.includes(required)) {
      failures.push(`${SYSTEM_WATCHER_CURRENT_SOURCE_SIDECAR} 缺少边界声明：${required}`);
    }
  }

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    SYSTEM_WATCHER_CURRENT_SOURCE_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  for (const entry of closeout.closedGateReportFailures ?? []) {
    if (
      entry.path.includes("implementation_use") ||
      entry.path.includes("gate_accepted") ||
      entry.path.includes("full_leaf_100") ||
      entry.path.includes("dim6") ||
      entry.path.includes("summary")
    ) {
      failures.push(`${closeout.id} 不允许登记非 readyToImplement watcher gate：${entry.path}`);
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 gate-report",
    "不声明 raw/internal gate 已通过",
    "不登记 implementation_use、gate_accepted、full_leaf_100、dim6 或聚合门",
    "不声明真实 watcher、condvar、后台线程、runtime event 或平台副作用已经恢复",
    "不声明这 5 个 watcher / schedule 信号有直接前端 IPC 入口",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "current-source partial closeout",
    "note_usage_refresh_activity",
    "schedule_full_runtime_refresh",
    "start_auto_switch_pending_watcher",
    "start_usage_refresh_watcher",
    "update_usage_refresh_schedule",
    "readyToImplement",
    "full_leaf_100",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/application/usecase/system.rs", [
    "pub fn note_usage_refresh_activity",
    "pub fn schedule_full_runtime_refresh",
    "pub fn start_auto_switch_pending_watcher",
    "pub fn start_usage_refresh_watcher",
    "pub fn update_usage_refresh_schedule",
    "daemon_usecase::note_usage_refresh_activity(repo)",
    "daemon_usecase::schedule_full_runtime_refresh(repo)",
    "daemon_usecase::start_auto_switch_pending_watcher(repo)",
    "daemon_usecase::start_usage_refresh_watcher(repo)",
    "daemon_usecase::update_usage_refresh_schedule(repo)",
  ]);
}

function validateSystemShellInitDuplicateCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, SYSTEM_SHELL_INIT_DUPLICATE_ALLOWED_FIELDS);
  if (closeout.module !== "system-shell-init") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }

  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    [SYSTEM_SHELL_INIT_DUPLICATE_SIDECAR],
  );
  validateSidecarReports(closeout);

  const sidecar = readJson(repoPath(SYSTEM_SHELL_INIT_DUPLICATE_SIDECAR));
  const sidecarText = JSON.stringify(sidecar);
  if (sidecar.status !== "duplicate-local-outtake-non-authoritative-non-gating") {
    failures.push(`${SYSTEM_SHELL_INIT_DUPLICATE_SIDECAR} status=${String(sidecar.status)}`);
  }
  for (const required of [
    "duplicate_local_outtake_not_authoritative",
    "不是 authoritative closeout",
    "不把 duplicate_local_outtake_not_authoritative 当作 authoritative closeout",
    "不声明 implementation_use、gate_accepted 或 full_leaf_100",
  ]) {
    if (!sidecarText.includes(required)) {
      failures.push(`${SYSTEM_SHELL_INIT_DUPLICATE_SIDECAR} 缺少非权威声明：${required}`);
    }
  }

  const gate = readJson(repoPath(SYSTEM_SHELL_INIT_DUPLICATE_GATE_REPORT));
  if (gate.status !== "duplicate_local_outtake_not_authoritative") {
    failures.push(`${SYSTEM_SHELL_INIT_DUPLICATE_GATE_REPORT} status=${String(gate.status)}`);
  }
  if (!JSON.stringify(gate).includes("authoritative_shared_bootstrap_work_exists")) {
    failures.push(`${SYSTEM_SHELL_INIT_DUPLICATE_GATE_REPORT} 缺少 authoritative shared bootstrap work 标记`);
  }

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    SYSTEM_SHELL_INIT_DUPLICATE_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  for (const entry of closeout.closedGateReportFailures ?? []) {
    if (entry.path.includes("full_leaf_100") || entry.path.includes("moduleExitAllowed")) {
      failures.push(`${closeout.id} 不允许登记 full leaf 或 module exit 字段：${entry.path}`);
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 gate-report",
    "不声明 authoritative closeout",
    "不登记 full_leaf_100 或 moduleExitAllowed",
    "不声明 implementation_use、gate_accepted 或 readyToImplement 已恢复",
    "不处理 relay、mystery 或 voice",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "duplicate_local_outtake_not_authoritative",
    "current-source partial closeout",
    "non-authoritative",
    "full_leaf_100",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateWindowsSystemCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, WINDOWS_SYSTEM_CURRENT_SOURCE_ALLOWED_FIELDS);
  if (closeout.module !== "windows-system") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }

  validateStringArraySet(
    `${closeout.id} sidecarReports`,
    closeout.sidecarReports ?? [],
    [WINDOWS_SYSTEM_CURRENT_SOURCE_SIDECAR],
  );
  validateSidecarReports(closeout);

  const sidecar = readJson(repoPath(WINDOWS_SYSTEM_CURRENT_SOURCE_SIDECAR));
  if (sidecar.status !== "current-source-frontend-chain-and-gaps-recorded-non-gating") {
    failures.push(`${WINDOWS_SYSTEM_CURRENT_SOURCE_SIDECAR} status=${String(sidecar.status)}`);
  }
  validateStringArraySet(
    `${WINDOWS_SYSTEM_CURRENT_SOURCE_SIDECAR} currentSourceSignals.commands`,
    sidecar.currentSourceSignals?.commands ?? [],
    WINDOWS_SYSTEM_CURRENT_SOURCE_COMMANDS,
  );
  const sidecarText = JSON.stringify(sidecar);
  for (const required of [
    "当前公开源码可见 force_kill_codex",
    "当前公开源码可见 diagnose",
    "当前公开源码可见 diagnose_codex_router",
    "不声明 diagnose 和 diagnose_codex_router 真实平台能力已经恢复",
  ]) {
    if (!sidecarText.includes(required)) {
      failures.push(`${WINDOWS_SYSTEM_CURRENT_SOURCE_SIDECAR} 缺少边界声明：${required}`);
    }
  }

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    WINDOWS_SYSTEM_CURRENT_SOURCE_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const required of [
    "不修改 gate-report",
    "不声明 raw/internal gate 已通过",
    "不声明 implementation_use、gate_accepted 或 full_leaf_100 已恢复",
    "不声明 diagnose 和 diagnose_codex_router 真实平台能力已经恢复",
    "不处理 macOS watcher、bootstrap、mystery 或 voice",
  ]) {
    if (!nonClaimsText.includes(required)) {
      failures.push(`${closeout.id} nonClaims 缺少声明：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const required of [
    "current-source partial closeout",
    "force_kill_codex",
    "diagnose_codex_router",
    "diagnose",
    "不声明 raw/internal gate",
    "full_leaf_100",
  ]) {
    if (!reason.includes(required)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${required}`);
    }
  }

  validateRequiredSignals(closeout);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/commands/system.rs", [
    "pub fn force_kill_codex",
    "pub fn diagnose",
  ]);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/application/usecase/system.rs", [
    "pub use self::diagnostics::diagnose",
    "pub use self::platform_actions::",
    "force_kill_app",
  ]);
}

function validateUiThemeCurrentSourceCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, UI_THEME_ALLOWED_FIELDS);
  if (closeout.module !== "ui-theme") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== UI_THEME_CURRENT_SOURCE_MAP) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }

  validateStringArraySet(
    `${closeout.id} gateReports`,
    closeout.gateReports ?? [],
    [UI_THEME_GATE_REPORT],
  );
  validateStringArraySet(
    `${closeout.id} rawImplementationTargets`,
    closeout.rawImplementationTargets ?? [],
    [UI_THEME_RAW_IMPLEMENTATION_TARGET],
  );
  validateStringArraySet(
    `${closeout.id} requiredSourceSignals files`,
    (closeout.requiredSourceSignals ?? []).map((signal) => signal.file),
    UI_THEME_REQUIRED_SIGNAL_FILES,
  );

  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  validateStringArraySet(
    `${closeout.id} closedGateReportFailures`,
    [...actualGateFailureKeys],
    UI_THEME_GATE_FAILURE_KEYS,
  );
  validateClosedGateReportFailures(closeout);

  const mapPath = repoPath(UI_THEME_CURRENT_SOURCE_MAP);
  if (!existsSync(mapPath)) {
    failures.push(`${closeout.id} 缺少当前源码说明文档：${UI_THEME_CURRENT_SOURCE_MAP}`);
  } else {
    const mapText = readFileSync(mapPath, "utf8");
    for (const snippet of UI_THEME_MAP_SNIPPETS) {
      if (!mapText.includes(snippet)) {
        failures.push(`${UI_THEME_CURRENT_SOURCE_MAP} 缺少说明片段：${snippet}`);
      }
    }
  }

  const nonClaimsText = (closeout.nonClaims ?? []).join("\n");
  for (const snippet of UI_THEME_NON_CLAIM_SNIPPETS) {
    if (!nonClaimsText.includes(snippet)) {
      failures.push(`${closeout.id} nonClaims 缺少边界片段：${snippet}`);
    }
  }
  if (
    typeof closeout.reason !== "string" ||
    !closeout.reason.includes("current-source partial closeout") ||
    !closeout.reason.includes("不声明 full leaf 100")
  ) {
    failures.push(`${closeout.id} reason 必须声明 current-source partial closeout，且不声明 full leaf 100`);
  }

  validateRequiredSignals(closeout);
}

function manifestCloseoutKey(record) {
  return [
    record.arrayName ?? "",
    record.module ?? record.owner ?? "",
    record.queryKey ?? "",
    record.command ?? "",
    record.source ?? "",
    record.status ?? "",
  ].join("\u0000");
}

function validateGateReports(closeout, options = {}) {
  const reports = closeout.gateReports ?? [];
  if (reports.length === 0) {
    failures.push(`${closeout.id} 缺少 gate-report 证据`);
    return;
  }

  for (const report of reports) {
    const path = repoPath(report);
    if (!existsSync(path)) {
      failures.push(`${closeout.id} 缺少 gate-report：${report}`);
      continue;
    }
    const gate = readJson(path);
    for (const field of ["readyToImplement", "implementation_use", "gate_accepted", "full_leaf_100"]) {
      if (gate[field] !== true) {
        failures.push(`${report} ${field}=${String(gate[field])}`);
      }
    }
    const status = String(gate.status ?? "");
    const acceptedStatus = status === "PASS" || status.startsWith("accepted_full_leaf_100");
    if (options.requirePassStatus === true && gate.status !== "PASS") {
      failures.push(`${report} status=${String(gate.status)}`);
    }
    if (options.requirePassStatus !== true && !acceptedStatus) {
      failures.push(`${report} status=${String(gate.status)}`);
    }
    if (
      options.requireFrontendConsumerHandoff === true &&
      gate.frontendConsumerHandoff?.status !== "complete_current_source_frontend_chain"
    ) {
      failures.push(`${report} frontendConsumerHandoff.status=${String(gate.frontendConsumerHandoff?.status)}`);
    }
  }
}

function validateMcpSkillsCloseout(closeout) {
  validateClosedDocs("mcp-skills", closeout.closedFrontendDocs);
  validateGateReports(closeout, {
    requirePassStatus: true,
    requireFrontendConsumerHandoff: true,
  });

  const expected = [
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_INDEX_QUERY_MATRIX",
      module: "mcp",
      queryKey: "mcp-servers",
      source: "assets/index-CL22l5v8.js",
      status: "owner-closed",
    },
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_INDEX_QUERY_MATRIX",
      module: "skills",
      queryKey: "installed-skills",
      source: "assets/index-CL22l5v8.js",
      status: "owner-closed",
    },
  ];
  const expectedKeys = new Set(expected.map(manifestCloseoutKey));
  const actualKeys = new Set((closeout.closedManifestStatuses ?? []).map(manifestCloseoutKey));

  for (const entry of closeout.closedManifestStatuses ?? []) {
    if (!expectedKeys.has(manifestCloseoutKey(entry))) {
      failures.push(`${closeout.id} 不允许关闭未验证 manifest 状态：${JSON.stringify(entry)}`);
    }
    if (entry.status !== "owner-closed") {
      failures.push(`${closeout.id} 不得把 manifest 状态提升为 ${String(entry.status)}`);
    }
  }
  for (const expectedEntry of expected) {
    if (!actualKeys.has(manifestCloseoutKey(expectedEntry))) {
      failures.push(`${closeout.id} 缺少 manifest closeout：${expectedEntry.module}/${expectedEntry.queryKey}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateAccountsAnalyticsCloseout(closeout) {
  validateClosedDocs("accounts-analytics", closeout.closedFrontendDocs);
  validateGateReports(closeout);
  if (closeout.currentSourceMap !== ACCOUNTS_ANALYTICS_CURRENT_SOURCE_MAP) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }
  validateStringArraySet(
    `${closeout.id} currentSourceCommands`,
    closeout.currentSourceCommands,
    ACCOUNTS_ANALYTICS_CURRENT_SOURCE_COMMANDS,
  );
  const mapPath = repoPath(ACCOUNTS_ANALYTICS_CURRENT_SOURCE_MAP);
  if (!existsSync(mapPath)) {
    failures.push(`${closeout.id} 缺少当前源码说明文档：${ACCOUNTS_ANALYTICS_CURRENT_SOURCE_MAP}`);
  } else {
    const mapText = readText(mapPath);
    for (const required of [
      "# accounts/analytics 前端链路与后端公开 owner 证据映射",
      "`quota-history`",
      "`usage-analytics`",
      "不把 `accounts` 或 `analytics` 的 manifest 状态改成 `covered`",
      "不接入 `voice`",
    ]) {
      if (!mapText.includes(required)) {
        failures.push(`${ACCOUNTS_ANALYTICS_CURRENT_SOURCE_MAP} 缺少说明片段：${required}`);
      }
    }
  }

  const expected = [
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_INDEX_QUERY_MATRIX",
      module: "accounts",
      queryKey: "quota-history",
      source: "assets/index-CL22l5v8.js",
      status: "owner-closed",
    },
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_INDEX_QUERY_MATRIX",
      module: "analytics",
      queryKey: "usage-analytics",
      source: "assets/index-CL22l5v8.js",
      status: "owner-closed",
    },
  ];
  const expectedKeys = new Set(expected.map(manifestCloseoutKey));
  const actualKeys = new Set((closeout.closedManifestStatuses ?? []).map(manifestCloseoutKey));

  for (const entry of closeout.closedManifestStatuses ?? []) {
    if (!expectedKeys.has(manifestCloseoutKey(entry))) {
      failures.push(`${closeout.id} 不允许关闭未验证 manifest 状态：${JSON.stringify(entry)}`);
    }
    if (entry.status !== "owner-closed") {
      failures.push(`${closeout.id} 不得把 manifest 状态提升为 ${String(entry.status)}`);
    }
  }
  for (const expectedEntry of expected) {
    if (!actualKeys.has(manifestCloseoutKey(expectedEntry))) {
      failures.push(`${closeout.id} 缺少 manifest closeout：${expectedEntry.module}/${expectedEntry.queryKey}`);
    }
  }

  const boundaryNotes = closeout.backendBoundaryNotes ?? [];
  if (!boundaryNotes.some((note) => note.includes("Rust analytics 后端已恢复公开 session/rollout 文件事实聚合"))) {
    failures.push(`${closeout.id} 必须声明 analytics Rust 后端已恢复公开 session/rollout 文件事实聚合`);
  }
  if (!boundaryNotes.some((note) => note.includes("闭源 token 与严格运行时统计口径仍不声明恢复"))) {
    failures.push(`${closeout.id} 必须声明 analytics 闭源 token 与严格运行时统计口径仍不声明恢复`);
  }
  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "不把 accounts 或 analytics 的 manifest 状态改成 covered。",
    "不声明全文案验收完成。",
    "不声明 MAC/WIN 100% leaf 已完成。",
    "不声明 analytics 闭源 token、真实运行时统计或严格平台 parity 已完成。",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateAppShellSourceOnlyCloseout(closeout) {
  validateClosedDocs("app-shell", closeout.closedFrontendDocs);

  const expected = [
    {
      arrayName: "FRONTEND_DUMPED_INDEX_ASSET_SOURCES",
      owner: "app-shell",
      source: "assets/index-CL22l5v8.js",
      status: "source-only",
    },
    {
      arrayName: "FRONTEND_DUMPED_APP_SHELL_DESKTOP_MESSAGE_QUERY_MATRIX",
      module: "app-shell",
      queryKey: "desktop-message",
      source: "assets/index-CL22l5v8.js",
      status: "source-only",
    },
  ];
  const expectedKeys = new Set(expected.map(manifestCloseoutKey));
  const actualKeys = new Set((closeout.closedManifestStatuses ?? []).map(manifestCloseoutKey));

  for (const entry of closeout.closedManifestStatuses ?? []) {
    if (!expectedKeys.has(manifestCloseoutKey(entry))) {
      failures.push(`${closeout.id} 不允许关闭未验证 manifest 状态：${JSON.stringify(entry)}`);
    }
    if (entry.status !== "source-only") {
      failures.push(`${closeout.id} 不得把 manifest 状态提升为 ${String(entry.status)}`);
    }
  }
  for (const expectedEntry of expected) {
    if (!actualKeys.has(manifestCloseoutKey(expectedEntry))) {
      failures.push(`${closeout.id} 缺少 manifest closeout：${expectedEntry.owner ?? expectedEntry.module}`);
    }
  }

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "不把 app-shell 的 source-only manifest 状态改成 covered。",
    "不声明 update/restart/window-path 后端完整恢复。",
    "不声明 desktop-message 存在可审计 endpoint。",
    "不声明全文案验收完成。",
    "不声明 MAC/WIN 100% leaf 已完成。",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
  }

  validateRequiredSignals(closeout);
}

function validateSystemWindowMaintenanceCloseout(closeout) {
  const expectedClosedCommands = new Set([
    "focus_main_window",
    "open_path",
    "clean",
    "rebuild_registry",
    "graceful_restart_for_update",
    "restart_codex",
  ]);
  const expectedRestrictedCommands = new Set(["load_snapshot"]);
  const expectedCurrentSourceCommands = new Set([
    ...expectedClosedCommands,
    ...expectedRestrictedCommands,
  ]);
  if (closeout.currentSourceMap !== SYSTEM_WINDOW_MAINTENANCE_CURRENT_SOURCE_MAP) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }
  const actualCurrentSourceCommands = new Set(closeout.currentSourceCommands ?? []);
  for (const command of expectedCurrentSourceCommands) {
    if (!actualCurrentSourceCommands.has(command)) {
      failures.push(`${closeout.id} 缺少 currentSourceCommands：${command}`);
    }
  }
  for (const command of actualCurrentSourceCommands) {
    if (!expectedCurrentSourceCommands.has(command)) {
      failures.push(`${closeout.id} 不允许 currentSourceCommands：${command}`);
    }
  }
  const actualCommands = new Set(closeout.closedCommands ?? []);
  for (const command of expectedClosedCommands) {
    if (!actualCommands.has(command)) {
      failures.push(`${closeout.id} 缺少 closedCommands：${command}`);
    }
  }
  for (const command of actualCommands) {
    if (!expectedClosedCommands.has(command)) {
      failures.push(`${closeout.id} 不允许关闭命令：${command}`);
    }
  }
  const actualRestrictedCommands = new Set(closeout.restrictedCurrentSourceCommands ?? []);
  for (const command of expectedRestrictedCommands) {
    if (!actualRestrictedCommands.has(command)) {
      failures.push(`${closeout.id} 缺少 restrictedCurrentSourceCommands：${command}`);
    }
  }
  for (const command of actualRestrictedCommands) {
    if (!expectedRestrictedCommands.has(command)) {
      failures.push(`${closeout.id} 不允许 restrictedCurrentSourceCommands：${command}`);
    }
  }
  if ((closeout.notClosedCommands ?? []).includes("load_snapshot")) {
    failures.push(`${closeout.id} 不应继续把 load_snapshot 放在未关闭命令中`);
  }

  const requiredSidecars = new Set([
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/frontend-callchain-report.json",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-maintenance/frontend-callchain-report.json",
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/frontend-callchain-report.json",
  ]);
  const actualSidecars = new Set(closeout.sidecarReports ?? []);
  for (const sidecar of requiredSidecars) {
    if (!actualSidecars.has(sidecar)) {
      failures.push(`${closeout.id} 缺少 sidecarReports：${sidecar}`);
    }
  }
  for (const sidecar of actualSidecars) {
    if (!requiredSidecars.has(sidecar)) {
      failures.push(`${closeout.id} 不允许登记 sidecar report：${sidecar}`);
    }
  }

  validateSidecarReports(closeout);
  validateClosedGateReportFailures(closeout);

  const expectedGateFailureKeys = new Set([
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000gate_accepted\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000implementation_use\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000dim6_missing\u0000true",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.focus_main_window.gate_accepted\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.focus_main_window.implementation_use\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.open_path.gate_accepted\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.open_path.implementation_use\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000cluster_gate_summary.readyToImplement\u00000",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-maintenance/gate-report.json\u0000gate_accepted\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-maintenance/gate-report.json\u0000implementation_use\u0000false",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-maintenance/gate-report.json\u0000dim6_missing\u0000true",
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/gate-report.json\u0000gate_accepted\u0000false",
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/gate-report.json\u0000implementation_use\u0000false",
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/gate-report.json\u0000dim6_missing\u0000true",
  ]);
  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  for (const expected of expectedGateFailureKeys) {
    if (!actualGateFailureKeys.has(expected)) {
      failures.push(`${closeout.id} 缺少允许登记的 gate-report failure：${expected}`);
    }
  }
  for (const actual of actualGateFailureKeys) {
    if (!expectedGateFailureKeys.has(actual)) {
      failures.push(`${closeout.id} 不允许登记 gate-report failure：${actual}`);
    }
  }

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "\u4e0d\u58f0\u660e\u5168\u91cf\u53f6\u5b50\u9a8c\u6536\u5b8c\u6210",
    "\u4e0d\u542f\u7528\u540e\u7aef\u771f\u5b9e\u6062\u590d",
    "\u4e0d\u4fee\u6539 gate-report",
    "\u4e0d\u58f0\u660e MAC/WIN 100%",
    "不把 load_snapshot 提升为全量闭环",
    "load_snapshot 后端真实副作用仍未恢复",
    "\u4e0d\u767b\u8bb0 accounts \u6216 plugins \u7684 gate-report \u5931\u8d25\u5b57\u6bb5",
    "\u4e0d\u767b\u8bb0\u4efb\u4f55 full_leaf_100=false \u5b57\u6bb5",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
  }

  validateRequiredSignals(closeout);
  const signalText = JSON.stringify(closeout.requiredSourceSignals ?? []);
  for (const required of [
    "commands::maintenance::clean",
    "commands::maintenance::rebuild_registry",
    "src-tauri/src/commands/maintenance.rs",
    "usecase::maintenance::clean",
    "usecase::maintenance::rebuild_registry",
    "src-tauri/src/application/usecase/maintenance.rs",
  ]) {
    if (!signalText.includes(required)) {
      failures.push(`${closeout.id} 缺少 maintenance owner source signal：${required}`);
    }
  }
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/lib.rs", [
    "commands::system::clean",
    "commands::system::rebuild_registry",
  ]);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/commands/system.rs", [
    "pub fn clean",
    "pub fn rebuild_registry",
  ]);
  rejectRequiredSignalIncludes(closeout, "src-tauri/src/application/usecase/system.rs", [
    "pub fn clean",
    "pub fn rebuild_registry",
  ]);
  const mapPath = repoPath(SYSTEM_WINDOW_MAINTENANCE_CURRENT_SOURCE_MAP);
  if (!existsSync(mapPath)) {
    failures.push(`${closeout.id} 缺少当前源码说明文档：${SYSTEM_WINDOW_MAINTENANCE_CURRENT_SOURCE_MAP}`);
  } else {
    const mapText = readText(mapPath);
    for (const required of [
      "# system-window-maintenance 前端 current-source 证据映射",
      "focus_main_window",
      "open_path",
      "clean",
      "rebuild_registry",
      "graceful_restart_for_update",
      "restart_codex",
      "load_snapshot",
      "受限 current-source 命令",
      "不把 `load_snapshot` 提升为全量闭环",
      "后端真实副作用仍未恢复",
      "不处理 `voice`",
    ]) {
      if (!mapText.includes(required)) {
        failures.push(`${SYSTEM_WINDOW_MAINTENANCE_CURRENT_SOURCE_MAP} 缺少说明片段：${required}`);
      }
    }
  }
}

function validateCrossHomeUsageFrontendCloseout(closeout) {
  validateAllowedCloseoutFields(closeout, CROSS_HOME_USAGE_FRONTEND_ALLOWED_FIELDS);

  if (closeout.module !== "cross-home-usage-frontend") {
    failures.push(`${closeout.id} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${closeout.id} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== CROSS_HOME_USAGE_FRONTEND_CURRENT_SOURCE_MAP) {
    failures.push(`${closeout.id} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }

  const gateReports = closeout.gateReports ?? [];
  if (gateReports.length !== 1 || gateReports[0] !== CROSS_HOME_USAGE_FRONTEND_GATE_REPORT) {
    failures.push(`${closeout.id} 必须只登记 cross home-usage frontend gate-report`);
  }

  const notes = closeout.backendBoundaryNotes ?? [];
  if (
    !notes.some(
      (note) =>
        note.includes("前端专属包") &&
        note.includes("后端验证委托") &&
        note.includes("每个命令证据包"),
    )
  ) {
    failures.push(`${closeout.id} 必须声明前端专属包与后端验证委托边界`);
  }

  validateRequiredSignals(closeout);
  validateClosedGateReportFailures(closeout);

  const mapPath = repoPath(CROSS_HOME_USAGE_FRONTEND_CURRENT_SOURCE_MAP);
  if (!existsSync(mapPath)) {
    failures.push(`${closeout.id} 缺少当前源码说明文档：${CROSS_HOME_USAGE_FRONTEND_CURRENT_SOURCE_MAP}`);
  } else {
    const mapText = readText(mapPath);
    for (const required of [
      "# cross-home-usage 前端当前源码证据映射",
      "home-dashboard + usage-snapshot-panel",
      "不声明 `gate_accepted`、`implementation_use` 或 `readyToImplement` 已恢复",
      "不声明该 cross 包完成后端 IDA 验证",
      "不新增 route、sidebar、header、tray、prompt host、plugins config 或 `voice` 入口",
    ]) {
      if (!mapText.includes(required)) {
        failures.push(`${CROSS_HOME_USAGE_FRONTEND_CURRENT_SOURCE_MAP} 缺少说明片段：${required}`);
      }
    }
  }

  const expectedGateFailureKeys = new Set(CROSS_HOME_USAGE_FRONTEND_GATE_FAILURE_KEYS);
  const actualGateFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (entry) => `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  for (const expected of expectedGateFailureKeys) {
    if (!actualGateFailureKeys.has(expected)) {
      failures.push(`${closeout.id} 缺少允许登记的 gate-report failure：${expected}`);
    }
  }
  for (const actual of actualGateFailureKeys) {
    if (!expectedGateFailureKeys.has(actual)) {
      failures.push(`${closeout.id} 不允许登记 gate-report failure：${actual}`);
    }
  }

  const nonClaims = closeout.nonClaims ?? [];
  for (const required of [
    "不修改 gate-report",
    "不声明 raw/internal gate 已通过",
    "不声明真实平台 parity",
    "不声明 dim6 已恢复",
    "不声明 full_leaf_100 恢复",
  ]) {
    if (!nonClaims.includes(required)) {
      failures.push(`${closeout.id} 缺少 nonClaims：${required}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const snippet of [
    "current-source partial closeout",
    "当前公开前端/服务/后端骨架链路",
    "不声明 raw/internal gate",
    "真实平台 parity",
    "dim6",
    "full_leaf_100",
  ]) {
    if (!reason.includes(snippet)) {
      failures.push(`${closeout.id} reason 缺少边界声明：${snippet}`);
    }
  }
}
const closeouts = readJson(closeoutPath);
if (closeouts.schema !== "open-aimami.frontend_current_source_closeouts.v1") {
  failures.push(`${toRepoPath(closeoutPath)} schema 不匹配`);
}

for (const closeout of closeouts.closeouts ?? []) {
  if (closeout.id === "plugins-current-route-api-command-mock-chain") {
    validatePluginsCloseout(closeout);
  } else if (closeout.id === "mcp-skills-index-query-owner-closed-chain") {
    validateMcpSkillsCloseout(closeout);
  } else if (closeout.id === "accounts-analytics-index-query-owner-closed-chain") {
    validateAccountsAnalyticsCloseout(closeout);
  } else if (closeout.id === "app-shell-source-only-index-and-desktop-message-boundary") {
    validateAppShellSourceOnlyCloseout(closeout);
  } else if (closeout.id === "system-window-maintenance-frontend-callchain-non-gating-closeout") {
    validateSystemWindowMaintenanceCloseout(closeout);
  } else if (closeout.id === "relay-passthrough-audit-backend-skeleton-chain") {
    validateRelayCloseout(closeout);
  } else if (closeout.id === RELAY_CURRENT_SOURCE_SKELETON_ID) {
    validateRelayCurrentSourceSkeletonCloseout(closeout);
  } else if (closeout.id === RELAY_HTTP_TERMINAL_CCF_CLOSEOUT_ID) {
    validateRelayHttpTerminalCcfCloseout(closeout);
  } else if (closeout.id === TRAY_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateTrayCurrentSourceCloseout(closeout);
  } else if (closeout.id === RELAY_PROXY_CONFIG_DIM6_CLOSEOUT_ID) {
    validateRelayProxyConfigDim6Closeout(closeout);
  } else if (closeout.id === SYSTEM_HOTSPOT_USAGE_MYSTERY_CLOSEOUT_ID) {
    validateSystemHotspotUsageMysteryCloseout(closeout);
  } else if (closeout.id === SYSTEM_USAGE_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateSystemUsageCurrentSourceCloseout(closeout);
  } else if (closeout.id === DAEMON_AUTOSWITCH_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateDaemonAutoswitchCurrentSourceCloseout(closeout);
  } else if (closeout.id === NOTIFICATION_CLIENT_STATE_FRONTEND_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateNotificationClientStateFrontendCurrentSourceCloseout(closeout);
  } else if (closeout.id === ACCOUNTS_SESSIONS_FRONTEND_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateAccountsSessionsFrontendCurrentSourceCloseout(closeout);
  } else if (closeout.id === CUSTOM_INSTRUCTIONS_FRONTEND_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateCustomInstructionsFrontendCurrentSourceCloseout(closeout);
  } else if (closeout.id === MYSTERY_UNLOCK_GRANTS_CLOSEOUT_ID) {
    validateMysteryUnlockGrantsCloseout(closeout);
  } else if (closeout.id === MYSTERY_ROUTE_ALLOWED_CLOSEOUT_ID) {
    validateMysteryRouteAllowedCloseout(closeout);
  } else if (closeout.id === BOOTSTRAP_SYSTEM_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateBootstrapSystemCurrentSourceCloseout(closeout);
  } else if (closeout.id === BOOTSTRAP_CURRENT_SOURCE_GATE_CLOSEOUT_ID) {
    validateBootstrapCurrentSourceGateCloseout(closeout);
  } else if (closeout.id === SYSTEM_WATCHER_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateSystemWatcherCurrentSourceCloseout(closeout);
  } else if (closeout.id === SYSTEM_SHELL_INIT_DUPLICATE_CLOSEOUT_ID) {
    validateSystemShellInitDuplicateCloseout(closeout);
  } else if (closeout.id === WINDOWS_SYSTEM_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateWindowsSystemCurrentSourceCloseout(closeout);
  } else if (closeout.id === UI_THEME_CURRENT_SOURCE_CLOSEOUT_ID) {
    validateUiThemeCurrentSourceCloseout(closeout);
  } else if (closeout.id === CROSS_HOME_USAGE_FRONTEND_CLOSEOUT_ID) {
    validateCrossHomeUsageFrontendCloseout(closeout);
  } else {
    failures.push(`未知 closeout id：${closeout.id}`);
  }
}

if (failures.length > 0) {
  console.error("前端当前源码 closeout 验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(`前端当前源码 closeout 验证通过：${(closeouts.closeouts ?? []).length} 项。`);
