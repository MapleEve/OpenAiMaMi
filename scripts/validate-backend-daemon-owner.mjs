import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  applicationPorts: join(backendRoot, "application", "ports.rs"),
  daemonCommands: join(backendRoot, "commands", "daemon.rs"),
  systemCommands: join(backendRoot, "commands", "system.rs"),
  daemonUsecase: join(backendRoot, "application", "usecase", "daemon.rs"),
  systemUsecase: join(backendRoot, "application", "usecase", "system.rs"),
  settingsUsecase: join(backendRoot, "application", "usecase", "settings.rs"),
  tauriLib: join(backendRoot, "lib.rs"),
  coreRuntime: join(backendRoot, "core", "runtime.rs"),
  platformRuntime: join(backendRoot, "platform", "runtime.rs"),
  repositoryRuntime: join(backendRoot, "repository", "runtime.rs"),
  repositoryPaths: join(backendRoot, "repository", "paths.rs"),
  settingsContract: join(backendRoot, "contracts", "settings.rs"),
  runtimeWatchersMap: join(
    repoRoot,
    "docs",
    "reconstruction",
    "system-runtime-watchers-current-source-map.md",
  ),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  reconstructionReadme: join(repoRoot, "docs", "reconstruction", "README.md"),
};
const failures = [];

const daemonCommandNames = [
  "run_daemon_once",
  "note_usage_refresh_activity",
  "schedule_full_runtime_refresh",
  "start_auto_switch_pending_watcher",
  "start_usage_refresh_watcher",
  "update_usage_refresh_schedule",
  "load_pending_auto_switch",
  "dismiss_pending_auto_switch",
  "confirm_pending_auto_switch",
  "confirm_pending_auto_switch_and_restart_codex",
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

// 只移除 Rust 注释，避免说明文字误触发 owner 禁止项。
function stripRustComments(content) {
  const output = content.split("");
  let cursor = 0;

  while (cursor < content.length) {
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
    failures.push(`${toRelative(path)} 缺少 ${label}：${reason}`);
  }
}

function rejectPattern(label, path, original, content, pattern, reason) {
  const lines = [
    ...new Set(findMatches(content, pattern).map((index) => lineNumberAt(original, index))),
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
      "外部项目名称",
      path,
      content,
      content,
      forbiddenPattern,
      "本切片不得写入外部项目或内部历史标识",
    );
  }
}

