import { useIsFetching, type QueryKey } from "@tanstack/react-query";
import type { Route } from "@/types/navigation";

export interface RouteHighIoFeedbackProps {
  route: Route;
  queryKeys: QueryKey[];
}

export function RouteHighIoFeedback({ queryKeys }: RouteHighIoFeedbackProps) {
  const fetchingCount = useIsFetching({
    predicate: (query) =>
      queryKeys.some((queryKey) => isQueryKeyPrefix(query.queryKey, queryKey)),
  });

  if (fetchingCount === 0) {
    return null;
  }

  return (
    <div
      aria-hidden
      className="pointer-events-none absolute right-5 top-4 z-10 h-2 w-2 rounded-full bg-primary/70 shadow-sm"
    />
  );
}

function isQueryKeyPrefix(queryKey: QueryKey, prefix: QueryKey) {
  if (prefix.length === 0 || queryKey.length < prefix.length) {
    return false;
  }

  return prefix.every((value, index) => queryKey[index] === value);
}
