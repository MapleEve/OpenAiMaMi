import { existsSync, readFileSync } from "node:fs";
import { dirname, join, relative, sep } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const failures = [];

const files = {
  mapDoc: "docs/reconstruction/system-hotspot-current-source-map.md",
  closeouts: "docs/reconstruction/frontend-current-source-closeouts.json",
  leafQueue: "docs/reconstruction/frontend-leaf-restoration-queue.json",
  closeoutValidator: "scripts/validate-frontend-current-source-closeouts.mjs",
  cacheValidator:
    "scripts/validate-frontend-system-usage-hotspot-mystery-cache.mjs",
  frontendAggregator: "scripts/validate-frontend.mjs",
  packageJson: "package.json",
  routeRegistry: "src/routes/registry/registry.tsx",
  settingsRoute: "src/routes/desktop/main/settings/page.tsx",
  settingsQuery: "src/features/settings/hooks/query.ts",
  settingsMutation: "src/features/settings/hooks/mutation.ts",
  settingsCache: "src/features/settings/cache/index.ts",
  settingsAppearance: "src/features/settings/panels/appearance.tsx",
  systemService: "src/services/system/index.ts",
  settingsService: "src/services/settings/index.ts",
  commandMocks: "src/mocks/fixtures/commands.ts",
};

const HOTSPOT_CLOSEOUT_ID =
  "system-hotspot-usage-mystery-frontend-callchain-non-gating-closeout";
const HOTSPOT_SIDECAR =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/frontend-callchain-report.json";
const HOTSPOT_GATE_REPORT =
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-system-hotspot/gate-report.json";
const HOTSPOT_COMMANDS = [
  "get_hotspot_enabled",
  "set_hotspot_enabled",
  "hotspot_ready",
];
const HOTSPOT_GATE_FAILURES = [
  ["gate_accepted", false],
  ["implementation_use", false],
  ["dim6_missing", true],
  ["leaves.get_hotspot_enabled.gate_accepted", false],
  ["leaves.get_hotspot_enabled.implementation_use", false],
  ["leaves.set_hotspot_enabled.gate_accepted", false],
  ["leaves.set_hotspot_enabled.implementation_use", false],
  ["leaves.hotspot_ready.gate_accepted", false],
  ["leaves.hotspot_ready.implementation_use", false],
  ["cluster_gate_summary.readyToImplement", 0],
];

function repoPath(file) {
  return join(repoRoot, file);
}

function toRepoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function readText(file) {
  const path = repoPath(file);
  if (!existsSync(path)) {
    failures.push(`Missing required file: ${file}`);
    return "";
  }
  return readFileSync(path, "utf8");
}

function readJson(file) {
  const text = readText(file);
  if (!text) return {};
  try {
    return JSON.parse(text);
  } catch (error) {
    failures.push(`${file} is not valid JSON: ${error.message}`);
    return {};
  }
}

function pass(label) {
  console.log(`PASS ${label}`);
}

function fail(label, detail = "") {
  failures.push(`${label}${detail ? `: ${detail}` : ""}`);
}

function assertIncludes(label, text, fragments) {
  const missing = fragments.filter((fragment) => !text.includes(fragment));
  if (missing.length === 0) {
    pass(label);
    return;
  }
  fail(label, `missing ${missing.map((item) => JSON.stringify(item)).join(", ")}`);
}

function assertNotIncludes(label, text, fragments) {
  const present = fragments.filter((fragment) => text.includes(fragment));
  if (present.length === 0) {
    pass(label);
    return;
  }
  fail(label, `forbidden ${present.map((item) => JSON.stringify(item)).join(", ")}`);
}

function assertTrue(label, value, detail = "") {
  if (value) {
    pass(label);
    return;
  }
  fail(label, detail);
}

function findRequiredSourceSignal(closeout, file) {
  return (closeout.requiredSourceSignals ?? []).find(
    (signal) => signal.file === file,
  );
}

