// win 1.2.1 NEW upload_debug_report 0x1403c88e0 d=2
_QWORD *__fastcall sub_1403C88E0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  const __m128i *v5; // rax
  __int64 v6; // rcx
  __m128i *v7; // rax
  __m128i *v8; // rax

  v4 = a2[3]; /*0x1403c88ec*/
  if ( a2[4] >= 0x20u ) /*0x1403c88f8*/
  {
    if ( (unsigned __int64)sub_1413D2490(v4) <= 0x7D0 ) /*0x1403c896c*/
    {
LABEL_3:
      v5 = (const __m128i *)a2[6]; /*0x1403c8907*/
      v6 = a2[7]; /*0x1403c890b*/
      if ( v6 == 6 ) /*0x1403c8913*/
      {
        if ( v5->m128i_i32[0] ^ 0x756E616D | v5->m128i_u16[2] ^ 0x6C61 ) /*0x1403c8a47*/
          goto LABEL_12; /*0x1403c8a49*/
      }
      else
      {
        if ( v6 != 8 ) /*0x1403c891d*/
        {
          if ( v6 == 17 /*0x1403c8956*/
            && _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(v5[1].m128i_u8[0]), (__m128i)xmmword_1415F4100),
                   _mm_cmpeq_epi8(_mm_loadu_si128(v5), (__m128i)xmmword_14167CF40))) == 0xFFFF )
          {
            goto LABEL_15; /*0x1403c8956*/
          }
          goto LABEL_12; /*0x1403c8956*/
        }
        if ( v5->m128i_i64[0] != 0x6B63616264656566LL ) /*0x1403c89da*/
        {
LABEL_12:
          nullsub_1(); /*0x1403c89dc*/
          v8 = (__m128i *)sub_140001350(38, 1); /*0x1403c89eb*/
          if ( !v8 ) /*0x1403c89f3*/
            sub_1415F08AB(1, 38); /*0x1403c8a77*/
          qmemcpy(&v8[1], "nostic report category", 22); /*0x1403c89fc*/
          *v8 = _mm_loadu_si128((const __m128i *)&xmmword_1416844A0); /*0x1403c8a08*/
          *a1 = 9; /*0x1403c8a1a*/
          a1[1] = 38; /*0x1403c8a21*/
          a1[2] = v8; /*0x1403c8a29*/
          a1[3] = 38; /*0x1403c8a2d*/
          return a1; /*0x1403c8a35*/
        }
      }
LABEL_15:
      *a1 = -1; /*0x1403c8a4b*/
      return a1; /*0x1403c8a4b*/
    }
  }
  else if ( (unsigned __int64)sub_1413D2AB0(v4) <= 0x7D0 ) /*0x1403c8905*/
  {
    goto LABEL_3; /*0x1403c8905*/
  }
  nullsub_1(); /*0x1403c896e*/
  v7 = (__m128i *)sub_140001350(47, 1); /*0x1403c897d*/
  if ( !v7 ) /*0x1403c8985*/
    sub_1415F08AB(1, 47); /*0x1403c8a66*/
  qmemcpy(&v7[1], "must not exceed 2000 characters", 31); /*0x1403c899d*/
  *v7 = _mm_loadu_si128((const __m128i *)&xmmword_1416844C6); /*0x1403c89a9*/
  *a1 = 9; /*0x1403c89ad*/
  a1[1] = 47; /*0x1403c89b4*/
  a1[2] = v7; /*0x1403c89bc*/
  a1[3] = 47; /*0x1403c89c0*/
  return a1; /*0x1403c8a55*/
}