// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x14023c8f0 | name sub_14023C8F0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14023C8F0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int64 v22; // rax
  __m128i *v23; // rax
  const __m128i *v24; // rdx
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int128 v39; // xmm3
  __int128 v40; // [rsp+38h] [rbp-48h] BYREF
  __int64 v41; // [rsp+48h] [rbp-38h]
  __int128 v42; // [rsp+50h] [rbp-30h]
  __int128 v43; // [rsp+60h] [rbp-20h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  _QWORD v45[2]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v46; // [rsp+90h] [rbp+10h]
  __int128 v47; // [rsp+A0h] [rbp+20h]
  __int128 v48; // [rsp+B0h] [rbp+30h]
  __int128 v49; // [rsp+C0h] [rbp+40h]
  __int128 v50; // [rsp+D0h] [rbp+50h]
  __int128 v51; // [rsp+E0h] [rbp+60h]
  __int128 v52; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v53; // [rsp+100h] [rbp+80h]
  __int128 v54; // [rsp+110h] [rbp+90h]
  __int128 v55; // [rsp+120h] [rbp+A0h]
  __int64 v56; // [rsp+130h] [rbp+B0h]
  __int64 v57; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v58; // [rsp+140h] [rbp+C0h]
  __int128 v59; // [rsp+150h] [rbp+D0h]
  __int128 v60; // [rsp+160h] [rbp+E0h]
  __int128 v61; // [rsp+170h] [rbp+F0h]
  __int128 v62; // [rsp+180h] [rbp+100h]
  __int128 v63; // [rsp+190h] [rbp+110h]
  __int128 v64; // [rsp+1A0h] [rbp+120h]
  __int128 v65; // [rsp+1B0h] [rbp+130h]
  __int64 v66; // [rsp+1C0h] [rbp+140h]
  unsigned __int64 v67; // [rsp+1C8h] [rbp+148h] BYREF
  __m128i *v68; // [rsp+1D0h] [rbp+150h]
  unsigned __int64 v69; // [rsp+1D8h] [rbp+158h]
  _BYTE v70[56]; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v71; // [rsp+218h] [rbp+198h]
  _BYTE v72[24]; // [rsp+228h] [rbp+1A8h]
  _OWORD v73[2]; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v74; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v75; // [rsp+270h] [rbp+1F0h]
  __int128 v76; // [rsp+280h] [rbp+200h]
  __int128 v77; // [rsp+290h] [rbp+210h]
  __int64 v78; // [rsp+2A0h] [rbp+220h]
  _OWORD v79[2]; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 v80; // [rsp+2C8h] [rbp+248h]
  __m128i *v81; // [rsp+2D0h] [rbp+250h]
  char v82; // [rsp+2DFh] [rbp+25Fh]
  __int64 v83; // [rsp+2E0h] [rbp+260h]

  v83 = -2;
  v45[0] = a4;
  v45[1] = a5;
  sub_1402331D0((__int64)&v57, a2, a3);
  v9 = v57;
  v46 = v58;
  v47 = v59;
  v48 = v60;
  v49 = v61;
  v50 = v62;
  v51 = v63;
  if ( v57 == -2 )
  {
    *(_OWORD *)(a1 + 88) = v51;
    *(_OWORD *)(a1 + 72) = v50;
    v10 = v46;
    v11 = v47;
    v12 = v48;
    *(_OWORD *)(a1 + 56) = v49;
    *(_OWORD *)(a1 + 40) = v12;
    *(_OWORD *)(a1 + 24) = v11;
    *(_OWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = -2;
    return a1;
  }
  v44 = v66;
  v43 = v65;
  v42 = v64;
  if ( v57 == -1 )
  {
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v58 = v46;
  v59 = v47;
  v60 = v48;
  v61 = v49;
  v62 = v50;
  v63 = v51;
  v64 = v42;
  v65 = v43;
  v66 = v44;
  v13 = v46;
  *(_OWORD *)v70 = v46;
  *(_OWORD *)&v70[16] = 0;
  *(_OWORD *)&v70[32] = v46;
  sub_14062D280(&v74, v70);
  if ( (_BYTE)v74 == 0xFF )
  {
    v22 = *((_QWORD *)&v74 + 1);
    *(_QWORD *)(a1 + 8) = 3;
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)a1 = -2;
    if ( !v9 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v73[0] = v74;
  v73[1] = v75;
  v14 = sub_141642800(v73, aPayloadId, 11);
  if ( !v14 || *(_BYTE *)v14 != 3 || (v16 = *(_QWORD *)(v14 + 24)) == 0 )
  {
    *(_QWORD *)&v79[0] = a2;
    *((_QWORD *)&v79[0] + 1) = a3;
    *(_QWORD *)&v74 = v79;
    *((_QWORD *)&v74 + 1) = sub_14169F630;
    sub_1416ABFD0(&v70[8], &unk_1419D73AF, &v74);
    v18 = *(_OWORD *)&v70[8];
    v19 = *(_OWORD *)&v70[40];
    v20 = v71;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v70[24];
    *(_OWORD *)(a1 + 48) = v19;
    *(_OWORD *)(a1 + 64) = v20;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)v72;
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v72[16];
    *(_QWORD *)(a1 + 8) = 9;
    *(_OWORD *)(a1 + 16) = v18;
    *(_QWORD *)a1 = -2;
    goto LABEL_13;
  }
  if ( v16 < 0 )
  {
    v17 = 0;
    goto LABEL_10;
  }
  v81 = *(__m128i **)(v14 + 16);
  v80 = v16;
  nullsub_1(v15);
  v23 = (__m128i *)sub_140001650(v80, 1);
  v17 = 1;
  v16 = v80;
  if ( !v23 )
LABEL_10:
    sub_141938D2B(v17, v16);
  v24 = v81;
  v81 = v23;
  sub_1418F44E0(v23, v24, v80);
  v67 = v80;
  v68 = v81;
  v69 = v80;
  if ( v80 != a5 || (unsigned int)sub_1418F4B70(v81, a4) )
  {
    *(_QWORD *)&v74 = a2;
    *((_QWORD *)&v74 + 1) = a3;
    *(_QWORD *)v70 = &v74;
    *(_QWORD *)&v70[8] = sub_14169F630;
    *(_QWORD *)&v70[16] = &v67;
    *(_QWORD *)&v70[24] = sub_1400015F0;
    *(_QWORD *)&v70[32] = v45;
    *(_QWORD *)&v70[40] = sub_140186EE0;
    v82 = 1;
    sub_1416ABFD0(&v40, &unk_1419DED82, v70);
    *(_QWORD *)(a1 + 32) = v41;
    *(_OWORD *)(a1 + 16) = v40;
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)a1 = -2;
    if ( v67 )
      sub_140001660(v68, v67, 1);
LABEL_13:
    sub_14002F9D0(v73);
    if ( !v9 )
    {
LABEL_15:
      if ( *((_QWORD *)&v60 + 1) )
        sub_140001660(v61, *((_QWORD *)&v60 + 1), 1);
      if ( *((_QWORD *)&v63 + 1) != -1 && *((_QWORD *)&v63 + 1) )
        sub_140001660(v64, *((_QWORD *)&v63 + 1), 1);
      return a1;
    }
LABEL_14:
    sub_140001660(v13, v9, 1);
    goto LABEL_15;
  }
  v82 = 1;
  sub_141681D30(v79, a2, a3);
  sub_140239400((__int64)v70, (__int128 *)v46, *((__int64 *)&v46 + 1));
  v25 = *(_QWORD *)v70;
  v52 = *(_OWORD *)&v70[8];
  v53 = *(_OWORD *)&v70[24];
  v54 = *(_OWORD *)&v70[40];
  v55 = v71;
  v56 = *(_QWORD *)v72;
  if ( *(_QWORD *)v70 == -1 )
  {
    sub_140239400((__int64)v70, (__int128 *)v61, *((__int64 *)&v61 + 1));
    v29 = *(_QWORD *)v70;
    v74 = *(_OWORD *)&v70[8];
    v75 = *(_OWORD *)&v70[24];
    v76 = *(_OWORD *)&v70[40];
    v77 = v71;
    v78 = *(_QWORD *)v72;
    v80 = *(_QWORD *)v70;
    if ( *(_QWORD *)v70 == -1 )
    {
      *(_QWORD *)(a1 + 192) = v78;
      v33 = v74;
      v34 = v75;
      v35 = v76;
      *(_OWORD *)(a1 + 176) = v77;
      *(_OWORD *)(a1 + 160) = v35;
      *(_OWORD *)(a1 + 144) = v34;
      *(_OWORD *)(a1 + 128) = v33;
      sub_1418F44E0((__m128i *)(a1 + 200), (const __m128i *)&v57, 0x90u);
      v36 = v79[1];
      *(_OWORD *)a1 = v79[0];
      *(_OWORD *)(a1 + 16) = v36;
      v37 = v53;
      v38 = v54;
      v39 = v55;
      *(_OWORD *)(a1 + 56) = v52;
      *(_OWORD *)(a1 + 72) = v37;
      *(_OWORD *)(a1 + 88) = v38;
      *(_OWORD *)(a1 + 104) = v39;
      *(_QWORD *)(a1 + 120) = v56;
      *(_QWORD *)(a1 + 32) = a5;
      *(_QWORD *)(a1 + 40) = v81;
      *(_QWORD *)(a1 + 48) = a5;
      sub_14002F9D0(v73);
      return a1;
    }
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v72[8];
    *(_QWORD *)(a1 + 80) = v78;
    v30 = v74;
    v31 = v75;
    v32 = v76;
    *(_OWORD *)(a1 + 64) = v77;
    *(_OWORD *)(a1 + 48) = v32;
    *(_OWORD *)(a1 + 32) = v31;
    *(_OWORD *)(a1 + 16) = v30;
    *(_QWORD *)(a1 + 8) = v29;
    *(_QWORD *)a1 = -2;
    sub_140196610(&v52);
    sub_140001660(v81, a5, 1);
    if ( *(_QWORD *)&v79[0] )
      sub_140001660(*((_QWORD *)&v79[0] + 1), *(_QWORD *)&v79[0], 1);
  }
  else
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v72[8];
    *(_QWORD *)(a1 + 80) = v56;
    v26 = v52;
    v27 = v53;
    v28 = v54;
    *(_OWORD *)(a1 + 64) = v55;
    *(_OWORD *)(a1 + 48) = v28;
    *(_OWORD *)(a1 + 32) = v27;
    *(_OWORD *)(a1 + 16) = v26;
    *(_QWORD *)(a1 + 8) = v25;
    *(_QWORD *)a1 = -2;
    sub_140001660(v81, a5, 1);
    if ( *(_QWORD *)&v79[0] )
      sub_140001660(*((_QWORD *)&v79[0] + 1), *(_QWORD *)&v79[0], 1);
  }
  sub_14002F9D0(v73);
  sub_140196190(&v57);
  return a1;
}
