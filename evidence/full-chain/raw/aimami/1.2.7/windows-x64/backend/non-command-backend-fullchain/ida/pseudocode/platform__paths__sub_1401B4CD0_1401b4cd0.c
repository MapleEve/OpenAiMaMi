// win 1.2.7 | module src/platform/paths.rs | ea 0x1401b4cd0 | name sub_1401B4CD0
// win 1.2.7 | module src/platform/paths.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401B4CD0(unsigned __int128 *a1, __int64 a2, __int64 a3, char a4)
{
  int v7; // edx
  int v8; // esi
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r15
  unsigned int v12; // r12d
  unsigned __int128 v13; // rax
  char v14; // bl
  __int64 v15; // rsi
  char v16; // bl
  __int64 v17; // r13
  __int32 v18; // edx
  unsigned __int8 v19; // r12
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  __int32 v22; // r13d
  unsigned __int64 v23; // rbx
  __int64 v24; // r15
  __int32 v25; // ecx
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  __m128i si128; // xmm6
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  int v37; // ecx
  unsigned __int128 v38; // xmm0
  unsigned __int128 v39; // xmm1
  unsigned __int128 *v40; // rcx
  unsigned __int128 v41; // xmm0
  unsigned __int128 v42; // xmm1
  __int64 result; // rax
  _QWORD *v44; // rsi
  __int64 v45; // rdx
  unsigned __int128 *v46; // rcx
  _BYTE v47[27]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v48; // [rsp+50h] [rbp-30h]
  __int64 v49; // [rsp+58h] [rbp-28h]
  unsigned __int64 v50; // [rsp+60h] [rbp-20h]
  __int128 v51; // [rsp+68h] [rbp-18h] BYREF
  __int128 v52; // [rsp+78h] [rbp-8h]
  int v53; // [rsp+88h] [rbp+8h]
  unsigned __int8 v54; // [rsp+8Ch] [rbp+Ch]
  _BYTE v55[59]; // [rsp+8Dh] [rbp+Dh]
  __int64 v56; // [rsp+C8h] [rbp+48h]
  char v57; // [rsp+D0h] [rbp+50h]
  _BYTE v58[7]; // [rsp+D1h] [rbp+51h]
  __int64 v59; // [rsp+D8h] [rbp+58h]
  __int64 v60; // [rsp+E0h] [rbp+60h]
  unsigned __int128 *v61; // [rsp+E8h] [rbp+68h]
  unsigned __int128 v62; // [rsp+F0h] [rbp+70h]
  unsigned __int128 v63; // [rsp+100h] [rbp+80h]
  unsigned __int128 v64; // [rsp+110h] [rbp+90h] BYREF
  __m128i v65[2]; // [rsp+120h] [rbp+A0h]
  __int64 v66; // [rsp+148h] [rbp+C8h]
  __m256i v67; // [rsp+150h] [rbp+D0h] BYREF
  __m256i v68; // [rsp+170h] [rbp+F0h]
  _BYTE v69[80]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v70; // [rsp+1E0h] [rbp+160h]
  __int64 v71; // [rsp+1F0h] [rbp+170h]
  char v72; // [rsp+1F8h] [rbp+178h]
  _DWORD v73[3]; // [rsp+1F9h] [rbp+179h]
  __int64 v74; // [rsp+208h] [rbp+188h]
  char v75; // [rsp+217h] [rbp+197h] BYREF
  __int64 v76; // [rsp+218h] [rbp+198h]
  __m256i v77; // [rsp+220h] [rbp+1A0h] BYREF
  __m256i v78; // [rsp+240h] [rbp+1C0h]
  __int32 v79; // [rsp+264h] [rbp+1E4h]
  __int64 v80; // [rsp+268h] [rbp+1E8h]

  v80 = -2;
  v61 = a1;
  v8 = 0;
  if ( (sub_1401B6C20(a2, a3) & 1) != 0 )
    v8 = v7;
  v60 = a2;
  v59 = a3;
  sub_141695A00(v69, a2, a3);
  if ( *(_DWORD *)v69 == 2 )
  {
    if ( (v69[8] & 3u) - 2 >= 2 && (v69[8] & 3) != 0 )
    {
      --*(_QWORD *)&v69[8];
      v69[0] = 3;
      sub_1416BCB00(&v69[8]);
    }
    v9 = 27111902;
    v10 = -717324288;
  }
  else
  {
    v10 = *(_DWORD *)&v69[48];
    v9 = *(unsigned int *)&v69[52];
  }
  sub_141682570((unsigned int)&v51, v60, v59, (unsigned int)&unk_1419D87CA, 10);
  v66 = *((_QWORD *)&v51 + 1);
  sub_141695A00(v69, *((_QWORD *)&v51 + 1), v52);
  if ( *(_DWORD *)v69 == 2 )
  {
    if ( (v69[8] & 3u) - 2 >= 2 && (v69[8] & 3) != 0 )
    {
      --*(_QWORD *)&v69[8];
      v69[0] = 3;
      sub_1416BCB00(&v69[8]);
    }
    v11 = 27111902;
    v12 = -717324288;
  }
  else
  {
    v12 = *(_DWORD *)&v69[48];
    v11 = *(unsigned int *)&v69[52];
  }
  if ( ((v11 << 32) | v12) < ((v9 << 32) | v10) )
  {
    v12 = v10;
    LODWORD(v11) = v9;
  }
  if ( (_QWORD)v51 )
    sub_140001660(v66, v51, 1);
  *(_QWORD *)&v51 = __PAIR64__(v11, v12);
  sub_141683E30(v69, &v51, 3577643008LL, 27111902);
  v13 = 0u;
  if ( !v69[0] )
    v13 = *(unsigned int *)&v69[16] + *(unsigned __int64 *)&v69[8] * (unsigned __int128)0x3B9ACA00uLL;
  LODWORD(v64) = v8;
  WORD2(v64) = 256;
  v63 = 0;
  v62 = v13;
  BYTE6(v64) = a4;
  v14 = 1;
  while ( 1 )
  {
    LOBYTE(v66) = v14;
    sub_140189230(v69, v60, v59, 32769);
    v15 = *(_QWORD *)v69;
    v16 = v69[24];
    v17 = *(_QWORD *)&v69[16];
    v18 = *(_DWORD *)&v69[32];
    v19 = v69[36];
    *(_OWORD *)v77.m256i_i8 = *(_OWORD *)&v69[37];
    *(_OWORD *)((char *)&v77.m256i_u64[1] + 3) = *(_OWORD *)&v69[48];
    if ( v72 != -1 )
      break;
    v65[0] = *(__m128i *)v77.m256i_i8;
    *(__m128i *)((char *)v65 + 11) = _mm_loadu_si128((const __m128i *)((char *)&v77.m256i_u64[1] + 3));
    LOBYTE(v21) = v69[24];
    v20 = *(_QWORD *)&v69[8];
    if ( *(_QWORD *)v69 == -1 )
      goto LABEL_106;
    v23 = *(_QWORD *)&v69[24] & 0xFFFFFFFFFFFFFF00uLL;
    if ( !__OFSUB__(-*(_QWORD *)v69, 1) )
      goto LABEL_94;
LABEL_89:
    if ( v19 > 0xEu )
      goto LABEL_94;
    v37 = 28952;
    if ( !_bittest(&v37, v19) || (_BYTE)v66 == 3 )
      goto LABEL_94;
    *(_QWORD *)v69 = 0x8000000000000000uLL;
    *(_QWORD *)&v69[8] = v20;
    *(_QWORD *)&v69[16] = v17;
    *(_QWORD *)&v69[24] = (unsigned __int8)v21 | v23;
    *(_DWORD *)&v69[32] = v18;
    v69[36] = v19;
    *(__m128i *)&v69[48] = *(__m128i *)((char *)v65 + 11);
    *(__m128i *)&v69[37] = v65[0];
    sub_141696800(0, 25000000);
    v14 = v66 + 1;
    sub_140193AA0(v69);
    if ( (unsigned __int8)v14 > 3u )
    {
      v41 = v62;
      v42 = v63;
      result = (__int64)v61;
      v61[2] = v64;
      *(_OWORD *)(result + 16) = v42;
      *(_OWORD *)result = v41;
      return result;
    }
  }
  v56 = v71;
  *(_OWORD *)&v55[43] = v70;
  *(_OWORD *)&v55[27] = *(_OWORD *)&v69[64];
  *(_DWORD *)&v58[3] = *(_DWORD *)((char *)v73 + 3);
  *(_DWORD *)v58 = v73[0];
  v51 = *(_OWORD *)v69;
  v52 = *(_OWORD *)&v69[16];
  v53 = *(_DWORD *)&v69[32];
  v54 = v69[36];
  *(_OWORD *)&v55[11] = *(_OWORD *)((char *)&v77.m256i_u64[1] + 3);
  *(_OWORD *)v55 = *(_OWORD *)v77.m256i_i8;
  v57 = v72;
  sub_141403910(v69, &v51, 0, 75000000);
  v15 = *(_QWORD *)v69;
  if ( *(_QWORD *)v69 == -1 )
  {
    sub_1401C6270(v69, &v51, aPragmaTableInf, 26);
    v15 = *(_QWORD *)&v69[8];
    v24 = *(_QWORD *)&v69[24];
    v20 = *(_QWORD *)&v69[16];
    v21 = *(_QWORD *)&v69[32];
    v25 = *(_DWORD *)&v69[40];
    v19 = v69[44];
    *(_OWORD *)v67.m256i_i8 = *(_OWORD *)&v69[45];
    *(_OWORD *)((char *)&v67.m256i_u64[1] + 3) = *(_OWORD *)&v69[56];
    if ( v69[0] )
    {
      *(_OWORD *)&v47[11] = *(_OWORD *)((char *)&v67.m256i_u64[1] + 3);
      *(_OWORD *)v47 = *(_OWORD *)v67.m256i_i8;
      if ( *(_QWORD *)&v69[8] == -1 )
        goto LABEL_35;
    }
    else
    {
      v77 = *(__m256i *)&v69[8];
      v78.m256i_i32[0] = *(_DWORD *)&v69[40];
      v78.m256i_i8[4] = v69[44];
      *(_OWORD *)&v78.m256i_u64[2] = *(_OWORD *)((char *)&v67.m256i_u64[1] + 3);
      *(_OWORD *)&v78.m256i_u8[5] = *(_OWORD *)v67.m256i_i8;
      v26 = sub_1417A9630(*(__int64 *)((char *)&v67.m256i_i64[2] + 3));
      v24 = v26;
      if ( !v26 )
      {
        sub_1403D01E0(v69, &v77, 0);
        v24 = *(_QWORD *)&v69[8];
        v20 = *(_QWORD *)v69;
        v21 = *(_QWORD *)&v69[16];
        sub_140193C30(&v77);
LABEL_35:
        v48 = v20;
        v49 = v24;
        v50 = v21;
        if ( v21 )
        {
          v76 = v20;
          v27 = 24 * v21;
          v28 = 0;
          do
          {
            if ( *(_QWORD *)(v24 + v28 + 16) == 13
              && !(**(_QWORD **)(v24 + v28 + 8) ^ 0x5F79636E65636572LL
                 | *(_QWORD *)(*(_QWORD *)(v24 + v28 + 8) + 5LL) ^ 0x736D5F74615F7963LL) )
            {
              v16 = 2;
              goto LABEL_47;
            }
            v28 += 24;
          }
          while ( v27 != v28 );
          v29 = 0;
          do
          {
            if ( *(_QWORD *)(v24 + v29 + 16) == 13
              && !(**(_QWORD **)(v24 + v29 + 8) ^ 0x5F64657461647075LL
                 | *(_QWORD *)(*(_QWORD *)(v24 + v29 + 8) + 5LL) ^ 0x736D5F74615F6465LL) )
            {
              v16 = 1;
              goto LABEL_47;
            }
            v29 += 24;
          }
          while ( v27 != v29 );
          v16 = 0;
LABEL_47:
          v30 = 0;
          do
          {
            if ( *(_QWORD *)(v24 + v30 + 16) == 13
              && !(**(_QWORD **)(v24 + v30 + 8) ^ 0x5F64657461647075LL
                 | *(_QWORD *)(*(_QWORD *)(v24 + v30 + 8) + 5LL) ^ 0x736D5F74615F6465LL) )
            {
              sub_1401C6270(v69, &v51, aSelectCoalesce_2, 51);
              v77 = *(__m256i *)&v69[8];
              v78 = *(__m256i *)&v69[40];
              if ( *(_DWORD *)v69 == 1 )
              {
                v68 = v78;
                v67 = v77;
              }
              else
              {
                *(__m256i *)&v69[32] = v78;
                *(__m256i *)v69 = v77;
                sub_140E92CA0(&v67, v69);
                sub_140193C30(v69);
              }
              v32 = v67.m256i_u64[1];
              v15 = v67.m256i_i64[0];
              if ( v67.m256i_i64[0] != -1 )
              {
                v74 = v67.m256i_i64[1];
                goto LABEL_66;
              }
              goto LABEL_69;
            }
            v30 += 24;
          }
          while ( v27 != v30 );
          v31 = 0;
          while ( *(_QWORD *)(v24 + v31 + 16) != 10
               || **(_QWORD **)(v24 + v31 + 8) ^ 0x5F64657461647075LL
                | *(unsigned __int16 *)(*(_QWORD *)(v24 + v31 + 8) + 8LL) ^ 0x7461LL )
          {
            v31 += 24;
            if ( v27 == v31 )
            {
              v32 = 0;
              goto LABEL_69;
            }
          }
          sub_1401C6270(v69, &v51, aSelectCoalesce_1, 48);
          v77 = *(__m256i *)&v69[8];
          v78 = *(__m256i *)&v69[40];
          if ( *(_DWORD *)v69 == 1 )
          {
            v68 = v78;
            v67 = v77;
          }
          else
          {
            *(__m256i *)&v69[32] = v78;
            *(__m256i *)v69 = v77;
            sub_140E92DC0(&v67, v69);
            sub_140193C30(v69);
          }
          v15 = v67.m256i_i64[0];
          if ( v67.m256i_i64[0] != -1 )
          {
            v74 = v67.m256i_i64[1];
LABEL_66:
            si128 = _mm_load_si128((const __m128i *)&v67.m256i_u64[2]);
            v79 = v68.m256i_i32[0];
            v19 = v68.m256i_u8[4];
            v65[0] = *(__m128i *)&v68.m256i_u8[5];
            *(__m128i *)((char *)v65 + 11) = *(__m128i *)&v68.m256i_u64[2];
            v20 = v76;
LABEL_80:
            v35 = (_QWORD *)(v24 + 8);
            do
            {
              v36 = *(v35 - 1);
              if ( v36 )
                sub_140001660(*v35, v36, 1);
              v35 += 3;
              --v21;
            }
            while ( v21 );
            v21 = _mm_shuffle_epi32(si128, 238).m128i_u64[0];
            v76 = si128.m128i_i64[0];
            if ( v20 )
              sub_140001660(v24, 24 * v20, 8);
            v20 = v74;
            v25 = v79;
            goto LABEL_87;
          }
          v32 = 1000 * v67.m256i_i64[1];
          if ( !is_mul_ok(0x3E8u, v67.m256i_u64[1]) )
            v32 = ((unsigned __int64)v67.m256i_i64[1] >> 63) + 0x7FFFFFFFFFFFFFFFLL;
LABEL_69:
          v34 = 0;
          do
          {
            if ( *(_QWORD *)(v24 + v34 + 16) == 8 && **(_QWORD **)(v24 + v34 + 8) == 0x6465766968637261LL )
            {
              sub_1401C6270(v69, &v51, aSelectCountFro_3, 60);
              v77 = *(__m256i *)&v69[8];
              v78 = *(__m256i *)&v69[40];
              if ( *(_DWORD *)v69 != 1 )
              {
                *(__m256i *)&v69[32] = v78;
                *(__m256i *)v69 = v77;
                sub_140E92EE0(&v67, v69);
                sub_140193C30(v69);
                goto LABEL_78;
              }
              goto LABEL_76;
            }
            v34 += 24;
          }
          while ( v27 != v34 );
          sub_1401C6270(v69, &v51, aSelectCountFro_2, 28);
          v77 = *(__m256i *)&v69[8];
          v78 = *(__m256i *)&v69[40];
          if ( *(_DWORD *)v69 == 1 )
          {
LABEL_76:
            v68 = v78;
            v67 = v77;
            goto LABEL_78;
          }
          *(__m256i *)&v69[32] = v78;
          *(__m256i *)v69 = v77;
          sub_140E93000(&v67, v69);
          sub_140193C30(v69);
LABEL_78:
          v74 = v67.m256i_i64[1];
          v15 = v67.m256i_i64[0];
          v20 = v76;
          if ( v67.m256i_i64[0] != -1 )
          {
            si128 = _mm_load_si128((const __m128i *)&v67.m256i_u64[2]);
            v79 = v68.m256i_i32[0];
            v19 = v68.m256i_u8[4];
            v65[0] = *(__m128i *)&v68.m256i_u8[5];
            *(__m128i *)((char *)v65 + 11) = *(__m128i *)&v68.m256i_u64[2];
            goto LABEL_80;
          }
          v44 = (_QWORD *)(v24 + 8);
          do
          {
            v45 = *(v44 - 1);
            if ( v45 )
              sub_140001660(*v44, v45, 1);
            v44 += 3;
            --v21;
          }
          while ( v21 );
          v17 = v74;
        }
        else
        {
          v17 = 0;
          v16 = 0;
          v32 = 0;
        }
        if ( v20 )
          sub_140001660(v24, 24 * v20, 8);
        sub_1401923E0(&v51);
        v20 = v32;
LABEL_106:
        BYTE5(v64) = 2;
        *(_QWORD *)&v63 = v20;
        BYTE4(v64) = v16;
        *((_QWORD *)&v63 + 1) = v17;
        v46 = v61;
        *v61 = v62;
        v46[1] = v63;
        *((_DWORD *)v46 + 8) = v64;
        *((_WORD *)v46 + 18) = WORD2(v64);
        *(_QWORD *)((char *)v46 + 38) = *(_QWORD *)((char *)&v64 + 6);
        result = HIWORD(v64);
        *((_WORD *)v46 + 23) = HIWORD(v64);
        return result;
      }
      sub_140193C30(&v77);
      v15 = 0x8000000000000013uLL;
      v20 = 0;
    }
    *(__m128i *)((char *)v65 + 11) = *(__m128i *)&v47[11];
    v65[0] = _mm_load_si128((const __m128i *)v47);
    v76 = v24;
LABEL_87:
    v22 = v25;
  }
  else
  {
    v20 = *(_QWORD *)&v69[8];
    v21 = *(_QWORD *)&v69[24];
    v76 = *(_QWORD *)&v69[16];
    v22 = *(_DWORD *)&v69[32];
    v19 = v69[36];
    v65[0] = _mm_loadu_si128((const __m128i *)&v69[37]);
    *(__m128i *)((char *)v65 + 11) = *(__m128i *)&v69[48];
  }
  sub_1401923E0(&v51);
  v18 = v22;
  v17 = v76;
  v23 = v21 & 0xFFFFFFFFFFFFFF00uLL;
  if ( __OFSUB__(-v15, 1) )
    goto LABEL_89;
LABEL_94:
  *(_QWORD *)&v51 = v15;
  *((_QWORD *)&v51 + 1) = v20;
  *(_QWORD *)&v52 = v17;
  *((_QWORD *)&v52 + 1) = (unsigned __int8)v21 | v23;
  v53 = v18;
  v54 = v19;
  *(__m128i *)v55 = v65[0];
  *(__m128i *)&v55[11] = *(__m128i *)((char *)v65 + 11);
  BYTE5(v64) = !__OFSUB__(-v15, 1) || v19 != 9 && v19 != 22;
  if ( *(_QWORD *)off_1421E6EC0 > 1u )
  {
    v67.m256i_i64[0] = v60;
    v67.m256i_i64[1] = v59;
    v77.m256i_i64[0] = (__int64)&v67;
    v77.m256i_i64[1] = (__int64)sub_14169F630;
    v77.m256i_i64[2] = (__int64)&v64 + 5;
    v77.m256i_i64[3] = (__int64)sub_140287D10;
    v78.m256i_i64[0] = (__int64)&v51;
    v78.m256i_i64[1] = (__int64)sub_141404740;
    *(_QWORD *)&v69[48] = 2;
    *(_QWORD *)&v69[56] = aCodexmateLibPl;
    *(_QWORD *)&v69[64] = 30;
    *(_QWORD *)&v70 = &unk_1419D8680;
    *((_QWORD *)&v70 + 1) = &v77;
    *(_QWORD *)v69 = 0;
    *(_QWORD *)&v69[8] = aCodexmateLibPl;
    *(_OWORD *)&v69[16] = 0x1Eu;
    *(_QWORD *)&v69[32] = aSrcPlatformPat;
    *(_QWORD *)&v69[40] = 21;
    *(_QWORD *)&v69[72] = 0x12000000001LL;
    sub_1414D53A0(&v75, v69);
  }
  v38 = v62;
  v39 = v63;
  v40 = v61;
  v61[2] = v64;
  v40[1] = v39;
  *v40 = v38;
  return sub_140193AA0(&v51);
}
