// win 1.2.7 | module src/core/relay/quota.rs | ea 0x140a3a950 | name sub_140A3A950
// win 1.2.7 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140A3A950(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(a1 + 840) == 3 )
  {
    v1 = *(unsigned __int8 *)(a1 + 120);
    if ( v1 == 4 )
    {
      if ( *(_BYTE *)(a1 + 832) == 3 )
      {
        sub_1407A90D0(a1 + 408);
      }
      else if ( !*(_BYTE *)(a1 + 832) )
      {
        sub_140757C80(a1 + 272);
        v2 = *(_QWORD **)(a1 + 400);
        if ( *v2 )
          sub_140001660(v2[1], *v2, 1);
        sub_140001660(v2, 88, 8);
      }
    }
    else if ( v1 == 3 )
    {
      sub_1407AC3B0(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136));
    }
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
      sub_140001660(*(_QWORD *)(a1 + 56), v3, 1);
  }
}
