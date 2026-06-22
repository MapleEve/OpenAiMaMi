import { existsSync, readFileSync, readdirSync } from "node:fs";
import { join, relative, sep } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(fileURLToPath(import.meta.url), "..", "..");
const failures = [];
const notes = [];
const relayCoreCurrentSourceCloseoutGateReport =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-relay-core/gate-report.json";
const relayCoreBootstrapCurrentSourceCloseoutGateReport =
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-relay-core-bootstrap/gate-report.json";
const relayCoreCurrentSourceCloseoutGateFailureClusters = [
  "relay_codex_writer",
  "relay_diagnostic",
  "relay_health_audit",
  "bootstrap",
  "relay_fetch_models",
  "relay_translator",
  "relay_proxy_config",
  "relay_image_compat",
  "relay_sse",
];
const relayCoreCurrentSourceCloseoutGateFailureFields = [
  "readyToImplement",
  "gate_accepted",
  "implementation_use",
];
const relayCoreCurrentSourceCloseoutGateFailureKeys =
  relayCoreCurrentSourceCloseoutGateFailureClusters.flatMap((cluster) =>
    relayCoreCurrentSourceCloseoutGateFailureFields.map(
      (field) =>
        `${relayCoreCurrentSourceCloseoutGateReport}\u0000clusters.${cluster}.${field}\u0000false`,
    ),
  );
const relayCoreBootstrapCurrentSourceCloseoutGateFailureKeys = [
  `${relayCoreBootstrapCurrentSourceCloseoutGateReport}\u0000readyToImplement\u0000false`,
  `${relayCoreBootstrapCurrentSourceCloseoutGateReport}\u0000implementation_use\u0000false`,
  `${relayCoreBootstrapCurrentSourceCloseoutGateReport}\u0000gate_accepted\u0000false`,
];
const allowedCloseoutGateFailureKeys = new Set([
  ...relayCoreCurrentSourceCloseoutGateFailureKeys,
  ...relayCoreBootstrapCurrentSourceCloseoutGateFailureKeys,
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.focus_main_window.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.focus_main_window.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.open_path.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000leaves.open_path.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-window-path/gate-report.json\u0000cluster_gate_summary.readyToImplement\u00000",
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-home-usage-frontend/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-home-usage-frontend/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-home-usage-frontend/gate-report.json\u0000cluster_gate_summary.readyToImplement\u00000",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json\u0000per_command.force_kill_codex.readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json\u0000per_command.force_kill_codex.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json\u0000per_command.force_kill_codex.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json\u0000per_command.diagnose_codex_router.readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json\u0000per_command.diagnose_codex_router.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json\u0000per_command.diagnose_codex_router.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json\u0000per_command.diagnose.readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json\u0000per_command.diagnose.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system/gate-report.json\u0000per_command.diagnose.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000leaves.get_mystery_unlock_grants.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000leaves.get_mystery_unlock_grants.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000leaves.merge_mystery_unlock_grants.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000leaves.merge_mystery_unlock_grants.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000leaves.mystery_route_allowed.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000leaves.mystery_route_allowed.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-mystery-unlock/gate-report.json\u0000cluster_gate_summary.readyToImplement\u00000",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-bootstrap/gate-report.json\u0000readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-bootstrap/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-bootstrap/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-bootstrap/gate-report.json\u0000gate_summary.readyToImplement\u00000",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-bootstrap/gate-report.json\u0000gate_summary.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-bootstrap/gate-report.json\u0000gate_summary.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system/gate-report.json\u0000per_command_gate.note_usage_refresh_activity.readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system/gate-report.json\u0000per_command_gate.schedule_full_runtime_refresh.readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system/gate-report.json\u0000per_command_gate.start_auto_switch_pending_watcher.readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system/gate-report.json\u0000per_command_gate.start_usage_refresh_watcher.readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system/gate-report.json\u0000per_command_gate.update_usage_refresh_schedule.readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system-shell-init/gate-report.json\u0000readyToImplement\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system-shell-init/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system-shell-init/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-relay-core/gate-report.json\u0000cluster_gates.18.dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-maintenance/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-maintenance/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-maintenance/gate-report.json\u0000dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-maintenance/gate-report.json\u0000dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json\u0000dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json\u0000leaves.set_app_theme.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json\u0000leaves.set_app_theme.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json\u0000leaves.theme_platform_diff.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json\u0000leaves.theme_platform_diff.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json\u0000cluster_gate_summary.readyToImplement\u00000",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.get_hotspot_enabled.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.get_hotspot_enabled.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.set_hotspot_enabled.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.set_hotspot_enabled.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.hotspot_ready.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000leaves.hotspot_ready.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json\u0000cluster_gate_summary.readyToImplement\u00000",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000dim6_missing\u0000true",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.get_usage_refresh_interval.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.get_usage_refresh_interval.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.set_usage_refresh_interval.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.set_usage_refresh_interval.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.refresh_usage_snapshot.gate_accepted\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000leaves.refresh_usage_snapshot.implementation_use\u0000false",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-usage/gate-report.json\u0000cluster_gate_summary.readyToImplement\u00000",
]);
const finalDeclarationBlockerKeys = new Set([
  "evidence/full-chain/internal/audits/audits/cross-1.0.9-relay-core-bootstrap/gate-report.json\u0000full_leaf_100\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-bootstrap/gate-report.json\u0000full_leaf_100\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-relay/gate-report.json\u0000full_leaf_100\u0000false",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-system-shell-init/gate-report.json\u0000full_leaf_100\u0000false",
]);

