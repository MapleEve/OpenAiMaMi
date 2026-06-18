import { execFileSync } from "node:child_process";
import { existsSync } from "node:fs";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");

const validators = [
  "validate-public-boundary.mjs",
  "validate-frontend.mjs",
  "validate-backend.mjs",
];

for (const script of validators) {
  const scriptPath = join(repoRoot, "scripts", script);
  if (!existsSync(scriptPath)) {
    console.error(`缺少顶层验证脚本：scripts/${script}`);
    process.exit(1);
  }

  console.log(`\n顶层聚合验证：scripts/${script}`);
  execFileSync(process.execPath, [scriptPath], {
    cwd: repoRoot,
    stdio: "inherit",
  });
}

console.log(`\n顶层聚合验证通过：${validators.length} 项。`);
