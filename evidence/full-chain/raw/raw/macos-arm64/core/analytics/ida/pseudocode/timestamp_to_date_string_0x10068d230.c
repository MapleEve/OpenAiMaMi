// __ZN13codexmate_lib4core9analytics24timestamp_to_date_string @ 0x10068d230 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::core::analytics::timestamp_to_date_string::hd4882f6580826531(
        unsigned __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned int v6; // r14d
  int v7; // r13d
  unsigned __int64 v8; // rax
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

  v2 = a2 / 86400; /*0x10068d25f*/
  v3 = (a2 % 86400) >> 63; /*0x10068d272*/
  v4 = a2 % 86400 + 86400; /*0x10068d27c*/
  if ( a2 % 86400 >= 0 ) /*0x10068d284*/
    v4 = a2 % 86400; /*0x10068d284*/
  if ( (unsigned __int64)(v3 + v2 - 2146764485) >= 0xFFFFFFFF00000000LL /*0x10068d2b3*/
    && (v5 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86((unsigned int)(v2 + v3 + 719163))) != 0 )
  {
    v31 = __PAIR64__(v4, v5); /*0x10068d2b5*/
    v32 = 0; /*0x10068d2bc*/
  }
  else
  {
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v31); /*0x10068d2c9*/
  }
  v6 = _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::h4d545212521a5e1d( /*0x10068d2dc*/
         1,
         &v31);
  v25 = v31; /*0x10068d2e3*/
  v26 = v32; /*0x10068d2ea*/
  v27 = v6; /*0x10068d2f1*/
  LODWORD(v12) = v32; /*0x10068d2f5*/
  v11 = v31; /*0x10068d2fb*/
  chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h60027b0c7aea670a(&v23, &v11, v6); /*0x10068d313*/
  v7 = v23; /*0x10068d318*/
  v10 = (__m128)v24; /*0x10068d327*/
  v33 = 0; /*0x10068d32e*/
  v34 = 1; /*0x10068d336*/
  v35 = 0; /*0x10068d33e*/
  v30 = 1610612768; /*0x10068d346*/
  v28 = &v33; /*0x10068d352*/
  v29 = &anon_a8580c566d8025b0f516de1c9be9088f_743; /*0x10068d35d*/
  if ( (unsigned __int8)_$LT$chrono..offset..fixed..FixedOffset$u20$as$u20$core..fmt..Display$GT$::fmt::habee36353257c26f( /*0x10068d368*/
                          &v27,
                          &v28) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10068d4a1*/
      &anon_a8580c566d8025b0f516de1c9be9088f_744,
      55,
      v36,
      &anon_a8580c566d8025b0f516de1c9be9088f_778,
      &anon_a8580c566d8025b0f516de1c9be9088f_746);
  v11 = v33; /*0x10068d37d*/
  v12 = v34; /*0x10068d384*/
  v13 = v35; /*0x10068d38f*/
  v22 = v7; /*0x10068d396*/
  v20 = 1; /*0x10068d39d*/
  _mm_storel_ps((double *)&v21, v10); /*0x10068d3ae*/
  v14 = v6; /*0x10068d3b5*/
  v15 = &unk_1016021C8; /*0x10068d3c3*/
  v16 = 8; /*0x10068d3ca*/
  v17 = 8; /*0x10068d3d5*/
  v18 = 0; /*0x10068d3e0*/
  v19 = 0; /*0x10068d3eb*/
  v33 = 0; /*0x10068d3f2*/
  v34 = 1; /*0x10068d3fa*/
  v35 = 0; /*0x10068d402*/
  v30 = 1610612768; /*0x10068d40a*/
  v28 = &v33; /*0x10068d412*/
  v29 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10068d41d*/
  if ( (unsigned __int8)_$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6afe7439d7af7acd( /*0x10068d42c*/
                          &v11,
                          &v28) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10068d4c6*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      v36,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  a1[2] = v35; /*0x10068d439*/
  v8 = v33; /*0x10068d43d*/
  a1[1] = v34; /*0x10068d445*/
  *a1 = v8; /*0x10068d449*/
  if ( !__OFSUB__(-(__int64)v11, 1) && v11 ) /*0x10068d45b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x10068d469*/
  return a1; /*0x10068d471*/
}