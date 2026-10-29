// win 1.2.7 | module src/core/analytics/threads.rs | ea 0x14035c040 | name sub_14035C040
// win 1.2.7 | module src/core/analytics/threads.rs | attributed via panic-Location xref (win-native)
char *__fastcall sub_14035C040(char *a1, __int64 a2, char *a3, __int64 a4)
{
  char *v4; // rsi
  void *v5; // rax
  unsigned int v8; // edx
  int v9; // r10d
  int v10; // edi
  int v11; // edx
  unsigned __int8 v12; // r11
  int v13; // ebx
  int v14; // edi
  __int64 v15; // rax
  volatile signed __int64 *v16; // rcx
  __int64 v17; // rt0
  char v18; // of
  __int64 v19; // r13
  __int64 *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int8 v24; // bl
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int128 v32; // xmm5
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  int v37; // eax
  char *v38; // rdi
  char v39; // al
  __int128 v40; // kr00_16
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  int v44; // r13d
  __int64 v45; // r12
  unsigned int v46; // r14d
  _DWORD *v47; // r14
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  int v55; // edx
  __int64 v56; // rcx
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int64 v60; // rcx
  unsigned int v61; // eax
  __m128 v62; // [rsp+30h] [rbp-50h]
  __int128 v63; // [rsp+40h] [rbp-40h]
  __int128 v64; // [rsp+50h] [rbp-30h] BYREF
  __int128 v65; // [rsp+60h] [rbp-20h]
  __int128 v66; // [rsp+70h] [rbp-10h]
  __int128 v67; // [rsp+80h] [rbp+0h]
  __int128 v68; // [rsp+90h] [rbp+10h]
  __int128 v69; // [rsp+A0h] [rbp+20h]
  __int64 v70; // [rsp+B0h] [rbp+30h]
  unsigned __int8 v71; // [rsp+B8h] [rbp+38h]
  _DWORD v72[3]; // [rsp+B9h] [rbp+39h]
  _BYTE v73[96]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v74; // [rsp+128h] [rbp+A8h]
  unsigned __int8 v75; // [rsp+130h] [rbp+B0h]
  _DWORD v76[55]; // [rsp+131h] [rbp+B1h]
  _QWORD v77[2]; // [rsp+210h] [rbp+190h] BYREF
  __m256i v78; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v79; // [rsp+240h] [rbp+1C0h]
  __int128 v80; // [rsp+250h] [rbp+1D0h]
  __int128 v81; // [rsp+260h] [rbp+1E0h]
  __int128 v82; // [rsp+270h] [rbp+1F0h]
  __int128 v83; // [rsp+280h] [rbp+200h]
  __int128 v84; // [rsp+290h] [rbp+210h] BYREF
  int v85; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v86; // [rsp+2A4h] [rbp+224h]
  unsigned int v87; // [rsp+2ACh] [rbp+22Ch]
  __int64 v88; // [rsp+2B0h] [rbp+230h]
  __int64 v89; // [rsp+2B8h] [rbp+238h]
  __int64 v90; // [rsp+2C0h] [rbp+240h]
  unsigned __int64 v91; // [rsp+2C8h] [rbp+248h] BYREF
  __int128 v92; // [rsp+2D0h] [rbp+250h] BYREF
  __m512i v93; // [rsp+2E0h] [rbp+260h]
  __int128 v94; // [rsp+320h] [rbp+2A0h]
  __int64 v95; // [rsp+330h] [rbp+2B0h]
  int v96; // [rsp+33Ch] [rbp+2BCh]
  volatile signed __int64 *v97; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v98; // [rsp+348h] [rbp+2C8h]
  unsigned int v99; // [rsp+354h] [rbp+2D4h]
  _BYTE v100[3]; // [rsp+35Bh] [rbp+2DBh] BYREF
  char v101; // [rsp+35Eh] [rbp+2DEh]
  char v102; // [rsp+35Fh] [rbp+2DFh]
  __int64 v103; // [rsp+360h] [rbp+2E0h]

  v103 = -2;
  v4 = a1;
  if ( (unsigned __int64)(a4 - 129) <= 0xFFFFFFFFFFFFFF7FuLL )
  {
LABEL_2:
    nullsub_1(a1);
    v5 = (void *)sub_140001650(23, 1);
    if ( !v5 )
      sub_141938D2B(1, 23);
    qmemcpy(v5, "invalid thread identity", 23);
    *((_QWORD *)v4 + 1) = 9;
    *((_QWORD *)v4 + 2) = 23;
    *((_QWORD *)v4 + 3) = v5;
    *((_QWORD *)v4 + 4) = 23;
    *(_QWORD *)v4 = 2;
    return v4;
  }
  a1 = a3;
  while ( a1 != &a3[a4] )
  {
    v8 = (unsigned __int8)*a1;
    if ( *a1 < 0 )
    {
      v9 = v8 & 0x1F;
      v10 = a1[1] & 0x3F;
      if ( (unsigned __int8)v8 <= 0xDFu )
      {
        a1 += 2;
        v8 = v10 | (v9 << 6);
        if ( v8 < 0x20 )
          goto LABEL_2;
      }
      else
      {
        v11 = (v10 << 6) | a1[2] & 0x3F;
        if ( (unsigned __int8)*a1 < 0xF0u )
        {
          a1 += 3;
          v8 = (v9 << 12) | v11;
          if ( v8 < 0x20 )
            goto LABEL_2;
        }
        else
        {
          v12 = a1[3];
          a1 += 4;
          v8 = ((v9 & 7) << 18) | (v11 << 6) | v12 & 0x3F;
          if ( v8 < 0x20 )
            goto LABEL_2;
        }
      }
    }
    else
    {
      ++a1;
      if ( v8 < 0x20 )
        goto LABEL_2;
    }
    if ( v8 - 127 < 0x21 )
      goto LABEL_2;
  }
  v13 = (int)a3;
  v14 = a4;
  v100[0] = 0;
  v15 = sub_140F81EA0(a2);
  *(_QWORD *)v73 = v15;
  v16 = *(volatile signed __int64 **)(v15 + 24);
  v17 = _InterlockedIncrement64(v16);
  if ( (v17 < 0) ^ v18 | (v17 == 0) )
    BUG();
  v19 = *(_QWORD *)(v15 + 24);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v15) )
    sub_1409E6120(v73);
  v97 = (volatile signed __int64 *)v19;
  LOBYTE(v16) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v19 + 16), 1, 0) )
    sub_141937480((volatile void *)(v19 + 16));
  v20 = off_1421E7210;
  v21 = 2 * *off_1421E7210;
  v88 = v19 + 16;
  if ( v21 )
  {
    v61 = sub_141938160(v16);
    LOBYTE(v61) = v61 ^ 1;
    v99 = v61;
  }
  else
  {
    v99 = 0;
  }
  sub_140F7EB70((__int64)v73, a2);
  if ( v75 == 255 )
  {
    v94 = *(_OWORD *)&v73[80];
    v28 = *(_OWORD *)&v73[64];
    v93 = *(__m512i *)&v73[16];
    v29 = *(_OWORD *)v73;
    v30 = *(_OWORD *)&v73[16];
    v31 = *(_OWORD *)&v73[32];
    v32 = *(_OWORD *)&v73[48];
    v92 = *(_OWORD *)v73;
    *(_OWORD *)(v4 + 88) = *(_OWORD *)&v73[80];
    *(_OWORD *)(v4 + 72) = v28;
    *(_OWORD *)(v4 + 56) = v32;
    *(_OWORD *)(v4 + 40) = v31;
    *(_OWORD *)(v4 + 24) = v30;
    *(_OWORD *)(v4 + 8) = v29;
    *(_QWORD *)v4 = 2;
    goto LABEL_37;
  }
  v95 = v74;
  v94 = *(_OWORD *)&v73[80];
  v93 = *(__m512i *)&v73[16];
  v92 = *(_OWORD *)v73;
  v72[0] = v76[0];
  *(_DWORD *)((char *)v72 + 3) = *(_DWORD *)((char *)v76 + 3);
  v70 = v74;
  v69 = *(_OWORD *)&v73[80];
  v68 = *(_OWORD *)&v73[64];
  v67 = *(_OWORD *)&v73[48];
  v66 = *(_OWORD *)&v73[32];
  v65 = *(_OWORD *)&v73[16];
  v64 = *(_OWORD *)v73;
  v71 = v75;
  sub_1414039F0(v73, &v64, *(&off_1419EBA50 + v75), qword_1419EBA68[v75]);
  if ( *(_QWORD *)v73 == -1 )
  {
    v100[2] = 1;
    sub_140F81000((__int64)v73, a2, (__int64)&v64);
    v33 = *(_QWORD *)v73;
    v92 = *(_OWORD *)&v73[8];
    *(_OWORD *)v93.m512i_i8 = *(_OWORD *)&v73[24];
    *(_OWORD *)&v93.m512i_u64[2] = *(_OWORD *)&v73[40];
    *(_OWORD *)&v93.m512i_u64[4] = *(_OWORD *)&v73[56];
    if ( *(_QWORD *)v73 != -1 )
    {
      *((_QWORD *)v4 + 12) = *(_QWORD *)&v73[88];
      *((_OWORD *)v4 + 5) = *(_OWORD *)&v73[72];
      v34 = v92;
      v35 = *(_OWORD *)v93.m512i_i8;
      v36 = *(_OWORD *)&v93.m512i_u64[2];
      *((_OWORD *)v4 + 4) = *(_OWORD *)&v93.m512i_u64[4];
      *((_OWORD *)v4 + 3) = v36;
      *((_OWORD *)v4 + 2) = v35;
      *((_OWORD *)v4 + 1) = v34;
      *((_QWORD *)v4 + 1) = v33;
      *(_QWORD *)v4 = 2;
LABEL_32:
      if ( (unsigned __int64)v64 >= 0x7FFFFFFFFFFFFFFFLL )
        sub_141938FA0(&off_1419E6BC0);
      *(_QWORD *)&v64 = v64 + 1;
      v37 = sub_1417AF4A0(v65);
      *(_QWORD *)&v64 = v64 - 1;
      if ( !v37 )
      {
        sub_1414039F0(v73, &v64, aRollback_1, 8);
        if ( *(_QWORD *)v73 != -1 )
          sub_14029C280(v73);
      }
      goto LABEL_36;
    }
    v98 = v19;
    v81 = v92;
    v82 = *(_OWORD *)v93.m512i_i8;
    v83 = *(_OWORD *)&v93.m512i_u64[2];
    v84 = *(_OWORD *)&v93.m512i_u64[4];
    v102 = 1;
    v101 = 1;
    sub_140F7D200(v73, (__int64)&v64);
    v40 = *(_OWORD *)v73;
    if ( *(_QWORD *)v73 != -1 )
    {
      *(_OWORD *)(v4 + 88) = *(_OWORD *)&v73[80];
      v41 = *(_OWORD *)&v73[16];
      v42 = *(_OWORD *)&v73[32];
      v43 = *(_OWORD *)&v73[48];
      *(_OWORD *)(v4 + 72) = *(_OWORD *)&v73[64];
      *(_OWORD *)(v4 + 56) = v43;
      *(_OWORD *)(v4 + 40) = v42;
      *(_OWORD *)(v4 + 24) = v41;
      *(_OWORD *)(v4 + 8) = v40;
LABEL_52:
      *(_QWORD *)v4 = 2;
      v19 = v98;
      if ( (_QWORD)v82 != -1 && (_QWORD)v82 )
        sub_140001660(*((_QWORD *)&v82 + 1), v82, 1);
      goto LABEL_32;
    }
    v89 = *(_QWORD *)&v73[8];
    v77[0] = *(_QWORD *)&v73[8];
    v102 = 1;
    v101 = 1;
    sub_141407EE0(&v85);
    v44 = v85;
    v45 = (unsigned int)v86;
    v46 = v87;
    *(_DWORD *)v73 = v85;
    *(_QWORD *)&v73[4] = v86;
    v102 = 1;
    v101 = 1;
    sub_141406800(&v92, v73, v87);
    if ( !(_DWORD)v92 )
    {
      v102 = 1;
      v101 = 1;
      sub_141938FE0(aLocalTimeOutOf_0, 43, &off_1419E4D00);
    }
    v91 = __PAIR64__(v46, v92);
    v47 = (_DWORD *)(v98 + 24);
    if ( *(_DWORD *)(v98 + 24) == 2
      || (*(_QWORD *)v73 = v100,
          *(_QWORD *)&v73[8] = &v91,
          *(_QWORD *)&v73[16] = v77,
          *(_QWORD *)&v73[24] = (char *)&v84 + 8,
          v102 = 1,
          v101 = 1,
          !sub_1402B3660((__int64)v73, v98 + 24)) )
    {
      v48 = (v44 >> 13) - 1;
      v49 = 0;
      if ( v44 >> 13 <= 0 )
      {
        v50 = (1 - (v44 >> 13)) / 0x190u + 1;
        v48 += 400 * v50;
        v49 = -146097 * v50;
      }
      v102 = 1;
      v101 = 1;
      sub_14035E550(
        v73,
        &v64,
        v45
      + 86400LL
      * (int)(((v48 / 100) >> 2) + ((1461 * v48) >> 2) + v49 + (((unsigned int)v44 >> 4) & 0x1FF) - v48 / 100 - 719163));
      v51 = *(_QWORD *)v73;
      v92 = *(_OWORD *)&v73[8];
      v93.m512i_i64[0] = *(_QWORD *)&v73[24];
      if ( *(_QWORD *)v73 != -1 )
      {
        v52 = *(_OWORD *)&v73[32];
        v53 = *(_OWORD *)&v73[48];
        v54 = *(_OWORD *)&v73[64];
        *(_OWORD *)(v4 + 88) = *(_OWORD *)&v73[80];
        *(_OWORD *)(v4 + 72) = v54;
        *(_OWORD *)(v4 + 56) = v53;
        *(_OWORD *)(v4 + 40) = v52;
        *((_QWORD *)v4 + 4) = v93.m512i_i64[0];
        *((_OWORD *)v4 + 1) = v92;
        *((_QWORD *)v4 + 1) = v51;
        goto LABEL_52;
      }
      *(_OWORD *)v78.m256i_i8 = v92;
      v78.m256i_i64[2] = v93.m512i_i64[0];
      v100[1] = 1;
      v90 = sub_14167FC00();
      v96 = v55;
      v63 = v81;
      v62 = (__m128)v91;
      if ( *v47 != 2 )
      {
        v77[1] = v98 + 72;
        sub_140E8B6E0();
      }
      v56 = v98;
      *(_OWORD *)(v98 + 24) = v63;
      *(_QWORD *)(v56 + 40) = v90;
      *(_DWORD *)(v56 + 48) = v96;
      _mm_storel_ps((double *)(v56 + 56), v62);
      *(_QWORD *)(v56 + 64) = v89;
      *(_OWORD *)(v56 + 72) = *(_OWORD *)v78.m256i_i8;
      *(_QWORD *)(v56 + 88) = v78.m256i_i64[2];
    }
    v102 = 0;
    v101 = 1;
    sub_1402B5C00(&v78, &v64);
    if ( v78.m256i_i64[0] == -1 )
    {
      if ( *(_QWORD *)v47 == 2 )
      {
        v102 = 0;
        v101 = 1;
        sub_141938FE0(aThreadProjecti, 29, &off_1419E4D58);
      }
      v60 = *(_QWORD *)(v98 + 32);
      *(_QWORD *)&v81 = *(_QWORD *)v47;
      *((_QWORD *)&v81 + 1) = v60;
      *(_OWORD *)&v93.m512i_u64[5] = v84;
      *(_OWORD *)&v93.m512i_u64[3] = v83;
      *(_OWORD *)&v93.m512i_u64[1] = v82;
      *((_QWORD *)&v92 + 1) = v81;
      v93.m512i_i64[0] = v60;
      *(_QWORD *)&v92 = v47;
      v102 = 0;
      v101 = 0;
      sub_1402B45A0((unsigned int)v73, v13, v14, (_DWORD)v47, (__int64)&v92 + 8);
      sub_1418F44E0((__m128i *)v4, (const __m128i *)v73, 0x148u);
      sub_14029B090(&v64);
      sub_140028CC0(v88, v99);
      goto LABEL_41;
    }
    *(_OWORD *)&v93.m512i_u64[4] = v80;
    *(_OWORD *)&v93.m512i_u64[2] = v79;
    *(_OWORD *)v93.m512i_i8 = *(_OWORD *)&v78.m256i_u64[2];
    v92 = *(_OWORD *)v78.m256i_i8;
    v102 = 0;
    v101 = 1;
    sub_140F82200(v73, &v92);
    *(_OWORD *)(v4 + 88) = *(_OWORD *)&v73[80];
    *(_OWORD *)(v4 + 72) = *(_OWORD *)&v73[64];
    v57 = *(_OWORD *)v73;
    v58 = *(_OWORD *)&v73[16];
    v59 = *(_OWORD *)&v73[32];
    *(_OWORD *)(v4 + 56) = *(_OWORD *)&v73[48];
    *(_OWORD *)(v4 + 40) = v59;
    *(_OWORD *)(v4 + 24) = v58;
    *(_OWORD *)(v4 + 8) = v57;
    *(_QWORD *)v4 = 2;
    if ( (__int64)v82 > 0 )
      sub_140001660(*((_QWORD *)&v82 + 1), v82, 1);
    v19 = v98;
    goto LABEL_36;
  }
  *(_OWORD *)&v93.m512i_u64[4] = *(_OWORD *)&v73[48];
  *(_OWORD *)((char *)&v93.m512i_u64[2] + 1) = *(_OWORD *)&v73[33];
  *(_OWORD *)&v93.m512i_i8[1] = *(_OWORD *)&v73[17];
  v92 = *(_OWORD *)v73;
  v93.m512i_i8[0] = v73[16];
  *(_QWORD *)v73 = &v92;
  *(_QWORD *)&v73[8] = sub_141404740;
  sub_1416ABFD0(&v78, &unk_141A6499F, v73);
  v23 = v78.m256i_i64[0];
  v24 = v78.m256i_i8[8];
  *(_QWORD *)v73 = *(__int64 *)((char *)&v78.m256i_i64[1] + 1);
  *(_QWORD *)&v73[7] = v78.m256i_i64[2];
  sub_140E96F40(&v92);
  *(_OWORD *)(v4 + 88) = *(_OWORD *)&v73[63];
  v25 = *(_OWORD *)v73;
  v26 = *(_OWORD *)&v73[16];
  v27 = *(_OWORD *)&v73[32];
  *(_OWORD *)(v4 + 73) = *(_OWORD *)&v73[48];
  *(_OWORD *)(v4 + 57) = v27;
  *(_OWORD *)(v4 + 41) = v26;
  *(_OWORD *)(v4 + 25) = v25;
  *((_QWORD *)v4 + 1) = 10;
  *((_QWORD *)v4 + 2) = v23;
  v4[24] = v24;
  *(_QWORD *)v4 = 2;
LABEL_36:
  sub_14029B090(&v64);
LABEL_37:
  v38 = (char *)(v19 + 16);
  if ( !(_BYTE)v99 && 2 * *v20 && !(unsigned __int8)sub_141938160(v22) )
    *(_BYTE *)(v19 + 17) = 1;
  v39 = *v38;
  *v38 = 0;
  if ( v39 == 2 )
    WakeByAddressSingle((PVOID)(v19 + 16));
LABEL_41:
  if ( !_InterlockedDecrement64(v97) )
    sub_1409E50F0(&v97);
  return v4;
}
