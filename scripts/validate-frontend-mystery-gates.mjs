import { existsSync, readdirSync, readFileSync, statSync } from "node:fs";
import path from "node:path";

const root = process.cwd();
const failures = [];

function read(relativePath) {
  return readFileSync(path.join(root, relativePath), "utf8");
}

function assert(condition, message) {
  if (!condition) failures.push(message);
}

function listFiles(directory) {
  const entries = readdirSync(directory, { withFileTypes: true });
  return entries.flatMap((entry) => {
    const fullPath = path.join(directory, entry.name);
    const relativePath = path.relative(root, fullPath).replaceAll(path.sep, "/");
    if ([".git", "node_modules", "dist", "target"].includes(entry.name)) return [];
    if (entry.isDirectory()) return listFiles(fullPath);
    return [relativePath];
  });
}

const gatesPath = "src/routes/registry/gates.ts";
assert(existsSync(path.join(root, gatesPath)), "缺少 src/routes/registry/gates.ts");

const gates = existsSync(path.join(root, gatesPath)) ? read(gatesPath) : "";
const meta = read("src/routes/registry/meta.ts");
const preload = read("src/routes/registry/preload.ts");
const registry = read("src/routes/registry/registry.tsx");

assert(
  /relayModel/.test(gates) && /relay["']/.test(gates),
  "gates.ts 缺少 relayModel 到 relay 的映射",
);
assert(
  /resolveRouteVisibility/.test(meta) && /MysteryRouteGateContext/.test(meta),
  "meta.ts 未使用 mystery gates helper 或上下文类型",
);
assert(
  /resolveRouteVisibility/.test(preload) && /MysteryRouteGateContext/.test(preload),
  "preload.ts 未使用 mystery gates helper 或上下文类型",
);
assert(!/route:\s*["']voice["']/.test(registry), "registry.tsx 不应出现 voice route");

const scannedFiles = listFiles(root).filter((file) => {
  if (!existsSync(path.join(root, file)) || statSync(path.join(root, file)).isDirectory()) {
    return false;
  }
  return !/\.(png|jpe?g|gif|webp|ico|icns|exe|dll|zip|gz|tar|lock)$/i.test(file);
});

const externalReferenceNames = [
  { label: "C" + "5", pattern: new RegExp("\\b" + "C" + "5" + "\\b") },
  { label: "Codex" + "Manager", pattern: new RegExp("Codex" + "Manager") },
  { label: "lobe" + "hub", pattern: new RegExp("lobe" + "hub", "i") },
];

for (const file of scannedFiles) {
  const content = read(file);
  for (const referenceName of externalReferenceNames) {
    assert(
      !referenceName.pattern.test(content),
      `${file} 出现外部参考项目名 ${referenceName.label}`,
    );
  }
}

if (failures.length > 0) {
  console.error(failures.map((failure) => `- ${failure}`).join("\n"));
  process.exit(1);
}

console.log("前端 mystery gates 验证通过");
