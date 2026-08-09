// 函数: codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_parallel::{{closure}}
// 地址: 0x1006a5bf0  大小: 0x3d (61B)
// 来源: mac arm64 (AiMaMi 1.2.6, 符号化构建) 活体 IDB 反编译, 无截断标记
// 角色: 极小的格式化辅助闭包, 是 rayon 并行批处理(rayon_core::registry::Registry::new/in_worker,
//        见 0003-manifest 中 reconcile_threads_with_progress 的 "待清理数>7 走并行" 分支) 内部用于
//        构造某条格式化字符串(嵌入一个 usize 数值, 格式串见 unk_10185DDA9, 未展开具体文本内容;
//        推测为并行任务失败/汇总时的日志或 panic 消息片段, 例如 "rollout {n} failed to converge" 一类)。
//        真正逐文件清理逻辑仍是 cleanup_private_reasoning_items_in_existing_rollout (0001),
//        rayon 只负责把多个 rollout 路径分发给线程池并行调用它、再用 CollectConsumer 收集
//        Vec<PrivateReasoningCleanupResult>。本函数不做任何清理判定，只做字符串格式化。
// 局限: 未 get_string(unk_10185DDA9) 取出完整格式串字面量文本, 标记为 gap（超出本轮范围，非阻塞项，
//        因该字符串对清理判定逻辑本身无实质影响，只影响日志/panic文案可读性）。
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_parallel::_$u7b$$u7b$closure$u7d$$u7d$::h710e256b1580dee4(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD v4[2]; // [rsp+0h] [rbp-20h] BYREF
  __int64 v5; // [rsp+10h] [rbp-10h] BYREF

  v5 = a3; /*0x1006a5bfc*/
  v4[0] = &v5; /*0x1006a5c04*/
  v4[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1006a5c0f*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_10185DDA9, v4); /*0x1006a5c1e*/
  return a1; /*0x1006a5c26*/
}
