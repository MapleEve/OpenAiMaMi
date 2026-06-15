import { useEffect } from "react";
import { useQueryClient } from "@tanstack/react-query";
import { daemonAutoswitchService } from "@/services/daemon-autoswitch";
import { applyDaemonAutoswitchRuntimeEventToCache } from "../cache";
import type { DaemonAutoswitchRuntimeController } from "../types";

export function useDaemonAutoswitchRuntimeSubscriptions(): DaemonAutoswitchRuntimeController {
  const queryClient = useQueryClient();

  useEffect(() => {
    return daemonAutoswitchService.subscribePendingAutoSwitch((payload) => {
      void applyDaemonAutoswitchRuntimeEventToCache(
        queryClient,
        "auto-switch-pending",
        payload,
      );
    });
  }, [queryClient]);

  return {
    pendingAutoSwitchSubscribed: true,
  };
}
