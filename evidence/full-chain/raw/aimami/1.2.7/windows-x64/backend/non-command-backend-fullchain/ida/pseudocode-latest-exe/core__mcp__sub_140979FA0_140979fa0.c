// win 1.2.7 latest-exe | module src/core/mcp.rs | ea 0x140979fa0 | successor of pre-update 0x140ed19b0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_140979FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64); // rax
  const __m128i *v12; // r8
  __m128i si128; // xmm0
  const __m128i *v14; // r13
  unsigned __int64 v15; // rsi
  __int64 *v16; // r15
  __int64 *v17; // rdi
  __int64 v18; // r12
  const __m128i *v19; // rsi
  __int64 v20; // r13
  unsigned __int64 v21; // rbx
  __m128i v23; // xmm0
  __m128i v24; // xmm7
  __int64 i; // rcx
  unsigned __int64 v26; // rbx
  __m128i v27; // xmm8
  __int64 v29; // r14
  const __m128i *v30; // rdi
  const __m128i *v31; // rsi
  __int64 (__fastcall *v32)(_DWORD *, __int64, __int64, __int64, __int64 *); // rax
  _DWORD v33[44]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v34[168]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v35; // [rsp+188h] [rbp+108h] BYREF
  _QWORD v36[2]; // [rsp+190h] [rbp+110h] BYREF
  __int16 v37; // [rsp+1A0h] [rbp+120h]
  __int64 v38; // [rsp+1A8h] [rbp+128h]
  _QWORD v39[2]; // [rsp+238h] [rbp+1B8h] BYREF
  unsigned __int64 v40; // [rsp+248h] [rbp+1C8h]
  __int64 v41; // [rsp+250h] [rbp+1D0h]
  __int64 v42; // [rsp+258h] [rbp+1D8h]
  __int64 v43; // [rsp+260h] [rbp+1E0h]
  __int64 *v44; // [rsp+268h] [rbp+1E8h]
  __int64 v45; // [rsp+270h] [rbp+1F0h]
  __int64 v46; // [rsp+278h] [rbp+1F8h]
  __int64 v47; // [rsp+280h] [rbp+200h]
  __int64 v48; // [rsp+288h] [rbp+208h]
  __int64 v49; // [rsp+290h] [rbp+210h]
  __int64 v50; // [rsp+298h] [rbp+218h]
  __int64 v51; // [rsp+2A0h] [rbp+220h]
  __int64 *v52; // [rsp+2A8h] [rbp+228h]
  char v53; // [rsp+2B4h] [rbp+234h] BYREF
  char v54; // [rsp+2B5h] [rbp+235h]
  char v55; // [rsp+2B6h] [rbp+236h]
  char v56; // [rsp+2B7h] [rbp+237h]
  __int64 v57; // [rsp+2B8h] [rbp+238h]

  v57 = -2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64))(a2 + 128))(&v35, a1);
  if ( (_DWORD)v35 != -1 )
    result = sub_140903FF0(&v35);
  v10 = *(_QWORD *)(a5 + 24);
  if ( v10 )
  {
    sub_1411F25A0(v34);
    v11 = *(__int64 (__fastcall **)(__int64))(a2 + 168);
    v56 = 1;
    v34[161] = v11(a1);
    v12 = *(const __m128i **)a5;
    v50 = *(_QWORD *)(a5 + 8);
    si128 = _mm_load_si128(v12);
    v14 = v12;
    v35 = (__int64)v12;
    v36[0] = v12 + 1;
    v36[1] = (char *)v12->m128i_i64 + v50 + 1;
    v37 = ~(unsigned __int16)_mm_movemask_epi8(si128);
    v38 = v10;
    v56 = 1;
    sub_1402147A0(v39, &v35);
    v52 = (__int64 *)v39[1];
    v15 = v40;
    if ( v40 >= 2 )
    {
      if ( v40 >= 0x15 )
      {
        v55 = 1;
        v54 = 1;
        sub_1401B8D60(v52, v40, &v53);
      }
      else
      {
        sub_140CC5400(v52, v40, 1, &v53);
      }
    }
    v49 = a2;
    v48 = a1;
    v47 = a3;
    v46 = a4;
    v51 = v39[0];
    v16 = v52;
    v17 = &v52[v15];
    v18 = a5 + 32;
    v19 = v14;
    v43 = a5 + 32;
    v44 = v17;
    while ( v16 != v17 )
    {
      v20 = *v16;
      v41 = *(_QWORD *)(*v16 + 8);
      v42 = *(_QWORD *)(v20 + 16);
      v21 = sub_1406CECD0(v18, v20);
      ++v16;
      _RAX = v21 >> 57;
      v23 = _mm_cvtsi32_si128(v21 >> 57);
      v24 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v23, v23), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        v26 = v50 & v21;
        v27 = _mm_loadu_si128((const __m128i *)((char *)v19 + v26));
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v27, v24));
        if ( _R12D )
          break;
LABEL_13:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v27, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
          sub_14196B590(aNoEntryFoundFo, 22, &off_141A5CC40);
        v21 = i + v26 + 16;
      }
      v29 = *(_QWORD *)(v20 + 16);
      v45 = i;
      while ( 1 )
      {
        __asm { tzcnt   eax, r12d }
        v30 = v19;
        if ( v29 == v19[-3 * (v50 & (v26 + _RAX)) - 2].m128i_i64[0] )
        {
          v31 = &v19[-3 * (v50 & (v26 + _RAX))];
          if ( !(unsigned int)sub_141923B40(*(_QWORD *)(v20 + 8), v31[-3].m128i_i64[1], v29) )
            break;
        }
        _RAX = (unsigned int)(_R12D - 1);
        LOWORD(_RAX) = _R12D & (_R12D - 1);
        _R12D = _RAX;
        v19 = v30;
        i = v45;
        if ( !(_WORD)_RAX )
          goto LABEL_13;
      }
      sub_1411F41D0(&v35, v31[-1].m128i_i64[0], v31[-1].m128i_i64[1]);
      v18 = v43;
      v19 = v30;
      v17 = v44;
      sub_1419234B0(v33, &v35, 176);
      sub_1411F2B60((unsigned int)&v35, (unsigned int)v34, v41, v42, (__int64)v33);
      if ( (_DWORD)v35 != -1 )
        sub_140903FF0(&v35);
    }
    if ( v51 )
      sub_140001660(v52, 8 * v51, 8);
    sub_1419234B0(v36, v34, 168);
    v35 = 10;
    v32 = *(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64, __int64 *))(v49 + 120);
    v55 = 0;
    v54 = 0;
    result = v32(v33, v48, v47, v46, &v35);
    if ( v33[0] != -1 )
    {
      v55 = 0;
      v54 = 0;
      return sub_140903FF0(v33);
    }
  }
  return result;
}
