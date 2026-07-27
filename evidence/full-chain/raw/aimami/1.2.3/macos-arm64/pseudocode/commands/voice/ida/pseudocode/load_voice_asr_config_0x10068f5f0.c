// __ZN13codexmate_lib8commands5voice21load_voice_asr_config @ 0x10068f5f0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice::load_voice_asr_config::h1be4190ce4dc31bf(_QWORD *__dst, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi
  _BYTE v8[96]; // [rsp+8h] [rbp-218h] BYREF
  _QWORD __src[23]; // [rsp+68h] [rbp-1B8h] BYREF
  _QWORD v10[4]; // [rsp+120h] [rbp-100h] BYREF
  _BYTE v11[72]; // [rsp+140h] [rbp-E0h] BYREF
  _QWORD v12[3]; // [rsp+188h] [rbp-98h] BYREF
  __int64 v13; // [rsp+1A0h] [rbp-80h]
  __int64 v14; // [rsp+1A8h] [rbp-78h]
  __int64 v15; // [rsp+1B0h] [rbp-70h]
  __int64 v16; // [rsp+1B8h] [rbp-68h]
  __int64 v17; // [rsp+1C0h] [rbp-60h]
  __int64 v18; // [rsp+1C8h] [rbp-58h]
  __int64 v19; // [rsp+1D0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+1D8h] [rbp-48h]
  __int64 v21; // [rsp+1E0h] [rbp-40h]
  __int64 v22; // [rsp+1E8h] [rbp-38h] BYREF
  __int64 v23; // [rsp+1F0h] [rbp-30h]
  __int64 v24; // [rsp+1F8h] [rbp-28h]

  v3 = a2[1]; /*0x10068f608*/
  codexmate_lib::core::voice::asr::load_saved_config::hf8730c4a0b983581((__int64)__src, v3, a2[2]); /*0x10068f61a*/
  if ( !__OFSUB__(-__src[0], 1) ) /*0x10068f633*/
  {
    v18 = __src[3]; /*0x10068f708*/
    v17 = __src[2]; /*0x10068f715*/
    v16 = __src[1]; /*0x10068f719*/
    qmemcpy(v11, &__src[4], sizeof(v11)); /*0x10068f730*/
    v13 = __src[1]; /*0x10068f73b*/
    v10[0] = __src[0]; /*0x10068f743*/
    v10[1] = __src[1]; /*0x10068f74a*/
    v10[2] = __src[2]; /*0x10068f751*/
    v10[3] = __src[3]; /*0x10068f758*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf36b6214f86127c9((__int64)__src, v10); /*0x10068f76d*/
    memcpy(__dst, __src, 0xB8u); /*0x10068f781*/
    v6 = *a2; /*0x10068f786*/
    if ( !*a2 ) /*0x10068f78c*/
      return __dst; /*0x10068f78c*/
LABEL_6:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v6, 1); /*0x10068f78e*/
    return __dst; /*0x10068f796*/
  }
  qmemcpy(v8, &__src[1], sizeof(v8)); /*0x10068f64b*/
  v22 = 0; /*0x10068f64e*/
  v23 = 1; /*0x10068f656*/
  v24 = 0; /*0x10068f65e*/
  v12[2] = 1610612768; /*0x10068f666*/
  v12[0] = &v22; /*0x10068f675*/
  v12[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10068f683*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10068f694*/
                          v8,
                          v12) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10068f7cc*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v19,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v19 = v22; /*0x10068f6a9*/
  v20 = v23; /*0x10068f6ad*/
  v21 = v24; /*0x10068f6b5*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x10068f6bc*/
  v4 = v19; /*0x10068f6cf*/
  v5 = v20; /*0x10068f6d3*/
  v13 = v19; /*0x10068f6d7*/
  v14 = v20; /*0x10068f6db*/
  v15 = v21; /*0x10068f6df*/
  __dst[3] = v21; /*0x10068f6e3*/
  __dst[2] = v5; /*0x10068f6e7*/
  __dst[1] = v4; /*0x10068f6eb*/
  *__dst = 0x8000000000000000LL; /*0x10068f6ef*/
  v6 = *a2; /*0x10068f6f2*/
  if ( *a2 ) /*0x10068f6f2*/
    goto LABEL_6; /*0x10068f6f8*/
  return __dst; /*0x10068f79e*/
}