// win 1.2.7 | module src/core/analytics/parser/tokens.rs | ea 0x140f95a00 | name sub_140F95A00
// win 1.2.7 | module src/core/analytics/parser/tokens.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140F95A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rdx
  _BYTE *v12; // r12
  int v13; // eax
  void *v14; // rax
  void *v15; // rax
  _OWORD *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  void *v22; // rax
  __int64 v23; // rdx
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // r8
  unsigned __int8 v29; // bl
  __int64 v30; // r10
  __int64 v31; // rdx
  __int64 v32; // r9
  bool v33; // si
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r13
  __int128 v38; // rdi
  __int64 v39; // rbx
  __int128 v40; // xmm0
  _OWORD *v41; // rax
  __int128 v42; // xmm0
  _OWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  _OWORD v49[9]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v50; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v51; // [rsp+F8h] [rbp+78h]
  __int128 v52; // [rsp+108h] [rbp+88h]
  __int128 v53; // [rsp+118h] [rbp+98h]
  __int128 v54; // [rsp+128h] [rbp+A8h]
  __int64 v55; // [rsp+138h] [rbp+B8h]
  __int128 v56; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v57; // [rsp+150h] [rbp+D0h]
  __int128 v58; // [rsp+160h] [rbp+E0h]
  __int128 v59; // [rsp+170h] [rbp+F0h]
  __int128 v60; // [rsp+180h] [rbp+100h]
  __int128 v61; // [rsp+198h] [rbp+118h] BYREF
  __int128 v62; // [rsp+1A8h] [rbp+128h]
  __int128 v63; // [rsp+1B8h] [rbp+138h]
  __int128 v64; // [rsp+1C8h] [rbp+148h]
  __int64 v65; // [rsp+1D8h] [rbp+158h]
  __int64 v66; // [rsp+1E0h] [rbp+160h]
  _OWORD v67[2]; // [rsp+1E8h] [rbp+168h] BYREF
  _QWORD v68[3]; // [rsp+208h] [rbp+188h] BYREF
  __int128 v69; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v70; // [rsp+230h] [rbp+1B0h]
  __int128 v71; // [rsp+240h] [rbp+1C0h]
  __int128 v72; // [rsp+250h] [rbp+1D0h]
  __int128 v73; // [rsp+260h] [rbp+1E0h]
  __int128 v74; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v75; // [rsp+2C0h] [rbp+240h]
  __int128 v76; // [rsp+2D0h] [rbp+250h]
  __int128 v77; // [rsp+2E0h] [rbp+260h]
  __int128 v78; // [rsp+2F0h] [rbp+270h]
  __int128 v79; // [rsp+300h] [rbp+280h] BYREF
  __int128 v80; // [rsp+310h] [rbp+290h]
  __int64 v81; // [rsp+320h] [rbp+2A0h]
  __int64 v82; // [rsp+328h] [rbp+2A8h]
  __int128 v83; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v84; // [rsp+340h] [rbp+2C0h]
  __int64 v85; // [rsp+350h] [rbp+2D0h]
  __int64 v86; // [rsp+358h] [rbp+2D8h]
  __int64 v87; // [rsp+360h] [rbp+2E0h]
  __int64 v88; // [rsp+368h] [rbp+2E8h]
  __int64 v89; // [rsp+370h] [rbp+2F0h]
  __int64 v90; // [rsp+378h] [rbp+2F8h]
  __int64 v91; // [rsp+380h] [rbp+300h]
  char v92; // [rsp+38Ch] [rbp+30Ch]
  char v93; // [rsp+38Dh] [rbp+30Dh]
  char v94; // [rsp+38Eh] [rbp+30Eh]
  char v95; // [rsp+38Fh] [rbp+30Fh]
  __int64 v96; // [rsp+390h] [rbp+310h]

  v96 = -2;
  v85 = a7;
  v12 = (_BYTE *)sub_1416419F0(aInfo_1, 4, a2);
  if ( !v12 )
    v12 = off_1421E7108;
  v13 = (unsigned __int8)*v12;
  if ( v13 != 5 )
  {
    if ( *v12 )
    {
      *(_BYTE *)(a1 + 505) = 1;
      LOBYTE(v11) = 5;
      LOBYTE(v13) = sub_140E7ADB0(a1 + 400, v11);
    }
    return v13;
  }
  v87 = a3;
  v86 = a4;
  sub_140F8B4D0(&v69, a2, aTurnId_0, 7);
  v88 = a5;
  if ( (_QWORD)v69 == -1 )
  {
    sub_1416AC440(&v83, a1 + 208);
  }
  else
  {
    v84 = v70;
    v83 = v69;
  }
  v14 = (void *)sub_1416419F0("total_token_usagelast_token_usagelegacy_baselinelegacy_partial_usagelegacy", 17, v12);
  if ( !v14 )
    v14 = off_1421E7108;
  sub_140EC03E0(&v74, v14);
  v15 = (void *)sub_1416419F0("last_token_usagelegacy_baselinelegacy_partial_usagelegacy", 16, v12);
  if ( !v15 )
    v15 = off_1421E7108;
  sub_140EC03E0(&v61, v15);
  v16 = (_OWORD *)(a1 + 80);
  v17 = *(_QWORD *)(a1 + 80);
  if ( v17 != 2 )
  {
    v18 = *(_QWORD *)(a1 + 152);
    v51 = *(_OWORD *)(a1 + 88);
    v52 = *(_OWORD *)(a1 + 104);
    v53 = *(_OWORD *)(a1 + 120);
    v54 = *(_OWORD *)(a1 + 136);
    v55 = v18;
  }
  v50 = v17;
  v91 = v74;
  *(_OWORD *)(a1 + 144) = v78;
  v19 = v74;
  v20 = v75;
  v21 = v76;
  *(_OWORD *)(a1 + 128) = v77;
  *(_OWORD *)(a1 + 112) = v21;
  *(_OWORD *)(a1 + 96) = v20;
  *v16 = v19;
  v22 = (void *)sub_1416419F0("last_token_usagelegacy_baselinelegacy_partial_usagelegacy", 16, v12);
  if ( !v22 )
    v22 = off_1421E7108;
  if ( (unsigned __int8)sub_140F975D0(v22) )
    goto LABEL_21;
  v24 = (void *)sub_1416419F0("total_token_usagelast_token_usagelegacy_baselinelegacy_partial_usagelegacy", 17, v12);
  if ( !v24 )
    v24 = off_1421E7108;
  if ( (unsigned __int8)sub_140F975D0(v24) )
  {
LABEL_21:
    *(_BYTE *)(a1 + 505) = 1;
    LOBYTE(v23) = 5;
    LOBYTE(v13) = sub_140E7ADB0(a1 + 400, v23);
LABEL_22:
    *(_QWORD *)v16 = 2;
LABEL_23:
    v25 = v83;
    if ( !(_QWORD)v83 )
      return v13;
    v26 = *((_QWORD *)&v83 + 1);
LABEL_25:
    LOBYTE(v13) = sub_140001660(v26, v25, 1);
    return v13;
  }
  v28 = *((_QWORD *)&v61 + 1);
  v27 = v61;
  v29 = v61 & v62;
  v30 = *((_QWORD *)&v62 + 1);
  v31 = v65;
  v32 = v66;
  LOBYTE(v13) = v66 > 0;
  if ( ((v66 > 0)
      & (unsigned __int8)(v61 & v62)
      & (*((_QWORD *)&v61 + 1) == 0)
      & (unsigned __int8)v65
      & (*((_QWORD *)&v62 + 1) == 0)) != 0
    || (_DWORD)v61 == 2
    && v91 != 2
    && (v91 & 1) != 0
    && !*((_QWORD *)&v74 + 1)
    && (_BYTE)v75
    && !*((_QWORD *)&v75 + 1)
    && (_BYTE)v78
    && *((__int64 *)&v78 + 1) > 0 )
  {
    goto LABEL_22;
  }
  v33 = (_DWORD)v91 == 2 || (_DWORD)v17 == 2;
  if ( !v33 )
  {
    v82 = v65;
    v90 = v66;
    v89 = *((_QWORD *)&v62 + 1);
    v81 = *((_QWORD *)&v61 + 1);
    LOBYTE(v13) = sub_140F9AA80(&v74, &v50);
    v31 = v82;
    v28 = v81;
    v30 = v89;
    v32 = v90;
    if ( (_BYTE)v13 )
      goto LABEL_23;
  }
  v90 = v84;
  if ( !v84 )
  {
    *(_BYTE *)(a1 + 505) = 1;
    LOBYTE(v31) = 5;
    LOBYTE(v13) = sub_140E7ADB0(a1 + 400, v31);
    goto LABEL_23;
  }
  if ( *(_BYTE *)(a1 + 507) )
  {
    *(_BYTE *)(a1 + 507) = 0;
    LOBYTE(v13) = sub_140F97760(
                    v87,
                    v86,
                    DWORD2(v83),
                    v90,
                    v88,
                    (__int64)"legacy_baselinelegacy_partial_usagelegacy",
                    15,
                    v85);
    goto LABEL_23;
  }
  if ( v33 )
  {
    if ( v27 == 2 )
    {
LABEL_44:
      LOBYTE(v13) = sub_140F97760(
                      v87,
                      v86,
                      DWORD2(v83),
                      v90,
                      v88,
                      (__int64)"legacy_baselinelegacy_partial_usagelegacy",
                      15,
                      v85);
      goto LABEL_23;
    }
  }
  else
  {
    v82 = v31;
    v81 = v28;
    v89 = v30;
    v34 = v32;
    if ( (unsigned __int8)sub_140EBD0A0(&v74, &v50) )
    {
      LOBYTE(v13) = sub_140F97760(v87, v86, DWORD2(v83), v90, v88, (__int64)&unk_141A64E9E, 20, v85);
      goto LABEL_23;
    }
    v32 = v34;
    v30 = v89;
    v28 = v81;
    LOBYTE(v31) = v82;
    if ( v27 == 2 )
    {
      LOBYTE(v13) = sub_140EC0620(&v69, &v74, &v50, v34);
      if ( (_DWORD)v69 == 2 )
        goto LABEL_44;
      if ( (_DWORD)v73 == 1 && !*((_QWORD *)&v73 + 1) )
        goto LABEL_23;
      v60 = v73;
      v59 = v72;
      v58 = v71;
      v57 = v70;
      v56 = v69;
      v35 = *(_QWORD *)(a1 + 360);
      if ( *(_QWORD *)(a1 + 344) == -1 )
        goto LABEL_72;
LABEL_52:
      v36 = *(_QWORD *)(a1 + 352);
      goto LABEL_73;
    }
  }
  if ( ((unsigned __int8)v31 & v29 & 1) == 0
    || __OFADD__(v30, v28)
    || v28 + v30 != v32
    || !(_BYTE)v64
    || *((__int64 *)&v64 + 1) > v28
    || (_DWORD)v91 == 2
    || !(_BYTE)v63
    || *((__int64 *)&v63 + 1) > v30
    || (_DWORD)v91 != 1
    || !(_BYTE)v75
    || !(_BYTE)v78
    || (LOBYTE(v13) = BYTE8(v75), __OFADD__(*((_QWORD *)&v75 + 1), *((_QWORD *)&v74 + 1)))
    || *((_QWORD *)&v74 + 1) + *((_QWORD *)&v75 + 1) != *((_QWORD *)&v78 + 1)
    || !(_BYTE)v77
    || *((__int64 *)&v77 + 1) > *((__int64 *)&v74 + 1)
    || (_DWORD)v76 != 1
    || *((__int64 *)&v76 + 1) > *((__int64 *)&v75 + 1) )
  {
    LOBYTE(v13) = sub_140F97760(v87, v86, DWORD2(v83), v90, v88, (__int64)"legacy_partial_usagelegacy", 20, v85);
    goto LABEL_22;
  }
  if ( !v32 )
    goto LABEL_23;
  v59 = v64;
  v58 = v63;
  v57 = v62;
  v56 = v61;
  *(_QWORD *)&v60 = 1;
  *((_QWORD *)&v60 + 1) = v32;
  v35 = *(_QWORD *)(a1 + 360);
  if ( *(_QWORD *)(a1 + 344) != -1 )
    goto LABEL_52;
