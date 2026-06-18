import { existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from "node:fs";
import { dirname, join, relative, sep } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(fileURLToPath(import.meta.url), "..", "..");

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
  const gateFields = new Set(["readyToImplement", "implementation_use", "gate_accepted", "full_leaf_100"]);
  for (const [key, child] of Object.entries(value)) {
    const nextPath = [...path, key];
    if (gateFields.has(key) || key === "dim6_missing") {
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

function inferPlatformAndArea(file) {
  const normalized = file.replaceAll("\\", "/");
  const match = normalized.match(/audits\/audits\/([^/]+)-1\.0\.9-([^/]+)\//);
  if (!match) {
    return { platform: normalized.startsWith("cross-") ? "cross" : "unknown", area: "unknown" };
  }
  return { platform: match[1], area: match[2] };
}

function collectGateReportFailures() {
  const gateRoot = repoPath("evidence", "full-chain", "internal", "audits", "audits");
  const reports = walkFiles(gateRoot, (file) => file.endsWith(`${sep}gate-report.json`)).sort();
  const failures = [];
  for (const report of reports) {
    const file = toRepoPath(report);
    const context = inferPlatformAndArea(file);
    for (const field of collectGateFields(readJson(report), file).filter(gateFieldFailed)) {
      failures.push({ ...context, file: field.file, path: field.path, value: field.value });
    }
  }
  return failures;
}

function collectManifestNonLeafStatuses() {
  const closedManifestStatuses = loadClosedManifestStatuses();
  const manifestPath = repoPath("src", "restoration", "frontend-manifest", "index.ts");
  const boundaryExceptions = loadBoundaryExceptions(manifestPath);
  const lines = readText(manifestPath).split(/\r?\n/);
  const nonLeafStatuses = new Set(["source-only", "boundary-only", "contract-service-only", "owner-closed"]);
  const items = [];
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
        file: toRepoPath(manifestPath),
        recordLine: index + 1,
        line: null,
        arrayName: currentArray,
        module: null,
        owner: null,
        command: null,
        queryKey: null,
        source: null,
        status: null,
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
      currentRecord.line = index + 1;
    }

    objectDepth += (line.match(/{/g) ?? []).length;
    objectDepth -= (line.match(/}/g) ?? []).length;
    if (objectDepth <= 0) {
      if (
        currentRecord.status &&
        !isBoundaryExceptionRecord(currentRecord, boundaryExceptions) &&
        !closedManifestStatuses.has(manifestCloseoutKey(currentRecord))
      ) {
        items.push({
          ...currentRecord,
          owner: currentRecord.owner ?? currentRecord.module,
          line: currentRecord.line ?? currentRecord.recordLine,
        });
      }
      objectDepth = 0;
      currentRecord = null;
    }
  });
  return items;
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
    (exception) => exception.module === owner && exception.status === record.status,
  );
}

