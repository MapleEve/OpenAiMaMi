import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  command: join(backendRoot, "commands", "hotspot.rs"),
  systemCommand: join(backendRoot, "commands", "system.rs"),
  usecase: join(backendRoot, "application", "usecase", "hotspot.rs"),
  systemUsecase: join(backendRoot, "application", "usecase", "system.rs"),
  usecaseMod: join(backendRoot, "application", "usecase", "mod.rs"),
  core: join(backendRoot, "core", "hotspot.rs"),
  model: join(backendRoot, "core", "model", "hotspot.rs"),
  platform: join(backendRoot, "platform", "hotspot.rs"),
  repository: join(backendRoot, "repository", "hotspot.rs"),
  ports: join(backendRoot, "application", "ports.rs"),
  lib: join(backendRoot, "lib.rs"),
  hexagonalValidator: join(repoRoot, "scripts", "validate-backend-hexagonal.mjs"),
  currentSourceMap: join(repoRoot, "docs", "reconstruction", "system-hotspot-current-source-map.md"),
  packageJson: join(repoRoot, "package.json"),
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

function requirePattern(label, path, content, pattern) {
  if (!pattern.test(content)) {
    failures.push(`${toRelative(path)} 缺少 ${label}`);
  }
}

function rejectPattern(label, path, content, pattern, reason) {
  if (pattern.test(content)) {
    failures.push(`${toRelative(path)} 不应出现 ${label}：${reason}`);
  }
}

function requireAll(path, content, entries) {
  for (const [label, pattern] of entries) {
    requirePattern(label, path, content, pattern);
  }
}

function rejectAll(path, content, entries, reason) {
  for (const [label, pattern] of entries) {
    rejectPattern(label, path, content, pattern, reason);
  }
}

const raw = new Map(
  Object.entries(files).map(([key, path]) => [key, { path, content: readRequired(path, key) }]),
);

const forbiddenNames = ["Codex" + "Manager", `C${5}`, "lobe" + "hub", "Lobe" + "Hub"];
const forbiddenPattern = new RegExp(
  `\\b(${forbiddenNames.map((name) => name.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")).join("|")})\\b`,
  "g",
);
for (const { path, content } of raw.values()) {
  rejectPattern("禁止公开标识", path, content, forbiddenPattern, "hotspot owner 切片不得写入禁止公开标识");
}

