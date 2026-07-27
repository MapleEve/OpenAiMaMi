// module: codexmate_lib/core/relay/translator
// addr: 0x140a273e0
// name: sub_140A273E0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140A273E0(_BYTE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  const __m128i *v20; // rbx
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rax
  _DWORD *v28; // r12
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm3
  __m128i v35; // xmm4
  __m128i v36; // xmm5
  __m128i v37; // xmm6
  __int64 v38; // rcx
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __m128i v41; // xmm2
  __m128i v42; // xmm3
  __m128i v43; // xmm4
  __int64 v44; // rdi
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r8
  char v50; // al
  __m128i v51; // [rsp+20h] [rbp-60h] BYREF
  __m128i si128; // [rsp+30h] [rbp-50h]
  __m128i v53; // [rsp+40h] [rbp-40h]
  __m128i v54; // [rsp+50h] [rbp-30h] BYREF
  __int128 v55; // [rsp+60h] [rbp-20h] BYREF
  __m128i v56; // [rsp+70h] [rbp-10h] BYREF
  _DWORD *v57; // [rsp+80h] [rbp+0h]
  __int64 v58; // [rsp+88h] [rbp+8h]

  v58 = -2;
  v2 = sub_141433D50(aTools_1, 5, a1);
  if ( !v2 || *(_BYTE *)v2 != 4 )
  {
    result = sub_141470CD0(v4, v3);
    if ( *(_BYTE *)(result + 16) == 1 )
    {
      v16 = *(_QWORD *)result;
      v17 = *(_QWORD *)(result + 8);
    }
    else
    {
      v44 = result;
      v16 = sub_141486EF0();
      result = v44;
      *(_QWORD *)v44 = v16;
      *(_QWORD *)(v44 + 8) = v17;
      *(_BYTE *)(v44 + 16) = 1;
    }
    *(_QWORD *)result = v16 + 1;
    si128 = (__m128i)xmmword_1417A47A0;
    v51 = _mm_loadu_si128((const __m128i *)&off_1417A4790);
    v53.m128i_i64[0] = v16;
    v53.m128i_i64[1] = v17;
    goto LABEL_15;
  }
  v5 = *(_QWORD *)(v2 + 16);
  v6 = v5 + 32LL * *(_QWORD *)(v2 + 24);
  v7 = sub_141470CD0(v4, v3);
  if ( *(_BYTE *)(v7 + 16) == 1 )
  {
    v8 = *(_QWORD *)v7;
    v9 = *(_QWORD *)(v7 + 8);
  }
  else
  {
    v45 = v7;
    v8 = sub_141486EF0();
    v7 = v45;
    *(_QWORD *)v45 = v8;
    *(_QWORD *)(v45 + 8) = v9;
    *(_BYTE *)(v45 + 16) = 1;
  }
  *(_QWORD *)v7 = v8 + 1;
  v55 = xmmword_1417A47A0;
  v54 = *(__m128i *)&off_1417A4790;
  v56.m128i_i64[0] = v8;
  v56.m128i_i64[1] = v9;
  result = sub_140992220(v5, v6, &v54);
  v53 = _mm_load_si128(&v56);
  si128 = _mm_load_si128((const __m128i *)&v55);
  v51 = _mm_load_si128(&v54);
  v11 = si128.m128i_i64[1];
  if ( !si128.m128i_i64[1] )
  {
LABEL_15:
    if ( *a1 == 5 )
    {
      result = sub_1402B4580(&v54, a1 + 8, aToolChoice, 11);
      if ( v54.m128i_i8[0] != -1 )
        result = sub_1400104F0(&v54);
    }
    v11 = 0;
    goto LABEL_19;
  }
  result = sub_141433D50(aToolChoice, 11, a1);
  if ( result )
  {
    result = sub_141433D50(aType_8, 4, result);
    if ( result )
    {
      if ( *(_BYTE *)result == 3 )
      {
        result = sub_14033BC10(*(_QWORD *)(result + 16), *(_QWORD *)(result + 24));
        v14 = v12;
        if ( v12 < 0 )
        {
          v15 = 0;
          goto LABEL_11;
        }
        if ( v12 )
        {
          v26 = result;
          nullsub_1(v13);
          v15 = 1;
          v27 = sub_140001650(v14, 1);
          if ( !v27 )
LABEL_11:
            sub_1416C2D4B(v15, v14);
          v28 = (_DWORD *)v27;
          sub_141684120(v27, v26, v14);
          if ( v14 < 8 )
          {
            v29 = 0;
            goto LABEL_45;
          }
          if ( v14 >= 0x20 )
          {
            v29 = v14 & 0x7FFFFFFFFFFFFFE0LL;
            v30 = 0;
            v31 = _mm_load_si128((const __m128i *)&xmmword_141742460);
            v32 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
            v33 = _mm_load_si128((const __m128i *)&xmmword_141742470);
            do
            {
              v34 = _mm_loadu_si128((const __m128i *)&v28[v30 / 4]);
              v35 = _mm_loadu_si128((const __m128i *)&v28[v30 / 4 + 4]);
              v36 = _mm_add_epi8(v34, v31);
              v37 = _mm_add_epi8(v35, v31);
              *(__m128i *)&v28[v30 / 4] = _mm_or_si128(
                                            _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v36, v32), v36), v33),
                                            v34);
              *(__m128i *)&v28[v30 / 4 + 4] = _mm_or_si128(
                                                _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v37, v32), v37), v33),
                                                v35);
              v30 += 32LL;
            }
            while ( v29 != v30 );
            if ( v14 == v29 )
            {
LABEL_47:
              if ( v14 == 4 && *v28 == 1819242356 )
              {
                v57 = v28;
                v46 = sub_141433D50(aToolChoice, 11, a1);
                v47 = 1;
                if ( v46 && (v48 = sub_141433D50(aName_7, 4, v46)) != 0 && *(_BYTE *)v48 == 3 )
                {
                  v47 = *(_QWORD *)(v48 + 16);
                  v49 = *(_QWORD *)(v48 + 24);
                }
                else
                {
                  v49 = 0;
                }
                v50 = sub_14042ABF0(v51.m128i_i64, v47, v49);
                v28 = v57;
                if ( !((*a1 != 5) | (unsigned __int8)v50) )
                {
                  sub_1402B4580(&v54, a1 + 8, aToolChoice, 11);
                  if ( v54.m128i_i8[0] != -1 )
                    sub_1400104F0(&v54);
                  v28 = v57;
                }
              }
              result = sub_140001660(v28, v14, 1);
              goto LABEL_19;
            }
            if ( (v14 & 0x18) == 0 )
            {
              do
              {
LABEL_45:
                *((_BYTE *)v28 + v29) |= 32 * ((unsigned __int8)(*((_BYTE *)v28 + v29) - 65) < 0x1Au);
                ++v29;
LABEL_46:
                ;
              }
              while ( v14 != v29 );
              goto LABEL_47;
            }
          }
          else
          {
            v29 = 0;
          }
          v38 = v29;
          v29 = v14 & 0x7FFFFFFFFFFFFFF8LL;
          v39 = _mm_load_si128((const __m128i *)&xmmword_141742480);
          v40 = _mm_load_si128((const __m128i *)&xmmword_141742490);
          v41 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
          do
          {
            v42 = _mm_loadl_epi64((const __m128i *)((char *)v28 + v38));
            v43 = _mm_add_epi8(v42, v39);
            *(_QWORD *)((char *)v28 + v38) = _mm_or_si128(
                                               _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v43, v40), v43), v41),
                                               v42).m128i_u64[0];
            v38 += 8;
          }
          while ( v29 != v38 );
          goto LABEL_46;
        }
      }
    }
  }
LABEL_19:
  v18 = v51.m128i_i64[1];
  if ( v51.m128i_i64[1] )
  {
    if ( v11 )
    {
      v19 = v51.m128i_i64[0];
      v20 = (const __m128i *)(v51.m128i_i64[0] + 16);
      _R14D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v51.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R14D )
        {
          do
          {
            v22 = _mm_load_si128(v20);
            v19 -= 384;
            ++v20;
            _R14D = _mm_movemask_epi8(v22) ^ 0xFFFF;
          }
          while ( !_R14D );
        }
        __asm { tzcnt   eax, r14d }
        v23 = -3 * result;
        v24 = *(_QWORD *)(v19 + 8 * v23 - 24);
        if ( v24 )
          sub_140001660(*(_QWORD *)(v19 + 8 * v23 - 16), v24, 1);
        --v11;
        result = _R14D & (unsigned int)(_R14D - 1);
        _R14D &= _R14D - 1;
      }
      while ( v11 );
    }
    result = (24 * v18 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v25 = result + v18 + 17;
    if ( v25 )
      return sub_140001660(v51.m128i_i64[0] - result, v25, 16);
  }
  return result;
}