import type { QueryClient } from "@tanstack/react-query";
import type { QueryKey } from "@tanstack/react-query";
import {
  createModuleCacheOwner,
  type ModuleCacheSource,
} from "@/features/_shared/cache";
import type {
  ApiModePayload,
  AutoSwitchConfigPayload,
  CoreEnvelope,
  CoreSnapshotPayload,
} from "@/types";
import type {
  SettingsCacheEnvelope,
  SettingsCachePayload,
  SettingsHasNotchQueryKey,
  SettingsHotspotEnabledQueryKey,
  SettingsImageCompatQueryKey,
  SettingsQueryPayloadForKey,
  SettingsRuntimeStateDisplayQueryKey,
  SettingsUsageRefreshIntervalQueryKey,
  SettingsWritableQueryKey,
} from "../types";

export type SettingsRuntimeSnapshotEnvelope = CoreEnvelope<CoreSnapshotPayload>;

export const SettingsCache =
  createModuleCacheOwner<SettingsCachePayload>("settings");
export const SettingsQueryKeys = SettingsCache.queryKeys;
export const SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY: SettingsRuntimeStateDisplayQueryKey = [
  "runtime-state",
  "display",
] as const;
export const SETTINGS_HAS_NOTCH_QUERY_KEY: SettingsHasNotchQueryKey = ["has-notch"] as const;
export const SETTINGS_HOTSPOT_ENABLED_QUERY_KEY: SettingsHotspotEnabledQueryKey = ["hotspot-enabled"] as const;
export const SETTINGS_IMAGE_COMPAT_QUERY_KEY: SettingsImageCompatQueryKey = ["imageCompat"] as const;
export const SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY: SettingsUsageRefreshIntervalQueryKey = [
  "usage-refresh-interval",
] as const;
export const SETTINGS_RUNTIME_EVENT_TARGET_QUERY_KEYS = [
  SettingsCache.queryKeys.root,
  SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY,
  SETTINGS_HAS_NOTCH_QUERY_KEY,
  SETTINGS_HOTSPOT_ENABLED_QUERY_KEY,
  SETTINGS_IMAGE_COMPAT_QUERY_KEY,
  SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY,
] as const satisfies readonly QueryKey[];

type SettingsRuntimeEventInvalidationType = "active" | "all";

interface SettingsRuntimeEventInvalidationTarget {
  queryKey: QueryKey;
  type?: SettingsRuntimeEventInvalidationType;
}

export type SettingsRuntimeEventName = "usage-refresh-schedule-reload";

export interface SettingsRuntimeEventPayloads {
  "usage-refresh-schedule-reload": {
    command?: string;
    mode: "active-only" | "full";
    receivedAt: number;
    sequence: number;
    statusCode?: string;
  };
}

// usage schedule runtime 事件只由 settings cache helper 消费，避免 initializer 直写模块裸 key。
export const SETTINGS_USAGE_SCHEDULE_RUNTIME_EVENT_CACHE_TARGETS = [
  { queryKey: SettingsCache.queryKeys.root },
  { queryKey: SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY },
] as const satisfies readonly SettingsRuntimeEventInvalidationTarget[];

export const SETTINGS_RUNTIME_EVENT_CACHE_TARGETS = {
  "usage-refresh-schedule-reload": SETTINGS_USAGE_SCHEDULE_RUNTIME_EVENT_CACHE_TARGETS,
} as const satisfies Record<
  SettingsRuntimeEventName,
  readonly SettingsRuntimeEventInvalidationTarget[]
>;
export const writeSettingsAuthoritativePayload = <
  TPayload extends SettingsCachePayload,
>(
  queryClient: QueryClient,
  envelope: Omit<SettingsCacheEnvelope<TPayload>, "moduleId">,
) => SettingsCache.writeAuthoritativePayload(queryClient, envelope);

// cache owner 统一封装 runtime snapshot 写回，mutation hook 不直接写 QueryClient。
type SettingsRuntimeSnapshotUpdater = (
  old: SettingsRuntimeSnapshotEnvelope | undefined,
) => SettingsRuntimeSnapshotEnvelope | undefined;

