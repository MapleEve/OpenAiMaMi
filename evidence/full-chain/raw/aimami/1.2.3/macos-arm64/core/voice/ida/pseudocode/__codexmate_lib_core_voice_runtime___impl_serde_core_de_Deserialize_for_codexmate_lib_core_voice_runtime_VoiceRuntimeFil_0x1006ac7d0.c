// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::runtime::_::<impl serde_core::de::Deserialize for codexmate_lib::core::voice::runtime::VoiceRuntimeFile>::deserialize::__FieldVisitor as serde_core::de::Visitor>::visit_str::hc828e7dea073c37a @ 0x1006ac7d0 | full-body via py_exec_file(ida_hexrays.decompile direct write)
_BYTE *__fastcall _$LT$codexmate_lib..core..voice..runtime.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$..deserialize..__FieldVisitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_str::hc828e7dea073c37a(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *result; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0

  result = a1;
  switch ( a3 )
  {
    case 7LL:
      if ( *(_DWORD *)a2 ^ 0x62616E65 | *(_DWORD *)(a2 + 3) ^ 0x64656C62 )
        goto LABEL_41;
      a1[1] = 1;
      *a1 = 0;
      break;
    case 11LL:
      if ( *(_QWORD *)a2 ^ 0x6F4D686365657073LL | *(_QWORD *)(a2 + 3) ^ 0x6C65646F4D686365LL )
      {
        if ( *(_QWORD *)a2 ^ 0x6F5374706D6F7270LL | *(_QWORD *)(a2 + 3) ^ 0x646E756F5374706DLL )
          goto LABEL_41;
        a1[1] = 24;
        *a1 = 0;
      }
      else
      {
        a1[1] = 16;
        *a1 = 0;
      }
      break;
    case 12LL:
      if ( *(_QWORD *)a2 ^ 0x5372656767697274LL | *(unsigned int *)(a2 + 8) ^ 0x656C7974LL )
      {
        if ( *(_QWORD *)a2 ^ 0x417065654B63696DLL | *(unsigned int *)(a2 + 8) ^ 0x6576696CLL )
        {
          if ( *(_QWORD *)a2 ^ 0x5379616C7265766FLL | *(unsigned int *)(a2 + 8) ^ 0x656C7974LL )
            goto LABEL_41;
          a1[1] = 26;
          *a1 = 0;
        }
        else
        {
          a1[1] = 23;
          *a1 = 0;
        }
      }
      else
      {
        a1[1] = 6;
        *a1 = 0;
      }
      break;
    case 13LL:
      if ( *(_QWORD *)a2 ^ 0x6556616D65686373LL | *(_QWORD *)(a2 + 5) ^ 0x6E6F697372655661LL )
      {
        if ( *(_QWORD *)a2 ^ 0x7544656D756C6F76LL | *(_QWORD *)(a2 + 5) ^ 0x676E696B63754465LL )
          goto LABEL_41;
        a1[1] = 22;
        *a1 = 0;
      }
      else
      {
        a1[1] = 0;
        *a1 = 0;
      }
      break;
    case 14LL:
      if ( *(_QWORD *)a2 ^ 0x68536C61626F6C67LL | *(_QWORD *)(a2 + 6) ^ 0x74756374726F6853LL )
      {
        if ( *(_QWORD *)a2 ^ 0x4B72656767697274LL | *(_QWORD *)(a2 + 6) ^ 0x65646F4379654B72LL )
        {
          if ( *(_QWORD *)a2 ^ 0x4B72656767697274LL | *(_QWORD *)(a2 + 6) ^ 0x646E694B79654B72LL )
          {
            if ( *(_QWORD *)a2 ^ 0x69737365636F7270LL | *(_QWORD *)(a2 + 6) ^ 0x65646F4D676E6973LL )
              goto LABEL_41;
            a1[1] = 18;
            *a1 = 0;
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
      }
      else
      {
        a1[1] = 2;
        *a1 = 0;
      }
      break;
    case 15LL:
      if ( *(_QWORD *)a2 ^ 0x4B72656767697274LL | *(_QWORD *)(a2 + 7) ^ 0x6C6562614C79654BLL )
      {
        if ( *(_QWORD *)a2 ^ 0x754F74706D6F7270LL | *(_QWORD *)(a2 + 7) ^ 0x6469557475707475LL )
          goto LABEL_41;
        a1[1] = 25;
        *a1 = 0;
      }
      else
      {
        a1[1] = 4;
        *a1 = 0;
      }
      break;
    case 16LL:
      v7 = _mm_xor_si128(
             _mm_loadu_si128((const __m128i *)a2),
             *(__m128i *)"processingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id");
      if ( _mm_testz_si128(v7, v7) )
      {
        a1[1] = 19;
        *a1 = 0;
      }
      else
      {
        v8 = _mm_xor_si128(
               _mm_loadu_si128((const __m128i *)a2),
               *(__m128i *)"perModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id");
        if ( !_mm_testz_si128(v8, v8) )
          goto LABEL_41;
        a1[1] = 20;
        *a1 = 0;
      }
      break;
    case 18LL:
      v9 = _mm_or_si128(
             _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_101602080),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101602070));
      if ( _mm_testz_si128(v9, v9) )
      {
        a1[1] = 8;
        *a1 = 0;
      }
      else
      {
        v10 = _mm_or_si128(
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_1016020A0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101602090));
        if ( _mm_testz_si128(v10, v10) )
        {
          a1[1] = 10;
          *a1 = 0;
        }
        else
        {
          v11 = _mm_or_si128(
                  _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), (__m128i)xmmword_1016020C0),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1016020B0));
          if ( !_mm_testz_si128(v11, v11) )
            goto LABEL_41;
          a1[1] = 21;
          *a1 = 0;
        }
      }
      break;
    case 19LL:
      v14 = _mm_or_si128(
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1016020D0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 3)), (__m128i)xmmword_101602000));
      if ( _mm_testz_si128(v14, v14) )
      {
        a1[1] = 7;
        *a1 = 0;
      }
      else
      {
        v15 = _mm_or_si128(
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1016020F0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 3)), (__m128i)xmmword_1016020E0));
        if ( _mm_testz_si128(v15, v15) )
        {
          a1[1] = 9;
          *a1 = 0;
        }
        else
        {
          v16 = _mm_or_si128(
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101602110),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 3)), (__m128i)xmmword_101602100));
          if ( !_mm_testz_si128(v16, v16) )
            goto LABEL_41;
          a1[1] = 17;
          *a1 = 0;
        }
      }
      break;
    case 20LL:
      v12 = _mm_or_si128(
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101602030),
              _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_101602040));
      if ( _mm_testz_si128(v12, v12) )
      {
        a1[1] = 12;
        *a1 = 0;
      }
      else
      {
        v13 = _mm_or_si128(
                _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_101602050),
                _mm_xor_si128(
                  _mm_unpacklo_epi64((__m128i)0x7254656C67676F74uLL, (__m128i)0x79654B7265676769uLL),
                  _mm_loadu_si128((const __m128i *)a2)));
        if ( !_mm_testz_si128(v13, v13) )
          goto LABEL_41;
        a1[1] = 14;
        *a1 = 0;
      }
      break;
    case 21LL:
      v4 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101602030),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 5)), (__m128i)xmmword_101602020));
      if ( !_mm_testz_si128(v4, v4) )
        goto LABEL_41;
      a1[1] = 13;
      *a1 = 0;
      break;
    case 23LL:
      v6 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101602060),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 7)), (__m128i)xmmword_101602000));
      if ( !_mm_testz_si128(v6, v6) )
        goto LABEL_41;
      a1[1] = 11;
      *a1 = 0;
      break;
    case 25LL:
      v5 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_101602010),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a2 + 9)), (__m128i)xmmword_101602000));
      if ( !_mm_testz_si128(v5, v5) )
        goto LABEL_41;
      a1[1] = 15;
      *a1 = 0;
      break;
    default:
LABEL_41:
      a1[1] = 27;
      *a1 = 0;
      break;
  }
  return result;
}
