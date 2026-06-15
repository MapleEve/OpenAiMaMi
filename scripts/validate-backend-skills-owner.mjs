import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const failures = [];

const files = {
  command: join(repoRoot, "src-tauri", "src", "commands", "skills.rs"),
  usecase: join(repoRoot, "src-tauri", "src", "application", "usecase", "skills.rs"),
  repository: join(repoRoot, "src-tauri", "src", "repository", "skills.rs"),
  pathGuard: join(repoRoot, "src-tauri", "src", "repository", "path_guard.rs"),
  repositoryMod: join(repoRoot, "src-tauri", "src", "repository", "mod.rs"),
};

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

const command = stripRustComments(readRequired(files.command, "skills command"));
const usecase = stripRustComments(readRequired(files.usecase, "skills usecase"));
const repository = stripRustComments(readRequired(files.repository, "skills repository"));
const pathGuard = stripRustComments(readRequired(files.pathGuard, "path guard"));
const repositoryMod = stripRustComments(readRequired(files.repositoryMod, "repository mod"));

for (const [label, path] of Object.entries(files)) {
  const content = readRequired(path, label);
  rejectPattern(
    "禁止公开标识",
    path,
    content,
    new RegExp(`${["Codex", "Manager"].join("")}|\\b${["C", "5"].join("")}\\b|${["lobe", "hub"].join("")}`, "gi"),
    "后端 skills owner 切片不得写入禁止公开标识",
  );
}

