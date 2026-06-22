import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  maintenanceCommands: join(backendRoot, "commands", "maintenance.rs"),
  systemCommands: join(backendRoot, "commands", "system.rs"),
  applicationPorts: join(backendRoot, "application", "ports.rs"),
  maintenanceUsecase: join(backendRoot, "application", "usecase", "maintenance.rs"),
  platformActions: join(backendRoot, "application", "usecase", "platform_actions.rs"),
  processPlatform: join(backendRoot, "platform", "process.rs"),
  repositoryMaintenance: join(backendRoot, "repository", "maintenance.rs"),
  repositoryMod: join(backendRoot, "repository", "mod.rs"),
  systemUsecase: join(backendRoot, "application", "usecase", "system.rs"),
  tauriLib: join(backendRoot, "lib.rs"),
  hexagonalValidator: join(repoRoot, "scripts", "validate-backend-hexagonal.mjs"),
  maintenanceMap: join(
    repoRoot,
    "docs",
    "reconstruction",
    "maintenance-current-source-evidence-map.md",
  ),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  reconstructionReadme: join(repoRoot, "docs", "reconstruction", "README.md"),
  packageJson: join(repoRoot, "package.json"),
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
      /\brestored_status\s*\(\s*"maintenance"\s*,\s*"reset_codex_config"\s*,\s*BackendEffect::RepositoryWrite\s*,?\s*\)/,
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

