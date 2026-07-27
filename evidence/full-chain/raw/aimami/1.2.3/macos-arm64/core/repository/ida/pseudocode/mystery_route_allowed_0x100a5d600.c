// __ZN13codexmate_lib4core10repository10Repository21mystery_route_allowed @ 0x100a5d600 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::Repository::mystery_route_allowed::h1c335bb2c45fb07b(
        __int64 a1,
        __int64 a2)
{
  unsigned __int16 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __m128i v5; // xmm1
  __int64 result; // rax

  v2 = (unsigned __int16 *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x100a5d604*/
  switch ( v4 ) /*0x100a5d625*/
  {
    case 3LL: /*0x100a5d625*/
      LODWORD(v3) = *v2 ^ 0x636D; /*0x100a5d62a*/
      if ( *v2 ^ 0x636D | *((unsigned __int8 *)v2 + 2) ^ 0x70 ) /*0x100a5d637*/
        goto LABEL_10; /*0x100a5d63a*/
      goto LABEL_13; /*0x100a5d63a*/
    case 6LL: /*0x100a5d625*/
      LODWORD(v3) = *(_DWORD *)v2 ^ 0x6C696B73; /*0x100a5d6b3*/
      if ( !((unsigned int)v3 | v2[2] ^ 0x736C) ) /*0x100a5d6be*/
        goto LABEL_13; /*0x100a5d6c0*/
      goto LABEL_10; /*0x100a5d6c0*/
    case 8LL: /*0x100a5d625*/
      LOBYTE(v3) = 1; /*0x100a5d641*/
      if ( *(_QWORD *)v2 == 0x776569767265766FLL /*0x100a5d67d*/
        || *(_QWORD *)v2 == 0x73746E756F636361LL
        || *(_QWORD *)v2 == 0x736E6F6973736573LL
        || *(_QWORD *)v2 == 0x73676E6974746573LL )
      {
        goto LABEL_11; /*0x100a5d67d*/
      }
      goto LABEL_10; /*0x100a5d67d*/
    case 11LL: /*0x100a5d625*/
      v3 = *(_QWORD *)v2 ^ 0x616E65746E69616DLL; /*0x100a5d6d2*/
      if ( !(v3 | *(_QWORD *)((char *)v2 + 3) ^ 0x65636E616E65746ELL) ) /*0x100a5d6e3*/
        goto LABEL_13; /*0x100a5d6e6*/
      goto LABEL_10; /*0x100a5d6e6*/
    case 12LL: /*0x100a5d625*/
      v3 = *(_QWORD *)v2 ^ 0x7069726373627573LL; /*0x100a5d6f4*/
      if ( !(v3 | *((unsigned int *)v2 + 2) ^ 0x6E6F6974LL) ) /*0x100a5d700*/
        goto LABEL_13; /*0x100a5d703*/
      goto LABEL_10; /*0x100a5d703*/
    case 18LL: /*0x100a5d625*/
      v5 = _mm_or_si128( /*0x100a5d69d*/
             _mm_xor_si128(_mm_cvtsi32_si128(v2[8]), (__m128i)xmmword_10167B930),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)v2), (__m128i)xmmword_10167B920));
      if ( !_mm_testz_si128(v5, v5) ) /*0x100a5d6a6*/
        goto LABEL_10; /*0x100a5d6a6*/
LABEL_13:
      LOBYTE(v3) = 1; /*0x100a5d6c2*/
      result = (unsigned int)v3; /*0x100a5d6c4*/
      break; /*0x100a5d6c7*/
    default:
LABEL_10:
      LODWORD(v3) = 0; /*0x100a5d6a8*/
LABEL_11:
      result = (unsigned int)v3; /*0x100a5d6aa*/
      break; /*0x100a5d6ad*/
  }
  return result; /*0x100a5d6ac*/
}