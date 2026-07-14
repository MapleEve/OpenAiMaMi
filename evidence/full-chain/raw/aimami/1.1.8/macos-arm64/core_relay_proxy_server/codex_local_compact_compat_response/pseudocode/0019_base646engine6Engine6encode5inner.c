// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_compact_compat_response node 0x10025c330 depth=1
__int64 *__fastcall base64::engine::Engine::encode::inner::h6e86c551e78f1899(
        __int64 *a1,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // r8
  __int64 *v6; // r15
  char v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  bool v11; // zf
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ecx
  __int128 v21; // xmm0
  __int64 v22; // [rsp+0h] [rbp-60h] BYREF
  __int128 v23; // [rsp+8h] [rbp-58h]
  __int128 v24; // [rsp+18h] [rbp-48h]
  __int64 *v25; // [rsp+28h] [rbp-38h]
  __int64 v26; // [rsp+30h] [rbp-30h]

  v5 = a3; /*0x10025c344*/
  v6 = a1; /*0x10025c34a*/
  v7 = *a2; /*0x10025c34d*/
  v8 = a4 / 3; /*0x10025c364*/
  v9 = 3 * (a4 / 3); /*0x10025c367*/
  v10 = 4 * v8; /*0x10025c36b*/
  if ( a4 != v9 ) /*0x10025c375*/
  {
    if ( !v7 ) /*0x10025c37a*/
    {
      v10 |= (a4 - v9 == 1) ^ 3LL; /*0x10025c3a0*/
      v11 = v10 == 0; /*0x10025c3a3*/
      if ( v10 < 0 ) /*0x10025c3a6*/
        goto LABEL_5; /*0x10025c3a6*/
      goto LABEL_8; /*0x10025c3a6*/
    }
    v10 += 4; /*0x10025c37c*/
  }
  v11 = v10 == 0; /*0x10025c380*/
  if ( v10 < 0 ) /*0x10025c383*/
  {
LABEL_5:
    v12 = 0; /*0x10025c385*/
    goto LABEL_6; /*0x10025c385*/
  }
LABEL_8:
  if ( v11 ) /*0x10025c3a8*/
  {
    v14 = 1; /*0x10025c3dc*/
  }
  else
  {
    v26 = a3; /*0x10025c3aa*/
    v25 = a1; /*0x10025c3ae*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10025c3b2*/
    v12 = 1; /*0x10025c3b7*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(v10, 1u); /*0x10025c3c5*/
    if ( !v13 ) /*0x10025c3cd*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v10); /*0x10025c388*/
    v14 = v13; /*0x10025c3cf*/
    v6 = v25; /*0x10025c3d2*/
    v5 = v26; /*0x10025c3d6*/
  }
  v15 = a4; /*0x10025c3e7*/
  v16 = v14; /*0x10025c3ed*/
  v17 = _$LT$base64..engine..general_purpose..GeneralPurpose$u20$as$u20$base64..engine..Engine$GT$::internal_encode::hdd02eb725f34585c( /*0x10025c3f0*/
          a2,
          v5,
          v15,
          v14,
          v10);
  if ( v7 ) /*0x10025c3f8*/
  {
    v18 = v10 - v17; /*0x10025c3fd*/
    if ( v10 < v17 ) /*0x10025c400*/
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v17, v10, v10, (__int64)&off_101529618); /*0x10025c485*/
    v19 = -(int)v17 & 3; /*0x10025c406*/
    if ( v19 ) /*0x10025c409*/
    {
      if ( v10 == v17 ) /*0x10025c40e*/
        goto LABEL_25; /*0x10025c40e*/
      *(_BYTE *)(v16 + v17) = 61; /*0x10025c414*/
      if ( v19 == 1 ) /*0x10025c41c*/
        goto LABEL_21; /*0x10025c41c*/
      if ( v18 == 1 ) /*0x10025c422*/
        goto LABEL_25; /*0x10025c422*/
      *(_BYTE *)(v16 + v17 + 1) = 61; /*0x10025c428*/
      if ( v19 == 2 ) /*0x10025c431*/
        goto LABEL_21; /*0x10025c431*/
      if ( v18 == 2 ) /*0x10025c437*/
LABEL_25:
        core::panicking::panic_bounds_check::h56740b1198b22635(v18, v10 - v17, (__int64)&off_101529600); /*0x10025c4cf*/
      *(_BYTE *)(v16 + v17 + 2) = 61; /*0x10025c43d*/
    }
  }
LABEL_21:
  core::str::converts::from_utf8::hb32deb9559450f6e((__int64)&v22, v16, v10); /*0x10025c443*/
  if ( (_DWORD)v22 == 1 ) /*0x10025c456*/
  {
    v21 = v23; /*0x10025c48c*/
    v22 = v10; /*0x10025c490*/
    *(_QWORD *)&v23 = v16; /*0x10025c494*/
    *((_QWORD *)&v23 + 1) = v10; /*0x10025c498*/
    v24 = v21; /*0x10025c49c*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10025c4be*/
      (__int64)&unk_10125ED5B,
      12,
      (__int64)&v22,
      (__int64)&off_101528430,
      (__int64)&off_101529658);
  }
  *v6 = v10; /*0x10025c458*/
  v6[1] = v16; /*0x10025c45b*/
  v6[2] = v10; /*0x10025c45f*/
  return v6; /*0x10025c466*/
}