function repoPath(...parts) {
  return join(repoRoot, ...parts);
}

function toRepoPath(file) {
  return relative(repoRoot, file).split(sep).join("/");
}

function readJson(path) {
  return JSON.parse(readFileSync(path, "utf8"));
}

function readText(path) {
  return readFileSync(path, "utf8");
}

function readJsonl(path) {
  if (!existsSync(path)) return [];
  return readFileSync(path, "utf8")
    .split(/\r?\n/)
    .filter(Boolean)
    .map((line) => JSON.parse(line));
}

function walkFiles(root, predicate, files = []) {
  if (!existsSync(root)) return files;
  for (const entry of readdirSync(root, { withFileTypes: true })) {
    const path = join(root, entry.name);
    if (entry.isDirectory()) {
      walkFiles(path, predicate, files);
      continue;
    }
    if (predicate(path)) files.push(path);
  }
  return files;
}

function flattenLocale(locale, prefix = [], entries = new Map()) {
  if (typeof locale === "string") {
    entries.set(prefix.join("."), locale);
    return entries;
  }
  if (!locale || typeof locale !== "object" || Array.isArray(locale)) return entries;
  for (const [key, value] of Object.entries(locale)) {
    flattenLocale(value, [...prefix, key], entries);
  }
  return entries;
}

function hasLocaleKey(locale, key) {
  let current = locale;
  for (const part of key.split(".")) {
    if (!current || typeof current !== "object" || !(part in current)) return false;
    current = current[part];
  }
  return typeof current === "string" || typeof current === "number" || typeof current === "boolean";
}

function collectGateFields(value, file, path = [], fields = []) {
  if (!value || typeof value !== "object") return fields;
  const requiredTrueFields = new Set(["readyToImplement", "implementation_use", "gate_accepted", "full_leaf_100"]);
  for (const [key, child] of Object.entries(value)) {
    const nextPath = [...path, key];
    if (requiredTrueFields.has(key) || key === "dim6_missing") {
      fields.push({ file, path: nextPath.join("."), value: child });
    }
    collectGateFields(child, file, nextPath, fields);
  }
  return fields;
}

