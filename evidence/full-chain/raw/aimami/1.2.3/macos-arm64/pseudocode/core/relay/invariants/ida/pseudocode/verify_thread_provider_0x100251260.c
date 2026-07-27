// __ZN13codexmate_lib4core5relay10invariants22verify_thread_provider @ 0x100251260 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::invariants::verify_thread_provider::h55e1a5cd88494940(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE v11[40]; // [rsp+8h] [rbp-148h] BYREF
  __int64 v12; // [rsp+30h] [rbp-120h]
  __int64 v13; // [rsp+40h] [rbp-110h]
  __int64 v14; // [rsp+48h] [rbp-108h]
  __int64 v15; // [rsp+58h] [rbp-F8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-F0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+70h] [rbp-E0h] BYREF
  _QWORD v19[3]; // [rsp+78h] [rbp-D8h] BYREF
  _BYTE *v20; // [rsp+90h] [rbp-C0h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+98h] [rbp-B8h]
  __int64 *v22; // [rsp+A0h] [rbp-B0h]
  __int64 (__fastcall *v23)(); // [rsp+A8h] [rbp-A8h]
  __int64 *v24; // [rsp+B0h] [rbp-A0h]
  __int64 (__fastcall *v25)(); // [rsp+B8h] [rbp-98h]
  __int64 *v26; // [rsp+C0h] [rbp-90h]
  __int64 (__fastcall *v27)(); // [rsp+C8h] [rbp-88h]
  __int64 *v28; // [rsp+D0h] [rbp-80h]
  __int64 (__fastcall *v29)(); // [rsp+D8h] [rbp-78h]
  _QWORD *v30; // [rsp+E0h] [rbp-70h]
  __int64 (__fastcall *v31)(); // [rsp+E8h] [rbp-68h]
  _QWORD *v32; // [rsp+F0h] [rbp-60h]
  __int64 (__fastcall *v33)(); // [rsp+F8h] [rbp-58h]
  _QWORD v34[2]; // [rsp+100h] [rbp-50h] BYREF
  _BYTE *v35; // [rsp+110h] [rbp-40h] BYREF
  __int64 v36; // [rsp+118h] [rbp-38h]
  __int64 *v37; // [rsp+120h] [rbp-30h]

  codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::he6857c591f482337( /*0x10025128c*/
    v11,
    a1,
    a2,
    6);
  if ( v15 || v16 || v17 || v18 || v12 ) /*0x1002512c1*/
  {
    if ( v14 ) /*0x1002512d1*/
    {
      alloc::str::join_generic_copy::heca7a5e86402c6b6(&v20, v13, v14, &unk_1015DD30D, 3); /*0x1002512f2*/
      v37 = v22; /*0x1002512fe*/
      v36 = (__int64)v21; /*0x100251310*/
      v35 = v20; /*0x100251314*/
      v34[0] = &v35; /*0x10025131c*/
      v34[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100251327*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v20, &unk_1017B93D7, v34); /*0x10025133d*/
      if ( v35 ) /*0x100251349*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x100251354*/
      v35 = v20; /*0x100251367*/
      v36 = (__int64)v21; /*0x10025136b*/
      v37 = v22; /*0x100251376*/
    }
    else
    {
      v35 = nullptr; /*0x10025137c*/
      v36 = 1; /*0x100251384*/
      v37 = nullptr; /*0x10025138c*/
    }
    v34[0] = v12; /*0x1002513b7*/
    v20 = v11; /*0x1002513bb*/
    v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002513c9*/
    v22 = &v15; /*0x1002513d0*/
    v23 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1002513de*/
    v24 = &v16; /*0x1002513e5*/
    v25 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1002513ec*/
    v26 = &v17; /*0x1002513f3*/
    v27 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1002513fa*/
    v28 = &v18; /*0x100251401*/
    v29 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100251405*/
    v30 = v34; /*0x10025140d*/
    v31 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100251411*/
    v32 = &v35; /*0x100251419*/
    v33 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10025141d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v19, &unk_1017B93E4, &v20); /*0x100251436*/
    v4 = v19[0]; /*0x10025143b*/
    v5 = v19[1]; /*0x100251442*/
    v6 = v19[2]; /*0x100251449*/
    v7 = a3[2]; /*0x100251450*/
    if ( v7 == *a3 ) /*0x100251457*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(a3); /*0x10025145c*/
    v8 = a3[1]; /*0x100251461*/
    v9 = 32 * v7; /*0x100251468*/
    *(_QWORD *)(v8 + v9) = v4; /*0x10025146c*/
    *(_QWORD *)(v8 + v9 + 8) = v5; /*0x100251470*/
    *(_QWORD *)(v8 + v9 + 16) = v6; /*0x100251475*/
    *(_BYTE *)(v8 + v9 + 24) = 3; /*0x10025147a*/
    a3[2] = v7 + 1; /*0x100251482*/
    if ( v35 ) /*0x10025148d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x100251498*/
  }
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadProviderConvergenceInspection$GT$::h50ec709024398c44(v11); /*0x1002514a9*/
}