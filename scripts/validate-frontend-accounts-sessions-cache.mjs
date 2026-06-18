import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const modules = [
  {
    id: "accounts",
    cacheOwner: "AccountsCache",
    payloadType: "AccountsCachePayload",
    queryHook: "useAccountsPageQueries",
    mutationHook: "useAccountsPageMutations",
    nextSequence: "nextAccountsCacheSequence",
    listWriter: "writeAccountsSnapshotPayload",
    mutationWriter: "writeAccountsMutationPayload",
    dumpedInvalidator: "invalidateAccountsDumpedQueries",
    authoritativeKey: "AccountsAuthoritativeQueryKeys.snapshot",
    queryLoad: "accountsService.loadSnapshot",
    fullRefreshSource: 'source: "full-refresh"',
    mutationSequencePattern: /sequence:\s*write\.sequence/,
    mutationReceivedAtPattern: /receivedAt:\s*Date\.now\(\)/,
    extraMutationFragments: [
      "onMutate: prepareAccountsMutation",
      "writeMutationPayload(queryClient, payload, context)",
      "void invalidateAccountsDumpedQueries(queryClient)",
    ],
  },
  {
    id: "sessions",
    cacheOwner: "SessionsCache",
    payloadType: "SessionsCachePayload",
    queryHook: "useSessionsPageQueries",
    mutationHook: "useSessionsPageMutations",
    nextSequence: "nextSessionsCacheSequence",
    listWriter: "writeSessionsListPayload",
    mutationWriter: "writeSessionsMutationPayload",
    dumpedInvalidator: "invalidateSessionsDumpedQueries",
    authoritativeKey: "SessionsAuthoritativeQueryKeys.sessions",
    queryLoad: "sessionsService.loadSessions",
    fullRefreshSource: 'source: "full-refresh"',
    mutationSequencePattern: /sequence:\s*nextSessionsCacheSequence\(\)/,
    mutationReceivedAtPattern: /receivedAt:\s*Date\.now\(\)/,
    extraMutationFragments: [
      "writeSessionsMutationPayload(queryClient",
      "fenceAnalyticsPanelPayload(",
      "void invalidateSessionsDumpedQueries(queryClient)",
    ],
  },
];

const files = {
  packageJson: join(repoRoot, "package.json"),
  sharedCache: join(repoRoot, "src", "features", "_shared", "cache.ts"),
  accountsActionsPanel: join(repoRoot, "src", "features", "accounts", "panels", "actions.tsx"),
  accountsSessionDialog: join(repoRoot, "src", "features", "accounts", "dialogs", "session.tsx"),
};

function repoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function moduleFiles(id) {
  return {
    cache: join(repoRoot, "src", "features", id, "cache", "index.ts"),
    query: join(repoRoot, "src", "features", id, "hooks", "query.ts"),
    mutation: join(repoRoot, "src", "features", id, "hooks", "mutation.ts"),
    testsReadme: join(repoRoot, "src", "features", id, "__tests__", "README.md"),
  };
}

function readRequired(path) {
  if (!existsSync(path)) {
    failures.push(`缺少必需文件：${repoPath(path)}`);
    return "";
  }
  return readFileSync(path, "utf8");
}

function parseJson(path) {
  const content = readRequired(path);
  if (!content) return {};
  try {
    return JSON.parse(content);
  } catch (error) {
    failures.push(`${repoPath(path)} JSON 解析失败：${error.message}`);
    return {};
  }
}

function pass(label) {
  console.log(`通过：${label}`);
}

function fail(label, detail = "") {
  failures.push(`${label}${detail ? `：${detail}` : ""}`);
}

function assertIncludes(label, text, fragments) {
  const missing = fragments.filter((fragment) => !text.includes(fragment));
  if (missing.length === 0) {
    pass(label);
    return;
  }
  fail(label, `缺少片段 ${missing.map((item) => JSON.stringify(item)).join("、")}`);
}

function assertRegex(label, text, pattern) {
  if (pattern.test(text)) {
    pass(label);
    return;
  }
  fail(label, `未匹配 ${String(pattern)}`);
}

function assertNotRegex(label, text, pattern, detail) {
  if (!pattern.test(text)) {
    pass(label);
    return;
  }
  fail(label, detail);
}

function assertOrder(label, text, fragments) {
  let offset = 0;
  for (const fragment of fragments) {
    const index = text.indexOf(fragment, offset);
    if (index < 0) {
      fail(label, `缺少顺序片段 ${JSON.stringify(fragment)}`);
      return;
    }
    offset = index + fragment.length;
  }
  pass(label);
}