function gateFieldFailed(field) {
  if (field.path.endsWith("dim6_missing")) return field.value === true;
  if (field.path.endsWith("full_leaf_100")) return field.value !== true;
  if (field.path.endsWith("readyToImplement")) return field.value === false || field.value === 0;
  return field.value === false;
}

function gateFailureKey(field) {
  return `${field.file}\u0000${field.path}\u0000${JSON.stringify(field.value)}`;
}

function loadClosedGateReportFailures() {
  const closeoutsPath = repoPath("docs", "reconstruction", "frontend-current-source-closeouts.json");
  if (!existsSync(closeoutsPath)) return new Set();
  const closeouts = readJson(closeoutsPath);
  const allowed = new Set();
  for (const closeout of closeouts.closeouts ?? []) {
    if (closeout.status !== "current-source-closed-partial") continue;
    for (const entry of closeout.closedGateReportFailures ?? []) {
      if (!entry?.report || !entry?.path) continue;
      if (entry.path.endsWith("full_leaf_100")) continue;
      const key = `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`;
      if (allowedCloseoutGateFailureKeys.has(key)) allowed.add(key);
    }
  }
  return allowed;
}

function checkGateSpecInputs() {
  const required = [
    repoPath("evidence", "full-chain", "internal", "root", "GATE-SPEC.md"),
    repoPath("evidence", "full-chain", "internal", "root", "CONSUMER-GATE-SCHEMA.md"),
  ];
  for (const path of required) {
    if (!existsSync(path)) failures.push(`缺少完成声明验收输入：${toRepoPath(path)}`);
  }
}

function checkFullLeafGapAudit() {
  const auditPath = repoPath("evidence", "full-chain", "internal", "data", "data", "full-leaf-100-gap-audit.json");
  const audit = readJson(auditPath);
  const totals = audit.totals ?? {};
  const openSignals = [];

  if (totals.full_leaf_100 !== true) {
    openSignals.push(`totals.full_leaf_100=${String(totals.full_leaf_100)}`);
  }
  if (totals.gate_accepted !== true) {
    openSignals.push(`totals.gate_accepted=${String(totals.gate_accepted)}`);
  }
  if (Number(totals.consumerStartBlocked ?? 0) > 0) {
    openSignals.push(`consumerStartBlocked=${totals.consumerStartBlocked}`);
  }
  if (Number(totals.readyToImplement ?? 0) !== Number(totals.totalRows ?? 0)) {
    openSignals.push(`readyToImplement=${totals.readyToImplement}/${totals.totalRows}`);
  }

  for (const [moduleName, moduleGate] of Object.entries(audit.modules ?? {})) {
    const blocked = Number(moduleGate.consumerStartBlocked ?? 0);
    const blockers = Array.isArray(moduleGate.fullLeafBlockers) ? moduleGate.fullLeafBlockers : [];
    if (blocked > 0) {
      openSignals.push(`modules.${moduleName}.consumerStartBlocked=${blocked}`);
    }
    if (blockers.length > 0) {
      openSignals.push(`modules.${moduleName}.fullLeafBlockers=${blockers.length}`);
    }
    if (moduleGate.moduleExitAllowed === false) {
      openSignals.push(`modules.${moduleName}.moduleExitAllowed=false`);
    }
  }

  notes.push(
    `full-leaf-gap-audit 历史完成声明非绿字段：${openSignals.length}；这些字段只阻止最终完成声明，不阻止继续实现`,
  );
  for (const signal of openSignals.slice(0, 12)) {
    notes.push(`${toRepoPath(auditPath)} ${signal}`);
  }
}

