import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const files = {
  commands: join(backendRoot, "commands", "analytics.rs"),
  usecase: join(backendRoot, "application", "usecase", "analytics.rs"),
  analyticsRepository: join(backendRoot, "repository", "analytics.rs"),
  analyticsContract: join(backendRoot, "contracts", "analytics.rs"),
  quotaRepository: join(backendRoot, "repository", "quota.rs"),
  repositoryPaths: join(backendRoot, "repository", "paths.rs"),
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
  "usage 聚合必须由 core/model/analytics.rs owning",
);
requirePattern(
  "usage bootstrap cache 写回",
  files.usecase,
  usageBody,
  /bootstrap\s*::\s*store_bootstrap_usage_analytics\s*\(/,
  "load_usage_analytics 必须保留 bootstrap cache 写回",
);

const quotaBody = requireFunctionBody(code.usecase.content, files.usecase, "load_quota_history");
const quotaCommandBody = requireFunctionBody(
  code.commands.content,
  files.commands,
  "load_quota_history",
);
requirePattern(
  "quota command 调用 usecase",
  files.commands,
  quotaCommandBody,
  /usecase\s*::\s*analytics\s*::\s*load_quota_history\s*\(\s*&repo\s*,\s*account_key\s*\)/,
  "command 层只能调度 usecase，不得直接读取 repository 或业务文件",
);
requirePattern(
  "quota command 映射脱敏错误",
  files.commands,
  quotaCommandBody,
  /map_err\s*\([\s\S]*error\.code\(\)[\s\S]*error\.sanitized_message\(\)/,
  "command 层必须保留诊断 code 和脱敏语义",
);
rejectPattern(
  "quota command 直接文件或仓储操作",
  files.commands,
  raw.commands.content,
  quotaCommandBody,
  /\b(repo\s*\.\s*fs\s*\(|read_to_string|write_string|quota_repository\s*::|std\s*::\s*fs|tokio\s*::\s*fs)\b/g,
  "command 层只能做 Tauri 参数、state 获取、usecase 调度和 envelope",
);
requirePattern(
  "quota usecase 调用 quota repository",
  files.usecase,
  quotaBody,
  /quota_repository\s*::\s*load_public_quota_history\s*\(\s*repo\s*,[\s\S]*\?/,
  "配额历史公开 JSONL 事实必须由 repository owner 提供并传播读取错误",
);
requirePattern(
  "quota analytics restored 状态",
  files.usecase,
  quotaBody,
  /restored_status\s*\(\s*"analytics"\s*,\s*"load_quota_history"\s*,\s*BackendEffect::NoOp\s*\)/,
  "load_quota_history 必须恢复为公开 quota-history JSONL 点位",
);

const toolBody = requireFunctionBody(code.usecase.content, files.usecase, "load_tool_analytics");
requirePattern(
  "tool usecase 调用 analytics repository",
  files.usecase,
  toolBody,
  /analytics_repository\s*::\s*load_public_tool_call_facts\s*\(\s*repo\s*\)/,
  "公开 function_call 事实必须由 repository owner 提供",
);
requirePattern(
  "tool usecase 调用 core aggregate",
  files.usecase,
  toolBody,
  /aggregate_public_tool_analytics\s*\(/,
  "工具 range、分类和 topTools 聚合必须由 core/model/analytics.rs owning",
);
requirePattern(
  "tool analytics restored 状态",
  files.usecase,
  toolBody,
  /restored_status\s*\(\s*"analytics"\s*,\s*"load_tool_analytics"\s*,\s*BackendEffect::NoOp\s*\)/,
  "load_tool_analytics 只恢复公开 rollout JSONL function_call 事实",
);
requirePattern(
  "tool usecase 映射 topTools path",
  files.usecase,
  toolBody,
  /ToolRankItemPayload\s*\{[\s\S]*path\s*:\s*item\.path[\s\S]*count\s*:\s*item\.count/,
  "topTools 行必须暴露证据字段 path/count",
);

const changeBody = requireFunctionBody(code.usecase.content, files.usecase, "load_change_analytics");
requirePattern(
  "change usecase 调用 analytics repository",
  files.usecase,
  changeBody,
  /analytics_repository\s*::\s*load_public_change_command_facts\s*\(\s*repo\s*\)/,
  "公开 command 事实必须由 repository owner 提供",
);
requirePattern(
  "change usecase 调用 core aggregate",
  files.usecase,
  changeBody,
  /aggregate_public_change_analytics\s*\(/,
  "变更分析 range 和命令分类必须由 core/model/analytics.rs owning",
);
requirePattern(
  "change analytics restored status",
  files.usecase,
  changeBody,
  /restored_status\s*\(\s*"analytics"\s*,\s*"load_change_analytics"\s*,\s*BackendEffect::NoOp\s*\)/,
  "load_change_analytics 必须保持为公开 rollout JSONL command 事实恢复",
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
  ["PublicCommandFact", /\bstruct\s+PublicCommandFact\b/],
  ["PublicToolCallFact", /\bstruct\s+PublicToolCallFact\b/],
  ["PublicToolAggregate", /\bstruct\s+PublicToolAggregate\b/],
  ["PublicChangeAggregate", /\bstruct\s+PublicChangeAggregate\b/],
  ["PublicUsageAggregate", /\bstruct\s+PublicUsageAggregate\b/],
  ["PublicUsageDayBucket", /\bstruct\s+PublicUsageDayBucket\b/],
  ["PublicQuotaHistory", /\bstruct\s+PublicQuotaHistory\b/],
  ["aggregate_public_usage", /\bfn\s+aggregate_public_usage\s*\(/],
  ["public_usage_window", /\bfn\s+public_usage_window\s*\(/],
  ["estimate_active_minutes", /\bfn\s+estimate_active_minutes\s*\(/],
  ["aggregate_public_tool_analytics", /\bfn\s+aggregate_public_tool_analytics\s*\(/],
  ["classify_public_tool_call", /\bfn\s+classify_public_tool_call\s*\(/],
  ["aggregate_public_change_analytics", /\bfn\s+aggregate_public_change_analytics\s*\(/],
  ["classify_public_command", /\bfn\s+classify_public_command\s*\(/],
]) {
  requirePattern(label, files.coreModel, code.coreModel.content, pattern, "core 必须 owning analytics 事实和聚合模型");
}
for (const [label, pattern] of [
  ["usage 365 天窗口", /0\.\.365[\s\S]*date_key/],
  ["usage 365 天窗口起点", /saturating_sub\(\s*364\s*\*\s*24\s*\*\s*60\s*\*\s*60\s*\)/],
  ["usage 缺失日期补零", /by_day\.get\(&date\)\.cloned\(\)\.unwrap_or_default\(\)/],
  ["usage log activity level", /\.ln\(\)[\s\S]*\*\s*4\.0[\s\S]*\.clamp\(\s*1\.0\s*,\s*4\.0\s*\)/],
  ["usage active minutes 301 秒分段", /gap\s*>=\s*301[\s\S]*active_minutes\.min\(\s*1_440\s*\)/],
]) {
  requirePattern(label, files.coreModel, code.coreModel.content, pattern, "usage analytics 必须覆盖 365 天窗口、补零、log activityLevel 和活跃分钟估算");
}
for (const [label, pattern] of [
  ["write classifier table", /\bWRITE_COMMAND_PATTERNS\b[\s\S]*git commit[\s\S]*cargo add/],
  ["read classifier table", /\bREAD_COMMAND_PATTERNS\b[\s\S]*git status[\s\S]*cargo check/],
  ["tool search classifier table", /\bSEARCH_TOOL_PATTERNS\b[\s\S]*search[\s\S]*query[\s\S]*list[\s\S]*read[\s\S]*view[\s\S]*resolve[\s\S]*fetch/],
]) {
  requirePattern(label, files.coreModel, code.coreModel.content, pattern, "core 必须 owning 公开分类表");
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
  "domain model 不得依赖 Tauri、Repository 或真实文件系统",
);

requirePattern(
  "tool rank 合同 path 字段",
  files.analyticsContract,
  code.analyticsContract.content,
  /\bstruct\s+ToolRankItemPayload\b[\s\S]*\bpub\s+path\s*:\s*String\b[\s\S]*\bpub\s+count\s*:\s*i32\b/,
  "ToolRankItemPayload 必须暴露公开证据字段 path/count",
);
rejectPattern(
  "tool rank 合同 name 字段",
  files.analyticsContract,
  raw.analyticsContract.content,
  code.analyticsContract.content,
  /\bstruct\s+ToolRankItemPayload\b[\s\S]*\bpub\s+name\s*:\s*String\b/g,
  "ToolRankItemPayload 不得保留无证据支撑的 name/count 形状",
);

requirePattern(
  "analytics repository 读取 session metadata",
  files.analyticsRepository,
  code.analyticsRepository.content,
  /sessions\s*::\s*load_session_file_metadata\s*\(\s*repo\s*\)/,
  "analytics repository 必须从可替换 FS 元数据构造公开 session 事实",
);
requirePattern(
  "analytics repository 读取 change command facts",
  files.analyticsRepository,
  code.analyticsRepository.content,
  /\bpub\s+fn\s+load_public_change_command_facts\s*\(\s*repo\s*:\s*&Repository\s*\)/,
  "analytics repository 必须提供公开 rollout JSONL command 事实",
);
requirePattern(
  "analytics repository 读取 tool call facts",
  files.analyticsRepository,
  code.analyticsRepository.content,
  /\bpub\s+fn\s+load_public_tool_call_facts\s*\(\s*repo\s*:\s*&Repository\s*\)/,
  "analytics repository 必须提供公开 rollout JSONL function_call 事实",
);
for (const [label, pattern] of [
  ["rollout JSONL recursive visitor", /\bfn\s+visit_public_rollout_dir\s*\(/],
  ["tool rollout JSONL recursive visitor", /\bfn\s+visit_public_tool_call_rollout_dir\s*\(/],
  ["rollout filename filter", /\bfile_name\.starts_with\(\s*"rollout-"\s*\)[\s\S]*file_name\.ends_with\(\s*"\.jsonl"\s*\)/],
  ["JSONL read through FS adapter", /repo\s*\.\s*fs\s*\(\s*\)\s*\.read_to_string\s*\(\s*&entry\.path\s*\)/],
  ["serde JSONL parser", /serde_json::from_str\s*::<\s*Value\s*>/],
  ["exec_command filter", /"exec_command"/],
  ["function_call filter", /"function_call"/],
]) {
  requirePattern(label, files.analyticsRepository, code.analyticsRepository.content, pattern, "repository 必须 owning 公开 JSONL 事实解析");
}
requirePattern(
  "sessions repository 使用 FS adapter read_dir",
  files.sessionsRepository,
  code.sessionsRepository.content,
  /repo\s*\.\s*fs\s*\(\s*\)\s*\.read_dir\s*\(\s*&repo\s*\.\s*paths\s*\(\s*\)\s*\.sessions_dir\s*\)/,
  "公开 session 来源必须通过 FileSystemAdapter 读取",
);
requirePattern(
  "sessions repository 提取公开 JSONL 时间戳",
  files.sessionsRepository,
  code.sessionsRepository.content,
  /activity_timestamps\.push\(\s*timestamp\s*\)/,
  "usage analytics 活跃分钟估算只能来自公开 session JSONL 时间戳",
);
requirePattern(
  "repository paths 暴露 quota history 路径",
  files.repositoryPaths,
  code.repositoryPaths.content,
  /quota_history_path\s*:\s*accounts_dir\.join\(\s*"quota-history\.jsonl"\s*\)/,
  "quota history 文件路径必须集中在 RepositoryPaths",
);
requirePattern(
  "quota repository 读取 quota history JSONL",
  files.quotaRepository,
  code.quotaRepository.content,
  /repo\s*\.\s*fs\s*\(\s*\)\s*\.read_to_string\s*\(\s*path\s*\)\s*\?/,
  "quota repository 必须通过可替换 FS 读取 quota-history.jsonl",
);
requirePattern(
  "quota repository 过滤 accountKey",
  files.quotaRepository,
  code.quotaRepository.content,
  /account_filter\.is_some_and[\s\S]*record\.account_key\s*!=\s*filter/,
  "load_quota_history 必须按 accountKey 精确过滤",
);
requirePattern(
  "quota repository 7 天 cutoff",
  files.quotaRepository,
  code.quotaRepository.content,
  /saturating_sub\(\s*7\s*\*\s*24\s*\*\s*60\s*\*\s*60\s*\)/,
  "quota history 必须按证据保留 7 天窗口",
);
requirePattern(
  "quota repository compaction threshold",
  files.quotaRepository,
  code.quotaRepository.content,
  /lines\.len\(\)\s*<\s*2000/,
  "quota history compaction 只在大文件阈值后执行",
);
requirePattern(
  "quota repository compaction write",
  files.quotaRepository,
  code.quotaRepository.content,
  /repo\s*\.\s*fs\s*\(\s*\)\s*\.write_string\s*\(\s*path\s*,\s*&next\s*\)/,
  "quota history compaction 写回必须通过 FileSystemAdapter",
);
rejectPattern(
  "quota repository bootstrap cache fallback",
  files.quotaRepository,
  raw.quotaRepository.content,
  code.quotaRepository.content,
  /load_bootstrap_cache|usage_analytics/g,
  "quota history 已恢复公开 JSONL 点位后不得继续用 bootstrap cache 伪来源",
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

const tokenBody = requireFunctionBody(code.usecase.content, files.usecase, "load_token_analytics");
rejectPattern(
  "token analytics restored 状态",
  files.usecase,
  raw.usecase.content,
  tokenBody,
  /\brestored_status\s*\(|BackendEffect\s*::\s*NoOp/g,
  "token analytics 仍缺少闭源 token 路径证据，不得标记 restored",
);
rejectPattern(
  "token restored 闭环声明",
  files.usecase,
  raw.usecase.content,
  raw.usecase.content,
  /真实\s*token\s*统计闭环|token\s*统计闭环已恢复|restored_status\s*\(\s*"analytics"\s*,\s*"load_token_analytics"/g,
  "本切片不得声明真实 token analytics 闭环",
);

if (failures.length > 0) {
  console.error("FAIL 后端 analytics owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS 后端 analytics owner 校验通过：usecase 无直接文件 IO，repository 通过可替换 FS 提供公开事实，core owning usage/tool/change 聚合；quota history 恢复公开 JSONL 点位，工具分析只恢复公开 function_call 事实，token analytics 未标记 restored。",
);
