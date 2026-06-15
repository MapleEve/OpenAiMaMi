import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  root: join(backendRoot, "application", "usecase", "system.rs"),
  diagnostics: join(backendRoot, "application", "usecase", "system", "diagnostics.rs"),
  platformActions: join(backendRoot, "application", "usecase", "system", "platform_actions.rs"),
  snapshotBootstrap: join(backendRoot, "application", "usecase", "system", "snapshot_bootstrap.rs"),
  settingsSecret: join(backendRoot, "application", "usecase", "system", "settings_secret.rs"),
  commands: join(backendRoot, "commands", "system.rs"),
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
    ["diagnostics 模块声明", /\bmod\s+diagnostics\s*;/],
    ["platform-actions 模块声明", /\bmod\s+platform_actions\s*;/],
    ["snapshot-bootstrap 模块声明", /\bmod\s+snapshot_bootstrap\s*;/],
    ["settings-secret 模块声明", /\bmod\s+settings_secret\s*;/],
    ["diagnose 兼容导出", /\bpub\s+use\s+self\s*::\s*diagnostics\s*::\s*diagnose\s*;/],
    ["platform-actions 兼容导出", /\bpub\s+use\s+self\s*::\s*platform_actions\s*::\s*\{[\s\S]*\}\s*;/],
    ["update installability 兼容导出", /\bpub\s+use\s+self\s*::\s*platform_actions\s*::\s*\{[\s\S]*\bcheck_update_installability\b[\s\S]*\}\s*;/],
    ["graceful restart 兼容导出", /\bpub\s+use\s+self\s*::\s*platform_actions\s*::\s*\{[\s\S]*\bgraceful_restart_for_update\b[\s\S]*\}\s*;/],
    ["restart app 兼容导出", /\bpub\s+use\s+self\s*::\s*platform_actions\s*::\s*\{[\s\S]*\brestart_app\b[\s\S]*\}\s*;/],
    ["force kill 兼容导出", /\bpub\s+use\s+self\s*::\s*platform_actions\s*::\s*\{[\s\S]*\bforce_kill_app\b[\s\S]*\}\s*;/],
    ["open path 兼容导出", /\bpub\s+use\s+self\s*::\s*platform_actions\s*::\s*\{[\s\S]*\bopen_path\b[\s\S]*\}\s*;/],
    ["focus main window 兼容导出", /\bpub\s+use\s+self\s*::\s*platform_actions\s*::\s*\{[\s\S]*\bfocus_main_window\b[\s\S]*\}\s*;/],
    ["system info 兼容导出", /\bpub\s+use\s+self\s*::\s*platform_actions\s*::\s*\{[\s\S]*\bsystem_info\b[\s\S]*\}\s*;/],
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
    ["platform action port 依赖", /\bApp(Process|Shell|System|Window)Port\b|\bForceKillOutcome\b/g],
    ["platform action payload 依赖", /\b(UpdateInstallabilityPayload|SystemInfoPayload)\b/g],
    ["platform action 实现", /\bpub\s+fn\s+(check_update_installability|graceful_restart_for_update|restart_app|force_kill_app|open_path|system_info|focus_main_window)\s*\(/g],
    ["platform action helper", /\bfn\s+(force_kill_payload|system_action_payload)\s*\(/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "实现必须归属更窄的 system owner");
  }

  requirePattern(
    "daemon forwarding remains",
    path,
    content,
    /\bdaemon_usecase\s*::\s*run_daemon_once\s*\(\s*repo\s*\)/,
    "system.rs 不得把 daemon owner 移回 system",
  );
  requirePattern(
    "refresh_usage_snapshot daemon scheduling compatibility",
    path,
    content,
    /\bdaemon_usecase\s*::\s*schedule_full_runtime_refresh_for_command\s*\(\s*repo\s*,\s*"refresh_usage_snapshot"\s*\)/,
    "refresh_usage_snapshot 跨 snapshot-bootstrap 与 daemon，兼容层必须继续调用 daemon owner",
  );
}

