import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  settingsCommands: join(backendRoot, "commands", "settings.rs"),
  systemCommands: join(backendRoot, "commands", "system.rs"),
  applicationPorts: join(backendRoot, "application", "ports.rs"),
  settingsUsecase: join(backendRoot, "application", "usecase", "settings.rs"),
  proxyPlatform: join(backendRoot, "platform", "proxy.rs"),
  processPlatform: join(backendRoot, "platform", "process.rs"),
  systemUsecase: join(backendRoot, "application", "usecase", "system.rs"),
  settingsRepository: join(backendRoot, "repository", "settings.rs"),
  settingsCoreModel: join(backendRoot, "core", "model", "settings.rs"),
  settingsContracts: join(backendRoot, "contracts", "settings.rs"),
  platformActions: join(backendRoot, "application", "usecase", "platform_actions.rs"),
  tauriLib: join(backendRoot, "lib.rs"),
  hexagonalValidator: join(repoRoot, "scripts", "validate-backend-hexagonal.mjs"),
  settingsMap: join(
    repoRoot,
    "docs",
    "reconstruction",
    "settings-current-source-evidence-map.md",
  ),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  reconstructionReadme: join(repoRoot, "docs", "reconstruction", "README.md"),
  packageJson: join(repoRoot, "package.json"),
  backendAggregator: join(repoRoot, "scripts", "validate-backend.mjs"),
};
const failures = [];

const settingsCommands = [
  "check_update_installability",
  "detect_api_proxy_config",
  "get_usage_refresh_interval",
  "graceful_restart_for_update",
  "set_api_proxy_config",
  "set_usage_refresh_interval",
  "test_api_proxy_config",
];

