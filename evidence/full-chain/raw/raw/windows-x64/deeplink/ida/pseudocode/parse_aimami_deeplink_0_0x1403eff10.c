// module: codexmate_lib/commands/deeplink
// addr: 0x1403eff10
// name: parse_aimami_deeplink_0
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::commands::deeplink::parse_aimami_deeplink | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall parse_aimami_deeplink_0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int128 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r14
  char v11; // al
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rbx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int128 v29; // xmm1
  _QWORD v30[5]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v31[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v32[3]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v33[3]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v34[3]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v35; // [rsp+B0h] [rbp+30h]
  __int64 v36; // [rsp+C0h] [rbp+40h]
  __int128 v37; // [rsp+D0h] [rbp+50h]
  __int64 v38; // [rsp+E0h] [rbp+60h]
  _QWORD v39[2]; // [rsp+F0h] [rbp+70h] BYREF
  _QWORD v40[2]; // [rsp+100h] [rbp+80h] BYREF
  __int128 v41; // [rsp+110h] [rbp+90h] BYREF
  __int128 v42; // [rsp+120h] [rbp+A0h]
  __int64 v43; // [rsp+130h] [rbp+B0h]
  __int128 v44; // [rsp+138h] [rbp+B8h]
  __int128 v45; // [rsp+148h] [rbp+C8h]
  __int128 v46; // [rsp+158h] [rbp+D8h]
  _BYTE v47[24]; // [rsp+168h] [rbp+E8h] BYREF
  _BYTE v48[24]; // [rsp+180h] [rbp+100h] BYREF
  __int128 v49; // [rsp+198h] [rbp+118h]
  __int128 v50; // [rsp+1A8h] [rbp+128h]
  __int128 v51; // [rsp+1B8h] [rbp+138h]
  __int128 v52; // [rsp+1C8h] [rbp+148h]
  __int64 v53; // [rsp+1D8h] [rbp+158h]
  __int128 v54; // [rsp+1E0h] [rbp+160h]
  __int64 v55; // [rsp+1F0h] [rbp+170h]
  _QWORD v56[6]; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v57; // [rsp+228h] [rbp+1A8h]
  __int128 v58; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v59; // [rsp+240h] [rbp+1C0h]
  _BYTE v60[40]; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v61; // [rsp+278h] [rbp+1F8h] BYREF
  __int128 v62; // [rsp+288h] [rbp+208h]
  __int128 v63; // [rsp+298h] [rbp+218h]
  __int64 *v64; // [rsp+320h] [rbp+2A0h]
  __int64 v65; // [rsp+328h] [rbp+2A8h]
  __int128 v66; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v67; // [rsp+340h] [rbp+2C0h]
  __int64 v68; // [rsp+348h] [rbp+2C8h]
  __int64 v69; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v70; // [rsp+358h] [rbp+2D8h]
  __int64 v71; // [rsp+368h] [rbp+2E8h]
  __int64 v72; // [rsp+370h] [rbp+2F0h]
  __int64 v73; // [rsp+378h] [rbp+2F8h]
  __int64 v74; // [rsp+380h] [rbp+300h]
  char v75; // [rsp+38Fh] [rbp+30Fh] BYREF
  __int64 v76; // [rsp+390h] [rbp+310h]
  char v77; // [rsp+39Ch] [rbp+31Ch]
  char v78; // [rsp+39Dh] [rbp+31Dh]
  char v79; // [rsp+39Eh] [rbp+31Eh]
  char v80; // [rsp+39Fh] [rbp+31Fh]
  __int64 v81; // [rsp+3A0h] [rbp+320h]

  v81 = -2;
  v3 = a2[1];
  v64 = a2;
  v4 = a2[2];
  v30[4] = 0;
  v30[0] = 0;
  v30[2] = 0;
  v57 = v3;
  sub_141447EC0(v60, v30, v3, v4);
  if ( *(_QWORD *)v60 == -1 )
  {
    LOBYTE(v58) = v60[8];
    v56[0] = &v58;
    v56[1] = sub_141454EB0;
    sub_14149C0F0(&v48[8], &unk_14174D501, v56);
    *((_QWORD *)&v5 + 1) = *(_QWORD *)&v48[8];
    v6 = *(_QWORD *)&v48[16];
    v7 = v49;
    v8 = 0;
LABEL_18:
    *(_QWORD *)&v5 = v8;
    v9 = v6;
    v10 = v7;
    goto LABEL_19;
  }
  v44 = v61;
  v45 = v62;
  v46 = v63;
  v42 = *(_OWORD *)&v60[16];
  v43 = *(_QWORD *)&v60[32];
  v71 = *(_QWORD *)v60;
  v41 = *(_OWORD *)v60;
  if ( !DWORD1(v61) )
    goto LABEL_14;
  if ( *(_QWORD *)&v60[16] <= (unsigned __int64)DWORD1(v61) )
  {
    if ( *(_QWORD *)&v60[16] != DWORD1(v61) )
LABEL_5:
      sub_1416C2F60(*(_DWORD *)&v60[8], *(_DWORD *)&v60[16], 0, DWORD1(v61), (__int64)&off_1417544A8);
  }
  else if ( *(char *)(*(_QWORD *)&v60[8] + DWORD1(v61)) <= -65 )
  {
    goto LABEL_5;
  }
  if ( DWORD1(v61) != 6 || **(_DWORD **)&v60[8] ^ 0x616D6961 | *(unsigned __int16 *)(*(_QWORD *)&v60[8] + 4LL) ^ 0x696D )
  {
    if ( *(_QWORD *)&v60[16] <= (unsigned __int64)DWORD1(v61) )
    {
      if ( *(_QWORD *)&v60[16] != DWORD1(v61) )
LABEL_12:
        sub_1416C2F60(*(_DWORD *)&v60[8], *(_DWORD *)&v60[16], 0, DWORD1(v61), (__int64)&off_1417544A8);
    }
    else if ( *(char *)(*(_QWORD *)&v60[8] + DWORD1(v61)) <= -65 )
    {
      goto LABEL_12;
    }
LABEL_14:
    *(_QWORD *)v48 = *(_QWORD *)&v60[8];
    *(_QWORD *)&v48[8] = DWORD1(v61);
    *(_QWORD *)v60 = v48;
    *(_QWORD *)&v60[8] = sub_14041F680;
    sub_14149C0F0(v34, &unk_1417515EE, v60);
    *((_QWORD *)&v5 + 1) = v34[0];
    v6 = v34[1];
    v7 = v34[2];
LABEL_15:
    v8 = 0;
LABEL_16:
    if ( v71 )
      sub_140001660(*((_QWORD *)&v41 + 1), v71, 1);
    goto LABEL_18;
  }
  v14 = sub_14144B340(&v41, *(_QWORD *)&v60[16]);
  v16 = v15;
  v17 = 1;
  if ( v14 )
    v17 = v14;
  else
    v16 = 0;
  v40[0] = v17;
  v40[1] = v16;
  v18 = (_DWORD *)sub_14144B0E0(&v41);
  v39[0] = v18;
  v39[1] = v19;
  if ( v16 != 2 || v19 != 7 || *(_WORD *)v17 != 12662 || *v18 ^ 0x706D692F | *(_DWORD *)((char *)v18 + 3) ^ 0x74726F70 )
  {
    *(_QWORD *)v60 = v40;
    *(_QWORD *)&v60[8] = sub_14041F680;
    *(_QWORD *)&v60[16] = v39;
    *(_QWORD *)&v60[24] = sub_14041F680;
    sub_14149C0F0(v33, &unk_1417515C7, v60);
    *((_QWORD *)&v5 + 1) = v33[0];
    v6 = v33[1];
    v7 = v33[2];
    goto LABEL_15;
  }
  v20 = sub_14144B1A0(&v41);
  v22 = v21;
  v23 = 1;
  if ( v20 )
    v23 = v20;
  else
    v22 = 0;
  sub_14003AD70(v56, v23, v22);
  sub_14042A3D0(v60, v56, aResource, 8);
  if ( *(_QWORD *)v60 == -1 )
  {
    *(_QWORD *)&v66 = 0;
    *((_QWORD *)&v66 + 1) = 1;
    v67 = 0;
LABEL_55:
    *(_QWORD *)v60 = &v66;
    *(_QWORD *)&v60[8] = sub_1401C5930;
    sub_14149C0F0(v32, &unk_14175159F, v60);
    *((_QWORD *)&v5 + 1) = v32[0];
    v6 = v32[1];
    v7 = v32[2];
    v8 = 0;
LABEL_56:
    if ( (_QWORD)v66 )
      sub_140001660(*((_QWORD *)&v66 + 1), v66, 1);
    sub_14067EB80(v56);
    goto LABEL_16;
  }
  v66 = *(_OWORD *)v60;
  v67 = *(_QWORD *)&v60[16];
  if ( *(_QWORD *)&v60[16] != 8 || **((_QWORD **)&v66 + 1) != 0x72656469766F7270LL )
    goto LABEL_55;
  sub_14042A3D0(v60, v56, aApp_0, 3);
  *((_QWORD *)&v5 + 1) = *(_QWORD *)v60;
  if ( *(_QWORD *)v60 == -1 )
  {
    v6 = 1;
    v7 = 0;
    *((_QWORD *)&v5 + 1) = 0;
    v8 = 1;
    goto LABEL_56;
  }
  v6 = *(_QWORD *)&v60[8];
  v7 = *(_QWORD *)&v60[16];
  v8 = 1;
  if ( *(_QWORD *)&v60[16] != 5
    || **(_DWORD **)&v60[8] ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)&v60[8] + 4LL) ^ 0x78 )
  {
    goto LABEL_56;
  }
  v65 = *(_QWORD *)&v60[8];
  v72 = *(_QWORD *)v60;
  sub_1403EFE00(v60, v56, aName_2, 4);
  *((_QWORD *)&v5 + 1) = *(_QWORD *)&v60[8];
  v8 = *(_QWORD *)v60;
  v24 = *(_QWORD *)&v60[24];
  v6 = *(_QWORD *)&v60[16];
  if ( *(_QWORD *)v60 != 2 )
  {
    v7 = *(_QWORD *)&v60[24];
LABEL_67:
    if ( v72 )
      sub_140001660(v65, v72, 1);
    goto LABEL_56;
  }
  v76 = *(_QWORD *)&v60[8];
  v73 = *(_QWORD *)&v60[16];
  v78 = 1;
  sub_1403EFE00(v60, v56, aEndpoint, 8);
  *((_QWORD *)&v5 + 1) = *(_QWORD *)&v60[8];
  v8 = *(_QWORD *)v60;
  v7 = *(_QWORD *)&v60[24];
  v6 = *(_QWORD *)&v60[16];
  if ( *(_QWORD *)v60 != 2 )
  {
LABEL_65:
    if ( v76 )
      sub_140001660(v73, v76, 1);
    goto LABEL_67;
  }
  v69 = *(_QWORD *)&v60[8];
  v70 = *(_OWORD *)&v60[16];
  v77 = 1;
  sub_1403EFE00(v60, v56, aApikey_0, 6);
  v74 = *(_QWORD *)&v60[8];
  v8 = *(_QWORD *)v60;
  v7 = *(_QWORD *)&v60[24];
  v68 = *(_QWORD *)&v60[16];
  if ( *(_QWORD *)v60 != 2 )
  {
    v6 = v68;
    *((_QWORD *)&v5 + 1) = v74;
LABEL_63:
    if ( v69 )
      sub_140001660(v70, v69, 1);
    goto LABEL_65;
  }
  if ( *((_QWORD *)&v70 + 1) < 7u
    || *(_DWORD *)v70 ^ 0x70747468 | *(_DWORD *)(v70 + 3) ^ 0x2F2F3A70
    && (*((_QWORD *)&v70 + 1) == 7 || *(_QWORD *)v70 != 0x2F2F3A7370747468LL) )
  {
    *(_QWORD *)v60 = &v69;
    *(_QWORD *)&v60[8] = sub_1400015F0;
    v80 = 1;
    sub_14149C0F0(v31, &unk_141751564, v60);
    *((_QWORD *)&v5 + 1) = v31[0];
    v6 = v31[1];
    v7 = v31[2];
    if ( v74 )
      sub_140001660(v68, v74, 1);
    v8 = 0;
    goto LABEL_63;
  }
  v80 = 1;
  sub_14042A3D0(v60, v56, aModel_0, 5);
  if ( *(_QWORD *)v60 != -1 )
  {
    if ( *(_QWORD *)&v60[16] )
    {
      *(_OWORD *)&v47[8] = *(_OWORD *)&v60[8];
      *(_QWORD *)v47 = *(_QWORD *)v60;
      goto LABEL_75;
    }
    if ( *(_QWORD *)v60 )
      sub_140001660(*(_QWORD *)&v60[8], *(_QWORD *)v60, 1);
  }
  v80 = 1;
  sub_14037D310(v47);
