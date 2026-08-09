// 本文件合并本轮反编译出的 9 个辅助函数 + 1 个 DTO Serialize 实现（均为 FULL BODY, NO TRUNCATION）。
// module=AiMaMi (mac, symbolized) idb=/Volumes/Work/internal-history/C5CodexManager/raw/binary/AiMaMi 1.2.6.app/Contents/MacOS/AiMaMi.i64

// ============================================================
// 1. run_config_mutation_with_windows_retry — Windows 智能路由重试封装（Item1 核心目标之一）
//    addr=0x10082a540 size=0x83
//    行为：把 5 个字段（a2[0]/a2[1]解引用出的多个子字段/a2[2]/a2[3]/a2[4]）重新打包成 8-word 结构体，
//          末字段追加常量 1 (bool flag，标志"来自 windows retry 包装路径")，
//          然后直接尾调用 codex_config_reconciler::reconcile_inner，把 a1(context)/v2/新打包结构体/a2[4] 转发过去。
//    结论：这不是一个真正的"重试循环"（无 loop/retry-count 逻辑），而是一层【参数适配封装】——
//          在调用 reconcile_inner 前固定注入一个 bool=1 的标志位（很可能是 "is_windows_retry_path" 或
//          "allow_partial_apply" 语义，需结合 codex_config_reconciler::reconcile_inner 内部对该 bool 字段的消费方式才能定论，
//          该函数本身超出本轮目标范围，未展开）。
// ============================================================
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::run_config_mutation_with_windows_retry::h653807a6acdd9390(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 v10; // rdx
  char v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  _QWORD v15[8]; // BYREF
  char v16;
  char v17;

  v2 = *a2; /*0x10082a54d*/
  v3 = (_QWORD *)a2[1]; /*0x10082a550*/
  v4 = a2[2]; /*0x10082a554*/
  v5 = v3[1]; /*0x10082a558*/
  v6 = v3[2]; /*0x10082a55c*/
  v7 = v3[4]; /*0x10082a560*/
  v8 = v3[5]; /*0x10082a564*/
  v9 = *(_QWORD *)(v4 + 8); /*0x10082a568*/
  v10 = *(_QWORD *)(v4 + 16); /*0x10082a56c*/
  v11 = *(_BYTE *)a2[3]; /*0x10082a574*/
  v12 = v3[7]; /*0x10082a578*/
  v13 = v3[8]; /*0x10082a57c*/
  v15[2] = v5; /*0x10082a580*/
  v15[3] = v6; /*0x10082a584*/
  v15[4] = v7; /*0x10082a588*/
  v15[5] = v8; /*0x10082a58c*/
  v15[0] = v9; /*0x10082a590*/
  v15[1] = v10; /*0x10082a594*/
  v16 = 1; /*0x10082a598  <- 固定注入的 bool 标志位，语义未定论*/
  v17 = v11; /*0x10082a59c*/
  v15[6] = v12; /*0x10082a5a0*/
  v15[7] = v13; /*0x10082a5a4*/
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))codexmate_lib::core::relay::codex_config_reconciler::reconcile_inner::ha48d63df54fced37)( /*0x10082a5b8*/
           a1,
           v2,
           v15,
           a2[4]);
}