function validateDiagnosticsOwner(path, original, content) {
  for (const [label, pattern] of [
    ["diagnose action", /\bpub\s+fn\s+diagnose\s*\(\s*repo\s*:\s*&Repository\s*\)/],
    ["diagnostics repository snapshot", /\bload_system_diagnostic_snapshot\s*\(\s*repo\s*\)/],
    ["diagnostics backend status", /\bfn\s+diagnose_backend_status\s*\(/],
    ["pending diagnostics fields", /\bfn\s+make_pending_diagnostic_fields\s*\(/],
    ["diagnostic snapshot payload", /\bfn\s+make_diagnostic_snapshot_payload\s*\(/],
  ]) {
    requirePattern(label, path, content, pattern, "diagnostics owner 必须承载只读诊断 payload 组装");
  }

  for (const [label, pattern] of [
    ["bootstrap cache owner", /\bbootstrap_repository\b/g],
    ["settings secret owner", /\bremote_device_secret\b/g],
    ["daemon owner", /\bdaemon_usecase\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "diagnostics owner 必须保持只读诊断范围");
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

function validatePlatformActionsOwner(path, original, content) {
  for (const [label, pattern] of [
    ["update installability action", /\bpub\s+fn\s+check_update_installability\s*\(\s*system\s*:\s*&impl\s+AppSystemPort\s*\)/],
    ["graceful update restart action", /\bpub\s+fn\s+graceful_restart_for_update\s*\(\s*process\s*:\s*&impl\s+AppProcessPort\s*\)/],
    ["restart app action", /\bpub\s+fn\s+restart_app\s*\(\s*process\s*:\s*&impl\s+AppProcessPort\s*\)/],
    ["force kill action", /\bpub\s+fn\s+force_kill_app\s*\(\s*process\s*:\s*&impl\s+AppProcessPort\s*\)/],
    ["open path action", /\bpub\s+fn\s+open_path\s*\(\s*[\s\S]*shell\s*:\s*&impl\s+AppShellPort\s*,\s*[\s\S]*path\s*:\s*String\s*,?\s*[\s\S]*\)/],
    ["system info action", /\bpub\s+fn\s+system_info\s*\(\s*system\s*:\s*&impl\s+AppSystemPort\s*\)/],
    ["focus main window action", /\bpub\s+fn\s+focus_main_window\s*\(\s*window\s*:\s*&impl\s+AppWindowPort\s*\)/],
    ["unsupported update status", /\bunsupported_status\s*\(\s*[\s\S]*"check_update_installability"/],
    ["platform effect status", /\bBackendEffect\s*::\s*Platform\b/],
    ["system action payload helper", /\bfn\s+system_action_payload\s*\(/],
    ["force kill payload helper", /\bfn\s+force_kill_payload\s*\(/],
  ]) {
    requirePattern(label, path, content, pattern, "platform-actions owner 必须承载公开平台动作和 payload 组装");
  }

  for (const [label, pattern] of [
    ["repository owner", /\bRepository\b|\b(repo|config_repository|settings_repository|daemon_usecase|snapshot_bootstrap)\b/g],
    ["diagnostics owner", /\bload_system_diagnostic_snapshot\b|\bDiagnostic(Probe|Snapshot)\b/g],
    ["settings secret owner", /\bremote_device_secret\b/g],
    ["hotspot owner", /\bHotspotPlatformPort\b|\bhotspot_core\b|\bhotspot_repository\b/g],
  ]) {
    rejectPattern(label, path, original, content, pattern, "platform-actions owner 必须保持公开平台动作范围");
  }
}

function validateCommandCompatibility(path, content) {
  for (const [label, pattern] of [
    ["diagnose command adapter", /\busecase\s*::\s*system\s*::\s*diagnose\s*\(\s*&repo\s*\)/],
    ["load snapshot command adapter", /\busecase\s*::\s*system\s*::\s*load_snapshot\s*\(\s*&repo\s*\)/],
    ["load bootstrap command adapter", /\busecase\s*::\s*system\s*::\s*load_bootstrap_state\s*\(\s*&repo\s*\)/],
    ["remote secret create command adapter", /\busecase\s*::\s*system\s*::\s*get_or_create_remote_device_secret\s*\(\s*&repo\s*\)/],
    ["remote secret import command adapter", /\busecase\s*::\s*system\s*::\s*import_remote_device_secret_if_empty\s*\(\s*&repo\s*,\s*secret\s*\)/],
    ["update installability command adapter", /\busecase\s*::\s*system\s*::\s*check_update_installability\s*\(\s*&system\s*\)/],
    ["graceful restart command adapter", /\busecase\s*::\s*system\s*::\s*graceful_restart_for_update\s*\(\s*&process\s*\)/],
    ["restart app command adapter", /\busecase\s*::\s*system\s*::\s*restart_app\s*\(\s*&process\s*\)/],
    ["force kill command adapter", /\busecase\s*::\s*system\s*::\s*force_kill_app\s*\(\s*&process\s*\)/],
    ["open path command adapter", /\busecase\s*::\s*system\s*::\s*open_path\s*\(\s*&shell\s*,\s*path\s*\)/],
    ["system info command adapter", /\busecase\s*::\s*system\s*::\s*system_info\s*\(\s*&system\s*\)/],
    ["focus main window command adapter", /\busecase\s*::\s*system\s*::\s*focus_main_window\s*\(\s*&window\s*\)/],
  ]) {
    requirePattern(label, path, content, pattern, "commands/system.rs 必须保持兼容 IPC adapter");
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
validateDiagnosticsOwner(
  files.diagnostics,
  raw.get("diagnostics").content,
  stripped.get("diagnostics").content,
);
validatePlatformActionsOwner(
  files.platformActions,
  raw.get("platformActions").content,
  stripped.get("platformActions").content,
);
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
validateCommandCompatibility(files.commands, stripped.get("commands").content);

if (failures.length > 0) {
  console.error("FAIL 后端 system owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS 后端 system owner 校验通过：diagnostics、platform-actions、snapshot-bootstrap 和 settings-secret 已从 system.rs 拆分，并保留 command 兼容入口。",
);
