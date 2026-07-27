// __ZN13codexmate_lib4core5relay7storage4save @ 0x1008b3760 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::storage::save::h56fb60ad12ceed07(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(_QWORD, _QWORD); // r14
  __int64 v11; // r15
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 *v18; // [rsp+8h] [rbp-78h] BYREF
  void *v19; // [rsp+10h] [rbp-70h]
  __int64 v20; // [rsp+18h] [rbp-68h]
  __int64 v21; // [rsp+20h] [rbp-60h]
  char v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-50h]
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v26)(_QWORD, _QWORD); // [rsp+48h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-30h]

  v4 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820((_QWORD *)a2); /*0x1008b377d*/
  if ( v4 ) /*0x1008b3785*/
  {
    *a1 = 2; /*0x1008b3787*/
    a1[1] = v4; /*0x1008b378e*/
    return a1; /*0x1008b3792*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x1008b3797*/
  v5 = (__int64 (__fastcall *)(_QWORD, _QWORD))_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1008b37a6*/
  if ( !v5 ) /*0x1008b37ae*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1008b3962*/
  v25 = 128; /*0x1008b37b4*/
  v26 = v5; /*0x1008b37bc*/
  v27 = 0; /*0x1008b37c0*/
  v18 = &v25; /*0x1008b37cc*/
  v19 = &unk_101674AC8; /*0x1008b37d7*/
  v20 = 2; /*0x1008b37db*/
  v21 = 0; /*0x1008b37e3*/
  v22 = 0; /*0x1008b37eb*/
  v10 = (__int64 (__fastcall *)(_QWORD, _QWORD))codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayState$GT$::serialize::hd090e36434aa2bb5( /*0x1008b37fb*/
                                                  a3,
                                                  (__int64)&v18,
                                                  v6,
                                                  v7,
                                                  v8,
                                                  v9);
  if ( v10 ) /*0x1008b3801*/
  {
    if ( v25 ) /*0x1008b380a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x1008b3815*/
    goto LABEL_8; /*0x1008b381a*/
  }
  v11 = v25; /*0x1008b381c*/
  v10 = v26; /*0x1008b3820*/
  if ( __OFSUB__(-v25, 1) ) /*0x1008b3827*/
  {
LABEL_8:
    *a1 = 3; /*0x1008b382c*/
    a1[1] = v10; /*0x1008b3833*/
    return a1; /*0x1008b3833*/
  }
  v13 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1008b3863*/
          *(void **)(a2 + 608),
          *(_QWORD *)(a2 + 616),
          (__int64)v26,
          v27,
          0);
  if ( !v13 ) /*0x1008b386b*/
  {
    *a1 = 11; /*0x1008b3933*/
    if ( !v11 ) /*0x1008b393d*/
      return a1; /*0x1008b393d*/
LABEL_20:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v11, 1); /*0x1008b3943*/
    return a1; /*0x1008b3953*/
  }
  v24 = v13; /*0x1008b3871*/
  v25 = (__int64)&v24; /*0x1008b3879*/
  v26 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008b3884*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v18, &unk_1017C65A1, &v25); /*0x1008b3897*/
  v25 = (__int64)v18; /*0x1008b38a4*/
  v26 = (__int64 (__fastcall *)(_QWORD, _QWORD))v19; /*0x1008b38a8*/
  v27 = v20; /*0x1008b38b0*/
  if ( (v24 & 3) == 1 ) /*0x1008b38c0*/
  {
    v23 = v24 - 1; /*0x1008b38c6*/
    v14 = *(_QWORD *)(v24 - 1); /*0x1008b38ca*/
    v15 = *(_QWORD *)(v24 + 7); /*0x1008b38ce*/
    if ( *(_QWORD *)v15 ) /*0x1008b38d2*/
      (*(void (__fastcall **)(__int64))v15)(v14); /*0x1008b38de*/
    v16 = *(_QWORD *)(v15 + 8); /*0x1008b38e0*/
    if ( v16 ) /*0x1008b38e8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x1008b38f2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, 24, 8); /*0x1008b3905*/
  }
  a1[3] = v27; /*0x1008b390e*/
  v17 = v25; /*0x1008b3912*/
  a1[2] = v26; /*0x1008b391a*/
  a1[1] = v17; /*0x1008b391e*/
  *a1 = 10; /*0x1008b3922*/
  if ( v11 ) /*0x1008b392c*/
    goto LABEL_20; /*0x1008b392c*/
  return a1; /*0x1008b383a*/
}