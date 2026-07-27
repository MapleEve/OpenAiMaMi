// __ZN13codexmate_lib4core5relay13codex_catalog14remove_catalog @ 0x1008a0b50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_catalog::remove_catalog::hc38a8f1fa697fd2d(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // [rsp+0h] [rbp-40h] BYREF
  void *__src; // [rsp+8h] [rbp-38h]
  size_t __n; // [rsp+10h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1008a0b80*/
    &v9,
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "codex_router_catalog.json",
    25);
  v1 = __src; /*0x1008a0b85*/
  v2 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x1008a0b90*/
  v3 = v2; /*0x1008a0b95*/
  if ( !v2 ) /*0x1008a0b9b*/
  {
    v3 = 0; /*0x1008a0bc2*/
LABEL_7:
    v4 = v9; /*0x1008a0bc5*/
    if ( !v9 ) /*0x1008a0bcc*/
      return v3; /*0x1008a0bcc*/
LABEL_8:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v4, 1); /*0x1008a0bce*/
    return v3; /*0x1008a0bd6*/
  }
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v2) ) /*0x1008a0ba0*/
    goto LABEL_7; /*0x1008a0ba7*/
  if ( (v3 & 3) != 1 ) /*0x1008a0bb2*/
  {
    v3 = 0; /*0x1008a0bb4*/
    v4 = v9; /*0x1008a0bb7*/
    if ( !v9 ) /*0x1008a0bbe*/
      return v3; /*0x1008a0bbe*/
    goto LABEL_8; /*0x1008a0bbe*/
  }
  v6 = *(_QWORD *)(v3 - 1); /*0x1008a0bf3*/
  v7 = *(_QWORD *)(v3 + 7); /*0x1008a0bf7*/
  if ( *(_QWORD *)v7 ) /*0x1008a0bfb*/
    (*(void (__fastcall **)(_QWORD))v7)(*(_QWORD *)(v3 - 1)); /*0x1008a0c07*/
  v8 = *(_QWORD *)(v7 + 8); /*0x1008a0c09*/
  if ( v8 ) /*0x1008a0c10*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x1008a0c19*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3 - 1, 24, 8); /*0x1008a0c2b*/
  v3 = 0; /*0x1008a0c30*/
  v4 = v9; /*0x1008a0c33*/
  if ( v9 ) /*0x1008a0c3a*/
    goto LABEL_8; /*0x1008a0c3a*/
  return v3; /*0x1008a0bde*/
}