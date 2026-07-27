// __ZN13codexmate_lib4core5voice3llm11save_config @ 0x100662120 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::llm::save_config::h1de424331238f291(_QWORD *a1, __int64 *a2, double a3)
{
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  const void *v9; // rax
  __int64 v10; // rdx
  size_t v11; // r13
  __int64 v12; // r12
  const void *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  _QWORD *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r13
  char *v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  void (__fastcall **v33)(__int64); // r13
  void (__fastcall *v34)(__int64); // rsi
  char v35; // r14
  _QWORD *v36; // rax
  void (__fastcall **v37)(__int64); // r13
  void (__fastcall *v38)(__int64); // rsi
  _QWORD v39[3]; // [rsp+0h] [rbp-240h] BYREF
  __int64 v40; // [rsp+18h] [rbp-228h]
  __int64 v41; // [rsp+20h] [rbp-220h]
  __int64 v42; // [rsp+30h] [rbp-210h]
  _QWORD *v43; // [rsp+38h] [rbp-208h]
  __int64 v44; // [rsp+40h] [rbp-200h]
  __int64 v45; // [rsp+48h] [rbp-1F8h]
  __int64 v46; // [rsp+50h] [rbp-1F0h]
  __int64 v47; // [rsp+58h] [rbp-1E8h]
  __int64 v48; // [rsp+60h] [rbp-1E0h]
  _QWORD *v49; // [rsp+68h] [rbp-1D8h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+70h] [rbp-1D0h]
  __int64 v51; // [rsp+78h] [rbp-1C8h]
  __int64 v52; // [rsp+80h] [rbp-1C0h] BYREF
  _QWORD *v53; // [rsp+88h] [rbp-1B8h]
  __int64 v54; // [rsp+90h] [rbp-1B0h]
  __int64 v55; // [rsp+98h] [rbp-1A8h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-1A0h]
  __int64 v57; // [rsp+A8h] [rbp-198h]
  __int64 v58; // [rsp+B0h] [rbp-190h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-188h]
  __int64 v60; // [rsp+C0h] [rbp-180h]
  __int64 v61; // [rsp+C8h] [rbp-178h]
  __int64 v62; // [rsp+D0h] [rbp-170h]
  __int64 v63; // [rsp+D8h] [rbp-168h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-160h]
  __int64 v65; // [rsp+E8h] [rbp-158h]
  __int64 v66; // [rsp+F0h] [rbp-150h] BYREF
  __int64 v67; // [rsp+F8h] [rbp-148h]
  __int64 v68; // [rsp+100h] [rbp-140h]
  size_t v69; // [rsp+108h] [rbp-138h] BYREF
  __int64 v70; // [rsp+110h] [rbp-130h]
  size_t v71; // [rsp+118h] [rbp-128h]
  _QWORD *v72; // [rsp+120h] [rbp-120h]
  _QWORD v73[12]; // [rsp+128h] [rbp-118h] BYREF
  __int64 v74; // [rsp+188h] [rbp-B8h] BYREF
  _QWORD *v75; // [rsp+190h] [rbp-B0h]
  __int64 v76; // [rsp+198h] [rbp-A8h]
  __int64 v77; // [rsp+1A0h] [rbp-A0h]
  __int64 v78; // [rsp+1A8h] [rbp-98h]
  __int64 v79; // [rsp+1B0h] [rbp-90h]
  _QWORD *v80; // [rsp+1B8h] [rbp-88h] BYREF
  __int64 (__fastcall *v81)(); // [rsp+1C0h] [rbp-80h]
  __int64 v82; // [rsp+1C8h] [rbp-78h]
  __int64 v83; // [rsp+1D0h] [rbp-70h]
  _QWORD *v84; // [rsp+1D8h] [rbp-68h] BYREF
  __int64 (__fastcall *v85)(); // [rsp+1E0h] [rbp-60h]
  __int64 v86; // [rsp+1E8h] [rbp-58h]
  __int64 v87; // [rsp+1F0h] [rbp-50h] BYREF
  __int64 v88; // [rsp+1F8h] [rbp-48h]
  __int64 v89; // [rsp+200h] [rbp-40h]
  void (__fastcall **v90)(__int64); // [rsp+208h] [rbp-38h]
  __int64 v91; // [rsp+210h] [rbp-30h]

  v5 = a2[2]; /*0x10066213e*/
  v61 = a2[1]; /*0x100662146*/
  codexmate_lib::core::voice::llm::normalize_provider::hc20fe0bd6fa0e76d(&v87, v61, v5); /*0x10066214d*/
  codexmate_lib::core::voice::llm::provider_defaults::h31ef2b5ccbbfd371(v39, v88, v89); /*0x100662161*/
  v6 = a2[4]; /*0x100662166*/
  v7 = a2[5]; /*0x10066216a*/
  v8 = a2[4]; /*0x10066216e*/
  v9 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v8, v7); /*0x100662171*/
  v11 = v10; /*0x100662176*/
  if ( v10 < 0 ) /*0x10066217c*/
  {
    v12 = 0; /*0x10066217e*/
    goto LABEL_3; /*0x10066217e*/
  }
  v62 = v6; /*0x100662191*/
  if ( v10 ) /*0x10066219b*/
  {
    v72 = a1; /*0x10066219d*/
    v13 = v9; /*0x1006621a4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v7); /*0x1006621a7*/
    v12 = 1; /*0x1006621ac*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x1006621ba*/
    if ( !v14 ) /*0x1006621c2*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x100662181*/
    v15 = v14; /*0x1006621c4*/
    v9 = v13; /*0x1006621c7*/
    a1 = v72; /*0x1006621ca*/
  }
  else
  {
    v15 = 1; /*0x1006621d3*/
  }
  memcpy((void *)v15, v9, v11); /*0x1006621e2*/
  v69 = v11; /*0x1006621e7*/
  v70 = v15; /*0x1006621ee*/
  v71 = v11; /*0x1006621f5*/
  v72 = v43; /*0x100662215*/
  codexmate_lib::core::voice::llm::fallback_trimmed::h679e1e4a37a82b57(&v66, a2 + 6, v43, v44); /*0x10066221c*/
  v16 = a2 + 9; /*0x100662221*/
  v17 = v46; /*0x100662225*/
  codexmate_lib::core::voice::llm::fallback_trimmed::h679e1e4a37a82b57(&v63, a2 + 9, v46, v47); /*0x10066223d*/
  if ( !v68 ) /*0x10066224a*/
  {
    v18 = v89; /*0x10066228a*/
LABEL_15:
    if ( v18 != 6 ) /*0x100662292*/
      goto LABEL_24; /*0x100662292*/
    goto LABEL_16; /*0x100662292*/
  }
  v18 = v89; /*0x100662254*/
  if ( !v65 ) /*0x100662258*/
    goto LABEL_15; /*0x100662258*/
  if ( v89 == 6 ) /*0x10066225e*/
  {
    if ( v11 || !(*(_DWORD *)v88 ^ 0x616C6C6F | *(unsigned __int16 *)(v88 + 4) ^ 0x616D) ) /*0x100662281*/
      goto LABEL_20; /*0x100662283*/
LABEL_16:
    if ( !(*(_DWORD *)v88 ^ 0x616C6C6F | *(unsigned __int16 *)(v88 + 4) ^ 0x616D) ) /*0x1006622ac*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v63, v16); /*0x1006622b4*/
      v19 = 38; /*0x1006622b9*/
      v20 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1); /*0x1006622c9*/
      if ( v20 ) /*0x1006622d1*/
      {
        qmemcpy(v20, "LLM config requires model and Base URL", 38); /*0x100662319*/
        v21 = 38; /*0x10066231c*/
LABEL_26:
        a1[1] = 9; /*0x1006624f5*/
        a1[2] = v21; /*0x1006624fd*/
        a1[3] = v20; /*0x100662501*/
        a1[4] = v21; /*0x100662505*/
        *a1 = 0x8000000000000000LL; /*0x100662513*/
        goto LABEL_27; /*0x100662513*/
      }
      goto LABEL_81; /*0x1006622d1*/
    }
