import { invokeIpc } from "@/contracts/ipc";
import type {
  CoreEnvelope,
  TrayIconWindowPayload,
  TrayLocalePayload,
  TrayMenuEventPayload,
  TrayMenuSnapshotPayload,
  TrayRelayUsageQuotaModelPayload,
} from "@/types";

export const trayService = {
  createIconWindow: () =>
    invokeIpc<CoreEnvelope<TrayIconWindowPayload>>("create_tray_icon_window"),

  createOrRefreshMenu: () =>
    invokeIpc<CoreEnvelope<TrayMenuSnapshotPayload>>(
      "create_or_refresh_tray_menu",
    ),

  handleMenuEvent: (eventId: string) =>
    invokeIpc<CoreEnvelope<TrayMenuEventPayload>>("handle_tray_menu_event", {
      eventId,
    }),

  setLocale: (language: string) =>
    invokeIpc<CoreEnvelope<TrayLocalePayload>>("set_tray_locale", { language }),

  loadRelayUsageQuotaModel: () =>
    invokeIpc<CoreEnvelope<TrayRelayUsageQuotaModelPayload>>(
      "tray_relay_usage_quota_model",
    ),
};
