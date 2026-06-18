import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  maintenanceCommands: join(backendRoot, "commands", "maintenance.rs"),
  systemCommands: join(backendRoot, "commands", "system.rs"),
  maintenanceUsecase: join(backendRoot, "application", "usecase", "maintenance.rs"),
  repositoryMaintenance: join(backendRoot, "repository", "maintenance.rs"),
  repositoryMod: join(backendRoot, "repository", "mod.rs"),
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
      "清理仓储事务",
      /\bmaintenance_repository\s*::\s*clean_backup_children\s*\(\s*repo\s*\)\s*\?/,
      "clean 文件事务必须由 repository/maintenance owner 承载",
    ],
    [
      "重建注册表仓储事务",
      /\bmaintenance_repository\s*::\s*rebuild_registry_summary\s*\(\s*repo\s*\)\s*\?/,
      "rebuild_registry 文件事务必须由 repository/maintenance owner 承载",
    ],
    [
      "诊断窄 owner 复用",
      /\bdiagnostics\s*::\s*diagnose\s*\(\s*repo\s*,\s*platform\s*\)\s*\?/,
      "diagnose 必须复用独立 diagnostics owner，并转传诊断平台端口",
    ],
    [
      "诊断平台端口转传",
      /\bpub\s+fn\s+diagnose\s*\(\s*repo\s*:\s*&Repository\s*,\s*platform\s*:\s*&impl\s+DiagnosticPlatformPort\s*,?\s*\)/,
      "diagnose 必须只消费应用层诊断平台端口，不直接读取平台常量",
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

  for (const [label, pattern, reason] of [
    [
      "repo.fs 直接文件事务",
      /\brepo\s*\.\s*fs\s*\(\s*\)/g,
      "maintenance usecase 不得直接碰文件系统适配器",
    ],
    [
      "ensure_app_directories 路径事务",
      /\bensure_app_directories\s*\(/g,
      "maintenance usecase 不得通过路径对象直接创建目录",
    ],
    [
      "usecase 私有 remove_children",
      /\bfn\s+remove_children\s*\(/g,
      "备份清理必须归属 repository/maintenance",
    ],
    [
      "usecase 私有 registry_account_count",
      /\bfn\s+registry_account_count\s*\(/g,
      "registry 读取必须归属 repository/maintenance",
    ],
  ]) {
    rejectPattern(label, path, content, pattern, reason);
  }
}

function validateMaintenanceRepository(path, content) {
  for (const [label, pattern, reason] of [
    [
      "maintenance repository clean owner",
      /\bpub\s+fn\s+clean_backup_children\s*\(\s*repo:\s*&Repository\s*\)\s*->\s*Result\s*<\s*MaintenanceCleanResult\s*,\s*CoreError\s*>/,
      "repository/maintenance.rs 必须 owning 备份清理文件事务",
    ],
    [
      "maintenance repository rebuild owner",
      /\bpub\s+fn\s+rebuild_registry_summary\s*\(\s*repo:\s*&Repository\s*,?\s*\)\s*->\s*Result\s*<\s*MaintenanceRegistrySummary\s*,\s*CoreError\s*>/,
      "repository/maintenance.rs 必须 owning registry 重建摘要文件事务",
    ],
    [
      "maintenance directory creation uses FS adapter",
      /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.\s*create_dir_all\s*\(/,
      "maintenance 目录创建必须通过可替换 FileSystemAdapter",
    ],
    [
      "maintenance cleanup uses FS adapter",
      /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.\s*(read_dir|remove_dir_all|remove_file)\s*\(/,
      "maintenance 清理必须通过可替换 FileSystemAdapter",
    ],
    [
      "maintenance registry count uses FS adapter",
      /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.\s*(exists|read_to_string)\s*\(/,
      "maintenance registry 读取必须通过可替换 FileSystemAdapter",
    ],
  ]) {
    requirePattern(label, path, content, pattern, reason);
  }

  rejectPattern(
    "std::fs 直接文件事务",
    path,
    content,
    /\bstd\s*::\s*fs\b/g,
    "repository/maintenance.rs 也必须通过 FileSystemAdapter，不得直接使用 std::fs",
  );
}

function validateRepositoryMod(path, content) {
  requirePattern(
    "repository maintenance module registration",
    path,
    content,
    /\bpub\s+mod\s+maintenance\s*;/,
    "repository/mod.rs 必须注册 maintenance repository owner",
  );
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
validateMaintenanceRepository(
  files.repositoryMaintenance,
  raw.get("repositoryMaintenance").content,
);
validateRepositoryMod(files.repositoryMod, raw.get("repositoryMod").content);
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