function writeSettingsRuntimeSnapshot(
  queryClient: QueryClient,
  updater: SettingsRuntimeSnapshotUpdater,
) {
  queryClient.setQueryData<SettingsRuntimeSnapshotEnvelope>(
    SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY,
    updater,
  );
}

export async function beginSettingsRuntimeSnapshotMutation(
  queryClient: QueryClient,
) {
  await queryClient.cancelQueries({
    queryKey: SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY,
  });
  return queryClient.getQueryData<SettingsRuntimeSnapshotEnvelope>(
    SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY,
  );
}

export function restoreSettingsRuntimeSnapshot(
  queryClient: QueryClient,
  previous: SettingsRuntimeSnapshotEnvelope | undefined,
) {
  if (!previous) return;
  queryClient.setQueryData<SettingsRuntimeSnapshotEnvelope>(
    SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY,
    previous,
  );
}

export function writeSettingsAutoSwitchOptimisticPayload(
  queryClient: QueryClient,
  enabled: boolean,
) {
  writeSettingsRuntimeSnapshot(queryClient, (old) => {
    if (!old) return old;
    const { autoSwitch } = old.data.status;
    return {
      ...old,
      data: {
        ...old.data,
        status: {
          ...old.data.status,
          autoSwitch: { ...autoSwitch, enabled },
        },
      },
    };
  });
}

export function writeSettingsAutoSwitchMutationPayload(
  queryClient: QueryClient,
  payload: AutoSwitchConfigPayload,
) {
  writeSettingsRuntimeSnapshot(queryClient, (old) => {
    if (!old) return old;
    return {
      ...old,
      data: {
        ...old.data,
        status: {
          ...old.data.status,
          autoSwitch: payload.autoSwitch,
        },
      },
    };
  });
}

export function writeSettingsApiProxyMutationPayload(
  queryClient: QueryClient,
  payload: ApiModePayload,
) {
  writeSettingsRuntimeSnapshot(queryClient, (old) => {
    if (!old) return old;
    return {
      ...old,
      data: {
        ...old.data,
        status: {
          ...old.data.status,
          api: payload.api,
        },
      },
    };
  });
}

let settingsModuleSequence = 0;
const settingsQuerySequences = new Map<string, number>();
const settingsMutationFences = new Map<string, number>();

function nextSettingsModuleSequence() {
  settingsModuleSequence += 1;
  return settingsModuleSequence;
}

function serializeSettingsQueryKey(queryKey: QueryKey) {
  return JSON.stringify(queryKey);
}

function nextSettingsQuerySequence(queryKey: QueryKey) {
  const serialized = serializeSettingsQueryKey(queryKey);
  const next = (settingsQuerySequences.get(serialized) ?? 0) + 1;
  settingsQuerySequences.set(serialized, next);
  return next;
}

function canAcceptSettingsPayload(
  queryKey: QueryKey,
  source: ModuleCacheSource,
  sequence: number,
) {
  const serialized = serializeSettingsQueryKey(queryKey);
  const latestStarted = settingsQuerySequences.get(serialized) ?? 0;
  const mutationFence = settingsMutationFences.get(serialized) ?? 0;

  if (source === "mutation-payload") {
    return sequence >= mutationFence;
  }

  return sequence >= latestStarted && sequence >= mutationFence;
}

export function beginSettingsMutation(queryKey: SettingsWritableQueryKey) {
  const sequence = nextSettingsQuerySequence(queryKey);
  const serialized = serializeSettingsQueryKey(queryKey);
  settingsMutationFences.set(
    serialized,
    Math.max(settingsMutationFences.get(serialized) ?? 0, sequence),
  );
  return sequence;
}

