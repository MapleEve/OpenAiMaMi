// __ZN13codexmate_lib4core10account_io20persist_account_auth28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008e2b20 | 基线 same-set
double __fastcall codexmate_lib::core::account_io::persist_account_auth::_$u7b$$u7b$closure$u7d$$u7d$::h3d78c388e38241e7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v9; // [rsp+18h] [rbp-38h] BYREF
  __int64 v10; // [rsp+20h] [rbp-30h]
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v13[17]; // [rsp+3Fh] [rbp-11h] BYREF

  v12 = a2; /*0x1008e2b31*/
  v9 = 0; /*0x1008e2b35*/
  v10 = 1; /*0x1008e2b3d*/
  v11 = 0; /*0x1008e2b45*/
  v8[2] = 1610612768; /*0x1008e2b4d*/
  v8[0] = &v9; /*0x1008e2b59*/
  v8[1] = &anon_155c4da9b5393270cfa7378e2b52c417_744; /*0x1008e2b64*/
  if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x1008e2b70*/
                          &v12,
                          v8,
                          a3,
                          a4,
                          a5,
                          a6) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008e2bd9*/
      &anon_155c4da9b5393270cfa7378e2b52c417_745,
      55,
      v13,
      &anon_155c4da9b5393270cfa7378e2b52c417_758,
      &anon_155c4da9b5393270cfa7378e2b52c417_747);
  a1[3] = v11; /*0x1008e2b7d*/
  v6 = v9; /*0x1008e2b81*/
  a1[2] = v10; /*0x1008e2b89*/
  a1[1] = v6; /*0x1008e2b8d*/
  *a1 = 9; /*0x1008e2b91*/
  core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(a2); /*0x1008e2b9b*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2, 40, 8); /*0x1008e2bb2*/
}