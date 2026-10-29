// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::account_reset_credits::matching_auth::h5f3cad462a7782e3; addr: 0x1008f0f10; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_QWORD *__fastcall codexmate_lib::core::repository::account_reset_credits::matching_auth::h5f3cad462a7782e3(
        _QWORD *__dst,
        _QWORD *a2,
        _QWORD *a3,
        size_t a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  void *v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // r14
  _QWORD __src[22]; // [rsp+8h] [rbp-E8h] BYREF
  _QWORD v14[7]; // [rsp+B8h] [rbp-38h] BYREF

  v4 = __dst; /*0x1008f0f20*/
  if ( *(_DWORD *)a2 != 2 && (v5 = a2, a2[7] == a4) && (__dst = (_QWORD *)a2[6], a2 = a3, !memcmp(__dst, a3, a4)) ) /*0x1008f0f42*/
  {
    v8 = 0; /*0x1008f0ff8*/
    v9 = 1; /*0x1008f1001*/
    if ( v5[22] != 0x8000000000000000LL ) /*0x1008f1006*/
    {
      v9 = v5[23]; /*0x1008f1006*/
      v8 = v5[24]; /*0x1008f100e*/
    }
    v14[0] = v9; /*0x1008f1016*/
    v14[1] = v8; /*0x1008f101a*/
    v14[2] = 0; /*0x1008f101e*/
    v14[3] = 0; /*0x1008f1026*/
    serde_json::de::from_trait::h5e79430ffdcb9680(__src, v14); /*0x1008f1039*/
    if ( __src[0] == 0x8000000000000001LL ) /*0x1008f1045*/
    {
      v14[0] = __src[1]; /*0x1008f1052*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v14, v10); /*0x1008f1056*/
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x1008f1065*/
      if ( !v11 ) /*0x1008f106d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37); /*0x1008f111a*/
      v12 = v11; /*0x1008f1073*/
      qmemcpy(v11, "Reset card credentials are unreadable", 37); /*0x1008f10b8*/
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc62c3b2945dfda16(v14); /*0x1008f10bf*/
      v4[1] = 9; /*0x1008f10c4*/
      v4[2] = 37; /*0x1008f10cc*/
      v4[3] = v12; /*0x1008f10d4*/
      v4[4] = 37; /*0x1008f10d8*/
      *v4 = 0x8000000000000001LL; /*0x1008f10e0*/
    }
    else
    {
      memcpy(v4, __src, 0xB0u); /*0x1008f10f7*/
    }
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2, a3); /*0x1008f0f48*/
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x1008f0f57*/
    if ( !v6 ) /*0x1008f0f5f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42); /*0x1008f110b*/
    qmemcpy(v6, "Reset card account identity does not match", 42); /*0x1008f0fa7*/
    v4[1] = 9; /*0x1008f0fb0*/
    v4[2] = 42; /*0x1008f0fb8*/
    v4[3] = v6; /*0x1008f0fc0*/
    v4[4] = 42; /*0x1008f0fc4*/
    *v4 = 0x8000000000000001LL; /*0x1008f0fd6*/
  }
  return v4; /*0x1008f0fdc*/
}