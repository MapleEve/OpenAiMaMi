// module: codexmate_lib/core/relay/router_unlock_auth
// addr: 0x1404949c0
// name: install_virtual_unlock_auth
// win 1.2.3 | = mac codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall install_virtual_unlock_auth(__int64 *a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  char v9; // di
  __int64 v10; // r8
  __int64 v11; // rcx
  char v12; // r13
  __int64 v13; // r15
  __int64 v14; // r12
  _OWORD *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edx
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  __int64 (__fastcall *v25)(); // rax
  __int64 (__fastcall **v26)(); // r12
  __int64 (__fastcall *v27)(); // rdi
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rbx
  void *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  _QWORD *v37; // r13
  __int64 v38; // rbx
  __int64 v39; // rdi
  __int64 i; // r15
  __int64 v41; // r8
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD v53[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v54; // [rsp+48h] [rbp-38h]
  __int64 v55; // [rsp+50h] [rbp-30h]
  char v56; // [rsp+68h] [rbp-18h]
  __int64 v57; // [rsp+70h] [rbp-10h] BYREF
  __int64 v58; // [rsp+78h] [rbp-8h]
  __int64 (__fastcall *v59)(); // [rsp+80h] [rbp+0h]
  __int64 v60; // [rsp+90h] [rbp+10h] BYREF
  __int64 v61; // [rsp+98h] [rbp+18h]
  __int64 v62; // [rsp+A0h] [rbp+20h]
  __int64 v63; // [rsp+B0h] [rbp+30h]
  __int64 v64; // [rsp+B8h] [rbp+38h]
  _QWORD v65[2]; // [rsp+C0h] [rbp+40h] BYREF
  __int64 (__fastcall *v66)(); // [rsp+D0h] [rbp+50h] BYREF
  __int128 v67; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v68; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v69; // [rsp+F8h] [rbp+78h]
  __int128 v70; // [rsp+108h] [rbp+88h] BYREF
  __int128 v71; // [rsp+118h] [rbp+98h]
  __int64 v72; // [rsp+128h] [rbp+A8h]
  __int128 v73; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v74; // [rsp+140h] [rbp+C0h]
  __int128 v75; // [rsp+150h] [rbp+D0h]
  __int128 v76; // [rsp+160h] [rbp+E0h]
  __int128 v77; // [rsp+170h] [rbp+F0h]
  __int64 v78; // [rsp+180h] [rbp+100h]
  __int64 v79; // [rsp+188h] [rbp+108h]
  __int64 (__fastcall *v80)(); // [rsp+190h] [rbp+110h] BYREF
  __int64 (__fastcall *v81)(); // [rsp+198h] [rbp+118h]
  unsigned __int64 v82; // [rsp+1A0h] [rbp+120h]
  void *v83; // [rsp+1A8h] [rbp+128h]
  _OWORD *v84; // [rsp+1B0h] [rbp+130h]
  __int64 (__fastcall *v85)(); // [rsp+1B8h] [rbp+138h]
  __int64 v86; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 (__fastcall *v87)(); // [rsp+1C8h] [rbp+148h]
  unsigned __int64 v88; // [rsp+1D0h] [rbp+150h]
  __int64 v89; // [rsp+1D8h] [rbp+158h]
  __int64 v90; // [rsp+1E0h] [rbp+160h]

  v90 = -2;
  result = sub_140712590(a2);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
    return result;
  }
  v7 = a2[97];
  v8 = a2[98];
  sub_141473FA0((unsigned int)&v57, v7, v8, (unsigned int)&unk_141759E55, 30);
  sub_141473FA0((unsigned int)&v60, v7, v8, (unsigned int)&unk_141759E37, 30);
  read_marker((__int64)v53, v7, v8);
  v9 = sub_14048ED60(a2);
  v10 = a2[6];
  v89 = a2[5];
  v63 = v10;
  sub_141486710(&v67, v89, v10);
  if ( (_DWORD)v67 != 2 )
  {
    v73 = v67;
    v78 = v72;
    v77 = v71;
    v76 = v70;
    v75 = v69;
    v74 = v68;
    if ( (_QWORD)v67 == 2 )
      goto LABEL_6;
    if ( v9 == 1 )
      goto LABEL_7;
    v13 = v61;
    v14 = v62;
    sub_141486710(&v67, v61, v62);
    if ( (_DWORD)v67 == 2 )
    {
      *((_QWORD *)&v73 + 1) = *((_QWORD *)&v67 + 1);
      *(_QWORD *)&v73 = 2;
    }
    else
    {
      v73 = v67;
      v78 = v72;
      v77 = v71;
      v76 = v70;
      v75 = v69;
      v74 = v68;
      if ( (_QWORD)v67 != 2 )
      {
        v12 = 1;
        if ( ((v9 == 2) & a3) == 0 )
          goto LABEL_16;
        goto LABEL_52;
      }
    }
    sub_140018650((char *)&v73 + 8);
LABEL_52:
    sub_14148D3C0(&v67, v89, v63);
    v41 = *((_QWORD *)&v67 + 1);
    if ( (_QWORD)v67 != -1 )
    {
      v83 = *((void **)&v67 + 1);
      v84 = (_OWORD *)v67;
      v42 = sub_1408726C0(v13, v14, *((__int64 *)&v67 + 1), v68);
      if ( v84 )
        sub_140001660(v83, v84, 1);
      v41 = v42;
    }
    if ( v41 )
    {
      v86 = v41;
      *(_QWORD *)&v73 = &v86;
      *((_QWORD *)&v73 + 1) = sub_141490720;
      sub_14149C0F0(&v67, &unk_14175788A, &v73);
      v73 = v67;
      *(_QWORD *)&v74 = v68;
      sub_140018650(&v86);
      result = v74;
      a1[3] = v74;
      *(_OWORD *)(a1 + 1) = v73;
      *a1 = 10;
      v33 = v53[0];
      if ( v53[0] == -1 )
        goto LABEL_39;
      goto LABEL_35;
    }
    v12 = 1;
    goto LABEL_16;
  }
  *((_QWORD *)&v73 + 1) = *((_QWORD *)&v67 + 1);
  *(_QWORD *)&v73 = 2;
