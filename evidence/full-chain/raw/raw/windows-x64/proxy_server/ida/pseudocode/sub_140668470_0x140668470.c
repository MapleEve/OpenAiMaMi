// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140668470
// name: sub_140668470
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140668470(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 *v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  __int64 v21; // rbx
  char v22; // al
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // ecx
  _QWORD v29[37]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v30; // [rsp+150h] [rbp+D0h]
  __int64 v31; // [rsp+160h] [rbp+E0h]
  __int64 v32; // [rsp+170h] [rbp+F0h]
  _QWORD *v33; // [rsp+178h] [rbp+F8h]
  _QWORD *v34; // [rsp+180h] [rbp+100h]
  __int64 v35; // [rsp+188h] [rbp+108h]
  _BYTE v36[24]; // [rsp+190h] [rbp+110h] BYREF
  __int64 v37; // [rsp+1A8h] [rbp+128h]
  __int64 v38; // [rsp+1B0h] [rbp+130h]
  int v39; // [rsp+1BCh] [rbp+13Ch]
  __int64 v40; // [rsp+1C0h] [rbp+140h]

  v40 = -2;
  v3 = a1;
  v4 = *a2;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(*a2 + 16LL), 1, 0) )
    sub_1416C15B0((volatile void *)(v4 + 16));
  v5 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v6 = sub_1416C2250(a1, a2);
    LOBYTE(v6) = v6 ^ 1;
    v7 = *(unsigned __int8 *)(v4 + 17);
    if ( (_BYTE)v7 )
    {
LABEL_5:
      *v3 = 0;
      v3[1] = 8;
      v3[2] = 0;
      if ( !(_BYTE)v6 && 2 * *v5 && !(unsigned __int8)sub_1416C2250(v7, a2) )
        *(_BYTE *)(v4 + 17) = 1;
      v8 = *(_BYTE *)(v4 + 16);
      *(_BYTE *)(v4 + 16) = 0;
      if ( v8 == 2 )
        WakeByAddressSingle((PVOID)(v4 + 16));
      return v3;
    }
  }
  else
  {
    v6 = 0;
    v7 = *(unsigned __int8 *)(v4 + 17);
    if ( (_BYTE)v7 )
      goto LABEL_5;
  }
  v39 = v6;
  v33 = v3;
  v38 = v4;
  sub_14032C050(v36, v4 + 48);
  v9 = *(_QWORD *)&v36[16];
  v31 = *(_QWORD *)&v36[16];
  v30 = *(_OWORD *)v36;
  v10 = *(_QWORD *)(v38 + 32);
  v35 = v10 + 232LL * *(_QWORD *)(v38 + 40);
  v34 = a2;
  v32 = a2[2] + 16LL;
  v11 = *(_QWORD *)&v36[8];
  v12 = 24LL * *(_QWORD *)&v36[16];
  while ( v10 != v35 && v9 )
  {
    v13 = v10;
LABEL_15:
    v14 = *(_QWORD *)(v13 + 8);
    v15 = *(_QWORD *)(v13 + 16);
    v16 = 0;
    while ( *(_QWORD *)(v11 + v16 + 16) != v15 || (unsigned int)sub_1416847B0(*(_QWORD *)(v11 + v16 + 8), v14, v15) )
    {
      v16 += 24;
      if ( v12 == v16 )
      {
        v13 += 232;
        if ( v13 == v35 )
          goto LABEL_29;
        goto LABEL_15;
      }
    }
    v10 = v13 + 232;
    if ( !*(_QWORD *)(v13 + 88) )
    {
      get_api_key(v36, v32, v14, v15);
      if ( v36[0] )
      {
LABEL_21:
        if ( *(_QWORD *)&v36[8] )
          sub_140001660(*(_QWORD *)&v36[16], *(_QWORD *)&v36[8], 1);
      }
      else if ( *(_QWORD *)&v36[8] != -1 )
      {
        if ( !v37 )
          goto LABEL_21;
        v17 = *(_QWORD *)(v13 + 72);
        if ( v17 )
          sub_140001660(*(_QWORD *)(v13 + 80), v17, 1);
        *(_QWORD *)(v13 + 88) = v37;
        *(_OWORD *)(v13 + 72) = *(_OWORD *)&v36[8];
        if ( !*(_BYTE *)(v13 + 228) )
          *(_BYTE *)(v13 + 228) = 1;
      }
    }
  }
LABEL_29:
  sub_14067A4C0(v29, v38 + 24);
  if ( v9 )
  {
    v20 = (_QWORD *)(v11 + 8);
    do
    {
      v18 = *(v20 - 1);
      if ( v18 )
        sub_140001660(*v20, v18, 1);
      v20 += 3;
      --v9;
    }
    while ( v9 );
  }
  if ( (_QWORD)v30 )
    sub_140001660(v11, 24 * v30, 8);
  v21 = v38;
  if ( !(_BYTE)v39 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v19, v18) )
    *(_BYTE *)(v21 + 17) = 1;
  v22 = *(_BYTE *)(v21 + 16);
  *(_BYTE *)(v21 + 16) = 0;
  v3 = v33;
  v23 = v34;
  if ( v22 == 2 )
    WakeByAddressSingle((PVOID)(v21 + 16));
  sub_140FFA6E0(v36);
  v24 = v23 + 1;
  v25 = (*(int *)v36 >> 13) - 1;
  v26 = 0;
  if ( *(int *)v36 >> 13 <= 0 )
  {
    v27 = (1 - (*(int *)v36 >> 13)) / 0x190u + 1;
    v25 += 400 * v27;
    v26 = -146097 * v27;
  }
  sub_1404D3DE0(
    v3,
    v29,
    v24,
    1000
  * (*(unsigned int *)&v36[4]
   + 86400LL * (((v25 / 100) >> 2) + ((1461 * v25) >> 2) + v26 + ((*(_DWORD *)v36 >> 4) & 0x1FF) - v25 / 100 - 719163))
  + *(unsigned int *)&v36[8] / 0xF4240uLL);
  sub_1405E7AE0(v29);
  return v3;
}