export function writeSettingsQueryPayload<TKey extends SettingsWritableQueryKey>(
  queryClient: QueryClient,
  queryKey: TKey,
  payload: SettingsQueryPayloadForKey<TKey>,
  options: {
    source: ModuleCacheSource;
    sequence?: number;
  },
) {
  const sequence =
    options.sequence ??
    (options.source === "mutation-payload"
      ? beginSettingsMutation(queryKey)
      : nextSettingsQuerySequence(queryKey));

  if (!canAcceptSettingsPayload(queryKey, options.source, sequence)) {
    return false;
  }

  queryClient.setQueryData<SettingsQueryPayloadForKey<TKey>>(queryKey, payload);
  writeSettingsAuthoritativePayload(queryClient, {
    payload: toSettingsCachePayload(queryKey, payload),
    source: options.source,
    sequence: nextSettingsModuleSequence(),
    receivedAt: Date.now(),
  });
  return true;
}

export async function runSettingsQuery<TKey extends SettingsWritableQueryKey>(
  queryClient: QueryClient,
  queryKey: TKey,
  load: () => Promise<SettingsQueryPayloadForKey<TKey>>,
  source: ModuleCacheSource = "full-refresh",
) {
  const sequence = nextSettingsQuerySequence(queryKey);
  const payload = await load();
  const accepted = writeSettingsQueryPayload(queryClient, queryKey, payload, {
    source,
    sequence,
  });

  if (!accepted) {
    return queryClient.getQueryData<SettingsQueryPayloadForKey<TKey>>(queryKey) ?? payload;
  }

  return payload;
}

export async function writeSettingsMutationPayload<TKey extends SettingsWritableQueryKey>(
  queryClient: QueryClient,
  queryKey: TKey,
  payload: SettingsQueryPayloadForKey<TKey>,
  sequence?: number,
) {
  const accepted = writeSettingsQueryPayload(queryClient, queryKey, payload, {
    source: "mutation-payload",
    sequence,
  });

  if (accepted) {
    await invalidateSettingsContractQueries(queryClient);
  }

  return accepted;
}

function toSettingsCachePayload<TKey extends SettingsWritableQueryKey>(
  queryKey: TKey,
  value: SettingsQueryPayloadForKey<TKey>,
): SettingsCachePayload {
  if (queryKey === SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY) {
    return {
      queryKey,
      value: value as SettingsQueryPayloadForKey<SettingsUsageRefreshIntervalQueryKey>,
    };
  }

  return {
    queryKey,
    value: value as SettingsQueryPayloadForKey<
      | SettingsHasNotchQueryKey
      | SettingsHotspotEnabledQueryKey
      | SettingsImageCompatQueryKey
    >,
  } as SettingsCachePayload;
}

export async function invalidateSettingsContractQueries(queryClient: QueryClient) {
  await Promise.all([
    SettingsCache.invalidateContractQueries(queryClient),
    queryClient.invalidateQueries({
      queryKey: SETTINGS_RUNTIME_STATE_DISPLAY_QUERY_KEY,
    }),
    queryClient.invalidateQueries({
      queryKey: SETTINGS_HAS_NOTCH_QUERY_KEY,
    }),
    queryClient.invalidateQueries({
      queryKey: SETTINGS_HOTSPOT_ENABLED_QUERY_KEY,
    }),
    queryClient.invalidateQueries({
      queryKey: SETTINGS_IMAGE_COMPAT_QUERY_KEY,
    }),
    queryClient.invalidateQueries({
      queryKey: SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY,
    }),
  ]);
}

export async function applySettingsRuntimeEventToCache<
  TEventName extends SettingsRuntimeEventName,
>(
  queryClient: QueryClient,
  eventName: TEventName,
  payload: SettingsRuntimeEventPayloads[TEventName],
) {
  await invalidateSettingsRuntimeEventTargets(
    queryClient,
    SETTINGS_RUNTIME_EVENT_CACHE_TARGETS[eventName],
    payload.mode,
  );
}

async function invalidateSettingsRuntimeEventTargets(
  queryClient: QueryClient,
  targets: readonly SettingsRuntimeEventInvalidationTarget[],
  mode: "active-only" | "full",
) {
  await Promise.all(
    targets.map((target) =>
      queryClient.invalidateQueries({
        queryKey: target.queryKey,
        type: target.type ?? (mode === "active-only" ? "active" : "all"),
      }),
    ),
  );
}