function gateFailureKey(entry) {
  return `${entry.report}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`;
}

function expectedGateFailureKey(path, value) {
  return `${HOTSPOT_GATE_REPORT}\u0000${path}\u0000${JSON.stringify(value)}`;
}

function assertNoCompletedGateClaims(label, records) {
  const completed = records.filter((record) => {
    const path = String(record.path ?? record.key ?? "");
    if (/dim6_missing/.test(path)) return record.value !== true;
    if (/readyToImplement/.test(path)) return record.value !== 0 && record.value !== false;
    if (/gate_accepted|implementation_use|full_leaf|full_leaf_100/.test(path)) {
      return record.value !== false;
    }
    return false;
  });

  if (completed.length === 0) {
    pass(label);
    return;
  }
  fail(label, JSON.stringify(completed));
}

function validateMapDoc(text) {
  assertIncludes("map doc keeps hotspot command scope", text, [
    "# system hotspot",
    "get_hotspot_enabled",
    "set_hotspot_enabled",
    "hotspot_ready",
    "current-source-frontend-chain-closed-non-gating",
    "Windows/macOS 1.0.9 system hotspot",
  ]);

  assertIncludes("map doc keeps non-completion gate boundary", text, [
    "gate_accepted=false",
    "implementation_use=false",
    "dim6_missing=true",
    "full_leaf=false",
    "backend_platform_evidence_required=true",
    "full_leaf_100",
  ]);

  assertIncludes("map doc keeps real platform behavior out of scope", text, [
    "create_hotspot_window",
    "apply_native_hotspot_properties",
    "set_window_alpha",
    "Windows runtime discriminant",
    "post-write notify",
    "HotspotPlatformAdapter",
  ]);

  assertIncludes("map doc documents dedicated validator entry", text, [
    "npm run validate:frontend-system-hotspot-current-source",
  ]);
}

