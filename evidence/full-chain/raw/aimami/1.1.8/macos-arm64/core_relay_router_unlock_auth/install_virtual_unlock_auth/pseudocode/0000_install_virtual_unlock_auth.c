// mac 1.1.8 behavioral install_virtual_unlock_auth 0x10068eeb0 d=0
void __fastcall codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth::h2f0328bac8ed85a3(
        _QWORD *a1,
        __int64 a2,
        char a3,
        double a4)
{
  _UNKNOWN **v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  size_t v8; // rdx
  unsigned __int8 v9; // r15
  void *v10; // rdi
  bool v11; // al
  bool v12; // r12
  char v13; // r12
  char v14; // r12
  void *v15; // r15
  size_t v16; // r13
  char v17; // bl
  char v18; // bl
  __int64 v19; // rdx
  __int64 *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rsi
  void *v27; // rax
  void *v28; // r14
  __int64 *v29; // rax
  __int64 *v30; // rbx
  __int64 *v31; // rdi
  __int64 v32; // rdx
  int v33; // edx
  __int64 **v34; // r13
  void *v35; // rax
  _BYTE *v36; // rax
  _QWORD *v37; // r12
  __int64 v38; // r15
  _QWORD *v39; // rax
  __int64 v40; // rsi
  _QWORD **v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rax
  _QWORD *v45; // r12
  __int64 v46; // rbx
  __int64 (__fastcall *v47)(_QWORD, _QWORD); // r13
  __int64 v48; // r15
  _QWORD **v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rsi
  _QWORD *v52; // rax
  _QWORD v53[3]; // [rsp+0h] [rbp-200h] BYREF
  __int64 v54; // [rsp+18h] [rbp-1E8h]
  __int64 v55; // [rsp+20h] [rbp-1E0h]
  char v56; // [rsp+38h] [rbp-1C8h]
  _QWORD v57[19]; // [rsp+40h] [rbp-1C0h] BYREF
  __int64 *v58; // [rsp+D8h] [rbp-128h]
  __int64 v59; // [rsp+E0h] [rbp-120h] BYREF
  _QWORD **v60; // [rsp+E8h] [rbp-118h]
  size_t v61; // [rsp+F0h] [rbp-110h]
  char *v62; // [rsp+F8h] [rbp-108h]
  _QWORD v63[2]; // [rsp+100h] [rbp-100h] BYREF
  __int64 v64; // [rsp+110h] [rbp-F0h] BYREF
  void *v65; // [rsp+118h] [rbp-E8h]
  size_t v66; // [rsp+120h] [rbp-E0h]
  void *v67; // [rsp+128h] [rbp-D8h] BYREF
  __int64 v68; // [rsp+130h] [rbp-D0h]
  __int64 v69; // [rsp+138h] [rbp-C8h]
  _QWORD *v70; // [rsp+140h] [rbp-C0h] BYREF
  void *v71; // [rsp+148h] [rbp-B8h]
  __int64 v72; // [rsp+150h] [rbp-B0h]
  __int16 v73; // [rsp+158h] [rbp-A8h] BYREF
  __int64 **v74; // [rsp+160h] [rbp-A0h]
  __int64 *v75; // [rsp+168h] [rbp-98h] BYREF
  void *v76; // [rsp+170h] [rbp-90h]
  __int64 v77; // [rsp+178h] [rbp-88h]
  __int64 v78; // [rsp+180h] [rbp-80h]
  char v79; // [rsp+188h] [rbp-78h]
  _QWORD *v80; // [rsp+190h] [rbp-70h]
  __int64 v81; // [rsp+198h] [rbp-68h]
  void *__src; // [rsp+1A0h] [rbp-60h]
  _QWORD **v83; // [rsp+1A8h] [rbp-58h]
  __int64 v84; // [rsp+1B0h] [rbp-50h]
  size_t __n; // [rsp+1B8h] [rbp-48h]
  __int64 v86; // [rsp+1C0h] [rbp-40h] BYREF
  _QWORD *v87; // [rsp+1C8h] [rbp-38h]
  __int64 v88; // [rsp+1D0h] [rbp-30h]

  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557((_BYTE **)a2); /*0x10068eed0*/
  if ( v5 ) /*0x10068eed8*/
  {
    *a1 = 2; /*0x10068eeda*/
    a1[1] = v5; /*0x10068eee1*/
    return; /*0x10068eee5*/
  }
  v6 = *(_QWORD *)(a2 + 584); /*0x10068eeea*/
  v7 = *(_QWORD *)(a2 + 592); /*0x10068eef1*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v59, v6, v7, "router-unlock-auth-marker.jsonaimami_router_unlock_auth", 30); /*0x10068ef12*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v64, v6, v7, &anon_5d4536734f60d7d1ae09e451c2f7649c_827, 30); /*0x10068ef31*/
  v80 = a1; /*0x10068ef36*/
  codexmate_lib::core::relay::router_unlock_auth::read_marker::h1f857b739e1ec08a(v53, v6, v7); /*0x10068ef47*/
  LOBYTE(v6) = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d(a2); /*0x10068ef54*/
  v8 = *(_QWORD *)(a2 + 40); /*0x10068ef5b*/
  __src = *(void **)(a2 + 32); /*0x10068ef66*/
  __n = v8; /*0x10068ef6a*/
  std::sys::fs::metadata::h32fa16d3052ea535(v57, __src, v8); /*0x10068ef6e*/
  v9 = v57[0]; /*0x10068ef73*/
  v10 = (void *)v57[0]; /*0x10068ef81*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10068ef84*/
    v57[0],
    v57[1]);
  v11 = (_BYTE)v6 != 1; /*0x10068ef91*/
  v12 = (_BYTE)v6 == 2; /*0x10068ef98*/
  if ( ((v9 ^ 1) & v11) != 0 ) /*0x10068ef9f*/
  {
    v15 = v65; /*0x10068effd*/
    v16 = v66; /*0x10068f004*/
    std::sys::fs::metadata::h32fa16d3052ea535(v57, v65, v66); /*0x10068f018*/
    v17 = v57[0]; /*0x10068f01d*/
    v10 = (void *)v57[0]; /*0x10068f02b*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10068f02e*/
      v57[0],
      v57[1]);
    v18 = v12 & a3 | v17; /*0x10068f036*/
    v13 = 1; /*0x10068f039*/
    if ( v18 == 1 ) /*0x10068f03f*/
    {
      v10 = __src; /*0x10068f045*/
      if ( (std::sys::fs::copy::hcda968f022f0a0e3(__src, __n, v15, v16) & 1) != 0 ) /*0x10068f05a*/
      {
        v86 = v19; /*0x10068f060*/
        v57[0] = &v86; /*0x10068f068*/
        v57[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10068f076*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v75, &unk_10122DA1C, v57); /*0x10068f092*/
        v20 = v75; /*0x10068f097*/
        v57[0] = v76; /*0x10068f0a5*/
        v57[1] = v77; /*0x10068f0b3*/
        if ( (v86 & 3) == 1 ) /*0x10068f0c6*/
        {
          v21 = v86 - 1; /*0x10068f0c8*/
          v22 = *(_QWORD *)(v86 - 1); /*0x10068f0cc*/
          v23 = *(_QWORD *)(v86 + 7); /*0x10068f0d0*/
          if ( *(_QWORD *)v23 ) /*0x10068f0d4*/
            (*(void (__fastcall **)(__int64))v23)(v22); /*0x10068f0e0*/
          v24 = *(_QWORD *)(v23 + 8); /*0x10068f0e2*/
          if ( v24 ) /*0x10068f0ea*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16)); /*0x10068f0f4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24, 8); /*0x10068f106*/
        }
        v25 = v80; /*0x10068f10b*/
        qmemcpy(v80 + 2, v57, 0x50u); /*0x10068f11f*/
        *v25 = 9; /*0x10068f122*/
        v25[1] = v20; /*0x10068f129*/
        v26 = v53[0]; /*0x10068f12d*/
        if ( v53[0] == 0x8000000000000000LL ) /*0x10068f141*/
        {
LABEL_36:
          if ( v64 ) /*0x10068f42d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x10068f43b*/
          v40 = v59; /*0x10068f440*/
          if ( v59 ) /*0x10068f44a*/
          {
            v41 = v60; /*0x10068f44c*/
LABEL_40:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x10068f458*/
            return; /*0x10068f458*/
          }
          return; /*0x10068f44a*/
        }
LABEL_32:
        if ( v26 ) /*0x10068f3f3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[1], v26, 1); /*0x10068f401*/
        if ( v54 ) /*0x10068f410*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v54, 1); /*0x10068f41e*/
        goto LABEL_36; /*0x10068f41e*/
      }
    }
  }
  else if ( v53[0] == 0x8000000000000000LL || (v13 = 1, !v56) ) /*0x10068efbe*/
  {
    std::sys::fs::metadata::h32fa16d3052ea535(v57, v65, v66); /*0x10068efd9*/
    v14 = v57[0]; /*0x10068efde*/
    v10 = (void *)v57[0]; /*0x10068efec*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10068efef*/
      v57[0],
      v57[1]);
    v13 = v14 ^ 1; /*0x10068eff4*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10); /*0x10068f14c*/
  v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x10068f15b*/
  if ( !v27 ) /*0x10068f163*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x10068f859*/
  v28 = v27; /*0x10068f169*/
  qmemcpy(v27, "niuniu@woyao.pro", 16); /*0x10068f184*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(16); /*0x10068f187*/
  v29 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1); /*0x10068f196*/
  if ( !v29 ) /*0x10068f19e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 66); /*0x10068f86a*/
  v30 = v29; /*0x10068f1a4*/
  v31 = v29; /*0x10068f1b3*/
  memcpy(v29, &unk_1012D1286, 0x42u); /*0x10068f1b6*/
  v86 = std::time::SystemTime::now::h1fe79e41f9d5677f(v31, &unk_1012D1286, v32); /*0x10068f1c0*/
  LODWORD(v87) = v33; /*0x10068f1c4*/
  v34 = &v75; /*0x10068f1c7*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v75, &v86, 0, 0); /*0x10068f1dc*/
  if ( (_BYTE)v75 ) /*0x10068f1e8*/
    v35 = nullptr; /*0x10068f1f3*/
  else
    v35 = v76; /*0x10068f1ea*/
  v57[0] = 16; /*0x10068f1f5*/
  v57[1] = v28; /*0x10068f200*/
  v57[2] = 16; /*0x10068f207*/
  v57[3] = 66; /*0x10068f212*/
  v57[4] = v30; /*0x10068f21d*/
  v57[5] = 66; /*0x10068f224*/
  v57[6] = v35; /*0x10068f22f*/
  LOBYTE(v57[7]) = v13; /*0x10068f236*/
  v83 = v60; /*0x10068f244*/
  v84 = v61; /*0x10068f24f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v75); /*0x10068f253*/
  v36 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x10068f262*/
  if ( !v36 ) /*0x10068f26a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10068f87b*/
  v86 = 128; /*0x10068f270*/
  v87 = v36; /*0x10068f278*/
  v75 = &v86; /*0x10068f27c*/
  v76 = &unk_1012CFD27; /*0x10068f28a*/
  v77 = 2; /*0x10068f291*/
  v78 = 1; /*0x10068f29c*/
  v79 = 0; /*0x10068f2a4*/
  *v36 = 123; /*0x10068f2a8*/
  v88 = 1; /*0x10068f2ab*/
  v73 = 256; /*0x10068f2b3*/
  v74 = &v75; /*0x10068f2bc*/
  v37 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::he4543b245da1c5f6( /*0x10068f2e2*/
                    &v73,
                    &anon_5d4536734f60d7d1ae09e451c2f7649c_838,
                    5,
                    v57);
  v58 = v30; /*0x10068f2e8*/
  if ( v37 ) /*0x10068f2ef*/
    goto LABEL_27; /*0x10068f2ef*/
  if ( (_BYTE)v73 ) /*0x10068f2f8*/
    goto LABEL_25; /*0x10068f2f8*/
  v37 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::he4543b245da1c5f6( /*0x10068f323*/
                    &v73,
                    &anon_5d4536734f60d7d1ae09e451c2f7649c_839,
                    10,
                    &v57[3]);
  if ( v37 ) /*0x10068f329*/
    goto LABEL_27; /*0x10068f329*/
  if ( (_BYTE)v73 ) /*0x10068f476*/
    goto LABEL_25; /*0x10068f476*/
  v37 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h01e9ab7c66822cb0( /*0x10068f49b*/
                    &v73,
                    &anon_5d4536734f60d7d1ae09e451c2f7649c_840,
                    9,
                    &v57[6]);
  if ( v37 ) /*0x10068f4a1*/
    goto LABEL_27; /*0x10068f4a1*/
  if ( (_BYTE)v73 ) /*0x10068f4ae*/
  {
LABEL_25:
    v37 = (_QWORD *)serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10068f2fa*/
    goto LABEL_27; /*0x10068f302*/
  }
  v37 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h7555dc270a8e2c5d( /*0x10068f4d3*/
                    &v73,
                    &anon_5d4536734f60d7d1ae09e451c2f7649c_841,
                    20,
                    &v57[7]);
  if ( v37 ) /*0x10068f4d9*/
  {
LABEL_27:
    if ( v86 ) /*0x10068f336*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v86, 1); /*0x10068f341*/
    goto LABEL_29; /*0x10068f341*/
  }
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h012513cddb363fda(&v73); /*0x10068f4e6*/
  v38 = v86; /*0x10068f4eb*/
  v37 = v87; /*0x10068f4ef*/
  if ( v86 == 0x8000000000000000LL ) /*0x10068f500*/
  {
LABEL_29:
    v70 = v37; /*0x10068f346*/
    v86 = (__int64)&v70; /*0x10068f354*/
    v87 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x10068f35f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v75, &unk_10122D989, &v86); /*0x10068f375*/
    v30 = v75; /*0x10068f37a*/
    v38 = (__int64)v76; /*0x10068f381*/
    v34 = (__int64 **)v77; /*0x10068f388*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(&v70); /*0x10068f396*/
