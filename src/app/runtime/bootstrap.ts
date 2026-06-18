import type { QueryClient } from "@tanstack/react-query";
import type { IpcJsonValue } from "@/contracts/ipc";
import {
  DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY,
  runDaemonAutoswitchQuery,
} from "@/features/daemon-autoswitch/cache";
import {
  OVERVIEW_SNAPSHOT_QUERY_KEY,
  writeOverviewQueryPayload,
} from "@/features/overview/cache";
import { api } from "@/lib/api";
import { applyRuntimeEventToQueryCache } from "./events";

let runtimeBootstrapSequence = 0;

function nextRuntimeBootstrapSequence() {
  runtimeBootstrapSequence += 1;
  return runtimeBootstrapSequence;
}

function fulfilledValue<T>(result: PromiseSettledResult<T>): T | null {
  return result.status === "fulfilled" ? result.value : null;
}

// 启动 seed 只写已有模块 cache owner，不拥有页面状态、弹窗或用户可见文案。
export async function seedRuntimeBootstrap(queryClient: QueryClient) {
  const sequence = nextRuntimeBootstrapSequence();
  const receivedAt = Date.now();
  const [bootstrapResult, snapshotResult] = await Promise.allSettled([
    runDaemonAutoswitchQuery(
      queryClient,
      DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY,
      () => api.loadBootstrapState(),
    ),
    api.loadSnapshot(true),
  ]);
  const bootstrap = fulfilledValue(bootstrapResult);
  const snapshot = fulfilledValue(snapshotResult);

  if (bootstrap) {
    queryClient.setQueryData(DAEMON_AUTOSWITCH_BOOTSTRAP_QUERY_KEY, bootstrap);
  }

  if (snapshot) {
    writeOverviewQueryPayload(queryClient, OVERVIEW_SNAPSHOT_QUERY_KEY, snapshot, {
      source: "full-refresh",
    });
  }

  if (bootstrap || snapshot) {
    applyRuntimeEventToQueryCache(queryClient, {
      type: "bootstrap:seed",
      payload: {
        bootstrap,
        snapshot,
      } as unknown as IpcJsonValue,
      sequence,
      receivedAt,
    });
  }
}
