import type { Route } from "@/types/navigation";
import {
  resolveRouteVisibility,
  type MysteryRouteGateContext,
} from "@/routes/registry/gates";
import { resolveRouteDefinition, routeDefinitions } from "@/routes/registry/registry";

export function preloadRoute(route: Route) {
  return resolveRouteDefinition(route).preload();
}

export function preloadVisibleRoutes(context?: MysteryRouteGateContext) {
  return Promise.allSettled(
    routeDefinitions
      .filter((definition) =>
        resolveRouteVisibility(definition.route, definition.visible, context),
      )
      .map((definition) => definition.preload()),
  );
}
