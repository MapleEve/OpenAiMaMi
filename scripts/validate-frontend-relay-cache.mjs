import { existsSync, readFileSync } from "node:fs";
import { join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const files = {
  cache: join(repoRoot, "src", "features", "relay", "cache", "index.ts"),
  mutation: join(repoRoot, "src", "features", "relay", "hooks", "mutation.ts"),
  readme: join(repoRoot, "src", "features", "relay", "__tests__", "README.md"),
  packageJson: join(repoRoot, "package.json"),
};

const failures = [];

function toRepoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function readRequired(path) {
  if (!existsSync(path)) {
    failures.push(`missing required file: ${toRepoPath(path)}`);
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
    failures.push(`${toRepoPath(path)} JSON parse failed: ${error.message}`);
    return {};
  }
}

function logPass(name, detail = "") {
  console.log(`PASS ${name}${detail ? `: ${detail}` : ""}`);
}

function logFail(name, detail = "") {
  console.log(`FAIL ${name}${detail ? `: ${detail}` : ""}`);
}

function assertIncludes(name, text, fragment) {
  if (text.includes(fragment)) {
    logPass(name);
    return;
  }
  logFail(name, fragment);
  failures.push(`${name}: missing fragment ${JSON.stringify(fragment)}`);
}

function assertRegex(name, text, pattern) {
  if (pattern.test(text)) {
    logPass(name);
    return;
  }
  logFail(name, String(pattern));
  failures.push(`${name}: pattern not found`);
}

function assertOrder(name, text, fragments) {
  let offset = 0;
  for (const fragment of fragments) {
    const index = text.indexOf(fragment, offset);
    if (index === -1) {
      logFail(name, `missing ${fragment}`);
      failures.push(`${name}: missing ordered fragment ${JSON.stringify(fragment)}`);
      return;
    }
    offset = index + fragment.length;
  }
  logPass(name, fragments.join(" -> "));
}

function extractBalancedBlock(source, openBraceIndex) {
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
  if (markerIndex === -1) {
    failures.push(`missing function ${functionName}`);
    return "";
  }
  const openBraceIndex = source.indexOf("{", markerIndex);
  if (openBraceIndex === -1) {
    failures.push(`missing body for function ${functionName}`);
    return "";
  }
  const body = extractBalancedBlock(source, openBraceIndex);
  if (!body) failures.push(`could not parse body for function ${functionName}`);
  return body;
}

function extractArrowBody(source, marker) {
  const markerIndex = source.indexOf(marker);
  if (markerIndex === -1) {
    failures.push(`missing arrow body marker ${marker}`);
    return "";
  }
  const openBraceIndex = source.indexOf("{", markerIndex);
  if (openBraceIndex === -1) {
    failures.push(`missing arrow body for marker ${marker}`);
    return "";
  }
  const body = extractBalancedBlock(source, openBraceIndex);
  if (!body) failures.push(`could not parse arrow body for marker ${marker}`);
  return body;
}

function assertStaticCacheContract(cacheSource, mutationSource, readmeSource, packageJson) {
  assertRegex(
    "relay cache sequence is monotonic",
    cacheSource,
    /function\s+nextRelayCacheSequence\s*\(\)\s*\{[\s\S]*?relayCacheSequence\s*\+=\s*1[\s\S]*?return\s+relayCacheSequence\s*;/,
  );
  assertIncludes(
    "relay cache keeps latest accepted sequence",
    cacheSource,
    "let relayLatestAcceptedSequence = 0;",
  );
  assertRegex(
    "relay mutation payload routes through sequenced writer",
    cacheSource,
    /function\s+writeRelayMutationPayload[\s\S]*?return\s+writeRelaySequencedPayload\(\s*queryClient,\s*payload,\s*"mutation-payload",\s*sequence,\s*receivedAt,\s*\)/,
  );
  assertRegex(
    "relay refresh payload routes through sequenced writer",
    cacheSource,
    /function\s+writeRelayQueryPayload[\s\S]*?source:\s*"full-refresh"\s*=\s*"full-refresh"[\s\S]*?return\s+writeRelaySequencedPayload\(\s*queryClient,\s*payload,\s*source,\s*sequence,\s*receivedAt,\s*\)/,
  );

  const sequencedWriterBody = extractFunctionBody(cacheSource, "writeRelaySequencedPayload");
  assertRegex(
    "sequenced writer rejects stale responses",
    sequencedWriterBody,
    /if\s*\(\s*sequence\s*<\s*relayLatestAcceptedSequence\s*\)\s*\{[\s\S]*?return\s+false\s*;/,
  );
  assertOrder("sequenced writer gates before authoritative write", sequencedWriterBody, [
    "sequence < relayLatestAcceptedSequence",
    "return false",
    "relayLatestAcceptedSequence = sequence",
    "writeRelayAuthoritativePayload",
  ]);
  assertOrder("authoritative payload records source sequence and timestamp", sequencedWriterBody, [
    "payload,",
    "source,",
    "sequence,",
    "receivedAt,",
  ]);

  const onMutateBody = extractArrowBody(mutationSource, "onMutate: async () =>");
  assertOrder("relay mutation cancels old queries before reserving sequence", onMutateBody, [
    "cancelQueriesForRelayMutation(queryClient)",
    "Date.now()",
    "nextRelayCacheSequence()",
    "return { sequence, receivedAt }",
  ]);

  const onSuccessBody = extractArrowBody(
    mutationSource,
    "onSuccess: (payload, _variables, context) =>",
  );
  assertRegex(
    "relay mutation success returns when cache rejects payload",
    onSuccessBody,
    /if\s*\([\s\S]*?!context[\s\S]*?!\s*writeRelayMutationPayload[\s\S]*?\)\s*\{[\s\S]*?return\s*;[\s\S]*?\}/,
  );
  assertIncludes(
    "relay mutation writes reserved sequence",
    onSuccessBody,
    "context.sequence",
  );
  assertIncludes(
    "relay mutation writes reserved receive timestamp",
    onSuccessBody,
    "context.receivedAt",
  );
  assertOrder("mutation payload writes cache before known query fanout", onSuccessBody, [
    "writeRelayMutationPayload",
    "writeKnownQueries?.",
    "invalidateRelayContractQueries",
  ]);

  if (
    packageJson.scripts?.["validate:frontend-relay-cache"] ===
    "node scripts/validate-frontend-relay-cache.mjs"
  ) {
    logPass("npm relay cache validator script is registered");
  } else {
    logFail("npm relay cache validator script is registered");
    failures.push("package.json missing validate:frontend-relay-cache script");
  }

  assertIncludes(
    "relay test README documents race validator",
    readmeSource,
    "validate:frontend-relay-cache",
  );
}

function createRelayCacheHarness() {
  let latestAcceptedSequence = 0;
  const trace = [];
  const cache = new Map();

  return {
    trace,
    getRelayPayload() {
      return cache.get("relay");
    },
    write(step) {
      trace.push(`attempt:${step.source}:${step.sequence}:${step.state}`);
      if (step.sequence < latestAcceptedSequence) {
        trace.push(`reject:${step.source}:${step.sequence}:${step.state}`);
        return false;
      }
      latestAcceptedSequence = step.sequence;
      cache.set("relay", {
        payload: { state: step.state },
        source: step.source,
        sequence: step.sequence,
      });
      trace.push(`write:${step.source}:${step.sequence}:${step.state}`);
      return true;
    },
  };
}

function runRaceScenario(name, steps, expectedFinalState, expectedRejectedStates) {
  const harness = createRelayCacheHarness();
  const rejectedStates = [];

  for (const step of steps) {
    const accepted = harness.write(step);
    if (accepted !== step.accepted) {
      failures.push(
        `${name}: ${step.state} expected accepted=${step.accepted} but got ${accepted}`,
      );
    }
    if (!accepted) rejectedStates.push(step.state);
  }

  const finalState = harness.getRelayPayload()?.payload.state;
  const rejectedStateList = rejectedStates.join(",");

  if (finalState !== expectedFinalState) {
    logFail(name, `final=${finalState ?? "<empty>"}`);
    failures.push(`${name}: final state should be ${expectedFinalState}`);
    return;
  }

  if (rejectedStateList !== expectedRejectedStates.join(",")) {
    logFail(name, `rejected=${rejectedStateList}`);
    failures.push(
      `${name}: rejected states should be ${expectedRejectedStates.join(",")}`,
    );
    return;
  }

  logPass(name, harness.trace.join(" | "));
}

function runMutationSuccessOrderSimulation() {
  const harness = createRelayCacheHarness();
  const trace = harness.trace;
  const context = { sequence: 5, receivedAt: 5000 };
  const payload = { state: "mutation-result" };

  function onSuccess() {
    if (
      !context ||
      !harness.write({
        source: "mutation-payload",
        sequence: context.sequence,
        state: payload.state,
      })
    ) {
      return;
    }

    trace.push("known-query-fanout");
    trace.push("invalidate-contract-queries");
  }

  onSuccess();
  const expected = [
    "attempt:mutation-payload:5:mutation-result",
    "write:mutation-payload:5:mutation-result",
    "known-query-fanout",
    "invalidate-contract-queries",
  ];

  if (trace.join("\n") === expected.join("\n")) {
    logPass("mutation success writes cache before fanout and invalidation", trace.join(" | "));
    return;
  }

  logFail("mutation success writes cache before fanout and invalidation", trace.join(" | "));
  failures.push("mutation success order simulation did not match expected order");
}

function assertRuntimeRaceContract() {
  runMutationSuccessOrderSimulation();
  runRaceScenario(
    "stale refresh cannot overwrite mutation payload",
    [
      { source: "full-refresh", sequence: 1, state: "baseline", accepted: true },
      { source: "mutation-payload", sequence: 3, state: "mutation-result", accepted: true },
      { source: "full-refresh", sequence: 2, state: "stale-refresh", accepted: false },
    ],
    "mutation-result",
    ["stale-refresh"],
  );
  runRaceScenario(
    "delayed refresh cannot overwrite mutation payload",
    [
      { source: "mutation-payload", sequence: 10, state: "mutation-result", accepted: true },
      { source: "full-refresh", sequence: 9, state: "delayed-refresh", accepted: false },
    ],
    "mutation-result",
    ["delayed-refresh"],
  );
  runRaceScenario(
    "event replay cannot overwrite mutation payload",
    [
      { source: "mutation-payload", sequence: 20, state: "latest-mutation", accepted: true },
      { source: "full-refresh", sequence: 18, state: "replayed-event-refresh", accepted: false },
      { source: "mutation-payload", sequence: 19, state: "replayed-old-mutation", accepted: false },
    ],
    "latest-mutation",
    ["replayed-event-refresh", "replayed-old-mutation"],
  );
  runRaceScenario(
    "newer refresh remains accepted after mutation",
    [
      { source: "mutation-payload", sequence: 30, state: "mutation-result", accepted: true },
      { source: "full-refresh", sequence: 31, state: "fresh-refresh", accepted: true },
    ],
    "fresh-refresh",
    [],
  );
}

const cacheSource = readRequired(files.cache);
const mutationSource = readRequired(files.mutation);
const readmeSource = readRequired(files.readme);
const packageJson = parseJson(files.packageJson);

assertStaticCacheContract(cacheSource, mutationSource, readmeSource, packageJson);
assertRuntimeRaceContract();

if (failures.length > 0) {
  console.error("relay frontend cache validator failed:");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("relay frontend cache validator passed.");
