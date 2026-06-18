import { useMutation, useQueryClient } from "@tanstack/react-query";
import { skillsService } from "@/services/skills";
import {
  prepareSkillsMutation,
  writeSkillsMutationPayload,
} from "../cache";

export interface UseSkillsPageMutationsOptions {
  onRemoved?: () => void;
  onBackupDeleted?: () => void;
}

export function useSkillsPageMutations(
  options?: UseSkillsPageMutationsOptions,
) {
  const queryClient = useQueryClient();

  const importMutation = useMutation({
    mutationFn: async () => {
      const path = await skillsService.pickSkillDirectory();
      if (path) return skillsService.importSkill(path);
      return null;
    },
    onMutate: () => prepareSkillsMutation(queryClient),
    onSuccess: (payload, _variables, context) => {
      if (payload) {
        return writeSkillsMutationPayload(queryClient, payload, context);
      }
    },
  });

  const removeMutation = useMutation({
    mutationFn: (id: string) => skillsService.removeSkill(id),
    onMutate: () => prepareSkillsMutation(queryClient),
    onSuccess: async (payload, _variables, context) => {
      await writeSkillsMutationPayload(queryClient, payload, context);
      options?.onRemoved?.();
    },
  });

  const restoreMutation = useMutation({
    mutationFn: (id: string) => skillsService.restoreBackup(id),
    onMutate: () => prepareSkillsMutation(queryClient),
    onSuccess: (payload, _variables, context) =>
      writeSkillsMutationPayload(queryClient, payload, context),
  });

  const deleteBackupMutation = useMutation({
    mutationFn: (id: string) => skillsService.deleteBackup(id),
    onMutate: () => prepareSkillsMutation(queryClient),
    onSuccess: async (payload, _variables, context) => {
      await writeSkillsMutationPayload(queryClient, payload, context);
      options?.onBackupDeleted?.();
    },
  });

  return {
    importMutation,
    removeMutation,
    restoreMutation,
    deleteBackupMutation,
  };
}
