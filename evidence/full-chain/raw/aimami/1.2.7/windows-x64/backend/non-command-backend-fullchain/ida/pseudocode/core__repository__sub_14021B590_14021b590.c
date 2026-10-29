// win 1.2.7 | module src/core/repository.rs | ea 0x14021b590 | name sub_14021B590
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14021B590(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rsi
  __int64 v7; // r14

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 192 * v3;
  while ( *(_QWORD *)(v6 + 160) != a3 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v6 + 152), a2) )
  {
    v6 += 192;
    v7 -= 192;
    if ( !v7 )
      return 0;
  }
  return v6;
}
