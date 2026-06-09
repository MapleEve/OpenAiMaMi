import type { LucideIcon } from "lucide-react";
import type { ModuleCacheEnvelope } from "@/features/_shared/cache";
import type {
  CleanPayload,
  CoreSnapshotPayload,
  DiagnosePayload,
  RebuildRegistryPayload,
  RelayDiagnosticIssuePayload,
  RelayDiagnosticPayload,
  RelayRouterIssueFixPayload,
  SystemActionPayload,
  SystemInfoPayload,
} from "@/types";

export type MaintenanceModuleId = "maintenance";
export type MaintenanceImageCompatQueryKey = readonly ["imageCompat"];
export type MaintenanceSystemInfoQueryKey = readonly [
  "maintenance",
  "system-info",
];
export type MaintenanceSnapshotQueryKey = readonly ["maintenance", "snapshot"];
export type MaintenanceWritableQueryKey =
  | MaintenanceImageCompatQueryKey
  | MaintenanceSystemInfoQueryKey
  | MaintenanceSnapshotQueryKey;
export type MaintenanceQueryPayloadForKey<
  TKey extends MaintenanceWritableQueryKey,
> = TKey extends MaintenanceSystemInfoQueryKey
  ? SystemInfoPayload
  : TKey extends MaintenanceSnapshotQueryKey
    ? CoreSnapshotPayload
    : boolean;
export type MaintenanceSystemInfoPayload = SystemInfoPayload;
export type MaintenanceSnapshotPayload = CoreSnapshotPayload;
export type MaintenanceQueryCachePayload =
  | {
      queryKey: MaintenanceImageCompatQueryKey;
      value: boolean;
    }
  | {
      queryKey: MaintenanceSystemInfoQueryKey;
      value: SystemInfoPayload;
    }
  | {
      queryKey: MaintenanceSnapshotQueryKey;
      value: CoreSnapshotPayload;
    };
export type MaintenanceRouterDiagnosticItem = RelayDiagnosticIssuePayload;
export type MaintenanceRouterDiagnosticsPayload = RelayDiagnosticPayload;
export type MaintenanceRouterFixPayload = RelayRouterIssueFixPayload;
export type MaintenanceActionPayload =
  | DiagnosePayload
  | CleanPayload
  | RebuildRegistryPayload
  | SystemActionPayload
  | MaintenanceRouterDiagnosticsPayload
  | MaintenanceRouterFixPayload;
export type MaintenanceCachePayload =
  | MaintenanceQueryCachePayload
  | MaintenanceActionPayload;
export type MaintenanceCacheEnvelope<
  TPayload extends MaintenanceCachePayload = MaintenanceCachePayload,
> = ModuleCacheEnvelope<TPayload>;

export interface MaintenanceFixIssueInput {
  itemId: string;
}

export interface MaintenanceImageCompatInput {
  enabled: boolean;
}

export interface MaintenanceActionResult {
  type: "success" | "error";
  message: string;
}

export interface MaintenanceActionMutationCallbacks {
  onCleaned: (result: CleanPayload) => void;
  onCleanError: (error: unknown) => void;
  onRebuilt: (result: RebuildRegistryPayload) => void;
  onRebuildError: (error: unknown) => void;
  onRestarted: () => void;
  onRestartError: (error: unknown) => void;
}

export interface MaintenanceActionView {
  key: string;
  icon: LucideIcon;
  iconColor: string;
  label: string;
  description: string;
  actionLabel: string;
  loadingLabel: string;
  onAction: () => void;
  result?: MaintenanceActionResult;
  busy: boolean;
  variant?: "destructive";
}

export type MaintenanceActionDefinition = Omit<
  MaintenanceActionView,
  "result" | "busy"
>;

export interface MaintenanceSystemInfoField {
  value: string;
}

export interface MaintenanceSystemInfoQuery {
  fields: MaintenanceSystemInfoField[];
  loading: boolean;
  error: unknown;
}

export interface MaintenancePathEntry {
  id: string;
  label: string;
  value: string;
  exists?: boolean;
  busy: boolean;
  disabled: boolean;
  result?: MaintenanceActionResult;
  onOpen: () => void;
}

export interface MaintenancePathPanel {
  entries: MaintenancePathEntry[];
  loading: boolean;
  error: unknown;
}

export interface MaintenanceRestartDialogController {
  open: boolean;
  onOpenChange: (open: boolean) => void;
  onConfirm: () => void;
}

export interface MaintenanceRouterDiagnosticsDialogController {
  open: boolean;
  onOpenChange: (open: boolean) => void;
  runDiagnostics: () => Promise<MaintenanceRouterDiagnosticsPayload>;
  fixIssueAndRefresh: (
    input: MaintenanceFixIssueInput,
  ) => Promise<{
    fixResult: MaintenanceRouterFixPayload;
    diagnosticsResult: MaintenanceRouterDiagnosticsPayload;
  }>;
}

export interface MaintenancePageController {
  systemInfo: MaintenanceSystemInfoQuery;
  pathPanel: MaintenancePathPanel;
  actions: MaintenanceActionView[];
  restartDialog: MaintenanceRestartDialogController;
  routerDiagnosticsDialog: MaintenanceRouterDiagnosticsDialogController;
}
