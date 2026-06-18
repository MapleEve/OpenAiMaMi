import { execFileSync } from "node:child_process";
import { existsSync } from "node:fs";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");

const validators = [
  ["generate-frontend-copy-acceptance.mjs", "--check"],
  ["generate-frontend-leaf-restoration-queue.mjs", "--check"],
  ["validate-frontend-dumped.mjs"],
  ["validate-frontend-evidence.mjs"],
  ["validate-frontend-current-source-closeouts.mjs"],
  ["validate-frontend-plugins-current-source.mjs"],
  ["validate-frontend-ui-theme-current-source.mjs"],
  ["validate-frontend-layer-owners.mjs"],
  ["validate-frontend-entry-architecture.mjs"],
  ["validate-frontend-accounts-sessions-cache.mjs"],
  ["validate-frontend-relay-cache.mjs"],
  ["validate-frontend-maintenance-cache.mjs"],
  ["validate-frontend-system-usage-hotspot-mystery-cache.mjs"],
  ["validate-frontend-system-hotspot-current-source.mjs"],
  ["validate-frontend-mcp-skills-current-source.mjs"],
  ["validate-frontend-daemon-autoswitch-cache.mjs"],
  ["validate-frontend-plugins-cache.mjs"],
  ["validate-frontend-mcp-cache.mjs"],
  ["validate-frontend-skills-cache.mjs"],
  ["validate-frontend-custom-instructions-cache.mjs"],
  ["validate-frontend-relay-http-terminal-ccf.mjs"],
  ["validate-frontend-tray-current-source.mjs"],
  ["validate-frontend-mystery-gates.mjs"],
  ["validate-frontend-voice-boundary.mjs"],
  ["validate-frontend-leaf-copy-acceptance.mjs"],
  ["validate-analytics-query-sequence.mjs"],
  ["validate-frontend-copy-owners.mjs"],
  ["validate-frontend-visible-copy.mjs"],
  ["validate-i18n.mjs"],
  ["validate-e2e-mocks.mjs"],
];

for (const [script, ...args] of validators) {
  const scriptPath = join(repoRoot, "scripts", script);
  if (!existsSync(scriptPath)) {
    console.error(`缺少前端验证脚本：scripts/${script}`);
    process.exit(1);
  }

  const suffix = args.length > 0 ? ` ${args.join(" ")}` : "";
  console.log(`\n前端聚合验证：scripts/${script}${suffix}`);
  execFileSync(process.execPath, [scriptPath, ...args], {
    cwd: repoRoot,
    stdio: "inherit",
  });
}

console.log(`\n前端聚合验证通过：${validators.length} 项。`);