const command = raw.get("command");
requireAll(command.path, command.content, [
  ["has_notch Tauri command", /#\s*\[\s*tauri\s*::\s*command\s*\][\s\S]*pub\s+fn\s+has_notch\s*\(/],
  [
    "get_hotspot_enabled Tauri command",
    /#\s*\[\s*tauri\s*::\s*command\s*\][\s\S]*pub\s+fn\s+get_hotspot_enabled\s*\(/,
  ],
  [
    "set_hotspot_enabled Tauri command",
    /#\s*\[\s*tauri\s*::\s*command\s*\][\s\S]*pub\s+fn\s+set_hotspot_enabled\s*\(/,
  ],
  ["hotspot_ready Tauri command", /#\s*\[\s*tauri\s*::\s*command\s*\][\s\S]*pub\s+fn\s+hotspot_ready\s*\(/],
  ["State Mutex Repository", /State\s*<\s*'_\s*,\s*Mutex\s*<\s*Repository\s*>\s*>/],
  ["HotspotPlatformAdapter", /\bHotspotPlatformAdapter\b/],
  ["has_notch usecase", /\busecase::hotspot::has_notch\s*\(/],
  ["get_hotspot_enabled usecase", /\busecase::hotspot::get_hotspot_enabled\s*\(/],
  ["set_hotspot_enabled usecase", /\busecase::hotspot::set_hotspot_enabled\s*\(/],
  ["hotspot_ready usecase", /\busecase::hotspot::hotspot_ready\s*\(/],
]);
rejectAll(
  command.path,
  command.content,
  [
    ["system hotspot usecase", /\busecase::system::(has_notch|get_hotspot_enabled|set_hotspot_enabled|hotspot_ready)\b/],
    ["repository helper", /\bhotspot_repository\b|\bsettings_repository\b/],
    ["core helper", /\bhotspot_core\b/],
    ["direct settings file", /\bAppSettingsFile\b/],
    ["direct fs", /\bstd::fs\b|\btokio::fs\b|\brepo\.fs\s*\(/],
  ],
  "命令层只能做 IPC 适配并调用热点用例",
);

const systemCommand = raw.get("systemCommand");
rejectAll(
  systemCommand.path,
  systemCommand.content,
  [
    ["HotspotPlatformAdapter", /\bHotspotPlatformAdapter\b/],
    ["has_notch command", /\bpub\s+fn\s+has_notch\s*\(/],
    ["get_hotspot_enabled command", /\bpub\s+fn\s+get_hotspot_enabled\s*\(/],
    ["set_hotspot_enabled command", /\bpub\s+fn\s+set_hotspot_enabled\s*\(/],
    ["hotspot_ready command", /\bpub\s+fn\s+hotspot_ready\s*\(/],
    ["system hotspot usecase", /\busecase::system::(has_notch|get_hotspot_enabled|set_hotspot_enabled|hotspot_ready)\b/],
  ],
  "hotspot 命令必须归属 commands/hotspot.rs",
);

const usecase = raw.get("usecase");
requireAll(usecase.path, usecase.content, [
  ["HotspotPlatformPort", /\bHotspotPlatformPort\b/],
  ["hotspot core", /\bhotspot_core::(has_notch|get_hotspot_enabled|set_hotspot_enabled|hotspot_ready)\s*\(/],
  ["hotspot repository load", /\bhotspot_repository::load_hotspot_settings_snapshot\s*\(/],
  ["hotspot repository save", /\bhotspot_repository::save_hotspot_enabled\s*\(/],
  ["Repository argument", /\bRepository\b/],
]);
rejectAll(
  usecase.path,
  usecase.content,
  [
    ["Tauri object", /\btauri::|\bState\s*</],
    ["CoreEnvelope", /\bCoreEnvelope\b/],
    ["AppHandle", /\bAppHandle\b/],
    ["platform concrete adapter", /\bplatform::hotspot\b|\bHotspotPlatformAdapter\b/],
    ["direct settings repository", /\bsettings_repository\b/],
  ],
  "用例层只能编排端口、仓储和核心语义",
);

const systemUsecase = raw.get("systemUsecase");
rejectAll(
  systemUsecase.path,
  systemUsecase.content,
  [
    ["HotspotPlatformPort", /\bHotspotPlatformPort\b/],
    ["hotspot core", /\bhotspot_core\b/],
    ["hotspot repository", /\bhotspot_repository\b/],
    ["has_notch usecase", /\bpub\s+fn\s+has_notch\s*\(/],
    ["get_hotspot_enabled usecase", /\bpub\s+fn\s+get_hotspot_enabled\s*\(/],
    ["set_hotspot_enabled usecase", /\bpub\s+fn\s+set_hotspot_enabled\s*\(/],
    ["hotspot_ready usecase", /\bpub\s+fn\s+hotspot_ready\s*\(/],
  ],
  "hotspot 用例必须归属 application/usecase/hotspot.rs",
);

requirePattern(
  "hotspot usecase 模块声明",
  raw.get("usecaseMod").path,
  raw.get("usecaseMod").content,
  /\bpub\s+mod\s+hotspot\s*;/,
);

const core = raw.get("core");
requireAll(core.path, core.content, [
  ["get_hotspot_enabled core", /\bfn\s+get_hotspot_enabled\s*\(/],
  ["set_hotspot_enabled core", /\bfn\s+set_hotspot_enabled\s*\(/],
  ["hotspot_ready core", /\bfn\s+hotspot_ready\s*\(/],
  ["has_notch core", /\bfn\s+has_notch\s*\(/],
  ["HotspotDomainResult", /\bHotspotDomainResult\b/],
]);
rejectAll(
  core.path,
  core.content,
  [
    ["repository dependency", /\brepository::|\bhotspot_repository\b|\bsettings_repository\b/],
    ["platform dependency", /\bplatform::|\bHotspotPlatformAdapter\b/],
    ["Tauri boundary", /\btauri::|\bState\s*<|\bCoreEnvelope\b/],
    ["direct fs", /\bstd::fs\b|\btokio::fs\b/],
  ],
  "核心层不能依赖 Tauri、平台或仓储实现",
);

const repository = raw.get("repository");
requireAll(repository.path, repository.content, [
  ["load snapshot", /\bfn\s+load_hotspot_settings_snapshot\s*\(/],
  ["save enabled", /\bfn\s+save_hotspot_enabled\s*\(/],
  ["settings repository", /\bsettings_repository::(load_app_settings|save_app_settings)\s*\(/],
  ["repository fs exists", /\brepo\.fs\s*\(\s*\)\.exists\s*\(/],
  ["settings path", /\brepo\.paths\s*\(\s*\)\.settings_path\b/],
]);
rejectAll(
  repository.path,
  repository.content,
  [
    ["Tauri boundary", /\btauri::|\bState\s*</],
    ["platform dependency", /\bplatform::hotspot\b|\bHotspotPlatformPort\b|\bHotspotPlatformAdapter\b/],
    ["direct fs", /\bstd::fs\b|\btokio::fs\b/],
  ],
  "仓储层只能通过 Repository 与 settings 仓储处理可重建文件事实",
);

const platform = raw.get("platform");
requireAll(platform.path, platform.content, [
  ["HotspotPlatformPort implementation", /\bimpl\s+HotspotPlatformPort\s+for\s+HotspotPlatformAdapter\b/],
  ["unsupported skeleton", /\bHotspotPlatformCapability::unsupported_skeleton\s*\(/],
]);
rejectAll(
  platform.path,
  platform.content,
  [
    ["repository dependency", /\bRepository\b|\brepository::|\bsettings_repository\b/],
    ["Tauri boundary", /\btauri::|\bState\s*<|\bCoreEnvelope\b/],
  ],
  "平台层只封装结构化平台能力，不保存业务状态或仓储状态",
);

requireAll(raw.get("model").path, raw.get("model").content, [
  ["HotspotCommand", /\benum\s+HotspotCommand\b/],
  ["HotspotStatusCode", /\benum\s+HotspotStatusCode\b/],
  ["HotspotSettingsSnapshot", /\bstruct\s+HotspotSettingsSnapshot\b/],
  ["HotspotPlatformCapability", /\bstruct\s+HotspotPlatformCapability\b/],
  ["HotspotDomainResult", /\bstruct\s+HotspotDomainResult\b/],
]);

requirePattern(
  "HotspotPlatformPort trait",
  raw.get("ports").path,
  raw.get("ports").content,
  /\btrait\s+HotspotPlatformPort\b[\s\S]*\bhotspot_capability\s*\(/,
);

const lib = raw.get("lib");
requireAll(lib.path, lib.content, [
  ["commands::hotspot::has_notch 注册", /\bcommands::hotspot::has_notch\b/],
  ["commands::hotspot::get_hotspot_enabled 注册", /\bcommands::hotspot::get_hotspot_enabled\b/],
  ["commands::hotspot::set_hotspot_enabled 注册", /\bcommands::hotspot::set_hotspot_enabled\b/],
  ["commands::hotspot::hotspot_ready 注册", /\bcommands::hotspot::hotspot_ready\b/],
]);
rejectAll(
  lib.path,
  lib.content,
  [
    ["system has_notch 注册", /\bcommands::system::has_notch\b/],
    ["system get_hotspot_enabled 注册", /\bcommands::system::get_hotspot_enabled\b/],
    ["system set_hotspot_enabled 注册", /\bcommands::system::set_hotspot_enabled\b/],
    ["system hotspot_ready 注册", /\bcommands::system::hotspot_ready\b/],
  ],
  "hotspot IPC 注册必须指向 commands/hotspot.rs",
);

const hexagonalValidator = raw.get("hexagonalValidator");
requireAll(hexagonalValidator.path, hexagonalValidator.content, [
  ["get_hotspot_enabled owner override", /\["get_hotspot_enabled",\s*"hotspot"\]/],
  ["set_hotspot_enabled owner override", /\["set_hotspot_enabled",\s*"hotspot"\]/],
  ["has_notch owner override", /\["has_notch",\s*"hotspot"\]/],
  ["hotspot_ready owner override", /\["hotspot_ready",\s*"hotspot"\]/],
]);

requirePattern(
  "package validate script",
  raw.get("packageJson").path,
  raw.get("packageJson").content,
  /"validate:backend-hotspot-owner"\s*:\s*"node scripts\/validate-backend-hotspot-owner\.mjs"/,
);

const currentSourceMap = raw.get("currentSourceMap");
requireAll(currentSourceMap.path, currentSourceMap.content, [
  ["hotspot command 文档落点", /`src-tauri\/src\/commands\/hotspot\.rs`/],
  ["hotspot usecase 文档落点", /`src-tauri\/src\/application\/usecase\/hotspot\.rs`/],
  ["hotspot usecase 接线说明", /hotspot usecase 接线/],
  ["backend hotspot owner 验证入口", /npm run validate:backend-hotspot-owner/],
]);
rejectAll(
  currentSourceMap.path,
  currentSourceMap.content,
  [
    ["旧 system command 文档落点", /`src-tauri\/src\/commands\/system\.rs`\s*\|\s*`has_notch`/],
    ["旧 system usecase 文档落点", /`src-tauri\/src\/application\/usecase\/system\.rs`/],
    ["旧 system usecase 说明", /system usecase\s*(?:调用|组织|接线)/],
    ["旧 system hotspot 注册说明", /system hotspot commands/],
    ["旧 hotspot command 占位说明", /当前不注册额外可调用命令|命令边界占位/],
  ],
  "hotspot current-source 文档必须跟随独立 hotspot owner，不得保留旧 system 接线描述",
);

if (failures.length > 0) {
  console.error("FAIL 后端 hotspot owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS 后端 hotspot owner 校验通过：commands、usecase、core、platform、repository、model、IPC 注册和六边形映射均归属热点 owner。",
);
