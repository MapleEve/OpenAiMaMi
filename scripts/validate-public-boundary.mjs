import { execFileSync } from "node:child_process";
import { existsSync, readdirSync, readFileSync, statSync } from "node:fs";
import { extname, join, relative } from "node:path";

const repoRoot = process.cwd();
const maxTrackedBytes = 5 * 1024 * 1024;
const checks = [];

const forbiddenTrackedExtensions = new Set([
  ".i64",
  ".idb",
  ".zip",
  ".7z",
  ".rar",
  ".tar",
  ".gz",
  ".tgz",
  ".exe",
  ".msi",
  ".dmg",
  ".pkg",
  ".iso",
]);

const rawRoot = join(
  repoRoot,
  "evidence",
  "full-chain",
  "raw",
  "aimami",
  "1.0.9",
);

const rawTextExtensions = new Set([
  ".css",
  ".html",
  ".js",
  ".json",
  ".map",
  ".md",
  ".svg",
  ".txt",
]);

const publishForbiddenTerms = [
  "二维码",
  "付款码",
  "扫码",
  "微信扫码",
  "QR code",
  "QRCode",
];

const repositoryForbiddenPatterns = [
  { label: ["lobe", "hub"].join(""), pattern: new RegExp(["lobe", "hub"].join(""), "gi") },
  {
    label: ["C", "5"].join(""),
    pattern: new RegExp(`(^|[^A-Za-z0-9])${["c", "5"].join("")}([^A-Za-z0-9]|$)`, "gi"),
  },
  {
    label: ["Codex", "Manager"].join(""),
    pattern: new RegExp(["codex", "manager"].join(""), "gi"),
  },
];

const repositoryTextExtensions = new Set([
  ".css",
  ".html",
  ".js",
  ".json",
  ".lock",
  ".md",
  ".mjs",
  ".rs",
  ".svg",
  ".toml",
  ".ts",
  ".tsx",
  ".txt",
  ".yaml",
  ".yml",
]);