function collectFrontendDocSignals() {
  const closedFrontendDocs = loadClosedFrontendDocs();
  const frontendDocs = walkFiles(
    repoPath("evidence", "full-chain", "internal", "audits", "audits"),
    (file) => file.includes(`${sep}frontend${sep}`) && file.endsWith(".md"),
  ).sort();
  const hits = [];
  for (const doc of frontendDocs) {
    const normalizedDoc = toRepoPath(doc);
    if (closedFrontendDocs.has(normalizedDoc)) continue;
    const text = readFileSync(doc, "utf8").toLowerCase();
    const signal = findFrontendDocSignal(text);
    if (signal) hits.push({ file: normalizedDoc, signal });
  }
  return hits;
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

function collectLocaleCoverage() {
  const sources = [
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
  const zh = readJson(repoPath("src", "locales", "zh.json"));
  const en = readJson(repoPath("src", "locales", "en.json"));
  return sources.map((source) => {
    const keys = [...new Set(readJsonl(source.path).flatMap((row) => row.trigger?.i18n_keys ?? []))].sort();
    return {
      platform: source.platform,
      file: toRepoPath(source.path),
      keyCount: keys.length,
      missingKeys: keys.filter((key) => !hasLocaleKey(zh, key) || !hasLocaleKey(en, key)),
    };
  });
}

function collectSourceSignals() {
  const checks = [
    {
      id: "plugins-route-api-command-current",
      description: "plugins 旧 frontend 文档缺 route/API/command/mock chain；当前源码已存在 route/service/hooks，但 config UI 仍不是可见 leaf。",
      paths: [
        "src/features/plugins/Content.tsx",
        "src/features/plugins/components/page.tsx",
        "src/features/plugins/hooks/query.ts",
        "src/features/plugins/hooks/mutation.ts",
        "src/services/plugins/index.ts",
      ],
    },
    {
      id: "voice-empty-skeleton-current",
      description: "voice 按项目范围保留空骨架，不能计入 100% leaf。",
      paths: ["src/features/voice/Content.tsx", "src/features/voice/hooks/index.ts"],
    },
  ];
  return checks.map((check) => ({
    ...check,
    existingPaths: check.paths.filter((path) => existsSync(repoPath(...path.split("/")))),
  }));
}

function collectCopyAcceptance(copyAcceptancePath) {
  if (!existsSync(copyAcceptancePath)) {
    return {
      file: toRepoPath(copyAcceptancePath),
      exists: false,
      status: "missing",
      totals: null,
      requiredForFullCopyAcceptance: true,
    };
  }

  const proof = readJson(copyAcceptancePath);
  return {
    file: toRepoPath(copyAcceptancePath),
    exists: true,
    status: proof.status ?? "unknown",
    totals: proof.totals ?? null,
    requiredForFullCopyAcceptance: true,
  };
}

function buildQueue() {
  const gapAuditPath = repoPath("evidence", "full-chain", "internal", "data", "data", "full-leaf-100-gap-audit.json");
  const gapAudit = readJson(gapAuditPath);
  const gateReportFailures = collectGateReportFailures();
  const manifestNonLeafStatuses = collectManifestNonLeafStatuses();
  const frontendDocSignals = collectFrontendDocSignals();
  const localeCoverage = collectLocaleCoverage();
  const copyAcceptancePath = repoPath("evidence", "full-chain", "internal", "frontend-copy-acceptance.json");
  const copyAcceptance = collectCopyAcceptance(copyAcceptancePath);

  return {
    schema: "open-aimami.frontend_leaf_restoration_queue.v1",
    purpose:
      "记录 MAC/WIN 100% leaf 完成声明仍不能通过的前端 leaf、文案和证据闭合缺口；非绿字段不阻塞基于仓库 raw/internal 证据、伪代码、owner/interface/DTO 和可测试边界继续实现，但不得伪造 evidence gate、full_leaf_100、dim6 或 readyToImplement 为已完成。",
    sourceOfTruth: {
      gapAudit: toRepoPath(gapAuditPath),
      gateReports: "evidence/full-chain/internal/audits/audits/**/gate-report.json",
      frontendDocs: "evidence/full-chain/internal/audits/audits/**/frontend/*.md",
      frontendManifest: "src/restoration/frontend-manifest/index.ts",
      currentSourceCloseouts: "docs/reconstruction/frontend-current-source-closeouts.json",
      localeFiles: ["src/locales/zh.json", "src/locales/en.json"],
    },
    currentConclusion: {
      fullLeaf100: false,
      reason:
        "非绿 gate、full_leaf_100、dim6 或 readyToImplement 字段仍阻塞完成声明；本文件是重建队列，不是验收通过声明，也不是实现启动门槛。",
    },
    gapAuditTotals: gapAudit.totals,
    gapAuditModules: gapAudit.modules,
    gateReportFailures,
    manifestNonLeafStatuses,
    frontendDocSignals,
    localeCoverage,
    copyAcceptance,
    sourceSignals: collectSourceSignals(),
    nextQueue: [
      {
        id: "frontend-copy-acceptance-proof",
        area: "copy",
        status: copyAcceptance.status === "accepted" ? "accepted" : "draft-or-missing",
        blocker:
          copyAcceptance.status === "accepted"
            ? null
            : "逐条 locale key 到 raw/internal 文案来源的验收文件尚未 accepted。",
      },
      {
        id: "plugins-config-visible-leaf",
        area: "plugins",
        status: "blocked-by-raw-observation",
        blocker: "raw plugins acceptance 记录 get/update config 没有可见 UI trigger；不能编造 UI leaf。",
      },
      {
        id: "manifest-non-full-leaf-statuses",
        area: "frontend-manifest",
        status: manifestNonLeafStatuses.length === 0 ? "accepted" : "open",
        blocker:
          manifestNonLeafStatuses.length === 0
            ? null
            : `当前 frontend manifest 还有 ${manifestNonLeafStatuses.length} 个非 full leaf 状态。`,
      },
      {
        id: "gate-report-strict-failures",
        area: "internal-gate",
        status: "open",
        blocker: `当前 internal gate-report 还有 ${gateReportFailures.length} 个完成声明非绿字段；这些字段不阻塞基于证据和可测试边界继续实现。`,
      },
    ],
  };
}

const outputPath = repoPath("docs", "reconstruction", "frontend-leaf-restoration-queue.json");
const output = `${JSON.stringify(buildQueue(), null, 2)}\n`;

if (process.argv.includes("--check")) {
  if (!existsSync(outputPath)) {
    console.error(`缺少 ${toRepoPath(outputPath)}`);
    process.exit(1);
  }
  const normalizeNewlines = (value) => value.replace(/\r\n/g, "\n");
  const current = normalizeNewlines(readFileSync(outputPath, "utf8"));
  if (current !== output) {
    console.error(`${toRepoPath(outputPath)} 未同步，请运行 npm run generate:frontend-leaf-queue`);
    process.exit(1);
  }
  console.log(`${toRepoPath(outputPath)} 已同步`);
} else {
  mkdirSync(dirname(outputPath), { recursive: true });
  writeFileSync(outputPath, output, "utf8");
  console.log(`已生成 ${toRepoPath(outputPath)}`);
}
