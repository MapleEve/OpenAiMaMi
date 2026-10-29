// win 1.2.7 | module src/core/relay/dialects/mod.rs | ea 0x14102e380 | name sub_14102E380
// win 1.2.7 | module src/core/relay/dialects/mod.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14102E380(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  char v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  __int64 v17; // r15
  unsigned __int8 v18; // bl
  _DWORD *v19; // rax
  __int64 v20; // rcx
  __m128i *v21; // rax
  __int64 v22; // r13
  const __m128i *v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  const __m128i *v29; // r14
  __m128i *v30; // rax
  __m128i *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __m128i *v36; // rax
  const __m128i *v37; // r14
  __m128i *v38; // rax
  __int64 v39; // rbx
  bool v40; // r14
  unsigned __int64 v41; // rdx
  __m128i si128; // xmm0
  __m128i v43; // xmm1
  __m128i v44; // xmm2
  __m128i v45; // xmm3
  __m128i v46; // xmm4
  __m128i v47; // xmm5
  __m128i v48; // xmm6
  __int64 v49; // rdx
  __m128i v50; // xmm0
  __m128i v51; // xmm1
  __m128i v52; // xmm2
  __m128i v53; // xmm3
  __m128i v54; // xmm4
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  __m128i v57; // xmm2
  __m128i v58; // xmm3
  __m128i v59; // xmm4
  __m128i v60; // xmm5
  __m128i v61; // xmm6
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __m128i v64; // xmm2
  __m128i v65; // xmm3
  __m128i v66; // xmm4
  char v67; // r8
  int v68; // eax
  int v69; // edx
  int v70; // r9d
  int v71; // eax
  char v72; // bl
  __int8 v73; // bl
  __m128i v74; // xmm0
  __m128i v75; // xmm1
  void *v76; // r13
  __int64 v77; // rax
  __m128i v78; // xmm0
  _QWORD v80[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v81; // [rsp+38h] [rbp-48h]
  __m256i v82; // [rsp+40h] [rbp-40h] BYREF
  __int64 v83; // [rsp+60h] [rbp-20h] BYREF
  _DWORD *v84; // [rsp+68h] [rbp-18h]
  __int64 v85; // [rsp+70h] [rbp-10h]
  __m128i v86; // [rsp+78h] [rbp-8h] BYREF
  __int64 v87; // [rsp+88h] [rbp+8h]
  __m256i v88; // [rsp+90h] [rbp+10h] BYREF
  char v89; // [rsp+B2h] [rbp+32h]
  char v90; // [rsp+B3h] [rbp+33h]
  char v91; // [rsp+B4h] [rbp+34h]
  char v92; // [rsp+B5h] [rbp+35h]
  char v93; // [rsp+B6h] [rbp+36h]
  char v94; // [rsp+B7h] [rbp+37h]
  __m128i *v95; // [rsp+B8h] [rbp+38h]
  char v96; // [rsp+C7h] [rbp+47h]
  __int64 v97; // [rsp+C8h] [rbp+48h]

  v97 = -2;
  switch ( a3 )
  {
    case 0:
      v11 = a5;
      v13 = sub_140E91160(a4, a5);
      v16 = v14;
      if ( v14 < 0 )
      {
        v17 = 0;
        goto LABEL_6;
      }
      v95 = (__m128i *)v14;
      if ( !v14 )
      {
        v81 = 1;
        v40 = 0;
        v33 = a4;
        goto LABEL_75;
      }
      v29 = (const __m128i *)v13;
      nullsub_1(v15);
      v17 = 1;
      v30 = (__m128i *)sub_140001650(v16, 1);
      if ( !v30 )
LABEL_6:
        sub_141938D2B(v17, v16);
      v31 = v30;
      sub_1418F44E0(v30, v29, v16);
      if ( v16 < 8 )
      {
        v32 = 0;
        v33 = a4;
        goto LABEL_62;
      }
      v33 = a4;
      if ( v16 >= 0x20 )
      {
        v32 = v16 & 0x7FFFFFFFFFFFFFE0LL;
        v41 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
        v43 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
        v44 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
        do
        {
          v45 = _mm_loadu_si128(&v31[v41 / 0x10]);
          v46 = _mm_loadu_si128(&v31[v41 / 0x10 + 1]);
          v47 = _mm_add_epi8(v45, si128);
          v48 = _mm_add_epi8(v46, si128);
          v31[v41 / 0x10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v47, v43), v47), v44), v45);
          v31[v41 / 0x10 + 1] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v48, v43), v48), v44), v46);
          v41 += 32LL;
        }
        while ( v32 != v41 );
        if ( v16 == v32 )
        {
LABEL_64:
          v81 = (__int64)v31;
          if ( v16 < 4 || v31->m128i_i32[0] != 762605671 || v16 == 4 )
          {
            v40 = 0;
          }
          else
          {
            v67 = v31->m128i_i8[4];
            v68 = (unsigned __int8)v67;
            if ( v67 < 0 )
            {
              v69 = v67 & 0x1F;
              v70 = v31->m128i_i8[5] & 0x3F;
              if ( (unsigned __int8)v67 <= 0xDFu )
              {
                v68 = v70 | (v69 << 6);
              }
              else
              {
                v71 = (v70 << 6) | v31->m128i_i8[6] & 0x3F;
                if ( (unsigned __int8)v67 < 0xF0u )
                  v68 = (v69 << 12) | v71;
                else
                  v68 = ((v67 & 7) << 18) | (v71 << 6) | v31->m128i_i8[7] & 0x3F;
              }
            }
            v40 = (unsigned int)(v68 - 53) < 5;
          }
          v11 = a5;
LABEL_75:
          LOBYTE(v9) = sub_141042920(v33, v11);
          v72 = v40 | v9;
          if ( v95 )
            LOBYTE(v9) = sub_140001660(v81, v95, 1);
          if ( (v72 & 1) != 0 )
          {
            v9 = sub_141642800(a2, aReasoningEffor, 17);
            if ( v9 )
            {
              v73 = *(_BYTE *)v9;
              switch ( *(_BYTE *)v9 )
              {
                case 0:
                  break;
                case 1:
                  v88.m256i_i8[1] = *(_BYTE *)(v9 + 1);
                  break;
                case 2:
                  *(__m128i *)&v88.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v9 + 8));
                  break;
                case 3:
                  sub_1416AC440(&v88.m256i_u64[1], v9 + 8);
                  break;
                case 4:
                  sub_1403918C0(&v88.m256i_u64[1], *(_QWORD *)(v9 + 16), *(_QWORD *)(v9 + 24));
                  break;
                case 5:
                  sub_140E8D7E0(&v88.m256i_u64[1], v9 + 8);
                  break;
              }
              v88.m256i_i8[0] = v73;
              v94 = 1;
              v95 = (__m128i *)sub_141641AF0("reasoning_effort", 16, a1);
              sub_14002F9D0(v95);
              goto LABEL_86;
            }
          }
          return v9;
        }
        if ( (v16 & 0x18) == 0 )
        {
          do
          {
LABEL_62:
            v31->m128i_i8[v32] |= 32 * ((unsigned __int8)(v31->m128i_i8[v32] - 65) < 0x1Au);
            ++v32;
LABEL_63:
            ;
          }
          while ( v16 != v32 );
          goto LABEL_64;
        }
      }
      else
      {
        v32 = 0;
      }
      v49 = v32;
      v32 = v16 & 0x7FFFFFFFFFFFFFF8LL;
      v50 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
      v51 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
      v52 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
      do
      {
        v53 = _mm_loadl_epi64((__m128i *)((char *)v31 + v49));
        v54 = _mm_add_epi8(v53, v50);
        *(__int64 *)((char *)v31->m128i_i64 + v49) = _mm_or_si128(
                                                       _mm_andnot_si128(
                                                         _mm_cmpeq_epi8(_mm_max_epu8(v54, v51), v54),
                                                         v52),
                                                       v53).m128i_u64[0];
        v49 += 8;
      }
      while ( v32 != v49 );
      goto LABEL_63;
    case 1:
      LOBYTE(v5) = 1;
      v8 = 0;
      LOBYTE(v9) = sub_14102E130(a2);
      if ( (_BYTE)v9 != 2 )
        goto LABEL_8;
      return v9;
    case 2:
    case 4:
    case 5:
      v8 = 2;
      v5 = 0;
      LOBYTE(v9) = sub_14102E130(a2);
      if ( (_BYTE)v9 == 2 )
        return v9;
