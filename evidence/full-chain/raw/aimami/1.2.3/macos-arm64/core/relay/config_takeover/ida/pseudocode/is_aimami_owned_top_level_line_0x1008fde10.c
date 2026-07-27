// __ZN13codexmate_lib4core5relay15config_takeover30is_aimami_owned_top_level_line @ 0x1008fde10 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::config_takeover::is_aimami_owned_top_level_line::h65b2fd252fc2ca9f(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *v4; // rax
  unsigned __int64 v5; // rdx
  signed __int64 v6; // rbx
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdx
  size_t v9; // r14
  char v10; // si
  __int64 v11; // r15
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // r14
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  unsigned int v24; // r14d
  const void *v26; // r15
  __m128i v27; // xmm1
  unsigned int v28; // eax
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

  v54 = a1; /*0x1008fde2a*/
  v4 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008fde37*/
  codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(&v41, v4, v5); /*0x1008fde46*/
  v6 = v41; /*0x1008fde4b*/
  if ( __OFSUB__(-v41, 1) ) /*0x1008fde58*/
    return 0; /*0x1008fe25c*/
  v74 = v42; /*0x1008fde65*/
  v55 = v43; /*0x1008fde70*/
  v7 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008fde7d*/
  codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(&v41, v7, v8); /*0x1008fde8c*/
  if ( v41 == 0x8000000000000000LL ) /*0x1008fdea2*/
  {
LABEL_26:
    if ( v6 ) /*0x1008fe249*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v6, 1); /*0x1008fe257*/
    return 0; /*0x1008fe257*/
  }
  v70 = v43; /*0x1008fdeaf*/
  v69 = v42; /*0x1008fdec1*/
  v68 = v41; /*0x1008fdec5*/
  v73 = v6; /*0x1008fded6*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622(&v29, a2, a3); /*0x1008fdeda*/
  v9 = v29; /*0x1008fdedf*/
  v10 = v30[8]; /*0x1008fdeed*/
  v66[0] = *(_QWORD *)&v30[9]; /*0x1008fdefb*/
  *(_QWORD *)((char *)v66 + 7) = *(_QWORD *)&v30[16]; /*0x1008fdf09*/
  v11 = v31; /*0x1008fdf10*/
  v12 = v32; /*0x1008fdf17*/
  v13 = v34; /*0x1008fdf1e*/
  v14 = v36; /*0x1008fdf2c*/
  v15 = v37; /*0x1008fdf33*/
  v16 = v38; /*0x1008fdf3a*/
  if ( v29 == 2 ) /*0x1008fdf45*/
  {
    v72 = v35; /*0x1008fdf4b*/
    v71[0] = v66[0]; /*0x1008fdf5d*/
    *(_QWORD *)((char *)v71 + 7) = *(_QWORD *)((char *)v66 + 7); /*0x1008fdf61*/
    v67[0] = v71[0]; /*0x1008fdf6d*/
    *(_QWORD *)((char *)v67 + 7) = *(_QWORD *)((char *)v66 + 7); /*0x1008fdf71*/
    if ( *(_QWORD *)v30 == 2 ) /*0x1008fdf79*/
      goto LABEL_5; /*0x1008fdf79*/
LABEL_12:
    v19 = v13; /*0x1008fe196*/
    if ( v11 ) /*0x1008fe19c*/
    {
      v20 = v15; /*0x1008fe1ac*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x1008fe1af*/
      v15 = v20; /*0x1008fe1b7*/
    }
    if ( 2 * v15 ) /*0x1008fe1ba*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1008fe1cf*/
    v21 = v72; /*0x1008fe1d7*/
    if ( v14 ) /*0x1008fe1db*/
    {
      v22 = (_QWORD *)(v72 + 8); /*0x1008fe1dd*/
      do /*0x1008fe1f7*/
      {
        v23 = *(v22 - 1); /*0x1008fe1f9*/
        if ( v23 ) /*0x1008fe200*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v23, 1); /*0x1008fe20a*/
        v22 += 3; /*0x1008fe1f0*/
        --v14; /*0x1008fe1f4*/
      }
      while ( v14 ); /*0x1008fe1f7*/
    }
    if ( v19 ) /*0x1008fe214*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24 * v19, 8); /*0x1008fe226*/
    v6 = v73; /*0x1008fe22b*/
    goto LABEL_24; /*0x1008fe22b*/
  }
  v57 = v33; /*0x1008fe00c*/
  v72 = v39; /*0x1008fe01a*/
  v58 = v34; /*0x1008fe01e*/
  v75 = v30[8]; /*0x1008fe025*/
  v56 = v38; /*0x1008fe030*/
  v59 = v37; /*0x1008fe043*/
  v60 = v32; /*0x1008fe04a*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1008fe051*/
  v71[0] = v66[0]; /*0x1008fe05d*/
  *(_QWORD *)((char *)v71 + 7) = *(_QWORD *)((char *)v66 + 7); /*0x1008fe068*/
  v41 = v29; /*0x1008fe06c*/
  v42 = *(const __m128i **)v30; /*0x1008fe073*/
  LOBYTE(v43) = v30[8]; /*0x1008fe07e*/
  *(_QWORD *)((char *)&v43 + 1) = v71[0]; /*0x1008fe088*/
  *((_QWORD *)&v43 + 1) = *(_QWORD *)((char *)v66 + 7); /*0x1008fe093*/
  v44 = v31; /*0x1008fe09a*/
  v45 = v32; /*0x1008fe0a8*/
  v46 = v33; /*0x1008fe0b6*/
  v47 = v34; /*0x1008fe0c4*/
  v48 = v35; /*0x1008fe0cb*/
  v49 = v36; /*0x1008fe0d2*/
  v50 = v37; /*0x1008fe0e0*/
  v51 = v38; /*0x1008fe0ee*/
  v52 = v39; /*0x1008fe0f9*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x1008fe10e*/
    &v29,
    &v41);
  v10 = v30[0]; /*0x1008fe11a*/
  v67[0] = *(_QWORD *)&v30[1]; /*0x1008fe128*/
  *(_QWORD *)((char *)v67 + 7) = *(_QWORD *)&v30[8]; /*0x1008fe133*/
  if ( v29 != 2 ) /*0x1008fe13b*/
  {
    v13 = v33; /*0x1008fe157*/
    v72 = v34; /*0x1008fe165*/
    v14 = v35; /*0x1008fe169*/
    v15 = v36; /*0x1008fe170*/
    v16 = v37; /*0x1008fe177*/
    v11 = *(_QWORD *)&v30[16]; /*0x1008fe17e*/
    v12 = v31; /*0x1008fe185*/
    goto LABEL_12; /*0x1008fe185*/
  }
  v11 = *(_QWORD *)&v30[16]; /*0x1008fe13d*/
  v12 = v31; /*0x1008fe144*/
