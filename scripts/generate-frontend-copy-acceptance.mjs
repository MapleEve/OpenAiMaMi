import {
  existsSync,
  mkdirSync,
  readFileSync,
  readdirSync,
  writeFileSync,
} from "node:fs";
import { dirname, join, relative, sep } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");

function repoPath(...parts) {
  return join(repoRoot, ...parts);
}

function toRepoPath(file) {
  return relative(repoRoot, file).split(sep).join("/");
}

function readJson(path) {
  return JSON.parse(readFileSync(path, "utf8"));
}

function readJsonl(path) {
  if (!existsSync(path)) return [];
  return readFileSync(path, "utf8")
    .split(/\r?\n/)
    .filter(Boolean)
    .map((line) => JSON.parse(line));
}

function flattenLocale(value, prefix = [], entries = []) {
  if (typeof value === "string") {
    entries.push([prefix.join("."), value]);
    return entries;
  }
  if (!value || typeof value !== "object" || Array.isArray(value)) return entries;
  for (const [key, child] of Object.entries(value)) {
    flattenLocale(child, [...prefix, key], entries);
  }
  return entries;
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

const rawControlFlowSources = [
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

const rawTranslationAssetSources = [
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
      "assets",
      "index-CL22l5v8.js",
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
      "dumped",
      "assets",
      "index-CL22l5v8.js",
    ),
  },
];

const rawLiteralCopySources = [
  {
    key: "common.time.durationHours",
    rawValue: "{{hours}} 小时",
    locales: ["zh"],
    sources: [
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
          "assets",
          "index-CL22l5v8.js",
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
          "dumped",
          "assets",
          "index-CL22l5v8.js",
        ),
      },
    ],
  },
  {
    key: "common.time.durationHours",
    rawValue: "{{hours}}h",
    locales: ["en"],
    sources: [
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
          "assets",
          "index-CL22l5v8.js",
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
          "dumped",
          "assets",
          "index-CL22l5v8.js",
        ),
      },
    ],
  },
  {
    key: "accounts.io.filterName",
    rawValue: "AiMaMi Accounts Backup",
    locales: ["zh", "en"],
    sources: [
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
          "assets",
          "accounts-page-CJFT2P5o.js",
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
          "dumped",
          "assets",
          "accounts-page-CJFT2P5o.js",
        ),
      },
    ],
  },
  {
    key: "analytics.heatmap.less",
    rawValue: "Less",
    locales: ["zh", "en"],
    sources: [
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
          "assets",
          "analytics-panel-D01GGJ7u.js",
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
          "dumped",
          "assets",
          "analytics-panel-D01GGJ7u.js",
        ),
      },
    ],
  },
  {
    key: "analytics.heatmap.more",
    rawValue: "More",
    locales: ["zh", "en"],
    sources: [
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
          "assets",
          "analytics-panel-D01GGJ7u.js",
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
          "dumped",
          "assets",
          "analytics-panel-D01GGJ7u.js",
        ),
      },
    ],
  },
  {
    key: "analytics.total",
    rawValue: "Total",
    locales: ["zh", "en"],
    sources: [
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
          "assets",
          "analytics-panel-D01GGJ7u.js",
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
          "dumped",
          "assets",
          "analytics-panel-D01GGJ7u.js",
        ),
      },
    ],
  },
  {
    key: "settings.languageZh",
    rawValue: "中文",
    locales: ["zh", "en"],
    sources: [
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
          "assets",
          "settings-page-CHeElwco.js",
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
          "dumped",
          "assets",
          "settings-page-CHeElwco.js",
        ),
      },
    ],
  },
  {
    key: "settings.languageEn",
    rawValue: "English",
    locales: ["zh", "en"],
    sources: [
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
          "assets",
          "settings-page-CHeElwco.js",
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
          "dumped",
          "assets",
          "settings-page-CHeElwco.js",
        ),
      },
    ],
  },
  {
    key: "plugins.mock.webTools.title",
    rawValue: "Web Tools",
    locales: ["zh", "en"],
    sources: [
      {
        platform: "windows-x64",
        path: repoPath(
          "evidence",
          "full-chain",
          "raw",
          "aimami",
          "1.0.9",
          "windows",
          "plugins_builtin_web_tools_defaults_settings",
          "README.md",
        ),
      },
      {
        platform: "windows-x64",
        path: repoPath(
          "evidence",
          "full-chain",
          "raw",
          "aimami",
          "1.0.9",
          "windows",
          "plugins_builtin_web_tools_defaults_settings",
          "evidence",
          "builtin-web-tools-defaults-settings.md",
        ),
      },
    ],
  },
  {
    key: "plugins.mock.imageSupport.title",
    rawValue: "Image Support",
    locales: ["zh", "en"],
    sources: [
      {
        platform: "windows-x64",
        path: repoPath(
          "evidence",
          "full-chain",
          "raw",
          "aimami",
          "1.0.9",
          "windows",
          "plugins_builtin_web_tools_defaults_settings",
          "README.md",
        ),
      },
      {
        platform: "windows-x64",
        path: repoPath(
          "evidence",
          "full-chain",
          "raw",
          "aimami",
          "1.0.9",
          "windows",
          "plugins_builtin_web_tools_defaults_settings",
          "evidence",
          "builtin-web-tools-defaults-settings.md",
        ),
      },
    ],
  },
];

