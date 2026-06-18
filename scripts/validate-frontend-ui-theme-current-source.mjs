import { existsSync, readFileSync } from "node:fs";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const failures = [];

const CLOSEOUT_ID = "ui-theme-current-source-theme-chain";
const CLOSEOUT_PATH = "docs/reconstruction/frontend-current-source-closeouts.json";
const MAP_PATH = "docs/reconstruction/ui-theme-current-source-map.md";
const GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json";
const RAW_IMPLEMENTATION_TARGETS =
  "evidence/full-chain/raw/aimami/1.0.9/windows-x64/ui/cmd_set_app_theme_coroutine/implementation-targets.txt";

const ALLOWED_CLOSEOUT_FIELDS = [
  "id",
  "module",
  "status",
  "currentSourceMap",
  "gateReports",
  "rawImplementationTargets",
  "requiredSourceSignals",
  "closedGateReportFailures",
  "nonClaims",
  "reason",
];

const EXPECTED_GATE_FAILURES = [
  [GATE_REPORT, "gate_accepted", false],
  [GATE_REPORT, "implementation_use", false],
  [GATE_REPORT, "dim6_missing", true],
  [GATE_REPORT, "leaves.set_app_theme.gate_accepted", false],
  [GATE_REPORT, "leaves.set_app_theme.implementation_use", false],
  [GATE_REPORT, "leaves.theme_platform_diff.gate_accepted", false],
  [GATE_REPORT, "leaves.theme_platform_diff.implementation_use", false],
  [GATE_REPORT, "cluster_gate_summary.readyToImplement", 0],
];

