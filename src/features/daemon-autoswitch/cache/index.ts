import type { QueryClient, QueryKey } from "@tanstack/react-query";
import { invalidateAccountsDumpedQueries } from "@/features/accounts/cache";
import { createModuleCacheOwner } from "@/features/_shared/cache";
import type { PendingAutoSwitchStatePayload } from "@/types";
import type {
  DaemonAutoswitchCacheEnvelope,
  DaemonAutoswitchCachePayload,
  DaemonAutoswitchMutationEnvelope,
} from "../types";

export const DaemonAutoswitchCache =
  createModuleCacheOwner<DaemonAutoswitchCachePayload>("daemon-autoswitch");
export const DaemonAutoswitchQueryKeys = DaemonAutoswitchCache.queryKeys;
export const DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY = [
  ...DaemonAutoswitchCache.queryKeys.root,
  "bootstrap",
] as const;
export const DAEMON_AUTOSWITCH_PENDING_QUERY_KEY = [
  ...DaemonAutoswitchCache.queryKeys.root,
  "pending",
] as const;

type DaemonAutoswitchQueryInvalidationType = "active" | "all";

interface DaemonAutoswitchQueryInvalidationTarget {
  queryKey: QueryKey;
  type?: DaemonAutoswitchQueryInvalidationType;
}

export type DaemonAutoswitchRuntimeEventName = "auto-switch-pending";

export interface DaemonAutoswitchRuntimeEventPayloads {
  "auto-switch-pending": PendingAutoSwitchStatePayload;
}

export const DAEMON_AUTOSWITCH_CONTRACT_QUERY_TARGETS = [
  { queryKey: DaemonAutoswitchCache.queryKeys.root },
  { queryKey: DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY },
  { queryKey: DAEMON_AUTOSWITCH_PENDING_QUERY_KEY },
] as const satisfies readonly DaemonAutoswitchQueryInvalidationTarget[];

// runtime 事件只声明 payload 到模块 cache target 的映射，避免 hook 散落裸 key。
export const DAEMON_AUTOSWITCH_RUNTIME_EVENT_CACHE_TARGETS = {
  "auto-switch-pending": [
    ...DAEMON_AUTOSWITCH_CONTRACT_QUERY_TARGETS,
    { queryKey: DAEMON_AUTOSWITCH_PENDING_QUERY_KEY, type: "active" },
  ],
} as const satisfies Record<
  DaemonAutoswitchRuntimeEventName,
  readonly DaemonAutoswitchQueryInvalidationTarget[]
>;

export const writeDaemonAutoswitchAuthoritativePayload = <
  TPayload extends DaemonAutoswitchCachePayload,
>(
  queryClient: QueryClient,
  envelope: Omit<DaemonAutoswitchCacheEnvelope<TPayload>, "moduleId">,
) => DaemonAutoswitchCache.writeAuthoritativePayload(queryClient, envelope);

let daemonAutoswitchCacheSequence = 0;
let daemonAutoswitchLatestAcceptedSequence = 0;

export function nextDaemonAutoswitchCacheSequence() {
  daemonAutoswitchCacheSequence += 1;
  return daemonAutoswitchCacheSequence;
}

export function writeDaemonAutoswitchCachePayload<
  TPayload extends DaemonAutoswitchCachePayload,
>(
  queryClient: QueryClient,
  payload: TPayload,
  source: "full-refresh" | "mutation-payload",
  sequence: number,
) {
  if (sequence < daemonAutoswitchLatestAcceptedSequence) {
    return false;
  }

  daemonAutoswitchLatestAcceptedSequence = sequence;
  writeDaemonAutoswitchAuthoritativePayload(queryClient, {
    payload,
    source,
    sequence,
    receivedAt: Date.now(),
  });
  return true;
}

export async function runDaemonAutoswitchQuery<
  TPayload extends DaemonAutoswitchCachePayload,
>(
  queryClient: QueryClient,
  queryKey: QueryKey,
  load: () => Promise<TPayload>,
) {
  const sequence = nextDaemonAutoswitchCacheSequence();
  const payload = await load();
  const accepted = writeDaemonAutoswitchCachePayload(
    queryClient,
    payload,
    "full-refresh",
    sequence,
  );
  if (!accepted) {
    return queryClient.getQueryData<TPayload>(queryKey) ?? payload;
  }
  return payload;
}

export async function writeDaemonAutoswitchMutationPayload(
  queryClient: QueryClient,
  payload: DaemonAutoswitchMutationEnvelope,
) {
  const accepted = writeDaemonAutoswitchCachePayload(
    queryClient,
    payload,
    "mutation-payload",
    nextDaemonAutoswitchCacheSequence(),
  );
  if (!accepted) return;

  await invalidateDaemonAutoswitchContractQueries(queryClient);
  await invalidateDaemonAutoswitchCrossModuleQueries(queryClient);
}

export async function invalidateDaemonAutoswitchContractQueries(
  queryClient: QueryClient,
) {
  await invalidateDaemonAutoswitchQueryTargets(
    queryClient,
    DAEMON_AUTOSWITCH_CONTRACT_QUERY_TARGETS,
  );
}

export async function invalidateDaemonAutoswitchCrossModuleQueries(
  queryClient: QueryClient,
) {
  await invalidateAccountsDumpedQueries(queryClient);
}

export async function applyDaemonAutoswitchRuntimeEventToCache<
  TEventName extends DaemonAutoswitchRuntimeEventName,
>(
  queryClient: QueryClient,
  eventName: TEventName,
  _payload: DaemonAutoswitchRuntimeEventPayloads[TEventName],
) {
  await invalidateDaemonAutoswitchQueryTargets(
    queryClient,
    DAEMON_AUTOSWITCH_RUNTIME_EVENT_CACHE_TARGETS[eventName],
  );
}

async function invalidateDaemonAutoswitchQueryTargets(
  queryClient: QueryClient,
  targets: readonly DaemonAutoswitchQueryInvalidationTarget[],
) {
  await Promise.all(
    targets.map((target) =>
      queryClient.invalidateQueries({
        queryKey: target.queryKey,
        type: target.type ?? "all",
      }),
    ),
  );
}
