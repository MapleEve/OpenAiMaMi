// __ZN13codexmate_lib4core5relay7manager12RelayManager24commit_reconciled_target @ 0x100277f70 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::commit_reconciled_target::hb9db019a353f7ff0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  _BYTE *v6; // rdi
  _BYTE *v7; // rdx
  void *v8; // rax
  void *v9; // r14
  _BYTE v11[292]; // [rsp+8h] [rbp-268h] BYREF
  char v12; // [rsp+12Ch] [rbp-144h]
  char v13; // [rsp+12Dh] [rbp-143h]
  _BYTE v14[292]; // [rsp+130h] [rbp-140h] BYREF
  char v15; // [rsp+254h] [rbp-1Ch]
  char v16; // [rsp+255h] [rbp-1Bh]

  if ( *(_DWORD *)a3 != 1 ) /*0x100277f8c*/
  {
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v14, a2); /*0x100277fde*/
    if ( v15 == 1 && a4 == v16 ) /*0x100277fed*/
    {
      *a1 = 11; /*0x100277ff2*/
      v6 = v14; /*0x100277ff9*/
      goto LABEL_9; /*0x100277ff9*/
    }
    v15 = 1; /*0x100278007*/
    v16 = a4; /*0x10027800b*/
    v7 = v14; /*0x10027800f*/
LABEL_14:
    codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(a1, a2, v7); /*0x10027807a*/
    return a1; /*0x100278080*/
  }
  if ( *(_BYTE *)(a3 + 56) ) /*0x100277f8e*/
  {
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v11, a2); /*0x100277fa2*/
    if ( !v12 && a4 == v13 ) /*0x100277fbb*/
    {
      *a1 = 11; /*0x100277fc4*/
      v6 = v11; /*0x100277fcb*/
LABEL_9:
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v6); /*0x100278000*/
      return a1; /*0x100278005*/
    }
    v12 = 0; /*0x100278065*/
    v13 = a4; /*0x10027806c*/
    v7 = v11; /*0x100278073*/
    goto LABEL_14; /*0x100278073*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100278018*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 1); /*0x100278027*/
  if ( !v8 ) /*0x10027802f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 80); /*0x1002780a0*/
  v9 = v8; /*0x100278031*/
  memcpy(v8, &anon_39a6e93098609d65551b0fc4eadbbbd9_534, 0x50u); /*0x100278043*/
  *a1 = 10; /*0x100278048*/
  a1[1] = 80; /*0x10027804f*/
  a1[2] = v9; /*0x100278057*/
  a1[3] = 80; /*0x10027805b*/
  return a1; /*0x100278088*/
}