function validateProcessActionRestartOwner(
  maintenanceCommands,
  maintenanceUsecase,
  applicationPorts,
  platformActions,
  processPlatform,
) {
  for (const [label, file, pattern, reason] of [
    [
      "process action outcome port",
      applicationPorts,
      /\btrait\s+AppProcessPort\s*\{[\s\S]*Result\s*<\s*ProcessActionOutcome\s*,\s*CoreError\s*>[\s\S]*force_kill_app/s,
      "restart_codex must use a replaceable AppProcessPort outcome, not command/usecase process calls",
    ],
    [
      "maintenance restart usecase returns Result",
      maintenanceUsecase,
      /\bpub\s+fn\s+restart_codex\s*\(\s*process\s*:\s*&impl\s+AppProcessPort\s*\)\s*->\s*Result\s*<\s*SystemActionPayload\s*,\s*CoreError\s*>/,
      "restart_codex usecase must propagate AppProcessPort errors",
    ],
    [
      "maintenance restart command maps envelope",
      maintenanceCommands,
      /\busecase\s*::\s*maintenance\s*::\s*restart_codex\s*\(\s*&process\s*\)[\s\S]*\.map\s*\(\s*CoreEnvelope\s*::\s*ok\s*\)[\s\S]*\.map_err\s*\(\s*\|error\|\s*error\s*\.\s*to_string\s*\(\s*\)\s*\)/,
      "restart_codex command must map Result into CoreEnvelope and propagate errors",
    ],
    [
      "maintenance restart maps platform action outcome",
      platformActions,
      /\bprocess_action_payload\s*\(\s*"restart_codex"\s*,\s*process\s*\.\s*restart_app\s*\(\s*\)\s*\?\s*,?\s*\)/,
      "restart_codex must be assembled by platform_actions from AppProcessPort",
    ],
    [
      "process adapter owns async restart spawn",
      processPlatform,
      /\bspawn_replacement_process\s*\(\s*ProcessActionKind::RestartApp\s*\)[\s\S]*\bspawn_background_os_command\s*\(/,
      "process platform adapter must own non-blocking replacement spawn",
    ],
  ]) {
    requirePattern(label, file.path, file.content, pattern, reason);
  }

  for (const [label, file, pattern, reason] of [
    [
      "maintenance restart unsupported stub",
      platformActions,
      /\bunsupported_status\s*\(|BackendEffect\s*::\s*Unsupported|重启外部程序能力未在当前公开后端范围内恢复/g,
      "restart_codex must not return the old unsupported payload",
    ],
    [
      "maintenance direct process API",
      platformActions,
      /\bstd\s*::\s*(process|env)\b|\bCommand\s*::\s*new\b|\bcurrent_exe\s*\(|\bargs_os\s*\(/g,
      "platform_actions must not bypass AppProcessPort",
    ],
    [
      "process restart unsupported adapter",
      processPlatform,
      /\bCoreError\s*::\s*Unsupported\b|当前公开后端未恢复重启外部程序能力/g,
      "process adapter must no longer expose restart_codex as unsupported",
    ],
    [
      "process restart exit scheduling",
      processPlatform,
      /\bstd\s*::\s*process\s*::\s*exit\s*\(|\bschedule_current_process_exit\b|\bRESTART_EXIT_DELAY_MS\b/g,
      "process adapter must not delay or directly exit the current process from IPC restart paths",
    ],
  ]) {
    rejectPattern(label, file.path, file.content, pattern, reason);
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

function validateMaintenanceMap(path, content) {
  requirePattern(
    "maintenance map 标题",
    path,
    content,
    /^# maintenance current-source 证据映射/m,
    "maintenance current-source map 必须存在并使用固定标题",
  );
  requirePattern(
    "公开源码 owner 边界范围",
    path,
    content,
    /只登记当前公开源码的 maintenance owner 边界/,
    "map 只能说明当前公开源码 owner 边界",
  );
  requirePattern(
    "非闭源业务完整恢复声明",
    path,
    content,
    /不把当前公开骨架等同于闭源业务还原/,
    "map 必须明确不是闭源业务完整恢复声明",
  );

  for (const [label, pattern, reason] of [
    [
      "maintenance command 边界",
      /src-tauri\/src\/commands\/maintenance\.rs[\s\S]*Tauri 参数[\s\S]*usecase::maintenance/,
      "map 必须登记 maintenance command adapter owner",
    ],
    [
      "maintenance usecase 边界",
      /src-tauri\/src\/application\/usecase\/maintenance\.rs[\s\S]*用户动作[\s\S]*repository\/maintenance[\s\S]*platform_actions/,
      "map 必须登记 maintenance usecase owner 与窄 owner 复用",
    ],
    [
      "maintenance repository 边界",
      /src-tauri\/src\/repository\/maintenance\.rs[\s\S]*FileSystemAdapter[\s\S]*clean_backup_children[\s\S]*rebuild_registry_summary/,
      "map 必须登记 maintenance repository 文件事务 owner",
    ],
    [
      "platform_actions 边界",
      /src-tauri\/src\/application\/usecase\/platform_actions\.rs[\s\S]*平台端口[\s\S]*force_kill_app[\s\S]*restart_app[\s\S]*open_path[\s\S]*system_info/,
      "map 必须登记 maintenance 复用的 platform_actions owner",
    ],
  ]) {
    requirePattern(label, path, content, pattern, reason);
  }

  for (const command of maintenanceCommands) {
    requirePattern(
      `${command} map command coverage`,
      path,
      content,
      new RegExp(`\\b${command}\\b`),
      "map 必须登记全部 maintenance 命令覆盖面",
    );
  }

  for (const entry of [
    "scripts/validate-backend-maintenance-owner.mjs",
    "scripts/validate-backend-platform-actions-owner.mjs",
    "scripts/validate-backend-diagnostics-owner.mjs",
    "scripts/validate-backend-hexagonal.mjs",
    "npm run validate:backend",
  ]) {
    requirePattern(
      `${entry} 验证入口`,
      path,
      content,
      new RegExp(entry.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")),
      "map 必须登记 maintenance current-source 的验证入口",
    );
  }

  for (const [label, pattern, reason] of [
    [
      "闭源 maintenance 引擎边界",
      /闭源 maintenance 引擎[\s\S]*不包含[\s\S]*不把当前公开骨架等同于闭源业务还原/,
      "map 必须说明不声明闭源 maintenance 引擎",
    ],
    [
      "真实更新重启闭环边界",
      /真实更新重启闭环[\s\S]*不登记安装更新或重启闭环验收/,
      "map 必须说明不声明真实更新重启闭环",
    ],
    [
      "voice 接入边界",
      /voice 接入[\s\S]*不接入 voice[\s\S]*不把 maintenance 与 voice 形成业务链路/,
      "map 必须说明不声明 voice 接入",
    ],
  ]) {
    requirePattern(label, path, content, pattern, reason);
  }
}

function validateMaintenanceIndexes(sourceMap, reconstructionReadme) {
  for (const [label, file] of [
    ["source-map maintenance 索引", sourceMap],
    ["reconstruction README maintenance 索引", reconstructionReadme],
  ]) {
    requirePattern(
      label,
      file.path,
      file.content,
      /docs\/reconstruction\/maintenance-current-source-evidence-map\.md[\s\S]*scripts\/validate-backend-maintenance-owner\.mjs/,
      "索引必须登记 maintenance current-source map 和 maintenance owner validator",
    );
    requirePattern(
      `${label} validate:backend 入口`,
      file.path,
      file.content,
      /docs\/reconstruction\/maintenance-current-source-evidence-map\.md[\s\S]*npm run validate:backend/,
      "索引必须登记 npm run validate:backend 聚合入口",
    );
  }
}

function validatePackageScripts(path, content) {
  requirePattern(
    "validate:backend-maintenance-owner script",
    path,
    content,
    /"validate:backend-maintenance-owner"\s*:\s*"node scripts\/validate-backend-maintenance-owner\.mjs"/,
    "package.json 必须暴露 maintenance owner validator",
  );
  requirePattern(
    "validate:backend script",
    path,
    content,
    /"validate:backend"\s*:\s*"node scripts\/validate-backend\.mjs"/,
    "package.json 必须保留 npm run validate:backend 聚合入口",
  );
}

function rejectPositiveRestorationClaims(contents) {
  const negativeMarkers = [
    "不声明",
    "不作为",
    "不代表",
    "不表示",
    "不登记",
    "不包含",
    "不接入",
    "未恢复",
    "不得",
    "不能",
    "仍为",
    "仍不",
    "待补",
    "pending",
    "unsupported",
  ];
  const forbiddenClaims = [
    [
      "平台动作恢复正向声明",
      /平台动作[^。；\n|]*(?:已|已经|完整|完全|完成)[^。；\n|]*(?:恢复|闭环|接通|落地)/,
      "不得把平台动作写成已恢复的正向声明",
    ],
    [
      "闭源 maintenance 引擎恢复正向声明",
      /闭源\s*maintenance\s*引擎[^。；\n|]*(?:已|已经|完整|完全|完成)[^。；\n|]*(?:恢复|还原|落地)/,
      "不得把闭源 maintenance 引擎写成已恢复的正向声明",
    ],
    [
      "真实更新重启闭环恢复正向声明",
      /真实更新重启闭环[^。；\n|]*(?:已|已经|完整|完全|完成)[^。；\n|]*(?:恢复|还原|闭合|落地)/,
      "不得把真实更新重启闭环写成已恢复的正向声明",
    ],
    [
      "voice 接入恢复正向声明",
      /(?:voice|Voice)\s*接入[^。；\n|]*(?:已|已经|完整|完全|完成|恢复|接通|落地)|(?:已|已经|完整|完全|完成)[^。；\n|]*(?:voice|Voice)\s*接入/,
      "不得把 voice 接入写成已恢复的正向声明",
    ],
  ];

  for (const [path, content] of contents) {
    const lines = content.split(/\r?\n/);
    for (const [index, line] of lines.entries()) {
      if (negativeMarkers.some((marker) => line.includes(marker))) {
        continue;
      }
      for (const [label, pattern, reason] of forbiddenClaims) {
        if (pattern.test(line)) {
          failures.push(`${toRelative(path)}:${index + 1} 禁止 ${label}：${reason}`);
        }
      }
    }
  }
}

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);

validateForbiddenNames([...raw.values()].map((file) => [file.path, file.content]));
validateMaintenanceCommands(files.maintenanceCommands, raw.get("maintenanceCommands").content);
validateMaintenanceUsecase(files.maintenanceUsecase, raw.get("maintenanceUsecase").content);
validateProcessActionRestartOwner(
  raw.get("maintenanceCommands"),
  raw.get("maintenanceUsecase"),
  raw.get("applicationPorts"),
  raw.get("platformActions"),
  raw.get("processPlatform"),
);
validateMaintenanceRepository(
  files.repositoryMaintenance,
  raw.get("repositoryMaintenance").content,
);
validateRepositoryMod(files.repositoryMod, raw.get("repositoryMod").content);
validateSystemNoMaintenance(files.systemCommands, raw.get("systemCommands").content);
validateSystemUsecaseNoMaintenance(files.systemUsecase, raw.get("systemUsecase").content);
validateLibRegistration(files.tauriLib, raw.get("tauriLib").content);
validateHexagonalMapping(files.hexagonalValidator, raw.get("hexagonalValidator").content);
validateMaintenanceMap(files.maintenanceMap, raw.get("maintenanceMap").content);
validateMaintenanceIndexes(raw.get("sourceMap"), raw.get("reconstructionReadme"));
validatePackageScripts(files.packageJson, raw.get("packageJson").content);
rejectPositiveRestorationClaims(
  ["maintenanceMap", "sourceMap", "reconstructionReadme"].map((label) => [
    raw.get(label).path,
    raw.get(label).content,
  ]),
);

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
