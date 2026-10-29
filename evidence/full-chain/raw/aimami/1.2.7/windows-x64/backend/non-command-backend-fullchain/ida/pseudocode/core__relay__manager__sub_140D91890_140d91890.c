// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d91890 | name sub_140D91890
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__m128i **__fastcall sub_140D91890(__m128i **a1, __m128i *a2)
{
  __int64 v2; // r15
  __m128i *v5; // rbx
  _BYTE *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // r14d
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rcx
  bool v19; // zf
  _BYTE *v20; // r14
  __int64 v21; // r12
  void *v22; // rax
  __int64 v23; // rcx
  __m128i *v24; // rax
  __m128i *v25; // rdi
  __int64 v26; // rcx
  __m128i *v27; // rax
  __int64 v28; // rcx
  __m128i *v29; // r13
  _OWORD *v30; // rax
  __int64 v31; // rcx
  _OWORD *v32; // rdi
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // rcx
  char v37; // of
  __int64 v38; // rt0
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __m128i v52[24]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v53[6]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v54; // [rsp+200h] [rbp+180h]
  __int64 v55; // [rsp+210h] [rbp+190h]
  _BYTE v56[312]; // [rsp+320h] [rbp+2A0h] BYREF
  _BYTE v57[88]; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 *v58; // [rsp+508h] [rbp+488h]
  __int128 v59; // [rsp+510h] [rbp+490h]
  __int64 v60; // [rsp+520h] [rbp+4A0h]
  __int16 v61; // [rsp+528h] [rbp+4A8h]
  char v62; // [rsp+52Ah] [rbp+4AAh]
  __int64 v63; // [rsp+530h] [rbp+4B0h]
  __int64 v64; // [rsp+538h] [rbp+4B8h]
  __int64 v65; // [rsp+540h] [rbp+4C0h]
  __int64 v66; // [rsp+548h] [rbp+4C8h]
  __int128 v67; // [rsp+5E8h] [rbp+568h]
  __int16 v68; // [rsp+610h] [rbp+590h]
  int v69; // [rsp+618h] [rbp+598h]
  __int16 v70; // [rsp+61Ch] [rbp+59Ch]
  __int16 v71; // [rsp+62Eh] [rbp+5AEh]
  __int128 v72; // [rsp+648h] [rbp+5C8h] BYREF
  __int128 v73; // [rsp+658h] [rbp+5D8h]
  __int128 v74; // [rsp+668h] [rbp+5E8h]
  __int128 v75; // [rsp+678h] [rbp+5F8h]
  __int128 v76; // [rsp+688h] [rbp+608h]
  _OWORD *v77; // [rsp+698h] [rbp+618h]
  __m128i *v78; // [rsp+6A8h] [rbp+628h]
  __int64 v79; // [rsp+6C0h] [rbp+640h]
  __m128i *v80; // [rsp+6C8h] [rbp+648h]
  __int64 *v81; // [rsp+6D0h] [rbp+650h]
  __m128i *v82; // [rsp+6D8h] [rbp+658h]
  __m128i *v83; // [rsp+6E0h] [rbp+660h]
  _OWORD *v84; // [rsp+6E8h] [rbp+668h]
  __int128 v85; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v86; // [rsp+700h] [rbp+680h]
  __m128i *v87; // [rsp+708h] [rbp+688h]
  __int64 v88; // [rsp+710h] [rbp+690h]
  __int64 v89; // [rsp+718h] [rbp+698h]
  _BYTE *v90; // [rsp+720h] [rbp+6A0h]
  _BYTE *v91; // [rsp+728h] [rbp+6A8h]
  bool v92; // [rsp+733h] [rbp+6B3h]
  char v93; // [rsp+734h] [rbp+6B4h]
  char v94; // [rsp+735h] [rbp+6B5h]
  char v95; // [rsp+739h] [rbp+6B9h] BYREF
  char v96; // [rsp+73Ah] [rbp+6BAh]
  char v97; // [rsp+73Bh] [rbp+6BBh]
  char v98; // [rsp+73Ch] [rbp+6BCh]
  char v99; // [rsp+73Dh] [rbp+6BDh]
  char v100; // [rsp+73Eh] [rbp+6BEh]
  char v101; // [rsp+73Fh] [rbp+6BFh]
  __int64 v102; // [rsp+740h] [rbp+6C0h]

  v102 = -2;
  v78 = a2;
  v5 = a2 + 1;
  v99 = 1;
  sub_140F73220(v56, &a2[1]);
  if ( *(_QWORD *)v56 != -1 )
  {
    v6 = v56;
    sub_1418F44E0(v52, (const __m128i *)v56, 0x180u);
    sub_1418F44E0(v53, (const __m128i *)v56, 0x180u);
LABEL_3:
    v90 = v6;
    v89 = -1;
    v101 = 1;
    v100 = 1;
    if ( (unsigned __int8)sub_140F6F0A0(v5, v53) )
    {
      v90 = v6;
      v89 = -1;
      v101 = 1;
      v100 = 1;
      sub_140F70980(v57, v5, v53);
      if ( *(_QWORD *)v57 == -1 )
      {
        v90 = v6;
        v89 = -1;
        v101 = 1;
        v100 = 1;
        sub_1401BD710(*(unsigned __int64 *)&v57[8], v7);
      }
      else
      {
        *(_QWORD *)&v56[88] = v58;
        *(_OWORD *)&v56[72] = *(_OWORD *)&v57[72];
        *(_OWORD *)&v56[56] = *(_OWORD *)&v57[56];
        *(_OWORD *)&v56[40] = *(_OWORD *)&v57[40];
        *(_OWORD *)&v56[24] = *(_OWORD *)&v57[24];
        *(_OWORD *)&v56[8] = *(_OWORD *)&v57[8];
        *(_QWORD *)v56 = *(_QWORD *)v57;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v91 = v6;
          *(_QWORD *)&v72 = v56;
          *((_QWORD *)&v72 + 1) = sub_14104A7D0;
          *(_QWORD *)&v57[48] = 2;
          *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
          *(_QWORD *)&v57[64] = 35;
          *(_QWORD *)&v57[80] = &unk_141A4B456;
          v58 = &v72;
          *(_QWORD *)v57 = 0;
          *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
          *(_OWORD *)&v57[16] = 0x23u;
          *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
          *(_QWORD *)&v57[40] = 25;
          *(_QWORD *)&v57[72] = 0xCE00000001LL;
          sub_1414D53A0(&v95, v57);
          v6 = v91;
        }
        v90 = v6;
        v89 = -1;
        v101 = 1;
        v100 = 1;
        sub_140D1BEA0(v56);
      }
    }
    v9 = a2[51].m128i_i64[1];
    v10 = a2[52].m128i_i64[0];
    v90 = v6;
    v89 = -1;
    v101 = 1;
    v100 = 1;
    v8 = -1;
    if ( (unsigned __int8)sub_141682B30(v9, v10) )
    {
      v90 = v6;
      v89 = -1;
      v101 = 1;
      v100 = 1;
      sub_141043310(&v72, v5, v53);
      if ( (_QWORD)v72 != -1 )
      {
        *(_QWORD *)&v56[16] = v73;
        *(_OWORD *)v56 = v72;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v91 = v6;
          *(_QWORD *)&v85 = v56;
          *((_QWORD *)&v85 + 1) = sub_1400015F0;
          *(_QWORD *)&v57[48] = 2;
          *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
          *(_QWORD *)&v57[64] = 35;
          *(_QWORD *)&v57[80] = &unk_141A4B487;
          v58 = &v85;
          *(_QWORD *)v57 = 0;
          *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
          *(_OWORD *)&v57[16] = 0x23u;
          *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
          *(_QWORD *)&v57[40] = 25;
          *(_QWORD *)&v57[72] = 0xD300000001LL;
          sub_1414D53A0(&v95, v57);
          v6 = v91;
        }
        if ( *(_QWORD *)v56 )
          sub_140001660(*(_QWORD *)&v56[8], *(_QWORD *)v56, 1);
      }
    }
    goto LABEL_19;
  }
  v53[5] = *(__m128i *)&v56[88];
  v53[4] = *(__m128i *)&v56[72];
  v53[3] = *(__m128i *)&v56[56];
  v53[2] = *(__m128i *)&v56[40];
  v53[1] = *(__m128i *)&v56[24];
  v53[0] = *(__m128i *)&v56[8];
  *(_QWORD *)&v72 = v53;
  *((_QWORD *)&v72 + 1) = sub_14104A7D0;
  sub_1416ABFD0(v57, &unk_141A4B3B6, &v72);
  v85 = *(_OWORD *)v57;
  v86 = *(_QWORD *)&v57[16];
  if ( *(_QWORD *)off_1421E6EC0 )
  {
    *(_QWORD *)&v72 = &v85;
    *((_QWORD *)&v72 + 1) = sub_1400015F0;
    *(_QWORD *)&v57[48] = 1;
    *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
    *(_QWORD *)&v57[64] = 35;
    *(_QWORD *)&v57[80] = &unk_141A4B43D;
    v58 = &v72;
    *(_QWORD *)v57 = 0;
    *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
    *(_OWORD *)&v57[16] = 0x23u;
    *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
    *(_QWORD *)&v57[40] = 25;
    *(_QWORD *)&v57[72] = 0xC200000001LL;
    sub_1414D53A0(&v95, v57);
  }
  v69 = 16;
  *(_QWORD *)v57 = 0;
  *(_QWORD *)&v57[8] = 8;
  *(_OWORD *)&v57[16] = 0;
  *(_QWORD *)&v57[32] = 8;
  *(_OWORD *)&v57[40] = 0;
  *(_QWORD *)&v57[56] = 1;
  *(_OWORD *)&v57[64] = 0;
  *(_QWORD *)&v57[80] = 1;
  v58 = nullptr;
  *(_QWORD *)&v59 = -1;
  v61 = 0;
  v62 = 0;
  v70 = 0;
  v71 = 256;
  v63 = 0;
  v64 = 8;
  v65 = 0;
  v66 = -1;
  v67 = 0;
  v68 = -2;
  sub_1416AC440(&v72, &v85);
  v60 = v73;
  v59 = v72;
  sub_1418F44E0(v52, (const __m128i *)v57, 0x180u);
  v6 = *((_BYTE **)&v85 + 1);
  v8 = v85;
  v2 = v86;
  v99 = 1;
  sub_140D1BEA0(v53);
  sub_1418F44E0(v53, v52, 0x180u);
  if ( v8 == -1 )
    goto LABEL_3;
