// module: codexmate_lib/core/repository
// addr: 0x14038fb30
// name: persist_registry
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::persist_registry | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall persist_registry(_QWORD *a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // r14d
  __int64 v12; // r15
  char v13; // al
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-50h]
  __int64 v27; // [rsp+38h] [rbp-48h]
  __int128 v28; // [rsp+40h] [rbp-40h] BYREF
  __m256i v29; // [rsp+50h] [rbp-30h]
  __int128 v30; // [rsp+70h] [rbp-10h]
  __int128 v31; // [rsp+80h] [rbp+0h]
  void *v32; // [rsp+90h] [rbp+10h]
  __int64 v33; // [rsp+A0h] [rbp+20h]
  __int128 v34; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+38h]
  __int128 v36; // [rsp+C0h] [rbp+40h] BYREF
  __m256i v37; // [rsp+D0h] [rbp+50h]
  __int128 v38; // [rsp+F0h] [rbp+70h]
  __int128 v39; // [rsp+100h] [rbp+80h]
  void *v40; // [rsp+110h] [rbp+90h]
  __int128 *v41; // [rsp+118h] [rbp+98h]
  __int64 v42; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v43; // [rsp+128h] [rbp+A8h]
  char v44; // [rsp+137h] [rbp+B7h] BYREF
  __int64 v45; // [rsp+138h] [rbp+B8h]

  v45 = -2;
  result = sub_140712590(a2);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
    return result;
  }
  if ( a4 )
  {
    v9 = a2[37];
    v10 = a2[38];
    sub_141486710(&v36, v9, v10);
    if ( (_DWORD)v36 == 2 )
    {
      *((_QWORD *)&v28 + 1) = *((_QWORD *)&v36 + 1);
      *(_QWORD *)&v28 = 2;
LABEL_7:
      sub_140018650((char *)&v28 + 8);
      goto LABEL_8;
    }
    v28 = v36;
    v32 = v40;
    v31 = v39;
    v30 = v38;
    v29 = v37;
    if ( (_QWORD)v36 == 2 )
      goto LABEL_7;
    LODWORD(v28) = sub_141475580();
    DWORD1(v28) = v20;
    sub_141475530(&v36, &v28, 3577643008LL, 27111902);
    if ( (_BYTE)v36 )
      v21 = 0;
    else
      v21 = *((_QWORD *)&v36 + 1);
    *(_QWORD *)&v28 = v21;
    *(_QWORD *)&v36 = &v28;
    *((_QWORD *)&v36 + 1) = sub_1414AC5F0;
    sub_14149C0F0(&v25, &unk_14174E926, &v36);
    v22 = a2[49];
    v23 = a2[50];
    v43 = v26;
    sub_141473FA0((unsigned int)&v28, v22, v23, v26, v27);
    if ( v25 )
      sub_140001660(v43, v25, 1);
    v43 = *((_QWORD *)&v28 + 1);
    if ( (sub_141486360(v9, v10, *((_QWORD *)&v28 + 1), v29.m256i_i64[0]) & 1) != 0 )
    {
      v42 = v24;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)&v34 = &v42;
        *((_QWORD *)&v34 + 1) = sub_141490720;
        *(_QWORD *)&v36 = 0;
        *((_QWORD *)&v36 + 1) = aCodexmateLibCo_16;
        *(_OWORD *)v37.m256i_i8 = 0x1Fu;
        v37.m256i_i64[2] = (__int64)aSrcCoreReposit;
        v37.m256i_i64[3] = 22;
        *(_QWORD *)&v38 = 2;
        *((_QWORD *)&v38 + 1) = aCodexmateLibCo_16;
        *(_QWORD *)&v39 = 31;
        *((_QWORD *)&v39 + 1) = 0x92500000001LL;
        v40 = &unk_14174E938;
        v41 = &v34;
        sub_1412C36A0(&v44, &v36);
      }
      sub_140018650(&v42);
    }
    if ( (_QWORD)v28 )
      sub_140001660(v43, v28, 1);
  }
