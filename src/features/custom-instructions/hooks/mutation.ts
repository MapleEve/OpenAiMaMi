import { useMutation, useQueryClient } from "@tanstack/react-query";
import {
  customInstructionsService,
  type ApplyCustomInstructionParams,
} from "@/services/custom-instructions";
import type {
  CustomInstructionPreviewPayload,
  CustomInstructionStatePayload,
} from "@/types";
import {
  prepareCustomInstructionsMutation,
  writeCustomInstructionsStateMutationPayload,
} from "../cache";

export type CustomInstructionApplyInput = ApplyCustomInstructionParams;

interface CustomInstructionMutationOptions {
  onPreviewed: (payload: CustomInstructionPreviewPayload) => void;
  onPreviewError: (error: unknown) => void;
  onApplied: (payload: CustomInstructionStatePayload) => void;
  onApplyError: (error: unknown) => void;
  onCleared: (payload: CustomInstructionStatePayload) => void;
  onClearError: (error: unknown) => void;
  onRolledBack: (payload: CustomInstructionStatePayload) => void;
  onRollbackError: (error: unknown) => void;
}

export function useCustomInstructionMutations(
  options: CustomInstructionMutationOptions,
) {
  const queryClient = useQueryClient();

  const previewMutation = useMutation({
    mutationFn: (content: string) => customInstructionsService.previewApply(content),
    onSuccess: async (payload) => {
      options.onPreviewed(payload);
    },
    onError: options.onPreviewError,
  });

  const applyMutation = useMutation({
    mutationFn: (params: CustomInstructionApplyInput) =>
      customInstructionsService.apply(params),
    onMutate: () => prepareCustomInstructionsMutation(queryClient),
    onSuccess: async (payload, _variables, context) => {
      await writeCustomInstructionsStateMutationPayload(
        queryClient,
        payload,
        context,
      );
      options.onApplied(payload);
    },
    onError: options.onApplyError,
  });

  const clearMutation = useMutation({
    mutationFn: () => customInstructionsService.clearBlock(),
    onMutate: () => prepareCustomInstructionsMutation(queryClient),
    onSuccess: async (payload, _variables, context) => {
      await writeCustomInstructionsStateMutationPayload(
        queryClient,
        payload,
        context,
      );
      options.onCleared(payload);
    },
    onError: options.onClearError,
  });

  const rollbackMutation = useMutation({
    mutationFn: (historyId: string) =>
      customInstructionsService.rollback(historyId),
    onMutate: () => prepareCustomInstructionsMutation(queryClient),
    onSuccess: async (payload, _variables, context) => {
      await writeCustomInstructionsStateMutationPayload(
        queryClient,
        payload,
        context,
      );
      options.onRolledBack(payload);
    },
    onError: options.onRollbackError,
  });

  return {
    previewMutation,
    applyMutation,
    clearMutation,
    rollbackMutation,
  };
}
