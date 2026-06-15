import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  command: join(repoRoot, "src-tauri", "src", "commands", "runtime_extensions.rs"),
  usecase: join(repoRoot, "src-tauri", "src", "application", "usecase", "runtime_extensions.rs"),
  repository: join(repoRoot, "src-tauri", "src", "repository", "runtime_extensions.rs"),
  contracts: join(repoRoot, "src-tauri", "src", "contracts", "runtime_extensions.rs"),
};

function toRelative(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function readRequired(path, label) {
  if (!existsSync(path)) {
    failures.push(`缺少 ${label}：${toRelative(path)}`);
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

// 只去除 Rust 注释，避免历史说明文字触发 owner 门禁。
function stripRustComments(content) {
  const output = content.split("");
  let cursor = 0;

  while (cursor < content.length) {
    if (content[cursor] === "\"") {
      const quote = content[cursor];
      cursor += 1;
      while (cursor < content.length) {
        if (content[cursor] === "\\") {
          cursor += 2;
          continue;
        }
        if (content[cursor] === quote) {
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
      for (let index = start; index < cursor; index += 1) {
        output[index] = " ";
      }
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
      for (let index = start; index < cursor; index += 1) {
        output[index] = output[index] === "\n" ? "\n" : " ";
      }
      continue;
    }

    cursor += 1;
  }

  return output.join("");
}

function matches(content, pattern) {
  const flags = pattern.flags.includes("g") ? pattern.flags : `${pattern.flags}g`;
  const regex = new RegExp(pattern.source, flags);
  const result = [];
  let match;

  while ((match = regex.exec(content)) !== null) {
    result.push(match.index);
    if (match[0].length === 0) {
      regex.lastIndex += 1;
    }
  }

  return result;
}

function requirePattern(label, path, content, pattern, reason) {
  if (!pattern.test(content)) {
    failures.push(`${toRelative(path)} 缺少 ${label}：${reason}`);
  }
}

function rejectPattern(label, path, original, content, pattern, reason) {
  const lines = [...new Set(matches(content, pattern).map((index) => lineNumberAt(original, index)))].sort(
    (left, right) => left - right,
  );

  for (const line of lines.slice(0, 3)) {
    failures.push(`${toRelative(path)}:${line} 禁止 ${label}：${reason}`);
  }

  if (lines.length > 3) {
    failures.push(`${toRelative(path)} 还有 ${lines.length - 3} 处 ${label} 未展开`);
  }
}

function validateNoExternalProjectNames(contents) {
  for (const [path, content] of contents) {
    rejectPattern(
      "外部项目名称",
      path,
      content,
      content,
      new RegExp(`\\b(${["C", "5"].join("")}|${["Codex", "Manager"].join("")})\\b`, "g"),
      "本切片说明不得引用外部参考项目名",
    );
  }
}

function validateNoRuntimeSideEffects(path, original, content, options = {}) {
  const tauriOrPlatformPattern = options.allowTauriIpc
    ? /\b(tauri_plugin_|AppHandle|Window|Tray|Notification)\b|\bcrate\s*::\s*platform\s*::/g
    : /\b(tauri\s*::|tauri_plugin_|AppHandle|Window|Tray|Notification)\b|\bcrate\s*::\s*platform\s*::/g;
  const rules = [
    {
      label: "动态库加载",
      pattern: /\b(libloading|LoadLibrary|dlopen|Library\s*::\s*new)\b/g,
      reason: "runtime extensions registry 只登记 store，不加载动态代码",
    },
    {
      label: "外部进程执行",
      pattern: /\b(std\s*::\s*process\s*::\s*Command|Command\s*::\s*new)\b|\.\s*(spawn|output|status)\s*\(/g,
      reason: "本切片不得执行插件或外部程序",
    },
    {
      label: "Tauri 或平台副作用",
      pattern: tauriOrPlatformPattern,
      reason: "平台能力不属于 registry/store 持久化边界",
    },
    {
      label: "voice 入口",
      pattern: /\bvoice\b/gi,
      reason: "voice 只能保留独立边界，不得成为 runtime extensions 入口",
    },
  ];

  for (const rule of rules) {
    rejectPattern(rule.label, path, original, content, rule.pattern, rule.reason);
  }
}

function validateCommand(commandPath, original, content) {
  requirePattern(
    "薄 IPC 转发 list",
    commandPath,
    content,
    /usecase\s*::\s*runtime_extensions\s*::\s*list\s*\(\s*&repo\s*\)/,
    "list_plugins 必须只调用 usecase",
  );
  requirePattern(
    "薄 IPC 转发 toggle",
    commandPath,
    content,
    /usecase\s*::\s*runtime_extensions\s*::\s*toggle\s*\(\s*&repo\s*,\s*id\s*,\s*enabled\s*\)/,
    "toggle_plugin 必须只调用 usecase",
  );
  requirePattern(
    "薄 IPC 转发 config",
    commandPath,
    content,
    /usecase\s*::\s*runtime_extensions\s*::\s*config\s*\(\s*&repo\s*,\s*id\s*,\s*(None|Some\s*\(\s*settings\s*\))\s*\)/,
    "get/update config 必须只调用 usecase",
  );
  rejectPattern(
    "command 直接接触 store",
    commandPath,
    original,
    content,
    /\b(PluginStore|save_store|load_merged_store|plugins_path|repo\s*\.\s*fs\s*\()/g,
    "command 层只能做参数、state 和 envelope 适配",
  );
}

function validateUsecase(usecasePath, original, content) {
  for (const operation of ["list_plugins", "set_enabled", "get_config", "update_settings"]) {
    requirePattern(
      `usecase 编排 ${operation}`,
      usecasePath,
      content,
      new RegExp(`runtime_extensions\\s*::\\s*${operation}\\s*\\(`),
      `${operation} 必须通过 repository owner 暴露的窄函数完成`,
    );
  }

  rejectPattern(
    "usecase 持有 store 事务",
    usecasePath,
    original,
    content,
    /\b(PluginStore|save_store|load_merged_store|serde_json\s*::\s*(from_str|to_string|to_string_pretty)|repo\s*\.\s*fs\s*\(|create_dir_all|write_string|rename)\b/g,
    "usecase 只编排动作和组装 payload，不读写 plugins.json",
  );
}

function validateRepository(repositoryPath, original, content) {
  const required = [
    ["store 文档结构", /\bstruct\s+PluginStoreDocument\b/],
    ["store 条目结构", /\bstruct\s+PluginStoreEntry\b/],
    ["结构版本常量", /\bSTORE_SCHEMA_VERSION\b/],
    ["内建 registry", /\bfn\s+builtin_plugins\s*\(/],
    ["内建 merge", /\bfn\s+merge_builtin_with_stored\s*\(/],
    ["store 保存", /\bfn\s+save_store\s*\(/],
    ["store 读取合并", /\bfn\s+load_merged_store\s*\(/],
    ["web-tools 内建 id", /\bWEB_TOOLS_ID\b/],
    ["image-support 内建 id", /\bIMAGE_SUPPORT_ID\b/],
    ["plugins.json 读取", /\.\s*read_to_string\s*\(/],
    ["plugins.json 写入", /\.\s*write_string\s*\(/],
    ["plugins.json 原子替换", /\.\s*rename\s*\(/],
  ];

  for (const [label, pattern] of required) {
    requirePattern(label, repositoryPath, content, pattern, "repository 必须 owning registry/store DTO 与持久化边界");
  }

  requirePattern(
    "内建 category 证据值",
    repositoryPath,
    content,
    /category\s*:\s*Some\s*\(\s*"0"\s*\.to_string\s*\(\s*\)\s*\)/,
    "当前证据闭合 category=0，不得写入未证实分类名",
  );
  rejectPattern(
    "repository 依赖真实文件系统模块",
    repositoryPath,
    original,
    content,
    /\bstd\s*::\s*fs\b|\btokio\s*::\s*fs\b/g,
    "repository 必须通过可替换 repo.fs() 适配器访问文件系统",
  );
}

function validateContracts(contractsPath, original, content) {
  const required = [
    ["插件 payload", /\bstruct\s+RuntimeExtensionPluginPayload\b/],
    ["list payload", /\bstruct\s+RuntimeExtensionListPayload\b/],
    ["toggle payload", /\bstruct\s+RuntimeExtensionTogglePayload\b/],
    ["config payload", /\bstruct\s+RuntimeExtensionConfigPayload\b/],
    ["只序列化 payload", /\buse\s+serde\s*::\s*Serialize\s*;/],
  ];

  for (const [label, pattern] of required) {
    requirePattern(label, contractsPath, content, pattern, "contracts 必须 owning IPC payload");
  }

  rejectPattern(
    "contracts 持有 store 事务",
    contractsPath,
    original,
    content,
    /\b(Repository|PluginStore|save_store|load_merged_store|plugins_path|repo\s*\.\s*fs\s*\(|Deserialize)\b/g,
    "contracts 只能声明 payload，不能承载 plugins.json 事务",
  );
}

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);
const stripped = new Map(
  [...raw.entries()].map(([label, file]) => [label, { ...file, content: stripRustComments(file.content) }]),
);

validateNoExternalProjectNames([...raw.values()].map((file) => [file.path, file.content]));

for (const label of ["command", "usecase", "repository", "contracts"]) {
  const file = raw.get(label);
  const code = stripped.get(label);
  if (!file?.content || !code?.content) {
    continue;
  }
  validateNoRuntimeSideEffects(file.path, file.content, code.content, { allowTauriIpc: label === "command" });
}

validateCommand(files.command, raw.get("command").content, stripped.get("command").content);
validateUsecase(files.usecase, raw.get("usecase").content, stripped.get("usecase").content);
validateRepository(files.repository, raw.get("repository").content, stripped.get("repository").content);
validateContracts(files.contracts, raw.get("contracts").content, stripped.get("contracts").content);

if (failures.length > 0) {
  console.error("Runtime extensions owner 门禁失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("Runtime extensions owner 门禁通过：command/usecase/repository/contracts 边界、store 持久化、无动态加载、无插件执行、无 voice 入口、无平台副作用。");
