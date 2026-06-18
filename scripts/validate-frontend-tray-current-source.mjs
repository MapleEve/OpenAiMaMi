import { existsSync, readFileSync } from "node:fs";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const failures = [];

const gateReport =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/gate-report.json";
const frontendChain =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-tray/frontend/FRONTEND-FULL-CHAIN-109.md";
const acceptedTargets = [
  "create_tray_icon_window",
  "create_or_refresh_tray_menu",
  "handle_tray_menu_event",
  "tray_relay_usage_quota_model",
];

function repoPath(path) {
  return join(repoRoot, path);
}

function readText(path) {
  const fullPath = repoPath(path);
  if (!existsSync(fullPath)) {
    failures.push(`缺少文件：${path}`);
    return "";
  }
  return readFileSync(fullPath, "utf8");
}

function readJson(path) {
  const text = readText(path);
  if (!text) return null;
  try {
    return JSON.parse(text);
  } catch (error) {
    failures.push(`${path} 不是合法 JSON：${error.message}`);
    return null;
  }
}

function requireIncludes(path, snippets) {
  const text = readText(path);
  for (const snippet of snippets) {
    if (!text.includes(snippet)) {
      failures.push(`${path} 缺少片段：${snippet}`);
    }
  }
}

const gate = readJson(gateReport);
if (gate) {
  if (gate.status !== "accepted_full_leaf_100_windows_ida") {
    failures.push(`${gateReport} status=${String(gate.status)}`);
  }
  for (const target of acceptedTargets) {
    if (!gate.acceptedTargets?.includes(target)) {
      failures.push(`${gateReport} acceptedTargets 缺少 ${target}`);
    }
  }
  const routerDelta = gate.productDelta?.find?.(
    (item) => item.id === "tray_router_open",
  );
  if (
    routerDelta?.status !==
    "source archive_extra_classifier_not_upstream_windows_menu_item"
  ) {
    failures.push(`${gateReport} 缺少 tray_router_open 当前源码额外路径边界`);
  }
}

requireIncludes(frontendChain, [
  "tray:navigate",
  "handle_tray_menu_event",
  "set_tray_locale",
  "tray_router_open",
]);

requireIncludes("src/services/tray/index.ts", [
  "handle_tray_menu_event",
  "set_tray_locale",
  "tray_relay_usage_quota_model",
]);
requireIncludes("src/services/index.ts", ["trayService"]);
requireIncludes("src/lib/api.ts", [
  "handleTrayMenuEvent: trayService.handleMenuEvent",
  "setTrayLocale: trayService.setLocale",
  "loadTrayRelayUsageQuotaModel: trayService.loadRelayUsageQuotaModel",
]);
requireIncludes("src/contracts/ipc/commands.ts", [
  "\"domain\": \"tray\"",
  "\"command\": \"handle_tray_menu_event\"",
  "\"command\": \"set_tray_locale\"",
  "\"command\": \"tray_relay_usage_quota_model\"",
]);
requireIncludes("src/mocks/fixtures/commands.ts", [
  "const trayCommandHandlers",
  "handle_tray_menu_event: handleTrayMenuEventHandler",
  "set_tray_locale: setTrayLocaleHandler",
  "tray_relay_usage_quota_model: trayRelayUsageQuotaModelHandler",
  "tray_router_open",
]);
requireIncludes("src/app/runtime/tray.tsx", [
  "listen<TrayNavigationPayload>(\"tray:navigate\"",
  "relayModel",
  "navigateHashRoute",
]);
requireIncludes("src/app/providers/settings.tsx", ["api.setTrayLocale(lang)"]);
requireIncludes("src/entry/root.tsx", ["<TrayNavigationInitializer />"]);

const registry = readText("src/routes/registry/registry.tsx");
if (registry.includes('route: "tray",') || registry.includes("route: 'tray',")) {
  failures.push("托盘 current-source 不能新增可见 tray route");
}
if (!registry.includes('route: "tray-shell"') || !registry.includes("visible: false")) {
  failures.push("托盘 shell 必须保持隐藏 route 边界");
}

if (failures.length > 0) {
  console.error("frontend tray current-source 验证失败：");
  failures.forEach((failure) => console.error(`- ${failure}`));
  process.exit(1);
}

console.log("frontend tray current-source 验证通过");
