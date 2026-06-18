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

const DAEMON_AUTOSWITCH_WRITABLE_QUERY_KEYS = [
  DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY,
  DAEMON_AUTOSWITCH_PENDING_QUERY_KEY,
] as const;

// runtime 事件只声明 payload 到模块 cache target 的映射，避免 hook 散落装配 key。
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

const daemonAutoswitchQuerySequences = new Map<string, number>();
const daemonAutoswitchMutationFences = new Map<string, number>();
let daemonAutoswitchOperationSequence = 0;

function stableDaemonAutoswitchQueryKey(queryKey: QueryKey) {
  return JSON.stringify(queryKey);
}

function nextDaemonAutoswitchOperationSequence() {
  daemonAutoswitchOperationSequence += 1;
  return daemonAutoswitchOperationSequence;
}

function reserveDaemonAutoswitchQuerySequence(queryKey: QueryKey) {
  const sequence = nextDaemonAutoswitchOperationSequence();
  const key = stableDaemonAutoswitchQueryKey(queryKey);
  daemonAutoswitchQuerySequences.set(
    key,
    Math.max(daemonAutoswitchQuerySequences.get(key) ?? 0, sequence),
  );
  return sequence;
}

function canAcceptDaemonAutoswitchPayload(
  queryKey: QueryKey,
  source: "full-refresh" | "mutation-payload",
  sequence: number,
) {
  if (source === "mutation-payload") return true;
  const key = stableDaemonAutoswitchQueryKey(queryKey);
  const latestStarted = daemonAutoswitchQuerySequences.get(key) ?? 0;
  const mutationFence = daemonAutoswitchMutationFences.get(key) ?? 0;
  return sequence >= latestStarted && sequence >= mutationFence;
}

export function beginDaemonAutoswitchMutation() {
  const sequence = nextDaemonAutoswitchOperationSequence();
  for (const queryKey of DAEMON_AUTOSWITCH_WRITABLE_QUERY_KEYS) {
    const key = stableDaemonAutoswitchQueryKey(queryKey);
    daemonAutoswitchMutationFences.set(
      key,
      Math.max(daemonAutoswitchMutationFences.get(key) ?? 0, sequence),
    );
  }
  return sequence;
}

export async function prepareDaemonAutoswitchMutation(queryClient: QueryClient) {
  const sequence = beginDaemonAutoswitchMutation();
  await Promise.all(
    DAEMON_AUTOSWITCH_WRITABLE_QUERY_KEYS.map((queryKey) =>
      queryClient.cancelQueries({ queryKey }),
    ),
  );
  return { sequence };
}

export function writeDaemonAutoswitchQueryPayload<
  TPayload extends DaemonAutoswitchCachePayload,
>(
  queryClient: QueryClient,
  queryKey: QueryKey,
  payload: TPayload,
  options: {
    source: "full-refresh" | "mutation-payload";
    sequence: number;
  },
) {
  const { source, sequence } = options;
  if (!canAcceptDaemonAutoswitchPayload(queryKey, source, sequence)) {
    return false;
  }

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
  const sequence = reserveDaemonAutoswitchQuerySequence(queryKey);
  const payload = await load();
  const accepted = writeDaemonAutoswitchQueryPayload(
    queryClient,
    queryKey,
    payload,
    {
      source: "full-refresh",
      sequence,
    },
  );
  if (!accepted) {
    return queryClient.getQueryData<TPayload>(queryKey) ?? payload;
  }
  return payload;
}

export async function writeDaemonAutoswitchMutationPayload(
  queryClient: QueryClient,
  payload: DaemonAutoswitchMutationEnvelope,
  sequence = beginDaemonAutoswitchMutation(),
) {
  const accepted = writeDaemonAutoswitchQueryPayload(
    queryClient,
    DaemonAutoswitchCache.queryKeys.root,
    payload,
    {
      source: "mutation-payload",
      sequence,
    },
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
