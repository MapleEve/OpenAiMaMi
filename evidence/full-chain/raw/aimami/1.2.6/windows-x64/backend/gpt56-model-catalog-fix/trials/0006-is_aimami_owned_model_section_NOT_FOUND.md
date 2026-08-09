> **【已被推翻 · 2026-08-07 第四轮】** 本文件记录的 NOT_FOUND 结论已被同日第四轮
> 调用簇扩展法定位推翻——真实 win 对应体已确认为 `0x140572fb0`（405B），完整方法
> 与证据见 `pseudocode/0009-is_aimami_owned_model_section_0x140572fb0_CONFIRMED.c`
> 与 `evidence.md` "第四轮" 小节、`manifest.json` 的
> `round4_is_aimami_owned_model_section_resolution_20260807` 字段。本文件以下内容
> 保留作历史记录（记录了本轮之前已排除的 panic-Location 路径与已证伪候选
> `0x14056b270`，对后续排查仍有参考价值），不做删除。

# is_aimami_owned_model_section — Windows 侧本轮 NOT_FOUND（并证伪了此前的错误候选）

- mac 符号: `codexmate_lib::core::relay::config_takeover::is_aimami_owned_model_section::h54056e81d487509e`
- mac EA: `0x100ae9de0`, size 305B (0x131)
- mac 行为: 纯谓词（无 log/panic 路径）。判定 TOML section header 是否以 "profiles."(9字节)/
  "profile." 前缀开头，取 first_section_part 与已知 model/provider 字面量
  （长度12/6/19）做 SIMD 字节比较。

## 已尝试的方法（红线13诚实记录）

1. **panic-Location 两跳 xref**：`config_takeover.rs` 仅有 1 处 panic-Location 字符串引用
   （`0x14180e765`），xref 到唯一函数 `0x14056c570`(674B)。decompile 后确认该函数实际是
   "backup cleanup loop always returns" 重试循环（11次），与目标谓词逻辑完全不符——
   与预期一致：is_aimami_owned_model_section 无 panic 路径，本来就不会出现在此 xref 列表中。

2. **候选证伪**：此前 manifest.json 曾将 `0x14056b270`(2342B) 标注为
   is_aimami_owned_model_section 的 **高置信度候选**。本轮对该函数做实际 decompile
   （完整反编译，无截断）核实：该函数扫描多行文本（"\n" 拼接），与一个 55 字节的
   标记常量（`xmmword_1418114D1`，推测为 ">>> aimami-relay managed start" 类托管块标记）
   做比较提取托管块内容，属于"扫描/重建托管配置块"逻辑，与 mac 侧
   "profiles.前缀+first_section_part字面量比较"的谓词判定逻辑**完全不同**。
   已在 win IDB 该地址（0x14056b270）写入注释说明此次证伪，避免后续轮次沿用错误映射。

## 结论

该谓词函数本轮**未定位**。已证伪此前 manifest 中唯一的高置信度候选。
如实标注为 `NOT_FOUND`，未标记 `accepted_unknown`。
建议下一轮方向：检索所有 config_takeover 模块内、体积 250~400B 区间、
含 SIMD `_mm_cmpeq_epi8`/`_mm_testz_si128` 但无 log/panic 调用的候选函数。
