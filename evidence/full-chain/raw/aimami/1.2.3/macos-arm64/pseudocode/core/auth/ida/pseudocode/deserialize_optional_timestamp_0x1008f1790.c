// __ZN13codexmate_lib4core4auth30deserialize_optional_timestamp @ 0x1008f1790 | 基线 same-set
double __fastcall codexmate_lib::core::auth::deserialize_optional_timestamp::hfd56f6edca4785b7(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int8 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  const void *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  void *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rax
  double result; // xmm0_8
  _QWORD v22[3]; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD v23[3]; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-A0h]
  __int128 v25; // [rsp+38h] [rbp-98h] BYREF
  __int128 v26; // [rsp+48h] [rbp-88h] BYREF
  __int64 v27; // [rsp+58h] [rbp-78h]
  __m256i v28; // [rsp+60h] [rbp-70h] BYREF
  __m256i v29; // [rsp+80h] [rbp-50h] BYREF
  char v30[41]; // [rsp+A7h] [rbp-29h] BYREF

  if ( !*(_BYTE *)a2 ) /*0x1008f17ac*/
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2); /*0x1008f17d2*/
    *a1 = 0x8000000000000000LL; /*0x1008f17e1*/
    return result; /*0x1008f17e4*/
  }
  switch ( *(_BYTE *)a2 ) /*0x1008f17be*/
  {
    case 1: /*0x1008f17be*/
      v29.i8[1] = *(_BYTE *)(a2 + 1); /*0x1008f17c4*/
      v4 = 1; /*0x1008f17c7*/
      goto LABEL_19; /*0x1008f17ca*/
    case 2: /*0x1008f17be*/
      v6 = *(_QWORD *)(a2 + 8); /*0x1008f18ae*/
      v7 = *(_QWORD *)(a2 + 16); /*0x1008f18b2*/
      if ( v6 ) /*0x1008f18b9*/
      {
        if ( v6 == 1 ) /*0x1008f18bf*/
        {
          v29.i64[2] = *(_QWORD *)(a2 + 16); /*0x1008f18c1*/
          v2 = v7 >> 63; /*0x1008f18c5*/
          v4 = 2; /*0x1008f18c9*/
        }
        else
        {
          if ( (v7 & 0x7FFFFFFFFFFFFFFFLL) <= 0x7FEFFFFFFFFFFFFFLL ) /*0x1008f18f4*/
          {
            v28.i8[0] = 0; /*0x1008f18fb*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v28); /*0x1008f1903*/
            v4 = 2; /*0x1008f1908*/
          }
          else
          {
            v4 = 0; /*0x1008f18f6*/
          }
          v29.i64[2] = v7; /*0x1008f190b*/
          v2 = 2; /*0x1008f190f*/
        }
      }
      else
      {
        v29.i64[2] = *(_QWORD *)(a2 + 16); /*0x1008f18ce*/
        v4 = 2; /*0x1008f18d2*/
        v2 = 0; /*0x1008f18d5*/
      }
      goto LABEL_19; /*0x1008f18cc*/
    case 3: /*0x1008f17be*/
      v5 = *(_QWORD *)(a2 + 8); /*0x1008f180a*/
      *(__int64 *)((char *)&v28.i64[1] + 7) = *(_QWORD *)(a2 + 16); /*0x1008f1812*/
      *(__int64 *)((char *)v28.i64 + 7) = v5; /*0x1008f1816*/
      *(__int64 *)((char *)&v28.i64[2] + 7) = *(_QWORD *)(a2 + 24); /*0x1008f181e*/
      v29.i64[3] = *(__int64 *)((char *)&v28.i64[2] + 7); /*0x1008f1822*/
      *(__int128 *)((char *)v29.i128 + 1) = v28.i128[0]; /*0x1008f1832*/
      *(__int64 *)((char *)&v29.i64[2] + 1) = v28.i64[2]; /*0x1008f183a*/
      v4 = 3; /*0x1008f183e*/
      v2 = v5; /*0x1008f1841*/
LABEL_19:
      *(_DWORD *)((char *)&v25 + 3) = v29.i32[1]; /*0x1008f1915*/
      LODWORD(v25) = *(__int32 *)((char *)v29.i32 + 1); /*0x1008f1921*/
      v26 = v29.i128[1]; /*0x1008f192b*/
      goto LABEL_20; /*0x1008f192b*/
    case 4: /*0x1008f17be*/
      serde_json::value::de::visit_array::h3c2a8dfcfacf5de5(&v29, a2 + 8); /*0x1008f1852*/
      v4 = v29.i8[0]; /*0x1008f1857*/
      if ( v29.i8[0] != 6 ) /*0x1008f1860*/
        goto LABEL_9; /*0x1008f1860*/
      goto LABEL_6; /*0x1008f1860*/
    case 5: /*0x1008f17be*/
      serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::deserialize_any::h81f0cba2d41e0bbb( /*0x1008f17f1*/
        &v29,
        a2 + 8);
      v4 = v29.i8[0]; /*0x1008f17f6*/
      if ( v29.i8[0] == 6 ) /*0x1008f17ff*/
      {
LABEL_6:
        v2 = v29.i64[1]; /*0x1008f1801*/
LABEL_10:
        a1[1] = v2; /*0x1008f1895*/
        *a1 = 0x8000000000000001LL; /*0x1008f18a6*/
        return result; /*0x1008f18a9*/
      }
LABEL_9:
      *(_DWORD *)((char *)&v25 + 3) = v29.i32[1]; /*0x1008f1862*/
      LODWORD(v25) = *(__int32 *)((char *)v29.i32 + 1); /*0x1008f186e*/
      v2 = v29.i64[1]; /*0x1008f1874*/
      v26 = v29.i128[1]; /*0x1008f187c*/
      if ( v4 == 7 ) /*0x1008f188f*/
        goto LABEL_10; /*0x1008f188f*/
LABEL_20:
      v28.i32[1] = *(_DWORD *)((char *)&v25 + 3); /*0x1008f193a*/
      *(__int32 *)((char *)v28.i32 + 1) = v25; /*0x1008f1949*/
      v28.i128[1] = v26; /*0x1008f1957*/
      v28.i8[0] = v4; /*0x1008f195f*/
      v28.i64[1] = v2; /*0x1008f1963*/
      switch ( v4 ) /*0x1008f196b*/
      {
        case 3: /*0x1008f196b*/
          v8 = v28.i64[2]; /*0x1008f1a60*/
          v10 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v28.i64[2], v28.i64[3]); /*0x1008f1a6b*/
          v12 = v11; /*0x1008f1a70*/
          if ( !v11 ) /*0x1008f1a76*/
          {
            *a1 = 0x8000000000000000LL; /*0x1008f1b37*/
            if ( !v2 ) /*0x1008f1b3d*/
              return result; /*0x1008f1b3d*/
            goto LABEL_46; /*0x1008f1b3d*/
          }
          v13 = (const void *)v10; /*0x1008f1a7c*/
          v14 = v10; /*0x1008f1a83*/
          core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::he4c24a427e6bb1fc( /*0x1008f1a89*/
            &v29,
            v10,
            v11);
          if ( v29.i8[0] ) /*0x1008f1a92*/
          {
            v24 = v8; /*0x1008f1a98*/
            if ( v12 >= 0 ) /*0x1008f1aa2*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v29, v14); /*0x1008f1b7b*/
              v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x1008f1b88*/
              v15 = 1; /*0x1008f1b8d*/
              if ( v17 ) /*0x1008f1b95*/
              {
                v18 = (__int64)v17; /*0x1008f1b9b*/
                memcpy(v17, v13, v12); /*0x1008f1ba7*/
                *a1 = v12; /*0x1008f1bac*/
                a1[1] = v18; /*0x1008f1baf*/
                a1[2] = v12; /*0x1008f1bb3*/
                v19 = v24; /*0x1008f1bba*/
                if ( !v2 ) /*0x1008f1bc1*/
                  return result; /*0x1008f1bc1*/
                return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v2, 1); /*0x1008f1bc1*/
              }
            }
            else
            {
              v15 = 0; /*0x1008f1aa8*/
            }
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v12); /*0x1008f1ab4*/
          }
          codexmate_lib::core::auth::normalize_timestamp::hab7b7252ca810a23((__int64)v23, (__int64)v13, v12); /*0x1008f1b55*/
          if ( !__OFSUB__(0, v23[0]) ) /*0x1008f1b63*/
          {
            a1[2] = v23[2]; /*0x1008f1bd1*/
            v20 = v23[0]; /*0x1008f1bd5*/
            a1[1] = v23[1]; /*0x1008f1be3*/
            *a1 = v20; /*0x1008f1be7*/
            if ( !v2 ) /*0x1008f1bed*/
              return result; /*0x1008f1bed*/
            goto LABEL_46; /*0x1008f1bed*/
          }
          v9 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1008f1b71*/
                 "last_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or numberexp",
                 0x35u);
          goto LABEL_27; /*0x1008f1b76*/
        case 2: /*0x1008f196b*/
          v25 = *(__int128 *)((char *)v28.i128 + 8); /*0x1008f19a8*/
          *(_QWORD *)&v26 = 0; /*0x1008f19af*/
          *((_QWORD *)&v26 + 1) = 1; /*0x1008f19ba*/
          v27 = 0; /*0x1008f19c2*/
          v29.i64[2] = 1610612768; /*0x1008f19ca*/
          v29.i64[0] = (__int64)&v26; /*0x1008f19d9*/
          v29.i64[1] = (__int64)&anon_155c4da9b5393270cfa7378e2b52c417_744; /*0x1008f19e4*/
          if ( (unsigned __int8)_$LT$serde_json..number..Number$u20$as$u20$core..fmt..Display$GT$::fmt::hf3bcbc63ca3abd0b( /*0x1008f19f3*/
                                  &v25,
                                  &v29) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008f1c2f*/
              &anon_155c4da9b5393270cfa7378e2b52c417_745,
              55,
              v30,
              &anon_155c4da9b5393270cfa7378e2b52c417_758,
              &anon_155c4da9b5393270cfa7378e2b52c417_747);
          v8 = *((_QWORD *)&v26 + 1); /*0x1008f1a07*/
          v2 = v26; /*0x1008f1a07*/
          codexmate_lib::core::auth::normalize_timestamp::hab7b7252ca810a23((__int64)v22, *((__int64 *)&v26 + 1), v27); /*0x1008f1a19*/
          if ( !__OFSUB__(0, v22[0]) ) /*0x1008f1a27*/
          {
            a1[2] = v22[2]; /*0x1008f1b06*/
            v16 = v22[0]; /*0x1008f1b0a*/
            a1[1] = v22[1]; /*0x1008f1b18*/
            *a1 = v16; /*0x1008f1b1c*/
            if ( !v2 ) /*0x1008f1b22*/
              return result; /*0x1008f1b22*/
            goto LABEL_46; /*0x1008f1b22*/
          }
          v9 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1008f1a39*/
                 "last_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or numberexp",
                 0x35u);
LABEL_27:
          a1[1] = v9; /*0x1008f1a3e*/
          *a1 = 0x8000000000000001LL; /*0x1008f1a4f*/
          if ( !v2 ) /*0x1008f1a55*/
            return result; /*0x1008f1a55*/
LABEL_46:
          v19 = v8; /*0x1008f1bef*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v2, 1); /*0x1008f1bfa*/
        case 0: /*0x1008f196b*/
          *a1 = 0x8000000000000000LL; /*0x1008f198e*/
LABEL_35:
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v28); /*0x1008f1af1*/
          return result; /*0x1008f1afa*/
      }
      a1[1] = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1008f1acf*/
                "last_refresh must be a timestamp string or numberexp",
                0x31u);
      *a1 = 0x8000000000000001LL; /*0x1008f1ae0*/
      if ( (v4 & 0xFE) != 2 ) /*0x1008f1aeb*/
        goto LABEL_35; /*0x1008f1aeb*/
      return result;
  }
}