// module: codexmate_lib/core/debug_bundle
// addr: 0x140736d70
// name: sub_140736D70
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140736D70(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int8 *v5; // rdi
  unsigned int v6; // r14d
  char *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // r15d
  int v11; // eax
  int v12; // r8d
  int v13; // r15d
  unsigned __int8 v14; // cl
  _BOOL8 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rdi
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rcx
  __m128i si128; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  __m128i v47; // xmm4
  __m128i v48; // xmm5
  __m128i v49; // xmm6
  __int64 v50; // rcx
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __m128i v53; // xmm2
  __m128i v54; // xmm3
  __m128i v55; // xmm4
  const char *v56; // r15
  __int64 v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // rcx
  char v60; // al
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rcx
  __m128i v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rdi
  _QWORD *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rdi
  _QWORD *v74; // rbx
  __int64 v75; // rdx
  __int64 result; // rax
  char v77; // al
  char v78; // al
  char v79; // al
  __int128 v80; // [rsp+30h] [rbp-50h]
  __m128i v81; // [rsp+48h] [rbp-38h] BYREF
  __int64 v82; // [rsp+58h] [rbp-28h]
  __m128i v83; // [rsp+60h] [rbp-20h] BYREF
  __int64 v84; // [rsp+70h] [rbp-10h]
  __m128i v85; // [rsp+78h] [rbp-8h] BYREF
  __int64 v86; // [rsp+88h] [rbp+8h]
  __int128 v87; // [rsp+90h] [rbp+10h] BYREF
  __int64 v88; // [rsp+A0h] [rbp+20h]
  __int64 v89; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v90; // [rsp+B0h] [rbp+30h]
  __int64 v91; // [rsp+B8h] [rbp+38h]
  __m256i v92; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v93; // [rsp+E0h] [rbp+60h]
  __int64 v94; // [rsp+E8h] [rbp+68h]
  __int128 v95; // [rsp+F0h] [rbp+70h]
  __int64 v96; // [rsp+100h] [rbp+80h]
  __int64 v97; // [rsp+108h] [rbp+88h]
  __m128i v98; // [rsp+110h] [rbp+90h] BYREF
  __int64 v99; // [rsp+120h] [rbp+A0h]
  __int64 v100; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v101; // [rsp+130h] [rbp+B0h]
  __int64 v102; // [rsp+138h] [rbp+B8h]
  __int64 v103; // [rsp+140h] [rbp+C0h]
  __int64 v104; // [rsp+148h] [rbp+C8h]
  char v105; // [rsp+157h] [rbp+D7h]
  __int64 v106; // [rsp+158h] [rbp+D8h]

  v106 = -2;
  if ( !a2 )
    goto LABEL_95;
  if ( *(_BYTE *)a2 != 3 )
    goto LABEL_95;
  v3 = sub_14033BC10(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  if ( !v4 )
    goto LABEL_95;
  v100 = 0;
  v101 = 8;
  v102 = 0;
  *(_QWORD *)&v87 = 0;
  v88 = 0;
  v98.m128i_i64[0] = 0;
  v98.m128i_i64[1] = 1;
  v99 = 0;
  v103 = v4;
  v5 = (unsigned __int8 *)(v4 + v3);
  v6 = 32;
  v7 = (char *)v3;
  v8 = 1;
  v9 = 0;
  v97 = v3;
  while ( 1 )
  {
    if ( v7 && v7 != (char *)v5 )
    {
      v10 = (unsigned __int8)*v7;
      if ( *v7 < 0 )
      {
        v11 = v10 & 0x1F;
        v12 = v7[1] & 0x3F;
        if ( (unsigned __int8)v10 <= 0xDFu )
        {
          v7 += 2;
          v10 = v12 | (v11 << 6);
        }
        else
        {
          v13 = (v12 << 6) | v7[2] & 0x3F;
          if ( (unsigned __int8)*v7 < 0xF0u )
          {
            v7 += 3;
            v10 = (v11 << 12) | v13;
          }
          else
          {
            v14 = v7[3];
            v7 += 4;
            v10 = ((v11 & 7) << 18) | (v13 << 6) | v14 & 0x3F;
          }
        }
      }
      else
      {
        ++v7;
      }
      goto LABEL_13;
    }
    if ( v6 > 0xFFFFFFFD )
      break;
    v10 = v6;
    v6 = -1;
    v7 = nullptr;
LABEL_13:
    if ( (unsigned int)(v10 - 48) >= 0xA )
    {
      if ( v9 == 3 )
      {
        v15 = *(_BYTE *)v8 == 43;
        v16 = *(unsigned __int8 *)(v8 + v15) - 48;
        if ( v16 > 9 )
        {
          v9 = 0;
          v99 = 0;
        }
        else
        {
          v17 = *(unsigned __int8 *)(v8 + v15 + 1) - 48;
          if ( v17 > 9 )
          {
            v9 = 0;
            v99 = 0;
          }
          else
          {
            v18 = v17 + 10 * (__int16)v16;
            if ( *(_BYTE *)v8 == 43 )
            {
LABEL_25:
              if ( (unsigned __int16)(v18 - 400) > 0xC7u )
              {
                v9 = 0;
                v99 = 0;
              }
              else
              {
                v105 = 1;
                v20 = sub_14149FF60(v18, &v89, 5);
                v23 = v21;
                if ( v21 < 0 )
                {
                  v25 = 0;
                  goto LABEL_55;
                }
                if ( v21 )
                {
                  v24 = v20;
                  v104 = a1;
                  nullsub_1(v22);
                  v25 = 1;
                  v26 = sub_140001650(v23, 1);
                  if ( !v26 )
                  {
                    v104 = v23;
LABEL_55:
                    v105 = 1;
                    sub_1416C2D4B(v25, v104);
                  }
                  v27 = v24;
                  v28 = v26;
                  sub_141684120(v26, v27, v23);
                  v29 = v28;
                  a1 = v104;
                }
                else
                {
                  v29 = 1;
                }
                v92.m256i_i64[0] = v23;
                v104 = v29;
                v92.m256i_i64[1] = v29;
                v92.m256i_i64[2] = v23;
                v105 = 1;
                sub_140307390(&v87, &v92);
                v9 = 0;
                v99 = 0;
              }
            }
            else
            {
              v19 = *(unsigned __int8 *)(v8 + v15 + 2) - 48;
              if ( v19 <= 9 )
              {
                v18 = v19 + 10 * (_DWORD)v18;
                goto LABEL_25;
              }
              v9 = 0;
              v99 = 0;
            }
          }
        }
      }
      else
      {
        v9 = 0;
        v99 = 0;
      }
    }
    else
    {
      if ( v98.m128i_i64[0] == v9 )
      {
        v105 = 1;
        sub_141688D30((unsigned int)&v98, v9, 1, 1, 1);
        v8 = v98.m128i_i64[1];
      }
      *(_BYTE *)(v8 + v9++) = v10;
      v99 = v9;
    }
  }
  v30 = 0;
  v31 = v87;
  if ( (_QWORD)v87 )
    v31 = v88;
  LOBYTE(v30) = (_QWORD)v87 != 0;
  *(_OWORD *)v92.m256i_i8 = v30;
  *(_OWORD *)&v92.m256i_u64[2] = v87;
  v93 = v30;
  v94 = 0;
  v95 = v87;
  v96 = v31;
  v105 = 0;
  sub_140327FF0(&v89, &v92);
  if ( v98.m128i_i64[0] )
    sub_140001660(v98.m128i_i64[1], v98.m128i_i64[0], 1);
  v33 = v91;
  v34 = v103;
  v35 = v97;
  if ( v91 )
  {
    sub_140440300((unsigned int)&v92, v90, v91, (unsigned int)&unk_141789F94, 1);
    v99 = v92.m256i_i64[2];
    v98 = _mm_loadu_si128((const __m128i *)&v92);
    v92.m256i_i64[0] = (__int64)&v98;
    v92.m256i_i64[1] = (__int64)sub_1400015F0;
    sub_14149C0F0(&v85, &unk_141789F95, &v92);
    if ( v98.m128i_i64[0] )
      sub_140001660(v98.m128i_i64[1], v98.m128i_i64[0], 1);
    v36 = v102;
    if ( v102 == v100 )
      sub_141689AB0(&v100);
    v37 = v101;
    v32 = 3 * v36;
    *(_QWORD *)(v101 + 8 * v32 + 16) = v86;
    *(__m128i *)(v37 + 8 * v32) = _mm_loadu_si128(&v85);
    v102 = v36 + 1;
  }
  if ( v34 < 0 )
  {
    v38 = 0;
    goto LABEL_50;
  }
  nullsub_1(v32);
  v38 = 1;
  v39 = sub_140001650(v34, 1);
  if ( !v39 )
LABEL_50:
    sub_1416C2D4B(v38, v34);
  v104 = v39;
  sub_141684120(v39, v35, v34);
  if ( (unsigned __int64)v34 < 8 )
  {
    v40 = 0;
    v41 = v104;
    goto LABEL_66;
  }
  if ( (unsigned __int64)v34 < 0x20 )
  {
    v40 = 0;
    v41 = v104;
    goto LABEL_62;
  }
  v40 = v34 & 0x7FFFFFFFFFFFFFE0LL;
  v42 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
  v44 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
  v45 = _mm_load_si128((const __m128i *)&xmmword_141742470);
  v41 = v104;
  do
  {
    v46 = _mm_loadu_si128((const __m128i *)(v41 + v42));
    v47 = _mm_loadu_si128((const __m128i *)(v41 + v42 + 16));
    v48 = _mm_add_epi8(v46, si128);
    v49 = _mm_add_epi8(v47, si128);
    *(__m128i *)(v41 + v42) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v48, v44), v48), v45), v46);
    *(__m128i *)(v41 + v42 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v49, v44), v49), v45), v47);
    v42 += 32;
  }
  while ( v40 != v42 );
  if ( v34 != v40 )
  {
    if ( (v34 & 0x18) != 0 )
    {
LABEL_62:
      v50 = v40;
      v40 = v34 & 0x7FFFFFFFFFFFFFF8LL;
      v51 = _mm_load_si128((const __m128i *)&xmmword_141742480);
      v52 = _mm_load_si128((const __m128i *)&xmmword_141742490);
      v53 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
      do
      {
        v54 = _mm_loadl_epi64((const __m128i *)(v41 + v50));
        v55 = _mm_add_epi8(v54, v51);
        *(_QWORD *)(v41 + v50) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v55, v52), v55), v53), v54).m128i_u64[0];
        v50 += 8;
      }
      while ( v40 != v50 );
      goto LABEL_67;
    }
    do
    {
LABEL_66:
      *(_BYTE *)(v41 + v40) |= 32 * ((unsigned __int8)(*(_BYTE *)(v41 + v40) - 65) < 0x1Au);
      ++v40;
LABEL_67:
      ;
    }
    while ( v34 != v40 );
  }
  v56 = aTimeout_2;
  v57 = 7;
  if ( (unsigned __int8)sub_1407BE9C0(aTimeout_2, 7, v41, v34) )
  {
LABEL_69:
    v58 = v103;
    goto LABEL_70;
  }
  v60 = sub_1407BE9C0(aTimedOut_0, 9, v104, v103);
  v58 = v103;
  v59 = v104;
  if ( !v60 )
  {
    v56 = (const char *)&unk_141789AC8;
    if ( (unsigned __int8)sub_1407BE9C0(&unk_141789AC8, 7, v104, v103) )
      goto LABEL_69;
    if ( (unsigned __int8)sub_1407BE9C0(aDns, 3, v104, v103) )
      goto LABEL_69;
    if ( (unsigned __int8)sub_1407BE9C0(aConnect_0, 7, v104, v103) )
      goto LABEL_69;
    if ( (unsigned __int8)sub_1407BE9C0(aSendingRequest, 15, v104, v103) )
      goto LABEL_69;
    v56 = (const char *)&unk_141789B24;
    v57 = 4;
    if ( (unsigned __int8)sub_1407BE9C0(a401, 3, v104, v103) || (unsigned __int8)sub_1407BE9C0(a403, 3, v104, v103) )
      goto LABEL_69;
    v77 = sub_1407BE9C0(aUnauthorized, 12, v104, v103);
    v58 = v103;
    v59 = v104;
    if ( !v77 )
    {
      if ( (unsigned __int8)sub_1407BE9C0(a404, 3, v104, v103) )
      {
        v56 = "modelROLLBACKrecency_at_msupdated_at_msupdated_atarchivedstate_.sqlitesqlite_home";
        v57 = 5;
        goto LABEL_69;
      }
      v56 = "modelROLLBACKrecency_at_msupdated_at_msupdated_atarchivedstate_.sqlitesqlite_home";
      v57 = 5;
      v78 = sub_1407BE9C0(
              "modelROLLBACKrecency_at_msupdated_at_msupdated_atarchivedstate_.sqlitesqlite_home",
              5,
              v104,
              v103);
      v58 = v103;
      v59 = v104;
      if ( !v78 )
      {
        v56 = (const char *)&unk_141789B1A;
        v57 = 10;
        if ( (unsigned __int8)sub_1407BE9C0(a429, 3, v104, v103) || (unsigned __int8)sub_1407BE9C0(aRate, 4, v104, v103) )
        {
LABEL_113:
          v58 = v103;
          v35 = v97;
LABEL_70:
          v59 = v104;
        }
        else
        {
          v79 = sub_1407BE9C0(aQuota, 5, v104, v103);
          v35 = v97;
          v58 = v103;
          v59 = v104;
          if ( !v79 )
          {
            if ( (unsigned __int8)sub_1407BE9C0(a500, 3, v104, v103)
              || (unsigned __int8)sub_1407BE9C0(a502, 3, v104, v103)
              || (unsigned __int8)sub_1407BE9C0(a503, 3, v104, v103) )
            {
              v56 = (const char *)&unk_141789B12;
              v57 = 8;
            }
            else
            {
              v56 = (const char *)&unk_1417880AF;
              v57 = 7;
            }
            goto LABEL_113;
          }
        }
      }
    }
  }
  sub_140001660(v59, v58, 1);
  v98.m128i_i64[0] = (__int64)v56;
  v98.m128i_i64[1] = v57;
  v92.m256i_i64[0] = (__int64)&v98;
  v92.m256i_i64[1] = (__int64)sub_14041F680;
  sub_14149C0F0(&v83, &unk_141789F9F, &v92);
  v61 = v102;
  if ( v102 == v100 )
    sub_141689AB0(&v100);
  v62 = v101;
  v63 = 3 * v61;
  *(_QWORD *)(v101 + 8 * v63 + 16) = v84;
  *(__m128i *)(v62 + 8 * v63) = _mm_loadu_si128(&v83);
  v102 = v61 + 1;
  v64.m128i_i64[0] = (__int64)error_hint_1(v35, v58);
  if ( v64.m128i_i64[0] )
  {
    v98 = v64;
    v92.m256i_i64[0] = (__int64)&v98;
    v92.m256i_i64[1] = (__int64)sub_14041F680;
    sub_14149C0F0(&v81, &unk_141789FAB, &v92);
    v65 = v102;
    if ( v102 == v100 )
      sub_141689AB0(&v100);
    v66 = v101;
    v67 = 3 * v65;
    *(_QWORD *)(v101 + 8 * v67 + 16) = v82;
    *(__m128i *)(v66 + 8 * v67) = _mm_loadu_si128(&v81);
    v68 = v65 + 1;
    v102 = v68;
  }
  else
  {
    LODWORD(v68) = v102;
  }
  sub_140440300((unsigned int)&v92, v101, v68, (unsigned int)asc_141789FB3, 2);
  v69 = v92.m256i_i64[0];
  v80 = *(_OWORD *)&v92.m256i_u64[1];
  v70 = v90;
  if ( v33 )
  {
    v71 = (_QWORD *)(v90 + 8);
    do
    {
      v72 = *(v71 - 1);
      if ( v72 )
        sub_140001660(*v71, v72, 1);
      v71 += 3;
      --v33;
    }
    while ( v33 );
  }
  if ( v89 )
    sub_140001660(v70, 24 * v89, 8);
  v73 = v102;
  if ( v102 )
  {
    v74 = (_QWORD *)(v101 + 8);
    do
    {
      v75 = *(v74 - 1);
      if ( v75 )
        sub_140001660(*v74, v75, 1);
      v74 += 3;
      --v73;
    }
    while ( v73 );
  }
  if ( v100 )
    sub_140001660(v101, 24 * v100, 8);
  if ( v69 != -1 )
  {
    *(_OWORD *)(a1 + 16) = v80;
    v92.m256i_i8[0] = 0;
    *(_BYTE *)a1 = 3;
    *(_QWORD *)(a1 + 8) = v69;
    return sub_1400104F0(&v92);
  }
LABEL_95:
  v92.m256i_i8[0] = 0;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v92.m256i_u64[2];
  *(_BYTE *)a1 = v92.m256i_i8[0];
  *(_QWORD *)(a1 + 1) = *(__int64 *)((char *)v92.m256i_i64 + 1);
  *(_DWORD *)(a1 + 9) = *(__int32 *)((char *)&v92.m256i_i32[2] + 1);
  *(_WORD *)(a1 + 13) = *(__int16 *)((char *)&v92.m256i_i16[6] + 1);
  result = v92.m256i_u8[15];
  *(_BYTE *)(a1 + 15) = v92.m256i_i8[15];
  return result;
}