// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND expand_aimami_compactions_for_upstream node 0x10025c1c0 depth=1
unsigned __int64 *__fastcall base64::engine::Engine::decode::inner::h6a6fd532ed40bccc(
        unsigned __int64 *a1,
        int a2,
        int a3,
        __int64 a4)
{
  unsigned __int64 v4; // r12
  int v5; // r15d
  int v6; // ebx
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+10h] [rbp-50h] BYREF
  int v13; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v14; // [rsp+28h] [rbp-38h]
  unsigned int v15; // [rsp+29h] [rbp-37h]
  unsigned __int16 v16; // [rsp+2Dh] [rbp-33h]
  unsigned __int8 v17; // [rsp+2Fh] [rbp-31h]
  unsigned __int64 v18; // [rsp+30h] [rbp-30h]

  v4 = 3 * ((unsigned __int64)(a4 + 3) >> 2); /*0x10025c1dc*/
  if ( a4 ) /*0x10025c1e3*/
  {
    v5 = a3; /*0x10025c1e8*/
    v6 = a4; /*0x10025c1eb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10025c1ee*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(v4, 1u); /*0x10025c1fb*/
    if ( !v7 ) /*0x10025c203*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x10025c2fc*/
    LODWORD(a4) = v6; /*0x10025c209*/
    a3 = v5; /*0x10025c20c*/
    v8 = v4; /*0x10025c20f*/
    v9 = v7; /*0x10025c215*/
  }
  else
  {
    v9 = 1; /*0x10025c21a*/
    v8 = 0; /*0x10025c21f*/
  }
  _$LT$base64..engine..general_purpose..GeneralPurpose$u20$as$u20$base64..engine..Engine$GT$::internal_decode::hbdb45fab6dd65894( /*0x10025c23a*/
    (unsigned int)&v13,
    a2,
    a3,
    a4,
    v9,
    v4,
    a4 & 3);
  if ( v13 == 2 ) /*0x10025c243*/
  {
    if ( v14 == 4 ) /*0x10025c24d*/
    {
      v12[0] = &anon_fdfbeb4f975d8e02b9c40da81dc33589_738; /*0x10025c2cc*/
      v12[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10025c2d7*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x10025c2ed*/
        (__int64)&anon_fdfbeb4f975d8e02b9c40da81dc33589_739,
        (__int64)v12,
        (__int64)&anon_fdfbeb4f975d8e02b9c40da81dc33589_741);
    }
    v10 = v18; /*0x10025c24f*/
    a1[1] = v14 | ((unsigned __int64)((v17 << 16) | (unsigned int)v16) << 40) | ((unsigned __int64)v15 << 8); /*0x10025c271*/
    a1[2] = v10; /*0x10025c275*/
    *a1 = 0x8000000000000000LL; /*0x10025c283*/
    if ( v8 ) /*0x10025c289*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10025c296*/
  }
  else
  {
    if ( v18 < v4 ) /*0x10025c2a4*/
      v4 = v18; /*0x10025c2a4*/
    *a1 = v8; /*0x10025c2a8*/
    a1[1] = v9; /*0x10025c2ab*/
    a1[2] = v4; /*0x10025c2af*/
  }
  return a1; /*0x10025c2b6*/
}