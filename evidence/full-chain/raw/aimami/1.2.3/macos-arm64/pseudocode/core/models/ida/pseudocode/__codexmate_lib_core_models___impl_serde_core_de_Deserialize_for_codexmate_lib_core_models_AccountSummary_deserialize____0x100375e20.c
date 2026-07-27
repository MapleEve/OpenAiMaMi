// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::_::<impl serde_core::de::Deserialize for codexmate_lib::core::models::AccountSummary>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::h687a1a7b48e5c459 @ 0x100375e20 | full-body via IDA decompiler
_BYTE *__fastcall _$LT$codexmate_lib..core..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..models..AccountSummary$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::h687a1a7b48e5c459(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm1

  result = a1;
  switch ( a3 )
  {
    case 4LL:
      if ( *(_DWORD *)a2 != 1851878512 )
        goto LABEL_37;
      a1[1] = 6;
      *a1 = 0;
      break;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x69616D65 | *(unsigned __int8 *)(a2 + 4) ^ 0x6C )
      {
        if ( *(_DWORD *)a2 ^ 0x61696C61 | *(unsigned __int8 *)(a2 + 4) ^ 0x73 )
          goto LABEL_37;
        a1[1] = 2;
        *a1 = 0;
      }
      else
      {
        a1[1] = 1;
        *a1 = 0;
      }
      break;
    case 8LL:
      if ( *(_QWORD *)a2 == 0x65646F4D68747561LL )
      {
        a1[1] = 9;
        *a1 = 0;
      }
      else
      {
        if ( *(_QWORD *)a2 != 0x6576697463417369LL )
          goto LABEL_37;
        a1[1] = 16;
        *a1 = 0;
      }
      break;
    case 9LL:
      if ( *(_QWORD *)a2 ^ 0x4164657461657263LL | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL )
        goto LABEL_37;
      a1[1] = 17;
      *a1 = 0;
      break;
    case 10LL:
      if ( *(_QWORD *)a2 ^ 0x4B746E756F636361LL | *(unsigned __int16 *)(a2 + 8) ^ 0x7965LL )
      {
        if ( *(_QWORD *)a2 ^ 0x72756F536E616C70LL | *(unsigned __int16 *)(a2 + 8) ^ 0x6563LL )
        {
          if ( *(_QWORD *)a2 ^ 0x646573557473616CLL | *(unsigned __int16 *)(a2 + 8) ^ 0x7441LL )
            goto LABEL_37;
          a1[1] = 18;
          *a1 = 0;
        }
        else
        {
          a1[1] = 7;
          *a1 = 0;
        }
      }
      else
      {
        a1[1] = 0;
        *a1 = 0;
      }
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x4E746E756F636361LL | *(_QWORD *)(a2 + 3) ^ 0x656D614E746E756FLL )
      {
        if ( *(_QWORD *)a2 ^ 0x4E656C69666F7270LL | *(_QWORD *)(a2 + 3) ^ 0x656D614E656C6966LL )
        {
          if ( *(_QWORD *)a2 ^ 0x676173557473616CLL | *(_QWORD *)(a2 + 3) ^ 0x7441656761735574LL )
          {
            if ( *(_QWORD *)a2 ^ 0x756F536567617375LL | *(_QWORD *)(a2 + 3) ^ 0x656372756F536567LL )
            {
              if ( *(_QWORD *)a2 ^ 0x6174536E656B6F74LL | *(_QWORD *)(a2 + 3) ^ 0x7375746174536E65LL )
                goto LABEL_37;
              a1[1] = 23;
              *a1 = 0;
            }
            else
            {
              a1[1] = 20;
              *a1 = 0;
            }
          }
          else
          {
            a1[1] = 19;
            *a1 = 0;
          }
        }
        else
        {
          a1[1] = 5;
          *a1 = 0;
        }
      }
      else
      {
        a1[1] = 3;
        *a1 = 0;
      }
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x636170736B726F77LL | *(_QWORD *)(a2 + 5) ^ 0x656D614E65636170LL )
      {
        if ( *(_QWORD *)a2 ^ 0x577972616D697270LL | *(_QWORD *)(a2 + 5) ^ 0x776F646E69577972LL )
          goto LABEL_37;
        a1[1] = 21;
        *a1 = 0;
      }
      else
      {
        a1[1] = 4;
        *a1 = 0;
      }
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x6573624F6E616C70LL | *(_QWORD *)(a2 + 6) ^ 0x7441646576726573LL )
        goto LABEL_37;
      a1[1] = 8;
      *a1 = 0;
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x7261646E6F636573LL | *(_QWORD *)(a2 + 7) ^ 0x776F646E69577972LL )
        goto LABEL_37;
      a1[1] = 22;
      *a1 = 0;
      break;
    case 18LL:
      v8 = _mm_or_si128(
             _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_1015E3760),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3750));
      if ( _mm_testz_si128(v8, v8) )
      {
        a1[1] = 13;
        *a1 = 0;
      }
      else
      {
        v9 = _mm_or_si128(
               _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_1015E3780),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3770));
        if ( !_mm_testz_si128(v9, v9) )
          goto LABEL_37;
        a1[1] = 14;
        *a1 = 0;
      }
      break;
    case 21LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E37A0),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 5)), (__m128i)xmmword_1015E3790));
      if ( _mm_testz_si128(v4, v4) )
      {
        a1[1] = 10;
        *a1 = 0;
      }
      else
      {
        v5 = _mm_or_si128(
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E37C0),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 5)), (__m128i)xmmword_1015E37B0));
        if ( _mm_testz_si128(v5, v5) )
        {
          a1[1] = 11;
          *a1 = 0;
        }
        else
        {
          v6 = _mm_or_si128(
                 _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E37E0),
                 _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 5)), (__m128i)xmmword_1015E37D0));
          if ( !_mm_testz_si128(v6, v6) )
            goto LABEL_37;
          a1[1] = 12;
          *a1 = 0;
        }
      }
      break;
    case 22LL:
      v7 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1015E3740),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 6)), (__m128i)xmmword_1015E3730));
      if ( !_mm_testz_si128(v7, v7) )
        goto LABEL_37;
      a1[1] = 15;
      *a1 = 0;
      break;
    default:
LABEL_37:
      a1[1] = 24;
      *a1 = 0;
      break;
  }
  return result;
}
