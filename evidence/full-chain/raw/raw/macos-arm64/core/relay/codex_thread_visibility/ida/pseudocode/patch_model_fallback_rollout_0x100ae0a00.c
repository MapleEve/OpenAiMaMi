// __ZN13codexmate_lib4core5relay23codex_thread_visibility28patch_model_fallback_rollout @ 0x100ae0a00
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::patch_model_fallback_rollout | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void *__fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_model_fallback_rollout::he67490595d91b8fb(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5,
        void *a6,
        size_t a7)
{
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rsi
  void *result; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rcx
  _QWORD *v31; // rsi
  char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r14
  char *v35; // r15
  __int64 v36; // rbx
  __int64 v37; // rax
  size_t v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rbx
  _BYTE *v41; // rax
  _BYTE *v42; // r14
  void *v43; // rax
  size_t v44; // r12
  __int64 v45; // rbx
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // r15
  unsigned __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // r15
  void *v53; // rax
  size_t v54; // r14
  __int64 v55; // rbx
  __int64 v56; // r14
  void *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  _QWORD *v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rdx
  _QWORD v63[2]; // [rsp+8h] [rbp-1F8h] BYREF
  __int64 v64; // [rsp+18h] [rbp-1E8h]
  __int64 v65; // [rsp+20h] [rbp-1E0h]
  _OWORD v66[6]; // [rsp+28h] [rbp-1D8h] BYREF
  _BYTE v67[17]; // [rsp+88h] [rbp-178h] BYREF
  _BYTE v68[15]; // [rsp+99h] [rbp-167h]
  _OWORD v69[9]; // [rsp+A8h] [rbp-158h] BYREF
  _QWORD *v70; // [rsp+140h] [rbp-C0h] BYREF
  unsigned __int64 v71; // [rsp+148h] [rbp-B8h]
  unsigned __int64 v72; // [rsp+150h] [rbp-B0h]
  void *v73; // [rsp+158h] [rbp-A8h]
  _BYTE v74[31]; // [rsp+160h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+180h] [rbp-80h]
  size_t v76; // [rsp+188h] [rbp-78h]
  __int64 v77; // [rsp+190h] [rbp-70h]
  size_t __n; // [rsp+198h] [rbp-68h]
  __m256i v79; // [rsp+1A0h] [rbp-60h] BYREF
  __int64 v80; // [rsp+1C0h] [rbp-40h]
  void *__src; // [rsp+1C8h] [rbp-38h]
  void *v82; // [rsp+1D0h] [rbp-30h]

  v82 = a6; /*0x100ae0a14*/
  v77 = a1; /*0x100ae0a24*/
  std::sys::fs::metadata::h32fa16d3052ea535(v69, a2, a3); /*0x100ae0a32*/
  if ( LODWORD(v69[0]) == 1 ) /*0x100ae0a3e*/
  {
    if ( (BYTE8(v69[0]) & 3) == 1 ) /*0x100ae0a4f*/
    {
      v11 = *((_QWORD *)&v69[0] + 1) - 1LL; /*0x100ae0a51*/
      v12 = *(_QWORD *)(*((_QWORD *)&v69[0] + 1) - 1LL); /*0x100ae0a55*/
      v13 = *(_QWORD *)(*((_QWORD *)&v69[0] + 1) + 7LL); /*0x100ae0a59*/
      if ( *(_QWORD *)v13 ) /*0x100ae0a5d*/
        (*(void (__fastcall **)(__int64))v13)(v12); /*0x100ae0a69*/
      v14 = *(_QWORD *)(v13 + 8); /*0x100ae0a6b*/
      if ( v14 ) /*0x100ae0a72*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16)); /*0x100ae0a7b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24, 8); /*0x100ae0a8d*/
    }
    *(_QWORD *)v77 = 0x8000000000000000LL; /*0x100ae0aa3*/
    return (void *)0x8000000000000000LL; /*0x100ae0aa6*/
  }
  v64 = a3; /*0x100ae0ac2*/
  codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a(v66, a2, a3); /*0x100ae0ac9*/
  if ( LODWORD(v66[0]) != 11 ) /*0x100ae0ad5*/
  {
    qmemcpy(v69, v66, 0x60u); /*0x100ae0b49*/
    *(_QWORD *)v67 = v69; /*0x100ae0b4c*/
    *(_QWORD *)&v67[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae0b5a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v79, &unk_1017CAF7E, v67); /*0x100ae0b73*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v69); /*0x100ae0b7f*/
    result = (void *)v79.i64[1]; /*0x100ae0b88*/
    v16 = v79.i64[0]; /*0x100ae0b88*/
    v17 = v79.i64[2]; /*0x100ae0b8c*/
LABEL_14:
    v18 = (_QWORD *)v77; /*0x100ae0b90*/
    *(_QWORD *)(v77 + 8) = v16; /*0x100ae0b94*/
    v18[2] = result; /*0x100ae0b98*/
    v18[3] = v17; /*0x100ae0b9c*/
    *v18 = 0x8000000000000001LL; /*0x100ae0ba0*/
    return result; /*0x100ae0ba0*/
  }
  v80 = *((_QWORD *)&v66[0] + 1); /*0x100ae0ae2*/
  if ( *((_QWORD *)&v66[0] + 1) == 0x8000000000000000LL ) /*0x100ae0ae9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, a2); /*0x100ae0aef*/
    v16 = 20; /*0x100ae0af4*/
    result = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x100ae0b03*/
    if ( !result ) /*0x100ae0b0b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x100ae0e70*/
    qmemcpy(result, "session_meta missing", 20); /*0x100ae0b29*/
    v17 = 20; /*0x100ae0b33*/
    goto LABEL_14; /*0x100ae0b38*/
  }
  v19 = *((_QWORD *)&v66[1] + 1); /*0x100ae0bbc*/
  *(_QWORD *)&v69[0] = *(_QWORD *)&v66[1]; /*0x100ae0bc3*/
  *(_OWORD *)((char *)v69 + 8) = *((unsigned __int64 *)&v66[1] + 1); /*0x100ae0bca*/
  *((_QWORD *)&v69[1] + 1) = 0; /*0x100ae0bdc*/
  v75 = *(_QWORD *)&v66[1]; /*0x100ae0be7*/
  v69[2] = v66[1]; /*0x100ae0beb*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v66, v69); /*0x100ae0c07*/
  if ( LOBYTE(v66[0]) == 6 ) /*0x100ae0c15*/
  {
    v70 = *((_QWORD **)&v66[0] + 1); /*0x100ae0c22*/
    v63[0] = &v70; /*0x100ae0c30*/
    v63[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100ae0c3e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v69, &unk_1017CAF62, v63); /*0x100ae0c5a*/
    v23 = v70; /*0x100ae0c5f*/
    if ( *v70 == 1 ) /*0x100ae0c77*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v70 + 1, &unk_1017CAF62, v20, v21, v22); /*0x100ae0da2*/
    }
    else if ( !*v70 ) /*0x100ae0c66*/
    {
      v24 = v70[2]; /*0x100ae0c86*/
      if ( v24 ) /*0x100ae0c8d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70[1], v24, 1); /*0x100ae0c9c*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, 40, 8); /*0x100ae0db4*/
    result = *(void **)&v69[1]; /*0x100ae0db9*/
    v30 = *(_QWORD *)&v69[0]; /*0x100ae0dc4*/
    *(__int128 *)((char *)v79.i128 + 15) = *(_OWORD *)((char *)v69 + 8); /*0x100ae0dd2*/
    *(__int64 *)((char *)v79.i64 + 7) = *(_QWORD *)&v69[0]; /*0x100ae0dd6*/
    *(_OWORD *)&v74[7] = v69[0]; /*0x100ae0dda*/
    *(_QWORD *)&v74[23] = *(_QWORD *)&v69[1]; /*0x100ae0de8*/
    v31 = (_QWORD *)v77; /*0x100ae0def*/
    *(_OWORD *)(v77 + 16) = *(_OWORD *)((char *)v69 + 8); /*0x100ae0df7*/
    v31[1] = v30; /*0x100ae0dfb*/
    *v31 = 0x8000000000000001LL; /*0x100ae0dff*/
LABEL_73:
    if ( v80 ) /*0x100ae1454*/
      return (void *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v80, 1); /*0x100ae1463*/
    return result; /*0x100ae1468*/
  }
  *(__int64 *)((char *)&v79.i64[2] + 7) = *((_QWORD *)&v66[1] + 1); /*0x100ae0cad*/
  v79.i64[2] = *(_QWORD *)((char *)&v66[1] + 1); /*0x100ae0cb8*/
  *(_OWORD *)v74 = *(_OWORD *)((char *)v66 + 1); /*0x100ae0cca*/
  *(_QWORD *)&v74[16] = *(_QWORD *)((char *)&v66[1] + 1); /*0x100ae0ce0*/
  *(_QWORD *)&v74[23] = *(__int64 *)((char *)&v79.i64[2] + 7); /*0x100ae0ce7*/
  *(_OWORD *)&v67[1] = *(_OWORD *)((char *)v66 + 1); /*0x100ae0cf5*/
  *(_QWORD *)&v68[7] = *(__int64 *)((char *)&v79.i64[2] + 7); /*0x100ae0d0a*/
  *(_QWORD *)v68 = *(_QWORD *)&v74[16]; /*0x100ae0d11*/
  v67[0] = v66[0]; /*0x100ae0d18*/
  v25 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v67, "/payload/model_provider", 23); /*0x100ae0d31*/
  if ( v25 ) /*0x100ae0d39*/
  {
    v26 = a5; /*0x100ae0d3e*/
    if ( *(_BYTE *)v25 == 3 ) /*0x100ae0d41*/
    {
      v26 = *(_QWORD *)(v25 + 24); /*0x100ae0d43*/
      a4 = *(const void **)(v25 + 16); /*0x100ae0d47*/
    }
  }
  else
  {
    v26 = a5; /*0x100ae0d4d*/
  }
  if ( v26 < 0 ) /*0x100ae0d53*/
  {
    v27 = 0; /*0x100ae0d55*/
    goto LABEL_27; /*0x100ae0d55*/
  }
  __n = v26; /*0x100ae0d67*/
  v72 = 0x8000000000000000LL; /*0x100ae0d6b*/
  if ( v26 ) /*0x100ae0d72*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67, "/payload/model_provider"); /*0x100ae0d78*/
    v27 = 1; /*0x100ae0d7d*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100ae0d8b*/
    v26 = __n; /*0x100ae0d90*/
    if ( !v28 ) /*0x100ae0d97*/
