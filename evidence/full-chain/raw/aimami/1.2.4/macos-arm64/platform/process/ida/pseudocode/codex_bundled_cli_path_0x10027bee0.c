// __ZN13codexmate_lib8platform7process22codex_bundled_cli_path @ 0x10027bee0 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::platform::process::codex_bundled_cli_path::h4dba3c7421ecd304(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // r14
  __int64 v3; // r12
  __int64 v4; // r13
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v9; // [rsp+0h] [rbp-70h] BYREF
  __int64 v10; // [rsp+8h] [rbp-68h]
  __int64 v11; // [rsp+10h] [rbp-60h]
  __int64 v12; // [rsp+18h] [rbp-58h] BYREF
  __int64 v13; // [rsp+20h] [rbp-50h]
  __int64 v14; // [rsp+28h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  void *__src; // [rsp+38h] [rbp-38h]
  size_t __n; // [rsp+40h] [rbp-30h]

  codexmate_lib::platform::process::codex_app_bundle_path::hdff522f82def2f61(&v15); /*0x10027bf02*/
  v1 = v15; /*0x10027bf07*/
  if ( __OFSUB__(-v15, 1) ) /*0x10027bf0e*/
  {
    *a1 = 0x8000000000000000LL; /*0x10027bf13*/
  }
  else
  {
    v2 = __src; /*0x10027bf1b*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v9, __src, __n, &unk_1015E4CA8, 8); /*0x10027bf37*/
    v3 = v10; /*0x10027bf3c*/
    std::path::Path::_join::hb1a495d4f06b13b8( /*0x10027bf58*/
      &v12,
      v10,
      v11,
      "Resourcescodexif application id \"com.openai.codex\" is running then\n    tell application id \"com.openai.codex\" to quit\nend if/codex framework.framework//contents/resources/native/bare-modifier-monitor",
      9);
    v4 = v13; /*0x10027bf5d*/
    std::path::Path::_join::hb1a495d4f06b13b8( /*0x10027bf79*/
      &v15,
      v13,
      v14,
      "codexif application id \"com.openai.codex\" is running then\n    tell application id \"com.openai.codex\" to quit\nend if/codex framework.framework//contents/resources/native/bare-modifier-monitor",
      5);
    if ( v12 ) /*0x10027bf85*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v12, 1); /*0x10027bf8f*/
    if ( v9 ) /*0x10027bf9b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v9, 1); /*0x10027bfa5*/
    if ( v1 ) /*0x10027bfb7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v1, 1); /*0x10027bfc4*/
    v5 = __src; /*0x10027bfc9*/
    if ( (unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b(__src, __n) ) /*0x10027bfd4*/
    {
      a1[2] = __n; /*0x10027bfe1*/
      v6 = v15; /*0x10027bfe5*/
      a1[1] = __src; /*0x10027bfed*/
      *a1 = v6; /*0x10027bff1*/
    }
    else
    {
      v7 = v15; /*0x10027bff6*/
      *a1 = 0x8000000000000000LL; /*0x10027bffa*/
      if ( v7 ) /*0x10027c000*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, 1); /*0x10027c00a*/
    }
  }
  return a1; /*0x10027c012*/
}