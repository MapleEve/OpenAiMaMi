import { useEffect } from "react";
import { useDeferredReady } from "@/hooks/deferred";
import type { MysteryRouteGateContext } from "@/routes/registry/gates";
import { preloadVisibleRoutes } from "@/routes/registry/preload";

export function useRoutePrewarm(context?: MysteryRouteGateContext) {
  const prewarmRoutes = useDeferredReady(900);

  useEffect(() => {
    if (prewarmRoutes) {
      void preloadVisibleRoutes(context);
    }
  }, [context, prewarmRoutes]);
}
