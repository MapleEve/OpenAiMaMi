// __ZN13codexmate_lib4core5relay18router_unlock_auth26managed_api_key_from_value @ 0x10056cc00 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::managed_api_key_from_value::h54c8fb9f0e591448(
        __int64 a1)
{
  __int64 v1; // rax
  _BYTE *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm0
  __int64 v9; // r15
  __int64 v10; // rax

  v1 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_10166F9AD, 9, a1); /*0x10056cc1c*/
  if ( v1 /*0x10056cd6c*/
    && *(_BYTE *)v1 == 3
    && (v2 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(
                        *(_QWORD *)(v1 + 16),
                        *(_QWORD *)(v1 + 24)),
        v3 == 6)
    && (*v2 | (unsigned __int8)(32 * ((unsigned __int8)(*v2 - 65) < 0x1Au))) == 97
    && (v2[1] | (unsigned __int8)(32 * ((unsigned __int8)(v2[1] - 65) < 0x1Au))) == 112
    && (v2[2] | (unsigned __int8)(32 * ((unsigned __int8)(v2[2] - 65) < 0x1Au))) == 105
    && (v2[3] | (unsigned __int8)(32 * ((unsigned __int8)(v2[3] - 65) < 0x1Au))) == 107
    && (v2[4] | (unsigned __int8)(32 * ((unsigned __int8)(v2[4] - 65) < 0x1Au))) == 101
    && (v2[5] | (unsigned __int8)(32 * ((unsigned __int8)(v2[5] - 65) < 0x1Au))) == 121
    && (v4 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               &unk_10166F9BC,
               14,
               a1)) != 0
    && *(_BYTE *)v4 == 3
    && (v5 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(
               *(_QWORD *)(v4 + 16),
               *(_QWORD *)(v4 + 24)),
        v6 >= 0x17)
    && (v7 = _mm_or_si128(
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_10166EEF0),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v5 + 7)), (__m128i)xmmword_10166EEE0)),
        _mm_testz_si128(v7, v7))
    && ((v9 = v5,
         (v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &unk_10166F9CA,
                  6,
                  a1)) == 0)
     || *(_BYTE *)v10 != 5
     || !*(_QWORD *)(v10 + 24)) )
  {
    return v9; /*0x10056cd73*/
  }
  else
  {
    return 0; /*0x10056cd38*/
  }
}