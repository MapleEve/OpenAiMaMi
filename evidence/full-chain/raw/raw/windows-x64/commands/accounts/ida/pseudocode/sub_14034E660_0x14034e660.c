// module: codexmate_lib/commands/accounts
// addr: 0x14034e660
// name: sub_14034E660
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14034E660(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rdx

  if ( *(_DWORD *)(a1 + 16) != -1 )
    sub_14034EBB0(a1 + 16);
  v1 = *(_QWORD *)(a1 + 832);
  if ( v1 != -1 )
  {
    v2 = *(_QWORD *)(a1 + 856);
    if ( v2 > 0 )
      sub_140001660(*(_QWORD *)(a1 + 864), v2, 1);
    v3 = *(_QWORD *)(a1 + 840);
    v4 = *(_QWORD *)(a1 + 848);
    if ( v4 )
    {
      v5 = (_QWORD *)(v3 + 8);
      do
      {
        v6 = *(v5 - 1);
        if ( v6 )
          sub_140001660(*v5, v6, 1);
        v5 += 5;
        --v4;
      }
      while ( v4 );
    }
    if ( v1 )
      sub_140001660(v3, 40 * v1, 8);
  }
  sub_1403488D0(a1 + 928);
  return sub_140348710(a1 + 992);
}