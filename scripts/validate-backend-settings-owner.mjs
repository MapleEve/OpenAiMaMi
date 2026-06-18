import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  settingsCommands: join(backendRoot, "commands", "settings.rs"),
  systemCommands: join(backendRoot, "commands", "system.rs"),
  settingsUsecase: join(backendRoot, "application", "usecase", "settings.rs"),
  systemUsecase: join(backendRoot, "application", "usecase", "system.rs"),
  tauriLib: join(backendRoot, "lib.rs"),
  hexagonalValidator: join(repoRoot, "scripts", "validate-backend-hexagonal.mjs"),
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
  ]) {
    requirePattern(label, path, content, pattern, reason);
  }

  for (const [label, pattern] of [
    ["hotspot owner", /\bhotspot\b|\bHotspot\b/g],
    ["relay image compatibility owner", /\bimage_compat\b|\bImageCompat\b/g],
    ["真实 HTTP 探测", /\breqwest\b|\bTcpStream\b|\bstd\s*::\s*net\b/g],
  ]) {
    rejectPattern(label, path, content, pattern, "settings owner 不得吸收 hotspot/relay 或真实联网探测");
  }
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

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);

validateForbiddenNames([...raw.values()].map((file) => [file.path, file.content]));
validateSettingsCommands(files.settingsCommands, raw.get("settingsCommands").content);
validateSettingsUsecase(files.settingsUsecase, raw.get("settingsUsecase").content);
validateSystemNoSettings(files.systemCommands, raw.get("systemCommands").content);
validateSystemUsecaseNoSettings(files.systemUsecase, raw.get("systemUsecase").content);
validateLibRegistration(files.tauriLib, raw.get("tauriLib").content);
validateHexagonalMapping(files.hexagonalValidator, raw.get("hexagonalValidator").content);

if (failures.length > 0) {
  console.error("FAIL 后端 settings owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS 后端 settings owner 校验通过：settings 命令适配、设置事务、平台状态归属和 Tauri 注册已归位。",
);
