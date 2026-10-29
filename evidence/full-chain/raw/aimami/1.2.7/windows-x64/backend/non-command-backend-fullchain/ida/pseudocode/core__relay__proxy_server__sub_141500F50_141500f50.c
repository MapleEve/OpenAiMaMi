// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x141500f50 | name sub_141500F50
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_141500F50(__int64 a1)
{
  volatile signed __int8 *v1; // r8
  __int64 *v2; // rsi
  char v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  _QWORD *v7; // rdx
  volatile signed __int8 v8; // al
  __int64 v9; // rsi
  volatile signed __int8 *v10; // rdi
  volatile signed __int8 *v11; // rdi
  __int64 v12; // rbx
  char v13; // al
  volatile signed __int8 *v14; // rsi
  char v15; // al

  if ( *(_BYTE *)(a1 + 56) != 1 )
    return;
  v1 = *(volatile signed __int8 **)a1;
  if ( _InterlockedCompareExchange8(*(volatile signed __int8 **)a1, 1, 0) )
  {
    v9 = a1;
    v10 = v1;
    sub_141937480(v1);
    a1 = v9;
    v1 = v10;
  }
  v2 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v11 = v1;
    v12 = a1;
    v13 = sub_141938160(a1);
    a1 = v12;
    v1 = v11;
    v3 = v13 ^ 1;
  }
  else
  {
    v3 = 0;
  }
  v4 = a1 + 8;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v5 + 24) = v6;
    v7 = (_QWORD *)(a1 + 24);
    if ( v6 )
    {
LABEL_8:
      *(_QWORD *)(v6 + 16) = *v7;
LABEL_9:
      *(_OWORD *)v7 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    if ( *((_QWORD *)v1 + 1) != v4 )
      goto LABEL_13;
    v6 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)v1 + 1) = v6;
    v7 = (_QWORD *)(a1 + 24);
    if ( v6 )
      goto LABEL_8;
  }
  if ( *((_QWORD *)v1 + 2) == v4 )
  {
    *((_QWORD *)v1 + 2) = *v7;
    goto LABEL_9;
  }
LABEL_13:
  if ( *(_QWORD *)(a1 + 48) == *(_QWORD *)(a1 + 40) )
  {
    if ( !v3 )
    {
      if ( 2 * *v2 )
      {
        v14 = v1;
        v15 = sub_141938160(a1);
        v1 = v14;
        if ( !v15 )
          *((_BYTE *)v14 + 1) = 1;
      }
    }
    v8 = *v1;
    *v1 = 0;
    if ( v8 == 2 )
      WakeByAddressSingle((PVOID)v1);
  }
  else
  {
    sub_1414FDED0(*(volatile void **)a1);
  }
}