LABEL_8:
      v18 = v9;
      v86.m128i_i64[0] = 0;
      v87 = 0;
      nullsub_1(v10);
      v19 = (_DWORD *)sub_140001650(4, 1);
      if ( !v19 )
        sub_141938D2B(1, 4);
      *v19 = 1701869940;
      v83 = 4;
      v84 = v19;
      v85 = 4;
      nullsub_1(v20);
      v21 = (__m128i *)sub_140001650(8LL - v18, 1);
      v95 = v21;
      if ( !v21 )
        sub_141938D2B(1, 8LL - v18);
      v22 = (__int64)v21;
      v23 = (const __m128i *)aDisabled_0;
      if ( (v18 & 1) != 0 )
        v23 = (const __m128i *)aEnabled_8;
      sub_1418F44E0(v21, v23, 8LL - v18);
      v88.m256i_i8[0] = 3;
      v88.m256i_i64[1] = 8LL - v18;
      v88.m256i_i64[2] = v22;
      v88.m256i_i64[3] = v88.m256i_i64[1];
      sub_140E72AA0(&v82, &v86, &v83, &v88);
      if ( v82.m256i_i8[0] != -1 )
        sub_14002F9D0(&v82);
      *(__m128i *)&v88.m256i_u64[1] = v86;
      v88.m256i_i64[3] = v87;
      v88.m256i_i8[0] = 5;
      v93 = 1;
      v95 = (__m128i *)sub_141641AF0(aThinking_3, 8, a1);
      sub_14002F9D0(v95);
      v24 = _mm_loadu_si128((const __m128i *)&v88);
      v9 = (__int64)v95;
      v95[1] = _mm_loadu_si128((const __m128i *)&v88.m256i_u64[2]);
      *(__m128i *)v9 = v24;
      if ( (v18 & (unsigned __int8)v5) == 0 )
        return v9;
      goto LABEL_20;
    case 3:
      LOBYTE(v9) = sub_14102E130(a2);
      if ( (_BYTE)v9 == 2 )
        return v9;
      v88.m256i_i8[0] = 1;
      v88.m256i_i8[1] = v9;
      v92 = 1;
      v95 = (__m128i *)sub_141641AF0(aReasoningSplit, 15, a1);
      sub_14002F9D0(v95);
      goto LABEL_86;
    case 6:
      LOBYTE(v9) = sub_14102E130(a2);
      if ( !(_BYTE)v9 )
      {
        v86.m128i_i64[0] = 0;
        v87 = 0;
        nullsub_1(v25);
        v34 = sub_140001650(6, 1);
        if ( !v34 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v34 + 4) = 29810;
        *(_DWORD *)v34 = 1868981861;
        v83 = 6;
        v84 = (_DWORD *)v34;
        v85 = 6;
        nullsub_1(v35);
        v36 = (__m128i *)sub_140001650(4, 1);
        v95 = v36;
        if ( !v36 )
          sub_141938D2B(1, 4);
        v36->m128i_i32[0] = 1701736302;
        v88.m256i_i8[0] = 3;
        v88.m256i_i64[1] = 4;
        v88.m256i_i64[2] = (__int64)v36;
        v88.m256i_i64[3] = 4;
        sub_140E72AA0(&v82, &v86, &v83, &v88);
        if ( v82.m256i_i8[0] != -1 )
          sub_14002F9D0(&v82);
        *(__m128i *)&v88.m256i_u64[1] = _mm_loadu_si128(&v86);
        v88.m256i_i64[3] = v87;
        v88.m256i_i8[0] = 5;
        v91 = 1;
        v95 = (__m128i *)sub_141641AF0(aReasoning_6, 9, a1);
        sub_14002F9D0(v95);
        goto LABEL_86;
      }
      v8 = 1;
      if ( (unsigned __int8)v9 == 2 )
        return v9;
