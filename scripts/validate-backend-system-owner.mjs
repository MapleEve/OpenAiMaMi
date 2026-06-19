import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  root: join(backendRoot, "application", "usecase", "system.rs"),
  snapshotBootstrap: join(backendRoot, "application", "usecase", "system", "snapshot_bootstrap.rs"),
  pathStateUsecase: join(backendRoot, "application", "usecase", "path_state.rs"),
  repositoryPathState: join(backendRoot, "repository", "path_state.rs"),
  settingsContracts: join(backendRoot, "contracts", "settings.rs"),
  settingsSecret: join(backendRoot, "application", "usecase", "system", "settings_secret.rs"),
  commands: join(backendRoot, "commands", "system.rs"),
  configRepository: join(backendRoot, "repository", "config.rs"),
  notificationMap: join(repoRoot, "docs", "reconstruction", "notification-client-state-current-source-map.md"),
  snapshotBootstrapMap: join(repoRoot, "docs", "reconstruction", "system-snapshot-bootstrap-current-source-map.md"),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  reconstructionReadme: join(repoRoot, "docs", "reconstruction", "README.md"),
  tauriLib: join(backendRoot, "lib.rs"),
  repositoryBootstrap: join(backendRoot, "repository", "bootstrap.rs"),
  bootstrapContracts: join(backendRoot, "contracts", "bootstrap.rs"),
  systemContracts: join(backendRoot, "contracts", "system.rs"),
  tsSystemService: join(repoRoot, "src", "services", "system", "index.ts"),
  ipcContracts: join(repoRoot, "src", "contracts", "ipc", "commands.ts"),
  mockCommands: join(repoRoot, "src", "mocks", "fixtures", "commands.ts"),
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
    failures.push(`${toRelative(path)}:${line} 禁止出现 ${label}：${reason}`);
  }

  if (lines.length > 3) {
    failures.push(`${toRelative(path)} 还有 ${lines.length - 3} 处 ${label} 命中`);
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
      content,
      forbiddenPattern,
      "公开 system owner 切片不得写入禁止公开标识",
    );
  }
}

