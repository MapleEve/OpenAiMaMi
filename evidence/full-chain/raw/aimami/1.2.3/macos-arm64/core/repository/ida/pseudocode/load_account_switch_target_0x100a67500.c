// __ZN13codexmate_lib4core10repository10Repository26load_account_switch_target @ 0x100a67500 | 基线 same-set
double __fastcall codexmate_lib::core::repository::Repository::load_account_switch_target::h4d1e127205729df9(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        size_t a4,
        double result)
{
  _QWORD *v7; // r15
  void *v8; // rax
  void *v9; // r14
  __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD **v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // rsi
  void *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rbx
  int v26; // eax
  size_t v27; // r12
  void *v28; // r15
  size_t v29; // rdx
  __int64 v30; // r12
  _QWORD *v31; // r15
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // rbx
  _BYTE *v40; // rsi
  _QWORD *v41; // rdi
  _QWORD *v42; // rsi
  void *v43; // rax
  _BYTE v44[96]; // [rsp+0h] [rbp-270h] BYREF
  _QWORD v45[11]; // [rsp+60h] [rbp-210h] BYREF
  _QWORD v46[19]; // [rsp+B8h] [rbp-1B8h] BYREF
  _QWORD v47[3]; // [rsp+150h] [rbp-120h] BYREF
  _QWORD v48[2]; // [rsp+168h] [rbp-108h] BYREF
  _QWORD *v49; // [rsp+178h] [rbp-F8h] BYREF
  _QWORD v50[18]; // [rsp+180h] [rbp-F0h] BYREF
  __int64 v51; // [rsp+210h] [rbp-60h]
  void *__s2; // [rsp+218h] [rbp-58h]
  _QWORD *v53; // [rsp+220h] [rbp-50h]
  size_t v54; // [rsp+228h] [rbp-48h]
  __int64 v55; // [rsp+230h] [rbp-40h]
  void *__src; // [rsp+238h] [rbp-38h]
  __int64 v57; // [rsp+240h] [rbp-30h]

  v7 = a1; /*0x100a6751d*/
  v48[0] = a3; /*0x100a67520*/
  v48[1] = a4; /*0x100a67527*/
  if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(a2) == 1 ) /*0x100a67538*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x100a6753a*/
    v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(120, 1); /*0x100a67549*/
    if ( !v8 ) /*0x100a67551*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 120); /*0x100a67c17*/
    v9 = v8; /*0x100a67557*/
    memcpy(v8, &unk_10167C069, 0x78u); /*0x100a67569*/
    *a1 = 10; /*0x100a6756e*/
    a1[1] = 120; /*0x100a67575*/
    a1[2] = v9; /*0x100a6757d*/
    a1[3] = 120; /*0x100a67581*/
    goto LABEL_30; /*0x100a67589*/
  }
  v10 = *(_QWORD *)(a2 + 224); /*0x100a6758e*/
  v51 = a2; /*0x100a67595*/
  v11 = *(_QWORD *)(a2 + 232); /*0x100a67599*/
  v12 = &v49; /*0x100a675a0*/
  v13 = v10; /*0x100a675a7*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v49, v10, v11); /*0x100a675ad*/
  if ( (_DWORD)v49 == 1 ) /*0x100a675b9*/
  {
    if ( (v50[0] & 3) == 1 ) /*0x100a675ce*/
    {
      v14 = v7; /*0x100a675d0*/
      v15 = v50[0] - 1LL; /*0x100a675d3*/
      v16 = *(_QWORD *)(v50[0] - 1LL); /*0x100a675d7*/
      v17 = *(_QWORD *)(v50[0] + 7LL); /*0x100a675db*/
      if ( *(_QWORD *)v17 ) /*0x100a675df*/
        (*(void (__fastcall **)(__int64))v17)(v16); /*0x100a675eb*/
      v18 = *(_QWORD *)(v17 + 8); /*0x100a675ed*/
      if ( v18 ) /*0x100a675f5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16)); /*0x100a675ff*/
      v13 = 24; /*0x100a67604*/
      v12 = (_QWORD **)v15; /*0x100a6760e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24, 8); /*0x100a67611*/
      v7 = v14; /*0x100a67616*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v13); /*0x100a67619*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x100a67628*/
    if ( !v19 ) /*0x100a67630*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x100a67c26*/
    qmemcpy(v19, "No AiMaMi registry exists yet", 29); /*0x100a6766a*/
    *v7 = 8; /*0x100a6766d*/
    v7[1] = 29; /*0x100a67674*/
    v7[2] = v19; /*0x100a6767c*/
    v7[3] = 29; /*0x100a67680*/
    goto LABEL_30; /*0x100a67688*/
  }
  result = codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(&v49, v10, v11); /*0x100a6769a*/
  v20 = v49; /*0x100a6769f*/
  qmemcpy(v46, v50, 0x58u); /*0x100a676b9*/
  if ( v49 != (_QWORD *)11 ) /*0x100a676c0*/
  {
    qmemcpy(v7 + 1, v46, 0x58u); /*0x100a678ce*/
    *v7 = v20; /*0x100a678d1*/
LABEL_30:
    v7[12] = 2; /*0x100a678d4*/
    return result; /*0x100a678d4*/
  }
  __s2 = a3; /*0x100a676c6*/
  v53 = v7; /*0x100a676ca*/
  qmemcpy(v45, v46, sizeof(v45)); /*0x100a676e1*/
  v21 = v45[1]; /*0x100a676e4*/
  v22 = v45[2]; /*0x100a676eb*/
  v57 = v45[1]; /*0x100a676f5*/
  if ( !v45[2] ) /*0x100a676f9*/
  {
LABEL_32:
    v46[0] = v48; /*0x100a678ee*/
    v46[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a67903*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v50, &unk_1017C8D71, v46); /*0x100a6791f*/
    v37 = v50[0]; /*0x100a67924*/
    v38 = v53; /*0x100a67932*/
    qmemcpy(v53 + 2, &v50[1], 0x50u); /*0x100a6793f*/
    *v38 = 8; /*0x100a67942*/
    v38[1] = v37; /*0x100a67949*/
    v38[12] = 2; /*0x100a6794d*/
    goto LABEL_33; /*0x100a6794d*/
  }
  v23 = 424LL * v45[2]; /*0x100a676ff*/
  v24 = 0; /*0x100a67706*/
  v25 = 0; /*0x100a67709*/
  while ( 1 ) /*0x100a67723*/
  {
    if ( *(_QWORD *)(v21 + v24 + 208) == a4 ) /*0x100a6772b*/
    {
      v26 = memcmp(*(const void **)(v57 + v24 + 200), __s2, a4); /*0x100a67740*/
      v21 = v57; /*0x100a67745*/
      if ( !v26 ) /*0x100a6774b*/
        break; /*0x100a6774b*/
    }
    ++v25; /*0x100a67710*/
    v24 += 424; /*0x100a67713*/
    if ( v23 == v24 ) /*0x100a6771d*/
      goto LABEL_32; /*0x100a6771d*/
  }
  __src = *(void **)(v57 + v24 + 224); /*0x100a67755*/
  v27 = *(_QWORD *)(v57 + v24 + 232); /*0x100a67759*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v49, v27, 0, 1, 1); /*0x100a67778*/
  v55 = v50[0]; /*0x100a67784*/
  if ( (_BYTE)v49 ) /*0x100a6778f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v55, v50[1]); /*0x100a67c06*/
  v28 = (void *)v50[1]; /*0x100a67795*/
  memcpy((void *)v50[1], __src, v27); /*0x100a677a6*/
  __src = v28; /*0x100a677b2*/
  v54 = v27; /*0x100a677b9*/
  v29 = v27; /*0x100a677bd*/
  v30 = v55; /*0x100a677c0*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v49, v28, v29); /*0x100a677c4*/
  v31 = v53; /*0x100a677c9*/
  if ( (_BYTE)v49 ) /*0x100a677d4*/
  {
    if ( (v50[0] & 3) == 1 ) /*0x100a677e9*/
    {
      v32 = v50[0] - 1LL; /*0x100a677eb*/
      v33 = *(_QWORD *)(v50[0] - 1LL); /*0x100a677ef*/
      v34 = *(_QWORD *)(v50[0] + 7LL); /*0x100a677f3*/
      if ( *(_QWORD *)v34 ) /*0x100a677f7*/
        (*(void (__fastcall **)(__int64, double))v34)(v33, result); /*0x100a67803*/
      v35 = *(_QWORD *)(v34 + 8); /*0x100a67805*/
      if ( v35 ) /*0x100a6780c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16)); /*0x100a67815*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 24, 8); /*0x100a67827*/
      v31 = v53; /*0x100a6782c*/
      v30 = v55; /*0x100a67830*/
    }
    v46[0] = __src; /*0x100a67838*/
    v46[1] = v54; /*0x100a67843*/
    v49 = v46; /*0x100a67851*/
    v50[0] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100a6785f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v47, &unk_1017C6BA1, &v49); /*0x100a6787b*/
    v31[3] = v47[2]; /*0x100a67887*/
    v36 = v47[0]; /*0x100a6788b*/
    v31[2] = v47[1]; /*0x100a67899*/
    v31[1] = v36; /*0x100a6789d*/
    *v31 = 8; /*0x100a678a1*/
    v31[12] = 2; /*0x100a678a8*/
    if ( !v30 ) /*0x100a678b3*/
      goto LABEL_33; /*0x100a678b3*/
    goto LABEL_51; /*0x100a678b3*/
  }
  codexmate_lib::core::auth::ensure_managed_account_snapshot::hb4101d838fb2a02e( /*0x100a679df*/
    &v49,
    (__int64)__src,
    v54,
    *(_QWORD *)(v51 + 248),
    *(_QWORD *)(v51 + 256));
  if ( (_DWORD)v49 != 11 ) /*0x100a679eb*/
  {
    v40 = &v49; /*0x100a67a2d*/
LABEL_45:
    qmemcpy(v31, v40, 0x60u); /*0x100a67a3c*/
    v31[12] = 2; /*0x100a67a3f*/
    if ( !v30 ) /*0x100a67a4a*/
    {
LABEL_33:
      if ( !__OFSUB__(-v45[3], 1) && v45[3] ) /*0x100a67964*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45[4], v45[3], 1); /*0x100a67972*/
      if ( v22 ) /*0x100a6797a*/
      {
        v39 = v57; /*0x100a6797c*/
        do /*0x100a67992*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v39); /*0x100a67983*/
          v39 += 424; /*0x100a67988*/
          --v22; /*0x100a6798f*/
        }
        while ( v22 ); /*0x100a67992*/
      }
      if ( v45[0] ) /*0x100a6799e*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, 424LL * v45[0], 8); /*0x100a679b4*/
      return result; /*0x100a679b9*/
    }