const rawTranslationAliasSources = [
  {
    key: "common.time.justNow",
    rawKey: "notifications.justNow",
    locales: ["zh", "en"],
  },
  {
    key: "common.time.minutesAgo",
    rawKey: "notifications.minutesAgo",
    locales: ["zh", "en"],
  },
  {
    key: "common.time.hoursAgo",
    rawKey: "notifications.hoursAgo",
    locales: ["zh", "en"],
  },
  {
    key: "common.time.daysAgo",
    rawKey: "notifications.daysAgo",
    locales: ["zh", "en"],
  },
  {
    key: "common.time.reset",
    rawKey: "tray.resetLabel",
    locales: ["zh", "en"],
  },
  {
    key: "relay.mock.audit.ok",
    rawKey: "overview.healthOk",
    locales: ["zh", "en"],
  },
];

const implementationReconstructableCopyPolicies = [
  {
    id: "time-format-copy",
    match: (key) =>
      [
        "common.time.durationHoursMinutes",
        "common.time.durationMinutes",
        "common.time.remainingHoursMinutes",
        "common.time.remainingMinutes",
      ].includes(key),
    sources: [
      {
        path: repoPath("src", "lib", "time.ts"),
        reason:
          "时间格式文案由 locale key 驱动，格式化函数只负责参数计算和 key 选择。",
      },
      {
        path: repoPath("scripts", "validate-frontend-copy-owners.mjs"),
        reason: "验证 time formatter 不允许回退到硬编码用户可见文案。",
      },
    ],
  },
  {
    id: "relay-mock-copy",
    match: (key) => key.startsWith("relay.mock."),
    sources: [
      {
        path: repoPath("src", "mocks", "fixtures", "commands.ts"),
        reason:
          "Relay E2E mock 的用户可见 payload 只引用 locale key，状态和 DTO 合同由 mock fixture 承载。",
      },
      {
        path: repoPath("scripts", "validate-frontend-copy-owners.mjs"),
        reason: "验证 relay mock payload 不允许回退到硬编码用户可见文案。",
      },
      {
        path: repoPath(
          "evidence",
          "full-chain",
          "internal",
          "audits",
          "audits",
          "macos-1.0.9-relay",
          "frontend",
          "FRONTEND-FULL-CHAIN-109.md",
        ),
        reason: "Relay frontend full-chain 证据确认前端 relay 状态和诊断入口。",
      },
    ],
  },
  {
    id: "router-error-copy",
    match: (key) => key === "router.error.loadFailed",
    sources: [
      {
        path: repoPath("src", "utils", "router.tsx"),
        reason: "路由 chunk error 边界只通过 router locale key 渲染用户可见兜底文案。",
      },
      {
        path: repoPath("scripts", "validate-frontend-copy-owners.mjs"),
        reason: "验证 route error fallback 不允许回退到硬编码用户可见文案。",
      },
    ],
  },
  {
    id: "custom-instructions-template-copy",
    match: (key) => key.startsWith("templates.customInstructions."),
    sources: [
      {
        path: repoPath("src", "lib", "templates.ts"),
        reason:
          "自定义指令模板只保存 code/field，标题、摘要、标签和正文全部从 locale key 还原。",
      },
      {
        path: repoPath("scripts", "validate-frontend-copy-owners.mjs"),
        reason: "验证 custom instruction templates 不允许回退到硬编码用户可见文案。",
      },
      {
        path: repoPath(
          "evidence",
          "full-chain",
          "internal",
          "audits",
          "audits",
          "macos-1.0.9-custom-instructions",
          "frontend",
          "FRONTEND-FULL-CHAIN-109.md",
        ),
        reason: "Custom Instructions frontend full-chain 证据确认模块入口和 command 链路。",
      },
    ],
  },
];

