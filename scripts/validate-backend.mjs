import { execFileSync } from "node:child_process";
import { existsSync } from "node:fs";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");

const validators = [
  "validate-backend-hexagonal.mjs",
  "validate-backend-contract-owners.mjs",
  "validate-backend-platform-actions-owner.mjs",
  "validate-backend-diagnostics-owner.mjs",
  "validate-backend-accounts-owner.mjs",
  "validate-backend-accounts-transfer-owner.mjs",
  "validate-backend-mcp-owner.mjs",
  "validate-backend-runtime-extensions-owner.mjs",
  "validate-backend-custom-instructions-owner.mjs",
  "validate-backend-analytics-owner.mjs",
  "validate-backend-relay-owner.mjs",
  "validate-backend-daemon-owner.mjs",
  "validate-backend-maintenance-owner.mjs",
  "validate-backend-settings-owner.mjs",
  "validate-backend-system-owner.mjs",
  "validate-backend-tray-owner.mjs",
  "validate-backend-mystery-owner.mjs",
  "validate-backend-hotspot-owner.mjs",
  "validate-backend-sessions-owner.mjs",
  "validate-backend-skills-owner.mjs",
  "validate-backend-voice-owner.mjs",
];

for (const script of validators) {
  const scriptPath = join(repoRoot, "scripts", script);
  if (!existsSync(scriptPath)) {
    console.error(`缺少后端验证脚本：scripts/${script}`);
    process.exit(1);
  }

  console.log(`\n后端聚合验证：scripts/${script}`);
  execFileSync(process.execPath, [scriptPath], {
    cwd: repoRoot,
    stdio: "inherit",
  });
}

console.log(`\n后端聚合验证通过：${validators.length} 项。`);
