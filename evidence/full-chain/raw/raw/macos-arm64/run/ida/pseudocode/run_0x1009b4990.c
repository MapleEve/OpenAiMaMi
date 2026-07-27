// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b4990 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf8003315da851737(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  __int64 v4; // rcx
  const void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+8h] [rbp-738h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-5D0h] BYREF
  _QWORD v15[50]; // [rsp+378h] [rbp-3C8h] BYREF
  _QWORD v16[50]; // [rsp+508h] [rbp-238h] BYREF
  _QWORD v17[3]; // [rsp+698h] [rbp-A8h] BYREF
  __int64 v18[3]; // [rsp+6B0h] [rbp-90h] BYREF
  unsigned __int64 v19[2]; // [rsp+6C8h] [rbp-78h] BYREF
  size_t __n; // [rsp+6D8h] [rbp-68h]
  __int64 v21; // [rsp+6E0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+6E8h] [rbp-58h]
  __int64 v23; // [rsp+6F0h] [rbp-50h]
  __int64 v24; // [rsp+6F8h] [rbp-48h]
  __int64 v25; // [rsp+700h] [rbp-40h] BYREF
  __int64 v26; // [rsp+708h] [rbp-38h]
  __int64 v27; // [rsp+710h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b49b9*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1009b49d4*/
  v27 = *((_QWORD *)__src + 117); /*0x1009b49e0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b49e4*/
  v26 = *((_QWORD *)__src + 116); /*0x1009b49f2*/
  v25 = v2; /*0x1009b49f6*/
  v16[6] = 0; /*0x1009b49fa*/
  v16[0] = "open_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b4a0c*/
  v16[1] = 23; /*0x1009b4a13*/
  v16[2] = "paneexit"; /*0x1009b4a25*/
  v16[3] = 4; /*0x1009b4a2c*/
  v16[4] = __dst; /*0x1009b4a37*/
  v16[5] = &v25; /*0x1009b4a42*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v21, v16); /*0x1009b4a57*/
  if ( (_BYTE)v21 == 6 ) /*0x1009b4a6a*/
  {
    v18[2] = v24; /*0x1009b4a70*/
    v18[1] = v23; /*0x1009b4a7c*/
    v18[0] = v22; /*0x1009b4a83*/
    codexmate_lib::commands::voice_runtime::open_macos_privacy_pane::h4dcab1d14683b6ad(v19, v18); /*0x1009b4a95*/
    memcpy(v16, __src + 520, sizeof(v16)); /*0x1009b4aa9*/
    v3 = v19[0]; /*0x1009b4aae*/
    if ( v19[0] == 0x8000000000000000LL ) /*0x1009b4ab5*/
    {
      LOBYTE(v21) = 6; /*0x1009b4abb*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9f6c6c7c6be4e32b(v16); /*0x1009b4bf3*/
      goto LABEL_16; /*0x1009b4bfe*/
    }
    v5 = (const void *)v19[1]; /*0x1009b4b6f*/
    v6 = __n; /*0x1009b4b73*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009b4b7a*/
    {
      v7 = 0; /*0x1009b4b7c*/
      goto LABEL_7; /*0x1009b4b7c*/
    }
    if ( __n ) /*0x1009b4b8c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, __src + 520); /*0x1009b4b8e*/
      v7 = 1; /*0x1009b4b93*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009b4ba1*/
      if ( !v8 ) /*0x1009b4ba9*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009b4b7f*/
      v9 = v8; /*0x1009b4bab*/
    }
    else
    {
      v9 = 1; /*0x1009b4bba*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009b4bc9*/
    if ( v3 ) /*0x1009b4bd1*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v3, 1); /*0x1009b4bde*/
    LOBYTE(v21) = 3; /*0x1009b4be3*/
    v22 = v6; /*0x1009b4be7*/
    v23 = v9; /*0x1009b4beb*/
    v24 = v6; /*0x1009b4bef*/
    goto LABEL_15; /*0x1009b4bef*/
  }
  v16[4] = v24; /*0x1009b4ac8*/
  v16[3] = v23; /*0x1009b4ad3*/
  v16[2] = v22; /*0x1009b4ae2*/
  v16[1] = v21; /*0x1009b4ae9*/
  memcpy(v13, __src + 520, sizeof(v13)); /*0x1009b4b02*/
  v4 = *((_QWORD *)__src + 111); /*0x1009b4b15*/
  v17[0] = *((_QWORD *)__src + 110); /*0x1009b4b1c*/
  v17[1] = v4; /*0x1009b4b23*/
  v17[2] = *((_QWORD *)__src + 112); /*0x1009b4b31*/
  v16[0] = 1; /*0x1009b4b46*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b4b65*/
    v13,
    v15[48],
    v16,
    v17,
    LODWORD(v15[49]),
    HIDWORD(v15[49]));
LABEL_16:
  if ( v25 != 0x8000000000000000LL ) /*0x1009b4c07*/
  {
    v10 = v26; /*0x1009b4c09*/
    for ( i = v27 + 1; i != 1; --i ) /*0x1009b4c11*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v10); /*0x1009b4c2d*/
      v10 += 96; /*0x1009b4c32*/
    }
    if ( v25 ) /*0x1009b4c3e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 96 * v25, 8); /*0x1009b4c51*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b4c62*/
}