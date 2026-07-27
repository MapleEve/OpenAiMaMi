// module: codexmate_lib/core/relay/storage
// addr: 0x1404d6ec0
// name: preserve_state_before_provider_id_migrat
// win 1.2.3 | = mac codexmate_lib::core::relay::storage::preserve_state_before_provider_id_migration | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall preserve_state_before_provider_id_migrat(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *result; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // edx
  unsigned __int128 v15; // kr00_16
  unsigned __int8 v16; // r12
  __int64 v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  __int128 v26; // kr10_16
  _QWORD *v27; // rcx
  __int64 v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h]
  __int64 v30; // [rsp+40h] [rbp-40h]
  unsigned __int128 v31; // [rsp+50h] [rbp-30h] BYREF
  __int64 v32; // [rsp+60h] [rbp-20h]
  __int128 v33; // [rsp+68h] [rbp-18h] BYREF
  __int128 v34; // [rsp+78h] [rbp-8h]
  __int128 v35; // [rsp+88h] [rbp+8h]
  __int128 v36; // [rsp+98h] [rbp+18h]
  __int128 v37; // [rsp+A8h] [rbp+28h]
  __int64 v38; // [rsp+B8h] [rbp+38h]
  __int128 v39; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v40; // [rsp+D0h] [rbp+50h]
  __int128 v41; // [rsp+E0h] [rbp+60h]
  __int128 v42; // [rsp+F0h] [rbp+70h]
  __int128 v43; // [rsp+100h] [rbp+80h]
  __int64 v44; // [rsp+110h] [rbp+90h]
  __int64 v45; // [rsp+118h] [rbp+98h] BYREF
  __int64 v46; // [rsp+120h] [rbp+A0h]
  __int64 v47; // [rsp+128h] [rbp+A8h]
  __int64 v48; // [rsp+130h] [rbp+B0h]
  __int64 v49; // [rsp+138h] [rbp+B8h]
  _QWORD *v50; // [rsp+140h] [rbp+C0h]
  __int64 v51; // [rsp+148h] [rbp+C8h]
  __int64 v52; // [rsp+150h] [rbp+D0h]
  unsigned __int8 v53; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v54; // [rsp+160h] [rbp+E0h]

  v54 = -2;
  v32 = a4;
  v50 = a1;
  sub_141473FA0((unsigned int)&v28, a2, a3, (unsigned int)&unk_14175D960, 23);
  LOBYTE(v33) = 1;
  v5 = v30;
  v49 = v29;
  v6 = sub_14147B9A0(&v33, v29, v30);
  if ( v6 )
  {
    v45 = v6;
    *(_QWORD *)&v39 = &v45;
    *((_QWORD *)&v39 + 1) = sub_141490720;
    sub_14149C0F0(&v33, &unk_1417581A4, &v39);
    v39 = v33;
    *(_QWORD *)&v40 = v34;
    sub_140018650(&v45);
    result = (_QWORD *)v40;
    v12 = v50;
    v50[3] = v40;
    *(_OWORD *)(v12 + 1) = v39;
    *v12 = 10;
    v13 = v28;
    if ( v28 )
      return (_QWORD *)sub_140001660(v49, v13, 1);
    return result;
  }
  LODWORD(v39) = sub_141475580(v8, v7, v9, v10);
  DWORD1(v39) = v14;
  sub_141475530(&v33, &v39, 3577643008LL, 27111902);
  v15 = *((unsigned __int64 *)&v33 + 1) * (unsigned __int128)0x3E8uLL + (unsigned int)v34 / 0xF4240uLL;
  v16 = 0;
  if ( (_BYTE)v33 )
    v15 = 0u;
  v31 = v15;
  while ( 1 )
  {
    v53 = v16;
    *(_QWORD *)&v33 = &v31;
    *((_QWORD *)&v33 + 1) = sub_1414A9600;
    *(_QWORD *)&v34 = &v53;
    *((_QWORD *)&v34 + 1) = sub_1414A9660;
    sub_14149C0F0(&v39, &unk_141758240, &v33);
    v52 = *((_QWORD *)&v39 + 1);
    sub_141473FA0((unsigned int)&v45, v49, v5, DWORD2(v39), v40);
    if ( (_QWORD)v39 )
      sub_140001660(v52, v39, 1);
    v52 = v45;
    v18 = v47;
    v51 = v46;
    sub_141486710(&v33, v46, v47);
    if ( (_DWORD)v33 == 2 )
    {
      *((_QWORD *)&v39 + 1) = *((_QWORD *)&v33 + 1);
      *(_QWORD *)&v39 = 2;
    }
    else
    {
      v39 = v33;
      v44 = v38;
      v43 = v37;
      v42 = v36;
      v41 = v35;
      v40 = v34;
      if ( (_QWORD)v33 != 2 )
      {
        if ( v52 )
          sub_140001660(v51, v52, 1);
        goto LABEL_7;
      }
    }
    sub_140018650((char *)&v39 + 8);
    if ( v52 != -1 )
      break;
LABEL_7:
    if ( v16++ >= 0x63u )
    {
      nullsub_1(v19);
      result = (_QWORD *)sub_140001650(61, 1);
      if ( !result )
        sub_1416C2D4B(1, 61);
      qmemcpy(result, "cannot allocate relay state provider-id migration backup path", 61);
      v20 = v50;
      *v50 = 10;
      v20[1] = 61;
      v20[2] = result;
      v20[3] = 61;
      v13 = v28;
      if ( v28 )
        return (_QWORD *)sub_140001660(v49, v13, 1);
      return result;
    }
  }
  v21 = v48;
  v22 = v32;
  v23 = sub_1408726C0(v51, v18, v32, a5);
  if ( v23 )
  {
    v45 = v23;
    *(_QWORD *)&v39 = &v45;
    *((_QWORD *)&v39 + 1) = sub_141490720;
    sub_14149C0F0(&v33, &unk_14175820D, &v39);
    v39 = v33;
    *(_QWORD *)&v40 = v34;
    sub_140018650(&v45);
    result = (_QWORD *)v40;
    v24 = v50;
    v50[3] = v40;
    *(_OWORD *)(v24 + 1) = v39;
    *v24 = 10;
    goto LABEL_30;
  }
  sub_14148D3C0(&v33, v51, v18);
  v26 = v33;
  if ( (_QWORD)v33 == -1 )
  {
    result = v50;
    *v50 = 2;
    result[1] = *((_QWORD *)&v26 + 1);
    goto LABEL_30;
  }
  if ( (_QWORD)v34 != a5 || (unsigned int)sub_1416847B0(*((_QWORD *)&v33 + 1), v22, a5) )
  {
    if ( (_QWORD)v26 )
      sub_140001660(*((_QWORD *)&v26 + 1), v26, 1);
    nullsub_1(v25);
    result = (_QWORD *)sub_140001650(60, 1);
    if ( !result )
      sub_1416C2D4B(1, 60);
    qmemcpy(result, "relay state provider-id migration backup verification failed", 60);
    v27 = v50;
    *v50 = 10;
    v27[1] = 60;
    v27[2] = result;
    v27[3] = 60;
LABEL_30:
    if ( v52 )
      result = (_QWORD *)sub_140001660(v51, v52, 1);
    v13 = v28;
    if ( !v28 )
      return result;
    return (_QWORD *)sub_140001660(v49, v13, 1);
  }
  if ( (_QWORD)v26 )
    sub_140001660(*((_QWORD *)&v26 + 1), v26, 1);
  result = v50;
  v50[1] = v52;
  result[2] = v51;
  result[3] = v18;
  result[4] = v21;
  *result = -1;
  v13 = v28;
  if ( v28 )
    return (_QWORD *)sub_140001660(v49, v13, 1);
  return result;
}