const sensitiveContentPatterns = [
  {
    name: "Windows 用户路径",
    pattern: /[A-Za-z]:[\\/]+Users[\\/]+(?!example\b|<)[^\\/\s"'`<>]+/gi,
  },
  {
    name: "macOS 用户路径",
    pattern: /\/Users\/(?!example\b|<)[^/\s"'`<>]+/g,
  },
  {
    name: "Linux 用户路径",
    pattern: /\/home\/(?!example\b|<)[^/\s"'`<>]+/g,
  },
  {
    name: "网络共享路径",
    pattern: /\\\\(?!\\)(?!example\b|localhost\b)[A-Za-z0-9._$-]+\\[A-Za-z0-9._$-]+/g,
  },
  {
    name: "私钥块",
    pattern: /-----BEGIN [A-Z0-9 ]*PRIVATE KEY-----/g,
  },
  {
    name: "长 token",
    pattern: /(^|[^A-Za-z0-9])sk-[A-Za-z0-9_-]{20,}/g,
  },
  {
    name: "敏感字段赋值",
    pattern:
      /\b(?:api[_-]?key|access[_-]?token|refresh[_-]?token|auth[_-]?token|password|secret)\b\s*[:=]\s*["'](?!<已脱敏|<redacted|redacted|example|test|dummy|placeholder)[A-Za-z0-9_+=/@.-]{24,}["']/gi,
  },
];

const allowedSensitivePathPatterns = [
  /C:\/Program Files\/OpenAiMami\/OpenAiMami\.exe/i,
  /\/Applications\/OpenAiMami\.app/i,
  /\/Users\/example\/Applications\/OpenAiMami\.app/i,
];

const mojibakePatterns = [
  /\uFFFD/,
  /(?:Ã|Â|â€|鈥|鍖|鏄|绋|涓轰粈)/,
];

function toRepoPath(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function addCheck(name, ok, detail = "") {
  checks.push({ name, ok, detail });
}

function findForbiddenTermHits(content) {
  const hits = [];
  for (const { label, pattern } of repositoryForbiddenPatterns) {
    pattern.lastIndex = 0;
    if (pattern.test(content)) {
      hits.push(label);
    }
  }
  return hits;
}

function isAllowedSensitiveHit(hit) {
  return allowedSensitivePathPatterns.some((pattern) => pattern.test(hit));
}

function readUtf8(path) {
  return readFileSync(join(repoRoot, path), "utf8");
}

function readBytes(path) {
  return readFileSync(join(repoRoot, path));
}

function isBinaryLike(buffer) {
  return buffer.includes(0);
}

function listTrackedFiles() {
  const output = execFileSync(
    "git",
    ["-c", "core.quotePath=false", "ls-files", "-z"],
    { cwd: repoRoot },
  );
  return output.toString("utf8").split("\0").filter(Boolean);
}

function walkFiles(root) {
  if (!existsSync(root)) return [];
  const pending = [root];
  const files = [];

  while (pending.length > 0) {
    const current = pending.pop();
    for (const entry of readdirSync(current, { withFileTypes: true })) {
      const next = join(current, entry.name);
      if (entry.isDirectory()) {
        pending.push(next);
      } else if (entry.isFile()) {
        files.push(next);
      }
    }
  }

  return files;
}

function validateGitAttributes() {
  const path = ".gitattributes";
  if (!existsSync(join(repoRoot, path))) {
    addCheck(".gitattributes 存在", false, "缺少 .gitattributes");
    return;
  }

  const content = readUtf8(path);
  const requiredPatterns = [
    "*.i64",
    "*.idb",
    "*.zip",
    "*.7z",
    "*.rar",
    "*.tar",
    "*.tar.gz",
    "*.tgz",
    "*.gz",
    "*.exe",
    "*.msi",
    "*.dmg",
    "*.pkg",
    "*.iso",
  ];
  const missing = requiredPatterns.filter((pattern) => !content.includes(pattern));
  addCheck(
    ".gitattributes 发布资产规则",
    missing.length === 0,
    missing.length === 0
      ? "发布资产扩展名已列入规则"
      : `缺少规则：${missing.join(", ")}`,
  );
}

function validateReadmeFile(path) {
  if (!existsSync(join(repoRoot, path))) {
    addCheck(`${path} 存在`, false, "文件不存在");
    return;
  }

  const content = readUtf8(path);
  const headings = content
    .split(/\r?\n/)
    .filter((line) => /^#{1,6}\s+/.test(line))
    .map((line) => line.trim());
  const requiredHeadings = [
    "# OpenAiMami",
    "## 为什么公开",
    "## 仓库内容",
    "## 重建流程",
    "## 可直接给 AI 的重建提示",
    "## PR 规则",
    "## 匿名化规则",
  ];
  const missingHeadings = requiredHeadings.filter(
    (heading) => !headings.includes(heading),
  );
  const requiredReasons = [
    { name: "个人迭代", pattern: /个人.*迭代|继续迭代/ },
    { name: "Apache License", pattern: /Apache License/ },
    { name: "隐私泄露风险", pattern: /隐私泄露|隐私相关行为|使用者.*检查/ },
    { name: "raw/internal 主链路", pattern: /raw\/internal|raw、internal/ },
  ];
  const missingReasons = requiredReasons
    .filter(({ pattern }) => !pattern.test(content))
    .map(({ name }) => name);
  const forbiddenTerms = findForbiddenTermHits(content);
  const ok =
    missingHeadings.length === 0 &&
    missingReasons.length === 0 &&
    forbiddenTerms.length === 0;

  const details = [];
  if (missingHeadings.length > 0) {
    details.push(`缺少标题：${missingHeadings.join(", ")}`);
  }
  if (missingReasons.length > 0) {
    details.push(`缺少理由：${missingReasons.join(", ")}`);
  }
  if (forbiddenTerms.length > 0) {
    details.push(`包含禁止公开标识：${forbiddenTerms.join(", ")}`);
  }

  addCheck(
    `${path} 保留完整中文公开重建说明`,
    ok,
    details.length === 0 ? "README 保留中文说明、重建流程和匿名化规则" : details.join("；"),
  );
}

function validateReadmePairConsistency() {
  const readmePath = join(repoRoot, "README.md");
  const readmeCnPath = join(repoRoot, "README-cn.md");
  if (!existsSync(readmePath) || !existsSync(readmeCnPath)) {
    addCheck(
      "README.md 与 README-cn.md 内容完全一致",
      false,
      "两个 README 文件都必须存在后才能比较内容",
    );
    return;
  }

  const readme = readBytes("README.md");
  const readmeCn = readBytes("README-cn.md");
  addCheck(
    "README.md 与 README-cn.md 内容完全一致",
    readme.equals(readmeCn),
    readme.equals(readmeCn)
      ? "两个 README 文件的 UTF-8 内容完全一致"
      : "README.md 与 README-cn.md 必须保持完全一致",
  );
}

function validateReadmeStatusStructure(path) {
  if (!existsSync(join(repoRoot, path))) return;

  const content = readUtf8(path);
  const requiredStatusParts = [
    "## 当前状态",
    "| 领域 | 已完成 | 未完成或边界 |",
    "| 公开材料 |",
    "| 前端 |",
    "| 后端 |",
    "| voice |",
    "| 验收 |",
    "| 运行闭环 |",
    "文档口径固定为",
  ];
  const missing = requiredStatusParts.filter((part) => !content.includes(part));

  addCheck(
    `${path} 保留归纳状态摘要`,
    missing.length === 0,
    missing.length === 0
      ? "README 状态摘要表齐全"
      : `缺少状态摘要内容：${missing.join(", ")}`,
  );
}

function validateReadmeNoProgressChangelog(path) {
  if (!existsSync(join(repoRoot, path))) return;

  const progressPatterns = [
    /本次提交/,
    /这次提交/,
    /提交号/,
    /逐次提交/,
    /临时进度/,
    /流水账/,
    /\b20[0-9]{2}[-/.][0-9]{1,2}[-/.][0-9]{1,2}\b.*(?:完成|修复|新增|拆分)/,
    /(?:完成|修复|新增|拆分).*\b20[0-9]{2}[-/.][0-9]{1,2}[-/.][0-9]{1,2}\b/,
    /第\s*(?:[0-9]+|[一二三四五六七八九十百千万]+)\s*次/,
  ];
  const hits = [];
  const lines = readUtf8(path).split(/\r?\n/);

  lines.forEach((line, index) => {
    const trimmed = line.trim();
    if (/^##\s+PR\b/i.test(trimmed) || /^#+\s+/.test(trimmed)) return;
    if (
      /不写|不包含|不能|禁止|不得|只能|只做|归纳|不记录|不追加|不再/.test(
        trimmed,
      )
    ) {
      return;
    }
    if (progressPatterns.some((pattern) => pattern.test(trimmed))) {
      hits.push(`${path}:${index + 1}`);
    }
  });

  addCheck(
    `${path} 不包含流水账式进度用语`,
    hits.length === 0,
    hits.length === 0
      ? "未发现按提交逐条追加的进度用语"
      : `发现流水账式进度用语：${hits.join(", ")}`,
  );
}

function validateReadmeCommitUpdateRule(path) {
  if (!existsSync(join(repoRoot, path))) return;

  const content = readUtf8(path);
  const ok = /每次提交/.test(content) && /README/.test(content) && /归纳/.test(content);
  addCheck(
    `${path} 明确每次提交同步 README 且禁止流水账`,
    ok,
    ok
      ? "README 已写明每次提交要同步当前状态，并保持归纳口径"
      : "README 必须写明每次提交要同步当前状态，且只能归纳状态变化",
  );
}

function validateReadmeTextQuality(path) {
  if (!existsSync(join(repoRoot, path))) return;

  const content = readUtf8(path);
  const hits = mojibakePatterns
    .filter((pattern) => pattern.test(content))
    .map((pattern) => pattern.toString());

  addCheck(
    `${path} 不包含明显乱码中文`,
    hits.length === 0,
    hits.length === 0 ? "未发现常见乱码中文特征" : `命中乱码特征：${hits.join(", ")}`,
  );
}

function validateTrackedAssets() {
  const trackedFiles = listTrackedFiles();
  const forbiddenAssets = [];
  const largeFiles = [];

  for (const file of trackedFiles) {
    const normalized = file.replaceAll("\\", "/");
    const extension = extname(normalized).toLowerCase();
    if (forbiddenTrackedExtensions.has(extension) || normalized.endsWith(".tar.gz")) {
      forbiddenAssets.push(normalized);
    }

    const absolute = join(repoRoot, file);
    if (existsSync(absolute)) {
      const size = statSync(absolute).size;
      if (size > maxTrackedBytes) {
        largeFiles.push(`${normalized} (${size} bytes)`);
      }
    }
  }

  addCheck(
    "tracked 文件不存在 IDB/压缩包/安装包",
    forbiddenAssets.length === 0,
    forbiddenAssets.length === 0
      ? "未发现禁止发布资产"
      : forbiddenAssets.join("；"),
  );
  addCheck(
    "tracked 文件不存在大文件",
    largeFiles.length === 0,
    largeFiles.length === 0
      ? "未发现超过 5MB 的 tracked 文件"
      : largeFiles.join("；"),
  );
}

function validateRawFrontendAssets() {
  const files = walkFiles(rawRoot).filter((file) => {
    const repoPath = toRepoPath(file).toLowerCase();
    return repoPath.includes("/frontend/") && rawTextExtensions.has(extname(repoPath));
  });
  const hits = [];

  for (const file of files) {
    const buffer = readFileSync(file);
    if (isBinaryLike(buffer)) continue;
    const content = buffer.toString("utf8");
    for (const term of publishForbiddenTerms) {
      const lowerContent = content.toLowerCase();
      const lowerTerm = term.toLowerCase();
      let index = lowerContent.indexOf(lowerTerm);
      while (index >= 0) {
        const line = content.slice(0, index).split(/\r?\n/).length;
        hits.push(`${toRepoPath(file)}:${line} 命中 ${term}`);
        index = lowerContent.indexOf(lowerTerm, index + lowerTerm.length);
      }
    }
  }

  addCheck(
    "raw 前端资产不存在发布禁词",
    hits.length === 0,
    hits.length === 0
      ? "未发现扫码、支付或二维码类发布禁词"
      : hits.slice(0, 20).join("；"),
  );
}

function validateRepositoryTextBoundary() {
  const trackedTextFiles = listTrackedFiles().filter((file) =>
    repositoryTextExtensions.has(extname(file).toLowerCase()),
  );
  const forbiddenHits = [];
  const sensitiveHits = [];

  for (const file of trackedTextFiles) {
    const absolute = join(repoRoot, file);
    if (!existsSync(absolute)) continue;
    const buffer = readFileSync(absolute);
    if (isBinaryLike(buffer)) continue;
    const content = buffer.toString("utf8");
    for (const term of findForbiddenTermHits(content)) {
      forbiddenHits.push(`${file} 命中 ${term}`);
    }

    if (file.replaceAll("\\", "/") === "scripts/validate-public-boundary.mjs") {
      continue;
    }

    for (const { name, pattern } of sensitiveContentPatterns) {
      pattern.lastIndex = 0;
      let match = pattern.exec(content);
      while (match) {
        const hit = match[0].trim();
        if (!isAllowedSensitiveHit(hit)) {
          const line = content.slice(0, match.index).split(/\r?\n/).length;
          sensitiveHits.push(`${file}:${line} 命中 ${name}`);
        }
        match = pattern.exec(content);
      }
    }
  }

  addCheck(
    "公开文本不存在禁止标识",
    forbiddenHits.length === 0,
    forbiddenHits.length === 0
      ? "未发现禁止公开标识"
      : forbiddenHits.slice(0, 20).join("；"),
  );
  addCheck(
    "公开文本不存在敏感路径或凭据形态",
    sensitiveHits.length === 0,
    sensitiveHits.length === 0
      ? "未发现本机路径、共享路径、私钥或长 token 形态"
      : sensitiveHits.slice(0, 20).join("；"),
  );
}

validateGitAttributes();
validateReadmePairConsistency();
validateReadmeFile("README.md");
validateReadmeFile("README-cn.md");
validateReadmeStatusStructure("README.md");
validateReadmeStatusStructure("README-cn.md");
validateReadmeNoProgressChangelog("README.md");
validateReadmeNoProgressChangelog("README-cn.md");
validateReadmeCommitUpdateRule("README.md");
validateReadmeCommitUpdateRule("README-cn.md");
validateReadmeTextQuality("README.md");
validateReadmeTextQuality("README-cn.md");
validateTrackedAssets();
validateRawFrontendAssets();
validateRepositoryTextBoundary();

let failed = false;
for (const check of checks) {
  const prefix = check.ok ? "PASS" : "FAIL";
  console.log(`${prefix} ${check.name}${check.detail ? `：${check.detail}` : ""}`);
  if (!check.ok) failed = true;
}

if (failed) {
  process.exit(1);
}