LABEL_5:
  *(_QWORD *)&v61[7] = *(_QWORD *)((char *)v67 + 7); /*0x1008fdf7f*/
  *(_QWORD *)v61 = v67[0]; /*0x1008fdf8e*/
  v6 = v73; /*0x1008fdf99*/
  if ( v10 == 7 ) /*0x1008fdf9d*/
    goto LABEL_24; /*0x1008fdf9d*/
  *(_QWORD *)&v63[7] = *(_QWORD *)&v61[7]; /*0x1008fdfb1*/
  *(_QWORD *)v63 = *(_QWORD *)v61; /*0x1008fdfb8*/
  v64 = v11; /*0x1008fdfbf*/
  v65 = v12; /*0x1008fdfc6*/
  v62 = v10; /*0x1008fdfcd*/
  v17 = _$LT$alloc..string..String$u20$as$u20$toml..value..Index$GT$::index::he6dbca8d4ffd598a( /*0x1008fdfdf*/
          &v68,
          &v62,
          v13,
          *(_QWORD *)&v61[7],
          v15);
  if ( !v17 ) /*0x1008fdfe7*/
  {
    core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v62); /*0x1008fe27b*/
LABEL_24:
    if ( v68 ) /*0x1008fe236*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x1008fe241*/
    goto LABEL_26; /*0x1008fe241*/
  }
  if ( *(_BYTE *)v17 ) /*0x1008fdfed*/
  {
    v18 = 0x8000000000000000LL; /*0x1008fdff6*/
  }
  else
  {
    v26 = *(const void **)(v17 + 16); /*0x1008fe282*/
    v9 = *(_QWORD *)(v17 + 24); /*0x1008fe286*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v41, v9, 0, 1, 1); /*0x1008fe2a1*/
    v18 = (unsigned __int64)v42; /*0x1008fe2a6*/
    if ( (_DWORD)v41 == 1 ) /*0x1008fe2b4*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42, v43); /*0x1008fe3fd*/
    v14 = v43; /*0x1008fe2ba*/
    memcpy((void *)v43, v26, v9); /*0x1008fe2ca*/
  }
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v62); /*0x1008fe2d6*/
  if ( v68 ) /*0x1008fe2e2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x1008fe2ed*/
  if ( v18 == 0x8000000000000000LL ) /*0x1008fe2ff*/
    goto LABEL_26; /*0x1008fe2ff*/
  switch ( v55 ) /*0x1008fe310*/
  {
    case 5LL: /*0x1008fe310*/
      if ( !(v74->i32[0] ^ 0x65646F6D | v74->u8[4] ^ 0x6C) ) /*0x1008fe3aa*/
      {
        LOBYTE(v28) = codexmate_lib::core::relay::codex_writer::is_aimami_relay_model_slug::hc51c0a465fabe627(v14, v9); /*0x1008fe3b7*/
        goto LABEL_46; /*0x1008fe3b7*/
      }
      break;
    case 14LL: /*0x1008fe310*/
      if ( !(v74->i64[0] ^ 0x72705F6C65646F6DLL | *(__int64 *)((char *)v74->i64 + 6) ^ 0x72656469766F7270LL) ) /*0x1008fe384*/
      {
        LOBYTE(v28) = codexmate_lib::core::relay::codex_writer::is_aimami_owned_provider_name::h9d4dad6db8595928( /*0x1008fe38f*/
                        v14,
                        v9);
        goto LABEL_46; /*0x1008fe394*/
      }
      break;
    case 18LL: /*0x1008fe310*/
      v27 = _mm_or_si128( /*0x1008fe346*/
              _mm_xor_si128(_mm_cvtsi32_si128(v74[1].u16[0]), (__m128i)xmmword_1015FBD70),
              _mm_xor_si128(_mm_loadu_si128(v74), (__m128i)xmmword_1015FBD60));
      if ( _mm_testz_si128(v27, v27) ) /*0x1008fe34a*/
      {
        v28 = codexmate_lib::core::relay::config_takeover::is_aimami_catalog_path::h7d9acdde71b76a74(v54); /*0x1008fe35e*/
LABEL_46:
        v24 = v28; /*0x1008fe3bc*/
        goto LABEL_47; /*0x1008fe3bc*/
      }
      break;
  }
  v24 = 0; /*0x1008fe3ac*/
LABEL_47:
  if ( v18 ) /*0x1008fe3c2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v18, 1); /*0x1008fe3cf*/
  if ( v6 ) /*0x1008fe3d7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v6, 1); /*0x1008fe3e9*/
  return v24; /*0x1008fe262*/
}