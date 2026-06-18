import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const failures = [];

const commandNames = [
  "load_mcp_servers",
  "upsert_mcp_server",
  "set_mcp_server_enabled",
  "remove_mcp_server",
];

const commandExpectations = {
  load_mcp_servers: {
    owner: {
      windows: "0x1402758d0",
      macos: "0x10015be84",
    },
    threading: "sync mutex/TOML parse; no async/spawn",
    sideEffects: ["read config.toml MCP server blocks", "no write/network/process"],
    manifestInterface: ["repo/path state only", "McpServerSummary list"],
  },
  upsert_mcp_server: {
    owner: {
      windows: "0x140277e50",
      macos: "0x10015c8d4",
    },
    threading: "sync mutex/TOML parse-edit-save; no async/spawn",
    sideEffects: ["insert or replace MCP server block", "durable config.toml write"],
    manifestInterface: ["name, transport/mode", "headers/environment"],
  },
  set_mcp_server_enabled: {
    owner: {
      windows: "0x14027ff70",
      macos: "0x10015d360",
    },
    threading: "sync mutex/load-find-upsert; no async/spawn",
    sideEffects: ["toggle enabled on existing MCP server", "durable config.toml write"],
    manifestInterface: ["name, enabled", "not-found error"],
  },
  remove_mcp_server: {
    owner: {
      windows: "0x140279ad0",
      macos: "0x10015c300",
    },
    threading: "sync mutex/TOML remove-save; no async/spawn",
    sideEffects: ["remove MCP server block", "durable config.toml write"],
    manifestInterface: ["name", "success/error envelope"],
  },
};

const files = {
  evidenceMap: join(repoRoot, "docs", "reconstruction", "mcp-current-source-evidence-map.md"),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  windowsGate: join(
    repoRoot,
    "evidence",
    "full-chain",
    "internal",
    "audits",
    "audits",
    "windows-1.0.9-mcp",
    "gate-report.json",
  ),
  macosGate: join(
    repoRoot,
    "evidence",
    "full-chain",
    "internal",
    "audits",
    "audits",
    "macos-1.0.9-mcp",
    "gate-report.json",
  ),
  loadManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "mcp",
    "load_mcp_servers",
    "manifest.json",
  ),
  upsertManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "mcp",
    "upsert_mcp_server",
    "manifest.json",
  ),
  setEnabledManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "mcp",
    "set_mcp_server_enabled",
    "manifest.json",
  ),
  removeManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "mcp",
    "remove_mcp_server",
    "manifest.json",
  ),
  lib: join(backendRoot, "lib.rs"),
  command: join(backendRoot, "commands", "mcp.rs"),
  usecase: join(backendRoot, "application", "usecase", "mcp.rs"),
  contracts: join(backendRoot, "contracts", "mcp.rs"),
  repository: join(backendRoot, "repository", "mcp.rs"),
  coreParser: join(backendRoot, "core", "parser", "mcp.rs"),
  coreModel: join(backendRoot, "core", "model", "mcp.rs"),
};

const manifestFiles = [
  ["load_mcp_servers", files.loadManifest],
  ["upsert_mcp_server", files.upsertManifest],
  ["set_mcp_server_enabled", files.setEnabledManifest],
  ["remove_mcp_server", files.removeManifest],
];

const forbiddenProjectNames = [
  new RegExp(["Codex", "Manager"].join(""), "g"),
  new RegExp(`\\b${["C", "5"].join("")}\\b`, "g"),
  new RegExp(["lobe", "hub"].join(""), "gi"),
];

