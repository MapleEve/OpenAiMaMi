import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const evidenceMapFile = join(
  repoRoot,
  "docs",
  "reconstruction",
  "sessions-analytics-current-source-evidence-map.md",
);
const commandFile = join(backendRoot, "commands", "sessions.rs");
const usecaseFile = join(backendRoot, "application", "usecase", "sessions.rs");
const contractsFile = join(backendRoot, "contracts", "sessions.rs");
const parserModFile = join(backendRoot, "core", "parser", "mod.rs");
const sessionAccountParserFile = join(backendRoot, "core", "parser", "session_account.rs");
const repositoryFile = join(backendRoot, "repository", "sessions.rs");
const adapterModFile = join(backendRoot, "repository", "adapter", "mod.rs");
const realFsFile = join(backendRoot, "repository", "adapter", "real_fs.rs");
const fakeFsFile = join(backendRoot, "repository", "adapter", "fake_fs.rs");
const tempFsFile = join(backendRoot, "repository", "adapter", "temp_fs.rs");
const packageFile = join(repoRoot, "package.json");
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

function findFunction(content, name) {
  const pattern = new RegExp(`\\b(?:pub\\s+)?fn\\s+${name}\\s*\\(`, "g");
  const match = pattern.exec(content);
  if (!match) {
    return null;
  }
  return { index: match.index, line: lineNumberAt(content, match.index) };
}

function findFunctionBody(content, functionStart) {
  const openBrace = content.indexOf("{", functionStart);
  if (openBrace === -1) {
    return null;
  }

  let depth = 0;
  for (let cursor = openBrace; cursor < content.length; cursor += 1) {
    if (content[cursor] === "{") {
      depth += 1;
    } else if (content[cursor] === "}") {
      depth -= 1;
      if (depth === 0) {
        return content.slice(openBrace + 1, cursor);
      }
    }
  }
  return null;
}

function requireFunctionBody(content, file, name) {
  const found = findFunction(content, name);
  if (!found) {
    failures.push(`${toRelative(file)} 缺少 ${name} 函数`);
    return "";
  }
  const body = findFunctionBody(content, found.index);
  if (!body) {
    failures.push(`${toRelative(file)}:${found.line} 无法解析 ${name} 函数体`);
    return "";
  }
  return body;
}

function requireStructBody(content, file, name) {
  const pattern = new RegExp(`\\bpub\\s+struct\\s+${name}\\s*\\{`, "g");
  const match = pattern.exec(content);
  if (!match) {
    failures.push(`${toRelative(file)} 缺少 ${name} 结构体`);
    return "";
  }
  const body = findFunctionBody(content, match.index);
  if (!body) {
    failures.push(`${toRelative(file)}:${lineNumberAt(content, match.index)} 无法解析 ${name} 结构体`);
    return "";
  }
  return body;
}

function assertNoPattern(label, body, patterns) {
  for (const pattern of patterns) {
    if (pattern.test(body)) {
      failures.push(`${label} 命中禁止模式 ${pattern}`);
    }
  }
}

function requireTextIncludes(label, file, content, snippets) {
  for (const snippet of snippets) {
    if (!content.includes(snippet)) {
      failures.push(`${toRelative(file)} 缺少 ${label}：${snippet}`);
    }
  }
}

function rejectTextIncludes(label, file, content, snippets, reason) {
  for (const snippet of snippets) {
    if (content.includes(snippet)) {
      failures.push(`${toRelative(file)} 禁止 ${label}：${snippet}，${reason}`);
    }
  }
}

const commandContent = readRequired(commandFile, "sessions command");
const usecaseContent = readRequired(usecaseFile, "sessions usecase");
const contractsContent = readRequired(contractsFile, "sessions contracts");
const parserModContent = readRequired(parserModFile, "parser module registration");
const sessionAccountParserContent = readRequired(sessionAccountParserFile, "ChatGPT session account parser");
const repositoryContent = readRequired(repositoryFile, "sessions repository");
const evidenceMapContent = readRequired(evidenceMapFile, "sessions/analytics current-source evidence map");
const adapterModContent = readRequired(adapterModFile, "repository fs adapter trait");
const realFsContent = readRequired(realFsFile, "real filesystem adapter");
const fakeFsContent = readRequired(fakeFsFile, "fake filesystem adapter");
const tempFsContent = readRequired(tempFsFile, "temp filesystem adapter");
const packageContent = readRequired(packageFile, "package.json");

