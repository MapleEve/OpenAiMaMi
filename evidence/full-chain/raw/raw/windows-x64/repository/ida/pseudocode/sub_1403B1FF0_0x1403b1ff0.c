// module: codexmate_lib/core/repository
// addr: 0x1403b1ff0
// name: sub_1403B1FF0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403B1FF0(_QWORD *a1, __int128 *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  v3 = a1[2];
  if ( v3 == *a1 )
    sub_141688FC0(a1);
  result = a1[1];
  v5 = 48 * v3;
  v6 = *a2;
  v7 = a2[1];
  *(_OWORD *)(result + v5 + 32) = a2[2];
  *(_OWORD *)(result + v5 + 16) = v7;
  *(_OWORD *)(result + v5) = v6;
  a1[2] = v3 + 1;
  return result;
}