// module: codexmate_lib/platform/process
// addr: 0x1403fd960
// name: sub_1403FD960
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
unsigned int __fastcall sub_1403FD960(__int64 a1, __int64 a2, void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  const char *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // r13
  HANDLE v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r14
  __int128 v18; // xmm0
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  unsigned int result; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // r12
  unsigned int v31; // r13d
  unsigned __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // r13
  unsigned int v43; // r12d
  unsigned __int64 v44; // rax
  unsigned int v45; // edx
  _QWORD v46[21]; // [rsp+28h] [rbp-58h] BYREF
  int v47; // [rsp+D4h] [rbp+54h]
  __int128 v48; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v49; // [rsp+F0h] [rbp+70h]
  __int64 *v50; // [rsp+F8h] [rbp+78h] BYREF
  _OWORD v51[5]; // [rsp+100h] [rbp+80h] BYREF
  __int64 v52; // [rsp+150h] [rbp+D0h]
  int v53; // [rsp+1A4h] [rbp+124h]
  __int64 v54; // [rsp+1B0h] [rbp+130h] BYREF
  HANDLE v55; // [rsp+1B8h] [rbp+138h]
  __int64 v56; // [rsp+1C0h] [rbp+140h]
  void *v57; // [rsp+1C8h] [rbp+148h]
  __int64 v58; // [rsp+1D0h] [rbp+150h]
  void *v59; // [rsp+1D8h] [rbp+158h]
  HANDLE hObject; // [rsp+1E0h] [rbp+160h]
  void *v61; // [rsp+1E8h] [rbp+168h]
  __int64 v62; // [rsp+1F0h] [rbp+170h]
  __int64 v63; // [rsp+1F8h] [rbp+178h]
  HANDLE v64; // [rsp+200h] [rbp+180h]
  HANDLE v65; // [rsp+208h] [rbp+188h]
  HANDLE v66; // [rsp+210h] [rbp+190h]
  _QWORD v67[3]; // [rsp+218h] [rbp+198h] BYREF
  __int64 v68; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v69; // [rsp+238h] [rbp+1B8h]
  __int64 v70; // [rsp+240h] [rbp+1C0h]
  HANDLE *v71; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 (__fastcall *v72)(); // [rsp+250h] [rbp+1D0h]
  HANDLE v73; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v74; // [rsp+260h] [rbp+1E0h]
  __int64 v75; // [rsp+268h] [rbp+1E8h]
  __int64 v76; // [rsp+270h] [rbp+1F0h]

  v76 = -2;
  v6 = sub_1414743E0(a2, a3);
  if ( !v6 )
    goto LABEL_30;
  sub_1414A3C90(&v50, v6, v7);
  if ( (_DWORD)v50 == 1 )
    goto LABEL_30;
  v8 = *((_QWORD *)&v51[0] + 1);
  if ( *((_QWORD *)&v51[0] + 1) > 0xFu )
    goto LABEL_30;
  if ( *((_QWORD *)&v51[0] + 1) == 5 )
  {
    if ( (**(_BYTE **)&v51[0] | (unsigned __int8)(32 * ((unsigned __int8)(**(_BYTE **)&v51[0] - 65) < 0x1Au))) == 99
      && (*(_BYTE *)(*(_QWORD *)&v51[0] + 1LL)
        | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 1LL) - 65) < 0x1Au))) == 111
      && (*(_BYTE *)(*(_QWORD *)&v51[0] + 2LL)
        | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 2LL) - 65) < 0x1Au))) == 100
      && (*(_BYTE *)(*(_QWORD *)&v51[0] + 3LL)
        | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 3LL) - 65) < 0x1Au))) == 101
      && (*(_BYTE *)(*(_QWORD *)&v51[0] + 4LL)
        | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 4LL) - 65) < 0x1Au))) == 120 )
    {
      v9 = aCodex_0;
      goto LABEL_20;
    }
LABEL_30:
    v54 = a2;
    v55 = a3;
    v46[0] = &v54;
    v46[1] = sub_14148F3A0;
    sub_14149C0F0(v51, &unk_14174D6E2, v46);
    v18 = v51[0];
    v19 = v51[2];
    v20 = v51[3];
    *(_OWORD *)(a1 + 24) = v51[1];
    *(_OWORD *)(a1 + 40) = v19;
    *(_OWORD *)(a1 + 56) = v20;
    *(_OWORD *)(a1 + 72) = v51[4];
    result = v52;
    *(_QWORD *)(a1 + 88) = v52;
    *(_QWORD *)a1 = 9;
    *(_OWORD *)(a1 + 8) = v18;
    return result;
  }
  if ( *((_QWORD *)&v51[0] + 1) != 7
    || (**(_BYTE **)&v51[0] | (unsigned __int8)(32 * ((unsigned __int8)(**(_BYTE **)&v51[0] - 65) < 0x1Au))) != 99
    || (*(_BYTE *)(*(_QWORD *)&v51[0] + 1LL)
      | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 1LL) - 65) < 0x1Au))) != 104
    || (*(_BYTE *)(*(_QWORD *)&v51[0] + 2LL)
      | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 2LL) - 65) < 0x1Au))) != 97
    || (*(_BYTE *)(*(_QWORD *)&v51[0] + 3LL)
      | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 3LL) - 65) < 0x1Au))) != 116
    || (*(_BYTE *)(*(_QWORD *)&v51[0] + 4LL)
      | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 4LL) - 65) < 0x1Au))) != 103
    || (*(_BYTE *)(*(_QWORD *)&v51[0] + 5LL)
      | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 5LL) - 65) < 0x1Au))) != 112
    || (*(_BYTE *)(*(_QWORD *)&v51[0] + 6LL)
      | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(*(_QWORD *)&v51[0] + 6LL) - 65) < 0x1Au))) != 116 )
  {
    goto LABEL_30;
  }
  v9 = aChatgpt;
