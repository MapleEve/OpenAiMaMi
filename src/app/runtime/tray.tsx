import { useEffect } from "react";
import { isTauriRuntime } from "@/lib/tauri";
import { resolveRoutePath } from "@/routes/registry/registry";
import type { Route } from "@/types/navigation";

type TrayNavigationPayload =
  | string
  | {
      route?: string;
      target?: string;
      eventId?: string;
    };

const TRAY_ROUTE_MAP: Record<string, Route> = {
  main: "overview",
  overview: "overview",
  relay: "relay",
  relayModel: "relay",
};

export function TrayNavigationInitializer() {
  useEffect(() => {
    if (!isTauriRuntime()) return;

    let disposed = false;
    let unlisten: (() => void) | null = null;

    void import("@tauri-apps/api/event")
      .then(({ listen }) =>
        listen<TrayNavigationPayload>("tray:navigate", (event) => {
          if (disposed) return;

          const route = resolveTrayRoute(event.payload);
          if (route) {
            navigateHashRoute(route);
          }
        }),
      )
      .then((dispose) => {
        if (disposed) {
          dispose();
          return;
        }
        unlisten = dispose;
      })
      .catch(() => undefined);

    return () => {
      disposed = true;
      unlisten?.();
    };
  }, []);

  return null;
}

function resolveTrayRoute(payload: TrayNavigationPayload): Route | null {
  const raw =
    typeof payload === "string"
      ? payload
      : payload.route ?? payload.target ?? payload.eventId ?? "";

  return TRAY_ROUTE_MAP[raw] ?? null;
}

function navigateHashRoute(route: Route) {
  const nextHash = `#${resolveRoutePath(route)}`;
  if (window.location.hash === nextHash) {
    window.dispatchEvent(new HashChangeEvent("hashchange"));
    return;
  }

  window.location.hash = nextHash;
}