LABEL_24:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v63, v16); /*0x10066247a*/
    v19 = 48; /*0x10066247f*/
    v20 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1); /*0x10066248f*/
    if ( v20 ) /*0x100662497*/
    {
      qmemcpy(v20, "LLM config requires API Key, model, and Base URL", 48); /*0x1006624ed*/
      v21 = 48; /*0x1006624f0*/
      goto LABEL_26; /*0x1006624f0*/
    }
LABEL_81:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19); /*0x100662b64*/
  }
  if ( !v11 ) /*0x100662329*/
    goto LABEL_24; /*0x100662329*/
LABEL_20:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v84, &v69); /*0x10066232f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v74, &v66); /*0x100662350*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v73, &v63); /*0x100662366*/
  v51 = v86; /*0x10066236f*/
  v50 = v85; /*0x10066237e*/
  v49 = v84; /*0x100662385*/
  v52 = v74; /*0x10066239a*/
  v53 = v75; /*0x1006623a1*/
  v54 = v76; /*0x1006623af*/
  v55 = v73[0]; /*0x1006623c4*/
  v56 = v73[1]; /*0x1006623cb*/
  v57 = v73[2]; /*0x1006623d9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v73, &v63); /*0x1006623e0*/
  v22 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1006623ef*/
  if ( !v22 ) /*0x1006623f7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100662b7d*/
  v73[0] = 128; /*0x1006623fd*/
  v73[1] = v22; /*0x100662408*/
  v84 = v73; /*0x10066240f*/
  *v22 = 123; /*0x100662413*/
  v73[2] = 1; /*0x100662416*/
  LOWORD(v74) = 256; /*0x100662421*/
  v75 = &v84; /*0x10066242a*/
  v23 = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10066244b*/
          &v74,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_277,
          6,
          &v49);
  if ( v23 ) /*0x10066245d*/
    goto LABEL_49; /*0x10066245d*/
  if ( (_BYTE)v74 ) /*0x10066246a*/
    goto LABEL_23; /*0x10066246a*/
  v23 = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v74, "model", 5, &v52); /*0x100662659*/
  if ( v23 ) /*0x100662661*/
    goto LABEL_49; /*0x100662661*/
  if ( (_BYTE)v74 ) /*0x100662700*/
  {
LABEL_23:
    v23 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100662470*/
    goto LABEL_49; /*0x100662475*/
  }
  v23 = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100662720*/
          &v74,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_400,
          7,
          &v55);
  if ( v23 ) /*0x100662728*/
  {
LABEL_49:
    if ( v73[0] ) /*0x100662671*/
    {
      v28 = v23; /*0x10066267a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[1], v73[0], 1); /*0x100662682*/
      v23 = v28; /*0x100662687*/
    }
    goto LABEL_51; /*0x100662687*/
  }
  if ( (v74 & 1) == 0 && BYTE1(v74) ) /*0x10066273e*/
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100662756*/
      *v75,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
      1);
  v29 = v73[0]; /*0x10066275e*/
  v23 = v73[1]; /*0x100662765*/
  if ( v73[0] != 0x8000000000000000LL ) /*0x100662772*/
  {
    v83 = v73[1]; /*0x10066277c*/
    v48 = v73[2]; /*0x100662787*/
    codexmate_lib::core::voice::llm::keyring_entry::h298f9575b492acea(v73, v88, v89); /*0x10066279d*/
    v30 = v73[0]; /*0x1006627a2*/
    v31 = v73[1]; /*0x1006627a9*/
    v32 = v73[2]; /*0x1006627b0*/
    if ( v73[0] == 11 ) /*0x1006627bb*/
    {
      v91 = v73[1]; /*0x1006627c1*/
      v58 = v73[1]; /*0x1006627c5*/
      v90 = (void (__fastcall **)(__int64))v73[2]; /*0x1006627cc*/
      v59 = v73[2]; /*0x1006627d0*/
      keyring::Entry::set_password::hc32136d3c2593a9f(&v74, &v58, v83, v48); /*0x1006627f0*/
      if ( v74 == 0x8000000000000007LL ) /*0x100662800*/
      {
        v33 = v90; /*0x100662806*/
        if ( *v90 ) /*0x10066280a*/
          (*v90)(v91); /*0x100662817*/
        v34 = v33[1]; /*0x100662819*/
        if ( v34 ) /*0x100662820*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v34, v33[2]); /*0x10066282a*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v58, &v87); /*0x10066283a*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v80, &v69); /*0x10066284d*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v84, &v66); /*0x10066285d*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v74, &v63); /*0x100662870*/
        v73[2] = v60; /*0x10066287c*/
        v73[1] = v59; /*0x100662891*/
        v73[0] = v58; /*0x100662898*/
        v73[3] = v80; /*0x1006628aa*/
        v73[4] = v81; /*0x1006628b1*/
        v73[5] = v82; /*0x1006628bc*/
        v73[6] = v84; /*0x1006628cb*/
        v73[7] = v85; /*0x1006628d2*/
        v73[8] = v86; /*0x1006628dd*/
        v73[11] = v76; /*0x1006628eb*/
        v73[10] = v75; /*0x100662900*/
        v73[9] = v74; /*0x100662907*/
        v35 = codexmate_lib::core::voice::llm::LlmConfig::is_configured::h23c56cc13cc1dc96(v73); /*0x10066291a*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..voice..llm..LlmConfig$GT$::h5bcc91e8bcb6083b(v73); /*0x100662924*/
        v73[2] = v89; /*0x10066292d*/
        v73[1] = v88; /*0x10066293c*/
        v73[0] = v87; /*0x100662943*/
        v73[3] = v69; /*0x100662958*/
        v73[4] = v70; /*0x10066295f*/
        v73[5] = v71; /*0x10066296d*/
        v73[6] = v66; /*0x100662982*/
        v73[7] = v67; /*0x100662989*/
        v73[8] = v68; /*0x100662997*/
        v73[11] = v65; /*0x1006629a5*/
        v73[10] = v64; /*0x1006629ba*/
        v73[9] = v63; /*0x1006629c1*/
        qmemcpy(a1, v73, 0x60u); /*0x1006629d7*/
        *((_BYTE *)a1 + 96) = v35; /*0x1006629da*/
        if ( v29 ) /*0x1006629e1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v29, 1); /*0x1006629ef*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..voice..llm..StoredLlmConfig$GT$::h85cb230b72897374(&v49); /*0x1006629fb*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..voice..llm..LlmConfig$GT$::h5bcc91e8bcb6083b(v39); /*0x100662a07*/
        v24 = *a2; /*0x100662a0c*/
        v25 = v62; /*0x100662a12*/
        if ( *a2 ) /*0x100662a0c*/
          goto LABEL_44; /*0x100662a19*/
        goto LABEL_45; /*0x100662a19*/
      }
      v73[5] = v79; /*0x100662a52*/
      v73[4] = v78; /*0x100662a60*/
      v73[3] = v77; /*0x100662a6e*/
      v73[2] = v76; /*0x100662a7c*/
      v73[1] = v75; /*0x100662a91*/
      v73[0] = v74; /*0x100662a98*/
      v80 = v73; /*0x100662aa6*/
      v81 = _$LT$keyring..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h70402bfb44a0dc57; /*0x100662ab4*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v84, &unk_1017C2D4F, &v80); /*0x100662aca*/
      v80 = v84; /*0x100662ad7*/
      v81 = v85; /*0x100662ade*/
      v82 = v86; /*0x100662ae6*/
      core::ptr::drop_in_place$LT$keyring..error..Error$GT$::hc4c378876bea7ebc(v73); /*0x100662af1*/
      a1[4] = v82; /*0x100662afa*/
      v36 = v80; /*0x100662afe*/
      a1[3] = v81; /*0x100662b09*/
      a1[2] = v36; /*0x100662b0d*/
      a1[1] = 10; /*0x100662b11*/
      *a1 = 0x8000000000000000LL; /*0x100662b19*/
      v37 = v90; /*0x100662b1c*/
      if ( *v90 ) /*0x100662b20*/
        (*v90)(v91); /*0x100662b2d*/
      v38 = v37[1]; /*0x100662b2f*/
      if ( v38 ) /*0x100662b36*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v38, v37[2]); /*0x100662b40*/
    }
    else
    {
      qmemcpy(a1 + 4, &v73[3], 0x48u); /*0x100662a34*/
      a1[1] = v30; /*0x100662a37*/
      a1[2] = v31; /*0x100662a3b*/
      a1[3] = v32; /*0x100662a3f*/
      *a1 = 0x8000000000000000LL; /*0x100662a43*/
    }
    if ( v29 ) /*0x100662b48*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v29, 1); /*0x100662b5a*/
    goto LABEL_52; /*0x100662b5f*/
  }
