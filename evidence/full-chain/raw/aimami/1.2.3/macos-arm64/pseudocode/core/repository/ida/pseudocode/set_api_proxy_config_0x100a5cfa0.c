// __ZN13codexmate_lib4core10repository10Repository20set_api_proxy_config @ 0x100a5cfa0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::set_api_proxy_config::h8bc9c4bdc38afba1(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  double v7; // xmm0_8
  char v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD __dst[14]; // [rsp+0h] [rbp-180h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp-110h]
  __int64 v17; // [rsp+78h] [rbp-108h]
  __int64 v18; // [rsp+80h] [rbp-100h]
  char v19; // [rsp+88h] [rbp-F8h]
  _QWORD v20[14]; // [rsp+98h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+108h] [rbp-78h] BYREF
  __int64 v22; // [rsp+110h] [rbp-70h]
  __int64 v23; // [rsp+118h] [rbp-68h] BYREF
  __int64 v24; // [rsp+120h] [rbp-60h]
  __int64 v25; // [rsp+128h] [rbp-58h]
  __int64 v26; // [rsp+130h] [rbp-50h]
  __int64 v27; // [rsp+138h] [rbp-48h] BYREF
  __int64 v28; // [rsp+140h] [rbp-40h]
  __int64 v29; // [rsp+148h] [rbp-38h]
  __int64 v30; // [rsp+150h] [rbp-30h]

  LOBYTE(v20[3]) = a3; /*0x100a5cfba*/
  v5 = a4[1]; /*0x100a5cfc3*/
  v20[0] = *a4; /*0x100a5cfc7*/
  v20[1] = v5; /*0x100a5cfce*/
  v20[2] = a4[2]; /*0x100a5cfd9*/
  codexmate_lib::core::api_client::sanitize_proxy_config::h442c99beeb88638a((__int64)__dst, (__int64)v20); /*0x100a5cfee*/
  v6 = __dst[0]; /*0x100a5cffd*/
  v27 = __dst[1]; /*0x100a5d00b*/
  v28 = __dst[2]; /*0x100a5d016*/
  v29 = __dst[3]; /*0x100a5d021*/
  v30 = __dst[4]; /*0x100a5d02c*/
  if ( __dst[0] == 11 ) /*0x100a5d034*/
  {
    v23 = v27; /*0x100a5d042*/
    v24 = v28; /*0x100a5d046*/
    v25 = v29; /*0x100a5d04e*/
    v26 = v30; /*0x100a5d056*/
    if ( v20[0] != 0x8000000000000000LL && v20[0] ) /*0x100a5d069*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20[1], v20[0], 1); /*0x100a5d077*/
    v7 = codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst, (__int64)a2); /*0x100a5d086*/
    v8 = v26; /*0x100a5d08b*/
    v9 = 0x8000000000000000LL; /*0x100a5d090*/
    if ( v23 != 0x8000000000000000LL ) /*0x100a5d097*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v20, &v23); /*0x100a5d0a4*/
      v9 = v20[0]; /*0x100a5d0a9*/
      v21 = v20[1]; /*0x100a5d0b7*/
      v22 = v20[2]; /*0x100a5d0c2*/
    }
    if ( v16 != 0x8000000000000000LL && v16 ) /*0x100a5d0d5*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x100a5d0e3*/
    v16 = v9; /*0x100a5d0e8*/
    v17 = v21; /*0x100a5d0f7*/
    v18 = v22; /*0x100a5d0fe*/
    v19 = v8; /*0x100a5d105*/
    codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(v20, a2, (__int64)__dst, v7); /*0x100a5d11d*/
    if ( LODWORD(v20[0]) == 11 ) /*0x100a5d129*/
    {
      v30 = v26; /*0x100a5d133*/
      v29 = v25; /*0x100a5d13b*/
      v28 = v24; /*0x100a5d147*/
      v27 = v23; /*0x100a5d14b*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hdce455b0d029b982((__int64)v20, &v27); /*0x100a5d15a*/
      qmemcpy(a1, v20, 0x70u); /*0x100a5d16e*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, &v21); /*0x100a5d178*/
      return a1; /*0x100a5d17d*/
    }
    qmemcpy(a1 + 1, v20, 0x60u); /*0x100a5d220*/
    *a1 = 0x8000000000000000LL; /*0x100a5d223*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2( /*0x100a5d22d*/
      __dst,
      &v20[12]);
    v12 = v23; /*0x100a5d232*/
    if ( v23 != 0x8000000000000000LL && v23 ) /*0x100a5d23e*/
    {
      v13 = v24; /*0x100a5d240*/
      goto LABEL_18; /*0x100a5d240*/
    }
  }
  else
  {
    a1[12] = __dst[11]; /*0x100a5d189*/
    a1[11] = __dst[10]; /*0x100a5d194*/
    a1[10] = __dst[9]; /*0x100a5d19f*/
    a1[9] = __dst[8]; /*0x100a5d1aa*/
    a1[8] = __dst[7]; /*0x100a5d1b5*/
    v10 = __dst[5]; /*0x100a5d1b9*/
    a1[7] = __dst[6]; /*0x100a5d1c7*/
    a1[6] = v10; /*0x100a5d1cb*/
    a1[5] = v30; /*0x100a5d1d3*/
    a1[4] = v29; /*0x100a5d1db*/
    v11 = v27; /*0x100a5d1df*/
    a1[3] = v28; /*0x100a5d1e7*/
    a1[2] = v11; /*0x100a5d1eb*/
    a1[1] = v6; /*0x100a5d1ef*/
    *a1 = 0x8000000000000000LL; /*0x100a5d1f3*/
    v12 = v20[0]; /*0x100a5d1f6*/
    if ( v20[0] != 0x8000000000000000LL && v20[0] ) /*0x100a5d205*/
    {
      v13 = v20[1]; /*0x100a5d207*/
LABEL_18:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x100a5d244*/
    }
  }
  return a1; /*0x100a5d251*/
}