requireTextIncludes(
  "sessions/analytics current-source evidence map",
  evidenceMapFile,
  evidenceMapContent,
  [
    "# sessions/analytics current-source 证据映射",
    "`load_sessions`",
    "`delete_sessions`",
    "`load_session_analytics`",
    "`import_chatgpt_session_account`",
    "公开 session 文件事实",
    "payload/cwd",
    "parent_thread_id",
    "agent_nickname",
    "agent_role",
    "payload/role",
    "turn_count",
    "FileSystemAdapter",
    "不恢复 SQLite/rusqlite 索引事务",
    "不声明 ChatGPT session account 导入",
    "只读解析 + 强类型待处理边界",
    "`account_key`",
    "`email`",
    "`plan`",
    "`refresh_token_placeholder`",
    "不复制 access token、refresh token 或 id token 原文",
    "不恢复 refresh token 持久化",
    "不关闭 raw/internal gate",
    "不声明 `full_leaf_100`、`gate_accepted` 或 `implementation_use` 完成",
    "不声明跨平台手工验收",
    "scripts/validate-backend-sessions-owner.mjs",
  ],
);
rejectTextIncludes(
  "越界完成声明",
  evidenceMapFile,
  evidenceMapContent,
  [
    "闭源 token analytics 已恢复",
    "真实运行时统计口径已恢复",
    "SQLite/rusqlite 索引事务已恢复",
    "ChatGPT session account 导入已恢复",
    "registry/auth/snapshot 写入已恢复",
    "refresh token 持久化已恢复",
    "raw/internal gate 已关闭",
    "full_leaf_100 完成",
    "gate_accepted 完成",
    "implementation_use 完成",
    "跨平台手工验收已完成",
    "整仓 100% leaf 完成",
  ],
  "current-source evidence map 只能记录公开文件事实和 pending 边界",
);

