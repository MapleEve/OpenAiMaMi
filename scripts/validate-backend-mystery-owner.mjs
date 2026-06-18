import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  mysteryUsecase: join(backendRoot, "application", "usecase", "mystery.rs"),
  mysteryCommands: join(backendRoot, "commands", "mystery.rs"),
  systemUsecase: join(backendRoot, "application", "usecase", "system.rs"),
  systemCommands: join(backendRoot, "commands", "system.rs"),
  usecaseMod: join(backendRoot, "application", "usecase", "mod.rs"),
  commandsMod: join(backendRoot, "commands", "mod.rs"),
  lib: join(backendRoot, "lib.rs"),
  packageJson: join(repoRoot, "package.json"),
  voiceCommand: join(backendRoot, "commands", "voice.rs"),
  voiceUsecase: join(backendRoot, "application", "usecase", "voice.rs"),
  voiceContract: join(backendRoot, "contracts", "voice.rs"),
};

const failures = [];
const frontendRouteLiterals = [
  "mcp",
  "skills",
  "overview",
  "accounts",
  "sessions",
  "plugins",
  "relayModel",
  "settings",
  "maintenance",
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

function stripRustComments(content) {
  return content
    .replace(/\/\*[\s\S]*?\*\//g, (match) => match.replace(/[^\n]/g, " "))
    .replace(/\/\/.*$/gm, "");
}

function lineNumberAt(content, index) {
  return content.slice(0, index).split("\n").length;
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

const raw = new Map(
  Object.entries(files).map(([label, path]) => [label, { path, content: readRequired(path, label) }]),
);
const code = new Map(
  [...raw.entries()].map(([label, file]) => [label, { ...file, content: stripRustComments(file.content) }]),
);

const mysteryUsecase = code.get("mysteryUsecase");
for (const [label, pattern] of [
  ["get_mystery_unlock_grants usecase", /\bpub\s+fn\s+get_mystery_unlock_grants\s*\(\s*repo\s*:\s*&Repository\s*\)/],
  ["merge_mystery_unlock_grants usecase", /\bpub\s+fn\s+merge_mystery_unlock_grants\s*\(/],
  ["settings grant load", /\bsettings_repository\s*::\s*load_mystery_unlock_grants\s*\(\s*repo\s*\)/],
  ["settings grant save", /\bsettings_repository\s*::\s*save_mystery_unlock_grants\s*\(\s*repo\s*,/],
  ["route normalization", /\bfn\s+normalize_mystery_route\s*\(/],
  ["expired grant filtering", /\bepoch_ms\s*<\s*now_ms|\bgrant\s*\.\s*epoch_ms\s*>=\s*now_ms/],
  ["merge by route", /\bBTreeMap\s*::<\s*String\s*,\s*MysteryRouteGrant\s*>/],
]) {
  requirePattern(label, mysteryUsecase.path, mysteryUsecase.content, pattern, "mystery usecase 必须 owning grant 事务");
}

for (const [label, pattern] of [
  ["route allowlist helper", /\b(is_mystery_route_allowed|allowed_mystery|route_allowed|allowlist)\b/g],
  ["match route allowlist", /\bmatches!\s*\(\s*[\s\S]*route/g],
]) {
  rejectPattern(label, mysteryUsecase.path, raw.get("mysteryUsecase").content, mysteryUsecase.content, pattern, "后端不得判断前端 route 是否允许");
}

for (const route of frontendRouteLiterals) {
  rejectPattern(
    `前端 route literal "${route}"`,
    mysteryUsecase.path,
    raw.get("mysteryUsecase").content,
    mysteryUsecase.content,
    new RegExp(`["']${route.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")}["']`, "g"),
    "禁止 route literal allowlist 回流到后端 mystery owner",
  );
}

const mysteryCommands = code.get("mysteryCommands");
for (const [label, pattern] of [
  ["get command adapter", /\bpub\s+fn\s+get_mystery_unlock_grants\s*\(/],
  ["merge command adapter", /\bpub\s+fn\s+merge_mystery_unlock_grants\s*\(/],
  ["get delegates to mystery usecase", /\busecase\s*::\s*mystery\s*::\s*get_mystery_unlock_grants\s*\(\s*&repo\s*\)/],
  ["merge delegates to mystery usecase", /\busecase\s*::\s*mystery\s*::\s*merge_mystery_unlock_grants\s*\(\s*&repo\s*,\s*grants\s*\)/],
  ["CoreEnvelope adapter", /\bCoreEnvelope\s*::\s*ok\b/],
]) {
  requirePattern(label, mysteryCommands.path, mysteryCommands.content, pattern, "commands/mystery.rs 必须只做 IPC adapter");
}

for (const [ownerLabel, fileLabel] of [
  ["system usecase", "systemUsecase"],
  ["system commands", "systemCommands"],
]) {
  const file = code.get(fileLabel);
  rejectPattern(
    `${ownerLabel} mystery command/usecase`,
    file.path,
    raw.get(fileLabel).content,
    file.content,
    /\b(get_mystery_unlock_grants|merge_mystery_unlock_grants|mystery_unlock_grants|MysteryRouteGrant|is_mystery_route_allowed)\b/g,
    "mystery grants owner 已迁出 system",
  );
  for (const route of frontendRouteLiterals) {
    rejectPattern(
      `${ownerLabel} 前端 route literal "${route}"`,
      file.path,
      raw.get(fileLabel).content,
      file.content,
      new RegExp(`["']${route.replace(/[.*+?^${}()|[\]\\]/g, "\\$&")}["']`, "g"),
      "system owner 不得硬编码 mystery route allowlist",
    );
  }
}

requirePattern("usecase mod mystery", files.usecaseMod, code.get("usecaseMod").content, /\bpub\s+mod\s+mystery\s*;/, "application/usecase/mod.rs 必须导出 mystery owner");
requirePattern("commands mod mystery", files.commandsMod, code.get("commandsMod").content, /\bpub\s+mod\s+mystery\s*;/, "commands/mod.rs 必须导出 mystery IPC owner");
requirePattern("lib get mystery registration", files.lib, code.get("lib").content, /\bcommands\s*::\s*mystery\s*::\s*get_mystery_unlock_grants\b/, "lib.rs 必须注册 mystery command");
requirePattern("lib merge mystery registration", files.lib, code.get("lib").content, /\bcommands\s*::\s*mystery\s*::\s*merge_mystery_unlock_grants\b/, "lib.rs 必须注册 mystery command");
rejectPattern("system mystery registration", files.lib, raw.get("lib").content, code.get("lib").content, /\bcommands\s*::\s*system\s*::\s*(get_mystery_unlock_grants|merge_mystery_unlock_grants)\b/g, "mystery command 不得继续注册在 system");
rejectPattern("voice command registration", files.lib, raw.get("lib").content, code.get("lib").content, /\bcommands\s*::\s*voice\s*::/g, "voice 不得被接入 invoke handler");

for (const label of ["voiceCommand", "voiceUsecase", "voiceContract"]) {
  const file = code.get(label);
  rejectPattern("voice mystery 接入", file.path, raw.get(label).content, file.content, /\bmystery\b/gi, "voice 空骨架不得接入 mystery grants");
}

requirePattern(
  "package validate script",
  files.packageJson,
  raw.get("packageJson").content,
  /"validate:backend-mystery-owner"\s*:\s*"node scripts\/validate-backend-mystery-owner\.mjs"/,
  "package.json 必须暴露 validate:backend-mystery-owner",
);

if (failures.length > 0) {
  console.error("FAIL backend mystery owner 验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS backend mystery owner 验证通过：mystery grants 已迁出 system，后端不再 owning 前端 route allowlist，voice 未接入。");
