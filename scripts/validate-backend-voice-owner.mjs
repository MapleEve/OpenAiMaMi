import { existsSync, readFileSync } from "node:fs";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = join(dirname(fileURLToPath(import.meta.url)), "..");

const failures = [];

const voiceRustFiles = [
  {
    path: "src-tauri/src/commands/voice.rs",
    markers: ["VoiceCommandBoundary", "VoiceCommandPort"],
  },
  {
    path: "src-tauri/src/application/usecase/voice.rs",
    markers: ["VoiceUseCase", "VoiceUseCaseBoundary"],
  },
  {
    path: "src-tauri/src/contracts/voice.rs",
    markers: ["VoiceContractBoundary", "VoiceContractPlaceholder"],
  },
  {
    path: "src-tauri/src/repository/voice.rs",
    markers: ["VoiceRepository", "VoiceRepositoryBoundary"],
  },
];

const evidenceMapPath =
  "docs/reconstruction/voice-current-source-evidence-map.md";
const libPath = "src-tauri/src/lib.rs";

function fail(message) {
  failures.push(message);
}

function readUtf8(relativePath) {
  const absolutePath = join(repoRoot, relativePath);
  if (!existsSync(absolutePath)) {
    fail(`缺少文件：${relativePath}`);
    return null;
  }

  return readFileSync(absolutePath, "utf8");
}

function checkForbiddenText(relativePath, content) {
  const forbiddenPatterns = [
    [/#\s*\[\s*tauri::command\s*\]/, "不得出现 Tauri command 宏"],
    [/\bCoreEnvelope\b/, "不得出现 CoreEnvelope IPC envelope"],
    [/\bState\s*</, "不得出现 Tauri State 参数"],
    [/\binvoke_handler\b/, "不得出现 invoke_handler 接线"],
    [/\b(?:emit|listen)\s*\(/, "不得出现 emit/listen 事件接线"],
    [
      /\b(?:platform|runtime|daemon|mcp|relay|accounts)\b/i,
      "不得出现 platform/runtime/daemon/mcp/relay/accounts 接线词",
    ],
    [
      /\b(?:crate::repository::Repository|repository::Repository)\b/,
      "不得引用全局 Repository 类型",
    ],
    [
      /\bfn\s+\w+(?:\s*<[^>]*>)?\s*\([^)]*\bRepository\b[^)]*\)/,
      "不得声明 Repository 参数",
    ],
    [/\bRepository::new\s*\(/, "不得构造 Repository 实例"],
    [
      /\b(?:repo|repository)\s*:\s*&?\s*(?:Mutex\s*<\s*)?Repository\b/,
      "不得出现 Repository 参数实参",
    ],
  ];

  for (const [pattern, message] of forbiddenPatterns) {
    if (pattern.test(content)) {
      fail(`${relativePath} ${message}`);
    }
  }
}

for (const file of voiceRustFiles) {
  const content = readUtf8(file.path);
  if (content === null) {
    continue;
  }

  if (content.trim().length === 0) {
    fail(`${file.path} 不应为空文件，应保留中文边界说明和占位类型`);
  }

  for (const marker of file.markers) {
    if (!content.includes(marker)) {
      fail(`${file.path} 缺少空骨架标记：${marker}`);
    }
  }

  checkForbiddenText(file.path, content);
}

const libContent = readUtf8(libPath);
if (libContent !== null) {
  if (/\bcommands::voice\b/.test(libContent)) {
    fail(`${libPath} 不得注册或引用 commands::voice`);
  }

  const invokeHandlerMatch = libContent.match(
    /\.invoke_handler\s*\(\s*tauri::generate_handler!\s*\[([\s\S]*?)\]\s*\)/,
  );
  if (invokeHandlerMatch && /\bvoice\b/i.test(invokeHandlerMatch[1])) {
    fail(`${libPath} 的 invoke_handler 不得引用 voice`);
  }
}

const evidenceMapContent = readUtf8(evidenceMapPath);
if (evidenceMapContent !== null) {
  const requiredSnippets = [
    "voice 当前仅为空骨架",
    "合同清单",
    "中文边界说明",
    "不声明功能恢复",
    "不接后端命令",
    "不接 IPC",
    "不接运行链路",
    ...voiceRustFiles.map((file) => file.path),
  ];

  for (const snippet of requiredSnippets) {
    if (!evidenceMapContent.includes(snippet)) {
      fail(`${evidenceMapPath} 缺少说明：${snippet}`);
    }
  }

  const forbiddenEvidenceClaims = [
    [/功能已恢复/, "不得声明功能已恢复"],
    [/恢复完成/, "不得声明恢复完成"],
    [/已接入\s*(?:后端命令|IPC|运行链路|runtime)/i, "不得声明已接入"],
    [/可执行\s*voice/i, "不得声明可执行 voice"],
    [/真实\s*(?:录音|语音识别|快捷键)\s*能力/, "不得声明真实 voice 能力"],
  ];

  for (const line of evidenceMapContent.split(/\r?\n/)) {
    const trimmedLine = line.trim();
    const isBoundaryDenial =
      trimmedLine.includes("不声明") ||
      trimmedLine.includes("不接") ||
      trimmedLine.includes("不新增") ||
      trimmedLine.includes("当前没有") ||
      trimmedLine.includes("不作为");

    if (isBoundaryDenial) {
      continue;
    }

    for (const [pattern, message] of forbiddenEvidenceClaims) {
      if (pattern.test(trimmedLine)) {
        fail(`${evidenceMapPath} ${message}`);
      }
    }
  }
}

if (failures.length > 0) {
  console.error("voice 后端 owner 验证失败：");
  for (const failure of failures) {
    console.error(`- ${failure}`);
  }
  process.exit(1);
}

console.log("voice 后端 owner 验证通过：");
console.log("- 四个 voice Rust 空骨架文件存在，且保留 owner 标记。");
console.log(
  "- voice Rust 空骨架未发现 Tauri 命令、IPC envelope、Repository 参数或运行链路接线。",
);
console.log("- src-tauri/src/lib.rs 未注册 commands::voice，invoke_handler 未引用 voice。");
console.log(
  "- voice current-source evidence map 明确登记空骨架、合同清单和中文边界说明，不声明功能恢复。",
);
