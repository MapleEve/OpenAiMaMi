// __ZN13codexmate_lib8platform5paths10CodexPaths18resolve_codex_home @ 0x100541a60 | 基线 same-set
double __fastcall codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b(
        __int64 *a1,
        double result)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  _BYTE *v4; // rax
  _BYTE *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-30h]
  __int64 v10; // [rsp+18h] [rbp-28h]
  __int64 v11; // [rsp+20h] [rbp-20h]

  std::env::_var::h5297a832922dea45(&v8, &unk_1015FF69C, 10, result); /*0x100541a80*/
  if ( (_BYTE)v8 ) /*0x100541a89*/
  {
    v2 = v9; /*0x100541a95*/
    if ( !__OFSUB__(-v9, 1) && v9 ) /*0x100541aa1*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100541aac*/
    dirs::home_dir::hc82e61f557956e66(&v8); /*0x100541ab5*/
    v3 = v8; /*0x100541aba*/
    if ( v8 == 0x8000000000000000LL ) /*0x100541ac1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v8, v2); /*0x100541ac3*/
      v3 = 1; /*0x100541ac8*/
      v4 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1, 1); /*0x100541ad8*/
      if ( !v4 ) /*0x100541ae0*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 1); /*0x100541b52*/
      v5 = v4; /*0x100541ae2*/
      *v4 = 46; /*0x100541ae5*/
      v6 = 1; /*0x100541ae8*/
    }
    else
    {
      v5 = (_BYTE *)v9; /*0x100541b08*/
      v6 = v10; /*0x100541b0c*/
    }
    std::path::Path::_join::hb1a495d4f06b13b8(a1, v5, v6, &unk_1015FF6A6, 6); /*0x100541b23*/
    if ( v3 ) /*0x100541b2b*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v3, 1); /*0x100541b38*/
  }
  else
  {
    a1[2] = v11; /*0x100541af3*/
    v7 = v9; /*0x100541af7*/
    a1[1] = v10; /*0x100541aff*/
    *a1 = v7; /*0x100541b03*/
  }
  return result; /*0x100541b3d*/
}