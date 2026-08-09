// 函数: codexmate_lib::core::relay::anthropic_reasoning::model_profile
// 地址: 0x100b3b4c0  大小: 0x641 (1601B)
// 来源: mac arm64 (AiMaMi 1.2.6, 符号化构建) 活体 IDB 反编译, 无截断标记
// 角色: 把外部传入的模型名字符串归一化(trim + 全小写 + '.'/'_' 归并为 '-') 后, 依次调用
//        model_matches_family (0005) 与一组按优先级排列的已知 Anthropic 模型家族 token 常量比对,
//        输出一个"模型能力档案"结构 (推测字段: tier 名称指针/长度 + 能力位标志 + 兜底 tier 标记),
//        未命中任何已知家族时兜底写入 tier 标记 2 ("unknown"档)。该档案很可能用于门控
//        set_anthropic_thinking_carrier(0004)/is_unusable_store_false_reasoning_item(0006) 一类
//        reasoning-carrier 逻辑是否对目标模型生效 (例如某些旧模型家族不支持 redacted_thinking，
//        不应尝试写入/清理该私有携带字段)——但本轮反编译证据本身未直接证明该门控关系，仅基于命名
//        与调用位置推断，标记为待续假设 (limitations 中列出)。
// 归一化管线:
//   1) core::str trim_matches -> 去除首尾空白/引号类字符。
//   2) 堆拷贝后逐字节 ASCII 大写转小写 (SIMD 分块处理: 32B/8B/1B 阶梯回退)。
//   3) 扫描 '.'（46）和 '_'（95）字符, 把被这些字符分隔的片段用 '-' 重新拼接
//      (即 "claude_opus.4_5" 归一化为 "claude-opus-4-5" 这类形式)。
// 家族匹配优先级瀑布 (由高到低, 全部经 model_matches_family 做"词边界"匹配):
//   1. "fable-5" 或 "mythos-5"/"sonnet-5"/"opus-4-8"/"opus-4-7"/"opus-4-6"/"opus-4-5" 任一命中
//      -> tier=off_101A20878(5), capability flags=16843009(0x01010101, 四个能力位全1，最高档)
//   2. 否则 "mythos-preview"/"opus-5"/"sonnet-4-6" 命中 -> tier=off_101A20838(4)
//   3. 否则 "opus-5"/"sonnet-4-6" 或 "sonnet-5"/"opus-4-8..4-5" 链 命中
//      -> tier=off_101A20878(5), flags=16777472(0x01000100，部分能力位), extra flag byte(+20)=1
//   4. 否则 "opus-4-8/4-7/4-6/4-5" 链 命中 -> tier=5, flags=0x1000000, extra flag(+20)=1
//   5. 否则 "opus-4-6/4-5" 或 "sonnet-4-6" 命中 -> tier=off_101A20838(4), flags=0x1000000, extra flag(+20)=0
//   6. 否则 "opus-4-5" 命中 -> tier=off_101A20808(3), byte(+16)=1, dword(+17)=0
//   7. 否则(全不匹配) -> extra flag byte(+20)=2 ("未知/兜底"档)
// 局限: 输出结构体确切字段布局/命名未做 declare_type/struct 恢复 (仅从写入偏移推断"档位名+能力位"语义)，
//   tier 常量 off_101A20878/838/808 指向的字符串字面量内容本轮未 get_string() 读出确认具体档位名文本，
//   家族常量列表中的具体品牌代号(fable/mythos)是本应用内部命名, 与外部真实 Anthropic 模型族对应关系
//   仅按命名规律推断, 未与官方模型列表逐一核对。
double __fastcall codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb7fd285ed0e32830(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128i si128)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  size_t v9; // r13
  __int64 v10; // r15
  const void *v11; // rbx
  void *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __m128i v21; // xmm6
  __int64 v22; // rdx
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  unsigned __int8 *v27; // r12
  __int64 v28; // r8
  size_t v29; // r9
  unsigned __int8 *v30; // r13
  __int64 v31; // r15
  unsigned __int8 *v32; // rax
  __int64 v33; // rbx
  int v34; // ecx
  int v35; // edx
  int v36; // edi
  int v37; // esi
  size_t v38; // rbx
  size_t v39; // r9
  size_t v40; // r15
  __int64 v41; // r12
  const void *v42; // rsi
  size_t v43; // rbx
  unsigned __int64 v44; // rbx
  __int64 v45; // r15
  __int64 v47; // [rsp+0h] [rbp-70h]
  __int64 v48; // [rsp+8h] [rbp-68h]
  __int64 v49; // [rsp+10h] [rbp-60h]
  size_t v50; // [rsp+18h] [rbp-58h]
  size_t v51; // [rsp+20h] [rbp-50h]
  __int64 v52; // [rsp+20h] [rbp-50h]
  __int64 v53; // [rsp+28h] [rbp-48h] BYREF
  __int64 v54; // [rsp+30h] [rbp-40h]
  size_t v55; // [rsp+38h] [rbp-38h]
  __int64 v56; // [rsp+40h] [rbp-30h]

  v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::haf0d9a3a47c0fad9(a2, a3); /*0x100b3b4da*/
  v9 = v8; /*0x100b3b4df*/
  if ( v8 < 0 ) /*0x100b3b4e5*/
  {
    v10 = 0; /*0x100b3b4e7*/
    goto LABEL_3; /*0x100b3b4e7*/
  }
  v49 = a1; /*0x100b3b4f5*/
  if ( !v8 ) /*0x100b3b4f9*/
  {
    v13 = 1; /*0x100b3b539*/
    goto LABEL_18; /*0x100b3b54f*/
  }
  v11 = (const void *)v7; /*0x100b3b4fb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x100b3b4fe*/
  v10 = 1; /*0x100b3b503*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100b3b511*/
  if ( !v12 ) /*0x100b3b519*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x100b3b4ea*/
  v13 = (__int64)v12; /*0x100b3b51b*/
  memcpy(v12, v11, v9); /*0x100b3b527*/
  if ( v9 >= 8 ) /*0x100b3b530*/
  {
    if ( v9 >= 0x20 ) /*0x100b3b562*/
    {
      v14 = v9 & 0x7FFFFFFFFFFFFFE0LL; /*0x100b3b56e*/
      v15 = 0; /*0x100b3b571*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_10165AAF0); /*0x100b3b573*/
      v16 = _mm_load_si128((const __m128i *)&xmmword_10165AB00); /*0x100b3b57b*/
      v17 = _mm_load_si128((const __m128i *)&xmmword_10165AB10); /*0x100b3b583*/
      do /*0x100b3b5e9*/
      {
        v18 = _mm_loadu_si128((const __m128i *)(v13 + v15)); /*0x100b3b590*/
        v19 = _mm_loadu_si128((const __m128i *)(v13 + v15 + 16)); /*0x100b3b596*/
        v20 = _mm_add_epi8(v18, si128); /*0x100b3b5a1*/
        v21 = _mm_add_epi8(v19, si128); /*0x100b3b5a9*/
        *(__m128i *)(v13 + v15) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v16), v20), v17), v18); /*0x100b3b5d5*/
        *(__m128i *)(v13 + v15 + 16) = _mm_or_si128( /*0x100b3b5db*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v16), v21), v17),
                                         v19);
        v15 += 32; /*0x100b3b5e2*/
      }
      while ( v14 != v15 ); /*0x100b3b5e9*/
      if ( v9 == v14 ) /*0x100b3b5ee*/
        goto LABEL_18; /*0x100b3b5ee*/
      if ( (v9 & 0x18) == 0 ) /*0x100b3b5f4*/
        goto LABEL_64; /*0x100b3b5f4*/
    }
    else
    {
      v14 = 0; /*0x100b3b564*/
    }
    v22 = v14; /*0x100b3b5fa*/
    v14 = v9 & 0x7FFFFFFFFFFFFFF8LL; /*0x100b3b604*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_10165AB20); /*0x100b3b607*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_10165AB30); /*0x100b3b60f*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_10165AB40); /*0x100b3b617*/
    do /*0x100b3b64f*/
    {
      v25 = _mm_loadl_epi64((const __m128i *)(v13 + v22)); /*0x100b3b620*/
      v26 = _mm_add_epi8(v25, si128); /*0x100b3b62a*/
      *(_QWORD *)(v13 + v22) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v26, v23), v26), v24), v25).u64[0]; /*0x100b3b642*/
      v22 += 8; /*0x100b3b648*/
    }
    while ( v14 != v22 ); /*0x100b3b64f*/
    goto LABEL_63; /*0x100b3b64f*/
  }
  v14 = 0; /*0x100b3b532*/
  do /*0x100b3badf*/
  {
LABEL_64:
    *(_BYTE *)(v13 + v14) |= 32 * ((unsigned __int8)(*(_BYTE *)(v13 + v14) - 65) < 0x1Au); /*0x100b3bae5*/
    ++v14; /*0x100b3bafc*/
LABEL_63:
    ; /*0x100b3badc*/
  }
  while ( v9 != v14 ); /*0x100b3badf*/
