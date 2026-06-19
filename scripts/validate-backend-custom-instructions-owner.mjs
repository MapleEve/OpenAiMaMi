import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  evidenceMap: join(repoRoot, "docs", "reconstruction", "custom-instructions-current-source-evidence-map.md"),
  sourceMap: join(repoRoot, "docs", "reconstruction", "source-map.md"),
  reconstructionReadme: join(repoRoot, "docs", "reconstruction", "README.md"),
  command: join(repoRoot, "src-tauri", "src", "commands", "custom_instructions.rs"),
  usecase: join(repoRoot, "src-tauri", "src", "application", "usecase", "custom_instructions.rs"),
  repository: join(repoRoot, "src-tauri", "src", "repository", "custom_instructions.rs"),
  coreModel: join(repoRoot, "src-tauri", "src", "core", "model", "custom_instructions.rs"),
  coreModelMod: join(repoRoot, "src-tauri", "src", "core", "model", "mod.rs"),
  coreParser: join(repoRoot, "src-tauri", "src", "core", "parser", "custom_instructions.rs"),
  coreParserMod: join(repoRoot, "src-tauri", "src", "core", "parser", "mod.rs"),
  contracts: join(repoRoot, "src-tauri", "src", "contracts", "custom_instructions.rs"),
  windowsGate: join(
    repoRoot,
    "evidence",
    "full-chain",
    "internal",
    "audits",
    "audits",
    "windows-1.0.9-custom-instructions",
    "gate-report.json",
  ),
  macosGate: join(
    repoRoot,
    "evidence",
    "full-chain",
    "internal",
    "audits",
    "audits",
    "macos-1.0.9-custom-instructions",
    "gate-report.json",
  ),
  loadManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "custom-instructions",
    "load_custom_instruction_state",
    "manifest.json",
  ),
  previewManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "custom-instructions",
    "preview_custom_instruction_apply",
    "manifest.json",
  ),
  applyManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "custom-instructions",
    "apply_custom_instruction",
    "manifest.json",
  ),
  clearManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "custom-instructions",
    "clear_custom_instruction_block",
    "manifest.json",
  ),
  rollbackManifest: join(
    repoRoot,
    "evidence",
    "full-chain",
    "raw",
    "aimami",
    "1.0.9",
    "windows",
    "custom-instructions",
    "rollback_custom_instruction",
    "manifest.json",
  ),
};

const rustOwnerFiles = [
  files.command,
  files.usecase,
  files.repository,
  files.coreModel,
  files.coreModelMod,
  files.coreParser,
  files.coreParserMod,
  files.contracts,
];

const documentationFiles = [files.evidenceMap, files.sourceMap, files.reconstructionReadme];

const evidenceFiles = [
  files.windowsGate,
  files.macosGate,
  files.loadManifest,
  files.previewManifest,
  files.applyManifest,
  files.clearManifest,
  files.rollbackManifest,
];

const forbiddenNames = [
  new RegExp(`${["Codex", "Manager"].join("")}|\\b${["C", "5"].join("")}\\b`, "g"),
  new RegExp(["lobe", "hub"].join(""), "gi"),
];

