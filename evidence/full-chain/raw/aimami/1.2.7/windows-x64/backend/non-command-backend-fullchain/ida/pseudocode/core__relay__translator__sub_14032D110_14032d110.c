// win 1.2.7 | module src/core/relay/translator.rs | ea 0x14032d110 | name sub_14032D110
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14032D110(_BYTE *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __m128i si128; // xmm1
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  _BYTE *v22; // rax
  __int64 v23; // rdx
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  __int64 v28; // r14
  const __m128i *v29; // rbx
  __m128i *v30; // rax
  __m128i *v31; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  __m128i v38; // xmm4
  __m128i v39; // xmm5
  __m128i v40; // xmm6
  __int64 v41; // rcx
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __m128i v44; // xmm2
  __m128i v45; // xmm3
  __m128i v46; // xmm4
  __int64 v47; // rdi
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned __int8 v52; // al
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rbx
  const __m128i *v56; // r14
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rsi
  __m128i v62; // [rsp+20h] [rbp-60h] BYREF
  __int128 v63; // [rsp+30h] [rbp-50h] BYREF
  __m128i v64; // [rsp+40h] [rbp-40h] BYREF
  __int64 v65; // [rsp+50h] [rbp-30h]
  __int64 v66; // [rsp+80h] [rbp+0h]
  __m128i v67; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v68; // [rsp+C0h] [rbp+40h]
  __m128i v69; // [rsp+D0h] [rbp+50h]
  __m128i *v70; // [rsp+E0h] [rbp+60h]
  __int64 v71; // [rsp+E8h] [rbp+68h]

  v71 = -2;
  v2 = sub_1416419F0(aTools_1, 5, a1);
  if ( v2 && *(_BYTE *)v2 == 4 )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v5 = v4 + 32LL * *(_QWORD *)(v2 + 24);
    v6 = sub_14167F170(v3);
    if ( *(_BYTE *)(v6 + 16) == 1 )
    {
      v11 = *(_QWORD *)v6;
      v12 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v48 = v6;
      v11 = sub_141696260(v8, v7, v9, v10);
      v6 = v48;
      *(_QWORD *)v48 = v11;
      *(_QWORD *)(v48 + 8) = v12;
      *(_BYTE *)(v48 + 16) = 1;
    }
    *(_QWORD *)v6 = v11 + 1;
    v63 = xmmword_1419E4880;
    v62 = *(__m128i *)&off_1419E4870;
    v64.m128i_i64[0] = v11;
    v64.m128i_i64[1] = v12;
    sub_1402A4920(v4, v5, &v62);
    v13 = _mm_load_si128(&v62);
    si128 = _mm_load_si128((const __m128i *)&v63);
    v69 = _mm_load_si128(&v64);
    v68 = (__int128)si128;
    v67 = v13;
  }
  else
  {
    v15 = sub_14167F170(v3);
    if ( *(_BYTE *)(v15 + 16) == 1 )
    {
      v20 = *(_QWORD *)v15;
      v21 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      v47 = v15;
      v20 = sub_141696260(v17, v16, v18, v19);
      v15 = v47;
      *(_QWORD *)v47 = v20;
      *(_QWORD *)(v47 + 8) = v21;
      *(_BYTE *)(v47 + 16) = 1;
    }
    *(_QWORD *)v15 = v20 + 1;
    v68 = xmmword_1419E4880;
    v67 = _mm_loadu_si128((const __m128i *)&off_1419E4870);
    v69.m128i_i64[0] = v20;
    v69.m128i_i64[1] = v21;
  }
  v22 = (_BYTE *)sub_1416419F0(
                   "messagesrolesystemcontent你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。us"
                   "ertemperaturemax_tokensstreamdoubaoreasoning_effortnone",
                   8,
                   a1);
  if ( !v22 )
    v22 = off_1421E7108;
  v23 = 0;
  if ( *v22 == 4 )
    v23 = (__int64)(v22 + 8);
  v62.m128i_i64[0] = 1;
  v62.m128i_i64[1] = v23;
  *(_QWORD *)&v63 = 0;
  v64.m128i_i64[0] = 0;
  v65 = 2;
  v66 = 2;
  result = sub_140393810(&v67, &v62);
  if ( *((_QWORD *)&v68 + 1) )
  {
    result = sub_1416419F0(aToolChoice_1, 11, a1);
    if ( result )
    {
      result = sub_1416419F0(aType_4, 4, result);
      if ( result )
      {
        if ( *(_BYTE *)result == 3 )
        {
          result = sub_140E91160(*(_QWORD *)(result + 16), *(_QWORD *)(result + 24));
          v27 = v25;
          if ( v25 < 0 )
          {
            v28 = 0;
            goto LABEL_19;
          }
          if ( v25 )
          {
            v29 = (const __m128i *)result;
            nullsub_1(v26);
            v28 = 1;
            v30 = (__m128i *)sub_140001650(v27, 1);
            if ( !v30 )
LABEL_19:
              sub_141938D2B(v28, v27);
            v31 = v30;
            sub_1418F44E0(v30, v29, v27);
            if ( v27 < 8 )
            {
              v32 = 0;
              goto LABEL_38;
            }
            if ( v27 >= 0x20 )
            {
              v32 = v27 & 0x7FFFFFFFFFFFFFE0LL;
              v33 = 0;
              v34 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
              v35 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
              v36 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
              do
              {
                v37 = _mm_loadu_si128(&v31[v33 / 0x10]);
                v38 = _mm_loadu_si128(&v31[v33 / 0x10 + 1]);
                v39 = _mm_add_epi8(v37, v34);
                v40 = _mm_add_epi8(v38, v34);
                v31[v33 / 0x10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v39, v35), v39), v36), v37);
                v31[v33 / 0x10 + 1] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v40, v35), v40), v36), v38);
                v33 += 32LL;
              }
              while ( v32 != v33 );
              if ( v27 == v32 )
              {
LABEL_40:
                if ( v27 == 4 && v31->m128i_i32[0] == 1819242356 )
                {
                  v70 = v31;
                  v49 = sub_1416419F0(aToolChoice_1, 11, a1);
                  v50 = 1;
                  if ( v49 )
                  {
                    v51 = sub_1416419F0(aName_2, 4, v49);
                    if ( v51 )
                    {
                      if ( *(_BYTE *)v51 == 3 )
                        v50 = *(_QWORD *)(v51 + 16);
                    }
                  }
                  v52 = sub_140373F00(&v67, v50);
                  v31 = v70;
                  if ( !((*a1 != 5) | v52) )
                  {
                    sub_140DED130(&v62, a1 + 8, aToolChoice_1, 11);
                    if ( v62.m128i_i8[0] != -1 )
                      sub_14002F9D0(&v62);
                    v31 = v70;
                  }
                }
                result = sub_140001660(v31, v27, 1);
                goto LABEL_51;
              }
              if ( (v27 & 0x18) == 0 )
              {
                do
                {
LABEL_38:
                  v31->m128i_i8[v32] |= 32 * ((unsigned __int8)(v31->m128i_i8[v32] - 65) < 0x1Au);
                  ++v32;
LABEL_39:
                  ;
                }
                while ( v27 != v32 );
                goto LABEL_40;
              }
            }
            else
            {
              v32 = 0;
            }
            v41 = v32;
            v32 = v27 & 0x7FFFFFFFFFFFFFF8LL;
            v42 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
            v43 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
            v44 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
            do
            {
              v45 = _mm_loadl_epi64((__m128i *)((char *)v31 + v41));
              v46 = _mm_add_epi8(v45, v42);
              *(__int64 *)((char *)v31->m128i_i64 + v41) = _mm_or_si128(
                                                             _mm_andnot_si128(
                                                               _mm_cmpeq_epi8(_mm_max_epu8(v46, v43), v46),
                                                               v44),
                                                             v45).m128i_u64[0];
              v41 += 8;
            }
            while ( v32 != v41 );
            goto LABEL_39;
          }
        }
      }
    }
  }
  else if ( *a1 == 5 )
  {
    result = sub_140DED130(&v62, a1 + 8, aToolChoice_1, 11);
    if ( v62.m128i_i8[0] != -1 )
      result = sub_14002F9D0(&v62);
  }
LABEL_51:
  v53 = v67.m128i_i64[1];
  if ( v67.m128i_i64[1] )
  {
    v54 = *((_QWORD *)&v68 + 1);
    if ( *((_QWORD *)&v68 + 1) )
    {
      v55 = v67.m128i_i64[0];
      v56 = (const __m128i *)(v67.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v67.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v58 = _mm_load_si128(v56);
            v55 -= 384;
            ++v56;
            _R15D = _mm_movemask_epi8(v58) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v59 = -3 * result;
        v60 = *(_QWORD *)(v55 + 8 * v59 - 24);
        if ( v60 )
          sub_140001660(*(_QWORD *)(v55 + 8 * v59 - 16), v60, 1);
        --v54;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v54 );
    }
    result = (24 * v53 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v61 = result + v53 + 17;
    if ( v61 )
      return sub_140001660(v67.m128i_i64[0] - result, v61, 16);
  }
  return result;
}