LABEL_30:
    v39 = v80; /*0x10068f39b*/
    *v80 = 9; /*0x10068f39f*/
    v39[1] = v30; /*0x10068f3a6*/
    v39[2] = v38; /*0x10068f3aa*/
    v39[3] = v34; /*0x10068f3ae*/
    goto LABEL_31; /*0x10068f3ae*/
  }
  v68 = v86; /*0x10068f515*/
  v42 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af(v83, v84, (__int64)v87, v88, a4); /*0x10068f51c*/
  v84 = v42; /*0x10068f524*/
  if ( v42 ) /*0x10068f528*/
  {
    v70 = (_QWORD *)v42; /*0x10068f52e*/
    v86 = (__int64)&v70; /*0x10068f53c*/
    v87 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10068f547*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v75, &unk_10122D9B3, &v86); /*0x10068f55d*/
    v30 = v75; /*0x10068f562*/
    v38 = (__int64)v76; /*0x10068f569*/
    v34 = (__int64 **)v77; /*0x10068f570*/
    if ( ((unsigned __int8)v70 & 3) == 1 ) /*0x10068f586*/
    {
      v62 = (char *)v70 - 1; /*0x10068f58c*/
      v69 = *(_QWORD *)((char *)v70 - 1); /*0x10068f597*/
      v81 = *(_QWORD *)((char *)v70 + 7); /*0x10068f5a2*/
      if ( *(_QWORD *)v81 ) /*0x10068f5a6*/
        (*(void (__fastcall **)(__int64))v81)(v69); /*0x10068f5b5*/
      v43 = *(_QWORD *)(v81 + 8); /*0x10068f5bb*/
      if ( v43 ) /*0x10068f5c2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v43, *(_QWORD *)(v81 + 16)); /*0x10068f5d3*/
      a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, 24, 8); /*0x10068f5e9*/
    }
  }
  if ( v68 ) /*0x10068f5fa*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v68, 1); /*0x10068f604*/
  if ( v84 ) /*0x10068f60e*/
    goto LABEL_30; /*0x10068f60e*/
  v44 = codexmate_lib::core::auth::current_timestamp::h3a6eee653998ac5a(a4); /*0x10068f614*/
  codexmate_lib::core::relay::router_unlock_auth::build_unlock_auth_json::hb7bf3babcbdfdea0(&v75, v44); /*0x10068f623*/
  serde_json::ser::to_vec_pretty::hb84b06c431a86df4(&v70, &v75); /*0x10068f636*/
  v45 = v70; /*0x10068f63b*/
  if ( v70 == (_QWORD *)0x8000000000000000LL ) /*0x10068f656*/
  {
    v67 = v71; /*0x10068f658*/
    v63[0] = &v67; /*0x10068f666*/
    v63[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x10068f674*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v86, &unk_10122D989, v63); /*0x10068f68d*/
    v46 = v86; /*0x10068f692*/
    v47 = (__int64 (__fastcall *)(_QWORD, _QWORD))v87; /*0x10068f696*/
    v48 = v88; /*0x10068f69a*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(&v67); /*0x10068f6a5*/
LABEL_68:
    v52 = v80; /*0x10068f794*/
    v80[1] = v46; /*0x10068f798*/
    v52[2] = v47; /*0x10068f79c*/
    v52[3] = v48; /*0x10068f7a0*/
    *v52 = 9; /*0x10068f7a4*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v75); /*0x10068f7b2*/
LABEL_31:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 16, 1); /*0x10068f3b2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, 66, 1); /*0x10068f3d5*/
    v26 = v53[0]; /*0x10068f3da*/
    if ( v53[0] == 0x8000000000000000LL ) /*0x10068f3ee*/
      goto LABEL_36; /*0x10068f3ee*/
    goto LABEL_32; /*0x10068f3ee*/
  }
  v49 = (_QWORD **)__src; /*0x10068f6b6*/
  __src = v71; /*0x10068f6be*/
  v50 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af(v49, __n, (__int64)v71, v72, a4); /*0x10068f6c2*/
  if ( v50 ) /*0x10068f6ca*/
  {
    v63[0] = v50; /*0x10068f6d0*/
    v70 = v63; /*0x10068f6de*/
    v71 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10068f6ec*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v86, &unk_10122D9B3, &v70); /*0x10068f705*/
    v46 = v86; /*0x10068f70a*/
    v47 = (__int64 (__fastcall *)(_QWORD, _QWORD))v87; /*0x10068f70e*/
    v48 = v88; /*0x10068f712*/
    if ( (v63[0] & 3) == 1 ) /*0x10068f725*/
    {
      v84 = v63[0] - 1LL; /*0x10068f72b*/
      v83 = *(_QWORD ***)(v63[0] - 1LL); /*0x10068f733*/
      __n = *(_QWORD *)(v63[0] + 7LL); /*0x10068f73b*/
      if ( *(_QWORD *)__n ) /*0x10068f73f*/
        (*(void (__fastcall **)(_QWORD **))__n)(v83); /*0x10068f74b*/
      v51 = *(_QWORD *)(__n + 8); /*0x10068f751*/
      if ( v51 ) /*0x10068f758*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v51, *(_QWORD *)(__n + 16)); /*0x10068f766*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, 24, 8); /*0x10068f779*/
    }
    if ( v45 ) /*0x10068f781*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v45, 1); /*0x10068f78f*/
    goto LABEL_68; /*0x10068f78f*/
  }
  if ( v45 ) /*0x10068f7bf*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v45, 1); /*0x10068f7cd*/
  *v80 = 10; /*0x10068f7d6*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v75); /*0x10068f7e4*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::h31c7105faf2c0157( /*0x10068f7f0*/
    v57,
    a4);
  if ( v53[0] != 0x8000000000000000LL ) /*0x10068f806*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::h31c7105faf2c0157( /*0x10068f80f*/
      v53,
      a4);
  if ( v64 ) /*0x10068f81e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x10068f82c*/
  v40 = v59; /*0x10068f831*/
  if ( v59 ) /*0x10068f83b*/
  {
    v41 = v83; /*0x10068f846*/
    goto LABEL_40; /*0x10068f84a*/
  }
}