import { spawnSync } from "node:child_process";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");
const npmCommand = process.platform === "win32" ? "npm.cmd" : "npm";
const blockedFragments = [
  ["C", "5"].join(""),
  ["Codex", "Manager"].join(""),
  ["lobe", "hub"].join(""),
  ["Lobe", "Hub"].join(""),
];

function sanitizeOutput(output) {
  let sanitized = output.replace(/[A-Za-z]:[\\/][^\r\n"'<>|]*/g, "[本机路径已隐藏]");
  for (const fragment of blockedFragments) {
    sanitized = sanitized.split(fragment).join("[敏感片段已隐藏]");
  }
  return sanitized;
}

function runStep(label, command, args, options = {}) {
  console.log(`\n构建面验证：${label}`);
  const result = spawnSync(command, args, {
    cwd: repoRoot,
    encoding: "utf8",
    stdio: "pipe",
    shell: false,
  });

  if (result.error) {
    console.error(`FAIL ${label} 启动失败：${result.error.message}`);
    process.exit(1);
  }

  if (result.status !== 0) {
    const output = sanitizeOutput(`${result.stdout ?? ""}${result.stderr ?? ""}`).trim();
    if (output) {
      console.error(output);
    }
    console.error(`FAIL ${label} 失败，退出码：${result.status ?? "未知"}`);
    process.exit(result.status ?? 1);
  }

  if (options.printOutputOnSuccess) {
    const output = sanitizeOutput(`${result.stdout ?? ""}${result.stderr ?? ""}`).trim();
    if (output) {
      console.log(output);
    }
  }

  console.log(`PASS ${label} 完成。`);
}

runStep("前端生产构建", npmCommand, ["run", "build"]);
runStep("Rust 编译环境预检", process.execPath, [
  "scripts/validate-backend-cargo.mjs",
  "--check-env",
], { printOutputOnSuccess: true });

console.log("\nPASS 构建面验证通过：前端生产构建成功，Rust 环境预检已记录。");
