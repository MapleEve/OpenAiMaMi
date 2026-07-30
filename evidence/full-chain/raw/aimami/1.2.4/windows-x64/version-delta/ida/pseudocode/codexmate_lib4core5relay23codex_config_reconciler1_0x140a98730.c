// win 1.2.4 delta | codexmate_lib4core5relay23codex_config_reconciler1 @ 0x140a98730
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay23codex_config_reconciler1 | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140A98730(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // r12
  __int64 v8; // r15
  char v9; // di
  void *v10; // rax
  __int64 v11; // rbx
  char v12; // r11
  __int64 v13; // r9
  char v14; // di
  char v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 result; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rdx
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rbx
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int64 v38; // rsi
  __int64 v39; // r12
  __int64 v40; // rbx
  _QWORD *v41; // rdi
  __int64 v42; // rdx
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // [rsp+48h] [rbp-38h]
  __int64 v46; // [rsp+50h] [rbp-30h]
  __int64 v47; // [rsp+58h] [rbp-28h]
  __int128 v48; // [rsp+60h] [rbp-20h] BYREF
  __int128 v49; // [rsp+70h] [rbp-10h] BYREF
  __int128 v50; // [rsp+80h] [rbp+0h]
  __int128 v51; // [rsp+90h] [rbp+10h] BYREF
  __int128 v52; // [rsp+A0h] [rbp+20h]
  __int128 v53; // [rsp+B0h] [rbp+30h]
  __int128 v54; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v55; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v56; // [rsp+E0h] [rbp+60h]
  __int64 v57; // [rsp+F0h] [rbp+70h]
  __int64 v58; // [rsp+100h] [rbp+80h] BYREF
  _BYTE v59[88]; // [rsp+108h] [rbp+88h]
  __int128 v60; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v61; // [rsp+170h] [rbp+F0h]
  __int128 v62; // [rsp+180h] [rbp+100h]
  __int128 v63; // [rsp+190h] [rbp+110h]
  __int128 v64; // [rsp+1A0h] [rbp+120h]
  __int128 v65; // [rsp+1B0h] [rbp+130h]
  char v66; // [rsp+1CFh] [rbp+14Fh] BYREF
  __int64 v67; // [rsp+1D0h] [rbp+150h]
  __int64 v68; // [rsp+1D8h] [rbp+158h]
  __int64 v69; // [rsp+1E0h] [rbp+160h]
  __int64 v70; // [rsp+1E8h] [rbp+168h]
  __int64 v71; // [rsp+1F0h] [rbp+170h]
  char v72; // [rsp+1FFh] [rbp+17Fh]
  __int64 v73; // [rsp+200h] [rbp+180h]

  v73 = -2;
  v67 = a2;
  v8 = a3[5];
  v45 = a3[3];
  if ( ((_BYTE)a3[8] & (v45 != 0)) != 1 )
    goto LABEL_8;
  if ( !v8 )
  {
    v8 = 0;
LABEL_8:
    v11 = *a3;
    v12 = *((_BYTE *)a3 + 65);
    v13 = -1;
    v14 = 0;
    v15 = 0;
    goto LABEL_13;
  }
  v9 = *((_BYTE *)a3 + 65);
  if ( !a4 )
  {
    sub_140A39B20(&v48, v67, (__int128 *)a3[2]);
    if ( (_DWORD)v48 == -1 )
      goto LABEL_30;
LABEL_10:
    v65 = v53;
    v64 = v52;
    v63 = v51;
    v62 = v50;
    v61 = v49;
    v60 = v48;
    if ( *(_QWORD *)off_141F53DF0 >= 2u )
    {
      *(_QWORD *)&v54 = &v60;
      *((_QWORD *)&v54 + 1) = sub_1406A4FE0;
      v58 = 0;
      *(_QWORD *)v59 = aCodexmateLibCo_30;
      *(_QWORD *)&v59[8] = 51;
      *(_QWORD *)&v59[16] = 0;
      *(_QWORD *)&v59[24] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v59[32] = 41;
      *(_QWORD *)&v59[40] = 2;
      *(_QWORD *)&v59[48] = aCodexmateLibCo_30;
      *(_QWORD *)&v59[56] = 51;
      *(_QWORD *)&v59[64] = 0x4200000001LL;
      *(_QWORD *)&v59[72] = &unk_141819DFC;
      *(_QWORD *)&v59[80] = &v54;
      sub_141330DD0(&v66, &v58);
    }
    sub_1409ADDE0(&v60);
    v11 = *a3;
    v12 = v9;
    v14 = 1;
    v13 = -1;
    v15 = 0;
    goto LABEL_13;
  }
  if ( (*((_BYTE *)a3 + 65) ^ 1) != *(_BYTE *)(a4 + 104) )
  {
    nullsub_1(a1, a2, a3);
    v10 = (void *)sub_140001650(60, 1);
    if ( !v10 )
      sub_141733E1B(1, 60);
    qmemcpy(v10, "prepared Codex catalog mode does not match the config target", 60);
    *(_QWORD *)&v48 = 9;
    *((_QWORD *)&v48 + 1) = 60;
    *(_QWORD *)&v49 = v10;
    *((_QWORD *)&v49 + 1) = 60;
    goto LABEL_10;
  }
  sub_140A339F0(&v48, v67, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
  if ( (_DWORD)v48 != -1 )
    goto LABEL_10;
LABEL_30:
  v13 = *((_QWORD *)&v48 + 1);
  v5 = *((_QWORD *)&v49 + 1);
  v4 = v49;
  v11 = *a3;
  if ( *((_QWORD *)&v48 + 1) != -1 && *a3 != 0 )
  {
    v70 = v49;
    v69 = v49;
    v71 = *((_QWORD *)&v48 + 1);
    v68 = *((_QWORD *)&v48 + 1);
    sub_140BAB970(&v58, v67);
    result = v58;
    v60 = *(_OWORD *)v59;
    v61 = *(_OWORD *)&v59[16];
    v62 = *(_OWORD *)&v59[32];
    *(_QWORD *)&v63 = *(_QWORD *)&v59[48];
    if ( v58 != -1 )
    {
      v28 = *(_OWORD *)&v59[56];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v59[72];
      *(_OWORD *)(a1 + 64) = v28;
      *(_QWORD *)(a1 + 56) = v63;
      v29 = v60;
      v30 = v61;
      *(_OWORD *)(a1 + 40) = v62;
      *(_OWORD *)(a1 + 24) = v30;
      *(_OWORD *)(a1 + 8) = v29;
      *(_QWORD *)a1 = result;
      v27 = v71;
      goto LABEL_19;
    }
    v47 = v11;
    v46 = v5;
    v56 = v62;
    v55 = v61;
    v54 = v60;
    v57 = v63;
    v31 = v61;
    v32 = *((_QWORD *)&v62 + 1);
    if ( *((_QWORD *)&v62 + 1) | (unsigned __int64)v61 )
    {
      sub_140BACD90(&v58, v67);
      v33 = v58;
      v60 = *(_OWORD *)v59;
      v61 = *(_OWORD *)&v59[16];
      v62 = *(_OWORD *)&v59[32];
      v63 = *(_OWORD *)&v59[48];
      v64 = *(_OWORD *)&v59[64];
      if ( v58 != -1 )
      {
        v34 = *(_QWORD *)&v59[80];
        *(_OWORD *)(a1 + 72) = v64;
        v35 = v60;
        v36 = v61;
        v37 = v62;
        *(_OWORD *)(a1 + 56) = v63;
        *(_OWORD *)(a1 + 40) = v37;
        *(_OWORD *)(a1 + 24) = v36;
        *(_OWORD *)(a1 + 8) = v35;
        *(_QWORD *)a1 = v33;
        *(_QWORD *)(a1 + 88) = v34;
        sub_14031D080(&v54);
        if ( (_QWORD)v54 )
          sub_140001660(*((_QWORD *)&v54 + 1), 24 * v54, 8);
        sub_14031D080((char *)&v55 + 8);
        result = *((_QWORD *)&v55 + 1);
        v27 = v71;
        if ( *((_QWORD *)&v55 + 1) )
        {
          v38 = v71;
          result = sub_140001660(v56, 24LL * *((_QWORD *)&v55 + 1), 8);
          v27 = v38;
        }
        goto LABEL_19;
      }
      v48 = v60;
      v49 = v61;
      v50 = v62;
      v51 = v63;
      v52 = v64;
      sub_14031D080(&v60);
      if ( (_QWORD)v48 )
        sub_140001660(*((_QWORD *)&v48 + 1), 24 * v48, 8);
      sub_14031D080((char *)&v49 + 8);
      if ( *((_QWORD *)&v49 + 1) )
        sub_140001660(v50, 24LL * *((_QWORD *)&v49 + 1), 8);
      sub_14031D080(&v51);
      if ( (_QWORD)v51 )
        sub_140001660(*((_QWORD *)&v51 + 1), 24 * v51, 8);
      v39 = *((_QWORD *)&v54 + 1);
      if ( v31 )
      {
        v72 = v9;
        v43 = (_QWORD *)(*((_QWORD *)&v54 + 1) + 8LL);
        do
        {
          v44 = *(v43 - 1);
          if ( v44 )
            sub_140001660(*v43, v44, 1);
          v43 += 3;
          --v31;
        }
        while ( v31 );
        v9 = v72;
      }
    }
    else
    {
      v39 = *((_QWORD *)&v54 + 1);
    }
    v72 = v9;
    if ( (_QWORD)v54 )
      sub_140001660(v39, 24 * v54, 8);
    v40 = v56;
    if ( v32 )
    {
      v41 = (_QWORD *)(v56 + 8);
      do
      {
        v42 = *(v41 - 1);
        if ( v42 )
          sub_140001660(*v41, v42, 1);
        v41 += 3;
        --v32;
      }
      while ( v32 );
    }
    if ( *((_QWORD *)&v55 + 1) )
      sub_140001660(v40, 24LL * *((_QWORD *)&v55 + 1), 8);
    v14 = 1;
    v15 = 1;
    v13 = v71;
    v4 = v70;
    v12 = v72;
    v5 = v46;
    v11 = v47;
  }
  else
  {
    v12 = v9;
    v14 = 1;
    v15 = 0;
  }
LABEL_13:
  v16 = a3[1];
  v17 = a3[4];
  v18 = *((_OWORD *)a3 + 3);
  v19 = 0;
  if ( v13 != -1 )
    v19 = v4;
  *(_QWORD *)&v62 = a3[2];
  *((_QWORD *)&v62 + 1) = v45;
  *(_QWORD *)&v63 = v17;
  *((_QWORD *)&v63 + 1) = v8;
  *(_QWORD *)&v60 = v11;
  *((_QWORD *)&v60 + 1) = v16;
  LOBYTE(v65) = v15;
  BYTE1(v65) = v12;
  v64 = v18;
  *(_QWORD *)&v61 = v19;
  *((_QWORD *)&v61 + 1) = v5;
  v70 = v4;
  v69 = v4;
  v71 = v13;
  v68 = v13;
  v20 = sub_1404B0D60(v67);
  if ( v20 )
  {
    v58 = 2;
    *(_QWORD *)v59 = v20;
    goto LABEL_18;
  }
  v21 = *(_QWORD *)(v67 + 72);
  v22 = *(_QWORD *)(v67 + 80);
  v69 = v70;
  v68 = v71;
  result = sub_140AB3600((unsigned int)&v58, v21, v22, (unsigned int)&unk_141812DCE, 23, (__int64)&v60);
  if ( v58 != -1 )
  {
LABEL_18:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v59[72];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v59[56];
    result = v58;
    v24 = *(_QWORD *)v59;
    v25 = *(_OWORD *)&v59[8];
    v26 = *(_OWORD *)&v59[24];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v59[40];
    *(_OWORD *)(a1 + 32) = v26;
    *(_OWORD *)(a1 + 16) = v25;
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = v24;
    v27 = v71;
    if ( v71 == -1 )
      return result;
    goto LABEL_19;
  }
  if ( !v14 )
  {
    v69 = v70;
    v68 = v71;
    result = sub_140A2ADE0(v67);
    if ( result )
    {
      *(_QWORD *)&v48 = result;
      if ( *(_QWORD *)off_141F53DF0 >= 2u )
      {
        *(_QWORD *)&v60 = &v48;
        *((_QWORD *)&v60 + 1) = sub_1414FDBC0;
        v58 = (__int64)aCodexmateLibCo_30;
        *(_QWORD *)v59 = 51;
        *(_QWORD *)&v59[8] = aCodexmateLibCo_30;
        *(_QWORD *)&v59[16] = 51;
        *(_QWORD *)&v59[24] = &off_141819F08;
        sub_140575CA0(&unk_141819EB0, &v60, 2, &v58);
        result = v48;
      }
      v69 = v70;
      v68 = v71;
      result = sub_14049AA50(result);
    }
  }
  *(_BYTE *)(a1 + 8) = v15;
  *(_QWORD *)a1 = -1;
  v27 = v71;
  if ( v71 != -1 )
  {
LABEL_19:
    if ( v27 )
      return sub_140001660(v70, v27, 1);
  }
  return result;
}
