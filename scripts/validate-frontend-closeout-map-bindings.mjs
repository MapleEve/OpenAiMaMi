import { existsSync, readFileSync } from "node:fs";
import { join } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const validatorScript = "validate-frontend-closeout-map-bindings.mjs";
const npmScript = "validate:frontend-closeout-map-bindings";

const bindings = [
  {
    id: "relay-passthrough-audit-backend-skeleton-chain",
    map: "docs/reconstruction/relay-core-current-source-evidence-map.md",
    mapSnippets: [
      "passthrough policy",
      "passthrough audit",
      "不恢复无证据的闭源代理业务",
    ],
    closeoutSnippets: [
      "get_passthrough_audit_log",
      "set_block_official_passthrough",
      "不声明 relay 业务状态机",
    ],
  },
  {
    id: "relay-current-source-skeleton",
    map: "docs/reconstruction/relay-core-current-source-evidence-map.md",
    mapSnippets: [
      "relay-current-source-skeleton",
      "load_relay_state",
      "不恢复无证据的闭源代理业务",
    ],
    closeoutSnippets: [
      "run_codex_router_diagnostics",
      "upsert_relay_provider",
      "relay_proxy_config",
    ],
  },
  {
    id: "relay-proxy-config-dim6-stale-gate-registration",
    map: "docs/reconstruction/relay-core-current-source-evidence-map.md",
    mapSnippets: [
      "proxy config",
      "config.toml",
      "dim6",
      "未修改任何原始审计报告字段",
    ],
    closeoutSnippets: [
      "relay_proxy_config",
      "dim6_missing",
      "不登记 cross relay-core-bootstrap、relay、mystery 或 voice",
    ],
  },
  {
    id: "bootstrap-system-current-source-reconcile-sidecars",
    map: "docs/reconstruction/system-snapshot-bootstrap-current-source-map.md",
    mapSnippets: [
      "load_snapshot",
      "load_bootstrap_state",
      "bootstrap-cache.json",
      "不声明真实 daemon",
    ],
    closeoutSnippets: [
      "load_snapshot",
      "load_bootstrap_state",
      "不声明全量叶子验收完成",
    ],
  },
  {
    id: "bootstrap-current-source-chain-gate-failure-registration",
    map: "docs/reconstruction/system-snapshot-bootstrap-current-source-map.md",
    mapSnippets: [
      "load_bootstrap_state",
      "pendingSwitchAccountKey",
      "不修改 raw/internal gate-report",
    ],
    closeoutSnippets: [
      "load_pending_auto_switch",
      "confirm_pending_auto_switch",
      "不声明 bootstrap 后端平台真实能力已经恢复",
    ],
  },
  {
    id: "system-runtime-watcher-current-source-skeleton-chain",
    map: "docs/reconstruction/system-runtime-watchers-current-source-map.md",
    mapSnippets: [
      "note_usage_refresh_activity",
      "schedule_full_runtime_refresh",
      "start_auto_switch_pending_watcher",
      "start_usage_refresh_watcher",
      "update_usage_refresh_schedule",
      "不允许登记 `implementation_use`",
    ],
    closeoutSnippets: [
      "RuntimeWatcherSignal",
      "RuntimeWatcherSnapshot",
      "不处理 system-shell-init、relay、mystery 或 voice",
    ],
  },
  {
    id: "system-hotspot-usage-mystery-frontend-callchain-non-gating-closeout",
    map: "docs/reconstruction/system-hotspot-current-source-map.md",
    field: "currentSourceMaps",
    mapSnippets: ["get_hotspot_enabled", "set_hotspot_enabled", "hotspot_ready"],
    closeoutSnippets: ["get_hotspot_enabled", "set_hotspot_enabled", "hotspot_ready"],
  },
  {
    id: "system-hotspot-usage-mystery-frontend-callchain-non-gating-closeout",
    map: "docs/reconstruction/system-usage-current-source-map.md",
    field: "currentSourceMaps",
    mapSnippets: [
      "get_usage_refresh_interval",
      "set_usage_refresh_interval",
      "refresh_usage_snapshot",
    ],
    closeoutSnippets: [
      "get_usage_refresh_interval",
      "set_usage_refresh_interval",
      "refresh_usage_snapshot",
    ],
  },
  {
    id: "system-hotspot-usage-mystery-frontend-callchain-non-gating-closeout",
    map: "docs/reconstruction/mystery-unlock-current-source-map.md",
    field: "currentSourceMaps",
    mapSnippets: ["get_mystery_unlock_grants", "merge_mystery_unlock_grants"],
    closeoutSnippets: ["get_mystery_unlock_grants", "merge_mystery_unlock_grants"],
  },
  {
    id: "system-shell-init-duplicate-outtake-non-authoritative",
    map: "docs/reconstruction/system-shell-init-duplicate-current-source-map.md",
    mapSnippets: [
      "system-shell-init",
      "duplicate_local_outtake_not_authoritative",
      "authoritative_shared_bootstrap_work_exists",
      "full_leaf_100",
    ],
    closeoutSnippets: [
      "duplicate_local_outtake_not_authoritative",
      "authoritative closeout",
      "full_leaf_100",
    ],
  },
  {
    id: "windows-system-current-source-strict-chain",
    map: "docs/reconstruction/maintenance-current-source-evidence-map.md",
    field: "currentSourceMaps",
    mapSnippets: ["force_kill_codex", "diagnose"],
    closeoutSnippets: ["force_kill_codex", "diagnose"],
  },
  {
    id: "windows-system-current-source-strict-chain",
    map: "docs/reconstruction/diagnostics-current-source-evidence-map.md",
    field: "currentSourceMaps",
    mapSnippets: ["diagnose", "catalog_integrity"],
    closeoutSnippets: ["diagnose"],
  },
  {
    id: "windows-system-current-source-strict-chain",
    map: "docs/reconstruction/relay-core-current-source-evidence-map.md",
    field: "currentSourceMaps",
    mapSnippets: ["diagnose_codex_router", "run_codex_router_diagnostics"],
    closeoutSnippets: ["diagnose_codex_router"],
  },
];

