// __ZN13codexmate_lib8commands5relay23activate_relay_provider @ 0x10053f4a0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::relay::activate_relay_provider::hc5d39e556c87d954(
        _QWORD *__dst,
        _QWORD *a2,
        __int64 *a3)
{
  void *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  _QWORD v9[47]; // [rsp+0h] [rbp-3A0h] BYREF
  _QWORD v10[4]; // [rsp+178h] [rbp-228h] BYREF
  _BYTE __dsta[264]; // [rsp+198h] [rbp-208h] BYREF
  _BYTE v12[96]; // [rsp+2A0h] [rbp-100h] BYREF
  _QWORD v13[3]; // [rsp+300h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+318h] [rbp-88h]
  __int64 v15; // [rsp+320h] [rbp-80h]
  __int64 v16; // [rsp+328h] [rbp-78h]
  __int64 v17; // [rsp+330h] [rbp-70h]
  __int64 v18; // [rsp+338h] [rbp-68h]
  __int64 v19; // [rsp+340h] [rbp-60h]
  __int64 v20; // [rsp+348h] [rbp-58h] BYREF
  __int64 v21; // [rsp+350h] [rbp-50h]
  __int64 v22; // [rsp+358h] [rbp-48h]
  __int64 v23; // [rsp+360h] [rbp-40h] BYREF
  __int64 v24; // [rsp+368h] [rbp-38h]
  __int64 v25; // [rsp+370h] [rbp-30h]

  v4 = (void *)a3[1]; /*0x10053f4ba*/
  codexmate_lib::core::relay::manager::RelayManager::activate::h3dd856d021050f86(v9, a2, v4, a3[2]); /*0x10053f4cc*/
  if ( !__OFSUB__(-v9[0], 1) ) /*0x10053f4e5*/
  {
    v19 = v9[3]; /*0x10053f5bd*/
    v18 = v9[2]; /*0x10053f5ca*/
    v17 = v9[1]; /*0x10053f5ce*/
    memcpy(__dsta, &v9[4], sizeof(__dsta)); /*0x10053f5e5*/
    v14 = v9[1]; /*0x10053f5f2*/
    v10[0] = v9[0]; /*0x10053f5fd*/
    v10[1] = v9[1]; /*0x10053f604*/
    v10[2] = v9[2]; /*0x10053f60b*/
    v10[3] = v9[3]; /*0x10053f612*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h6c74eb133b70c3e2((__int64)v9, v10); /*0x10053f627*/
    memcpy(__dst, v9, 0x178u); /*0x10053f63b*/
    v7 = *a3; /*0x10053f640*/
    if ( !*a3 ) /*0x10053f646*/
      return __dst; /*0x10053f646*/
LABEL_6:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v7, 1); /*0x10053f648*/
    return __dst; /*0x10053f650*/
  }
  qmemcpy(v12, &v9[1], sizeof(v12)); /*0x10053f4fd*/
  v23 = 0; /*0x10053f500*/
  v24 = 1; /*0x10053f508*/
  v25 = 0; /*0x10053f510*/
  v13[2] = 1610612768; /*0x10053f518*/
  v13[0] = &v23; /*0x10053f527*/
  v13[1] = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10053f535*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10053f546*/
                          v12,
                          v13) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053f688*/
      &anon_92869709a5e99ce1936aa4e326b6c562_1258,
      55,
      &v20,
      &anon_92869709a5e99ce1936aa4e326b6c562_1272,
      &anon_92869709a5e99ce1936aa4e326b6c562_1260);
  v20 = v23; /*0x10053f55b*/
  v21 = v24; /*0x10053f55f*/
  v22 = v25; /*0x10053f567*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v9[1]); /*0x10053f56e*/
  v5 = v20; /*0x10053f581*/
  v6 = v21; /*0x10053f585*/
  v14 = v20; /*0x10053f589*/
  v15 = v21; /*0x10053f590*/
  v16 = v22; /*0x10053f594*/
  __dst[3] = v22; /*0x10053f598*/
  __dst[2] = v6; /*0x10053f59c*/
  __dst[1] = v5; /*0x10053f5a0*/
  *__dst = 0x8000000000000000LL; /*0x10053f5a4*/
  v7 = *a3; /*0x10053f5a7*/
  if ( *a3 ) /*0x10053f5a7*/
    goto LABEL_6; /*0x10053f5ad*/
  return __dst; /*0x10053f658*/
}