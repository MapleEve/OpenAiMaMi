// 函数: codexmate_lib::core::relay::translator::set_anthropic_thinking_carrier
// 地址: 0x100a1cdd0  大小: 0x20f (527B)
// 来源: mac arm64 (AiMaMi 1.2.6, 符号化构建) 活体 IDB 反编译, 无截断标记
// 角色: 把 Anthropic "thinking"/"redacted_thinking" content block 的完整原始 JSON 序列化+base64,
//        以私有前缀 "aimami-anthropic-thinking-v1:" 封装写回该 block 的 encrypted_content 字段 ——
//        这就是 changelog 所称"Claude协议跨原生边界的私有推理内容清理"里"携带(carrier)"的一半:
//        写入侧。清理侧见 response_item_id_compat::is_unusable_store_false_reasoning_item (0006)。
// 行为总结:
//   输入: a2 = 一个 Anthropic content block 的 serde_json::Value (按引用可变)。
//   1) 若 block["type"]=="redacted_thinking" (17字符字面量核对) 则取 block["data"] (4字符key,
//      与 "redacted_thinking" 共享同一常量池相邻字面量, 取第一个token "data")。
//   2) 若 block["type"]=="thinking" (8字符字面量, 0x676e696b6e696874='thinking' 小端比对) 则取
//      block["signature"] (9字符字面量 "signature")。
//   3) 若上一步取到的字段存在且为非空字符串:
//        - 把 *整个* block(a2) 序列化为 JSON 字节 (serde_json::ser::to_vec)
//        - base64 编码该 JSON 字节 (base64::engine::Engine::encode::inner)
//        - 格式化为 "aimami-anthropic-thinking-v1:{base64}" (前缀常量在 refs 中确认存在)
//        - 用 index_or_insert 把这个字符串写入 block["encrypted_content"] (17字符 key), 覆盖旧值。
//   语义: OpenAI/Codex 侧 rollout 持久化格式没有天然槽位存放 Anthropic 不透明的 thinking 签名块,
//   于是把"整块" thinking content 原样序列化+base64 封装进一个私有 encrypted_content 字段随 rollout
//   一起落盘, 以便日后能够 100% 还原重放给 Anthropic; 这个私有封装同时也是识别标记——
//   is_unusable_store_false_reasoning_item (0006) 就是靠这个私有前缀识别"这是我们自己塞进去的携带层"
//   而非"服务端原生返回的不透明签名", 从而决定 store:false 场景下是否要把它当作不可复用内容清理掉。
__int64 __fastcall codexmate_lib::core::relay::translator::set_anthropic_thinking_carrier::h185ab9608cd81a33(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  const __m128i *v3; // rcx
  __m128i v4; // xmm1
  __int64 v5; // r14
  __int64 (__fastcall *v6)(); // r15
  __int64 *v7; // r14
  _QWORD v8[3]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD *v9; // [rsp+18h] [rbp-58h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+20h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+38h] [rbp-38h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall *v14)(); // [rsp+48h] [rbp-28h]

  result = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a1cdf4*/
             "typecommandurlenabledenvheadersremove MCP server\n"
             "# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
             4,
             a2);
  if ( result && *(_BYTE *)result == 3 ) /*0x100a1ce05*/
  {
    v3 = *(const __m128i **)(result + 16); /*0x100a1ce0b*/
    result = *(_QWORD *)(result + 24); /*0x100a1ce0f*/
    if ( result == 17 ) /*0x100a1ce17*/
    {
      // type 值长度==17 -> 比对是否为 "redacted_thinking"
      result = v3[1].u8[0]; /*0x100a1ce58*/
      v4 = _mm_or_si128( /*0x100a1ce70*/
             _mm_xor_si128(_mm_cvtsi32_si128(result), (__m128i)xmmword_10165AD20),
             _mm_xor_si128(_mm_loadu_si128(v3), (__m128i)xmmword_10165AD10));
      if ( !_mm_testz_si128(v4, v4) ) /*0x100a1ce74*/
        return result; /*0x100a1ce74*/
      result = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a1ce8e*/
                 "dataunittypefullargsopenwithsavekindtrueuuidemithideshow",
                 4,
                 a2);
      if ( !result ) /*0x100a1ce96*/
        return result; /*0x100a1ce96*/
    }
    else
    {
      // type 值长度==8 -> 比对是否为 "thinking" (0x676e696b6e696874 小端 = "thinking")
      if ( result != 8 ) /*0x100a1ce1d*/
        return result; /*0x100a1ce1d*/
      result = 0x676E696B6E696874LL; /*0x100a1ce23*/
      if ( v3->i64[0] != 0x676E696B6E696874LL ) /*0x100a1ce30*/
        return result; /*0x100a1ce30*/
      result = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a1ce45*/
                 "signature",
                 9,
                 a2);
      if ( !result ) /*0x100a1ce4d*/
        return result; /*0x100a1ce4d*/
    }
    if ( *(_BYTE *)result == 3 && *(_QWORD *)(result + 24) ) /*0x100a1cea5*/
    {
      // 序列化整个 block(a2) 为 JSON 字节
      serde_json::ser::to_vec::h73a96f9396356065(&v11, a2); /*0x100a1ceb7*/
      v5 = v11; /*0x100a1cebc*/
      if ( __OFSUB__(-v11, 1) ) /*0x100a1cec3*/
      {
        return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h8ef5f75d55edeb1e(&v12); /*0x100a1cecc*/
      }
      else
      {
        v6 = v12; /*0x100a1ced6*/
        base64::engine::Engine::encode::inner::h266b45ba21b4f907(&v9, "", v12, v13); /*0x100a1ceef*/  // base64 编码
        if ( v5 ) /*0x100a1cef7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100a1cf04*/
        v11 = (__int64)&off_101A1E798; /*0x100a1cf10*/
        v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943; /*0x100a1cf1b*/
        v13 = &v9; /*0x100a1cf1f*/
        v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a1cf2a*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, "\xC0\xC0", &v11); /*0x100a1cf3d*/
        // ↑ 格式化 "aimami-anthropic-thinking-v1:{base64}" (前缀常量 aAimamiAnthropi @ 0x1016fc167 "aimami-anthropic-thinking-v1:")
        if ( v9 ) /*0x100a1cf53*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100a1cf5e*/
        result = v8[0]; /*0x100a1cf63*/
        v9 = (_QWORD *)v8[1]; /*0x100a1cf6b*/
        v10 = (__int64 (__fastcall *)())v8[2]; /*0x100a1cf73*/
        if ( v8[0] != 0x8000000000000000LL ) /*0x100a1cf7a*/
        {
          v14 = v10; /*0x100a1cf84*/
          v13 = v9; /*0x100a1cf88*/
          v12 = (__int64 (__fastcall *)())v8[0]; /*0x100a1cf8c*/
          LOBYTE(v11) = 3; /*0x100a1cf90*/
          v7 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100a1cfa8*/
                            "encrypted_content/reasoning/summary",
                            0x11u);
          // ↑ index_or_insert(block, "encrypted_content", 17) -- 写入/覆盖该字段
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(v7); /*0x100a1cfae*/
          v7[3] = (__int64)v14; /*0x100a1cfb7*/
          v7[2] = (__int64)v13; /*0x100a1cfbf*/
          result = v11; /*0x100a1cfc3*/
          v7[1] = (__int64)v12; /*0x100a1cfcb*/
          *v7 = result; /*0x100a1cfcf*/
        }
      }
    }
  }
  return result; /*0x100a1cfd2*/
}
