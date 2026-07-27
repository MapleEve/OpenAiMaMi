// module: codexmate_lib/core/voice/runtime
// addr: 0x1406ad5a0
// name: sub_1406AD5A0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1406AD5A0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rsi
  char v4; // al

  if ( *(_DWORD *)(a2 + 16) == -2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a3;
    v3 = *(char **)a2;
    if ( !*(_BYTE *)(a2 + 8) && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(a1, a2) )
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