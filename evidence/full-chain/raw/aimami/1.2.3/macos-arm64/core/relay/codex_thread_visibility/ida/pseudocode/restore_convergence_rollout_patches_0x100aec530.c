// __ZN13codexmate_lib4core5relay23codex_thread_visibility35restore_convergence_rollout_patches @ 0x100aec530 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_convergence_rollout_patches::h7e8a955e3d08ada5(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v5; // r15
  _QWORD *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  double result; // xmm0_8
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rsi
  _QWORD v18[12]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD v19[12]; // [rsp+68h] [rbp-118h] BYREF
  _QWORD v20[4]; // [rsp+C8h] [rbp-B8h] BYREF
  _QWORD v21[3]; // [rsp+E8h] [rbp-98h] BYREF
  _QWORD v22[2]; // [rsp+100h] [rbp-80h] BYREF
  _QWORD v23[2]; // [rsp+110h] [rbp-70h] BYREF
  _QWORD v24[3]; // [rsp+120h] [rbp-60h] BYREF
  _QWORD *v25; // [rsp+138h] [rbp-48h]
  __int64 v26; // [rsp+140h] [rbp-40h] BYREF
  __int64 v27; // [rsp+148h] [rbp-38h]
  __int64 v28; // [rsp+150h] [rbp-30h]

  v5 = a1; /*0x100aec544*/
  v23[0] = a2; /*0x100aec547*/
  v23[1] = a3; /*0x100aec54b*/
  v26 = 0; /*0x100aec54f*/
  v27 = 8; /*0x100aec557*/
  v28 = 0; /*0x100aec55f*/
  if ( !a5 ) /*0x100aec56a*/
    goto LABEL_16; /*0x100aec56a*/
  v25 = a1; /*0x100aec570*/
  v6 = (_QWORD *)(120 * a5 + a4 - 120); /*0x100aec578*/
  v7 = -120 * a5; /*0x100aec57d*/
  do /*0x100aec5da*/
  {
    result = codexmate_lib::core::relay::codex_thread_visibility::restore_convergence_rollout_patch::h09310c7abde0e37f( /*0x100aec5e6*/
               (__int64)v18,
               v6);
    if ( LODWORD(v18[0]) != 11 ) /*0x100aec5f2*/
    {
      qmemcpy(v19, v18, sizeof(v19)); /*0x100aec5ff*/
      v12 = v6[2]; /*0x100aec606*/
      v22[0] = v6[1]; /*0x100aec60a*/
      v22[1] = v12; /*0x100aec60e*/
      v20[0] = v22; /*0x100aec616*/
      v20[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100aec624*/
      v20[2] = v19; /*0x100aec62b*/
      v20[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100aec639*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1017B9AD3, v20); /*0x100aec652*/
      v13 = v28; /*0x100aec657*/
      if ( v28 == v26 ) /*0x100aec65f*/
        result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v26); /*0x100aec669*/
      v8 = v27; /*0x100aec5a0*/
      v9 = 3 * v13; /*0x100aec5a4*/
      *(_QWORD *)(v27 + 8 * v9 + 16) = v24[2]; /*0x100aec5ad*/
      v10 = v24[0]; /*0x100aec5b2*/
      *(_QWORD *)(v8 + 8 * v9 + 8) = v24[1]; /*0x100aec5ba*/
      *(_QWORD *)(v8 + 8 * v9) = v10; /*0x100aec5bf*/
      v28 = v13 + 1; /*0x100aec5c6*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v19); /*0x100aec5cd*/
    }
    v6 -= 15; /*0x100aec5d2*/
    v7 += 120; /*0x100aec5d6*/
  }
  while ( v7 ); /*0x100aec5da*/
  v5 = v25; /*0x100aec67a*/
  if ( v28 ) /*0x100aec67e*/
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v19, v27, v28, " | ", 3); /*0x100aec69c*/
    v18[2] = v19[2]; /*0x100aec6a8*/
    v18[1] = v19[1]; /*0x100aec6bd*/
    v18[0] = v19[0]; /*0x100aec6c4*/
    v19[0] = v23; /*0x100aec6cf*/
    v19[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aec6dd*/
    v19[2] = v18; /*0x100aec6e4*/
    v19[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aec6f2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v21, &unk_1017CB783, v19); /*0x100aec70e*/
    if ( v18[0] ) /*0x100aec71d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[1], v18[0], 1); /*0x100aec72b*/
    v5[3] = v21[2]; /*0x100aec737*/
    v14 = v21[0]; /*0x100aec73b*/
    v5[2] = v21[1]; /*0x100aec749*/
    v5[1] = v14; /*0x100aec74d*/
    v15 = v28; /*0x100aec751*/
    *v5 = 10; /*0x100aec755*/
    if ( v15 ) /*0x100aec75f*/
    {
      v16 = (_QWORD *)(v27 + 8); /*0x100aec765*/
      do /*0x100aec777*/
      {
        v17 = *(v16 - 1); /*0x100aec779*/
        if ( v17 ) /*0x100aec780*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v17, 1); /*0x100aec78a*/
        v16 += 3; /*0x100aec770*/
        --v15; /*0x100aec774*/
      }
      while ( v15 ); /*0x100aec777*/
    }
  }
  else
  {
LABEL_16:
    *v5 = 11; /*0x100aec791*/
  }
  if ( v26 ) /*0x100aec79f*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 24 * v26, 8); /*0x100aec7b2*/
  return result; /*0x100aec7b7*/
}