// module: codexmate_lib/core/relay/translator
// addr: 0x140a09800
// name: flatten_function_call_output
// win 1.2.3 | = mac codexmate_lib::core::relay::translator::flatten_function_call_output | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall flatten_function_call_output(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  int v4; // eax
  __int64 v5; // rax
  __int64 i; // rcx
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r14
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r12
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // r14
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // r15
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r12
  __int64 v30; // r12
  int v31; // eax
  char v32; // cl
  char v33; // al
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // [rsp+28h] [rbp-58h]
  __int64 v38; // [rsp+30h] [rbp-50h]
  __int128 *v39; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall **v40)(); // [rsp+40h] [rbp-40h]
  __int64 v41; // [rsp+48h] [rbp-38h]
  __int64 v42; // [rsp+50h] [rbp-30h]
  __int64 v43; // [rsp+58h] [rbp-28h]
  __int64 v44; // [rsp+60h] [rbp-20h]
  _QWORD *v45; // [rsp+68h] [rbp-18h]
  __int128 v46; // [rsp+70h] [rbp-10h] BYREF
  __int64 v47; // [rsp+80h] [rbp+0h]
  char v48; // [rsp+8Fh] [rbp+Fh] BYREF
  __int64 v49; // [rsp+90h] [rbp+10h]

  v49 = -2;
  v2 = a1;
  if ( !a2 )
  {
    a1[1] = 0;
    a1[2] = 1;
    a1[3] = 0;
    goto LABEL_46;
  }
  v4 = *(unsigned __int8 *)a2;
  if ( v4 == 3 )
  {
    sub_14149C500(a1 + 1, a2 + 1);
    goto LABEL_46;
  }
  if ( v4 == 4 )
  {
    v17 = a2[2];
    v18 = a2[3];
LABEL_21:
    sub_140A114B0(v2 + 1, v17, v18);
    goto LABEL_46;
  }
  if ( v4 != 5 )
  {
    *(_QWORD *)&v46 = 0;
    *((_QWORD *)&v46 + 1) = 1;
    v47 = 0;
    v41 = 1610612768;
    v39 = &v46;
    v40 = &off_1417A9B00;
    if ( (unsigned __int8)sub_14142EA10(a2, &v39) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_3,
        55,
        (unsigned int)&v48,
        (unsigned int)&unk_1417A5580,
        (__int64)&off_1417A9BB8);
    goto LABEL_45;
  }
  v45 = a1;
  v5 = a2[1];
  if ( !v5 )
  {
LABEL_44:
    *(_QWORD *)&v46 = 0;
    *((_QWORD *)&v46 + 1) = 1;
    v47 = 0;
    v41 = 1610612768;
    v39 = &v46;
    v40 = &off_1417A9B00;
    v33 = sub_14142EA10(a2, &v39);
    v2 = v45;
    if ( v33 )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_3,
        55,
        (unsigned int)&v48,
        (unsigned int)&unk_1417A5580,
        (__int64)&off_1417A9BB8);
LABEL_45:
    v2[3] = v47;
    *(_OWORD *)(v2 + 1) = v46;
    goto LABEL_46;
  }
  v42 = a2[2];
  v44 = v42;
  v43 = v5;
  for ( i = v5; ; i = *(_QWORD *)(v37 + 8 * v10 + 632) )
  {
    v7 = i + 360;
    v37 = i;
    v8 = (_QWORD *)(i - 8);
    v38 = *(unsigned __int16 *)(i + 626);
    v9 = 3LL * (unsigned int)(8 * v38);
    v10 = -1;
    do
    {
      if ( !v9 )
      {
        v10 = v38;
        goto LABEL_17;
      }
      v11 = v7 + 24;
      v12 = *(_QWORD *)(v7 + 16);
      v13 = v12 - 7;
      if ( v12 >= 7 )
        v12 = 7;
      v14 = -(__int64)v13;
      v15 = sub_1416847B0(aContent_6, *(_QWORD *)(v7 + 8), v12);
      if ( v15 )
        v14 = v15;
      LOBYTE(v16) = (v14 > 0) - (v14 < 0);
      v8 += 4;
      ++v10;
      v9 -= 24;
      v7 = v11;
    }
    while ( (_BYTE)v16 == 1 );
    if ( !(_BYTE)v16 )
      break;
LABEL_17:
    if ( !v44 )
      goto LABEL_29;
    --v44;
  }
  if ( *((_BYTE *)v8 - 24) != 3 )
  {
LABEL_29:
    v21 = v43;
LABEL_30:
    v22 = v21 + 360;
    v23 = *(unsigned __int16 *)(v21 + 626);
    v43 = v21;
    v24 = (_QWORD *)(v21 - 8);
    v44 = v23;
    v25 = 3LL * (unsigned int)(8 * v23);
    v26 = -1;
    do
    {
      if ( !v25 )
      {
        v26 = v44;
LABEL_40:
        if ( !v42 )
          goto LABEL_44;
        --v42;
        v21 = *(_QWORD *)(v43 + 8 * v26 + 632);
        goto LABEL_30;
      }
      v27 = v22 + 24;
      v28 = *(_QWORD *)(v22 + 16);
      v29 = v28 - 13;
      if ( v28 >= 0xD )
        v28 = 13;
      v30 = -(__int64)v29;
      v31 = sub_1416847B0(&unk_1417A7E80, *(_QWORD *)(v22 + 8), v28);
      if ( v31 )
        v30 = v31;
      v32 = (v30 > 0) - (v30 < 0);
      v24 += 4;
      ++v26;
      v25 -= 24;
      v22 = v27;
    }
    while ( v32 == 1 );
    if ( v32 )
      goto LABEL_40;
    if ( *((_BYTE *)v24 - 24) == 4 )
    {
      v17 = *(v24 - 1);
      v18 = *v24;
      v2 = v45;
      goto LABEL_21;
    }
    goto LABEL_44;
  }
  v19 = *v8;
  if ( (__int64)*v8 < 0 )
  {
    v20 = 0;
    goto LABEL_28;
  }
  if ( *v8 )
  {
    v34 = *(v8 - 1);
    nullsub_1(v16);
    v20 = 1;
    v35 = sub_140001650(v19, 1);
    v2 = v45;
    if ( !v35 )
LABEL_28:
      sub_1416C2D4B(v20, v19);
    v36 = v35;
    sub_141684120(v35, v34, v19);
  }
  else
  {
    v36 = 1;
    v2 = v45;
  }
  v2[1] = v19;
  v2[2] = v36;
  v2[3] = v19;
LABEL_46:
  *(_BYTE *)v2 = 3;
}