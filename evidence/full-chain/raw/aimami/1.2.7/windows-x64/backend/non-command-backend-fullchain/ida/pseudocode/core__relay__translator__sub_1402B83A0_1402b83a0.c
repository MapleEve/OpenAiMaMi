// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402b83a0 | name sub_1402B83A0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402B83A0(int a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  _BOOL8 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r15
  int v11; // r8d
  __int64 v12; // r14
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int128 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int128 v20; // [rsp+70h] [rbp-10h]
  __int64 v21; // [rsp+80h] [rbp+0h] BYREF
  __int64 v22; // [rsp+88h] [rbp+8h]
  _QWORD v23[9]; // [rsp+98h] [rbp+18h] BYREF
  _BYTE v24[72]; // [rsp+E0h] [rbp+60h] BYREF
  _QWORD *v25; // [rsp+128h] [rbp+A8h]
  __int64 v26; // [rsp+130h] [rbp+B0h]

  v26 = -2;
  v3 = a2[4];
  v4 = a2[5];
  v5 = v3;
  v6 = v3 != 0;
  if ( v3 )
    v5 = a2[6];
  v25 = a2;
  v23[0] = v3 != 0;
  v23[1] = 0;
  v23[2] = v3;
  v23[3] = v4;
  v23[4] = v23[0];
  v23[5] = 0;
  v23[6] = v3;
  v23[7] = v4;
  v23[8] = v5;
  while ( 1 )
  {
    sub_140E83060(v24, v23, v5, v6);
    if ( !*(_QWORD *)v24 )
      goto LABEL_20;
    v7 = *(_QWORD *)(*(_QWORD *)v24 + 24LL * *(_QWORD *)&v24[16] + 8);
    if ( v7 == -1 )
      goto LABEL_20;
    v8 = *(_QWORD *)(*(_QWORD *)v24 + 24LL * *(_QWORD *)&v24[16] + 16);
    v9 = 9LL * *(_QWORD *)&v24[16];
    v10 = *(_QWORD *)(*(_QWORD *)v24 + 72LL * *(_QWORD *)&v24[16] + 272);
    *(_OWORD *)&v24[48] = *(_OWORD *)(*(_QWORD *)v24 + 72LL * *(_QWORD *)&v24[16] + 328);
    *(_OWORD *)&v24[32] = *(_OWORD *)(*(_QWORD *)v24 + 72LL * *(_QWORD *)&v24[16] + 312);
    *(_OWORD *)&v24[16] = *(_OWORD *)(*(_QWORD *)v24 + 72LL * *(_QWORD *)&v24[16] + 296);
    *(_OWORD *)v24 = *(_OWORD *)(*(_QWORD *)v24 + 8 * v9 + 280);
    if ( v7 )
      sub_140001660(v8, v7, 1);
    v20 = *(_OWORD *)&v24[48];
    v19 = *(_QWORD *)&v24[40];
    v18 = *(_OWORD *)v24;
    if ( v10 == -1 )
    {
LABEL_20:
      sub_140E90CA0(v23);
      v14 = v25;
      v15 = *v25;
      v16 = 0;
      if ( *v25 == -1 )
        return v16;
      goto LABEL_21;
    }
    *(_QWORD *)v24 = v10;
    *(_OWORD *)&v24[56] = *(_OWORD *)&v24[48];
    *(_OWORD *)&v24[40] = *(_OWORD *)&v24[32];
    *(_OWORD *)&v24[24] = *(_OWORD *)&v24[16];
    *(_OWORD *)&v24[8] = v18;
    v11 = v20;
    if ( v19 == -1 )
      v11 = 0;
    v12 = *(_QWORD *)&v24[8];
    v13 = *(_QWORD *)&v24[32];
    sub_1402B8A40(
      (unsigned int)&v21,
      a1,
      v11,
      DWORD2(v20),
      *(__int64 *)&v24[8],
      *(__int64 *)&v24[16],
      *(__int64 *)&v24[32],
      *(__int64 *)&v24[40]);
    if ( v21 )
      break;
LABEL_14:
    if ( v19 > 0 )
      sub_140001660(v20, v19, 1);
    if ( v10 )
      sub_140001660(v12, v10, 1);
    if ( *(_QWORD *)&v24[24] )
      sub_140001660(v13, *(_QWORD *)&v24[24], 1);
  }
  if ( v21 != -1 )
  {
    sub_140001660(v22, v21, 1);
    goto LABEL_14;
  }
  v16 = v22;
  if ( v19 > 0 )
    sub_140001660(v20, v19, 1);
  if ( v10 )
    sub_140001660(v12, v10, 1);
  if ( *(_QWORD *)&v24[24] )
    sub_140001660(v13, *(_QWORD *)&v24[24], 1);
  sub_140E90CA0(v23);
  v14 = v25;
  v15 = *v25;
  if ( *v25 != -1 )
  {
LABEL_21:
    if ( v15 )
      sub_140001660(v14[1], v15, 1);
  }
  return v16;
}
