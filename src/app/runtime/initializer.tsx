import { useEffect } from "react";
import { useQueryClient } from "@tanstack/react-query";
import { seedRuntimeBootstrap } from "@/app/runtime/bootstrap";
import { seedDesktopMessageBoundary } from "@/app/runtime/message";
import {
  applyRuntimeEventToQueryCache,
  subscribeRuntimeEvent,
} from "@/app/runtime/events";
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
    return subscribeRuntimeEvent((event) => {
      applyRuntimeEventToQueryCache(queryClient, event);
    });
  }, [queryClient]);

  return null;
}