function validateCloseout(data) {
  assertTrue(
    "closeout schema matches current-source closeouts",
    data.schema === "open-aimami.frontend_current_source_closeouts.v1",
    `schema=${String(data.schema)}`,
  );

  const closeout = (data.closeouts ?? []).find(
    (entry) => entry.id === HOTSPOT_CLOSEOUT_ID,
  );
  assertTrue("hotspot closeout exists", Boolean(closeout));
  if (!closeout) return;

  assertTrue(
    "hotspot closeout remains partial",
    closeout.module === "system-hotspot-usage-mystery" &&
      closeout.status === "current-source-closed-partial",
    `module=${String(closeout.module)} status=${String(closeout.status)}`,
  );
  assertTrue(
    "hotspot closeout sidecar includes hotspot frontend chain report",
    (closeout.sidecarReports ?? []).includes(HOTSPOT_SIDECAR),
  );

  const sidecarSignal = findRequiredSourceSignal(closeout, HOTSPOT_SIDECAR);
  assertTrue("hotspot sidecar source signal exists", Boolean(sidecarSignal));
  if (sidecarSignal) {
    assertIncludes("hotspot sidecar source signal keeps commands and boundaries", (sidecarSignal.includes ?? []).join("\n"), [
      '"full_leaf": false',
      '"gate_report_fields_unchanged": true',
      '"backend_platform_evidence_required": true',
      '"current_source_ipc_commands"',
      ...HOTSPOT_COMMANDS,
    ]);
  }

  const systemSignal = findRequiredSourceSignal(closeout, files.systemService);
  assertTrue("system service source signal exists in closeout", Boolean(systemSignal));
  if (systemSignal) {
    assertIncludes("system service source signal keeps hotspot IPC commands", (systemSignal.includes ?? []).join("\n"), [
      'invokeIpc<CoreEnvelope<boolean>>("get_hotspot_enabled")',
      'invokeIpc<CoreEnvelope<boolean>>("set_hotspot_enabled", { enabled })',
      'invokeIpc<CoreEnvelope<boolean>>("hotspot_ready")',
    ]);
  }

  const settingsSignal = findRequiredSourceSignal(closeout, files.settingsService);
  assertTrue("settings service source signal exists in closeout", Boolean(settingsSignal));
  if (settingsSignal) {
    assertIncludes("settings service source signal keeps hotspot facade", JSON.stringify(settingsSignal), [
      "getHotspotEnabled: systemService.getHotspotEnabled",
      "setHotspotEnabled: systemService.setHotspotEnabled",
      "hotspotReady: systemService.hotspotReady",
    ]);
  }

  const mockSignal = findRequiredSourceSignal(closeout, files.commandMocks);
  assertTrue("mock source signal exists in closeout", Boolean(mockSignal));
  if (mockSignal) {
    assertIncludes("mock source signal keeps hotspot handlers", JSON.stringify(mockSignal), [
      "get_hotspot_enabled: hotspotEnabledHandler",
      "set_hotspot_enabled: setHotspotEnabledHandler",
      "hotspot_ready: hotspotReadyHandler",
      "const systemHotspotMockState",
    ]);
  }

  const expectedFailures = new Set(
    HOTSPOT_GATE_FAILURES.map(([path, value]) =>
      expectedGateFailureKey(path, value),
    ),
  );
  const actualHotspotFailures = (closeout.closedGateReportFailures ?? []).filter(
    (entry) => entry.report === HOTSPOT_GATE_REPORT,
  );
  const actualKeys = new Set(actualHotspotFailures.map(gateFailureKey));
  for (const expected of expectedFailures) {
    if (!actualKeys.has(expected)) {
      fail("hotspot closeout keeps expected non-complete gate failure", expected);
    }
  }
  for (const actual of actualKeys) {
    if (!expectedFailures.has(actual)) {
      fail("hotspot closeout does not add unexpected hotspot gate failure", actual);
    }
  }
  if (
    [...expectedFailures].every((expected) => actualKeys.has(expected)) &&
    [...actualKeys].every((actual) => expectedFailures.has(actual))
  ) {
    pass("hotspot closeout gate failure set is exact");
  }
  assertNoCompletedGateClaims(
    "hotspot closeout does not mark ready/gate/implementation/full leaf complete",
    actualHotspotFailures,
  );

  const nonClaims = JSON.stringify(closeout.nonClaims ?? []);
  assertIncludes("hotspot closeout keeps non-claim boundary", nonClaims, [
    "gate-report",
    "raw/internal dim6",
    "implementation_use",
    "full_leaf_100",
    "mystery_route_allowed",
  ]);
  assertIncludes("hotspot closeout reason remains current-source only", String(closeout.reason ?? ""), [
    "当前公开源码",
    "raw/internal dim6",
    "implementation_use",
    "full_leaf_100",
  ]);
}

function validateLeafQueue(queue) {
  assertTrue(
    "leaf queue schema matches restoration queue",
    queue.schema === "open-aimami.frontend_leaf_restoration_queue.v1",
    `schema=${String(queue.schema)}`,
  );
  assertTrue(
    "leaf queue fullLeaf100 remains false",
    queue.currentConclusion?.fullLeaf100 === false,
    `fullLeaf100=${String(queue.currentConclusion?.fullLeaf100)}`,
  );
  assertTrue(
    "leaf queue global gate flags remain non-complete",
    queue.gapAuditTotals?.implementation_use === false &&
      queue.gapAuditTotals?.gate_accepted === false &&
      queue.gapAuditTotals?.full_leaf_100 === false,
    JSON.stringify(queue.gapAuditTotals ?? {}),
  );

  const hotspotFailures = (queue.gateReportFailures ?? []).filter(
    (entry) => entry.area === "system-hotspot",
  );
  assertTrue(
    "leaf queue keeps system-hotspot failure records",
    hotspotFailures.length >= HOTSPOT_GATE_FAILURES.length,
    `count=${hotspotFailures.length}`,
  );

  const actualKeys = new Set(
    hotspotFailures.map(
      (entry) => `${entry.file}\u0000${entry.path}\u0000${JSON.stringify(entry.value)}`,
    ),
  );
  for (const [path, value] of HOTSPOT_GATE_FAILURES) {
    const expected = `${HOTSPOT_GATE_REPORT}\u0000${path}\u0000${JSON.stringify(value)}`;
    if (!actualKeys.has(expected)) {
      fail("leaf queue keeps expected system-hotspot non-complete boundary", expected);
    }
  }
  assertNoCompletedGateClaims(
    "leaf queue does not mark system-hotspot ready/gate/implementation/full leaf complete",
    hotspotFailures,
  );
}

