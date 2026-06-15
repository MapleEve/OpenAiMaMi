import {
  runtimeExtensionsService,
  type RuntimeExtensionConfigEnvelope,
  type RuntimeExtensionListEnvelope,
  type RuntimeExtensionSettings,
  type RuntimeExtensionToggleEnvelope,
} from "@/services/runtime-extensions";

export type PluginSettingsPayload = RuntimeExtensionSettings;
export type PluginsListEnvelope = RuntimeExtensionListEnvelope;
export type PluginsToggleEnvelope = RuntimeExtensionToggleEnvelope;
export type PluginsConfigEnvelope = RuntimeExtensionConfigEnvelope;
export type PluginsMutationEnvelope =
  | PluginsToggleEnvelope
  | PluginsConfigEnvelope;

export const pluginsService = {
  list: () => runtimeExtensionsService.listPlugins(),

  toggle: (id: string, enabled: boolean) =>
    runtimeExtensionsService.togglePlugin(id, enabled),

  getConfig: (id: string) =>
    runtimeExtensionsService.getPluginConfig(id),

  updateConfig: (id: string, settings: PluginSettingsPayload) =>
    runtimeExtensionsService.updatePluginConfig(id, settings),
};
