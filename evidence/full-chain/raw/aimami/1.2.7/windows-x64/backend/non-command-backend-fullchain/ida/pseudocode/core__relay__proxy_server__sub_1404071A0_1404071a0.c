// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1404071a0 | name sub_1404071A0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1404071A0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp-10h] BYREF
  __int64 v6; // [rsp+38h] [rbp-8h]
  __int64 v7; // [rsp+40h] [rbp+0h]

  v7 = -2;
  if ( *(_BYTE *)(a1 + 167) == 3 )
  {
    v1 = a1;
    if ( *(_BYTE *)(a1 + 152) == 3 && *(_WORD *)(a1 + 120) == 0xFFFF )
    {
      v6 = a1;
      v2 = *(_QWORD *)(a1 + 128);
      if ( (unsigned int)(v2 & 3) - 2 >= 2 && (v2 & 3) != 0 )
      {
        v5 = v2 - 1;
        sub_1416BCB00(&v5);
      }
      v1 = v6;
    }
    v3 = *(_QWORD *)(v1 + 16);
    if ( v3 )
      sub_140001660(*(_QWORD *)v1, 2 * v3, 2);
    v4 = *(_QWORD *)(v1 + 64);
    if ( v4 != -1 )
    {
      if ( v4 )
        sub_140001660(*(_QWORD *)(v1 + 72), v4, 1);
    }
    *(_BYTE *)(v1 + 166) = 0;
  }
}