function validateCurrentSourceChain(text) {
  assertIncludes("route registry keeps settings route as shell destination", text.routeRegistry, [
    'route: "settings"',
    'titleKey: "nav.settings"',
    "render: (context: RouteRenderContext) => <SettingsRoute {...context.settings} />",
    'preload: () => import("@/routes/desktop/main/settings/page")',
  ]);

  assertIncludes("settings route file stays route/module shell", text.settingsRoute, [
    "SettingsFeature",
    "export type SettingsRouteProps = SettingsFeatureProps",
    "return <SettingsFeature {...props} />",
  ]);
  assertNotIncludes("settings route shell does not own service/cache/hotspot logic", text.settingsRoute, [
    "settingsService",
    "systemService",
    "invokeIpc",
    "useQuery",
    "useMutation",
  ]);

  assertIncludes("settings query hook reads hotspot through cache helper", text.settingsQuery, [
    "useSettingsRuntimeState(supportsHotspot: boolean)",
    "SETTINGS_HAS_NOTCH_QUERY_KEY",
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "runSettingsQuery(queryClient, SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "settingsService.getHotspotEnabled()",
    "enabled: supportsHotspot && hasNotch",
  ]);
  assertIncludes("settings query hook keeps usage interval current-source peer", text.settingsQuery, [
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "settingsService.getUsageRefreshInterval()",
  ]);
  assertNotIncludes("settings query hook does not write TanStack cache directly", text.settingsQuery, [
    "setQueryData(",
    "invalidateQueries(",
    "cancelQueries(",
  ]);

  assertIncludes("settings hotspot mutation writes through mutation payload helper", text.settingsMutation, [
    "useSettingsHotspotMutation",
    "settingsService.setHotspotEnabled(enabled)",
    "beginSettingsMutation(SETTINGS_HOTSPOT_ENABLED_QUERY_KEY)",
    "queryClient.cancelQueries",
    "writeSettingsMutationPayload(",
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "context?.sequence",
  ]);
  assertIncludes("settings hotspot ready mutation remains explicit command action", text.settingsMutation, [
    "useSettingsHotspotReadyMutation",
    "settingsService.hotspotReady()",
  ]);
  assertNotIncludes("settings mutation hook does not bypass cache helper with setQueryData", text.settingsMutation, [
    "setQueryData(",
  ]);

  assertIncludes("settings cache owns hotspot query key and mutation fence", text.settingsCache, [
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "SETTINGS_USAGE_REFRESH_INTERVAL_QUERY_KEY",
    "const settingsQuerySequences = new Map<string, number>();",
    "const settingsMutationFences = new Map<string, number>();",
    "function canAcceptSettingsPayload",
    "beginSettingsMutation",
    "runSettingsQuery",
    "writeSettingsMutationPayload",
    "invalidateSettingsContractQueries",
  ]);

  assertIncludes("appearance panel only emits hotspot user intent", text.settingsAppearance, [
    "appearance.supportsHotspot",
    "appearance.hasNotch",
    "appearance.hotspotEnabled",
    "appearance.hotspotLoading",
    "appearance.hotspotPending",
    "onCheckedChange={controller.actions.setHotspotEnabled}",
  ]);

  assertIncludes("system service owns hotspot IPC command calls", text.systemService, [
    'invokeIpc<CoreEnvelope<boolean>>("has_notch")',
    'invokeIpc<CoreEnvelope<boolean>>("get_hotspot_enabled")',
    'invokeIpc<CoreEnvelope<boolean>>("set_hotspot_enabled", { enabled })',
    'invokeIpc<CoreEnvelope<boolean>>("hotspot_ready")',
  ]);
  assertNotIncludes("system service does not pull voice into hotspot boundary", text.systemService, [
    "voice",
    "Voice",
  ]);

  assertIncludes("settings service delegates hotspot to system service", text.settingsService, [
    "hasNotch: systemService.hasNotch",
    "getHotspotEnabled: systemService.getHotspotEnabled",
    "setHotspotEnabled: systemService.setHotspotEnabled",
    "hotspotReady: systemService.hotspotReady",
  ]);

  assertIncludes("typed mocks keep hotspot state and handlers", text.commandMocks, [
    "const systemHotspotMockState",
    "hotspotEnabledHandler",
    "setHotspotEnabledHandler",
    "hotspotReadyHandler",
    "hasNotchHandler",
    "get_hotspot_enabled: hotspotEnabledHandler",
    "set_hotspot_enabled: setHotspotEnabledHandler",
    "hotspot_ready: hotspotReadyHandler",
  ]);
}

