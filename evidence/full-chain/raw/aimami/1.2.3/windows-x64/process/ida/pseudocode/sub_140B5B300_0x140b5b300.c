// module: codexmate_lib/platform/process
// addr: 0x140b5b300
// name: sub_140B5B300
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140B5B300(__m128i *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int32 v3; // r9d
  __int64 v4; // r10
  unsigned __int32 v5; // r11d
  unsigned __int32 v6; // esi
  unsigned __int64 v7; // r9
  unsigned __int32 v8; // r11d
  unsigned __int32 v9; // esi
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __m128i *v12; // r10
  __int64 v13; // r11
  __int64 v14; // rsi
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __int64 v18; // rax
  __int32 *v19; // r9
  __int64 v20; // r8
  __int64 v21; // rcx
  __int32 v22; // edx

  if ( a2 >= 2 )
  {
    v3 = a1->m128i_u32[1];
    v4 = 2;
    if ( v3 >= a1->m128i_i32[0] )
    {
      if ( a2 != 2 )
      {
        v8 = a1->m128i_u32[1];
        while ( 1 )
        {
          v9 = v8;
          v8 = a1->m128i_u32[v4];
          if ( v8 < v9 )
            break;
          if ( a2 == ++v4 )
            goto LABEL_14;
        }
      }
    }
    else if ( a2 != 2 )
    {
      v5 = a1->m128i_u32[1];
      while ( 1 )
      {
        v6 = v5;
        v5 = a1->m128i_u32[v4];
        if ( v5 >= v6 )
          break;
        if ( a2 == ++v4 )
          goto LABEL_14;
      }
    }
    if ( v4 != a2 )
    {
      _BitScanReverse64(&v7, a2 | 1);
      sub_14070C420((_DWORD)a1, a2, 0, (2 * (v7 ^ 0x3F)) ^ 0x7E, a3);
      return;
    }
LABEL_14:
    if ( v3 < a1->m128i_i32[0] )
    {
      v10 = a2 >> 1;
      if ( a2 < 0x10 )
      {
        v11 = 0;
LABEL_20:
        v18 = -(__int64)v10;
        v19 = &a1->m128i_i32[v11];
        v20 = -v11;
        v21 = (__int64)a1->m128i_i64 + 4 * a2 - 4;
        do
        {
          v22 = *v19;
          *v19 = *(_DWORD *)(v21 + 4 * v20);
          *(_DWORD *)(v21 + 4 * v20--) = v22;
          ++v19;
        }
        while ( v18 != v20 );
        return;
      }
      v11 = v10 & 0xFFFFFFFFFFFFFF8LL;
      v12 = a1 + 1;
      v13 = (__int64)a1[-1].m128i_i64 + 4 * a2;
      v14 = 0;
      do
      {
        v15 = _mm_loadu_si128(v12 - 1);
        v16 = _mm_loadu_si128(v12);
        v17 = _mm_shuffle_epi32(_mm_loadu_si128((const __m128i *)(v13 + 4 * v14 - 16)), 27);
        v12[-1] = _mm_shuffle_epi32(_mm_loadu_si128((const __m128i *)(v13 + 4 * v14)), 27);
        *v12 = v17;
        *(__m128i *)(v13 + 4 * v14) = _mm_shuffle_epi32(v15, 27);
        *(__m128i *)(v13 + 4 * v14 - 16) = _mm_shuffle_epi32(v16, 27);
        v14 -= 8;
        v12 += 2;
      }
      while ( -(__int64)(v10 & 0xFFFFFFFFFFFFFFF8uLL) != v14 );
      if ( v10 != v11 )
        goto LABEL_20;
    }
  }
}