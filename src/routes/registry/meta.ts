import type { LucideIcon } from "lucide-react";
import type { Route } from "@/types/navigation";
import {
  resolveRouteVisibility,
  type MysteryRouteGateContext,
} from "@/routes/registry/gates";
import { resolveRouteDefinition, routeDefinitions } from "@/routes/registry/registry";

export interface RouteMeta {
  route: Route;
  path: `/${string}`;
  titleKey: string;
  icon: LucideIcon;
  visible: boolean;
  redirect: Route | null;
  fillHeight: boolean;
  highIo: boolean;
}

function toRouteMeta(
  definition: (typeof routeDefinitions)[number],
  context?: MysteryRouteGateContext,
): RouteMeta {
  return {
    route: definition.route,
    path: definition.path,
    titleKey: definition.titleKey,
    icon: definition.icon,
    visible: resolveRouteVisibility(definition.route, definition.visible, context),
    redirect: definition.redirect,
    fillHeight: definition.fillHeight,
    highIo: definition.highIo,
  };
}

export function getRouteMeta(route: Route, context?: MysteryRouteGateContext): RouteMeta {
  return toRouteMeta(resolveRouteDefinition(route), context);
}

export function getVisibleRouteMeta(context?: MysteryRouteGateContext): RouteMeta[] {
  return routeDefinitions
    .filter((definition) =>
      resolveRouteVisibility(definition.route, definition.visible, context),
    )
    .map((definition) => toRouteMeta(definition, context));
}
