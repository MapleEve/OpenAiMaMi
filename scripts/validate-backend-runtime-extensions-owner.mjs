import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const failures = [];

const commandNames = ["list_plugins", "toggle_plugin", "get_plugin_config", "update_plugin_config"];
const registryLeaves = [
  "PluginRegistry__list",
  "PluginRegistry__set_enabled",
  "PluginRegistry__get_config",
  "PluginRegistry__update_settings",
  "PluginRegistry__save_store_static",
  "PluginStoreSchema__serialize",
  "builtin__all_builtin_plugins",
  "builtin__web_tools__plugin_info",
  "builtin__image_support__plugin_info",
];

const files = {
  evidenceMap: join(repoRoot, "docs", "reconstruction", "runtime-extensions-current-source-evidence-map.md"),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  windowsGate: join(
    repoRoot,
    "evidence",
    "full-chain",
    "internal",
    "audits",
    "audits",
    "windows-1.0.9-plugins",
    "gate-report.json",
  ),
  macosGate: join(
    repoRoot,
    "evidence",
    "full-chain",
    "internal",
    "audits",
    "audits",
    "macos-1.0.9-plugins",
    "gate-report.json",
  ),
  listManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "plugins",
    "list_plugins",
    "manifest.json",
  ),
  toggleManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "plugins",
    "toggle_plugin",
    "manifest.json",
  ),
  getConfigManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "plugins",
    "get_plugin_config",
    "manifest.json",
  ),
  updateConfigManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "plugins",
    "update_plugin_config",
    "manifest.json",
  ),
  lib: join(backendRoot, "lib.rs"),
  command: join(backendRoot, "commands", "runtime_extensions.rs"),
  usecase: join(backendRoot, "application", "usecase", "runtime_extensions.rs"),
  contracts: join(backendRoot, "contracts", "runtime_extensions.rs"),
  repository: join(backendRoot, "repository", "runtime_extensions.rs"),
  paths: join(backendRoot, "repository", "paths.rs"),
};

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

function requirePattern(label, path, content, pattern, reason) {
  if (!pattern.test(content)) {
    failures.push(`${toRelative(path)} 缺少 ${label}: ${reason}`);
  }
}