function countMatches(text, pattern) {
  return [...text.matchAll(pattern)].length;
}

function extractBalancedBlock(source, openBraceIndex) {
  if (openBraceIndex < 0) return "";

  let depth = 0;
  let inString = false;
  let stringQuote = "";
  let escaping = false;
  let inLineComment = false;
  let inBlockComment = false;

  for (let index = openBraceIndex; index < source.length; index += 1) {
    const char = source[index];
    const next = source[index + 1] ?? "";

    if (inLineComment) {
      if (char === "\n") inLineComment = false;
      continue;
    }
    if (inBlockComment) {
      if (char === "*" && next === "/") {
        inBlockComment = false;
        index += 1;
      }
      continue;
    }
    if (inString) {
      if (escaping) {
        escaping = false;
      } else if (char === "\\") {
        escaping = true;
      } else if (char === stringQuote) {
        inString = false;
        stringQuote = "";
      }
      continue;
    }
    if (char === "/" && next === "/") {
      inLineComment = true;
      index += 1;
      continue;
    }
    if (char === "/" && next === "*") {
      inBlockComment = true;
      index += 1;
      continue;
    }
    if (char === '"' || char === "'" || char === "`") {
      inString = true;
      stringQuote = char;
      continue;
    }
    if (char === "{") {
      depth += 1;
      continue;
    }
    if (char === "}") {
      depth -= 1;
      if (depth === 0) return source.slice(openBraceIndex + 1, index);
    }
  }

  return "";
}

function extractFunctionBody(source, functionName) {
  const marker = `function ${functionName}`;
  const markerIndex = source.indexOf(marker);
  if (markerIndex < 0) {
    fail(`${functionName} 函数存在`);
    return "";
  }
  const openBraceIndex = source.indexOf("{", markerIndex);
  const body = extractBalancedBlock(source, openBraceIndex);
  if (!body) fail(`${functionName} 函数体可解析`);
  return body;
}

function assertSharedCacheContract(sharedCache) {
  assertIncludes("共享 cache envelope 保留序列与 mutation fence 字段", sharedCache, [
    "source: ModuleCacheSource;",
    "sequence: number;",
    "receivedAt: number;",
    "mutationFenceAt?: number;",
  ]);
  assertIncludes("共享 cache source 覆盖刷新、mutation 和 replay", sharedCache, [
    '"full-refresh"',
    '"active-only-refresh"',
    '"runtime-event"',
    '"mutation-payload"',
    '"replay"',
  ]);

  const sharedStaleBody = extractFunctionBody(sharedCache, "isStaleEnvelope");
  assertIncludes("共享 stale gate 拒绝旧 sequence、旧 mutation fence 和 replay", sharedStaleBody, [
    "next.sequence < current.sequence",
    "next.source !== \"mutation-payload\"",
    "next.receivedAt < current.mutationFenceAt",
    "next.source === \"replay\"",
    "next.receivedAt <= current.receivedAt",
  ]);
}

