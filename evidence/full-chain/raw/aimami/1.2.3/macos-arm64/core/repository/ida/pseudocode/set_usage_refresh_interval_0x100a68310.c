// __ZN13codexmate_lib4core10repository10Repository26set_usage_refresh_interval @ 0x100a68310 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::set_usage_refresh_interval::h84231c08acfc3b8e(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        size_t a4)
{
  const char *v5; // r15
  __int64 v6; // rax
  size_t v7; // rdx
  double v8; // xmm0_8
  void *v9; // rax
  void *v10; // r13
  void *v11; // rax
  void *v12; // r12
  const char *p_dst; // rsi
  _QWORD v15[12]; // [rsp+0h] [rbp-130h] BYREF
  __int16 __dst; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-C8h] BYREF
  size_t v18; // [rsp+70h] [rbp-C0h]
  _QWORD v19[9]; // [rsp+78h] [rbp-B8h] BYREF
  _QWORD v20[7]; // [rsp+F8h] [rbp-38h] BYREF

  v20[0] = a3; /*0x100a6832a*/
  v20[1] = a4; /*0x100a6832e*/
  if ( a4 == 2 ) /*0x100a68336*/
  {
    if ( *(_WORD *)a3 == 27953 ) /*0x100a68363*/
    {
      v5 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_131; /*0x100a683ed*/
    }
    else if ( *(_WORD *)a3 == 27955 ) /*0x100a6836e*/
    {
      v5 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_318; /*0x100a683f6*/
    }
    else
    {
      if ( __ROL2__(*(_WORD *)a3, 8) != 13677 ) /*0x100a68383*/
        goto LABEL_8; /*0x100a68383*/
      v5 = "5musage_401_retry"; /*0x100a683ff*/
    }
LABEL_12:
    v8 = codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(&__dst, (__int64)a2); /*0x100a68406*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__dst, a2); /*0x100a68415*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x100a68422*/
    if ( v9 ) /*0x100a6842a*/
    {
      v10 = v9; /*0x100a68430*/
      memcpy(v9, v5, a4); /*0x100a6843c*/
      if ( v18 ) /*0x100a6844b*/
        v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19[0], v18, 1); /*0x100a68459*/
      v18 = a4; /*0x100a6845e*/
      v19[0] = v10; /*0x100a68465*/
      v19[1] = a4; /*0x100a6846c*/
      codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(v15, a2, (__int64)&__dst, v8); /*0x100a68484*/
      if ( LODWORD(v15[0]) != 11 ) /*0x100a68490*/
      {
        qmemcpy(a1, v15, 0x60u); /*0x100a684de*/
        p_dst = (const char *)&__dst; /*0x100a684de*/
        goto LABEL_19; /*0x100a684de*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, a2); /*0x100a68492*/
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x100a6849f*/
      if ( v11 ) /*0x100a684a7*/
      {
        v12 = v11; /*0x100a684a9*/
        p_dst = v5; /*0x100a684af*/
        memcpy(v11, v5, a4); /*0x100a684b5*/
        a1[1] = a4; /*0x100a684ba*/
        a1[2] = v12; /*0x100a684be*/
        a1[3] = a4; /*0x100a684c2*/
        *a1 = 11; /*0x100a684c6*/
LABEL_19:
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2( /*0x100a684e1*/
          &__dst,
          p_dst);
        return a1; /*0x100a684e8*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a4); /*0x100a6850a*/
  }
  if ( a4 == 3 && !(*(_WORD *)a3 ^ 0x3033 | *(unsigned __int8 *)(a3 + 2) ^ 0x73) ) /*0x100a6834d*/
  {
    v5 = (const char *)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_317; /*0x100a68352*/
    goto LABEL_12; /*0x100a68359*/
  }
LABEL_8:
  v15[0] = v20; /*0x100a68385*/
  v15[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a68397*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v17, &unk_1017C95CC, v15); /*0x100a683b3*/
  v6 = v17; /*0x100a683b8*/
  v7 = v18; /*0x100a683bf*/
  qmemcpy(a1 + 3, v19, 0x48u); /*0x100a683d6*/
  *a1 = 9; /*0x100a683d9*/
  a1[1] = v6; /*0x100a683e0*/
  a1[2] = v7; /*0x100a683e4*/
  return a1; /*0x100a684f0*/
}