function validateDaemonUsecase(path, content) {
  requirePattern(
    "daemon 用户动作 owner",
    path,
    content,
    /\bpub\s+fn\s+run_daemon_once\s*\(\s*repo\s*:\s*&Repository\s*,\s*platform\s*:\s*&impl\s+RuntimePlatformPort\s*,?\s*\)/,
    "daemon.rs 必须 owning run_daemon_once 用户动作事务",
  );
  requirePattern(
    "pending autoswitch owner",
    path,
    content,
    /\bpub\s+fn\s+load_pending_auto_switch\s*\(/,
    "daemon.rs 必须 owning pending auto-switch 只读骨架",
  );
  requirePattern(
    "watcher 信号编排",
    path,
    content,
    /\bfn\s+runtime_watcher_decision\s*\(/,
    "daemon.rs 必须集中读取 repository snapshot、platform capability 并调用 core runtime",
  );
  requirePattern(
    "settings-derived snapshot 读取",
    path,
    content,
    /\bruntime_repository\s*::\s*load_runtime_watcher_snapshot\s*\(\s*repo\s*\)/,
    "daemon usecase 必须通过 repository/runtime 获取 settings-derived snapshot",
  );
  requirePattern(
    "platform capability 读取",
    path,
    content,
    /\bRuntimePlatformPort\b[\s\S]*?\bplatform\s*\.\s*runtime_watcher_capability\s*\(\s*\)/,
    "daemon usecase 只通过 runtime 平台端口读取 watcher 能力，不创建真实后台线程",
  );
  requirePattern(
    "runtime event payload 封装",
    path,
    content,
    /\bfn\s+runtime_bridge_event\s*\(/,
    "daemon usecase 必须封装进程内 watcher runtime event payload",
  );
  requirePattern(
    "daemon skeleton status module",
    path,
    content,
    /\bmodule\s*:\s*"daemon"\s*\.to_string\s*\(\s*\)/,
    "daemon usecase 返回的后端骨架状态必须声明 daemon owner",
  );
}

function validatePendingAutoSwitchBackendBoundary(
  daemonUsecasePath,
  daemonUsecaseOriginal,
  daemonUsecaseContent,
  daemonCommandsPath,
  daemonCommandsContent,
  repositoryPathsPath,
  repositoryPathsOriginal,
  repositoryPathsContent,
  settingsContractPath,
  settingsContractOriginal,
  settingsContractContent,
) {
  requirePattern(
    "load pending auto-switch 无仓储输入",
    daemonUsecasePath,
    daemonUsecaseContent,
    /\bpub\s+fn\s+load_pending_auto_switch\s*\(\s*\)\s*->\s*PendingAutoSwitchStatePayload\s*\{/,
    "当前公开证据没有 pending/snooze 仓储事实，load_pending_auto_switch 必须保持无仓储输入骨架",
  );
  requirePattern(
    "load pending auto-switch pending status",
    daemonUsecasePath,
    daemonUsecaseContent,
    /runtime_watcher_status_without_repository\s*\(\s*"load_pending_auto_switch"\s*,\s*runtime_core\s*::\s*pending_auto_switch_note\s*\(\s*\)\s*,?\s*\)/,
    "load_pending_auto_switch 必须继续声明 runtime watcher pending 边界，不伪造成 repository restored",
  );
  requirePattern(
    "load pending auto-switch 空 payload",
    daemonUsecasePath,
    daemonUsecaseContent,
    /current_account_key\s*:\s*String\s*::\s*new\s*\(\s*\)\s*,[\s\S]*candidate_account_key\s*:\s*String\s*::\s*new\s*\(\s*\)\s*,[\s\S]*dismissed_at\s*:\s*None/,
    "没有公开 pending payload 仓储事实前，load_pending_auto_switch 只能返回空 payload",
  );
  requirePattern(
    "dismiss pending auto-switch no-op",
    daemonUsecasePath,
    daemonUsecaseContent,
    /\bpub\s+fn\s+dismiss_pending_auto_switch\s*\(\s*\)\s*->\s*Option\s*<\s*String\s*>\s*\{\s*None\s*\}/,
    "没有公开 pending/snooze 写入事实前，dismiss_pending_auto_switch 必须保持 no-op",
  );
  requirePattern(
    "confirm pending auto-switch no-op",
    daemonUsecasePath,
    daemonUsecaseContent,
    /\bpub\s+fn\s+confirm_pending_auto_switch\s*\(\s*\)\s*\{\s*\}/,
    "没有公开 pending candidate 仓储事实前，confirm_pending_auto_switch 不得调用账号切换",
  );
  requirePattern(
    "confirm pending auto-switch restart no-op",
    daemonUsecasePath,
    daemonUsecaseContent,
    /\bpub\s+fn\s+confirm_pending_auto_switch_and_restart_codex\s*\(\s*\)\s*\{\s*\}/,
    "没有公开 restart 平台能力恢复前，confirm_pending_auto_switch_and_restart_codex 不得触发真实重启",
  );

  for (const command of [
    "load_pending_auto_switch",
    "dismiss_pending_auto_switch",
    "confirm_pending_auto_switch",
    "confirm_pending_auto_switch_and_restart_codex",
  ]) {
    requirePattern(
      `${command} command 无 Repository state`,
      daemonCommandsPath,
      daemonCommandsContent,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(\\s*\\)\\s*->`),
      "pending auto-switch command 当前不得注入 Repository 或 platform；否则会暗示存在公开仓储/平台事实",
    );
  }

  for (const [label, pattern] of [
    ["pending/snooze 仓储路径", /\b(pending|snooze)[A-Za-z0-9_]*(path|dir)\b|\b(auto_switch_pending|pending_auto_switch|pending_switch|snooze)[A-Za-z0-9_]*\s*:/g],
    ["账号切换真实调用", /\baccounts(_repository|_usecase)?\s*::\s*switch_account\b|\bswitch_account\s*\(/g],
    ["真实重启调用", /\brestart_codex\s*\(|graceful_restart_for_update\s*\(|platform_actions\s*::/g],
  ]) {
    rejectPattern(
      label,
      daemonUsecasePath,
      daemonUsecaseOriginal,
      daemonUsecaseContent,
      pattern,
      "pending auto-switch 缺少公开仓储事实，后端只能保留 typed pending/no-op 边界",
    );
  }

  for (const [label, path, original, content] of [
    ["repository paths", repositoryPathsPath, repositoryPathsOriginal, repositoryPathsContent],
    ["settings contract", settingsContractPath, settingsContractOriginal, settingsContractContent],
  ]) {
    rejectPattern(
      `${label} 伪造 pending/snooze 字段`,
      path,
      original,
      content,
      /\b(auto_switch_pending|pending_auto_switch|pending_switch|snooze|dismissed_at|candidate_account_key|current_account_key)\b/g,
      "未补齐 pending/snooze 真实证据前，不得新增仓储路径或 settings 字段伪装后端恢复",
    );
  }
}

function validateDaemonCommands(path, content) {
  for (const command of daemonCommandNames) {
    requirePattern(
      `${command} daemon command adapter`,
      path,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`),
      "commands/daemon.rs 必须暴露 daemon/autoswitch IPC adapter",
    );
    requirePattern(
      `${command} daemon usecase call`,
      path,
      content,
      new RegExp(`\\busecase\\s*::\\s*daemon\\s*::\\s*${command}\\s*\\(`),
      "daemon command adapter 必须直接调用 usecase::daemon owner",
    );
  }
}

function validateSystemCommands(path, original, content) {
  for (const command of daemonCommandNames) {
    rejectPattern(
      `${command} system command wrapper`,
      path,
      original,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`, "g"),
      "daemon/autoswitch command wrapper 必须归属 commands/daemon.rs",
    );
    rejectPattern(
      `${command} system usecase call`,
      path,
      original,
      content,
      new RegExp(`\\busecase\\s*::\\s*system\\s*::\\s*${command}\\s*\\(`, "g"),
      "commands/system.rs 不得继续通过 system wrapper 转发 daemon/autoswitch 命令",
    );
  }
}

function validateSystemUsecase(path, original, content) {
  for (const [label, pattern] of [
    ["watcher 私有 helper", /\bfn\s+runtime_watcher_/g],
    ["runtime watcher 决策类型", /\bRuntimeWatcher(Decision|Signal|StatusCode)\b/g],
    ["runtime core 直接调用", /\bruntime_core\s*::/g],
    ["runtime repository 直接读取", /\bruntime_repository\s*::\s*load_runtime_watcher_snapshot\b/g],
    ["runtime platform adapter", /\bRuntimePlatformAdapter\b/g],
    ["runtime event payload 组装", /\bRuntimeBridgeEventPayload\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "system usecase 只能转发 daemon watcher 用户动作");
  }

  for (const [label, pattern] of [
    [
      "refresh_usage_snapshot 调用 daemon helper",
      /\bdaemon_usecase\s*::\s*schedule_full_runtime_refresh_for_command\s*\(\s*repo\s*,\s*platform\s*,\s*"refresh_usage_snapshot"\s*,?\s*\)/,
    ],
  ]) {
    requirePattern(label, path, content, pattern, "system usecase 必须调用 daemon usecase 窄入口");
  }

  for (const command of daemonCommandNames) {
    rejectPattern(
      `${command} system usecase wrapper`,
      path,
      original,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`, "g"),
      "daemon/autoswitch 用户动作必须直接归属 application/usecase/daemon.rs",
    );
    if (command === "update_usage_refresh_schedule") {
      continue;
    }
    rejectPattern(
      `${command} system daemon forwarding`,
      path,
      original,
      content,
      new RegExp(`\\bdaemon_usecase\\s*::\\s*${command}\\s*\\(`, "g"),
      "system usecase 只允许跨 snapshot/settings 的兼容调用，不得保留 daemon command wrapper",
    );
  }
}

function validateSettingsUsecase(path, content) {
  requirePattern(
    "set_usage_refresh_interval 调用 daemon schedule update",
    path,
    content,
    /\bdaemon_usecase\s*::\s*update_usage_refresh_schedule\s*\(\s*repo\s*,\s*platform\s*\)\s*\.ok\s*\(\s*\)/,
    "settings usecase 保存使用量刷新间隔后必须继续调度 daemon owner",
  );
}

function validateRuntimePort(applicationPortsPath, applicationPortsContent, platformRuntimePath, platformRuntimeContent) {
  requirePattern(
    "RuntimePlatformPort 声明",
    applicationPortsPath,
    applicationPortsContent,
    /\bpub\(crate\)\s+trait\s+RuntimePlatformPort\b[\s\S]*?\bfn\s+runtime_watcher_capability\s*\(&self\)\s*->\s*RuntimeWatcherPlatformCapability\s*;/,
    "application/ports.rs 必须声明 daemon runtime watcher 平台端口",
  );
  requirePattern(
    "RuntimePlatformAdapter 实现端口",
    platformRuntimePath,
    platformRuntimeContent,
    /\bimpl\s+RuntimePlatformPort\s+for\s+RuntimePlatformAdapter\b/,
    "platform/runtime.rs 必须实现 RuntimePlatformPort",
  );
}

function validateCoreRuntime(path, original, content) {
  for (const [label, pattern, reason] of [
    [
      "once guard 状态",
      /\bOnceLock\s*<\s*Mutex\s*<\s*RuntimeWatcherMemoryState\s*>\s*>/,
      "core/runtime 必须 owning 进程内 watcher once guard",
    ],
    [
      "debounce 常量",
      /\bconst\s+FULL_REFRESH_DEBOUNCE_SECONDS\s*:\s*i64\s*=\s*8\s*;/,
      "core/runtime 必须 owning full refresh debounce",
    ],
    [
      "notify sequence",
      /\bnotify_sequence\s*:\s*u64\b/,
      "core/runtime 必须 owning watcher notify 序列",
    ],
    [
      "使用量 watcher guard",
      /\busage_watcher_started\s*:\s*bool\b/,
      "core/runtime 必须 owning usage watcher started guard",
    ],
    [
      "自动切换 watcher guard",
      /\bauto_switch_pending_watcher_started\s*:\s*bool\b/,
      "core/runtime 必须 owning auto-switch pending watcher started guard",
    ],
  ]) {
    requirePattern(label, path, content, pattern, reason);
  }

  for (const [label, pattern] of [
    ["repository 访问", /\bcrate\s*::\s*repository\b|\brepository::|\bRepository\b/g],
    ["platform adapter 访问", /\bRuntimePlatformAdapter\b|\bcrate\s*::\s*platform\b/g],
    ["Tauri 依赖", /\btauri\s*::|\bAppHandle\b/g],
    ["真实后台线程", /\bstd\s*::\s*thread\s*::\s*spawn\b|\btokio\s*::\s*spawn\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "core/runtime 只 owning 状态机，不访问仓储、平台或真实后台线程");
  }
}

function validateRepositoryRuntime(path, original, content) {
  for (const [label, pattern, reason] of [
    [
      "settings 文件读取",
      /\bsettings_repository\s*::\s*load_app_settings\s*\(\s*repo\s*\)/,
      "repository/runtime 必须只从 settings 持久事实推导 watcher snapshot",
    ],
    [
      "settings path 证据",
      /\brepo\s*\.\s*paths\s*\(\s*\)\s*\.\s*settings_path\b/,
      "repository/runtime 必须暴露可重建的 settings path 证据",
    ],
    [
      "interval 解析",
      /\bUsageRefreshInterval\s*::\s*parse\s*\(/,
      "repository/runtime 必须从 settings 解析刷新间隔",
    ],
    [
      "snapshot DTO",
      /\bRuntimeWatcherSnapshot\s*\{/,
      "repository/runtime 必须返回 core runtime 可消费的只读快照",
    ],
  ]) {
    requirePattern(label, path, content, pattern, reason);
  }

  for (const [label, pattern] of [
    ["平台行为", /\bcrate\s*::\s*platform\b|\bRuntimePlatformAdapter\b/g],
    ["core runtime 调用", /\bruntime_core\s*::|\bcrate\s*::\s*core\s*::\s*runtime\b/g],
    ["进程内 watcher state", /\bOnceLock\b|\bMutex\b|\bnotify_sequence\b/g],
    ["真实后台线程或事件", /\bstd\s*::\s*thread\s*::\s*spawn\b|\btokio\s*::\s*spawn\b|\bemit_all\b|\bRuntimeBridgeEventPayload\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "repository/runtime 只能读取 settings-derived snapshot 或持久事实");
  }
}

function validateRuntimeWatcherDocs(runtimeMapPath, runtimeMapContent, sourceMapPath, sourceMapContent, reconstructionReadmePath, reconstructionReadmeContent) {
  requirePattern(
    "runtime watcher map 记录 daemon usecase owner",
    runtimeMapPath,
    runtimeMapContent,
    /src-tauri\/src\/application\/usecase\/daemon\.rs[\s\S]*repository snapshot[\s\S]*runtime core[\s\S]*platform capability/,
    "system runtime watcher map 必须记录 daemon usecase 组织 repository/core/platform 的 owner 边界",
  );
  requirePattern(
    "runtime watcher map 记录 core model",
    runtimeMapPath,
    runtimeMapContent,
    /RuntimeWatcherSignal[\s\S]*RuntimeWatcherOperationKey[\s\S]*RuntimeWatcherStatusCode[\s\S]*RuntimeWatcherSnapshot/,
    "system runtime watcher map 必须记录 runtime 领域模型 owner",
  );
  requirePattern(
    "runtime watcher map 保留 pending skeleton 语义",
    runtimeMapPath,
    runtimeMapContent,
    /pending skeleton status/,
    "system runtime watcher map 必须说明当前只返回 pending skeleton status",
  );
  requirePattern(
    "runtime watcher map 未恢复真实 watcher 边界",
    runtimeMapPath,
    runtimeMapContent,
    /不启动真实 watcher[\s\S]*不创建后台线程[\s\S]*不发 `Condvar::notify_all`[\s\S]*不广播真实 runtime snapshot event/,
    "system runtime watcher map 必须保留真实 watcher、后台线程、condvar 和 runtime event 未恢复边界",
  );
  requirePattern(
    "source-map 直接登记 daemon validator",
    sourceMapPath,
    sourceMapContent,
    /docs\/reconstruction\/system-runtime-watchers-current-source-map\.md[\s\S]*scripts\/validate-backend-daemon-owner\.mjs[\s\S]*runtime core guard\/debounce\/sequence/,
    "source-map 必须把 system runtime watcher map 收口到 validate-backend-daemon-owner.mjs",
  );
  requirePattern(
    "reconstruction README 同步 daemon validator",
    reconstructionReadmePath,
    reconstructionReadmeContent,
    /system-runtime-watchers-current-source-map\.md[\s\S]*daemon\/runtime owner[\s\S]*scripts\/validate-backend-daemon-owner\.mjs/,
    "docs/reconstruction README 必须同步 runtime watcher map 的直接验证边界",
  );

  for (const [path, original, content] of [
    [runtimeMapPath, runtimeMapContent, runtimeMapContent],
    [sourceMapPath, sourceMapContent, sourceMapContent],
    [reconstructionReadmePath, reconstructionReadmeContent, reconstructionReadmeContent],
  ]) {
    rejectPattern(
      "旧 runtime watcher map 索引口径",
      path,
      original,
      content,
      /当前仅索引\/无独立 validator 边界|只作为 registry 索引|不作为独立 gate/,
      "runtime watcher map 已由 daemon owner validator 直接约束",
    );
  }
}

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);
const stripped = new Map(
  [...raw.entries()].map(([label, file]) => [label, { ...file, content: stripRustComments(file.content) }]),
);

validateForbiddenNames([...raw.values()].map((file) => [file.path, file.content]));

validateRuntimePort(
  files.applicationPorts,
  stripped.get("applicationPorts").content,
  files.platformRuntime,
  stripped.get("platformRuntime").content,
);
validateDaemonUsecase(files.daemonUsecase, stripped.get("daemonUsecase").content);
validatePendingAutoSwitchBackendBoundary(
  files.daemonUsecase,
  raw.get("daemonUsecase").content,
  stripped.get("daemonUsecase").content,
  files.daemonCommands,
  stripped.get("daemonCommands").content,
  files.repositoryPaths,
  raw.get("repositoryPaths").content,
  stripped.get("repositoryPaths").content,
  files.settingsContract,
  raw.get("settingsContract").content,
  stripped.get("settingsContract").content,
);
validateSystemUsecase(
  files.systemUsecase,
  raw.get("systemUsecase").content,
  stripped.get("systemUsecase").content,
);
validateSettingsUsecase(files.settingsUsecase, stripped.get("settingsUsecase").content);
validateCoreRuntime(
  files.coreRuntime,
  raw.get("coreRuntime").content,
  stripped.get("coreRuntime").content,
);
validateRepositoryRuntime(
  files.repositoryRuntime,
  raw.get("repositoryRuntime").content,
  stripped.get("repositoryRuntime").content,
);
validateRuntimeWatcherDocs(
  files.runtimeWatchersMap,
  raw.get("runtimeWatchersMap").content,
  files.sourceMap,
  raw.get("sourceMap").content,
  files.reconstructionReadme,
  raw.get("reconstructionReadme").content,
);

if (failures.length > 0) {
  console.error("FAIL 后端 daemon/runtime watcher owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端 daemon/runtime watcher owner 校验通过：daemon usecase owning watcher 用户动作，system 只转发，core/runtime owning guard/debounce/sequence，repository/runtime 只读 settings-derived snapshot。");
