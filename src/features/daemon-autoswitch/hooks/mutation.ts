import { useMutation, useQueryClient, type QueryClient } from "@tanstack/react-query";
import { daemonAutoswitchService } from "@/services/daemon-autoswitch";
import {
  invalidateDaemonAutoswitchContractQueries,
  prepareDaemonAutoswitchMutation,
  writeDaemonAutoswitchMutationPayload,
} from "../cache";
import type { DaemonAutoswitchPageMutations } from "../types";

function cancelDaemonAutoswitchQueries(queryClient: QueryClient) {
  return prepareDaemonAutoswitchMutation(queryClient);
}

async function reloadDaemonAutoswitchAfterMutation(
  queryClient: QueryClient,
) {
  await invalidateDaemonAutoswitchContractQueries(queryClient);
}

export function useDaemonAutoswitchPageMutations(): DaemonAutoswitchPageMutations {
  const queryClient = useQueryClient();

  const runOnceMutation = useMutation({
    mutationFn: () => daemonAutoswitchService.runDaemonOnce(),
    onMutate: () => cancelDaemonAutoswitchQueries(queryClient),
    onSuccess: (payload, _variables, context) =>
      writeDaemonAutoswitchMutationPayload(
        queryClient,
        payload,
        context?.sequence,
      ),
  });

  const setAutoSwitchMutation = useMutation({
    mutationFn: (enabled: boolean) => daemonAutoswitchService.setAutoSwitch(enabled),
    onMutate: () => cancelDaemonAutoswitchQueries(queryClient),
    onSuccess: (payload, _variables, context) =>
      writeDaemonAutoswitchMutationPayload(
        queryClient,
        payload,
        context?.sequence,
      ),
  });

  const dismissPendingMutation = useMutation({
    mutationFn: () => daemonAutoswitchService.dismissPendingAutoSwitch(),
    onMutate: () => cancelDaemonAutoswitchQueries(queryClient),
    onSuccess: (payload, _variables, context) =>
      writeDaemonAutoswitchMutationPayload(
        queryClient,
        payload,
        context?.sequence,
      ),
  });

  const confirmPendingAndRestartMutation = useMutation({
    mutationFn: () =>
      daemonAutoswitchService.confirmPendingAutoSwitchAndRestartCodex(),
    onMutate: () => cancelDaemonAutoswitchQueries(queryClient),
    onSuccess: () => reloadDaemonAutoswitchAfterMutation(queryClient),
  });

  return {
    runOnceMutation,
    setAutoSwitchMutation,
    dismissPendingMutation,
    confirmPendingAndRestartMutation,
  };
}
