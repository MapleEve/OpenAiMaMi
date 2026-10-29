// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x14019d000 | successor of pre-update 0x14037c790 | session <审计会话>
// match evidence: {"body_sim": 0.649, "str_ov": 0, "anchor": 0.307, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
unsigned __int64 __fastcall sub_14019D000(unsigned __int64 a1, _QWORD *j)
{
  unsigned __int64 result; // rax
  __int64 v3; // r15
  __int64 v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __m128i v9; // xmm8
  unsigned __int64 v11; // r15
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __m128i v17; // xmm0
  __m128i v18; // xmm7
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __m128i v24; // xmm8
  int v27; // eax
  __int64 i; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  _QWORD *v31; // rdi
  __m128i v32; // xmm0
  __m128i v33; // xmm7
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rdx
  unsigned __int64 v37; // [rsp+20h] [rbp-60h]
  __int64 v38; // [rsp+28h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-48h]
  unsigned __int64 v41; // [rsp+40h] [rbp-40h]
  __int64 v42; // [rsp+48h] [rbp-38h]
  __int64 v43; // [rsp+50h] [rbp-30h]
  __int64 v44; // [rsp+50h] [rbp-30h]
  _QWORD *v45; // [rsp+58h] [rbp-28h]
  unsigned __int64 v46; // [rsp+58h] [rbp-28h]
  unsigned __int64 v47; // [rsp+60h] [rbp-20h]

  result = *(_QWORD *)(a1 + 16);
  v41 = result;
  if ( !result )
    return result;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = j[3];
  v5 = j + 4;
  v6 = *j;
  v40 = j[1];
  v42 = v3;
  if ( !v4 )
  {
    v47 = 0;
    v21 = *(_QWORD *)(a1 + 8);
LABEL_14:
    sub_1401AE750(v21, j);
    v22 = v47 + 1;
    if ( v47 + 1 >= v41 )
    {
LABEL_33:
      result = a1;
      *(_QWORD *)(a1 + 16) = v47;
      return result;
    }
    while ( 1 )
    {
      v46 = v22;
      v44 = v3 + 192 * v22;
      v31 = (_QWORD *)(v44 + 144);
      if ( v4 )
      {
        v29 = sub_1406CECD0(v5, v3 + 192 * v22 + 144);
        v32 = _mm_cvtsi32_si128(v29 >> 57);
        v33 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v32, v32), 0), 68);
        HIDWORD(_RCX) = HIDWORD(v44);
        v34 = *(_QWORD *)(v44 + 152);
        v35 = *(_QWORD *)(v44 + 160);
        for ( i = 0; ; i += 16 )
        {
          v23 = v40 & v29;
          v24 = _mm_loadu_si128((const __m128i *)(v6 + v23));
          _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v24, v33));
          if ( _R15D )
            break;
LABEL_21:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v24, (__m128i)-1LL));
          v3 = v42;
          if ( (_DWORD)_RCX )
            goto LABEL_28;
          v29 = i + v23 + 16;
        }
        v37 = v23;
        v38 = i;
        while ( 1 )
        {
          __asm { tzcnt   ecx, r15d }
          _RCX = -(__int64)(v40 & (v23 + _RCX));
          if ( v35 == *(_QWORD *)(v6 + 24 * _RCX - 8)
            && !(unsigned int)sub_141923B40(v34, *(_QWORD *)(v6 + 24 * _RCX - 16), v35) )
          {
            break;
          }
          v27 = _R15D - 1;
          LOWORD(v27) = _R15D & (_R15D - 1);
          v14 = (_WORD)v27 == 0;
          _R15D = v27;
          v23 = v37;
          i = v38;
          if ( v14 )
            goto LABEL_21;
        }
        v3 = v42;
        sub_1419234B0(v42 + 192 * v47++, v44, 192);
      }
      else
      {
LABEL_28:
        if ( *v31 )
          sub_140001660(*(_QWORD *)(v44 + 152), *v31, 1);
        if ( *(_DWORD *)(v44 + 96) != 2 )
        {
          v36 = *(_QWORD *)(v44 + 112);
          v30 = v46;
          if ( v36 > 0 )
            sub_140001660(*(_QWORD *)(v44 + 120), v36, 1);
          goto LABEL_25;
        }
      }
      v30 = v46;
LABEL_25:
      v22 = v30 + 1;
      if ( v22 == v41 )
        goto LABEL_33;
    }
  }
  v7 = *j;
  result = 0;
  do
  {
    v47 = result;
    v16 = 192 * result;
    v43 = v3 + 192 * result;
    v15 = sub_1406CECD0(v5, v43 + 144);
    _RCX = v15 >> 57;
    v17 = _mm_cvtsi32_si128(v15 >> 57);
    v18 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v17, v17), 0), 68);
    v19 = *(_QWORD *)(v3 + v16 + 152);
    v20 = *(_QWORD *)(v3 + v16 + 160);
    for ( j = nullptr; ; j += 2 )
    {
      v8 = v40 & v15;
      v9 = _mm_loadu_si128((const __m128i *)(v7 + v8));
      _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v9, v18));
      if ( _ESI )
        break;
LABEL_9:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v9, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
      {
        v6 = v7;
        v21 = v43;
        goto LABEL_14;
      }
      v15 = (unsigned __int64)j + v8 + 16;
    }
    v45 = j;
    while ( 1 )
    {
      __asm { tzcnt   ecx, esi }
      v11 = v8;
      _RCX = -(__int64)(v40 & (v8 + _RCX));
      if ( v20 == *(_QWORD *)(v7 + 24 * _RCX - 8)
        && !(unsigned int)sub_141923B40(v19, *(_QWORD *)(v7 + 24 * _RCX - 16), v20) )
      {
        break;
      }
      v13 = _ESI - 1;
      LOWORD(v13) = _ESI & (_ESI - 1);
      v14 = (_WORD)v13 == 0;
      _ESI = v13;
      v8 = v11;
      v3 = v42;
      j = v45;
      if ( v14 )
        goto LABEL_9;
    }
    result = v47 + 1;
    v3 = v42;
  }
  while ( v47 + 1 != v41 );
  return result;
}
