import { readFileSync } from "node:fs";
import { join, relative } from "node:path";

const repoRoot = process.cwd();

const checks = [
  {
    file: "src/lib/time.ts",
    forbidden: [
      "刚刚",
      "分钟前",
      "小时前",
      "天前",
      "分钟",
      "小时",
      "just now",
      "m ago",
      "h ago",
      "d ago",
      "m remaining",
    ],
  },
  {
    file: "src/utils/router.tsx",
    forbidden: ["路由加载失败", "Route failed to load"],
  },
  {
    file: "src/lib/templates.ts",
    forbidden: [
      "高密度中文工程助手",
      "严格代码审查",
      "安全修复优先",
      "前端体验优化",
      "Dense Chinese Engineering Assistant",
      "Strict Code Review",
      "Safe Fix First",
      "Frontend Experience Polish",
      "默认使用简体中文",
      "Use Simplified Chinese by default",
    ],
  },
  {
    file: "src/mocks/fixtures/commands.ts",
    forbidden: [
      'name: "Web Tools"',
      'title: "Web Tools"',
      'name: "Image Support"',
      'title: "Image Support"',
      'message: "ok"',
      'message: "official passthrough blocked"',
      'errorMessage: missingTarget ? "relay test mock terminal 缺少目标"',
      'title: "缺少路由托管块"',
      'message: "已启用 Codex Router，但 config.toml 中没有检测到受管路由配置块。"',
      'detail: "需要重新写入路由配置，避免前端状态和本地配置不一致。"',
      'label: "路由开关"',
      '"relay 状态已启用 Codex Router。"',
      '"relay 状态未启用 Codex Router。"',
      'label: "受管路由配置块"',
      '"config.toml 中未检测到受管路由配置块。"',
      '"当前不需要受管路由配置块。"',
      'message: "已处理可自动修复的 Codex Router 诊断项。"',
      'message: "已移除过期 Codex Router 配置。"',
      'message: "该诊断项需要手动处理，不能自动改写用户 profile。"',
      'message: "该诊断项已确认，但当前 mock 不自动修改相关外部状态。"',
      '"请手动确认 config.toml 顶层 profile 与路由配置的关系。"',
      '"保留只读诊断结果，避免在证据不足时改写用户环境。"',
    ],
  },
];

const failures = [];

function readJson(path) {
  return JSON.parse(readFileSync(path, "utf8"));
}

function hasLocaleKey(locale, key) {
  let current = locale;
  for (const part of key.split(".")) {
    if (!current || typeof current !== "object" || !(part in current)) {
      return false;
    }
    current = current[part];
  }
  return typeof current === "string";
}

for (const check of checks) {
  const filePath = join(repoRoot, check.file);
  const text = readFileSync(filePath, "utf8");
  for (const phrase of check.forbidden) {
    if (text.includes(phrase)) {
      failures.push(
        `${relative(repoRoot, filePath).replaceAll("\\", "/")} 仍包含硬编码用户可见文案：${phrase}`,
      );
    }
  }
}

const mockCommandsPath = join(repoRoot, "src/mocks/fixtures/commands.ts");
const mockCommandsText = readFileSync(mockCommandsPath, "utf8");
const zhLocale = readJson(join(repoRoot, "src/locales/zh.json"));
const enLocale = readJson(join(repoRoot, "src/locales/en.json"));
const mockLocaleKeys = [
  ...mockCommandsText.matchAll(/"(?:plugins|relay)\.mock\.[A-Za-z0-9_.-]+"/g),
].map((match) => match[0].slice(1, -1));

for (const key of new Set(mockLocaleKeys)) {
  if (!hasLocaleKey(zhLocale, key) || !hasLocaleKey(enLocale, key)) {
    failures.push(`src/mocks/fixtures/commands.ts 引用的 mock locale key 未同步 zh/en：${key}`);
  }
}

if (failures.length > 0) {
  console.error("前端文案 owner 验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("前端文案 owner 验证通过。");
