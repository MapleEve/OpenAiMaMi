// mac 1.2.2 NEW codexmate_lib4core5relay7storage43preserve_state_b 0x101393180 d=2
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

  result = a1; /*0x101393180*/
  if ( a3 > 0xF ) /*0x101393187*/
  {
    v5 = ((a2 + 7) & 0xFFFFFFFFFFFFFFF8LL) - a2; /*0x1013931bf*/
    if ( v5 ) /*0x1013931c2*/
    {
      v4 = 0; /*0x101393223*/
      while ( *(_BYTE *)(a2 + v4) ) /*0x101393234*/
      {
        if ( v5 == ++v4 ) /*0x10139323c*/
        {
          v6 = a3 - 16; /*0x10139323e*/
          if ( v5 > a3 - 16 ) /*0x101393245*/
            goto LABEL_20; /*0x101393245*/
          goto LABEL_9; /*0x101393245*/
        }
      }
      goto LABEL_23; /*0x101393234*/
    }
    v6 = a3 - 16; /*0x1013931c4*/
    v5 = 0; /*0x1013931c8*/
LABEL_9:
    si128 = _mm_load_si128((const __m128i *)&xmmword_1016E0490); /*0x1013931ca*/
    do /*0x10139321f*/
    {
      v8 = _mm_loadu_si128((const __m128i *)(a2 + v5)); /*0x1013931f0*/
      v9 = _mm_or_si128(_mm_sub_epi64(si128, v8), v8); /*0x1013931fd*/
      if ( (v9.i64[0] & 0x8080808080808080LL & _mm_extract_epi64(v9, 1)) != 0x8080808080808080LL ) /*0x101393216*/
        break; /*0x101393216*/
      v5 += 16LL; /*0x101393218*/
    }
    while ( v5 <= v6 ); /*0x10139321f*/
LABEL_20:
    while ( a3 != v5 ) /*0x10139325c*/
    {
      if ( !*(_BYTE *)(a2 + v5) ) /*0x101393254*/
      {
        v4 = v5; /*0x10139326f*/
        goto LABEL_23; /*0x10139326f*/
      }
      ++v5; /*0x101393256*/
    }
LABEL_21:
    result[1] = 1; /*0x10139325e*/
    *result = 1; /*0x10139326b*/
    return result; /*0x10139326e*/
  }
  if ( !a3 ) /*0x10139318c*/
    goto LABEL_21; /*0x10139318c*/
  v4 = 0; /*0x101393192*/
  while ( *(_BYTE *)(a2 + v4) ) /*0x1013931a4*/
  {
    if ( a3 == ++v4 ) /*0x1013931b0*/
      goto LABEL_21; /*0x1013931b0*/
  }
LABEL_23:
  if ( v4 + 1 == a3 ) /*0x101393279*/
  {
    result[1] = a2; /*0x10139327b*/
    result[2] = a3; /*0x10139327f*/
    *result = 0; /*0x101393285*/
  }
  else
  {
    result[1] = 0; /*0x101393289*/
    result[2] = v4; /*0x101393291*/
    *result = 1; /*0x10139329a*/
  }
  return result; /*0x10139326e*/
}