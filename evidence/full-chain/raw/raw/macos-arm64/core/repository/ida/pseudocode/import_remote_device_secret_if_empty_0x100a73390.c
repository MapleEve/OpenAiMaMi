// __ZN13codexmate_lib4core10repository10Repository36import_remote_device_secret_if_empty @ 0x100a73390 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::import_remote_device_secret_if_empty::h01c08313762361c4(
        _QWORD *a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v6; // rax
  signed __int64 v7; // rdx
  void *v8; // r13
  signed __int64 v9; // r15
  _WORD *v10; // rdi
  double v11; // xmm0_8
  signed __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rdi
  _WORD *v15; // rax
  _WORD *v16; // r13
  _QWORD v18[12]; // [rsp+8h] [rbp-128h] BYREF
  _WORD __dst[44]; // [rsp+68h] [rbp-C8h] BYREF
  signed __int64 v20; // [rsp+C0h] [rbp-70h]
  _WORD *v21; // [rsp+C8h] [rbp-68h]
  _WORD *v22; // [rsp+D0h] [rbp-60h]
  void *__src; // [rsp+100h] [rbp-30h]

  v4 = a2; /*0x100a733a4*/
  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3, a4); /*0x100a733b0*/
  if ( v7 ) /*0x100a733b8*/
  {
    v8 = (void *)v6; /*0x100a733ba*/
    v9 = v7; /*0x100a733bd*/
    v10 = __dst; /*0x100a733c0*/
    v11 = codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst, (__int64)a2); /*0x100a733ca*/
    v12 = v20; /*0x100a733cf*/
    if ( !__OFSUB__(-v20, 1) ) /*0x100a733d9*/
    {
      v10 = v21; /*0x100a733db*/
      a2 = v22; /*0x100a733df*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v21, v22); /*0x100a733e3*/
      if ( v13 ) /*0x100a733eb*/
        goto LABEL_13; /*0x100a733eb*/
    }
    if ( v9 < 0 ) /*0x100a733f4*/
    {
      v14 = 0; /*0x100a733f6*/
      goto LABEL_6; /*0x100a733f6*/
    }
    __src = v8; /*0x100a7340e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, a2); /*0x100a73412*/
    v15 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100a7341f*/
    v14 = 1; /*0x100a73424*/
    if ( !v15 ) /*0x100a7342c*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v9); /*0x100a733f8*/
    v16 = v15; /*0x100a7342e*/
    memcpy(v15, __src, v9); /*0x100a7343b*/
    if ( !__OFSUB__(-v12, 1) && v12 ) /*0x100a73448*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v12, 1); /*0x100a73456*/
    v20 = v9; /*0x100a7345b*/
    v21 = v16; /*0x100a7345f*/
    v22 = (_WORD *)v9; /*0x100a73463*/
    a2 = v4; /*0x100a73475*/
    codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(v18, v4, (__int64)__dst, v11); /*0x100a73478*/
    if ( LODWORD(v18[0]) == 11 ) /*0x100a73484*/
    {
LABEL_13:
      *a1 = 11; /*0x100a73486*/
    }
    else
    {
      qmemcpy(a1, v18, 0x60u); /*0x100a7349e*/
      a2 = __dst; /*0x100a7349e*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, a2); /*0x100a734a8*/
  }
  else
  {
    *a1 = 11; /*0x100a73402*/
  }
  return a1; /*0x100a734b0*/
}