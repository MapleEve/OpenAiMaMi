# FULL-DELTA-SUMMARY-BASELINE-1.2.3-TO-1.2.6.md

**Product**: AiMaMi | **Version span**: 1.2.3 → 1.2.4 → 1.2.6 | **Platforms**: macOS arm64 + Windows x64
**Generated**: 2026-08-09 | **Session**: cc-orchestrator-delta-closure-bookkeeping-20260809 | **Machine**: mini-local

---

## §0 一句话结论

1.2.3→1.2.6 双系统 delta——4 段 delta 命令（win 1.2.3→1.2.4 6 命令 + win 1.2.4→1.2.6 128 命令 + mac 1.2.3→1.2.4 22 条 + mac 1.2.4→1.2.6 26 条）**delta gate 100% 达 implementation leaf**，无未闭环 delta 段。双系统 dim1-5 全 PASS + **strictImplementationUse=true**（mac bundle 23 raw leaf + win bundle 126 raw leaf，四角度 A/B/C/D 全 PASS）。gate_accepted=false 的原因：dim6 验收 pending_implementation_side + 真机行为对照未做（红线25 声明未对照）——这两项是 GATE-SPEC 职责边界，阻塞 readyToImplement 但 NOT strictImplementationUse，非逆向侧能单独达到。

---

## §1 范围与授权

- **授权状态**：用户已确认授权逆向 AiMaMi 1.2.3/1.2.4/1.2.6 双端二进制。
- **baseline**：1.2.3 有完整 raw（1278 个 .c + 30 bundle + WIN-APP-FUNCTION-INVENTORY.jsonl），作为 same 复用基线。
- **delta 口径**：delta 命令 = rawleaf 数 + confirmed_absent 数 + same-skip reuse 数。100% 达 implementation leaf 指 delta 范围内每个命令/函数都有 4-file rawleaf（evidence.md + ida/pseudocode/<slug>.c + call-tree.json + interface-report.json）或标记 confirmed_absent（v126_ea=None）或 same-skip reuse（有 reuse 声明 + SHA 绑定）。

---

## §2 四段 delta 覆盖矩阵

| 段 | delta-commands 非注释行 | rawleaf | confirmed_absent | same-skip reuse | 排除（external/serde） | 合计 | 覆盖 |
|---|---|---|---|---|---|---|---|
| win 1.2.3→1.2.4 | 6 | 6 | 0 | 0 | 0 | 6 | 6/6=100% |
| win 1.2.4→1.2.6 | 128 | 117 | 10 | 1 (codex_bundled_cli_path) | 0 | 128 | 128/128=100% |
| mac 1.2.3→1.2.4 | 22 | 18 | 0 | 0 | 4 (1 external http + 3 changed/renamed folded) | 22 | 22/22=100% |
| mac 1.2.4→1.2.6 | 26 | 22 | 0 | 0 | 6 (external/std/vendored) + 2 folded-successor | 26 | 26/26=100% |

**注**：
- mac 1.2.3→1.2.4 的 22 行 = 18 codexmate_lib 新/改函数 + 1 external(http::HeaderValue) + 3 changed/renamed（folded into successors，不独立出 leaf）。43 serde Deserialize impls 非 command DTO，已在 VERSION-DIFF.md 单列，不计入 delta 命令。
- mac 1.2.4→1.2.6 的 26 行 = 14 codexmate_lib new + 6 removed + 6 external/std/vendored。22 leaf = 16 new/changed（含 2 个 removed 的 successor 函数 patch_relay_thread_instructions_excluding + fallback_relay_model_threads_excluding）+ 6 removed leaf（3 独立 REMOVED + 3 folded into successor）。

---

## §3 win 1.2.4→1.2.6 详分（128 命令）

- **2 real-change candidates**：codex_bundled_cli_path（候选串集缩减，same-command-reuse from 1.2.4）+ ChatGPT 桌面应用定位器 sub_140B370F0（1.2.6 新增，4-file rawleaf at platform/）
- **116 remaining commands**：全部有 v126_ea（conf=high），逐个 full-chain 落盘。116 中 115 decompiled（113 Hex-Rays + 2 disasm-rebuilt）、1 decompile_null（load_snapshot，gate-pass-via-callee-count>=5）
- **10 confirmed_absent**：v126_ea=None, conf=none（default_debug_bundle_file_name, cancel_chatgpt_oauth_login, check_update_installability, load_custom_instruction_state, cancel_voice_trigger_capture, preview_custom_instruction_apply, apply_custom_instruction, clear_custom_instruction_block, rollback_custom_instruction, get_system_info）
- **8 same-skip**：owner 两版本都在且 IDA 伪代码体等价，复用 1.2.4 raw 证据（clean, get_image_compat, get_codex_router_auth_readiness, open_path, get_claude_web_search_compat, set_claude_web_search_compat, remove_mcp_server, set_codex_no_account_slots）

---

## §4 消费者从 bundle 能否找到全部 full-chain 结果