LABEL_27:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v27, v26); /*0x100ae0d57*/
    v29 = v28; /*0x100ae0d99*/
  }
  else
  {
    v29 = 1; /*0x100ae0e07*/
  }
  memcpy((void *)v29, a4, v26); /*0x100ae0e13*/
  v32 = "/payload/model_reasoning_effortmedium"; /*0x100ae0e18*/
  v33 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v67, "/payload/model_reasoning_effortmedium", 31); /*0x100ae0e2b*/
  v71 = v19; /*0x100ae0e30*/
  v34 = 6; /*0x100ae0e37*/
  v35 = "medium"; /*0x100ae0e3d*/
  if ( v33 && *(_BYTE *)v33 == 3 ) /*0x100ae0e4c*/
  {
    v32 = *(char **)(v33 + 24); /*0x100ae0e4e*/
    if ( (__int64)v32 < 0 ) /*0x100ae0e55*/
    {
      v36 = 0; /*0x100ae0e57*/
      goto LABEL_38; /*0x100ae0e57*/
    }
    v35 = *(char **)(v33 + 16); /*0x100ae0e75*/
    if ( !v32 ) /*0x100ae0e79*/
    {
      v37 = 1; /*0x100ae162c*/
      v38 = 0; /*0x100ae1631*/
      __src = (void *)v29; /*0x100ae1633*/
      goto LABEL_44; /*0x100ae1637*/
    }
    v34 = *(_QWORD *)(v33 + 24); /*0x100ae0e7f*/
  }
  __src = (void *)v29; /*0x100ae0e82*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67, v32); /*0x100ae0e86*/
  v36 = 1; /*0x100ae0e8b*/
  v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v34, 1); /*0x100ae0e9b*/
  if ( !v37 ) /*0x100ae0ea3*/
  {
    v32 = (char *)v34; /*0x100ae1611*/
LABEL_38:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v36, v32); /*0x100ae0e59*/
  }
  v38 = v34; /*0x100ae0ea9*/