LABEL_20:
      v9 = sub_141642800(a2, aReasoningEffor, 17);
      if ( !v9 || *(_BYTE *)v9 != 3 )
        return v9;
      v9 = sub_140E91160(*(_QWORD *)(v9 + 16), *(_QWORD *)(v9 + 24));
      v28 = v26;
      if ( v26 < 0 )
      {
        v5 = 0;
        goto LABEL_24;
      }
      if ( !v26 )
      {
        v39 = 1;
        goto LABEL_97;
      }
      v37 = (const __m128i *)v9;
      nullsub_1(v27);
      v5 = 1;
      v38 = (__m128i *)sub_140001650(v28, 1);
      if ( !v38 )
LABEL_24:
        sub_141938D2B(v5, v28);
      v39 = (__int64)v38;
      sub_1418F44E0(v38, v37, v28);
      if ( v28 < 8 )
      {
        v9 = 0;
        goto LABEL_89;
      }
      if ( v28 < 0x20 )
      {
        v9 = 0;
        goto LABEL_55;
      }
      v9 = v28 & 0x7FFFFFFFFFFFFFE0LL;
      v27 = 0;
      v55 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
      v56 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
      v57 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
      do
      {
        v58 = _mm_loadu_si128((const __m128i *)(v39 + v27));
        v59 = _mm_loadu_si128((const __m128i *)(v39 + v27 + 16));
        v60 = _mm_add_epi8(v58, v55);
        v61 = _mm_add_epi8(v59, v55);
        *(__m128i *)(v39 + v27) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v60, v56), v60), v57), v58);
        *(__m128i *)(v39 + v27 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v61, v56), v61), v57),
                                         v59);
        v27 += 32;
      }
      while ( v9 != v27 );
      if ( v28 == v9 )
        goto LABEL_91;
      if ( (v28 & 0x18) != 0 )
      {
LABEL_55:
        v27 = v9;
        v9 = v28 & 0x7FFFFFFFFFFFFFF8LL;
        v62 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
        v63 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
        v64 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
        do
        {
          v65 = _mm_loadl_epi64((const __m128i *)(v39 + v27));
          v66 = _mm_add_epi8(v65, v62);
          *(_QWORD *)(v39 + v27) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v66, v63), v66), v64), v65).m128i_u64[0];
          v27 += 8;
        }
        while ( v9 != v27 );
        goto LABEL_90;
      }
      do
      {
LABEL_89:
        v27 = *(unsigned __int8 *)(v39 + v9);
        *(_BYTE *)(v39 + v9++) = v27 | (32 * ((unsigned __int8)(v27 - 65) < 0x1Au));
LABEL_90:
        ;
      }
      while ( v28 != v9 );