function validateRoot(path, original, content) {
  for (const [label, pattern] of [
    ["snapshot-bootstrap 模块声明", /\bmod\s+snapshot_bootstrap\s*;/],
    ["settings-secret 模块声明", /\bmod\s+settings_secret\s*;/],
    ["snapshot/bootstrap 兼容导出", /\bpub\s+use\s+self\s*::\s*snapshot_bootstrap\s*::\s*\{[\s\S]*\}\s*;/],
    ["load_snapshot 兼容导出", /\bpub\s+use\s+self\s*::\s*snapshot_bootstrap\s*::\s*\{[\s\S]*\bload_snapshot\b[\s\S]*\}\s*;/],
    ["load_bootstrap_state 兼容导出", /\bpub\s+use\s+self\s*::\s*snapshot_bootstrap\s*::\s*\{[\s\S]*\bload_bootstrap_state\b[\s\S]*\}\s*;/],
    ["settings-secret 兼容导出", /\bpub\s+use\s+self\s*::\s*settings_secret\s*::\s*\{[\s\S]*\bget_device_id\b[\s\S]*\bget_or_create_remote_device_secret\b[\s\S]*\bimport_remote_device_secret_if_empty\b[\s\S]*\}\s*;/],
  ]) {
    requirePattern(label, path, content, pattern, "system.rs 必须保留兼容导出，具体实现由更窄 owner 承载");
  }

  for (const [label, pattern] of [
    ["diagnostics repository 依赖", /\bload_system_diagnostic_snapshot\b/g],
    ["diagnostics model 依赖", /\bDiagnostic(Probe|Snapshot)\b/g],
    ["diagnostics 私有 helper", /\bfn\s+(make_diagnostic|diagnostic_probe|make_pending_diagnostic|pending_diagnostic_field)/g],
    ["bootstrap repository 依赖", /\bbootstrap_repository\b/g],
    ["bootstrap cache writer", /\bfn\s+store_bootstrap_snapshot_progressive\b/g],
    ["snapshot status helper", /\bfn\s+make_(status|path_state|auto_switch_status)\b/g],
    ["remote secret helper", /\bfn\s+(normalize_remote_device_secret|current_remote_device_secret)\b/g],
    ["平台动作端口依赖", /\bApp(Process|Shell|System|Window)Port\b|\bForceKillOutcome\b/g],
    ["平台动作 payload 依赖", /\b(UpdateInstallabilityPayload|SystemInfoPayload)\b/g],
    ["平台动作实现", /\bpub\s+fn\s+(check_update_installability|graceful_restart_for_update|restart_app|force_kill_app|open_path|system_info|focus_main_window)\s*\(/g],
    ["平台动作 helper", /\bfn\s+(force_kill_payload|system_action_payload)\s*\(/g],
    ["hotspot owner 依赖", /\bHotspotPlatformPort\b|\bhotspot_core\b|\bhotspot_repository\b/g],
    ["hotspot owner 实现", /\bpub\s+fn\s+(has_notch|get_hotspot_enabled|set_hotspot_enabled|hotspot_ready)\s*\(/g],
    ["relay image compatibility 实现", /\bpub\s+fn\s+(get_image_compat|set_image_compat)\s*\(/g],
    ["mystery grants owner", /\b(get_mystery_unlock_grants|merge_mystery_unlock_grants|mystery_unlock_grants|MysteryRouteGrant|is_mystery_route_allowed)\b/g],
    ["mystery route literal allowlist", /\b"(?:(?:mcp)|(?:skills)|(?:overview)|(?:accounts)|(?:sessions)|(?:plugins)|(?:relayModel)|(?:settings)|(?:maintenance))"\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "实现必须归属更窄的 system owner");
  }

  requirePattern(
    "refresh_usage_snapshot daemon scheduling compatibility",
    path,
    content,
    /\bdaemon_usecase\s*::\s*schedule_full_runtime_refresh_for_command\s*\(\s*repo\s*,\s*platform\s*,\s*"refresh_usage_snapshot"\s*,?\s*\)/,
    "refresh_usage_snapshot 跨 snapshot-bootstrap 与 daemon，兼容层必须继续通过 runtime 平台端口调用 daemon owner",
  );
  for (const command of [
    "run_daemon_once",
    "load_pending_auto_switch",
    "dismiss_pending_auto_switch",
    "confirm_pending_auto_switch",
    "confirm_pending_auto_switch_and_restart_codex",
    "note_usage_refresh_activity",
    "schedule_full_runtime_refresh",
    "start_auto_switch_pending_watcher",
    "start_usage_refresh_watcher",
    "update_usage_refresh_schedule",
  ]) {
    rejectPattern(
      `${command} daemon wrapper`,
      path,
      original,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`, "g"),
      "daemon/autoswitch 命令不得回流到 system usecase",
    );
  }
  for (const command of [
    "set_api_proxy_config",
    "test_api_proxy_config",
    "detect_api_proxy_config",
    "get_usage_refresh_interval",
    "set_usage_refresh_interval",
    "check_update_installability",
  ]) {
    rejectPattern(
      `${command} settings wrapper`,
      path,
      original,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`, "g"),
      "settings 用户动作不得回流到 system 根 usecase",
    );
  }
  for (const command of [
    "clean",
    "rebuild_registry",
    "diagnose",
    "force_kill_codex",
    "restart_codex",
    "reset_config",
    "open_path",
    "system_info",
  ]) {
    rejectPattern(
      `${command} maintenance wrapper`,
      path,
      original,
      content,
      new RegExp(`\\bpub\\s+fn\\s+${command}\\s*\\(`, "g"),
      "maintenance 用户动作不得回流到 system 根 usecase",
    );
  }
}

function validateConfigRepositoryOwner(path, original, content) {
  for (const [label, pattern] of [
    ["reset config repository action", /\bpub\s+fn\s+reset_codex_config\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["config path owner", /\brepo\s*\.\s*paths\s*\(\s*\)\s*\.config_path\b/],
    ["catalog path owner", /\bcodex_router_catalog\.json\b/],
    ["read config through fs adapter", /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.read_to_string\s*\(\s*config_path\s*\)/],
    ["write config through fs adapter", /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.write_string\s*\(\s*config_path\s*,\s*&next\s*\)/],
    ["remove catalog through fs adapter", /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.remove_file\s*\(\s*&catalog_path\s*\)/],
    ["managed block stripper", /\bfn\s+strip_codex_config\s*\(/],
    ["reset key stripper", /\bfn\s+is_codex_reset_key\s*\(/],
    ["reset test", /\bfn\s+reset_codex_config_strips_managed_blocks_and_catalog\s*\(/],
  ]) {
    requirePattern(label, path, content, pattern, "repository/config.rs 必须 owning reset_codex_config 文件事务");
  }

  for (const [label, pattern] of [
    ["真实文件系统直连", /\bstd\s*::\s*fs\b|\btokio\s*::\s*fs\b/g],
    ["平台/进程能力", /\bApp(Process|Shell|System|Window)Port\b|\bcrate\s*::\s*platform\b|\brestart\b|\bforce_kill\b/g],
    ["Tauri 依赖", /\btauri\s*::|State\s*</g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "reset_codex_config 必须只通过 Repository/FileSystemAdapter 边界表达文件事务");
  }
}

function validateSnapshotBootstrapOwner(path, original, content) {
  for (const [label, pattern] of [
    ["load snapshot", /\bpub\s+fn\s+load_snapshot\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["load bootstrap state", /\bpub\s+fn\s+load_bootstrap_state\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["path state helper", /\bpath_state\s*::\s*make_app_path_state\s*\(\s*repo\s*\)/],
    ["bootstrap cache read", /\bbootstrap_repository\s*::\s*load_bootstrap_cache\s*\(\s*repo\s*\)/],
    ["bootstrap cache write", /\bbootstrap_repository\s*::\s*store_bootstrap_snapshot_progressive\s*\(/],
  ]) {
    requirePattern(label, path, content, pattern, "snapshot-bootstrap owner 必须承载快照组装和 cache 写回");
  }

  for (const [label, pattern] of [
    ["直接 FS 路径探测", /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(/g],
    ["私有路径状态 DTO helper", /\bfn\s+make_path_state\s*\(/g],
    ["diagnostics owner", /\bload_system_diagnostic_snapshot\b|\bDiagnostic(Probe|Snapshot)\b/g],
    ["settings secret owner", /\bremote_device_secret\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "snapshot-bootstrap owner 不得吸收无关 system 切片");
  }
}

function validatePathStateOwner(path, original, content) {
  for (const [label, pattern] of [
    ["make_app_path_state", /\bpub\s+fn\s+make_app_path_state\s*\(\s*repo\s*:\s*&Repository\s*\)\s*->\s*AppPathState/],
    ["repository fact loader", /\bload_app_path_state\s*\(\s*repo\s*\)/],
    ["DTO converter", /\bpub\s+fn\s+app_path_state_from_repository\s*\(\s*state\s*:\s*RepositoryPathState\s*\)\s*->\s*AppPathState/],
  ]) {
    requirePattern(label, path, content, pattern, "application/usecase/path_state.rs 必须负责路径事实到 AppPathState DTO 的转换");
  }
  rejectPattern(
    "直接 FS 路径探测",
    path,
    original,
    content,
    /\brepo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(/g,
    "path_state usecase 辅助层不得直接读取 FS",
  );
}

function validateRepositoryPathStateOwner(path, content) {
  for (const [label, pattern] of [
    ["RepositoryPathState fact", /\bpub\s+struct\s+RepositoryPathState\b/],
    ["path state fact loader", /\bpub\s+fn\s+load_app_path_state\s*\(\s*repo\s*:\s*&Repository\s*\)\s*->\s*RepositoryPathState/],
    ["auth 存在性事实", /\bauth_exists\s*:\s*repo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(\s*&paths\.auth_path\s*\)/],
    ["registry 存在性事实", /\bregistry_exists\s*:\s*repo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(\s*&paths\.registry_path\s*\)/],
    ["sessions 存在性事实", /\bsessions_exists\s*:\s*repo\s*\.\s*fs\s*\(\s*\)\s*\.\s*exists\s*\(\s*&paths\.sessions_dir\s*\)/],
  ]) {
    requirePattern(label, path, content, pattern, "repository/path_state.rs 必须归口路径展示和存在性事实");
  }
}

function validateSettingsSecretOwner(path, original, content) {
  for (const [label, pattern] of [
    ["device id action", /\bpub\s+fn\s+get_device_id\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["notification client state action", /\bpub\s+fn\s+get_or_create_notification_client_state\s*\(\s*repo\s*:\s*&Repository\s*,?\s*\)\s*->\s*Result\s*<\s*NotificationClientSettingsState\s*,\s*CoreError\s*>/],
    ["notification state struct", /\bpub\s+struct\s+NotificationClientSettingsState\s*\{[\s\S]*\bdevice_id\s*:\s*String[\s\S]*\bnotifications_since\s*:\s*i64[\s\S]*\}/],
    ["notification timestamp source", /\bcurrent_timestamp\s*\(\s*\)/],
    ["notification settings persistence", /\bsettings\s*\.\s*notifications_since\s*=\s*notifications_since\s*;[\s\S]*settings_repository\s*::\s*save_app_settings\s*\(\s*repo\s*,\s*&settings\s*\)\?/],
    ["create remote device secret", /\bpub\s+fn\s+get_or_create_remote_device_secret\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["import remote device secret", /\bpub\s+fn\s+import_remote_device_secret_if_empty\s*\(/],
    ["secret normalization", /\bfn\s+normalize_remote_device_secret\s*\(/],
    ["settings persistence", /\bsettings_repository\s*::\s*save_app_settings\s*\(/],
  ]) {
    requirePattern(label, path, content, pattern, "settings-secret owner 必须承载 settings 持久化 secret 事务");
  }

  for (const [label, pattern] of [
    ["diagnostics owner", /\bload_system_diagnostic_snapshot\b|\bDiagnostic(Probe|Snapshot)\b/g],
    ["bootstrap owner", /\bbootstrap_repository\b/g],
    ["daemon owner", /\bdaemon_usecase\b/g],
    ["通知运行时副作用", /\bemit_all\b|\blisten\b|\bspawn\b|\btokio\b|\bnotify_rust\b|\btauri_plugin_notification\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "settings-secret owner 必须保持 settings/secret 范围");
  }
}

function validateSettingsContracts(path, content) {
  for (const [label, pattern] of [
    ["notificationsSince settings field", /\bpub\s+notifications_since\s*:\s*i64\b/],
    ["notificationsSince serde default", /#\s*\[\s*serde\s*\(\s*default\s*\)\s*\]\s*\n\s*pub\s+notifications_since\s*:\s*i64\b/],
    ["notificationsSince default value", /\bnotifications_since\s*:\s*0\s*,/],
  ]) {
    requirePattern(label, path, content, pattern, "AppSettingsFile 必须保留 notificationsSince settings 持久化字段");
  }
}

function validateNotificationClientState(path, content) {
  requirePattern(
    "notification client state action",
    path,
    content,
    /\bpub\s+fn\s+notification_client_state\s*\(\s*repo\s*:\s*&Repository\s*,?\s*\)\s*->\s*Result\s*<\s*NotificationClientStatePayload\s*,\s*CoreError\s*>/,
    "system usecase 必须 owning notification client state 的 settings 持久化状态边界",
  );
  requirePattern(
    "notification client state settings helper",
    path,
    content,
    /\blet\s+state\s*=\s*get_or_create_notification_client_state\s*\(\s*repo\s*\)\?/,
    "notification client state 必须通过 settings-secret owner 获取 device id 与 notificationsSince",
  );
  requirePattern(
    "notification client state restored write",
    path,
    content,
    /restored_status\s*\(\s*"system"\s*,\s*"get_notification_client_state"\s*,\s*BackendEffect::RepositoryWrite\s*,?\s*\)/,
    "get_notification_client_state 必须标记为 settings 持久化 repository write 状态",
  );
  requirePattern(
    "notification client state payload device id",
    path,
    content,
    /\bdevice_id\s*:\s*state\s*\.\s*device_id\b/,
    "notification client state payload 必须返回 settings 持久化 device id",
  );
  requirePattern(
    "notification client state payload timestamp",
    path,
    content,
    /\bnotifications_since\s*:\s*state\s*\.\s*notifications_since\b/,
    "notification client state payload 必须返回 settings 持久化 notificationsSince",
  );
}

function validateNotificationMap(path, content) {
  for (const [label, pattern] of [
    ["中文标题", /# get_notification_client_state current-source 证据映射/],
    ["macOS evidence", /NOTIFICATION-CLIENT-STATE-DISTILLED-109\.md/],
    ["Windows evidence", /WIN-GET-NOTIFICATION-CLIENT-STATE-109\.md/],
    ["settings DTO", /src-tauri\/src\/contracts\/settings\.rs/],
    ["settings-secret owner", /src-tauri\/src\/application\/usecase\/system\/settings_secret\.rs/],
    ["notificationsSince", /notificationsSince/],
    ["未恢复通知运行时", /不声明通知客户端运行时/],
    ["不碰 voice", /不碰 `voice`/],
  ]) {
    requirePattern(label, path, content, pattern, "notification client state map 必须记录证据、源码链和未恢复边界");
  }
}

function validateNotificationIndex(sourceMapPath, sourceMap, readmePath, readme) {
  for (const [label, path, content] of [
    ["source-map notification index", sourceMapPath, sourceMap],
    ["reconstruction README notification index", readmePath, readme],
  ]) {
    requirePattern(
      label,
      path,
      content,
      /notification-client-state-current-source-map\.md/,
      "notification client state current-source map 必须被 reconstruction 索引收口",
    );
  }
  requirePattern(
    "source-map notification updated boundary",
    sourceMapPath,
    sourceMap,
    /get_notification_client_state` 当前恢复 settings 持久化的 `deviceId` 与 `notificationsSince`/,
    "source-map 必须说明 get_notification_client_state 当前恢复的 settings 持久化范围",
  );
}

function validateSnapshotBootstrapMap(path, content) {
  for (const [label, pattern] of [
    ["中文标题", /# system snapshot-bootstrap 后端当前源码证据映射/],
    ["load_snapshot 范围", /`load_snapshot`/],
    ["load_bootstrap_state 范围", /`load_bootstrap_state`/],
    ["Tauri 注册", /src-tauri\/src\/lib\.rs/],
    ["command adapter", /src-tauri\/src\/commands\/system\.rs/],
    ["snapshot usecase owner", /src-tauri\/src\/application\/usecase\/system\/snapshot_bootstrap\.rs/],
    ["bootstrap repository owner", /src-tauri\/src\/repository\/bootstrap\.rs/],
    ["Rust DTO", /src-tauri\/src\/contracts\/bootstrap\.rs/],
    ["TS service", /src\/services\/system\/index\.ts/],
    ["IPC contract", /src\/contracts\/ipc\/commands\.ts/],
    ["mock", /src\/mocks\/fixtures\/commands\.ts/],
    ["snapshot progressive", /snapshot progressive/],
    ["compat fields", /executedAt.*runOnce.*activeAccountKey.*switchedAccountKey.*pendingSwitchAccountKey/s],
    ["不关闭前端 load_snapshot", /不改变前端 system-window-maintenance 文档中 `load_snapshot` 未关闭/],
    ["不接 voice", /不扩大到 `voice`/],
  ]) {
    requirePattern(label, path, content, pattern, "snapshot-bootstrap current-source map 必须记录 owner、合同和未声明边界");
  }
}

function validateSnapshotBootstrapIndex(sourceMapPath, sourceMap, readmePath, readme) {
  for (const [label, path, content] of [
    ["source-map snapshot-bootstrap index", sourceMapPath, sourceMap],
    ["reconstruction README snapshot-bootstrap index", readmePath, readme],
  ]) {
    requirePattern(
      label,
      path,
      content,
      /system-snapshot-bootstrap-current-source-map\.md/,
      "system snapshot-bootstrap current-source map 必须被 reconstruction 索引收口",
    );
  }
}

function validateSnapshotBootstrapCrossLayer(files) {
  const checks = [
    [
      "Tauri load_snapshot 注册",
      files.tauriLib.path,
      files.tauriLib.content,
      /\bcommands::system::load_snapshot\b/,
    ],
    [
      "Tauri load_bootstrap_state 注册",
      files.tauriLib.path,
      files.tauriLib.content,
      /\bcommands::system::load_bootstrap_state\b/,
    ],
    [
      "system service load_snapshot",
      files.tsSystemService.path,
      files.tsSystemService.content,
      /invokeIpc<CoreEnvelope<CoreSnapshotPayload>>\("load_snapshot"\s*,\s*\{\s*localOnly\s*\}\)/,
    ],
    [
      "system service load_bootstrap_state",
      files.tsSystemService.path,
      files.tsSystemService.content,
      /invokeIpc<CoreEnvelope<BootstrapStatePayload>>\("load_bootstrap_state"\)/,
    ],
    [
      "IPC contract load_snapshot",
      files.ipcContracts.path,
      files.ipcContracts.content,
      /"command":\s*"load_snapshot"/,
    ],
    [
      "IPC contract load_bootstrap_state",
      files.ipcContracts.path,
      files.ipcContracts.content,
      /"command":\s*"load_bootstrap_state"/,
    ],
    [
      "mock load_snapshot handler",
      files.mockCommands.path,
      files.mockCommands.content,
      /load_snapshot\s*:\s*coreSnapshotHandler/,
    ],
    [
      "mock load_bootstrap_state handler",
      files.mockCommands.path,
      files.mockCommands.content,
      /load_bootstrap_state\s*:\s*bootstrapStateHandler/,
    ],
    [
      "mock snapshotProgressive typed mirror",
      files.mockCommands.path,
      files.mockCommands.content,
      /snapshotProgressive\s*:\s*null/,
    ],
    [
      "BootstrapCacheFile DTO",
      files.bootstrapContracts.path,
      files.bootstrapContracts.content,
      /pub\s+struct\s+BootstrapCacheFile\s*\{[\s\S]*snapshot_progressive[\s\S]*usage_analytics[\s\S]*mcp_servers[\s\S]*installed_skills/s,
    ],
    [
      "BootstrapStatePayload DTO",
      files.bootstrapContracts.path,
      files.bootstrapContracts.content,
      /pub\s+struct\s+BootstrapStatePayload\s*\{[\s\S]*written_at[\s\S]*snapshot_progressive[\s\S]*executed_at[\s\S]*run_once[\s\S]*active_account_key[\s\S]*switched_account_key[\s\S]*pending_switch_account_key/s,
    ],
    [
      "CoreSnapshotPayload DTO",
      files.systemContracts.path,
      files.systemContracts.content,
      /pub\s+struct\s+CoreSnapshotPayload\s*\{[\s\S]*backend_status[\s\S]*status[\s\S]*accounts/s,
    ],
    [
      "bootstrap repository load",
      files.repositoryBootstrap.path,
      files.repositoryBootstrap.content,
      /pub\s+fn\s+load_bootstrap_cache\s*\(\s*repo\s*:\s*&Repository\s*\)/,
    ],
    [
      "bootstrap repository snapshot write",
      files.repositoryBootstrap.path,
      files.repositoryBootstrap.content,
      /pub\s+fn\s+store_bootstrap_snapshot_progressive\s*\(/,
    ],
    [
      "bootstrap repository FS adapter read",
      files.repositoryBootstrap.path,
      files.repositoryBootstrap.content,
      /repo\s*\.\s*fs\s*\(\s*\)\s*\.read_to_string\s*\(\s*path\s*\)/,
    ],
    [
      "bootstrap repository FS adapter write",
      files.repositoryBootstrap.path,
      files.repositoryBootstrap.content,
      /repo\s*\.\s*fs\s*\(\s*\)\s*\.write_string\s*\(/,
    ],
  ];

  for (const [label, path, content, pattern] of checks) {
    requirePattern(label, path, content, pattern, "snapshot-bootstrap 跨层合同必须显式闭合");
  }
}

function validateCommandCompatibility(path, content) {
  for (const [label, pattern] of [
    ["load snapshot command adapter", /\busecase\s*::\s*system\s*::\s*load_snapshot\s*\(\s*&repo\s*\)/],
    ["load bootstrap command adapter", /\busecase\s*::\s*system\s*::\s*load_bootstrap_state\s*\(\s*&repo\s*\)/],
    ["remote secret create command adapter", /\busecase\s*::\s*system\s*::\s*get_or_create_remote_device_secret\s*\(\s*&repo\s*\)/],
    ["remote secret import command adapter", /\busecase\s*::\s*system\s*::\s*import_remote_device_secret_if_empty\s*\(\s*&repo\s*,\s*secret\s*\)/],
    ["focus main window command adapter", /\busecase\s*::\s*platform_actions\s*::\s*focus_main_window\s*\(\s*&window\s*\)/],
  ]) {
    requirePattern(label, path, content, pattern, "commands/system.rs 必须保持兼容 IPC adapter");
  }

  for (const [label, pattern] of [
    ["HotspotPlatformAdapter", /\bHotspotPlatformAdapter\b/g],
    ["hotspot command 函数", /\bpub\s+fn\s+(has_notch|get_hotspot_enabled|set_hotspot_enabled|hotspot_ready)\s*\(/g],
    ["system hotspot usecase", /\busecase\s*::\s*system\s*::\s*(has_notch|get_hotspot_enabled|set_hotspot_enabled|hotspot_ready)\b/g],
    ["relay image compatibility command 函数", /\bpub\s+fn\s+(get_image_compat|set_image_compat)\s*\(/g],
    ["system relay image compatibility usecase", /\busecase\s*::\s*system\s*::\s*(get_image_compat|set_image_compat)\b/g],
    ["maintenance command 函数", /\bpub\s+fn\s+(clean|rebuild_registry|diagnose|force_kill_codex|restart_codex|reset_codex_config|open_path|get_system_info)\s*\(/g],
    ["system maintenance usecase", /\busecase\s*::\s*system\s*::\s*(clean|rebuild_registry|diagnose|force_kill_app|restart_app|reset_config|open_path|system_info)\b/g],
    ["settings command 函数", /\bpub\s+fn\s+(set_api_proxy_config|test_api_proxy_config|detect_api_proxy_config|get_usage_refresh_interval|set_usage_refresh_interval|check_update_installability|graceful_restart_for_update)\s*\(/g],
    ["system settings usecase", /\busecase\s*::\s*system\s*::\s*(set_api_proxy_config|test_api_proxy_config|detect_api_proxy_config|get_usage_refresh_interval|set_usage_refresh_interval|check_update_installability|graceful_restart_for_update)\b/g],
    ["mystery command 函数", /\bpub\s+fn\s+(get_mystery_unlock_grants|merge_mystery_unlock_grants)\s*\(/g],
    ["system mystery usecase", /\busecase\s*::\s*system\s*::\s*(get_mystery_unlock_grants|merge_mystery_unlock_grants|mystery_unlock_grants)\b/g],
  ]) {
    rejectPattern(label, path, content, content, pattern, "非 system IPC adapter 必须归属各自 owner");
  }
}

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);
const stripped = new Map(
  [...raw.entries()].map(([label, file]) => [label, { ...file, content: stripRustComments(file.content) }]),
);

validateForbiddenNames([...raw.values()].map((file) => [file.path, file.content]));

validateRoot(files.root, raw.get("root").content, stripped.get("root").content);
validateSnapshotBootstrapOwner(
  files.snapshotBootstrap,
  raw.get("snapshotBootstrap").content,
  stripped.get("snapshotBootstrap").content,
);
validateSettingsSecretOwner(
  files.settingsSecret,
  raw.get("settingsSecret").content,
  stripped.get("settingsSecret").content,
);
validateSettingsContracts(files.settingsContracts, stripped.get("settingsContracts").content);
validateNotificationClientState(files.root, stripped.get("root").content);
validateNotificationMap(files.notificationMap, raw.get("notificationMap").content);
validateSnapshotBootstrapMap(files.snapshotBootstrapMap, raw.get("snapshotBootstrapMap").content);
validateNotificationIndex(
  files.sourceMap,
  raw.get("sourceMap").content,
  files.reconstructionReadme,
  raw.get("reconstructionReadme").content,
);
validateSnapshotBootstrapIndex(
  files.sourceMap,
  raw.get("sourceMap").content,
  files.reconstructionReadme,
  raw.get("reconstructionReadme").content,
);
validateSnapshotBootstrapCrossLayer({
  tauriLib: stripped.get("tauriLib"),
  repositoryBootstrap: stripped.get("repositoryBootstrap"),
  bootstrapContracts: stripped.get("bootstrapContracts"),
  systemContracts: stripped.get("systemContracts"),
  tsSystemService: raw.get("tsSystemService"),
  ipcContracts: raw.get("ipcContracts"),
  mockCommands: raw.get("mockCommands"),
});
validatePathStateOwner(
  files.pathStateUsecase,
  raw.get("pathStateUsecase").content,
  stripped.get("pathStateUsecase").content,
);
validateRepositoryPathStateOwner(
  files.repositoryPathState,
  stripped.get("repositoryPathState").content,
);
validateConfigRepositoryOwner(
  files.configRepository,
  raw.get("configRepository").content,
  stripped.get("configRepository").content,
);
validateCommandCompatibility(files.commands, stripped.get("commands").content);

if (failures.length > 0) {
  console.error("FAIL 后端 system owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS 后端 system owner 校验通过：snapshot-bootstrap、settings-secret 和配置仓库边界已归位，settings/maintenance/diagnostics/平台动作命令未回流。",
);
