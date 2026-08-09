// 函数: codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_rollout::{{closure}}
// 地址: 0x100771aa0  大小: 0x3d9 (985B)
// 来源: mac arm64 (AiMaMi 1.2.6, 符号化构建) 活体 IDB 反编译, 无截断标记
// 角色: 逐行清理主体 —— 由 0001 (cleanup_private_reasoning_items_in_existing_rollout) 内联调用,
//        是"从源文件读一行 -> 判定是否为需清理的 reasoning item -> 写入临时文件或丢弃"的核心循环体.
//        注意: IDA 符号命名为 cleanup_private_reasoning_items_in_rollout 的 {{closure}}, 未见独立的
//        非闭包版本 cleanup_private_reasoning_items_in_rollout 符号 (推测该外层函数在编译期被完全内联进
//        0001, 只留下这个逐行处理闭包作为独立符号).
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::cleanup_private_reasoning_items_in_rollout::_$u7b$$u7b$closure$u7d$$u7d$::h8b568b7bb30200c5(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 result; // rax
  __int64 v8; // rdx
  __m128i si128; // xmm2
  __m128i v10; // xmm3
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  const __m128i *v17; // rdi
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rsi
  _QWORD v27[3]; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v28[2]; // [rsp+18h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-D8h]
  __int64 v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+40h] [rbp-C0h]
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  _QWORD *v41; // [rsp+88h] [rbp-78h]
  _QWORD *v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v43)(_QWORD, _QWORD); // [rsp+98h] [rbp-68h]
  _QWORD *v44; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v45)(_QWORD, _QWORD); // [rsp+A8h] [rbp-58h]
  _QWORD v46[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v47[6]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = *a2; /*0x100771aba*/
  v5 = a2[1]; /*0x100771abd*/
  v41 = (_QWORD *)a2[4]; /*0x100771ac5*/  // v41 = &counter (清理计数, 由外层0001传入的 &v94)
  v6 = a2[5]; /*0x100771ac9*/             // v6 = 输出(临时)文件写入句柄
  *(_QWORD *)(v4 + 16) = 0; /*0x100771acd*/
  result = std::io::read_until::h65637276fc79ee2d(v5, 10, v4); /*0x100771ae1*/  // 按 '\n' 逐行读源 rollout 文件
  if ( (result & 1) != 0 ) /*0x100771ae8*/
  {
LABEL_2:
    *a1 = 2; /*0x100771aea*/
    a1[1] = v8; /*0x100771af1*/
    return result; /*0x100771af5*/
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_1016EEE40); /*0x100771afa*/
  v10 = _mm_cvtsi32_si128(0x2267u); /*0x100771b02*/
  v11 = _mm_load_si128((const __m128i *)&xmmword_10165AC10); /*0x100771b0a*/
  v12 = _mm_load_si128((const __m128i *)&xmmword_10165AC20); /*0x100771b12*/
  while ( v8 ) /*0x100771b23*/
  {
    v13 = *(_QWORD *)(v4 + 8); /*0x100771b29*/
    v14 = *(_QWORD *)(v4 + 16); /*0x100771b2e*/
    if ( v14 >= 0x12 ) /*0x100771b37*/
    {
      // SIMD 前置快速扫描(非完整JSON解析): 在行首尾字节窗口做 xor/testz 快速判定是否可能是目标 JSON 行,
      // 命中才进入下面完整 serde_json 解析, 未命中直接原样写回(跳过整行解析开销).
      v15 = v14 + 1; /*0x100771b3d*/
      v16 = v14 + 1; /*0x100771b41*/
      v17 = *(const __m128i **)(v4 + 8); /*0x100771b44*/
      while ( 1 ) /*0x100771b54*/
      {
        v18 = _mm_xor_si128(_mm_loadu_si128(v17), si128); /*0x100771b54*/
        v19 = _mm_or_si128(_mm_xor_si128(_mm_cvtsi32_si128(v17[1].u16[0]), v10), v18); /*0x100771b66*/
        if ( _mm_testz_si128(v19, v19) ) /*0x100771b6f*/
          break; /*0x100771b6f*/
        v17 = (const __m128i *)((char *)v17 + 1); /*0x100771b71*/
        if ( --v16 <= 0x12 ) /*0x100771b7b*/
        {
          if ( v14 < 0x1D ) /*0x100771b81*/
            goto LABEL_20; /*0x100771b81*/
          v16 = *(_QWORD *)(v4 + 8); /*0x100771b87*/
          while ( 1 ) /*0x100771b94*/
          {
            v18 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v16), v12); /*0x100771b94*/
            v19 = _mm_or_si128(_mm_xor_si128(_mm_loadu_si128((const __m128i *)(v16 + 13)), v11), v18); /*0x100771ba1*/
            if ( _mm_testz_si128(v19, v19) ) /*0x100771baa*/
              goto LABEL_14; /*0x100771baa*/
            ++v16; /*0x100771bac*/
            if ( --v15 < 0x1E ) /*0x100771bb6*/
              goto LABEL_20; /*0x100771bb6*/
          }
        }
      }
LABEL_14:
      v42 = *(_QWORD **)(v4 + 8); /*0x100771bc0*/
      v43 = (__int64 (__fastcall *)(_QWORD, _QWORD))v14; /*0x100771bc4*/
      v45 = nullptr; /*0x100771bcc*/
      v44 = nullptr; /*0x100771bd4*/
      serde_json::de::from_trait::hbd5d403f36e2cefd( /*0x100771be6*/
        &v33,
        &v42,
        v14,
        v16,
        *(double *)v18.i64,
        *(double *)v19.i64,
        *(double *)si128.i64,
        *(double *)v10.i64,
        *(double *)v11.i64,
        *(double *)v12.i64);
      if ( (_BYTE)v33 == 6 ) /*0x100771bf2*/
      {
        // JSON 解析失败: 格式化 "failed to parse rollout line at <path>: <serde error>" 类错误, tag=9 返回
        v22 = a2[2]; /*0x100771d88*/
        v23 = a2[3]; /*0x100771d8c*/
        v47[0] = v34; /*0x100771d97*/
        v28[0] = v22; /*0x100771d9b*/
        v28[1] = v23; /*0x100771da2*/
        v42 = v28; /*0x100771db0*/
        v43 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100771dbb*/
        v44 = v47; /*0x100771dc3*/
        v45 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100771dce*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v27, &unk_1018617AD, &v42); /*0x100771de4*/
        v37 = v27[0]; /*0x100771df7*/
        v38 = v27[1]; /*0x100771dfe*/
        v39 = v27[2]; /*0x100771e0c*/
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h8ef5f75d55edeb1e(v47); /*0x100771e17*/
        result = v40; /*0x100771e1c*/
        v32 = v40; /*0x100771e20*/
        v24 = v39; /*0x100771e27*/
        v31 = v39; /*0x100771e2e*/
        v25 = v37; /*0x100771e35*/
        v26 = v38; /*0x100771e3c*/
        v30 = v38; /*0x100771e43*/
        v29 = v37; /*0x100771e4a*/
        a1[4] = v40; /*0x100771e51*/
        a1[3] = v24; /*0x100771e55*/
        a1[2] = v26; /*0x100771e59*/
        a1[1] = v25; /*0x100771e5d*/
        *a1 = 9; /*0x100771e61*/
        return result; /*0x100771e68*/
      }
      v29 = v33; /*0x100771c14*/
      v30 = v34; /*0x100771c1b*/
      v46[3] = v36; /*0x100771c22*/
      v46[2] = v35; /*0x100771c26*/
      v46[1] = v34; /*0x100771c2a*/
      v46[0] = v33; /*0x100771c2e*/
      // 检查 JSON 顶层 "type" 字段是否等于字符串 "response_item" (长度13, byte-compare 两个8字节块确认字面量)
      v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100771c42*/
              "typefullargsopenwithsavekindtrueuuidemithideshow",
              4,
              v46);
      if ( v20 ) /*0x100771c4a*/
      {
        if ( *(_BYTE *)v20 == 3 /*0x100771c7d*/
          && *(_QWORD *)(v20 + 24) == 13
          && !(**(_QWORD **)(v20 + 16) ^ 0x65736E6F70736572LL
             | *(_QWORD *)(*(_QWORD *)(v20 + 16) + 5LL) ^ 0x6D6574695F65736ELL) )
        {
          // type=="response_item": 取嵌套字段(7字符key, 未展开具体字符串内容, 疑似 "payload"),
          // 交给 is_unusable_store_false_reasoning_item 判定是否为"不可用的 store=false reasoning item"
          v21 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100771d0a*/
                  &unk_1016F02F3,
                  7,
                  v46);
          if ( v21 ) /*0x100771d12*/
          {
            if ( (unsigned __int8)codexmate_lib::core::relay::response_item_id_compat::is_unusable_store_false_reasoning_item::h12f8df7dd15d22c2(v21) ) /*0x100771d1b*/
            {
              // 判定为"不可用" -> 计数器+1, 丢弃该行(不写入临时文件), 直接读下一行
              ++*v41; /*0x100771d2c*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(v46); /*0x100771d33*/
              goto LABEL_21; /*0x100771d38*/
            }
          }
        }
      }
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(v46); /*0x100771c94*/
      v13 = *(_QWORD *)(v4 + 8); /*0x100771c99*/
      v14 = *(_QWORD *)(v4 + 16); /*0x100771c9e*/
    }
