// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140477da0 | name sub_140477DA0
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140477DA0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rsi
  char v4; // al

  if ( *(_DWORD *)(a2 + 16) == -2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a3;
    v3 = *(char **)a2;
    if ( !*(_BYTE *)(a2 + 8) && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(a1) )
      v3[1] = 1;
    v4 = *v3;
    *v3 = 0;
    if ( v4 == 2 )
      WakeByAddressSingle(v3);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
}
