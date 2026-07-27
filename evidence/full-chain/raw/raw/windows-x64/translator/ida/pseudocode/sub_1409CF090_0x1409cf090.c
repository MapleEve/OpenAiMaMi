// module: codexmate_lib/core/relay/translator
// addr: 0x1409cf090
// name: sub_1409CF090
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409CF090(_QWORD *a1, __int128 *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0

  v3 = a1[2];
  if ( v3 == *a1 )
    sub_1416890A0(a1);
  result = a1[1];
  v5 = 32 * v3;
  v6 = *a2;
  *(_OWORD *)(result + v5 + 16) = a2[1];
  *(_OWORD *)(result + v5) = v6;
  a1[2] = v3 + 1;
  return result;
}