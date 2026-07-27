// module: codexmate_lib/core/relay/codex_runtime
// addr: 0x14048d560
// name: maybe_persist_cache
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_runtime::maybe_persist_cache | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall maybe_persist_cache(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  _BYTE *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r12
  _QWORD *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r15
  unsigned __int64 v19; // r13
  __int64 i; // r12
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int128 *v25; // rdx
  const char *v26; // rcx
  __int128 *v27; // rdi
  const char *v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rdx
  const char *v33; // [rsp+28h] [rbp-58h]
  __int128 v34; // [rsp+30h] [rbp-50h] BYREF
  __int64 v35; // [rsp+40h] [rbp-40h]
  int v36[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 *v37; // [rsp+58h] [rbp-28h] BYREF
  const char *v38; // [rsp+60h] [rbp-20h]
  __int64 v39; // [rsp+68h] [rbp-18h]
  __int64 v40; // [rsp+70h] [rbp-10h]
  char v41; // [rsp+78h] [rbp-8h]
  __int64 v42; // [rsp+80h] [rbp+0h] BYREF
  __int64 v43; // [rsp+88h] [rbp+8h]
  __int128 v44; // [rsp+90h] [rbp+10h] BYREF
  __int64 v45; // [rsp+A0h] [rbp+20h]
  char v46; // [rsp+AFh] [rbp+2Fh] BYREF
  __int128 v47; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v48; // [rsp+C0h] [rbp+40h]
  __int64 v49; // [rsp+C8h] [rbp+48h]
  __int64 v50; // [rsp+D0h] [rbp+50h]

  v50 = -2;
  if ( !a5 )
  {
    *a1 = -1;
    return;
  }
  v9 = sub_140712590(a2);
  if ( v9 )
  {
    *a1 = 2;
    a1[1] = v9;
    return;
  }
  *(_QWORD *)&v44 = a3;
  *((_QWORD *)&v44 + 1) = a4;
  *(_QWORD *)&v47 = 0;
  *((_QWORD *)&v47 + 1) = 1;
  v48 = 0;
  v39 = 1610612768;
  v37 = &v47;
  v38 = (const char *)&off_14175E8C8;
  if ( (unsigned __int8)sub_14148F3A0(&v44, &v37, v10) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_2,
      55,
      (unsigned int)&v46,
      (unsigned int)&unk_141758598,
      (__int64)&off_14175E980);
  v35 = v48;
  v34 = v47;
  v36[0] = 1;
  nullsub_1(v11);
  v12 = (_BYTE *)sub_140001650(128, 1);
  if ( !v12 )
    sub_1416C2D4B(1, 128);
  *(_QWORD *)&v47 = 128;
  *((_QWORD *)&v47 + 1) = v12;
  v37 = &v47;
  v38 = asc_141756910;
  v39 = 2;
  v40 = 1;
  v41 = 0;
  *v12 = 123;
  v48 = 1;
  LOWORD(v44) = 256;
  *((_QWORD *)&v44 + 1) = &v37;
  sub_1404566A0(&v44, aSchemaversion_1, 13, v36);
  if ( (_BYTE)v44 )
  {
    v13 = sub_1416BF0E0();
    if ( (_QWORD)v47 )
      sub_140001660(*((_QWORD *)&v47 + 1), v47, 1);
LABEL_30:
    *(_QWORD *)&v44 = v13;
    *(_QWORD *)&v47 = &v44;
    *((_QWORD *)&v47 + 1) = sub_14142D3F0;
    sub_14149C0F0(&v37, &unk_141757674, &v47);
    v27 = v37;
    v28 = v38;
    v29 = v39;
    v30 = *(_QWORD *)v44;
    v31 = *(_QWORD *)v44 == 1;
    v49 = v44;
    if ( v31 )
    {
      sub_140018650(v44 + 8);
    }
    else if ( !v30 )
    {
      v32 = *(_QWORD *)(v49 + 16);
      if ( v32 )
        sub_140001660(*(_QWORD *)(v49 + 8), v32, 1);
    }
    sub_140001660(v49, 40, 8);
    *a1 = 10;
    a1[1] = v27;
    a1[2] = v28;
    a1[3] = v29;
    v25 = (__int128 *)v34;
    if ( (_QWORD)v34 )
    {
      v26 = *((const char **)&v34 + 1);
      goto LABEL_37;
    }
    return;
  }
  sub_140452760(&v44, aStatedb, 7, &v34);
  if ( (v44 & 1) == 0 && BYTE1(v44) )
  {
    v14 = *((_QWORD *)&v44 + 1);
    v15 = **((_QWORD ***)&v44 + 1);
    v16 = *(_QWORD *)(*((_QWORD *)&v44 + 1) + 24LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v44 + 1) + 24LL) = v16;
    if ( *(_BYTE *)(v14 + 32) )
    {
      v17 = v15[2];
      if ( *v15 == v17 )
      {
        sub_141688D30((_DWORD)v15, v17, 1, 1, 1);
        v17 = v15[2];
      }
      *(_BYTE *)(v15[1] + v17) = 10;
      v18 = v17 + 1;
      v15[2] = v18;
      if ( v16 )
      {
        v49 = *(_QWORD *)(v14 + 8);
        v19 = *(_QWORD *)(v14 + 16);
        for ( i = 0; i != v16; ++i )
        {
          if ( v19 > *v15 - v18 )
          {
            sub_141688D30((_DWORD)v15, v18, v19, 1, 1);
            v18 = v15[2];
          }
          else if ( !v19 )
          {
            goto LABEL_42;
          }
          sub_141684120(v18 + v15[1], v49, v19);
LABEL_42:
          v18 += v19;
          v15[2] = v18;
        }
      }
    }
    else
    {
      v18 = v15[2];
    }
    if ( *v15 == v18 )
    {
      sub_141688D30((_DWORD)v15, v18, 1, 1, 1);
      v18 = v15[2];
    }
    *(_BYTE *)(v15[1] + v18) = 125;
    v15[2] = v18 + 1;
  }
  v13 = *((_QWORD *)&v47 + 1);
  if ( (_QWORD)v47 == -1 )
    goto LABEL_30;
  v49 = *((_QWORD *)&v47 + 1);
  v43 = v47;
  v21 = v48;
  sub_141473FA0((unsigned int)&v37, *(_QWORD *)(a2 + 776), *(_QWORD *)(a2 + 784), (unsigned int)&unk_141759D7D, 25);
  v33 = v38;
  v22 = sub_1408726C0((__int64)v38, v39, v49, v21);
  if ( v22 )
  {
    v42 = v22;
    *(_QWORD *)&v44 = &v42;
    *((_QWORD *)&v44 + 1) = sub_141490720;
    sub_14149C0F0(&v47, &unk_1417576A4, &v44);
    v44 = v47;
    v45 = v48;
    sub_140018650(&v42);
    *a1 = 10;
    *(_OWORD *)(a1 + 1) = v44;
    a1[3] = v45;
    v23 = v49;
    v24 = v43;
    if ( !v43 )
      goto LABEL_26;
    goto LABEL_25;
  }
  *a1 = -1;
  v23 = v49;
  v24 = v43;
  if ( v43 )
LABEL_25:
    sub_140001660(v23, v24, 1);
LABEL_26:
  if ( (_QWORD)v34 )
    sub_140001660(*((_QWORD *)&v34 + 1), v34, 1);
  v25 = v37;
  if ( v37 )
  {
    v26 = v33;
LABEL_37:
    sub_140001660(v26, v25, 1);
  }
}