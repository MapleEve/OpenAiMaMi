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
const objects = read("src/routes/registry/objects.tsx");
const shell = read("src/app/router/shell.tsx");
const routerPrewarm = read("src/app/router/prewarm.ts");
const overviewQuery = read("src/features/overview/hooks/query.ts");

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
assert(
  shell.includes("useOverviewMysteryUnlockGrantsQuery()") &&
    shell.includes("getRouteMeta(activeRoute, mysteryRouteGateContext)") &&
    shell.includes("getVisibleRouteMeta(mysteryRouteGateContext)") &&
    shell.includes("useRoutePrewarm(mysteryRouteGateContext)") &&
    shell.includes("mysteryRouteGate:"),
  "shell.tsx 未将 mystery grants 查询结果接入 route meta、visible routes、prewarm 和 Outlet context",
);
assert(
  routerPrewarm.includes("context?: MysteryRouteGateContext") &&
    routerPrewarm.includes("preloadVisibleRoutes(context)"),
  "prewarm.ts 未使用 shell 传入的 mystery grants context",
);
assert(
  objects.includes("resolveRouteVisibility(") &&
    objects.includes("context.mysteryRouteGate.context") &&
    objects.includes("context.mysteryRouteGate.pending") &&
    objects.includes('return <Navigate to={resolveRoutePath("overview")} replace />;'),
  "objects.tsx 未基于 mystery grants context 做 route guard / redirect",
);
assert(
  registry.includes("mysteryRouteGate:") &&
    registry.includes("context: MysteryRouteGateContext") &&
    registry.includes("pending: boolean"),
  "registry.tsx 的 RouteRenderContext 未携带 mystery grants context",
);
assert(
  overviewQuery.includes("overviewMysteryUnlockGrantsQueryOptions") &&
    overviewQuery.includes("OVERVIEW_MYSTERY_GRANTS_QUERY_KEY") &&
    overviewQuery.includes("systemService.getMysteryUnlockGrants()") &&
    overviewQuery.includes("export function useOverviewMysteryUnlockGrantsQuery"),
  "overview query owner 未暴露 shell 可复用的 mystery grants 查询",
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