const commandLoadBody = requireFunctionBody(commandContent, commandFile, "load_sessions");
assertNoPattern("commands/sessions.rs load_sessions", commandLoadBody, [
  /\bstd::fs\b/,
  /\bread_dir\s*\(/,
  /\bmetadata\s*\(/,
  /\bread_to_string\s*\(/,
  /\bwrite_string\s*\(/,
  /\bremove_file\s*\(/,
  /\bremove_dir_all\s*\(/,
]);
if (!/\busecase::sessions::load_sessions\s*\(&repo\)/.test(commandLoadBody)) {
  failures.push("commands/sessions.rs load_sessions 必须只调用 usecase::sessions::load_sessions(&repo)");
}

const usecaseLoadBody = requireFunctionBody(usecaseContent, usecaseFile, "load_sessions");
if (!/\bsessions_repository::load_session_file_metadata\s*\(\s*repo\s*\)/.test(usecaseLoadBody)) {
  failures.push("application/usecase/sessions.rs load_sessions 缺少 repository helper 调用证据");
}
if (!/\brestored_status\s*\(\s*"sessions"\s*,\s*"load_sessions"\s*,\s*BackendEffect::RepositoryRead\s*,?\s*\)/.test(usecaseLoadBody)) {
  failures.push("application/usecase/sessions.rs load_sessions 成功路径必须标记 RepositoryRead");
}
assertNoPattern("application/usecase/sessions.rs load_sessions", usecaseLoadBody, [
  /\bstd::fs\b/,
  /\bread_dir\s*\(/,
  /\bread_to_string\s*\(/,
  /\bremove_file\s*\(/,
  /\bremove_dir_all\s*\(/,
  /\bwrite_string\s*\(/,
]);
if (!/sort_by\s*\(/.test(usecaseLoadBody) || !/updated_at/.test(usecaseLoadBody) || !/id\.cmp/.test(usecaseLoadBody)) {
  failures.push("application/usecase/sessions.rs load_sessions 缺少 updated_at 降序、id 升序的稳定排序证据");
}

const repositoryLoadBody = requireFunctionBody(
  repositoryContent,
  repositoryFile,
  "load_session_file_metadata",
);
if (!/repo\.paths\(\)\.sessions_dir/.test(repositoryLoadBody)) {
  failures.push("repository/sessions.rs load_session_file_metadata 必须 owning sessions_dir 读取");
}
if (!/\.read_dir\s*\(\s*&repo\.paths\(\)\.sessions_dir\s*\)/.test(repositoryLoadBody)) {
  failures.push("repository/sessions.rs load_session_file_metadata 必须通过 repository fs read_dir 读取目录清单");
}
if (/file_size\s*:\s*0\b/.test(repositoryLoadBody)) {
  failures.push("repository/sessions.rs load_session_file_metadata 不得将 file_size 固定为 0");
}
if (!/repo\.fs\(\)\.file_size_bytes\s*\(\s*&entry\.path\s*\)/.test(repositoryLoadBody)) {
  failures.push("repository/sessions.rs load_session_file_metadata 必须通过 FS adapter 读取 file_size");
}
if (/created_at\s*:\s*None\b/.test(repositoryLoadBody)) {
  failures.push("repository/sessions.rs load_session_file_metadata 不得将 created_at 固定为 None");
}
if (!/created_at\s*:\s*repo\.fs\(\)\.created_unix_seconds\s*\(\s*&entry\.path\s*\)/.test(repositoryLoadBody)) {
  failures.push("repository/sessions.rs load_session_file_metadata 必须通过 FS adapter 读取 created_at");
}
if (!/load_session_jsonl_facts\s*\(\s*repo\s*,\s*&entry\.path\s*\)/.test(repositoryLoadBody)) {
  failures.push("repository/sessions.rs load_session_file_metadata 必须聚合 rollout/session JSONL 公开文件事实");
}
assertNoPattern("repository/sessions.rs load_session_file_metadata", repositoryLoadBody, [
  /\bwrite_string\s*\(/,
  /\bcreate_dir_all\s*\(/,
  /\bremove_file\s*\(/,
  /\bremove_dir_all\s*\(/,
  /\bcopy_file\s*\(/,
  /\brename\s*\(/,
  /\brusqlite\b/,
  /\bsqlite\b/,
  /\bcodex-global-state\.json\b/,
]);

const repositoryJsonlBody = requireFunctionBody(
  repositoryContent,
  repositoryFile,
  "load_session_jsonl_facts",
);
if (!/repo\.fs\(\)\.read_to_string\s*\(\s*path\s*\)/.test(repositoryJsonlBody)) {
  failures.push("repository/sessions.rs load_session_jsonl_facts 必须通过 FS adapter 只读 JSONL");
}
if (!/serde_json::from_str\s*::<\s*Value\s*>/.test(repositoryJsonlBody)) {
  failures.push("repository/sessions.rs load_session_jsonl_facts 必须按 JSONL 解析公开 payload 字段");
}
assertNoPattern("repository/sessions.rs load_session_jsonl_facts", repositoryJsonlBody, [
  /\bwrite_string\s*\(/,
  /\bcreate_dir_all\s*\(/,
  /\bremove_file\s*\(/,
  /\bremove_dir_all\s*\(/,
  /\bcopy_file\s*\(/,
  /\brename\s*\(/,
  /\brusqlite\b/,
  /\bsqlite\b/,
  /\bcodex-global-state\.json\b/,
]);

if (!/\/payload\/cwd/.test(repositoryContent)) {
  failures.push("repository/sessions.rs 缺少 /payload/cwd 项目路径读取证据");
}
if (!/\/payload\/source\/subagent\/thread_spawn\/parent_thread_id/.test(repositoryContent)) {
  failures.push("repository/sessions.rs 缺少 subagent parent_thread_id 读取证据");
}
if (!/\/payload\/agent_nickname/.test(repositoryContent) || !/\/payload\/agent_role/.test(repositoryContent)) {
  failures.push("repository/sessions.rs 缺少 agent_nickname / agent_role 读取证据");
}
if (!/turn_count/.test(repositoryContent) || !/\/payload\/role/.test(repositoryContent)) {
  failures.push("repository/sessions.rs 缺少基于 JSONL role 行的 turn_count 读取证据");
}

const repositoryDeleteBody = requireFunctionBody(
  repositoryContent,
  repositoryFile,
  "delete_session_files",
);
if (!/\bload_session_file_metadata\s*\(\s*repo\s*\)/.test(repositoryDeleteBody)) {
  failures.push("repository/sessions.rs delete_session_files 必须先通过 load_session_file_metadata 获取可删除文件");
}
if (!/repo\.fs\(\)\.remove_file\s*\(\s*&metadata\.path\s*\)/.test(repositoryDeleteBody)) {
  failures.push("repository/sessions.rs delete_session_files 必须通过 FS adapter 删除已扫描到的 metadata.path");
}
assertNoPattern("repository/sessions.rs delete_session_files", repositoryDeleteBody, [
  /\bstd::fs\b/,
  /\bread_to_string\s*\(/,
  /\bwrite_string\s*\(/,
  /\bcreate_dir_all\s*\(/,
  /\bremove_dir_all\s*\(/,
  /\bcopy_file\s*\(/,
  /\brename\s*\(/,
]);

if (!/fn\s+created_unix_seconds\s*\(\s*&self\s*,\s*path\s*:\s*&Path\s*\)\s*->\s*Option\s*<\s*i64\s*>/.test(adapterModContent)) {
  failures.push("repository/adapter/mod.rs FileSystemAdapter 缺少 created_unix_seconds");
}

const realCreatedBody = requireFunctionBody(realFsContent, realFsFile, "created_unix_seconds");
if (!/std::fs::metadata\s*\(\s*path\s*\)/.test(realCreatedBody) || !/\.created\s*\(\s*\)/.test(realCreatedBody)) {
  failures.push("repository/adapter/real_fs.rs created_unix_seconds 必须使用 std::fs::metadata(path).created()");
}

const fakeCreatedBody = requireFunctionBody(fakeFsContent, fakeFsFile, "created_unix_seconds");
if (!fakeCreatedBody.trim()) {
  failures.push("repository/adapter/fake_fs.rs 缺少可替换的 created_unix_seconds 实现");
}

const tempCreatedBody = requireFunctionBody(tempFsContent, tempFsFile, "created_unix_seconds");
if (!/self\.inner\.created_unix_seconds\s*\(\s*&self\.storage_path\s*\(\s*path\s*\)\s*\)/.test(tempCreatedBody)) {
  failures.push("repository/adapter/temp_fs.rs created_unix_seconds 必须通过 storage_path 委托");
}

const usecaseDeleteBody = requireFunctionBody(usecaseContent, usecaseFile, "delete_sessions");
if (!/\bsessions_repository::delete_session_files\s*\(\s*repo\s*,\s*&ids\s*\)/.test(usecaseDeleteBody)) {
  failures.push("application/usecase/sessions.rs delete_sessions 必须通过 repository delete_session_files 删除会话文件");
}
if (!/\brestored_status\s*\(\s*"sessions"\s*,\s*"delete_sessions"\s*,\s*BackendEffect::RepositoryWrite\s*,?\s*\)/.test(usecaseDeleteBody)) {
  failures.push("application/usecase/sessions.rs delete_sessions 成功路径必须返回 restored_status");
}
if (!/\brepository_write_error_status\s*\(\s*"sessions"\s*,\s*"delete_sessions"\s*,/.test(usecaseDeleteBody)) {
  failures.push("application/usecase/sessions.rs delete_sessions 仓储错误路径必须保持 RepositoryWrite 状态，不得降级为 pending");
}
assertNoPattern("application/usecase/sessions.rs delete_sessions", usecaseDeleteBody, [
  /\bstd::fs\b/,
  /\bpending_status\s*\(/,
  /\bwrite_string\s*\(/,
  /\bcreate_dir_all\s*\(/,
  /\bremove_file\s*\(/,
  /\bremove_dir_all\s*\(/,
  /\bcopy_file\s*\(/,
  /\brename\s*\(/,
  /\bread_to_string\s*\(/,
]);

const repositoryWriteErrorStatusBody = requireFunctionBody(
  usecaseContent,
  usecaseFile,
  "repository_write_error_status",
);
if (!/\brestored_status\s*\(\s*module\s*,\s*command\s*,\s*BackendEffect::RepositoryWrite\s*\)/.test(repositoryWriteErrorStatusBody)) {
  failures.push("application/usecase/sessions.rs repository_write_error_status 必须复用 restored_status 的 RepositoryWrite 边界");
}
if (!/status\.note\s*=\s*note\.to_string\(\)/.test(repositoryWriteErrorStatusBody)) {
  failures.push("application/usecase/sessions.rs repository_write_error_status 必须保留仓储错误的中文诊断 note");
}

const usecaseSessionAnalyticsBody = requireFunctionBody(usecaseContent, usecaseFile, "load_session_analytics");
if (!/\banalytics_repository::load_public_session_facts\s*\(\s*repo\s*\)/.test(usecaseSessionAnalyticsBody)) {
  failures.push("application/usecase/sessions.rs load_session_analytics 必须通过 analytics repository 读取公开 session 文件事实");
}
if (!/\baggregate_public_usage_for_range\s*\(/.test(usecaseSessionAnalyticsBody)) {
  failures.push("application/usecase/sessions.rs load_session_analytics 必须通过 core analytics range aggregate 聚合公开事实");
}
if (!/\brestored_status\s*\(\s*"sessions"\s*,\s*"load_session_analytics"\s*,\s*BackendEffect::RepositoryRead\s*,?\s*\)/.test(usecaseSessionAnalyticsBody)) {
  failures.push("application/usecase/sessions.rs load_session_analytics 成功路径必须返回 restored_status");
}
if (!/avg_turns\s*:\s*aggregate\.avg_turns/.test(usecaseSessionAnalyticsBody)) {
  failures.push("application/usecase/sessions.rs load_session_analytics 必须从 core 聚合的 JSONL turn_count 映射 avg_turns");
}
assertNoPattern("application/usecase/sessions.rs load_session_analytics", usecaseSessionAnalyticsBody, [
  /\bstd::fs\b/,
  /\brepo\s*\.\s*fs\s*\(/,
  /\bsessions_repository::/ ,
  /\bwrite_string\s*\(/,
  /\bcreate_dir_all\s*\(/,
  /\bremove_file\s*\(/,
  /\bremove_dir_all\s*\(/,
  /\bcopy_file\s*\(/,
  /\brename\s*\(/,
  /\bread_to_string\s*\(/,
]);

if (!/\bpub\s+mod\s+session_account\s*;/.test(parserModContent)) {
  failures.push("core/parser/mod.rs 必须注册 session_account parser 模块");
}

const sessionAccountParserBody = requireFunctionBody(
  sessionAccountParserContent,
  sessionAccountParserFile,
  "parse_chatgpt_session_account",
);
if (!/\bserde_json::from_str\s*::<\s*Value\s*>/.test(sessionAccountParserBody)) {
  failures.push("core/parser/session_account.rs 必须只读解析 session JSON");
}
for (const field of [
  "ParsedChatGptSessionAccount",
  "account_key",
  "email",
  "plan",
  "refresh_token_placeholder",
]) {
  if (!sessionAccountParserContent.includes(field)) {
    failures.push(`core/parser/session_account.rs 缺少 ${field} 强类型解析字段`);
  }
}
for (const alias of [
  "chatgptUserId",
  "chatgptPlanType",
  "providerSpecificData",
  "sensitive-field",
]) {
  if (!sessionAccountParserContent.includes(alias)) {
    failures.push(`core/parser/session_account.rs 缺少 ${alias} 只读字段别名`);
  }
}
assertNoPattern("core/parser/session_account.rs parse_chatgpt_session_account", sessionAccountParserBody, [
  /\bstd::fs\b/,
  /\bwrite_string\s*\(/,
  /\bcreate_dir_all\s*\(/,
  /\bremove_file\s*\(/,
  /\bremove_dir_all\s*\(/,
  /\bcopy_file\s*\(/,
  /\brename\s*\(/,
]);

const accountSessionImportPayloadBody = requireStructBody(
  contractsContent,
  contractsFile,
  "AccountSessionImportPayload",
);
for (const field of ["backend_status", "account_key", "email", "plan", "refresh_token_placeholder", "note"]) {
  if (!new RegExp(`\\b${field}\\b`).test(accountSessionImportPayloadBody)) {
    failures.push(`contracts/sessions.rs AccountSessionImportPayload 缺少 ${field}`);
  }
}
assertNoPattern("contracts/sessions.rs AccountSessionImportPayload token 原文", accountSessionImportPayloadBody, [
  /\baccess_token\b/,
  /\baccessToken\b/,
  /\brefresh_token\s*:/,
  /\brefreshToken\b/,
  /\bid_token\b/,
  /\bidToken\b/,
  /\btoken\s*:/,
]);

const importChatGptSessionAccountBody = requireFunctionBody(
  usecaseContent,
  usecaseFile,
  "import_chatgpt_session_account",
);
if (!/\bparse_chatgpt_session_account\s*\(\s*&?session_json\s*\)/.test(importChatGptSessionAccountBody)) {
  failures.push("application/usecase/sessions.rs import_chatgpt_session_account 必须调用 core parser 做只读解析");
}
if (!/\bpending_status\s*\(\s*"sessions"\s*,\s*"import_chatgpt_session_account"\s*,/.test(importChatGptSessionAccountBody)) {
  failures.push("application/usecase/sessions.rs import_chatgpt_session_account backend_status 必须保持 pending");
}
for (const field of ["account_key", "email", "plan", "refresh_token_placeholder", "note"]) {
  if (!new RegExp(`\\b${field}\\b`).test(importChatGptSessionAccountBody)) {
    failures.push(`application/usecase/sessions.rs import_chatgpt_session_account payload 缺少 ${field}`);
  }
}
assertNoPattern("application/usecase/sessions.rs import_chatgpt_session_account", importChatGptSessionAccountBody, [
  /\bstd::fs\b/,
  /\bsessions_repository::/,
  /\baccounts_repository::/,
  /\bwrite_string\s*\(/,
  /\bcreate_dir_all\s*\(/,
  /\bremove_file\s*\(/,
  /\bremove_dir_all\s*\(/,
  /\bcopy_file\s*\(/,
  /\brename\s*\(/,
  /\bread_to_string\s*\(/,
]);
assertNoPattern("application/usecase/sessions.rs import_chatgpt_session_account payload token 原文", importChatGptSessionAccountBody, [
  /\baccess_token\b/,
  /\baccessToken\b/,
  /\brefresh_token\s*:/,
  /\brefreshToken\b/,
  /\bid_token\b/,
  /\bidToken\b/,
  /\btoken\s*:/,
]);

if (!/"validate:backend-sessions-owner"\s*:\s*"node scripts\/validate-backend-sessions-owner\.mjs"/.test(packageContent)) {
  failures.push("package.json 缺少 validate:backend-sessions-owner 脚本");
}

if (failures.length > 0) {
  console.error("FAIL 后端 sessions owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端 sessions owner 校验通过：load_sessions 只读 sessions 文件元数据和 rollout/session JSONL 公开字段，delete_sessions 只通过 repository helper 删除已扫描会话文件，load_session_analytics 只聚合公开 session 文件事实，其他 sessions 动作保持无真实副作用。");