LABEL_19:
  v90 = v6;
  v89 = v8;
  v101 = 1;
  v100 = 1;
  sub_1415094B0(v57);
  v88 = v8;
  v91 = v6;
  v11 = sub_141509480(v57, 2, &off_141A4B4B8);
  *(_WORD *)(v11 + 201) = 257;
  sub_14061D320(v11, aAimamiRelayRt, 15);
  sub_1415096A0(&v72, v11);
  v13 = v72;
  if ( (_QWORD)v72 == 2 )
  {
    v84 = nullptr;
    if ( (BYTE8(v72) & 3u) - 2 >= 2 && (BYTE8(v72) & 3) != 0 )
    {
      *(_QWORD *)&v56[8] = *((_QWORD *)&v72 + 1) - 1LL;
      v56[0] = 3;
      sub_1416BCB00(&v56[8]);
    }
  }
  else
  {
    *(_OWORD *)&v56[80] = v76;
    *(_OWORD *)&v56[64] = v75;
    *(_OWORD *)&v56[48] = v74;
    *(_OWORD *)&v56[32] = v73;
    *(_OWORD *)&v56[16] = v72;
    *(_QWORD *)v56 = 1;
    *(_QWORD *)&v56[8] = 1;
    nullsub_1(v12);
    v14 = (_OWORD *)sub_140001650(96, 8);
    if ( !v14 )
      sub_141938D11(8, 96);
    v14[5] = *(_OWORD *)&v56[80];
    v14[4] = *(_OWORD *)&v56[64];
    v15 = *(_OWORD *)v56;
    v16 = *(_OWORD *)&v56[16];
    v17 = *(_OWORD *)&v56[32];
    v14[3] = *(_OWORD *)&v56[48];
    v14[2] = v17;
    v14[1] = v16;
    *v14 = v15;
    v84 = v14;
  }
  v98 = 1;
  v97 = 1;
  v96 = 1;
  sub_1400334C0(v57);
  v19 = v13 == 2;
  v20 = v91;
  v21 = v88;
  if ( v19 )
  {
    nullsub_1(v18);
    v22 = (void *)sub_140001650(47, 1);
    if ( !v22 )
    {
      v98 = 1;
      v97 = 1;
      v96 = 1;
      sub_141938D2B(1, 47);
    }
    qmemcpy(v22, "relay tokio runtime init failed; proxy disabled", 47);
    *(_QWORD *)v56 = 47;
    *(_QWORD *)&v56[8] = v22;
    *(_QWORD *)&v56[16] = 47;
    if ( *(_QWORD *)off_1421E6EC0 )
    {
      *(_QWORD *)&v72 = v56;
      *((_QWORD *)&v72 + 1) = sub_1400015F0;
      *(_QWORD *)&v57[48] = 1;
      *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
      *(_QWORD *)&v57[64] = 35;
      *(_QWORD *)&v57[80] = &unk_141A4B50E;
      v58 = &v72;
      *(_QWORD *)v57 = 0;
      *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
      *(_OWORD *)&v57[16] = 0x23u;
      *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
      *(_QWORD *)&v57[40] = 25;
      *(_QWORD *)&v57[72] = 0xE000000001LL;
      sub_1414D53A0(&v95, v57);
      v20 = v91;
      v21 = v88;
    }
    if ( (_QWORD)v54 == -1 )
    {
      v55 = *(_QWORD *)&v56[16];
      v54 = *(_OWORD *)v56;
    }
    else if ( *(_QWORD *)v56 )
    {
      sub_140001660(*(_QWORD *)&v56[8], *(_QWORD *)v56, 1);
    }
  }
  v83 = a2;
  sub_1418F44E0((__m128i *)&v56[6], v53, 0x180u);
  *(_QWORD *)v57 = 1;
  *(_QWORD *)&v57[8] = 1;
  *(_WORD *)&v57[16] = 0;
  sub_1418F44E0((__m128i *)&v57[18], (const __m128i *)v56, 0x186u);
  nullsub_1(v23);
  v24 = (__m128i *)sub_140001650(408, 8);
  v92 = v24 == nullptr;
  if ( !v24 )
  {
    v87 = a2;
    sub_141938D11(8, 408);
  }
  v25 = v24;
  sub_1418F44E0(v24, (const __m128i *)v57, 0x198u);
  v82 = v25;
  nullsub_1(v26);
  v27 = (__m128i *)sub_140001650(40, 8);
  if ( !v27 )
  {
    v87 = v25;
    sub_141938D11(8, 40);
  }
  v29 = v27;
  v27->m128i_i64[0] = 1;
  v27->m128i_i64[1] = 1;
  v27[1].m128i_i64[0] = v21;
  v27[1].m128i_i64[1] = (__int64)v20;
  v27[2].m128i_i64[0] = v2;
  v81 = (__int64 *)v27;
  *(_QWORD *)v57 = 1;
  *(_QWORD *)&v57[8] = 1;
  *(_WORD *)&v57[16] = 0;
  *(_QWORD *)&v57[24] = 0;
  nullsub_1(v28);
  v30 = (_OWORD *)sub_140001650(48, 8);
  if ( !v30 )
  {
    v87 = v29;
    sub_141938D11(8, 48);
  }
  v32 = v30;
  v33 = *(_OWORD *)v57;
  v34 = *(_OWORD *)&v57[16];
  v30[2] = *(_OWORD *)&v57[32];
  v30[1] = v34;
  *v30 = v33;
  v80 = (__m128i *)v30;
  nullsub_1(v31);
  v35 = sub_140001650(24, 8);
  if ( !v35 )
  {
    v77 = v32;
    v94 = 1;
    sub_141938D11(8, 24);
  }
  *(_QWORD *)v35 = 1;
  *(_QWORD *)(v35 + 8) = 1;
  *(_WORD *)(v35 + 16) = 0;
  v79 = v35;
  v37 = 0;
  if ( dword_1421E0528 )
  {
    v93 = 1;
    sub_1419110E1();
  }
  v38 = _InterlockedIncrement64((volatile signed __int64 *)qword_1421E0520);
  if ( (v38 < 0) ^ v37 | (v38 == 0) )
    BUG();
  *(_QWORD *)&v85 = qword_1421E0520;
  *(_QWORD *)&v72 = v84;
  v39 = sub_14167F170(v36);
  v44 = v39;
  if ( *(_BYTE *)(v39 + 16) == 1 )
  {
    v45 = *(_QWORD *)v39;
    v46 = *(_QWORD *)(v44 + 8);
  }
  else
  {
    v45 = sub_141696260(v41, v40, v42, v43);
    *(_QWORD *)v44 = v45;
    *(_QWORD *)(v44 + 8) = v46;
    *(_BYTE *)(v44 + 16) = 1;
  }
  *(_QWORD *)v44 = v45 + 1;
  *(_OWORD *)&v56[22] = xmmword_141A43480;
  *(_OWORD *)&v56[6] = *(_OWORD *)&off_141A43470;
  *(_QWORD *)v57 = 1;
  *(_QWORD *)&v57[8] = 1;
  *(_WORD *)&v57[16] = 0;
  *(_OWORD *)&v57[18] = *(_OWORD *)v56;
  *(_OWORD *)&v57[34] = *(_OWORD *)&v56[16];
  *(_QWORD *)&v57[48] = 0;
  *(_QWORD *)&v57[56] = v45;
  *(_QWORD *)&v57[64] = v46;
  nullsub_1(0);
  v47 = sub_140001650(72, 8);
  if ( !v47 )
    sub_141938D11(8, 72);
  *(_QWORD *)(v47 + 64) = *(_QWORD *)&v57[64];
  v48 = *(_OWORD *)v57;
  v49 = *(_OWORD *)&v57[16];
  v50 = *(_OWORD *)&v57[32];
  *(_OWORD *)(v47 + 48) = *(_OWORD *)&v57[48];
  *(_OWORD *)(v47 + 32) = v50;
  *(_OWORD *)(v47 + 16) = v49;
  *(_OWORD *)v47 = v48;
  *a1 = v83;
  a1[1] = v82;
  a1[2] = (__m128i *)v81;
  a1[3] = v80;
  a1[4] = (__m128i *)v79;
  a1[5] = (__m128i *)v85;
  a1[7] = (__m128i *)v72;
  a1[6] = (__m128i *)v47;
  return a1;
}
