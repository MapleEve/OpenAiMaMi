import type { MysteryRouteGrant } from "@/types";
import type { Route } from "@/types/navigation";
import { isAppRoute } from "@/types/navigation";

export interface MysteryRouteGateContext {
  grants?: readonly MysteryRouteGrant[] | null;
  nowMs?: number;
}

const MYSTERY_ROUTE_ALIASES: Record<string, Route> = {
  relayModel: "relay",
};

export function resolveMysteryGrantRoute(route: string): Route | null {
  const normalizedRoute = route.trim().replace(/^\/+|\/+$/g, "");
  const mappedRoute = MYSTERY_ROUTE_ALIASES[normalizedRoute] ?? normalizedRoute;
  return isAppRoute(mappedRoute) ? mappedRoute : null;
}

export function isRouteVisibleByMysteryGrant(
  route: Route,
  grants: readonly MysteryRouteGrant[] | null | undefined,
  nowMs = Date.now(),
): boolean {
  if (!grants?.length) return false;
  return grants.some((grant) => {
    const grantRoute = resolveMysteryGrantRoute(grant.route);
    return grantRoute === route && grant.epochMs >= nowMs;
  });
}

export function resolveRouteVisibility(
  route: Route,
  staticVisible: boolean,
  context?: MysteryRouteGateContext,
): boolean {
  if (!context?.grants?.length) return staticVisible;
  return staticVisible || isRouteVisibleByMysteryGrant(route, context.grants, context.nowMs);
}
