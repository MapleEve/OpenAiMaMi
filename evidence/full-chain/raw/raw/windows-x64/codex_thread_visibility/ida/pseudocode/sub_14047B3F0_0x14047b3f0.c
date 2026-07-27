// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x14047b3f0
// name: sub_14047B3F0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14047B3F0(_QWORD *a1, __int128 *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2

  v3 = a1[2];
  if ( v3 == *a1 )
    sub_141689730(a1);
  result = a1[1];
  v5 = 9 * v3;
  *(_QWORD *)(result + 8 * v5 + 64) = *((_QWORD *)a2 + 8);
  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  *(_OWORD *)(result + 8 * v5 + 48) = a2[3];
  *(_OWORD *)(result + 8 * v5 + 32) = v8;
  *(_OWORD *)(result + 8 * v5 + 16) = v7;
  *(_OWORD *)(result + 8 * v5) = v6;
  a1[2] = v3 + 1;
  return result;
}