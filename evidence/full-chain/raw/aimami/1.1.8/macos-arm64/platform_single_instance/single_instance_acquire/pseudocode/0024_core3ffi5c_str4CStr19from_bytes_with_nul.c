// mac 1.1.8 BEHAVIORAL-BACKEND single_instance_acquire node 0x1010dc5c0 depth=2
// core3ffi5c_str4CStr19from_bytes_with_nul
_QWORD *__fastcall core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *result; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __m128i si128; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm2

  result = a1; /*0x1010dc5c0*/
  if ( a3 > 0xF ) /*0x1010dc5c7*/
  {
    v5 = ((a2 + 7) & 0xFFFFFFFFFFFFFFF8LL) - a2; /*0x1010dc5ff*/
    if ( v5 ) /*0x1010dc602*/
    {
      v4 = 0; /*0x1010dc663*/
      while ( *(_BYTE *)(a2 + v4) ) /*0x1010dc674*/
      {
        if ( v5 == ++v4 ) /*0x1010dc67c*/
        {
          v6 = a3 - 16; /*0x1010dc67e*/
          if ( v5 > a3 - 16 ) /*0x1010dc685*/
            goto LABEL_20; /*0x1010dc685*/
          goto LABEL_9; /*0x1010dc685*/
        }
      }
      goto LABEL_23; /*0x1010dc674*/
    }
    v6 = a3 - 16; /*0x1010dc604*/
    v5 = 0; /*0x1010dc608*/
LABEL_9:
    si128 = _mm_load_si128((const __m128i *)&xmmword_1013F6F30); /*0x1010dc60a*/
    do /*0x1010dc65f*/
    {
      v8 = _mm_loadu_si128((const __m128i *)(a2 + v5)); /*0x1010dc630*/
      v9 = _mm_or_si128(_mm_sub_epi64(si128, v8), v8); /*0x1010dc63d*/
      if ( (v9.i64[0] & 0x8080808080808080LL & _mm_extract_epi64(v9, 1)) != 0x8080808080808080LL ) /*0x1010dc656*/
        break; /*0x1010dc656*/
      v5 += 16LL; /*0x1010dc658*/
    }
    while ( v5 <= v6 ); /*0x1010dc65f*/
LABEL_20:
    while ( a3 != v5 ) /*0x1010dc69c*/
    {
      if ( !*(_BYTE *)(a2 + v5) ) /*0x1010dc694*/
      {
        v4 = v5; /*0x1010dc6af*/
        goto LABEL_23; /*0x1010dc6af*/
      }
      ++v5; /*0x1010dc696*/
    }
LABEL_21:
    result[1] = 1; /*0x1010dc69e*/
    *result = 1; /*0x1010dc6ab*/
    return result; /*0x1010dc6ae*/
  }
  if ( !a3 ) /*0x1010dc5cc*/
    goto LABEL_21; /*0x1010dc5cc*/
  v4 = 0; /*0x1010dc5d2*/
  while ( *(_BYTE *)(a2 + v4) ) /*0x1010dc5e4*/
  {
    if ( a3 == ++v4 ) /*0x1010dc5f0*/
      goto LABEL_21; /*0x1010dc5f0*/
  }
LABEL_23:
  if ( v4 + 1 == a3 ) /*0x1010dc6b9*/
  {
    result[1] = a2; /*0x1010dc6bb*/
    result[2] = a3; /*0x1010dc6bf*/
    *result = 0; /*0x1010dc6c5*/
  }
  else
  {
    result[1] = 0; /*0x1010dc6c9*/
    result[2] = v4; /*0x1010dc6d1*/
    *result = 1; /*0x1010dc6da*/
  }
  return result; /*0x1010dc6ae*/
}