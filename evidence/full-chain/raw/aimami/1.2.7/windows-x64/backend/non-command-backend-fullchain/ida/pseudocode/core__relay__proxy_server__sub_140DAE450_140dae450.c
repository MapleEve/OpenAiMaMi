// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140dae450 | name sub_140DAE450
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140DAE450(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 *v9; // r12
  int v10; // eax
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  __int128 v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h]
  __int128 v22; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+6Ch] [rbp-4h]
  __int64 v26; // [rsp+70h] [rbp+0h]

  v26 = -2;
  v5 = *a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v5 + 16), 1, 0) )
    return;
  v9 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v10 = sub_141938160(a1);
    LOBYTE(v10) = v10 ^ 1;
    v11 = *(unsigned __int8 *)(v5 + 17);
    if ( (_BYTE)v11 )
    {
LABEL_4:
      if ( !(_BYTE)v10 && 2 * *v9 && !(unsigned __int8)sub_141938160(v11) )
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
  v25 = v10;
  v24 = v5;
  v13 = *(_QWORD *)(v5 + 40);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v24 + 32);
    v15 = v13 << 8;
    v16 = 0;
    while ( *(_QWORD *)(v14 + v16 + 16) != a3 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v14 + v16 + 8), a2) )
    {
      v16 += 256;
      if ( v15 == v16 )
        goto LABEL_18;
    }
    sub_14102D650(&v20, a4, a5);
    v23 = v21;
    v22 = v20;
    v17 = *(_QWORD *)(v14 + v16 + 168);
    if ( v17 != -1 && v17 )
      sub_140001660(*(_QWORD *)(v14 + v16 + 176), v17, 1);
    *(_QWORD *)(v14 + v16 + 184) = v23;
    *(_OWORD *)(v14 + v16 + 168) = v22;
  }
LABEL_18:
  if ( !(_BYTE)v25 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v11) )
    *(_BYTE *)(v24 + 17) = 1;
  v18 = v24;
  v19 = *(_BYTE *)(v24 + 16);
  *(_BYTE *)(v24 + 16) = 0;
  if ( v19 == 2 )
    WakeByAddressSingle((PVOID)(v18 + 16));
}
