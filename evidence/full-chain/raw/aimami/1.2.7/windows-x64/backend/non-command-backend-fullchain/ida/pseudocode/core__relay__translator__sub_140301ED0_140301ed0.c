// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140301ed0 | name sub_140301ED0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140301ED0(__m128i *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  const __m128i *v19; // r15
  const __m128i *v20; // rdx
  __m128i *v21; // r15
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 result; // rax
  __m128i *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rbx
  const __m128i *v34; // r14
  __m128i si128; // xmm0
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  _BYTE v41[31]; // [rsp+20h] [rbp-60h]
  _QWORD v42[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v43; // [rsp+68h] [rbp-18h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  __int64 v45; // [rsp+78h] [rbp-8h]
  __int128 v46; // [rsp+80h] [rbp+0h] BYREF
  __int128 v47; // [rsp+90h] [rbp+10h]
  __int64 v48; // [rsp+A0h] [rbp+20h]
  __int64 v49; // [rsp+A8h] [rbp+28h]
  __m256i v50; // [rsp+B8h] [rbp+38h] BYREF
  __m128i *v51; // [rsp+D8h] [rbp+58h]
  __int64 v52; // [rsp+E0h] [rbp+60h]
  __int64 v53; // [rsp+E8h] [rbp+68h]
  __int64 *v54; // [rsp+F0h] [rbp+70h]
  __int64 v55; // [rsp+F8h] [rbp+78h]
  __m128i v56; // [rsp+100h] [rbp+80h] BYREF
  __int64 v57; // [rsp+110h] [rbp+90h]
  __m128i *v58; // [rsp+118h] [rbp+98h]
  __int64 v59; // [rsp+120h] [rbp+A0h]
  __m128i *v60; // [rsp+128h] [rbp+A8h]
  __int64 v61; // [rsp+130h] [rbp+B0h]
  char v62; // [rsp+13Bh] [rbp+BBh]
  char v63; // [rsp+13Ch] [rbp+BCh]
  char v64; // [rsp+13Dh] [rbp+BDh]
  char v65; // [rsp+13Eh] [rbp+BEh]
  char v66; // [rsp+13Fh] [rbp+BFh]
  __int64 v67; // [rsp+140h] [rbp+C0h]

  v67 = -2;
  v54 = a2;
  v51 = a1;
  v63 = 1;
  v2 = sub_14167F170(a1);
  if ( *(_BYTE *)(v2 + 16) == 1 )
  {
    v7 = *(_QWORD *)v2;
    v8 = *(_QWORD *)(v2 + 8);
  }
  else
  {
    v63 = 1;
    v40 = v2;
    v7 = sub_141696260(v4, v3, v5, v6);
    v2 = v40;
    *(_QWORD *)v40 = v7;
    *(_QWORD *)(v40 + 8) = v8;
    *(_BYTE *)(v40 + 16) = 1;
  }
  *(_QWORD *)v2 = v7 + 1;
  v47 = xmmword_1419E4880;
  v46 = *(_OWORD *)&off_1419E4870;
  v48 = v7;
  v49 = v8;
  v9 = v54[2];
  v10 = 32 * v9;
  if ( v9 )
  {
    nullsub_1(v7);
    v11 = sub_140001650(v10, 8);
    if ( !v11 )
    {
      v62 = 1;
      sub_141938D2B(8, v10);
    }
  }
  else
  {
    v11 = 8;
  }
  v56.m128i_i64[0] = v9;
  v56.m128i_i64[1] = v11;
  v57 = 0;
  v12 = *v54;
  v13 = v54[1];
  v14 = v13 + v10;
  v42[3] = v13;
  v43 = v13;
  v55 = v12;
  v44 = v12;
  v45 = v14;
  v53 = v13;
  v15 = v14;
  if ( v13 != v14 )
  {
    while ( 1 )
    {
      v16 = v13 + 32;
      v43 = v13 + 32;
      *(_OWORD *)&v41[15] = *(_OWORD *)(v13 + 16);
      *(_OWORD *)v41 = *(_OWORD *)(v13 + 1);
      if ( *(_BYTE *)v13 == 0xFF )
      {
        v27 = v13 + 32;
        goto LABEL_27;
      }
      v50.m256i_i8[0] = *(_BYTE *)v13;
      *(_OWORD *)&v50.m256i_u64[2] = *(_OWORD *)&v41[15];
      *(_OWORD *)&v50.m256i_i8[1] = *(_OWORD *)v41;
      v64 = 1;
      v17 = sub_1416419F0(aName_2, 4, &v50);
      if ( !v17 || *(_BYTE *)v17 != 3 )
        break;
      v18 = *(_QWORD *)(v17 + 24);
      if ( v18 < 0 )
      {
        v26 = 0;
        goto LABEL_24;
      }
      v60 = *(__m128i **)(v17 + 24);
      if ( !v18 )
        break;
      v19 = *(const __m128i **)(v17 + 16);
      nullsub_1(v18);
      v61 = sub_140001650(v60, 1);
      if ( !v61 )
      {
        v61 = (__int64)v60;
        v26 = 1;
LABEL_24:
        v64 = 1;
        sub_141938D2B(v26, v61);
      }
      v20 = v19;
      v21 = v60;
      sub_1418F44E0((__m128i *)v61, v20, (unsigned __int64)v60);
      v42[0] = v21;
      v42[1] = v61;
      v42[2] = v21;
      v66 = 0;
      v59 = v61;
      v58 = v21;
      v65 = 1;
      if ( !(unsigned __int8)sub_1403AAB80(&v46, v42) )
      {
        v22 = v57;
        if ( v57 == v56.m128i_i64[0] )
LABEL_17:
          sub_14190F570(&v56);
LABEL_18:
        v23 = v56.m128i_i64[1];
        v24 = 32 * v22;
        v25 = *(_OWORD *)v50.m256i_i8;
        *(_OWORD *)(v56.m128i_i64[1] + v24 + 16) = *(_OWORD *)&v50.m256i_u64[2];
        *(_OWORD *)(v23 + v24) = v25;
        v57 = v22 + 1;
        goto LABEL_19;
      }
      sub_14002F9D0(&v50);
LABEL_19:
      v13 = v16;
      v14 = v15;
      if ( v16 == v15 )
        goto LABEL_25;
    }
    v22 = v57;
    v61 = 1;
    if ( v57 == v56.m128i_i64[0] )
      goto LABEL_17;
    goto LABEL_18;
  }
LABEL_25:
  v27 = v14;
LABEL_27:
  v60 = (__m128i *)((unsigned __int64)(v14 - v27) >> 5);
  v61 = 0;
  v52 = v27;
  while ( v60 != (__m128i *)v61 )
  {
    ++v61;
    v28 = v27 + 32;
    sub_1403880E0(v27);
    v27 = v28;
  }
  if ( v55 )
    sub_140001660(v53, 32 * v55, 8);
  result = v57;
  v30 = v51;
  v51[1].m128i_i64[0] = v57;
  *v30 = _mm_loadu_si128(&v56);
  v31 = *((_QWORD *)&v46 + 1);
  if ( *((_QWORD *)&v46 + 1) )
  {
    v32 = *((_QWORD *)&v47 + 1);
    if ( *((_QWORD *)&v47 + 1) )
    {
      v33 = v46;
      v34 = (const __m128i *)(v46 + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v46));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v34);
            v33 -= 384;
            ++v34;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v37 = -3 * result;
        v38 = *(_QWORD *)(v33 + 8 * v37 - 24);
        if ( v38 )
          sub_140001660(*(_QWORD *)(v33 + 8 * v37 - 16), v38, 1);
        --v32;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v32 );
    }
    result = (24 * v31 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v39 = result + v31 + 17;
    if ( v39 )
      return sub_140001660(v46 - result, v39, 16);
  }
  return result;
}