function checkGateReports() {
  const gateRoot = repoPath("evidence", "full-chain", "internal", "audits", "audits");
  const reports = walkFiles(gateRoot, (file) => file.endsWith(`${sep}gate-report.json`));
  const allowedFailures = loadClosedGateReportFailures();
  if (reports.length === 0) {
    failures.push("No internal gate-report.json files found; cannot prove leaf gate");
    return;
  }

  const falseFields = [];
  for (const report of reports) {
    const fields = collectGateFields(readJson(report), toRepoPath(report));
    falseFields.push(...fields.filter((field) => gateFieldFailed(field)));
  }
  const allowedFalseFields = falseFields.filter((field) => allowedFailures.has(gateFailureKey(field)));
  const remainingFalseFields = falseFields.filter((field) => !allowedFailures.has(gateFailureKey(field)));
  const remainingKeys = remainingFalseFields.map(gateFailureKey).sort();
  const expectedRemainingKeys = [...finalDeclarationBlockerKeys].sort();

  notes.push(
    `internal gate-report 完成声明字段：${reports.length} reports, allowed closeout failures ${allowedFalseFields.length}, remaining non-blocking signals ${remainingFalseFields.length}`,
  );
  for (const field of remainingFalseFields.slice(0, 12)) {
    notes.push(`${field.file} ${field.path}=${String(field.value)}`);
  }
  if (remainingKeys.length !== expectedRemainingKeys.length) {
    failures.push(
      `internal gate-report 剩余完成声明 blocker 数量应为 ${expectedRemainingKeys.length}，当前为 ${remainingKeys.length}`,
    );
  }
  for (const key of expectedRemainingKeys) {
    if (!remainingKeys.includes(key)) {
      failures.push(`internal gate-report 缺少预期最终声明 blocker：${key.replaceAll("\u0000", " ")}`);
    }
  }
  for (const key of remainingKeys) {
    if (!finalDeclarationBlockerKeys.has(key)) {
      failures.push(`internal gate-report 出现未登记非绿字段：${key.replaceAll("\u0000", " ")}`);
    }
  }
}
function checkLeafLedger() {
  const ledgerPath = repoPath("evidence", "full-chain", "internal", "leaf-ledger-map.json");
  const ledger = readJson(ledgerPath);
  const leaves = Object.keys(ledger.leaves ?? {});
  const macLeaves = leaves.filter((leaf) => leaf.startsWith("macos") || leaf.startsWith("macos-arm64"));
  const winLeaves = leaves.filter((leaf) => leaf.startsWith("windows") || leaf.startsWith("windows-x64"));

  if (leaves.length === 0) failures.push(`${toRepoPath(ledgerPath)} 没有 leaf 条目`);
  if (macLeaves.length === 0) failures.push(`${toRepoPath(ledgerPath)} 没有 macOS leaf 条目`);
  if (winLeaves.length === 0) failures.push(`${toRepoPath(ledgerPath)} 没有 Windows leaf 条目`);
  notes.push(`leaf-ledger-map leaf 条目：全部 ${leaves.length}，macOS ${macLeaves.length}，Windows ${winLeaves.length}`);
}

function checkRawFrontendLocaleKeys() {
  const controlFlowSources = [
    {
      platform: "windows-x64",
      path: repoPath(
        "evidence",
        "full-chain",
        "raw",
        "aimami",
        "1.0.9",
        "windows-x64",
        "frontend",
        "tauri-dumped",
        "frontend",
        "frontend-control-flow.jsonl",
      ),
    },
    {
      platform: "macos",
      path: repoPath(
        "evidence",
        "full-chain",
        "raw",
        "aimami",
        "1.0.9",
        "macos",
        "frontend",
        "macos-109-frontend-ccf-found-app",
        "frontend",
        "frontend-control-flow.jsonl",
      ),
    },
  ];
  const zhPath = repoPath("src", "locales", "zh.json");
  const enPath = repoPath("src", "locales", "en.json");
  const zh = readJson(zhPath);
  const en = readJson(enPath);

  for (const source of controlFlowSources) {
    if (!existsSync(source.path)) {
      failures.push(`缺少 ${source.platform} raw frontend-control-flow：${toRepoPath(source.path)}`);
      continue;
    }
    const rows = readJsonl(source.path);
    const rawKeys = [...new Set(rows.flatMap((row) => row.trigger?.i18n_keys ?? []))].sort();
    const missing = rawKeys.filter((key) => !hasLocaleKey(zh, key) || !hasLocaleKey(en, key));
    for (const key of missing) {
      failures.push(`${source.platform} raw frontend-control-flow locale key 未同步 zh/en：${key}`);
    }
    notes.push(`${source.platform} raw frontend-control-flow locale key：${rawKeys.length}，缺失 ${missing.length}`);
  }
}

