// mac 1.2.2 NEW migrate_session_worktree 0x100a39f20 d=1
__int64 __fastcall codexmate_lib::core::sessions::restore_regular_file_from_backup::h48abc55c371880bf(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        size_t a5)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-40h] BYREF
  __int64 v12; // [rsp+8h] [rbp-38h]
  __int64 v13; // [rsp+10h] [rbp-30h]

  std::fs::read::inner::h6a30c15c40add28b(&v11, a2, a3); /*0x100a39f3e*/
  v7 = v11; /*0x100a39f43*/
  v8 = v12; /*0x100a39f47*/
  result = -v11; /*0x100a39f4e*/
  if ( __OFSUB__(-v11, 1) ) /*0x100a39f4e*/
  {
    *a1 = 2; /*0x100a39f53*/
    a1[1] = v8; /*0x100a39f5a*/
    return result; /*0x100a39f5e*/
  }
  v10 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hd5da3edf4306a101(a4, a5, v12, v13, 0); /*0x100a39f70*/
  if ( v10 ) /*0x100a39f78*/
  {
    a1[1] = v10; /*0x100a39f7a*/
    result = 2; /*0x100a39f7e*/
    *a1 = 2; /*0x100a39f83*/
    if ( !v7 ) /*0x100a39f89*/
      return result; /*0x100a39f89*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a39f89*/
  }
  result = 10; /*0x100a39fa9*/
  *a1 = 10; /*0x100a39fae*/
  if ( v7 ) /*0x100a39fb4*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a39f8b*/
  return result; /*0x100a39f96*/
}