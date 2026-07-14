// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_takeover_fallback_response node 0x10094f5a0 depth=1
_DWORD *__fastcall chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(_DWORD *a1)
{
  int v1; // edx
  __int64 v2; // r14
  __int64 v3; // r15
  int v4; // r12d
  int v5; // eax
  __int64 v7; // [rsp+8h] [rbp-58h] BYREF
  int v8; // [rsp+10h] [rbp-50h]
  __int64 v9; // [rsp+18h] [rbp-48h] BYREF
  int v10; // [rsp+20h] [rbp-40h]
  int v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  int v13; // [rsp+38h] [rbp-28h]

  v9 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10094f5b7*/
  v10 = v1; /*0x10094f5bb*/
  std::time::SystemTime::duration_since::had059553cab94f96((__int64)&v11, (__int64)&v9, 0, 0); /*0x10094f5ca*/
  if ( v11 == 1 ) /*0x10094f5d3*/
  {
    v7 = v12; /*0x10094f666*/
    v8 = v13; /*0x10094f66a*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10094f68b*/
      (__int64)&unk_10130065B,
      29,
      (__int64)&v7,
      (__int64)&unk_101549730,
      (__int64)&off_101549770);
  }
  v2 = v12 % 86400; /*0x10094f602*/
  v3 = (v12 % 86400) >> 63; /*0x10094f608*/
  if ( (unsigned __int64)(v3 + v12 / 86400 - 2146764485) < 0xFFFFFFFF00000000LL /*0x10094f639*/
    || (v4 = v13,
        (v5 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86((unsigned int)v3
                                                                                         + (unsigned int)(v12 / 86400) + 719163)) == 0) )
  {
    core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_101549788); /*0x10094f697*/
  }
  *a1 = v5; /*0x10094f645*/
  a1[1] = v2 + (v3 & 0x15180); /*0x10094f647*/
  a1[2] = v4; /*0x10094f64b*/
  return a1; /*0x10094f652*/
}