**能**。消费者通过以下路径找到全部 full-chain 结果：
- `intermediate/aimami/<version>/<platform>/version-delta/VERSION-DIFF.md`——每段 delta 的逐命令 full-chain 完成状态表 + same-skip/confirmed_absent 明细
- `intermediate/aimami/<version>/<platform>/version-delta/delta-commands.txt`——delta 命令清单（含 v126_ea、fn、conf）
- `raw/aimami/<version>/<platform>/<module>/<cmd>/`——每个命令的 4-file rawleaf（evidence.md + ida/pseudocode/<slug>.c + call-tree.json + interface-report.json）
- `internal-reverse/audits/<platform>-1.2.6-version-delta/`——bundle（manifest.json + gate-report.json + logic/ + pointers/ + README.md）
- `internal-reverse/INDEX.jsonl`——全量索引（schema c5cm.internal-reverse.index.v1）
- `internal-reverse/REVERSE-STATUS.md`——终态行
- `internal-reverse/audits/<platform>-1.2.6-version-delta/data/producer-ledger.json`——per-bundle ack

---

## §5 delta gate 表（delta 命令 100% implementation leaf 达成度）

| 段 | delta 命令总数 | rawleaf | confirmed_absent | same-skip | delta gate | decompile 状态 | gate_accepted |
|---|---|---|---|---|---|---|---|
| win 1.2.3→1.2.4 | 6 | 6 | 0 | 0 | **PASS 100%** | 6/6 decompiled | false |
| win 1.2.4→1.2.6 | 128 | 117 | 10 | 1 | **PASS 100%** | 116/117 decompiled + 1 decompile_null (load_snapshot, gate-pass-via-callee) | false |
| mac 1.2.3→1.2.4 | 22 | 18 | 0 | 0 | **PASS 100%** | 18/18 decompiled (含 3 folded-into-successor) | false |
| mac 1.2.4→1.2.6 | 26 | 22 | 0 | 0 | **PASS 100%** | 22/22 decompiled (含 3 folded + 3 removed-symbol) | false |

**delta gate 口径**：delta 命令 100% 达 implementation leaf = 每个带 EA 的命令有 4-file rawleaf 且 call-tree edges>=5 或 terminated_reason；confirmed_absent 标 v126_ea=None 不产出 rawleaf；same-skip 有 reuse 声明 + SHA 绑定。

**六维门状态（2026-08-09 dual-gate closure）**：

| bundle | dim1 | dim2 | dim3 | dim4 | dim5 | dim6 | strictImplementationUse | gate_accepted |
|---|---|---|---|---|---|---|---|---|
| macos-1.2.6-version-delta | PASS | PASS | PASS | PASS | PASS | pending_implementation_side | true | false |
| windows-1.2.6-version-delta | PASS | PASS | PASS | PASS | PASS | pending_implementation_side | true | false |

- dim1-5 全 PASS（双系统）：mac 23 raw leaf + win 126 raw leaf，四角度 A/B/C/D 全 PASS
- strictImplementationUse=true：dim1-5 全 PASS 推到 strictImplementationUse（可在 allowedImplementationMode 下开始实现，但不写 implementation_use=true）
- gate_accepted=false：阻塞于 dim6 + 真机对照（见下方原因），阻塞 readyToImplement 但 NOT strictImplementationUse

**gate_accepted=false 原因**（所有段相同）：
1. **dim6 验收 pending_implementation_side**：GATE-SPEC 规定 dim6 是 C5 实现侧的验收工作，不是逆向侧能单独达到的
2. **真机行为对照未做**（红线25 LIVE_REFERENCE_PARITY_GATE）：未启动参照 App 做截图/交互对照，声明「未对照」
3. **10 confirmed_absent**（win 1.2.6）：经 find_regex+find_bytes 验证命令名字符串在 1.2.6 win 镜像中完全缺失，非 true_gaps（前序轮次曾误标为 unresolved true_gaps，2026-08-09 重分类为 confirmed_absent）
4. **非命令后端函数不在 delta 范围**：core::relay 等模块的非命令后端函数不在 delta-commands 范围，不构成 delta gate 的阻塞项

以上 1-2 是 GATE-SPEC 职责边界（dim6 + 真机），阻塞 readyToImplement 但 NOT strictImplementationUse；3-4 是 delta 范围外的工作。逆向侧 delta gate 已 100% PASS，dim1-5 全 PASS，strictImplementationUse=true。

---

## §6 grounded 核查记录

本轮 orchestrator 独立 Bash 磁盘核查（红线14 GROUNDED_NOT_SUMMARY，不采信 agent 自述）：
- delta-commands 非注释行数：win124=6, win126=128, mac124=22, mac126=26（逐文件 grep -v '#'/'^$' wc -l）
- rawleaf evidence.md 数：win124=6, win126=126(含 9 非 delta 批次), mac124=18, mac126=22
- 2 个重建 leaf 4-file 合规：import_accounts_from_file (evidence 1813B + .c 5211B + call-tree 8686B + interface 1230B) + configure_auto_switch (4-file 合规)
- load_snapshot 仍 decompile_null：interface-report.json decompile_status=decompile_null, .c=178B failure stub（VERSION-DIFF 表格原声称 "0 failed" 已修正为 "1 decompile_null gate-pass-via-callee"）
- gate-report.json delta_gate 字段已修正：decompile_ok 113→115, decompile_failed 3→1
- FULL-DELTA-SUMMARY-BASELINE-1.2.3-TO-1.2.6.md：前序 agent 声称已更新但磁盘不存在（红线34 过程自述证伪），本轮创建
- INDEX.jsonl：371 行（前序 agent 声称追加 4 行但实际漏落），本轮追加
- REVERSE-STATUS.md：最后一条为 cc-orchestrator-win126-fullchain-verify-20260809（前序轮次），本轮追加
