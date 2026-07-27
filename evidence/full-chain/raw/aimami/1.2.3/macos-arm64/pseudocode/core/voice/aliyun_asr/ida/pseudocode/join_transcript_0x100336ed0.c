// __ZN13codexmate_lib4core5voice10aliyun_asr15join_transcript @ 0x100336ed0 | 基线 same-set
signed __int64 *__fastcall codexmate_lib::core::voice::aliyun_asr::join_transcript::hd5fe927ab4241574(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  const void *v7; // r15
  signed __int64 v8; // rdx
  signed __int64 v9; // r14
  __int64 v10; // rsi
  const void *v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r12
  const void *v15; // r12
  signed __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r14
  void *v19; // rax
  signed __int64 v20; // r13
  signed __int64 v21; // r15
  _QWORD v23[4]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v24[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v25[7]; // [rsp+38h] [rbp-38h] BYREF

  v7 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x100336ef5*/
  v9 = v8; /*0x100336ef8*/
  v25[0] = v7; /*0x100336efb*/
  v25[1] = v8; /*0x100336eff*/
  v10 = a5; /*0x100336f06*/
  v11 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a4, a5); /*0x100336f09*/
  v24[0] = v11; /*0x100336f0e*/
  v24[1] = v12; /*0x100336f12*/
  if ( !v9 ) /*0x100336f19*/
  {
    if ( v12 < 0 ) /*0x100336f5a*/
    {
      v13 = 0; /*0x100336f5c*/
      goto LABEL_6; /*0x100336f5c*/
    }
    if ( v12 ) /*0x100336f7d*/
    {
      v15 = v11; /*0x100336f7f*/
      v16 = v12; /*0x100336f82*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a4, v10); /*0x100336f85*/
      v13 = 1; /*0x100336f8a*/
      v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x100336f98*/
      v12 = v16; /*0x100336f9d*/
      if ( !v17 ) /*0x100336fa3*/
LABEL_6:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x100336f5f*/
      v18 = v17; /*0x100336fa5*/
      v11 = v15; /*0x100336fa8*/
    }
    else
    {
      v18 = 1; /*0x100336fe8*/
    }
    v21 = v12; /*0x100336ff4*/
    memcpy((void *)v18, v11, v12); /*0x100336ff7*/
    *a1 = v21; /*0x100336ffc*/
    a1[1] = v18; /*0x100336fff*/
    a1[2] = v21; /*0x100337003*/
    return a1; /*0x100337003*/
  }
  if ( !v12 ) /*0x100336f1e*/
  {
    if ( v9 >= 0 ) /*0x100336f6d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a4, a5); /*0x100336fad*/
      v14 = 1; /*0x100336fb2*/
      v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100336fc0*/
      if ( v19 ) /*0x100336fc8*/
      {
        v20 = (signed __int64)v19; /*0x100336fca*/
        memcpy(v19, v7, v9); /*0x100336fd6*/
        *a1 = v9; /*0x100336fdb*/
        a1[1] = v20; /*0x100336fde*/
        a1[2] = v9; /*0x100336fe2*/
        return a1; /*0x100336fe6*/
      }
    }
    else
    {
      v14 = 0; /*0x100336f6f*/
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v9); /*0x100336f78*/
  }
  v23[0] = v25; /*0x100336f24*/
  v23[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100336f2f*/
  v23[2] = v24; /*0x100336f37*/
  v23[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100336f3b*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_b0ee9adff4519c22b647af231a5a39fa_552, v23); /*0x100336f4d*/
  return a1; /*0x10033700a*/
}