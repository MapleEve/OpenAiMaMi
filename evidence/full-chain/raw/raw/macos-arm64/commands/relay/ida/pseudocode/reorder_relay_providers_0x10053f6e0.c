// __ZN13codexmate_lib8commands5relay23reorder_relay_providers @ 0x10053f6e0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::relay::reorder_relay_providers::he3f423697a6ecac2(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-330h] BYREF
  _BYTE v7[288]; // [rsp+8h] [rbp-328h] BYREF
  _QWORD v8[4]; // [rsp+128h] [rbp-208h] BYREF
  _BYTE __dst[264]; // [rsp+148h] [rbp-1E8h] BYREF
  _BYTE v10[96]; // [rsp+250h] [rbp-E0h] BYREF
  _QWORD v11[3]; // [rsp+2B0h] [rbp-80h] BYREF
  __int64 v12; // [rsp+2C8h] [rbp-68h]
  __int64 v13; // [rsp+2D0h] [rbp-60h]
  __int64 v14; // [rsp+2D8h] [rbp-58h]
  __int64 v15; // [rsp+2E0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+2E8h] [rbp-48h]
  __int64 v17; // [rsp+2F0h] [rbp-40h]
  __int64 v18; // [rsp+2F8h] [rbp-38h]
  __int64 v19; // [rsp+300h] [rbp-30h]
  __int64 v20; // [rsp+308h] [rbp-28h]
  char v21[25]; // [rsp+317h] [rbp-19h] BYREF

  codexmate_lib::core::relay::manager::RelayManager::reorder::h2b05ca90028d062f((char *)&v6, a2, a3); /*0x10053f6fa*/
  if ( __OFSUB__(-v6, 1) ) /*0x10053f709*/
  {
    qmemcpy(v10, v7, sizeof(v10)); /*0x10053f72b*/
    v15 = 0; /*0x10053f72e*/
    v16 = 1; /*0x10053f736*/
    v17 = 0; /*0x10053f73e*/
    v11[2] = 1610612768; /*0x10053f746*/
    v11[0] = &v15; /*0x10053f752*/
    v11[1] = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10053f75d*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10053f768*/
                            v10,
                            v11) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053f861*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        v21,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    v18 = v15; /*0x10053f787*/
    v19 = v16; /*0x10053f78b*/
    v20 = v17; /*0x10053f793*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v7); /*0x10053f79a*/
    v14 = v20; /*0x10053f7a3*/
    v3 = v18; /*0x10053f7a7*/
    v4 = v19; /*0x10053f7ab*/
    v13 = v19; /*0x10053f7af*/
    v12 = v18; /*0x10053f7b3*/
    a1[3] = v20; /*0x10053f7b7*/
    a1[2] = v4; /*0x10053f7bb*/
    a1[1] = v3; /*0x10053f7bf*/
    *a1 = 0x8000000000000000LL; /*0x10053f7c3*/
  }
  else
  {
    v20 = *(_QWORD *)&v7[16]; /*0x10053f7cc*/
    v19 = *(_QWORD *)&v7[8]; /*0x10053f7d7*/
    v18 = *(_QWORD *)v7; /*0x10053f7db*/
    memcpy(__dst, &v7[24], sizeof(__dst)); /*0x10053f7f2*/
    v12 = *(_QWORD *)v7; /*0x10053f7ff*/
    v8[0] = v6; /*0x10053f807*/
    v8[1] = *(_QWORD *)v7; /*0x10053f80e*/
    v8[2] = *(_QWORD *)&v7[8]; /*0x10053f815*/
    v8[3] = *(_QWORD *)&v7[16]; /*0x10053f81c*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h6c74eb133b70c3e2((__int64)a1, v8); /*0x10053f82d*/
  }
  return a1; /*0x10053f835*/
}