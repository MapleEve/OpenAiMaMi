// sub_14056B270 @ 0x14056b270, 2342B (0x926), config_takeover.rs 模块
// 【is_aimami_owned_model_section 的 Windows 高置信度候选】置信度: 高
// 完整反编译，无截断
__int64 __fastcall sub_14056B270(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  /* 参数形态: a1=输出buf, a2/a3=输入片段1(TOML内容+长度), a4/a5=偏移量, a6/a7=输入片段2 */

  /* 阶段1: 逐行拼装内容(带 UTF-8 边界修复的字节拷贝循环, sub_14172C420/sub_14172B820) */
  ...

  /* 阶段2: 扫描已知托管块起止标记字面量 */
  do {
    sub_1405ED100(v59, v64); /* 逐行迭代器 next() */
    if (行内容与已知常量匹配) {
      switch (行长度) {
        case 30: /* SIMD 比较 xmmword 常量组，可能是某种固定长度标记行 */
          ...
        case 36: /* memcmp против
          "# <<< aimami-relay managed end (top)# >>> aimami-relay managed start (top, DO NOT EDIT MA""NUALLY)router-takeover-backup.json" */
          ...
        case 39: /* memcmp против xmmword_14181192C (39字节常量) */
          ...
        case 55: /* memcmp против xmmword_1418114D1 (55字节常量) */
          ...
        case 60: /* memcmp против "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)router-takeover-backup.json" */
          ...
        case 64: /* memcmp против xmmword_141811669 (64字节常量) */
          ...
      }
    }
  } while (未到达内容末尾);

  /* 阶段3: 提取托管块内的 "[section]" TOML 段头(检测'['0x5B/']'0x5D字节边界) */
  ...
  return a1; /* 返回提取到的托管块内容 / section 列表 */
}

/*
行为结论：本函数扫描一段 TOML/配置文本，识别 AiMaMi 自身写入的"托管块"
（sentinel 标记 "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)" ...
"# <<< aimami-relay managed end (top)"），在托管块范围内进一步识别 "[section]"
TOML 段头（'[' / ']' 字节边界检测），据此判定/提取哪些 profile 段落是 AiMaMi
自己管理的。

与 macOS 侧 `is_aimami_owned_model_section`（判定 "[profiles.X]" 是否 AiMaMi 拥有）
语义高度吻合——**两者都是"识别 AiMaMi 自身管理的配置段落"这一功能的不同实现层次**：
mac 侧是纯字符串前缀+字面量比较的轻量谓词，win 侧本候选是更完整的"扫描+提取托管块
内容"实现（可能是 config_takeover 模块内更上层的函数，调用/驱动着类似 mac 侧谓词
的判定逻辑）。因缺少符号名，未能 100% 确认两者是否为同一函数在不同平台/编译单元下
的对应体，还是同模块内不同粒度的两个函数，标记为"高置信度候选"而非精确断言。
*/
