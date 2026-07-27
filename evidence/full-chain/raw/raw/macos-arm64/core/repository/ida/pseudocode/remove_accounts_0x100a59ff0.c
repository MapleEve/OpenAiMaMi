// __ZN13codexmate_lib4core10repository10Repository15remove_accounts28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100a59ff0 | 基线 same-set
void __fastcall codexmate_lib::core::repository::Repository::remove_accounts::_$u7b$$u7b$closure$u7d$$u7d$::h20e3a568bcdc413a(
        _QWORD *a1,
        __int64 a2,
        const void *a3,
        size_t a4)
{
  const void *v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r15
  void *v11; // rax
  void *v12; // rbx
  _QWORD v13[12]; // [rsp+0h] [rbp-90h] BYREF
  _QWORD *v14; // [rsp+60h] [rbp-30h]

  v14 = a1; /*0x100a5a00a*/
  v7 = *(const void **)(a2 + 8); /*0x100a5a00e*/
  v8 = v13; /*0x100a5a017*/
  std::fs::read::inner::h6a30c15c40add28b(v13, v7, *(_QWORD *)(a2 + 16)); /*0x100a5a01e*/
  v9 = v13[0]; /*0x100a5a023*/
  v10 = v13[1]; /*0x100a5a02a*/
  if ( __OFSUB__(-v13[0], 1) ) /*0x100a5a034*/
  {
    v13[0] = 2; /*0x100a5a039*/
LABEL_8:
    qmemcpy(v14, v13, 0x60u); /*0x100a5a0d7*/
    return; /*0x100a5a0e7*/
  }
  if ( v13[2] != a4 || (v8 = (_QWORD *)v13[1], v7 = a3, memcmp((const void *)v13[1], a3, a4)) ) /*0x100a5a05f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v7); /*0x100a5a06c*/
    v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(68, 1); /*0x100a5a07b*/
    if ( !v11 ) /*0x100a5a083*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 68); /*0x100a5a13e*/
    v12 = v11; /*0x100a5a089*/
    memcpy( /*0x100a5a09b*/
      v11,
      "Quota store changed concurrently; the newer file was not overwrittenFreePlus5x Pro20x ProTeamBusinessEnterpriseEduUnknown",
      0x44u);
    v13[0] = 10; /*0x100a5a0a0*/
    v13[1] = 68; /*0x100a5a0ab*/
    v13[2] = v12; /*0x100a5a0b6*/
    v13[3] = 68; /*0x100a5a0ba*/
    if ( v9 ) /*0x100a5a0c5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100a5a0d2*/
    goto LABEL_8; /*0x100a5a0d2*/
  }
  codexmate_lib::core::repository::ExactFileState::restore::ha530469f23048e2f(v13, a2); /*0x100a5a103*/
  if ( v9 ) /*0x100a5a10b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100a5a118*/
  if ( v13[0] != 11 ) /*0x100a5a125*/
    goto LABEL_8; /*0x100a5a125*/
  *v14 = 11; /*0x100a5a12b*/
}