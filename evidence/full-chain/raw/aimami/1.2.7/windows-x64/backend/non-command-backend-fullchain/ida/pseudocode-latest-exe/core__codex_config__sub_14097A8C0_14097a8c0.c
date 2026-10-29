// win 1.2.7 latest-exe | module src/core/codex_config.rs | ea 0x14097a8c0 | successor of pre-update 0x140ed2040 | session <审计会话>
// match evidence: {"body_sim": 0.693, "str_ov": 0, "anchor": 2.424, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_14097A8C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // cl
  __int64 v13; // r13
  unsigned __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int128 v20; // xmm6
  __int128 v21; // xmm7
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // rcx
  __int128 v26; // kr40_16
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rbx
  void *v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v39; // kr70_16
  __int128 v40; // kr80_16
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int64 v44; // rsi
  __int64 v45; // r14
  __int64 v46; // rbx
  __int64 v47; // r13
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  _QWORD *v51; // rcx
  _QWORD *v52; // rsi
  __int128 v53; // [rsp+28h] [rbp-58h] BYREF
  __int128 v54; // [rsp+38h] [rbp-48h]
  __int128 v55; // [rsp+48h] [rbp-38h]
  __int128 v56; // [rsp+58h] [rbp-28h]
  char v57[144]; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v58[24]; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v59; // [rsp+110h] [rbp+90h]
  __int128 v60; // [rsp+120h] [rbp+A0h]
  __int128 v61; // [rsp+130h] [rbp+B0h]
  __int128 v62; // [rsp+140h] [rbp+C0h]
  __int128 v63; // [rsp+150h] [rbp+D0h]
  char v64[144]; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v65; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v66; // [rsp+200h] [rbp+180h]
  _QWORD v67[2]; // [rsp+208h] [rbp+188h] BYREF
  unsigned __int64 v68; // [rsp+218h] [rbp+198h] BYREF
  __int64 v69; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v70; // [rsp+228h] [rbp+1A8h]
  _BYTE v71[80]; // [rsp+230h] [rbp+1B0h]
  _QWORD v72[2]; // [rsp+280h] [rbp+200h] BYREF
  _BYTE v73[192]; // [rsp+290h] [rbp+210h] BYREF
  __m256i v74; // [rsp+388h] [rbp+308h] BYREF
  __int128 v75; // [rsp+3A8h] [rbp+328h]
  __int128 v76; // [rsp+3B8h] [rbp+338h]
  __int128 v77; // [rsp+3C8h] [rbp+348h]
  __int128 v78; // [rsp+3D8h] [rbp+358h]
  int v79; // [rsp+3ECh] [rbp+36Ch]
  __int64 v80; // [rsp+3F0h] [rbp+370h]
  __int64 v81; // [rsp+3F8h] [rbp+378h]
  __int64 v82; // [rsp+400h] [rbp+380h]
  __int64 v83; // [rsp+408h] [rbp+388h]
  unsigned __int64 v84; // [rsp+410h] [rbp+390h]
  __int64 v85; // [rsp+418h] [rbp+398h]
  unsigned __int64 v86; // [rsp+420h] [rbp+3A0h]
  __int64 v87; // [rsp+428h] [rbp+3A8h]
  __int64 v88; // [rsp+430h] [rbp+3B0h]
  char v89; // [rsp+43Fh] [rbp+3BFh] BYREF
  __int64 v90; // [rsp+440h] [rbp+3C0h]
  __int64 v91; // [rsp+448h] [rbp+3C8h]

  v91 = -2;
  v83 = a4;
  v67[0] = a4;
  v67[1] = a5;
  v72[0] = aChangeMcpServe;
  v72[1] = 23;
  v81 = a2;
  v85 = a3;
  v8 = sub_1416B19D0(a2, a3);
  if ( v8 )
  {
    v73[0] = 1;
    v10 = sub_1416B9760(v73, v8, v9);
    if ( v10 )
    {
      v74.m256i_i64[0] = 2;
      v74.m256i_i64[1] = v10;
      goto LABEL_70;
    }
  }
  v11 = 1;
  v12 = 0;
  v80 = a1;
  while ( 1 )
  {
    if ( (v12 & 1) != 0 || v11 > 3 )
    {
      *(_QWORD *)v73 = v72;
      *(_QWORD *)&v73[8] = sub_140191200;
      sub_1416DAFA0(&v74.m256i_u64[1], &unk_141A57610, v73);
      v74.m256i_i64[0] = 10;
      goto LABEL_70;
    }
    v13 = v11 + 1;
    LOBYTE(v6) = v11 == 3;
    if ( v11 == 3 )
      v13 = 3;
    v68 = v11;
    sub_14094BE70(v73, v81, v85);
    v82 = *(_QWORD *)&v73[8];
    v14 = *(_QWORD *)&v73[24];
    if ( *(_QWORD *)v73 != -1 )
    {
      v78 = *(_OWORD *)&v73[80];
      v77 = *(_OWORD *)&v73[64];
      v76 = *(_OWORD *)&v73[48];
      v75 = *(_OWORD *)&v73[32];
      v74.m256i_i64[1] = v82;
      *(_OWORD *)&v74.m256i_u64[2] = *(_OWORD *)&v73[16];
      v74.m256i_i64[0] = *(_QWORD *)v73;
      goto LABEL_70;
    }
    v79 = v6;
    v87 = *(_QWORD *)&v73[16];
    sub_14097C2B0((unsigned int)v73, *(_DWORD *)&v73[16], *(_DWORD *)&v73[24], v83, a5);
    v88 = *(_QWORD *)&v73[8];
    v15 = *(_QWORD *)v73;
    v16 = *(_QWORD *)&v73[16];
    if ( *(_QWORD *)v73 != -1 )
    {
      *(_OWORD *)&v71[64] = *(_OWORD *)&v73[80];
      *(_OWORD *)&v71[48] = *(_OWORD *)&v73[64];
      *(_OWORD *)&v71[32] = *(_OWORD *)&v73[48];
      *(_OWORD *)&v71[16] = *(_OWORD *)&v73[32];
      v25 = v88;
      v70 = v88;
      *(_OWORD *)v71 = *(_OWORD *)&v73[16];
LABEL_54:
      v75 = *(_OWORD *)&v71[16];
      v76 = *(_OWORD *)&v71[32];
      v77 = *(_OWORD *)&v71[48];
      v78 = *(_OWORD *)&v71[64];
      v74.m256i_i64[1] = v25;
      v74.m256i_i64[2] = v16;
      v74.m256i_i64[3] = *(_QWORD *)&v71[8];
      v74.m256i_i64[0] = v15;
      goto LABEL_67;
    }
    v90 = *(_QWORD *)&v73[16];
    sub_1411FC140(v73);
    v19 = *(_QWORD *)v73;
    if ( *(_QWORD *)v73 == 2 )
    {
      v26 = *(_OWORD *)&v73[32];
      v27 = *(_QWORD *)&v73[56];
      v28 = *(_QWORD *)&v73[72];
      v29 = *(_QWORD *)&v73[64];
      v86 = *(_QWORD *)&v73[88];
      v30 = *(_QWORD *)&v73[80];
      nullsub_1(v18, v17);
      v31 = (void *)sub_140001650(25, 1);
      if ( !v31 )
        sub_14196B2DB(1, 25);
      v23 = (__int64)v31;
      qmemcpy(v31, "Invalid Codex config.toml", 25);
      if ( (_QWORD)v26 )
        sub_140001660(*((_QWORD *)&v26 + 1), v26, 1);
      if ( (unsigned __int64)(v30 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v86, v30, 1);
      if ( v28 )
      {
        v32 = (_QWORD *)(v29 + 8);
        do
        {
          v33 = *(v32 - 1);
          if ( v33 )
            sub_140001660(*v32, v33, 1);
          v32 += 3;
          --v28;
        }
        while ( v28 );
      }
      if ( v27 )
        sub_140001660(v29, 24 * v27, 8);
      v70 = 25;
      *(_QWORD *)v71 = v23;
      *(_QWORD *)&v71[8] = 25;
      v15 = 9;
      v22 = 25;
      goto LABEL_50;
    }
    v20 = *(_OWORD *)&v73[24];
    sub_1419234B0(&v53, &v73[40], 208);
    v21 = *(_OWORD *)&v73[8];
    v63 = v56;
    v62 = v55;
    v61 = v54;
    v60 = v53;
    sub_1419234B0(v64, v57, 144);
    *(_QWORD *)v58 = v19;
    *(_OWORD *)&v58[8] = v21;
    v59 = v20;
    sub_14097BFE0((__int64)v73, (__int64)v58, v83, a5);
    v22 = *(_QWORD *)&v73[8];
    v15 = *(_QWORD *)v73;
    v23 = *(_QWORD *)&v73[16];
    if ( *(_QWORD *)v73 != -1 )
    {
      *(_QWORD *)&v71[72] = *(_QWORD *)&v73[88];
      *(_OWORD *)&v71[56] = *(_OWORD *)&v73[72];
      *(_OWORD *)&v71[40] = *(_OWORD *)&v73[56];
      *(_OWORD *)&v71[24] = *(_OWORD *)&v73[40];
      *(_OWORD *)&v71[8] = *(_OWORD *)&v73[24];
      v70 = *(_QWORD *)&v73[8];
      sub_140904390(v58);
LABEL_50:
      if ( v88 )
        sub_140001660(v90, v88, 1);
      v16 = v23;
      v25 = v22;
      a1 = v80;
      goto LABEL_54;
    }
    *(_QWORD *)v73 = 5;
    *(_QWORD *)&v73[8] = -1;
    *(_QWORD *)&v73[32] = -1;
    *(_QWORD *)&v73[56] = -1;
    v73[80] = a6;
    (*(void (__fastcall **)(__int128 *, __int64, const char *, __int64, _BYTE *))(*(_QWORD *)&v73[16] + 120LL))(
      &v53,
      v22,
      aEnabled_3,
      7,
      v73);
    if ( (_DWORD)v53 != -1 )
      sub_140903FF0(&v53);
    *(_QWORD *)&v53 = 0;
    *((_QWORD *)&v53 + 1) = 1;
    *(_QWORD *)&v54 = 0;
    *(_QWORD *)&v73[16] = 1610612768;
    *(_QWORD *)v73 = &v53;
    *(_QWORD *)&v73[8] = &off_141A66E10;
    if ( (unsigned __int8)sub_1411FC940(v58, v73) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_5,
        55,
        (unsigned int)&v89,
        (unsigned int)&unk_141A5A890,
        (__int64)&off_141A66EC8);
    v66 = v54;
    v65 = v53;
    sub_14097A580((__int64)&v69, v87, v14, &v65);
    sub_140904390(v58);
    if ( v88 )
      sub_140001660(v90, v88, 1);
    v15 = v69;
    v88 = v70;
    v16 = *(_QWORD *)v71;
    a1 = v80;
    if ( v69 != -1 )
    {
      v25 = v88;
      goto LABEL_54;
    }
    v24 = *(_QWORD *)&v71[8];
    v90 = *(_QWORD *)v71;
    if ( *(_QWORD *)&v71[8] == v14 && !(unsigned int)sub_141923B40(v90, v87, v14) )
      break;
    sub_14094BE70(v73, v81, v85);
    v84 = *(_QWORD *)&v73[8];
    v15 = *(_QWORD *)v73;
    v86 = *(_QWORD *)&v73[16];
    if ( *(_QWORD *)v73 != -1 )
    {
      v78 = *(_OWORD *)&v73[80];
      v77 = *(_OWORD *)&v73[64];
      v76 = *(_OWORD *)&v73[48];
      v75 = *(_OWORD *)&v73[32];
      *(_OWORD *)&v74.m256i_u64[2] = __PAIR128__(*(unsigned __int64 *)&v73[24], v86);
      *(_OWORD *)v74.m256i_i8 = __PAIR128__(v84, *(unsigned __int64 *)v73);
      goto LABEL_65;
    }
    if ( *(_QWORD *)&v73[24] == v14 && !(unsigned int)sub_141923B40(v86, v87, v14) )
    {
      if ( (sub_1407C8880(v81, v85, v90, v24) & 1) != 0 )
      {
        v69 = v34;
        *(_QWORD *)v73 = v72;
        *(_QWORD *)&v73[8] = sub_140191200;
        *(_QWORD *)&v73[16] = &v69;
        *(_QWORD *)&v73[24] = sub_1416EA080;
        sub_1416DAFA0(v58, &unk_141A58DF8, v73);
        *(_OWORD *)v73 = *(_OWORD *)v58;
        *(_QWORD *)&v73[16] = *(_QWORD *)&v58[16];
        if ( (unsigned int)(v69 & 3) - 2 >= 2 && (v69 & 3) != 0 )
        {
          *((_QWORD *)&v53 + 1) = v69 - 1;
          LOBYTE(v53) = 3;
          sub_1416EBAD0((char *)&v53 + 8);
        }
        *(_OWORD *)&v74.m256i_u64[1] = *(_OWORD *)v73;
        v74.m256i_i64[3] = *(_QWORD *)&v73[16];
        v15 = 10;
      }
      else
      {
        v15 = -1;
        sub_1407B9160(v34);
      }
      v74.m256i_i64[0] = v15;
      if ( v84 )
        sub_140001660(v86, v84, 1);
      goto LABEL_65;
    }
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)v58 = v72;
      *(_QWORD *)&v58[8] = sub_140191200;
      *(_QWORD *)&v58[16] = &v68;
      *(_QWORD *)&v59 = sub_1416EBAE0;
      *((_QWORD *)&v59 + 1) = &unk_141A57658;
      *(_QWORD *)&v60 = sub_1416EBAE0;
      *(_QWORD *)&v73[48] = 2;
      *(_QWORD *)&v73[56] = aCodexmateLibCo_35;
      *(_QWORD *)&v73[64] = 33;
      *(_QWORD *)&v73[80] = &unk_141A57660;
      *(_QWORD *)&v73[88] = v58;
      *(_QWORD *)v73 = 0;
      *(_QWORD *)&v73[8] = aCodexmateLibCo_35;
      *(_OWORD *)&v73[16] = 0x21u;
      *(_QWORD *)&v73[32] = aSrcCoreCodexCo;
      *(_QWORD *)&v73[40] = 24;
      *(_QWORD *)&v73[72] = 0x2600000001LL;
      sub_141503E20(&v89, v73);
    }
    if ( v84 )
      sub_140001660(v86, v84, 1);
    v6 = v87;
    if ( v88 )
      sub_140001660(v90, v88, 1);
    if ( v82 )
      sub_140001660(v6, v82, 1);
    v11 = v13;
    v12 = v79;
  }
  v74.m256i_i64[0] = -1;
  v15 = -1;
