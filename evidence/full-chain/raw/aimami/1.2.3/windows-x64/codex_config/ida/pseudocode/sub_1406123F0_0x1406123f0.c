// module: codexmate_lib/core/codex_config
// addr: 0x1406123f0
// name: sub_1406123F0
// win 1.2.1 | module src/core/codex_config.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_1406123F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char v13; // dl
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rbx
  __int128 v22; // kr10_16
  int v23; // edx
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // r8
  char v29; // al
  unsigned __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int64 *v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rsi
  unsigned __int128 v38; // kr30_16
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  unsigned __int128 v42; // [rsp+28h] [rbp-58h] BYREF
  __int128 v43; // [rsp+38h] [rbp-48h]
  void *v44; // [rsp+48h] [rbp-38h]
  unsigned __int128 v45; // [rsp+50h] [rbp-30h]
  __int128 v46; // [rsp+60h] [rbp-20h]
  __int128 v47; // [rsp+70h] [rbp-10h]
  __int128 v48; // [rsp+80h] [rbp+0h]
  char v49[144]; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int128 v50; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v51; // [rsp+130h] [rbp+B0h]
  __int128 v52; // [rsp+140h] [rbp+C0h]
  __int128 v53; // [rsp+150h] [rbp+D0h]
  _OWORD v54[2]; // [rsp+1D0h] [rbp+150h] BYREF
  _BYTE v55[72]; // [rsp+1F0h] [rbp+170h]
  char v56[144]; // [rsp+238h] [rbp+1B8h] BYREF
  unsigned __int64 v57; // [rsp+2C8h] [rbp+248h] BYREF
  __int64 v58; // [rsp+2D0h] [rbp+250h]
  unsigned __int64 v59; // [rsp+2D8h] [rbp+258h]
  __int64 v60; // [rsp+2E0h] [rbp+260h]
  char *v61; // [rsp+2E8h] [rbp+268h]
  unsigned __int128 v62; // [rsp+2F0h] [rbp+270h]
  __int128 v63; // [rsp+300h] [rbp+280h]
  __int128 v64; // [rsp+310h] [rbp+290h]
  __int128 v65; // [rsp+320h] [rbp+2A0h]
  _QWORD v66[2]; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v67; // [rsp+340h] [rbp+2C0h]
  __int64 v68; // [rsp+348h] [rbp+2C8h]
  __int64 v69; // [rsp+350h] [rbp+2D0h]
  __int64 v70; // [rsp+358h] [rbp+2D8h]
  __int64 v71; // [rsp+360h] [rbp+2E0h]
  __int64 v72; // [rsp+368h] [rbp+2E8h]
  __int64 v73; // [rsp+370h] [rbp+2F0h]
  __int64 *v74; // [rsp+378h] [rbp+2F8h]
  __int64 v75; // [rsp+380h] [rbp+300h]
  __int64 v76; // [rsp+388h] [rbp+308h]
  __int64 v77; // [rsp+390h] [rbp+310h]
  unsigned __int128 v78; // [rsp+398h] [rbp+318h]
  char v79; // [rsp+3AFh] [rbp+32Fh] BYREF
  __int64 v80; // [rsp+3B0h] [rbp+330h]

  v80 = -2;
  v66[0] = a4;
  v66[1] = a5;
  v70 = a2;
  v69 = a3;
  v8 = sub_1414740B0(a2, a3);
  if ( v8 )
  {
    LOBYTE(v54[0]) = 1;
    v10 = sub_14147B9A0(v54, v8, v9);
    if ( v10 )
    {
      *a1 = 2;
      a1[1] = v10;
      return a1;
    }
  }
  v67 = *a6;
  v11 = a6[1];
  v68 = v11;
  v61 = (char *)a6[2];
  v12 = 1;
  v13 = 0;
  v14 = off_141EC8D80;
  v74 = a1;
  while ( 1 )
  {
    if ( (v13 & 1) != 0 || v12 > 3 )
    {
      *(_QWORD *)&v54[0] = v66;
      *((_QWORD *)&v54[0] + 1) = sub_14041F680;
      sub_14149C0F0(a1 + 1, &unk_14176663E, v54);
      *a1 = 10;
      return a1;
    }
    v15 = v12 + 1;
    LOBYTE(v11) = v12 == 3;
    v58 = v11;
    if ( v12 == 3 )
      v15 = 3;
    v59 = v15;
    v57 = v12;
    sub_14148D130(v54, v70, v69);
    v16 = *((_QWORD *)&v54[0] + 1);
    v73 = *(_QWORD *)&v54[0];
    if ( *(_QWORD *)&v54[0] == -1 )
    {
      if ( (unsigned __int8)sub_14065FAD0(*((_QWORD *)&v54[0] + 1)) )
      {
        *a1 = 2;
        a1[1] = v16;
        a1[2] = v6;
        a1[3] = v71;
        return a1;
      }
      *(_QWORD *)&v42 = v16;
      sub_140018650(&v42);
      v18 = 1;
      v17 = 0;
      v73 = 0;
    }
    else
    {
      v17 = *(_QWORD *)&v54[1];
      v18 = *((_QWORD *)&v54[0] + 1);
    }
    v76 = v18;
    sub_1409E7C60((unsigned int)v54, v18, v17, v67, v68);
    v19 = *(_QWORD *)&v54[0];
    v20 = *((_QWORD *)&v54[1] + 1);
    if ( *(_QWORD *)&v54[0] != -1 )
    {
      v65 = *(_OWORD *)&v55[48];
      v64 = *(_OWORD *)&v55[32];
      v63 = *(_OWORD *)&v55[16];
      v62 = *(_OWORD *)v55;
      v78 = *(_OWORD *)((char *)v54 + 8);
LABEL_45:
      v30 = v62;
      v31 = v63;
      v32 = v64;
      v33 = v74;
      *((_OWORD *)v74 + 5) = v65;
      *((_OWORD *)v33 + 4) = v32;
      *((_OWORD *)v33 + 3) = v31;
      *((_OWORD *)v33 + 2) = v30;
      v33[2] = *((_QWORD *)&v78 + 1);
      v33[3] = v20;
      *v33 = v19;
      a1 = v33;
      v33[1] = v78;
      v34 = v76;
      goto LABEL_57;
    }
    v77 = *((_QWORD *)&v54[0] + 1);
    v71 = v17;
    v72 = *(_QWORD *)&v54[1];
    sub_1409E6C90(v54, *(_QWORD *)&v54[1], *((_QWORD *)&v54[1] + 1));
    v19 = *((_QWORD *)&v54[0] + 1);
    v21 = *(_QWORD *)&v54[0];
    v22 = v54[1];
    v50 = *(_OWORD *)&v55[8];
    v51 = *(_OWORD *)&v55[24];
    v52 = *(_OWORD *)&v55[40];
    v53 = *(_OWORD *)&v55[56];
    if ( *(_QWORD *)&v54[0] == 2 )
    {
      v78 = v54[1];
      v62 = v50;
      v63 = v51;
      v64 = v52;
      v65 = v53;
      v20 = *(_QWORD *)v55;
    }
    else
    {
      *((_QWORD *)&v78 + 1) = *(_QWORD *)v55;
      sub_141684120(v49, v56, 144);
      v43 = v22;
      v44 = *((void **)&v78 + 1);
      v48 = v53;
      v47 = v52;
      v46 = v51;
      v45 = v50;
      v42 = __PAIR128__(v19, v21);
      sub_1409E7A10((__int64)v54, (__int64)&v42, v67, v68);
      v23 = DWORD2(v54[0]);
      v19 = *(_QWORD *)&v54[0];
      if ( *(_QWORD *)&v54[0] == -1 )
      {
        v29 = *v61;
        *(_QWORD *)&v54[0] = 5;
        *((_QWORD *)&v54[0] + 1) = -1;
        *(_QWORD *)v55 = -1;
        *(_QWORD *)&v55[24] = -1;
        v55[48] = v29;
        sub_140FC72D0((unsigned int)&v50, v23, (unsigned int)aEnabled_2, 7, (__int64)v54);
        if ( (_DWORD)v50 != -1 )
          sub_1405E4C50((unsigned __int64 *)&v50);
        *(_QWORD *)&v50 = 0;
        *((_QWORD *)&v50 + 1) = 1;
        *(_QWORD *)&v51 = 0;
        *(_QWORD *)&v54[1] = 1610612768;
        *(_QWORD *)&v54[0] = &v50;
        *((_QWORD *)&v54[0] + 1) = &off_14177D5F8;
        if ( (unsigned __int8)sub_140FC4B40(&v42, v54) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_4,
            55,
            (unsigned int)&v79,
            (unsigned int)&unk_141769668,
            (__int64)&off_14177D6B0);
        v78 = v50;
        v20 = v51;
        sub_1405E5330((unsigned __int64 *)&v42);
        v14 = off_141EC8D80;
        v24 = v71;
        if ( v77 )
          sub_140001660(v72, v77, 1);
        goto LABEL_22;
      }
      v78 = *(_OWORD *)((char *)v54 + 8);
      v20 = *((_QWORD *)&v54[1] + 1);
      v62 = *(_OWORD *)v55;
      v63 = *(_OWORD *)&v55[16];
      v64 = *(_OWORD *)&v55[32];
      v65 = *(_OWORD *)&v55[48];
      sub_1405E5330((unsigned __int64 *)&v42);
      v14 = off_141EC8D80;
    }
    v24 = v71;
    if ( v77 )
      sub_140001660(v72, v77, 1);
    if ( v19 != -1 )
      goto LABEL_45;
LABEL_22:
    if ( v20 == v24 && !(unsigned int)sub_1416847B0(*((_QWORD *)&v78 + 1), v76, v24) )
    {
      a1 = v74;
      *v74 = -1;
LABEL_51:
      v34 = v76;
      v38 = v78;
      goto LABEL_55;
    }
    sub_14148D130(v54, v70, v69);
    v25 = *((_QWORD *)&v54[0] + 1);
    if ( *(_QWORD *)&v54[0] == -1 )
    {
      if ( (unsigned __int8)sub_14065FAD0(*((_QWORD *)&v54[0] + 1)) )
      {
        v37 = v74;
        *v74 = 2;
        v37[1] = v25;
        a1 = v37;
        v37[2] = v75;
        v37[3] = v60;
        goto LABEL_51;
      }
      *(_QWORD *)&v42 = v25;
      sub_140018650(&v42);
      v75 = 1;
      v26 = 0;
      v77 = 0;
    }
    else
    {
      v77 = *(_QWORD *)&v54[0];
      v26 = *(_QWORD *)&v54[1];
      v75 = *((_QWORD *)&v54[0] + 1);
    }
    v60 = v26;
    v27 = v26 == v24;
    v28 = v24;
    v6 = v76;
    a1 = v74;
    if ( v27 && !(unsigned int)sub_1416847B0(v75, v76, v28) )
      break;
    if ( *v14 >= 2u )
    {
      *(_QWORD *)&v42 = v66;
      *((_QWORD *)&v42 + 1) = sub_14041F680;
      *(_QWORD *)&v43 = &v57;
      *((_QWORD *)&v43 + 1) = sub_1414AC520;
      v44 = &unk_141766688;
      *(_QWORD *)&v45 = sub_1414AC520;
      *(_QWORD *)&v54[0] = 0;
      *((_QWORD *)&v54[0] + 1) = aCodexmateLibCo_2;
      v54[1] = 0x21u;
      *(_QWORD *)v55 = aSrcCoreCodexCo;
      *(_QWORD *)&v55[8] = 24;
      *(_QWORD *)&v55[16] = 2;
      *(_QWORD *)&v55[24] = aCodexmateLibCo_2;
      *(_QWORD *)&v55[32] = 33;
      *(_QWORD *)&v55[40] = 0x1B00000001LL;
      *(_QWORD *)&v55[48] = &unk_141766690;
      *(_QWORD *)&v55[56] = &v42;
      sub_1412C36A0(&v79, v54);
      v6 = v76;
    }
    if ( v77 )
      sub_140001660(v75, v77, 1);
    if ( (_QWORD)v78 )
      sub_140001660(*((_QWORD *)&v78 + 1), v78, 1);
    if ( v73 )
      sub_140001660(v6, v73, 1);
    v12 = v59;
    v13 = v58;
  }
  v35 = sub_1408726C0(v70, v69, *((__int64 *)&v78 + 1), v20);
  if ( v35 )
  {
    *(_QWORD *)&v50 = v35;
    *(_QWORD *)&v54[0] = v66;
    *((_QWORD *)&v54[0] + 1) = sub_14041F680;
    *(_QWORD *)&v54[1] = &v50;
    *((_QWORD *)&v54[1] + 1) = sub_141490720;
    sub_14149C0F0(&v42, &unk_141767240, v54);
    v54[0] = v42;
    *(_QWORD *)&v54[1] = v43;
    sub_140018650(&v50);
    a1[3] = *(_QWORD *)&v54[1];
    *(_OWORD *)(a1 + 1) = v54[0];
    v36 = 10;
  }
  else
  {
    v36 = -1;
  }
  *a1 = v36;
  v34 = v76;
  v38 = v78;
  if ( v77 )
  {
    v39 = *((_QWORD *)&v78 + 1);
    v40 = v78;
    sub_140001660(v75, v77, 1);
    v38 = __PAIR128__(v39, v40);
  }
LABEL_55:
  if ( (_QWORD)v38 )
    sub_140001660(*((_QWORD *)&v38 + 1), v38, 1);
LABEL_57:
  if ( v73 )
    sub_140001660(v34, v73, 1);
  return a1;
}