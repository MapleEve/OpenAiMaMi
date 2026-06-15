import type { QueryClient, QueryKey } from "@tanstack/react-query";
import { createModuleCacheOwner } from "@/features/_shared/cache";
import type { ModuleCacheSource } from "@/features/_shared/cache";
import type { TrayShellCacheEnvelope, TrayShellCachePayload } from "../types";

export const TrayShellCache =
  createModuleCacheOwner<TrayShellCachePayload>("tray-shell");
export const TrayShellQueryKeys = TrayShellCache.queryKeys;
export const TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY = [
  ...TrayShellQueryKeys.root,
  "notification-client",
] as const;
export const writeTrayShellAuthoritativePayload = <
  TPayload extends TrayShellCachePayload,
>(
  queryClient: QueryClient,
  envelope: Omit<TrayShellCacheEnvelope<TPayload>, "moduleId">,
) => TrayShellCache.writeAuthoritativePayload(queryClient, envelope);
export const invalidateTrayShellContractQueries =
  TrayShellCache.invalidateContractQueries;

let trayShellModuleSequence = 0;
const trayShellQuerySequences = new Map<string, number>();
const trayShellMutationFences = new Map<string, number>();

function nextTrayShellModuleSequence() {
  trayShellModuleSequence += 1;
  return trayShellModuleSequence;
}

function serializeTrayShellQueryKey(queryKey: QueryKey) {
  return JSON.stringify(queryKey);
}

function nextTrayShellQuerySequence(queryKey: QueryKey) {
  const serialized = serializeTrayShellQueryKey(queryKey);
  const next = (trayShellQuerySequences.get(serialized) ?? 0) + 1;
  trayShellQuerySequences.set(serialized, next);
  return next;
}

function canAcceptTrayShellPayload(
  queryKey: QueryKey,
  source: ModuleCacheSource,
  sequence: number,
) {
  const serialized = serializeTrayShellQueryKey(queryKey);
  const latestStarted = trayShellQuerySequences.get(serialized) ?? 0;
  const mutationFence = trayShellMutationFences.get(serialized) ?? 0;

  if (source === "mutation-payload") {
    return sequence >= mutationFence;
  }

  return sequence >= latestStarted && sequence >= mutationFence;
}

function beginTrayShellCommandFence(queryKey: QueryKey) {
  const sequence = nextTrayShellQuerySequence(queryKey);
  const serialized = serializeTrayShellQueryKey(queryKey);
  trayShellMutationFences.set(
    serialized,
    Math.max(trayShellMutationFences.get(serialized) ?? 0, sequence),
  );
  return sequence;
}

export interface TrayShellPreparedCommandFence {
  sequences: Array<{
    queryKey: QueryKey;
    sequence: number;
  }>;
}

// 聚焦主窗口命令只有确认结果，没有权威业务载荷；这里仅建立取消与序列栅栏。
export async function prepareTrayShellCommandAckFence(
  queryClient: QueryClient,
): Promise<TrayShellPreparedCommandFence> {
  const queryKeys = [TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY];
  const sequences = queryKeys.map((queryKey) => ({
    queryKey,
    sequence: beginTrayShellCommandFence(queryKey),
  }));

  await Promise.all(
    queryKeys.map((queryKey) => queryClient.cancelQueries({ queryKey })),
  );

  return { sequences };
}

export function writeTrayShellQueryPayload<TPayload extends TrayShellCachePayload>(
  queryClient: QueryClient,
  queryKey: QueryKey,
  payload: TPayload,
  options: {
    source: ModuleCacheSource;
    sequence?: number;
  },
) {
  const sequence =
    options.sequence ??
    (options.source === "mutation-payload"
      ? beginTrayShellCommandFence(queryKey)
      : nextTrayShellQuerySequence(queryKey));

  if (!canAcceptTrayShellPayload(queryKey, options.source, sequence)) {
    return false;
  }

  queryClient.setQueryData<TPayload>(queryKey, payload);
  writeTrayShellAuthoritativePayload(queryClient, {
    payload,
    source: options.source,
    sequence: nextTrayShellModuleSequence(),
    receivedAt: Date.now(),
  });
  return true;
}

export async function runTrayShellQuery<TPayload extends TrayShellCachePayload>(
  queryClient: QueryClient,
  queryKey: QueryKey,
  load: () => Promise<TPayload>,
  source: ModuleCacheSource = "full-refresh",
) {
  const sequence = nextTrayShellQuerySequence(queryKey);
  const payload = await load();
  const accepted = writeTrayShellQueryPayload(queryClient, queryKey, payload, {
    source,
    sequence,
  });

  if (!accepted) {
    return queryClient.getQueryData<TPayload>(queryKey) ?? payload;
  }

  return payload;
}

export async function invalidateTrayShellCommandAckFence(
  queryClient: QueryClient,
) {
  await invalidateTrayShellContractQueries(queryClient);
}
