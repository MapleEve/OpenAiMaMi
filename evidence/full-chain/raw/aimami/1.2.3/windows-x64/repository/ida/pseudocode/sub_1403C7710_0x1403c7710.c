// module: codexmate_lib/core/repository
// addr: 0x1403c7710
// name: sub_1403C7710
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403C7710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rsi
  __int64 v7; // r14

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 160 * v3;
  while ( *(_QWORD *)(v6 + 136) != a3 || (unsigned int)sub_1416847B0(*(_QWORD *)(v6 + 128), a2, a3) )
  {
    v6 += 160;
    v7 -= 160;
    if ( !v7 )
      return 0;
  }
  return v6;
}