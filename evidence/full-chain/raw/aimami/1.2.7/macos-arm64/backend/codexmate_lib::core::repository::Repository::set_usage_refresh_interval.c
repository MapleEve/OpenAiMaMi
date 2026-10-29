// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::Repository::set_usage_refresh_interval::h8a7ef22a2876b9ee; addr: 0x100acfa40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_QWORD *__fastcall codexmate_lib::core::repository::Repository::set_usage_refresh_interval::h8a7ef22a2876b9ee(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  signed __int64 v6; // rdx
  const void *v7; // r15
  signed __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  _QWORD v19[12]; // [rsp+0h] [rbp-130h] BYREF
  char __dst[8]; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-C8h] BYREF
  signed __int64 v22; // [rsp+70h] [rbp-C0h]
  _QWORD v23[9]; // [rsp+78h] [rbp-B8h] BYREF
  _QWORD v24[7]; // [rsp+F8h] [rbp-38h] BYREF

  v24[0] = a3; /*0x100acfa5a*/
  v24[1] = a4; /*0x100acfa5e*/
  v5 = codexmate_lib::core::repository::normalize_usage_refresh_interval::ha67bf852400b1119(a3, a4); /*0x100acfa68*/
  if ( v5 ) /*0x100acfa70*/
  {
    v7 = (const void *)v5; /*0x100acfa72*/
    v8 = v6; /*0x100acfa75*/
    codexmate_lib::core::repository::Repository::load_settings::hc9e6436998705338(__dst); /*0x100acfa82*/
    if ( v8 < 0 ) /*0x100acfa8a*/
    {
      v10 = 0; /*0x100acfa8c*/
      goto LABEL_4; /*0x100acfa8c*/
    }
    if ( v8 ) /*0x100acfb00*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2, v9); /*0x100acfb02*/
      v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x100acfb0f*/
      v10 = 1; /*0x100acfb14*/
      if ( !v13 ) /*0x100acfb1c*/
        goto LABEL_4; /*0x100acfb1c*/
      v14 = v13; /*0x100acfb22*/
    }
    else
    {
      v14 = 1; /*0x100acfb27*/
    }
    memcpy((void *)v14, v7, v8); /*0x100acfb36*/
    if ( v22 ) /*0x100acfb45*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23[0], v22, 1); /*0x100acfb53*/
    v22 = v8; /*0x100acfb58*/
    v23[0] = v14; /*0x100acfb5f*/
    v23[1] = v8; /*0x100acfb66*/
    codexmate_lib::core::repository::Repository::save_settings::hd19ad6be621ccafd(v19, a2, __dst); /*0x100acfb7e*/
    if ( LODWORD(v19[0]) != 11 ) /*0x100acfb8a*/
    {
      qmemcpy(a1, v19, 0x60u); /*0x100acfbc5*/
LABEL_19:
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h939f6e3f6a2b103c(__dst); /*0x100acfbf1*/
      return a1; /*0x100acfbf8*/
    }
    if ( !v8 ) /*0x100acfb8f*/
    {
      v17 = 1; /*0x100acfbca*/
      goto LABEL_18; /*0x100acfbca*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, a2, v15); /*0x100acfb91*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x100acfb9e*/
    v10 = 1; /*0x100acfba3*/
    if ( v16 ) /*0x100acfbab*/
    {
      v17 = v16; /*0x100acfbb1*/
LABEL_18:
      memcpy((void *)v17, v7, v8); /*0x100acfbd0*/
      a1[1] = v8; /*0x100acfbde*/
      a1[2] = v17; /*0x100acfbe2*/
      a1[3] = v8; /*0x100acfbe6*/
      *a1 = 11; /*0x100acfbea*/
      goto LABEL_19; /*0x100acfbea*/
    }
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v8); /*0x100acfa8e*/
  }
  v19[0] = v24; /*0x100acfa9c*/
  v19[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100acfaaa*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v21, &unk_101906AE6, v19); /*0x100acfac6*/
  v11 = v21; /*0x100acfacb*/
  v12 = v22; /*0x100acfad2*/
  qmemcpy(a1 + 3, v23, 0x48u); /*0x100acfae9*/
  *a1 = 9; /*0x100acfaec*/
  a1[1] = v11; /*0x100acfaf3*/
  a1[2] = v12; /*0x100acfaf7*/
  return a1; /*0x100acfc00*/
}