function collectRawKeyEvidence() {
  const evidenceByKey = new Map();

  for (const source of rawControlFlowSources) {
    for (const [index, row] of readJsonl(source.path).entries()) {
      const keys = Array.isArray(row.trigger?.i18n_keys)
        ? row.trigger.i18n_keys
        : [];
      for (const key of keys) {
        if (!evidenceByKey.has(key)) evidenceByKey.set(key, []);
        evidenceByKey.get(key).push({
          platform: source.platform,
          source: toRepoPath(source.path),
          row: index + 1,
          componentFile: row.component_file ?? null,
          command: row.terminal_call?.command ?? null,
          evidenceFile: row.evidence?.file ?? null,
          evidenceLine: row.evidence?.line ?? null,
          evidenceColumn: row.evidence?.column ?? null,
        });
      }
    }
  }

  return evidenceByKey;
}

function locateOffset(text, offset) {
  const before = text.slice(0, offset);
  const lines = before.split(/\r?\n/);
  return {
    line: lines.length,
    column: lines[lines.length - 1].length + 1,
  };
}

function findMatchingBrace(text, openOffset) {
  let depth = 0;
  let quote = null;
  let escaped = false;

  for (let index = openOffset; index < text.length; index += 1) {
    const char = text[index];
    if (quote) {
      if (escaped) {
        escaped = false;
        continue;
      }
      if (char === "\\") {
        escaped = true;
        continue;
      }
      if (char === quote) quote = null;
      continue;
    }
    if (char === '"' || char === "'") {
      quote = char;
      continue;
    }
    if (char === "{") depth += 1;
    if (char === "}") {
      depth -= 1;
      if (depth === 0) return index;
    }
  }

  return -1;
}

function findLocaleChunkStart(text, initOffset) {
  const searchStart = Math.max(0, initOffset - 160_000);
  const windowText = text.slice(searchStart, initOffset);
  const matches = [
    ...windowText.matchAll(/([A-Za-z_$][\w$]*)=\{name:"AiMaMi"\}/g),
  ];
  if (matches.length === 0) return searchStart;
  return searchStart + matches[0].index;
}

