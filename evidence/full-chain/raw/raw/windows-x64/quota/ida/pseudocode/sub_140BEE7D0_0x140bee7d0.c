// module: codexmate_lib/core/relay/quota
// addr: 0x140bee7d0
// name: sub_140BEE7D0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140BEE7D0(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(a1 + 841) == 3 )
  {
    v1 = *(unsigned __int8 *)(a1 + 48);
    if ( v1 == 4 )
    {
      if ( *(_BYTE *)(a1 + 760) == 3 )
      {
        sub_140BE80E0(a1 + 336);
      }
      else if ( !*(_BYTE *)(a1 + 760) )
      {
        sub_140BA5F10(a1 + 200);
        v2 = *(_QWORD **)(a1 + 328);
        if ( *v2 )
          sub_140001660(v2[1], *v2, 1);
        sub_140001660(v2, 88, 8);
      }
    }
    else if ( v1 == 3 )
    {
      sub_140BF25D0(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
    }
    v3 = *(_QWORD *)(a1 + 800);
    if ( v3 )
      sub_140001660(*(_QWORD *)(a1 + 808), v3, 1);
  }
}