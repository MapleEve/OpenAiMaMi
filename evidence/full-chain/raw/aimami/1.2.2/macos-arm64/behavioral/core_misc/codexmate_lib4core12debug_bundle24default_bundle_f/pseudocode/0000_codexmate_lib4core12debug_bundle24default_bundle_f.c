// mac 1.2.2 NEW codexmate_lib4core12debug_bundle24default_bundle_f 0x100405780 d=0
size_t *__fastcall codexmate_lib::core::debug_bundle::default_bundle_file_name::h47ff90ee6e259d55(size_t *a1)
{
  int v1; // r12d
  __m128 v3; // [rsp+0h] [rbp-E0h]
  __int64 v4; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+20h] [rbp-C0h]
  __int64 v6; // [rsp+28h] [rbp-B8h]
  int v7; // [rsp+30h] [rbp-B0h]
  const char *v8; // [rsp+38h] [rbp-A8h]
  __int64 v9; // [rsp+40h] [rbp-A0h]
  __int64 v10; // [rsp+48h] [rbp-98h]
  __int64 v11; // [rsp+50h] [rbp-90h]
  char v12; // [rsp+58h] [rbp-88h]
  int v13; // [rsp+60h] [rbp-80h]
  __int64 v14; // [rsp+64h] [rbp-7Ch] BYREF
  int v15; // [rsp+6Ch] [rbp-74h]
  int v16; // [rsp+74h] [rbp-6Ch] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp-68h]
  __int64 *v18; // [rsp+80h] [rbp-60h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+88h] [rbp-58h]
  __int64 v20; // [rsp+90h] [rbp-50h]
  __int64 v21; // [rsp+9Ch] [rbp-44h] BYREF
  int v22; // [rsp+A4h] [rbp-3Ch]
  __int64 v23; // [rsp+A8h] [rbp-38h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-30h]
  __int64 v25; // [rsp+B8h] [rbp-28h]

  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v21); /*0x100405799*/
  LODWORD(v5) = v22; /*0x1004057a1*/
  v4 = v21; /*0x1004057ab*/
  chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h60027b0c7aea670a(&v16, &v4, 0); /*0x1004057c6*/
  v1 = v16; /*0x1004057cb*/
  v3 = (__m128)v17; /*0x1004057d4*/
  v23 = 0; /*0x1004057db*/
  v24 = 1; /*0x1004057e3*/
  v25 = 0; /*0x1004057eb*/
  v20 = 1610612768; /*0x1004057f3*/
  v18 = &v23; /*0x1004057ff*/
  v19 = &anon_e09fd79b0c076fb9bf9cf83012bf0a76_1149; /*0x10040580a*/
  if ( (unsigned __int8)_$LT$chrono..offset..utc..Utc$u20$as$u20$core..fmt..Display$GT$::fmt::h848c142db475efa7( /*0x100405815*/
                          &v23,
                          &v18) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100405911*/
      (__int64)&anon_e09fd79b0c076fb9bf9cf83012bf0a76_1150,
      55,
      (__int64)&v4,
      (__int64)&anon_e09fd79b0c076fb9bf9cf83012bf0a76_1163,
      (__int64)&anon_e09fd79b0c076fb9bf9cf83012bf0a76_1152);
  v4 = v23; /*0x10040582a*/
  v5 = v24; /*0x100405831*/
  v6 = v25; /*0x10040583c*/
  v15 = v1; /*0x100405843*/
  v13 = 1; /*0x100405847*/
  _mm_storel_ps((double *)&v14, v3); /*0x100405855*/
  v7 = 0; /*0x100405859*/
  v8 = "%Y%m%d-%H%M%Swarning"; /*0x10040586a*/
  v9 = 13; /*0x100405871*/
  v10 = 8; /*0x10040587c*/
  v11 = 0; /*0x100405887*/
  v12 = 0; /*0x100405892*/
  v18 = &v4; /*0x100405899*/
  v19 = (__int64 (__fastcall **)())_$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7c65c804423a5fba; /*0x1004058a4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1004058b6*/
    a1,
    anon_68347d2bbd113ff8f7653f9946f1b8f6_368,
    (unsigned __int64)&v18);
  if ( !__OFSUB__(-v4, 1) && v4 ) /*0x1004058ca*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004058d8*/
  return a1; /*0x1004058e0*/
}