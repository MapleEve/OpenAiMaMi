import { existsSync, readdirSync, readFileSync } from "node:fs";
import { extname, join, relative, sep } from "node:path";

const repoRoot = process.cwd();
const failures = [];
const sourceExtensions = new Set([".ts", ".tsx"]);

const boundaryTargets = [
  {
    name: "route registry",
    path: join(repoRoot, "src", "routes", "registry"),
    recursive: true,
  },
  {
    name: "navigation type",
    path: join(repoRoot, "src", "types", "navigation.ts"),
    recursive: false,
  },
  {
    name: "runtime initializer",
    path: join(repoRoot, "src", "app", "runtime"),
    recursive: true,
  },
  {
    name: "API wrapper",
    path: join(repoRoot, "src", "lib", "api.ts"),
    recursive: false,
  },
];

const mockCommandsPath = join(
  repoRoot,
  "src",
  "mocks",
  "fixtures",
  "commands.ts",
);

const allowedSkeletonDirectories = [
  join(repoRoot, "src", "features", "voice"),
  join(repoRoot, "src", "services", "voice"),
];

function toRepoPath(path) {
  return relative(repoRoot, path).replaceAll(sep, "/");
}

function addFailure(message) {
  failures.push(message);
}

function readRequired(path) {
  if (!existsSync(path)) {
    addFailure(`缺少必需文件：${toRepoPath(path)}`);
    return "";
  }
  return readFileSync(path, "utf8");
}

function walkFiles(root, predicate) {
  if (!existsSync(root)) {
    addFailure(`缺少必需目录：${toRepoPath(root)}`);
    return [];
  }

  const ignoredDirectories = new Set([".git", "node_modules", "dist", "target"]);
  const pending = [root];
  const files = [];

  while (pending.length > 0) {
    const current = pending.pop();
    if (!current) continue;

    for (const entry of readdirSync(current, { withFileTypes: true })) {
      const next = join(current, entry.name);
      if (entry.isDirectory()) {
        if (!ignoredDirectories.has(entry.name)) pending.push(next);
        continue;
      }
      if (entry.isFile() && (!predicate || predicate(next))) files.push(next);
    }
  }

  return files.sort();
}

function sourceFilesForTarget(target) {
  if (target.recursive) {
    return walkFiles(target.path, (path) => sourceExtensions.has(extname(path)));
  }

  if (!existsSync(target.path)) {
    addFailure(`缺少必需文件：${toRepoPath(target.path)}`);
    return [];
  }

  return sourceExtensions.has(extname(target.path)) ? [target.path] : [];
}

function stripComments(source) {
  let output = "";
  let inString = false;
  let stringQuote = "";
  let escaping = false;
  let inLineComment = false;
  let inBlockComment = false;

  for (let index = 0; index < source.length; index += 1) {
    const char = source[index];
    const next = source[index + 1] ?? "";

    if (inLineComment) {
      if (char === "\n") {
        inLineComment = false;
        output += "\n";
      } else {
        output += " ";
      }
      continue;
    }

    if (inBlockComment) {
      if (char === "*" && next === "/") {
        output += "  ";
        inBlockComment = false;
        index += 1;
      } else {
        output += char === "\n" ? "\n" : " ";
      }
      continue;
    }

    if (inString) {
      output += char;
      if (escaping) {
        escaping = false;
      } else if (char === "\\") {
        escaping = true;
      } else if (char === stringQuote) {
        inString = false;
        stringQuote = "";
      }
      continue;
    }

    if (char === "/" && next === "/") {
      output += "  ";
      inLineComment = true;
      index += 1;
      continue;
    }

    if (char === "/" && next === "*") {
      output += "  ";
      inBlockComment = true;
      index += 1;
      continue;
    }

    if (char === '"' || char === "'" || char === "`") {
      inString = true;
      stringQuote = char;
      output += char;
      continue;
    }

    output += char;
  }

  return output;
}

function lineNumberAt(source, index) {
  return source.slice(0, index).split(/\r?\n/).length;
}

function findVoiceTokens(source) {
  const commentFreeSource = stripComments(source);
  const pattern = /(^|[^A-Za-z0-9])voice[A-Za-z0-9_]*/gi;
  const matches = [];
  let match = pattern.exec(commentFreeSource);

  while (match) {
    matches.push({
      line: lineNumberAt(commentFreeSource, match.index + match[1].length),
      token: match[0].slice(match[1].length),
    });
    match = pattern.exec(commentFreeSource);
  }

  return matches;
}

function validateNoVoiceBoundaryEntry() {
  for (const target of boundaryTargets) {
    const files = sourceFilesForTarget(target);
    for (const file of files) {
      const source = readRequired(file);
      const matches = findVoiceTokens(source);
      for (const match of matches) {
        addFailure(
          `${toRepoPath(file)}:${match.line} 发现可触达 voice 入口或 voice API wrapper：${match.token}`,
        );
      }
    }
  }
}

function validateNoVoiceMockCommandHandler() {
  const source = readRequired(mockCommandsPath);
  if (!source) return;

  const matches = findVoiceTokens(source);
  for (const match of matches) {
    addFailure(
      `${toRepoPath(mockCommandsPath)}:${match.line} 发现 voice command handler：${match.token}`,
    );
  }
}

function validateVoiceSkeletonDirectories() {
  for (const directory of allowedSkeletonDirectories) {
    if (!existsSync(directory)) {
      addFailure(`缺少公开 voice 空骨架目录：${toRepoPath(directory)}`);
    }
  }
}

validateNoVoiceBoundaryEntry();
validateNoVoiceMockCommandHandler();
validateVoiceSkeletonDirectories();

if (failures.length > 0) {
  console.error("FAIL：前端 voice 边界验证失败");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("PASS：前端 voice 边界验证通过，voice 未重新接入口，公开空骨架仍存在。");
