// aimami 1.2.7 mac truly_undone deep reverse — cluster core/codex_config/validate_candidate
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::codex_config::validate_candidate::h125db2f7999de900 @ 0x10071cd30 size=1377 lines=217 =====
__int64 __fastcall codexmate_lib::core::codex_config::validate_candidate::h125db2f7999de900(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  void *v7; // rax
  void *v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  _QWORD *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-320h] BYREF
  __int64 v14; // [rsp+8h] [rbp-318h]
  __int64 v15; // [rsp+10h] [rbp-310h]
  __int64 v16; // [rsp+18h] [rbp-308h]
  __int64 v17; // [rsp+20h] [rbp-300h]
  __int64 v18; // [rsp+28h] [rbp-2F8h]
  __int64 v19; // [rsp+30h] [rbp-2F0h]
  __int64 v20; // [rsp+38h] [rbp-2E8h]
  __int64 v21; // [rsp+40h] [rbp-2E0h]
  __int64 v22; // [rsp+48h] [rbp-2D8h]
  __int64 v23; // [rsp+50h] [rbp-2D0h]
  __int64 v24; // [rsp+58h] [rbp-2C8h]
  __int64 v25; // [rsp+60h] [rbp-2C0h]
  _BYTE __src[144]; // [rsp+68h] [rbp-2B8h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-228h] BYREF
  __int64 v28; // [rsp+100h] [rbp-220h]
  __int64 v29; // [rsp+108h] [rbp-218h]
  __int64 v30; // [rsp+110h] [rbp-210h]
  __int64 v31; // [rsp+118h] [rbp-208h]
  __int64 v32; // [rsp+120h] [rbp-200h]
  __int64 v33; // [rsp+128h] [rbp-1F8h]
  __int64 v34; // [rsp+130h] [rbp-1F0h]
  __int64 v35; // [rsp+138h] [rbp-1E8h]
  __int64 v36; // [rsp+140h] [rbp-1E0h]
  __int64 v37; // [rsp+148h] [rbp-1D8h]
  __int64 v38; // [rsp+150h] [rbp-1D0h]
  __int64 v39; // [rsp+158h] [rbp-1C8h]
  _BYTE __dst[144]; // [rsp+160h] [rbp-1C0h] BYREF
  __int64 v41; // [rsp+1F0h] [rbp-130h]
  __int64 v42; // [rsp+1F8h] [rbp-128h]
  __int64 v43; // [rsp+200h] [rbp-120h]
  __int64 v44; // [rsp+208h] [rbp-118h]
  __int64 v45; // [rsp+210h] [rbp-110h]
  __int64 v46; // [rsp+218h] [rbp-108h]
  __int64 v47; // [rsp+220h] [rbp-100h]
  __int64 v48; // [rsp+228h] [rbp-F8h]
  __int64 v49; // [rsp+230h] [rbp-F0h]
  __int64 v50; // [rsp+238h] [rbp-E8h]
  __int64 v51; // [rsp+240h] [rbp-E0h]
  __int64 v52; // [rsp+248h] [rbp-D8h]
  __int64 v53; // [rsp+250h] [rbp-D0h]
  __int64 v54; // [rsp+258h] [rbp-C8h]
  __int64 v55; // [rsp+260h] [rbp-C0h]
  __int64 v56; // [rsp+268h] [rbp-B8h]
  __int64 v57; // [rsp+270h] [rbp-B0h]
  __int64 v58; // [rsp+278h] [rbp-A8h]
  __int64 v59; // [rsp+280h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+288h] [rbp-98h]
  __int64 v61; // [rsp+290h] [rbp-90h]
  __int64 v62; // [rsp+298h] [rbp-88h]
  __int64 v63; // [rsp+2A0h] [rbp-80h]
  __int64 v64; // [rsp+2A8h] [rbp-78h]
  __int64 v65; // [rsp+2B0h] [rbp-70h]
  __int64 v66; // [rsp+2B8h] [rbp-68h]
  __int64 v67; // [rsp+2C0h] [rbp-60h]
  __int64 v68; // [rsp+2C8h] [rbp-58h]
  __int64 v69; // [rsp+2D0h] [rbp-50h]
  __int64 v70; // [rsp+2D8h] [rbp-48h]
  __int64 v71; // [rsp+2E0h] [rbp-40h]
  __int64 v72; // [rsp+2E8h] [rbp-38h]
  __int64 v73; // [rsp+2F0h] [rbp-30h]

  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622(&v13, a2, a3);
  v3 = v14;
  v41 = v15;
  v42 = v16;
  v43 = v17;
  v44 = v18;
  v45 = v19;
  v46 = v20;
  v47 = v21;
  v48 = v22;
  v49 = v23;
  v50 = v24;
  v51 = v25;
  if ( v13 == 2 )
  {
    v63 = v41;
    v64 = v42;
    v65 = v43;
    v66 = v44;
    v67 = v45;
    v68 = v46;
    v69 = v47;
    v70 = v48;
    v71 = v49;
    v72 = v50;
    v73 = v51;
    v62 = v44;
    v61 = v43;
    v60 = v42;
    v59 = v41;
    v58 = v51;
    v57 = v50;
    v56 = v49;
    v55 = v48;
    v54 = v47;
    v4 = v45;
    v5 = v46;
  }
  else
  {
    memcpy(__dst, __src, sizeof(__dst));
    v63 = v41;
    v64 = v42;
    v65 = v43;
    v66 = v44;
    v67 = v45;
    v68 = v46;
    v69 = v47;
    v70 = v48;
    v71 = v49;
    v72 = v50;
    v73 = v51;
    v27 = v13;
    v28 = v14;
    v29 = v41;
    v30 = v42;
    v31 = v43;
    v32 = v44;
    v33 = v45;
    v34 = v46;
    v35 = v47;
    v36 = v48;
    v37 = v49;
    v38 = v50;
    v39 = v51;
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h61a728ca5560f63d(
      &v13,
      &v27);
    v3 = v13;
    v59 = v14;
    v60 = v15;
    v61 = v16;
    v62 = v17;
    if ( v13 == 2 )
      goto LABEL_6;
    v58 = v24;
    v57 = v23;
    v56 = v22;
    v55 = v21;
    v54 = v20;
    v4 = v18;
    v5 = v19;
  }
  v53 = v5;
  v52 = v4;
LABEL_6:
  if ( v3 == 2 )
  {
    result = core::ptr::drop_in_place$LT$toml..value..Value$GT$::hc29b4f2f800c5bf1(&v59);
    *a1 = 11;
  }
  else
  {
    v27 = v3;
    v28 = v59;
    v29 = v60;
    v30 = v61;
    v31 = v62;
    v32 = v52;
    v33 = v53;
    v34 = v54;
    v35 = v55;
    v36 = v56;
    v37 = v57;
    v38 = v58;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v13);
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(104, 1);
    if ( !v7 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 104);
    v8 = v7;
    memcpy(v7, &unk_1018C3FBB, 0x68u);
    if ( v30 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v30, 1);
    if ( !__OFSUB__(-v36, 1) && v36 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1);
    v9 = v34;
    v10 = v35;
    if ( v35 )
    {
      v11 = (_QWORD *)(v34 + 8);
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
    result = v33;
    if ( v33 )
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24 * v33, 8);
    *a1 = 9;
    a1[1] = 104;
    a1[2] = v8;
    a1[3] = 104;
  }
  return result;
}

