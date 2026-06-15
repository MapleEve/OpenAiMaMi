import type { QueryClient, QueryKey } from "@tanstack/react-query";
import { createModuleCacheOwner } from "@/features/_shared/cache";
import type { ModuleCacheEnvelope, ModuleCacheSource } from "@/features/_shared/cache";
import type { AnalyticsRange } from "@/types";
import type {
  AnalyticsCachePayload,
  AnalyticsChangeEnvelope,
  AnalyticsQuotaEnvelope,
  AnalyticsSessionEnvelope,
  AnalyticsTokenEnvelope,
  AnalyticsToolEnvelope,
  AnalyticsUsageEnvelope,
} from "../types";

export const AnalyticsCache = createModuleCacheOwner<AnalyticsCachePayload>("analytics");
export const AnalyticsQueryKeys = AnalyticsCache.queryKeys;
export const writeAnalyticsAuthoritativePayload = AnalyticsCache.writeAuthoritativePayload;
export const invalidateAnalyticsContractQueries = AnalyticsCache.invalidateContractQueries;

export const AnalyticsDumpedQueryKeys = {
  usage: ["usage-analytics"] as const,
  sessions: (range: AnalyticsRange) => ["session-analytics", range] as const,
  tokens: (range: AnalyticsRange) => ["token-analytics", range] as const,
  tools: (range: AnalyticsRange) => ["tool-analytics", range] as const,
  changes: (range: AnalyticsRange) => ["change-analytics", range] as const,
  quota: (accountKey: string | null | undefined) =>
    ["quota-history", accountKey?.trim() || "none"] as const,
};

export const AnalyticsAuthoritativeQueryKeys = {
  usage: ["analytics", "usage-analytics", "authoritative"] as const,
  sessions: (range: AnalyticsRange) =>
    ["analytics", "session-analytics", range, "authoritative"] as const,
  tokens: (range: AnalyticsRange) =>
    ["analytics", "token-analytics", range, "authoritative"] as const,
  tools: (range: AnalyticsRange) =>
    ["analytics", "tool-analytics", range, "authoritative"] as const,
  changes: (range: AnalyticsRange) =>
    ["analytics", "change-analytics", range, "authoritative"] as const,
  quota: (accountKey: string | null | undefined) =>
    ["analytics", "quota-history", accountKey?.trim() || "none", "authoritative"] as const,
};

export interface AnalyticsPanelQueryDescriptor<TPayload extends AnalyticsCachePayload> {
  dumpedQueryKey: QueryKey;
  authoritativeQueryKey: QueryKey;
  payloadType?: TPayload;
}

export const AnalyticsPanelQueryDescriptors = {
  usage: (): AnalyticsPanelQueryDescriptor<AnalyticsUsageEnvelope> => ({
    dumpedQueryKey: AnalyticsDumpedQueryKeys.usage,
    authoritativeQueryKey: AnalyticsAuthoritativeQueryKeys.usage,
  }),
  sessions: (range: AnalyticsRange): AnalyticsPanelQueryDescriptor<AnalyticsSessionEnvelope> => ({
    dumpedQueryKey: AnalyticsDumpedQueryKeys.sessions(range),
    authoritativeQueryKey: AnalyticsAuthoritativeQueryKeys.sessions(range),
  }),
  tokens: (range: AnalyticsRange): AnalyticsPanelQueryDescriptor<AnalyticsTokenEnvelope> => ({
    dumpedQueryKey: AnalyticsDumpedQueryKeys.tokens(range),
    authoritativeQueryKey: AnalyticsAuthoritativeQueryKeys.tokens(range),
  }),
  tools: (range: AnalyticsRange): AnalyticsPanelQueryDescriptor<AnalyticsToolEnvelope> => ({
    dumpedQueryKey: AnalyticsDumpedQueryKeys.tools(range),
    authoritativeQueryKey: AnalyticsAuthoritativeQueryKeys.tools(range),
  }),
  changes: (range: AnalyticsRange): AnalyticsPanelQueryDescriptor<AnalyticsChangeEnvelope> => ({
    dumpedQueryKey: AnalyticsDumpedQueryKeys.changes(range),
    authoritativeQueryKey: AnalyticsAuthoritativeQueryKeys.changes(range),
  }),
  quota: (
    accountKey: string | null | undefined,
  ): AnalyticsPanelQueryDescriptor<AnalyticsQuotaEnvelope> => ({
    dumpedQueryKey: AnalyticsDumpedQueryKeys.quota(accountKey),
    authoritativeQueryKey: AnalyticsAuthoritativeQueryKeys.quota(accountKey),
  }),
};