function validateValidatorRegistration(packageJson, frontendAggregator, closeoutValidator, cacheValidator) {
  assertTrue(
    "package.json registers hotspot current-source validator",
    packageJson.scripts?.["validate:frontend-system-hotspot-current-source"] ===
      "node scripts/validate-frontend-system-hotspot-current-source.mjs",
    String(packageJson.scripts?.["validate:frontend-system-hotspot-current-source"]),
  );
  assertIncludes("frontend aggregate validator includes hotspot current-source validator", frontendAggregator, [
    '["validate-frontend-system-hotspot-current-source.mjs"]',
  ]);
  assertIncludes("closeout validator still owns combined system hotspot closeout checks", closeoutValidator, [
    "SYSTEM_HOTSPOT_USAGE_MYSTERY_CLOSEOUT_ID",
    HOTSPOT_CLOSEOUT_ID,
    "validateSystemHotspotUsageMysteryCloseout(closeout)",
    "get_hotspot_enabled",
    "set_hotspot_enabled",
    "hotspot_ready",
  ]);
  assertIncludes("cache validator still covers hotspot cache race contract", cacheValidator, [
    "SETTINGS_HOTSPOT_ENABLED_QUERY_KEY",
    "useSettingsHotspotMutation",
    "runSettingsRaceSimulation",
    "settings hotspot mutation payload",
  ]);
}

const mapDoc = readText(files.mapDoc);
const closeouts = readJson(files.closeouts);
const leafQueue = readJson(files.leafQueue);
const packageJson = readJson(files.packageJson);
const text = {
  closeoutValidator: readText(files.closeoutValidator),
  cacheValidator: readText(files.cacheValidator),
  frontendAggregator: readText(files.frontendAggregator),
  routeRegistry: readText(files.routeRegistry),
  settingsRoute: readText(files.settingsRoute),
  settingsQuery: readText(files.settingsQuery),
  settingsMutation: readText(files.settingsMutation),
  settingsCache: readText(files.settingsCache),
  settingsAppearance: readText(files.settingsAppearance),
  systemService: readText(files.systemService),
  settingsService: readText(files.settingsService),
  commandMocks: readText(files.commandMocks),
};

validateMapDoc(mapDoc);
validateCloseout(closeouts);
validateLeafQueue(leafQueue);
validateCurrentSourceChain(text);
validateValidatorRegistration(
  packageJson,
  text.frontendAggregator,
  text.closeoutValidator,
  text.cacheValidator,
);

if (failures.length > 0) {
  console.error("FAIL frontend system hotspot current-source validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  `PASS frontend system hotspot current-source validator (${toRepoPath(repoPath(files.mapDoc))})`,
);
