// __ZN13codexmate_lib4core10api_client21sanitize_proxy_config @ 0x1007b7860 | 基线 same-set
__int64 __fastcall codexmate_lib::core::api_client::sanitize_proxy_config::h442c99beeb88638a(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  size_t v7; // r14
  __int64 v8; // r13
  const void *v9; // r12
  void *v10; // rax
  const void *v11; // rsi
  void *v12; // r12
  void *v13; // r12
  __int64 (__fastcall *v14)(); // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // esi
  void *v18; // r15
  unsigned __int64 v19; // r13
  char *v20; // rsi
  __int64 v21; // rax
  void *v22; // [rsp+8h] [rbp-118h] BYREF
  void *__s1; // [rsp+10h] [rbp-110h]
  unsigned __int64 v24; // [rsp+18h] [rbp-108h]
  size_t __n; // [rsp+34h] [rbp-ECh]
  _QWORD v26[3]; // [rsp+60h] [rbp-C0h] BYREF
  _QWORD v27[2]; // [rsp+78h] [rbp-A8h] BYREF
  void **v28; // [rsp+88h] [rbp-98h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-90h] BYREF
  __int64 v30; // [rsp+98h] [rbp-88h]
  __int64 v31; // [rsp+A0h] [rbp-80h]
  __int64 v32; // [rsp+A8h] [rbp-78h]
  __int64 v33; // [rsp+B0h] [rbp-70h]
  int v34; // [rsp+B8h] [rbp-68h]
  int v35; // [rsp+BCh] [rbp-64h]
  __int64 v36; // [rsp+C0h] [rbp-60h]
  __int64 v37; // [rsp+C8h] [rbp-58h]
  __int64 v38; // [rsp+D0h] [rbp-50h]
  __int64 v39; // [rsp+D8h] [rbp-48h]
  __int64 v40; // [rsp+E0h] [rbp-40h]
  void *v41; // [rsp+E8h] [rbp-38h]
  char v42; // [rsp+F7h] [rbp-29h] BYREF

  v2 = a1; /*0x1007b7874*/
  if ( *(_BYTE *)(a2 + 24) != 1 ) /*0x1007b7885*/
  {
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL; /*0x1007b7913*/
    *(_BYTE *)(a1 + 32) = 0; /*0x1007b7917*/
    *(_QWORD *)a1 = 11; /*0x1007b791b*/
    return v2; /*0x1007b791b*/
  }
  if ( *(_QWORD *)a2 == 0x8000000000000000LL ) /*0x1007b788e*/
    goto LABEL_3; /*0x1007b788e*/
  a1 = *(_QWORD *)(a2 + 8); /*0x1007b7937*/
  a2 = *(_QWORD *)(a2 + 16); /*0x1007b793b*/
  v5 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x1007b793f*/
  v7 = v6; /*0x1007b7944*/
  if ( v6 < 0 ) /*0x1007b794a*/
  {
    v8 = 0; /*0x1007b794c*/
    goto LABEL_9; /*0x1007b794c*/
  }
  if ( !v6 ) /*0x1007b795a*/
  {
LABEL_3:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1007b7894*/
    v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1); /*0x1007b78a3*/
    if ( !v3 ) /*0x1007b78ab*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 38); /*0x1007b7bed*/
    qmemcpy(v3, "Manual proxy mode requires a proxy URL", 38); /*0x1007b78f3*/
    *(_QWORD *)v2 = 9; /*0x1007b78f6*/
    *(_QWORD *)(v2 + 8) = 38; /*0x1007b78fd*/
    *(_QWORD *)(v2 + 16) = v3; /*0x1007b7905*/
    *(_QWORD *)(v2 + 24) = 38; /*0x1007b7909*/
    return v2; /*0x1007b7911*/
  }
  v9 = (const void *)v5; /*0x1007b7960*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1007b7963*/
  v8 = 1; /*0x1007b7968*/
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1007b7976*/
  if ( !v10 ) /*0x1007b797e*/
