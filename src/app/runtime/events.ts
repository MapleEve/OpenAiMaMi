import type { QueryClient, QueryKey } from "@tanstack/react-query";
import type { IpcJsonValue } from "@/contracts/ipc";
import type { BackendRuntimeEventPayload } from "@/types";
import { AccountsCache } from "@/features/accounts/cache";
import { AnalyticsCache } from "@/features/analytics/cache";
import { CustomInstructionsCache } from "@/features/custom-instructions/cache";
import { DaemonAutoswitchCache } from "@/features/daemon-autoswitch/cache";
import { MaintenanceCache } from "@/features/maintenance/cache";
import { McpCache } from "@/features/mcp/cache";
import { OverviewCache } from "@/features/overview/cache";
import { PluginsCache } from "@/features/plugins/cache";
import { RelayCache } from "@/features/relay/cache";
import { SessionsCache } from "@/features/sessions/cache";
import {
  applySettingsRuntimeEventToCache,
  SETTINGS_RUNTIME_EVENT_TARGET_QUERY_KEYS,
} from "@/features/settings/cache";
import { SkillsCache } from "@/features/skills/cache";
import { TrayShellCache } from "@/features/tray-shell/cache";
import type { Route } from "@/types/navigation";

export type RuntimeQueryKey = QueryKey;

export type RuntimeEvent =
  | {
      type: "bootstrap:seed";
      payload: IpcJsonValue;
      sequence: number;
      receivedAt: number;
    }
  | {
      type: "module:reload";
      moduleId: Route;
      mode: "full" | "active-only";
      sequence: number;
      receivedAt: number;
      command?: string;
      statusCode?: string;
    }
  | {
      type: "module:mutation-payload";
      moduleId: Route;
      payload: IpcJsonValue;
      sequence: number;
      receivedAt: number;
    };

type RuntimeEventListener = (event: RuntimeEvent) => void;

export interface RuntimeCacheEntry {
  eventType: RuntimeEvent["type"];
  payload: IpcJsonValue;
  receivedAt: number;
  sequence: number;
}

export interface RuntimeEventCursor {
  receivedAt: number;
  sequence: number;
}

export interface RuntimeEventQueryTarget {
  evidence: "module-cache-owner";
  mode: "active-only" | "full";
  queryKey: RuntimeQueryKey;
}

export const RUNTIME_EVENT_CACHE_KEYS = {
  bootstrap: ["runtime", "bootstrap"] as const,
  mutationPayload: (moduleId: Route) =>
    [moduleId, "mutation-payload"] as const,
  eventCursor: (event: RuntimeEvent) =>
    [
      "runtime",
      "event-cursor",
      event.type,
      "moduleId" in event ? event.moduleId : "global",
    ] as const,
};

// 运行时只消费模块缓存持有者提供的查询键，避免复刻模块私有裸键。
const runtimeModuleQueryKeys = (
  ...queryKeys: RuntimeQueryKey[]
): readonly RuntimeQueryKey[] => queryKeys;

export const RUNTIME_QUERY_KEYS_BY_MODULE = {
  overview: runtimeModuleQueryKeys(OverviewCache.queryKeys.root),
  accounts: runtimeModuleQueryKeys(AccountsCache.queryKeys.root),
  sessions: runtimeModuleQueryKeys(SessionsCache.queryKeys.root),
  analytics: runtimeModuleQueryKeys(AnalyticsCache.queryKeys.root),
  "custom-instructions": runtimeModuleQueryKeys(CustomInstructionsCache.queryKeys.root),
  mcp: runtimeModuleQueryKeys(McpCache.queryKeys.root),
  skills: runtimeModuleQueryKeys(SkillsCache.queryKeys.root),
  plugins: runtimeModuleQueryKeys(PluginsCache.queryKeys.root),
  relay: runtimeModuleQueryKeys(RelayCache.queryKeys.root),
  settings: runtimeModuleQueryKeys(...SETTINGS_RUNTIME_EVENT_TARGET_QUERY_KEYS),
  maintenance: runtimeModuleQueryKeys(MaintenanceCache.queryKeys.root),
  "daemon-autoswitch": runtimeModuleQueryKeys(DaemonAutoswitchCache.queryKeys.root),
  "tray-shell": runtimeModuleQueryKeys(TrayShellCache.queryKeys.root),
} satisfies Record<Route, readonly RuntimeQueryKey[]>;

