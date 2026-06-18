import { existsSync, readdirSync, readFileSync } from "node:fs";
import { extname, join, relative } from "node:path";
import ts from "typescript";

const repoRoot = process.cwd();
const srcRoot = join(repoRoot, "src");
const zh = readJson(join(srcRoot, "locales", "zh.json"));
const en = readJson(join(srcRoot, "locales", "en.json"));

const visiblePropertyNames = new Set([
  "aria-label",
  "alt",
  "description",
  "detail",
  "details",
  "errorMessage",
  "label",
  "message",
  "note",
  "placeholder",
  "serviceLabel",
  "summary",
  "title",
]);

const visibleVariableNames = new Set(["detail", "details", "errorMessage", "message", "note", "serviceLabel", "summary", "title"]);
const allowedLiteralValues = new Set(["", " ", "\u00a0", "--"]);
const allowedTextPatterns = [
  /^[a-z][a-z0-9.-]*(?:\.[a-z0-9.-]+)+$/i,
  /^[A-Z0-9_:-]+$/,
  /^#[0-9A-Fa-f]{3,8}$/,
  /^https?:\/\//,
  /^data:/,
  /^[-_./A-Za-z0-9]+$/,
  /^mock scenario /,
  /^Skeleton diagnostic pending; no repository checks were executed\.$/,
  /^dumped 证据只确认/,
  /^后端业务实现由后续 PR /,
  /^system runtime watcher 已恢复进程内状态合同；mock 不创建真实线程、不发送事件。$/,
  /^使用量刷新活动已写入 mock watcher state，并递增 notify 序列。$/,
  /^全量运行时刷新请求命中 mock 8 秒 debounce。$/,
  /^全量运行时刷新请求已写入 mock watcher state。$/,
  /^模拟守护任务已运行$/,
];

const failures = [];

function readJson(path) {
  return JSON.parse(readFileSync(path, "utf8"));
}

function toRepoPath(path) {
  return relative(repoRoot, path).replaceAll("\\", "/");
}

function walkFiles(root) {
  const pending = [root];
  const files = [];
  while (pending.length > 0) {
    const current = pending.pop();
    for (const entry of readdirSync(current, { withFileTypes: true })) {
      const next = join(current, entry.name);
      if (entry.isDirectory()) {
        if (entry.name === "locales") continue;
        if (entry.name === "restoration") continue;
        pending.push(next);
      } else if (entry.isFile()) {
        const extension = extname(entry.name).toLowerCase();
        if ((extension === ".ts" || extension === ".tsx") && !entry.name.endsWith(".d.ts")) {
          files.push(next);
        }
      }
    }
  }
  return files;
}

function hasLocaleKey(locale, key) {
  let current = locale;
  for (const part of key.split(".")) {
    if (!current || typeof current !== "object" || !(part in current)) return false;
    current = current[part];
  }
  return typeof current === "string";
}

function isHumanVisibleLiteral(value) {
  if (allowedLiteralValues.has(value)) return false;
  if (allowedTextPatterns.some((pattern) => pattern.test(value))) return false;
  if (/[\u4e00-\u9fff]/.test(value)) return true;
  return /[A-Za-z][a-z]+(?:\s+[A-Za-z][a-z]+){2,}/.test(value);
}

function getStringValue(node) {
  if (ts.isStringLiteral(node) || ts.isNoSubstitutionTemplateLiteral(node)) return node.text;
  if (ts.isJsxText(node)) return node.getText().replace(/\s+/g, " ").trim();
  return null;
}

function propertyNameText(name) {
  if (!name) return null;
  if (ts.isIdentifier(name) || ts.isStringLiteral(name) || ts.isNumericLiteral(name)) return name.text;
  return null;
}

function isLocaleCallArgument(node) {
  const parent = node.parent;
  if (!parent || !ts.isCallExpression(parent) || parent.arguments[0] !== node) return false;
  const expression = parent.expression;
  if (ts.isIdentifier(expression)) return expression.text === "t" || expression.text === "mockCopy";
  if (ts.isPropertyAccessExpression(expression)) return expression.name.text === "t";
  return false;
}

function isImportOrModuleSpecifier(node) {
  const parent = node.parent;
  return Boolean(
    parent &&
      (ts.isImportDeclaration(parent) ||
        ts.isExportDeclaration(parent) ||
        (ts.isExternalModuleReference(parent) && parent.expression === node)),
  );
}

function isObjectPropertyName(node) {
  const parent = node.parent;
  return Boolean(parent && ts.isPropertyAssignment(parent) && parent.name === node);
}

