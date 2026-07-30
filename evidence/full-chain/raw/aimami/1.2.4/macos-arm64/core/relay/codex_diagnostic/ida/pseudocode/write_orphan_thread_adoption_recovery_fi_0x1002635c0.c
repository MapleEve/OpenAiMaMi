// __ZN13codexmate_lib4core5relay16codex_diagnostic42write_orphan_thread_adoption_recovery_file @ 0x1002635c0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::write_orphan_thread_adoption_recovery_file::h68ccfd177436587f(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  __int64 v5; // r14
  __int64 (__fastcall *v6)(); // r15
  _QWORD *v7; // r15
  __int64 (__fastcall *v8)(); // r12
  __int64 v9; // r13
  __int64 (__fastcall *v10)(); // r14
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(); // rcx
  _QWORD *v17; // [rsp+8h] [rbp-78h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+10h] [rbp-70h]
  __int64 v19; // [rsp+18h] [rbp-68h]
  __int64 v20; // [rsp+20h] [rbp-60h]
  _QWORD v21[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]

  serde_json::ser::to_vec_pretty::h7a5f028df46729a2(&v23, a4); /*0x1002635e1*/
  v5 = v23; /*0x1002635e6*/
  v6 = v24; /*0x1002635ea*/
  if ( __OFSUB__(-v23, 1) ) /*0x1002635f1*/
  {
    v22 = v24; /*0x1002635f6*/
    v21[0] = &v22; /*0x1002635fe*/
    v21[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100263609*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v17, &unk_1017C3C5B, v21); /*0x10026361c*/
    v7 = v17; /*0x100263621*/
    v8 = v18; /*0x100263625*/
    v9 = v19; /*0x100263629*/
    v10 = v22; /*0x10026362d*/
    if ( *(_QWORD *)v22 == 1 ) /*0x100263638*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hdaf8ae7044e1e341((char *)v22 + 8); /*0x100263769*/
    }
    else if ( !*(_QWORD *)v22 ) /*0x100263631*/
    {
      v11 = *((_QWORD *)v22 + 2); /*0x100263647*/
      if ( v11 ) /*0x10026364e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v22 + 1), v11, 1); /*0x10026365d*/
    }
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 40, 8); /*0x10026377b*/
    a1[1] = v7; /*0x100263780*/
    a1[2] = v8; /*0x100263784*/
    a1[3] = v9; /*0x100263788*/
    *a1 = 10; /*0x10026378c*/
    return result; /*0x10026378c*/
  }
  result = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h9563029d42e25ca2(a2, a3); /*0x10026367a*/
  if ( !result ) /*0x100263682*/
  {
    *a1 = 11; /*0x100263747*/
    if ( !v5 ) /*0x100263751*/
      return result; /*0x100263751*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100263751*/
  }
  v21[0] = result; /*0x100263688*/
  v23 = (__int64)v21; /*0x100263690*/
  v24 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10026369b*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v17, &unk_1017C3C41, &v23); /*0x1002636ae*/
  v23 = (__int64)v17; /*0x1002636bb*/
  v24 = v18; /*0x1002636bf*/
  v25 = v19; /*0x1002636c7*/
  if ( (v21[0] & 3) == 1 ) /*0x1002636d7*/
  {
    v20 = v21[0] - 1LL; /*0x1002636dd*/
    v13 = *(_QWORD *)(v21[0] - 1LL); /*0x1002636e1*/
    v14 = *(_QWORD *)(v21[0] + 7LL); /*0x1002636e5*/
    if ( *(_QWORD *)v14 ) /*0x1002636e9*/
      (*(void (__fastcall **)(__int64))v14)(v13); /*0x1002636f5*/
    v15 = *(_QWORD *)(v14 + 8); /*0x1002636f7*/
    if ( v15 ) /*0x1002636ff*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x100263709*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 24, 8); /*0x10026371c*/
  }
  *a1 = 10; /*0x100263721*/
  v16 = v24; /*0x10026372c*/
  a1[1] = v23; /*0x100263730*/
  a1[2] = v16; /*0x100263734*/
  result = v25; /*0x100263738*/
  a1[3] = v25; /*0x10026373c*/
  if ( v5 ) /*0x100263743*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100263753*/
  return result; /*0x100263793*/
}