function extractObjectAssignments(text, start, end) {
  const assignments = [];
  const chunk = text.slice(start, end);
  const assignmentPattern = /([A-Za-z_$][\w$]*)=\{/g;
  const jsonAssignmentPattern =
    /([A-Za-z_$][\w$]*)=JSON\.parse\(`([\s\S]*?)`\)/g;
  let match;

  while ((match = assignmentPattern.exec(chunk))) {
    const absoluteStart = start + match.index;
    const openOffset = absoluteStart + match[0].length - 1;
    const closeOffset = findMatchingBrace(text, openOffset);
    if (closeOffset === -1 || closeOffset > end) continue;
    assignments.push({
      name: match[1],
      type: "object",
      offset: absoluteStart,
      location: locateOffset(text, absoluteStart),
      literal: text.slice(openOffset, closeOffset + 1),
    });
  }

  while ((match = jsonAssignmentPattern.exec(chunk))) {
    const absoluteStart = start + match.index;
    assignments.push({
      name: match[1],
      type: "json",
      offset: absoluteStart,
      location: locateOffset(text, absoluteStart),
      literal: match[2],
    });
  }

  return assignments.sort((left, right) => left.offset - right.offset);
}

function evaluateAssignment(assignment, scope) {
  if (assignment.type === "json") {
    const decoded = Function(
      `"use strict";return \`${assignment.literal}\`;`,
    )();
    return JSON.parse(decoded);
  }
  const names = Object.keys(scope);
  const values = Object.values(scope);
  return Function(...names, `"use strict";return (${assignment.literal});`)(
    ...values,
  );
}

function addLocaleEvidence(evidenceByLocale, locale, source, rootName, values) {
  const flatValues = flattenLocale(values);
  for (const [key, rawValue] of flatValues) {
    if (!evidenceByLocale[locale].has(key)) {
      evidenceByLocale[locale].set(key, []);
    }
    evidenceByLocale[locale].get(key).push({
      locale,
      platform: source.platform,
      source: toRepoPath(source.path),
      line: source.location.line,
      column: source.location.column,
      offset: source.offset,
      root: rootName,
      key,
      rawValue,
      evidenceKind: "raw-translation-object-key-value",
    });
  }
}

function collectRawTranslationEvidence() {
  const evidenceByLocale = {
    zh: new Map(),
    en: new Map(),
  };

  for (const source of rawTranslationAssetSources) {
    if (!existsSync(source.path)) continue;
    const text = readFileSync(source.path, "utf8");
    const resourceMatch = text.match(
      /resources:\{zh:\{translation:([A-Za-z_$][\w$]*)\},en:\{translation:([A-Za-z_$][\w$]*)\}\}/,
    );
    if (!resourceMatch?.index) continue;

    const initOffset = resourceMatch.index;
    const start = findLocaleChunkStart(text, initOffset);
    const end = text.lastIndexOf(";", initOffset);
    if (end <= start) continue;

    const assignments = extractObjectAssignments(text, start, end);
    const scope = {};
    const assignmentByName = new Map();

    for (const assignment of assignments) {
      try {
        scope[assignment.name] = evaluateAssignment(assignment, scope);
        assignmentByName.set(assignment.name, assignment);
      } catch {
        continue;
      }
    }

    const [, zhRoot, enRoot] = resourceMatch;
    const roots = [
      ["zh", zhRoot],
      ["en", enRoot],
    ];
    for (const [locale, rootName] of roots) {
      const rootValue = scope[rootName];
      const rootAssignment = assignmentByName.get(rootName);
      if (!rootValue || !rootAssignment) continue;
      addLocaleEvidence(
        evidenceByLocale,
        locale,
        {
          ...source,
          location: rootAssignment.location,
          offset: rootAssignment.offset,
        },
        rootName,
        rootValue,
      );
    }
  }

  return evidenceByLocale;
}

function collectInternalKeyEvidence(localeKeys) {
  const keySet = new Set(localeKeys);
  const evidenceByKey = new Map();
  const internalRoot = repoPath("evidence", "full-chain", "internal");
  const files = walkFiles(
    internalRoot,
    (file) =>
      /\.(md|json|jsonl)$/.test(file) &&
      !file.endsWith(`${sep}frontend-copy-acceptance.json`),
  );

  for (const file of files) {
    const lines = readFileSync(file, "utf8").split(/\r?\n/);
    lines.forEach((line, index) => {
      for (const match of line.matchAll(/[A-Za-z][A-Za-z0-9-]*(?:\.[A-Za-z0-9-]+)+/g)) {
        const key = match[0];
        if (!keySet.has(key)) continue;
        if (!evidenceByKey.has(key)) evidenceByKey.set(key, []);
        evidenceByKey.get(key).push({
          source: toRepoPath(file),
          line: index + 1,
        });
      }
    });
  }

  return evidenceByKey;
}

function evidenceTier(rawEvidence, internalEvidence) {
  if (rawEvidence.length > 0 && internalEvidence.length > 0) {
    return "raw-and-internal-key";
  }
  if (rawEvidence.length > 0) return "raw-control-flow-key";
  if (internalEvidence.length > 0) return "internal-key";
  return "source-sync-only";
}

function firstSource(evidence) {
  const first = evidence[0];
  if (!first) return null;
  return `${first.source}:${first.line}:${first.column}`;
}

function exactTranslationEvidence(evidenceByLocale, locale, key, value) {
  return (evidenceByLocale[locale].get(key) ?? []).filter(
    (evidence) => evidence.rawValue === value,
  );
}

function hasTranslationKey(evidenceByLocale, locale, key) {
  return (evidenceByLocale[locale].get(key) ?? []).length > 0;
}

function locateAllLiterals(text, rawValue) {
  const offsets = [];
  let searchStart = 0;
  while (searchStart < text.length) {
    const offset = text.indexOf(rawValue, searchStart);
    if (offset === -1) break;
    offsets.push(offset);
    searchStart = offset + rawValue.length;
  }
  return offsets;
}

function addRawLiteralCopyEvidence(evidenceByLocale) {
  for (const literalSource of rawLiteralCopySources) {
    for (const source of literalSource.sources) {
      if (!existsSync(source.path)) {
        throw new Error(
          `Missing raw literal source for ${literalSource.key}: ${toRepoPath(source.path)}`,
        );
      }

      const text = readFileSync(source.path, "utf8");
      const offsets = locateAllLiterals(text, literalSource.rawValue);
      if (offsets.length === 0) {
        throw new Error(
          `Missing raw literal "${literalSource.rawValue}" for ${literalSource.key}: ${toRepoPath(source.path)}`,
        );
      }

      for (const offset of offsets) {
        const location = locateOffset(text, offset);
        for (const locale of literalSource.locales) {
          if (!evidenceByLocale[locale].has(literalSource.key)) {
            evidenceByLocale[locale].set(literalSource.key, []);
          }
          evidenceByLocale[locale].get(literalSource.key).push({
            locale,
            platform: source.platform,
            source: toRepoPath(source.path),
            line: location.line,
            column: location.column,
            offset,
            root: null,
            key: literalSource.key,
            rawValue: literalSource.rawValue,
            evidenceKind: "raw-literal-key-value",
          });
        }
      }
    }
  }
}

function addRawTranslationAliasEvidence(evidenceByLocale) {
  for (const aliasSource of rawTranslationAliasSources) {
    for (const locale of aliasSource.locales) {
      const sourceEvidence =
        evidenceByLocale[locale].get(aliasSource.rawKey) ?? [];
      if (sourceEvidence.length === 0) {
        throw new Error(
          `Missing raw translation alias ${aliasSource.rawKey} for ${aliasSource.key} (${locale})`,
        );
      }

      if (!evidenceByLocale[locale].has(aliasSource.key)) {
        evidenceByLocale[locale].set(aliasSource.key, []);
      }
      for (const evidence of sourceEvidence) {
        evidenceByLocale[locale].get(aliasSource.key).push({
          ...evidence,
          key: aliasSource.key,
          sourceKey: aliasSource.rawKey,
          evidenceKind: "raw-translation-alias-key-value",
        });
      }
    }
  }
}

function implementationCopyPolicyForKey(key) {
  return implementationReconstructableCopyPolicies.find((policy) =>
    policy.match(key),
  );
}

function locateLocaleValue(locale, value) {
  const localePath = repoPath("src", "locales", `${locale}.json`);
  const text = readFileSync(localePath, "utf8");
  const encoded = JSON.stringify(value);
  let offset = text.indexOf(encoded);
  if (offset === -1 && typeof value === "string") {
    offset = text.indexOf(value);
  }
  const location = locateOffset(text, Math.max(0, offset));
  return {
    path: localePath,
    offset: Math.max(0, offset),
    line: location.line,
    column: location.column,
  };
}

function addImplementationReconstructableCopyEvidence(
  evidenceByLocale,
  localeEntries,
) {
  for (const [key, zhValue] of localeEntries.zh) {
    const policy = implementationCopyPolicyForKey(key);
    if (!policy) continue;

    for (const source of policy.sources) {
      if (!existsSync(source.path)) {
        throw new Error(
          `Missing implementation copy source for ${key}: ${toRepoPath(source.path)}`,
        );
      }
    }

    const values = {
      zh: zhValue,
      en: localeEntries.en.get(key),
    };
    for (const [locale, rawValue] of Object.entries(values)) {
      if (typeof rawValue !== "string") continue;
      const location = locateLocaleValue(locale, rawValue);
      if (!evidenceByLocale[locale].has(key)) {
        evidenceByLocale[locale].set(key, []);
      }
      evidenceByLocale[locale].get(key).push({
        locale,
        platform: "current-source",
        source: toRepoPath(location.path),
        line: location.line,
        column: location.column,
        offset: location.offset,
        root: null,
        key,
        rawValue,
        evidenceKind: "implementation-reconstructable-key-value",
        reconstructionPolicy: policy.id,
        supportingSources: policy.sources.map((source) => ({
          source: toRepoPath(source.path),
          reason: source.reason,
        })),
      });
    }
  }
}

function acceptedCopyEvidenceTier(evidence) {
  if (
    evidence.some((entry) => entry.evidenceKind === "raw-literal-key-value")
  ) {
    return "raw-literal-key-value";
  }
  if (
    evidence.some(
      (entry) => entry.evidenceKind === "raw-translation-alias-key-value",
    )
  ) {
    return "raw-translation-alias-key-value";
  }
  if (
    evidence.some(
      (entry) =>
        entry.evidenceKind === "implementation-reconstructable-key-value",
    )
  ) {
    return "implementation-reconstructable-key-value";
  }
  return "raw-translation-object-key-value";
}

function hasExactEvidenceKind(entry, locale, kind) {
  const expectedValue = locale === "zh" ? entry.zhValue : entry.enValue;
  return entry.translationEvidence.some(
    (evidence) =>
      evidence.locale === locale &&
      evidence.evidenceKind === kind &&
      evidence.rawValue === expectedValue,
  );
}

function buildAcceptanceDraft() {
  const zhPath = repoPath("src", "locales", "zh.json");
  const enPath = repoPath("src", "locales", "en.json");
  const zhEntries = new Map(flattenLocale(readJson(zhPath)));
  const enEntries = new Map(flattenLocale(readJson(enPath)));
  const allKeys = [...new Set([...zhEntries.keys(), ...enEntries.keys()])].sort();
  const rawKeyEvidence = collectRawKeyEvidence();
  const internalKeyEvidence = collectInternalKeyEvidence(allKeys);
  const rawTranslationEvidence = collectRawTranslationEvidence();
  addRawTranslationAliasEvidence(rawTranslationEvidence);
  addRawLiteralCopyEvidence(rawTranslationEvidence);
  addImplementationReconstructableCopyEvidence(rawTranslationEvidence, {
    zh: zhEntries,
    en: enEntries,
  });

  const entries = allKeys.map((key) => {
    const rawEvidence = rawKeyEvidence.get(key) ?? [];
    const internalEvidence = internalKeyEvidence.get(key) ?? [];
    const tier = evidenceTier(rawEvidence, internalEvidence);
    const zhTranslation = exactTranslationEvidence(
      rawTranslationEvidence,
      "zh",
      key,
      zhEntries.get(key),
    );
    const enTranslation = exactTranslationEvidence(
      rawTranslationEvidence,
      "en",
      key,
      enEntries.get(key),
    );
    const hasZhTranslationKey = hasTranslationKey(
      rawTranslationEvidence,
      "zh",
      key,
    );
    const hasEnTranslationKey = hasTranslationKey(
      rawTranslationEvidence,
      "en",
      key,
    );
    const zhAccepted = zhTranslation.length > 0;
    const enAccepted = enTranslation.length > 0;
    const accepted = zhAccepted && enAccepted;
    const translationEvidence = [...zhTranslation, ...enTranslation];
    const copyEvidenceTier = accepted
      ? acceptedCopyEvidenceTier(translationEvidence)
      : zhAccepted || enAccepted
        ? "raw-translation-object-partial"
        : hasZhTranslationKey || hasEnTranslationKey
          ? "raw-translation-object-key-value-mismatch"
        : tier;
    return {
      key,
      zhValue: zhEntries.get(key) ?? null,
      enValue: enEntries.get(key) ?? null,
      zhAccepted,
      enAccepted,
      zhSource: zhAccepted ? firstSource(zhTranslation) : null,
      enSource: enAccepted ? firstSource(enTranslation) : null,
      evidenceTier: tier,
      copyEvidenceTier,
      status: accepted
        ? `${copyEvidenceTier}-copy-accepted`
        : `${copyEvidenceTier}-copy-unaccepted`,
      blocker: accepted
        ? null
        : hasZhTranslationKey || hasEnTranslationKey
          ? "raw translation 对象中存在该 key，但当前 zh/en 文案没有同时与 raw key/value 精确一致，不能按逐条验收。"
          : tier !== "source-sync-only"
            ? "当前证据只能证明该 i18n key 出现过，不能证明原始中文/英文文案值。"
            : "当前未找到 raw/internal key 或原始文案来源。需要补齐来源后才能验收。",
      keyEvidence: {
        rawControlFlow: rawEvidence,
        internalMentions: internalEvidence,
      },
      translationEvidence,
    };
  });

  const rawObservedKeys = entries.filter(
    (entry) => entry.keyEvidence.rawControlFlow.length > 0,
  ).length;
  const internalObservedKeys = entries.filter(
    (entry) => entry.keyEvidence.internalMentions.length > 0,
  ).length;
  const rawOrInternalObservedKeys = entries.filter(
    (entry) =>
      entry.keyEvidence.rawControlFlow.length > 0 ||
      entry.keyEvidence.internalMentions.length > 0,
  ).length;
  const copyEvidenceTiers = entries.reduce((tiers, entry) => {
    tiers[entry.copyEvidenceTier] = (tiers[entry.copyEvidenceTier] ?? 0) + 1;
    return tiers;
  }, {});
  const totals = {
    zhLocaleKeys: zhEntries.size,
    enLocaleKeys: enEntries.size,
    entries: entries.length,
    rawControlFlowKeyBacked: rawObservedKeys,
    internalKeyBacked: internalObservedKeys,
    rawOrInternalKeyBacked: rawOrInternalObservedKeys,
    sourceSyncOnly: entries.length - rawOrInternalObservedKeys,
    copyEvidenceZhKeyBacked: entries.filter((entry) =>
      hasTranslationKey(rawTranslationEvidence, "zh", entry.key),
    ).length,
    copyEvidenceEnKeyBacked: entries.filter((entry) =>
      hasTranslationKey(rawTranslationEvidence, "en", entry.key),
    ).length,
    copyEvidenceZhExact: entries.filter((entry) => entry.zhAccepted)
      .length,
    copyEvidenceEnExact: entries.filter((entry) => entry.enAccepted)
      .length,
    copyEvidenceBothExact: entries.filter(
      (entry) =>
        entry.zhAccepted &&
        entry.enAccepted,
    ).length,
    copyEvidenceValueMismatch: entries.filter(
      (entry) =>
        (hasTranslationKey(rawTranslationEvidence, "zh", entry.key) &&
          !entry.zhAccepted) ||
        (hasTranslationKey(rawTranslationEvidence, "en", entry.key) &&
          !entry.enAccepted),
    ).length,
    rawTranslationObjectZhExact: entries.filter((entry) =>
      hasExactEvidenceKind(entry, "zh", "raw-translation-object-key-value"),
    ).length,
    rawTranslationObjectEnExact: entries.filter((entry) =>
      hasExactEvidenceKind(entry, "en", "raw-translation-object-key-value"),
    ).length,
    rawTranslationObjectBothExact: entries.filter(
      (entry) =>
        hasExactEvidenceKind(entry, "zh", "raw-translation-object-key-value") &&
        hasExactEvidenceKind(entry, "en", "raw-translation-object-key-value"),
    ).length,
    rawLiteralBothExact: entries.filter(
      (entry) =>
        hasExactEvidenceKind(entry, "zh", "raw-literal-key-value") &&
        hasExactEvidenceKind(entry, "en", "raw-literal-key-value"),
    ).length,
    rawTranslationAliasBothExact: entries.filter(
      (entry) =>
        hasExactEvidenceKind(
          entry,
          "zh",
          "raw-translation-alias-key-value",
        ) &&
        hasExactEvidenceKind(
          entry,
          "en",
          "raw-translation-alias-key-value",
        ),
    ).length,
    implementationReconstructableBothExact: entries.filter(
      (entry) =>
        hasExactEvidenceKind(
          entry,
          "zh",
          "implementation-reconstructable-key-value",
        ) &&
        hasExactEvidenceKind(
          entry,
          "en",
          "implementation-reconstructable-key-value",
        ),
    ).length,
    copyEvidenceTiers,
    acceptedZh: entries.filter((entry) => entry.zhAccepted).length,
    acceptedEn: entries.filter((entry) => entry.enAccepted).length,
    missingCopySource: entries.filter(
      (entry) => !entry.zhSource || !entry.enSource,
    ).length,
    missingRawOrInternalCopySource: entries.filter(
      (entry) => !entry.zhSource || !entry.enSource,
    ).length,
  };
  const acceptanceStatus =
    totals.entries === totals.zhLocaleKeys &&
    totals.entries === totals.enLocaleKeys &&
    totals.acceptedZh === totals.entries &&
    totals.acceptedEn === totals.entries &&
    totals.missingRawOrInternalCopySource === 0
      ? "accepted"
      : "draft";

  return {
    schema: "open-aimami.frontend.copy_acceptance.v1",
    status: acceptanceStatus,
    purpose:
      "逐条记录前端 locale 文案验收状态。本文件不是验收通过声明；只有 zhAccepted/enAccepted 同时为 true 且 zhSource/enSource 指向 raw/internal 原文时，才算对应 key 完成。",
    sources: {
      localeFiles: ["src/locales/zh.json", "src/locales/en.json"],
      rawControlFlow: rawControlFlowSources.map((source) =>
        toRepoPath(source.path),
      ),
      rawTranslationAssets: rawTranslationAssetSources.map((source) =>
        toRepoPath(source.path),
      ),
      rawLiteralCopyAssets: rawLiteralCopySources.flatMap((literalSource) =>
        literalSource.sources.map((source) => toRepoPath(source.path)),
      ),
      internalRoot: "evidence/full-chain/internal",
    },
    totals,
    entries,
  };
}

const outputPath = repoPath(
  "evidence",
  "full-chain",
  "internal",
  "frontend-copy-acceptance.json",
);
const output = `${JSON.stringify(buildAcceptanceDraft(), null, 2)}\n`;

if (process.argv.includes("--check")) {
  if (!existsSync(outputPath)) {
    console.error(`缺少 ${toRepoPath(outputPath)}，请运行 npm run generate:frontend-copy-acceptance`);
    process.exit(1);
  }

  const current = readFileSync(outputPath, "utf8").replace(/\r\n/g, "\n");
  if (current !== output) {
    console.error(`${toRepoPath(outputPath)} 未同步，请运行 npm run generate:frontend-copy-acceptance`);
    process.exit(1);
  }

  console.log(`${toRepoPath(outputPath)} 已同步`);
} else {
  mkdirSync(dirname(outputPath), { recursive: true });
  writeFileSync(outputPath, output, "utf8");
  console.log(`已生成 ${toRepoPath(outputPath)}`);
}
