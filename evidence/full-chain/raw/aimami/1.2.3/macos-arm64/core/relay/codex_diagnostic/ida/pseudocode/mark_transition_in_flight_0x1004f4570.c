// __ZN13codexmate_lib4core5relay16codex_diagnostic25mark_transition_in_flight @ 0x1004f4570
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::mark_transition_in_flight::h8a5a741180b40c57(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rcx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  __m128i v22; // xmm1
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  __int64 v25; // rsi
  bool v26; // zf
  _QWORD *v27; // rdi
  _DWORD *v28; // rax
  _DWORD *v29; // r15
  __int64 v30; // rsi
  _QWORD *v31; // rdx
  __int64 v32; // rsi
  _QWORD *v33; // r15
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 result; // rax
  _WORD *v37; // rcx
  _QWORD v38[3]; // [rsp+8h] [rbp-98h] BYREF
  _QWORD v39[2]; // [rsp+20h] [rbp-80h] BYREF
  _QWORD *v40; // [rsp+30h] [rbp-70h]
  __int64 v41; // [rsp+38h] [rbp-68h]
  _QWORD *v42; // [rsp+40h] [rbp-60h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+48h] [rbp-58h]
  _QWORD *v44; // [rsp+50h] [rbp-50h]
  __int64 (__fastcall *v45)(); // [rsp+58h] [rbp-48h]
  _QWORD *v46; // [rsp+60h] [rbp-40h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+68h] [rbp-38h]
  _QWORD *v48; // [rsp+70h] [rbp-30h]

  v2 = &unk_1015FD906; /*0x1004f4588*/
  if ( *(_BYTE *)(a2 + 64) ) /*0x1004f458f*/
    v2 = &unk_1015FD90C; /*0x1004f4593*/
  v39[0] = v2; /*0x1004f4597*/
  v39[1] = 6; /*0x1004f459b*/
  v3 = *(_QWORD *)(a1 + 8); /*0x1004f45a3*/
  v41 = a1; /*0x1004f45a7*/
  v4 = *(_QWORD *)(a1 + 16); /*0x1004f45ab*/
  v5 = 104 * v4; /*0x1004f45af*/
  if ( v4 ) /*0x1004f45b6*/
  {
    v6 = v3 + 48; /*0x1004f45c6*/
    v7 = 104 * v4; /*0x1004f45d7*/
    do /*0x1004f45f8*/
    {
      if ( *(_QWORD *)(v6 - 8) == 5 /*0x1004f4614*/
        && !(**(_DWORD **)(v6 - 16) ^ 0x6F727265 | *(unsigned __int8 *)(*(_QWORD *)(v6 - 16) + 4LL) ^ 0x72) )
      {
        v8 = *(_QWORD *)(v6 - 40); /*0x1004f4626*/
        switch ( *(_QWORD *)(v6 - 32) ) /*0x1004f4631*/
        {
          case 0xCLL: /*0x1004f4631*/
            if ( !(*(_QWORD *)v8 ^ 0x735F6769666E6F63LL | *(unsigned int *)(v8 + 8) ^ 0x656C6174LL) ) /*0x1004f464c*/
              goto LABEL_39; /*0x1004f464f*/
            break; /*0x1004f464f*/
          case 0xELL: /*0x1004f4631*/
            if ( !(*(_QWORD *)v8 ^ 0x6C61756469736572LL | *(_QWORD *)(v8 + 6) ^ 0x65686361635F6C61LL) ) /*0x1004f480b*/
              goto LABEL_39; /*0x1004f480e*/
            break; /*0x1004f480e*/
          case 0x11LL: /*0x1004f4631*/
            v16 = _mm_or_si128( /*0x1004f47ab*/
                    _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v8 + 16)), (__m128i)xmmword_1015FBD20),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBD10));
            if ( _mm_testz_si128(v16, v16) ) /*0x1004f47b4*/
              goto LABEL_39; /*0x1004f47b4*/
            v17 = _mm_or_si128( /*0x1004f47d6*/
                    _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v8 + 16)), (__m128i)xmmword_1015FBD00),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBCF0));
            if ( _mm_testz_si128(v17, v17) ) /*0x1004f47da*/
              goto LABEL_39; /*0x1004f47df*/
            break; /*0x1004f47df*/
          case 0x12LL: /*0x1004f4631*/
            v15 = _mm_or_si128( /*0x1004f477b*/
                    _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v8 + 16)), (__m128i)xmmword_1015FBCC0),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBCB0));
            if ( _mm_testz_si128(v15, v15) ) /*0x1004f477f*/
              goto LABEL_39; /*0x1004f4784*/
            break; /*0x1004f4784*/
          case 0x13LL: /*0x1004f4631*/
            v10 = _mm_or_si128( /*0x1004f469c*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 3)), (__m128i)xmmword_1015FBB70),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBB80));
            if ( _mm_testz_si128(v10, v10) ) /*0x1004f46a0*/
              goto LABEL_39; /*0x1004f46a5*/
            break; /*0x1004f46a5*/
          case 0x14LL: /*0x1004f4631*/
            v12 = _mm_or_si128( /*0x1004f46f6*/
                    _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(v8 + 16)), (__m128i)xmmword_1015FBCD0),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBCE0));
            if ( _mm_testz_si128(v12, v12) ) /*0x1004f46ff*/
              goto LABEL_39; /*0x1004f46ff*/
            v13 = _mm_or_si128( /*0x1004f471e*/
                    _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(v8 + 16)), (__m128i)xmmword_1015DCAD0),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015DCAE0));
            if ( _mm_testz_si128(v13, v13) ) /*0x1004f4722*/
              goto LABEL_39; /*0x1004f4727*/
            break; /*0x1004f4727*/
          case 0x15LL: /*0x1004f4631*/
            v18 = _mm_or_si128( /*0x1004f4832*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 5)), (__m128i)xmmword_1015FBBB0),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBBC0));
            if ( _mm_testz_si128(v18, v18) ) /*0x1004f4836*/
              goto LABEL_39; /*0x1004f483b*/
            break; /*0x1004f483b*/
          case 0x16LL: /*0x1004f4631*/
            v19 = _mm_or_si128( /*0x1004f485f*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 6)), (__m128i)xmmword_1015FBBF0),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBC00));
            if ( _mm_testz_si128(v19, v19) ) /*0x1004f4868*/
              goto LABEL_39; /*0x1004f4868*/
            v20 = _mm_or_si128( /*0x1004f4887*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 6)), (__m128i)xmmword_1015FBBD0),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBBE0));
            if ( _mm_testz_si128(v20, v20) ) /*0x1004f488b*/
              goto LABEL_39; /*0x1004f4890*/
            break; /*0x1004f4890*/
          case 0x17LL: /*0x1004f4631*/
            v22 = _mm_or_si128( /*0x1004f48de*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 7)), (__m128i)xmmword_1015FBC10),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBC20));
            if ( _mm_testz_si128(v22, v22) ) /*0x1004f48e7*/
              goto LABEL_39; /*0x1004f48e7*/
            v23 = _mm_or_si128( /*0x1004f4902*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 7)), (__m128i)xmmword_1015FBC30),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBC40));
            if ( _mm_testz_si128(v23, v23) ) /*0x1004f490b*/
              goto LABEL_39; /*0x1004f490b*/
            v24 = _mm_or_si128( /*0x1004f4926*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 7)), (__m128i)xmmword_1015FBC50),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBC60));
            if ( _mm_testz_si128(v24, v24) ) /*0x1004f492a*/
              goto LABEL_39; /*0x1004f492f*/
            break; /*0x1004f492f*/
          case 0x18LL: /*0x1004f4631*/
            v21 = _mm_or_si128( /*0x1004f48b4*/
                    _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(v8 + 16)), (__m128i)xmmword_1015FBAF0),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBB00));
            if ( _mm_testz_si128(v21, v21) ) /*0x1004f48b8*/
              goto LABEL_39; /*0x1004f48bd*/
            break; /*0x1004f48bd*/
          case 0x1ALL: /*0x1004f4631*/
            v9 = _mm_or_si128( /*0x1004f466f*/
                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 10)), (__m128i)xmmword_1015FBB90),
                   _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBBA0));
            if ( _mm_testz_si128(v9, v9) ) /*0x1004f4673*/
              goto LABEL_39; /*0x1004f4678*/
            break; /*0x1004f4678*/
          case 0x1BLL: /*0x1004f4631*/
            v14 = _mm_or_si128( /*0x1004f474b*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 11)), (__m128i)xmmword_1015FBB50),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBB60));
            if ( _mm_testz_si128(v14, v14) ) /*0x1004f474f*/
              goto LABEL_39; /*0x1004f4754*/
            break; /*0x1004f4754*/
          case 0x20LL: /*0x1004f4631*/
            v11 = _mm_or_si128( /*0x1004f46c9*/
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 16)), (__m128i)xmmword_1015FBB30),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBB40));
            if ( _mm_testz_si128(v11, v11) ) /*0x1004f46cd*/
            {
LABEL_39:
              v25 = v6 + 24; /*0x1004f4935*/
              v26 = *(_QWORD *)(v6 + 24) == 0x8000000000000000LL; /*0x1004f4939*/
              v40 = (_QWORD *)(v6 + 24); /*0x1004f493d*/
              if ( v26 ) /*0x1004f4941*/
              {
                v27 = &v46; /*0x1004f4943*/
                v25 = v6; /*0x1004f4947*/
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v46, v6); /*0x1004f494a*/
              }
              else
              {
                v27 = &v42; /*0x1004f4951*/
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v42, v25); /*0x1004f4955*/
                v48 = v44; /*0x1004f495e*/
                v47 = v43; /*0x1004f496a*/
                v46 = v42; /*0x1004f496e*/
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v25); /*0x1004f4972*/
              v28 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004f4981*/
              if ( !v28 ) /*0x1004f4989*/
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004f4ad4*/
              v29 = v28; /*0x1004f498f*/
              *(_DWORD *)((char *)v28 + 3) = 1735289198; /*0x1004f4992*/
              *v28 = 1852989815; /*0x1004f4999*/
              v30 = *(_QWORD *)(v6 - 24); /*0x1004f499f*/
              if ( v30 ) /*0x1004f49a6*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v6 - 16), v30, 1); /*0x1004f49b1*/
              *(_QWORD *)(v6 - 24) = 7; /*0x1004f49b6*/
              *(_QWORD *)(v6 - 16) = v29; /*0x1004f49be*/
              *(_QWORD *)(v6 - 8) = 7; /*0x1004f49c2*/
              *(_BYTE *)(v6 + 48) = 0; /*0x1004f49ca*/
              v42 = v39; /*0x1004f49d3*/
              v43 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004f49de*/
              v44 = &v46; /*0x1004f49e6*/
              v45 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004f49f1*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v38, &unk_1015FD912, &v42); /*0x1004f4a07*/
              v31 = v40; /*0x1004f4a0c*/
              v32 = *v40; /*0x1004f4a10*/
              if ( *v40 != 0x8000000000000000LL && v32 ) /*0x1004f4a25*/
              {
                v33 = v40; /*0x1004f4a2b*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v6 + 32), v32, 1); /*0x1004f4a33*/
                v31 = v33; /*0x1004f4a38*/
              }
              v31[2] = v38[2]; /*0x1004f4a4c*/
              v34 = v38[0]; /*0x1004f4a50*/
              v31[1] = v38[1]; /*0x1004f4a5e*/
              *v31 = v34; /*0x1004f4a62*/
              if ( v46 ) /*0x1004f4a6c*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1); /*0x1004f4a7b*/
            }
            break; /*0x1004f4a80*/
          default:
            break;
        }
      }
      v6 += 104; /*0x1004f45f0*/
      v7 -= 104; /*0x1004f45f4*/
    }
    while ( v7 ); /*0x1004f45f8*/
  }
  v35 = v41; /*0x1004f4a85*/
  *(_BYTE *)(v41 + 25) = 1; /*0x1004f4a89*/
  do /*0x1004f4ab2*/
  {
    result = v5; /*0x1004f4a90*/
    if ( !v5 ) /*0x1004f4a96*/
      break; /*0x1004f4a96*/
    if ( *(_QWORD *)(v3 + 40) != 2 ) /*0x1004f4a9e*/
      break; /*0x1004f4a9e*/
    v37 = *(_WORD **)(v3 + 32); /*0x1004f4aa0*/
    v3 += 104; /*0x1004f4aa5*/
    v5 -= 104; /*0x1004f4aa9*/
  }
  while ( *v37 == 27503 ); /*0x1004f4ab2*/
  *(_BYTE *)(v35 + 24) = result != 0; /*0x1004f4ab7*/
  return result; /*0x1004f4abb*/
}