LABEL_20:
  sub_14147B720(v46, a2, a3);
  v47 = 0x8000000;
  v10 = sub_1414740B0(a2, a3);
  if ( v10 )
    sub_14147B6D0(v46, v10, v11);
  sub_1414814B0(&v50, v46);
  if ( (_DWORD)v50 == 2 )
  {
    sub_140348E70((__int64 *)&v50);
LABEL_24:
    sub_14149B760(&v50, a2, a3);
    v75 = *(_QWORD *)&v51[0];
    sub_1403431C0(v67, *(_QWORD *)&v51[0], *((_QWORD *)&v51[0] + 1));
    if ( (__int64)v50 > 0 )
      sub_140001660(v75, v50, 1);
    sub_14147B720(&v50, aPowershell, 10);
    v53 = 0x8000000;
    v71 = (HANDLE *)v67;
    v72 = (__int64 (__fastcall *)())sub_1400015F0;
    sub_14149C0F0(&v68, &unk_141752537, &v71);
    v74 = v68;
    v75 = v69;
    v12 = v70;
    sub_14147B600(&v50, aNoprofile, 10);
    sub_14147B600(&v50, aWindowstyle, 12);
    sub_14147B600(&v50, aHidden_1, 6);
    sub_14147B600(&v50, aCommand_1, 8);
    sub_14147B600(&v50, v75, v12);
    sub_1414814B0(&v54, &v50);
    v13 = v54;
    v14 = v55;
    if ( v54 == 2 )
    {
      v73 = v55;
      v71 = &v73;
      v72 = sub_141490720;
      sub_14149C0F0(&v68, &unk_14174D708, &v71);
      v15 = v68;
      v16 = v69;
      v17 = v70;
      sub_140018650(&v73);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = v15;
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)(a1 + 24) = v17;
      if ( v74 )
        sub_140001660(v75, v74, 1);
      sub_14034D6C0((__int64)&v50);
    }
    else
    {
      v63 = v56;
      v66 = v57;
      v62 = v58;
      v65 = v59;
      v64 = v61;
      CloseHandle(hObject);
      CloseHandle(v64);
      if ( v13 )
        CloseHandle(v14);
      if ( v63 )
        CloseHandle(v66);
      if ( v62 )
        CloseHandle(v65);
      if ( v74 )
        sub_140001660(v75, v74, 1);
      sub_14034D6C0((__int64)&v50);
      v37 = sub_141471910(v35, v34, v36);
      v42 = sub_141491390(v37, v38, 10, 0, (__int64)&off_141751C10);
      v43 = v39;
      while ( 1 )
      {
        v44 = sub_141471910(v40, v39, v41);
        if ( v44 == v42 )
        {
          if ( v45 >= v43 )
            goto LABEL_54;
        }
        else if ( v44 >= v42 )
        {
LABEL_54:
          v54 = a2;
          v55 = a3;
          v50 = &v54;
          *(_QWORD *)&v51[0] = sub_14148F3A0;
          sub_14149C0F0(&v48, &unk_141752579, &v50);
          *(_QWORD *)(a1 + 24) = v49;
          *(_OWORD *)(a1 + 8) = v48;
          *(_QWORD *)a1 = 10;
          goto LABEL_56;
        }
        if ( (unsigned int)sub_140AECEB0(v9, v8) == 1 )
          break;
        sub_141487490(0, 80000000);
      }
      *(_QWORD *)a1 = -1;
    }
LABEL_56:
    if ( v67[0] )
      sub_140001660(v67[1], v67[0], 1);
  }
  else
  {
    sub_140348E70((__int64 *)&v50);
    v25 = sub_141471910(v23, v22, v24);
    v30 = sub_141491390(v25, v26, 10, 0, (__int64)&off_141751C10);
    v31 = v27;
    while ( 1 )
    {
      v32 = sub_141471910(v28, v27, v29);
      if ( v32 == v30 )
      {
        if ( v33 >= v31 )
          goto LABEL_24;
      }
      else if ( v32 >= v30 )
      {
        goto LABEL_24;
      }
      if ( (unsigned int)sub_140AECEB0(v9, v8) == 1 )
        break;
      sub_141487490(0, 80000000);
    }
    *(_QWORD *)a1 = -1;
  }
  return sub_14034D6C0((__int64)v46);
}