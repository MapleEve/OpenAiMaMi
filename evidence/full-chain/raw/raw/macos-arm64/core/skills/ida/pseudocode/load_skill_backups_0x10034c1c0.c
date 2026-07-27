// __ZN13codexmate_lib4core6skills18load_skill_backups @ 0x10034c1c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::skills::load_skill_backups::he1d89bed831be6a2(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r12
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  char *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdi
  size_t v25; // r15
  const void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  char *v32; // r14
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rax
  _QWORD __src[132]; // [rsp+0h] [rbp-1350h] BYREF
  volatile signed __int64 *__dst[132]; // [rsp+420h] [rbp-F30h] BYREF
  char *v40; // [rsp+840h] [rbp-B10h] BYREF
  __int64 v41; // [rsp+848h] [rbp-B08h]
  __int64 v42; // [rsp+C68h] [rbp-6E8h]
  char *v43; // [rsp+1090h] [rbp-2C0h]
  char v44; // [rsp+1098h] [rbp-2B8h]
  _QWORD v45[5]; // [rsp+10A0h] [rbp-2B0h] BYREF
  __int128 v46; // [rsp+10C8h] [rbp-288h]
  __int64 v47; // [rsp+10D8h] [rbp-278h]
  __m128i v48; // [rsp+10E0h] [rbp-270h] BYREF
  __int64 v49; // [rsp+10F0h] [rbp-260h]
  __int64 v50; // [rsp+10F8h] [rbp-258h]
  __int64 v51; // [rsp+1100h] [rbp-250h]
  __int64 v52; // [rsp+1108h] [rbp-248h]
  __int64 v53; // [rsp+1110h] [rbp-240h]
  __int64 v54; // [rsp+1118h] [rbp-238h]
  _QWORD v55[3]; // [rsp+1120h] [rbp-230h] BYREF
  _QWORD v56[2]; // [rsp+1138h] [rbp-218h] BYREF
  _BYTE v57[152]; // [rsp+1148h] [rbp-208h] BYREF
  __int64 v58; // [rsp+11E0h] [rbp-170h] BYREF
  __int64 v59; // [rsp+11E8h] [rbp-168h]
  __int64 v60; // [rsp+11F0h] [rbp-160h]
  __int64 v61; // [rsp+11F8h] [rbp-158h] BYREF
  __int64 v62; // [rsp+1200h] [rbp-150h]
  __int64 v63; // [rsp+1208h] [rbp-148h]
  __int64 v64; // [rsp+1210h] [rbp-140h]
  __int64 v65; // [rsp+1218h] [rbp-138h]
  __int64 v66; // [rsp+1220h] [rbp-130h]
  __int64 v67; // [rsp+1228h] [rbp-128h] BYREF
  __int64 v68; // [rsp+1230h] [rbp-120h]
  __int64 v69; // [rsp+1238h] [rbp-118h]
  __int64 v70; // [rsp+1240h] [rbp-110h] BYREF
  __int64 v71; // [rsp+1248h] [rbp-108h]
  __int64 v72; // [rsp+1250h] [rbp-100h]
  char *v73; // [rsp+1258h] [rbp-F8h]
  char v74; // [rsp+1260h] [rbp-F0h]
  __int64 v75; // [rsp+1268h] [rbp-E8h]
  __m128i v76; // [rsp+1270h] [rbp-E0h] BYREF
  __int128 v77; // [rsp+1280h] [rbp-D0h]
  __int64 v78; // [rsp+1290h] [rbp-C0h]
  __int64 v79; // [rsp+1298h] [rbp-B8h] BYREF
  void *v80; // [rsp+12A0h] [rbp-B0h]
  unsigned __int64 v81; // [rsp+12A8h] [rbp-A8h]
  __int64 v82; // [rsp+12B0h] [rbp-A0h]
  __int64 v83; // [rsp+12B8h] [rbp-98h]
  __int64 v84; // [rsp+12C0h] [rbp-90h]
  __int64 v85; // [rsp+12C8h] [rbp-88h]
  __int64 v86; // [rsp+12D0h] [rbp-80h]
  __int64 v87; // [rsp+12D8h] [rbp-78h] BYREF
  __int64 v88; // [rsp+12E0h] [rbp-70h]
  __int64 v89; // [rsp+12E8h] [rbp-68h]
  void *__s2; // [rsp+12F0h] [rbp-60h]
  __int64 v91; // [rsp+12F8h] [rbp-58h]
  __int64 v92; // [rsp+1300h] [rbp-50h]
  __int64 v93; // [rsp+1308h] [rbp-48h]
  __int64 v94; // [rsp+1310h] [rbp-40h]
  char v95; // [rsp+131Fh] [rbp-31h] BYREF
  _QWORD *v96; // [rsp+1320h] [rbp-30h]

  __src[101] = 0; /*0x10034c1d4*/
  v4 = a1; /*0x10034c1e9*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v40, a2, a3); /*0x10034c1f3*/
  if ( (_DWORD)v40 == 1 ) /*0x10034c1ff*/
  {
    if ( (v41 & 3) == 1 ) /*0x10034c210*/
    {
      v5 = v41 - 1; /*0x10034c212*/
      v6 = *(_QWORD *)(v41 - 1); /*0x10034c216*/
      v7 = *(_QWORD *)(v41 + 7); /*0x10034c21a*/
      if ( *(_QWORD *)v7 ) /*0x10034c21e*/
        (*(void (__fastcall **)(__int64))v7)(v6); /*0x10034c229*/
      v8 = *(_QWORD *)(v7 + 8); /*0x10034c22b*/
      if ( v8 ) /*0x10034c232*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x10034c23b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x10034c24d*/
    }
    a1[1] = 0; /*0x10034c252*/
    a1[2] = 8; /*0x10034c25b*/
    a1[3] = 0; /*0x10034c264*/
    goto LABEL_74; /*0x10034c26d*/
  }
  v79 = 0; /*0x10034c272*/
  v80 = (void *)8; /*0x10034c27d*/
  v81 = 0; /*0x10034c288*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v40, a2, a3); /*0x10034c2a0*/
  v9 = v40; /*0x10034c2ac*/
  v73 = v40; /*0x10034c2b3*/
  v74 = v41; /*0x10034c2ba*/
  if ( (_BYTE)v41 == 2 ) /*0x10034c2c3*/
  {
LABEL_66:
    if ( ((unsigned __int8)v9 & 3) == 1 ) /*0x10034c97e*/
    {
      v32 = v9 - 1; /*0x10034c980*/
      v33 = *(_QWORD *)(v9 - 1); /*0x10034c984*/
      v34 = *(_QWORD *)(v9 + 7); /*0x10034c988*/
      if ( *(_QWORD *)v34 ) /*0x10034c98c*/
        (*(void (__fastcall **)(__int64))v34)(v33); /*0x10034c997*/
      v35 = *(_QWORD *)(v34 + 8); /*0x10034c999*/
      if ( v35 ) /*0x10034c9a0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16)); /*0x10034c9a9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 24, 8); /*0x10034c9bb*/
    }
    goto LABEL_72; /*0x10034c9bb*/
  }
  v96 = a1; /*0x10034c2c9*/
  v40 = nullptr; /*0x10034c2cd*/
  v42 = 0; /*0x10034c2d8*/
  v43 = v9; /*0x10034c2e3*/
  v44 = v41; /*0x10034c2ea*/
  while ( 1 ) /*0x10034c316*/
  {
    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb16283f610dc29bd( /*0x10034c316*/
      __src,
      &v40);
    if ( !__src[0] ) /*0x10034c323*/
      break; /*0x10034c323*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x10034c334*/
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v87, __dst); /*0x10034c33f*/
    std::fs::DirEntry::file_type::hdd298e01714fd423(v57, __dst); /*0x10034c34e*/
    if ( v57[0] ) /*0x10034c35a*/
    {
      if ( (v57[8] & 3) != 1 ) /*0x10034c36b*/
        goto LABEL_25; /*0x10034c36b*/
      v10 = *(_QWORD *)&v57[8] - 1LL; /*0x10034c371*/
      v11 = *(_QWORD *)(*(_QWORD *)&v57[8] - 1LL); /*0x10034c375*/
      v12 = *(_QWORD *)(*(_QWORD *)&v57[8] + 7LL); /*0x10034c379*/
      if ( *(_QWORD *)v12 ) /*0x10034c37d*/
        (*(void (__fastcall **)(__int64))v12)(v11); /*0x10034c388*/
      v13 = *(_QWORD *)(v12 + 8); /*0x10034c38a*/
      if ( v13 ) /*0x10034c391*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x10034c39a*/
      v14 = 24; /*0x10034c39f*/
      v15 = 8; /*0x10034c3a4*/
      goto LABEL_24; /*0x10034c3a9*/
    }
    if ( (*(_WORD *)&v57[2] & 0xF000) != 0x4000 ) /*0x10034c3c1*/
      goto LABEL_25; /*0x10034c3c1*/
    v16 = v89; /*0x10034c3cb*/
    v94 = v88; /*0x10034c3dc*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v70, v88, v89, "metadata.json", 13); /*0x10034c3ea*/
    v10 = v71; /*0x10034c3ef*/
    v17 = v72; /*0x10034c3f6*/
    std::sys::fs::metadata::h32fa16d3052ea535(v57, v71, v72); /*0x10034c40a*/
    if ( v57[0] ) /*0x10034c416*/
    {
      if ( (v57[8] & 3) != 1 ) /*0x10034c427*/
      {
        v14 = v70; /*0x10034c42d*/
        if ( v70 ) /*0x10034c437*/
          goto LABEL_23; /*0x10034c437*/
LABEL_25:
        if ( v87 ) /*0x10034c458*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v87, 1); /*0x10034c463*/
        goto LABEL_27; /*0x10034c463*/
      }
      v94 = *(_QWORD *)&v57[8] - 1LL; /*0x10034c717*/
      v28 = *(_QWORD *)(*(_QWORD *)&v57[8] - 1LL); /*0x10034c71b*/
      v29 = *(_QWORD *)(*(_QWORD *)&v57[8] + 7LL); /*0x10034c71f*/
      if ( *(_QWORD *)v29 ) /*0x10034c723*/
        (*(void (__fastcall **)(__int64))v29)(v28); /*0x10034c72e*/
      v30 = *(_QWORD *)(v29 + 8); /*0x10034c730*/
      if ( v30 ) /*0x10034c737*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v30, *(_QWORD *)(v29 + 16)); /*0x10034c740*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, 24, 8); /*0x10034c753*/
      v14 = v70; /*0x10034c758*/
      if ( !v70 ) /*0x10034c762*/
        goto LABEL_25; /*0x10034c762*/
LABEL_23:
      v15 = 1; /*0x10034c439*/
LABEL_24:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v14, v15); /*0x10034c43e*/
      goto LABEL_25; /*0x10034c441*/
    }
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v61, v10, v17); /*0x10034c493*/
    v82 = v61; /*0x10034c4a9*/
    if ( v61 == 0x8000000000000000LL ) /*0x10034c4b3*/
    {
      if ( v70 ) /*0x10034c4c3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v70, 1); /*0x10034c4cd*/
      if ( v87 ) /*0x10034c4d9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v87, 1); /*0x10034c4e4*/
      if ( (v62 & 3) == 1 ) /*0x10034c503*/
      {
        v18 = v62 - 1; /*0x10034c509*/
        v19 = *(_QWORD *)(v62 - 1); /*0x10034c50d*/
        v20 = *(_QWORD *)(v62 + 7); /*0x10034c511*/
        if ( *(_QWORD *)v20 ) /*0x10034c515*/
          (*(void (__fastcall **)(__int64))v20)(v19); /*0x10034c520*/
        v21 = *(_QWORD *)(v20 + 8); /*0x10034c522*/
        if ( v21 ) /*0x10034c529*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v21, *(_QWORD *)(v20 + 16)); /*0x10034c532*/
        v22 = 24; /*0x10034c537*/
        v23 = 8; /*0x10034c53c*/
        v24 = v18; /*0x10034c541*/
        goto LABEL_51; /*0x10034c544*/
      }
    }
    else
    {
      *(_QWORD *)v57 = v62; /*0x10034c557*/
      *(_QWORD *)&v57[8] = v63; /*0x10034c55e*/
      *(_QWORD *)&v57[24] = 0; /*0x10034c56c*/
      *(_QWORD *)&v57[16] = 0; /*0x10034c574*/
      v78 = v62; /*0x10034c57b*/
      *(_QWORD *)&v57[32] = v62; /*0x10034c582*/
      *(_QWORD *)&v57[40] = v63; /*0x10034c589*/
      serde_json::de::from_trait::h82a598de75e5a628(v45, v57, v62, &v57[16]); /*0x10034c59e*/
      if ( v45[0] == 0x8000000000000000LL ) /*0x10034c5b4*/
      {
        core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..skills..SkillBackupMetadata$C$serde_json..error..Error$GT$$GT$::hbeea67cfc3aada8a(v45); /*0x10034c5bd*/
      }
      else
      {
        v91 = v45[0]; /*0x10034c5ce*/
        __s2 = (void *)v45[1]; /*0x10034c5d9*/
        v25 = v45[2]; /*0x10034c5dd*/
        v92 = v45[3]; /*0x10034c5eb*/
        v83 = v45[4]; /*0x10034c5f6*/
        v77 = v46; /*0x10034c604*/
        v84 = v47; /*0x10034c612*/
        v76 = _mm_loadu_si128(&v48); /*0x10034c621*/
        v85 = v49; /*0x10034c630*/
        v64 = v50; /*0x10034c63e*/
        v93 = v51; /*0x10034c64c*/
        v86 = v52; /*0x10034c657*/
        v66 = v53; /*0x10034c662*/
        v65 = v54; /*0x10034c670*/
        v26 = (const void *)std::path::Path::file_name::hf6c2daad91e50ebf(v94, v16); /*0x10034c67e*/
        if ( v27 == v25 && v26 != nullptr && !memcmp(v26, __s2, v25) ) /*0x10034c6a4*/
        {
          std::path::Path::_join::hb1a495d4f06b13b8(&v58, v94, v16, &anon_b0ee9adff4519c22b647af231a5a39fa_736, 5); /*0x10034c788*/
          v75 = v59; /*0x10034c79b*/
          v56[0] = v59; /*0x10034c7a2*/
          v56[1] = v60; /*0x10034c7a9*/
          v67 = 0; /*0x10034c7b0*/
          v68 = 1; /*0x10034c7bb*/
          v69 = 0; /*0x10034c7c6*/
          v55[2] = 1610612768; /*0x10034c7d1*/
          v55[0] = &v67; /*0x10034c7e3*/
          v55[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x10034c7f1*/
          if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x10034c806*/
                                  v56,
                                  v55) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10034ca75*/
              &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
              55,
              &v95,
              &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
              &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
          *(_QWORD *)&v57[112] = v69; /*0x10034c821*/
          *(_QWORD *)&v57[104] = v68; /*0x10034c82c*/
          *(_QWORD *)&v57[96] = v67; /*0x10034c837*/
          *(_QWORD *)v57 = v91; /*0x10034c83f*/
          *(_QWORD *)&v57[8] = __s2; /*0x10034c84a*/
          *(_QWORD *)&v57[16] = v25; /*0x10034c851*/
          *(_QWORD *)&v57[24] = v92; /*0x10034c85c*/
          *(_QWORD *)&v57[32] = v83; /*0x10034c86a*/
          *(_OWORD *)&v57[40] = v77; /*0x10034c878*/
          *(_QWORD *)&v57[56] = v84; /*0x10034c886*/
          *(_QWORD *)&v57[120] = v93; /*0x10034c891*/
          *(_QWORD *)&v57[128] = v86; /*0x10034c89c*/
          *(_QWORD *)&v57[136] = v66; /*0x10034c8aa*/
          *(__m128i *)&v57[64] = _mm_load_si128(&v76); /*0x10034c8b9*/
          *(_QWORD *)&v57[80] = v85; /*0x10034c8c8*/
          *(_QWORD *)&v57[88] = v64; /*0x10034c8d6*/
          *(_QWORD *)&v57[144] = v65; /*0x10034c8e4*/
          v31 = v81; /*0x10034c8eb*/
          if ( v81 == v79 ) /*0x10034c8f9*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb207e6f461462136(&v79); /*0x10034c902*/
          memcpy((char *)v80 + 152 * v31, v57, 0x98u); /*0x10034c921*/
          v81 = v31 + 1; /*0x10034c929*/
          if ( v58 ) /*0x10034c93a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v58, 1); /*0x10034c94c*/
        }
        else
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..skills..SkillBackupMetadata$GT$::h2827b73f829b851f(v45); /*0x10034c6b1*/
        }
      }
      if ( v82 ) /*0x10034c6c0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v82, 1); /*0x10034c6ce*/
      if ( v70 ) /*0x10034c6dd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v70, 1); /*0x10034c6e7*/
      v22 = v87; /*0x10034c6ec*/
      if ( v87 ) /*0x10034c6f3*/
      {
        v23 = 1; /*0x10034c6f5*/
        v24 = v94; /*0x10034c6fa*/
LABEL_51:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v22, v23); /*0x10034c6fe*/
      }
    }
LABEL_27:
    if ( !_InterlockedDecrement64(__dst[0]) ) /*0x10034c46f*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x10034c47c*/
  }
  core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(&v40); /*0x10034c95d*/
  v4 = v96; /*0x10034c969*/
  if ( v74 == 2 ) /*0x10034c96d*/
  {
    v9 = v73; /*0x10034c96f*/
    goto LABEL_66; /*0x10034c96f*/
  }
LABEL_72:
  v40 = &v95; /*0x10034c9c0*/
  if ( v81 >= 2 ) /*0x10034c9dd*/
  {
    if ( v81 >= 0x15 ) /*0x10034ca24*/
      core::slice::sort::stable::driftsort_main::hb627800aa70386cf(v80, v81, &v40); /*0x10034ca83*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h7ce449a1966386a9(v80); /*0x10034ca32*/
  }
  v4[3] = v81; /*0x10034c9e6*/
  v36 = v79; /*0x10034c9eb*/
  v4[2] = v80; /*0x10034c9f9*/
  v4[1] = v36; /*0x10034c9fe*/
LABEL_74:
  *v4 = 11; /*0x10034ca03*/
  return v4; /*0x10034ca0e*/
}