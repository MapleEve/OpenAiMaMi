// 未确认候选（不是8个目标之一的"确认命名"，本轮未在IDB中rename）
// 疑似 codexmate_lib::core::relay::codex_diagnostic::fix_native_off_invalid_openai_thread_models
//   的 Windows 对应体 (mac EA 0x100b30fc0, 12719B, 320 basic blocks, cc=127)
// win EA 0x1405ae4b0, size 10668B (0x29ac), 378 basic blocks
//
// 【manifest 修正说明】此前版本 manifest.json 将 size=10668 错误标注在 0x1405b2510 地址上；
// 本轮 live win IDA 核验发现 0x1405b2510 实际 size=3121(0xc31)，真正 size=10668 的函数是
// 0x1405ae4b0（此前完全未列入候选清单，本轮新发现）。
//
// 支持证据（结构信号）：
//   1. 同属 codex_diagnostic.rs 模块 —— 3 个不同 panic 位置引用同一文件字符串
//      "src\core\relay\codex_diagnostic.rs"（一个大型复杂函数含多处错误分支的典型特征）
//   2. size=10668B / 378 basic blocks 是本轮候选集中唯一与 mac 同数量级
//      （mac 12719B / 320 blocks）的巨大函数——候选簇中次大的也仅约 5KB，
//      本函数比其余候选大 3~30 倍
//
// 已尝试但未能确认的方法（红线13诚实记录，非accepted_unknown伪造闭合）：
//   (1) 检索全部 55 个直接 callee 地址（sub_140539F70/sub_140001660/sub_1405A8000/
//       sub_140BFEC50/sub_14176E54B/sub_1401A27E0/sub_1401FF690/sub_14172B820/
//       sub_14151B4E0/sub_1415181D0/sub_141543F00/sub_14172D430/sub_14043F970/
//       sub_14152E0B0/sub_1400478E0/sub_140C0B0F0/sub_14136A9F0/sub_140521840/
//       sub_1405A70E0/sub_141522EE0/sub_141543AF0/sub_141534F60/sub_1405B8160/
//       sub_1406E71E0/sub_140C11360/sub_140542B50/sub_14152E1A0/sub_140541A30/
//       sub_1405ECC40/sub_141522DB0/sub_14151B790/sub_14154B690/sub_14102EA80/
//       sub_14172C8D0/sub_1404992F0/sub_141534AD0/sub_14086BB40/sub_14051D8C0/
//       sub_1414D4800/sub_1403FF680/sub_140039B30/sub_140526CA0/sub_140A6DB10/
//       sub_1414D8A40/sub_1405B3980/sub_140A9F870/sub_140403F00/sub_140544790/
//       sub_1405222F0/sub_140033330/sub_1405F1010/sub_14051DCD0/sub_14176E531/
//       sub_14152E890/sub_14176E840），未发现硬编码"openai"字符串引用
//       （mac 侧完整反编译确认 apply_thread_metadata_rollout_adoption 调用时
//       provider 参数字面量硬编码为 "openai"，本函数的 callee 均未见此字符串引用）
//   (2) 未找到与 mac prepare_thread_metadata_rollout / with_orphan_adoption_rollback /
//       write_orphan_thread_adoption_recovery / apply_orphan_thread_adoption_db /
//       apply_thread_metadata_rollout_adoption / rollback_orphan_thread_adoption /
//       mark_orphan_thread_adoption_recovery 等 mac 命名的直接对应物
//       （callee 均为未命名 sub_ 函数，逐一按 size 排查也未见明显吻合的候选）
//   (3) sub_1405B3980（callee 之一，381 basic blocks 级别子函数）decompile 后确认是
//       其它诊断消息构造逻辑（unk_141833305 字符串常量"a Display implementation
//       returned an error unexpectedly"），非 native_off/openai 相关逻辑
//
// 结论：因内容级证据（"openai" 硬编码字面量 + 具体写入函数命名对应）不足，
// 未按红线24标准确认，未在 win IDB 中 rename 到 fix_native_off_invalid_openai_thread_models。
// 已在 win IDB 该地址(0x1405ae4b0)写入本页摘要说明作为注释，供后续轮次继续深挖。
//
// 完整反编译体长度 51536 字符（py_eval 核实，无截断标记），因本函数未达确认标准，
// 未做全量逐行落盘（避免把未确认候选的伪代码误当作已确认证据使用）；
// 已保留的首 13000 字符切片证实函数开头是 Command/Vec 构建 + 错误消息拼接逻辑，
// 与"诊断结果结构体组装"的整体形状吻合，但未能推进到能确认"openai"专属写入路径的深度。
