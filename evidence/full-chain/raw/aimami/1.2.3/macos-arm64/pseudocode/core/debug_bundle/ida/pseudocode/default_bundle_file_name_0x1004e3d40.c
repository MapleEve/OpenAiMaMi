// __ZN13codexmate_lib4core12debug_bundle24default_bundle_file_name @ 0x1004e3d40 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::default_bundle_file_name::h2fbceb24be941039(__int64 a1)
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

  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v21); /*0x1004e3d59*/
  LODWORD(v5) = v22; /*0x1004e3d61*/
  v4 = v21; /*0x1004e3d6b*/
  chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h60027b0c7aea670a(&v16, &v4, 0); /*0x1004e3d86*/
  v1 = v16; /*0x1004e3d8b*/
  v3 = (__m128)v17; /*0x1004e3d94*/
  v23 = 0; /*0x1004e3d9b*/
  v24 = 1; /*0x1004e3da3*/
  v25 = 0; /*0x1004e3dab*/
  v20 = 1610612768; /*0x1004e3db3*/
  v18 = &v23; /*0x1004e3dbf*/
  v19 = &anon_a8580c566d8025b0f516de1c9be9088f_743; /*0x1004e3dca*/
  if ( (unsigned __int8)_$LT$chrono..offset..utc..Utc$u20$as$u20$core..fmt..Display$GT$::fmt::h848c142db475efa7( /*0x1004e3dd5*/
                          &v23,
                          &v18) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004e3ed1*/
      &anon_a8580c566d8025b0f516de1c9be9088f_744,
      55,
      &v4,
      &anon_a8580c566d8025b0f516de1c9be9088f_778,
      &anon_a8580c566d8025b0f516de1c9be9088f_746);
  v4 = v23; /*0x1004e3dea*/
  v5 = v24; /*0x1004e3df1*/
  v6 = v25; /*0x1004e3dfc*/
  v15 = v1; /*0x1004e3e03*/
  v13 = 1; /*0x1004e3e07*/
  _mm_storel_ps((double *)&v14, v3); /*0x1004e3e15*/
  v7 = 0; /*0x1004e3e19*/
  v8 = "%Y%m%d-%H%M%Swarning"; /*0x1004e3e2a*/
  v9 = 13; /*0x1004e3e31*/
  v10 = 8; /*0x1004e3e3c*/
  v11 = 0; /*0x1004e3e47*/
  v12 = 0; /*0x1004e3e52*/
  v18 = &v4; /*0x1004e3e59*/
  v19 = (__int64 (__fastcall **)())_$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6afe7439d7af7acd; /*0x1004e3e64*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_92869709a5e99ce1936aa4e326b6c562_296, &v18); /*0x1004e3e76*/
  if ( !__OFSUB__(-v4, 1) && v4 ) /*0x1004e3e8a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1004e3e98*/
  return a1; /*0x1004e3ea0*/
}