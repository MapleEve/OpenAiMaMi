// __ZN13codexmate_lib4core10repository18SnapshotQuarantine16commit_and_purge @ 0x100a77070 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::repository::SnapshotQuarantine::commit_and_purge::ha0cb44d66bed4665(
        __int64 *a1,
        __int64 a2)
{
  void *v2; // r12
  size_t v3; // r13
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rsi
  void *v11; // rax
  size_t v12; // rdx
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // [rsp+10h] [rbp-30h]

  *(_BYTE *)(a2 + 48) = 0; /*0x100a77085*/
  v2 = *(void **)(a2 + 8); /*0x100a77089*/
  v3 = *(_QWORD *)(a2 + 16); /*0x100a7708d*/
  v4 = std::sys::fs::remove_dir_all::h50b3bc76069a86c9(v2, v3); /*0x100a77097*/
  v5 = v4; /*0x100a7709c*/
  if ( v4 ) /*0x100a770a2*/
  {
    v6 = v4; /*0x100a770a4*/
    v7 = 2; /*0x100a770af*/
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v4) ) /*0x100a770aa*/
      goto LABEL_11; /*0x100a770b7*/
    if ( (v5 & 3) == 1 ) /*0x100a770c2*/
    {
      v8 = v6 - 1; /*0x100a770c4*/
      v20 = *(_QWORD *)(v5 - 1); /*0x100a770cb*/
      v9 = *(_QWORD *)(v5 + 7); /*0x100a770cf*/
      if ( *(_QWORD *)v9 ) /*0x100a770d3*/
        (*(void (__fastcall **)(__int64))v9)(v20); /*0x100a770df*/
      v10 = *(_QWORD *)(v9 + 8); /*0x100a770e5*/
      if ( v10 ) /*0x100a770ec*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v10, *(_QWORD *)(v9 + 16)); /*0x100a770f2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24, 8); /*0x100a77104*/
    }
  }
  v11 = (void *)std::path::Path::parent::h4c3ac26770731fbb(v2, v3); /*0x100a7710f*/
  v7 = 11; /*0x100a77114*/
  if ( v11 ) /*0x100a7711d*/
  {
    v13 = std::sys::fs::remove_dir::hcc22a1b171fb29c1(v11, v12); /*0x100a7712a*/
    if ( (v13 & 3) == 1 ) /*0x100a77133*/
    {
      v15 = v13; /*0x100a7714f*/
      v16 = v13 - 1; /*0x100a77152*/
      v17 = *(_QWORD *)(v15 - 1); /*0x100a77155*/
      v18 = *(_QWORD *)(v15 + 7); /*0x100a77159*/
      if ( *(_QWORD *)v18 ) /*0x100a7715d*/
        (*(void (__fastcall **)(__int64))v18)(v17); /*0x100a77169*/
      v19 = *(_QWORD *)(v18 + 8); /*0x100a7716b*/
      if ( v19 ) /*0x100a77172*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v19, *(_QWORD *)(v18 + 16)); /*0x100a7717b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24, 8); /*0x100a7718d*/
    }
  }
LABEL_11:
  *a1 = v7; /*0x100a77135*/
  a1[1] = v5; /*0x100a7713c*/
  return a1; /*0x100a77140*/
}