function pathOf(path) {
  return join(repoRoot, ...path.split("/"));
}

function readText(path) {
  const absolute = pathOf(path);
  if (!existsSync(absolute)) {
    failures.push(`缺少文件：${path}`);
    return "";
  }
  return readFileSync(absolute, "utf8");
}

function readJson(path) {
  const text = readText(path);
  if (!text) return {};
  try {
    return JSON.parse(text);
  } catch (error) {
    failures.push(`${path} JSON 解析失败：${error.message}`);
    return {};
  }
}

function compact(value) {
  return value.replace(/\s+/g, "");
}

function requireSnippets(label, text, snippets) {
  const compactText = compact(text);
  const missing = snippets.filter(
    (snippet) => !text.includes(snippet) && !compactText.includes(compact(snippet)),
  );
  if (missing.length > 0) {
    failures.push(`${label} 缺少片段：${missing.join("、")}`);
  }
}

const closeoutLedger = readJson("docs/reconstruction/frontend-current-source-closeouts.json");
const closeouts = closeoutLedger.closeouts ?? [];

for (const binding of bindings) {
  const matches = closeouts.filter((item) => item.id === binding.id);
  if (matches.length !== 1) {
    failures.push(`${binding.id} 必须唯一，实际数量 ${matches.length}`);
    continue;
  }

  const closeout = matches[0];
  if (binding.field === "currentSourceMaps") {
    if (!Array.isArray(closeout.currentSourceMaps) || !closeout.currentSourceMaps.includes(binding.map)) {
      failures.push(
        `${binding.id} currentSourceMaps 必须包含 ${binding.map}，实际为 ${JSON.stringify(
          closeout.currentSourceMaps,
        )}`,
      );
    }
  } else if (closeout.currentSourceMap !== binding.map) {
    failures.push(
      `${binding.id} currentSourceMap 必须为 ${binding.map}，实际为 ${String(
        closeout.currentSourceMap,
      )}`,
    );
  }

  const closeoutText = JSON.stringify(closeout);
  requireSnippets(`${binding.id} closeout`, closeoutText, binding.closeoutSnippets);
  requireSnippets(binding.map, readText(binding.map), binding.mapSnippets);
}

const unboundCloseouts = closeouts
  .filter((item) => item.status === "current-source-closed-partial")
  .filter(
    (item) =>
      !(typeof item.currentSourceMap === "string" && item.currentSourceMap.length > 0) &&
      !(
        Array.isArray(item.currentSourceMaps) &&
        item.currentSourceMaps.length > 0 &&
        item.currentSourceMaps.every((map) => typeof map === "string" && map.length > 0)
      ),
  )
  .map((item) => item.id);
if (unboundCloseouts.length > 0) {
  failures.push(`current-source closeout 缺少 map 绑定：${unboundCloseouts.join("、")}`);
}

const packageJson = readJson("package.json");
if (packageJson.scripts?.[npmScript] !== `node scripts/${validatorScript}`) {
  failures.push(`package.json 必须登记 ${npmScript}`);
}

requireSnippets("validate:frontend 聚合入口", readText("scripts/validate-frontend.mjs"), [
  `["${validatorScript}"]`,
]);

const readme = readFileSync(pathOf("README.md"));
const readmeCn = readFileSync(pathOf("README-cn.md"));
if (!readme.equals(readmeCn)) {
  failures.push("README.md 与 README-cn.md 必须字节级一致");
}

const readmeText = readme.toString("utf8");
const frontendLine = readmeText
  .split(/\r?\n/)
  .find((line) => line.startsWith("| 前端 |"));
if (!frontendLine?.includes("map 绑定验证")) {
  failures.push("README 前端归纳行必须包含 map 绑定验证");
}
for (const forbidden of ["relay-current-source-skeleton", "bootstrap-current-source", "system-runtime-watcher"]) {
  if (frontendLine?.includes(forbidden)) {
    failures.push(`README 前端归纳行不得写模块流水：${forbidden}`);
  }
}

if (failures.length > 0) {
  console.error("失败：前端 closeout map 绑定验证未通过");
  for (const failure of failures) console.error(`- ${failure}`);
  process.exit(1);
}

console.log(`通过：前端 closeout map 绑定验证通过，绑定 ${bindings.length} 项。`);
