import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  root: join(backendRoot, "application", "usecase", "system.rs"),
  snapshotBootstrap: join(backendRoot, "application", "usecase", "system", "snapshot_bootstrap.rs"),
  settingsSecret: join(backendRoot, "application", "usecase", "system", "settings_secret.rs"),
  commands: join(backendRoot, "commands", "system.rs"),
  configRepository: join(backendRoot, "repository", "config.rs"),
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
    /\bdaemon_usecase\s*::\s*schedule_full_runtime_refresh_for_command\s*\(\s*repo\s*,\s*"refresh_usage_snapshot"\s*\)/,
    "refresh_usage_snapshot 跨 snapshot-bootstrap 与 daemon，兼容层必须继续调用 daemon owner",
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
    ["bootstrap cache read", /\bbootstrap_repository\s*::\s*load_bootstrap_cache\s*\(\s*repo\s*\)/],
    ["bootstrap cache write", /\bbootstrap_repository\s*::\s*store_bootstrap_snapshot_progressive\s*\(/],
  ]) {
    requirePattern(label, path, content, pattern, "snapshot-bootstrap owner 必须承载快照组装和 cache 写回");
  }

  for (const [label, pattern] of [
    ["diagnostics owner", /\bload_system_diagnostic_snapshot\b|\bDiagnostic(Probe|Snapshot)\b/g],
    ["settings secret owner", /\bremote_device_secret\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "snapshot-bootstrap owner 不得吸收无关 system 切片");
  }
}

function validateSettingsSecretOwner(path, original, content) {
  for (const [label, pattern] of [
    ["device id action", /\bpub\s+fn\s+get_device_id\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["create remote device secret", /\bpub\s+fn\s+get_or_create_remote_device_secret\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["import remote device secret", /\bpub\s+fn\s+import_remote_device_secret_if_empty\s*\(/],
    ["secret normalization", /\bfn\s+normalize_remote_device_secret\s*\(/],
    ["settings persistence", /\bsettings_repository\s*::\s*save_app_settings\s*\(/],
  ]) {
    requirePattern(label, path, content, pattern, "settings-secret owner 必须承载 settings-backed secret 事务");
  }

  for (const [label, pattern] of [
    ["diagnostics owner", /\bload_system_diagnostic_snapshot\b|\bDiagnostic(Probe|Snapshot)\b/g],
    ["bootstrap owner", /\bbootstrap_repository\b/g],
    ["daemon owner", /\bdaemon_usecase\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "settings-secret owner 必须保持 settings/secret 范围");
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
