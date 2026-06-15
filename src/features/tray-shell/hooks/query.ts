import { useQuery, useQueryClient } from "@tanstack/react-query";
import { useModuleCacheController } from "@/features/_shared/controller";
import { systemService } from "@/services/system";
import {
  runTrayShellQuery,
  TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY,
  TrayShellCache,
} from "../cache";
import type { TrayShellNotificationEnvelope } from "../types";

export function useTrayShellCacheController() {
  return useModuleCacheController(TrayShellCache);
}

export function useTrayShellNotificationQuery() {
  const queryClient = useQueryClient();

  return useQuery<TrayShellNotificationEnvelope>({
    queryKey: TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY,
    queryFn: () =>
      runTrayShellQuery(
        queryClient,
        TRAY_SHELL_NOTIFICATION_CLIENT_QUERY_KEY,
        () => systemService.getNotificationClientState(),
      ),
    staleTime: 30_000,
  });
}
