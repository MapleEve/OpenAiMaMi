// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::validate_continuation_history::_$u7b$$u7b$closure$u7d$$u7d$::h28572df8cce42e91; addr: 0x100ac9d70; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:20Z
char __fastcall codexmate_lib::core::relay::translator::anthropic_search::validate_continuation_history::_$u7b$$u7b$closure$u7d$$u7d$::h28572df8cce42e91(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char result; // al
  __int64 v5; // r15
  __int64 v6; // r14
  void *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rbx
  size_t v10; // r13
  __int64 v11; // r15
  __int64 v12; // [rsp-48h] [rbp-48h]
  __int64 v13; // [rsp-40h] [rbp-40h]
  char v14; // [rsp-31h] [rbp-31h]

  result = 1; /*0x100ac9d70*/
  if ( a4 == a2 ) /*0x100ac9d75*/
  {
    if ( a4 ) /*0x100ac9d92*/
    {
      v5 = a3; /*0x100ac9d98*/
      v13 = a3 + 32 * a4; /*0x100ac9da8*/
      v6 = 16 * a4; /*0x100ac9dac*/
      while ( 2 ) /*0x100ac9dc5*/
      {
        v7 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac9dc5*/
                       "typereasoningcompleted",
                       4,
                       v5);
        if ( !v7 ) /*0x100ac9dd5*/
          v7 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac9dd7*/
        v14 = serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100ac9de5*/
                v7,
                &off_101C08BA0);
        if ( v14 ) /*0x100ac9dea*/
        {
          v8 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac9dff*/
                           "tool_use_idweb_searchfailed",
                           11,
                           v5);
          if ( !v8 ) /*0x100ac9e07*/
            v8 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac9e09*/
          if ( *(_BYTE *)v8 == 3 ) /*0x100ac9e0f*/
          {
            v9 = v8[2]; /*0x100ac9e11*/
            v10 = v8[3]; /*0x100ac9e15*/
          }
          else
          {
            v9 = 1; /*0x100ac9e20*/
            v10 = 0; /*0x100ac9e25*/
          }
          v12 = v5 + 32; /*0x100ac9e2c*/
          v11 = 0; /*0x100ac9e30*/
          while ( *(_QWORD *)(a1 + v11 + 8) != v10 || memcmp(*(const void **)(a1 + v11), (const void *)v9, v10) ) /*0x100ac9e61*/
          {
            v11 += 16; /*0x100ac9e40*/
            if ( v6 == v11 ) /*0x100ac9e47*/
              return 1; /*0x100ac9e90*/
          }
          v5 = v12; /*0x100ac9e63*/
          if ( v12 != v13 ) /*0x100ac9e80*/
            continue; /*0x100ac9e80*/
        }
        break;
      }
      return v14 ^ 1; /*0x100ac9e8a*/
    }
    else
    {
      return 0; /*0x100ac9e92*/
    }
  }
  return result; /*0x100ac9ea2*/
}