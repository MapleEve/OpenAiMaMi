_QWORD *__fastcall codexmate_lib::commands::relay::set_relay_display_tags::hf950017d5fd63f1a(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v4; // [rsp+0h] [rbp-390h] BYREF
  _BYTE v5[336]; // [rsp+8h] [rbp-388h] BYREF
  _QWORD v6[4]; // [rsp+158h] [rbp-238h] BYREF
  _BYTE __dst[312]; // [rsp+178h] [rbp-218h] BYREF
  _BYTE v8[96]; // [rsp+2B0h] [rbp-E0h] BYREF
  _QWORD v9[3]; // [rsp+310h] [rbp-80h] BYREF
  __int64 v10; // [rsp+328h] [rbp-68h]
  __int64 v11; // [rsp+330h] [rbp-60h]
  __int64 v12; // [rsp+338h] [rbp-58h]
  __int64 v13; // [rsp+340h] [rbp-50h] BYREF
  __int64 v14; // [rsp+348h] [rbp-48h]
  __int64 v15; // [rsp+350h] [rbp-40h]
  __int64 v16; // [rsp+358h] [rbp-38h]
  __int64 v17; // [rsp+360h] [rbp-30h]
  __int64 v18; // [rsp+368h] [rbp-28h]
  char v19[25]; // [rsp+377h] [rbp-19h] BYREF

  codexmate_lib::core::relay::manager::RelayManager::set_display_tags::h4f28d2320318ad6e(&v4); /*0x1004c646a*/
  if ( __OFSUB__(-v4, 1) ) /*0x1004c6479*/
  {
    qmemcpy(v8, v5, sizeof(v8)); /*0x1004c649b*/
    v13 = 0; /*0x1004c649e*/
    v14 = 1; /*0x1004c64a6*/
    v15 = 0; /*0x1004c64ae*/
    v9[2] = 1610612768; /*0x1004c64b6*/
    v9[0] = &v13; /*0x1004c64c2*/
    v9[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004c64cd*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004c64d8*/
                            v8,
                            v9) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c65d1*/
        "a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap()` on an `Err` value",
        55,
        v19,
        &anon_3e4c14ac1826b92abbb84b981a88c995_940,
        &anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v16 = v13; /*0x1004c64f7*/
    v17 = v14; /*0x1004c64fb*/
    v18 = v15; /*0x1004c6503*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v5); /*0x1004c650a*/
    v12 = v18; /*0x1004c6513*/
    v1 = v16; /*0x1004c6517*/
    v2 = v17; /*0x1004c651b*/
    v11 = v17; /*0x1004c651f*/
    v10 = v16; /*0x1004c6523*/
    a1[3] = v18; /*0x1004c6527*/
    a1[2] = v2; /*0x1004c652b*/
    a1[1] = v1; /*0x1004c652f*/
    *a1 = 0x8000000000000000LL; /*0x1004c6533*/
  }
  else
  {
    v18 = *(_QWORD *)&v5[16]; /*0x1004c653c*/
    v17 = *(_QWORD *)&v5[8]; /*0x1004c6547*/
    v16 = *(_QWORD *)v5; /*0x1004c654b*/
    memcpy(__dst, &v5[24], sizeof(__dst)); /*0x1004c6562*/
    v10 = *(_QWORD *)v5; /*0x1004c656f*/
    v6[0] = v4; /*0x1004c6577*/
    v6[1] = *(_QWORD *)v5; /*0x1004c657e*/
    v6[2] = *(_QWORD *)&v5[8]; /*0x1004c6585*/
    v6[3] = *(_QWORD *)&v5[16]; /*0x1004c658c*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8cb36c706799a66b(a1, v6); /*0x1004c659d*/
  }
  return a1; /*0x1004c65a5*/
}
