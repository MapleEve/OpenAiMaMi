// __ZN13codexmate_lib4core13oauth_refresh21current_iso_timestamp @ 0x1007ba960
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::current_iso_timestamp | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::oauth_refresh::current_iso_timestamp::h8e09bc80fe0d0574(_QWORD *a1)
{
  int v1; // r12d
  __int64 v2; // rax
  __int64 result; // rax
  __m128 v4; // [rsp+0h] [rbp-E0h]
  __int64 v5; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+20h] [rbp-C0h]
  __int64 v7; // [rsp+28h] [rbp-B8h]
  int v8; // [rsp+30h] [rbp-B0h]
  char *v9; // [rsp+38h] [rbp-A8h]
  __int64 v10; // [rsp+40h] [rbp-A0h]
  __int64 v11; // [rsp+48h] [rbp-98h]
  __int64 v12; // [rsp+50h] [rbp-90h]
  char v13; // [rsp+58h] [rbp-88h]
  int v14; // [rsp+60h] [rbp-80h]
  __int64 v15; // [rsp+64h] [rbp-7Ch] BYREF
  int v16; // [rsp+6Ch] [rbp-74h]
  int v17; // [rsp+70h] [rbp-70h] BYREF
  unsigned __int64 v18; // [rsp+74h] [rbp-6Ch]
  __int64 v19; // [rsp+7Ch] [rbp-64h] BYREF
  int v20; // [rsp+84h] [rbp-5Ch]
  __int64 *v21; // [rsp+88h] [rbp-58h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+90h] [rbp-50h]
  __int64 v23; // [rsp+98h] [rbp-48h]
  __int64 v24; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-38h]
  __int64 v26; // [rsp+B0h] [rbp-30h]
  _BYTE v27[33]; // [rsp+BFh] [rbp-21h] BYREF

  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v19); /*0x1007ba979*/
  LODWORD(v6) = v20; /*0x1007ba981*/
  v5 = v19; /*0x1007ba98b*/
  chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h60027b0c7aea670a(&v17, &v5, 0); /*0x1007ba9a3*/
  v1 = v17; /*0x1007ba9a8*/
  v4 = (__m128)v18; /*0x1007ba9b1*/
  v24 = 0; /*0x1007ba9b8*/
  v25 = 1; /*0x1007ba9c0*/
  v26 = 0; /*0x1007ba9c8*/
  v23 = 1610612768; /*0x1007ba9d0*/
  v21 = &v24; /*0x1007ba9dc*/
  v22 = &anon_a8580c566d8025b0f516de1c9be9088f_743; /*0x1007ba9e7*/
  if ( (unsigned __int8)_$LT$chrono..offset..utc..Utc$u20$as$u20$core..fmt..Display$GT$::fmt::h848c142db475efa7( /*0x1007ba9f2*/
                          &v21,
                          &v21) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007bab23*/
      &anon_a8580c566d8025b0f516de1c9be9088f_744,
      55,
      v27,
      &anon_a8580c566d8025b0f516de1c9be9088f_778,
      &anon_a8580c566d8025b0f516de1c9be9088f_746);
  v5 = v24; /*0x1007baa07*/
  v6 = v25; /*0x1007baa0e*/
  v7 = v26; /*0x1007baa19*/
  v16 = v1; /*0x1007baa20*/
  v14 = 1; /*0x1007baa24*/
  _mm_storel_ps((double *)&v15, v4); /*0x1007baa32*/
  v8 = 0; /*0x1007baa36*/
  v9 = "%Y-%m-%dT%H:%M:%S%.6fZ[AiMaMi][oauth-refresh] active auth ownership changed before refreshcodexmate_lib::core::oauth_refresh"; /*0x1007baa47*/
  v10 = 22; /*0x1007baa4e*/
  v11 = 8; /*0x1007baa59*/
  v12 = 0; /*0x1007baa64*/
  v13 = 0; /*0x1007baa6f*/
  v24 = 0; /*0x1007baa76*/
  v25 = 1; /*0x1007baa7e*/
  v26 = 0; /*0x1007baa86*/
  v23 = 1610612768; /*0x1007baa8e*/
  v21 = &v24; /*0x1007baa96*/
  v22 = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007baaa1*/
  if ( (unsigned __int8)_$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6afe7439d7af7acd( /*0x1007baab0*/
                          &v5,
                          &v21) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007bab48*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      v27,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  a1[2] = v26; /*0x1007baabd*/
  v2 = v24; /*0x1007baac1*/
  a1[1] = v25; /*0x1007baac9*/
  *a1 = v2; /*0x1007baacd*/
  result = 2 * v5; /*0x1007baad7*/
  if ( 2 * v5 ) /*0x1007baad7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1007baaf0*/
  return result; /*0x1007baaf5*/
}