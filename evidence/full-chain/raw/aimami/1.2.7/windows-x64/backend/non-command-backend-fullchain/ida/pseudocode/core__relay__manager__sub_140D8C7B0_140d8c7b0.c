// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d8c7b0 | name sub_140D8C7B0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D8C7B0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rdx
  __m128i si128; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  int v25; // r8d
  __int64 v26; // rcx
  char v27; // al
  __m128i v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int128 v31; // kr10_16
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // kr20_16
  __int64 v35; // rdi
  __m256i *v36; // rbx
  _QWORD *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  __int128 v43; // kr30_16
  __int64 v44; // r12
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int64 v49; // r14
  __m256i *v50; // rdx
  __int64 v51; // rdi
  __m128i v53; // [rsp+B0h] [rbp+30h] BYREF
  _BYTE v54[312]; // [rsp+C0h] [rbp+40h] BYREF
  char v55; // [rsp+22Ch] [rbp+1ACh]
  unsigned __int8 v56; // [rsp+23Eh] [rbp+1BEh]
  _QWORD v57[2]; // [rsp+240h] [rbp+1C0h] BYREF
  __m256i v58; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v59; // [rsp+270h] [rbp+1F0h]
  __int128 v60; // [rsp+280h] [rbp+200h]
  __int128 v61; // [rsp+290h] [rbp+210h]
  __int128 v62; // [rsp+2A0h] [rbp+220h]
  __int128 v63; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v64; // [rsp+2C0h] [rbp+240h]
  __m256i v65; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v66; // [rsp+2F0h] [rbp+270h]
  __int128 v67; // [rsp+300h] [rbp+280h]
  __int128 v68; // [rsp+310h] [rbp+290h]
  __int128 v69; // [rsp+320h] [rbp+2A0h]
  __int64 v70; // [rsp+338h] [rbp+2B8h]
  _BYTE v71[24]; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v72; // [rsp+358h] [rbp+2D8h]
  __m256i v73; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v74; // [rsp+380h] [rbp+300h]
  __int128 v75; // [rsp+390h] [rbp+310h]
  __int128 v76; // [rsp+3A0h] [rbp+320h]
  __int64 v77; // [rsp+3B0h] [rbp+330h]
  __m256i **v78; // [rsp+3C0h] [rbp+340h] BYREF
  __int64 v79; // [rsp+3C8h] [rbp+348h]
  __int64 v80; // [rsp+3D0h] [rbp+350h]
  __m256i *v81; // [rsp+3D8h] [rbp+358h] BYREF
  __m128i v82; // [rsp+3E0h] [rbp+360h]
  _BYTE v83[24]; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v84; // [rsp+410h] [rbp+390h] BYREF
  _BYTE v85[80]; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v86; // [rsp+478h] [rbp+3F8h]
  int v87; // [rsp+484h] [rbp+404h]
  _BYTE v88[4]; // [rsp+48Bh] [rbp+40Bh] BYREF
  unsigned __int8 v89; // [rsp+48Fh] [rbp+40Fh] BYREF
  __int64 v90; // [rsp+490h] [rbp+410h]

  v90 = -2;
  v57[0] = a4;
  v57[1] = a5;
  v89 = a7;
  LOBYTE(v10) = sub_140C751D0((__int64)v54, (__int64)a3);
  if ( *(_DWORD *)v54 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v54[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v54[64];
    v11 = _mm_loadu_si128((const __m128i *)v54);
    v12 = *(_OWORD *)&v54[16];
    v13 = *(_OWORD *)&v54[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v54[48];
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(__m128i *)a1 = v11;
    return v10;
  }
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)&v84 = v57;
    *((_QWORD *)&v84 + 1) = sub_140186EE0;
    *(_QWORD *)&v54[48] = 2;
    *(_QWORD *)&v54[56] = aCodexmateLibCo_36;
    *(_QWORD *)&v54[64] = 35;
    *(_QWORD *)&v54[80] = &unk_141A4AE00;
    *(_QWORD *)&v54[88] = &v84;
    *(_QWORD *)v54 = 0;
    *(_QWORD *)&v54[8] = aCodexmateLibCo_36;
    *(_OWORD *)&v54[16] = 0x23u;
    *(_QWORD *)&v54[32] = aSrcCoreRelayMa_5;
    *(_QWORD *)&v54[40] = 25;
    *(_QWORD *)&v54[72] = 0x94B00000001LL;
    sub_1414D53A0(v88, v54);
  }
  sub_140EF2020((__int64)v54, a3, 1, 0);
  v17 = *(_QWORD *)&v54[8];
  v16 = *(_QWORD *)v54;
  if ( !*(_QWORD *)&v54[16] )
  {
    if ( *(_QWORD *)v54 )
      sub_140001660(*(_QWORD *)&v54[8], 32LL * *(_QWORD *)v54, 8);
    sub_140D9A5F0(v54, a2);
    if ( v55 || v56 != a7 )
      goto LABEL_26;
    sub_1410261E0(&v84, a3);
    v26 = v84;
    v27 = BYTE8(v84);
    if ( (_QWORD)v84 != -1 )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v85[72];
      *(_OWORD *)(a1 + 73) = *(_OWORD *)&v85[57];
      v28 = _mm_loadu_si128((const __m128i *)((char *)&v84 + 9));
      v29 = *(_OWORD *)&v85[9];
      v30 = *(_OWORD *)&v85[25];
      *(_OWORD *)(a1 + 57) = *(_OWORD *)&v85[41];
      *(_OWORD *)(a1 + 41) = v30;
      *(_OWORD *)(a1 + 25) = v29;
      *(__m128i *)(a1 + 9) = v28;
      *(_QWORD *)a1 = v26;
      *(_BYTE *)(a1 + 8) = v27;
LABEL_80:
      LOBYTE(v10) = sub_1407ADB20(v54);
      return v10;
    }
    if ( (BYTE8(v84) & 1) != 0 )
    {
LABEL_26:
      v58.m256i_i64[0] = 0;
      *(_OWORD *)&v58.m256i_u64[1] = 8u;
      LOBYTE(v25) = 1;
      sub_140BC1A40(
        (unsigned int)&v84,
        (_DWORD)a3,
        v25,
        (unsigned int)&unk_141A4AE30,
        34,
        (__int64)&v58,
        0,
        a2,
        (__int64)&v89);
      v31 = v84;
      *(_OWORD *)v73.m256i_i8 = *(_OWORD *)v85;
      v73.m256i_i64[2] = *(_QWORD *)&v85[16];
      if ( (_QWORD)v84 != -1 )
      {
        *(_QWORD *)(a1 + 88) = *(_QWORD *)&v85[72];
        v32 = *(_OWORD *)&v85[24];
        v33 = *(_OWORD *)&v85[40];
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v85[56];
        *(_OWORD *)(a1 + 56) = v33;
        *(_OWORD *)(a1 + 40) = v32;
        *(_QWORD *)(a1 + 32) = v73.m256i_i64[2];
        *(__m128i *)(a1 + 16) = _mm_load_si128((const __m128i *)&v73);
        *(_OWORD *)a1 = v31;
        goto LABEL_80;
      }
      *(_OWORD *)v83 = *(_OWORD *)v73.m256i_i8;
      *(_QWORD *)&v83[16] = v73.m256i_i64[2];
      if ( *((_QWORD *)&v84 + 1) == 2 )
      {
        *(_QWORD *)(a1 + 24) = *(_QWORD *)&v83[16];
        *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)v83);
        *(_QWORD *)a1 = -1;
        goto LABEL_80;
      }
      v73.m256i_i64[0] = *((_QWORD *)&v84 + 1);
      *(__m128i *)&v73.m256i_u64[1] = _mm_load_si128((const __m128i *)v83);
      v73.m256i_i64[3] = *(_QWORD *)&v83[16];
      sub_140C1E5B0(&v84, &v73);
      v43 = v84;
      v44 = *(_QWORD *)v85;
      v45 = *(_QWORD *)&v85[8];
      if ( (_QWORD)v84 != -1 )
      {
        v46 = _mm_loadu_si128((const __m128i *)&v85[16]);
        v47 = *(_OWORD *)&v85[32];
        v48 = *(_OWORD *)&v85[48];
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v85[64];
        *(_OWORD *)(a1 + 64) = v48;
        *(_OWORD *)(a1 + 48) = v47;
        *(__m128i *)(a1 + 32) = v46;
        *(_OWORD *)a1 = v43;
        *(_QWORD *)(a1 + 16) = v44;
        *(_QWORD *)(a1 + 24) = v45;
        goto LABEL_80;
      }
      v49 = *(_QWORD *)v85 + 24LL * *(_QWORD *)&v85[8];
      v58.m256i_i64[0] = *(_QWORD *)v85;
      v58.m256i_i64[1] = *(_QWORD *)v85;
      v58.m256i_i64[2] = *((_QWORD *)&v84 + 1);
      v58.m256i_i64[3] = v49;
      if ( *(_QWORD *)&v85[8] )
      {
        v44 = *(_QWORD *)v85 + 24LL;
        while ( 1 )
        {
          v50 = *(__m256i **)(v44 - 24);
          if ( v50 == (__m256i *)-1LL )
            break;
          v51 = v44 - 24;
          v81 = *(__m256i **)(v44 - 24);
          v82 = _mm_loadu_si128((const __m128i *)(v44 - 24 + 8));
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v86 = v44;
            v78 = &v81;
            v79 = (__int64)sub_1400015F0;
            *(_QWORD *)&v85[32] = 2;
            *(_QWORD *)&v85[40] = aCodexmateLibCo_36;
            *(_QWORD *)&v85[48] = 35;
            *(_QWORD *)&v85[64] = &unk_141A4AE52;
            *(_QWORD *)&v85[72] = &v78;
            *(_QWORD *)&v84 = 0;
            *((_QWORD *)&v84 + 1) = aCodexmateLibCo_36;
            *(_QWORD *)v85 = 35;
            *(_QWORD *)&v85[8] = 0;
            *(_QWORD *)&v85[16] = aSrcCoreRelayMa_5;
            *(_QWORD *)&v85[24] = 25;
            *(_QWORD *)&v85[56] = 0x96600000001LL;
            sub_1414D53A0(v88, &v84);
            v50 = v81;
            v44 = v86;
          }
          if ( v50 )
            sub_140001660(v82.m128i_i64[0], v50, 1);
          v44 += 24;
          if ( v51 + 24 == v49 )
          {
            v44 = v49;
            break;
          }
        }
      }
      v58.m256i_i64[1] = v44;
      sub_140383620(&v58);
    }
    *(_OWORD *)a1 = -1;
    goto LABEL_80;
  }
  v18 = 32LL * *(_QWORD *)&v54[16];
  v19 = 0;
  do
  {
    v20 = *(_QWORD *)(v17 + v19);
    if ( v20 )
      sub_140001660(*(_QWORD *)(v17 + v19 + 8), v20, 1);
    v19 += 32;
  }
  while ( v18 != v19 );
  if ( v16 )
  {
    v16 *= 32;
    sub_140001660(v17, v16, 8);
  }
  *(_QWORD *)&v84 = a2;
  *((_QWORD *)&v84 + 1) = a3;
  *(_QWORD *)v85 = a6;
  LOBYTE(v14) = 1;
  LOBYTE(v15) = 1;
  sub_140BD84F0((__int128 *)v54, (__int64)a3, v14, v15, (__int64)aRouteronRollba, 17);
  v10 = *(_QWORD *)v54;
  v65 = *(__m256i *)&v54[8];
  v66 = *(_OWORD *)&v54[40];
  v67 = *(_OWORD *)&v54[56];
  v68 = *(_OWORD *)&v54[72];
  v69 = *(_OWORD *)&v54[88];
  if ( *(_QWORD *)v54 != -1 )
  {
    *(_QWORD *)(a1 + 88) = v69;
    *(_OWORD *)(a1 + 72) = v68;
    si128 = _mm_load_si128((const __m128i *)&v65);
    v22 = *(_OWORD *)&v65.m256i_u64[2];
    v23 = v66;
    v24 = v67;
LABEL_14:
    *(_OWORD *)(a1 + 56) = v24;
    *(_OWORD *)(a1 + 40) = v23;
    *(_OWORD *)(a1 + 24) = v22;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = v10;
    return v10;
  }
  v58 = v65;
  v62 = v69;
  v61 = v68;
  v60 = v67;
  v59 = v66;
  v86 = v65.m256i_i64[0];
  if ( v65.m256i_i64[0] == 2 )
  {
    v63 = *(_OWORD *)&v65.m256i_u64[1];
    v64 = v65.m256i_i64[3];
    *(_OWORD *)&v54[48] = v69;
    *(_OWORD *)&v54[32] = v68;
    *(_OWORD *)&v54[16] = v67;
    *(_OWORD *)v54 = v66;
    *(_QWORD *)&v71[16] = v65.m256i_i64[3];
    *(_OWORD *)v71 = *(_OWORD *)&v65.m256i_u64[1];
    v78 = nullptr;
    v79 = 8;
    v80 = 0;
    LOBYTE(v16) = 1;
  }
  else
  {
    *(_OWORD *)&v85[64] = v69;
    *(_OWORD *)&v85[48] = v68;
    *(_OWORD *)&v85[32] = v67;
    *(_OWORD *)&v85[16] = v66;
    *(_OWORD *)v85 = *(_OWORD *)&v65.m256i_u64[2];
    v84 = *(_OWORD *)v65.m256i_i8;
    v88[3] = 0;
    sub_140C1E360((__int64)v54, (__int64)&v84);
    v10 = *(_QWORD *)v54;
    v73 = *(__m256i *)&v54[8];
    v74 = *(_OWORD *)&v54[40];
    v75 = *(_OWORD *)&v54[56];
    v76 = *(_OWORD *)&v54[72];
    v77 = *(_QWORD *)&v54[88];
    if ( *(_QWORD *)v54 != -1 )
    {
      *(_QWORD *)(a1 + 88) = v77;
      *(_OWORD *)(a1 + 72) = v76;
      si128 = _mm_load_si128((const __m128i *)&v73);
      v22 = *(_OWORD *)&v73.m256i_u64[2];
      v23 = v74;
      v24 = v75;
      goto LABEL_14;
    }
    v63 = v76;
    v64 = v77;
    *(_OWORD *)&v54[48] = v75;
    *(_OWORD *)&v54[32] = v74;
    *(__m256i *)v54 = v73;
    *(_QWORD *)&v71[16] = v77;
    *(_OWORD *)v71 = v76;
    v88[2] = 0;
    v88[1] = 1;
    sub_1403F1200(&v78, &v63);
    LODWORD(v16) = 0;
  }
  v34 = *(_OWORD *)v71;
  v35 = *(_QWORD *)&v71[16];
  v87 = v16;
  if ( *(_QWORD *)v54 != 1 || !v54[56] )
  {
    sub_140D1EE10((unsigned int)&v84, *(_DWORD *)&v71[8], *(_DWORD *)&v71[16], (unsigned int)&unk_141A4AB0B, 3);
    v73.m256i_i64[2] = *(_QWORD *)v85;
    *(_OWORD *)v73.m256i_i8 = v84;
    *(_QWORD *)&v84 = &v73;
    *((_QWORD *)&v84 + 1) = sub_1400015F0;
    sub_1416ABFD0(&v81, &unk_141A4D4A6, &v84);
    if ( v73.m256i_i64[0] )
      sub_140001660(v73.m256i_i64[1], v73.m256i_i64[0], 1);
    v36 = v81;
    v53 = v82;
    if ( v35 )
    {
      v37 = (_QWORD *)(*((_QWORD *)&v34 + 1) + 8LL);
      do
      {
        v38 = *(v37 - 1);
        if ( v38 )
          sub_140001660(*v37, v38, 1);
        v37 += 3;
        --v35;
      }
      while ( v35 );
    }
    if ( (_QWORD)v34 )
      sub_140001660(*((_QWORD *)&v34 + 1), 24 * v34, 8);
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v53);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = v36;
    LOBYTE(v16) = v87;
    goto LABEL_50;
  }
  if ( !(_BYTE)v16 )
  {
    v70 = *(_QWORD *)&v71[8];
    v72 = *(_QWORD *)v71;
    sub_1403FAE40(v71);
    if ( v72 )
      sub_140001660(v70, 24 * v72, 8);
    *(_QWORD *)v83 = -1;
    LOBYTE(v16) = v87;
    goto LABEL_62;
  }
  *(_OWORD *)&v83[8] = *(_OWORD *)&v71[8];
  *(_QWORD *)v83 = *(_QWORD *)v71;
  if ( *(_QWORD *)v71 == -1 )
  {
LABEL_62:
    if ( v80 )
    {
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        sub_140D1EE10((unsigned int)&v84, v79, v80, (unsigned int)&unk_141A4AB0B, 3);
        v73.m256i_i64[2] = *(_QWORD *)v85;
        *(_OWORD *)v73.m256i_i8 = v84;
        v81 = &v73;
        v82.m128i_i64[0] = (__int64)sub_1400015F0;
        *(_QWORD *)&v84 = aCodexmateLibCo_36;
        *((_QWORD *)&v84 + 1) = 35;
        *(_QWORD *)v85 = aCodexmateLibCo_36;
        *(_QWORD *)&v85[8] = 35;
        *(_QWORD *)&v85[16] = &off_141A4AF58;
        sub_140BAD520(&unk_141A4AF00, &v81, 2, &v84);
        LOBYTE(v16) = v87;
        if ( v73.m256i_i64[0] )
          sub_140001660(v73.m256i_i64[1], v73.m256i_i64[0], 1);
      }
    }
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v83[16];
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)v83);
    *(_QWORD *)a1 = -1;
    sub_140025530(&v78);
    goto LABEL_67;
  }
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    sub_140D1EE10((unsigned int)&v84, *(_DWORD *)&v83[8], *(_DWORD *)&v83[16], (unsigned int)&unk_141A4AB0B, 3);
    v73.m256i_i64[2] = *(_QWORD *)v85;
    *(_OWORD *)v73.m256i_i8 = v84;
    v81 = &v73;
    v82.m128i_i64[0] = (__int64)sub_1400015F0;
    *(_QWORD *)&v84 = aCodexmateLibCo_36;
    *((_QWORD *)&v84 + 1) = 35;
    *(_QWORD *)v85 = aCodexmateLibCo_36;
    *(_QWORD *)&v85[8] = 35;
    *(_QWORD *)&v85[16] = &off_141A4AEE8;
    sub_140BAD520(&unk_141A4AE80, &v81, 2, &v84);
    if ( v73.m256i_i64[0] )
      sub_140001660(v73.m256i_i64[1], v73.m256i_i64[0], 1);
    LOBYTE(v16) = v87;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v83[16];
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)v83);
  *(_QWORD *)a1 = -1;
LABEL_50:
  v39 = v79;
  v40 = v80;
  if ( v80 )
  {
    v41 = (_QWORD *)(v79 + 8);
    do
    {
      v42 = *(v41 - 1);
      if ( v42 )
        sub_140001660(*v41, v42, 1);
      v41 += 3;
      --v40;
    }
    while ( v40 );
  }
  if ( v78 )
    sub_140001660(v39, 24LL * (_QWORD)v78, 8);
LABEL_67:
  sub_140BAD350(v54);
  LOBYTE(v10) = v86 != 2;
  if ( ((unsigned __int8)v16 & (v86 != 2)) != 0 )
    LOBYTE(v10) = sub_140CE7050(&v58);
  return v10;
}
