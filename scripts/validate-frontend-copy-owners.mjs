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
];

const failures = [];

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

if (failures.length > 0) {
  console.error("前端文案 owner 验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("前端文案 owner 验证通过。");