function nearestVisibleProperty(node) {
  let current = node.parent;
  while (current) {
    if (ts.isPropertyAssignment(current)) {
      const name = propertyNameText(current.name);
      return name && visiblePropertyNames.has(name) ? name : null;
    }
    if (ts.isFunctionLike(current) || ts.isSourceFile(current)) return null;
    current = current.parent;
  }
  return null;
}

function nearestVisibleVariable(node) {
  let current = node.parent;
  while (current) {
    if (ts.isVariableDeclaration(current) && ts.isIdentifier(current.name)) {
      return visibleVariableNames.has(current.name.text) ? current.name.text : null;
    }
    if (ts.isFunctionLike(current) || ts.isSourceFile(current)) return null;
    current = current.parent;
  }
  return null;
}

function visibleAssignmentName(node) {
  const parent = node.parent;
  if (
    parent &&
    ts.isBinaryExpression(parent) &&
    parent.right === node &&
    parent.operatorToken.kind === ts.SyntaxKind.EqualsToken &&
    ts.isPropertyAccessExpression(parent.left)
  ) {
    const name = parent.left.name.text;
    return visiblePropertyNames.has(name) ? name : null;
  }
  return null;
}

function report(file, sourceFile, node, reason, value) {
  const { line, character } = sourceFile.getLineAndCharacterOfPosition(node.getStart(sourceFile));
  failures.push(`${toRepoPath(file)}:${line + 1}:${character + 1} ${reason}：${JSON.stringify(value)}`);
}

function validateLocaleCall(file, sourceFile, node, value) {
  if (!isLocaleCallArgument(node)) return;
  if (!hasLocaleKey(zh, value) || !hasLocaleKey(en, value)) {
    report(file, sourceFile, node, "locale key 未同步 zh/en", value);
  }
}

function validateFormatInvokeErrorDefault(file, sourceFile, node, value) {
  if (!ts.isParameter(node.parent)) return;
  const parameter = node.parent;
  if (!ts.isIdentifier(parameter.name) || parameter.name.text !== "fallback") return;
  const fn = parameter.parent;
  if (!fn || !ts.isFunctionDeclaration(fn) || fn.name?.text !== "formatInvokeError") return;
  if (value.trim()) {
    report(file, sourceFile, node, "formatInvokeError 默认 fallback 不得内置用户可见文案", value);
  }
}

function validateSourceFile(file) {
  const sourceText = readFileSync(file, "utf8");
  const sourceFile = ts.createSourceFile(file, sourceText, ts.ScriptTarget.Latest, true, file.endsWith(".tsx") ? ts.ScriptKind.TSX : ts.ScriptKind.TS);

  function visit(node) {
    const value = getStringValue(node);
    if (value !== null) {
      validateLocaleCall(file, sourceFile, node, value);
      validateFormatInvokeErrorDefault(file, sourceFile, node, value);

      if (
        !isLocaleCallArgument(node) &&
        !isImportOrModuleSpecifier(node) &&
        !isObjectPropertyName(node) &&
        isHumanVisibleLiteral(value)
      ) {
        if (ts.isJsxText(node)) {
          report(file, sourceFile, node, "JSX 文本必须进入 locale", value);
        }

        const parent = node.parent;
        if (parent && ts.isJsxAttribute(parent)) {
          const name = parent.name.text;
          if (visiblePropertyNames.has(name)) {
            report(file, sourceFile, node, `JSX ${name} 必须进入 locale`, value);
          }
        }

        const propertyName = nearestVisibleProperty(node);
        if (propertyName) {
          report(file, sourceFile, node, `mock/API 可见字段 ${propertyName} 必须进入 locale`, value);
        }

        const variableName = nearestVisibleVariable(node);
        if (variableName) {
          report(file, sourceFile, node, `可见变量 ${variableName} 必须进入 locale`, value);
        }

        const assignmentName = visibleAssignmentName(node);
        if (assignmentName) {
          report(file, sourceFile, node, `可见赋值 ${assignmentName} 必须进入 locale`, value);
        }
      }
    }

    ts.forEachChild(node, visit);
  }

  visit(sourceFile);
}

for (const file of walkFiles(srcRoot)) {
  if (!existsSync(file)) continue;
  validateSourceFile(file);
}

if (failures.length > 0) {
  console.error("前端用户可见文案验证失败：");
  for (const failure of failures.slice(0, 80)) {
    console.error(`- ${failure}`);
  }
  if (failures.length > 80) {
    console.error(`- 其余 ${failures.length - 80} 项省略`);
  }
  process.exit(1);
}

console.log("前端用户可见文案验证通过：可见 JSX、属性、mock/API 字段和错误 fallback 均收口到 locale 或显式非文案值。");