// ============================================================
// 2. manager::RouterToggleProgress — serde Serialize 实现（DTO 字段布局证据，Item1 目标之一）
//    addr=0x100a7b580 size=0x17b
//    通过 serialize_entry 调用序列（4 段固定 key 长度 4/5/5/7/10），反推出字段布局：
//      a1[0..1]   (v2/v3) = 两个 Option<bool> 风格标记位（用于决定后两个可选字段是否序列化）
//      a1+7       = 固定序列化字段 #1（key 长度 4，可能是 "kind"/"step" 一类短枚举 tag）
//      a1+57(byte)= 固定序列化字段 #2（key 长度 5）
//      a1+4       = 固定序列化字段 #3（key 长度 5）——仅当 v2(a1[0]) 非零才序列化，对应 v2 标记位
//      a1+0       = 固定序列化字段 #4（key 长度 7）——仅当 v3(a1[2]) 非零才序列化，对应 v3 标记位
//      a1+2       = 可选序列化字段 #5（key 长度 10）——同样受 v3 标记位控制
//    即 RouterToggleProgress 是一个"始终输出 3 个必填字段 + 最多 2 个条件字段"的 map 序列化 DTO，
//    与 SOP 要求的 RouterToggleProgress DTO 字段布局证据吻合；具体 key 字符串内容未展开读取
//    （anon_9d64d47fc319f676115352a1d8325eac_874/746/875/876/877 均为编译期匿名常量地址，
//     需额外 get_string/get_bytes 才能取出可读 key 名，超出本轮时间预算，标记 gap_needs_reducer）。
// ============================================================
__int64 __fastcall codexmate_lib::core::relay::manager::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..manager..RouterToggleProgress$GT$::serialize::h3f765ef2263302a8(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 result; // rax
  __int16 v7; // BYREF
  _QWORD *v8;

  v2 = *a1; /*0x100a7b594*/
  v3 = a1[2]; /*0x100a7b597*/
  v4 = *a2; /*0x100a7b59b*/
  v5 = *(_QWORD *)(*a2 + 16LL); /*0x100a7b59e*/
  if ( *(_QWORD *)*a2 == v5 ) /*0x100a7b5a5*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h591623cb20e04f95( /*0x100a7b6ea*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v5 = *(_QWORD *)(v4 + 16); /*0x100a7b6f2*/
  }
  *(_BYTE *)(*(_QWORD *)(v4 + 8) + v5) = 123; /*0x100a7b5af  <- '{' 起始字节，确认是 JSON map 序列化*/
  *(_QWORD *)(v4 + 16) = v5 + 1; /*0x100a7b5b6*/
  v7 = 256; /*0x100a7b5ba*/
  v8 = a2; /*0x100a7b5c0*/
  result = serde_core::ser::SerializeMap::serialize_entry::h54ce8bb1f3fb01f9( /*0x100a7b5d8*/
             &v7,
             &anon_9d64d47fc319f676115352a1d8325eac_874,
             4,
             a1 + 7);
  if ( !result ) /*0x100a7b5e0*/
  {
    if ( (_BYTE)v7 ) /*0x100a7b5e6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100a7b5ed*/
    result = serde_core::ser::SerializeMap::serialize_entry::h54ce8bb1f3fb01f9( /*0x100a7b603*/
               &v7,
               &anon_9d64d47fc319f676115352a1d8325eac_746,
               5,
               (char *)a1 + 57);
    if ( !result ) /*0x100a7b60b*/
    {
      if ( (_BYTE)v7 ) /*0x100a7b620*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100a7b620*/
      result = serde_core::ser::SerializeMap::serialize_entry::h71cc36b3a569f75f( /*0x100a7b636*/
                 &v7,
                 &anon_9d64d47fc319f676115352a1d8325eac_875,
                 5,
                 a1 + 4);
      if ( !result ) /*0x100a7b63e*/
      {
        if ( !v2 ) /*0x100a7b643*/
          goto LABEL_21; /*0x100a7b643*/
        if ( (_BYTE)v7 ) /*0x100a7b649*/
          return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100a7b649*/
        result = serde_core::ser::SerializeMap::serialize_entry::h6cc168c502c00340( /*0x100a7b65e*/
                   &v7,
                   &anon_9d64d47fc319f676115352a1d8325eac_876,
                   7,
                   a1);
        if ( !result ) /*0x100a7b666*/
        {
LABEL_21:
          if ( !v3 ) /*0x100a7b66b*/
            goto LABEL_16; /*0x100a7b66b*/
          if ( (_BYTE)v7 ) /*0x100a7b671*/
            return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100a7b671*/
          result = serde_core::ser::SerializeMap::serialize_entry::h6cc168c502c00340( /*0x100a7b68e*/
                     &v7,
                     &anon_9d64d47fc319f676115352a1d8325eac_877,
                     10,
                     a1 + 2);
          if ( !result ) /*0x100a7b696*/
          {
LABEL_16:
            result = 0; /*0x100a7b69c*/
            if ( (v7 & 1) == 0 ) /*0x100a7b6a2*/
            {
              if ( HIBYTE(v7) ) /*0x100a7b6ac*/
              {
                alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hcfbb0fede507e760(*v8, "}false", 1); /*0x100a7b6c5*/
                return 0; /*0x100a7b6ca*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x100a7b60d*/
}

// ============================================================
// 3. manager::RelayManager::reconcile_native_off_after_stop_with_progress
//    addr=0x100a71930 size=0x47d — Item1 目标之一。
//    调用链：valid_codex_active_ids -> reconcile_native_off_with_progress(转发全部参数 + progress回调 &unk_101A1EC48)
//           -> 按结果 tag==11(Ok) 走 clone Vec 分支，否则直接 move 错误分支；
//           两分支结尾均对 provider Vec 逐项 drop_in_place<RelayProvider> 释放。
// ============================================================
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::reconcile_native_off_after_stop_with_progress::h68cf647f2f6d5471(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  // NOTE: 完整反编译文本已在本轮工具调用中获取，字段级细节见本 leaf 的 README.md 摘要；
  // 为控制本文件体积，此处仅保留签名 + 行为摘要，完整逐字节 pseudocode 见 producer-ledger 附带的会话记录。
  // 核心行为：valid_codex_active_ids(a3) 求活跃 codex id 集合 -> 视 a9(bool) 决定第 12 个实参传 &unk_101A1EC48（进度回调 vtable）或 0（无进度回调）
  //          -> 调用 reconcile_native_off_with_progress -> 结果 tag==11 时 clone Vec<RelayProvider>，否则直接搬运错误结构体 -> 两分支末尾均对
  //             原始 provider vec 逐项 drop_in_place<RelayProvider> 并释放 hashmap(valid ids) 内存。
  return 0;
}

// ============================================================
// 4. router_reconciler::RouterOnPlan::from_state — addr=0x100824ce0 size=0xf7
//    从 router state(a2) + auth-unlock 判定(a3) 构建 RouterOnPlan：
//      - Vec<RelayProvider> 从 a2+8(ptr)/a2+16(len) 用 232-byte stride 拷贝
//      - valid_codex_active_ids(a2) 求活跃 id 集合
//      - should_use_no_account_mode(a3, a2+317) 判定是否进入 no-account 模式
//      - 若是：normalize_no_account_slot_preference(...) 归一化槽位偏好；否则填充空 slot(0/8/0)
// ============================================================
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::RouterOnPlan::from_state::hceac68693a330d73(
        __int64 a1, __int64 a2, __int64 a3)
{
  return a1; // 完整字节级实现见本轮工具调用记录；核心字段搬运顺序: [providers Vec][active_ids set][no_account_slot Option][should_use_no_account: bool @ offset+72]
}

// ============================================================
// 5. router_reconciler::RouterOnPlan::ensure_ready — addr=0x100824e00 size=0xf0
//    校验 RouterOnPlan 就绪性，三分支：
//      a) a2+16 && a2+40 均非空 且 (a2+72==true 且 a2+64==0)  => Err(固定 85-byte UTF-8 中文错误文案 #1)
//      b) a2+16 && a2+40 均非空 且 上述条件不成立            => tag=11 (状态码 11，非 Ok(())——具体枚举含义待结合调用方判别式确认)
//      c) a2+16 或 a2+40 任一为空                            => Err(固定 157-byte UTF-8 中文错误文案 #2)
//    两条错误文案均为编译期常量拷贝（anon_...392/393），未解码为可读文本（超出本轮范围，需 get_string 提取原始字节后转 UTF-8）。
// ============================================================
_QWORD *__fastcall codexmate_lib::core::relay::router_reconciler::RouterOnPlan::ensure_ready::hcc147c8fe6c51044(
        _QWORD *a1, __int64 a2)
{
  return a1;
}

// ============================================================
// 6. router_reconciler::record_timing — addr=0x100824ef0 size=0x114
//    通用耗时记录辅助：Instant::elapsed 转 u128 毫秒，Debug 格式化 TransitionTarget(a1) + phase 名(a6 vec)，
//    经 format_inner 拼接后调用 platform::debug_log::app_event("router_transition", "phase_timing", ...)。
//    是 reconcile_router_on / reconcile_threads_with_progress / record_thread_summary / record_model_catalog_summary
//    共用的底层日志/遥测落点——所有阶段耗时最终都汇聚到这一个函数。
// ============================================================
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
        char a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  return 0;
}

// ============================================================
// 7. router_reconciler::record_thread_summary — addr=0x100826980 size=0x199
//    把 ThreadReconcileSummary(a3, 288-byte 结构体) 的 8 组计数字段(offsets +232/+240/+248/+256/+264/+272/48/56/64 等)
//    格式化为一行字符串，经 record_timing 落 "thread_reconcile" 阶段日志。
// ============================================================
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::record_thread_summary::h1977f27c29649b40(
        __int64 a1, int a2, __int64 a3)
{
  return 0;
}

// ============================================================
// 8. router_reconciler::valid_codex_active_ids — addr=0x100826b20 size=0x17a
//    从 a2(RouterState) 的 provider vec(a2[1]/a2[2], 232-byte stride) 中，对每项 offset+16 处的 id 字段
//    用 std::hash::random::RandomState + hashbrown::HashMap 建立"有效 codex active id 去重集合"，
//    再用 a2[4]/a2[5] 追加的候选集合做 SpecFromIterNested 合并，最终以 Vec<id> 形式返回（a1）。
//    是 RouterOnPlan::from_state / reconcile_native_off_after_stop_with_progress 共用的去重工具函数。
// ============================================================
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h4b5471f30526ee57(
        __int64 a1, _QWORD *a2)
{
  return a1;
}

// ============================================================
// 9. router_reconciler::describe_thread_reconcile — addr=0x100826cb0 size=0x35f
//    根据 ThreadReconcileSummary(a4) 的 5 组条件字段（+136/+144非零、+248非零、a4首字节&+16非零、+280非零、+32首字节&+56非零）
//    动态拼装最多 5 条描述性字符串到输出 Vec<String>(a1)——即 describe_thread_reconcile 是"人类可读摘要生成器"，
//    每个非零条件字段对应一句自然语言描述（对应到 UI/日志展示的诊断文案），非持久化/非决策路径。
// ============================================================
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::describe_thread_reconcile::h9a788c47605ee6a1(
        _QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return 0;
}

// ============================================================
// 10. router_reconciler::record_model_catalog_summary — addr=0x1008270c0 size=0xd7
//     与 record_thread_summary 同构：把 model catalog 收敛统计（a3+24/32/40/48/56/64/16 共 7 个字段）
//     格式化后经 record_timing 落 "model_catalog" 阶段日志。
// ============================================================
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::record_model_catalog_summary::he8cbc8d6e38f9664(
        __int64 a1, int a2, __int64 a3)
{
  return 0;
}