export interface AnalyticsPanelCacheWrite<TPayload> {
  payload: TPayload;
  source: ModuleCacheSource;
  sequence?: number;
  receivedAt?: number;
}

export type AnalyticsPanelQuerySource = Exclude<ModuleCacheSource, "mutation-payload">;

let analyticsCacheSequence = 0;
const analyticsLatestReservedSequenceByKey = new Map<string, number>();

function nextAnalyticsCacheSequence() {
  analyticsCacheSequence += 1;
  return analyticsCacheSequence;
}

function reserveAnalyticsPanelSequence(queryKey: QueryKey) {
  const sequence = nextAnalyticsCacheSequence();
  const keyId = getAnalyticsQueryKeyId(queryKey);
  const latestReservedSequence = analyticsLatestReservedSequenceByKey.get(keyId) ?? 0;
  analyticsLatestReservedSequenceByKey.set(
    keyId,
    Math.max(latestReservedSequence, sequence),
  );
  return sequence;
}

function isReservedAnalyticsPanelResponseStale(queryKey: QueryKey, sequence: number) {
  const latestReservedSequence =
    analyticsLatestReservedSequenceByKey.get(getAnalyticsQueryKeyId(queryKey)) ?? 0;
  return sequence < latestReservedSequence;
}

function getAnalyticsQueryKeyId(queryKey: QueryKey) {
  return JSON.stringify(queryKey);
}

export function readAnalyticsPanelEnvelope<TPayload extends AnalyticsCachePayload>(
  queryClient: QueryClient,
  descriptor: AnalyticsPanelQueryDescriptor<TPayload>,
) {
  return (
    queryClient.getQueryData<ModuleCacheEnvelope<TPayload>>(
      descriptor.authoritativeQueryKey,
    ) ?? null
  );
}

export async function runAnalyticsPanelQuery<TPayload extends AnalyticsCachePayload>(
  queryClient: QueryClient,
  descriptor: AnalyticsPanelQueryDescriptor<TPayload>,
  load: () => Promise<TPayload>,
  source: AnalyticsPanelQuerySource = "full-refresh",
) {
  const sequence = reserveAnalyticsPanelSequence(descriptor.authoritativeQueryKey);
  const payload = await load();
  if (isReservedAnalyticsPanelResponseStale(descriptor.authoritativeQueryKey, sequence)) {
    return readAnalyticsPanelEnvelope(queryClient, descriptor)?.payload ?? payload;
  }
  writeAnalyticsPanelPayload(queryClient, descriptor.authoritativeQueryKey, {
    payload,
    source,
    sequence,
    receivedAt: Date.now(),
  });
  return payload;
}

export function writeAnalyticsPanelPayload<TPayload extends AnalyticsCachePayload>(
  queryClient: QueryClient,
  queryKey: QueryKey,
  write: AnalyticsPanelCacheWrite<TPayload>,
) {
  const sequence = write.sequence ?? reserveAnalyticsPanelSequence(queryKey);
  const receivedAt = write.receivedAt ?? Date.now();
  const next: ModuleCacheEnvelope<TPayload> = {
    moduleId: "analytics",
    ...write,
    sequence,
    receivedAt,
    mutationFenceAt: write.source === "mutation-payload" ? receivedAt : undefined,
  };

  queryClient.setQueryData<ModuleCacheEnvelope<AnalyticsCachePayload>>(
    queryKey,
    (current) => {
      if (isStaleEnvelope(current, next)) return current;
      return {
        ...next,
        mutationFenceAt: next.mutationFenceAt ?? current?.mutationFenceAt,
      };
    },
  );

  return next;
}

export function fenceAnalyticsPanelPayload<TPayload>(
  queryClient: QueryClient,
  queryKey: QueryKey,
  mutationEnvelope: ModuleCacheEnvelope<TPayload>,
) {
  queryClient.setQueryData<ModuleCacheEnvelope<AnalyticsCachePayload>>(queryKey, (current) => {
    if (!current) {
      return {
        ...mutationEnvelope,
        payload: null,
      };
    }
    return {
      ...current,
      sequence: Math.max(current.sequence, mutationEnvelope.sequence),
      mutationFenceAt: mutationEnvelope.receivedAt,
    };
  });
}

function isStaleEnvelope(
  current: ModuleCacheEnvelope<AnalyticsCachePayload> | undefined,
  next: ModuleCacheEnvelope<AnalyticsCachePayload>,
) {
  if (!current) return false;
  if (next.sequence < current.sequence) return true;
  if (
    current.mutationFenceAt &&
    next.source !== "mutation-payload" &&
    next.receivedAt < current.mutationFenceAt
  ) {
    return true;
  }
  return next.source === "replay" && next.receivedAt <= current.receivedAt;
}
