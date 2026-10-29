// win 1.2.7 | module src/core/mcp.rs | ea 0x140ed19b0 | name sub_140ED19B0
// win 1.2.7 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140ED19B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rsi
  const __m128i *v10; // r12
  __m128i si128; // xmm0
  unsigned __int64 v12; // rsi
  __int64 *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  __m128i v18; // xmm0
  __m128i v19; // xmm7
  __int64 i; // rcx
  unsigned __int64 v21; // rbx
  __m128i v22; // xmm8
  __int64 v24; // r13
  const __m128i *v25; // rsi
  __m128i v26[11]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v27[10]; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v28; // [rsp+188h] [rbp+108h] BYREF
  __int64 v29; // [rsp+198h] [rbp+118h]
  __int16 v30; // [rsp+1A0h] [rbp+120h]
  __int64 v31; // [rsp+1A8h] [rbp+128h]
  _QWORD v32[2]; // [rsp+238h] [rbp+1B8h] BYREF
  unsigned __int64 v33; // [rsp+248h] [rbp+1C8h]
  __int64 v34; // [rsp+250h] [rbp+1D0h]
  __int64 v35; // [rsp+258h] [rbp+1D8h]
  __int64 v36; // [rsp+260h] [rbp+1E0h]
  __int64 *v37; // [rsp+268h] [rbp+1E8h]
  __int64 v38; // [rsp+270h] [rbp+1F0h]
  __int64 v39; // [rsp+278h] [rbp+1F8h]
  __int64 v40; // [rsp+280h] [rbp+200h]
  __int64 v41; // [rsp+288h] [rbp+208h]
  __int64 v42; // [rsp+290h] [rbp+210h]
  const __m128i *v43; // [rsp+298h] [rbp+218h]
  __int64 v44; // [rsp+2A0h] [rbp+220h]
  __int64 *v45; // [rsp+2A8h] [rbp+228h]
  _BYTE v46[2]; // [rsp+2B4h] [rbp+234h] BYREF
  char v47; // [rsp+2B6h] [rbp+236h]
  char v48; // [rsp+2B7h] [rbp+237h]
  __int64 v49; // [rsp+2B8h] [rbp+238h]

  v49 = -2;
  result = sub_1411CD470(&v28, a1, a2, a3);
  if ( v28.m128i_i32[0] != -1 )
    result = sub_140E96620(&v28);
  v9 = *(_QWORD *)(a4 + 24);
  if ( v9 )
  {
    sub_1411CCB00(v27);
    v10 = *(const __m128i **)a4;
    v42 = *(_QWORD *)(a4 + 8);
    si128 = _mm_load_si128(v10);
    v28.m128i_i64[0] = (__int64)v10;
    v28.m128i_i64[1] = (__int64)v10[1].m128i_i64;
    v29 = (__int64)v10->m128i_i64 + v42 + 1;
    v30 = ~(unsigned __int16)_mm_movemask_epi8(si128);
    v31 = v9;
    v46[1] = 1;
    sub_1403DDE00(v32, &v28);
    v45 = (__int64 *)v32[1];
    v12 = v33;
    if ( v33 >= 2 )
    {
      if ( v33 >= 0x15 )
      {
        v48 = 1;
        v47 = 1;
        sub_14065D380(v45, v33, v46);
      }
      else
      {
        sub_140E019F0(v45, v33, 1, v46);
      }
    }
    v41 = a1;
    v40 = a2;
    v39 = a3;
    v44 = v32[0];
    v13 = v45;
    v14 = a4 + 32;
    v36 = v14;
    v43 = v10;
    v37 = &v45[v12];
    if ( v45 != v37 )
    {
      do
      {
        v15 = *v13;
        v34 = *(_QWORD *)(*v13 + 8);
        v35 = *(_QWORD *)(v15 + 16);
        v16 = sub_140D2AC70(v14, v15);
        ++v13;
        _RAX = v16 >> 57;
        v18 = _mm_cvtsi32_si128(v16 >> 57);
        v19 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v18, v18), 0), 68);
        for ( i = 0; ; i += 16 )
        {
          v21 = v42 & v16;
          v22 = _mm_loadu_si128((const __m128i *)((char *)v10 + v21));
          _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v22, v19));
          if ( _R15D )
            break;
LABEL_12:
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v22, (__m128i)-1LL));
          if ( (_DWORD)_RAX )
            sub_141938FE0(aNoEntryFoundFo_0, 22, &off_141A59C98);
          v16 = i + v21 + 16;
          v10 = v43;
        }
        v24 = *(_QWORD *)(v15 + 16);
        v38 = i;
        while ( 1 )
        {
          __asm { tzcnt   eax, r15d }
          v10 = v43;
          if ( v24 == v43[-3 * (v42 & (v21 + _RAX)) - 2].m128i_i64[0] )
          {
            v25 = &v43[-3 * (v42 & (v21 + _RAX))];
            if ( !(unsigned int)sub_1418F4B70(*(_QWORD *)(v15 + 8), v25[-3].m128i_i64[1]) )
              break;
          }
          _RAX = (unsigned int)(_R15D - 1);
          LOWORD(_RAX) = _R15D & (_R15D - 1);
          _R15D = _RAX;
          i = v38;
          if ( !(_WORD)_RAX )
            goto LABEL_12;
        }
        sub_1411CE1B0(&v28, v25[-1].m128i_i64[0], v25[-1].m128i_i64[1]);
        sub_1418F44E0(v26, &v28, 0xB0u);
        sub_1411CD040((unsigned int)&v28, (unsigned int)v27, v34, v35, (__int64)v26);
        if ( v28.m128i_i32[0] != -1 )
          sub_140E96620(&v28);
        v14 = v36;
      }
      while ( v13 != v37 );
    }
    if ( v44 )
      sub_140001660(v45, 8 * v44, 8);
    sub_1418F44E0((__m128i *)&v28.m128i_u64[1], v27, 0xA8u);
    v28.m128i_i64[0] = 10;
    v48 = 0;
    v47 = 0;
    result = sub_1411CD040((unsigned int)v26, v41, v40, v39, (__int64)&v28);
    if ( v26[0].m128i_i32[0] != -1 )
    {
      v48 = 0;
      v47 = 0;
      return sub_140E96620(v26);
    }
  }
  return result;
}