LABEL_75:
  v79 = 1;
  sub_141447EC0(v48, v30, v70, *((_QWORD *)&v70 + 1));
  if ( *(_QWORD *)v48 == -1 )
    goto LABEL_78;
  v63 = v52;
  v62 = v51;
  v61 = v50;
  *(_OWORD *)&v60[24] = v49;
  *(_OWORD *)&v60[8] = *(_OWORD *)&v48[8];
  *(_QWORD *)v60 = *(_QWORD *)v48;
  v79 = 1;
  sub_14037D370(v48, v60);
  if ( *(_QWORD *)v48 == -1 )
  {
LABEL_78:
    v79 = 1;
    sub_14149C500(&v58, &v69);
  }
  else
  {
    v59 = *(_QWORD *)&v48[16];
    v58 = *(_OWORD *)v48;
  }
  v25 = sub_14033C4C0(v70, *((_QWORD *)&v70 + 1), 47);
  v27 = v26;
  sub_140388B60((unsigned int)v60, v26, 0, 1, 1);
  v9 = *(_QWORD *)&v60[8];
  if ( v60[0] )
    sub_1416C2D4B(*(_QWORD *)&v60[8], *(_QWORD *)&v60[16]);
  v10 = *(_QWORD *)&v60[16];
  if ( v27 )
    sub_141684120(*(_QWORD *)&v60[16], v25, v27);
  v36 = *(_QWORD *)&v47[16];
  v35 = *(_OWORD *)v47;
  v37 = v58;
  v38 = v59;
  if ( v69 )
    sub_140001660(v70, v69, 1);
  if ( v72 )
    sub_140001660(v65, v72, 1);
  if ( (_QWORD)v66 )
    sub_140001660(*((_QWORD *)&v66 + 1), v66, 1);
  sub_14067EB80(v56);
  if ( v71 )
    sub_140001660(*((_QWORD *)&v41 + 1), v71, 1);
  if ( v76 != -1 )
  {
    *(_QWORD *)v48 = v76;
    *(_QWORD *)&v48[8] = v73;
    *(_QWORD *)&v48[16] = v24;
    *(_QWORD *)&v49 = v9;
    *((_QWORD *)&v49 + 1) = v10;
    *(_QWORD *)&v50 = v27;
    *((_QWORD *)&v50 + 1) = v74;
    *(_QWORD *)&v51 = v68;
    *((_QWORD *)&v51 + 1) = v7;
    v52 = v35;
    v53 = v36;
    v54 = v37;
    v55 = v38;
    sub_140ACF010(v60, v48);
    v28 = *(_QWORD *)&v60[32];
    sub_141684120(a1 + 40, &v61, 160);
    v29 = *(_OWORD *)&v60[16];
    *(_OWORD *)a1 = *(_OWORD *)v60;
    *(_OWORD *)(a1 + 16) = v29;
    *(_QWORD *)(a1 + 32) = v28;
    v12 = *v64;
    if ( !*v64 )
      return a1;
    goto LABEL_26;
  }
  *((_QWORD *)&v5 + 1) = v24;
  *(_QWORD *)&v5 = v73;
