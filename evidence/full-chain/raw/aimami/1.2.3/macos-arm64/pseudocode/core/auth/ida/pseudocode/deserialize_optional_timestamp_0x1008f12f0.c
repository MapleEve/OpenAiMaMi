// __ZN13codexmate_lib4core4auth30deserialize_optional_timestamp @ 0x1008f12f0 | 基线 same-set
double __fastcall codexmate_lib::core::auth::deserialize_optional_timestamp::hf020df4a80003213(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // r9
  char v10; // r8
  char v11; // r8
  char v12; // cl
  char v13; // r15
  __int64 v14; // rax
  __int64 (__fastcall **v15)(); // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  const void *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  void *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdi
  __int64 v28; // rax
  double result; // xmm0_8
  _QWORD v30[2]; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD v31[3]; // [rsp+10h] [rbp-C0h] BYREF
  _QWORD v32[3]; // [rsp+28h] [rbp-A8h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+40h] [rbp-90h] BYREF
  __int64 v34; // [rsp+48h] [rbp-88h]
  __int64 v35; // [rsp+50h] [rbp-80h]
  __int64 v36; // [rsp+58h] [rbp-78h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+60h] [rbp-70h]
  __int64 v38; // [rsp+68h] [rbp-68h]
  __int64 v39; // [rsp+70h] [rbp-60h]
  __int64 v40; // [rsp+78h] [rbp-58h]
  __int64 v41; // [rsp+80h] [rbp-50h] BYREF
  __int64 (__fastcall **v42)(); // [rsp+88h] [rbp-48h]
  __int64 v43; // [rsp+90h] [rbp-40h]
  __int64 v44; // [rsp+98h] [rbp-38h]
  char v45[41]; // [rsp+A7h] [rbp-29h] BYREF

  v3 = a2[4]; /*0x1008f1307*/
  v4 = a2[5]; /*0x1008f130b*/
  if ( v4 < v3 ) /*0x1008f1312*/
  {
    v5 = a2[3]; /*0x1008f1318*/
    v6 = v4 + 4; /*0x1008f131c*/
    v7 = 0x100002600LL; /*0x1008f1326*/
    while ( 1 ) /*0x1008f1330*/
    {
      v8 = *(unsigned __int8 *)(v5 + v6 - 4); /*0x1008f1330*/
      if ( v8 > 0x20 || !_bittest64(&v7, v8) ) /*0x1008f133c*/
        break; /*0x1008f133c*/
      a2[5] = v6 - 3; /*0x1008f1346*/
      v9 = v6 - v3 + 1; /*0x1008f134a*/
      ++v6; /*0x1008f134f*/
      if ( v9 == 4 ) /*0x1008f1356*/
        goto LABEL_15; /*0x1008f1356*/
    }
    if ( (_DWORD)v8 == 110 ) /*0x1008f135e*/
    {
      a2[5] = v6 - 3; /*0x1008f1364*/
      if ( v6 - 3 < v3 ) /*0x1008f136b*/
      {
        v10 = *(_BYTE *)(v5 + v6 - 3); /*0x1008f1371*/
        a2[5] = v6 - 2; /*0x1008f137b*/
        if ( v10 != 117 ) /*0x1008f1383*/
          goto LABEL_49; /*0x1008f1383*/
        if ( v6 - 2 >= v3 ) /*0x1008f138c*/
          goto LABEL_43; /*0x1008f138c*/
        v11 = *(_BYTE *)(v5 + v6 - 2); /*0x1008f1392*/
        a2[5] = v6 - 1; /*0x1008f139c*/
        if ( v11 != 108 ) /*0x1008f13a4*/
        {
LABEL_49:
          v41 = 9; /*0x1008f16ef*/
          goto LABEL_44; /*0x1008f16f7*/
        }
        if ( v6 - 1 < v3 ) /*0x1008f13ad*/
        {
          v12 = *(_BYTE *)(v5 + v6 - 1); /*0x1008f13b3*/
          a2[5] = v6; /*0x1008f13b8*/
          if ( v12 == 108 ) /*0x1008f13bf*/
          {
            *a1 = 0x8000000000000000LL; /*0x1008f13cf*/
            return result; /*0x1008f13d2*/
          }
          goto LABEL_49; /*0x1008f13bf*/
        }
      }
LABEL_43:
      v41 = 5; /*0x1008f168c*/
LABEL_44:
      v14 = serde_json::de::Deserializer$LT$R$GT$::error::hbeb452b81b5c60fd(a2, &v41); /*0x1008f1694*/
      goto LABEL_17; /*0x1008f16a3*/
    }
  }
LABEL_15:
  serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$serde_json..value..Value$GT$::deserialize::h0e6a3623f5b03787(&v41); /*0x1008f13d7*/
  v13 = v41; /*0x1008f13e0*/
  if ( (unsigned __int8)v41 == 6 ) /*0x1008f13e9*/
  {
    v14 = (__int64)v42; /*0x1008f13eb*/
LABEL_17:
    a1[1] = v14; /*0x1008f13ef*/
    *a1 = 0x8000000000000001LL; /*0x1008f1400*/
    return result; /*0x1008f1403*/
  }
  v36 = v41; /*0x1008f140e*/
  v15 = v42; /*0x1008f1414*/
  v38 = v43; /*0x1008f141c*/
  v39 = v44; /*0x1008f1424*/
  v37 = v42; /*0x1008f142c*/
  if ( (unsigned __int8)v41 == 3 ) /*0x1008f1434*/
  {
    v16 = v38; /*0x1008f152b*/
    v18 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v38, v39); /*0x1008f1536*/
    v20 = v19; /*0x1008f153b*/
    if ( !v19 ) /*0x1008f1541*/
    {
      *a1 = 0x8000000000000000LL; /*0x1008f15fc*/
      if ( !v15 ) /*0x1008f1602*/
        return result; /*0x1008f1602*/
      goto LABEL_46; /*0x1008f1602*/
    }
    v21 = (const void *)v18; /*0x1008f1547*/
    v22 = v18; /*0x1008f154e*/
    core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::he4c24a427e6bb1fc( /*0x1008f1554*/
      &v41,
      v18,
      v19);
    if ( (_BYTE)v41 ) /*0x1008f155d*/
    {
      v40 = v38; /*0x1008f1563*/
      if ( v20 >= 0 ) /*0x1008f156a*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v41, v22); /*0x1008f1640*/
        v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v20, 1); /*0x1008f164d*/
        v23 = 1; /*0x1008f1652*/
        if ( v25 ) /*0x1008f165a*/
        {
          v26 = (__int64)v25; /*0x1008f1660*/
          memcpy(v25, v21, v20); /*0x1008f166c*/
          *a1 = v20; /*0x1008f1671*/
          a1[1] = v26; /*0x1008f1674*/
          a1[2] = v20; /*0x1008f1678*/
          v27 = v40; /*0x1008f167f*/
          if ( !v15 ) /*0x1008f1683*/
            return result; /*0x1008f1683*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v15, 1); /*0x1008f1683*/
        }
      }
      else
      {
        v23 = 0; /*0x1008f1570*/
      }
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, v20); /*0x1008f1579*/
    }
    codexmate_lib::core::auth::normalize_timestamp::hab7b7252ca810a23((__int64)v32, (__int64)v21, v20); /*0x1008f161a*/
    if ( !__OFSUB__(0, v32[0]) ) /*0x1008f1628*/
    {
      a1[2] = v32[2]; /*0x1008f16af*/
      v28 = v32[0]; /*0x1008f16b3*/
      a1[1] = v32[1]; /*0x1008f16c1*/
      *a1 = v28; /*0x1008f16c5*/
      if ( !v15 ) /*0x1008f16cb*/
        return result; /*0x1008f16cb*/
      goto LABEL_46; /*0x1008f16cb*/
    }
    v17 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1008f1636*/
            "last_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or numberexp",
            0x35u);
    goto LABEL_25; /*0x1008f163b*/
  }
  if ( (unsigned __int8)v41 == 2 ) /*0x1008f143e*/
  {
    v30[1] = v38; /*0x1008f1466*/
    v30[0] = v37; /*0x1008f146d*/
    v33 = nullptr; /*0x1008f1474*/
    v34 = 1; /*0x1008f147f*/
    v35 = 0; /*0x1008f148a*/
    v43 = 1610612768; /*0x1008f1492*/
    v41 = (__int64)&v33; /*0x1008f14a1*/
    v42 = &anon_155c4da9b5393270cfa7378e2b52c417_744; /*0x1008f14ac*/
    if ( (unsigned __int8)_$LT$serde_json..number..Number$u20$as$u20$core..fmt..Display$GT$::fmt::hf3bcbc63ca3abd0b( /*0x1008f14bb*/
                            v30,
                            &v41) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008f1717*/
        &anon_155c4da9b5393270cfa7378e2b52c417_745,
        55,
        v45,
        &anon_155c4da9b5393270cfa7378e2b52c417_758,
        &anon_155c4da9b5393270cfa7378e2b52c417_747);
    v15 = v33; /*0x1008f14c8*/
    v16 = v34; /*0x1008f14cf*/
    codexmate_lib::core::auth::normalize_timestamp::hab7b7252ca810a23((__int64)v31, v34, v35); /*0x1008f14e4*/
    if ( !__OFSUB__(0, v31[0]) ) /*0x1008f14f2*/
    {
      a1[2] = v31[2]; /*0x1008f15cb*/
      v24 = v31[0]; /*0x1008f15cf*/
      a1[1] = v31[1]; /*0x1008f15dd*/
      *a1 = v24; /*0x1008f15e1*/
      if ( !v15 ) /*0x1008f15e7*/
        return result; /*0x1008f15e7*/
      goto LABEL_46; /*0x1008f15e7*/
    }
    v17 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1008f1504*/
            "last_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or numberexp",
            0x35u);
LABEL_25:
    a1[1] = v17; /*0x1008f1509*/
    *a1 = 0x8000000000000001LL; /*0x1008f151a*/
    if ( !v15 ) /*0x1008f1520*/
      return result; /*0x1008f1520*/
LABEL_46:
    v27 = v16; /*0x1008f16cd*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v15, 1); /*0x1008f16d8*/
  }
  if ( !(_BYTE)v41 ) /*0x1008f1443*/
  {
    *a1 = 0x8000000000000000LL; /*0x1008f1453*/
LABEL_33:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v36); /*0x1008f15b6*/
    return result; /*0x1008f15bf*/
  }
  a1[1] = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::hbbf7f5a39f980ea2( /*0x1008f1594*/
            "last_refresh must be a timestamp string or numberexp",
            0x31u);
  *a1 = 0x8000000000000001LL; /*0x1008f15a5*/
  if ( (v13 & 6) != 2 ) /*0x1008f15b0*/
    goto LABEL_33; /*0x1008f15b0*/
  return result; /*0x1008f16dd*/
}