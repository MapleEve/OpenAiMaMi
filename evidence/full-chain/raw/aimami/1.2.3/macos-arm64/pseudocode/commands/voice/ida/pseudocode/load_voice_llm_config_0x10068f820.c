// __ZN13codexmate_lib8commands5voice21load_voice_llm_config @ 0x10068f820 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice::load_voice_llm_config::hf1a1ee651a6bacd9(
        _QWORD *__dst,
        __int64 *a2,
        double a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  _BYTE v9[96]; // [rsp+8h] [rbp-218h] BYREF
  _QWORD __src[23]; // [rsp+68h] [rbp-1B8h] BYREF
  _QWORD v11[4]; // [rsp+120h] [rbp-100h] BYREF
  _BYTE v12[72]; // [rsp+140h] [rbp-E0h] BYREF
  _QWORD v13[3]; // [rsp+188h] [rbp-98h] BYREF
  __int64 v14; // [rsp+1A0h] [rbp-80h]
  __int64 v15; // [rsp+1A8h] [rbp-78h]
  __int64 v16; // [rsp+1B0h] [rbp-70h]
  __int64 v17; // [rsp+1B8h] [rbp-68h]
  __int64 v18; // [rsp+1C0h] [rbp-60h]
  __int64 v19; // [rsp+1C8h] [rbp-58h]
  __int64 v20; // [rsp+1D0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+1D8h] [rbp-48h]
  __int64 v22; // [rsp+1E0h] [rbp-40h]
  __int64 v23; // [rsp+1E8h] [rbp-38h] BYREF
  __int64 v24; // [rsp+1F0h] [rbp-30h]
  __int64 v25; // [rsp+1F8h] [rbp-28h]

  v4 = a2[1]; /*0x10068f838*/
  codexmate_lib::core::voice::llm::load_saved_config::h44338161021bc49d((__int64)__src, v4, a2[2], a3); /*0x10068f84a*/
  if ( !__OFSUB__(-__src[0], 1) ) /*0x10068f863*/
  {
    v19 = __src[3]; /*0x10068f938*/
    v18 = __src[2]; /*0x10068f945*/
    v17 = __src[1]; /*0x10068f949*/
    qmemcpy(v12, &__src[4], sizeof(v12)); /*0x10068f960*/
    v14 = __src[1]; /*0x10068f96b*/
    v11[0] = __src[0]; /*0x10068f973*/
    v11[1] = __src[1]; /*0x10068f97a*/
    v11[2] = __src[2]; /*0x10068f981*/
    v11[3] = __src[3]; /*0x10068f988*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf36b6214f86127c9((__int64)__src, v11); /*0x10068f99d*/
    memcpy(__dst, __src, 0xB8u); /*0x10068f9b1*/
    v7 = *a2; /*0x10068f9b6*/
    if ( !*a2 ) /*0x10068f9bc*/
      return __dst; /*0x10068f9bc*/
LABEL_6:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v7, 1); /*0x10068f9be*/
    return __dst; /*0x10068f9c6*/
  }
  qmemcpy(v9, &__src[1], sizeof(v9)); /*0x10068f87b*/
  v23 = 0; /*0x10068f87e*/
  v24 = 1; /*0x10068f886*/
  v25 = 0; /*0x10068f88e*/
  v13[2] = 1610612768; /*0x10068f896*/
  v13[0] = &v23; /*0x10068f8a5*/
  v13[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10068f8b3*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10068f8c4*/
                          v9,
                          v13) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10068f9fc*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v20,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v20 = v23; /*0x10068f8d9*/
  v21 = v24; /*0x10068f8dd*/
  v22 = v25; /*0x10068f8e5*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x10068f8ec*/
  v5 = v20; /*0x10068f8ff*/
  v6 = v21; /*0x10068f903*/
  v14 = v20; /*0x10068f907*/
  v15 = v21; /*0x10068f90b*/
  v16 = v22; /*0x10068f90f*/
  __dst[3] = v22; /*0x10068f913*/
  __dst[2] = v6; /*0x10068f917*/
  __dst[1] = v5; /*0x10068f91b*/
  *__dst = 0x8000000000000000LL; /*0x10068f91f*/
  v7 = *a2; /*0x10068f922*/
  if ( *a2 ) /*0x10068f922*/
    goto LABEL_6; /*0x10068f928*/
  return __dst; /*0x10068f9ce*/
}