for (const [name, content] of [
  ["command", command],
  ["usecase", usecase],
]) {
  const path = files[name];
  rejectPattern(
    `${name} 直接文件副作用`,
    path,
    content,
    /\b(read_to_string|write_string|copy_file|remove_dir_all|remove_file|create_dir_all|rename)\s*\(/g,
    "command/usecase 只能编排 repository helper，不能直接承担技能文件事务",
  );
  rejectPattern(
    `${name} 直接使用 PathGuard`,
    path,
    content,
    /\bPathGuard\b/g,
    "路径安全由 repository/path_guard owning，usecase 不直接校验文件路径",
  );
  rejectPattern(
    `${name} 执行 skill 或外部进程`,
    path,
    content,
    /\b(std\s*::\s*process|Command\s*::\s*new|spawn\s*\(|output\s*\(|status\s*\()/g,
    "skills 后端只做文件导入、备份和恢复，不执行 skill",
  );
}

requirePattern("调用 skills usecase", files.command, command, /usecase\s*::\s*skills\s*::/g, "command 必须保持薄 IPC adapter");
requirePattern("调用 repository load_installed", files.usecase, usecase, /skills\s*::\s*load_installed\s*\(/g, "usecase 必须通过 repository 读取技能");
requirePattern("调用 repository import_skill", files.usecase, usecase, /skills\s*::\s*import_skill\s*\(/g, "usecase 必须通过 repository 导入技能");
requirePattern("调用 repository restore_backup", files.usecase, usecase, /skills\s*::\s*restore_backup\s*\(/g, "usecase 必须通过 repository 恢复备份");
requirePattern("remove_skill 读取安装快照", files.usecase, usecase, /load_installed\s*\(\s*repo\.fs\(\)\s*,\s*&repo\.paths\(\)\.skills_dir\s*\)/g, "remove_skill 用户动作事务必须由 usecase 读取当前安装快照");
requirePattern("remove_skill 选择目标技能", files.usecase, usecase, /\.find\s*\(\s*\|skill\|\s*skill\.id\s*==\s*id\s*\)/g, "usecase 必须 owning 删除目标选择和 NotFound 语义");
requirePattern("remove_skill 备份目标技能", files.usecase, usecase, /skills\s*::\s*backup_installed_skill\s*\(/g, "删除前备份必须由 usecase 编排 repository 窄文件操作");
requirePattern("remove_skill 删除目标目录", files.usecase, usecase, /skills\s*::\s*delete_installed_skill_dir\s*\(/g, "删除目录只能通过 repository 窄文件操作完成");
requirePattern("remove_skill 重新计数", files.usecase, usecase, /remaining_installed_count[\s\S]*load_installed\s*\(/g, "删除后的安装数量必须由 usecase 重新读取文件状态组装 DTO");
requirePattern("delete_backup 删除备份目录", files.usecase, usecase, /skills\s*::\s*delete_backup_dir\s*\(/g, "备份删除动作必须由 usecase 编排 repository 窄文件操作");
requirePattern("delete_backup 重新计数", files.usecase, usecase, /remaining_backup_count[\s\S]*load_backups\s*\(/g, "备份删除后的数量必须由 usecase 重新读取文件状态组装 DTO");

requirePattern("path_guard 模块注册", files.repositoryMod, repositoryMod, /\bpub\s+mod\s+path_guard\s*;/g, "repository 必须公开路径安全边界模块");
requirePattern("PathGuard 类型", files.pathGuard, pathGuard, /\bstruct\s+PathGuard\b/g, "路径安全门面必须存在");
for (const helper of [
  "safe_relative",
  "safe_single_component",
  "safe_child",
  "ensure_descendant",
  "relative_to_root",
]) {
  requirePattern(
    `PathGuard::${helper}`,
    files.pathGuard,
    pathGuard,
    new RegExp(`fn\\s+${helper}\\s*\\(`),
    "路径安全 helper 必须存在",
  );
}
rejectPattern(
  "PathGuard 触碰真实文件系统",
  files.pathGuard,
  pathGuard,
  /\b(std\s*::\s*fs|FileSystemAdapter|read_to_string|write_string|copy_file|remove_dir_all)\b/g,
  "PathGuard 只能做词法路径和 containment 校验",
);

requirePattern("repository 引用 PathGuard", files.repository, repository, /\bPathGuard::/g, "skills repository 必须使用路径安全门面");
for (const helper of [
  "safe_relative",
  "safe_single_component",
  "safe_child",
  "ensure_descendant",
  "relative_to_root",
]) {
  requirePattern(
    `repository 使用 ${helper}`,
    files.repository,
    repository,
    new RegExp(`PathGuard::${helper}\\s*\\(`),
    "导入、删除、恢复、备份和扫描路径必须经过 guard",
  );
}

for (const helper of [
  "load_installed",
  "load_backups",
  "import_skill",
  "restore_backup",
  "backup_installed_skill",
  "delete_installed_skill_dir",
  "delete_backup_dir",
  "resolve_installed_skill_dir",
  "copy_dir_all_checked",
  "backup_skill_directory",
]) {
  requirePattern(
    `skills repository ${helper}`,
    files.repository,
    repository,
    new RegExp(`fn\\s+${helper}\\s*\\(`),
    "skills repository 必须集中声明文件事务 helper",
  );
}

rejectPattern(
  "repository remove_skill 用户动作事务",
  files.repository,
  repository,
  /\bpub\s+fn\s+remove_skill\s*\(/g,
  "remove_skill 必须由 application/usecase owning，repository 只能暴露备份和删除目录窄操作",
);
rejectPattern(
  "repository delete_backup 用户动作事务",
  files.repository,
  repository,
  /\bpub\s+fn\s+delete_backup\s*\(/g,
  "delete_skill_backup 必须由 application/usecase owning，repository 只能删除备份目录并由 usecase 重新计数",
);
requirePattern(
  "备份安装技能 helper 使用安装目录解析",
  files.repository,
  repository,
  /backup_installed_skill[\s\S]*resolve_installed_skill_dir\s*\(/g,
  "repository 备份文件操作必须复用受保护的安装目录解析",
);
requirePattern(
  "删除安装目录 helper 使用 containment",
  files.repository,
  repository,
  /delete_installed_skill_dir[\s\S]*ensure_descendant\s*\(/g,
  "repository 删除安装目录必须校验目标仍在技能根目录内",
);
requirePattern(
  "删除备份目录 helper 使用单片段 ID",
  files.repository,
  repository,
  /delete_backup_dir[\s\S]*safe_single_component\s*\(\s*backup_id/g,
  "repository 删除备份目录不得信任原始 backup id",
);

requirePattern("递归复制源 containment", files.repository, repository, /ensure_descendant\s*\(\s*source_root/g, "copy_dir_all_checked 必须校验递归源在源根目录内");
requirePattern("递归复制目标 containment", files.repository, repository, /ensure_descendant\s*\(\s*target_root/g, "copy_dir_all_checked 必须校验递归目标在目标根目录内");
requirePattern("备份 ID 单片段校验", files.repository, repository, /safe_single_component\s*\(\s*backup_id/g, "backup id 不得允许路径逃逸");
requirePattern("metadata relativePath 校验", files.repository, repository, /safe_relative\s*\(\s*&meta\.relative_path/g, "备份 metadata relativePath 不得直接信任");

rejectPattern(
  "repository 执行 skill 或外部进程",
  files.repository,
  repository,
  /\b(std\s*::\s*process|Command\s*::\s*new|spawn\s*\(|output\s*\(|status\s*\()/g,
  "skills repository 只做文件导入、备份和恢复，不执行 skill",
);

if (failures.length > 0) {
  console.error("后端 Skills owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("后端 Skills owner 校验通过：remove/delete backup 动作事务由 usecase owning，repository 保持路径安全和窄文件操作边界。");
