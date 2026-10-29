// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::is_aimami_owned_top_level_line::h17c5a44b3f4027d0; addr: 0x1002278d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// [release-semantic-writeback <审计会话> 0x1002278d0]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [router-engine-platform-module-content-results-final / exact current checks and backup-dependent source confirmed; not inferred from symbol count] 模块分组事实：quarantined_model_provider
// _ids reads recovery backup and parses section ownership; is_aimami_managed_section recognizes model_providers. and profiles. with specific legacy/managed ID rules. is_legacy_relay_
// config_id accepts exact aimami_relay or aimami_relay_ prefix. Existing pre is_aimami_owned_top_level_line used model-slug helper; new body uses legacy-ID helper, so no unproved mem
// bership-equivalence substitution. Quarantine/restore preserve damaged/changed sources with explicit verification errors.
// 副作用边界：["backup inspection here is read-only; sibling quarantine/restore and atomic publication write config/backup files; user data not modified by analysis"]
// 限制：；pre未逐体对照则delta unverified。
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e027
// 4206dd853ade3eef7cc9003b68d1e289ab88947f776436e
__int64 __fastcall codexmate_lib::core::relay::config_takeover::is_aimami_owned_top_level_line::h17c5a44b3f4027d0(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *v4; // rax
  unsigned __int64 v5; // rdx
  signed __int64 v6; // rbx
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdx
  size_t v9; // r13
  char v10; // si
  __int64 v11; // r15
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // r14
  __int64 v21; // r15
  _QWORD *v22; // r14
  __int64 v23; // rsi
  unsigned int v24; // r14d
  const void *v26; // r14
  unsigned int v27; // eax
  __m128i v28; // xmm1
  signed __int64 v29; // [rsp+8h] [rbp-2E8h] BYREF
  _BYTE v30[24]; // [rsp+10h] [rbp-2E0h]
  __int64 v31; // [rsp+28h] [rbp-2C8h]
  __int64 v32; // [rsp+30h] [rbp-2C0h]
  __int64 v33; // [rsp+38h] [rbp-2B8h]
  __int64 v34; // [rsp+40h] [rbp-2B0h]
  __int64 v35; // [rsp+48h] [rbp-2A8h]
  __int64 v36; // [rsp+50h] [rbp-2A0h]
  __int64 v37; // [rsp+58h] [rbp-298h]
  __int64 v38; // [rsp+60h] [rbp-290h]
  __int64 v39; // [rsp+68h] [rbp-288h]
  _BYTE __src[144]; // [rsp+70h] [rbp-280h] BYREF
  signed __int64 v41; // [rsp+100h] [rbp-1F0h] BYREF
  const __m128i *v42; // [rsp+108h] [rbp-1E8h]
  __int128 v43; // [rsp+110h] [rbp-1E0h]
  __int64 v44; // [rsp+120h] [rbp-1D0h]
  __int64 v45; // [rsp+128h] [rbp-1C8h]
  __int64 v46; // [rsp+130h] [rbp-1C0h]
  __int64 v47; // [rsp+138h] [rbp-1B8h]
  __int64 v48; // [rsp+140h] [rbp-1B0h]
  __int64 v49; // [rsp+148h] [rbp-1A8h]
  __int64 v50; // [rsp+150h] [rbp-1A0h]
  __int64 v51; // [rsp+158h] [rbp-198h]
  __int64 v52; // [rsp+160h] [rbp-190h]
  _BYTE __dst[144]; // [rsp+168h] [rbp-188h] BYREF
  __int64 v54; // [rsp+1F8h] [rbp-F8h]
  __int64 v55; // [rsp+200h] [rbp-F0h]
  __int64 v56; // [rsp+208h] [rbp-E8h]
  __int64 v57; // [rsp+210h] [rbp-E0h]
  __int64 v58; // [rsp+218h] [rbp-D8h]
  __int64 v59; // [rsp+220h] [rbp-D0h]
  __int64 v60; // [rsp+228h] [rbp-C8h]
  _BYTE v61[15]; // [rsp+230h] [rbp-C0h]
  char v62; // [rsp+240h] [rbp-B0h] BYREF
  _BYTE v63[15]; // [rsp+241h] [rbp-AFh]
  __int64 v64; // [rsp+250h] [rbp-A0h]
  __int64 v65; // [rsp+258h] [rbp-98h]
  _QWORD v66[2]; // [rsp+260h] [rbp-90h]
  _QWORD v67[2]; // [rsp+270h] [rbp-80h]
  signed __int64 v68; // [rsp+280h] [rbp-70h] BYREF
  const __m128i *v69; // [rsp+288h] [rbp-68h]
  __int64 v70; // [rsp+290h] [rbp-60h]
  _QWORD v71[2]; // [rsp+298h] [rbp-58h]
  __int64 v72; // [rsp+2A8h] [rbp-48h]
  signed __int64 v73; // [rsp+2B0h] [rbp-40h]
  const __m128i *v74; // [rsp+2B8h] [rbp-38h]
  char v75; // [rsp+2C7h] [rbp-29h]

  v54 = a1; /*0x1002278ea*/
  v4 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(a2, a3); /*0x1002278f7*/
  codexmate_lib::core::relay::config_takeover::top_level_assignment_key::he3d52e653d4f28df(&v41, v4, v5); /*0x100227906*/
  v6 = v41; /*0x10022790b*/
  if ( __OFSUB__(-v41, 1) ) /*0x100227918*/
    return 0; /*0x100227d1c*/
  v74 = v42; /*0x100227925*/
  v55 = v43; /*0x100227930*/
  v7 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(a2, a3); /*0x10022793d*/
  codexmate_lib::core::relay::config_takeover::top_level_assignment_key::he3d52e653d4f28df(&v41, v7, v8); /*0x10022794c*/
  if ( v41 == 0x8000000000000000LL ) /*0x100227962*/
  {
LABEL_26:
    if ( v6 ) /*0x100227d09*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v6, 1); /*0x100227d17*/
    return 0; /*0x100227d17*/
  }
  v70 = v43; /*0x10022796f*/
  v69 = v42; /*0x100227981*/
  v68 = v41; /*0x100227985*/
  v73 = v6; /*0x100227996*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622(&v29, a2, a3); /*0x10022799a*/
  v9 = v29; /*0x10022799f*/
  v10 = v30[8]; /*0x1002279ad*/
  v66[0] = *(_QWORD *)&v30[9]; /*0x1002279bb*/
  *(_QWORD *)((char *)v66 + 7) = *(_QWORD *)&v30[16]; /*0x1002279c9*/
  v11 = v31; /*0x1002279d0*/
  v12 = v32; /*0x1002279d7*/
  v13 = v34; /*0x1002279de*/
  v14 = v36; /*0x1002279ec*/
  v15 = v37; /*0x1002279f3*/
  v16 = v38; /*0x1002279fa*/
  if ( v29 == 2 ) /*0x100227a05*/
  {
    v72 = v35; /*0x100227a0b*/
    v71[0] = v66[0]; /*0x100227a1d*/
    *(_QWORD *)((char *)v71 + 7) = *(_QWORD *)((char *)v66 + 7); /*0x100227a21*/
    v67[0] = v71[0]; /*0x100227a2d*/
    *(_QWORD *)((char *)v67 + 7) = *(_QWORD *)((char *)v66 + 7); /*0x100227a31*/
    if ( *(_QWORD *)v30 == 2 ) /*0x100227a39*/
      goto LABEL_5; /*0x100227a39*/
LABEL_12:
    v19 = v13; /*0x100227c56*/
    if ( v11 ) /*0x100227c5c*/
    {
      v20 = v15; /*0x100227c6c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100227c6f*/
      v15 = v20; /*0x100227c77*/
    }
    if ( 2 * v15 ) /*0x100227c7a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x100227c8f*/
    v21 = v72; /*0x100227c97*/
    if ( v14 ) /*0x100227c9b*/
    {
      v22 = (_QWORD *)(v72 + 8); /*0x100227c9d*/
      do /*0x100227cb7*/
      {
        v23 = *(v22 - 1); /*0x100227cb9*/
        if ( v23 ) /*0x100227cc0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v23, 1); /*0x100227cca*/
        v22 += 3; /*0x100227cb0*/
        --v14; /*0x100227cb4*/
      }
      while ( v14 ); /*0x100227cb7*/
    }
    if ( v19 ) /*0x100227cd4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24 * v19, 8); /*0x100227ce6*/
    v6 = v73; /*0x100227ceb*/
    goto LABEL_24; /*0x100227ceb*/
  }
  v57 = v33; /*0x100227acc*/
  v72 = v39; /*0x100227ada*/
  v58 = v34; /*0x100227ade*/
  v75 = v30[8]; /*0x100227ae5*/
  v56 = v38; /*0x100227af0*/
  v59 = v37; /*0x100227b03*/
  v60 = v32; /*0x100227b0a*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x100227b11*/
  v71[0] = v66[0]; /*0x100227b1d*/
  *(_QWORD *)((char *)v71 + 7) = *(_QWORD *)((char *)v66 + 7); /*0x100227b28*/
  v41 = v29; /*0x100227b2c*/
  v42 = *(const __m128i **)v30; /*0x100227b33*/
  LOBYTE(v43) = v30[8]; /*0x100227b3e*/
  *(_QWORD *)((char *)&v43 + 1) = v71[0]; /*0x100227b48*/
  *((_QWORD *)&v43 + 1) = *(_QWORD *)((char *)v66 + 7); /*0x100227b53*/
  v44 = v31; /*0x100227b5a*/
  v45 = v32; /*0x100227b68*/
  v46 = v33; /*0x100227b76*/
  v47 = v34; /*0x100227b84*/
  v48 = v35; /*0x100227b8b*/
  v49 = v36; /*0x100227b92*/
  v50 = v37; /*0x100227ba0*/
  v51 = v38; /*0x100227bae*/
  v52 = v39; /*0x100227bb9*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::hdd6c0cc269136a64( /*0x100227bce*/
    &v29,
    &v41);
  v10 = v30[0]; /*0x100227bda*/
  v67[0] = *(_QWORD *)&v30[1]; /*0x100227be8*/
  *(_QWORD *)((char *)v67 + 7) = *(_QWORD *)&v30[8]; /*0x100227bf3*/
  if ( v29 != 2 ) /*0x100227bfb*/
  {
    v13 = v33; /*0x100227c17*/
    v72 = v34; /*0x100227c25*/
    v14 = v35; /*0x100227c29*/
    v15 = v36; /*0x100227c30*/
    v16 = v37; /*0x100227c37*/
    v11 = *(_QWORD *)&v30[16]; /*0x100227c3e*/
    v12 = v31; /*0x100227c45*/
    goto LABEL_12; /*0x100227c45*/
  }
  v11 = *(_QWORD *)&v30[16]; /*0x100227bfd*/
  v12 = v31; /*0x100227c04*/
