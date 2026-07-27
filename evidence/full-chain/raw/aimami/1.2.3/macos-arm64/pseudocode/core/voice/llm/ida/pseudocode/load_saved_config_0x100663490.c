// __ZN13codexmate_lib4core5voice3llm17load_saved_config @ 0x100663490 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::llm::load_saved_config::h44338161021bc49d(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rdi
  char v12; // bl
  void (__fastcall *v13)(__int64, double); // rax
  char v14; // al
  __int64 v15; // rcx
  const void *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r13
  void *v26; // rax
  __int64 v27; // rdx
  size_t v28; // r12
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rbx
  const void *v32; // r12
  const void *v33; // r13
  __int64 v34; // rbx
  double v35; // xmm0_8
  char v36; // al
  __int64 v37; // rsi
  _QWORD v38[3]; // [rsp+0h] [rbp-290h] BYREF
  _QWORD v39[2]; // [rsp+18h] [rbp-278h] BYREF
  _QWORD v40[3]; // [rsp+28h] [rbp-268h] BYREF
  _QWORD v41[3]; // [rsp+40h] [rbp-250h] BYREF
  __int64 v42; // [rsp+58h] [rbp-238h]
  __int64 v43; // [rsp+60h] [rbp-230h]
  void *__src; // [rsp+68h] [rbp-228h]
  _QWORD v45[3]; // [rsp+70h] [rbp-220h] BYREF
  __int64 v46; // [rsp+88h] [rbp-208h] BYREF
  __int64 v47; // [rsp+90h] [rbp-200h]
  __int64 v48; // [rsp+A0h] [rbp-1F0h]
  __int64 v49; // [rsp+A8h] [rbp-1E8h]
  __int64 v50; // [rsp+B8h] [rbp-1D8h]
  const void *v51; // [rsp+C0h] [rbp-1D0h]
  signed __int64 v52; // [rsp+C8h] [rbp-1C8h]
  __int64 v53; // [rsp+D0h] [rbp-1C0h]
  const void *v54; // [rsp+D8h] [rbp-1B8h]
  signed __int64 v55; // [rsp+E0h] [rbp-1B0h]
  __int64 *v56; // [rsp+E8h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+F0h] [rbp-1A0h]
  __int64 v58; // [rsp+F8h] [rbp-198h]
  signed __int64 v59[3]; // [rsp+100h] [rbp-190h] BYREF
  signed __int64 v60[3]; // [rsp+118h] [rbp-178h] BYREF
  __int64 v61; // [rsp+130h] [rbp-160h]
  __int64 v62; // [rsp+138h] [rbp-158h]
  __int64 v63; // [rsp+140h] [rbp-150h]
  __int64 v64; // [rsp+148h] [rbp-148h]
  _QWORD v65[12]; // [rsp+150h] [rbp-140h] BYREF
  size_t v66; // [rsp+1B0h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+1B8h] [rbp-D8h]
  size_t v68; // [rsp+1C0h] [rbp-D0h]
  __int64 v69; // [rsp+1C8h] [rbp-C8h]
  __int64 v70; // [rsp+1D0h] [rbp-C0h] BYREF
  __int64 v71; // [rsp+1D8h] [rbp-B8h]
  __int64 v72; // [rsp+1E0h] [rbp-B0h]
  _QWORD v73[9]; // [rsp+1E8h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+230h] [rbp-60h]
  __int64 v75; // [rsp+238h] [rbp-58h]
  __int64 v76; // [rsp+240h] [rbp-50h]
  __int64 v77; // [rsp+248h] [rbp-48h] BYREF
  __int64 v78; // [rsp+250h] [rbp-40h]
  __int64 v79; // [rsp+258h] [rbp-38h]
  __int64 v80; // [rsp+260h] [rbp-30h]

  codexmate_lib::core::voice::llm::normalize_provider::hc20fe0bd6fa0e76d(&v77, a2, a3); /*0x1006634ab*/
  v5 = v78; /*0x1006634b0*/
  v6 = v79; /*0x1006634b4*/
  codexmate_lib::core::voice::llm::provider_defaults::h31ef2b5ccbbfd371(&v46, v78, v79); /*0x1006634c5*/
  codexmate_lib::core::voice::llm::keyring_entry::h298f9575b492acea((__int64)&v70, v5, v6); /*0x1006634da*/
  v7 = v70; /*0x1006634df*/
  v8 = v71; /*0x1006634e6*/
  v9 = v72; /*0x1006634ed*/
  if ( v70 != 11 ) /*0x1006634f8*/
  {
    qmemcpy((void *)(a1 + 32), v73, 0x48u); /*0x100663604*/
    *(_QWORD *)(a1 + 8) = v7; /*0x100663607*/
    *(_QWORD *)(a1 + 16) = v8; /*0x10066360b*/
    *(_QWORD *)(a1 + 24) = v9; /*0x10066360f*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10066361d*/
    v12 = 1; /*0x100663620*/
    goto LABEL_16; /*0x100663622*/
  }
  v80 = v71; /*0x1006634fe*/
  v39[0] = v71; /*0x100663502*/
  v39[1] = v72; /*0x100663509*/
  keyring::Entry::get_password::h20b0e49ffa950a3a(v65, v39); /*0x100663520*/
  if ( v65[0] != 0x8000000000000007LL ) /*0x10066353d*/
  {
    if ( v65[0] != 0x8000000000000002LL ) /*0x10066362e*/
    {
      v73[2] = v65[5]; /*0x1006636db*/
      v73[1] = v65[4]; /*0x1006636e9*/
      v73[0] = v65[3]; /*0x1006636f7*/
      v72 = v65[2]; /*0x100663705*/
      v71 = v65[1]; /*0x10066371a*/
      v70 = v65[0]; /*0x100663721*/
      v56 = &v70; /*0x100663728*/
      v57 = _$LT$keyring..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h70402bfb44a0dc57; /*0x100663736*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v38, (char *)&loc_1017C2DAA + 1, &v56); /*0x100663752*/
      *(_QWORD *)(a1 + 32) = v38[2]; /*0x10066375e*/
      v18 = v38[0]; /*0x100663762*/
      *(_QWORD *)(a1 + 24) = v38[1]; /*0x100663770*/
      *(_QWORD *)(a1 + 16) = v18; /*0x100663774*/
      *(_QWORD *)(a1 + 8) = 10; /*0x100663778*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100663780*/
      core::ptr::drop_in_place$LT$keyring..error..Error$GT$::hc4c378876bea7ebc(&v70); /*0x10066378a*/
      v12 = 1; /*0x10066378f*/
      v13 = *(void (__fastcall **)(__int64, double))v9; /*0x100663791*/
      if ( !*(_QWORD *)v9 ) /*0x100663797*/
        goto LABEL_14; /*0x100663797*/
      goto LABEL_13; /*0x100663797*/
    }
    v14 = codexmate_lib::core::voice::llm::LlmConfig::is_configured::h23c56cc13cc1dc96(&v46); /*0x10066363b*/
    *(_QWORD *)(a1 + 16) = v79; /*0x100663644*/
    v15 = v77; /*0x100663648*/
    *(_QWORD *)(a1 + 8) = v78; /*0x100663650*/
    *(_QWORD *)a1 = v15; /*0x100663654*/
    v16 = v51; /*0x10066365e*/
    *(_QWORD *)(a1 + 48) = v50; /*0x100663665*/
    *(_QWORD *)(a1 + 56) = v16; /*0x100663669*/
    *(_QWORD *)(a1 + 64) = v52; /*0x100663674*/
    v17 = v53; /*0x100663678*/
    *(_QWORD *)(a1 + 80) = v54; /*0x100663686*/
    *(_QWORD *)(a1 + 72) = v17; /*0x10066368a*/
    *(_QWORD *)(a1 + 88) = v55; /*0x100663695*/
    *(_QWORD *)(a1 + 24) = 0; /*0x100663699*/
    *(_QWORD *)(a1 + 32) = 1; /*0x1006636a1*/
    *(_QWORD *)(a1 + 40) = 0; /*0x1006636a9*/
    *(_BYTE *)(a1 + 96) = v14; /*0x1006636b1*/
    v12 = 0; /*0x1006636b5*/
    core::ptr::drop_in_place$LT$keyring..error..Error$GT$::hc4c378876bea7ebc(v65); /*0x1006636be*/
    goto LABEL_10; /*0x1006636be*/
  }
  v10 = v65[1]; /*0x100663543*/
  v65[0] = v65[2]; /*0x100663558*/
  v65[1] = v65[3]; /*0x10066355f*/
  v65[2] = 0; /*0x100663566*/
  v65[3] = 0; /*0x100663571*/
  v74 = v65[0]; /*0x10066357c*/
  v65[4] = v65[0]; /*0x100663580*/
  v65[5] = v65[1]; /*0x100663587*/
  serde_json::de::from_trait::hf10a758210a3c2ce(&v70, v65); /*0x10066359c*/
  v11 = v71; /*0x1006635a8*/
  if ( v70 == 0x8000000000000000LL ) /*0x1006635b2*/
  {
    *(_QWORD *)(a1 + 8) = 3; /*0x1006635b8*/
    *(_QWORD *)(a1 + 16) = v11; /*0x1006635c0*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006635c4*/
    v12 = 1; /*0x1006635c7*/
    if ( v10 ) /*0x1006635cc*/
    {
      a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v10, 1); /*0x1006635de*/
      v13 = *(void (__fastcall **)(__int64, double))v9; /*0x1006635e3*/
      if ( !*(_QWORD *)v9 ) /*0x1006635e3*/
        goto LABEL_14; /*0x1006635e9*/
      goto LABEL_13; /*0x1006635e9*/
    }