function checkCopyAcceptanceProof() {
  const zhPath = repoPath("src", "locales", "zh.json");
  const enPath = repoPath("src", "locales", "en.json");
  const zhEntries = flattenLocale(readJson(zhPath));
  const enEntries = flattenLocale(readJson(enPath));
  const proofPath = repoPath("evidence", "full-chain", "internal", "frontend-copy-acceptance.json");

  notes.push(`locale 字符串数量：zh ${zhEntries.size}，en ${enEntries.size}`);

  if (!existsSync(proofPath)) {
    failures.push(
      "没有找到 evidence/full-chain/internal/frontend-copy-acceptance.json，无法证明全文案逐条对照 raw/internal 原文",
    );
    return;
  }

  const proof = readJson(proofPath);
  if (proof.schema !== "open-aimami.frontend.copy_acceptance.v1") {
    failures.push(`${toRepoPath(proofPath)} schema 不匹配`);
  }
  if (proof.status !== "accepted") {
    failures.push(`${toRepoPath(proofPath)} status=${String(proof.status)}`);
  }
  const entries = Array.isArray(proof.entries) ? proof.entries : [];
  if (entries.length !== zhEntries.size || entries.length !== enEntries.size) {
    failures.push(`${toRepoPath(proofPath)} entries=${entries.length}，locale zh/en=${zhEntries.size}/${enEntries.size}`);
  }
  const acceptedEntries = entries.filter(
    (entry) => entry.zhAccepted === true && entry.enAccepted === true,
  );
  const missingSourceEntries = entries.filter(
    (entry) => !entry.zhSource || !entry.enSource,
  );
  notes.push(
    `frontend-copy-acceptance：status=${String(proof.status)}，entries=${entries.length}，accepted=${acceptedEntries.length}，missingSource=${missingSourceEntries.length}`,
  );

  if (proof.status !== "accepted") {
    const totals = proof.totals && typeof proof.totals === "object" ? proof.totals : {};
    failures.push(
      `${toRepoPath(proofPath)} 仍是草稿或未验收状态：acceptedZh=${String(totals.acceptedZh ?? acceptedEntries.length)} acceptedEn=${String(totals.acceptedEn ?? acceptedEntries.length)} missingRawOrInternalCopySource=${String(totals.missingRawOrInternalCopySource ?? missingSourceEntries.length)}`,
    );
    for (const entry of missingSourceEntries.slice(0, 10)) {
      failures.push(`${toRepoPath(proofPath)} ${entry.key} 缺少 raw/internal 文案来源`);
    }
    if (missingSourceEntries.length > 10) {
      failures.push(`${toRepoPath(proofPath)} 另有 ${missingSourceEntries.length - 10} 个 locale key 缺少 raw/internal 文案来源`);
    }
    return;
  }
  for (const entry of entries) {
    if (entry.zhAccepted !== true || entry.enAccepted !== true) {
      failures.push(`${toRepoPath(proofPath)} ${entry.key} 未同时验收 zh/en`);
    }
    if (!entry.zhSource || !entry.enSource) {
      failures.push(`${toRepoPath(proofPath)} ${entry.key} 缺少 raw/internal 文案来源`);
    }
  }
}