LABEL_51:
  a1[1] = 3; /*0x10066268a*/
  a1[2] = v23; /*0x100662692*/
  *a1 = 0x8000000000000000LL; /*0x100662696*/
LABEL_52:
  if ( v49 ) /*0x1006626a3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x1006626b1*/
  if ( v52 ) /*0x1006626c0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v52, 1); /*0x1006626ce*/
  if ( v55 ) /*0x1006626dd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x1006626ef*/
LABEL_27:
  if ( v63 ) /*0x100662520*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v63, 1); /*0x10066252e*/
  if ( v66 ) /*0x10066253d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x10066254b*/
  if ( v69 ) /*0x10066255a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x100662568*/
  if ( v39[0] ) /*0x100662577*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39[1], v39[0], 1); /*0x100662585*/
  if ( v40 ) /*0x100662594*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x1006625a2*/
  if ( v42 ) /*0x1006625b1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v42, 1); /*0x1006625bf*/
  if ( v45 ) /*0x1006625ce*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v45, 1); /*0x1006625d8*/
  if ( v87 ) /*0x1006625e4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x1006625ef*/
  v24 = *a2; /*0x1006625f4*/
  v25 = v62; /*0x1006625fa*/
  if ( *a2 ) /*0x1006625f4*/
LABEL_44:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v24, 1); /*0x100662603*/
LABEL_45:
  v26 = a2[3]; /*0x100662614*/
  if ( v26 ) /*0x10066261b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v26, 1); /*0x100662625*/
  return a1; /*0x10066262d*/
}