LABEL_65:
  if ( v88 )
    sub_140001660(v90, v88, 1);
LABEL_67:
  if ( v82 )
    sub_140001660(v87, v82, 1);
  if ( v15 != -1 )
  {
LABEL_70:
    *(_OWORD *)(a1 + 88) = v78;
    *(_OWORD *)(a1 + 72) = v77;
    v35 = *(_OWORD *)v74.m256i_i8;
    v36 = *(_OWORD *)&v74.m256i_u64[2];
    v37 = v75;
    *(_OWORD *)(a1 + 56) = v76;
    *(_OWORD *)(a1 + 40) = v37;
    *(_OWORD *)(a1 + 24) = v36;
    *(_OWORD *)(a1 + 8) = v35;
    goto LABEL_71;
  }
  sub_140973080(v73, v81, v85);
  v39 = *(_OWORD *)v73;
  v40 = *(_OWORD *)&v73[16];
  if ( *(_QWORD *)v73 == -1 )
  {
    v44 = *(_QWORD *)&v73[16] + 224LL * *(_QWORD *)&v73[24];
    *(_QWORD *)v58 = *(_QWORD *)&v73[16];
    v87 = *(_QWORD *)&v73[8];
    *(_QWORD *)&v58[16] = *(_QWORD *)&v73[8];
    *(_QWORD *)&v58[8] = *(_QWORD *)&v73[16];
    *(_QWORD *)&v59 = v44;
    v45 = *(_QWORD *)&v73[16];
    v85 = *(_QWORD *)&v73[16];
    if ( *(_QWORD *)&v73[24] )
    {
      v46 = *(_QWORD *)&v73[16];
      do
      {
        sub_1419234B0(v73, v46, 224);
        v45 = v46 + 224;
        *(_QWORD *)&v58[8] = v46 + 224;
        if ( *(_QWORD *)&v73[16] != a5 || (unsigned int)sub_141923B40(*(_QWORD *)&v73[8], v83, a5) )
        {
          sub_1401AF4B0(v73);
        }
        else
        {
          v47 = *(_QWORD *)v73;
          if ( *(_QWORD *)v73 != -1 )
          {
            sub_1419234B0(a1 + 8, v46 + 8, 216);
            *(_QWORD *)a1 = v47;
            goto LABEL_85;
          }
        }
        v46 += 224;
      }
      while ( v45 != v44 );
      v45 = v44;
    }
    *(_QWORD *)&v53 = v67;
    *((_QWORD *)&v53 + 1) = sub_140191200;
    sub_1416DAFA0(&v73[8], &unk_141A59776, &v53);
    *(_QWORD *)v73 = 8;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v73[80];
    v48 = *(_OWORD *)&v73[16];
    v49 = *(_OWORD *)&v73[32];
    v50 = *(_OWORD *)&v73[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v73[64];
    *(_OWORD *)(a1 + 56) = v50;
    *(_OWORD *)(a1 + 40) = v49;
    *(_OWORD *)(a1 + 24) = v48;
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v73;
    *(_QWORD *)a1 = -1;
LABEL_85:
    v90 = 0x6DB6DB6DB6DB6DB7LL * ((unsigned __int64)(v44 - v45) >> 5);
    v88 = 0;
    v83 = v45;
    v51 = (_QWORD *)v45;
    while ( v90 != v88 )
    {
      ++v88;
      v52 = v51 + 28;
      sub_1401AF4B0(v51);
      v51 = v52;
    }
    if ( v87 )
      sub_140001660(v85, 224 * v87, 8);
  }
  else
  {
    v41 = *(_OWORD *)&v73[32];
    v42 = *(_OWORD *)&v73[48];
    v43 = *(_OWORD *)&v73[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v73[80];
    *(_OWORD *)(a1 + 72) = v43;
    *(_OWORD *)(a1 + 56) = v42;
    *(_OWORD *)(a1 + 40) = v41;
    *(_OWORD *)(a1 + 8) = v39;
    *(_OWORD *)(a1 + 24) = v40;
LABEL_71:
    *(_QWORD *)a1 = -1;
  }
  return a1;
}
