// __ZN13codexmate_lib8platform5paths10CodexPaths20state_db_search_dirs @ 0x100542190 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::state_db_search_dirs::he3f621873ba76902(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int128 v6; // kr00_16
  __int64 v7; // r13
  __int64 result; // rax
  __int128 v9; // [rsp+10h] [rbp-40h] BYREF
  __int64 v10; // [rsp+20h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::configured_sqlite_home::hd0cd1e7be263d666(&v9, a2, a3); /*0x1005421ae*/
  if ( __OFSUB__(-(__int64)v9, 1) ) /*0x1005421ba*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v9, a2); /*0x1005421c3*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 8); /*0x1005421d2*/
    if ( !v4 ) /*0x1005421da*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64); /*0x1005422d0*/
    v5 = v4; /*0x1005421e0*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v9, a2, a3, &unk_1015FD3B6, 6); /*0x1005421fa*/
    v6 = v9; /*0x10054220b*/
    v7 = v10; /*0x10054220f*/
    std::path::Path::to_path_buf::h73855ce4b54f7174(&v9, a2, a3); /*0x10054221d*/
    *(_QWORD *)(v5 + 48) = v10; /*0x100542226*/
    *(_OWORD *)(v5 + 32) = v9; /*0x100542236*/
    *(_OWORD *)v5 = v6; /*0x10054223e*/
    *(_QWORD *)(v5 + 16) = v7; /*0x100542249*/
    *(_BYTE *)(v5 + 24) = 1; /*0x10054224d*/
    *(_BYTE *)(v5 + 56) = 0; /*0x100542252*/
    *a1 = 2; /*0x100542257*/
    a1[1] = v5; /*0x10054225e*/
    a1[2] = 2; /*0x100542262*/
    return *((_QWORD *)&v6 + 1); /*0x100542241*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v9, a2); /*0x100542270*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x10054227f*/
    if ( !result ) /*0x100542287*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1005422df*/
    *(_QWORD *)(result + 16) = v10; /*0x10054228d*/
    *(_OWORD *)result = v9; /*0x10054229d*/
    *(_BYTE *)(result + 24) = 1; /*0x1005422a0*/
    *a1 = 1; /*0x1005422a4*/
    a1[1] = result; /*0x1005422ab*/
    a1[2] = 1; /*0x1005422af*/
  }
  return result; /*0x1005422b7*/
}