import { useMutation, useQueryClient } from "@tanstack/react-query";
import { systemService } from "@/services/system";
import {
  invalidateTrayShellCommandAckFence,
  prepareTrayShellCommandAckFence,
} from "../cache";
import type { TrayShellActionModel } from "../types";

export function useTrayShellFocusMainWindowMutation() {
  const queryClient = useQueryClient();

  return useMutation({
    mutationFn: () => systemService.focusMainWindow(),
    onMutate: () => prepareTrayShellCommandAckFence(queryClient),
    onSuccess: async () => {
      await invalidateTrayShellCommandAckFence(queryClient);
    },
  });
}

export function useTrayShellFocusMainWindowAction(): TrayShellActionModel {
  const focusMutation = useTrayShellFocusMainWindowMutation();

  return {
    id: "focus-main-window",
    labelKey: "trayShell.focusMainWindow",
    displayKey: "tray.openMain",
    run: () => focusMutation.mutateAsync(),
    isPending: focusMutation.isPending,
  };
}