LABEL_44:
  v73 = (void *)v37; /*0x100ae0eac*/
  v76 = v38; /*0x100ae0eb9*/
  memcpy((void *)v37, v35, v38); /*0x100ae0ebd*/
  *(_QWORD *)&v69[0] = v75; /*0x100ae0ec6*/
  *(_OWORD *)((char *)v69 + 8) = v71; /*0x100ae0ed4*/
  *((_QWORD *)&v69[1] + 1) = 0; /*0x100ae0ee6*/
  *(_QWORD *)&v69[2] = v75; /*0x100ae0ef1*/
  *((_QWORD *)&v69[2] + 1) = v71; /*0x100ae0ef8*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v66, v69); /*0x100ae0f0d*/
  if ( LOBYTE(v66[0]) == 6 ) /*0x100ae0f1b*/
  {
    v39 = *((_QWORD *)&v66[0] + 1); /*0x100ae0f1d*/
    v40 = 3; /*0x100ae0f24*/
LABEL_66:
    v48 = 30; /*0x100ae137f*/
LABEL_67:
    *(_QWORD *)&v69[0] = v40; /*0x100ae1385*/
    *((_QWORD *)&v69[0] + 1) = v39; /*0x100ae1393*/
    *(_QWORD *)&v69[1] = v82; /*0x100ae139e*/
    *((_QWORD *)&v69[1] + 1) = v48; /*0x100ae13a5*/
    v79.i64[0] = (__int64)v69; /*0x100ae13ac*/
    v79.i64[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae13b7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v66, &unk_1017CAF94, &v79); /*0x100ae13cd*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v69); /*0x100ae13d9*/
    v58 = *((_QWORD *)&v66[0] + 1); /*0x100ae13e5*/
    v59 = *(_QWORD *)&v66[1]; /*0x100ae13ec*/
    v60 = (_QWORD *)v77; /*0x100ae13f3*/
    *(_QWORD *)(v77 + 8) = *(_QWORD *)&v66[0]; /*0x100ae13f7*/
    v60[2] = v58; /*0x100ae13fb*/
    v60[3] = v59; /*0x100ae13ff*/
    *v60 = 0x8000000000000001LL; /*0x100ae140d*/
LABEL_68:
    if ( v76 ) /*0x100ae1417*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v76, 1); /*0x100ae1425*/
    if ( __n ) /*0x100ae1431*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, __n, 1); /*0x100ae143c*/
    result = (void *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v67); /*0x100ae1448*/
    goto LABEL_73; /*0x100ae1448*/
  }
  v79.i64[0] = *(_QWORD *)&v66[0]; /*0x100ae0f3a*/
  v79.i64[3] = *((_QWORD *)&v66[1] + 1); /*0x100ae0f59*/
  *(__int128 *)((char *)v79.i128 + 8) = *(_OWORD *)((char *)v66 + 8); /*0x100ae0f60*/
  v41 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x100ae0f74*/
                   "payload",
                   7,
                   &v79);
  if ( !v41 || *v41 != 5 ) /*0x100ae0f85*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("payload", 7); /*0x100ae1313*/
    v39 = 30; /*0x100ae1318*/
    v57 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100ae1328*/
    if ( v57 ) /*0x100ae1330*/
    {
      v82 = v57; /*0x100ae136a*/
      qmemcpy(v57, "session_meta payload not found", 30); /*0x100ae136e*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v79); /*0x100ae1375*/
      v40 = 9; /*0x100ae137a*/
      goto LABEL_66; /*0x100ae137a*/
    }
    goto LABEL_89; /*0x100ae1330*/
  }
  v42 = v41; /*0x100ae0f8b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("payload", 7); /*0x100ae0f8e*/
  v39 = 14; /*0x100ae0f93*/
  v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x100ae0fa3*/
  if ( !v43 ) /*0x100ae0fab*/
    goto LABEL_89; /*0x100ae0fab*/
  qmemcpy(v43, "model_provider", 14); /*0x100ae0fcc*/
  *(_QWORD *)v74 = 14; /*0x100ae0fcf*/
  *(_QWORD *)&v74[8] = v43; /*0x100ae0fda*/
  *(_QWORD *)&v74[16] = 14; /*0x100ae0fe1*/
  v44 = __n; /*0x100ae0ffe*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v69, __n, 0, 1, 1); /*0x100ae1007*/
  v45 = *((_QWORD *)&v69[0] + 1); /*0x100ae100c*/
  if ( LOBYTE(v69[0]) ) /*0x100ae101a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v69[0] + 1), *(_QWORD *)&v69[1]); /*0x100ae15e8*/
  v46 = (__int64)(v42 + 8); /*0x100ae1020*/
  v47 = *(_QWORD *)&v69[1]; /*0x100ae1024*/
  memcpy(*(void **)&v69[1], __src, v44); /*0x100ae1035*/
  *((_QWORD *)&v69[0] + 1) = v45; /*0x100ae103a*/
  *(_QWORD *)&v69[1] = v47; /*0x100ae1041*/
  v48 = v46; /*0x100ae1048*/
  *((_QWORD *)&v69[1] + 1) = v44; /*0x100ae104b*/
  LOBYTE(v69[0]) = 3; /*0x100ae1052*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v66, v46, v74, v69); /*0x100ae1071*/
  v49 = v72; /*0x100ae107d*/
  if ( LOBYTE(v66[0]) != 6 ) /*0x100ae1084*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v66); /*0x100ae108d*/
  v39 = 5; /*0x100ae1099*/
  v65 = v46; /*0x100ae10af*/
  if ( alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100ae10a7*/
         v46,
         "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
         5) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100ae10bc*/
      v46,
      "modelusagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid");
    v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100ae10cb*/
    if ( !v50 ) /*0x100ae10d3*/
      goto LABEL_89; /*0x100ae10d3*/
    *(_BYTE *)(v50 + 4) = 108; /*0x100ae10e0*/
    *(_DWORD *)v50 = 1701080941; /*0x100ae10e4*/
    *(_QWORD *)v74 = 5; /*0x100ae10ea*/
    *(_QWORD *)&v74[8] = v50; /*0x100ae10f5*/
    *(_QWORD *)&v74[16] = 5; /*0x100ae10fc*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v69, a7, 0, 1, 1); /*0x100ae111e*/
    v51 = *((_QWORD *)&v69[0] + 1); /*0x100ae1123*/
    if ( LOBYTE(v69[0]) ) /*0x100ae1131*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v69[0] + 1), *(_QWORD *)&v69[1]); /*0x100ae15f9*/
    v52 = *(_QWORD *)&v69[1]; /*0x100ae1137*/
    memcpy(*(void **)&v69[1], v82, a7); /*0x100ae1148*/
    *((_QWORD *)&v69[0] + 1) = v51; /*0x100ae114d*/
    *(_QWORD *)&v69[1] = v52; /*0x100ae1154*/
    *((_QWORD *)&v69[1] + 1) = a7; /*0x100ae115b*/
    LOBYTE(v69[0]) = 3; /*0x100ae1162*/
    v48 = v65; /*0x100ae117e*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v66, v65, v74, v69); /*0x100ae1188*/
    v49 = v72; /*0x100ae1194*/
    if ( LOBYTE(v66[0]) != 6 ) /*0x100ae119b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v66); /*0x100ae11a4*/
  }
  v39 = 22; /*0x100ae11b0*/
  if ( !alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100ae11c6*/
          v48,
          "model_reasoning_effort",
          22) )
    goto LABEL_62; /*0x100ae11c6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, "model_reasoning_effort"); /*0x100ae11cc*/
  v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x100ae11db*/
  if ( !v53 ) /*0x100ae11e3*/
