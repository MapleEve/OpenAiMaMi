// module: codexmate_lib/core/voice/runtime
// addr: 0x140682760
// name: sub_140682760
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140682760(__int64 a1, __int64 a2)
{
  char *v2; // rsi
  char v3; // al
  int v4; // edi
  char v5; // bl
  __int16 v6; // bp
  __int64 v7; // r14
  char v8; // al
  __int64 v9; // r15
  __int64 v10; // r15
  char v11; // al

  v2 = *(char **)(a2 + 8);
  v3 = *(_BYTE *)(a2 + 16);
  if ( *(_DWORD *)a2 == 1 )
  {
    *(_QWORD *)a1 = v2;
    *(_BYTE *)(a1 + 8) = v3;
    v4 = -2;
  }
  else
  {
    v5 = v2[829];
    v6 = *((_WORD *)v2 + 412);
    v7 = *((_QWORD *)v2 + 86);
    v4 = *((_DWORD *)v2 + 174);
    if ( !v3 )
    {
      if ( 2 * *off_141EC90B8 )
      {
        v10 = a1;
        v11 = sub_1416C2250(a1, a2);
        a1 = v10;
        if ( !v11 )
          v2[1] = 1;
      }
    }
    v8 = *v2;
    *v2 = 0;
    if ( v8 == 2 )
    {
      v9 = a1;
      WakeByAddressSingle(v2);
      a1 = v9;
    }
    *(_WORD *)a1 = v6;
    *(_BYTE *)(a1 + 2) = v5;
    *(_QWORD *)(a1 + 8) = v7;
  }
  *(_DWORD *)(a1 + 16) = v4;
}