function toRelative(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function readRequired(path, label) {
  if (!existsSync(path)) {
    failures.push(`缺少 ${label}: ${toRelative(path)}`);
    return "";
  }

  return readFileSync(path, "utf8");
}

function readJsonRequired(path, label) {
  const content = readRequired(path, label);
  if (!content) {
    return null;
  }

  try {
    return JSON.parse(content);
  } catch (error) {
    failures.push(`${toRelative(path)} 不是有效 JSON: ${error.message}`);
    return null;
  }
}

function lineNumberAt(content, index) {
  let line = 1;
  for (let cursor = 0; cursor < index; cursor += 1) {
    if (content[cursor] === "\n") {
      line += 1;
    }
  }
  return line;
}

function rawStringEndMarker(content, start) {
  if (content[start] !== "r") {
    return null;
  }

  let cursor = start + 1;
  while (content[cursor] === "#") {
    cursor += 1;
  }

  if (content[cursor] !== "\"") {
    return null;
  }

  return {
    contentStart: cursor + 1,
    marker: `"${"#".repeat(cursor - start - 1)}`,
  };
}

function blankRange(output, start, end) {
  for (let index = start; index < end; index += 1) {
    output[index] = output[index] === "\n" ? "\n" : " ";
  }
}

function stripRustComments(content) {
  const output = content.split("");
  let cursor = 0;

  while (cursor < content.length) {
    const raw = rawStringEndMarker(content, cursor);
    if (raw) {
      const rawEnd = content.indexOf(raw.marker, raw.contentStart);
      cursor = rawEnd === -1 ? content.length : rawEnd + raw.marker.length;
      continue;
    }

    if (content[cursor] === "b" && content[cursor + 1] === "r") {
      const rawByte = rawStringEndMarker(content, cursor + 1);
      if (rawByte) {
        const rawByteEnd = content.indexOf(rawByte.marker, rawByte.contentStart);
        cursor = rawByteEnd === -1 ? content.length : rawByteEnd + rawByte.marker.length;
        continue;
      }
    }

    if (content[cursor] === "\"") {
      cursor += 1;
      while (cursor < content.length) {
        if (content[cursor] === "\\") {
          cursor += 2;
          continue;
        }
        if (content[cursor] === "\"") {
          cursor += 1;
          break;
        }
        cursor += 1;
      }
      continue;
    }

    if (content[cursor] === "/" && content[cursor + 1] === "/") {
      const start = cursor;
      cursor += 2;
      while (cursor < content.length && content[cursor] !== "\n") {
        cursor += 1;
      }
      blankRange(output, start, cursor);
      continue;
    }

    if (content[cursor] === "/" && content[cursor + 1] === "*") {
      const start = cursor;
      cursor += 2;
      let depth = 1;
      while (cursor < content.length && depth > 0) {
        if (content[cursor] === "/" && content[cursor + 1] === "*") {
          depth += 1;
          cursor += 2;
        } else if (content[cursor] === "*" && content[cursor + 1] === "/") {
          depth -= 1;
          cursor += 2;
        } else {
          cursor += 1;
        }
      }
      blankRange(output, start, cursor);
      continue;
    }

    cursor += 1;
  }

  return output.join("");
}

function findMatches(content, pattern) {
  const flags = pattern.flags.includes("g") ? pattern.flags : `${pattern.flags}g`;
  const regex = new RegExp(pattern.source, flags);
  const matches = [];
  let match;

  while ((match = regex.exec(content)) !== null) {
    matches.push(match.index);
    if (match[0].length === 0) {
      regex.lastIndex += 1;
    }
  }

  return matches;
}

function requireText(label, path, content, text, reason) {
  if (!content.includes(text)) {
    failures.push(`${toRelative(path)} 缺少 ${label}: ${reason}`);
  }
}

function requirePattern(label, path, content, pattern, reason) {
  if (!pattern.test(content)) {
    failures.push(`${toRelative(path)} 缺少 ${label}: ${reason}`);
  }
}

function rejectPattern(label, path, original, content, pattern, reason) {
  const lines = [...new Set(findMatches(content, pattern).map((index) => lineNumberAt(original, index)))].sort(
    (left, right) => left - right,
  );

  for (const line of lines.slice(0, 3)) {
    failures.push(`${toRelative(path)}:${line} 禁止 ${label}: ${reason}`);
  }

  if (lines.length > 3) {
    failures.push(`${toRelative(path)} 还有 ${lines.length - 3} 处 ${label} 未展开`);
  }
}

function validateGateReport(path, report, platform) {
  if (!report) {
    return;
  }

  if (report.schema !== "restoration.cm.reverse.module_gate_report.v1") {
    failures.push(`${toRelative(path)} schema 必须是 restoration.cm.reverse.module_gate_report.v1`);
  }
  if (report.product !== "aimami") {
    failures.push(`${toRelative(path)} product 必须是 aimami`);
  }
  if (report.version !== "1.0.9") {
    failures.push(`${toRelative(path)} version 必须是 1.0.9`);
  }
  if (report.platform !== platform) {
    failures.push(`${toRelative(path)} platform 必须是 ${platform}`);
  }
  if (report.module !== "mcp") {
    failures.push(`${toRelative(path)} module 必须是 mcp`);
  }
  if (report.status !== "PASS") {
    failures.push(`${toRelative(path)} status 必须是 PASS`);
  }
  if (report.commands_total !== 4 || report.commands_ready !== 4) {
    failures.push(`${toRelative(path)} commands_total/commands_ready 必须都是 4`);
  }

  for (const key of [
    "consumerStartReady",
    "strictImplementationUse",
    "readyToImplement",
    "implementation_use",
    "gate_accepted",
    "full_leaf_100",
    "moduleExitAllowed",
  ]) {
    if (report[key] !== true) {
      failures.push(`${toRelative(path)} ${key} 必须为 true`);
    }
  }

  for (const command of commandNames) {
    const item = report.commands?.find((entry) => entry.command === command);
    if (!item) {
      failures.push(`${toRelative(path)} commands 缺少 ${command}`);
      continue;
    }
    const expected = commandExpectations[command];
    if (item.owner !== expected.owner[platform]) {
      failures.push(`${toRelative(path)} ${command} owner 必须是 ${expected.owner[platform]}`);
    }
    if (item.threading_model !== expected.threading) {
      failures.push(`${toRelative(path)} ${command} threading_model 必须是 ${expected.threading}`);
    }
    if (!item.raw_leaf?.includes(`raw/aimami/1.0.9/${platform}/mcp/${command}`)) {
      failures.push(`${toRelative(path)} ${command} raw_leaf 必须指向 ${platform}/mcp/${command}`);
    }
    if (item.readyToImplement !== true || item.full_leaf_100 !== true) {
      failures.push(`${toRelative(path)} ${command} 必须 readyToImplement/full_leaf_100=true`);
    }
  }
}

function validateManifest(path, manifest, command) {
  if (!manifest) {
    return;
  }

  const expected = commandExpectations[command];
  if (manifest.schema !== "raw-evidence.raw.leaf.manifest.v2") {
    failures.push(`${toRelative(path)} schema 必须是 raw-evidence.raw.leaf.manifest.v2`);
  }
  if (manifest.product !== "aimami") {
    failures.push(`${toRelative(path)} product 必须是 aimami`);
  }
  if (manifest.version !== "1.0.9") {
    failures.push(`${toRelative(path)} version 必须是 1.0.9`);
  }
  if (manifest.platform !== "windows") {
    failures.push(`${toRelative(path)} platform 必须是 windows`);
  }
  if (manifest.module !== "mcp") {
    failures.push(`${toRelative(path)} module 必须是 mcp`);
  }
  if (manifest.command !== command) {
    failures.push(`${toRelative(path)} command 必须是 ${command}`);
  }
  if (manifest.kind !== "command") {
    failures.push(`${toRelative(path)} kind 必须是 command`);
  }
  if (manifest.owner?.addr !== expected.owner.windows) {
    failures.push(`${toRelative(path)} owner.addr 必须是 ${expected.owner.windows}`);
  }
  if (manifest.owner?.decompile_ok !== true) {
    failures.push(`${toRelative(path)} owner.decompile_ok 必须为 true`);
  }
  if (manifest.threading_model !== expected.threading) {
    failures.push(`${toRelative(path)} threading_model 必须是 ${expected.threading}`);
  }
  if (!manifest.important_callees?.includes(expected.owner.windows)) {
    failures.push(`${toRelative(path)} important_callees 必须包含 owner ${expected.owner.windows}`);
  }
  for (const text of expected.sideEffects) {
    if (!manifest.terminal_side_effect_classes?.includes(text)) {
      failures.push(`${toRelative(path)} terminal_side_effect_classes 缺少 ${text}`);
    }
  }
  for (const text of expected.manifestInterface) {
    const interfaceText = Object.values(manifest.interface ?? {}).join("\n");
    if (!interfaceText.includes(text)) {
      failures.push(`${toRelative(path)} interface 缺少 ${text}`);
    }
  }
  for (const key of [
    "consumerStartReady",
    "strictImplementationUse",
    "readyToImplement",
    "implementation_use",
    "gate_accepted",
    "full_leaf_100",
    "moduleExitAllowed",
    "platformScopeDeclared",
  ]) {
    if (manifest.gate?.[key] !== true) {
      failures.push(`${toRelative(path)} gate.${key} 必须为 true`);
    }
  }
}

function validateEvidenceMap(content) {
  const path = files.evidenceMap;
  const requiredPaths = [
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-mcp/gate-report.json",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-mcp/gate-report.json",
    "evidence/full-chain/raw/aimami/1.0.9/windows/mcp/load_mcp_servers/manifest.json",
    "evidence/full-chain/raw/aimami/1.0.9/windows/mcp/upsert_mcp_server/manifest.json",
    "evidence/full-chain/raw/aimami/1.0.9/windows/mcp/set_mcp_server_enabled/manifest.json",
    "evidence/full-chain/raw/aimami/1.0.9/windows/mcp/remove_mcp_server/manifest.json",
    "src-tauri/src/lib.rs",
    "src-tauri/src/commands/mcp.rs",
    "src-tauri/src/application/usecase/mcp.rs",
    "src-tauri/src/contracts/mcp.rs",
    "src-tauri/src/repository/mcp.rs",
    "src-tauri/src/core/parser/mcp.rs",
    "src-tauri/src/core/model/mcp.rs",
    "scripts/validate-backend-mcp-owner.mjs",
  ];
  const requiredPhrases = [
    "MCP current-source 证据映射",
    "当前源码 owner 归属",
    "四个命令的当前闭环",
    "已覆盖边界",
    "未声明边界",
    "config.toml",
    "mcp_servers",
    "CoreEnvelope",
    "FileSystemAdapter",
    "comment-preserving block scan",
    "不声明 MCP server 已启动",
    "不声明网络探测",
    "HTTP/SSE 实际调用",
    "不声明外部进程 spawn",
    "不声明平台副作用",
    "不声明 daemon/watchers",
    "不声明 voice 集成",
    "不声明闭源后端全量还原",
  ];

  for (const requiredPath of requiredPaths) {
    requireText("证据/源码路径", path, content, requiredPath, "evidence map 必须列出完整 current-source 证据闭环路径");
  }
  for (const command of commandNames) {
    requireText(`命令 ${command}`, path, content, `\`${command}\``, "evidence map 必须逐项覆盖四个 IPC 命令");
  }
  for (const phrase of requiredPhrases) {
    requireText(phrase, path, content, phrase, "evidence map 必须声明覆盖与未声明边界");
  }

  for (const pattern of forbiddenProjectNames) {
    rejectPattern("外部参考项目名", path, content, content, pattern, "MCP 证据图不得写入外部参考项目名");
  }

  const forbiddenClaims = [
    "MCP server 已启动",
    "MCP server 已执行",
    "运行时集成完成",
    "网络探测已完成",
    "HTTP/SSE 实际调用已完成",
    "外部进程 spawn 已完成",
    "平台副作用已完成",
    "daemon/watchers 已完成",
    "voice 集成已完成",
    "闭源后端全量还原已完成",
  ];
  for (const [index, line] of content.split(/\r?\n/).entries()) {
    if (!forbiddenClaims.some((claim) => line.includes(claim))) {
      continue;
    }
    if (line.includes("不声明")) {
      continue;
    }
    failures.push(`${toRelative(path)}:${index + 1} 禁止把未声明边界写成已完成声明`);
  }
}

function validateSourceMap(content) {
  requireText(
    "MCP evidence map 索引",
    files.sourceMap,
    content,
    "docs/reconstruction/mcp-current-source-evidence-map.md",
    "source-map 应索引 MCP current-source evidence map，但不得扩大声明",
  );
}

function validateLib(path, content) {
  for (const command of commandNames) {
    requirePattern(
      `IPC 注册 ${command}`,
      path,
      content,
      new RegExp(`\\bcommands::mcp::${command}\\b`),
      "Tauri 注册表必须暴露 MCP 四个命令",
    );
  }
}

function validateNoRuntimeSideEffects(path, original, content, options = {}) {
  const tauriPattern = options.allowTauriIpc
    ? /\b(tauri_plugin_|AppHandle|Window|Tray|Notification)\b|\bcrate\s*::\s*platform\s*::/g
    : /\b(tauri\s*::|tauri_plugin_|AppHandle|Window|Tray|Notification|State\s*<)\b|\bcrate\s*::\s*platform\s*::/g;
  const rules = [
    {
      label: "外部进程执行",
      pattern: /\b(std\s*::\s*process\s*::\s*Command|std\s*::\s*process|Command\s*::\s*new)\b|\.\s*(spawn|output|status)\s*\(/g,
      reason: "MCP 当前只管理 config.toml，不启动 stdio server 或外部程序",
    },
    {
      label: "网络探测或 HTTP/SSE 调用",
      pattern: /\b(reqwest|TcpStream|UdpSocket|WebSocket|EventSource|hyper|axum|warp|tonic)\b/g,
      reason: "MCP 当前不声明网络探测、HTTP/SSE 实际调用或远端健康检查",
    },
    {
      label: "Tauri 或平台副作用",
      pattern: tauriPattern,
      reason: "平台能力不属于 MCP config.toml 持久化边界",
    },
    {
      label: "daemon/watchers",
      pattern: /\b(daemon|watcher|watchers|notify|schedule|background)\b/gi,
      reason: "当前 MCP 命令不声明 daemon/watchers 或后台调度",
    },
    {
      label: "voice 入口",
      pattern: /\bvoice\b/gi,
      reason: "voice 保留独立边界，不得接入 MCP",
    },
  ];

  for (const rule of rules) {
    rejectPattern(rule.label, path, original, content, rule.pattern, rule.reason);
  }
}

function validateNoExternalProjectNames(path, original, content) {
  for (const pattern of forbiddenProjectNames) {
    rejectPattern("外部参考项目名", path, original, content, pattern, "MCP 边界不得写入外部参考项目名");
  }
}

function validateCommand(path, original, content) {
  const required = [
    ["load_mcp_servers command", /#\s*\[\s*tauri\s*::\s*command\s*\][\s\S]*pub\s+fn\s+load_mcp_servers\s*\([\s\S]*CoreEnvelope\s*<\s*McpServerListPayload\s*>/],
    ["upsert_mcp_server command", /#\s*\[\s*tauri\s*::\s*command\s*\][\s\S]*pub\s+fn\s+upsert_mcp_server\s*\([\s\S]*CoreEnvelope\s*<\s*McpServerMutationPayload\s*>/],
    ["set_mcp_server_enabled command", /#\s*\[\s*tauri\s*::\s*command\s*\][\s\S]*pub\s+fn\s+set_mcp_server_enabled\s*\([\s\S]*CoreEnvelope\s*<\s*McpServerMutationPayload\s*>/],
    ["remove_mcp_server command", /#\s*\[\s*tauri\s*::\s*command\s*\][\s\S]*pub\s+fn\s+remove_mcp_server\s*\([\s\S]*CoreEnvelope\s*<\s*McpServerRemovePayload\s*>/],
    ["Repository state", /\bState\s*<\s*'_\s*,\s*Mutex\s*<\s*Repository\s*>\s*>/],
    ["repo lock", /\brepo\s*\.lock\s*\(\s*\)\s*\.map_err\s*\(/],
    ["load usecase", /usecase\s*::\s*mcp\s*::\s*load_servers\s*\(\s*&repo\s*\)/],
    ["upsert usecase", /usecase\s*::\s*mcp\s*::\s*upsert_server\s*\(\s*&repo\s*,/],
    ["set enabled usecase", /usecase\s*::\s*mcp\s*::\s*set_enabled\s*\(\s*&repo\s*,\s*name\s*,\s*enabled\s*\)/],
    ["remove usecase", /usecase\s*::\s*mcp\s*::\s*remove_server\s*\(\s*&repo\s*,\s*name\s*\)/],
    ["CoreEnvelope ok", /\.map\s*\(\s*CoreEnvelope\s*::\s*ok\s*\)/],
  ];

  for (const [label, pattern] of required) {
    requirePattern(label, path, content, pattern, "command 层必须只暴露 IPC adapter、repo state 和 envelope payload");
  }

  rejectPattern(
    "command 直接接触 config.toml 或 parser",
    path,
    original,
    content,
    /\b(toml\s*::|FileSystemAdapter|read_to_string\s*\(|write_string\s*\(|rename\s*\(|config_path|parse_mcp_servers_from_config|upsert_mcp_server_config|remove_mcp_server_config|std\s*::\s*fs)\b/g,
    "command 层只做参数、state 和 envelope 适配",
  );
}

function validateUsecase(path, original, content) {
  const required = [
    ["load_servers usecase", /\bpub\s+fn\s+load_servers\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["upsert_server usecase", /\bpub\s+fn\s+upsert_server\s*\(/],
    ["set_enabled usecase", /\bpub\s+fn\s+set_enabled\s*\(/],
    ["remove_server usecase", /\bpub\s+fn\s+remove_server\s*\(/],
    ["name validation", /\bfn\s+validate_name\s*\(/],
    ["load repository", /\bmcp\s*::\s*load_server_snapshot\s*\(\s*repo\s*\)/],
    ["upsert repository", /\bmcp\s*::\s*upsert_server\s*\(\s*repo\s*,\s*&server\s*\)/],
    ["set enabled repository", /\bmcp\s*::\s*set_enabled\s*\(\s*repo\s*,\s*&name\s*,\s*enabled\s*\)/],
    ["remove repository", /\bmcp\s*::\s*remove_server\s*\(\s*repo\s*,\s*&name\s*\)/],
    ["NoOp status", /\bBackendEffect\s*::\s*NoOp\b/],
  ];

  for (const [label, pattern] of required) {
    requirePattern(label, path, content, pattern, "usecase 必须集中编排用户动作并调用 repository 窄函数");
  }

  rejectPattern(
    "usecase 直接读写 config.toml",
    path,
    original,
    content,
    /\b(toml\s*::|FileSystemAdapter|read_to_string\s*\(|write_string\s*\(|rename\s*\(|config_path|repo\s*\.\s*fs\s*\(|std\s*::\s*fs)\b/g,
    "usecase 只编排 repository 和 DTO，不读写 config.toml",
  );
}

function validateContracts(path, original, content) {
  const required = [
    ["McpTransport DTO", /\bpub\s+enum\s+McpTransport\b/],
    ["McpServerSummary DTO", /\bpub\s+struct\s+McpServerSummary\b/],
    ["McpServerConfigInput DTO", /\bpub\s+struct\s+McpServerConfigInput\b/],
    ["McpServerListPayload DTO", /\bpub\s+struct\s+McpServerListPayload\b/],
    ["McpServerMutationPayload DTO", /\bpub\s+struct\s+McpServerMutationPayload\b/],
    ["McpServerRemovePayload DTO", /\bpub\s+struct\s+McpServerRemovePayload\b/],
    ["serde boundary", /\buse\s+serde\s*::\s*\{\s*Deserialize\s*,\s*Serialize\s*\}\s*;/],
  ];

  for (const [label, pattern] of required) {
    requirePattern(label, path, content, pattern, "contracts 必须 owning 前后端 DTO 字段");
  }

  rejectPattern(
    "contracts 持有存储或解析事务",
    path,
    original,
    content,
    /\b(Repository|FileSystemAdapter|PathBuf|std\s*::\s*fs|read_to_string\s*\(|write_string\s*\(|rename\s*\(|toml\s*::)\b/g,
    "contracts 只能声明 DTO，不承载 config.toml 事务",
  );
}

function validateRepository(path, original, content) {
  const required = [
    ["snapshot type", /\bpub\s+struct\s+McpServerRepositorySnapshot\b/],
    ["mutation type", /\bpub\s+struct\s+McpServerRepositoryMutation\b/],
    ["remove type", /\bpub\s+struct\s+McpServerRepositoryRemove\b/],
    ["load_server_snapshot", /\bpub\s+fn\s+load_server_snapshot\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["upsert_server", /\bpub\s+fn\s+upsert_server\s*\([\s\S]*repo\s*:\s*&Repository[\s\S]*server\s*:\s*&McpServerSummary[\s\S]*\)/],
    ["set_enabled", /\bpub\s+fn\s+set_enabled\s*\([\s\S]*repo\s*:\s*&Repository[\s\S]*name\s*:\s*&str[\s\S]*enabled\s*:\s*bool[\s\S]*\)/],
    ["remove_server", /\bpub\s+fn\s+remove_server\s*\([\s\S]*repo\s*:\s*&Repository[\s\S]*name\s*:\s*&str[\s\S]*\)/],
    ["path safety", /\bfn\s+ensure_config_path_allowed\s*\(/],
    ["CODEX_HOME config.toml", /\bcodex_home\s*\.join\s*\(\s*"config\.toml"\s*\)/],
    ["FileSystemAdapter", /\bFileSystemAdapter\b/],
    ["repo fs adapter", /\brepo\s*\.\s*fs\s*\(\s*\)/],
    ["repo paths adapter", /\brepo\s*\.\s*paths\s*\(\s*\)/],
    ["read optional config", /\bfn\s+read_optional_config_text\s*\(/],
    ["config read", /\.\s*read_to_string\s*\(/],
    ["config write", /\.\s*write_string\s*\(/],
    ["config rename", /\.\s*rename\s*\(/],
    ["parse core parser", /\bparse_mcp_servers_from_config\s*\(/],
    ["upsert core parser", /\bupsert_mcp_server_config\s*\(/],
    ["remove core parser", /\bremove_mcp_server_config\s*\(/],
    ["summary to domain", /\bfn\s+config_from_summary\s*\(/],
    ["domain to summary", /\bfn\s+summary_from_config\s*\(/],
    ["repository tests", /\bmod\s+tests\b[\s\S]*upsert_server_preserves_unrelated_comments_and_blocks[\s\S]*remove_server_preserves_unrelated_comments/],
  ];

  for (const [label, pattern] of required) {
    requirePattern(label, path, content, pattern, "repository 必须 owning config.toml 存储、安全路径和 FS adapter 边界");
  }

  rejectPattern(
    "repository 直接 owning TOML parser/renderer",
    path,
    original,
    content,
    /\b(toml\s*::|parse_table_header_path|find_server_table_range|upsert_config_value|remove_config_value|load_config_value|ensure_rendered_text_is_valid|render_server_block|render_server_table|read_string_table|render_string_table|TextRange|TableHeader)\b/g,
    "纯 TOML 解析、扫描、渲染和替换必须由 core parser/model owning",
  );
  rejectPattern(
    "repository 直连真实文件系统模块",
    path,
    original,
    content,
    /\b(std\s*::\s*fs|tokio\s*::\s*fs)\b/g,
    "repository 必须通过可替换 FileSystemAdapter 读写",
  );

  const publicFsPathEntry = /\bpub\s+fn\s+\w+\s*\([^)]*(?:FileSystemAdapter|config_path\s*:\s*&\s*Path|fs\s*:\s*&\s*dyn)/gs;
  if (publicFsPathEntry.test(content)) {
    failures.push(`${toRelative(path)} repository 对外入口不得暴露 fs/config_path 参数，应以 Repository 为窄入口`);
  }
}

function validateCoreParser(path, original, content) {
  const required = [
    ["parse_mcp_servers_from_config", /\bpub\s*\(\s*crate\s*\)\s+fn\s+parse_mcp_servers_from_config\s*\(/],
    ["upsert_mcp_server_config", /\bpub\s*\(\s*crate\s*\)\s+fn\s+upsert_mcp_server_config\s*\(/],
    ["remove_mcp_server_config", /\bpub\s*\(\s*crate\s*\)\s+fn\s+remove_mcp_server_config\s*\(/],
    ["TOML value owner", /\btoml\s*::\s*Value\b/],
    ["mcp_servers table", /"mcp_servers"/],
    ["TextRange", /\bstruct\s+TextRange\b/],
    ["TableHeader", /\bstruct\s+TableHeader\b/],
    ["table header parser", /\bfn\s+parse_table_header_path\s*\(/],
    ["server table range", /\bfn\s+find_server_table_range\s*\(/],
    ["upsert value", /\bfn\s+upsert_config_value\s*\(/],
    ["remove value", /\bfn\s+remove_config_value\s*\(/],
    ["valid rendered text", /\bfn\s+ensure_rendered_text_is_valid\s*\(/],
    ["comment preserving upsert", /\bfn\s+upsert_server_block_preserving_comments\s*\(/],
    ["comment preserving remove", /\bfn\s+remove_server_block_preserving_comments\s*\(/],
    ["server block render", /\bfn\s+render_server_block\s*\(/],
    ["server table render", /\bfn\s+render_server_table\s*\(/],
    ["string table reader", /\bfn\s+read_string_table\s*\(/],
    ["string table renderer", /\bfn\s+render_string_table\s*\(/],
  ];

  for (const [label, pattern] of required) {
    requirePattern(label, path, content, pattern, "core parser 必须 owning mcp_servers 纯解析、扫描、渲染和替换");
  }

  rejectPattern(
    "core parser 依赖 repository 或文件系统",
    path,
    original,
    content,
    /\b(Repository|FileSystemAdapter|read_to_string\s*\(|write_string\s*\(|rename\s*\(|std\s*::\s*fs|tokio\s*::\s*fs)\b/g,
    "core parser 不得读写文件或依赖 repository",
  );
}

function validateCoreModel(path, original, content) {
  const required = [
    ["McpServerTransport", /\bpub\s*\(\s*crate\s*\)\s+enum\s+McpServerTransport\b/],
    ["McpServerConfig", /\bpub\s*\(\s*crate\s*\)\s+struct\s+McpServerConfig\b/],
    ["from_input", /\bfn\s+from_input\s*\(/],
    ["from_config_value", /\bfn\s+from_config_value\s*\(/],
    ["as_config_value", /\bfn\s+as_config_value\s*\(/],
    ["transport stdio", /"stdio"/],
    ["transport http", /"http"/],
    ["transport sse", /"sse"/],
  ];

  for (const [label, pattern] of required) {
    requirePattern(label, path, content, pattern, "core model 必须 owning mcp_servers 领域值对象");
  }

  rejectPattern(
    "core model 混入 parser/storage/runtime",
    path,
    original,
    content,
    /\b(toml\s*::|Repository|FileSystemAdapter|std\s*::\s*fs|tokio\s*::\s*fs|tauri\s*::|tauri_plugin_|std\s*::\s*process|reqwest|TcpStream|UdpSocket)\b/g,
    "core model 只能表达值对象，不得混入 parser、repository 或 runtime 能力",
  );
}

const rawText = {
  evidenceMap: readRequired(files.evidenceMap, "MCP evidence map"),
  sourceMap: readRequired(files.sourceMap, "source-map"),
  lib: readRequired(files.lib, "lib.rs"),
  command: readRequired(files.command, "commands/mcp.rs"),
  usecase: readRequired(files.usecase, "application/usecase/mcp.rs"),
  contracts: readRequired(files.contracts, "contracts/mcp.rs"),
  repository: readRequired(files.repository, "repository/mcp.rs"),
  coreParser: readRequired(files.coreParser, "core/parser/mcp.rs"),
  coreModel: readRequired(files.coreModel, "core/model/mcp.rs"),
};

const code = Object.fromEntries(
  Object.entries(rawText).map(([label, content]) => [
    label,
    label === "evidenceMap" || label === "sourceMap" ? content : stripRustComments(content),
  ]),
);

const windowsGate = readJsonRequired(files.windowsGate, "Windows MCP gate-report");
const macosGate = readJsonRequired(files.macosGate, "macOS MCP gate-report");
validateGateReport(files.windowsGate, windowsGate, "windows");
validateGateReport(files.macosGate, macosGate, "macos");

for (const [command, path] of manifestFiles) {
  validateManifest(path, readJsonRequired(path, `${command} manifest`), command);
}

validateEvidenceMap(rawText.evidenceMap);
validateSourceMap(rawText.sourceMap);
validateLib(files.lib, code.lib);

for (const label of ["command", "usecase", "contracts", "repository", "coreParser", "coreModel"]) {
  validateNoExternalProjectNames(files[label], rawText[label], code[label]);
  validateNoRuntimeSideEffects(files[label], rawText[label], code[label], { allowTauriIpc: label === "command" });
}

validateCommand(files.command, rawText.command, code.command);
validateUsecase(files.usecase, rawText.usecase, code.usecase);
validateContracts(files.contracts, rawText.contracts, code.contracts);
validateRepository(files.repository, rawText.repository, code.repository);
validateCoreParser(files.coreParser, rawText.coreParser, code.coreParser);
validateCoreModel(files.coreModel, rawText.coreModel, code.coreModel);

if (failures.length > 0) {
  console.error("FAIL 后端 MCP owner 校验失败:");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS 后端 MCP owner 校验通过: evidence map、source-map 索引、双平台 gate-report、四个 raw manifest、lib 注册、command/usecase/contracts/repository/core parser/core model 边界均闭合，且未声明 MCP runtime/network/process/platform/daemon/voice 能力。",
);
