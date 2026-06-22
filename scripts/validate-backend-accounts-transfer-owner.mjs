import { existsSync, readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();
const backendRoot = join(repoRoot, "src-tauri", "src");
const commandsAccountsFile = join(backendRoot, "commands", "accounts.rs");
const repositoryAccountsFile = join(backendRoot, "repository", "accounts.rs");
const usecaseAccountsFile = join(backendRoot, "application", "usecase", "accounts.rs");
const accountsTransferMapFile = join(
  repoRoot,
  "docs",
  "reconstruction",
  "accounts-transfer-current-source-map.md",
);
const sourceMapFile = join(repoRoot, "docs", "reconstruction", "source-map.md");
const reconstructionReadmeFile = join(repoRoot, "docs", "reconstruction", "README.md");

const transferTransactions = [
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

const helperKeywordPattern =
  "[A-Za-z0-9_]*(?:load|read|write|save|snapshot|import|export|json)[A-Za-z0-9_]*";

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

function collectRepositoryHelperEvidence(functionBody, transactionName) {
  const patterns = [
    {
      label: "accounts_repository::",
      pattern: new RegExp(`\\baccounts_repository\\s*::\\s*(${helperKeywordPattern})\\s*\\(`, "g"),
    },
    {
      label: "AccountsRepository::",
      pattern: new RegExp(`\\bAccountsRepository\\s*::\\s*(${helperKeywordPattern})\\s*\\(`, "g"),
    },
    {
      label: "repo.",
      pattern: new RegExp(`\\brepo\\s*\\.\\s*(${helperKeywordPattern})\\s*\\(`, "g"),
    },
    {
      label: "repo.accounts().",
      pattern: new RegExp(
        `\\brepo\\s*\\.\\s*accounts\\s*\\(\\s*\\)\\s*\\.\\s*(${helperKeywordPattern})\\s*\\(`,
        "g",
      ),
    },
  ];

  const evidence = new Set();
  for (const { label, pattern } of patterns) {
    let match;
    while ((match = pattern.exec(functionBody)) !== null) {
      const helperName = match[1];
      if (helperName !== transactionName) {
        evidence.add(`${label}${helperName}(`);
      }
      if (match[0].length === 0) {
        pattern.lastIndex += 1;
      }
    }
  }

  return [...evidence].sort();
}

function validateRepositoryDoesNotOwnTransfers(repositoryContent) {
  const stripped = stripRustComments(repositoryContent);
  for (const transaction of transferTransactions) {
    const repositoryFunction = findPublicFunction(stripped, transaction.functionName);
    if (repositoryFunction) {
      failures.push(
        `${toRelative(repositoryAccountsFile)}:${repositoryFunction.line} 存在 pub fn ${transaction.functionName}(...)，${transaction.label}入口不能由 repository owning`,
      );
    }
  }
}

function validateUsecaseOwnsTransfers(usecaseContent) {
  const stripped = stripRustComments(usecaseContent);
  for (const transaction of transferTransactions) {
    const usecaseFunction = findPublicFunction(stripped, transaction.functionName);
    if (!usecaseFunction) {
      failures.push(
        `${toRelative(usecaseAccountsFile)} 缺少 pub fn ${transaction.functionName}(...)，${transaction.label}应由 application/usecase owning`,
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
        `${toRelative(usecaseAccountsFile)}:${usecaseFunction.line} ${transaction.functionName} 仍直接转发 accounts_repository::${transaction.functionName}(...)，导入导出事务 owner 仍在 repository`,
      );
    }

    const helperEvidence = collectRepositoryHelperEvidence(functionBody, transaction.functionName);
    helperEvidenceByFunction.set(transaction.functionName, helperEvidence);
    if (helperEvidence.length === 0) {
      failures.push(
        `${toRelative(usecaseAccountsFile)}:${usecaseFunction.line} ${transaction.functionName} 函数体缺少 load/read/write/save/snapshot/import/export/json 等 repository helper 调用证据`,
      );
    }
  }
}

function validateExportPlatformOwner(commandsContent, usecaseContent) {
  if (!commandsContent.includes("use crate::platform::system::SystemPlatformAdapter;")) {
    failures.push(
      `${toRelative(commandsAccountsFile)} 必须由 command 装配 SystemPlatformAdapter，再交给 usecase`,
    );
  }
  if (!/let\s+system\s*=\s*SystemPlatformAdapter\s*;/.test(commandsContent)) {
    failures.push(
      `${toRelative(commandsAccountsFile)} export_accounts_to_file 必须创建 system platform adapter`,
    );
  }
  if (
    !/usecase::accounts::export_accounts_to_file\s*\(\s*&repo\s*,\s*&system\s*,\s*target_path\s*,\s*account_keys\s*\)/.test(
      commandsContent,
    )
  ) {
    failures.push(
      `${toRelative(commandsAccountsFile)} export_accounts_to_file 必须把 system port 传入 usecase`,
    );
  }
  if (!usecaseContent.includes("use crate::application::ports::AppSystemPort;")) {
    failures.push(`${toRelative(usecaseAccountsFile)} 必须通过 AppSystemPort 消费系统信息`);
  }
  if (!/system\s*:\s*&impl\s+AppSystemPort/.test(usecaseContent)) {
    failures.push(`${toRelative(usecaseAccountsFile)} export_accounts_to_file 必须接收 AppSystemPort`);
  }
  if (!/system\s*\.\s*system_info\s*\(\s*\)\s*\.\s*hostname/.test(usecaseContent)) {
    failures.push(
      `${toRelative(usecaseAccountsFile)} export_accounts_to_file 必须通过 platform port 读取 hostname`,
    );
  }
  if (/\bhostname\s*::\s*get\s*\(/.test(stripRustComments(usecaseContent))) {
    failures.push(`${toRelative(usecaseAccountsFile)} usecase 不得直接调用 hostname::get()`);
  }
}

function validateRepositoryAtomicWrites(repositoryContent) {
  const stripped = stripRustComments(repositoryContent);
  const required = [
    {
      pattern: /\bfn\s+write_json_pretty_atomic\s*<\s*T\s*:\s*Serialize\s*>/,
      reason: "accounts repository 必须有统一 JSON 原子写 helper",
    },
    {
      pattern: /\blet\s+tmp_path\s*=\s*path\s*\.\s*with_extension\s*\(\s*"json\.tmp"\s*\)/,
      reason: "accounts repository 必须使用同路径临时 JSON 文件",
    },
    {
      pattern: /\.write_string\s*\(\s*&tmp_path\s*,/,
      reason: "accounts repository 必须先写临时文件",
    },
    {
      pattern: /\.rename\s*\(\s*&tmp_path\s*,\s*path\s*\)/,
      reason: "accounts repository 必须通过 rename 原子替换目标文件",
    },
    {
      pattern: /\bwrite_json_pretty_atomic\s*\(\s*repo\s*,\s*&repo\s*\.\s*paths\s*\(\s*\)\s*\.\s*registry_path\s*,\s*document\s*,?\s*\)/,
      reason: "save_registry 必须使用原子写 helper",
    },
    {
      pattern: /\bwrite_json_pretty_atomic\s*\(\s*repo\s*,\s*path\s*,\s*document\s*,?\s*\)/,
      reason: "write_json_pretty 必须委托原子写 helper",
    },
    {
      pattern: /\bwrite_json_pretty_atomic\s*\(\s*repo\s*,\s*&snapshot_path\s*\(\s*repo\s*,\s*item\s*\)\s*,\s*value\s*,?\s*\)/,
      reason: "write_snapshot_json 必须委托原子写 helper",
    },
  ];

  for (const { pattern, reason } of required) {
    if (!pattern.test(stripped)) {
      failures.push(`${toRelative(repositoryAccountsFile)} ${reason}`);
    }
  }
}

function validateAccountsTransferMap(mapContent, sourceMapContent, reconstructionReadmeContent) {
  const requiredMapParts = [
    "# accounts transfer current-source 证据映射",
    "`export_accounts_to_file`",
    "`preview_account_import`",
    "`import_accounts_from_file`",
    "`SystemPlatformAdapter`",
    "`AppSystemPort`",
    "`json.tmp`",
    "`rename`",
    "不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成",
    "不接入 `voice`",
    "scripts/validate-backend-accounts-transfer-owner.mjs",
  ];
  for (const part of requiredMapParts) {
    if (!mapContent.includes(part)) {
      failures.push(`${toRelative(accountsTransferMapFile)} 缺少 ${part}`);
    }
  }

  const requiredIndexParts = [
    "docs/reconstruction/accounts-transfer-current-source-map.md",
    "accounts transfer 后端文件事务 owner",
    "scripts/validate-backend-accounts-transfer-owner.mjs",
  ];
  for (const part of requiredIndexParts) {
    if (!sourceMapContent.includes(part)) {
      failures.push(`${toRelative(sourceMapFile)} 缺少 ${part}`);
    }
    if (!reconstructionReadmeContent.includes(part)) {
      failures.push(`${toRelative(reconstructionReadmeFile)} 缺少 ${part}`);
    }
  }
}

const commandsContent = readRequiredUtf8(commandsAccountsFile, "commands accounts 文件");
const repositoryContent = readRequiredUtf8(repositoryAccountsFile, "repository accounts 文件");
const usecaseContent = readRequiredUtf8(usecaseAccountsFile, "application/usecase accounts 文件");
const accountsTransferMapContent = readRequiredUtf8(
  accountsTransferMapFile,
  "accounts transfer current-source map",
);
const sourceMapContent = readRequiredUtf8(sourceMapFile, "reconstruction source-map");
const reconstructionReadmeContent = readRequiredUtf8(
  reconstructionReadmeFile,
  "reconstruction README",
);

if (repositoryContent.length > 0) {
  validateRepositoryDoesNotOwnTransfers(repositoryContent);
  validateRepositoryAtomicWrites(repositoryContent);
}

if (usecaseContent.length > 0) {
  validateUsecaseOwnsTransfers(usecaseContent);
}

if (commandsContent.length > 0 && usecaseContent.length > 0) {
  validateExportPlatformOwner(commandsContent, usecaseContent);
}

if (
  accountsTransferMapContent.length > 0 &&
  sourceMapContent.length > 0 &&
  reconstructionReadmeContent.length > 0
) {
  validateAccountsTransferMap(
    accountsTransferMapContent,
    sourceMapContent,
    reconstructionReadmeContent,
  );
}

if (failures.length > 0) {
  console.error("FAIL 后端账号导入导出 owner 校验失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log(
  "PASS 后端账号导入导出 owner 校验通过：repository 未暴露 export/preview/import 用户动作入口，hostname 由 platform port 提供，账号 JSON 写入使用 temp+rename。",
);
for (const transaction of transferTransactions) {
  const evidence = helperEvidenceByFunction.get(transaction.functionName) ?? [];
  console.log(`PASS ${transaction.label} usecase helper 证据：${evidence.join(", ")}`);
}
