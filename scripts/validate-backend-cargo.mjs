import { execFileSync, spawnSync } from "node:child_process";

const checkEnvOnly = process.argv.includes("--check-env");
const manifestPath = "src-tauri/Cargo.toml";

function run(command, args, options = {}) {
  return spawnSync(command, args, {
    encoding: "utf8",
    stdio: options.stdio ?? "pipe",
    shell: false,
  });
}

function commandVersion(command, args) {
  const result = run(command, args);
  if (result.error || result.status !== 0) {
    return {
      ok: false,
      detail: result.error?.message ?? result.stderr?.trim() ?? "命令不可用",
    };
  }
  return { ok: true, detail: (result.stdout || result.stderr).trim() };
}

function rustHost() {
  const result = run("rustc", ["-vV"]);
  if (result.error || result.status !== 0) return "";
  const hostLine = result.stdout
    .split(/\r?\n/)
    .find((line) => line.startsWith("host:"));
  return hostLine?.replace("host:", "").trim() ?? "";
}

function hasWindowsMsvcLinker() {
  const result = run("where.exe", ["link"]);
  return !result.error && result.status === 0 && result.stdout.trim().length > 0;
}

function printEnvCheck(label, result) {
  console.log(`${result.ok ? "PASS" : "FAIL"} ${label}：${result.detail}`);
}

const cargo = commandVersion("cargo", ["--version"]);
const rustc = commandVersion("rustc", ["--version"]);
printEnvCheck("cargo 可用", cargo);
printEnvCheck("rustc 可用", rustc);

const host = rustc.ok ? rustHost() : "";
if (host) {
  console.log(`INFO Rust host target：${host}`);
}

const needsMsvcLinker = process.platform === "win32" && host.endsWith("-pc-windows-msvc");
const linkerOk = !needsMsvcLinker || hasWindowsMsvcLinker();
if (needsMsvcLinker) {
  printEnvCheck("MSVC link.exe 可用", {
    ok: linkerOk,
    detail: linkerOk
      ? "已找到 Windows MSVC linker"
      : "未找到 link.exe；请安装 Visual Studio Build Tools，或在 Developer PowerShell / Developer Command Prompt 中运行。本项是环境限制，不代表源码失败。",
  });
}

const envOk = cargo.ok && rustc.ok && linkerOk;
if (checkEnvOnly) {
  console.log(envOk ? "PASS Rust 编译环境预检通过" : "INFO Rust 编译环境预检未满足，已按 --check-env 仅记录环境状态");
  process.exit(0);
}

if (!envOk) {
  console.error("FAIL Rust 编译环境未满足，未运行 cargo check/test。");
  process.exit(1);
}

for (const [label, args] of [
  ["cargo check", ["check", "--manifest-path", manifestPath]],
  ["cargo test", ["test", "--manifest-path", manifestPath]],
]) {
  console.log(`\n后端 Rust 验证：${label}`);
  execFileSync("cargo", args, {
    stdio: "inherit",
  });
}

console.log("\nPASS 后端 Rust cargo check/test 验证通过");