LABEL_89:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v39); /*0x100ae161d*/
  qmemcpy(v53, "model_reasoning_effort", 22); /*0x100ae1212*/
  *(_QWORD *)v74 = 22; /*0x100ae1215*/
  *(_QWORD *)&v74[8] = v53; /*0x100ae1220*/
  *(_QWORD *)&v74[16] = 22; /*0x100ae1227*/
  v54 = v76; /*0x100ae1244*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v69, v76, 0, 1, 1); /*0x100ae124d*/
  v48 = *((_QWORD *)&v69[0] + 1); /*0x100ae1252*/
  if ( LOBYTE(v69[0]) ) /*0x100ae1260*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*((_QWORD *)&v69[0] + 1), *(_QWORD *)&v69[1]); /*0x100ae160a*/
  v55 = *(_QWORD *)&v69[1]; /*0x100ae1266*/
  memcpy(*(void **)&v69[1], v73, v54); /*0x100ae127a*/
  *((_QWORD *)&v69[0] + 1) = v48; /*0x100ae127f*/
  *(_QWORD *)&v69[1] = v55; /*0x100ae1286*/
  *((_QWORD *)&v69[1] + 1) = v54; /*0x100ae128d*/
  LOBYTE(v69[0]) = 3; /*0x100ae1294*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v66, v65, v74, v69); /*0x100ae12b7*/
  v49 = v72; /*0x100ae12c3*/
  if ( LOBYTE(v66[0]) != 6 ) /*0x100ae12ca*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v66); /*0x100ae12d3*/
