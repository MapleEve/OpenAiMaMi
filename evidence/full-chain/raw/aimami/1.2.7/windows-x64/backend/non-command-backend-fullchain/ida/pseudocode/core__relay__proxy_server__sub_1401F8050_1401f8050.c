// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1401f8050 | name sub_1401F8050
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1401F8050(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned __int128 v6; // kr00_16
  unsigned __int64 v7; // rcx
  __int64 *v8; // r14
  _BYTE *v9; // rbx
  char v10; // al
  __int64 v11; // r15
  bool v12; // cf
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  char v15; // al
  char v16; // al

  v3 = *a1;
  v4 = sub_14167FD50(*a1 + 40);
  v7 = v5;
  v6 = 0x3E8 * (unsigned __int128)(unsigned __int64)v4 + v5 / 0xF4240uLL;
  LOBYTE(v7) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v3 + 56), 1, 0) )
    sub_141937480((volatile void *)(v3 + 56));
  v8 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v16 = sub_141938160(v7);
    v9 = (_BYTE *)(v3 + 57);
    v7 = *(unsigned __int8 *)(v3 + 57);
    if ( !a2 )
    {
      if ( !v16 )
        goto LABEL_16;
      goto LABEL_15;
    }
    v10 = v16 ^ 1;
  }
  else
  {
    v9 = (_BYTE *)(v3 + 57);
    if ( !a2 )
    {
LABEL_15:
      if ( 2 * *v8 && !(unsigned __int8)sub_141938160(v7) )
        *v9 = 1;
      goto LABEL_16;
    }
    v10 = 0;
  }
  v11 = v6 | -(__int64)(*((_QWORD *)&v6 + 1) != 0);
  v12 = __CFADD__(*(_QWORD *)(v3 + 304), a2);
  v13 = *(_QWORD *)(v3 + 304) + a2;
  v7 = -1;
  if ( !v12 )
    v7 = v13;
  *(_QWORD *)(v3 + 304) = v7;
  if ( !*(_BYTE *)(v3 + 64) )
  {
    *(_QWORD *)(v3 + 64) = 1;
    *(_QWORD *)(v3 + 72) = v11;
  }
  if ( *(_BYTE *)(v3 + 80) )
  {
    v7 = *(_QWORD *)(v3 + 312);
    v14 = v11 - *(_QWORD *)(v3 + 88);
    if ( v14 <= v7 )
      v14 = *(_QWORD *)(v3 + 312);
    *(_QWORD *)(v3 + 312) = v14;
  }
  *(_QWORD *)(v3 + 80) = 1;
  *(_QWORD *)(v3 + 88) = v11;
  if ( !v10 )
    goto LABEL_15;
LABEL_16:
  v15 = *(_BYTE *)(v3 + 56);
  *(_BYTE *)(v3 + 56) = 0;
  if ( v15 == 2 )
    WakeByAddressSingle((PVOID)(v3 + 56));
}
