// __ZN13codexmate_lib4core8sessions32restore_regular_file_from_backup @ 0x10053bfb0 | 基线 same-set
void __fastcall codexmate_lib::core::sessions::restore_regular_file_from_backup::hf3e08824a0de1725(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-40h] BYREF
  __int64 v11; // [rsp+8h] [rbp-38h]
  __int64 v12; // [rsp+10h] [rbp-30h]

  std::fs::read::inner::h6a30c15c40add28b(&v10, a2, a3); /*0x10053bfce*/
  v7 = v10; /*0x10053bfd3*/
  v8 = v11; /*0x10053bfd7*/
  if ( __OFSUB__(-v10, 1) ) /*0x10053bfde*/
  {
    *a1 = 2; /*0x10053bfe3*/
    a1[1] = v8; /*0x10053bfea*/
    return; /*0x10053bfee*/
  }
  v9 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(a4, a5, v11, v12, 0); /*0x10053c000*/
  if ( v9 ) /*0x10053c008*/
  {
    a1[1] = v9; /*0x10053c00a*/
    *a1 = 2; /*0x10053c013*/
    if ( !v7 ) /*0x10053c019*/
      return; /*0x10053c019*/
    goto LABEL_5; /*0x10053c019*/
  }
  *a1 = 11; /*0x10053c03e*/
  if ( v7 ) /*0x10053c044*/
LABEL_5:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x10053c01b*/
}