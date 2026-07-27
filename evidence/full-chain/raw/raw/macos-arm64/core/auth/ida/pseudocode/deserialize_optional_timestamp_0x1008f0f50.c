// __ZN13codexmate_lib4core4auth30deserialize_optional_timestamp @ 0x1008f0f50 | 基线 same-set
double __fastcall codexmate_lib::core::auth::deserialize_optional_timestamp::he4b1cefbe1c705b8(_QWORD *a1)
{
  unsigned __int64 v2; // r13
  unsigned int v3; // r15d
  __int64 (__fastcall **v4)(); // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  const void *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdi
  void *v15; // rax
  void *v16; // r13
  __int64 v17; // rax
  double result; // xmm0_8
  _QWORD v19[2]; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD v20[3]; // [rsp+10h] [rbp-C0h] BYREF
  _QWORD v21[3]; // [rsp+28h] [rbp-A8h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+40h] [rbp-90h] BYREF
  __int64 v23; // [rsp+48h] [rbp-88h]
  __int64 v24; // [rsp+50h] [rbp-80h]
  __int64 (__fastcall ***v25)(); // [rsp+58h] [rbp-78h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+60h] [rbp-70h]
  __int64 v27; // [rsp+68h] [rbp-68h]
  __int64 v28; // [rsp+70h] [rbp-60h]
  __int64 (__fastcall ***v29)(); // [rsp+78h] [rbp-58h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+80h] [rbp-50h]
  __int64 v31; // [rsp+88h] [rbp-48h]
  __int64 v32; // [rsp+90h] [rbp-40h]
  __int64 v33; // [rsp+98h] [rbp-38h]
  char v34[41]; // [rsp+A7h] [rbp-29h] BYREF

  v2 = 0x8000000000000000LL; /*0x1008f0f67*/
  _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_option::hfd1eaf40ca763047(&v29); /*0x1008f0f75*/
  v3 = (unsigned __int8)v29; /*0x1008f0f7a*/
  if ( (unsigned __int8)v29 == 7 ) /*0x1008f0f83*/
  {
    a1[1] = v30; /*0x1008f0f89*/
    *a1 = 0x8000000000000001LL; /*0x1008f0f90*/
    return result; /*0x1008f0f93*/
  }
  v25 = v29; /*0x1008f0f9e*/
  v4 = v30; /*0x1008f0fa4*/
  v27 = v31; /*0x1008f0fac*/
  v28 = v32; /*0x1008f0fb4*/
  v26 = v30; /*0x1008f0fbc*/
  if ( (unsigned __int8)v29 >= 7u ) /*0x1008f0fc0*/
  {
LABEL_15:
    a1[1] = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1008f10f0*/
              "last_refresh must be a timestamp string or numberexp",
              0x31u);
    *a1 = 0x8000000000000001LL; /*0x1008f1108*/
    if ( v3 <= 6 ) /*0x1008f110f*/
    {
LABEL_16:
      v12 = 76; /*0x1008f1111*/
      if ( _bittest(&v12, v3) ) /*0x1008f111a*/
        return result; /*0x1008f111a*/
    }
LABEL_17:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v25); /*0x1008f1120*/
    return result; /*0x1008f1129*/
  }
  switch ( (char)v29 ) /*0x1008f0fd7*/
  {
    case 0: /*0x1008f0fd7*/
    case 6: /*0x1008f0fd7*/
      *a1 = 0x8000000000000000LL; /*0x1008f0fd9*/
      if ( v3 > 6 ) /*0x1008f0fe0*/
        goto LABEL_17; /*0x1008f0fe0*/
      goto LABEL_16; /*0x1008f0fe0*/
    case 2: /*0x1008f0fd7*/
      v19[1] = v27; /*0x1008f1047*/
      v19[0] = v26; /*0x1008f104e*/
      v22 = nullptr; /*0x1008f1055*/
      v23 = 1; /*0x1008f1060*/
      v24 = 0; /*0x1008f106b*/
      v31 = 1610612768; /*0x1008f1073*/
      v29 = &v22; /*0x1008f1082*/
      v30 = &anon_155c4da9b5393270cfa7378e2b52c417_744; /*0x1008f108d*/
      if ( (unsigned __int8)_$LT$serde_json..number..Number$u20$as$u20$core..fmt..Display$GT$::fmt::hf3bcbc63ca3abd0b( /*0x1008f109c*/
                              v19,
                              &v29) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008f1240*/
          &anon_155c4da9b5393270cfa7378e2b52c417_745,
          55,
          v34,
          &anon_155c4da9b5393270cfa7378e2b52c417_758,
          &anon_155c4da9b5393270cfa7378e2b52c417_747);
      v4 = v22; /*0x1008f10a9*/
      v11 = v23; /*0x1008f10b0*/
      codexmate_lib::core::auth::normalize_timestamp::hab7b7252ca810a23((__int64)v20, v23, v24); /*0x1008f10c5*/
      if ( v20[0] == 0x8000000000000000LL ) /*0x1008f10d1*/
      {
        a1[1] = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1008f10e4*/
                  "last_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or numberexp",
                  0x35u);
        *a1 = 0x8000000000000001LL; /*0x1008f10eb*/
      }
      else
      {
        a1[2] = v20[2]; /*0x1008f1135*/
        v13 = v20[0]; /*0x1008f1139*/
        a1[1] = v20[1]; /*0x1008f1147*/
        *a1 = v13; /*0x1008f114b*/
      }
      if ( !v4 ) /*0x1008f1151*/
        return result; /*0x1008f1151*/
      v14 = v11; /*0x1008f115c*/
      goto LABEL_29; /*0x1008f115f*/
    case 3: /*0x1008f0fd7*/
      v33 = v27; /*0x1008f0ff3*/
      v5 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v27, v28); /*0x1008f0ff7*/
      v7 = v6; /*0x1008f0ffc*/
      if ( !v6 ) /*0x1008f1002*/
        goto LABEL_23; /*0x1008f1002*/
      v8 = (const void *)v5; /*0x1008f1008*/
      v9 = v5; /*0x1008f100f*/
      core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::he4c24a427e6bb1fc( /*0x1008f1015*/
        &v29,
        v5,
        v6);
      if ( (_BYTE)v29 ) /*0x1008f101e*/
      {
        if ( v7 < 0 ) /*0x1008f1027*/
        {
          v10 = 0; /*0x1008f102d*/
          goto LABEL_11; /*0x1008f102d*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v29, v9); /*0x1008f119c*/
        v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1008f11a9*/
        v10 = 1; /*0x1008f11ae*/
        if ( !v15 ) /*0x1008f11b6*/
LABEL_11:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v7); /*0x1008f102f*/
        v16 = v15; /*0x1008f11bc*/
        memcpy(v15, v8, v7); /*0x1008f11c8*/
        *a1 = v7; /*0x1008f11cd*/
        a1[1] = v16; /*0x1008f11d0*/
        a1[2] = v7; /*0x1008f11d4*/
      }
      else
      {
        codexmate_lib::core::auth::normalize_timestamp::hab7b7252ca810a23((__int64)v21, (__int64)v8, v7); /*0x1008f1171*/
        if ( v21[0] == 0x8000000000000000LL ) /*0x1008f117d*/
        {
          a1[1] = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1008f1190*/
                    "last_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or numberexp",
                    0x35u);
          v2 = 0x8000000000000001LL; /*0x1008f1194*/
LABEL_23:
          *a1 = v2; /*0x1008f1197*/
        }
        else
        {
          a1[2] = v21[2]; /*0x1008f11e1*/
          v17 = v21[0]; /*0x1008f11e5*/
          a1[1] = v21[1]; /*0x1008f11f3*/
          *a1 = v17; /*0x1008f11f7*/
        }
      }
      if ( v4 ) /*0x1008f11fd*/
      {
        v14 = v33; /*0x1008f1204*/
LABEL_29:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v4, 1); /*0x1008f1208*/
      }
      break; /*0x1008f120b*/
    default:
      goto LABEL_15;
  }
  return result; /*0x1008f1210*/
}