import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  commands: join(repoRoot, "src-tauri", "src", "commands", "relay.rs"),
  usecase: join(repoRoot, "src-tauri", "src", "application", "usecase", "relay.rs"),
  usecasePayload: join(repoRoot, "src-tauri", "src", "application", "usecase", "relay", "payload.rs"),
  usecaseProvider: join(repoRoot, "src-tauri", "src", "application", "usecase", "relay", "provider.rs"),
  usecaseModels: join(repoRoot, "src-tauri", "src", "application", "usecase", "relay", "models.rs"),
  usecaseDiagnostics: join(
    repoRoot,
    "src-tauri",
    "src",
    "application",
    "usecase",
    "relay",
    "diagnostics.rs",
  ),
  usecaseThreadMigration: join(
    repoRoot,
    "src-tauri",
    "src",
    "application",
    "usecase",
    "relay",
    "thread_migration.rs",
  ),
  core: join(repoRoot, "src-tauri", "src", "core", "relay.rs"),
  coreRequestBuilder: join(repoRoot, "src-tauri", "src", "core", "relay", "request_builder.rs"),
  coreRouterConfig: join(repoRoot, "src-tauri", "src", "core", "relay", "router_config.rs"),
  repository: join(repoRoot, "src-tauri", "src", "repository", "relay.rs"),
  configRepository: join(repoRoot, "src-tauri", "src", "repository", "config.rs"),
  platform: join(repoRoot, "src-tauri", "src", "platform", "relay.rs"),
  contracts: join(repoRoot, "src-tauri", "src", "contracts", "relay.rs"),
  systemCommand: join(repoRoot, "src-tauri", "src", "commands", "system.rs"),
  systemUsecase: join(repoRoot, "src-tauri", "src", "application", "usecase", "system.rs"),
  tauriLib: join(repoRoot, "src-tauri", "src", "lib.rs"),
  hexagonalValidator: join(repoRoot, "scripts", "validate-backend-hexagonal.mjs"),
  relayMap: join(repoRoot, "docs", "reconstruction", "relay-core-current-source-evidence-map.md"),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  reconstructionReadme: join(repoRoot, "docs", "reconstruction", "README.md"),
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
const usecasePayloadContent = readRequired(files.usecasePayload, "relay usecase payload owner file");
const usecaseProviderContent = readRequired(files.usecaseProvider, "relay usecase provider owner file");
const usecaseModelsContent = readRequired(files.usecaseModels, "relay usecase model fetch owner file");
const usecaseDiagnosticsContent = readRequired(
  files.usecaseDiagnostics,
  "relay usecase diagnostics owner file",
);
const usecaseThreadMigrationContent = readRequired(
  files.usecaseThreadMigration,
  "relay usecase thread migration 空操作 owner file",
);
const usecaseOwnerContents = [
  [files.usecase, usecaseContent],
  [files.usecasePayload, usecasePayloadContent],
  [files.usecaseProvider, usecaseProviderContent],
  [files.usecaseModels, usecaseModelsContent],
  [files.usecaseDiagnostics, usecaseDiagnosticsContent],
  [files.usecaseThreadMigration, usecaseThreadMigrationContent],
];
const usecaseCombinedContent = usecaseOwnerContents.map(([, content]) => content).join("\n");
const coreContent = readRequired(files.core, "relay core 文件");
const coreRequestBuilderContent = readRequired(
  files.coreRequestBuilder,
  "relay core request builder 文件",
);
const coreRouterConfigContent = readRequired(
  files.coreRouterConfig,
  "relay core router config 文件",
);
const repositoryContent = readRequired(files.repository, "relay repository 文件");
const configRepositoryContent = readRequired(files.configRepository, "config repository 文件");
const platformContent = readRequired(files.platform, "relay platform 文件");
const contractsContent = readRequired(files.contracts, "relay contracts 文件");
const systemCommandContent = readRequired(files.systemCommand, "system command 文件");
const systemUsecaseContent = readRequired(files.systemUsecase, "system usecase 文件");
const tauriLibContent = readRequired(files.tauriLib, "Tauri command 注册表");
const hexagonalValidatorContent = readRequired(files.hexagonalValidator, "后端六边形校验脚本");
const relayMapContent = readRequired(files.relayMap, "relay-core current-source evidence map");
const sourceMapContent = readRequired(files.sourceMap, "source-map 注册表");
const reconstructionReadmeContent = readRequired(
  files.reconstructionReadme,
  "docs/reconstruction README",
);

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
assertContains(
  files.commands,
  commandContent,
  /\bpub\s+fn\s+get_image_compat\s*\([\s\S]*\busecase::relay::get_image_compat\s*\(\s*&repo\s*\)/,
  "get_image_compat 必须归属 relay command 并调用 relay usecase",
);
assertContains(
  files.commands,
  commandContent,
  /\bpub\s+fn\s+set_image_compat\s*\([\s\S]*\busecase::relay::set_image_compat\s*\(\s*&repo\s*,\s*enabled\s*\)/,
  "set_image_compat 必须归属 relay command 并调用 relay usecase",
);

const usecaseNoPatternRules = [
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
];
for (const [path, content] of usecaseOwnerContents) {
  assertNoPatterns(path, content, usecaseNoPatternRules);
}
assertContains(
  files.usecase,
  usecaseContent,
  /\bmod\s+payload\s*;/,
  "必须把 relay payload mapper 拆入 application/usecase/relay/payload.rs",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bmod\s+provider\s*;/,
  "必须把 provider CRUD 拆入 application/usecase/relay/provider.rs",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bmod\s+models\s*;/,
  "必须把 model fetch 拆入 application/usecase/relay/models.rs",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bmod\s+diagnostics\s*;/,
  "必须把 router diagnostics/fix 拆入 application/usecase/relay/diagnostics.rs",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bmod\s+thread_migration\s*;/,
  "必须把 relay_thread_migration 空操作/待处理 payload 拆入 application/usecase/relay/thread_migration.rs",
);
assertContains(
  files.usecasePayload,
  usecasePayloadContent,
  /\bpub\s*\(\s*super\s*\)\s+fn\s+provider_payload_from_domain\s*\(/,
  "payload owner 必须 owning provider payload mapper",
);
assertContains(
  files.usecaseProvider,
  usecaseProviderContent,
  /\bpub\s+fn\s+upsert_relay_provider\s*\(/,
  "provider owner 必须 owning provider CRUD usecase",
);
assertContains(
  files.usecaseModels,
  usecaseModelsContent,
  /\bpub\s+fn\s+fetch_relay_models_draft\s*\(/,
  "model fetch owner 必须 owning fetch_relay_models_draft usecase",
);
assertContains(
  files.usecaseDiagnostics,
  usecaseDiagnosticsContent,
  /\bpub\s+fn\s+fix_codex_router_issue\s*\(/,
  "diagnostics owner 必须 owning router diagnostics/fix usecase",
);
assertContains(
  files.usecaseThreadMigration,
  usecaseThreadMigrationContent,
  /\bpub\s*\(\s*super\s*\)\s+fn\s+router_toggle_noop_migration\s*\(/,
  "thread migration owner 必须 owning router toggle 空操作 migration payload",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bthread_migration\s*::\s*router_toggle_noop_migration\s*\(/,
  "set_codex_router_enabled 必须通过 thread_migration owner 获取空操作 migration payload",
);
assertNoPatterns(files.usecase, usecaseContent, [
  {
    label: "内联 migration payload",
    message: "relay usecase 主文件不得内联 relay_thread_migration payload",
    patterns: [/\bRelayRouterMigrationPayload\s*\{/],
  },
]);
assertContains(
  files.usecaseThreadMigration,
  usecaseThreadMigrationContent,
  /migrated_count:\s*0[\s\S]*rolled_back_count:\s*0[\s\S]*skipped_count:\s*0[\s\S]*manifest_path:\s*None/,
  "thread migration 空操作 payload 必须保持 count 为 0 且 manifest_path 为 None",
);
assertContains(
  files.usecasePayload,
  usecasePayloadContent,
  /thread_migration_exists:\s*false/,
  "relay state payload 必须保持 thread_migration_exists=false，不能声明公开迁移运行时存在",
);
assertNoPatterns(files.usecaseThreadMigration, usecaseThreadMigrationContent, [
  {
    label: "真实 thread migration 执行逻辑",
    message: "thread migration owner 当前只能返回空操作/待处理 payload，不得实现闭源运行时迁移",
    patterns: [
      /\bstd\s*::\s*process\b/,
      /\bCommand\s*::\s*new\s*\(/,
      /\.spawn\s*\(/,
      /\bspawn\s*\(/,
      /\b(process_scan|scan_process|scan_codex_process|process\s+scan)\b/i,
      /\b(sqlite_patch|patch_sqlite|SQLite\s+patch)\b/i,
      /\b(session_meta|replace_first_session_meta_line)\b/i,
      /\b(restart_codex|relaunch_codex|restart\s*\(|relaunch\s*\()\b/i,
    ],
  },
]);
assertContains(
  files.usecase,
  usecaseCombinedContent,
  /\bRelayPlatformPort\b/,
  "必须通过 RelayPlatformPort 表达平台 mock terminal 边界",
);
assertContains(
  files.usecasePayload,
  usecasePayloadContent,
  /"test_relay_draft"\s*=>\s*BackendEffect::Platform/,
  "test_relay_draft backend status 必须标记为 Platform effect，不能继续使用 NoOp",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bpub\s+fn\s+get_relay_active\s*\([^]*?\bactive_payload_from_state\s*\([^]*?\brepository_warning\s*\(\s*command\s*\)/,
  "get_relay_active warning 必须保持 repository read 边界，不能继续返回 skeleton warning",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bpub\s+fn\s+get_relay_proxy_status\s*\([^]*?\bproxy_payload_from_domain\s*\([^]*?\brepository_warning\s*\(\s*command\s*\)/,
  "get_relay_proxy_status warning 必须保持 repository read 边界，不能继续返回 skeleton warning",
);
assertContains(
  files.usecasePayload,
  usecasePayloadContent,
  /\bfn\s+relay_repository_effect\s*\(\s*command:\s*&str\s*\)\s*->\s*Option\s*<\s*BackendEffect\s*>/,
  "relay repository effect 必须用 Option 表达已恢复命令集合，未知命令不能落到 restored NoOp",
);
assertContains(
  files.usecasePayload,
  usecasePayloadContent,
  /\bunwrap_or_else\s*\(\s*\|\|\s*skeleton_status\s*\(\s*command\s*\)\s*\)/,
  "repository_status 未知命令必须回落 skeleton_status",
);
assertNoPatterns(
  files.usecasePayload,
  usecasePayloadContent,
  [
    {
      label: "NoOp fallback",
      patterns: [/_\s*=>\s*BackendEffect::NoOp/],
      message: "relay restored status 禁止保留 NoOp fallback",
    },
  ],
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bpub\s+fn\s+export_relay_config\s*\([\s\S]*?\bErr\s*\(\s*_\s*\)\s*=>\s*\(\s*RelayExportPayload\s*\{[\s\S]*?\bbackend_status\s*:\s*repository_status\s*\(\s*command\s*\)[\s\S]*?\brepository_error_warning\s*\(\s*command\s*\)/,
  "export_relay_config 仓储操作失败时 backend_status 必须保持 repository 状态，不能退回 skeleton/pending",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bpub\s+fn\s+import_relay_config\s*\([\s\S]*?\bErr\s*\(\s*_\s*\)\s*=>\s*\(\s*RelayImportPayload\s*\{[\s\S]*?\bbackend_status\s*:\s*repository_status\s*\(\s*command\s*\)[\s\S]*?\brepository_error_warning\s*\(\s*command\s*\)/,
  "import_relay_config 仓储操作失败时 backend_status 必须保持 repository 状态，不能退回 skeleton/pending",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bconfig_repository::get_image_compat\s*\(\s*repo\s*\)/,
  "relay image compatibility 读取必须经 config repository owner",
);
assertContains(
  files.usecase,
  usecaseContent,
  /\bconfig_repository::set_image_compat\s*\(\s*repo\s*,\s*enabled\s*\)/,
  "relay image compatibility 写入必须经 config repository owner",
);

assertContains(
  files.core,
  coreContent,
  /\bmod\s+request_builder\s*;/,
  "必须把 provider request builder 拆入 core/relay/request_builder.rs",
);
assertContains(
  files.core,
  coreContent,
  /\bpub\s+use\s+self\s*::\s*request_builder\s*::/,
  "必须通过 core relay 根模块重新暴露 provider request builder 公开 API",
);
assertContains(
  files.core,
  coreContent,
  /\bmod\s+router_config\s*;/,
  "必须把 router config parser/render 拆入 core/relay/router_config.rs",
);
assertContains(
  files.core,
  coreContent,
  /\bpub\s+use\s+self\s*::\s*router_config\s*::/,
  "必须通过 core relay 根模块重新暴露 router config 公开 API",
);
assertContains(
  files.core,
  coreContent,
  /\bpub\s+fn\s+needs_stream_retry\s*\(/,
  "relay core 必须 owning stream retry 错误语义",
);
assertContains(
  files.core,
  coreContent,
  /\bpub\s+fn\s+should_retry_relay_test\s*\(/,
  "relay core 必须 owning relay test retry 错误语义",
);
for (const term of [
  "stream mode is required",
  "stream must be true",
  "must enable stream",
  "streaming required",
  "only stream",
  "request failed",
  "timeout",
  "connection reset",
  "connection refused",
  "no response data",
  "stream read failed",
]) {
  assertContains(
    files.core,
    coreContent,
    new RegExp(term.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")),
    `relay core retry 词表必须包含 ${term}`,
  );
}
assertContains(
  files.usecasePayload,
  usecasePayloadContent,
  /\brelay_core\s*::\s*relay_test_error_message\s*\(/,
  "relay test payload 必须消费 core retry 错误语义",
);
assertNoPatterns(files.core, coreContent, [
  {
    label: "request builder 私有实现",
    message: "relay core 根文件只聚合 request builder，不得继续 owning provider request builder 实现",
    patterns: [
      /\bpub\s+fn\s+prepare_fetch_models_request\s*\(/,
      /\bpub\s+fn\s+prepare_health_check_request\s*\(/,
      /\bfn\s+trim_url\s*\(/,
      /\bfn\s+strip_compat_suffix\s*\(/,
      /\bfn\s+is_anthropic_wire_api\s*\(/,
      /\bfn\s+normalize_header_pair\s*\(/,
      /\bfn\s+dedupe\s*\(/,
    ],
  },
  {
    label: "router parser/render 私有实现",
    message: "relay core 根文件只聚合 router_config，不得继续 owning router parser/render 实现",
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
]);
assertContains(
  files.coreRequestBuilder,
  coreRequestBuilderContent,
  /\bpub\s+fn\s+prepare_fetch_models_request\s*\(/,
  "core/relay/request_builder.rs 必须 owning model fetch 请求构建",
);
assertContains(
  files.coreRequestBuilder,
  coreRequestBuilderContent,
  /\bpub\s+fn\s+prepare_health_check_request\s*\(/,
  "core/relay/request_builder.rs 必须 owning health check 请求构建",
);
assertContains(
  files.coreRequestBuilder,
  coreRequestBuilderContent,
  /\bpub\s+fn\s+build_models_url_candidates\s*\(/,
  "core/relay/request_builder.rs 必须 owning model URL 归一化",
);
assertContains(
  files.coreRequestBuilder,
  coreRequestBuilderContent,
  /\bpub\s+fn\s+build_fetch_models_headers\s*\(/,
  "core/relay/request_builder.rs 必须 owning provider header 构建",
);
assertContains(
  files.coreRequestBuilder,
  coreRequestBuilderContent,
  /\bpub\s+fn\s+parse_extra_headers\s*\(/,
  "core/relay/request_builder.rs 必须 owning extraHeaders 解析",
);
assertNoPatterns(files.coreRequestBuilder, coreRequestBuilderContent, [
  {
    label: "真实 IO/network/process 副作用",
    message: "relay request builder 只能构建 mock terminal 请求，不得读写文件、启动进程或发起真实网络",
    patterns: [
      /\bstd\s*::\s*fs\b/,
      /\bstd\s*::\s*process\b/,
      /\bCommand\s*::\s*new\s*\(/,
      /\breqwest\b/,
      /\.fs\s*\(/,
      /\.spawn\s*\(/,
    ],
  },
  {
    label: "router parser/render 私有实现",
    message: "relay request builder 不得 owning router config parser/render",
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
]);

assertContains(
  files.coreRouterConfig,
  coreRouterConfigContent,
  /\bpub\s+fn\s+analyze_router_config\s*\(/,
  "core/relay/router_config.rs 必须 owning router config block 解析",
);
assertContains(
  files.coreRouterConfig,
  coreRouterConfigContent,
  /\bconfig_toml_syntax_valid\b[\s\S]*\bconfig_toml_syntax_reason\b[\s\S]*\bconfig_profile_conflict\b[\s\S]*\bconfig_profile_conflict_reason\b/,
  "core/relay/router_config.rs 必须承载 config_toml_syntax 与 config_profile_conflict 只读诊断事实",
);
assertContains(
  files.coreRouterConfig,
  coreRouterConfigContent,
  /\bconfig\.parse\s*::\s*<\s*Value\s*>\s*\(/,
  "config_toml_syntax 必须使用 Cargo.toml 已有 toml::Value 解析，不得手写字符串猜测语法",
);
assertContains(
  files.coreRouterConfig,
  coreRouterConfigContent,
  /\bfn\s+detect_config_profile_conflict\s*\(/,
  "config_profile_conflict 必须由 core/relay/router_config.rs owning 结构化 TOML Value 检查",
);
assertContains(
  files.coreRouterConfig,
  coreRouterConfigContent,
  /\bpub\s+fn\s+render_managed_router_config\s*\(/,
  "core/relay/router_config.rs 必须 owning router config block 渲染",
);
assertContains(
  files.coreRouterConfig,
  coreRouterConfigContent,
  /\bpub\s+fn\s+strip_managed_router_config\s*\(/,
  "core/relay/router_config.rs 必须 owning router config block 清理",
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
  /\bconfig_toml_syntax_valid:\s*analysis\.config_toml_syntax_valid[\s\S]*\bconfig_profile_conflict:\s*analysis\.config_profile_conflict/,
  "repository diagnostic skeleton 必须只搬运 core 产生的 config_toml_syntax/config_profile_conflict 事实",
);
assertContains(
  files.usecasePayload,
  usecasePayloadContent,
  /"config_toml_syntax"[\s\S]*"config_profile_conflict"/,
  "diagnostic payload 必须输出 config_toml_syntax 与 config_profile_conflict item/issue",
);
assertContains(
  files.usecasePayload,
  usecasePayloadContent,
  /"config_toml_syntax"[\s\S]{0,600}false[\s\S]*"config_profile_conflict"[\s\S]{0,700}false/,
  "config_toml_syntax/config_profile_conflict 诊断项必须保持 fixable=false",
);
assertContains(
  files.usecaseDiagnostics,
  usecaseDiagnosticsContent,
  /"config_toml_syntax"\s*\|\s*"config_omit_syntax"[\s\S]*fixed:\s*false/,
  "fix_router_issue 必须兼容 config_toml_syntax/config_omit_syntax 且只返回手动修复",
);
assertContains(
  files.usecaseDiagnostics,
  usecaseDiagnosticsContent,
  /auto_fixable\s*=\s*skeleton\.config_toml_syntax_valid[\s\S]*!\s*skeleton\.config_profile_conflict/,
  "fix all 不得在 config_toml_syntax 或 config_profile_conflict 异常时自动写 config",
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
assertContains(
  files.configRepository,
  configRepositoryContent,
  /\bpub\s+fn\s+get_image_compat\s*\(/,
  "config repository 必须 owning get_image_compat 文件事实读取",
);
assertContains(
  files.configRepository,
  configRepositoryContent,
  /\bpub\s+fn\s+set_image_compat\s*\(/,
  "config repository 必须 owning set_image_compat 文件事实写入",
);
assertContains(
  files.configRepository,
  configRepositoryContent,
  /\brepo\.paths\s*\(\s*\)\.config_path\b/,
  "image compatibility 必须只读写 Repository config_path",
);
assertContains(
  files.configRepository,
  configRepositoryContent,
  /\brepo\.fs\s*\(\s*\)\.(read_to_string|write_string)\s*\(/,
  "image compatibility 必须通过可替换 FS adapter 读写 config.toml",
);
assertContains(
  files.configRepository,
  configRepositoryContent,
  /\bimage_generation\s*=\s*false\b/,
  "image compatibility 必须保留 raw/internal 证明的 image_generation=false 兼容语义",
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
assertNoPatterns(files.coreRouterConfig, coreRouterConfigContent, [
  {
    label: "token/auth read",
    message: "router config diagnostics must not inspect token/auth/API-key material",
    patterns: [
      /\btoken\b/i,
      /\bauth\b/i,
      /\bapi_key\b/i,
      /\bOPENAI_API_KEY\b/,
      /\bAuthorization\b/,
      /\bBearer\b/,
    ],
  },
  {
    label: "process/thread/network",
    message: "router config diagnostics must stay read-only and avoid process/thread/network side effects",
    patterns: [
      /\bstd\s*::\s*process\b/,
      /\bCommand\s*::\s*new\s*\(/,
      /\bstd\s*::\s*thread\b/,
      /\bthread_migration\b/,
      /\breqwest\b/,
      /\bfetch\s*\(/,
      /\.spawn\s*\(/,
    ],
  },
]);
assertNoPatterns(files.usecaseDiagnostics, usecaseDiagnosticsContent, [
  {
    label: "process/thread/network",
    message: "router diagnostic fix dispatch must not add process/thread/network side effects",
    patterns: [
      /\bstd\s*::\s*process\b/,
      /\bCommand\s*::\s*new\s*\(/,
      /\bstd\s*::\s*thread\b/,
      /\bthread_migration\b/,
      /\breqwest\b/,
      /\bfetch\s*\(/,
      /\.spawn\s*\(/,
    ],
  },
]);

assertNoPatterns(files.systemCommand, systemCommandContent, [
  {
    label: "relay image compatibility command",
    message: "get_image_compat / set_image_compat 不得回流到 system command",
    patterns: [
      /\bpub\s+fn\s+get_image_compat\s*\(/,
      /\bpub\s+fn\s+set_image_compat\s*\(/,
      /\busecase::system::get_image_compat\b/,
      /\busecase::system::set_image_compat\b/,
    ],
  },
]);

assertNoPatterns(files.systemUsecase, systemUsecaseContent, [
  {
    label: "relay image compatibility usecase",
    message: "get_image_compat / set_image_compat 不得回流到 system usecase",
    patterns: [/\bpub\s+fn\s+get_image_compat\s*\(/, /\bpub\s+fn\s+set_image_compat\s*\(/],
  },
]);

assertContains(
  files.tauriLib,
  tauriLibContent,
  /\bcommands::relay::get_image_compat\b/,
  "Tauri 注册表必须把 get_image_compat 指向 relay command",
);
assertContains(
  files.tauriLib,
  tauriLibContent,
  /\bcommands::relay::set_image_compat\b/,
  "Tauri 注册表必须把 set_image_compat 指向 relay command",
);
assertNoPatterns(files.tauriLib, tauriLibContent, [
  {
    label: "system image compat registration",
    message: "Tauri 注册表不得把 relay image compatibility 注册到 system command",
    patterns: [/\bcommands::system::get_image_compat\b/, /\bcommands::system::set_image_compat\b/],
  },
]);

assertContains(
  files.hexagonalValidator,
  hexagonalValidatorContent,
  /\["get_image_compat",\s*"relay"\]/,
  "后端六边形 IPC 映射必须把 get_image_compat 归属 relay",
);
assertContains(
  files.hexagonalValidator,
  hexagonalValidatorContent,
  /\["set_image_compat",\s*"relay"\]/,
  "后端六边形 IPC 映射必须把 set_image_compat 归属 relay",
);

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

const relayRuntimeMigrationForbidden = [
  {
    label: "真实 relay thread migration 执行逻辑",
    message: "relay 后端公开 owner 不得实现真实进程扫描、线程 patch、SQLite patch、session meta 替换或重启迁移",
    patterns: [
      /\bstd\s*::\s*process\b/,
      /\bCommand\s*::\s*new\s*\(/,
      /\.spawn\s*\(/,
      /\b(process_scan|scan_process|scan_codex_process|process\s+scan)\b/i,
      /\b(sqlite_patch|patch_sqlite|SQLite\s+patch)\b/i,
      /\b(thread_patch|patch_thread|rollout_patch_parallel)\b/i,
      /\b(session_meta|replace_first_session_meta_line)\b/i,
      /\b(restart_codex|relaunch_codex|restart\s*\(|relaunch\s*\()\b/i,
    ],
  },
];
for (const [path, content] of [
  ...usecaseOwnerContents,
  [files.core, coreContent],
  [files.coreRequestBuilder, coreRequestBuilderContent],
  [files.coreRouterConfig, coreRouterConfigContent],
  [files.repository, repositoryContent],
  [files.platform, platformContent],
]) {
  assertNoPatterns(path, content, relayRuntimeMigrationForbidden);
}

if (
  /真实配置读写等待证据补齐|真实文件检查等待证据补齐/.test(contractsContent)
) {
  failures.push(
    `${toRelative(files.contracts)} relay DTO 注释不得继续把已恢复的本地配置读写或 router 配置检查描述为等待证据`,
  );
}
if (
  !/本地配置读写由 repository owner 恢复，真实代理运行时仍不在 DTO 层承诺/.test(
    contractsContent,
  )
) {
  failures.push(`${toRelative(files.contracts)} RelayStatePayload 注释必须说明本地配置读写已由 repository owner 恢复`);
}
if (
  !/本地 router 配置检查由 repository\/core owner 恢复，真实平台诊断仍不在 DTO 层承诺/.test(
    contractsContent,
  )
) {
  failures.push(`${toRelative(files.contracts)} RelayDiagnosticPayload 注释必须说明 router 配置检查由 repository/core owner 恢复`);
}

assertContains(
  files.relayMap,
  relayMapContent,
  /可由公开 owner 验证的本地配置读写、受管 router 配置注入\/移除、诊断修复本地配置事务和 mock terminal 边界/,
  "relay-core map 必须记录当前公开源码已经恢复的本地配置能力边界",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /repository 通过可替换 FS 读写 `relay-config\.json`[\s\S]*provider CRUD[\s\S]*`blockOfficialPassthrough`[\s\S]*受管 router config 注入\/移除/,
  "relay-core map 必须记录 repository 本地配置恢复范围",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /repository restored[\s\S]*真实网络、进程和流式代理保留为 pending\/mock terminal/,
  "relay-core map 必须说明 repository restored 与真实代理能力的边界",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /read-only diagnostics[\s\S]*config_toml_syntax[\s\S]*config_profile_conflict[\s\S]*fixable=false[\s\S]*不会自动写 config/,
  "relay-core map 必须说明 config_toml_syntax/config_profile_conflict 只读诊断边界",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /不读取 token、auth、API key、Authorization 或 Bearer[\s\S]*不启动进程、不创建线程、不执行 thread migration、不发网络请求/,
  "relay-core map 必须说明 router diagnostics 不触碰 token/auth/process/thread/network",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /不启动代理进程、不发真实网络请求、不实现闭源流式代理/,
  "relay-core map 必须保留真实代理、网络和流式代理未声明边界",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /relay_thread_migration[\s\S]*manifest\.json[\s\S]*producer-ledger\.json[\s\S]*gate-report\.json/,
  "relay-core map 必须记录 relay_thread_migration 的公开证据来源",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /只保留独立的 thread migration owner[\s\S]*空操作\/待处理 payload/,
  "relay-core map 必须说明当前源码只落独立 thread migration 空操作/待处理 owner",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /migrated_count=0[\s\S]*rolled_back_count=0[\s\S]*skipped_count=0[\s\S]*manifest_path=None[\s\S]*thread_migration_exists=false/,
  "relay-core map 必须明确空操作 migration payload 的 count、manifest_path 和 thread_migration_exists 边界",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /不声明 raw\/internal gate 全闭合或闭源业务全恢复/,
  "relay-core map 必须明确不声明 raw/internal gate 全闭合或闭源业务全恢复",
);
assertContains(
  files.relayMap,
  relayMapContent,
  /不得据此实现真实进程扫描、线程 patch、SQLite patch、session meta 替换、Codex 重启或真实运行时迁移/,
  "relay-core map 必须明确禁止恢复真实 thread migration 运行时副作用",
);
assertNoPatterns(files.relayMap, relayMapContent, [
  {
    label: "旧 relay-core map 口径",
    message: "relay-core map 不得继续把已恢复的公开本地配置能力描述成未恢复",
    patterns: [
      /不写真实 router 配置/,
      /未恢复真实 relay provider 存储/,
      /repository 也只提供路径和空集合边界/,
      /诊断修复骨架/,
      /diagnostic skeleton/,
      /无独立 validator 边界/,
      /full\s+leaf/i,
      /closed-source\s+parity/i,
    ],
  },
]);
assertContains(
  files.sourceMap,
  sourceMapContent,
  /docs\/reconstruction\/relay-core-current-source-evidence-map\.md[\s\S]*scripts\/validate-backend-relay-owner\.mjs[\s\S]*本地配置 repository 恢复[\s\S]*relay_thread_migration 空操作\/待处理 owner 边界/,
  "source-map 必须把 relay-core map 收口到 validate-backend-relay-owner.mjs",
);
assertContains(
  files.reconstructionReadme,
  reconstructionReadmeContent,
  /relay-core-current-source-evidence-map\.md[\s\S]*本地配置 repository 恢复[\s\S]*relay_thread_migration 空操作\/待处理边界[\s\S]*scripts\/validate-backend-relay-owner\.mjs/,
  "docs/reconstruction README 必须同步 relay-core map 的直接验证边界",
);

if (failures.length > 0) {
  console.error("relay owner 门禁失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "relay owner 门禁通过：command 薄边界、usecase port 化、image compatibility、core router parser/render、repository 文件读写和 platform mock terminal 边界满足当前规则。",
);
