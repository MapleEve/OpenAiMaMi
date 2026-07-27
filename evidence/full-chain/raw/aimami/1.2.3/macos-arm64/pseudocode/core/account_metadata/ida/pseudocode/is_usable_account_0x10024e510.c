// __ZN13codexmate_lib4core16account_metadata17is_usable_account @ 0x10024e510
char __fastcall codexmate_lib::core::account_metadata::is_usable_account::h7ea1f4a56bd308a2(_BYTE *a1)
{
  __int64 v1; // r14
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  __int64 i; // r15
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  size_t v16; // r14
  const void *v17; // r12
  unsigned __int64 v18; // r13
  void *v19; // rax
  size_t v20; // rdx
  __int64 v21; // rcx
  __m128i si128; // xmm5
  __m128i v23; // xmm6
  __m128i v24; // xmm7
  __m128i v25; // xmm8
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD v38[8]; // [rsp+10h] [rbp-70h] BYREF
  size_t v39; // [rsp+50h] [rbp-30h]

  if ( *a1 != 5 ) /*0x10024e524*/
    return 0; /*0x10024e524*/
  v3 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x10024e539*/
                  a1,
                  "/deactivated/is_deactivated/disabled/is_disabled/account/deactivated/account/is_deactivated/status/sta"
                  "te/account/status/account/state",
                  12);
  if ( v3 ) /*0x10024e541*/
  {
    if ( *v3 == 1 && v3[1] ) /*0x10024e548*/
      return 0; /*0x10024e548*/
  }
  v4 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x10024e561*/
                  a1,
                  "/is_deactivated/disabled/is_disabled/account/deactivated/account/is_deactivated/status/state/account/status/account/state",
                  15);
  if ( v4 ) /*0x10024e569*/
  {
    if ( *v4 == 1 && v4[1] ) /*0x10024e570*/
      return 0; /*0x10024e570*/
  }
  v5 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x10024e589*/
                  a1,
                  "/disabled/is_disabled/account/deactivated/account/is_deactivated/status/state/account/status/account/state",
                  9);
  if ( v5 ) /*0x10024e591*/
  {
    if ( *v5 == 1 && v5[1] ) /*0x10024e598*/
      return 0; /*0x10024e598*/
  }
  v6 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x10024e5ad*/
                  a1,
                  "/is_disabled/account/deactivated/account/is_deactivated/status/state/account/status/account/state",
                  12);
  if ( v6 ) /*0x10024e5b5*/
  {
    if ( *v6 == 1 && v6[1] ) /*0x10024e5bc*/
      return 0; /*0x10024e5bc*/
  }
  v7 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x10024e5d1*/
                  a1,
                  "/account/deactivated/account/is_deactivated/status/state/account/status/account/state",
                  20);
  if ( v7 ) /*0x10024e5d9*/
  {
    if ( *v7 == 1 && v7[1] ) /*0x10024e5e0*/
      return 0; /*0x10024e5e0*/
  }
  v8 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x10024e5f5*/
                  a1,
                  "/account/is_deactivated/status/state/account/status/account/state",
                  23);
  if ( v8 ) /*0x10024e5fd*/
  {
    if ( *v8 == 1 && v8[1] ) /*0x10024e604*/
      return 0; /*0x10024e60a*/
  }
  v38[0] = "/status/state/account/status/account/state"; /*0x10024e626*/
  v38[1] = 7; /*0x10024e62a*/
  v38[2] = "/state/account/status/account/state"; /*0x10024e639*/
  v38[3] = 6; /*0x10024e63d*/
  v38[4] = "/account/status/account/state"; /*0x10024e64c*/
  v38[5] = 15; /*0x10024e650*/
  v38[6] = "/account/state"; /*0x10024e65f*/
  v38[7] = 14; /*0x10024e663*/
  for ( i = 0; i != 4; ++i ) /*0x10024e66b*/
  {
    v11 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, v38[2 * i], v38[2 * i + 1]); /*0x10024e6b0*/
    if ( v11 && *(_BYTE *)v11 == 3 ) /*0x10024e6bd*/
    {
      v12 = *(_QWORD *)(v11 + 16); /*0x10024e6bf*/
      v13 = *(_QWORD *)(v11 + 24); /*0x10024e6c3*/
      v14 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v12, v13); /*0x10024e6c7*/
      if ( v15 < 0 ) /*0x10024e6cf*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0, v1); /*0x10024e948*/
      v16 = v15; /*0x10024e6d5*/
      if ( v15 ) /*0x10024e6d8*/
      {
        v17 = (const void *)v14; /*0x10024e6da*/
        v18 = v15; /*0x10024e6dd*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v13); /*0x10024e6e0*/
        v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x10024e6ed*/
        v20 = v16; /*0x10024e6f2*/
        if ( !v19 ) /*0x10024e6f8*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v16); /*0x10024e972*/
        v1 = (__int64)v19; /*0x10024e6fe*/
        v39 = v20; /*0x10024e707*/
        memcpy(v19, v17, v20); /*0x10024e70b*/
        if ( v18 < 8 ) /*0x10024e717*/
        {
          v21 = 0; /*0x10024e719*/
          goto LABEL_40; /*0x10024e750*/
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10024e78e*/
        v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10024e796*/
        v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x10024e79e*/
        v25 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10024e7a6*/
        if ( v18 < 0x20 ) /*0x10024e7af*/
        {
          v21 = 0; /*0x10024e7b1*/
          v26 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10024e7b3*/
          v27 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10024e7bb*/
          goto LABEL_37; /*0x10024e7c3*/
        }
        v21 = v18 & 0x7FFFFFFFFFFFFFE0LL; /*0x10024e7d5*/
        v28 = 0; /*0x10024e7d8*/
        do /*0x10024e83b*/
        {
          v29 = _mm_loadu_si128((const __m128i *)(v1 + v28)); /*0x10024e7e0*/
          v30 = _mm_loadu_si128((const __m128i *)(v1 + v28 + 16)); /*0x10024e7e6*/
          v31 = _mm_add_epi8(v29, v23); /*0x10024e7f1*/
          v32 = _mm_add_epi8(v30, v23); /*0x10024e7f9*/
          *(__m128i *)(v1 + v28) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v31, v24), v31), v25), v29); /*0x10024e827*/
          *(__m128i *)(v1 + v28 + 16) = _mm_or_si128( /*0x10024e82d*/
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v32, v24), v32), v25),
                                          v30);
          v28 += 32; /*0x10024e834*/
        }
        while ( v21 != v28 ); /*0x10024e83b*/
        v26 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10024e840*/
        v27 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10024e848*/
        if ( v18 != v21 ) /*0x10024e850*/
        {
          if ( (v39 & 0x18) != 0 ) /*0x10024e85a*/
          {
LABEL_37:
            v33 = v21; /*0x10024e85c*/
            v21 = v18 & 0x7FFFFFFFFFFFFFF8LL; /*0x10024e86d*/
            do /*0x10024e89f*/
            {
              v34 = _mm_loadl_epi64((const __m128i *)(v1 + v33)); /*0x10024e870*/
              v35 = _mm_add_epi8(v34, v26); /*0x10024e87a*/
              *(_QWORD *)(v1 + v33) = _mm_or_si128( /*0x10024e892*/
                                        _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v35, v27), v35), si128),
                                        v34).u64[0];
              v33 += 8; /*0x10024e898*/
            }
            while ( v21 != v33 ); /*0x10024e89f*/
            goto LABEL_41; /*0x10024e89f*/
          }
          do /*0x10024e8d1*/
          {
LABEL_40:
            *(_BYTE *)(v1 + v21) |= 32 * ((unsigned __int8)(*(_BYTE *)(v1 + v21) - 65) < 0x1Au); /*0x10024e8b0*/
            ++v21; /*0x10024e8cb*/
LABEL_41:
            ; /*0x10024e8ce*/
          }
          while ( v18 != v21 ); /*0x10024e8d1*/
        }
        switch ( v18 ) /*0x10024e8e4*/
        {
          case 7uLL: /*0x10024e8e4*/
            if ( !(*(_DWORD *)v1 ^ 0x656C6564 | *(_DWORD *)(v1 + 3) ^ 0x64657465) ) /*0x10024e8f3*/
              goto LABEL_53; /*0x10024e8f5*/
            goto LABEL_50; /*0x10024e8f5*/
          case 8uLL: /*0x10024e8e4*/
            if ( *(_QWORD *)v1 == 0x64656C6261736964LL ) /*0x10024e90d*/
              goto LABEL_53; /*0x10024e90d*/
            goto LABEL_50; /*0x10024e90d*/
          case 9uLL: /*0x10024e8e4*/
            v36 = *(_QWORD *)v1 ^ 0x65646E6570737573LL; /*0x10024e8fc*/
            v37 = *(unsigned __int8 *)(v1 + 8) ^ 0x64LL; /*0x10024e904*/
            goto LABEL_49; /*0x10024e908*/
          case 0xBuLL: /*0x10024e8e4*/
            v36 = *(_QWORD *)v1 ^ 0x6176697463616564LL; /*0x10024e914*/
            v37 = *(_QWORD *)(v1 + 3) ^ 0x6465746176697463LL; /*0x10024e925*/
LABEL_49:
            if ( v36 | v37 ) /*0x10024e928*/
              goto LABEL_50; /*0x10024e92b*/
LABEL_53:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v39, 1); /*0x10024e954*/
            return 0; /*0x10024e965*/
          default:
LABEL_50:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v39, 1); /*0x10024e92d*/
            continue; /*0x10024e93e*/
        }
      }
      v1 = 1; /*0x10024e673*/
    }
  }
  return 1; /*0x10024e60c*/
}