// win 1.2.7 | module src/core/sessions/health.rs | ea 0x140353510 | name sub_140353510
// win 1.2.7 | module src/core/sessions/health.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140353510(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // kr00_16
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v12; // rdx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // rax
  __int64 v29; // rdi
  __int128 v30; // xmm0
  _OWORD v31[3]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v32[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v33; // [rsp+80h] [rbp+0h]
  __int128 v34; // [rsp+90h] [rbp+10h]
  __int64 v35; // [rsp+A0h] [rbp+20h]
  __int128 v36; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v37; // [rsp+C0h] [rbp+40h]
  __int128 v38; // [rsp+D0h] [rbp+50h]
  __int128 v39; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v40; // [rsp+100h] [rbp+80h]
  _BYTE v41[56]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v42; // [rsp+148h] [rbp+C8h]
  __m256i v43; // [rsp+158h] [rbp+D8h]
  __int128 v44; // [rsp+178h] [rbp+F8h]
  __int128 v45; // [rsp+188h] [rbp+108h]
  __int128 v46; // [rsp+198h] [rbp+118h]
  __int128 v47; // [rsp+1A8h] [rbp+128h]
  __int64 v48; // [rsp+1B8h] [rbp+138h]
  __int128 v49; // [rsp+1C0h] [rbp+140h] BYREF
  _BYTE v50[72]; // [rsp+1D0h] [rbp+150h]
  __int128 v51; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v52; // [rsp+230h] [rbp+1B0h]
  __int128 v53; // [rsp+240h] [rbp+1C0h]
  _BYTE v54[40]; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v55; // [rsp+278h] [rbp+1F8h]
  __int128 v56; // [rsp+288h] [rbp+208h]
  __m256i v57; // [rsp+298h] [rbp+218h]
  __int128 v58; // [rsp+2B8h] [rbp+238h]
  __int128 v59; // [rsp+2C8h] [rbp+248h]
  __int128 v60; // [rsp+2D8h] [rbp+258h]
  __int128 v61; // [rsp+2E8h] [rbp+268h]
  __int64 v62; // [rsp+2F8h] [rbp+278h]
  __m256i v63; // [rsp+300h] [rbp+280h] BYREF
  __int128 v64; // [rsp+320h] [rbp+2A0h]
  __int128 v65; // [rsp+330h] [rbp+2B0h]
  __m256i v66; // [rsp+340h] [rbp+2C0h]
  _BYTE v67[96]; // [rsp+360h] [rbp+2E0h] BYREF
  char v68; // [rsp+3C7h] [rbp+347h]
  __int64 v69; // [rsp+3C8h] [rbp+348h]

  v69 = -2;
  sub_140C1C870(v54);
  *(_OWORD *)v67 = *(_OWORD *)&v54[8];
  *(_OWORD *)&v67[16] = *(_OWORD *)&v54[24];
  *(_OWORD *)&v67[32] = v55;
  *(_OWORD *)&v67[48] = v56;
  *(__m256i *)&v67[64] = v57;
  if ( *(_QWORD *)v54 == 2 )
  {
    v63 = *(__m256i *)v67;
    v64 = *(_OWORD *)&v67[32];
    v65 = *(_OWORD *)&v67[48];
    v66 = *(__m256i *)&v67[64];
  }
  else
  {
    v48 = v62;
    v47 = v61;
    v46 = v60;
    v45 = v59;
    v44 = v58;
    *(_OWORD *)&v41[8] = *(_OWORD *)v67;
    *(_OWORD *)&v41[24] = *(_OWORD *)&v67[16];
    *(_OWORD *)&v41[40] = *(_OWORD *)&v67[32];
    v42 = *(_OWORD *)&v67[48];
    v43 = *(__m256i *)&v67[64];
    *(_QWORD *)v41 = *(_QWORD *)v54;
    LOBYTE(v4) = 1;
    sub_140C4A970(&v63, v41, v4);
    sub_140BAC0A0(v41);
  }
  v5 = v63.m256i_i64[0];
  v39 = *(_OWORD *)&v63.m256i_u64[1];
  v40 = v63.m256i_i64[3];
  if ( v63.m256i_i64[0] == -1 )
  {
    sub_1402DED50(&v36, &v39);
    v49 = v36;
    v53 = v38;
    v31[0] = v36;
    v31[1] = v37;
    v31[2] = v38;
    sub_14035B7D0(v54, a2, v31);
    v5 = *(_QWORD *)v54;
    *(_OWORD *)v41 = *(_OWORD *)&v54[8];
    *(_OWORD *)&v41[16] = *(_OWORD *)&v54[24];
    *(_OWORD *)&v41[32] = v55;
    if ( *(_QWORD *)v54 != -1 )
    {
      *(_QWORD *)(a1 + 88) = v57.m256i_i64[2];
      v9 = v56;
      *(_OWORD *)(a1 + 72) = *(_OWORD *)v57.m256i_i8;
      *(_OWORD *)(a1 + 56) = v9;
      v7 = *(_OWORD *)v41;
      v10 = *(_OWORD *)&v41[16];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v41[32];
      *(_OWORD *)(a1 + 24) = v10;
      goto LABEL_8;
    }
    v51 = *(_OWORD *)v41;
    v52 = *(_OWORD *)&v41[16];
    v53 = *(_OWORD *)&v41[32];
    sub_1401BEB90(v67, a2);
    v13 = *(_QWORD *)v67;
    v49 = *(_OWORD *)&v67[8];
    *(_OWORD *)v50 = *(_OWORD *)&v67[24];
    *(_OWORD *)&v50[16] = *(_OWORD *)&v67[40];
    if ( *(_QWORD *)v67 != -1 )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v67[88];
      v14 = *(_OWORD *)&v67[56];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v67[72];
      *(_OWORD *)(a1 + 56) = v14;
      v15 = v49;
      v16 = *(_OWORD *)v50;
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v50[16];
      *(_OWORD *)(a1 + 24) = v16;
      *(_OWORD *)(a1 + 8) = v15;
      *(_QWORD *)a1 = v13;
LABEL_31:
      sub_140298940(&v51, v12);
      return a1;
    }
    v36 = v49;
    v37 = *(_OWORD *)v50;
    v38 = *(_OWORD *)&v50[16];
    sub_1401C07D0(v54, &v36, a2);
    v63 = *(__m256i *)&v54[8];
    v64 = v55;
    v65 = v56;
    v66 = v57;
    if ( !*(_QWORD *)v54 )
    {
      *(__m256i *)(a1 + 64) = v66;
      v25 = *(_OWORD *)v63.m256i_i8;
      v26 = *(_OWORD *)&v63.m256i_u64[2];
      v27 = v64;
      *(_OWORD *)(a1 + 48) = v65;
      *(_OWORD *)(a1 + 32) = v27;
      *(_OWORD *)(a1 + 16) = v26;
      *(_OWORD *)a1 = v25;
      sub_14029A620(&v49);
      goto LABEL_31;
    }
    *(_QWORD *)&v46 = v60;
    v45 = v59;
    v44 = v58;
    *(__m256i *)&v41[8] = v63;
    *(_OWORD *)&v41[40] = v64;
    v42 = v65;
    v43 = v66;
    *(_QWORD *)v41 = *(_QWORD *)v54;
    sub_14029A620(&v49);
    sub_140359550(v54, &v51, v41, &v41[48]);
    v63.m256i_i64[2] = *(_QWORD *)&v54[16];
    *(_OWORD *)v63.m256i_i8 = *(_OWORD *)v54;
    *(_QWORD *)&v36 = *(_QWORD *)&v54[24];
    if ( *(_QWORD *)&v54[24] && *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)v67 = &v36;
      *(_QWORD *)&v67[8] = sub_1416BCB10;
      *(_QWORD *)v54 = aCodexmateLibCo_27;
      *(_QWORD *)&v54[8] = 37;
      *(_QWORD *)&v54[16] = aCodexmateLibCo_27;
      *(_QWORD *)&v54[24] = 37;
      *(_QWORD *)&v54[32] = &off_1419EA1A8;
      sub_140BAD520(&unk_1419EA14E, v67, 2, v54);
    }
    v17 = v63.m256i_i64[2];
    if ( v63.m256i_i64[2] )
    {
      v18 = v63.m256i_i64[1];
      sub_1402C8EA0(v54, a2, v63.m256i_i64[1], v63.m256i_i64[2]);
      v19 = *(_QWORD *)v54;
      *(_OWORD *)v67 = *(_OWORD *)&v54[8];
      *(_OWORD *)&v67[16] = *(_OWORD *)&v54[24];
      *(_OWORD *)&v67[32] = v55;
      *(_OWORD *)&v67[48] = v56;
      *(_QWORD *)&v67[64] = v57.m256i_i64[0];
      if ( *(_QWORD *)v54 == -1 )
      {
        v32[1] = *(_OWORD *)&v67[16];
        v32[0] = *(_OWORD *)v67;
        v33 = *(_OWORD *)&v67[32];
        v34 = *(_OWORD *)&v67[48];
        v35 = *(_QWORD *)&v67[64];
        v68 = 1;
        v28 = sub_1402B2EF0(v18, (int)v18 + 24 * (int)v17, *(_DWORD *)&v67[8], *(_DWORD *)&v67[16], (__int64)v41);
        if ( *((_QWORD *)&v33 + 1) && *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)&v49 = *((_QWORD *)&v33 + 1);
          *(_QWORD *)v67 = &v49;
          *(_QWORD *)&v67[8] = sub_1416BCB10;
          *(_QWORD *)v54 = aCodexmateLibCo_27;
          *(_QWORD *)&v54[8] = 37;
          *(_QWORD *)&v54[16] = aCodexmateLibCo_27;
          *(_QWORD *)&v54[24] = 37;
          *(_QWORD *)&v54[32] = &off_1419EA220;
          v68 = 1;
          v29 = v28;
          sub_140BAD520(&unk_1419EA1E5, v67, 2, v54);
          v28 = v29;
        }
        v68 = 0;
        sub_140354E70(v54, v32, v28);
        *(_QWORD *)(a1 + 40) = *(_QWORD *)&v54[32];
        v30 = *(_OWORD *)v54;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v54[16];
        *(_OWORD *)(a1 + 8) = v30;
        *(_QWORD *)a1 = -1;
        sub_140025530(&v63);
        goto LABEL_30;
      }
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v57.m256i_u64[1];
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&v67[64];
      v20 = *(_OWORD *)v67;
      v21 = *(_OWORD *)&v67[16];
      v22 = *(_OWORD *)&v67[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v67[48];
      *(_OWORD *)(a1 + 40) = v22;
      *(_OWORD *)(a1 + 24) = v21;
      *(_OWORD *)(a1 + 8) = v20;
      *(_QWORD *)a1 = v19;
      v23 = (_QWORD *)(v18 + 8);
      do
      {
        v24 = *(v23 - 1);
        if ( v24 )
          sub_140001660(*v23, v24, 1);
        v23 += 3;
        --v17;
      }
      while ( v17 );
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 8;
      *(_OWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)a1 = -1;
      v18 = v63.m256i_i64[1];
    }
    if ( v63.m256i_i64[0] )
      sub_140001660(v18, 24 * v63.m256i_i64[0], 8);
LABEL_30:
    sub_14029E410(v41);
    goto LABEL_31;
  }
  *(__m256i *)&v50[40] = v66;
  *(_OWORD *)&v50[24] = v65;
  *(_OWORD *)&v50[8] = v64;
  *(_QWORD *)v50 = v40;
  v49 = v39;
  v51 = v39;
  *(_QWORD *)&v52 = v40;
  *((_QWORD *)&v52 + 1) = v64;
  v53 = *(_OWORD *)&v50[16];
  *(_QWORD *)(a1 + 88) = v66.m256i_i64[3];
  v6 = *(_OWORD *)&v50[32];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v50[48];
  *(_OWORD *)(a1 + 56) = v6;
  v7 = v51;
  v8 = v52;
  *(_OWORD *)(a1 + 40) = v53;
  *(_OWORD *)(a1 + 24) = v8;
LABEL_8:
  *(_OWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = v5;
  return a1;
}