LABEL_20:
    // 非目标行 或 判定为"可用": 原样写回临时文件
    result = std::io::Write::write_all::he0cbe0a715f821fc(v6, v13, v14); /*0x100771ca3*/
    if ( result ) /*0x100771cae*/
      goto LABEL_28; /*0x100771cae*/
LABEL_21:
    *(_QWORD *)(v4 + 16) = 0; /*0x100771cb4*/
    result = std::io::read_until::h65637276fc79ee2d(v5, 10, v4); /*0x100771cc8*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_1016EEE40); /*0x100771ccf*/
    v10 = _mm_cvtsi32_si128(0x2267u); /*0x100771cd7*/
    v11 = _mm_load_si128((const __m128i *)&xmmword_10165AC10); /*0x100771cdf*/
    v12 = _mm_load_si128((const __m128i *)&xmmword_10165AC20); /*0x100771ce7*/
    if ( (result & 1) != 0 ) /*0x100771cef*/
      goto LABEL_2; /*0x100771cef*/
  }
  // 全部行处理完毕: 复制原文件权限到临时文件 + fsync, 才返回 Ok(11)
  result = std::sys::fs::set_permissions::hfb7e5143e400282f(*(void **)(a2[6] + 8), *(_QWORD *)(a2[6] + 16)); /*0x100771d50*/
  if ( result || (result = std::fs::File::sync_data::hd1ab389c8b7cfd2f(v6)) != 0 ) /*0x100771d65*/
  {
LABEL_28:
    *a1 = 2; /*0x100771d6b*/
    a1[1] = result; /*0x100771d72*/
    return result; /*0x100771d87*/
  }
  *a1 = 11; /*0x100771e6d*/
  return result; /*0x100771d76*/
}