function requireText(label, path, content, text, reason) {
  if (!content.includes(text)) {
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

  const requiredBooleans = [
    "consumerStartReady",
    "strictImplementationUse",
    "readyToImplement",
    "gate_accepted",
    "full_leaf_100",
    "moduleExitAllowed",
  ];
  if (report.module !== "plugins") {
    failures.push(`${toRelative(path)} module 必须是 plugins`);
  }
  if (report.platform !== platform) {
    failures.push(`${toRelative(path)} platform 必须是 ${platform}`);
  }
  if (report.command_count !== 13) {
    failures.push(`${toRelative(path)} command_count 必须是 13`);
  }
  for (const key of requiredBooleans) {
    if (report[key] !== true) {
      failures.push(`${toRelative(path)} ${key} 必须为 true`);
    }
  }
  for (const command of [...commandNames, ...registryLeaves]) {
    if (!report.commands?.includes(command)) {
      failures.push(`${toRelative(path)} commands 缺少 ${command}`);
    }
    if (!report.leaves?.some((leaf) => leaf.command === command && leaf.decompile_ok === true)) {
      failures.push(`${toRelative(path)} leaves 缺少 decompile_ok=true 的 ${command}`);
    }
  }
}

function validateManifest(path, manifest, expectation) {
  if (!manifest) {
    return;
  }

  if (manifest.module !== "plugins") {
    failures.push(`${toRelative(path)} module 必须是 plugins`);
  }
  if (manifest.platform !== "windows-x64") {
    failures.push(`${toRelative(path)} platform 必须是 windows-x64`);
  }
  if (manifest.command !== expectation.command) {
    failures.push(`${toRelative(path)} command 必须是 ${expectation.command}`);
  }
  if (manifest.owner?.decompile_ok !== true) {
    failures.push(`${toRelative(path)} owner.decompile_ok 必须为 true`);
  }
  for (const key of [
    "consumerStartReady",
    "strictImplementationUse",
    "readyToImplement",
    "gate_accepted",
    "full_leaf_100",
    "moduleExitAllowed",
  ]) {
    if (manifest.gate?.[key] !== true) {
      failures.push(`${toRelative(path)} gate.${key} 必须为 true`);
    }
  }
  for (const text of expectation.sideEffects) {
    if (!manifest.terminal_side_effect_classes?.includes(text)) {
      failures.push(`${toRelative(path)} terminal_side_effect_classes 缺少 ${text}`);
    }
  }
  for (const text of expectation.threading) {
    if (!manifest.threading_model?.includes(text)) {
      failures.push(`${toRelative(path)} threading_model 缺少 ${text}`);
    }
  }
}

function validateEvidenceMap(content) {
  const mapPath = files.evidenceMap;
  const requiredPaths = [
    "evidence/full-chain/internal/audits/audits/windows-1.0.9-plugins/gate-report.json",
    "evidence/full-chain/internal/audits/audits/macos-1.0.9-plugins/gate-report.json",
    "evidence/full-chain/raw/aimami/1.0.9/windows/plugins/list_plugins/manifest.json",
    "evidence/full-chain/raw/aimami/1.0.9/windows/plugins/toggle_plugin/manifest.json",
    "evidence/full-chain/raw/aimami/1.0.9/windows/plugins/get_plugin_config/manifest.json",
    "evidence/full-chain/raw/aimami/1.0.9/windows/plugins/update_plugin_config/manifest.json",
    "src-tauri/src/lib.rs",
    "src-tauri/src/commands/runtime_extensions.rs",
    "src-tauri/src/application/usecase/runtime_extensions.rs",
    "src-tauri/src/contracts/runtime_extensions.rs",
    "src-tauri/src/repository/runtime_extensions.rs",
    "src-tauri/src/repository/paths.rs",
    "scripts/validate-backend-runtime-extensions-owner.mjs",
  ];
  const requiredPhrases = [
    "runtime-extensions current-source 证据映射",
    "当前源码 owner 归属",
    "四个命令的当前闭环",
    "已覆盖边界",
    "未声明边界",
    "不声明动态插件加载",
    "不声明外部插件执行",
    "不声明市场导入安装",
    "不声明真实 capability 执行",
    "不声明 voice 集成",
    "不声明闭源后端全量还原",
    "不声明平台副作用",
    "registry/store",
    "plugins.json",
    "app_data_dir.join(\"plugins.json\")",
    "category `0`",
  ];

  for (const path of requiredPaths) {
    requireText("证据/源码路径", mapPath, content, path, "evidence map 必须列出完整 current-source 证据闭环路径");
  }
  for (const command of commandNames) {
    requireText(`命令 ${command}`, mapPath, content, `\`${command}\``, "evidence map 必须逐项覆盖四个 IPC 命令");
  }
  for (const phrase of requiredPhrases) {
    requireText(phrase, mapPath, content, phrase, "evidence map 必须声明覆盖与未声明边界");
  }

  const forbiddenClaims = [
    /动态插件加载已(完成|恢复|实现)/,
    /外部插件执行已(完成|恢复|实现)/,
    /市场导入安装已(完成|恢复|实现)/,
    /真实 capability 执行已(完成|恢复|实现)/,
    /voice 集成已(完成|恢复|实现)/,
    /闭源后端全量还原已(完成|恢复|实现)/,
    /平台副作用已(完成|恢复|实现)/,
  ];
  for (const pattern of forbiddenClaims) {
    rejectPattern("非声明边界被写成已完成", mapPath, content, content, pattern, "本文只能声明未覆盖边界");
  }
}

function validateSourceMap(content) {
  requireText(
    "runtime-extensions evidence map 索引",
    files.sourceMap,
    content,
    "docs/reconstruction/runtime-extensions-current-source-evidence-map.md",
    "source-map 应索引 current-source evidence map，但不得扩大声明",
  );
}

function validateNoExternalProjectNames(path, content) {
  rejectPattern(
    "外部参考项目名",
    path,
    content,
    content,
    new RegExp(`\\b(${["C", "5"].join("")}|${["Codex", "Manager"].join("")})\\b`, "g"),
    "runtime-extensions 证据图不得写入外部参考项目名",
  );
}

function validateNoRuntimeSideEffects(path, original, content, options = {}) {
  const tauriOrPlatformPattern = options.allowTauriIpc
    ? /\b(tauri_plugin_|AppHandle|Window|Tray|Notification)\b|\bcrate\s*::\s*platform\s*::/g
    : /\b(tauri\s*::|tauri_plugin_|AppHandle|Window|Tray|Notification)\b|\bcrate\s*::\s*platform\s*::/g;
  const rules = [
    {
      label: "动态库加载",
      pattern: /\b(libloading|LoadLibrary|dlopen|Library\s*::\s*new)\b/g,
      reason: "runtime-extensions 当前只登记 registry/store，不加载动态代码",
    },
    {
      label: "外部进程执行",
      pattern: /\b(std\s*::\s*process\s*::\s*Command|Command\s*::\s*new)\b|\.\s*(spawn|output|status)\s*\(/g,
      reason: "runtime-extensions 当前不得执行插件或外部程序",
    },
    {
      label: "Tauri 或平台副作用",
      pattern: tauriOrPlatformPattern,
      reason: "平台能力不属于 registry/store 持久化边界",
    },
    {
      label: "voice 入口",
      pattern: /\bvoice\b/gi,
      reason: "voice 保留独立边界，不得接入 runtime-extensions",
    },
    {
      label: "marketplace 或远端安装",
      pattern: /\b(marketplace|install_plugin|download_plugin|remote_registry|plugin_market)\b/gi,
      reason: "当前证据不声明市场导入安装",
    },
  ];

  for (const rule of rules) {
    rejectPattern(rule.label, path, original, content, rule.pattern, rule.reason);
  }
}

function validateLib(path, content) {
  for (const command of commandNames) {
    requirePattern(
      `IPC 注册 ${command}`,
      path,
      content,
      new RegExp(`\\bcommands::runtime_extensions::${command}\\b`),
      "Tauri 注册表必须暴露 runtime-extensions 四个命令",
    );
  }
}

function validateCommand(path, original, content) {
  for (const [command, payload] of [
    ["list_plugins", "RuntimeExtensionListPayload"],
    ["toggle_plugin", "RuntimeExtensionTogglePayload"],
    ["get_plugin_config", "RuntimeExtensionConfigPayload"],
    ["update_plugin_config", "RuntimeExtensionConfigPayload"],
  ]) {
    requirePattern(
      `${command} Tauri command`,
      path,
      content,
      new RegExp(
        `#\\s*\\[\\s*tauri\\s*::\\s*command\\s*\\][\\s\\S]*pub\\s+fn\\s+${command}\\s*\\([\\s\\S]*CoreEnvelope\\s*<\\s*${payload}\\s*>`,
      ),
      "command 层必须只暴露 IPC adapter 和 envelope payload",
    );
  }
  requirePattern(
    "list usecase 转发",
    path,
    content,
    /usecase\s*::\s*runtime_extensions\s*::\s*list\s*\(\s*&repo\s*\)/,
    "list_plugins 必须只调用 usecase",
  );
  requirePattern(
    "toggle usecase 转发",
    path,
    content,
    /usecase\s*::\s*runtime_extensions\s*::\s*toggle\s*\(\s*&repo\s*,\s*id\s*,\s*enabled\s*\)/,
    "toggle_plugin 必须只调用 usecase",
  );
  requirePattern(
    "get config usecase 转发",
    path,
    content,
    /usecase\s*::\s*runtime_extensions\s*::\s*config\s*\(\s*&repo\s*,\s*id\s*,\s*None\s*\)/,
    "get_plugin_config 必须只调用 usecase config(None)",
  );
  requirePattern(
    "update config usecase 转发",
    path,
    content,
    /usecase\s*::\s*runtime_extensions\s*::\s*config\s*\(\s*&repo\s*,\s*id\s*,\s*Some\s*\(\s*settings\s*\)\s*\)/,
    "update_plugin_config 必须只调用 usecase config(Some(settings))",
  );
  rejectPattern(
    "command 直接接触 store",
    path,
    original,
    content,
    /\b(PluginStore|save_store|load_merged_store|plugins_path|repo\s*\.\s*fs\s*\(|serde_json\s*::)\b/g,
    "command 层只做参数、state 和 envelope 适配",
  );
}

function validateUsecase(path, original, content) {
  for (const operation of ["list_plugins", "set_enabled", "get_config", "update_settings"]) {
    requirePattern(
      `usecase 编排 ${operation}`,
      path,
      content,
      new RegExp(`runtime_extensions\\s*::\\s*${operation}\\s*\\(`),
      `${operation} 必须通过 repository owner 暴露的窄函数完成`,
    );
  }
  requirePattern(
    "list repository write status",
    path,
    content,
    /restored_status\s*\(\s*"runtime-extensions"\s*,\s*"list_plugins"\s*,\s*BackendEffect::RepositoryWrite\s*,?\s*\)/,
    "list_plugins 当前源码会保存合并后的 repository store",
  );
  requirePattern(
    "toggle repository write status",
    path,
    content,
    /restored_status\s*\(\s*"runtime-extensions"\s*,\s*"toggle_plugin"\s*,\s*BackendEffect::RepositoryWrite\s*,?\s*\)/,
    "toggle_plugin 必须写 repository store",
  );
  requirePattern(
    "config effect variable",
    path,
    content,
    /\brestored_status\s*\(\s*"runtime-extensions"\s*,\s*command\s*,\s*effect\s*,?\s*\)/,
    "config 分支必须根据 get/update 选择 RepositoryRead 或 RepositoryWrite",
  );
  requirePattern(
    "get config repository read status",
    path,
    content,
    /"get_plugin_config"[\s\S]*BackendEffect::RepositoryRead/,
    "get_plugin_config 只读 repository store",
  );
  requirePattern(
    "update config repository write status",
    path,
    content,
    /"update_plugin_config"[\s\S]*BackendEffect::RepositoryWrite/,
    "update_plugin_config 必须写 repository store",
  );
  for (const command of ["list", "toggle", "config"]) {
    requirePattern(
      `usecase ${command}`,
      path,
      content,
      new RegExp(`pub\\s+fn\\s+${command}\\s*\\(`),
      "runtime-extensions 用户动作必须集中在 usecase",
    );
  }
  rejectPattern(
    "usecase 持有 store 事务",
    path,
    original,
    content,
    /\b(PluginStore|save_store|load_merged_store|serde_json\s*::\s*(from_str|to_string|to_string_pretty)|repo\s*\.\s*fs\s*\(|create_dir_all|write_string|rename)\b/g,
    "usecase 只编排动作和组装 payload，不读写 plugins.json",
  );
  rejectPattern(
    "usecase 依赖 Tauri 或平台对象",
    path,
    original,
    content,
    /\b(tauri\s*::|State\s*<|CoreEnvelope|AppHandle|Window|Tray|Notification|crate\s*::\s*platform\s*::)\b/g,
    "usecase 不得依赖 Tauri UI 或平台副作用",
  );
  rejectPattern(
    "runtime-extensions restored status NoOp",
    path,
    original,
    content,
    /\bBackendEffect\s*::\s*NoOp\b/g,
    "runtime-extensions restored repository IO 必须标成 RepositoryRead/RepositoryWrite",
  );
}

function validateContracts(path, original, content) {
  const required = [
    ["settings value", /\btype\s+RuntimeExtensionSettingsValue\s*=\s*serde_json\s*::\s*Value\s*;/],
    ["plugin payload", /\bstruct\s+RuntimeExtensionPluginPayload\b/],
    ["list payload", /\bstruct\s+RuntimeExtensionListPayload\b/],
    ["toggle payload", /\bstruct\s+RuntimeExtensionTogglePayload\b/],
    ["config payload", /\bstruct\s+RuntimeExtensionConfigPayload\b/],
    ["只序列化 payload", /\buse\s+serde\s*::\s*Serialize\s*;/],
  ];
  for (const [label, pattern] of required) {
    requirePattern(label, path, content, pattern, "contracts 必须 owning IPC payload");
  }
  rejectPattern(
    "contracts 持有 store 事务",
    path,
    original,
    content,
    /\b(Repository|PluginStore|save_store|load_merged_store|plugins_path|repo\s*\.\s*fs\s*\(|Deserialize)\b/g,
    "contracts 只能声明 payload，不能承载 plugins.json 事务",
  );
}

function validateRepository(path, original, content) {
  const required = [
    ["repository boundary marker", /\btrait\s+RuntimeExtensionsRepositoryBoundary\b/],
    ["domain record", /\bstruct\s+RuntimeExtensionRecord\b/],
    ["store 文档结构", /\bstruct\s+PluginStoreDocument\b/],
    ["store 条目结构", /\bstruct\s+PluginStoreEntry\b/],
    ["结构版本常量", /\bSTORE_SCHEMA_VERSION\b/],
    ["内建 registry", /\bfn\s+builtin_plugins\s*\(/],
    ["内建 merge", /\bfn\s+merge_builtin_with_stored\s*\(/],
    ["store 保存", /\bfn\s+save_store\s*\(/],
    ["store 读取合并", /\bfn\s+load_merged_store\s*\(/],
    ["list_plugins repository API", /\bpub\s+fn\s+list_plugins\s*\(/],
    ["set_enabled repository API", /\bpub\s+fn\s+set_enabled\s*\(/],
    ["get_config repository API", /\bpub\s+fn\s+get_config\s*\(/],
    ["update_settings repository API", /\bpub\s+fn\s+update_settings\s*\(/],
    ["plugins path", /\bpub\s+fn\s+plugins_path\s*\(/],
    ["web-tools 内建 id", /\bWEB_TOOLS_ID\b/],
    ["image-support 内建 id", /\bIMAGE_SUPPORT_ID\b/],
    ["plugins.json 读取", /\.\s*read_to_string\s*\(/],
    ["plugins.json 写入", /\.\s*write_string\s*\(/],
    ["plugins.json 原子替换", /\.\s*rename\s*\(/],
    ["repository fs adapter", /\brepo\s*\.\s*fs\s*\(\s*\)/],
    ["repository paths adapter", /\brepo\s*\.\s*paths\s*\(\s*\)/],
  ];

  for (const [label, pattern] of required) {
    requirePattern(label, path, content, pattern, "repository 必须 owning registry/store DTO 与持久化边界");
  }
  requirePattern(
    "内建 category 证据值",
    path,
    content,
    /category\s*:\s*Some\s*\(\s*"0"\s*\.to_string\s*\(\s*\)\s*\)/,
    "当前证据闭合 category=0，不得写入未证实分类名",
  );
  requirePattern(
    "runtime extensions repository tests",
    path,
    content,
    /\bmod\s+tests\b[\s\S]*config_roundtrip_persists_settings[\s\S]*missing_plugin_is_rejected_for_mutations/,
    "repository 必须保留 store merge、toggle 和 config 持久化测试",
  );
  rejectPattern(
    "repository 依赖真实文件系统模块",
    path,
    original,
    content,
    /\bstd\s*::\s*fs\b|\btokio\s*::\s*fs\b/g,
    "repository 必须通过可替换 repo.fs() 适配器访问文件系统",
  );
}

function validatePaths(path, content) {
  requirePattern(
    "runtime_extensions_path 字段",
    path,
    content,
    /\bruntime_extensions_path\s*:\s*PathBuf\b/,
    "RepositoryPaths 必须 owning runtime extensions store 路径字段",
  );
  requirePattern(
    "plugins.json 逻辑路径",
    path,
    content,
    /\bruntime_extensions_path\s*:\s*app_data_dir\s*\.join\s*\(\s*"plugins\.json"\s*\)/,
    "runtime extensions store 只能声明逻辑路径，不写机器绝对路径",
  );
}

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);
const stripped = new Map(
  [...raw.entries()].map(([label, file]) => [
    label,
    {
      ...file,
      content: label === "evidenceMap" || label === "sourceMap" ? file.content : stripRustComments(file.content),
    },
  ]),
);

const windowsGate = readJsonRequired(files.windowsGate, "Windows plugins gate-report");
const macosGate = readJsonRequired(files.macosGate, "macOS plugins gate-report");
const manifests = [
  [
    files.listManifest,
    readJsonRequired(files.listManifest, "list_plugins manifest"),
    {
      command: "list_plugins",
      sideEffects: ["read registry", "map PluginEntry DTO", "CoreEnvelope ok list", "no durable write"],
      threading: ["registry list"],
    },
  ],
  [
    files.toggleManifest,
    readJsonRequired(files.toggleManifest, "toggle_plugin manifest"),
    {
      command: "toggle_plugin",
      sideEffects: ["decode id/enabled", "set_enabled", "save store", "CoreEnvelope ok enabled"],
      threading: ["set_enabled", "save_store_static"],
    },
  ],
  [
    files.getConfigManifest,
    readJsonRequired(files.getConfigManifest, "get_plugin_config manifest"),
    {
      command: "get_plugin_config",
      sideEffects: ["decode id", "get_config", "CoreEnvelope ok config"],
      threading: ["get_config"],
    },
  ],
  [
    files.updateConfigManifest,
    readJsonRequired(files.updateConfigManifest, "update_plugin_config manifest"),
    {
      command: "update_plugin_config",
      sideEffects: ["decode id/settings", "update_settings", "save store"],
      threading: ["update_settings", "save_store_static"],
    },
  ],
];

validateGateReport(files.windowsGate, windowsGate, "windows-x64");
validateGateReport(files.macosGate, macosGate, "macos");
for (const [path, manifest, expectation] of manifests) {
  validateManifest(path, manifest, expectation);
}

validateEvidenceMap(raw.get("evidenceMap").content);
validateSourceMap(raw.get("sourceMap").content);
validateNoExternalProjectNames(files.evidenceMap, raw.get("evidenceMap").content);

for (const label of ["command", "usecase", "repository", "contracts"]) {
  const file = raw.get(label);
  const code = stripped.get(label);
  if (!file?.content || !code?.content) {
    continue;
  }
  validateNoRuntimeSideEffects(file.path, file.content, code.content, { allowTauriIpc: label === "command" });
}

validateLib(files.lib, stripped.get("lib").content);
validateCommand(files.command, raw.get("command").content, stripped.get("command").content);
validateUsecase(files.usecase, raw.get("usecase").content, stripped.get("usecase").content);
validateContracts(files.contracts, raw.get("contracts").content, stripped.get("contracts").content);
validateRepository(files.repository, raw.get("repository").content, stripped.get("repository").content);
validatePaths(files.paths, stripped.get("paths").content);

if (failures.length > 0) {
  console.error("FAIL runtime-extensions owner 校验失败:");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS runtime-extensions owner 校验通过: evidence map、gate-report、raw manifest、command/usecase/contracts/repository/paths、无动态加载、无外部执行、无 voice 入口、无平台副作用。",
);
