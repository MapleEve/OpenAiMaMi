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
  core: join(repoRoot, "src-tauri", "src", "core", "relay.rs"),
  coreRequestBuilder: join(repoRoot, "src-tauri", "src", "core", "relay", "request_builder.rs"),
  coreRouterConfig: join(repoRoot, "src-tauri", "src", "core", "relay", "router_config.rs"),
  repository: join(repoRoot, "src-tauri", "src", "repository", "relay.rs"),
  configRepository: join(repoRoot, "src-tauri", "src", "repository", "config.rs"),
  platform: join(repoRoot, "src-tauri", "src", "platform", "relay.rs"),
  systemCommand: join(repoRoot, "src-tauri", "src", "commands", "system.rs"),
  systemUsecase: join(repoRoot, "src-tauri", "src", "application", "usecase", "system.rs"),
  tauriLib: join(repoRoot, "src-tauri", "src", "lib.rs"),
  hexagonalValidator: join(repoRoot, "scripts", "validate-backend-hexagonal.mjs"),
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
const usecaseOwnerContents = [
  [files.usecase, usecaseContent],
  [files.usecasePayload, usecasePayloadContent],
  [files.usecaseProvider, usecaseProviderContent],
  [files.usecaseModels, usecaseModelsContent],
  [files.usecaseDiagnostics, usecaseDiagnosticsContent],
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
const systemCommandContent = readRequired(files.systemCommand, "system command 文件");
const systemUsecaseContent = readRequired(files.systemUsecase, "system usecase 文件");
const tauriLibContent = readRequired(files.tauriLib, "Tauri command 注册表");
const hexagonalValidatorContent = readRequired(files.hexagonalValidator, "后端六边形校验脚本");

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
  files.usecase,
  usecaseCombinedContent,
  /\bRelayPlatformPort\b/,
  "必须通过 RelayPlatformPort 表达平台 mock terminal 边界",
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
