// __ZN13codexmate_lib4core5relay23codex_thread_visibility34verify_convergence_rollout_targets @ 0x100aea040 | 基线 same-set
void __fastcall codexmate_lib::core::relay::codex_thread_visibility::verify_convergence_rollout_targets::he70d6027738f6e4a(
        _QWORD *a1,
        __int64 (__fastcall *a2)(),
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        void *a6,
        __int64 a7)
{
  __int64 v7; // rbx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 (__fastcall *v11)(); // rax
  size_t v12; // rbx
  void *v13; // r15
  void *v14; // r12
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(); // rax
  _QWORD *v18; // rdx
  __int64 (__fastcall **v19)(); // rsi
  __int64 (__fastcall *v20)(); // rcx
  __int64 (__fastcall *v21)(); // rcx
  _QWORD v22[3]; // [rsp+0h] [rbp-130h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+18h] [rbp-118h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+20h] [rbp-110h] BYREF
  _QWORD v25[10]; // [rsp+28h] [rbp-108h] BYREF
  void *v26; // [rsp+78h] [rbp-B8h]
  __int64 v27; // [rsp+80h] [rbp-B0h]
  __int64 v28; // [rsp+88h] [rbp-A8h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-A0h] BYREF
  void *__s1; // [rsp+98h] [rbp-98h]
  size_t v31; // [rsp+A0h] [rbp-90h]
  __int64 (__fastcall *v32)(); // [rsp+A8h] [rbp-88h] BYREF
  void *v33; // [rsp+B0h] [rbp-80h]
  __int64 (__fastcall *v34)(); // [rsp+B8h] [rbp-78h]
  void *__s2; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-68h]
  __int64 (__fastcall *v37)(); // [rsp+D0h] [rbp-60h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+D8h] [rbp-58h]
  size_t __n; // [rsp+E0h] [rbp-50h]
  __int64 (__fastcall *v40)(); // [rsp+E8h] [rbp-48h]
  __int64 (__fastcall *v41)(); // [rsp+F0h] [rbp-40h]
  __int64 (__fastcall *v42)(); // [rsp+F8h] [rbp-38h]
  _QWORD *v43; // [rsp+100h] [rbp-30h]

  v43 = a1; /*0x100aea054*/
  __s2 = a6; /*0x100aea05c*/
  v36 = a7; /*0x100aea060*/
  if ( a5 < a3 ) /*0x100aea067*/
    a3 = a5; /*0x100aea067*/
  if ( !a3 ) /*0x100aea06e*/
  {
LABEL_18:
    *v43 = 11; /*0x100aea219*/
    return; /*0x100aea21d*/
  }
  v7 = a4; /*0x100aea074*/
  v9 = 192 * a3; /*0x100aea07e*/
  v10 = 0; /*0x100aea082*/
  v27 = a4; /*0x100aea085*/
  v28 = 192 * a3; /*0x100aea08c*/
  while ( !codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hc08336a603e89a33( /*0x100aea0d8*/
             *(_QWORD *)(v7 + v10 + 32),
             *(_QWORD *)(v7 + v10 + 40))
       || !codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hc08336a603e89a33(
             *(_QWORD *)(v7 + v10 + 56),
             *(_QWORD *)(v7 + v10 + 64)) )
  {
LABEL_5:
    v10 += 192; /*0x100aea0a0*/
    a2 = (__int64 (__fastcall *)())((char *)a2 + 72); /*0x100aea0a7*/
    if ( v9 == v10 ) /*0x100aea0ae*/
      goto LABEL_18; /*0x100aea0ae*/
  }
  if ( __OFSUB__(0, *((_QWORD *)a2 + 6)) ) /*0x100aea0e0*/
  {
    v37 = a2; /*0x100aea314*/
    v38 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aea31f*/
    __n = (size_t)&__s2; /*0x100aea327*/
    v40 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aea332*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v24, &unk_1017CB5A2, &v37); /*0x100aea348*/
    v17 = v24; /*0x100aea34d*/
    v18 = v43; /*0x100aea35b*/
    qmemcpy(v43 + 2, v25, 0x50u); /*0x100aea368*/
    *v18 = 10; /*0x100aea36b*/
    v18[1] = v17; /*0x100aea372*/
    return; /*0x100aea376*/
  }
  codexmate_lib::core::relay::codex_thread_visibility::read_rollout_providers_for_convergence::h78b940472c5aade1( /*0x100aea0f5*/
    &v23,
    *((_QWORD *)a2 + 7),
    *((_QWORD *)a2 + 8));
  v11 = v23; /*0x100aea0fa*/
  v37 = v24; /*0x100aea10f*/
  v38 = (__int64 (__fastcall *)())v25[0]; /*0x100aea113*/
  __n = v25[1]; /*0x100aea11b*/
  v40 = (__int64 (__fastcall *)())v25[2]; /*0x100aea123*/
  v41 = (__int64 (__fastcall *)())v25[3]; /*0x100aea12b*/
  v42 = (__int64 (__fastcall *)())v25[4]; /*0x100aea133*/
  if ( v23 != (__int64 (__fastcall *)())11 ) /*0x100aea13b*/
  {
    v19 = (__int64 (__fastcall **)())v43; /*0x100aea382*/
    v43[11] = v25[9]; /*0x100aea386*/
    v19[10] = (__int64 (__fastcall *)())v25[8]; /*0x100aea391*/
    v19[9] = (__int64 (__fastcall *)())v25[7]; /*0x100aea39c*/
    v20 = (__int64 (__fastcall *)())v25[5]; /*0x100aea3a0*/
    v19[8] = (__int64 (__fastcall *)())v25[6]; /*0x100aea3ae*/
    v19[7] = v20; /*0x100aea3b2*/
    v19[6] = v42; /*0x100aea3ba*/
    v19[5] = v41; /*0x100aea3c2*/
    v19[4] = v40; /*0x100aea3ca*/
    v19[3] = (__int64 (__fastcall *)())__n; /*0x100aea3d2*/
    v21 = v37; /*0x100aea3d6*/
    v19[2] = v38; /*0x100aea3de*/
    v19[1] = v21; /*0x100aea3e2*/
    *v19 = v11; /*0x100aea3e6*/
    return; /*0x100aea3e6*/
  }
  v29 = v37; /*0x100aea149*/
  __s1 = v38; /*0x100aea150*/
  v12 = __n; /*0x100aea157*/
  v31 = __n; /*0x100aea15b*/
  v32 = v40; /*0x100aea166*/
  v33 = v41; /*0x100aea171*/
  v34 = v42; /*0x100aea179*/
  if ( __n == v36 ) /*0x100aea181*/
  {
    v13 = __s2; /*0x100aea187*/
    v26 = __s1; /*0x100aea192*/
    if ( !memcmp(__s1, __s2, __n) && v34 == (__int64 (__fastcall *)())v12 ) /*0x100aea1b0*/
    {
      v14 = v33; /*0x100aea1b6*/
      if ( !memcmp(v33, v13, v12) ) /*0x100aea1c3*/
      {
        v7 = v27; /*0x100aea1d6*/
        if ( v29 ) /*0x100aea1dd*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v29, 1); /*0x100aea1eb*/
        v9 = v28; /*0x100aea1fa*/
        if ( v32 ) /*0x100aea201*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v32, 1); /*0x100aea20f*/
        goto LABEL_5; /*0x100aea214*/
      }
    }
  }
  v23 = a2; /*0x100aea236*/
  v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aea244*/
  v25[0] = &v29; /*0x100aea252*/
  v25[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aea259*/
  v25[2] = &v32; /*0x100aea267*/
  v25[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100aea26e*/
  v25[4] = &__s2; /*0x100aea279*/
  v25[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aea287*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v22, &unk_1017CB555, &v23); /*0x100aea2a3*/
  v15 = v43; /*0x100aea2af*/
  v43[3] = v22[2]; /*0x100aea2b3*/
  v16 = v22[0]; /*0x100aea2b7*/
  v15[2] = v22[1]; /*0x100aea2c5*/
  v15[1] = v16; /*0x100aea2c9*/
  *v15 = 10; /*0x100aea2cd*/
  if ( v29 ) /*0x100aea2de*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v29, 1); /*0x100aea2ec*/
  if ( v32 ) /*0x100aea2fb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v32, 1); /*0x100aea30a*/
}