LABEL_72:
  v36 = 0;
LABEL_73:
  LOBYTE(v32) = 1;
  sub_140F95320((unsigned int)v67, (unsigned int)&v56, (unsigned int)"legacy", v32, v36, v35);
  v37 = *((_QWORD *)&v83 + 1);
  *(_QWORD *)&v38 = v87;
  *(_QWORD *)&v69 = v87;
  *((_QWORD *)&v38 + 1) = v86;
  *((_QWORD *)&v69 + 1) = v86;
  *(_QWORD *)&v70 = *((_QWORD *)&v83 + 1);
  *((_QWORD *)&v70 + 1) = v90;
  v95 = 1;
  sub_140F8ADE0(v68, &v69, 2);
  v39 = v88;
  sub_14040F9F0(v49, v68);
  if ( LOBYTE(v49[0]) == 0xFF )
  {
    *(_QWORD *)&v79 = *((_QWORD *)&v49[0] + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_18,
      43,
      (unsigned int)&v79,
      (unsigned int)&off_141A58C48,
      (__int64)&off_141A64E70);
  }
  v80 = v49[1];
  v79 = v49[0];
  v93 = 1;
  v91 = sub_141641AF0(aCoverageGroup, 14, v67);
  sub_14002F9D0(v91);
  v40 = v79;
  v41 = (_OWORD *)v91;
  *(_OWORD *)(v91 + 16) = v80;
  *v41 = v40;
  if ( v68[0] )
    sub_140001660(v68[1], v68[0], 1);
  LOWORD(v69) = 257;
  v92 = 1;
  v91 = sub_141641AF0(aInferred, 8, v67);
  sub_14002F9D0(v91);
  v42 = v69;
  v43 = (_OWORD *)v91;
  *(_OWORD *)(v91 + 16) = v70;
  *v43 = v42;
  v95 = 1;
  sub_140F8B200(&v69, a6, v12);
  v91 = v69;
  if ( (_QWORD)v69 == -1 )
  {
    *(_BYTE *)(a1 + 505) = 1;
    v95 = 1;
    LOBYTE(v44) = 5;
    sub_140E7ADB0(a1 + 400, v44);
    LOBYTE(v13) = sub_14002F9D0(v67);
    goto LABEL_23;
  }
  v45 = *((_QWORD *)&v69 + 1);
  v46 = v70;
  *(_QWORD *)&v69 = "legacy";
  *((_QWORD *)&v69 + 1) = 6;
  v70 = v38;
  *(_QWORD *)&v71 = v37;
  *((_QWORD *)&v71 + 1) = v90;
  v89 = v45;
  *(_QWORD *)&v72 = v45;
  *((_QWORD *)&v72 + 1) = v46;
  v80 = v67[1];
  v79 = v67[0];
  sub_140F8B6E0(
    (unsigned int)v49,
    (unsigned int)aToken_4,
    5,
    (unsigned int)&v69,
    4,
    v38,
    *((__int64 *)&v38 + 1),
    v37,
    v90,
    v39,
    (__int64)&v79,
    10);
  if ( *(_BYTE *)(a1 + 508) )
  {
    if ( *(_QWORD *)(a1 + 280) > 0x7FFu )
    {
      *(_BYTE *)(a1 + 505) = 1;
      v94 = 1;
      LOBYTE(v47) = 10;
      sub_140E7ADB0(a1 + 400, v47);
      LOBYTE(v13) = sub_14062C180(v49);
      if ( v91 )
        LOBYTE(v13) = sub_140001660(v89, v91, 1);
      goto LABEL_23;
    }
    v94 = 1;
    sub_140F9B260(&v69, v49);
    DWORD2(v38) = v86;
    LODWORD(v38) = v87;
    v39 = v88;
    v94 = 1;
    sub_140EC1FE0(a1 + 264, &v69);
  }
  v94 = 0;
  sub_140EC1FE0(v85, v49);
  v94 = 0;
  LOBYTE(v13) = sub_140F8D000(v38, DWORD2(v38), v37, v90, v39, v85);
  if ( v91 )
    LOBYTE(v13) = sub_140001660(v89, v91, 1);
  v25 = v83;
  if ( (_QWORD)v83 )
  {
    v26 = v37;
    goto LABEL_25;
  }
  return v13;
}
