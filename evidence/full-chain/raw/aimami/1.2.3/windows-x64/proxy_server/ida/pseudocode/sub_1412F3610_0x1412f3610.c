// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1412f3610
// name: sub_1412F3610
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1412F3610(__int64 a1, __int64 a2)
{
  volatile signed __int8 *v2; // r8
  __int64 *v3; // rsi
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r10
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rdx
  volatile signed __int8 v10; // al
  __int64 v11; // rsi
  volatile signed __int8 *v12; // rdi
  volatile signed __int8 *v13; // rdi
  __int64 v14; // rbx
  int v15; // eax
  volatile signed __int8 *v16; // rsi
  char v17; // al

  if ( *(_BYTE *)(a1 + 56) != 1 )
    return;
  v2 = *(volatile signed __int8 **)a1;
  LOBYTE(a2) = 1;
  if ( _InterlockedCompareExchange8(*(volatile signed __int8 **)a1, 1, 0) )
  {
    v11 = a1;
    v12 = v2;
    sub_1416C15B0(v2);
    a1 = v11;
    v2 = v12;
  }
  v3 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v13 = v2;
    v14 = a1;
    v15 = sub_1416C2250(a1, a2);
    a1 = v14;
    v2 = v13;
    v4 = v15;
    LOBYTE(v4) = v15 ^ 1;
  }
  else
  {
    v4 = 0;
  }
  v5 = a1 + 8;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v6 + 24) = v7;
    v8 = (_QWORD *)(a1 + 24);
    if ( v7 )
    {
LABEL_8:
      *(_QWORD *)(v7 + 16) = *v8;
LABEL_9:
      *(_OWORD *)v8 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    if ( *((_QWORD *)v2 + 1) != v5 )
      goto LABEL_13;
    v7 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)v2 + 1) = v7;
    v8 = (_QWORD *)(a1 + 24);
    if ( v7 )
      goto LABEL_8;
  }
  if ( *((_QWORD *)v2 + 2) == v5 )
  {
    *((_QWORD *)v2 + 2) = *v8;
    goto LABEL_9;
  }
LABEL_13:
  v9 = *(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 40);
  if ( v9 )
  {
    sub_1412F2070(*(_QWORD *)a1, v9, v2, v4);
  }
  else
  {
    if ( !(_BYTE)v4 )
    {
      if ( 2 * *v3 )
      {
        v16 = v2;
        v17 = sub_1416C2250(a1, 0);
        v2 = v16;
        if ( !v17 )
          *((_BYTE *)v16 + 1) = 1;
      }
    }
    v10 = *v2;
    *v2 = 0;
    if ( v10 == 2 )
      WakeByAddressSingle((PVOID)v2);
  }
}