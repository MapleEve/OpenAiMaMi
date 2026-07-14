// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_installed_skills node 0x100534a50 depth=0
_QWORD *__fastcall codexmate_lib::core::repository::Repository::store_bootstrap_installed_skills::hf0a12ffaba6d55a7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6)
{
  _UNKNOWN **v7; // rax
  void *v8; // r13
  size_t v9; // r15
  int v10; // edx
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // r13
  __int64 v14; // r12
  char *v15; // r13
  size_t v16; // r14
  char **v17; // r14
  __int64 __src[115]; // [rsp+8h] [rbp-798h] BYREF
  _QWORD __dst[115]; // [rsp+3A0h] [rbp-400h] BYREF
  int v21; // [rsp+738h] [rbp-68h]
  _QWORD v22[3]; // [rsp+740h] [rbp-60h] BYREF
  void *v23; // [rsp+758h] [rbp-48h]
  __int64 v24; // [rsp+760h] [rbp-40h] BYREF
  void *__buf; // [rsp+768h] [rbp-38h]
  size_t __nbyte; // [rsp+770h] [rbp-30h]

  v7 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557((_BYTE **)a2); /*0x100534a70*/
  if ( v7 ) /*0x100534a78*/
  {
    *a1 = 2; /*0x100534a7a*/
    a1[1] = v7; /*0x100534a81*/
  }
  else
  {
    v8 = *(void **)(a2 + 464); /*0x100534a8a*/
    v9 = *(_QWORD *)(a2 + 472); /*0x100534a91*/
    codexmate_lib::core::bootstrap_cache::load::h642b53faa3521cbf(__src, v8, v9); /*0x100534aa5*/
    v24 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x100534aaf*/
    LODWORD(__buf) = v10; /*0x100534ab3*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)__dst, (__int64)&v24, 0, 0); /*0x100534ac5*/
    if ( LOBYTE(__dst[0]) ) /*0x100534ad1*/
      v11 = 0; /*0x100534adc*/
    else
      v11 = __dst[1]; /*0x100534ad3*/
    __src[0] = 1; /*0x100534ade*/
    __src[1] = v11; /*0x100534ae9*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::heeaae4f844003ab0(v22, a3); /*0x100534af7*/
    v23 = v8; /*0x100534afc*/
    v12 = *(_DWORD *)(a3 + 56); /*0x100534b00*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1((size_t *)&v24, a3 + 24); /*0x100534b0e*/
    v13 = *(_QWORD *)(a3 + 48); /*0x100534b13*/
    __dst[2] = v22[2]; /*0x100534b1c*/
    __dst[1] = v22[1]; /*0x100534b2b*/
    __dst[0] = v22[0]; /*0x100534b32*/
    __dst[3] = v24; /*0x100534b41*/
    __dst[4] = __buf; /*0x100534b48*/
    __dst[5] = __nbyte; /*0x100534b53*/
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..SkillListPayload$GT$$GT$::hfbd59de1fb042319(&__src[107]); /*0x100534b64*/
    __src[112] = __dst[5]; /*0x100534b70*/
    __src[111] = __dst[4]; /*0x100534b7c*/
    __src[110] = __dst[3]; /*0x100534b88*/
    __src[109] = __dst[2]; /*0x100534b94*/
    __src[108] = __dst[1]; /*0x100534ba7*/
    __src[107] = __dst[0]; /*0x100534bac*/
    __src[113] = v13; /*0x100534bb0*/
    LODWORD(__src[114]) = v12; /*0x100534bb7*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x100534bd4*/
    v21 = 1; /*0x100534bd9*/
    serde_json::ser::to_vec::he041d2f67f554c3b(&v24, (__int64)__dst); /*0x100534be7*/
    v14 = v24; /*0x100534bec*/
    v15 = (char *)__buf; /*0x100534bf0*/
    if ( __OFSUB__(-v24, 1) ) /*0x100534bf7*/
    {
      *a1 = 3; /*0x100534bfc*/
      a1[1] = v15; /*0x100534c03*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88((__int64)__dst); /*0x100534c0e*/
    }
    else
    {
      v16 = __nbyte; /*0x100534c15*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88((__int64)__dst); /*0x100534c20*/
      v17 = std::fs::write::inner::had0c1bee0a2c1e21(v23, v9, v15, v16, a4, a5, a6); /*0x100534c37*/
      if ( v14 ) /*0x100534c3d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100534c4a*/
      if ( v17 ) /*0x100534c52*/
      {
        *a1 = 2; /*0x100534c54*/
        a1[1] = v17; /*0x100534c5b*/
      }
      else
      {
        *a1 = 10; /*0x100534c61*/
      }
    }
  }
  return a1; /*0x100534c6b*/
}