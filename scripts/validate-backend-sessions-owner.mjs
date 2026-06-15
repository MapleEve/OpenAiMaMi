import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const commandFile = join(backendRoot, "commands", "sessions.rs");
const usecaseFile = join(backendRoot, "application", "usecase", "sessions.rs");
const repositoryFile = join(backendRoot, "repository", "sessions.rs");
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

function assertNoPattern(label, body, patterns) {
  for (const pattern of patterns) {
    if (pattern.test(body)) {
      failures.push(`${label} 命中禁止模式 ${pattern}`);
    }
  }
}

const commandContent = readRequired(commandFile, "sessions command");
const usecaseContent = readRequired(usecaseFile, "sessions usecase");
const repositoryContent = readRequired(repositoryFile, "sessions repository");
const packageContent = readRequired(packageFile, "package.json");

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
assertNoPattern("repository/sessions.rs load_session_file_metadata", repositoryLoadBody, [
  /\bread_to_string\s*\(/,
  /\bwrite_string\s*\(/,
  /\bcreate_dir_all\s*\(/,
  /\bremove_file\s*\(/,
  /\bremove_dir_all\s*\(/,
  /\bcopy_file\s*\(/,
  /\brename\s*\(/,
]);

for (const name of ["delete_sessions", "import_chatgpt_session_account", "load_session_analytics"]) {
  const body = requireFunctionBody(usecaseContent, usecaseFile, name);
  assertNoPattern(`application/usecase/sessions.rs ${name}`, body, [
    /\bstd::fs\b/,
    /\bsessions_repository::/,
    /\bwrite_string\s*\(/,
    /\bcreate_dir_all\s*\(/,
    /\bremove_file\s*\(/,
    /\bremove_dir_all\s*\(/,
    /\bcopy_file\s*\(/,
    /\brename\s*\(/,
    /\bread_to_string\s*\(/,
  ]);
}

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

console.log("PASS 后端 sessions owner 校验通过：load_sessions 只读 sessions 文件元数据，其他 sessions 动作保持无真实副作用。");
