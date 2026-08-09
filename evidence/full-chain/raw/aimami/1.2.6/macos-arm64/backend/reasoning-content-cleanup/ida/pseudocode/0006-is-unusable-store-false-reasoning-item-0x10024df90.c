// 函数: codexmate_lib::core::relay::response_item_id_compat::is_unusable_store_false_reasoning_item
// 地址: 0x10024df90  大小: 0xaf (175B)
// 来源: mac arm64 (AiMaMi 1.2.6, 符号化构建) 活体 IDB 反编译, 无截断标记
// 角色: changelog "私有推理内容清理" 的判定核心 —— 决定某个 response_item 的 payload 是否属于
//        "store:false 场景下不可复用、必须清理"的 reasoning item。被 0002 (逐行清理闭包) 调用。
// 行为总结 (DTO: 输入=serde_json::Value payload, 输出=bool is_unusable):
//   1) 若 payload["type"] != "reasoning" (9字符字面量核对) -> return false (不是 reasoning item, 保留)。
//   2) 若 payload["type"]=="reasoning" 且 payload["encrypted_content"] (17字符key) 不存在
//      -> return true (是 reasoning item 但没有任何携带内容, 判定为不可用, 清理)。
//   3) 若 encrypted_content 存在但不是字符串, 或字符串长度 < 29(0x1D) -> return false (保留,
//      过短/非法不视为本应用私有封装, 不做清理判定)。
//   4) 若 encrypted_content 是 >=29 字节的字符串, 比对其前 29 字节是否等于私有前缀
//      "aimami-anthropic-thinking-v1:" (由 set_anthropic_thinking_carrier 写入的标记, 见 0004) ——
//      前缀匹配 -> return true (这是本应用自己封装的携带层内容, 在 store:false 请求场景下
//      Anthropic 服务端无法凭引用取回原始 thinking 签名, 该封装内容不可重放, 判定为不可用需清理)；
//      前缀不匹配 -> return false (是真实/不透明的服务端签名内容, 保留)。
unsigned __int8 __fastcall codexmate_lib::core::relay::response_item_id_compat::is_unusable_store_false_reasoning_item::h12f8df7dd15d22c2(
        __int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 result; // al
  __int64 v3; // rcx
  __m128i v4; // xmm0

  v1 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10024dfa8*/
         "typedata did not match any variant of untagged enum TokenErrorValueerror_codegrant_typeauthorization_code"
         "verifierhttps://auth.openai.com/oauth/tokenUser-AgentAiMaMi/1.2.6Acceptcodexmate_lib::core::oauth_login",
         4,
         a1);
  if ( !v1 /*0x10024dfd7*/
    || *(_BYTE *)v1 != 3
    || *(_QWORD *)(v1 + 24) != 9
    || **(_QWORD **)(v1 + 16) ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(*(_QWORD *)(v1 + 16) + 8LL) ^ 0x67LL )
  {
    // payload["type"] != "reasoning" (长度9字面量比对 "reasoning") -> 保留
    return 0; /*0x10024dfdc*/
  }
  v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10024dff9*/
         &anon_4c2b3f46f9d9b45a46fed6f2e252d78d_428,
         17,
         a1);
  result = 1; /*0x10024dffc*/  // 默认: type=="reasoning" 但取不到 encrypted_content -> 判定为不可用(清理)
  if ( v3 && *(_BYTE *)v3 == 3 ) /*0x10024e006*/
  {
    if ( *(_QWORD *)(v3 + 24) >= 0x1Du ) /*0x10024e00d*/
    {
      // encrypted_content 是 String 且长度>=29: 比对前29字节是否等于 "aimami-anthropic-thinking-v1:"
      v4 = _mm_or_si128( /*0x10024e02c*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v3 + 16)), (__m128i)xmmword_10165AC20),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v3 + 16) + 13LL)), (__m128i)xmmword_10165AC10));
      return _mm_testz_si128(v4, v4); /*0x10024e035*/  // testz==1(全零/相等)则前缀匹配 -> 判定为不可用(清理)
    }
    return 0; /*0x10024e00d*/  // 长度<29 -> 保留(不像本应用私有封装, 保守不清理)
  }
  return result; /*0x10024dfe2*/  // encrypted_content 不存在或非字符串 -> 保持默认 result=1(不可用/清理)
}