LABEL_51:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v30, 1); /*0x100a67b9b*/
    goto LABEL_33; /*0x100a67bac*/
  }
  codexmate_lib::core::repository::load_switchable_account_snapshot::h5aef4a5b1b611d9d(&v49, __src, v54, result); /*0x100a679fc*/
  qmemcpy(v44, v50, sizeof(v44)); /*0x100a67a1b*/
  if ( v49 == (_QWORD *)2 ) /*0x100a67a22*/
  {
    v40 = v44; /*0x100a67a24*/
    goto LABEL_45; /*0x100a67a2b*/
  }
  v46[18] = v50[17]; /*0x100a67a59*/
  v46[17] = v50[16]; /*0x100a67a64*/
  v46[16] = v50[15]; /*0x100a67a6f*/
  v46[15] = v50[14]; /*0x100a67a7a*/
  v46[14] = v50[13]; /*0x100a67a8f*/
  v46[13] = v50[12]; /*0x100a67a96*/
  qmemcpy(&v46[1], v44, 0x60u); /*0x100a67ab0*/
  v42 = v45; /*0x100a67ab0*/
  v41 = &v46[13]; /*0x100a67ab0*/
  v46[0] = v49; /*0x100a67ab3*/
  if ( v46[4] != a4 || (v41 = (_QWORD *)v46[3], v42 = __s2, memcmp((const void *)v46[3], __s2, a4)) ) /*0x100a67ad1*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v42); /*0x100a67ade*/
    v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1); /*0x100a67aed*/
    if ( !v43 ) /*0x100a67af5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 59); /*0x100a67c35*/
    qmemcpy(v43, "Account snapshot identity does not match its registry entry", 59); /*0x100a67b59*/
    *v31 = 9; /*0x100a67b63*/
    v31[1] = 59; /*0x100a67b6a*/
    v31[2] = v43; /*0x100a67b72*/
    v31[3] = 59; /*0x100a67b76*/
    v31[12] = 2; /*0x100a67b7e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v46); /*0x100a67b8d*/
    if ( !v30 ) /*0x100a67b95*/
      goto LABEL_33; /*0x100a67b95*/
    goto LABEL_51; /*0x100a67b95*/
  }
  qmemcpy(v31, v45, 0x58u); /*0x100a67bc0*/
  memcpy(v31 + 12, v46, 0x98u); /*0x100a67bd3*/
  v31[11] = v25; /*0x100a67bd8*/
  if ( v30 ) /*0x100a67bdf*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v30, 1); /*0x100a67bf1*/
  return result; /*0x100a678dc*/
}