// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x141683280 | name sub_141683280
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141683280(_QWORD *a1, __int128 *a2)
{
  __int128 v2; // xmm0
  _OWORD v4[2]; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+40h] [rbp-10h]

  v5 = *((_DWORD *)a2 + 8);
  v2 = *a2;
  v4[1] = a2[1];
  v4[0] = v2;
  return sub_141685580(*a1, v4);
}