LABEL_9:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1007b794f*/
  v11 = v9; /*0x1007b7983*/
  v12 = v10; /*0x1007b7989*/
  memcpy(v10, v11, v7); /*0x1007b798c*/
  v32 = 0; /*0x1007b7991*/
  v28 = nullptr; /*0x1007b7999*/
  v30 = 0; /*0x1007b79a4*/
  v41 = v12; /*0x1007b79bd*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(&v22, &v28, v12, v7); /*0x1007b79c7*/
  v13 = v22; /*0x1007b79cc*/
  if ( v22 == (void *)0x8000000000000000LL ) /*0x1007b79d6*/
  {
    v42 = (char)__s1; /*0x1007b79e3*/
    v27[0] = &v42; /*0x1007b79ea*/
    v27[1] = _$LT$url..parser..ParseError$u20$as$u20$core..fmt..Display$GT$::fmt::h9b83982323eaffdf; /*0x1007b79f8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v29, &unk_1017C4D93, v27); /*0x1007b7a14*/
    v14 = v29; /*0x1007b7a19*/
    v15 = v30; /*0x1007b7a20*/
    v16 = v31; /*0x1007b7a27*/
    *(_DWORD *)(v2 + 48) = v34; /*0x1007b7a2e*/
    *(_QWORD *)(v2 + 40) = v33; /*0x1007b7a35*/
    *(_QWORD *)(v2 + 32) = v32; /*0x1007b7a3d*/
    v17 = v35; /*0x1007b7a41*/
    *(_QWORD *)(v2 + 64) = v37; /*0x1007b7a48*/
    *(_QWORD *)(v2 + 72) = v38; /*0x1007b7a50*/
    *(_QWORD *)(v2 + 80) = v39; /*0x1007b7a58*/
    *(_QWORD *)(v2 + 88) = v40; /*0x1007b7a60*/
    *(_QWORD *)(v2 + 56) = v36; /*0x1007b7a68*/
    *(_QWORD *)v2 = 9; /*0x1007b7a6c*/
    *(_QWORD *)(v2 + 8) = v14; /*0x1007b7a73*/
    *(_QWORD *)(v2 + 16) = v15; /*0x1007b7a77*/
    *(_QWORD *)(v2 + 24) = v16; /*0x1007b7a7b*/
    *(_DWORD *)(v2 + 52) = v17; /*0x1007b7a7f*/
LABEL_27:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v7, 1); /*0x1007b7b94*/
    return v2; /*0x1007b7ba5*/
  }
  v18 = __s1; /*0x1007b7a87*/
  v19 = (unsigned int)__n; /*0x1007b7a8e*/
  if ( !(_DWORD)__n ) /*0x1007b7a98*/
    goto LABEL_25; /*0x1007b7a98*/
  if ( v24 <= (unsigned int)__n ) /*0x1007b7aa4*/
  {
    if ( v24 != (unsigned int)__n ) /*0x1007b7ac3*/
LABEL_17:
      core::str::slice_error_fail::h480e51fbd8b15eba(__s1, v24, 0, (unsigned int)__n, &off_10196C470); /*0x1007b7aad*/
  }
  else if ( *((char *)__s1 + (unsigned int)__n) <= -65 ) /*0x1007b7aab*/
  {
    goto LABEL_17; /*0x1007b7aab*/
  }
  switch ( (int)__n ) /*0x1007b7adc*/
  {
    case 4: /*0x1007b7adc*/
      v20 = "httpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls"; /*0x1007b7ade*/
      break; /*0x1007b7ae5*/
    case 5: /*0x1007b7adc*/
      v20 = "httpssocks5socks5hhttps://chatgpt.com/backend-api/accounts/check/v4-2023-04-27"; /*0x1007b7af9*/
      break; /*0x1007b7af9*/
    case 6: /*0x1007b7adc*/
      v20 = "socks5socks5hhttps://chatgpt.com/backend-api/accounts/check/v4-2023-04-27"; /*0x1007b7ae7*/
      break; /*0x1007b7aee*/
    case 7: /*0x1007b7adc*/
      v20 = "socks5hhttps://chatgpt.com/backend-api/accounts/check/v4-2023-04-27"; /*0x1007b7af0*/
      break; /*0x1007b7af7*/
    default:
      goto LABEL_25;
  }
  if ( memcmp(__s1, v20, (unsigned int)__n) ) /*0x1007b7b06*/
  {
LABEL_25:
    v22 = v18; /*0x1007b7b13*/
    __s1 = (void *)v19; /*0x1007b7b1a*/
    v28 = &v22; /*0x1007b7b28*/
    v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007b7b36*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v26, &unk_1017C4DA9, &v28); /*0x1007b7b52*/
    *(_QWORD *)(v2 + 24) = v26[2]; /*0x1007b7b5e*/
    v21 = v26[0]; /*0x1007b7b62*/
    *(_QWORD *)(v2 + 16) = v26[1]; /*0x1007b7b70*/
    *(_QWORD *)(v2 + 8) = v21; /*0x1007b7b74*/
    *(_QWORD *)v2 = 9; /*0x1007b7b78*/
    if ( v13 ) /*0x1007b7b82*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v13, 1); /*0x1007b7b8f*/
    goto LABEL_27; /*0x1007b7b8f*/
  }
  *(_QWORD *)(v2 + 8) = v7; /*0x1007b7baa*/
  *(_QWORD *)(v2 + 16) = v41; /*0x1007b7bb2*/
  *(_QWORD *)(v2 + 24) = v7; /*0x1007b7bb6*/
  *(_BYTE *)(v2 + 32) = 1; /*0x1007b7bba*/
  *(_QWORD *)v2 = 11; /*0x1007b7bbe*/
  if ( v13 ) /*0x1007b7bc8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v13, 1); /*0x1007b7bd9*/
  return v2; /*0x1007b7925*/
}