import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const repositoryAccountsFile = join(backendRoot, "repository", "accounts.rs");
const usecaseAccountsFile = join(backendRoot, "application", "usecase", "accounts.rs");
const accountsMonitorMapFile = join(
  repoRoot,
  "docs",
  "reconstruction",
  "accounts-monitor-current-source-map.md",
);
const sourceMapFile = join(repoRoot, "docs", "reconstruction", "source-map.md");
const reconstructionReadmeFile = join(repoRoot, "docs", "reconstruction", "README.md");
const ownerTransactions = [
  {
    functionName: "switch_account",
    label: "账号切换",
    sharedOwner: "switch_account_with_status",
  },
  {
    functionName: "remove_accounts",
    label: "账号删除",
  },
  {
    functionName: "logout",
    label: "账号登出",
  },
  {
    functionName: "export_accounts_to_file",
    label: "账号导出",
  },
  {
    functionName: "preview_account_import",
    label: "账号导入预览",
  },
  {
    functionName: "import_accounts_from_file",
    label: "账号导入",
  },
];

const failures = [];
const helperEvidenceByFunction = new Map();

function toRelative(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function readRequiredUtf8(path, description) {
  if (!existsSync(path)) {
    failures.push(`${toRelative(path)} 缺少${description}`);
    return "";
  }

  return readFileSync(path, "utf8");
}

function requireIncludes(path, content, snippets, reason) {
  for (const snippet of snippets) {
    if (!content.includes(snippet)) {
      failures.push(`${toRelative(path)} 缺少 ${snippet}，${reason}`);
    }
  }
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

function blankRange(output, start, end) {
  for (let index = start; index < end; index += 1) {
    output[index] = output[index] === "\n" ? "\n" : " ";
  }
}

function rawStringEndMarker(content, start) {
  if (content[start] !== "r") {
    return null;
  }

  let cursor = start + 1;
  while (content[cursor] === "#") {
    cursor += 1;
  }

  if (content[cursor] !== "\"") {
    return null;
  }

  return {
    contentStart: cursor + 1,
    marker: `"${"#".repeat(cursor - start - 1)}`,
  };
}

// 只去掉 Rust 注释，避免历史注释里的 owner 痕迹误触发门禁。
function stripRustComments(content) {
  const output = content.split("");
  let cursor = 0;

  while (cursor < content.length) {
    const raw = rawStringEndMarker(content, cursor);
    if (raw) {
      const rawEnd = content.indexOf(raw.marker, raw.contentStart);
      cursor = rawEnd === -1 ? content.length : rawEnd + raw.marker.length;
      continue;
    }

    if (content[cursor] === "b" && content[cursor + 1] === "r") {
      const rawByte = rawStringEndMarker(content, cursor + 1);
      if (rawByte) {
        const rawByteEnd = content.indexOf(rawByte.marker, rawByte.contentStart);
        cursor = rawByteEnd === -1 ? content.length : rawByteEnd + rawByte.marker.length;
        continue;
      }
    }

    if (content[cursor] === "\"") {
      cursor += 1;
      while (cursor < content.length) {
        if (content[cursor] === "\\") {
          cursor += 2;
          continue;
        }
        if (content[cursor] === "\"") {
          cursor += 1;
          break;
        }
        cursor += 1;
      }
      continue;
    }

    if (content[cursor] === "/" && content[cursor + 1] === "/") {
      const start = cursor;
      cursor += 2;
      while (cursor < content.length && content[cursor] !== "\n") {
        cursor += 1;
      }
      blankRange(output, start, cursor);
      continue;
    }

    if (content[cursor] === "/" && content[cursor + 1] === "*") {
      const start = cursor;
      cursor += 2;
      let depth = 1;
      while (cursor < content.length && depth > 0) {
        if (content[cursor] === "/" && content[cursor + 1] === "*") {
          depth += 1;
          cursor += 2;
        } else if (content[cursor] === "*" && content[cursor + 1] === "/") {
          depth -= 1;
          cursor += 2;
        } else {
          cursor += 1;
        }
      }
      blankRange(output, start, cursor);
      continue;
    }

    cursor += 1;
  }

  return output.join("");
}

function findPublicFunction(content, functionName) {
  const pattern = new RegExp(`\\bpub\\s+fn\\s+${functionName}\\s*\\(`, "g");
  const match = pattern.exec(content);
  if (!match) {
    return null;
  }

  return {
    index: match.index,
    line: lineNumberAt(content, match.index),
  };
}

function findPublicOrPrivateFunction(content, functionName) {
  const pattern = new RegExp(`\\b(?:pub\\s+)?fn\\s+${functionName}\\s*\\(`, "g");
  const match = pattern.exec(content);
  if (!match) {
    return null;
  }

  return {
    index: match.index,
    line: lineNumberAt(content, match.index),
  };
}

function findFunctionBody(content, functionStart) {
  const openBrace = content.indexOf("{", functionStart);
  if (openBrace === -1) {
    return null;
  }

  let depth = 0;
  for (let cursor = openBrace; cursor < content.length; cursor += 1) {
    const char = content[cursor];
    if (char === "{") {
      depth += 1;
    } else if (char === "}") {
      depth -= 1;
      if (depth === 0) {
        return content.slice(openBrace + 1, cursor);
      }
    }
  }

  return null;
}

function collectRepositoryHelperEvidence(functionBody) {
  const helperName =
    "[A-Za-z0-9_]*(?:load|save|active|snapshot|restore|backup|mark|remove|registry|read|write|import|export|json)[A-Za-z0-9_]*";
  const patterns = [
    {
      label: "accounts_repository::",
      pattern: new RegExp(`\\baccounts_repository\\s*::\\s*(${helperName})\\s*\\(`, "g"),
    },
    {
      label: "AccountsRepository::",
      pattern: new RegExp(`\\bAccountsRepository\\s*::\\s*(${helperName})\\s*\\(`, "g"),
    },
    {
      label: "repo.",
      pattern: new RegExp(`\\brepo\\s*\\.\\s*(${helperName})\\s*\\(`, "g"),
    },
    {
      label: "repo.accounts().",
      pattern: new RegExp(`\\brepo\\s*\\.\\s*accounts\\s*\\(\\s*\\)\\s*\\.\\s*(${helperName})\\s*\\(`, "g"),
    },
  ];

  const evidence = new Set();
  for (const { label, pattern } of patterns) {
    let match;
    while ((match = pattern.exec(functionBody)) !== null) {
      evidence.add(`${label}${match[1]}(`);
      if (match[0].length === 0) {
        pattern.lastIndex += 1;
      }
    }
  }

  return [...evidence].sort();
}

function validateRepositoryDoesNotOwnTransactions(repositoryContent) {
  const stripped = stripRustComments(repositoryContent);
  for (const transaction of ownerTransactions) {
    const repositoryFunction = findPublicFunction(stripped, transaction.functionName);
    if (repositoryFunction) {
      failures.push(
        `${toRelative(repositoryAccountsFile)}:${repositoryFunction.line} 存在 pub fn ${transaction.functionName}(...)，${transaction.label}事务不能由 repository owning`,
      );
    }
  }
}

function validateUsecaseOwnsTransactions(usecaseContent) {
  const stripped = stripRustComments(usecaseContent);
  for (const transaction of ownerTransactions) {
    const usecaseFunction = findPublicFunction(stripped, transaction.functionName);
    if (!usecaseFunction) {
      failures.push(
        `${toRelative(usecaseAccountsFile)} 缺少 pub fn ${transaction.functionName}(...)，${transaction.label}事务应由 application/usecase owning`,
      );
      continue;
    }

    const functionBody = findFunctionBody(stripped, usecaseFunction.index);
    if (!functionBody) {
      failures.push(
        `${toRelative(usecaseAccountsFile)}:${usecaseFunction.line} 无法解析 ${transaction.functionName} 函数体`,
      );
      continue;
    }

    const directForwardPattern = new RegExp(
      `\\baccounts_repository\\s*::\\s*${transaction.functionName}\\s*\\(`,
    );
    if (directForwardPattern.test(functionBody)) {
      failures.push(
        `${toRelative(usecaseAccountsFile)}:${usecaseFunction.line} ${transaction.functionName} 仍直接转发 accounts_repository::${transaction.functionName}(...)，事务 owner 仍在 repository`,
      );
    }

    let ownerBody = functionBody;
    if (transaction.sharedOwner && new RegExp(`\\b${transaction.sharedOwner}\\s*\\(`).test(functionBody)) {
      const sharedOwner = findPublicOrPrivateFunction(stripped, transaction.sharedOwner);
      if (sharedOwner) {
        const sharedBody = findFunctionBody(stripped, sharedOwner.index);
        if (sharedBody) {
          ownerBody = `${functionBody}\n${sharedBody}`;
        }
      }
    }

    const helperEvidence = collectRepositoryHelperEvidence(ownerBody);
    helperEvidenceByFunction.set(transaction.functionName, helperEvidence);
    if (helperEvidence.length === 0) {
      failures.push(
        `${toRelative(usecaseAccountsFile)}:${usecaseFunction.line} ${transaction.functionName} 函数体缺少 load/save/active/snapshot/restore/backup/remove/registry 等 repository helper 调用证据`,
      );
    }
  }
}

function validateMonitorPreflight(usecaseContent) {
  const stripped = stripRustComments(usecaseContent);
  const monitorFunction = findPublicFunction(stripped, "begin_add_account_attach_monitor");
  if (!monitorFunction) {
    failures.push(
      `${toRelative(usecaseAccountsFile)} 缺少 pub fn begin_add_account_attach_monitor(...)，账号监视预检必须由 application/usecase owning`,
    );
    return;
  }

  const functionBody = findFunctionBody(stripped, monitorFunction.index);
  if (!functionBody) {
    failures.push(
      `${toRelative(usecaseAccountsFile)}:${monitorFunction.line} 无法解析 begin_add_account_attach_monitor 函数体`,
    );
    return;
  }

  if (!/\baccounts_repository\s*::\s*load_registry\s*\(\s*repo\s*\)\s*\?/.test(functionBody)) {
    failures.push(
      `${toRelative(usecaseAccountsFile)}:${monitorFunction.line} begin_add_account_attach_monitor 必须通过 accounts_repository::load_registry(repo)? 做仓储预检`,
    );
  }

  if (!/\brestored\s*\(\s*"begin_add_account_attach_monitor"\s*\)/.test(functionBody)) {
    failures.push(
      `${toRelative(usecaseAccountsFile)}:${monitorFunction.line} begin_add_account_attach_monitor 必须返回 RepositoryRead restored status`,
    );
  }

  if (!/MONITOR_PREFLIGHT_NOTE/.test(functionBody)) {
    failures.push(
      `${toRelative(usecaseAccountsFile)}:${monitorFunction.line} begin_add_account_attach_monitor 必须保留中文 note 说明只恢复仓储预检边界`,
    );
  }

  const forbiddenPatterns = [
    { label: "pending status", pattern: /\bpending_status\s*\(/ },
    { label: "线程创建", pattern: /\bstd\s*::\s*thread\b|\bthread\s*::\s*spawn\b/ },
    { label: "tokio spawn", pattern: /\btokio\s*::\s*spawn\b/ },
    { label: "Tauri emit", pattern: /\.emit\s*\(|runtime-state-updated/ },
    { label: "平台副作用", pattern: /\bplatform\b|\bPlatform\b/ },
    { label: "仓储写入", pattern: /\bsave_registry\s*\(|\bwrite_string\s*\(|\bcopy_snapshot_to_auth\s*\(|\bremove_/ },
  ];
  for (const { label, pattern } of forbiddenPatterns) {
    if (pattern.test(functionBody)) {
      failures.push(
        `${toRelative(usecaseAccountsFile)}:${monitorFunction.line} begin_add_account_attach_monitor 禁止 ${label}，当前只允许仓储读取预检`,
      );
    }
  }
}

function validateAccountsMonitorMap(accountsMonitorMapContent, sourceMapContent, reconstructionReadmeContent) {
  requireIncludes(
    accountsMonitorMapFile,
    accountsMonitorMapContent,
    [
      "# accounts monitor current-source 证据映射",
      "`begin_add_account_attach_monitor`",
      "accounts_repository::load_registry",
      "RepositoryRead",
      "不创建后台 monitor",
      "不创建线程",
      "不发送 runtime-state-updated",
      "不声明 macOS monitor lifecycle 已恢复",
      "scripts/validate-backend-accounts-owner.mjs",
    ],
    "accounts monitor map 必须固定仓储预检边界和未恢复内容",
  );
  requireIncludes(
    sourceMapFile,
    sourceMapContent,
    [
      "docs/reconstruction/accounts-monitor-current-source-map.md",
      "accounts monitor 仓储预检",
      "scripts/validate-backend-accounts-owner.mjs",
    ],
    "source-map 必须索引 accounts monitor current-source map",
  );
  requireIncludes(
    reconstructionReadmeFile,
    reconstructionReadmeContent,
    [
      "accounts monitor 仓储预检",
      "docs/reconstruction/accounts-monitor-current-source-map.md",
      "scripts/validate-backend-accounts-owner.mjs",
    ],
    "docs/reconstruction README 必须索引 accounts monitor current-source map",
  );
}

const repositoryContent = readRequiredUtf8(repositoryAccountsFile, "repository accounts owner 文件");
const usecaseContent = readRequiredUtf8(usecaseAccountsFile, "application/usecase accounts owner 文件");
const accountsMonitorMapContent = readRequiredUtf8(
  accountsMonitorMapFile,
  "accounts monitor current-source map",
);
const sourceMapContent = readRequiredUtf8(sourceMapFile, "reconstruction source-map");
const reconstructionReadmeContent = readRequiredUtf8(
  reconstructionReadmeFile,
  "reconstruction README",
);

if (repositoryContent.length > 0) {
  validateRepositoryDoesNotOwnTransactions(repositoryContent);
}

if (usecaseContent.length > 0) {
  validateUsecaseOwnsTransactions(usecaseContent);
  validateMonitorPreflight(usecaseContent);
}

if (
  accountsMonitorMapContent.length > 0 &&
  sourceMapContent.length > 0 &&
  reconstructionReadmeContent.length > 0
) {
  validateAccountsMonitorMap(
    accountsMonitorMapContent,
    sourceMapContent,
    reconstructionReadmeContent,
  );
}

if (failures.length > 0) {
  console.error("FAIL 后端账号事务 owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端账号事务 owner 校验通过：repository 未暴露账号用户动作事务入口。");
console.log("PASS 账号监视预检边界：begin_add_account_attach_monitor 只做 repository read 预检，不创建线程、事件或平台副作用。");
for (const transaction of ownerTransactions) {
  const evidence = helperEvidenceByFunction.get(transaction.functionName) ?? [];
  console.log(`PASS ${transaction.label} usecase helper 证据：${evidence.join(", ")}`);
}