const SOURCE_SIGNAL_FILES = [
  MAP_PATH,
  GATE_REPORT,
  RAW_IMPLEMENTATION_TARGETS,
  "src/lib/api.ts",
  "src/services/theme/index.ts",
  "src/hooks/theme.ts",
  "src/app/providers/settings.tsx",
  "src/components/layout/sidebar.tsx",
  "src/features/settings/panels/appearance.tsx",
  "src/locales/zh.json",
  "src/locales/en.json",
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

function valueAtPath(value, path) {
  return path.split(".").reduce((current, part) => current?.[part], value);
}

function requireIncludes(path, snippets) {
  const text = readText(path);
  for (const snippet of snippets) {
    if (!text.includes(snippet)) {
      failures.push(`${path} 缺少片段：${snippet}`);
    }
  }
}

function requireArrayEquals(name, actual, expected) {
  if (!Array.isArray(actual)) {
    failures.push(`${name} 必须是数组`);
    return;
  }
  const actualSet = new Set(actual);
  for (const item of expected) {
    if (!actualSet.has(item)) {
      failures.push(`${name} 缺少：${item}`);
    }
  }
  for (const item of actual) {
    if (!expected.includes(item)) {
      failures.push(`${name} 不允许登记：${item}`);
    }
  }
}

function validateGateReport() {
  const gate = readJson(GATE_REPORT);
  if (!gate) return;

  for (const [report, path, expectedValue] of EXPECTED_GATE_FAILURES) {
    const actual = valueAtPath(gate, path);
    if (actual !== expectedValue) {
      failures.push(`${report} ${path}=${JSON.stringify(actual)}`);
    }
  }

  const verdict = gate.leaves?.theme_platform_diff?.verdict ?? "";
  const guidance = gate.leaves?.theme_platform_diff?.source_impl_guidance ?? "";
  for (const snippet of [
    "WIN backend does NOT read OS theme",
    "NOT wired to any DWM material API in 1.0.9",
    "does NOT need to add OS-theme reading",
  ]) {
    if (!`${verdict}\n${guidance}`.includes(snippet)) {
      failures.push(`${GATE_REPORT} 缺少主题平台差异边界：${snippet}`);
    }
  }
}

function validateCloseout(closeouts) {
  if (closeouts?.schema !== "open-aimami.frontend_current_source_closeouts.v1") {
    failures.push(`${CLOSEOUT_PATH} schema 不匹配`);
  }

  const closeout = closeouts?.closeouts?.find?.((item) => item.id === CLOSEOUT_ID);
  if (!closeout) {
    failures.push(`${CLOSEOUT_PATH} 缺少 ${CLOSEOUT_ID}`);
    return;
  }

  for (const field of Object.keys(closeout)) {
    if (!ALLOWED_CLOSEOUT_FIELDS.includes(field)) {
      failures.push(`${CLOSEOUT_ID} 不允许字段：${field}`);
    }
  }

  if (closeout.module !== "ui-theme") {
    failures.push(`${CLOSEOUT_ID} module=${String(closeout.module)}`);
  }
  if (closeout.status !== "current-source-closed-partial") {
    failures.push(`${CLOSEOUT_ID} status=${String(closeout.status)}`);
  }
  if (closeout.currentSourceMap !== MAP_PATH) {
    failures.push(`${CLOSEOUT_ID} currentSourceMap=${String(closeout.currentSourceMap)}`);
  }
  requireArrayEquals(`${CLOSEOUT_ID} gateReports`, closeout.gateReports, [GATE_REPORT]);
  requireArrayEquals(`${CLOSEOUT_ID} rawImplementationTargets`, closeout.rawImplementationTargets, [
    RAW_IMPLEMENTATION_TARGETS,
  ]);

  const expectedFailureKeys = new Set(
    EXPECTED_GATE_FAILURES.map(
      ([report, path, value]) => `${report}\u0000${path}\u0000${JSON.stringify(value)}`,
    ),
  );
  const actualFailureKeys = new Set(
    (closeout.closedGateReportFailures ?? []).map(
      (item) => `${item.report}\u0000${item.path}\u0000${JSON.stringify(item.value)}`,
    ),
  );
  for (const expected of expectedFailureKeys) {
    if (!actualFailureKeys.has(expected)) {
      failures.push(`${CLOSEOUT_ID} 缺少允许登记的 gate-report failure：${expected}`);
    }
  }
  for (const actual of actualFailureKeys) {
    if (!expectedFailureKeys.has(actual)) {
      failures.push(`${CLOSEOUT_ID} 不允许登记 gate-report failure：${actual}`);
    }
  }

  const sourceSignalFiles = new Set((closeout.requiredSourceSignals ?? []).map((item) => item.file));
  for (const file of SOURCE_SIGNAL_FILES) {
    if (!sourceSignalFiles.has(file)) {
      failures.push(`${CLOSEOUT_ID} requiredSourceSignals 缺少文件：${file}`);
    }
  }

  const nonClaims = (closeout.nonClaims ?? []).join("\n");
  for (const snippet of [
    "不修改 raw/internal gate-report",
    "不声明 gate_accepted 已完成",
    "不声明 implementation_use 已完成",
    "不声明 full_leaf 或 full_leaf_100 已完成",
    "不新增 OS theme 读取",
    "不新增 DWM material API",
  ]) {
    if (!nonClaims.includes(snippet)) {
      failures.push(`${CLOSEOUT_ID} nonClaims 缺少边界：${snippet}`);
    }
  }

  const reason = closeout.reason ?? "";
  for (const snippet of [
    "current-source partial closeout",
    "设置面板",
    "侧边栏",
    "api.setAppTheme",
    "themeService.setTheme",
    "不伪造 raw/internal gate",
    "不声明 full leaf 100",
  ]) {
    if (!reason.includes(snippet)) {
      failures.push(`${CLOSEOUT_ID} reason 缺少边界：${snippet}`);
    }
  }
}

validateCloseout(readJson(CLOSEOUT_PATH));
validateGateReport();

requireIncludes(MAP_PATH, [
  "当前源码调用链",
  "不修改 raw/internal gate-report",
  "不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成",
  "当前源码因此不应新增 OS theme 读取或 DWM material API 来伪造 parity",
]);
requireIncludes(RAW_IMPLEMENTATION_TARGETS, ["set_app_theme"]);
requireIncludes("src/lib/api.ts", [
  "setAppTheme: (theme: AppTheme) => themeService.setTheme(theme)",
]);
requireIncludes("src/services/theme/index.ts", [
  "export const themeService",
  "setTheme: async (theme: AppTheme): Promise<void>",
  "const { setTheme } = await import(\"@tauri-apps/api/app\")",
  "await setTheme(theme === \"system\" ? null : theme)",
]);
requireIncludes("src/hooks/theme.ts", [
  "export function useTheme()",
  "localStorage.getItem(\"theme\")",
  "localStorage.setItem(\"theme\", theme)",
  "document.documentElement",
  "root.classList.toggle(\"dark\", resolveTheme(t) === \"dark\")",
  "window.matchMedia(\"(prefers-color-scheme: dark)\")",
  "void api.setAppTheme(theme).catch(() => undefined)",
]);
requireIncludes("src/app/providers/settings.tsx", [
  "const { theme, setTheme } = useTheme()",
  "onThemeChange: handleThemeChange",
]);
requireIncludes("src/components/layout/sidebar.tsx", [
  "useThemeValue",
  "onThemeChange(resolvedTheme === \"dark\" ? \"light\" : \"dark\")",
  "lightLabel={t(\"settings.light\")}",
  "darkLabel={t(\"settings.dark\")}",
  "t(\"nav.sidebarLightTheme\")",
  "t(\"nav.sidebarDarkTheme\")",
]);
requireIncludes("src/features/settings/panels/appearance.tsx", [
  "SettingsSection title={t(\"settings.appearance\")}",
  "SettingsRow label={t(\"settings.theme\")}",
  "value: \"light\", icon: Sun, label: t(\"settings.light\")",
  "value: \"dark\", icon: Moon, label: t(\"settings.dark\")",
  "value: \"system\", icon: Monitor, label: t(\"settings.system\")",
  "appearance.onThemeChange(nextTheme as typeof appearance.theme)",
]);
requireIncludes("src/locales/zh.json", [
  "\"sidebarLightTheme\": \"浅色主题\"",
  "\"sidebarDarkTheme\": \"深色主题\"",
  "\"appearance\": \"外观\"",
  "\"theme\": \"主题\"",
  "\"light\": \"浅色\"",
  "\"dark\": \"深色\"",
  "\"system\": \"跟随系统\"",
]);
requireIncludes("src/locales/en.json", [
  "\"sidebarLightTheme\": \"Light theme\"",
  "\"sidebarDarkTheme\": \"Dark theme\"",
  "\"appearance\": \"Appearance\"",
  "\"theme\": \"Theme\"",
  "\"light\": \"Light\"",
  "\"dark\": \"Dark\"",
  "\"system\": \"System\"",
]);

if (failures.length > 0) {
  console.error("前端 UI 主题当前源码验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("前端 UI 主题当前源码验证通过");
