// 1.2.3 baseline same-set | __ZN13codexmate_lib4core17session_analytics17timestamp_to_date17he1c90a1f37b1b076E @ 0x100a851a0 | full-body via IDA decompiler
// 1.2.3 baseline same-set | codexmate_lib::core::session_analytics::timestamp_to_date | 完整基线逆(decompile+归目录)
double __fastcall codexmate_lib::core::session_analytics::timestamp_to_date::he1c90a1f37b1b076(
        unsigned __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // r14d
  int v7; // r13d
  double result; // xmm0_8
  unsigned __int64 v9; // rax
  __m128 v10; // [rsp+0h] [rbp-100h]
  unsigned __int64 v11; // [rsp+18h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v13; // [rsp+28h] [rbp-D8h]
  unsigned int v14; // [rsp+30h] [rbp-D0h]
  void *v15; // [rsp+38h] [rbp-C8h]
  __int64 v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h]
  char v19; // [rsp+58h] [rbp-A8h]
  int v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+64h] [rbp-9Ch] BYREF
  int v22; // [rsp+6Ch] [rbp-94h]
  int v23; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-88h]
  unsigned __int64 v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  unsigned int v27; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 *v28; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall **v29)(); // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v31; // [rsp+ACh] [rbp-54h] BYREF
  int v32; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v35; // [rsp+C8h] [rbp-38h]
  _BYTE v36[41]; // [rsp+D7h] [rbp-29h] BYREF

  v2 = a2 / 86400;
  v3 = (a2 % 86400) >> 63;
  v4 = a2 % 86400 + 86400;
  if ( a2 % 86400 >= 0 )
    v4 = a2 % 86400;
  if ( (unsigned __int64)(v3 + v2 - 2146764485) >= 0xFFFFFFFF00000000LL
    && (v5 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86((unsigned int)(v2 + v3 + 719163))) != 0 )
  {
    v31 = __PAIR64__(v4, v5);
    v32 = 0;
  }
  else
  {
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v31);
  }
  v6 = _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::h4d545212521a5e1d(
         1,
         &v31);
  v25 = v31;
  v26 = v32;
  v27 = v6;
  LODWORD(v12) = v32;
  v11 = v31;
  chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h60027b0c7aea670a(&v23, &v11, v6);
  v7 = v23;
  v10 = (__m128)v24;
  v33 = 0;
  v34 = 1;
  v35 = 0;
  v30 = 1610612768;
  v28 = &v33;
  v29 = &anon_a8580c566d8025b0f516de1c9be9088f_743;
  if ( (unsigned __int8)_$LT$chrono..offset..fixed..FixedOffset$u20$as$u20$core..fmt..Display$GT$::fmt::habee36353257c26f(
                          &v27,
                          &v28) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_a8580c566d8025b0f516de1c9be9088f_744,
      55,
      v36,
      &anon_a8580c566d8025b0f516de1c9be9088f_778,
      &anon_a8580c566d8025b0f516de1c9be9088f_746);
  v11 = v33;
  v12 = v34;
  v13 = v35;
  v22 = v7;
  v20 = 1;
  result = *(double *)v10.i64;
  _mm_storel_ps((double *)&v21, v10);
  v14 = v6;
  v15 = &unk_1016021C8;
  v16 = 8;
  v17 = 8;
  v18 = 0;
  v19 = 0;
  v33 = 0;
  v34 = 1;
  v35 = 0;
  v30 = 1610612768;
  v28 = &v33;
  v29 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
  if ( (unsigned __int8)_$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6afe7439d7af7acd(
                          &v11,
                          &v28) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v36,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  a1[2] = v35;
  v9 = v33;
  a1[1] = v34;
  *a1 = v9;
  if ( !__OFSUB__(-(__int64)v11, 1) )
  {
    if ( v11 )
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1);
  }
  return result;
}
