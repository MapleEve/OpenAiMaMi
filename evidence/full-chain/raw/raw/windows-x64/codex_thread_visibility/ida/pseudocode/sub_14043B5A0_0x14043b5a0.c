// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x14043b5a0
// name: sub_14043B5A0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14043B5A0(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rsi
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-20h]
  _QWORD *v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+30h] [rbp-10h]
  _QWORD *v8; // [rsp+38h] [rbp-8h]

  v2 = (_QWORD *)a1[1];
  v6 = a1;
  v5 = a1[2];
  v7 = 0;
  v8 = v2;
  while ( v5 != v7 )
  {
    ++v7;
    v3 = v2 + 16;
    sub_1402C7EE0(v2);
    v2 = v3;
  }
  result = (__int64)v6;
  if ( *v6 )
    return sub_140001660(v8, *v6 << 7, 8);
  return result;
}