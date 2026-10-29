// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::Repository::get_usage_refresh_interval::hfb7719930c5dbc84; addr: 0x100aceb80; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
signed __int64 *__fastcall codexmate_lib::core::repository::Repository::get_usage_refresh_interval::hfb7719930c5dbc84(
        signed __int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r15
  const char *v11; // rsi
  _BYTE __dst[24]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+18h] [rbp-A8h]
  __int64 v15; // [rsp+20h] [rbp-A0h]

  codexmate_lib::core::repository::Repository::load_settings::hc9e6436998705338(__dst); /*0x100aceb9e*/
  v2 = v14; /*0x100aceba3*/
  v3 = v15; /*0x100acebaa*/
  v4 = codexmate_lib::core::repository::normalize_usage_refresh_interval::ha67bf852400b1119(v14, v15); /*0x100acebb1*/
  v6 = 2; /*0x100acebb9*/
  if ( v4 ) /*0x100acebbf*/
    v6 = v5; /*0x100acebbf*/
  if ( v6 < 0 ) /*0x100acebc6*/
  {
    v7 = 0; /*0x100acebc8*/
    goto LABEL_5; /*0x100acebc8*/
  }
  if ( v6 ) /*0x100acebd8*/
  {
    v8 = v4; /*0x100acebda*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v2, v3, v5); /*0x100acebdd*/
    v7 = 1; /*0x100acebe2*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100acebf0*/
    if ( !v9 ) /*0x100acebf8*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x100acebcb*/
    v10 = v9; /*0x100acebfa*/
    v4 = v8; /*0x100acebfd*/
  }
  else
  {
    v10 = 1; /*0x100acec02*/
  }
  v11 = "1m"; /*0x100acec0b*/
  if ( v4 ) /*0x100acec12*/
    v11 = (const char *)v4; /*0x100acec12*/
  memcpy((void *)v10, v11, v6); /*0x100acec1c*/
  *a1 = v6; /*0x100acec21*/
  a1[1] = v10; /*0x100acec24*/
  a1[2] = v6; /*0x100acec28*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h939f6e3f6a2b103c(__dst); /*0x100acec33*/
  return a1; /*0x100acec3b*/
}