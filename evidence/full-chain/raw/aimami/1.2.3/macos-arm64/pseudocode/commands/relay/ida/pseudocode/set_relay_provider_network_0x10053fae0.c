// __ZN13codexmate_lib8commands5relay26set_relay_provider_network @ 0x10053fae0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::relay::set_relay_provider_network::hf095a26b2ce6674c(
        _QWORD *__dst,
        __int64 a2,
        __int64 *a3,
        int a4)
{
  void *v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  unsigned __int64 v10[47]; // [rsp+0h] [rbp-3A0h] BYREF
  _QWORD v11[4]; // [rsp+178h] [rbp-228h] BYREF
  _BYTE __dsta[264]; // [rsp+198h] [rbp-208h] BYREF
  _BYTE v13[96]; // [rsp+2A0h] [rbp-100h] BYREF
  _QWORD v14[3]; // [rsp+300h] [rbp-A0h] BYREF
  unsigned __int64 v15; // [rsp+318h] [rbp-88h]
  __int64 v16; // [rsp+320h] [rbp-80h]
  __int64 v17; // [rsp+328h] [rbp-78h]
  unsigned __int64 v18; // [rsp+330h] [rbp-70h]
  unsigned __int64 v19; // [rsp+338h] [rbp-68h]
  unsigned __int64 v20; // [rsp+340h] [rbp-60h]
  unsigned __int64 v21; // [rsp+348h] [rbp-58h] BYREF
  __int64 v22; // [rsp+350h] [rbp-50h]
  __int64 v23; // [rsp+358h] [rbp-48h]
  unsigned __int64 v24; // [rsp+360h] [rbp-40h] BYREF
  __int64 v25; // [rsp+368h] [rbp-38h]
  __int64 v26; // [rsp+370h] [rbp-30h]

  v5 = (void *)a3[1]; /*0x10053fafd*/
  codexmate_lib::core::relay::manager::RelayManager::set_provider_network::h6a5f4570f94c9a38(v10, a2, v5, a3[2], a4); /*0x10053fb0f*/
  if ( !__OFSUB__(-v10[0], 1) ) /*0x10053fb28*/
  {
    v20 = v10[3]; /*0x10053fc00*/
    v19 = v10[2]; /*0x10053fc0d*/
    v18 = v10[1]; /*0x10053fc11*/
    memcpy(__dsta, &v10[4], sizeof(__dsta)); /*0x10053fc28*/
    v15 = v10[1]; /*0x10053fc35*/
    v11[0] = v10[0]; /*0x10053fc40*/
    v11[1] = v10[1]; /*0x10053fc47*/
    v11[2] = v10[2]; /*0x10053fc4e*/
    v11[3] = v10[3]; /*0x10053fc55*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h6c74eb133b70c3e2((__int64)v10, v11); /*0x10053fc6a*/
    memcpy(__dst, v10, 0x178u); /*0x10053fc7e*/
    v8 = *a3; /*0x10053fc83*/
    if ( !*a3 ) /*0x10053fc89*/
      return __dst; /*0x10053fc89*/
LABEL_6:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v8, 1); /*0x10053fc8b*/
    return __dst; /*0x10053fc93*/
  }
  qmemcpy(v13, &v10[1], sizeof(v13)); /*0x10053fb40*/
  v24 = 0; /*0x10053fb43*/
  v25 = 1; /*0x10053fb4b*/
  v26 = 0; /*0x10053fb53*/
  v14[2] = 1610612768; /*0x10053fb5b*/
  v14[0] = &v24; /*0x10053fb6a*/
  v14[1] = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10053fb78*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10053fb89*/
                          v13,
                          v14) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053fccb*/
      &anon_92869709a5e99ce1936aa4e326b6c562_1258,
      55,
      &v21,
      &anon_92869709a5e99ce1936aa4e326b6c562_1272,
      &anon_92869709a5e99ce1936aa4e326b6c562_1260);
  v21 = v24; /*0x10053fb9e*/
  v22 = v25; /*0x10053fba2*/
  v23 = v26; /*0x10053fbaa*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v10[1]); /*0x10053fbb1*/
  v6 = v21; /*0x10053fbc4*/
  v7 = v22; /*0x10053fbc8*/
  v15 = v21; /*0x10053fbcc*/
  v16 = v22; /*0x10053fbd3*/
  v17 = v23; /*0x10053fbd7*/
  __dst[3] = v23; /*0x10053fbdb*/
  __dst[2] = v7; /*0x10053fbdf*/
  __dst[1] = v6; /*0x10053fbe3*/
  *__dst = 0x8000000000000000LL; /*0x10053fbe7*/
  v8 = *a3; /*0x10053fbea*/
  if ( *a3 ) /*0x10053fbea*/
    goto LABEL_6; /*0x10053fbf0*/
  return __dst; /*0x10053fc9b*/
}