LABEL_5:
  *(_QWORD *)&v61[7] = *(_QWORD *)((char *)v67 + 7); /*0x100227a3f*/
  *(_QWORD *)v61 = v67[0]; /*0x100227a4e*/
  v6 = v73; /*0x100227a59*/
  if ( v10 == 7 ) /*0x100227a5d*/
    goto LABEL_24; /*0x100227a5d*/
  *(_QWORD *)&v63[7] = *(_QWORD *)&v61[7]; /*0x100227a71*/
  *(_QWORD *)v63 = *(_QWORD *)v61; /*0x100227a78*/
  v64 = v11; /*0x100227a7f*/
  v65 = v12; /*0x100227a86*/
  v62 = v10; /*0x100227a8d*/
  v17 = _$LT$alloc..string..String$u20$as$u20$toml..value..Index$GT$::index::he6dbca8d4ffd598a( /*0x100227a9f*/
          &v68,
          &v62,
          v13,
          *(_QWORD *)&v61[7],
          v15);
  if ( !v17 ) /*0x100227aa7*/
  {
    core::ptr::drop_in_place$LT$toml..value..Value$GT$::h6c4010814cfa0f22(&v62); /*0x100227d3b*/
LABEL_24:
    if ( v68 ) /*0x100227cf6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x100227d01*/
    goto LABEL_26; /*0x100227d01*/
  }
  if ( *(_BYTE *)v17 ) /*0x100227aad*/
  {
    v18 = 0x8000000000000000LL; /*0x100227ab6*/
  }
  else
  {
    v26 = *(const void **)(v17 + 16); /*0x100227d42*/
    v9 = *(_QWORD *)(v17 + 24); /*0x100227d46*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h331ad6372c5f4439(&v41, v9, 0, 1, 1); /*0x100227d61*/
    v18 = (unsigned __int64)v42; /*0x100227d66*/
    if ( (_DWORD)v41 == 1 ) /*0x100227d74*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42, v43); /*0x100227f21*/
    v11 = v43; /*0x100227d7a*/
    memcpy((void *)v43, v26, v9); /*0x100227d8a*/
  }
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::h6c4010814cfa0f22(&v62); /*0x100227d96*/
  if ( v68 ) /*0x100227da2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x100227dad*/
  if ( v18 == 0x8000000000000000LL ) /*0x100227dbf*/
    goto LABEL_26; /*0x100227dbf*/
  v24 = 0; /*0x100227dc5*/
  switch ( v55 ) /*0x100227deb*/
  {
    case 5LL: /*0x100227deb*/
      if ( v74->i32[0] ^ 0x65646F6D | v74->u8[4] ^ 0x6C ) /*0x100227dff*/
        goto LABEL_46; /*0x100227e01*/
      v27 = codexmate_lib::core::relay::codex_diagnostic::is_legacy_relay_config_id::h1d1c6d19f9a30c98(v11, v9); /*0x100227e0d*/
      goto LABEL_48; /*0x100227e12*/
    case 7LL: /*0x100227deb*/
      if ( !(v74->i32[0] ^ 0x666F7270 | *(__int32 *)((char *)v74->i32 + 3) ^ 0x656C6966) ) /*0x100227e54*/
        goto LABEL_42; /*0x100227e56*/
      goto LABEL_46; /*0x100227e56*/
    case 14LL: /*0x100227deb*/
      if ( v74->i64[0] ^ 0x72705F6C65646F6DLL | *(__int64 *)((char *)v74->i64 + 6) ^ 0x72656469766F7270LL ) /*0x100227e36*/
        goto LABEL_46; /*0x100227e39*/
LABEL_42:
      v27 = codexmate_lib::core::relay::codex_writer::is_aimami_owned_provider_name::ha2f3d3de3655cfc4(v11, v9); /*0x100227e58*/
      goto LABEL_48; /*0x100227e63*/
    case 15LL: /*0x100227deb*/
      if ( v74->i64[0] ^ 0x625F69616E65706FLL | *(__int64 *)((char *)v74->i64 + 7) ^ 0x6C72755F65736162LL ) /*0x100227e84*/
        goto LABEL_46; /*0x100227e87*/
      LOBYTE(v24) = (unsigned __int16)codexmate_lib::core::relay::codex_writer::aimami_router_base_url_port::h27ad7eca58c3b3a5( /*0x100227e98*/
                                        v11,
                                        v9) == 1;
      goto LABEL_49; /*0x100227e9c*/
    case 18LL: /*0x100227deb*/
      v28 = _mm_or_si128( /*0x100227ebe*/
              _mm_xor_si128(_mm_cvtsi32_si128(v74[1].u16[0]), (__m128i)xmmword_1016E9980),
              _mm_xor_si128(_mm_loadu_si128(v74), (__m128i)xmmword_1016E9970));
      if ( _mm_testz_si128(v28, v28) ) /*0x100227ec7*/
      {
        v27 = codexmate_lib::core::relay::config_takeover::is_aimami_catalog_path::h16456f5f364c9a2b( /*0x100227edb*/
                v54,
                v11,
                v9,
                v55 - 5);
LABEL_48:
        v24 = v27; /*0x100227ee0*/
      }
      else
      {
LABEL_46:
        v24 = 0; /*0x100227ec9*/
      }
LABEL_49:
      if ( v18 ) /*0x100227ee6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v18, 1); /*0x100227ef3*/
      if ( v6 ) /*0x100227efb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v6, 1); /*0x100227f0d*/
      break; /*0x100227f12*/
    default:
      goto LABEL_49;
  }
  return v24; /*0x100227d22*/
}
