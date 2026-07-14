// addr=0x1004c6850
// depth 0 — dispatcher-wired IPC owner. Single xref from codexmate_lib::run::{{closure}}::{{closure}}@0x100309190 (call site 0x100309325). Wraps RelayManager::reorder(); Ok path -> CoreEnvelope::ok; Err path -> CoreError Display::fmt + niche discriminant 0x8000000000000000.

_QWORD *__fastcall codexmate_lib::commands::relay::reorder_relay_providers::ha6f71902b24532dd(_QWORD *a1)
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

  codexmate_lib::core::relay::manager::RelayManager::reorder::h71af0c8928d23dc7(&v4); /*0x1004c686a*/
  if ( __OFSUB__(-v4, 1) ) /*0x1004c6879*/
  {
    qmemcpy(v8, v5, sizeof(v8)); /*0x1004c689b*/
    v13 = 0; /*0x1004c689e*/
    v14 = 1; /*0x1004c68a6*/
    v15 = 0; /*0x1004c68ae*/
    v9[2] = 1610612768; /*0x1004c68b6*/
    v9[0] = &v13; /*0x1004c68c2*/
    v9[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004c68cd*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004c68d8*/
                            v8,
                            v9) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c69d1*/
        "a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap()` on an `Err` value",
        55,
        v19,
        &anon_3e4c14ac1826b92abbb84b981a88c995_940,
        &anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v16 = v13; /*0x1004c68f7*/
    v17 = v14; /*0x1004c68fb*/
    v18 = v15; /*0x1004c6903*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v5); /*0x1004c690a*/
    v12 = v18; /*0x1004c6913*/
    v1 = v16; /*0x1004c6917*/
    v2 = v17; /*0x1004c691b*/
    v11 = v17; /*0x1004c691f*/
    v10 = v16; /*0x1004c6923*/
    a1[3] = v18; /*0x1004c6927*/
    a1[2] = v2; /*0x1004c692b*/
    a1[1] = v1; /*0x1004c692f*/
    *a1 = 0x8000000000000000LL; /*0x1004c6933*/
  }
  else
  {
    v18 = *(_QWORD *)&v5[16]; /*0x1004c693c*/
    v17 = *(_QWORD *)&v5[8]; /*0x1004c6947*/
    v16 = *(_QWORD *)v5; /*0x1004c694b*/
    memcpy(__dst, &v5[24], sizeof(__dst)); /*0x1004c6962*/
    v10 = *(_QWORD *)v5; /*0x1004c696f*/
    v6[0] = v4; /*0x1004c6977*/
    v6[1] = *(_QWORD *)v5; /*0x1004c697e*/
    v6[2] = *(_QWORD *)&v5[8]; /*0x1004c6985*/
    v6[3] = *(_QWORD *)&v5[16]; /*0x1004c698c*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8cb36c706799a66b(a1, v6); /*0x1004c699d*/
  }
  return a1; /*0x1004c69a5*/
}
