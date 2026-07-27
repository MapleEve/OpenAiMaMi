// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14066a050
// name: sub_14066A050
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14066A050(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v8; // r14
  __int64 *v9; // r12
  int v10; // eax
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rcx
  char v18; // al
  __int128 v19; // [rsp+28h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h]
  __int128 v21; // [rsp+40h] [rbp-30h]
  __int64 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+6Ch] [rbp-4h]
  __int64 v25; // [rsp+70h] [rbp+0h]

  v25 = -2;
  v5 = *a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v5 + 16), 1, 0) )
    return;
  v8 = a2;
  v9 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v10 = sub_1416C2250(a1, a2);
    LOBYTE(v10) = v10 ^ 1;
    v11 = *(unsigned __int8 *)(v5 + 17);
    if ( (_BYTE)v11 )
    {
LABEL_4:
      if ( !(_BYTE)v10 && 2 * *v9 && !(unsigned __int8)sub_1416C2250(v11, a2) )
        *(_BYTE *)(v5 + 17) = 1;
      v12 = *(_BYTE *)(v5 + 16);
      *(_BYTE *)(v5 + 16) = 0;
      if ( v12 == 2 )
        WakeByAddressSingle((PVOID)(v5 + 16));
      return;
    }
  }
  else
  {
    v10 = 0;
    v11 = *(unsigned __int8 *)(v5 + 17);
    if ( (_BYTE)v11 )
      goto LABEL_4;
  }
  v24 = v10;
  v23 = v5;
  v13 = *(_QWORD *)(v5 + 40);
  if ( v13 )
  {
    v11 = v23;
    v14 = *(_QWORD *)(v23 + 32);
    v15 = 232 * v13;
    v16 = 0;
    while ( *(_QWORD *)(v14 + v16 + 16) != a3 || (unsigned int)sub_1416847B0(*(_QWORD *)(v14 + v16 + 8), v8, a3) )
    {
      v16 += 232;
      if ( v15 == v16 )
        goto LABEL_18;
    }
    sub_140AE70B0(&v19, a4, a5);
    v22 = v20;
    v21 = v19;
    a2 = *(_QWORD *)(v14 + v16 + 168);
    if ( a2 != -1 && a2 )
      sub_140001660(*(_QWORD *)(v14 + v16 + 176), a2, 1);
    *(_QWORD *)(v14 + v16 + 184) = v22;
    *(_OWORD *)(v14 + v16 + 168) = v21;
  }
LABEL_18:
  if ( !(_BYTE)v24 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v11, a2) )
    *(_BYTE *)(v23 + 17) = 1;
  v17 = v23;
  v18 = *(_BYTE *)(v23 + 16);
  *(_BYTE *)(v23 + 16) = 0;
  if ( v18 == 2 )
    WakeByAddressSingle((PVOID)(v17 + 16));
}