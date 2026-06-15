import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  command: join(repoRoot, "src-tauri", "src", "commands", "mcp.rs"),
  usecase: join(repoRoot, "src-tauri", "src", "application", "usecase", "mcp.rs"),
  repository: join(repoRoot, "src-tauri", "src", "repository", "mcp.rs"),
  contracts: join(repoRoot, "src-tauri", "src", "contracts", "mcp.rs"),
  coreParser: join(repoRoot, "src-tauri", "src", "core", "parser", "mcp.rs"),
  coreParserMod: join(repoRoot, "src-tauri", "src", "core", "parser", "mod.rs"),
  coreModel: join(repoRoot, "src-tauri", "src", "core", "model", "mcp.rs"),
  coreModelMod: join(repoRoot, "src-tauri", "src", "core", "model", "mod.rs"),
};

const forbiddenNames = [
  new RegExp(["Codex", "Manager"].join(""), "g"),
  new RegExp(`\\b${["C", "5"].join("")}\\b`, "g"),
  new RegExp(["lobe", "hub"].join(""), "gi"),
];

function toRelative(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function readRequired(path, label) {
  if (!existsSync(path)) {
    failures.push(`缺少 ${label} 文件：${toRelative(path)}`);
    return "";
  }

  return readFileSync(path, "utf8");
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

function assertNoPatterns(path, content, rules) {
  for (const rule of rules) {
    const lines = [];
    for (const pattern of rule.patterns) {
      for (const index of findMatches(content, pattern)) {
        lines.push(lineNumberAt(content, index));
      }
    }

    for (const line of [...new Set(lines)].sort((left, right) => left - right)) {
      failures.push(`${toRelative(path)}:${line} ${rule.reason}：${rule.label}`);
    }
  }
}

function assertContains(path, content, pattern, description) {
  if (!pattern.test(content)) {
    failures.push(`${toRelative(path)} 缺少 ${description}`);
  }
}

const raw = Object.fromEntries(
  Object.entries(files).map(([label, path]) => [label, readRequired(path, `MCP ${label}`)]),
);
const code = Object.fromEntries(
  Object.entries(raw).map(([label, content]) => [label, stripRustComments(content)]),
);

for (const [label, path] of Object.entries(files)) {
  const content = code[label];
  assertNoPatterns(path, content, [
    {
      label: "外部参考项目名",
      patterns: forbiddenNames,
      reason: "新增 MCP 边界不得写入外部参考项目名",
    },
  ]);
}

assertNoPatterns(files.command, code.command, [
  {
    label: "TOML/文件系统读写",
    patterns: [
      /\btoml\s*::/g,
      /\bFileSystemAdapter\b/g,
      /\bread_to_string\s*\(/g,
      /\bwrite_string\s*\(/g,
      /\brename\s*\(/g,
      /\bconfig_path\b/g,
      /\bstd\s*::\s*fs\b/g,
    ],
    reason: "command 只能做薄 IPC 参数适配，不能托管 config.toml 副作用",
  },
  {
    label: "runtime/platform 行为",
    patterns: [
      /\bstd\s*::\s*process\b/g,
      /\bCommand\s*::\s*new\s*\(/g,
      /\.\s*spawn\s*\(/g,
      /\.\s*output\s*\(/g,
      /\breqwest\b/g,
      /\bTcpStream\b/g,
      /\bUdpSocket\b/g,
      /\btauri_plugin_/g,
    ],
    reason: "MCP command 不得启动服务、探测网络或伪实现运行时行为",
  },
]);
assertContains(files.command, code.command, /\busecase\s*::\s*mcp\s*::/g, "调用 application/usecase::mcp");

assertNoPatterns(files.usecase, code.usecase, [
  {
    label: "TOML/文件系统读写",
    patterns: [
      /\btoml\s*::/g,
      /\bFileSystemAdapter\b/g,
      /\bread_to_string\s*\(/g,
      /\bwrite_string\s*\(/g,
      /\brename\s*\(/g,
      /\bconfig_path\b/g,
      /\.\s*fs\s*\(\s*\)/g,
      /\bstd\s*::\s*fs\b/g,
    ],
    reason: "usecase 只能编排 repository 和 DTO，不能直接 parse/write config.toml",
  },
  {
    label: "runtime/platform 行为",
    patterns: [
      /\btauri\s*::/g,
      /\bState\s*</g,
      /\bstd\s*::\s*process\b/g,
      /\bCommand\s*::\s*new\s*\(/g,
      /\.\s*spawn\s*\(/g,
      /\.\s*output\s*\(/g,
      /\breqwest\b/g,
      /\bTcpStream\b/g,
      /\bUdpSocket\b/g,
      /\btauri_plugin_/g,
    ],
    reason: "MCP usecase 不得启动服务、探测网络或依赖 Tauri runtime",
  },
]);
assertContains(files.usecase, code.usecase, /\bmcp\s*::\s*load_server_snapshot\s*\(/g, "通过 repository 读取 MCP 快照");
assertContains(files.usecase, code.usecase, /\bmcp\s*::\s*upsert_server\s*\(\s*repo\s*,/g, "通过 repository 写入 MCP 服务");
assertContains(files.usecase, code.usecase, /\bmcp\s*::\s*set_enabled\s*\(\s*repo\s*,/g, "通过 repository 切换 MCP enabled");
assertContains(files.usecase, code.usecase, /\bmcp\s*::\s*remove_server\s*\(\s*repo\s*,/g, "通过 repository 删除 MCP 服务");

assertNoPatterns(files.repository, code.repository, [
  {
    label: "runtime/platform 行为",
    patterns: [
      /\btauri\s*::/g,
      /\btauri_plugin_/g,
      /\bstd\s*::\s*process\b/g,
      /\bCommand\s*::\s*new\s*\(/g,
      /\.\s*spawn\s*\(/g,
      /\.\s*output\s*\(/g,
      /\breqwest\b/g,
      /\bTcpStream\b/g,
      /\bUdpSocket\b/g,
    ],
    reason: "MCP repository 只能托管 config.toml 存储边界，不得实现运行时能力",
  },
  {
    label: "真实文件系统直连",
    patterns: [/\bstd\s*::\s*fs\b/g, /\btokio\s*::\s*fs\b/g],
    reason: "MCP repository 必须通过可替换 FileSystemAdapter 读写",
  },
  {
    label: "TOML 解析/渲染 owner",
    patterns: [
      /\btoml\s*::/g,
      /\bparse_table_header_path\b/g,
      /\bfind_server_table_range\b/g,
      /\bupsert_config_value\b/g,
      /\bremove_config_value\b/g,
      /\bload_config_value\b/g,
      /\bensure_rendered_text_is_valid\b/g,
      /\brender_server_block\b/g,
      /\brender_server_table\b/g,
      /\bread_string_table\b/g,
      /\brender_string_table\b/g,
      /\bTextRange\b/g,
      /\bTableHeader\b/g,
    ],
    reason: "config.toml 纯解析、托管块扫描、渲染和替换必须由 core parser/model owning",
  },
]);
assertContains(files.repository, code.repository, /\bFileSystemAdapter\b/g, "可替换文件系统适配器边界");
assertContains(files.repository, code.repository, /\bread_to_string\s*\(/g, "config.toml 文本读取 owner");
assertContains(files.repository, code.repository, /\bwrite_string\s*\(/g, "config.toml 文本写入 owner");
assertContains(files.repository, code.repository, /\brename\s*\(/g, "临时文件 rename 持久化 owner");
assertContains(files.repository, code.repository, /\bensure_config_path_allowed\s*\(/g, "config.toml 路径安全窄函数");
assertContains(files.repository, code.repository, /\bparse_mcp_servers_from_config\s*\(/g, "调用 core parser 解析 mcp_servers");
assertContains(files.repository, code.repository, /\bupsert_mcp_server_config\s*\(/g, "调用 core parser 写入 MCP 托管块");
assertContains(files.repository, code.repository, /\bremove_mcp_server_config\s*\(/g, "调用 core parser 删除 MCP 托管块");

const publicFsPathEntry = /\bpub\s+fn\s+\w+\s*\([^)]*(?:FileSystemAdapter|config_path\s*:\s*&\s*Path|fs\s*:\s*&\s*dyn)/gs;
if (publicFsPathEntry.test(code.repository)) {
  failures.push(`${toRelative(files.repository)} repository 对外入口不得暴露 fs/config_path 参数，应以 Repository 为窄入口`);
}

assertNoPatterns(files.coreParser, code.coreParser, [
  {
    label: "repository/FS 依赖",
    patterns: [
      /\bRepository\b/g,
      /\bFileSystemAdapter\b/g,
      /\bread_to_string\s*\(/g,
      /\bwrite_string\s*\(/g,
      /\brename\s*\(/g,
      /\bstd\s*::\s*fs\b/g,
      /\btokio\s*::\s*fs\b/g,
    ],
    reason: "core parser 只能 owning 纯解析、扫描、渲染和替换，不能读写文件或依赖 repository",
  },
  {
    label: "runtime/platform 行为",
    patterns: [
      /\btauri\s*::/g,
      /\btauri_plugin_/g,
      /\bstd\s*::\s*process\b/g,
      /\bCommand\s*::\s*new\s*\(/g,
      /\.\s*spawn\s*\(/g,
      /\.\s*output\s*\(/g,
      /\breqwest\b/g,
      /\bTcpStream\b/g,
      /\bUdpSocket\b/g,
    ],
    reason: "MCP core parser 不得声明启动服务、网络探测或运行时行为",
  },
]);
assertContains(files.coreParserMod, code.coreParserMod, /\bpub\s+mod\s+mcp\s*;/g, "core/parser MCP 模块导出");
assertContains(files.coreParser, code.coreParser, /\bparse_mcp_servers_from_config\s*\(/g, "mcp_servers 纯解析入口");
assertContains(files.coreParser, code.coreParser, /\bupsert_mcp_server_config\s*\(/g, "MCP 托管块写入入口");
assertContains(files.coreParser, code.coreParser, /\bremove_mcp_server_config\s*\(/g, "MCP 托管块删除入口");
assertContains(files.coreParser, code.coreParser, /\btoml\s*::\s*Value\b/g, "TOML 语义解析 owner");
assertContains(files.coreParser, code.coreParser, /\bupsert_server_block_preserving_comments\s*\(/g, "MCP 托管块写入保留注释函数");
assertContains(files.coreParser, code.coreParser, /\bremove_server_block_preserving_comments\s*\(/g, "MCP 托管块删除保留注释函数");
assertContains(files.coreParser, code.coreParser, /\bfind_server_table_range\s*\(/g, "MCP 托管块扫描函数");
assertContains(files.coreParser, code.coreParser, /\brender_server_block\s*\(/g, "单个 MCP 服务 TOML 表块 renderer");

assertNoPatterns(files.coreModel, code.coreModel, [
  {
    label: "storage/parser/runtime 依赖",
    patterns: [
      /\btoml\s*::/g,
      /\bRepository\b/g,
      /\bFileSystemAdapter\b/g,
      /\bstd\s*::\s*fs\b/g,
      /\btokio\s*::\s*fs\b/g,
      /\btauri\s*::/g,
      /\btauri_plugin_/g,
      /\bstd\s*::\s*process\b/g,
      /\breqwest\b/g,
    ],
    reason: "MCP domain model 只能表达值对象，不得混入 parser、repository 或 runtime 能力",
  },
]);
assertContains(files.coreModelMod, code.coreModelMod, /\bpub\s+mod\s+mcp\s*;/g, "core/model MCP 模块导出");
assertContains(files.coreModel, code.coreModel, /\bpub\s*\(\s*crate\s*\)\s+enum\s+McpServerTransport\b/g, "McpServerTransport domain model");
assertContains(files.coreModel, code.coreModel, /\bpub\s*\(\s*crate\s*\)\s+struct\s+McpServerConfig\b/g, "McpServerConfig domain model");

assertNoPatterns(files.contracts, code.contracts, [
  {
    label: "业务事务或存储实现",
    patterns: [
      /\btoml\s*::/g,
      /\bFileSystemAdapter\b/g,
      /\bRepository\b/g,
      /\bPathBuf\b/g,
      /\bstd\s*::\s*fs\b/g,
      /\bread_to_string\s*\(/g,
      /\bwrite_string\s*\(/g,
      /\brename\s*\(/g,
    ],
    reason: "contracts 只能表达前后端 DTO 字段",
  },
  {
    label: "runtime/platform 行为",
    patterns: [
      /\btauri\s*::/g,
      /\btauri_plugin_/g,
      /\bstd\s*::\s*process\b/g,
      /\bCommand\s*::\s*new\s*\(/g,
      /\breqwest\b/g,
    ],
    reason: "contracts 不得实现 MCP runtime/platform 能力",
  },
]);
assertContains(files.contracts, code.contracts, /\bpub\s+struct\s+McpServerSummary\b/g, "McpServerSummary DTO");
assertContains(files.contracts, code.contracts, /\bpub\s+struct\s+McpServerConfigInput\b/g, "McpServerConfigInput DTO");
assertContains(files.contracts, code.contracts, /\bpub\s+struct\s+McpServerListPayload\b/g, "McpServerListPayload DTO");
assertContains(files.contracts, code.contracts, /\bpub\s+struct\s+McpServerMutationPayload\b/g, "McpServerMutationPayload DTO");
assertContains(files.contracts, code.contracts, /\bpub\s+struct\s+McpServerRemovePayload\b/g, "McpServerRemovePayload DTO");

if (failures.length > 0) {
  console.error("后端 MCP owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "后端 MCP owner 校验通过：command/usecase 保持薄编排，repository 只托管 config.toml 路径安全与文本读写，core parser/model owning mcp_servers 解析、托管块扫描和渲染替换，且未发现 MCP runtime/platform 伪实现。",
);
