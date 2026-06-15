import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  daemonUsecase: join(backendRoot, "application", "usecase", "daemon.rs"),
  systemUsecase: join(backendRoot, "application", "usecase", "system.rs"),
  coreRuntime: join(backendRoot, "core", "runtime.rs"),
  repositoryRuntime: join(backendRoot, "repository", "runtime.rs"),
};
const failures = [];

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
    /\bpub\s+fn\s+run_daemon_once\s*\(\s*repo\s*:\s*&Repository\s*\)/,
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
    /\bRuntimePlatformAdapter\b[\s\S]*?\bruntime_watcher_capability\s*\(\s*\)/,
    "daemon usecase 只读取平台 watcher 能力，不创建真实后台线程",
  );
  requirePattern(
    "runtime event payload 封装",
    path,
    content,
    /\bfn\s+runtime_bridge_event\s*\(/,
    "daemon usecase 必须封装进程内 watcher runtime event payload",
  );
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
    ["run_daemon_once 转发", /\bdaemon_usecase\s*::\s*run_daemon_once\s*\(\s*repo\s*\)/],
    [
      "refresh_usage_snapshot 调用 daemon helper",
      /\bdaemon_usecase\s*::\s*schedule_full_runtime_refresh_for_command\s*\(\s*repo\s*,\s*"refresh_usage_snapshot"\s*\)/,
    ],
    [
      "start_auto_switch_pending_watcher 转发",
      /\bdaemon_usecase\s*::\s*start_auto_switch_pending_watcher\s*\(\s*repo\s*\)/,
    ],
    [
      "set_usage_refresh_interval 转发 schedule update",
      /\bdaemon_usecase\s*::\s*update_usage_refresh_schedule\s*\(\s*repo\s*\)\s*\.ok\s*\(\s*\)/,
    ],
  ]) {
    requirePattern(label, path, content, pattern, "system usecase 必须调用 daemon usecase 窄入口");
  }
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

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);
const stripped = new Map(
  [...raw.entries()].map(([label, file]) => [label, { ...file, content: stripRustComments(file.content) }]),
);

validateForbiddenNames([...raw.values()].map((file) => [file.path, file.content]));

validateDaemonUsecase(files.daemonUsecase, stripped.get("daemonUsecase").content);
validateSystemUsecase(
  files.systemUsecase,
  raw.get("systemUsecase").content,
  stripped.get("systemUsecase").content,
);
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

if (failures.length > 0) {
  console.error("FAIL 后端 daemon/runtime watcher owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端 daemon/runtime watcher owner 校验通过：daemon usecase owning watcher 用户动作，system 只转发，core/runtime owning guard/debounce/sequence，repository/runtime 只读 settings-derived snapshot。");
