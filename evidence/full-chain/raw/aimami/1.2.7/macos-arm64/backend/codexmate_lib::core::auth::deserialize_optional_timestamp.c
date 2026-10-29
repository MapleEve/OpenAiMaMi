// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::auth::deserialize_optional_timestamp::h887472368170affb; addr: 0x1005c8960; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:17Z
double __fastcall codexmate_lib::core::auth::deserialize_optional_timestamp::h887472368170affb(
        signed __int64 *a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // r9
  char v10; // r15
  __int64 v11; // rax
  __int64 (__fastcall **v12)(); // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // r12
  const void *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  signed __int64 v22; // rax
  void *v23; // rax
  signed __int64 v24; // r15
  __int64 v25; // rdi
  signed __int64 v26; // rax
  double result; // xmm0_8
  _QWORD v28[2]; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD v29[3]; // [rsp+10h] [rbp-C0h] BYREF
  _QWORD v30[3]; // [rsp+28h] [rbp-A8h] BYREF
  __int64 (__fastcall **v31)(); // [rsp+40h] [rbp-90h] BYREF
  __int64 v32; // [rsp+48h] [rbp-88h]
  __int64 v33; // [rsp+50h] [rbp-80h]
  __int64 v34; // [rsp+58h] [rbp-78h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+60h] [rbp-70h]
  __int64 v36; // [rsp+68h] [rbp-68h]
  __int64 v37; // [rsp+70h] [rbp-60h]
  __int64 v38; // [rsp+78h] [rbp-58h]
  __int64 v39; // [rsp+80h] [rbp-50h] BYREF
  __int64 (__fastcall **v40)(); // [rsp+88h] [rbp-48h]
  __int64 v41; // [rsp+90h] [rbp-40h]
  __int64 v42; // [rsp+98h] [rbp-38h]
  char v43[41]; // [rsp+A7h] [rbp-29h] BYREF

  v3 = a2[4]; /*0x1005c8977*/
  v4 = a2[5]; /*0x1005c897b*/
  if ( v4 < v3 ) /*0x1005c8982*/
  {
    v5 = a2[3]; /*0x1005c8988*/
    v6 = v4 + 4; /*0x1005c898c*/
    v7 = 0x100002600LL; /*0x1005c8996*/
    while ( 1 ) /*0x1005c89a0*/
    {
      v8 = *(unsigned __int8 *)(v5 + v6 - 4); /*0x1005c89a0*/
      if ( v8 > 0x20 || !_bittest64(&v7, v8) ) /*0x1005c89ac*/
        break; /*0x1005c89ac*/
      a2[5] = v6 - 3; /*0x1005c89b6*/
      v9 = v6 - v3 + 1; /*0x1005c89ba*/
      ++v6; /*0x1005c89bf*/
      if ( v9 == 4 ) /*0x1005c89c6*/
        goto LABEL_15; /*0x1005c89c6*/
    }
    if ( (_DWORD)v8 == 110 ) /*0x1005c89ce*/
    {
      a2[5] = v6 - 3; /*0x1005c89d4*/
      if ( v6 - 3 < v3 ) /*0x1005c89db*/
      {
        v7 = *(unsigned __int8 *)(v5 + v6 - 3); /*0x1005c89e1*/
        a2[5] = v6 - 2; /*0x1005c89eb*/
        if ( (_BYTE)v7 != 117 ) /*0x1005c89f3*/
          goto LABEL_49; /*0x1005c89f3*/
        if ( v6 - 2 >= v3 ) /*0x1005c89fc*/
          goto LABEL_43; /*0x1005c89fc*/
        v7 = *(unsigned __int8 *)(v5 + v6 - 2); /*0x1005c8a02*/
        a2[5] = v6 - 1; /*0x1005c8a0c*/
        if ( (_BYTE)v7 != 108 ) /*0x1005c8a14*/
        {
LABEL_49:
          v39 = 9; /*0x1005c8d5f*/
          goto LABEL_44; /*0x1005c8d67*/
        }
        if ( v6 - 1 < v3 ) /*0x1005c8a1d*/
        {
          v3 = *(unsigned __int8 *)(v5 + v6 - 1); /*0x1005c8a23*/
          a2[5] = v6; /*0x1005c8a28*/
          if ( (_BYTE)v3 == 108 ) /*0x1005c8a2f*/
          {
            *a1 = 0x8000000000000000LL; /*0x1005c8a3f*/
            return result; /*0x1005c8a42*/
          }
          goto LABEL_49; /*0x1005c8a2f*/
        }
      }
LABEL_43:
      v39 = 5; /*0x1005c8cfc*/
LABEL_44:
      v11 = serde_json::de::Deserializer$LT$R$GT$::error::h960e13feab7ca9c0(a2, &v39, v5, v3, v7); /*0x1005c8d04*/
      goto LABEL_17; /*0x1005c8d13*/
    }
  }
LABEL_15:
  serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$serde_json..value..Value$GT$::deserialize::hf3935f83f7a3e6cc(&v39); /*0x1005c8a47*/
  v10 = v39; /*0x1005c8a50*/
  if ( (unsigned __int8)v39 == 6 ) /*0x1005c8a59*/
  {
    v11 = (__int64)v40; /*0x1005c8a5b*/
LABEL_17:
    a1[1] = v11; /*0x1005c8a5f*/
    *a1 = 0x8000000000000001LL; /*0x1005c8a70*/
    return result; /*0x1005c8a73*/
  }
  v34 = v39; /*0x1005c8a7e*/
  v12 = v40; /*0x1005c8a84*/
  v36 = v41; /*0x1005c8a8c*/
  v37 = v42; /*0x1005c8a94*/
  v35 = v40; /*0x1005c8a9c*/
  if ( (unsigned __int8)v39 == 3 ) /*0x1005c8aa4*/
  {
    v13 = v36; /*0x1005c8b9b*/
    v15 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v36, v37); /*0x1005c8ba6*/
    v17 = v16; /*0x1005c8bab*/
    if ( !v16 ) /*0x1005c8bb1*/
    {
      *a1 = 0x8000000000000000LL; /*0x1005c8c6c*/
      if ( !v12 ) /*0x1005c8c72*/
        return result; /*0x1005c8c72*/
      goto LABEL_46; /*0x1005c8c72*/
    }
    v18 = (const void *)v15; /*0x1005c8bb7*/
    v19 = v15; /*0x1005c8bbe*/
    core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::he4c24a427e6bb1fc( /*0x1005c8bc4*/
      &v39,
      v15,
      v16);
    if ( (_BYTE)v39 ) /*0x1005c8bcd*/
    {
      v38 = v36; /*0x1005c8bd3*/
      if ( v17 >= 0 ) /*0x1005c8bda*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v39, v19, v20); /*0x1005c8cb0*/
        v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x1005c8cbd*/
        v21 = 1; /*0x1005c8cc2*/
        if ( v23 ) /*0x1005c8cca*/
        {
          v24 = (signed __int64)v23; /*0x1005c8cd0*/
          memcpy(v23, v18, v17); /*0x1005c8cdc*/
          *a1 = v17; /*0x1005c8ce1*/
          a1[1] = v24; /*0x1005c8ce4*/
          a1[2] = v17; /*0x1005c8ce8*/
          v25 = v38; /*0x1005c8cef*/
          if ( !v12 ) /*0x1005c8cf3*/
            return result; /*0x1005c8cf3*/
          return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v12, 1); /*0x1005c8cf3*/
        }
      }
      else
      {
        v21 = 0; /*0x1005c8be0*/
      }
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, v17); /*0x1005c8be9*/
    }
    codexmate_lib::core::auth::normalize_timestamp::hdb76ad3986bbc433(v30, v18, v17); /*0x1005c8c8a*/
    if ( !__OFSUB__(0, v30[0]) ) /*0x1005c8c98*/
    {
      a1[2] = v30[2]; /*0x1005c8d1f*/
      v26 = v30[0]; /*0x1005c8d23*/
      a1[1] = v30[1]; /*0x1005c8d31*/
      *a1 = v26; /*0x1005c8d35*/
      if ( !v12 ) /*0x1005c8d3b*/
        return result; /*0x1005c8d3b*/
      goto LABEL_46; /*0x1005c8d3b*/
    }
    v14 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::ha14d15e48022dcf1( /*0x1005c8ca6*/
            "last_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or number",
            0x35u);
    goto LABEL_25; /*0x1005c8cab*/
  }
  if ( (unsigned __int8)v39 == 2 ) /*0x1005c8aae*/
  {
    v28[1] = v36; /*0x1005c8ad6*/
    v28[0] = v35; /*0x1005c8add*/
    v31 = nullptr; /*0x1005c8ae4*/
    v32 = 1; /*0x1005c8aef*/
    v33 = 0; /*0x1005c8afa*/
    v41 = 1610612768; /*0x1005c8b02*/
    v39 = (__int64)&v31; /*0x1005c8b11*/
    v40 = &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1174; /*0x1005c8b1c*/
    if ( (unsigned __int8)_$LT$serde_json..number..Number$u20$as$u20$core..fmt..Display$GT$::fmt::hf3bcbc63ca3abd0b( /*0x1005c8b2b*/
                            v28,
                            &v39) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c8d87*/
        &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1175,
        55,
        v43,
        &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1216,
        &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1177);
    v12 = v31; /*0x1005c8b38*/
    v13 = v32; /*0x1005c8b3f*/
    codexmate_lib::core::auth::normalize_timestamp::hdb76ad3986bbc433(v29, v32, v33); /*0x1005c8b54*/
    if ( !__OFSUB__(0, v29[0]) ) /*0x1005c8b62*/
    {
      a1[2] = v29[2]; /*0x1005c8c3b*/
      v22 = v29[0]; /*0x1005c8c3f*/
      a1[1] = v29[1]; /*0x1005c8c4d*/
      *a1 = v22; /*0x1005c8c51*/
      if ( !v12 ) /*0x1005c8c57*/
        return result; /*0x1005c8c57*/
      goto LABEL_46; /*0x1005c8c57*/
    }
    v14 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::ha14d15e48022dcf1( /*0x1005c8b74*/
            "last_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or number",
            0x35u);
LABEL_25:
    a1[1] = v14; /*0x1005c8b79*/
    *a1 = 0x8000000000000001LL; /*0x1005c8b8a*/
    if ( !v12 ) /*0x1005c8b90*/
      return result; /*0x1005c8b90*/
LABEL_46:
    v25 = v13; /*0x1005c8d3d*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v12, 1); /*0x1005c8d48*/
  }
  if ( !(_BYTE)v39 ) /*0x1005c8ab3*/
  {
    *a1 = 0x8000000000000000LL; /*0x1005c8ac3*/
LABEL_33:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v34); /*0x1005c8c26*/
    return result; /*0x1005c8c2f*/
  }
  a1[1] = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::ha14d15e48022dcf1( /*0x1005c8c04*/
            "last_refresh must be a timestamp string or number",
            0x31u);
  *a1 = 0x8000000000000001LL; /*0x1005c8c15*/
  if ( (v10 & 6) != 2 ) /*0x1005c8c20*/
    goto LABEL_33; /*0x1005c8c20*/
  return result; /*0x1005c8d4d*/
}