function toRelative(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function readRequired(path, label) {
  if (!existsSync(path)) {
    failures.push(`${toRelative(path)} 缺少 ${label}`);
    return "";
  }

  return readFileSync(path, "utf8");
}

function lineNumberAt(content, index) {
  let line = 1;
  for (let cursor = 0; cursor < index; cursor += 1) {
    if (content[cursor] === "\n") line += 1;
  }
  return line;
}

function findMatches(content, pattern) {
  const flags = pattern.flags.includes("g") ? pattern.flags : `${pattern.flags}g`;
  const regex = new RegExp(pattern.source, flags);
  const matches = [];
  let match;
  while ((match = regex.exec(content)) !== null) {
    matches.push(match.index);
    if (match[0].length === 0) regex.lastIndex += 1;
  }
  return matches;
}

function requirePattern(label, path, content, pattern, reason) {
  if (!pattern.test(content)) {
    failures.push(`${toRelative(path)} 缺少 ${label}：${reason}`);
  }
}

function rejectPattern(label, path, content, pattern, reason) {
  const lines = [
    ...new Set(findMatches(content, pattern).map((index) => lineNumberAt(content, index))),
  ].sort((left, right) => left - right);

  for (const line of lines.slice(0, 3)) {
    failures.push(`${toRelative(path)}:${line} 禁止 ${label}：${reason}`);
  }

  if (lines.length > 3) {
    failures.push(`${toRelative(path)} 还有 ${lines.length - 3} 处 ${label} 未展开`);
  }
}

function validateForbiddenNames(contents) {
  const forbiddenNames = ["Codex" + "Manager", `C${5}`, "lobe" + "hub", "Lobe" + "Hub"];
  const forbiddenPattern = new RegExp(
    `\\b(${forbiddenNames.map((name) => name.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")).join("|")})\\b`,
    "g",
  );

  for (const [path, content] of contents) {
    rejectPattern(
      "禁止公开标识",
      path,
      content,
      forbiddenPattern,
      "公开 settings owner 切片不得写入禁止公开标识",
    );
  }
}

function validateSettingsCommands(path, content) {
  for (const command of settingsCommands) {
    requirePattern(
      `${command} command adapter`,
      path,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`),
      "commands/settings.rs 必须暴露 settings IPC adapter",
    );
    requirePattern(
      `${command} usecase call`,
      path,
      content,
      new RegExp(`\\busecase\\s*::\\s*settings\\s*::\\s*${command}\\s*\\(`),
      "settings command adapter 必须调用 usecase::settings owner",
    );
  }

  for (const [label, pattern] of [
    ["SystemPlatformAdapter", /\bSystemPlatformAdapter\b/],
    ["ProcessPlatformAdapter", /\bProcessPlatformAdapter\b/],
    ["ProxyPlatformAdapter", /\bProxyPlatformAdapter\b/],
    ["Repository State", /\bState\s*<\s*'_\s*,\s*Mutex\s*<\s*Repository\s*>\s*>/],
  ]) {
    requirePattern(label, path, content, pattern, "settings command adapter 必须装配所需平台或仓储边界");
  }
}

function validateSettingsUsecase(path, content) {
  for (const command of settingsCommands) {
    requirePattern(
      `${command} usecase owner`,
      path,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`),
      "application/usecase/settings.rs 必须 owning settings 用户动作",
    );
  }

  for (const [label, pattern, reason] of [
    [
      "settings repository 读取",
      /\bsettings_repository\s*::\s*load_app_settings\s*\(\s*repo\s*\)/,
      "API proxy 更新必须读取 settings repository",
    ],
    [
      "settings repository 保存",
      /\bsettings_repository\s*::\s*save_app_settings\s*\(\s*repo\s*,\s*&settings\s*\)/,
      "API proxy 更新必须通过 settings repository 保存",
    ],
    [
      "usage interval parse",
      /\bUsageRefreshInterval\s*::\s*parse\s*\(\s*&interval\s*\)/,
      "使用量刷新间隔必须由 core model 解析",
    ],
    [
      "usage interval repository",
      /\bsettings_repository\s*::\s*set_usage_refresh_interval\s*\(\s*repo\s*,\s*normalized\s*\)/,
      "使用量刷新间隔必须通过 settings repository 保存",
    ],
    [
      "daemon schedule update",
      /\bdaemon_usecase\s*::\s*update_usage_refresh_schedule\s*\(\s*repo\s*,\s*platform\s*\)\s*\.ok\s*\(\s*\)/,
      "set_usage_refresh_interval 必须继续通过 runtime 平台端口调度 daemon schedule update",
    ],
    [
      "update installability platform owner",
      /\bplatform_actions\s*::\s*check_update_installability\s*\(\s*system\s*\)/,
      "check_update_installability 必须调用独立 platform-actions owner",
    ],
    [
      "graceful restart platform owner",
      /\bplatform_actions\s*::\s*graceful_restart_for_update\s*\(\s*process\s*\)/,
      "graceful_restart_for_update 必须调用独立 platform-actions owner",
    ],
    [
      "API proxy test platform port",
      /\btest_api_proxy_config\s*\([\s\S]*platform\s*:\s*&impl\s+ApiProxyPlatformPort[\s\S]*test_manual_api_proxy_config\s*\(\s*url\s*,\s*platform\s*\)/,
      "test_api_proxy_config 必须经 ApiProxyPlatformPort 执行受限探针",
    ],
    [
      "API proxy detect platform port",
      /\bdetect_api_proxy_config\s*\(\s*platform\s*:\s*&impl\s+ApiProxyPlatformPort\s*\)[\s\S]*platform\s*\.\s*proxy_environment_candidates\s*\(\s*\)[\s\S]*probe_api_proxy_endpoint\s*\(\s*platform\s*,\s*&endpoint\s*\)/,
      "detect_api_proxy_config 必须经 ApiProxyPlatformPort 读取候选并执行受限探针",
    ],
    [
      "API proxy 200ms timeout",
      /\bconst\s+API_PROXY_TCP_PROBE_TIMEOUT_MS\s*:\s*u64\s*=\s*200\s*;/,
      "API proxy TCP 探针 timeout 必须固定为公开证据中的 200ms",
    ],
  ]) {
    requirePattern(label, path, content, pattern, reason);
  }

  for (const [label, pattern] of [
    ["hotspot owner", /\bhotspot\b|\bHotspot\b/g],
    ["relay image compatibility owner", /\bimage_compat\b|\bImageCompat\b/g],
    ["usecase 直接网络探测", /\breqwest\b|\bTcpStream\b|\bstd\s*::\s*net\b|\bstd::env\b/g],
  ]) {
    rejectPattern(label, path, content, pattern, "settings usecase 不得吸收 hotspot/relay 或直接联网探测");
  }
}

function validateApplicationPorts(path, content) {
  for (const [label, pattern] of [
    ["ApiProxyPlatformPort trait", /\btrait\s+ApiProxyPlatformPort\s*\{[\s\S]*normalize_proxy_url[\s\S]*proxy_environment_candidates[\s\S]*probe_tcp/s],
    ["ApiProxyEndpoint DTO", /\bstruct\s+ApiProxyEndpoint\s*\{[\s\S]*normalized_url[\s\S]*scheme[\s\S]*host[\s\S]*port/s],
    ["ApiProxyEnvironment DTO", /\bstruct\s+ApiProxyEnvironment\s*\{[\s\S]*candidates\s*:\s*Vec\s*<\s*String\s*>/],
    ["ApiProxyTcpProbe DTO", /\bstruct\s+ApiProxyTcpProbe\s*\{[\s\S]*reachable\s*:\s*bool[\s\S]*detail\s*:\s*String/s],
    ["ProcessActionOutcome DTO", /\bstruct\s+ProcessActionOutcome\s*\{[\s\S]*spawned\s*:\s*bool[\s\S]*current_process_exit_scheduled\s*:\s*bool/s],
    ["graceful restart process outcome", /\bfn\s+graceful_restart_for_update\s*\(&self\)\s*->\s*Result\s*<\s*ProcessActionOutcome\s*,\s*CoreError\s*>/],
  ]) {
    requirePattern(label, path, content, pattern, "application ports 必须公开 API proxy 受限平台端口合同");
  }
}

function validateUpdateRestartProcessOwner(
  settingsCommands,
  settingsUsecase,
  platformActions,
  processPlatform,
) {
  for (const [label, file, pattern, reason] of [
    [
      "settings update restart usecase returns Result",
      settingsUsecase,
      /\bpub\s+fn\s+graceful_restart_for_update\s*\(\s*process\s*:\s*&impl\s+AppProcessPort\s*,?\s*\)\s*->\s*Result\s*<\s*SystemActionPayload\s*,\s*CoreError\s*>/,
      "graceful_restart_for_update usecase must propagate AppProcessPort errors",
    ],
    [
      "settings update restart command maps envelope",
      settingsCommands,
      /\busecase\s*::\s*settings\s*::\s*graceful_restart_for_update\s*\(\s*&process\s*\)[\s\S]*\.map\s*\(\s*CoreEnvelope\s*::\s*ok\s*\)[\s\S]*\.map_err\s*\(\s*\|error\|\s*error\s*\.\s*to_string\s*\(\s*\)\s*\)/,
      "graceful_restart_for_update command must map Result into CoreEnvelope and propagate errors",
    ],
    [
      "settings update restart maps process outcome",
      platformActions,
      /\bprocess_action_payload\s*\(\s*"graceful_restart_for_update"\s*,[\s\S]*process\s*\.\s*graceful_restart_for_update\s*\(\s*\)\s*\?\s*,?\s*\)/,
      "graceful_restart_for_update must be assembled by platform_actions from AppProcessPort",
    ],
    [
      "process adapter owns update restart spawn",
      processPlatform,
      /\bspawn_replacement_process\s*\(\s*ProcessActionKind::GracefulRestartForUpdate\s*\)[\s\S]*\bspawn_background_os_command\s*\(/,
      "process platform adapter must own non-blocking update restart spawn",
    ],
  ]) {
    requirePattern(label, file.path, file.content, pattern, reason);
  }

  for (const [label, file, pattern, reason] of [
    [
      "settings update restart unsupported stub",
      platformActions,
      /\bunsupported_status\s*\(|BackendEffect\s*::\s*Unsupported|更新重启动作未在当前公开后端范围内恢复/g,
      "graceful_restart_for_update must not return the old unsupported payload",
    ],
    [
      "settings update restart direct process API",
      platformActions,
      /\bstd\s*::\s*(process|env)\b|\bCommand\s*::\s*new\b|\bcurrent_exe\s*\(|\bargs_os\s*\(/g,
      "platform_actions must not bypass AppProcessPort",
    ],
    [
      "process update restart unsupported adapter",
      processPlatform,
      /\bCoreError\s*::\s*Unsupported\b|当前公开后端未恢复更新重启动作/g,
      "process adapter must no longer expose graceful_restart_for_update as unsupported",
    ],
    [
      "process update restart exit scheduling",
      processPlatform,
      /\bstd\s*::\s*process\s*::\s*exit\s*\(|\bschedule_current_process_exit\b|\bRESTART_EXIT_DELAY_MS\b/g,
      "process adapter must not delay or directly exit the current process from IPC update restart paths",
    ],
  ]) {
    rejectPattern(label, file.path, file.content, pattern, reason);
  }
}

function validateProxyPlatform(path, content) {
  for (const [label, pattern] of [
    ["ProxyPlatformAdapter", /\bstruct\s+ProxyPlatformAdapter\b/],
    ["port impl", /\bimpl\s+ApiProxyPlatformPort\s+for\s+ProxyPlatformAdapter\b/],
    ["env 候选", /\bHTTPS_PROXY\b[\s\S]*\bHTTP_PROXY\b[\s\S]*\bALL_PROXY\b[\s\S]*\bhttps_proxy\b[\s\S]*\bhttp_proxy\b[\s\S]*\ball_proxy\b/s],
    ["TCP connect timeout", /\bTcpStream\s*::\s*connect_timeout\s*\(/],
    ["200ms 由 usecase 传入", /\bDuration\s*::\s*from_millis\s*\(\s*timeout_ms\s*\)/],
    ["supported schemes", /"http"\s*\|\s*"https"\s*\|\s*"socks5"\s*\|\s*"socks5h"/],
  ]) {
    requirePattern(label, path, content, pattern, "platform/proxy.rs 必须 owning 环境候选、URL 规范化和 TCP 探针");
  }

  rejectPattern(
    "业务凭据或 HTTP 请求",
    path,
    content,
    /\breqwest\b|\bAuthorization\b|\bBearer\b|\bauth\b|\btoken\b|\bchatgpt\b/gi,
    "API proxy 平台端口不得读取凭据或发起业务 HTTP 请求",
  );
}

function validateSystemNoSettings(path, content) {
  for (const command of settingsCommands) {
    rejectPattern(
      `${command} command adapter`,
      path,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`, "g"),
      "settings IPC adapter 必须归属 commands/settings.rs",
    );
    rejectPattern(
      `${command} system usecase call`,
      path,
      content,
      new RegExp(`\\busecase\\s*::\\s*system\\s*::\\s*${command}\\s*\\(`, "g"),
      "commands/system.rs 不得继续转发 settings 用户动作",
    );
  }
}

function validateSystemUsecaseNoSettings(path, content) {
  for (const command of settingsCommands) {
    rejectPattern(
      `${command} system root wrapper`,
      path,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`, "g"),
      "settings 用户动作不得回流到 application/usecase/system.rs",
    );
  }
}

function validateLibRegistration(path, content) {
  for (const command of settingsCommands) {
    requirePattern(
      `${command} lib registration`,
      path,
      content,
      new RegExp(`\\bcommands\\s*::\\s*settings\\s*::\\s*${command}\\b`),
      "Tauri handler 必须注册 settings command owner",
    );
    rejectPattern(
      `${command} system lib registration`,
      path,
      content,
      new RegExp(`\\bcommands\\s*::\\s*system\\s*::\\s*${command}\\b`, "g"),
      "Tauri handler 不得把 settings 命令注册回 system",
    );
  }
}

function validateHexagonalMapping(path, content) {
  requirePattern(
    "settings domain map",
    path,
    content,
    /\["settings",\s*"settings"\]/,
    "后端六边形校验必须把 settings domain 映射到 settings owner",
  );
}

function validateSettingsMap(path, content) {
  requirePattern(
    "settings map 标题",
    path,
    content,
    /^# settings current-source 证据映射/m,
    "settings current-source map 必须存在并使用固定标题",
  );
  requirePattern(
    "公开源码 owner 边界范围",
    path,
    content,
    /只登记当前公开源码的 settings owner 边界/,
    "map 只能说明当前公开源码 owner 边界",
  );

  for (const requiredPath of [
    "src-tauri/src/commands/settings.rs",
    "src-tauri/src/application/usecase/settings.rs",
    "src-tauri/src/repository/settings.rs",
    "src-tauri/src/core/model/settings.rs",
    "src-tauri/src/contracts/settings.rs",
    "src-tauri/src/application/usecase/platform_actions.rs",
    "src-tauri/src/lib.rs",
    "package.json",
    "scripts/validate-backend.mjs",
    "scripts/validate-backend-settings-owner.mjs",
  ]) {
    requirePattern(
      `${requiredPath} map path`,
      path,
      content,
      new RegExp(requiredPath.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")),
      "map 必须登记 settings current-source 的关键源码路径和验证入口",
    );
  }

  for (const command of settingsCommands) {
    requirePattern(
      `${command} map command coverage`,
      path,
      content,
      new RegExp(`\\\`${command}\\\``),
      "map 必须登记全部 settings 命令覆盖面",
    );
  }

  for (const [label, pattern, reason] of [
    [
      "settings command adapter 边界",
      /settings command adapter[\s\S]*Tauri 参数[\s\S]*CoreEnvelope[\s\S]*usecase::settings/,
      "map 必须登记 settings command adapter owner",
    ],
    [
      "settings usecase 边界",
      /settings usecase[\s\S]*用户动作[\s\S]*settings_repository[\s\S]*UsageRefreshInterval[\s\S]*platform_actions/,
      "map 必须登记 settings usecase owner、repository 调度、core model 解析和平台动作委托",
    ],
    [
      "settings repository 边界",
      /settings repository[\s\S]*settings\.json[\s\S]*load_app_settings[\s\S]*save_app_settings/,
      "map 必须登记 settings repository 文件事务 owner",
    ],
    [
      "settings core model 边界",
      /settings core model[\s\S]*UsageRefreshInterval[\s\S]*parse[\s\S]*as_str/,
      "map 必须登记 settings core model owner",
    ],
    [
      "settings contracts 边界",
      /settings contracts[\s\S]*AppSettingsFile[\s\S]*ApiProxyTestPayload[\s\S]*ApiProxyDetectPayload/,
      "map 必须登记 settings DTO owner",
    ],
    [
      "platform_actions 委托边界",
      /platform_actions[\s\S]*check_update_installability[\s\S]*graceful_restart_for_update[\s\S]*平台端口/,
      "map 必须登记 settings 对 platform_actions 的委托边界",
    ],
  ]) {
    requirePattern(label, path, content, pattern, reason);
  }

  for (const entry of [
    "npm run validate:backend-settings-owner",
    "npm run validate:backend",
    "validate:backend-settings-owner",
  ]) {
    requirePattern(
      `${entry} 验证入口`,
      path,
      content,
      new RegExp(entry.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")),
      "map 必须登记 settings current-source 的验证入口",
    );
  }

  for (const [label, text] of [
    ["不恢复闭源业务", "不恢复闭源业务"],
    ["API proxy 受限平台端口探测", "API proxy 真实探测只限平台端口的 200ms TCP 探针"],
    ["update/restart 非真实平台副作用", "不新增真实 update/restart 平台副作用"],
    [
      "settings 字段 helper 不扩大 owner",
      "不把 hotspot/mystery/notification/daemon 的 settings 字段 helper 扩大为对应业务 owner",
    ],
    ["voice 边界", "不处理 voice"],
  ]) {
    requirePattern(
      label,
      path,
      content,
      new RegExp(text.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")),
      "map 必须明确 settings current-source 的未声明边界",
    );
  }
}

function validateSettingsIndexes(sourceMap, reconstructionReadme) {
  for (const [label, file] of [
    ["source-map settings 索引", sourceMap],
    ["reconstruction README settings 索引", reconstructionReadme],
  ]) {
    requirePattern(
      label,
      file.path,
      file.content,
      /docs\/reconstruction\/settings-current-source-evidence-map\.md[\s\S]*scripts\/validate-backend-settings-owner\.mjs/,
      "索引必须登记 settings current-source map 和 settings owner validator",
    );
    requirePattern(
      `${label} npm 专名入口`,
      file.path,
      file.content,
      /docs\/reconstruction\/settings-current-source-evidence-map\.md[\s\S]*npm run validate:backend-settings-owner/,
      "索引必须登记 settings owner validator 的 npm 入口",
    );
  }
}

function validatePackageScripts(path, content) {
  requirePattern(
    "validate:backend-settings-owner script",
    path,
    content,
    /"validate:backend-settings-owner"\s*:\s*"node scripts\/validate-backend-settings-owner\.mjs"/,
    "package.json 必须暴露 settings owner validator",
  );
  requirePattern(
    "validate:backend script",
    path,
    content,
    /"validate:backend"\s*:\s*"node scripts\/validate-backend\.mjs"/,
    "package.json 必须保留 npm run validate:backend 聚合入口",
  );
}

function validateBackendAggregator(path, content) {
  requirePattern(
    "settings owner 聚合入口",
    path,
    content,
    /"validate-backend-settings-owner\.mjs"/,
    "scripts/validate-backend.mjs 必须继续纳入 settings owner validator",
  );
}

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);

validateForbiddenNames([...raw.values()].map((file) => [file.path, file.content]));
validateSettingsCommands(files.settingsCommands, raw.get("settingsCommands").content);
validateSettingsUsecase(files.settingsUsecase, raw.get("settingsUsecase").content);
validateApplicationPorts(files.applicationPorts, raw.get("applicationPorts").content);
validateUpdateRestartProcessOwner(
  raw.get("settingsCommands"),
  raw.get("settingsUsecase"),
  raw.get("platformActions"),
  raw.get("processPlatform"),
);
validateProxyPlatform(files.proxyPlatform, raw.get("proxyPlatform").content);
validateSystemNoSettings(files.systemCommands, raw.get("systemCommands").content);
validateSystemUsecaseNoSettings(files.systemUsecase, raw.get("systemUsecase").content);
validateLibRegistration(files.tauriLib, raw.get("tauriLib").content);
validateHexagonalMapping(files.hexagonalValidator, raw.get("hexagonalValidator").content);
validateSettingsMap(files.settingsMap, raw.get("settingsMap").content);
validateSettingsIndexes(raw.get("sourceMap"), raw.get("reconstructionReadme"));
validatePackageScripts(files.packageJson, raw.get("packageJson").content);
validateBackendAggregator(files.backendAggregator, raw.get("backendAggregator").content);

if (failures.length > 0) {
  console.error("FAIL 后端 settings owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS 后端 settings owner 校验通过：settings 命令适配、设置事务、平台状态归属、current-source evidence map、索引入口和 Tauri 注册已归位。",
);
