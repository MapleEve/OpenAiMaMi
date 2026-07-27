// module: codexmate_lib/core/codex_config
// addr: 0x140613660
// name: sub_140613660
// win 1.2.1 | module src/core/codex_config.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_140613660(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 *a6)
{
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(_QWORD, _QWORD); // rsi
  __int64 v8; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  bool v14; // r14
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v27; // [rsp+28h] [rbp-58h] BYREF
  __int128 v28; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 *v29; // [rsp+40h] [rbp-40h]
  __int64 (__fastcall *v30)(); // [rsp+48h] [rbp-38h]
  void *v31; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall *v32)(); // [rsp+58h] [rbp-28h]
  _QWORD v33[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v34; // [rsp+70h] [rbp-10h] BYREF
  __int64 v35; // [rsp+80h] [rbp+0h]
  __int64 (__fastcall *v36)(_QWORD, _QWORD); // [rsp+88h] [rbp+8h]
  const char *v37; // [rsp+90h] [rbp+10h]
  __int64 v38; // [rsp+98h] [rbp+18h]
  __int64 v39; // [rsp+A0h] [rbp+20h]
  const char *v40; // [rsp+A8h] [rbp+28h]
  __int64 v41; // [rsp+B0h] [rbp+30h]
  __int64 v42; // [rsp+B8h] [rbp+38h]
  void *v43; // [rsp+C0h] [rbp+40h]
  __int128 *v44; // [rsp+C8h] [rbp+48h]
  __int64 v45; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v46; // [rsp+E0h] [rbp+60h]
  __int64 v47; // [rsp+E8h] [rbp+68h]
  __int64 v48; // [rsp+F0h] [rbp+70h]
  __int64 v49; // [rsp+F8h] [rbp+78h]
  __int64 v50; // [rsp+100h] [rbp+80h]
  __int64 v51; // [rsp+108h] [rbp+88h]
  char v52; // [rsp+117h] [rbp+97h] BYREF
  __int64 v53; // [rsp+118h] [rbp+98h]
  __int64 v54; // [rsp+120h] [rbp+A0h]
  unsigned __int8 v55; // [rsp+12Fh] [rbp+AFh]
  __int64 v56; // [rsp+130h] [rbp+B0h]

  v56 = -2;
  v33[0] = a4;
  v33[1] = a5;
  v47 = a2;
  v46 = a3;
  v10 = sub_1414740B0(a2, a3);
  if ( v10 )
  {
    LOBYTE(v34) = 1;
    v12 = sub_14147B9A0(&v34, v10, v11);
    if ( v12 )
    {
      *a1 = 2;
      a1[1] = v12;
      return a1;
    }
  }
  v55 = *a6;
  v13 = 1;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 || v13 > 3 )
    {
      *(_QWORD *)&v34 = v33;
      *((_QWORD *)&v34 + 1) = sub_14041F680;
      sub_14149C0F0(a1 + 1, &unk_14176663E, &v34);
      *a1 = 10;
      return a1;
    }
    v15 = v13 + 1;
    v14 = v13 == 3;
    if ( v13 == 3 )
      v15 = 3;
    v27 = v13;
    sub_14148D130(&v34, v47, v46);
    v16 = *((_QWORD *)&v34 + 1);
    v54 = v34;
    if ( (_QWORD)v34 == -1 )
    {
      if ( (unsigned __int8)sub_14065FAD0(*((_QWORD *)&v34 + 1)) )
      {
        *a1 = 2;
        a1[1] = v16;
        a1[2] = v6;
        a1[3] = (__int64)v7;
        return a1;
      }
      *(_QWORD *)&v28 = v16;
      sub_140018650(&v28);
      v17 = 1;
      v7 = nullptr;
      v54 = 0;
    }
    else
    {
      v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))v35;
      v17 = *((_QWORD *)&v34 + 1);
    }
    v53 = v17;
    sub_1403D28A0((char *)&v34 + 8, v17, v7, v55);
    v18 = *((_QWORD *)&v34 + 1);
    v48 = v35;
    v19 = (unsigned __int64)v36;
    if ( v36 == v7 && !(unsigned int)sub_1416847B0(v48, v53, v7) )
    {
      *a1 = -1;
      v21 = v53;
      v22 = v54;
      goto LABEL_39;
    }
    v49 = v18;
    sub_14148D130(&v34, v47, v46);
    v20 = *((_QWORD *)&v34 + 1);
    v50 = v34;
    if ( (_QWORD)v34 == -1 )
      break;
    v8 = v35;
    v51 = *((_QWORD *)&v34 + 1);
    v6 = v53;
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD))v35 == v7 )
      goto LABEL_21;
LABEL_22:
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v28 = v33;
      *((_QWORD *)&v28 + 1) = sub_14041F680;
      v29 = &v27;
      v30 = sub_1414AC520;
      v31 = &unk_141766688;
      v32 = sub_1414AC520;
      *(_QWORD *)&v34 = 0;
      *((_QWORD *)&v34 + 1) = aCodexmateLibCo_2;
      v35 = 33;
      v36 = nullptr;
      v37 = aSrcCoreCodexCo;
      v38 = 24;
      v39 = 2;
      v40 = aCodexmateLibCo_2;
      v41 = 33;
      v42 = 0x1B00000001LL;
      v43 = &unk_141766690;
      v44 = &v28;
      sub_1412C36A0(&v52, &v34);
      v6 = v53;
    }
    if ( v50 )
      sub_140001660(v51, v50, 1);
    if ( v49 )
      sub_140001660(v48, v49, 1);
    if ( v54 )
      sub_140001660(v6, v54, 1);
    v13 = v15;
  }
  if ( (unsigned __int8)sub_14065FAD0(*((_QWORD *)&v34 + 1)) )
  {
    *a1 = 2;
    a1[1] = v20;
    a1[2] = v51;
    a1[3] = v8;
    v21 = v53;
    v22 = v54;
    v18 = v49;
    goto LABEL_39;
  }
  *(_QWORD *)&v28 = v20;
  sub_140018650(&v28);
  v51 = 1;
  v8 = 0;
  v50 = 0;
  v6 = v53;
  if ( v7 )
    goto LABEL_22;
LABEL_21:
  if ( (unsigned int)sub_1416847B0(v51, v6, v7) )
    goto LABEL_22;
  v23 = sub_1408726C0(v47, v46, v48, v19);
  if ( v23 )
  {
    v45 = v23;
    *(_QWORD *)&v34 = v33;
    *((_QWORD *)&v34 + 1) = sub_14041F680;
    v35 = (__int64)&v45;
    v36 = sub_141490720;
    sub_14149C0F0(&v28, &unk_141767240, &v34);
    v34 = v28;
    v35 = (__int64)v29;
    sub_140018650(&v45);
    a1[3] = v35;
    *(_OWORD *)(a1 + 1) = v34;
    v24 = 10;
  }
  else
  {
    v24 = -1;
  }
  v25 = v50;
  *a1 = v24;
  v21 = v53;
  v22 = v54;
  v18 = v49;
  if ( v25 )
    sub_140001660(v51, v25, 1);
LABEL_39:
  if ( v18 )
    sub_140001660(v48, v18, 1);
  if ( v22 )
    sub_140001660(v21, v22, 1);
  return a1;
}