// mac 1.2.2 NEW export_debug_bundle 0x100a3d590 d=1
size_t *__fastcall codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h1064beee6e5950ca(size_t *a1)
{
  __int64 v1; // r14
  _BYTE *v2; // rax
  const void *v3; // r15
  size_t v4; // rdx
  size_t *result; // rax
  __int64 v6; // [rsp+8h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-30h]
  size_t v8; // [rsp+18h] [rbp-28h]
  size_t v9; // [rsp+20h] [rbp-20h]

  std::env::_var::h5297a832922dea45(&v6, &unk_1015B4316, 10); /*0x100a3d5b0*/
  if ( (_BYTE)v6 ) /*0x100a3d5b9*/
  {
    if ( !__OFSUB__(-v7, 1) && v7 ) /*0x100a3d5d1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3d5dc*/
    dirs::home_dir::hc82e61f557956e66(&v6); /*0x100a3d5e5*/
    v1 = v6; /*0x100a3d5ea*/
    if ( v6 == 0x8000000000000000LL ) /*0x100a3d5f1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3d5f3*/
      v1 = 1; /*0x100a3d5f8*/
      v2 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1u, 1u); /*0x100a3d608*/
      if ( !v2 ) /*0x100a3d610*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100a3d682*/
      v3 = v2; /*0x100a3d612*/
      *v2 = 46; /*0x100a3d615*/
      v4 = 1; /*0x100a3d618*/
    }
    else
    {
      v3 = (const void *)v7; /*0x100a3d638*/
      v4 = v8; /*0x100a3d63c*/
    }
    result = std::path::Path::_join::hb1a495d4f06b13b8(a1, v3, v4, byte_1015B4320, 6u); /*0x100a3d653*/
    if ( v1 ) /*0x100a3d65b*/
      return (size_t *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3d668*/
  }
  else
  {
    a1[2] = v9; /*0x100a3d623*/
    result = (size_t *)v7; /*0x100a3d627*/
    a1[1] = v8; /*0x100a3d62f*/
    *a1 = (size_t)result; /*0x100a3d633*/
  }
  return result; /*0x100a3d66d*/
}