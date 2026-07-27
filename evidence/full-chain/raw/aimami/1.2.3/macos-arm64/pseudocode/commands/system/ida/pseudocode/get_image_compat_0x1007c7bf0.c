// __ZN13codexmate_lib8commands6system16get_image_compat @ 0x1007c7bf0 | 基线 same-set
__int64 *__fastcall codexmate_lib::commands::system::get_image_compat::hc23a8087dfaf9e58(__int64 *a1, double a2)
{
  __int64 *v2; // r13
  __m128i v3; // xmm0
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  unsigned __int8 v9; // bl
  __int64 v10; // rcx
  bool v11; // bl
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  const __m128i *v16; // rax
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD v23[93]; // [rsp+8h] [rbp-388h] BYREF
  int v24[4]; // [rsp+2F0h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+300h] [rbp-90h]
  __int64 v26[10]; // [rsp+308h] [rbp-88h] BYREF
  __int64 v27; // [rsp+358h] [rbp-38h]
  __int64 *v28; // [rsp+360h] [rbp-30h]

  v2 = a1; /*0x1007c7c04*/
  *(double *)v3.i64 = codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b(v26, a2); /*0x1007c7c11*/
  codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(v23, v26); /*0x1007c7c20*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v26, v23[7], v23[8]); /*0x1007c7c3a*/
  v4 = v26[0]; /*0x1007c7c3f*/
  if ( __OFSUB__(-v26[0], 1) ) /*0x1007c7c49*/
  {
    if ( (v26[1] & 3) == 1 ) /*0x1007c7c5a*/
    {
      v5 = v26[1] - 1; /*0x1007c7c5c*/
      v6 = *(_QWORD *)(v26[1] - 1); /*0x1007c7c60*/
      v7 = *(_QWORD *)(v26[1] + 7); /*0x1007c7c64*/
      if ( *(_QWORD *)v7 ) /*0x1007c7c68*/
        (*(void (__fastcall **)(__int64, double))v7)(v6, *(double *)v3.i64); /*0x1007c7c74*/
      v8 = *(_QWORD *)(v7 + 8); /*0x1007c7c76*/
      if ( v8 ) /*0x1007c7c7e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x1007c7c88*/
      *(double *)v3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x1007c7c9a*/
    }
    v9 = 0; /*0x1007c7c9f*/
    goto LABEL_41; /*0x1007c7ca1*/
  }
  v28 = a1; /*0x1007c7ca6*/
  v10 = v26[1]; /*0x1007c7caa*/
  v26[0] = 0; /*0x1007c7cb2*/
  v26[1] = v26[2]; /*0x1007c7cbd*/
  v27 = v10; /*0x1007c7cc5*/
  v26[2] = v10; /*0x1007c7cc9*/
  v26[3] = v26[1]; /*0x1007c7ccd*/
  v26[4] = 0; /*0x1007c7cd1*/
  v26[5] = v26[1]; /*0x1007c7cd9*/
  v26[6] = 0xA0000000ALL; /*0x1007c7ce7*/
  LOBYTE(v26[7]) = 1; /*0x1007c7ceb*/
  LOWORD(v26[8]) = 0; /*0x1007c7cef*/
  v11 = 0; /*0x1007c7cf5*/
  do /*0x1007c7d2a*/
  {
    v12 = v26[2]; /*0x1007c7d2a*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c7d34*/
      v24,
      &v26[2]);
    if ( v24[0] == 1 ) /*0x1007c7d40*/
    {
      v13 = v26[0]; /*0x1007c7d49*/
      v26[0] = v25; /*0x1007c7d50*/
      v14 = v25 - v13; /*0x1007c7d57*/
      v15 = v13 + v12; /*0x1007c7d5a*/
      if ( v25 == v13 ) /*0x1007c7d60*/
        goto LABEL_24; /*0x1007c7d60*/
      goto LABEL_18; /*0x1007c7d60*/
    }
    if ( BYTE1(v26[8]) ) /*0x1007c7d74*/
      break; /*0x1007c7d74*/
    BYTE1(v26[8]) = 1; /*0x1007c7d7a*/
    v14 = v26[1] - v26[0]; /*0x1007c7d89*/
    if ( (LOBYTE(v26[8]) | (v26[1] != v26[0])) != 1 ) /*0x1007c7d94*/
      break; /*0x1007c7d94*/
    v15 = v26[2] + v26[0]; /*0x1007c7d9a*/
    if ( !v14 ) /*0x1007c7da1*/
      goto LABEL_24; /*0x1007c7da1*/
LABEL_18:
    if ( *(_BYTE *)(v15 + v14 - 1) != 10 ) /*0x1007c7da9*/
      goto LABEL_24; /*0x1007c7da9*/
    if ( v14 == 1 ) /*0x1007c7db1*/
    {
      v14 = 0; /*0x1007c7dd5*/
LABEL_24:
      v16 = (const __m128i *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v15, v14); /*0x1007c7de0*/
      if ( v17 ) /*0x1007c7deb*/
        goto LABEL_25; /*0x1007c7deb*/
      continue; /*0x1007c7deb*/
    }
    if ( *(_BYTE *)(v15 + v14 - 2) == 13 ) /*0x1007c7db9*/
    {
      v16 = (const __m128i *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v15, v14 - 2); /*0x1007c7dc6*/
      if ( v17 ) /*0x1007c7dce*/
        goto LABEL_25; /*0x1007c7dce*/
    }
    else
    {
      v16 = (const __m128i *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v15, v14 - 1); /*0x1007c7e83*/
      if ( v17 ) /*0x1007c7e8b*/
      {
LABEL_25:
        if ( v16->i8[0] == 91 ) /*0x1007c7df4*/
        {
          v11 = v17 == 10 && (v16->i64[0] ^ 0x657275746165665BLL | v16->u16[4] ^ 0x5D73LL) == 0; /*0x1007c7d1d*/
        }
        else if ( v17 >= 0x10 && v11 ) /*0x1007c7e01*/
        {
          v3 = _mm_xor_si128(_mm_loadu_si128(v16), (__m128i)xmmword_1015E35C0); /*0x1007c7e0d*/
          if ( _mm_testz_si128(v3, v3) ) /*0x1007c7e15*/
          {
            v18 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(&v16[1], v17 - 16); /*0x1007c7e2e*/
            if ( v19 ) /*0x1007c7e36*/
            {
              if ( *v18 == 61 ) /*0x1007c7e3f*/
              {
                v20 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v18 + 1, v19 - 1); /*0x1007c7e51*/
                if ( v21 == 5 && !(*(_DWORD *)v20 ^ 0x736C6166 | *(unsigned __int8 *)(v20 + 4) ^ 0x65) ) /*0x1007c7e70*/
                {
                  v9 = 1; /*0x1007c7f05*/
                  if ( v4 ) /*0x1007c7f0a*/
                    *(double *)v3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v4, 1); /*0x1007c7f18*/
                  goto LABEL_40; /*0x1007c7f1d*/
                }
              }
            }
          }
        }
      }
    }
  }
  while ( !BYTE1(v26[8]) ); /*0x1007c7d2a*/
  if ( v4 ) /*0x1007c7eaa*/
    *(double *)v3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v4, 1); /*0x1007c7eb8*/
  v9 = 0; /*0x1007c7ebd*/
LABEL_40:
  v2 = v28; /*0x1007c7ebf*/
LABEL_41:
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8d0ca3aa1d2f05e((__int64)v26, v9); /*0x1007c7ec3*/
  qmemcpy(v2, v26, 0x50u); /*0x1007c7ee1*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v23, *(double *)v3.i64); /*0x1007c7eeb*/
  return v2; /*0x1007c7ef3*/
}