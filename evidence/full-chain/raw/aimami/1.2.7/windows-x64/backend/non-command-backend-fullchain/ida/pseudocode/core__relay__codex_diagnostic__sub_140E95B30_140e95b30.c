// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140e95b30 | name sub_140E95B30
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E95B30(__int64 *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rsi
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-20h]
  __int64 *v6; // [rsp+28h] [rbp-18h]
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
    v3 = v2 + 24;
    sub_14038C9C0(v2);
    v2 = v3;
  }
  result = *v6;
  if ( *v6 )
    return sub_140001660(v8, 192 * result, 8);
  return result;
}
