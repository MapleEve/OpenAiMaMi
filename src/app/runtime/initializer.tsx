import { useEffect } from "react";
import { useQueryClient } from "@tanstack/react-query";
import { seedRuntimeBootstrap } from "@/app/runtime/bootstrap";
import { seedDesktopMessageBoundary } from "@/app/runtime/message";
import {
  applyRuntimeEventToQueryCache,
  normalizeBackendRuntimeEvent,
  subscribeRuntimeEvent,
} from "@/app/runtime/events";
import { api } from "@/lib/api";
import { ensureRuntimeRemoteDeviceSecret } from "@/app/runtime/secret";

export function RuntimeInitializer() {
  const queryClient = useQueryClient();

  useEffect(() => {
    seedDesktopMessageBoundary(queryClient);
  }, [queryClient]);

  useEffect(() => {
    void ensureRuntimeRemoteDeviceSecret(queryClient);
  }, [queryClient]);

  useEffect(() => {
    void seedRuntimeBootstrap(queryClient);
  }, [queryClient]);

  useEffect(() => {
    return api.subscribeRuntimeEvents((payload) => {
      const event = normalizeBackendRuntimeEvent(payload);
      if (event) {
        applyRuntimeEventToQueryCache(queryClient, event);
      }
    });
  }, [queryClient]);

  useEffect(() => {
    return subscribeRuntimeEvent((event) => {
      applyRuntimeEventToQueryCache(queryClient, event);
    });
  }, [queryClient]);

  return null;
}
