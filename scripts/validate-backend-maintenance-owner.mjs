import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  maintenanceCommands: join(backendRoot, "commands", "maintenance.rs"),
  systemCommands: join(backendRoot, "commands", "system.rs"),
  maintenanceUsecase: join(backendRoot, "application", "usecase", "maintenance.rs"),
  systemUsecase: join(backendRoot, "application", "usecase", "system.rs"),
  tauriLib: join(backendRoot, "lib.rs"),
  hexagonalValidator: join(repoRoot, "scripts", "validate-backend-hexagonal.mjs"),
};
const failures = [];

const maintenanceCommands = [
  "clean",
  "rebuild_registry",
  "diagnose",
  "force_kill_codex",
  "restart_codex",
  "reset_codex_config",
  "open_path",
  "get_system_info",
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
      "公开 maintenance owner 切片不得写入禁止公开标识",
    );
  }
}

function validateMaintenanceCommands(path, content) {
  for (const command of maintenanceCommands) {
    requirePattern(
      `${command} command adapter`,
      path,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`),
      "commands/maintenance.rs 必须暴露 maintenance IPC adapter",
    );
    requirePattern(
      `${command} usecase call`,
      path,
      content,
      new RegExp(`\\busecase\\s*::\\s*maintenance\\s*::\\s*${command}\\s*\\(`),
      "maintenance command adapter 必须调用 usecase::maintenance owner",
    );
  }

  for (const [label, pattern] of [
    ["ProcessPlatformAdapter", /\bProcessPlatformAdapter\b/],
    ["ShellPlatformAdapter", /\bShellPlatformAdapter\b/],
    ["SystemPlatformAdapter", /\bSystemPlatformAdapter\b/],
    ["Repository State", /\bState\s*<\s*'_\s*,\s*Mutex\s*<\s*Repository\s*>\s*>/],
  ]) {
    requirePattern(label, path, content, pattern, "maintenance command adapter 必须装配所需平台或仓储边界");
  }
}

function validateMaintenanceUsecase(path, content) {
  for (const command of maintenanceCommands) {
    requirePattern(
      `${command} usecase owner`,
      path,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`),
      "application/usecase/maintenance.rs 必须 owning maintenance 用户动作",
    );
  }

  for (const [label, pattern, reason] of [
    [
      "诊断窄 owner 复用",
      /\bsystem\s*::\s*diagnose\s*\(\s*repo\s*\)\s*\?/,
      "diagnose 继续复用 diagnostics 窄 owner，不把诊断细节复制进 maintenance",
    ],
    [
      "进程动作窄 owner 复用",
      /\bplatform_actions\s*::\s*(force_kill_app|restart_app)\s*\(\s*process\s*\)/,
      "maintenance 只编排用户动作，进程能力由独立 platform-actions owner 承载",
    ],
    [
      "打开路径窄 owner 复用",
      /\bplatform_actions\s*::\s*open_path\s*\(\s*shell\s*,\s*path\s*\)\s*\??/,
      "open_path 必须通过独立 platform-actions owner 进入 shell port",
    ],
    [
      "系统信息窄 owner 复用",
      /\bplatform_actions\s*::\s*system_info\s*\(\s*system_port\s*\)/,
      "get_system_info 必须复用独立 platform-actions owner",
    ],
    [
      "配置仓库事务",
      /\bconfig_repository\s*::\s*reset_codex_config\s*\(\s*repo\s*\)\s*\?/,
      "reset_codex_config 文件事务必须由 repository/config owner 承载",
    ],
    [
      "reset 状态 module",
      /\brestored_status\s*\(\s*"maintenance"\s*,\s*"reset_codex_config"\s*,\s*BackendEffect::NoOp\s*\)/,
      "reset_codex_config 对外状态必须声明 maintenance owner",
    ],
  ]) {
    requirePattern(label, path, content, pattern, reason);
  }
}

function validateSystemNoMaintenance(path, content) {
  for (const command of maintenanceCommands) {
    const systemUsecaseName =
      command === "reset_codex_config"
        ? "reset_config"
        : command === "force_kill_codex"
          ? "force_kill_app"
          : command === "get_system_info"
            ? "system_info"
            : command;

    rejectPattern(
      `${command} command adapter`,
      path,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`, "g"),
      "maintenance IPC adapter 必须归属 commands/maintenance.rs",
    );
    rejectPattern(
      `${command} system usecase call`,
      path,
      content,
      new RegExp(`\\busecase\\s*::\\s*system\\s*::\\s*${systemUsecaseName}\\s*\\(`, "g"),
      "commands/system.rs 不得继续转发 maintenance 用户动作",
    );
  }
}

function validateSystemUsecaseNoMaintenance(path, content) {
  for (const command of [
    "clean",
    "rebuild_registry",
    "diagnose",
    "force_kill_app",
    "restart_app",
    "reset_config",
    "open_path",
    "system_info",
  ]) {
    rejectPattern(
      `${command} system root wrapper`,
      path,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`, "g"),
      "maintenance 用户动作不得回流到 application/usecase/system.rs",
    );
  }
}

function validateLibRegistration(path, content) {
  for (const command of maintenanceCommands) {
    requirePattern(
      `${command} lib registration`,
      path,
      content,
      new RegExp(`\\bcommands\\s*::\\s*maintenance\\s*::\\s*${command}\\b`),
      "Tauri handler 必须注册 maintenance command owner",
    );
    rejectPattern(
      `${command} system lib registration`,
      path,
      content,
      new RegExp(`\\bcommands\\s*::\\s*system\\s*::\\s*${command}\\b`, "g"),
      "Tauri handler 不得把 maintenance 命令注册回 system",
    );
  }
}

function validateHexagonalMapping(path, content) {
  requirePattern(
    "maintenance domain map",
    path,
    content,
    /\["maintenance",\s*"maintenance"\]/,
    "后端六边形校验必须把 maintenance domain 映射到 maintenance owner",
  );
}

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);

validateForbiddenNames([...raw.values()].map((file) => [file.path, file.content]));
validateMaintenanceCommands(files.maintenanceCommands, raw.get("maintenanceCommands").content);
validateMaintenanceUsecase(files.maintenanceUsecase, raw.get("maintenanceUsecase").content);
validateSystemNoMaintenance(files.systemCommands, raw.get("systemCommands").content);
validateSystemUsecaseNoMaintenance(files.systemUsecase, raw.get("systemUsecase").content);
validateLibRegistration(files.tauriLib, raw.get("tauriLib").content);
validateHexagonalMapping(files.hexagonalValidator, raw.get("hexagonalValidator").content);

if (failures.length > 0) {
  console.error("FAIL 后端 maintenance owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS 后端 maintenance owner 校验通过：maintenance 命令适配、用户动作、平台/仓储窄 owner 复用和 Tauri 注册已归位。",
);