function checkFrontendChainDocs() {
  const closedFrontendDocs = loadClosedFrontendDocs();
  const frontendDocs = walkFiles(
    repoPath("evidence", "full-chain", "internal", "audits", "audits"),
    (file) => file.includes(`${sep}frontend${sep}`) && file.endsWith(".md"),
  );
  const hits = [];

  for (const file of frontendDocs) {
    const normalizedFile = toRepoPath(file);
    if (closedFrontendDocs.has(normalizedFile)) continue;
    const text = readText(file).toLowerCase();
    const signal = findFrontendDocSignal(text);
    if (signal) {
      hits.push(`${normalizedFile} 包含缺口信号：${signal}`);
    }
  }

  for (const hit of hits.slice(0, 40)) {
    failures.push(hit);
  }
  if (hits.length > 40) {
    failures.push(`internal frontend 文档另有 ${hits.length - 40} 个缺口信号`);
  }
  notes.push(`internal frontend 文档缺口信号：${hits.length}/${frontendDocs.length}`);
}

function findFrontendDocSignal(text) {
  const checks = [
    ["missing frontend route/API/command/mock chain", "missing frontend route/api/command/mock chain"],
    ["not_closed", "not_closed"],
    ["not closed", "not closed"],
    ["partial/candidate", "partial/candidate"],
    ["blocked by", "blocked by"],
    ["still blocked", "still blocked"],
    ["blockers", "blockers"],
    ["implementation gap", "implementation gap"],
    ["source archive 实现 gap", "source archive 实现 gap"],
    ["**gap**", "**gap**"],
  ];
  for (const [label, needle] of checks) {
    if (text.includes(needle)) return label;
  }
  return null;
}

function loadClosedFrontendDocs() {
  const closeoutsPath = repoPath("docs", "reconstruction", "frontend-current-source-closeouts.json");
  if (!existsSync(closeoutsPath)) return new Set();
  const closeouts = readJson(closeoutsPath);
  const closedDocs = new Set();
  for (const closeout of closeouts.closeouts ?? []) {
    if (closeout.status !== "current-source-closed-partial") continue;
    for (const doc of closeout.closedFrontendDocs ?? []) {
      closedDocs.add(doc);
    }
  }
  return closedDocs;
}

function manifestCloseoutKey(record) {
  return [
    record.arrayName ?? "",
    record.module ?? record.owner ?? "",
    record.queryKey ?? "",
    record.command ?? "",
    record.source ?? "",
    record.status ?? "",
  ].join("\u0000");
}

function loadClosedManifestStatuses() {
  const closeoutsPath = repoPath("docs", "reconstruction", "frontend-current-source-closeouts.json");
  if (!existsSync(closeoutsPath)) return new Set();
  const closeouts = readJson(closeoutsPath);
  const closedStatuses = new Set();
  for (const closeout of closeouts.closeouts ?? []) {
    if (closeout.status !== "current-source-closed-partial") continue;
    for (const entry of closeout.closedManifestStatuses ?? []) {
      closedStatuses.add(manifestCloseoutKey(entry));
    }
  }
  return closedStatuses;
}

function loadBoundaryExceptions(manifestPath) {
  const text = readText(manifestPath);
  const match = text.match(/export const FRONTEND_DUMPED_BOUNDARY_EXCEPTIONS = \[([\s\S]*?)\] as const/);
  if (!match) return [];
  return [...match[1].matchAll(/\{[\s\S]*?\}/g)]
    .map((block) => ({
      module: block[0].match(/\bmodule:\s*"([^"]+)"/)?.[1] ?? null,
      status: block[0].match(/\bstatus:\s*"([^"]+)"/)?.[1] ?? null,
    }))
    .filter((entry) => entry.module && entry.status);
}

function isBoundaryExceptionRecord(record, exceptions) {
  const owner = record.owner ?? record.module ?? null;
  return exceptions.some(
    (exception) =>
      exception.module === owner &&
      exception.status === record.status,
  );
}

