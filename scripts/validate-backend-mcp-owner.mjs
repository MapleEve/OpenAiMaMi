import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  command: join(repoRoot, "src-tauri", "src", "commands", "mcp.rs"),
  usecase: join(repoRoot, "src-tauri", "src", "application", "usecase", "mcp.rs"),
  repository: join(repoRoot, "src-tauri", "src", "repository", "mcp.rs"),
  contracts: join(repoRoot, "src-tauri", "src", "contracts", "mcp.rs"),
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

function stripRustComments(content) {
  let output = "";
  let cursor = 0;

  while (cursor < content.length) {
    if (content[cursor] === "/" && content[cursor + 1] === "/") {
      while (cursor < content.length && content[cursor] !== "\n") {
        output += " ";
        cursor += 1;
      }
      continue;
    }

    if (content[cursor] === "/" && content[cursor + 1] === "*") {
      output += "  ";
      cursor += 2;
      while (cursor < content.length && !(content[cursor] === "*" && content[cursor + 1] === "/")) {
        output += content[cursor] === "\n" ? "\n" : " ";
        cursor += 1;
      }
      if (cursor < content.length) {
        output += "  ";
        cursor += 2;
      }
      continue;
    }

    output += content[cursor];
    cursor += 1;
  }

  return output;
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

const command = stripRustComments(readRequired(files.command, "MCP command"));
const usecase = stripRustComments(readRequired(files.usecase, "MCP usecase"));
const repository = stripRustComments(readRequired(files.repository, "MCP repository"));
const contracts = stripRustComments(readRequired(files.contracts, "MCP contracts"));

for (const [label, path] of Object.entries(files)) {
  const content = stripRustComments(readRequired(path, `MCP ${label}`));
  assertNoPatterns(path, content, [
    {
      label: "外部参考项目名",
      patterns: forbiddenNames,
      reason: "新增 MCP 边界不得写入外部参考项目名",
    },
  ]);
}

assertNoPatterns(files.command, command, [
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
assertContains(files.command, command, /\busecase\s*::\s*mcp\s*::/g, "调用 application/usecase::mcp");

assertNoPatterns(files.usecase, usecase, [
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
assertContains(files.usecase, usecase, /\bmcp\s*::\s*load_server_snapshot\s*\(/g, "通过 repository 读取 MCP 快照");
assertContains(files.usecase, usecase, /\bmcp\s*::\s*upsert_server\s*\(\s*repo\s*,/g, "通过 repository 写入 MCP 服务");
assertContains(files.usecase, usecase, /\bmcp\s*::\s*set_enabled\s*\(\s*repo\s*,/g, "通过 repository 切换 MCP enabled");
assertContains(files.usecase, usecase, /\bmcp\s*::\s*remove_server\s*\(\s*repo\s*,/g, "通过 repository 删除 MCP 服务");

assertNoPatterns(files.repository, repository, [
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
]);
assertContains(files.repository, repository, /\bFileSystemAdapter\b/g, "可替换文件系统适配器边界");
assertContains(files.repository, repository, /\bread_to_string\s*\(/g, "config.toml 读取 owner");
assertContains(files.repository, repository, /\bwrite_string\s*\(/g, "config.toml 写入 owner");
assertContains(files.repository, repository, /\brename\s*\(/g, "临时文件 rename 持久化 owner");
assertContains(files.repository, repository, /\bensure_config_path_allowed\s*\(/g, "config.toml 路径安全窄函数");
assertContains(files.repository, repository, /\bupsert_server_block_preserving_comments\s*\(/g, "MCP 托管块写入保留注释函数");
assertContains(files.repository, repository, /\bremove_server_block_preserving_comments\s*\(/g, "MCP 托管块删除保留注释函数");
assertContains(files.repository, repository, /\brender_server_block\s*\(/g, "单个 MCP 服务 TOML 表块 renderer");

const publicFsPathEntry = /\bpub\s+fn\s+\w+\s*\([^)]*(?:FileSystemAdapter|config_path\s*:\s*&\s*Path|fs\s*:\s*&\s*dyn)/gs;
if (publicFsPathEntry.test(repository)) {
  failures.push(`${toRelative(files.repository)} repository 对外入口不得暴露 fs/config_path 参数，应以 Repository 为窄入口`);
}

assertNoPatterns(files.contracts, contracts, [
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
assertContains(files.contracts, contracts, /\bpub\s+struct\s+McpServerSummary\b/g, "McpServerSummary DTO");
assertContains(files.contracts, contracts, /\bpub\s+struct\s+McpServerConfigInput\b/g, "McpServerConfigInput DTO");
assertContains(files.contracts, contracts, /\bpub\s+struct\s+McpServerListPayload\b/g, "McpServerListPayload DTO");
assertContains(files.contracts, contracts, /\bpub\s+struct\s+McpServerMutationPayload\b/g, "McpServerMutationPayload DTO");
assertContains(files.contracts, contracts, /\bpub\s+struct\s+McpServerRemovePayload\b/g, "McpServerRemovePayload DTO");

if (failures.length > 0) {
  console.error("后端 MCP owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("后端 MCP owner 校验通过：command/usecase 保持薄编排，repository 托管 config.toml 读写与注释保留，contracts 仅表达 DTO，且未发现 MCP runtime/platform 伪实现。");