LABEL_6:
  sub_140018650((char *)&v73 + 8);
LABEL_7:
  if ( v53[0] == -1 || (v12 = 1, !v56) )
  {
    sub_141486710(&v67, v61, v62);
    if ( (_DWORD)v67 == 2 )
    {
      *((_QWORD *)&v73 + 1) = *((_QWORD *)&v67 + 1);
      *(_QWORD *)&v73 = 2;
    }
    else
    {
      v73 = v67;
      v78 = v72;
      v77 = v71;
      v76 = v70;
      v75 = v69;
      v74 = v68;
      v12 = 1;
      if ( (_QWORD)v67 != 2 )
        goto LABEL_16;
    }
    sub_140018650((char *)&v73 + 8);
    v12 = 0;
  }
LABEL_16:
  nullsub_1(v11);
  v15 = (_OWORD *)sub_140001650(16, 1);
  if ( !v15 )
    sub_1416C2D4B(1, 16);
  v84 = v15;
  *v15 = xmmword_14175A1CC;
  nullsub_1(v16);
  v17 = (void *)sub_140001650(66, 1);
  if ( !v17 )
    sub_1416C2D4B(1, 66);
  qmemcpy(v17, "user-niuniu-woyao-pro-unlock::00000000-0000-4000-8000-000000000001", 66);
  v83 = v17;
  LODWORD(v86) = sub_141475580(v19, v18, v20, v21);
  HIDWORD(v86) = v22;
  v23 = (unsigned __int64)&v73;
  sub_141475530(&v73, &v86, 3577643008LL, 27111902);
  if ( (_BYTE)v73 )
    v24 = 0;
  else
    v24 = *((_QWORD *)&v73 + 1);
  *(_QWORD *)&v67 = 16;
  *((_QWORD *)&v67 + 1) = v84;
  *(_QWORD *)&v68 = 16;
  *((_QWORD *)&v68 + 1) = 66;
  *(_QWORD *)&v69 = v83;
  *((_QWORD *)&v69 + 1) = 66;
  *(_QWORD *)&v70 = v24;
  BYTE8(v70) = v12;
  v64 = v58;
  v85 = v59;
  nullsub_1(v83);
  v25 = (__int64 (__fastcall *)())sub_140001650(128, 1);
  if ( !v25 )
    sub_1416C2D4B(1, 128);
  v86 = 128;
  v87 = v25;
  *(_QWORD *)&v73 = &v86;
  *((_QWORD *)&v73 + 1) = asc_141756910;
  *(_QWORD *)&v74 = 2;
  *((_QWORD *)&v74 + 1) = 1;
  LOBYTE(v75) = 0;
  *(_BYTE *)v25 = 123;
  v88 = 1;
  LOWORD(v80) = 256;
  v81 = (__int64 (__fastcall *)())&v73;
  v26 = &v80;
  sub_140452760(&v80, aEmail_0, 5, &v67);
  if ( (_BYTE)v80
    || (sub_140452760(&v80, aAccountkey_1, 10, (char *)&v68 + 8), (_BYTE)v80)
    || (sub_140456E50(&v80, aCreatedat_1, 9, &v70), (_BYTE)v80) )
  {
    v27 = (__int64 (__fastcall *)())sub_1416BF0E0();
    if ( v86 )
      sub_140001660(v87, v86, 1);
    goto LABEL_27;
  }
  sub_140455BB0(&v80, aBackedupprevio, 20, (char *)&v70 + 8);
  if ( !(_BYTE)v80 && BYTE1(v80) )
  {
    v36 = (__int64)v81;
    v37 = *(_QWORD **)v81;
    v38 = *((_QWORD *)v81 + 3) - 1LL;
    *((_QWORD *)v81 + 3) = v38;
    if ( *(_BYTE *)(v36 + 32) == 1 )
    {
      sub_140301CD0(v37, asc_141757245, 1);
      if ( v38 )
      {
        v79 = *(_QWORD *)(v36 + 8);
        v23 = *(_QWORD *)(v36 + 16);
        v39 = v37[2];
        for ( i = 0; i != v38; ++i )
        {
          if ( v23 > *v37 - v39 )
          {
            sub_141688D30((_DWORD)v37, v39, v23, 1, 1);
            v39 = v37[2];
          }
          else if ( !v23 )
          {
            goto LABEL_64;
          }
          sub_141684120(v39 + v37[1], v79, v23);
LABEL_64:
          v39 += v23;
          v37[2] = v39;
        }
      }
    }
    sub_140301CD0(v37, asc_141757246, 1);
  }
  v27 = v87;
  if ( v86 == -1 )
  {
LABEL_27:
    v80 = v27;
    v86 = (__int64)&v80;
    v87 = sub_14142D3F0;
    sub_14149C0F0(&v73, &unk_141757428, &v86);
    v23 = *((_QWORD *)&v73 + 1);
    v27 = (__int64 (__fastcall *)())v73;
    v26 = (__int64 (__fastcall **)())v74;
    v28 = *(_QWORD *)v80;
    v29 = *(_QWORD *)v80 == 1;
    v89 = (__int64)v80;
    if ( v29 )
    {
      sub_140018650((char *)v80 + 8);
    }
    else if ( !v28 )
    {
      v30 = *(_QWORD *)(v89 + 16);
      if ( v30 )
        sub_140001660(*(_QWORD *)(v89 + 8), v30, 1);
    }
    sub_140001660(v89, 40, 8);
    v31 = 10;
LABEL_33:
    *a1 = v31;
    a1[1] = (__int64)v27;
    a1[2] = v23;
    a1[3] = (__int64)v26;
    goto LABEL_34;
  }
  v79 = v86;
  v43 = (__int64)v85;
  v85 = v87;
  v44 = sub_1408726C0(v64, v43, (__int64)v87, v88);
  v45 = v44;
  if ( v44 )
  {
    v80 = (__int64 (__fastcall *)())v44;
    v86 = (__int64)&v80;
    v87 = sub_141490720;
    sub_14149C0F0(&v73, &unk_141757452, &v86);
    v23 = *((_QWORD *)&v73 + 1);
    v27 = (__int64 (__fastcall *)())v73;
    v26 = (__int64 (__fastcall **)())v74;
    sub_140018650(&v80);
    v31 = 10;
  }
  else
  {
    v31 = -1;
  }
  if ( v79 )
    sub_140001660(v85, v79, 1);
  if ( v45 )
    goto LABEL_33;
  v46 = sub_1403C9370();
  sub_14048FF80((__int64)&v73, v46);
  sub_140440E50(&v80, &v73);
  if ( v80 == (__int64 (__fastcall *)())-1LL )
  {
    v66 = v81;
    v65[0] = &v66;
    v65[1] = sub_14142D3F0;
    sub_14149C0F0(&v86, &unk_141757428, v65);
    v31 = v86;
    v23 = (unsigned __int64)v87;
    v45 = v88;
    v51 = *(_QWORD *)v66;
    v29 = *(_QWORD *)v66 == 1;
    v89 = (__int64)v66;
    if ( v29 )
    {
      sub_140018650((char *)v66 + 8);
    }
    else if ( !v51 )
    {
      v52 = *(_QWORD *)(v89 + 16);
      if ( v52 )
        sub_140001660(*(_QWORD *)(v89 + 8), v52, 1);
    }
    sub_140001660(v89, 40, 8);
    v50 = 10;
    goto LABEL_93;
  }
  v85 = v80;
  v47 = v89;
  v89 = (__int64)v81;
  v48 = sub_1408726C0(v47, v63, (__int64)v81, v82);
  v49 = v48;
  if ( v48 )
  {
    v65[0] = v48;
    v80 = (__int64 (__fastcall *)())v65;
    v81 = sub_141490720;
    sub_14149C0F0(&v86, &unk_141757452, &v80);
    v31 = v86;
    v23 = (unsigned __int64)v87;
    v45 = v88;
    sub_140018650(v65);
    v50 = 10;
  }
  else
  {
    v50 = -1;
  }
  if ( v85 )
    sub_140001660(v89, v85, 1);
  if ( v49 )
  {
LABEL_93:
    a1[1] = v31;
    a1[2] = v23;
    a1[3] = v45;
    *a1 = v50;
    sub_1400104F0(&v73);
LABEL_34:
    v32 = v83;
    sub_140001660(v84, 16, 1);
    result = sub_140001660(v32, 66, 1);
    v33 = v53[0];
    if ( v53[0] == -1 )
      goto LABEL_39;
LABEL_35:
    if ( v33 )
      result = sub_140001660(v53[1], v33, 1);
    if ( v54 )
      result = sub_140001660(v55, v54, 1);
LABEL_39:
    if ( v60 )
      result = sub_140001660(v61, v60, 1);
    v34 = v57;
    if ( v57 )
    {
      v35 = v58;
      return sub_140001660(v35, v34, 1);
    }
    return result;
  }
  *a1 = -1;
  sub_1400104F0(&v73);
  sub_140001660(v84, 16, 1);
  sub_140001660(v83, 66, 1);
  result = sub_140009030(v53);
  if ( v60 )
    result = sub_140001660(v61, v60, 1);
  v34 = v57;
  if ( v57 )
  {
    v35 = v64;
    return sub_140001660(v35, v34, 1);
  }
  return result;
}