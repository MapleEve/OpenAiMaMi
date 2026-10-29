// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_history::has_complete_trailing_tool_results; addr: 0x100c3f900; session: <审计会话>; decompiled_at: 2026-10-26T03:59:46Z
__int64 __fastcall image::images::buffer::ImageBuffer$LT$SelfPixel$C$C$GT$::cast_in_color_space::hf5dea5ba352aec5d(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // [rsp+0h] [rbp-40h] BYREF
  __int64 v17; // [rsp+8h] [rbp-38h]
  unsigned __int64 v18; // [rsp+10h] [rbp-30h]

  v8 = *(unsigned int *)(a2 + 24); /*0x100c3f911*/
  v9 = *(unsigned int *)(a2 + 28); /*0x100c3f915*/
  v10 = v9 * 2 * v8; /*0x100c3f91d*/
  if ( !is_mul_ok(v9, 2 * v8) ) /*0x100c3f920*/
    core::option::unwrap_failed::h44626cade04bbf1e(&anon_f5fe8cb8de1a2f952960619e5cf377d6_17); /*0x100c3f9d8*/
  v11 = *(_QWORD *)(a2 + 16); /*0x100c3f929*/
  if ( v10 > v11 ) /*0x100c3f930*/
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v10, v11, &anon_f5fe8cb8de1a2f952960619e5cf377d6_18); /*0x100c3f9cc*/
  v12 = *(_BYTE *)(a2 + 34); /*0x100c3f93d*/
  image::metadata::cicp::CicpRgb::cast_pixels_by_layout::hd0e1f3220d360173( /*0x100c3f95e*/
    (__int64)&v16,
    v12,
    *(_QWORD *)(a2 + 8),
    v10,
    1,
    (char *)image::images::buffer::ImageBuffer$LT$SelfPixel$C$C$GT$::cast_in_color_space::_$u7b$$u7b$closure$u7d$$u7d$::hfe9a51471674029f,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    3u,
    1u);
  if ( !is_mul_ok(v9, 4 * v8) || v9 * 4 * v8 > v18 ) /*0x100c3f978*/
  {
    if ( v16 ) /*0x100c3f9e4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x100c3f9ef*/
LABEL_11:
    core::option::expect_failed::ha75f8bdcbd673567( /*0x100c3f9f4*/
      "cast_pixels returned the right number of pixels",
      47,
      &anon_f5fe8cb8de1a2f952960619e5cf377d6_24);
  }
  v13 = v16; /*0x100c3f97a*/
  if ( __OFSUB__(-v16, 1) ) /*0x100c3f984*/
    goto LABEL_11; /*0x100c3f984*/
  v14 = v17; /*0x100c3f986*/
  *(_QWORD *)(a1 + 16) = v18; /*0x100c3f98e*/
  *(_QWORD *)(a1 + 8) = v14; /*0x100c3f992*/
  LOWORD(v14) = *(_WORD *)(a2 + 32); /*0x100c3f996*/
  *(_QWORD *)a1 = v13; /*0x100c3f99b*/
  *(_DWORD *)(a1 + 24) = v8; /*0x100c3f99e*/
  *(_DWORD *)(a1 + 28) = v9; /*0x100c3f9a2*/
  *(_WORD *)(a1 + 32) = v14; /*0x100c3f9a6*/
  *(_BYTE *)(a1 + 34) = v12; /*0x100c3f9aa*/
  return a1; /*0x100c3f9b1*/
}