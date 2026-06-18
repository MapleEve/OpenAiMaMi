import { useMutation, useQueryClient } from "@tanstack/react-query";
import { mcpService, type UpsertMcpServerInput } from "@/services/mcp";
import {
  prepareMcpMutation,
  writeMcpMutationPayload,
} from "../cache";

export type { UpsertMcpServerInput } from "@/services/mcp";

export function useMcpServerMutations(options?: { onRemoved?: () => void }) {
  const queryClient = useQueryClient();

  const toggleMutation = useMutation({
    mutationFn: ({ name, enabled }: { name: string; enabled: boolean }) =>
      mcpService.setServerEnabled(name, enabled),
    onMutate: () => prepareMcpMutation(queryClient),
    onSuccess: (payload, _variables, context) =>
      writeMcpMutationPayload(queryClient, payload, context),
  });

  const removeMutation = useMutation({
    mutationFn: (name: string) => mcpService.removeServer(name),
    onMutate: () => prepareMcpMutation(queryClient),
    onSuccess: async (payload, _variables, context) => {
      await writeMcpMutationPayload(queryClient, payload, context);
      options?.onRemoved?.();
    },
  });

  return {
    toggleMutation,
    removeMutation,
  };
}

export function useUpsertMcpServerMutation(options?: { onSaved?: () => void }) {
  const queryClient = useQueryClient();

  return useMutation({
    mutationFn: (input: UpsertMcpServerInput) => mcpService.upsertServer(input),
    onMutate: () => prepareMcpMutation(queryClient),
    onSuccess: async (payload, _variables, context) => {
      await writeMcpMutationPayload(queryClient, payload, context);
      options?.onSaved?.();
    },
  });
}
