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
  /[\u00C3\u00C2\u9225\u951B\u9428\u9345\u6960\u7487\u4E63]/,
  /(?:\u00E2\u20AC|\u7F02\u54C4|\u934F\u30E5|\u701B\u6A3A|\u6D93\u8F70\u7C88|涓轰粈)/,
];

const mojibakeSelfCheckFiles = new Set([
  "scripts/validate-public-boundary.mjs",
  "scripts/validate-i18n.mjs",
]);

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

function shouldSkipMojibakeCheck(file) {
  return mojibakeSelfCheckFiles.has(file.replaceAll("\\", "/"));
}

function findMojibakeHits(content) {
  return mojibakePatterns
    .filter((pattern) => pattern.test(content))
    .map((pattern) => pattern.toString());
}

function findMojibakeMatches(content) {
  const hits = [];
  for (const pattern of mojibakePatterns) {
    pattern.lastIndex = 0;
    const match = pattern.exec(content);
    if (match) {
      hits.push({ pattern: pattern.toString(), index: match.index });
    }
  }
  return hits;
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

function validatePackageValidateScripts() {
  const packagePath = join(repoRoot, "package.json");
  if (!existsSync(packagePath)) {
    addCheck("package.json 验证入口", false, "缺少 package.json");
    return;
  }

  let packageJson;
  try {
    packageJson = JSON.parse(readUtf8("package.json"));
  } catch (error) {
    addCheck("package.json 验证入口", false, `package.json 无法解析：${error.message}`);
    return;
  }

  const scripts = packageJson.scripts ?? {};
  const validateEntries = Object.entries(scripts).filter(([name]) =>
    name.startsWith("validate:"),
  );
  const validateTargets = new Set();
  const missingTargets = [];
  const invalidCommands = [];

  for (const [name, command] of validateEntries) {
    const match = /\bnode\s+([^\s]+\.mjs)\b/.exec(command);
    if (!match) {
      invalidCommands.push(name);
      continue;
    }

    const target = match[1].replaceAll("\\", "/");
    validateTargets.add(target);
    if (!existsSync(join(repoRoot, target))) {
      missingTargets.push(`${name} -> ${target}`);
    }
  }

  addCheck(
    "package.json validate 入口目标存在",
    missingTargets.length === 0 && invalidCommands.length === 0,
    missingTargets.length === 0 && invalidCommands.length === 0
      ? `${validateEntries.length} 个 validate 入口均指向存在脚本`
      : [
          missingTargets.length > 0 ? `缺少脚本：${missingTargets.join(", ")}` : "",
          invalidCommands.length > 0
            ? `不是 node .mjs 命令：${invalidCommands.join(", ")}`
            : "",
        ]
          .filter(Boolean)
          .join("；"),
  );

  const validateScriptFiles = walkFiles(join(repoRoot, "scripts"))
    .map(toRepoPath)
    .filter((path) => /^scripts\/validate.*\.mjs$/.test(path));
  const unregistered = validateScriptFiles.filter((path) => !validateTargets.has(path));

  addCheck(
    "scripts validate 文件均有 npm 入口",
    unregistered.length === 0,
    unregistered.length === 0
      ? `${validateScriptFiles.length} 个 validate 脚本均已登记`
      : `未登记脚本：${unregistered.join(", ")}`,
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
    "| 领域 | 已做 | 没做或边界 | 怎么验收 |",
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
  const hits = findMojibakeHits(content);

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

function normalizeMarkdownContent(content) {
  return content.replace(/\r\n/g, "\n").replace(/\r/g, "\n").trim();
}

function findMarkdownLine(content, needle) {
  return normalizeMarkdownContent(content)
    .split("\n")
    .some((line) => line.trim() === needle);
}

function sliceFromMarker(content, marker) {
  const normalized = normalizeMarkdownContent(content);
  const markerIndex = normalized.indexOf(marker);
  if (markerIndex < 0) return null;
  return normalized.slice(markerIndex).trim();
}

function validateInstructionAndReconstructionDocs() {
  const instructionRules = [
    {
      path: "AGENTS.md",
      titlePattern: /^#\s+OpenAiMami\s+执行规则\s*$/m,
      requiredHeadings: [
        "# OpenAiMami 执行规则",
        "## 执行顺序",
        "## 原文一：架构决策",
        "## 原文二：重构门禁",
      ],
    },
    {
      path: "CLAUDE.md",
      titlePattern: /^#\s+OpenAiMami\s+Claude\s+执行规则\s*$/m,
      requiredHeadings: [
        "# OpenAiMami Claude 执行规则",
        "## 工作顺序",
        "## 原文一：架构决策",
        "## 原文二：重构门禁",
      ],
    },
  ];
  const instructionContents = new Map();

  for (const rule of instructionRules) {
    const exists = existsSync(join(repoRoot, rule.path));
    addCheck(`${rule.path} 存在`, exists, exists ? "规则文件存在" : "规则文件缺失");
    if (!exists) continue;

    const content = readUtf8(rule.path);
    instructionContents.set(rule.path, normalizeMarkdownContent(content));
    const missingHeadings = rule.requiredHeadings.filter(
      (heading) => !findMarkdownLine(content, heading),
    );
    const hasChineseTitle = rule.titlePattern.test(content);
    addCheck(
      `${rule.path} 保留中文标题和必须 heading`,
      hasChineseTitle && missingHeadings.length === 0,
      hasChineseTitle && missingHeadings.length === 0
        ? "中文标题、执行顺序和两段原文 heading 均存在"
        : [
            hasChineseTitle ? "" : "缺少预期中文标题",
            missingHeadings.length > 0
              ? `缺少 heading：${missingHeadings.join(", ")}`
              : "",
          ]
            .filter(Boolean)
            .join("；"),
    );
  }

  const agents = instructionContents.get("AGENTS.md");
  const claude = instructionContents.get("CLAUDE.md");
  const coreMarker = "## 原文一：架构决策";
  const agentsCore = agents ? sliceFromMarker(agents, coreMarker) : null;
  const claudeCore = claude ? sliceFromMarker(claude, coreMarker) : null;
  addCheck(
    "CLAUDE.md 原文核心内容与 AGENTS.md 对齐",
    Boolean(agentsCore && claudeCore && agentsCore === claudeCore),
    agentsCore && claudeCore && agentsCore === claudeCore
      ? "允许前言差异，从“原文一：架构决策”起完全一致"
      : "AGENTS.md 或 CLAUDE.md 缺少原文核心段，或核心段已漂移",
  );

  const originalBodies = [
    {
      path: "docs/reconstruction/architecture-decision-original.md",
      marker: "## 决策",
      label: "架构决策原文主体",
    },
    {
      path: "docs/reconstruction/refactor-gates-original.md",
      marker: "后端架构重构必须先满足以下规则，再移动代码或调整目录：",
      label: "重构门禁原文主体",
    },
  ];

  for (const original of originalBodies) {
    const exists = existsSync(join(repoRoot, original.path));
    addCheck(
      `${original.path} 存在`,
      exists,
      exists ? "原文封存文件存在" : "原文封存文件缺失",
    );
    if (!exists) continue;

    const body = sliceFromMarker(readUtf8(original.path), original.marker);
    const hasBody = Boolean(body);
    addCheck(
      `${original.path} 可提取${original.label}`,
      hasBody,
      hasBody ? `已从标记“${original.marker}”提取原文主体` : "缺少原文主体起始标记",
    );
    if (!body) continue;

    for (const target of ["AGENTS.md", "CLAUDE.md"]) {
      const targetContent = instructionContents.get(target);
      addCheck(
        `${target} 包含${original.label}`,
        Boolean(targetContent && targetContent.includes(body)),
        targetContent && targetContent.includes(body)
          ? "封存原文主体可在规则文件中逐字找到"
          : `${target} 未逐字包含 ${original.path} 的原文主体`,
      );
    }
  }

  const reconstructionRoot = join(repoRoot, "docs", "reconstruction");
  const reconstructionMarkdownFiles = walkFiles(reconstructionRoot)
    .filter((path) => extname(path).toLowerCase() === ".md")
    .sort((a, b) => toRepoPath(a).localeCompare(toRepoPath(b)));
  const emptyFiles = [];
  const mojibakeHits = [];
  const missingChineseSignal = [];

  for (const file of reconstructionMarkdownFiles) {
    const repoPath = toRepoPath(file);
    const content = readFileSync(file, "utf8");
    const trimmed = content.trim();

    if (trimmed.length === 0) {
      emptyFiles.push(repoPath);
      continue;
    }

    for (const { pattern, index } of findMojibakeMatches(content)) {
      const line = content.slice(0, index).split(/\r?\n/).length;
      mojibakeHits.push(`${repoPath}:${line} 命中 ${pattern}`);
    }

    const hasMarkdownHeading = /^#{1,6}\s+\S/m.test(content);
    const hasChineseBody = /[\u4E00-\u9FFF]/.test(content);
    if (!hasMarkdownHeading && !hasChineseBody) {
      missingChineseSignal.push(repoPath);
    }
  }

  addCheck(
    "docs/reconstruction Markdown 文件存在",
    reconstructionMarkdownFiles.length > 0,
    reconstructionMarkdownFiles.length > 0
      ? `发现 ${reconstructionMarkdownFiles.length} 个 Markdown 文件`
      : "docs/reconstruction 下未发现 Markdown 文件",
  );
  addCheck(
    "docs/reconstruction Markdown 非空",
    emptyFiles.length === 0,
    emptyFiles.length === 0
      ? "所有 reconstruction Markdown 均非空"
      : `空文件：${emptyFiles.join("；")}`,
  );
  addCheck(
    "docs/reconstruction Markdown 不含明显乱码中文",
    mojibakeHits.length === 0,
    mojibakeHits.length === 0
      ? "未发现常见 mojibake 特征"
      : mojibakeHits.slice(0, 20).join("；"),
  );
  addCheck(
    "docs/reconstruction Markdown 含标题或中文正文",
    missingChineseSignal.length === 0,
    missingChineseSignal.length === 0
      ? "所有 reconstruction Markdown 均含 Markdown 标题或中文正文"
      : `缺少标题或中文正文信号：${missingChineseSignal.join("；")}`,
  );
}

function isCurrentSourceEvidenceMapPath(path) {
  const normalized = path.replaceAll("\\", "/");
  const fileName = normalized.split("/").at(-1) ?? normalized;

  return (
    normalized.startsWith("docs/reconstruction/") &&
    extname(normalized).toLowerCase() === ".md" &&
    ((fileName.includes("current-source") && fileName.endsWith("map.md")) ||
      fileName.endsWith("evidence-map.md"))
  );
}

function validateCurrentSourceEvidenceMapRegistry() {
  const reconstructionRoot = join(repoRoot, "docs", "reconstruction");
  const mapPaths = walkFiles(reconstructionRoot)
    .map(toRepoPath)
    .filter(isCurrentSourceEvidenceMapPath)
    .sort((left, right) => left.localeCompare(right));
  const sourceMapPath = "docs/reconstruction/source-map.md";
  const reconstructionReadmePath = "docs/reconstruction/README.md";
  const sourceMapExists = existsSync(join(repoRoot, sourceMapPath));
  const readmeExists = existsSync(join(repoRoot, reconstructionReadmePath));
  const sourceMapContent = sourceMapExists ? readUtf8(sourceMapPath) : "";
  const readmeContent = readmeExists ? readUtf8(reconstructionReadmePath) : "";

  addCheck(
    "current-source/evidence map 文件存在",
    mapPaths.length > 0,
    mapPaths.length > 0
      ? `发现 ${mapPaths.length} 个 current-source/evidence map`
      : "docs/reconstruction 下未发现 current-source/evidence map",
  );

  const missingFromSourceMap = mapPaths.filter(
    (path) => !sourceMapContent.includes(path),
  );
  addCheck(
    "source-map.md 收口所有 current-source/evidence map",
    sourceMapExists && missingFromSourceMap.length === 0,
    !sourceMapExists
      ? `${sourceMapPath} 不存在`
      : missingFromSourceMap.length === 0
        ? "source-map.md 已索引所有 current-source/evidence map"
        : `source-map.md 缺少：${missingFromSourceMap.join("；")}`,
  );

  const missingFromReadme = mapPaths.filter((path) => !readmeContent.includes(path));
  addCheck(
    "docs/reconstruction/README.md 收口所有 current-source/evidence map",
    readmeExists && missingFromReadme.length === 0,
    !readmeExists
      ? `${reconstructionReadmePath} 不存在`
      : missingFromReadme.length === 0
        ? "docs/reconstruction/README.md 已索引所有 current-source/evidence map"
        : `docs/reconstruction/README.md 缺少：${missingFromReadme.join("；")}`,
  );

  const validateScriptContents = walkFiles(join(repoRoot, "scripts"))
    .map(toRepoPath)
    .filter(
      (path) =>
        /^scripts\/validate.*\.mjs$/.test(path) &&
        path !== "scripts/validate-public-boundary.mjs" &&
        path !== "scripts/validate-all.mjs",
    )
    .map((path) => [path, readUtf8(path)]);
  const sourceMapLines = sourceMapContent.split(/\r?\n/);
  const mapsWithoutValidatorOrBoundary = [];

  for (const mapPath of mapPaths) {
    const fileName = mapPath.split("/").at(-1) ?? mapPath;
    const referencedByValidator = validateScriptContents.some(
      ([, content]) => content.includes(mapPath) || content.includes(fileName),
    );
    if (referencedByValidator) continue;

    const sourceMapLine =
      sourceMapLines.find((line) => line.includes(mapPath) || line.includes(fileName)) ?? "";
    if (!sourceMapLine.includes("当前仅索引/无独立 validator 边界")) {
      mapsWithoutValidatorOrBoundary.push(mapPath);
    }
  }

  addCheck(
    "current-source/evidence map 均有 validator 或显式索引边界",
    mapsWithoutValidatorOrBoundary.length === 0,
    mapsWithoutValidatorOrBoundary.length === 0
      ? "每个 map 均被 validate 脚本显式引用，或在 source-map.md 标注当前仅索引/无独立 validator 边界"
      : `缺少 validator 引用或索引边界：${mapsWithoutValidatorOrBoundary.join("；")}`,
  );
}

function validateRepositoryTextBoundary() {
  const trackedTextFiles = listTrackedFiles().filter((file) =>
    repositoryTextExtensions.has(extname(file).toLowerCase()),
  );
  const forbiddenHits = [];
  const sensitiveHits = [];
  const mojibakeHits = [];

  for (const file of trackedTextFiles) {
    const absolute = join(repoRoot, file);
    if (!existsSync(absolute)) continue;
    const buffer = readFileSync(absolute);
    if (isBinaryLike(buffer)) continue;
    const content = buffer.toString("utf8");
    for (const term of findForbiddenTermHits(content)) {
      forbiddenHits.push(`${file} 命中 ${term}`);
    }

    if (!shouldSkipMojibakeCheck(file)) {
      for (const { pattern, index } of findMojibakeMatches(content)) {
        const line = content.slice(0, index).split(/\r?\n/).length;
        mojibakeHits.push(`${file}:${line} 命中 ${pattern}`);
      }
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
  addCheck(
    "公开文本不存在明显乱码中文",
    mojibakeHits.length === 0,
    mojibakeHits.length === 0
      ? "所有 tracked 公开文本未发现常见 mojibake 特征"
      : mojibakeHits.slice(0, 20).join("；"),
  );
}

validateGitAttributes();
validatePackageValidateScripts();
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
validateInstructionAndReconstructionDocs();
validateCurrentSourceEvidenceMapRegistry();
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