LABEL_62:
  serde_json::ser::to_vec::haa2ccd5674877793(v69, &v79); /*0x100ae12d8*/
  v82 = *((void **)&v69[0] + 1); /*0x100ae12f9*/
  v39 = *(_QWORD *)&v69[0]; /*0x100ae12f9*/
  if ( *(_QWORD *)&v69[0] == v49 ) /*0x100ae12fd*/
  {
    v56 = *(_QWORD *)&v69[0]; /*0x100ae1303*/
    v40 = 3; /*0x100ae1306*/
    v39 = *((_QWORD *)&v69[0] + 1); /*0x100ae130b*/
  }
  else
  {
    v48 = *(_QWORD *)&v69[1]; /*0x100ae146d*/
    v40 = 11; /*0x100ae1474*/
    v56 = *(_QWORD *)&v69[0]; /*0x100ae1479*/
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v79); /*0x100ae1480*/
  if ( v56 == v72 ) /*0x100ae148c*/
    goto LABEL_67; /*0x100ae148c*/
  codexmate_lib::core::relay::codex_thread_visibility::replace_first_session_meta_line::h49193b4a14eef084( /*0x100ae14bc*/
    v66,
    a2,
    v64,
    v82,
    v48,
    v75,
    v71);
  if ( LODWORD(v66[0]) != 11 ) /*0x100ae14c8*/
  {
    qmemcpy(v69, v66, 0x60u); /*0x100ae1587*/
    codexmate_lib::core::relay::codex_thread_visibility::patch_model_fallback_rollout::_$u7b$$u7b$closure$u7d$$u7d$::h0bd60d9801b71671( /*0x100ae1591*/
      &v79,
      v69);
    v62 = v77; /*0x100ae159a*/
    *(_QWORD *)(v77 + 24) = v79.i64[2]; /*0x100ae159e*/
    *(_OWORD *)(v62 + 8) = v79.i128[0]; /*0x100ae15ae*/
    *(_QWORD *)v62 = 0x8000000000000001LL; /*0x100ae15bc*/
    if ( v39 ) /*0x100ae15c2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v39, 1); /*0x100ae15d4*/
    goto LABEL_68; /*0x100ae15d9*/
  }
  std::path::Path::to_path_buf::h73855ce4b54f7174(v69, a2, v64); /*0x100ae14db*/
  v61 = v77; /*0x100ae14e7*/
  *(_QWORD *)(v77 + 16) = *(_QWORD *)&v69[1]; /*0x100ae14eb*/
  *(_OWORD *)v61 = v69[0]; /*0x100ae1501*/
  *(_QWORD *)(v61 + 24) = v80; /*0x100ae1508*/
  *(_QWORD *)(v61 + 32) = v75; /*0x100ae1510*/
  *(_QWORD *)(v61 + 40) = v71; /*0x100ae151b*/
  *(_QWORD *)(v61 + 48) = v39; /*0x100ae151f*/
  *(_QWORD *)(v61 + 56) = v82; /*0x100ae1527*/
  *(_QWORD *)(v61 + 64) = v48; /*0x100ae152b*/
  if ( v76 ) /*0x100ae1536*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v76, 1); /*0x100ae1544*/
  if ( __n ) /*0x100ae1550*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, __n, 1); /*0x100ae155b*/
  return (void *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v67); /*0x100ae0ba3*/
}