LABEL_19:
  *(_OWORD *)v60 = v5;
  *(_QWORD *)&v60[16] = v9;
  *(_QWORD *)&v60[24] = v10;
  *(_QWORD *)v48 = 0;
  *(_QWORD *)&v48[8] = 1;
  *(_QWORD *)&v48[16] = 0;
  v56[0] = &v60[8];
  *(_QWORD *)&v41 = v56;
  if ( (_QWORD)v5 == 1 )
  {
    *((_QWORD *)&v41 + 1) = sub_1409762A0;
    v11 = sub_1414A2FC0((__int64)v48, (__int64)&off_141754110, byte_141753D3D, (unsigned __int64)&v41);
  }
  else
  {
    *((_QWORD *)&v41 + 1) = sub_1406B5450;
    v11 = sub_1414A2FC0((__int64)v48, (__int64)&off_141754110, byte_141753D28, (unsigned __int64)&v41);
  }
  if ( v11 )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_1,
      55,
      (unsigned int)&v75,
      (unsigned int)&unk_14174DE40,
      (__int64)&off_1417541C8);
  *(_QWORD *)&v42 = *(_QWORD *)&v48[16];
  v41 = *(_OWORD *)v48;
  if ( *(_QWORD *)&v60[8] )
    sub_140001660(*(_QWORD *)&v60[16], *(_QWORD *)&v60[8], 1);
  *(_QWORD *)(a1 + 24) = v42;
  *(_OWORD *)(a1 + 8) = v41;
  *(_QWORD *)a1 = -1;
  v12 = *v64;
  if ( *v64 )
LABEL_26:
    sub_140001660(v57, v12, 1);
  return a1;
}