function toRelative(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function readRequired(path, label) {
  if (!existsSync(path)) {
    failures.push(`缺少 ${label}：${toRelative(path)}`);
    return "";
  }

  return readFileSync(path, "utf8");
}

function stripRustComments(content) {
  return content
    .replace(/\/\*[\s\S]*?\*\//g, (value) => value.replace(/[^\n]/g, " "))
    .replace(/\/\/.*$/gm, "");
}

function requirePattern(label, path, content, pattern, reason) {
  if (!pattern.test(content)) {
    failures.push(`${toRelative(path)} 缺少 ${label}：${reason}`);
  }
}

function rejectPattern(label, path, content, pattern, reason) {
  if (pattern.test(content)) {
    failures.push(`${toRelative(path)} 禁止 ${label}：${reason}`);
  }
}

function requireFile(path, label) {
  if (!existsSync(path)) {
    failures.push(`缺少 ${label}: ${toRelative(path)}`);
  }
}

function requireText(label, path, content, expected) {
  if (!content.includes(expected)) {
    failures.push(`${toRelative(path)} 缺少 ${label}: ${expected}`);
  }
}

function rejectForbiddenPublicationText(path, content) {
  const windowsSeparator = String.raw`\\`;
  const userDirectory = ["Users"].join("");
  const windowsUserPathPattern =
    String.raw`\b[A-Z]:` +
    windowsSeparator +
    userDirectory +
    windowsSeparator +
    "[^" +
    windowsSeparator +
    String.raw`\r\n]+`;
  const forbiddenText = [
    new RegExp(`${["Codex", "Manager"].join("")}|\\b${["C", "5"].join("")}\\b`, "g"),
    new RegExp(["lobe", "hub"].join(""), "gi"),
    new RegExp(windowsUserPathPattern, "g"),
    new RegExp(String.raw`/` + userDirectory + String.raw`/[^/\r\n]+`, "g"),
  ];

  for (const pattern of forbiddenText) {
    rejectPattern(
      "禁止公开标识、用户名或绝对路径",
      path,
      content,
      pattern,
      "文档和 validator 不得写入禁止公开标识、本机用户名或绝对路径",
    );
  }
}

for (const [label, path] of [
  ["custom-instructions evidence map", files.evidenceMap],
  ["source-map", files.sourceMap],
  ["reconstruction README", files.reconstructionReadme],
  ["Windows custom-instructions gate-report", files.windowsGate],
  ["macOS custom-instructions gate-report", files.macosGate],
  ["load_custom_instruction_state manifest", files.loadManifest],
  ["preview_custom_instruction_apply manifest", files.previewManifest],
  ["apply_custom_instruction manifest", files.applyManifest],
  ["clear_custom_instruction_block manifest", files.clearManifest],
  ["rollback_custom_instruction manifest", files.rollbackManifest],
  ["custom_instructions contracts", files.contracts],
]) {
  requireFile(path, label);
}

for (const path of [...documentationFiles, ...rustOwnerFiles]) {
  const content = readRequired(path, toRelative(path));
  rejectForbiddenPublicationText(path, content);
}

const evidenceMap = readRequired(files.evidenceMap, "custom-instructions current-source evidence map");
const sourceMap = readRequired(files.sourceMap, "source-map");
const reconstructionReadme = readRequired(files.reconstructionReadme, "reconstruction README");

for (const item of [
  "Custom Instructions 后端 current-source 证据映射",
  "evidence/full-chain/internal/audits/audits/windows-1.0.9-custom-instructions/gate-report.json",
  "evidence/full-chain/internal/audits/audits/macos-1.0.9-custom-instructions/gate-report.json",
  "evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/load_custom_instruction_state/manifest.json",
  "evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/preview_custom_instruction_apply/manifest.json",
  "evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/apply_custom_instruction/manifest.json",
  "evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/clear_custom_instruction_block/manifest.json",
  "evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/rollback_custom_instruction/manifest.json",
  "src-tauri/src/commands/custom_instructions.rs",
  "src-tauri/src/application/usecase/custom_instructions.rs",
  "src-tauri/src/repository/custom_instructions.rs",
  "src-tauri/src/core/parser/custom_instructions.rs",
  "src-tauri/src/core/model/custom_instructions.rs",
  "src-tauri/src/contracts/custom_instructions.rs",
  "不声明闭源后端已经全量还原",
  "不处理 voice 边界",
  "npm run validate:backend-custom-instructions-owner",
  "npm run validate:backend",
]) {
  requireText("evidence map 内容", files.evidenceMap, evidenceMap, item);
}

for (const [label, content] of [
  ["source-map", sourceMap],
  ["reconstruction README", reconstructionReadme],
]) {
  if (!content.includes("docs/reconstruction/custom-instructions-current-source-evidence-map.md")) {
    failures.push(`${label} 必须注册 custom-instructions current-source evidence map`);
  }
  if (label === "source-map" && !content.includes("scripts/validate-backend-custom-instructions-owner.mjs")) {
    failures.push(`${label} 必须注册 custom-instructions owner validator`);
  }
}

for (const path of evidenceFiles) {
  requireFile(path, "custom-instructions raw/internal 证据");
}

for (const [label, path] of Object.entries({
  command: files.command,
  usecase: files.usecase,
  repository: files.repository,
  coreModel: files.coreModel,
  coreModelMod: files.coreModelMod,
  coreParser: files.coreParser,
  coreParserMod: files.coreParserMod,
  contracts: files.contracts,
})) {
  const content = readRequired(path, label);
  for (const pattern of forbiddenNames) {
    rejectPattern("禁止公开标识", path, content, pattern, "custom_instructions owner 切片不得写入禁止公开标识");
  }
}

const command = stripRustComments(readRequired(files.command, "custom_instructions command"));
const usecase = stripRustComments(readRequired(files.usecase, "custom_instructions usecase"));
const repository = stripRustComments(readRequired(files.repository, "custom_instructions repository"));
const coreModel = stripRustComments(readRequired(files.coreModel, "custom_instructions core model"));
const coreModelMod = stripRustComments(readRequired(files.coreModelMod, "core model mod"));
const coreParser = stripRustComments(readRequired(files.coreParser, "custom_instructions core parser"));
const coreParserMod = stripRustComments(readRequired(files.coreParserMod, "core parser mod"));
const contracts = stripRustComments(readRequired(files.contracts, "custom_instructions contracts"));

rejectPattern(
  "command 文件或 history 事务",
  files.command,
  command,
  /\b(FileSystemAdapter|serde_json|MANAGED_START_MARKER|MANAGED_END_MARKER|read_to_string|write_string|remove_file|read_dir|create_dir_all)\b/g,
  "command 只能做 IPC adapter 并调用 usecase",
);
rejectPattern(
  "command 直接触达 repository 内部 FS/path",
  files.command,
  command,
  /\brepo\s*\.\s*(fs|paths)\s*\(/g,
  "command 不得拆出 repository 内部读写能力",
);
requirePattern(
  "command 调用 usecase",
  files.command,
  command,
  /\busecase\s*::\s*custom_instructions\s*::/g,
  "command 必须保持薄 IPC adapter",
);

rejectPattern(
  "usecase 直接文件系统能力",
  files.usecase,
  usecase,
  /\b(FileSystemAdapter|std\s*::\s*fs|read_to_string|write_string|remove_file|read_dir|create_dir_all)\b/g,
  "usecase 只能编排 repository 窄接口，不能直接读写文件",
);
rejectPattern(
  "usecase 直接触达 Repository FS/path",
  files.usecase,
  usecase,
  /\brepo\s*\.\s*(fs|paths)\s*\(/g,
  "usecase 必须通过 custom_instructions repository helper 读写文件和 history",
);
rejectPattern(
  "usecase 平台或 UI 行为",
  files.usecase,
  usecase,
  /\b(tauri\s*::|State\s*<|std\s*::\s*process|Command\s*::\s*new|spawn\s*\(|output\s*\(|reqwest|TcpStream|UdpSocket)\b/g,
  "usecase 不得依赖 Tauri UI、进程或网络能力",
);
for (const action of ["apply", "clear_block", "rollback"]) {
  requirePattern(
    `usecase 用户动作 ${action}`,
    files.usecase,
    usecase,
    new RegExp(`pub\\s+fn\\s+${action}\\s*\\(`),
    "apply/clear/rollback 用户动作事务必须由 usecase owning",
  );
}
for (const helper of [
  "read_global_file",
  "write_global_file",
  "remove_global_file",
  "write_history_snapshot",
  "trim_history",
  "load_history",
  "find_history_snapshot",
]) {
  requirePattern(
    `usecase 编排 repository::${helper}`,
    files.usecase,
    usecase,
    new RegExp(`custom_instruction_repository\\s*::\\s*${helper}\\s*\\(`),
    "usecase 必须通过 repository 窄接口完成文件和 history 事务",
  );
}
for (const helper of [
  "parse_managed_block",
  "validate_managed_content",
  "ensure_not_protected",
  "compose_with_managed_content",
  "clear_managed_content",
]) {
  requirePattern(
    `usecase 调用 core parser ${helper}`,
    files.usecase,
    usecase,
    new RegExp(`custom_instruction_core\\s*::\\s*${helper}\\s*\\(`),
    "受控块解析、保护状态和内容组合必须由 core owning",
  );
}
for (const action of ["Apply", "Clear", "Rollback"]) {
  requirePattern(
    `usecase 保存 ${action} history`,
    files.usecase,
    usecase,
    new RegExp(`DomainHistoryAction\\s*::\\s*${action}`),
    "apply/clear/rollback 必须保留 history snapshot 行为",
  );
}

requirePattern(
  "core model 模块注册",
  files.coreModelMod,
  coreModelMod,
  /\bpub\s+mod\s+custom_instructions\s*;/g,
  "core/model 必须注册 custom_instructions 领域模型",
);
requirePattern(
  "core parser 模块注册",
  files.coreParserMod,
  coreParserMod,
  /\bpub\s+mod\s+custom_instructions\s*;/g,
  "core/parser 必须注册 custom_instructions parser",
);
for (const item of [
  "HISTORY_LIMIT",
  "enum CustomInstructionProtection",
  "enum CustomInstructionHistoryAction",
  "struct ParsedCustomInstructionBlock",
  "struct CustomInstructionHistorySnapshot",
]) {
  requirePattern(
    `core model ${item}`,
    files.coreModel,
    coreModel,
    new RegExp(item.replaceAll(" ", "\\s+")),
    "core model 必须 owning 保护状态和 history snapshot 模型",
  );
}
for (const helper of [
  "MANAGED_START_MARKER",
  "MANAGED_END_MARKER",
  "parse_managed_block",
  "ensure_not_protected",
  "compose_with_managed_content",
  "clear_managed_content",
  "validate_managed_content",
  "normalize_managed_content",
]) {
  requirePattern(
    `core parser ${helper}`,
    files.coreParser,
    coreParser,
    new RegExp(`\\b${helper}\\b`),
    "core parser 必须 owning marker、解析、保护和内容组合逻辑",
  );
}
for (const [label, path, content] of [
  ["core model", files.coreModel, coreModel],
  ["core parser", files.coreParser, coreParser],
]) {
  rejectPattern(
    `${label} 文件系统或 repository 依赖`,
    path,
    content,
    /\b(FileSystemAdapter|Repository|std\s*::\s*fs|read_to_string|write_string|remove_file|read_dir|create_dir_all)\b/g,
    "core 不得执行 repository 文件读写",
  );
  rejectPattern(
    `${label} Tauri/platform 依赖`,
    path,
    content,
    /\b(tauri\s*::|State\s*<|std\s*::\s*process|Command\s*::\s*new|reqwest)\b/g,
    "core 不得依赖 Tauri UI、进程或网络能力",
  );
}

rejectPattern(
  "repository 高层用户动作事务",
  files.repository,
  repository,
  /\bpub\s*(?:\(crate\))?\s+fn\s+(load_state|preview_apply|apply|apply_managed_content|clear_managed_block|rollback|rollback_history)\s*\(/g,
  "repository 只能保留全局文件和 history JSON 窄操作",
);
rejectPattern(
  "repository owning parser/content 逻辑",
  files.repository,
  repository,
  /\b(parse_global_file|parse_managed_block|compose_with_managed_content|clear_managed_content|validate_managed_content|ensure_not_protected|AIMAMI_CUSTOM_INSTRUCTIONS)\b/g,
  "marker、解析、保护状态和内容组合必须在 core",
);
rejectPattern(
  "repository 使用 IPC DTO",
  files.repository,
  repository,
  /\bCustomInstruction(?:StatePayload|PreviewPayload|CurrentState|ProtectionState|HistoryEntry)\b/g,
  "repository 不得组装前后端 DTO",
);
rejectPattern(
  "repository 生成时间或随机 ID",
  files.repository,
  repository,
  /\b(current_timestamp|Uuid::new_v4|uuid\s*::)\b/g,
  "history snapshot 的时间和 ID 属于 usecase 事务",
);
rejectPattern(
  "repository 平台或 UI 行为",
  files.repository,
  repository,
  /\b(tauri\s*::|State\s*<|std\s*::\s*process|Command\s*::\s*new|spawn\s*\(|output\s*\(|reqwest|TcpStream|UdpSocket)\b/g,
  "repository 不得执行平台、UI、进程或网络行为",
);
for (const helper of [
  "ensure_storage",
  "global_path",
  "read_global_file",
  "write_global_file",
  "remove_global_file",
  "write_history_snapshot",
  "load_history",
  "find_history_snapshot",
  "trim_history",
]) {
  requirePattern(
    `repository 窄接口 ${helper}`,
    files.repository,
    repository,
    new RegExp(`fn\\s+${helper}\\s*\\(`),
    "repository 必须集中声明全局文件和 history JSON 窄操作",
  );
}
requirePattern(
  "repository history JSON 写入",
  files.repository,
  repository,
  /\bserde_json\s*::\s*to_string_pretty\s*\(/g,
  "history JSON 写入必须由 repository owning",
);
requirePattern(
  "repository history JSON 读取",
  files.repository,
  repository,
  /\bserde_json\s*::\s*from_str\s*::\s*</g,
  "history JSON 读取必须由 repository owning",
);

for (const item of [
  "enum CustomInstructionProtectionState",
  "enum CustomInstructionHistoryAction",
  "struct CustomInstructionCurrentState",
  "struct CustomInstructionHistoryEntry",
  "struct CustomInstructionStatePayload",
  "struct CustomInstructionPreviewPayload",
]) {
  requirePattern(
    `contracts ${item}`,
    files.contracts,
    contracts,
    new RegExp(item.replaceAll(" ", "\\s+")),
    "contracts 必须 owning custom-instructions IPC DTO",
  );
}
rejectPattern(
  "contracts 文件系统、repository 或 Tauri 依赖",
  files.contracts,
  contracts,
  /\b(FileSystemAdapter|Repository|std\s*::\s*fs|read_to_string|write_string|remove_file|read_dir|create_dir_all|tauri\s*::|State\s*<)\b/g,
  "contracts 只声明可序列化 DTO，不得读取文件或依赖 Tauri UI",
);

if (failures.length > 0) {
  console.error("后端 Custom Instructions owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("后端 Custom Instructions owner 校验通过：command 保持薄 adapter，usecase owning apply/clear/rollback 事务，core owning marker/parser/model，repository 只保留全局文件和 history JSON 读写。");
