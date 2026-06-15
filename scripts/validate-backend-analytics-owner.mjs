import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  usecase: join(backendRoot, "application", "usecase", "analytics.rs"),
  analyticsRepository: join(backendRoot, "repository", "analytics.rs"),
  quotaRepository: join(backendRoot, "repository", "quota.rs"),
  sessionsRepository: join(backendRoot, "repository", "sessions.rs"),
  coreModel: join(backendRoot, "core", "model", "analytics.rs"),
  coreModelMod: join(backendRoot, "core", "model", "mod.rs"),
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

function stripRustComments(content) {
  return content
    .replace(/\/\*[\s\S]*?\*\//g, (value) => value.replace(/[^\n]/g, " "))
    .replace(/\/\/.*$/gm, "");
}

function findFunction(content, name) {
  const match = new RegExp(`\\b(?:pub\\s+)?fn\\s+${name}\\s*\\(`, "g").exec(content);
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

function rejectPattern(label, file, original, content, pattern, reason) {
  const matches = [...content.matchAll(pattern)];
  for (const match of matches.slice(0, 3)) {
    failures.push(`${toRelative(file)}:${lineNumberAt(original, match.index ?? 0)} 禁止 ${label}：${reason}`);
  }
  if (matches.length > 3) {
    failures.push(`${toRelative(file)} 还有 ${matches.length - 3} 处 ${label} 未展开`);
  }
}

function requirePattern(label, file, content, pattern, reason) {
  if (!pattern.test(content)) {
    failures.push(`${toRelative(file)} 缺少 ${label}：${reason}`);
  }
}

const raw = Object.fromEntries(
  Object.entries(files).map(([key, path]) => [key, { path, content: readRequired(path, key) }]),
);
const code = Object.fromEntries(
  Object.entries(raw).map(([key, file]) => [key, { ...file, content: stripRustComments(file.content) }]),
);

const usecaseForbiddenIo = [
  /\bstd\s*::\s*fs\b/g,
  /\btokio\s*::\s*fs\b/g,
  /\brepo\s*\.\s*fs\s*\(/g,
  /\bread_dir\s*\(/g,
  /\bread_to_string\s*\(/g,
  /\bwrite_string\s*\(/g,
  /\bcreate_dir_all\s*\(/g,
  /\bremove_file\s*\(/g,
  /\bremove_dir_all\s*\(/g,
];

for (const name of [
  "load_usage_analytics",
  "load_quota_history",
  "load_token_analytics",
  "load_tool_analytics",
  "load_change_analytics",
]) {
  const body = requireFunctionBody(code.usecase.content, files.usecase, name);
  for (const pattern of usecaseForbiddenIo) {
    rejectPattern(
      `usecase 直接文件 IO ${pattern}`,
      files.usecase,
      raw.usecase.content,
      body,
      pattern,
      "analytics usecase 只能编排 repository/core 并组装 payload",
    );
  }
}

const usageBody = requireFunctionBody(code.usecase.content, files.usecase, "load_usage_analytics");
requirePattern(
  "usage usecase 调用 analytics repository",
  files.usecase,
  usageBody,
  /analytics_repository\s*::\s*load_public_session_facts\s*\(\s*repo\s*\)/,
  "公开 session 文件事实必须由 repository owner 提供",
);
requirePattern(
  "usage usecase 调用 core aggregate",
  files.usecase,
  usageBody,
  /aggregate_public_usage\s*\(/,
  "聚合模型必须由 core/model/analytics.rs owning",
);
requirePattern(
  "usage bootstrap cache 写回",
  files.usecase,
  usageBody,
  /bootstrap\s*::\s*store_bootstrap_usage_analytics\s*\(/,
  "load_usage_analytics 必须保留 bootstrap cache 写回",
);

const quotaBody = requireFunctionBody(code.usecase.content, files.usecase, "load_quota_history");
requirePattern(
  "quota usecase 调用 quota repository",
  files.usecase,
  quotaBody,
  /quota_repository\s*::\s*load_public_quota_history\s*\(\s*repo\s*,/,
  "配额历史公开来源探测必须由 repository owner 提供",
);

requirePattern(
  "core analytics 模块导出",
  files.coreModelMod,
  code.coreModelMod.content,
  /\bpub\s+mod\s+analytics\s*;/,
  "core/model/mod.rs 必须导出 analytics 模型",
);
for (const [label, pattern] of [
  ["PublicAnalyticsRange", /\benum\s+PublicAnalyticsRange\b/],
  ["PublicSessionFileFact", /\bstruct\s+PublicSessionFileFact\b/],
  ["PublicUsageAggregate", /\bstruct\s+PublicUsageAggregate\b/],
  ["PublicQuotaHistory", /\bstruct\s+PublicQuotaHistory\b/],
  ["aggregate_public_usage", /\bfn\s+aggregate_public_usage\s*\(/],
]) {
  requirePattern(label, files.coreModel, code.coreModel.content, pattern, "core 必须 owning analytics/quota range 与聚合模型");
}
requirePattern(
  "core 模型公开事实注释",
  files.coreModel,
  raw.coreModel.content,
  /公开可重建的本地文件事实/,
  "模型必须说明只使用公开可重建事实",
);
rejectPattern(
  "core 依赖 Tauri 或真实文件系统",
  files.coreModel,
  raw.coreModel.content,
  code.coreModel.content,
  /\b(tauri\s*::|Repository\b|FileSystemAdapter\b|std\s*::\s*fs|tokio\s*::\s*fs)\b/g,
  "domain model 不得依赖 Tauri、repository 或真实文件系统",
);

requirePattern(
  "analytics repository 读取 session metadata",
  files.analyticsRepository,
  code.analyticsRepository.content,
  /sessions\s*::\s*load_session_file_metadata\s*\(\s*repo\s*\)/,
  "analytics repository 必须从可替换 FS 下的 session 元数据构造公开事实",
);
requirePattern(
  "sessions repository 使用 FS adapter read_dir",
  files.sessionsRepository,
  code.sessionsRepository.content,
  /repo\s*\.\s*fs\s*\(\s*\)\s*\.read_dir\s*\(\s*&repo\s*\.\s*paths\s*\(\s*\)\s*\.sessions_dir\s*\)/,
  "公开 session 来源必须通过 FileSystemAdapter 读取",
);
requirePattern(
  "quota repository 读取 bootstrap cache",
  files.quotaRepository,
  code.quotaRepository.content,
  /bootstrap\s*::\s*load_bootstrap_cache\s*\(\s*repo\s*\)/,
  "quota repository 只能探测可替换 FS 下的 bootstrap cache 来源",
);
for (const file of [raw.analyticsRepository, raw.quotaRepository]) {
  rejectPattern(
    "repository 真实文件系统直连",
    file.path,
    file.content,
    stripRustComments(file.content),
    /\b(std\s*::\s*fs|tokio\s*::\s*fs)\b/g,
    "analytics/quota repository 必须通过 Repository/FileSystemAdapter 边界",
  );
}

for (const name of ["load_token_analytics", "load_tool_analytics", "load_change_analytics"]) {
  const body = requireFunctionBody(code.usecase.content, files.usecase, name);
  rejectPattern(
    `${name} 声明真实统计闭环`,
    files.usecase,
    raw.usecase.content,
    body,
    /\brestored_status\s*\(|BackendEffect\s*::\s*NoOp/g,
    "token/tool/change 仍缺少闭源口径证据，不得标记 restored",
  );
}

rejectPattern(
  "真实 token 统计闭环声明",
  files.usecase,
  raw.usecase.content,
  raw.usecase.content,
  /真实\s*token\s*统计闭环|token\s*统计闭环已恢复|restored_status\s*\(\s*"analytics"\s*,\s*"load_token_analytics"/g,
  "本切片不能声明真实 token 统计闭环",
);

if (failures.length > 0) {
  console.error("FAIL 后端 analytics owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端 analytics owner 校验通过：usecase 无直接文件 IO，repository 通过可替换 FS 来源提供公开事实，core owning range/aggregate 模型，未声明真实 token 统计闭环。");