const listeners = new Set<RuntimeEventListener>();

export function emitRuntimeEvent(event: RuntimeEvent) {
  listeners.forEach((listener) => listener(event));
}

export function subscribeRuntimeEvent(listener: RuntimeEventListener) {
  listeners.add(listener);
  return () => {
    listeners.delete(listener);
  };
}

export function normalizeBackendRuntimeEvent(
  payload: BackendRuntimeEventPayload,
): RuntimeEvent | null {
  if (payload.type !== "module:reload" || !isRuntimeModuleId(payload.moduleId)) {
    return null;
  }

  return {
    type: "module:reload",
    moduleId: payload.moduleId,
    mode: payload.mode === "active-only" ? "active-only" : "full",
    sequence: payload.sequence,
    receivedAt: payload.receivedAt,
    command: payload.command,
    statusCode: payload.statusCode,
  };
}

export function getRuntimeEventQueryTargets(
  event: RuntimeEvent,
): RuntimeEventQueryTarget[] {
  if (event.type === "bootstrap:seed") {
    return [];
  }

  const mode = event.type === "module:reload" ? event.mode : "full";
  return RUNTIME_QUERY_KEYS_BY_MODULE[event.moduleId].map((queryKey) => ({
    evidence: "module-cache-owner",
    mode,
    queryKey,
  }));
}

export function applyRuntimeEventToQueryCache(
  queryClient: QueryClient,
  event: RuntimeEvent,
) {
  if (!acceptRuntimeEventSequence(queryClient, event)) {
    return;
  }

  if (event.type === "bootstrap:seed") {
    setSequencedRuntimeCache(queryClient, RUNTIME_EVENT_CACHE_KEYS.bootstrap, event);
    return;
  }

  if (event.type === "module:mutation-payload") {
    setSequencedRuntimeCache(
      queryClient,
      RUNTIME_EVENT_CACHE_KEYS.mutationPayload(event.moduleId),
      event,
    );
  }

  if (delegateRuntimeEventToModuleCacheHelper(queryClient, event)) {
    return;
  }

  invalidateRuntimeTargets(queryClient, getRuntimeEventQueryTargets(event));
}

function acceptRuntimeEventSequence(
  queryClient: QueryClient,
  event: RuntimeEvent,
) {
  const cursorKey = RUNTIME_EVENT_CACHE_KEYS.eventCursor(event);
  const current = queryClient.getQueryData<RuntimeEventCursor>(cursorKey);
  if (current && event.sequence <= current.sequence) {
    return false;
  }

  queryClient.setQueryData<RuntimeEventCursor>(cursorKey, {
    receivedAt: event.receivedAt,
    sequence: event.sequence,
  });
  return true;
}

function setSequencedRuntimeCache(
  queryClient: QueryClient,
  queryKey: RuntimeQueryKey,
  event: Extract<RuntimeEvent, { payload: IpcJsonValue }>,
) {
  queryClient.setQueryData<RuntimeCacheEntry>(queryKey, (current) => {
    if (current && event.sequence <= current.sequence) {
      return current;
    }

    return {
      eventType: event.type,
      payload: event.payload,
      receivedAt: event.receivedAt,
      sequence: event.sequence,
    };
  });
}

function delegateRuntimeEventToModuleCacheHelper(
  queryClient: QueryClient,
  event: RuntimeEvent,
) {
  if (event.type !== "module:reload" || event.moduleId !== "settings") {
    return false;
  }

  void applySettingsRuntimeEventToCache(
    queryClient,
    "usage-refresh-schedule-reload",
    {
      command: event.command,
      mode: event.mode,
      receivedAt: event.receivedAt,
      sequence: event.sequence,
      statusCode: event.statusCode,
    },
  );
  return true;
}

function invalidateRuntimeTargets(
  queryClient: QueryClient,
  targets: RuntimeEventQueryTarget[],
) {
  targets.forEach((target) => {
    void queryClient.invalidateQueries({
      queryKey: target.queryKey,
      type: target.mode === "active-only" ? "active" : "all",
    });
  });
}

function isRuntimeModuleId(value: string): value is Route {
  return Object.prototype.hasOwnProperty.call(RUNTIME_QUERY_KEYS_BY_MODULE, value);
}
