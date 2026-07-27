// module: codexmate_lib/core/voice/llm
// addr: 0x140a58220
// name: save_config
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::voice::llm::save_config | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall save_config(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdi
  char *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  _BYTE *v27; // rax
  _QWORD *v28; // r13
  __int64 v29; // rsi
  __int64 *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v34; // r12
  __int128 v35; // rax
  __int64 v36; // r8
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  char v44; // bl
  _QWORD v45[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v46; // [rsp+38h] [rbp-48h]
  __int64 v47; // [rsp+40h] [rbp-40h]
  __int64 v48; // [rsp+50h] [rbp-30h]
  __int64 v49; // [rsp+58h] [rbp-28h]
  __int64 v50; // [rsp+60h] [rbp-20h]
  __int64 v51; // [rsp+68h] [rbp-18h]
  __int64 v52; // [rsp+70h] [rbp-10h]
  __int64 v53; // [rsp+78h] [rbp-8h]
  __int128 v54; // [rsp+80h] [rbp+0h] BYREF
  __int64 v55; // [rsp+90h] [rbp+10h]
  __int128 v56; // [rsp+98h] [rbp+18h] BYREF
  __int64 v57; // [rsp+A8h] [rbp+28h]
  __int128 v58; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v59; // [rsp+C0h] [rbp+40h]
  __int128 v60; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v61; // [rsp+E0h] [rbp+60h]
  __int64 v62; // [rsp+E8h] [rbp+68h]
  __int64 v63; // [rsp+F0h] [rbp+70h]
  __int64 v64; // [rsp+F8h] [rbp+78h]
  __int128 v65; // [rsp+100h] [rbp+80h] BYREF
  __int64 v66; // [rsp+110h] [rbp+90h]
  __int128 v67; // [rsp+118h] [rbp+98h] BYREF
  __int64 v68; // [rsp+128h] [rbp+A8h]
  __int128 v69; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v70; // [rsp+140h] [rbp+C0h]
  __int128 v71; // [rsp+148h] [rbp+C8h] BYREF
  __int128 v72; // [rsp+158h] [rbp+D8h]
  __int128 v73; // [rsp+168h] [rbp+E8h]
  __int128 v74; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v75; // [rsp+188h] [rbp+108h]
  __int128 v76; // [rsp+190h] [rbp+110h] BYREF
  __int64 v77; // [rsp+1A0h] [rbp+120h]
  _BYTE v78[88]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v79; // [rsp+208h] [rbp+188h]
  __int128 v80; // [rsp+218h] [rbp+198h] BYREF
  __int64 v81; // [rsp+228h] [rbp+1A8h]
  __int128 v82; // [rsp+230h] [rbp+1B0h]
  __int64 v83; // [rsp+240h] [rbp+1C0h]
  __int64 v84; // [rsp+248h] [rbp+1C8h]
  _QWORD *v85; // [rsp+250h] [rbp+1D0h]
  char v86; // [rsp+259h] [rbp+1D9h]
  char v87; // [rsp+25Ah] [rbp+1DAh]
  char v88; // [rsp+25Bh] [rbp+1DBh]
  char v89; // [rsp+25Ch] [rbp+1DCh]
  char v90; // [rsp+25Dh] [rbp+1DDh]
  char v91; // [rsp+25Eh] [rbp+1DEh]
  char v92; // [rsp+25Fh] [rbp+1DFh]
  __int64 v93; // [rsp+260h] [rbp+1E0h]

  v93 = -2;
  v3 = a2[1];
  v85 = a2;
  v4 = a2[2];
  v90 = 1;
  v89 = 1;
  v63 = v3;
  sub_140A5BF50((__int64 *)&v74, v3, v4);
  v5 = *((_QWORD *)&v74 + 1);
  v6 = v75;
  v88 = 1;
  v87 = 1;
  sub_140A5A940(v45, *((_QWORD *)&v74 + 1), v75);
  v7 = v85[4];
  v8 = v85[5];
  v92 = 1;
  v91 = 1;
  v9 = sub_14033BC10(v7, v8);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = 0;
    goto LABEL_3;
  }
  v64 = v7;
  if ( v10 )
  {
    v14 = v9;
    nullsub_1(v11);
    v13 = 1;
    v15 = sub_140001650(v12, 1);
    if ( !v15 )
    {
LABEL_3:
      v92 = 1;
      v91 = 1;
      sub_1416C2D4B(v13, v12);
    }
    v16 = v15;
    sub_141684120(v15, v14, v12);
  }
  else
  {
    v16 = 1;
  }
  *(_QWORD *)&v69 = v12;
  *((_QWORD *)&v69 + 1) = v16;
  v70 = v12;
  v17 = v85;
  v18 = v49;
  v62 = v12;
  v86 = 1;
  sub_140A553D0(&v67, v85 + 6, v49, v50);
  v19 = v52;
  sub_140A553D0(&v65, v17 + 9, v52, v53);
  if ( !v68 || !v66 )
  {
    if ( v6 != 6 )
      goto LABEL_23;
    goto LABEL_15;
  }
  if ( v6 == 6 )
  {
    v21 = 0;
    if ( v12 )
      goto LABEL_19;
    LOBYTE(v21) = (*(_DWORD *)v5 ^ 0x616C6C6F | *(unsigned __int16 *)(v5 + 4) ^ 0x616D) != 0;
    if ( !v21 )
      goto LABEL_19;
LABEL_15:
    v22 = *(_DWORD *)v5 ^ 0x616C6C6F;
    v20 = v22 | *(unsigned __int16 *)(v5 + 4) ^ 0x616Du;
    if ( !(v22 | *(unsigned __int16 *)(v5 + 4) ^ 0x616D) )
    {
      nullsub_1(v20);
      v23 = 38;
      v24 = (char *)sub_140001650(38, 1);
      if ( !v24 )
        sub_1416C2D4B(1, 38);
      qmemcpy(v24, "LLM config requires model and Base URL", 38);
LABEL_25:
      v30 = v85;
      v28 = a1;
      a1[1] = 9;
      a1[2] = v23;
      a1[3] = v24;
      a1[4] = v23;
      *a1 = -1;
      v25 = v64;
      goto LABEL_26;
    }
LABEL_23:
    nullsub_1(v20);
    v23 = 48;
    v24 = (char *)sub_140001650(48, 1);
    if ( !v24 )
      sub_1416C2D4B(1, 48);
    qmemcpy(v24, "LLM config requires API Key, model, and Base URL", 48);
    goto LABEL_25;
  }
  if ( !v12 )
    goto LABEL_23;
LABEL_19:
  sub_14149C500(&v80, &v69);
  v25 = v64;
  sub_14149C500(&v71, &v67);
  sub_14149C500(v78, &v65);
  v55 = v81;
  v54 = v80;
  v56 = v71;
  v57 = v72;
  v58 = *(_OWORD *)v78;
  v59 = *(_QWORD *)&v78[16];
  nullsub_1(v26);
  v27 = (_BYTE *)sub_140001650(128, 1);
  if ( !v27 )
    sub_1416C2D4B(1, 128);
  v28 = a1;
  *(_QWORD *)v78 = 128;
  *(_QWORD *)&v78[8] = v27;
  *(_QWORD *)&v80 = v78;
  *v27 = 123;
  *(_QWORD *)&v78[16] = 1;
  LOWORD(v71) = 256;
  *((_QWORD *)&v71 + 1) = &v80;
  v29 = sub_14045E240(&v71, aApikey_6, 6, &v54, v45[0]);
  if ( v29 )
    goto LABEL_48;
  if ( (_BYTE)v71 )
    goto LABEL_22;
  v29 = sub_14045E240(&v71, aModel_6, 5, &v56, v45[0]);
  if ( v29 )
    goto LABEL_48;
  if ( (_BYTE)v71 )
  {
LABEL_22:
    v29 = sub_1416BF0E0();
    goto LABEL_48;
  }
  v29 = sub_14045E240(&v71, aBaseurl_2, 7, &v58, v45[0]);
  if ( v29 )
  {
LABEL_48:
    v30 = v85;
    if ( *(_QWORD *)v78 )
      sub_140001660(*(_QWORD *)&v78[8], *(_QWORD *)v78, 1);
    goto LABEL_50;
  }
  if ( (v71 & 1) == 0 && BYTE1(v71) )
    sub_140301CD0(**((_QWORD **)&v71 + 1), asc_1417A47C9, 1);
  v29 = *(_QWORD *)&v78[8];
  if ( *(_QWORD *)v78 != -1 )
  {
    v82 = *(_OWORD *)v78;
    v34 = *(_QWORD *)&v78[16];
    sub_140A59340(v78, *((_QWORD *)&v74 + 1), v75);
    v35 = *(_OWORD *)v78;
    v36 = *(_QWORD *)&v78[16];
    if ( *(_QWORD *)v78 == -1 )
    {
      v83 = *(_QWORD *)&v78[8];
      v60 = *(_OWORD *)&v78[8];
      v84 = *(_QWORD *)&v78[16];
      sub_140F84790(&v71, &v60, *((_QWORD *)&v82 + 1), v34);
      if ( (_QWORD)v71 == -1 )
      {
        if ( *(_QWORD *)v84 )
          (*(void (__fastcall **)(__int64))v84)(v83);
        v43 = *(_QWORD *)(v84 + 8);
        if ( v43 )
          sub_140001660(v83, v43, *(_QWORD *)(v84 + 16));
        sub_14149C500(&v60, &v74);
        sub_14149C500(&v76, &v69);
        sub_14149C500(&v80, &v67);
        sub_14149C500(&v71, &v65);
        *(_QWORD *)&v78[16] = v61;
        *(_OWORD *)v78 = v60;
        *(_OWORD *)&v78[24] = v76;
        *(_QWORD *)&v78[40] = v77;
        *(_OWORD *)&v78[48] = v80;
        *(_QWORD *)&v78[64] = v81;
        *(_OWORD *)&v78[72] = v71;
        v79 = v72;
        v44 = sub_14099C6D0(v78);
        sub_1402C6460(v78);
        *(_QWORD *)&v78[16] = v75;
        *(_OWORD *)v78 = v74;
        *(_QWORD *)&v78[40] = v70;
        *(_OWORD *)&v78[24] = v69;
        *(_QWORD *)&v78[64] = v68;
        *(_OWORD *)&v78[48] = v67;
        v79 = v66;
        *(_OWORD *)&v78[72] = v65;
        *(_OWORD *)v28 = v74;
        *((_OWORD *)v28 + 3) = *(_OWORD *)&v78[48];
        v28[4] = *(_QWORD *)&v78[32];
        v28[5] = *(_QWORD *)&v78[40];
        *((_OWORD *)v28 + 1) = *(_OWORD *)&v78[16];
        v28[10] = *(_QWORD *)&v78[80];
        v28[11] = v79;
        *((_OWORD *)v28 + 4) = *(_OWORD *)&v78[64];
        *((_BYTE *)v28 + 96) = v44;
        if ( (_QWORD)v82 )
          sub_140001660(*((_QWORD *)&v82 + 1), v82, 1);
        sub_1402C3920(&v54);
        sub_1402C6460(v45);
        v30 = v85;
        v31 = *v85;
        if ( *v85 )
          goto LABEL_43;
        goto LABEL_44;
      }
      *(_OWORD *)&v78[32] = v73;
      *(_OWORD *)&v78[16] = v72;
      *(_OWORD *)v78 = v71;
      *(_QWORD *)&v76 = v78;
      *((_QWORD *)&v76 + 1) = sub_140F85190;
      sub_14149C0F0(&v80, &unk_1417A543E, &v76);
      v76 = v80;
      v77 = v81;
      sub_1409833A0(v78);
      v28[4] = v77;
      *((_OWORD *)v28 + 1) = v76;
      v28[1] = 10;
      *v28 = -1;
      if ( *(_QWORD *)v84 )
        (*(void (__fastcall **)(__int64))v84)(v83);
      v41 = *(_QWORD *)(v84 + 8);
      v40 = *((_QWORD *)&v82 + 1);
      if ( v41 )
      {
        v42 = *((_QWORD *)&v82 + 1);
        sub_140001660(v83, v41, *(_QWORD *)(v84 + 16));
        v40 = v42;
      }
    }
    else
    {
      v28[12] = v79;
      v37 = *(_OWORD *)&v78[24];
      v38 = *(_OWORD *)&v78[40];
      v39 = *(_OWORD *)&v78[56];
      *((_OWORD *)v28 + 5) = *(_OWORD *)&v78[72];
      *((_OWORD *)v28 + 4) = v39;
      *((_OWORD *)v28 + 3) = v38;
      *((_OWORD *)v28 + 2) = v37;
      *(_OWORD *)(v28 + 1) = v35;
      v28[3] = v36;
      *v28 = -1;
      v40 = *((_QWORD *)&v82 + 1);
    }
    v30 = v85;
    if ( (_QWORD)v82 )
      sub_140001660(v40, v82, 1);
    goto LABEL_51;
  }
  v30 = v85;
LABEL_50:
  v28[1] = 3;
  v28[2] = v29;
  *v28 = -1;
LABEL_51:
  if ( (_QWORD)v54 )
    sub_140001660(*((_QWORD *)&v54 + 1), v54, 1);
  if ( (_QWORD)v56 )
    sub_140001660(*((_QWORD *)&v56 + 1), v56, 1);
  if ( (_QWORD)v58 )
    sub_140001660(*((_QWORD *)&v58 + 1), v58, 1);
LABEL_26:
  if ( (_QWORD)v65 )
    sub_140001660(*((_QWORD *)&v65 + 1), v65, 1);
  if ( (_QWORD)v67 )
    sub_140001660(*((_QWORD *)&v67 + 1), v67, 1);
  if ( (_QWORD)v69 )
    sub_140001660(*((_QWORD *)&v69 + 1), v69, 1);
  if ( v45[0] )
    sub_140001660(v45[1], v45[0], 1);
  if ( v46 )
    sub_140001660(v47, v46, 1);
  if ( v48 )
    sub_140001660(v18, v48, 1);
  if ( v51 )
    sub_140001660(v19, v51, 1);
  if ( (_QWORD)v74 )
    sub_140001660(*((_QWORD *)&v74 + 1), v74, 1);
  v31 = *v30;
  if ( *v30 )
LABEL_43:
    sub_140001660(v63, v31, 1);
LABEL_44:
  v32 = v30[3];
  if ( v32 )
    sub_140001660(v25, v32, 1);
  return v28;
}
