// module: codexmate_lib/core/debug_report_upload
// addr: 0x14073a590
// name: sub_14073A590
// win 1.2.1 | module src/core/debug_report_upload.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_14073A590(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  const __m128i *v7; // rax
  __int64 v8; // rcx
  __m128i *v9; // rax
  __m128i *v10; // rax

  v4 = a2[3];
  v5 = a2[4];
  if ( v5 >= 0x20 )
  {
    if ( (unsigned __int64)sub_1414A35B0(v4, v5) <= 0x7D0 )
    {
LABEL_3:
      v7 = (const __m128i *)a2[6];
      v8 = a2[7];
      if ( v8 == 6 )
      {
        v8 = v7->m128i_i32[0] ^ 0x756E616Du;
        if ( (unsigned int)v8 | v7->m128i_u16[2] ^ 0x6C61 )
          goto LABEL_12;
      }
      else
      {
        if ( v8 != 8 )
        {
          if ( v8 == 17
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(v7[1].m128i_u8[0]), (__m128i)xmmword_1416C6390),
                   _mm_cmpeq_epi8(_mm_loadu_si128(v7), (__m128i)xmmword_141786350))) == 0xFFFF )
          {
            goto LABEL_15;
          }
          goto LABEL_12;
        }
        v8 = 0x6B63616264656566LL;
        if ( v7->m128i_i64[0] != 0x6B63616264656566LL )
        {
LABEL_12:
          nullsub_1(v8);
          v10 = (__m128i *)sub_140001650(38, 1);
          if ( !v10 )
            sub_1416C2D4B(1, 38);
          qmemcpy(&v10[1], "nostic report category", 22);
          *v10 = _mm_loadu_si128((const __m128i *)&xmmword_14178A95B);
          *a1 = 10;
          a1[1] = 38;
          a1[2] = v10;
          a1[3] = 38;
          return a1;
        }
      }
LABEL_15:
      *a1 = -1;
      return a1;
    }
  }
  else if ( (unsigned __int64)sub_1414A3BD0(v4, v5) <= 0x7D0 )
  {
    goto LABEL_3;
  }
  nullsub_1(v6);
  v9 = (__m128i *)sub_140001650(47, 1);
  if ( !v9 )
    sub_1416C2D4B(1, 47);
  qmemcpy(&v9[1], "must not exceed 2000 characters", 31);
  *v9 = _mm_loadu_si128((const __m128i *)&xmmword_14178A981);
  *a1 = 10;
  a1[1] = 47;
  a1[2] = v9;
  a1[3] = 47;
  return a1;
}