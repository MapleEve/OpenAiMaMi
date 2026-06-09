import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const repositoryAccountsFile = join(backendRoot, "repository", "accounts.rs");
const usecaseAccountsFile = join(backendRoot, "application", "usecase", "accounts.rs");
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
    "[A-Za-z0-9_]*(?:load|save|active|snapshot|restore|backup|mark|remove|registry)[A-Za-z0-9_]*";
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

const repositoryContent = readRequiredUtf8(repositoryAccountsFile, "repository accounts owner 文件");
const usecaseContent = readRequiredUtf8(usecaseAccountsFile, "application/usecase accounts owner 文件");

if (repositoryContent.length > 0) {
  validateRepositoryDoesNotOwnTransactions(repositoryContent);
}

if (usecaseContent.length > 0) {
  validateUsecaseOwnsTransactions(usecaseContent);
}

if (failures.length > 0) {
  console.error("FAIL 后端账号事务 owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS 后端账号事务 owner 校验通过：repository 未暴露 switch/remove/logout 用户动作事务入口。");
for (const transaction of ownerTransactions) {
  const evidence = helperEvidenceByFunction.get(transaction.functionName) ?? [];
  console.log(`PASS ${transaction.label} usecase helper 证据：${evidence.join(", ")}`);
}