LABEL_8:
  v11 = *(_DWORD *)(a3 + 80);
  v12 = *(_QWORD *)(a3 + 72);
  if ( *(_QWORD *)(a3 + 24) == -1 )
    *(_QWORD *)&v34 = -1;
  else
    sub_14149C500(&v34, a3 + 24);
  sub_14032D020(&v36, a3);
  *(_QWORD *)&v31 = *(_QWORD *)(a3 + 64);
  v30 = *(_OWORD *)(a3 + 48);
  v13 = *(_BYTE *)(a3 + 84);
  *((_QWORD *)&v31 + 1) = v12;
  v29.m256i_i64[3] = v35;
  *(_OWORD *)&v29.m256i_u64[1] = v34;
  v29.m256i_i64[0] = v37.m256i_i64[0];
  v28 = v36;
  v14 = 4;
  if ( v11 >= 5 )
    v14 = v11;
  BYTE4(v32) = v13;
  LODWORD(v32) = v14;
  if ( (_BYTE)v31 == 2 )
  {
    *(_QWORD *)&v30 = 0;
    *((_QWORD *)&v30 + 1) = 0xA0000000FLL;
    LOBYTE(v31) = 0;
  }
  if ( v13 == 2 )
    BYTE4(v32) = 1;
  sub_1403506C0(&v36, &v28);
  v15 = *((_QWORD *)&v36 + 1);
  if ( (_QWORD)v36 == -1 )
  {
    v42 = *((_QWORD *)&v36 + 1);
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v34 = &v42;
      *((_QWORD *)&v34 + 1) = sub_14142D3F0;
      *(_QWORD *)&v36 = 0;
      *((_QWORD *)&v36 + 1) = aCodexmateLibCo_16;
      *(_OWORD *)v37.m256i_i8 = 0x1Fu;
      v37.m256i_i64[2] = (__int64)aSrcCoreReposit;
      v37.m256i_i64[3] = 22;
      *(_QWORD *)&v38 = 2;
      *((_QWORD *)&v38 + 1) = aCodexmateLibCo_16;
      *(_QWORD *)&v39 = 31;
      *((_QWORD *)&v39 + 1) = 0x93500000001LL;
      v40 = &unk_14174E993;
      v41 = &v34;
      sub_1412C36A0(&v44, &v36);
      v15 = v42;
    }
    *a1 = 3;
    a1[1] = v15;
    return sub_14034DF40(&v28);
  }
  v43 = v36;
  v16 = a2[37];
  v17 = a2[38];
  v33 = *((_QWORD *)&v36 + 1);
  v18 = sub_1408726C0(v16, v17, *((__int64 *)&v36 + 1), v37.m256i_u64[0]);
  if ( v18 )
  {
    v42 = v18;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v34 = &v42;
      *((_QWORD *)&v34 + 1) = sub_141490720;
      *(_QWORD *)&v36 = 0;
      *((_QWORD *)&v36 + 1) = aCodexmateLibCo_16;
      *(_OWORD *)v37.m256i_i8 = 0x1Fu;
      v37.m256i_i64[2] = (__int64)aSrcCoreReposit;
      v37.m256i_i64[3] = 22;
      *(_QWORD *)&v38 = 2;
      *((_QWORD *)&v38 + 1) = aCodexmateLibCo_16;
      *(_QWORD *)&v39 = 31;
      *((_QWORD *)&v39 + 1) = 0x93A00000001LL;
      v40 = &unk_14174E966;
      v41 = &v34;
      sub_1412C36A0(&v44, &v36);
      v18 = v42;
    }
    *a1 = 2;
    a1[1] = v18;
    v19 = v43;
    if ( !v43 )
      return sub_14034DF40(&v28);
    goto LABEL_27;
  }
  *a1 = -1;
  v19 = v43;
  if ( v43 )
LABEL_27:
    sub_140001660(v33, v19, 1);
  return sub_14034DF40(&v28);
}