LABEL_18:
  // 下面这段是 '.'/'_' -> '-' 归并循环 (逐段 memcpy 拼接 + 分隔符 '-')
  v53 = 0; /*0x100b3b656*/
  v54 = 1; /*0x100b3b65e*/
  v55 = 0; /*0x100b3b666*/
  v50 = v9; /*0x100b3b66e*/
  v27 = (unsigned __int8 *)(v13 + v9); /*0x100b3b672*/
  v28 = 1; /*0x100b3b676*/
  v29 = 0; /*0x100b3b67c*/
  v30 = (unsigned __int8 *)v13; /*0x100b3b67f*/
  v56 = 0; /*0x100b3b682*/
  v31 = 0; /*0x100b3b68a*/
LABEL_19:
  v32 = v30; /*0x100b3b68d*/
  while ( v32 != v27 ) /*0x100b3b693*/
  {
    v33 = v31; /*0x100b3b699*/
    v34 = *v32; /*0x100b3b69c*/
    if ( (v34 & 0x80u) != 0 ) /*0x100b3b6a1*/
    {
      v35 = v34 & 0x1F; /*0x100b3b6b2*/
      v36 = v32[1] & 0x3F; /*0x100b3b6b9*/
      if ( (unsigned __int8)v34 <= 0xDFu ) /*0x100b3b6bf*/
      {
        v30 = v32 + 2; /*0x100b3b6ec*/
        v34 = v36 | (v35 << 6); /*0x100b3b6f5*/
      }
      else
      {
        v37 = (v36 << 6) | v32[2] & 0x3F; /*0x100b3b6cb*/
        if ( (unsigned __int8)v34 < 0xF0u ) /*0x100b3b6d0*/
        {
          v30 = v32 + 3; /*0x100b3b6f9*/
          v34 = (v35 << 12) | v37; /*0x100b3b702*/
        }
        else
        {
          v30 = v32 + 4; /*0x100b3b6d2*/
          v34 = ((v34 & 7) << 18) | (v37 << 6) | v32[3] & 0x3F; /*0x100b3b6e8*/
        }
      }
    }
    else
    {
      v30 = v32 + 1; /*0x100b3b6a3*/
    }
    v31 += v30 - v32; /*0x100b3b716*/
    if ( v34 != 46 ) /*0x100b3b71c*/  // '.'
    {
      v32 = v30; /*0x100b3b71e*/
      if ( v34 != 95 ) /*0x100b3b724*/  // '_'
        continue; /*0x100b3b724*/
    }
    v38 = v33 - v56; /*0x100b3b72a*/
    if ( v38 > v53 - v29 ) /*0x100b3b73b*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h591623cb20e04f95(&v53, v29, v38, 1, 1); /*0x100b3b79e*/
      v29 = v55; /*0x100b3b7a3*/
      v48 = v53; /*0x100b3b7ab*/
      v28 = v54; /*0x100b3b7af*/
    }
    else
    {
      v48 = v53; /*0x100b3b73d*/
    }
    v47 = v28; /*0x100b3b741*/
    v51 = v29; /*0x100b3b745*/
    memcpy((void *)(v28 + v29), (const void *)(v13 + v56), v38); /*0x100b3b757*/
    v28 = v47; /*0x100b3b75c*/
    v39 = v38 + v51; /*0x100b3b764*/
    v55 = v38 + v51; /*0x100b3b767*/
    if ( v48 == v38 + v51 ) /*0x100b3b772*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h591623cb20e04f95(&v53, v48, 1, 1, 1); /*0x100b3b7c9*/
      v28 = v54; /*0x100b3b7ce*/
      v39 = v55; /*0x100b3b7d2*/
    }
    *(_BYTE *)(v28 + v39) = 45; /*0x100b3b774*/  // '-'
    v29 = v39 + 1; /*0x100b3b779*/
    v55 = v29; /*0x100b3b77c*/
    v56 = v31; /*0x100b3b780*/
    goto LABEL_19; /*0x100b3b784*/
  }
  v40 = v50 - v56; /*0x100b3b7df*/
  if ( v50 - v56 > v53 - v29 ) /*0x100b3b7f0*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h591623cb20e04f95(&v53, v29, v50 - v56, 1, 1); /*0x100b3ba6f*/
    v41 = v49; /*0x100b3ba74*/
    v52 = v53; /*0x100b3ba7c*/
    v29 = v55; /*0x100b3ba80*/
  }
  else
  {
    v52 = v53; /*0x100b3b7f6*/
    v41 = v49; /*0x100b3b7fa*/
  }
  v42 = (const void *)(v13 + v56); /*0x100b3b802*/
  v56 = v54; /*0x100b3b809*/
  v43 = v29; /*0x100b3b814*/
  memcpy((void *)(v54 + v29), v42, v40); /*0x100b3b817*/
  v44 = v40 + v43; /*0x100b3b81c*/
  if ( v50 ) /*0x100b3b822*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v50, 1); /*0x100b3b82f*/
  v45 = v56; /*0x100b3b840*/
  // ↓ 家族匹配瀑布, 见文件头注释, 全部通过 model_matches_family (0005) 做词边界匹配
  if ( codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23( /*0x100b3b86c*/
         v56,
         v44,
         (__int64)"fable-5mythos-previewopus-5sonnet-4-6",
         7u)
    || codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23(
         v45,
         v44,
         (__int64)"mythos-5sonnet-5opus-4-8opus-4-7opus-4-6opus-4-5aionsaleapp_showapp_hideset_textchannelsbasenameresolverset_menu\b",
         8u) )
  {
    *(_QWORD *)v41 = &off_101A20878; /*0x100b3b87c*/
    *(_QWORD *)(v41 + 8) = 5; /*0x100b3b880*/
LABEL_43:
    *(_BYTE *)(v41 + 16) = 0; /*0x100b3b889*/
    *(_DWORD *)(v41 + 17) = 16843009; /*0x100b3b88f*/
    goto LABEL_44; /*0x100b3b88f*/
  }
  if ( codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23( /*0x100b3b8dc*/
         v45,
         v44,
         (__int64)"mythos-previewopus-5sonnet-4-6",
         0xEu) )
  {
    *(_QWORD *)v41 = &off_101A20838; /*0x100b3b8ec*/
    *(_QWORD *)(v41 + 8) = 4; /*0x100b3b8f0*/
    goto LABEL_43; /*0x100b3b8f9*/
  }
  if ( codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23( /*0x100b3b928*/
         v45,
         v44,
         (__int64)"opus-5sonnet-4-6",
         6u)
    || codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23(
         v45,
         v44,
         (__int64)"sonnet-5opus-4-8opus-4-7opus-4-6opus-4-5aionsaleapp_showapp_hideset_textchannelsbasenameresolverset_menu\b",
         8u) )
  {
    *(_QWORD *)v41 = &off_101A20878; /*0x100b3b938*/
    *(_QWORD *)(v41 + 8) = 5; /*0x100b3b93c*/
    *(_DWORD *)(v41 + 16) = 16777472; /*0x100b3b945*/
LABEL_52:
    *(_BYTE *)(v41 + 20) = 1; /*0x100b3b94e*/
    goto LABEL_44; /*0x100b3b954*/
  }
  if ( codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23( /*0x100b3b986*/
         v45,
         v44,
         (__int64)"opus-4-8opus-4-7opus-4-6opus-4-5aionsaleapp_showapp_hideset_textchannelsbasenameresolverset_menu\b",
         8u)
    || codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23(
         v45,
         v44,
         (__int64)"opus-4-7opus-4-6opus-4-5aionsaleapp_showapp_hideset_textchannelsbasenameresolverset_menu\b",
         8u) )
  {
    *(_QWORD *)v41 = &off_101A20878; /*0x100b3b996*/
    *(_QWORD *)(v41 + 8) = 5; /*0x100b3b99a*/
    *(_DWORD *)(v41 + 16) = 0x1000000; /*0x100b3b9a3*/
    goto LABEL_52; /*0x100b3b9ac*/
  }
  if ( codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23( /*0x100b3b9db*/
         v45,
         v44,
         (__int64)"opus-4-6opus-4-5aionsaleapp_showapp_hideset_textchannelsbasenameresolverset_menu\b",
         8u)
    || codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23(
         v45,
         v44,
         (__int64)"sonnet-4-6",
         0xAu) )
  {
    *(_QWORD *)v41 = &off_101A20838; /*0x100b3b9eb*/
    *(_QWORD *)(v41 + 8) = 4; /*0x100b3b9ef*/
    *(_DWORD *)(v41 + 16) = 0x1000000; /*0x100b3b9f8*/
    *(_BYTE *)(v41 + 20) = 0; /*0x100b3ba01*/
  }
  else if ( codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hc22dd436dd51bd23( /*0x100b3ba1e*/
              v45,
              v44,
              (__int64)"opus-4-5aionsaleapp_showapp_hideset_textchannelsbasenameresolverset_menu\b",
              8u) )
  {
    *(_QWORD *)v41 = &off_101A20808; /*0x100b3ba2e*/
    *(_QWORD *)(v41 + 8) = 3; /*0x100b3ba32*/
    *(_BYTE *)(v41 + 16) = 1; /*0x100b3ba3b*/
    *(_DWORD *)(v41 + 17) = 0; /*0x100b3ba41*/
  }
  else
  {
    *(_BYTE *)(v41 + 20) = 2; /*0x100b3ba4f*/  // 兜底: 未知家族
  }
LABEL_44:
  if ( v52 ) /*0x100b3b89b*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v52, 1); /*0x100b3b8b6*/
  return *(double *)si128.i64; /*0x100b3b8a8*/
}
