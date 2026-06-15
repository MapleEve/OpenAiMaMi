import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  commands: join(repoRoot, "src-tauri", "src", "commands", "relay.rs"),
  usecase: join(repoRoot, "src-tauri", "src", "application", "usecase", "relay.rs"),
  core: join(repoRoot, "src-tauri", "src", "core", "relay.rs"),
  repository: join(repoRoot, "src-tauri", "src", "repository", "relay.rs"),
  platform: join(repoRoot, "src-tauri", "src", "platform", "relay.rs"),
};

function toRelative(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function readRequired(path, description) {
  if (!existsSync(path)) {
    failures.push(`缺少${description}：${toRelative(path)}`);
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

function blankRange(output, start, end) {
  for (let index = start; index < end; index += 1) {
    output[index] = output[index] === "\n" ? "\n" : " ";
  }
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

function assertNoPatterns(path, original, rules) {
  const content = stripRustComments(original);
  for (const rule of rules) {
    const lines = [];
    for (const pattern of rule.patterns) {
      for (const index of findMatches(content, pattern)) {
        lines.push(lineNumberAt(original, index));
      }
    }

    for (const line of [...new Set(lines)].sort((left, right) => left - right).slice(0, 3)) {
      failures.push(`${toRelative(path)}:${line} ${rule.message}：${rule.label}`);
    }
  }
}

function assertContains(path, content, pattern, message) {
  if (!pattern.test(stripRustComments(content))) {
    failures.push(`${toRelative(path)} ${message}`);
  }
}

const commandContent = readRequired(files.commands, "relay command 文件");
const usecaseContent = readRequired(files.usecase, "relay usecase 文件");
const coreContent = readRequired(files.core, "relay core 文件");
const repositoryContent = readRequired(files.repository, "relay repository 文件");
const platformContent = readRequired(files.platform, "relay platform 文件");

assertNoPatterns(files.commands, commandContent, [
  {
    label: "core/repository/platform 细节",
    message: "relay command 必须保持 IPC adapter 薄边界，不得调用下层 owner 细节",
    patterns: [
      /\brelay_core\b/,
      /\brelay_repository\b/,
      /\bRelayPlatformAdapter\b/,
      /\bcrate\s*::\s*platform\s*::/,
    ],
  },
  {
    label: "文件或网络副作用",
    message: "relay command 不得执行文件、进程或网络副作用",
    patterns: [/\bstd\s*::\s*fs\b/, /\bstd\s*::\s*process\b/, /\breqwest\b/, /\.fs\s*\(/],
  },
]);
assertContains(
  files.commands,
  commandContent,
  /\busecase\s*::\s*relay\s*::/,
  "必须通过 application/usecase 调度 relay 用户动作",
);

assertNoPatterns(files.usecase, usecaseContent, [
  {
    label: "直接文件 IO",
    message: "relay usecase 不得直接读写文件系统",
    patterns: [
      /\.fs\s*\(/,
      /\bPath\s*::\s*new\b/,
      /\bread_to_string\s*\(/,
      /\bwrite_string\s*\(/,
      /\bstd\s*::\s*fs\b/,
    ],
  },
  {
    label: "具体平台适配器",
    message: "relay usecase 不得直接依赖或构造具体 platform adapter",
    patterns: [/\bRelayPlatformAdapter\b/, /\bcrate\s*::\s*platform\s*::/, /\bstd\s*::\s*env\b/],
  },
]);
assertContains(
  files.usecase,
  usecaseContent,
  /\bRelayPlatformPort\b/,
  "必须通过 RelayPlatformPort 表达平台 mock terminal 边界",
);

assertContains(
  files.core,
  coreContent,
  /\bpub\s+fn\s+analyze_router_config\s*\(/,
  "必须 owning router config block 解析",
);
assertContains(
  files.core,
  coreContent,
  /\bpub\s+fn\s+render_managed_router_config\s*\(/,
  "必须 owning router config block 渲染",
);
assertContains(
  files.core,
  coreContent,
  /\bpub\s+fn\s+strip_managed_router_config\s*\(/,
  "必须 owning router config block 清理",
);

assertContains(
  files.repository,
  repositoryContent,
  /\brelay_core\s*::\s*analyze_router_config\s*\(/,
  "必须把 router config 解析委托给 core",
);
assertContains(
  files.repository,
  repositoryContent,
  /\brelay_core\s*::\s*render_managed_router_config\s*\(/,
  "必须把 router config 渲染委托给 core",
);
assertContains(
  files.repository,
  repositoryContent,
  /\brelay_core\s*::\s*strip_managed_router_config\s*\(/,
  "必须把 router config 清理委托给 core",
);
assertNoPatterns(files.repository, repositoryContent, [
  {
    label: "router parser/render 私有实现",
    message: "relay repository 只做 config/catalog/audit 文件读写，不得 owning router parser/render",
    patterns: [
      /\bfn\s+config_has_router\s*\(/,
      /\bfn\s+config_has_catalog\s*\(/,
      /\bfn\s+append_managed_router_block\s*\(/,
      /\bfn\s+toml_string_literal\s*\(/,
      /\bfn\s+count_model_providers\s*\(/,
      /\bfn\s+top_level_profile\s*\(/,
      /\bfn\s+config_stale_reason\s*\(/,
    ],
  },
  {
    label: "platform/network 副作用",
    message: "relay repository 不得执行 platform、进程或网络能力",
    patterns: [
      /\bRelayPlatformAdapter\b/,
      /\bcrate\s*::\s*platform\s*::/,
      /\bstd\s*::\s*env\b/,
      /\bstd\s*::\s*process\b/,
      /\bCommand\s*::\s*new\s*\(/,
      /\breqwest\b/,
      /\b(fetch_models|test_relay)_mock_terminal\b/,
    ],
  },
]);

assertNoPatterns(files.platform, platformContent, [
  {
    label: "真实网络或进程执行",
    message: "relay platform 当前只能保留 mock terminal 和系统能力占位",
    patterns: [/\breqwest\b/, /\bstd\s*::\s*process\b/, /\bCommand\s*::\s*new\s*\(/, /\.spawn\s*\(/],
  },
]);
assertContains(
  files.platform,
  platformContent,
  /\bimpl\s+RelayPlatformPort\s+for\s+RelayPlatformAdapter\b/,
  "必须通过 RelayPlatformPort 暴露平台能力",
);

if (failures.length > 0) {
  console.error("relay owner 门禁失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "relay owner 门禁通过：command 薄边界、usecase port 化、core router parser/render、repository 文件读写和 platform mock terminal 边界满足当前规则。",
);