function assertModuleCacheContract(module, sources) {
  const { id } = module;
  const staleBody = extractFunctionBody(sources.cache, "isStaleEnvelope");
  const fenceBody = extractFunctionBody(sources.cache, "fenceAuthoritativeEnvelope");
  const writerBody = extractFunctionBody(sources.cache, "writeAuthoritativeEnvelope");

  assertIncludes(`${id} cache owner 与 query key 集中在模块 cache`, sources.cache, [
    `createModuleCacheOwner<${module.payloadType}>("${id}")`,
    `export const ${module.cacheOwner}`,
    "export interface",
    module.nextSequence,
    module.listWriter,
    module.mutationWriter,
    module.dumpedInvalidator,
  ]);
  assertRegex(
    `${id} cache sequence 单调递增`,
    sources.cache,
    new RegExp(`function\\s+${module.nextSequence}\\s*\\(\\)\\s*\\{[\\s\\S]*?\\+=\\s*1[\\s\\S]*?return`),
  );
  assertIncludes(`${id} authoritative writer 写入 mutation fence`, writerBody, [
    'mutationFenceAt: write.source === "mutation-payload" ? write.receivedAt : undefined',
    "queryClient.setQueryData",
    "isStaleEnvelope(current, next)",
    "mutationFenceAt: next.mutationFenceAt ?? current?.mutationFenceAt",
  ]);
  assertIncludes(`${id} mutation payload 先写模块 state 再提升 authoritative fence`, sources.cache, [
    `${module.cacheOwner}.writeAuthoritativePayload(queryClient, write)`,
    `queryClient.setQueryData(${module.cacheOwner}.queryKeys.mutation, envelope)`,
    `fenceAuthoritativeEnvelope(queryClient, ${module.authoritativeKey}, envelope)`,
  ]);
  assertIncludes(`${id} authoritative fence 保留旧 payload 但提升 sequence/fence`, fenceBody, [
    "payload: null",
    "sequence: Math.max(current.sequence, mutationEnvelope.sequence)",
    "mutationFenceAt: mutationEnvelope.receivedAt",
  ]);
  assertIncludes(`${id} stale gate 覆盖旧 sequence、delayed response 和 replay`, staleBody, [
    "next.sequence < current.sequence",
    "current.mutationFenceAt",
    "next.source !== \"mutation-payload\"",
    "next.receivedAt < current.mutationFenceAt",
    "next.source === \"replay\"",
    "next.receivedAt <= current.receivedAt",
  ]);

  assertIncludes(`${id} query hook 经 cache helper 写 authoritative payload`, sources.query, [
    module.queryHook,
    module.nextSequence,
    module.queryLoad,
    module.listWriter,
    module.fullRefreshSource,
    "receivedAt: Date.now()",
  ]);
  assertOrder(`${id} query 先预留 sequence，再等待 load，再写 cache`, sources.query, [
    `const sequence = ${module.nextSequence}();`,
    `const payload = await ${module.queryLoad}`,
    `${module.listWriter}(queryClient`,
    "sequence,",
  ]);
  assertNotRegex(
    `${id} query hook 不绕过 cache helper 直接写 TanStack cache`,
    sources.query,
    /\bsetQueryData\s*\(/,
    "query hook 不得直接 setQueryData",
  );

  assertIncludes(`${id} mutation hook 使用 cache helper 和 refresh single-flight`, sources.mutation, [
    module.mutationHook,
    "const refreshPromiseRef = useRef<Promise<void> | null>(null);",
    "if (!refreshPromiseRef.current)",
    "refreshPromiseRef.current = Promise.all([",
    "return refreshPromiseRef.current",
    module.mutationWriter,
    module.dumpedInvalidator,
    ...module.extraMutationFragments,
  ]);
  assertRegex(
    `${id} mutation payload 使用受控 sequence`,
    sources.mutation,
    module.mutationSequencePattern,
  );
  assertRegex(
    `${id} mutation payload 使用接收时间参与 fence`,
    sources.mutation,
    module.mutationReceivedAtPattern,
  );
  assertNotRegex(
    `${id} mutation hook 不绕过 cache helper 直接写 TanStack cache`,
    sources.mutation,
    /\bsetQueryData\s*\(/,
    "mutation hook 不得直接 setQueryData",
  );
  assertIncludes(`${id} 测试说明保留状态竞态验收范围`, sources.testsReadme, [
    "stale",
    "delayed",
    "concurrency",
    "cancel",
    "event replay",
  ]);
}

function createEnvelopeHarness(moduleId) {
  let current;
  const trace = [];

  function write({ source, sequence, receivedAt, value }) {
    const next = {
      moduleId,
      payload: value,
      source,
      sequence,
      receivedAt,
      mutationFenceAt: source === "mutation-payload" ? receivedAt : undefined,
    };
    trace.push(`尝试:${source}:${sequence}:${receivedAt}:${value}`);

    if (current) {
      if (next.sequence < current.sequence) {
        trace.push(`拒绝:sequence:${value}`);
        return false;
      }
      if (
        current.mutationFenceAt &&
        next.source !== "mutation-payload" &&
        next.receivedAt < current.mutationFenceAt
      ) {
        trace.push(`拒绝:fence:${value}`);
        return false;
      }
      if (next.source === "replay" && next.receivedAt <= current.receivedAt) {
        trace.push(`拒绝:replay:${value}`);
        return false;
      }
    }

    current = {
      ...next,
      mutationFenceAt: next.mutationFenceAt ?? current?.mutationFenceAt,
    };
    trace.push(`写入:${value}`);
    return true;
  }

  function fenceMutation({ sequence, receivedAt }) {
    if (!current) {
      current = {
        moduleId,
        payload: null,
        source: "mutation-payload",
        sequence,
        receivedAt,
        mutationFenceAt: receivedAt,
      };
      trace.push(`fence:null:${sequence}:${receivedAt}`);
      return;
    }
    current = {
      ...current,
      sequence: Math.max(current.sequence, sequence),
      mutationFenceAt: receivedAt,
    };
    trace.push(`fence:current:${sequence}:${receivedAt}`);
  }

  return {
    trace,
    write,
    fenceMutation,
    value: () => current?.payload,
  };
}

function runEnvelopeRaceScenario(moduleId) {
  const harness = createEnvelopeHarness(moduleId);
  const steps = [
    { source: "full-refresh", sequence: 1, receivedAt: 100, value: "baseline", accepted: true },
    {
      source: "mutation-payload",
      sequence: 3,
      receivedAt: 300,
      value: "mutation-result",
      accepted: true,
    },
    {
      source: "full-refresh",
      sequence: 2,
      receivedAt: 250,
      value: "stale-refresh",
      accepted: false,
    },
    {
      source: "full-refresh",
      sequence: 4,
      receivedAt: 200,
      value: "delayed-refresh",
      accepted: false,
    },
    { source: "replay", sequence: 4, receivedAt: 300, value: "replayed-event", accepted: false },
    { source: "runtime-event", sequence: 5, receivedAt: 500, value: "fresh-event", accepted: true },
  ];

  for (const step of steps) {
    const accepted = harness.write(step);
    if (accepted !== step.accepted) {
      fail(`${moduleId} 竞态模拟`, `${step.value} 期望 accepted=${step.accepted} 实际 ${accepted}`);
    }
  }

  if (harness.value() === "fresh-event") {
    pass(`${moduleId} 竞态模拟拒绝 stale/delayed/replay 且接受新事件`);
  } else {
    fail(`${moduleId} 竞态模拟`, `最终值错误：${harness.value() ?? "<空>"}`);
  }
}

function runFenceScenario(moduleId) {
  const harness = createEnvelopeHarness(moduleId);
  harness.write({
    source: "full-refresh",
    sequence: 1,
    receivedAt: 100,
    value: "baseline",
  });
  harness.fenceMutation({ sequence: 5, receivedAt: 500 });
  const staleAccepted = harness.write({
    source: "full-refresh",
    sequence: 4,
    receivedAt: 700,
    value: "old-sequence-after-fence",
  });
  const delayedAccepted = harness.write({
    source: "runtime-event",
    sequence: 6,
    receivedAt: 400,
    value: "delayed-after-fence",
  });

  if (!staleAccepted && !delayedAccepted && harness.value() === "baseline") {
    pass(`${moduleId} mutation fence 模拟不让旧 sequence 或晚返回覆盖当前 payload`);
    return;
  }
  fail(`${moduleId} mutation fence 模拟`, harness.trace.join(" | "));
}

const packageJson = parseJson(files.packageJson);
const sharedCache = readRequired(files.sharedCache);
const accountsActionsPanel = readRequired(files.accountsActionsPanel);
const accountsSessionDialog = readRequired(files.accountsSessionDialog);

assertSharedCacheContract(sharedCache);

assertIncludes("accounts inline session import 提交前裁剪输入", accountsActionsPanel, [
  "const trimmedSessionJson = sessionJson.trim();",
  "const canUseSessionJson = trimmedSessionJson.length > 0;",
  "sessionJson: trimmedSessionJson,",
]);
assertIncludes("accounts session dialog 提交前裁剪输入", accountsSessionDialog, [
  "const payload = sessionJson.trim();",
  "if (!payload) return;",
  "sessionJson: payload,",
]);

for (const module of modules) {
  const paths = moduleFiles(module.id);
  const sources = {
    cache: readRequired(paths.cache),
    query: readRequired(paths.query),
    mutation: readRequired(paths.mutation),
    testsReadme: readRequired(paths.testsReadme),
  };
  assertModuleCacheContract(module, sources);
  runEnvelopeRaceScenario(module.id);
  runFenceScenario(module.id);
}

if (
  packageJson.scripts?.["validate:frontend-accounts-sessions-cache"] ===
  "node scripts/validate-frontend-accounts-sessions-cache.mjs"
) {
  pass("package.json 注册 accounts/sessions cache validator");
} else {
  fail("package.json 注册 accounts/sessions cache validator");
}

if (failures.length > 0) {
  console.error("FAIL accounts/sessions 前端 cache validator");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS accounts/sessions 前端 cache validator");