LABEL_91:
      if ( v28 == 3 )
      {
        LOWORD(v9) = *(_WORD *)v39 ^ 0x666F;
        v27 = *(unsigned __int8 *)(v39 + 2) ^ 0x66u;
        LOWORD(v27) = v9 | *(unsigned __int8 *)(v39 + 2) ^ 0x66;
        if ( (_WORD)v27 )
          goto LABEL_97;
LABEL_114:
        LOBYTE(v9) = sub_140001660(v39, v28, 1);
        return v9;
      }
      if ( v28 == 8 )
      {
        LOBYTE(v9) = 100;
        if ( *(_QWORD *)v39 != 0x64656C6261736964LL )
          goto LABEL_97;
        goto LABEL_114;
      }
      if ( v28 == 4 && *(_DWORD *)v39 == 1701736302 )
        goto LABEL_114;
LABEL_97:
      if ( v8 )
      {
        LOBYTE(v9) = v28 - 3;
        if ( v8 == 1 )
        {
          switch ( v28 )
          {
            case 3uLL:
              LOWORD(v9) = *(_WORD *)v39 ^ 0x616D;
              v27 = *(unsigned __int8 *)(v39 + 2) ^ 0x78u;
              LOWORD(v27) = v9 | *(unsigned __int8 *)(v39 + 2) ^ 0x78;
              if ( (_WORD)v27 )
              {
                v27 = *(unsigned __int8 *)(v39 + 2) ^ 0x77u;
                v76 = nullptr;
                LOWORD(v27) = *(_WORD *)v39 ^ 0x6F6C | *(unsigned __int8 *)(v39 + 2) ^ 0x77;
                v9 = (__int64)&unk_141A6F69C;
                if ( !(_WORD)v27 )
                  v76 = &unk_141A6F69C;
                v5 = 3;
              }
              else
              {
                v76 = &unk_141A6F729;
                v5 = 5;
              }
              break;
            case 4uLL:
              v76 = nullptr;
              v9 = (__int64)&unk_141A6F6F9;
              if ( *(_DWORD *)v39 == 1751607656 )
                v76 = &unk_141A6F6F9;
              goto LABEL_140;
            case 5uLL:
              LODWORD(v9) = *(_DWORD *)v39 ^ 0x72746C75;
              v5 = 5;
              v27 = (unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x61;
              if ( !((unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x61) )
                goto LABEL_153;
              v76 = nullptr;
              v27 = *(_DWORD *)v39 ^ 0x67696878 | *(unsigned __int8 *)(v39 + 4) ^ 0x68u;
              v9 = (__int64)&unk_141A6F729;
              if ( !(*(_DWORD *)v39 ^ 0x67696878 | *(unsigned __int8 *)(v39 + 4) ^ 0x68) )
                v76 = &unk_141A6F729;
              break;
            case 6uLL:
              v76 = nullptr;
              v27 = *(_DWORD *)v39 ^ 0x6964656D | *(unsigned __int16 *)(v39 + 4) ^ 0x6D75u;
              v9 = (__int64)&unk_141A6CFA1;
              if ( !(*(_DWORD *)v39 ^ 0x6964656D | *(unsigned __int16 *)(v39 + 4) ^ 0x6D75) )
                v76 = &unk_141A6CFA1;
              v5 = 6;
              break;
            case 7uLL:
              v76 = nullptr;
              v27 = *(_DWORD *)v39 ^ 0x696E696D | *(_DWORD *)(v39 + 3) ^ 0x6C616D69u;
              v9 = (__int64)&unk_141A71235;
              if ( !(*(_DWORD *)v39 ^ 0x696E696D | *(_DWORD *)(v39 + 3) ^ 0x6C616D69) )
                v76 = &unk_141A71235;
              v5 = 7;
              break;
            default:
              goto LABEL_138;
          }
        }
        else
        {
          switch ( v28 )
          {
            case 3uLL:
              LOWORD(v9) = *(_WORD *)v39 ^ 0x6F6C;
              v27 = *(unsigned __int8 *)(v39 + 2) ^ 0x77u;
              v5 = 3;
              LOWORD(v27) = v9 | *(unsigned __int8 *)(v39 + 2) ^ 0x77;
              if ( (_WORD)v27 )
              {
                LOWORD(v9) = *(_WORD *)v39 ^ 0x616D;
                v27 = *(unsigned __int8 *)(v39 + 2) ^ 0x78u;
                LOWORD(v27) = v9 | *(unsigned __int8 *)(v39 + 2) ^ 0x78;
                if ( (_WORD)v27 )
                  goto LABEL_138;
                v76 = &unk_141A6FA88;
              }
              else
              {
                v76 = &unk_141A6F69C;
              }
              break;
            case 4uLL:
              if ( *(_DWORD *)v39 == 1751607656 )
                goto LABEL_139;
              goto LABEL_138;
            case 5uLL:
              LODWORD(v9) = *(_DWORD *)v39 ^ 0x67696878;
              v5 = 5;
              v27 = (unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x68;
              if ( (unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x68 )
              {
                LODWORD(v9) = *(_DWORD *)v39 ^ 0x72746C75;
                v27 = (unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x61;
                if ( (unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x61 )
LABEL_138:
                  v76 = nullptr;
                else
                  v76 = &unk_141A71230;
              }
              else
              {
LABEL_153:
                v76 = &unk_141A6F729;
              }
              break;
            case 6uLL:
              LODWORD(v9) = *(_DWORD *)v39 ^ 0x6964656D;
              v27 = (unsigned int)v9 | *(unsigned __int16 *)(v39 + 4) ^ 0x6D75;
              if ( (unsigned int)v9 | *(unsigned __int16 *)(v39 + 4) ^ 0x6D75 )
                goto LABEL_138;
              v76 = &unk_141A6CFA1;
              v5 = 6;
              break;
            case 7uLL:
              LODWORD(v9) = *(_DWORD *)v39 ^ 0x696E696D;
              v27 = (unsigned int)v9 | *(_DWORD *)(v39 + 3) ^ 0x6C616D69;
              if ( (unsigned int)v9 | *(_DWORD *)(v39 + 3) ^ 0x6C616D69 )
                goto LABEL_138;
              v76 = &unk_141A71235;
              v5 = 7;
              break;
            default:
              goto LABEL_138;
          }
        }
      }
      else
      {
        if ( v28 == 3 )
        {
          LOWORD(v9) = *(_WORD *)v39 ^ 0x616D;
          v27 = *(unsigned __int8 *)(v39 + 2) ^ 0x78u;
          LOWORD(v27) = v9 | *(unsigned __int8 *)(v39 + 2) ^ 0x78;
          if ( !(_WORD)v27 )
          {
            v76 = &unk_141A6FA88;
            v5 = 3;
            goto LABEL_141;
          }
        }
        else if ( v28 == 5 )
        {
          LODWORD(v9) = *(_DWORD *)v39 ^ 0x72746C75;
          v76 = &unk_141A6FA88;
          v5 = 3;
          v27 = (unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x61;
          if ( !((unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x61) )
            goto LABEL_141;
          LODWORD(v9) = *(_DWORD *)v39 ^ 0x67696878;
          v27 = (unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x68;
          if ( !((unsigned int)v9 | *(unsigned __int8 *)(v39 + 4) ^ 0x68) )
            goto LABEL_141;
        }
LABEL_139:
        v76 = &unk_141A6F6F9;
LABEL_140:
        v5 = 4;
      }
LABEL_141:
      if ( v28 )
        LOBYTE(v9) = sub_140001660(v39, v28, 1);
      if ( v76 )
      {
        v80[0] = v76;
        v80[1] = v5;
        if ( v8 != 2 )
        {
          if ( v8 != 1 )
          {
            sub_14040FB10(&v88, v80);
            if ( v88.m256i_i8[0] == -1 )
            {
              v82.m256i_i64[0] = v88.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_19,
                43,
                (unsigned int)&v82,
                (unsigned int)&off_141A6D5F8,
                (__int64)&off_141A711F0);
            }
            v82 = v88;
            v90 = 1;
            v95 = (__m128i *)sub_141641AF0("reasoning_effort", 16, a1);
            sub_14002F9D0(v95);
            v74 = _mm_load_si128((const __m128i *)&v82);
            v75 = _mm_load_si128((const __m128i *)&v82.m256i_u64[2]);
            goto LABEL_87;
          }
          v86.m128i_i64[0] = 0;
          v87 = 0;
          nullsub_1(v27);
          v77 = sub_140001650(6, 1);
          if ( !v77 )
            sub_141938D2B(1, 6);
          *(_WORD *)(v77 + 4) = 29810;
          *(_DWORD *)v77 = 1868981861;
          v83 = 6;
          v84 = (_DWORD *)v77;
          v85 = 6;
          v96 = 1;
          sub_14040FB10(&v88, v80);
          if ( v88.m256i_i8[0] == -1 )
          {
            v82.m256i_i64[0] = v88.m256i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_19,
              43,
              (unsigned int)&v82,
              (unsigned int)&off_141A6D5F8,
              (__int64)&off_141A71218);
          }
          v78 = _mm_loadu_si128((const __m128i *)&v88);
          *(__m128i *)&v82.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v88.m256i_u64[2]);
          *(__m128i *)v82.m256i_i8 = v78;
          v96 = 0;
          sub_140E72AA0(&v88, &v86, &v83, &v82);
          if ( v88.m256i_i8[0] != -1 )
            sub_14002F9D0(&v88);
          *(__m128i *)&v88.m256i_u64[1] = _mm_loadu_si128(&v86);
          v88.m256i_i64[3] = v87;
          v88.m256i_i8[0] = 5;
          v89 = 1;
          v95 = (__m128i *)sub_141641AF0(aReasoning_6, 9, a1);
          sub_14002F9D0(v95);
LABEL_86:
          v74 = _mm_loadu_si128((const __m128i *)&v88);
          v75 = _mm_loadu_si128((const __m128i *)&v88.m256i_u64[2]);
LABEL_87:
          v9 = (__int64)v95;
          v95[1] = v75;
          *(__m128i *)v9 = v74;
        }
      }
      return v9;
  }
}