LABEL_10:
    v13 = *(void (__fastcall **)(__int64, double))v9; /*0x1006636c3*/
    if ( !*(_QWORD *)v9 ) /*0x1006636c3*/
    {
LABEL_14:
      v19 = *(_QWORD *)(v9 + 8); /*0x10066379f*/
      if ( v19 ) /*0x1006637a6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v19, *(_QWORD *)(v9 + 16)); /*0x1006637b0*/
LABEL_16:
      if ( v46 ) /*0x1006637bf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1); /*0x1006637cd*/
      if ( v48 ) /*0x1006637dc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x1006637ea*/
      if ( v12 ) /*0x1006637f1*/
      {
        if ( v50 ) /*0x1006637fd*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x10066380b*/
        if ( v53 ) /*0x10066381a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v53, 1); /*0x100663828*/
        v20 = v77; /*0x10066382d*/
        if ( v77 ) /*0x100663834*/
        {
          v21 = v78; /*0x100663836*/
LABEL_27:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x10066383a*/
          return a1; /*0x10066383f*/
        }
      }
      return a1; /*0x100663834*/
    }
LABEL_13:
    v13(v80, a4); /*0x100663799*/
    goto LABEL_14; /*0x10066379d*/
  }
  v76 = v70; /*0x100663859*/
  v75 = v10; /*0x10066385d*/
  v23 = v72; /*0x100663861*/
  v61 = v73[0]; /*0x10066386f*/
  v63 = v73[1]; /*0x10066387d*/
  v24 = v73[2]; /*0x100663884*/
  v62 = v73[3]; /*0x100663892*/
  v64 = v73[4]; /*0x1006638a0*/
  v25 = v73[5]; /*0x1006638a7*/
  v69 = v71; /*0x1006638ab*/
  v26 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v71, v72); /*0x1006638b2*/
  v28 = v27; /*0x1006638b7*/
  if ( v27 < 0 ) /*0x1006638bd*/
  {
    v29 = 0; /*0x1006638bf*/
    goto LABEL_31; /*0x1006638bf*/
  }
  v42 = v24; /*0x1006638cf*/
  if ( v27 ) /*0x1006638d9*/
  {
    __src = v26; /*0x1006638db*/
    v43 = v25; /*0x1006638e2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v23); /*0x1006638e9*/
    v29 = 1; /*0x1006638ee*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1); /*0x1006638fc*/
    if ( !v30 ) /*0x100663904*/
LABEL_31:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v29, v28); /*0x1006638c2*/
    v31 = v30; /*0x100663906*/
    v25 = v43; /*0x100663909*/
    v26 = __src; /*0x100663910*/
  }
  else
  {
    v31 = 1; /*0x100663919*/
  }
  memcpy((void *)v31, v26, v28); /*0x100663927*/
  v66 = v28; /*0x10066392c*/
  v67 = v31; /*0x100663933*/
  v68 = v28; /*0x10066393a*/
  v70 = v61; /*0x100663948*/
  v71 = v63; /*0x100663956*/
  v72 = v42; /*0x100663964*/
  v32 = v51; /*0x10066396b*/
  codexmate_lib::core::voice::llm::fallback_trimmed::h679e1e4a37a82b57(v60, &v70, v51, v52); /*0x10066398a*/
  v70 = v62; /*0x100663996*/
  v71 = v64; /*0x1006639a4*/
  v72 = v25; /*0x1006639ab*/
  v33 = v54; /*0x1006639b2*/
  v34 = v75; /*0x1006639d1*/
  v35 = codexmate_lib::core::voice::llm::fallback_trimmed::h679e1e4a37a82b57(v59, &v70, v54, v55); /*0x1006639d5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v45, &v77); /*0x1006639e5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v41, &v77); /*0x1006639f5*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v40, &v66); /*0x100663a08*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v56, v60); /*0x100663a1b*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v65, v59); /*0x100663a2e*/
  v72 = v41[2]; /*0x100663a3a*/
  v71 = v41[1]; /*0x100663a4f*/
  v70 = v41[0]; /*0x100663a56*/
  v73[0] = v40[0]; /*0x100663a6b*/
  v73[1] = v40[1]; /*0x100663a72*/
  v73[2] = v40[2]; /*0x100663a80*/
  v73[3] = v56; /*0x100663a95*/
  v73[4] = v57; /*0x100663a9c*/
  v73[5] = v58; /*0x100663aaa*/
  v73[8] = v65[2]; /*0x100663ab5*/
  v73[7] = v65[1]; /*0x100663ac7*/
  v73[6] = v65[0]; /*0x100663acb*/
  v36 = codexmate_lib::core::voice::llm::LlmConfig::is_configured::h23c56cc13cc1dc96(&v70); /*0x100663ad6*/
  v65[5] = v68; /*0x100663ae2*/
  v65[4] = v67; /*0x100663af7*/
  v65[3] = v66; /*0x100663afe*/
  v65[6] = v60[0]; /*0x100663b13*/
  v65[7] = v60[1]; /*0x100663b1a*/
  v65[8] = v60[2]; /*0x100663b28*/
  v65[9] = v59[0]; /*0x100663b3d*/
  v65[10] = v59[1]; /*0x100663b44*/
  v65[11] = v59[2]; /*0x100663b52*/
  v65[2] = v45[2]; /*0x100663b60*/
  v65[1] = v45[1]; /*0x100663b75*/
  v65[0] = v45[0]; /*0x100663b7c*/
  qmemcpy((void *)a1, v65, 0x60u); /*0x100663b92*/
  *(_BYTE *)(a1 + 96) = v36; /*0x100663b95*/
  if ( v76 ) /*0x100663ba0*/
    v35 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v76, 1); /*0x100663bae*/
  if ( v34 ) /*0x100663bb6*/
    v35 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v34, 1); /*0x100663bc4*/
  if ( *(_QWORD *)v9 ) /*0x100663bc9*/
    (*(void (__fastcall **)(__int64, double))v9)(v80, v35); /*0x100663bd5*/
  v37 = *(_QWORD *)(v9 + 8); /*0x100663bd7*/
  if ( v37 ) /*0x100663bde*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v37, *(_QWORD *)(v9 + 16)); /*0x100663be8*/
  if ( v46 ) /*0x100663bf7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v46, 1); /*0x100663c05*/
  if ( v48 ) /*0x100663c14*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x100663c22*/
  if ( v50 ) /*0x100663c31*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v50, 1); /*0x100663c3b*/
  if ( v53 ) /*0x100663c4a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v53, 1); /*0x100663c54*/
  if ( v77 ) /*0x100663c60*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x100663c6b*/
  if ( v70 ) /*0x100663c7a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v70, 1); /*0x100663c88*/
  if ( v73[0] ) /*0x100663c97*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[1], v73[0], 1); /*0x100663ca5*/
  if ( v73[3] ) /*0x100663cb4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[4], v73[3], 1); /*0x100663cc2*/
  v20 = v73[6]; /*0x100663cc7*/
  if ( v73[6] ) /*0x100663cce*/
  {
    v21 = v73[7]; /*0x100663cd4*/
    goto LABEL_27; /*0x100663cd8*/
  }
  return a1; /*0x100663847*/
}