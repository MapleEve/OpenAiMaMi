import { useQuery, useQueryClient } from "@tanstack/react-query";
import { useModuleCacheController } from "@/features/_shared/controller";
import { analyticsService } from "@/services/analytics";
import type { AnalyticsRange } from "@/types";
import {
  AnalyticsCache,
  AnalyticsPanelQueryDescriptors,
  readAnalyticsPanelEnvelope,
  runAnalyticsPanelQuery,
} from "../cache";
import type {
  AnalyticsCacheEnvelope,
  AnalyticsChangeEnvelope,
  AnalyticsModuleOptions,
  AnalyticsQuotaEnvelope,
  AnalyticsSessionEnvelope,
  AnalyticsTokenEnvelope,
  AnalyticsToolEnvelope,
  AnalyticsUsageEnvelope,
} from "../types";

export const ANALYTICS_QUERY_POLICY = {
  staleTime: 5 * 60_000,
  refetchOnMount: false,
  refetchOnWindowFocus: false,
} as const;

export function useAnalyticsCacheController() {
  return useModuleCacheController(AnalyticsCache);
}

export function useAnalyticsModule(
  range: AnalyticsRange = "week",
  options: AnalyticsModuleOptions = {},
) {
  const queryClient = useQueryClient();
  const activePanel = options.activePanel ?? "activity";
  const quotaAccountKey = options.quotaAccountKey?.trim() ?? "";
  const queriesEnabled = options.queriesEnabled ?? true;
  const usagePanelQuery = AnalyticsPanelQueryDescriptors.usage();
  const sessionPanelQuery = AnalyticsPanelQueryDescriptors.sessions(range);
  const tokenPanelQuery = AnalyticsPanelQueryDescriptors.tokens(range);
  const toolPanelQuery = AnalyticsPanelQueryDescriptors.tools(range);
  const changePanelQuery = AnalyticsPanelQueryDescriptors.changes(range);
  const quotaPanelQuery = AnalyticsPanelQueryDescriptors.quota(quotaAccountKey);

  const usageEnvelopeQuery = useQuery<AnalyticsCacheEnvelope<AnalyticsUsageEnvelope> | null>({
    queryKey: usagePanelQuery.authoritativeQueryKey,
    queryFn: () => readAnalyticsPanelEnvelope(queryClient, usagePanelQuery),
    enabled: false,
    staleTime: Infinity,
    gcTime: Infinity,
  });
  const sessionEnvelopeQuery = useQuery<AnalyticsCacheEnvelope<AnalyticsSessionEnvelope> | null>({
    queryKey: sessionPanelQuery.authoritativeQueryKey,
    queryFn: () => readAnalyticsPanelEnvelope(queryClient, sessionPanelQuery),
    enabled: false,
    staleTime: Infinity,
    gcTime: Infinity,
  });
  const tokenEnvelopeQuery = useQuery<AnalyticsCacheEnvelope<AnalyticsTokenEnvelope> | null>({
    queryKey: tokenPanelQuery.authoritativeQueryKey,
    queryFn: () => readAnalyticsPanelEnvelope(queryClient, tokenPanelQuery),
    enabled: false,
    staleTime: Infinity,
    gcTime: Infinity,
  });
  const toolEnvelopeQuery = useQuery<AnalyticsCacheEnvelope<AnalyticsToolEnvelope> | null>({
    queryKey: toolPanelQuery.authoritativeQueryKey,
    queryFn: () => readAnalyticsPanelEnvelope(queryClient, toolPanelQuery),
    enabled: false,
    staleTime: Infinity,
    gcTime: Infinity,
  });
  const changeEnvelopeQuery = useQuery<AnalyticsCacheEnvelope<AnalyticsChangeEnvelope> | null>({
    queryKey: changePanelQuery.authoritativeQueryKey,
    queryFn: () => readAnalyticsPanelEnvelope(queryClient, changePanelQuery),
    enabled: false,
    staleTime: Infinity,
    gcTime: Infinity,
  });
  const quotaEnvelopeQuery = useQuery<AnalyticsCacheEnvelope<AnalyticsQuotaEnvelope> | null>({
    queryKey: quotaPanelQuery.authoritativeQueryKey,
    queryFn: () => readAnalyticsPanelEnvelope(queryClient, quotaPanelQuery),
    enabled: false,
    staleTime: Infinity,
    gcTime: Infinity,
  });

  const usageQuery = useQuery({
    queryKey: usagePanelQuery.dumpedQueryKey,
    queryFn: () =>
      runAnalyticsPanelQuery(queryClient, usagePanelQuery, () =>
        analyticsService.loadUsageAnalytics(),
      ),
    enabled: queriesEnabled && activePanel === "activity",
    staleTime: Infinity,
  });
  const sessionQuery = useQuery({
    queryKey: sessionPanelQuery.dumpedQueryKey,
    queryFn: () =>
      runAnalyticsPanelQuery(queryClient, sessionPanelQuery, () =>
        analyticsService.loadSessionAnalytics(range),
      ),
    enabled: queriesEnabled && activePanel === "sessions",
    ...ANALYTICS_QUERY_POLICY,
  });
  const tokenQuery = useQuery({
    queryKey: tokenPanelQuery.dumpedQueryKey,
    queryFn: () =>
      runAnalyticsPanelQuery(queryClient, tokenPanelQuery, () =>
        analyticsService.loadTokenAnalytics(range),
      ),
    enabled: queriesEnabled && activePanel === "token",
    ...ANALYTICS_QUERY_POLICY,
  });
  const toolQuery = useQuery({
    queryKey: toolPanelQuery.dumpedQueryKey,
    queryFn: () =>
      runAnalyticsPanelQuery(queryClient, toolPanelQuery, () =>
        analyticsService.loadToolAnalytics(range),
      ),
    enabled: queriesEnabled && activePanel === "tools",
    ...ANALYTICS_QUERY_POLICY,
  });
  const changeQuery = useQuery({
    queryKey: changePanelQuery.dumpedQueryKey,
    queryFn: () =>
      runAnalyticsPanelQuery(queryClient, changePanelQuery, () =>
        analyticsService.loadChangeAnalytics(range),
      ),
    enabled: queriesEnabled && activePanel === "changes",
    ...ANALYTICS_QUERY_POLICY,
  });
  const quotaQuery = useQuery({
    queryKey: quotaPanelQuery.dumpedQueryKey,
    queryFn: () =>
      runAnalyticsPanelQuery(queryClient, quotaPanelQuery, () =>
        analyticsService.loadQuotaHistory(quotaAccountKey),
      ),
    enabled: queriesEnabled && activePanel === "quota" && quotaAccountKey.length > 0,
    staleTime: 60_000,
    refetchOnMount: false,
    refetchOnWindowFocus: false,
  });

  return {
    activePanel,
    usageEnvelope: usageEnvelopeQuery.data,
    sessionEnvelope: sessionEnvelopeQuery.data,
    tokenEnvelope: tokenEnvelopeQuery.data,
    toolEnvelope: toolEnvelopeQuery.data,
    changeEnvelope: changeEnvelopeQuery.data,
    quotaEnvelope: quotaEnvelopeQuery.data,
    usageQuery,
    sessionQuery,
    tokenQuery,
    toolQuery,
    changeQuery,
    quotaQuery,
  };
}
