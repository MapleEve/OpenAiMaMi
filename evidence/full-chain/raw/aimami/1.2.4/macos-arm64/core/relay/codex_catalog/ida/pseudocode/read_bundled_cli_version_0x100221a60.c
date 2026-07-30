// __ZN13codexmate_lib4core5relay13codex_catalog24read_bundled_cli_version @ 0x100221a60 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_catalog::read_bundled_cli_version::h1fdb01aca0dd13e0(_DWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // [rsp+8h] [rbp-158h] BYREF
  __int64 v12; // [rsp+10h] [rbp-150h]
  __int64 v13; // [rsp+18h] [rbp-148h]
  __int64 v14; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v15; // [rsp+D8h] [rbp-88h]
  __int64 v16; // [rsp+E0h] [rbp-80h]
  __int64 v17; // [rsp+E8h] [rbp-78h]
  __int64 v18; // [rsp+F0h] [rbp-70h]
  __int64 v19; // [rsp+F8h] [rbp-68h]
  __int64 v20; // [rsp+100h] [rbp-60h]
  __int64 v21; // [rsp+108h] [rbp-58h]
  __int64 v22; // [rsp+110h] [rbp-50h]
  __int64 v23; // [rsp+118h] [rbp-48h]
  __int64 v24; // [rsp+120h] [rbp-40h]
  __int64 v25; // [rsp+128h] [rbp-38h]
  __int64 v26; // [rsp+130h] [rbp-30h]
  __int64 v27; // [rsp+138h] [rbp-28h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v11); /*0x100221a7f*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v11, "--version", 9); /*0x100221a93*/
  std::process::Command::output::h737eedd4de2ee22e(&v14, &v11); /*0x100221aa6*/
  v1 = v14; /*0x100221aab*/
  if ( __OFSUB__(-v14, 1) ) /*0x100221ab5*/
  {
    if ( (v15 & 3) == 1 ) /*0x100221ac9*/
    {
      v2 = v15 - 1; /*0x100221acb*/
      v3 = *(_QWORD *)(v15 - 1); /*0x100221acf*/
      v4 = *(_QWORD *)(v15 + 7); /*0x100221ad3*/
      if ( *(_QWORD *)v4 ) /*0x100221ad7*/
        (*(void (__fastcall **)(__int64))v4)(v3); /*0x100221ae3*/
      v5 = *(_QWORD *)(v4 + 8); /*0x100221ae5*/
      if ( v5 ) /*0x100221aed*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x100221af7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24, 8); /*0x100221b09*/
    }
    *a1 = 0; /*0x100221b0e*/
    return core::ptr::drop_in_place$LT$std..process..Command$GT$::h2ddfc08274e88933(&v11); /*0x100221b20*/
  }
  v27 = v20; /*0x100221b30*/
  v26 = v19; /*0x100221b38*/
  v25 = v18; /*0x100221b40*/
  v24 = v17; /*0x100221b48*/
  v23 = v16; /*0x100221b53*/
  v22 = v15; /*0x100221b57*/
  v21 = v14; /*0x100221b5b*/
  result = core::ptr::drop_in_place$LT$std..process..Command$GT$::h2ddfc08274e88933(&v11); /*0x100221b66*/
  if ( (_DWORD)v27 ) /*0x100221b6f*/
  {
    *a1 = 0; /*0x100221b71*/
    if ( v1 ) /*0x100221b7a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v1, 1); /*0x100221b88*/
    v7 = v24; /*0x100221b8d*/
    if ( v24 ) /*0x100221b94*/
    {
      v8 = v25; /*0x100221b9a*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x100221c1d*/
    }
  }
  else
  {
    v9 = v22; /*0x100221ba5*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v11, v22, v23); /*0x100221bb7*/
    v10 = v12; /*0x100221bbc*/
    codexmate_lib::core::relay::codex_catalog::parse_model_client_version_text::h6530e9248077026e(a1, v12, v13); /*0x100221bd0*/
    if ( v1 ) /*0x100221bd8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v1, 1); /*0x100221be5*/
    if ( v24 ) /*0x100221bf1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x100221bfc*/
    v7 = v11; /*0x100221c01*/
    result = 2 * v11; /*0x100221c08*/
    if ( 2 * v11 ) /*0x100221c08*/
    {
      v8 = v10; /*0x100221c1a*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x100221c1a*/
    }
  }
  return result; /*0x100221c22*/
}