function checkFrontendManifestStatuses() {
  const closedManifestStatuses = loadClosedManifestStatuses();
  const manifestPath = repoPath("src", "restoration", "frontend-manifest", "index.ts");
  const boundaryExceptions = loadBoundaryExceptions(manifestPath);
  const lines = readText(manifestPath).split(/\r?\n/);
  const nonLeafStatuses = new Set(["source-only", "boundary-only", "contract-service-only", "owner-closed"]);
  const hits = [];
  let currentArray = null;
  let objectDepth = 0;
  let currentRecord = null;

  lines.forEach((line, index) => {
    const arrayMatch = line.match(/^export const\s+([A-Z0-9_]+)\s*=\s*\[/);
    if (arrayMatch) {
      currentArray = arrayMatch[1];
      objectDepth = 0;
      currentRecord = null;
      return;
    }
    if (!currentArray) return;
    if (line.trim().startsWith("] as const") || line.trim().startsWith("] satisfies")) {
      currentArray = null;
      objectDepth = 0;
      currentRecord = null;
      return;
    }
    if (currentArray === "FRONTEND_DUMPED_BOUNDARY_EXCEPTIONS") return;

    if (objectDepth === 0 && line.trim().startsWith("{")) {
      currentRecord = {
        arrayName: currentArray,
        owner: null,
        module: null,
        command: null,
        queryKey: null,
        source: null,
        status: null,
        statusLine: null,
      };
    }
    if (!currentRecord) return;

    for (const field of ["module", "owner", "command", "queryKey", "source"]) {
      const match = line.match(new RegExp(`\\b${field}:\\s*"([^"]+)"`));
      if (match) currentRecord[field] = match[1];
    }
    const statusMatch = line.match(/\bstatus:\s*"([^"]+)"/);
    if (statusMatch && nonLeafStatuses.has(statusMatch[1])) {
      currentRecord.status = statusMatch[1];
      currentRecord.statusLine = index + 1;
    }

    objectDepth += (line.match(/{/g) ?? []).length;
    objectDepth -= (line.match(/}/g) ?? []).length;
    if (objectDepth <= 0) {
      if (
        currentRecord.status &&
        !isBoundaryExceptionRecord(currentRecord, boundaryExceptions) &&
        !closedManifestStatuses.has(manifestCloseoutKey(currentRecord))
      ) {
        const owner = currentRecord.owner ?? currentRecord.module ?? "unknown";
        const command = currentRecord.command ? ` command=${currentRecord.command}` : "";
        const queryKey = currentRecord.queryKey ? ` queryKey=${currentRecord.queryKey}` : "";
        const source = currentRecord.source ? ` source=${currentRecord.source}` : "";
        hits.push(
          `${toRepoPath(manifestPath)}:${currentRecord.statusLine} ${currentRecord.arrayName} owner=${owner}${command}${queryKey}${source} manifest status=${currentRecord.status}`,
        );
      }
      objectDepth = 0;
      currentRecord = null;
    }
  });

  for (const hit of hits.slice(0, 60)) {
    failures.push(hit);
  }
  if (hits.length > 60) {
    failures.push(`frontend manifest 另有 ${hits.length - 60} 个非 full leaf 状态`);
  }
  notes.push(`frontend manifest 非 full leaf 状态：${hits.length}`);
}

checkGateSpecInputs();
checkFullLeafGapAudit();
checkGateReports();
checkLeafLedger();
checkRawFrontendLocaleKeys();
checkCopyAcceptanceProof();
checkFrontendChainDocs();
checkFrontendManifestStatuses();

for (const note of notes) {
  console.log(`INFO ${note}`);
}

if (failures.length > 0) {
  console.error(
    "前端 leaf/copy 可实现验收失败：非绿 gate 字段只阻塞最终完成声明，不阻塞基于 raw/internal 证据、伪代码、owner/interface/DTO 和可测试边界的实现；禁止伪造或改写 evidence gate/audit JSON 为已完成。",
  );
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "前端 leaf/copy 可实现验收通过；历史 gate/audit 非绿字段仍只作为最终完成声明信号保留。",
);
