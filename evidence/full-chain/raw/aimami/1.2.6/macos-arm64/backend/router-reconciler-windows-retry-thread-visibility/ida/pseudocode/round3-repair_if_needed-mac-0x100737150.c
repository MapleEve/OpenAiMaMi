// round3 (2026-08-07) item1递归展开目标3/4：codex_project_state::repair_if_needed
// mac addr=0x100737150 size=0x4df(1247B) FULL BODY, NO TRUNCATION
// win对应体本轮未能唯一确认(gap_needs_reducer): 已排除sub_140BF6180(实为router_unlock_auth诊断helper)与sub_140AAAA10(实为config_takeover访问拒绝重试包装器)两个体积相近候选

__int64 __fastcall codexmate_lib::core::relay::codex_project_state::repair_if_needed::hd64c5cca3a8ebccf(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r13
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v14; // rax
  _QWORD *v15; // [rsp+0h] [rbp-330h] BYREF
  _QWORD v16[12]; // [rsp+8h] [rbp-328h] BYREF
  _QWORD v17[13]; // [rsp+E0h] [rbp-250h] BYREF
  _QWORD v18[12]; // [rsp+148h] [rbp-1E8h] BYREF
  _QWORD v19[3]; // [rsp+1A8h] [rbp-188h] BYREF
  __int64 v20; // [rsp+1C0h] [rbp-170h]
  __int64 v21; // [rsp+1C8h] [rbp-168h]
  __int64 v22; // [rsp+1D0h] [rbp-160h]
  __int64 v23; // [rsp+1D8h] [rbp-158h]
  __int64 v24; // [rsp+1E0h] [rbp-150h]
  __int64 v25; // [rsp+1F0h] [rbp-140h]
  __int64 v26; // [rsp+1F8h] [rbp-138h]
  __int64 v27; // [rsp+208h] [rbp-128h]
  __int64 v28; // [rsp+210h] [rbp-120h]
  __int64 v29; // [rsp+218h] [rbp-118h]
  __int64 v30; // [rsp+220h] [rbp-110h]
  __int64 v31; // [rsp+228h] [rbp-108h]
  __int64 v32; // [rsp+238h] [rbp-F8h]
  __int64 v33; // [rsp+258h] [rbp-D8h]
  char v34; // [rsp+282h] [rbp-AEh]
  _QWORD v35[3]; // [rsp+288h] [rbp-A8h] BYREF
  _QWORD v36[3]; // [rsp+2A0h] [rbp-90h] BYREF
  _QWORD v37[2]; // [rsp+2B8h] [rbp-78h] BYREF
  _QWORD v38[3]; // [rsp+2C8h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+2E0h] [rbp-50h]
  __int64 v40; // [rsp+2E8h] [rbp-48h]
  _QWORD *v41; // [rsp+2F0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+2F8h] [rbp-38h]
  __int64 v43; // [rsp+300h] [rbp-30h]

  codexmate_lib::core::relay::codex_project_state::inspect::hcb684185c418e8f5(v19, a2);
  codexmate_lib::core::relay::codex_project_state::stability_issue::h829c06402e62b9be(&v15, v19);
  v2 = v15;
  if ( v15 == (_QWORD *)0x8000000000000000LL )
  {
    v39 = 0x8000000000000000LL;
    v3 = v32;
    v40 = v33;
    v4 = v27;
    v5 = v28;
    v6 = v29;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v15, v19);
    v7 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
    if ( !v7 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39);
    *(_QWORD *)((char *)v7 + 31) = 0x8DA4E5AEBFE4809CLL;
    v7[3] = 0x9CE9A097E68CBCEFLL;
    v7[2] = 0xB8B8E5A3ADE695BCLL;
    v7[1] = 0xE5A2B4E7AE9BE7B9LL;
    *v7 = 0xA1E9207865646F43LL;
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 48) = v4;
    *(_QWORD *)(a1 + 56) = v5;
    *(_QWORD *)(a1 + 64) = v6;
    *(_QWORD *)a1 = 39;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = 39;
    *(_QWORD *)(a1 + 72) = v3;
    *(_QWORD *)(a1 + 80) = v40;
    *(_QWORD *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 96) = 0;
    v2 = (_QWORD *)v39;
LABEL_11:
    if ( v19[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19[1], v19[0], 1);
    if ( v23 != 0x8000000000000000LL && v23 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1);
    if ( v25 != 0x8000000000000000LL && v25 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1);
    if ( v2 != (_QWORD *)0x8000000000000000LL && v27 != 0x8000000000000000LL && v27 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1);
    v10 = v22;
    if ( v22 )
    {
      v11 = (_QWORD *)(v21 + 8);
      do
      {
        v12 = *(v11 - 1);
        if ( v12 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v12, 1);
        v11 += 3;
        --v10;
      }
      while ( v10 );
    }
    if ( v20 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24 * v20, 8);
    if ( v30 != 0x8000000000000000LL && v30 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v30, 1);
    return a1;
  }
  v43 = v16[1];
  v42 = v16[0];
  v41 = v15;
  if ( !v34 )
  {
    v15 = &v41;
    v16[0] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v36, &unk_10185F145, &v15);
    *(_QWORD *)(a1 + 32) = v36[2];
    v9 = v36[0];
    *(_QWORD *)(a1 + 24) = v36[1];
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 8) = 10;
    goto LABEL_8;
  }
  codexmate_lib::core::relay::codex_project_state::repair::h5f18d819543f57cf(&v15, a2);
  v8 = v15;
  qmemcpy(v18, v16, sizeof(v18));
  if ( v15 == (_QWORD *)0x8000000000000000LL )
  {
    qmemcpy((void *)(a1 + 8), v18, 0x60u);
LABEL_8:
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_9:
    if ( v41 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1);
    goto LABEL_11;
  }
  qmemcpy(&v17[1], v18, 0x60u);
  v17[0] = v15;
  codexmate_lib::core::relay::codex_project_state::inspect::hcb684185c418e8f5(&v15, a2);
  codexmate_lib::core::relay::codex_project_state::stability_issue::h829c06402e62b9be(v38, &v15);
  if ( v38[0] != 0x8000000000000000LL )
  {
    v18[2] = v38[2];
    v18[1] = v38[1];
    v18[0] = v38[0];
    v37[0] = v18;
    v37[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v35, &unk_10185F177, v37);
    *(_QWORD *)(a1 + 32) = v35[2];
    v14 = v35[0];
    *(_QWORD *)(a1 + 24) = v35[1];
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    if ( v18[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[1], v18[0], 1);
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h9462794aee212e0d(&v15);
    if ( v17[3] != 0x8000000000000000LL && v17[3] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[4], v17[3], 1);
    if ( v17[6] != 0x8000000000000000LL && v17[6] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[7], v17[6], 1);
    if ( v8 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[1], v8, 1);
    goto LABEL_9;
  }
  qmemcpy((void *)a1, v17, 0x68u);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h9462794aee212e0d(&v15);
  if ( v41 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h9462794aee212e0d(v19);
  return a1;
}