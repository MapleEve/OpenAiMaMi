// win 1.2.7 latest-exe | module src/core/relay/codex_catalog.rs | ea 0x140871420 | successor of pre-update 0x1403ac810 | session <审计会话>
// match evidence: {"body_sim": 0.763, "str_ov": 0, "anchor": 0.166, "conf": false, "verdict": "CONFIRMED_FINAL"}
__int64 __fastcall sub_140871420(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r9
  const __m128i *v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __m128i v10; // xmm0
  __m128i v11; // xmm6
  _QWORD *v12; // r9
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 i; // rcx
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm8
  const __m128i *v20; // r15
  __int64 v21; // rsi
  int v22; // eax
  int v23; // eax
  bool v24; // zf
  __int64 v26; // rsi
  char v27; // al
  const __m128i *v28; // rax
  __m128i v31; // [rsp+20h] [rbp-60h] BYREF
  __int64 v32; // [rsp+30h] [rbp-50h]
  __int64 v33; // [rsp+38h] [rbp-48h]
  __int64 v34; // [rsp+40h] [rbp-40h]
  const __m128i *v35; // [rsp+48h] [rbp-38h]
  __int64 v36; // [rsp+50h] [rbp-30h]
  __int64 v37; // [rsp+58h] [rbp-28h]
  __int64 v38; // [rsp+60h] [rbp-20h]
  __int64 v39; // [rsp+68h] [rbp-18h]
  _QWORD *v40; // [rsp+70h] [rbp-10h]
  __int64 v41; // [rsp+78h] [rbp-8h]

  v41 = -2;
  v3 = a1;
  v39 = a3;
  v33 = a3;
  _RBX = a1 + 32;
  v40 = a2;
  v5 = sub_1406CECD0(a1 + 32, a2);
  if ( !*(_QWORD *)(v3 + 16) )
  {
    LOBYTE(v6) = 1;
    sub_141932370(v3, 1, _RBX, v6);
  }
  v7 = *(const __m128i **)v3;
  v8 = *(_QWORD *)(v3 + 8);
  v9 = v5 >> 57;
  v10 = _mm_cvtsi32_si128(v5 >> 57);
  v11 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v10, v10), 0), 68);
  v12 = v40;
  v13 = v40[1];
  v14 = v40[2];
  _RAX = 0;
  for ( i = 0; ; i += 16 )
  {
    v17 = v8 & v5;
    v18 = _mm_loadu_si128((const __m128i *)((char *)v7 + v17));
    _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v18, v11));
    if ( _R14D )
      break;
LABEL_9:
    if ( _RAX != 1 )
    {
      if ( !_mm_movemask_epi8(v18) )
      {
        _RAX = 0;
        goto LABEL_15;
      }
      __asm { tzcnt   ebx, eax }
      _RBX = v8 & (v17 + _RBX);
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v18, (__m128i)-1LL)) )
    {
      v27 = v7->m128i_i8[_RBX];
      if ( v27 >= 0 )
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v7));
        __asm { tzcnt   ebx, eax }
        v27 = v7->m128i_i8[_RBX];
      }
      v32 = v12[2];
      v31 = *(__m128i *)v12;
      v7->m128i_i8[_RBX] = v9;
      v7[1].m128i_i8[v8 & (_RBX - 16)] = v9;
      *(__m128i *)(v3 + 16) = _mm_sub_epi64(
                                _mm_loadu_si128((const __m128i *)(v3 + 16)),
                                (__m128i)_mm_shuffle_pd(
                                           (__m128d)_mm_cvtsi32_si128(v27 & 1),
                                           (__m128d)xmmword_14196F130,
                                           2));
      v28 = &v7[-2 * _RBX];
      v28[-1].m128i_i64[0] = v32;
      v28[-2] = _mm_load_si128(&v31);
      v28[-1].m128i_i64[1] = v39;
      return 0;
    }
    _RAX = 1;
LABEL_15:
    v5 = i + v17 + 16;
  }
  v34 = v8;
  v35 = v7;
  v36 = v3;
  v37 = i;
  v38 = _RAX;
  while ( 1 )
  {
    __asm { tzcnt   eax, r14d }
    v20 = &v7[-2 * (v8 & (v17 + _RAX))];
    if ( v14 == v20[-1].m128i_i64[0] )
    {
      v21 = v14;
      v22 = sub_141923B40(v13, v20[-2].m128i_i64[1], v14);
      v14 = v21;
      v12 = v40;
      if ( !v22 )
        break;
    }
    v23 = _R14D - 1;
    LOWORD(v23) = _R14D & (_R14D - 1);
    v24 = (_WORD)v23 == 0;
    _R14D = v23;
    v8 = v34;
    v7 = v35;
    v3 = v36;
    i = v37;
    _RAX = v38;
    if ( v24 )
      goto LABEL_9;
  }
  v26 = v20[-1].m128i_i64[1];
  v20[-1].m128i_i64[1] = v39;
  if ( *v12 )
    sub_140001660(v12[1], *v12, 1);
  return v26;
}
