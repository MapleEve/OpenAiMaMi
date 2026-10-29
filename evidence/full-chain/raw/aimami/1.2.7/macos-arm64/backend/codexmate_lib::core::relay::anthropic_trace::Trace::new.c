// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::Trace::new::h62f273261fe4ead5; addr: 0x1005d8d60; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::Trace::new::h62f273261fe4ead5(
        void *a1,
        void *a2,
        void *a3,
        size_t a4,
        void *a5,
        size_t a6,
        double a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rax
  __int64 v21; // rbx
  void *v22; // rdi
  __int64 v23; // rdx
  size_t v24; // r13
  _DWORD *v25; // rax
  signed __int64 v26; // r12
  __int64 v27; // rax
  int v28; // ecx
  char v29; // r15
  __int64 v30; // rcx
  char v31; // al
  __int64 *v32; // rdi
  _QWORD *v33; // rsi
  __int64 v34; // rdx
  void *v35; // rax
  __int64 v36; // rdx
  void *v37; // rbx
  __int64 v38; // r14
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // r15
  _QWORD *v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  void *v50; // rbx
  __int64 v51; // r14
  __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // r15
  __int64 *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rsi
  void *v59; // rax
  char v60; // r15
  __int64 v61; // rdx
  __int64 v62; // r12
  char v63; // al
  __int64 v64; // r15
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 *v67; // rdi
  _QWORD *v68; // rsi
  __int64 v69; // rdx
  _WORD *v70; // rax
  char *v71; // rax
  __int64 v72; // rdx
  size_t v73; // r14
  __int64 v74; // r12
  char *v75; // r13
  __int64 v76; // rax
  __int64 v77; // r15
  __int64 v78; // rdx
  void *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 __src[46]; // [rsp+8h] [rbp-248h] BYREF
  void *v85; // [rsp+178h] [rbp-D8h]
  size_t v86; // [rsp+180h] [rbp-D0h]
  void *v87; // [rsp+188h] [rbp-C8h]
  void *v88; // [rsp+190h] [rbp-C0h]
  size_t v89; // [rsp+198h] [rbp-B8h]
  __int64 v90; // [rsp+1A0h] [rbp-B0h]
  void *v91; // [rsp+1A8h] [rbp-A8h]
  __int64 v92; // [rsp+1B0h] [rbp-A0h] BYREF
  __int64 v93; // [rsp+1B8h] [rbp-98h]
  __int64 v94; // [rsp+1C0h] [rbp-90h]
  _QWORD v95[2]; // [rsp+1C8h] [rbp-88h] BYREF
  __int64 v96; // [rsp+1D8h] [rbp-78h]
  void *v97; // [rsp+1E0h] [rbp-70h]
  __int64 v98; // [rsp+1E8h] [rbp-68h] BYREF
  void *v99; // [rsp+1F0h] [rbp-60h]
  size_t __n; // [rsp+1F8h] [rbp-58h]
  __int64 v101; // [rsp+200h] [rbp-50h]
  __int64 v102; // [rsp+208h] [rbp-48h] BYREF
  __int64 v103; // [rsp+210h] [rbp-40h]
  size_t v104; // [rsp+218h] [rbp-38h]
  __int64 v105; // [rsp+220h] [rbp-30h]

  v97 = a2; /*0x1005d8d80*/
  v85 = a1; /*0x1005d8d84*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v98); /*0x1005d8d92*/
  v102 = 0; /*0x1005d8d97*/
  v103 = 1; /*0x1005d8d9f*/
  v104 = 0; /*0x1005d8da7*/
  __src[2] = 1610612768; /*0x1005d8daf*/
  __src[0] = (__int64)&v102; /*0x1005d8dbe*/
  __src[1] = (__int64)&anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1174; /*0x1005d8dcc*/
  if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(&v98, __src) ) /*0x1005d8ddd*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005d9896*/
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1175,
      55,
      &v92,
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1216,
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1177);
  v87 = a3; /*0x1005d8dea*/
  v86 = a4; /*0x1005d8df1*/
  v15 = v102; /*0x1005d8df8*/
  v16 = v103; /*0x1005d8dfc*/
  v17 = v104; /*0x1005d8e00*/
  v18 = std::time::Instant::now::hda76af2c3a449055(a7); /*0x1005d8e04*/
  __src[2] = v15; /*0x1005d8e4b*/
  __src[3] = v16; /*0x1005d8e52*/
  __src[4] = v17; /*0x1005d8e59*/
  __src[0] = 1; /*0x1005d8e60*/
  __src[1] = 1; /*0x1005d8e6b*/
  __src[5] = v18; /*0x1005d8e76*/
  LODWORD(__src[6]) = v19; /*0x1005d8e7d*/
  __src[7] = 0; /*0x1005d8e83*/
  LOBYTE(__src[8]) = 0; /*0x1005d8e8e*/
  __src[9] = 0; /*0x1005d8e95*/
  __src[11] = 0; /*0x1005d8ea0*/
  __src[13] = 0; /*0x1005d8eab*/
  __src[16] = 0; /*0x1005d8eb6*/
  __src[19] = 0; /*0x1005d8ec1*/
  __src[20] = 8; /*0x1005d8ecc*/
  memset(&__src[21], 0, 24); /*0x1005d8eed*/
  __src[24] = 8; /*0x1005d8ef8*/
  __src[25] = 0; /*0x1005d8f03*/
  __src[26] = 0; /*0x1005d8f0e*/
  __src[27] = (__int64)&anon_4bf7b7c8c09ec04f58b93d1c5edcde78_508; /*0x1005d8f20*/
  __src[28] = 7; /*0x1005d8f27*/
  __src[29] = (__int64)"nonesluglogsnameroletoolstopseedautolastNULL"; /*0x1005d8f39*/
  __src[30] = 4; /*0x1005d8f40*/
  memset(&__src[31], 0, 110); /*0x1005d8f4b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v98, __src, v19); /*0x1005d8fa3*/
  v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(360, 8); /*0x1005d8fb2*/
  if ( !v20 ) /*0x1005d8fba*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 360); /*0x1005d986e*/
  v21 = (__int64)v20; /*0x1005d8fc0*/
  v88 = a5; /*0x1005d8fc3*/
  v89 = a6; /*0x1005d8fca*/
  v22 = v20; /*0x1005d8fdd*/
  memcpy(v20, __src, 0x168u); /*0x1005d8fe0*/
  v90 = v21; /*0x1005d8fe5*/
  __src[45] = v21; /*0x1005d8fec*/
  v95[0] = 0; /*0x1005d8ff3*/
  v96 = 0; /*0x1005d8ffe*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, __src, v23); /*0x1005d9006*/
  v24 = 7; /*0x1005d900b*/
  v25 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005d901b*/
  if ( !v25 ) /*0x1005d9023*/
    goto LABEL_88; /*0x1005d9023*/
  v26 = 0x8000000000000000LL; /*0x1005d902c*/
  *(_DWORD *)((char *)v25 + 3) = 1953719669; /*0x1005d9036*/
  *v25 = 1970365810; /*0x1005d903d*/
  v98 = 7; /*0x1005d9043*/
  v99 = v25; /*0x1005d904b*/
  __n = 7; /*0x1005d904f*/
  codexmate_lib::core::relay::proxy_trace::CURRENT::__KEY::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h7dcbea31deb700d0(); /*0x1005d905e*/
  v28 = *(unsigned __int8 *)(v27 + 64); /*0x1005d9060*/
  v29 = 1; /*0x1005d9064*/
  if ( v28 != 1 ) /*0x1005d906a*/
  {
    if ( v28 == 2 ) /*0x1005d906f*/
    {
LABEL_10:
      v31 = 0; /*0x1005d90b0*/
      goto LABEL_11; /*0x1005d90b0*/
    }
    v17 = v27; /*0x1005d9078*/
    std::sys::thread_local::destructors::list::register::haf51cfcb91ad50b1( /*0x1005d907e*/
      v27,
      std::sys::thread_local::native::eager::destroy::hbd26d4af1e92a27a);
    v27 = v17; /*0x1005d9083*/
    *(_BYTE *)(v17 + 64) = 1; /*0x1005d9086*/
  }
  v30 = *(_QWORD *)v27; /*0x1005d908b*/
  if ( *(_QWORD *)v27 >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x1005d9096*/
    core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_101AAD280); /*0x1005d98a4*/
  *(_QWORD *)v27 = v30 + 1; /*0x1005d90a0*/
  if ( *(_QWORD *)(v27 + 8) == 0x8000000000000000LL ) /*0x1005d90a7*/
  {
    *(_QWORD *)v27 = v30; /*0x1005d90ad*/
    goto LABEL_10; /*0x1005d90ad*/
  }
  v42 = (_QWORD *)v27; /*0x1005d91d4*/
  v43 = v27 + 8; /*0x1005d91da*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v27 + 8); /*0x1005d91e5*/
  v26 = __src[0]; /*0x1005d91ea*/
  --*v42; /*0x1005d91f1*/
  v91 = (void *)__src[1]; /*0x1005d91fc*/
  v24 = __src[2]; /*0x1005d9203*/
  if ( v26 < (__int64)0x8000000000000002LL ) /*0x1005d921b*/
  {
    v31 = 0; /*0x1005d9221*/
    v26 = 0x8000000000000000LL; /*0x1005d9223*/
    goto LABEL_11; /*0x1005d9226*/
  }
  if ( __src[2] < 0 ) /*0x1005d935d*/
  {
    v55 = 0; /*0x1005d9363*/
    goto LABEL_38; /*0x1005d9363*/
  }
  if ( __src[2] ) /*0x1005d94c7*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v43, v44); /*0x1005d94c9*/
    v55 = 1; /*0x1005d94ce*/
    v65 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x1005d94dc*/
    if ( !v65 ) /*0x1005d94e4*/
LABEL_38:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v55, v24); /*0x1005d9366*/
    v17 = v65; /*0x1005d94ea*/
  }
  else
  {
    v17 = 1; /*0x1005d9513*/
  }
  memcpy((void *)v17, v91, v24); /*0x1005d9526*/
  v31 = 3; /*0x1005d952b*/
  v29 = 0; /*0x1005d952d*/
LABEL_11:
  LOBYTE(__src[0]) = v31; /*0x1005d90b2*/
  __src[1] = v24; /*0x1005d90b8*/
  __src[2] = v17; /*0x1005d90bf*/
  __src[3] = v24; /*0x1005d90c6*/
  v32 = &v102; /*0x1005d90cd*/
  v33 = v95; /*0x1005d90d1*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v102, v95, &v98, __src); /*0x1005d90e3*/
  if ( (_BYTE)v102 != 6 ) /*0x1005d90ec*/
  {
    v32 = &v102; /*0x1005d90ee*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v102); /*0x1005d90f2*/
  }
  if ( !((v26 == 0) | (unsigned __int8)v29) ) /*0x1005d90fd*/
  {
    v32 = (__int64 *)v91; /*0x1005d9107*/
    v33 = (_QWORD *)v26; /*0x1005d910e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v26, 1); /*0x1005d9111*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v33, v34); /*0x1005d9116*/
  v24 = 12; /*0x1005d911b*/
  v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1005d912b*/
  if ( !v35 ) /*0x1005d9133*/
    goto LABEL_88; /*0x1005d9133*/
  qmemcpy(v35, "provider_tag", 12); /*0x1005d9146*/
  v92 = 12; /*0x1005d9153*/
  v93 = (__int64)v35; /*0x1005d915e*/
  v94 = 12; /*0x1005d9165*/
  codexmate_lib::core::relay::proxy_trace::fingerprint::hcfaf7c8bd06e12aa( /*0x1005d918b*/
    (__int64)&v98,
    byte_1016FC260,
    8u,
    v85,
    (size_t)v97);
  v37 = v99; /*0x1005d9190*/
  v38 = __n; /*0x1005d9194*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1005d919b*/
  {
    v39 = 0; /*0x1005d919d*/
    goto LABEL_18; /*0x1005d919d*/
  }
  if ( __n ) /*0x1005d91b0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v98, byte_1016FC260, v36); /*0x1005d91b2*/
    v39 = 1; /*0x1005d91b7*/
    v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v38, 1); /*0x1005d91c5*/
    if ( !v40 ) /*0x1005d91cd*/
LABEL_18:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v39, v38); /*0x1005d91a0*/
    v41 = v40; /*0x1005d91cf*/
  }
  else
  {
    v41 = 1; /*0x1005d922b*/
  }
  memcpy((void *)v41, v37, v38); /*0x1005d923a*/
  LOBYTE(__src[0]) = 3; /*0x1005d923f*/
  __src[1] = v38; /*0x1005d9246*/
  __src[2] = v41; /*0x1005d924d*/
  __src[3] = v38; /*0x1005d9254*/
  v45 = &v102; /*0x1005d925b*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v102, v95, &v92, __src); /*0x1005d9274*/
  if ( (_BYTE)v102 != 6 ) /*0x1005d927d*/
  {
    v45 = &v102; /*0x1005d927f*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v102); /*0x1005d9283*/
  }
  v47 = v98; /*0x1005d9288*/
  if ( v98 ) /*0x1005d928f*/
  {
    v45 = (__int64 *)v37; /*0x1005d9296*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v98, 1); /*0x1005d9299*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v47, v46); /*0x1005d929e*/
  v24 = 9; /*0x1005d92a3*/
  v48 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x1005d92b3*/
  if ( !v48 ) /*0x1005d92bb*/
    goto LABEL_88; /*0x1005d92bb*/
  *(_QWORD *)v48 = 0x61745F6C65646F6DLL; /*0x1005d92ce*/
  *(_BYTE *)(v48 + 8) = 103; /*0x1005d92d1*/
  v92 = 9; /*0x1005d92d6*/
  v93 = v48; /*0x1005d92e1*/
  v94 = 9; /*0x1005d92e8*/
  codexmate_lib::core::relay::proxy_trace::fingerprint::hcfaf7c8bd06e12aa( /*0x1005d9311*/
    (__int64)&v98,
    anon_4bf7b7c8c09ec04f58b93d1c5edcde78_295,
    5u,
    v87,
    v86);
  v50 = v99; /*0x1005d9316*/
  v51 = __n; /*0x1005d931a*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1005d9321*/
  {
    v52 = 0; /*0x1005d9323*/
    goto LABEL_32; /*0x1005d9323*/
  }
  if ( __n ) /*0x1005d9336*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1005d9338*/
      &v98,
      anon_4bf7b7c8c09ec04f58b93d1c5edcde78_295,
      v49);
    v52 = 1; /*0x1005d933d*/
    v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v51, 1); /*0x1005d934b*/
    if ( !v53 ) /*0x1005d9353*/
LABEL_32:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v52, v51); /*0x1005d9326*/
    v54 = v53; /*0x1005d9355*/
  }
  else
  {
    v54 = 1; /*0x1005d9376*/
  }
  memcpy((void *)v54, v50, v51); /*0x1005d9385*/
  LOBYTE(__src[0]) = 3; /*0x1005d938a*/
  __src[1] = v51; /*0x1005d9391*/
  __src[2] = v54; /*0x1005d9398*/
  __src[3] = v51; /*0x1005d939f*/
  v56 = &v102; /*0x1005d93a6*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v102, v95, &v92, __src); /*0x1005d93bf*/
  if ( (_BYTE)v102 != 6 ) /*0x1005d93c8*/
  {
    v56 = &v102; /*0x1005d93ca*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v102); /*0x1005d93ce*/
  }
  v58 = v98; /*0x1005d93d3*/
  if ( v98 ) /*0x1005d93da*/
  {
    v56 = (__int64 *)v50; /*0x1005d93e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v98, 1); /*0x1005d93e4*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, v58, v57); /*0x1005d93e9*/
  v24 = 16; /*0x1005d93ee*/
  v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x1005d93fe*/
  if ( !v59 ) /*0x1005d9406*/
    goto LABEL_88; /*0x1005d9406*/
  qmemcpy(v59, "conversation_tag", 16); /*0x1005d9427*/
  v98 = 16; /*0x1005d942a*/
  v99 = v59; /*0x1005d9432*/
  __n = 16; /*0x1005d9436*/
  v60 = 1; /*0x1005d943e*/
  if ( !v88 ) /*0x1005d944b*/
  {
    v63 = 0; /*0x1005d9497*/
    v62 = 0x8000000000000000LL; /*0x1005d9499*/
    goto LABEL_62; /*0x1005d94a3*/
  }
  codexmate_lib::core::relay::proxy_trace::fingerprint::hcfaf7c8bd06e12aa( /*0x1005d9467*/
    (__int64)__src,
    "conversation",
    0xCu,
    v88,
    v89);
  v62 = __src[0]; /*0x1005d946c*/
  v97 = (void *)__src[1]; /*0x1005d947a*/
  if ( __src[0] != 0x8000000000000000LL ) /*0x1005d948b*/
  {
    v51 = __src[2]; /*0x1005d94a8*/
    if ( __src[2] < 0 ) /*0x1005d94b2*/
    {
      v64 = 0; /*0x1005d94b4*/
      goto LABEL_51; /*0x1005d94b4*/
    }
    if ( __src[2] ) /*0x1005d94ef*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, "conversation", v61); /*0x1005d94f1*/
      v64 = 1; /*0x1005d94f6*/
      v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v51, 1); /*0x1005d9504*/
      if ( !v66 ) /*0x1005d950c*/
LABEL_51:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v64, v51); /*0x1005d94b7*/
      v24 = v66; /*0x1005d950e*/
    }
    else
    {
      v24 = 1; /*0x1005d9535*/
    }
    memcpy((void *)v24, v97, v51); /*0x1005d9545*/
    v63 = 3; /*0x1005d954a*/
    v60 = 0; /*0x1005d954c*/
    goto LABEL_62; /*0x1005d954c*/
  }
  v63 = 0; /*0x1005d948d*/
  v62 = 0x8000000000000000LL; /*0x1005d948f*/
LABEL_62:
  LOBYTE(__src[0]) = v63; /*0x1005d954f*/
  __src[1] = v51; /*0x1005d9555*/
  __src[2] = v24; /*0x1005d955c*/
  __src[3] = v51; /*0x1005d9563*/
  v67 = &v102; /*0x1005d956a*/
  v68 = v95; /*0x1005d956e*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v102, v95, &v98, __src); /*0x1005d9580*/
  if ( (_BYTE)v102 != 6 ) /*0x1005d9589*/
  {
    v67 = &v102; /*0x1005d958b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v102); /*0x1005d958f*/
  }
  if ( !((v62 == 0) | (unsigned __int8)v60) ) /*0x1005d959a*/
  {
    v67 = (__int64 *)v97; /*0x1005d95a4*/
    v68 = (_QWORD *)v62; /*0x1005d95a8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v62, 1); /*0x1005d95ab*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67, v68, v69); /*0x1005d95b0*/
  v24 = 6; /*0x1005d95b5*/
  v70 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1005d95c5*/
  if ( !v70 ) /*0x1005d95cd*/
    goto LABEL_88; /*0x1005d95cd*/
  v70[2] = 29810; /*0x1005d95de*/
  *(_DWORD *)v70 = 1868981861; /*0x1005d95e4*/
  v98 = 6; /*0x1005d95ea*/
  v99 = v70; /*0x1005d95f2*/
  __n = 6; /*0x1005d95f6*/
  v71 = codexmate_lib::core::relay::anthropic_trace::effort_tag::hd8014037fbb3639a(a9, a10); /*0x1005d95fe*/
  v73 = v72; /*0x1005d9603*/
  if ( v72 < 0 ) /*0x1005d9609*/
  {
    v74 = 0; /*0x1005d960b*/
    goto LABEL_69; /*0x1005d960b*/
  }
  if ( v72 ) /*0x1005d961e*/
  {
    v75 = v71; /*0x1005d9620*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a9, a10, v72); /*0x1005d9623*/
    v74 = 1; /*0x1005d9628*/
    v76 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v73, 1); /*0x1005d9636*/
    if ( !v76 ) /*0x1005d963e*/
LABEL_69:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v74, v73); /*0x1005d960e*/
    v77 = v76; /*0x1005d9640*/
    v71 = v75; /*0x1005d9643*/
  }
  else
  {
    v77 = 1; /*0x1005d9648*/
  }
  memcpy((void *)v77, v71, v73); /*0x1005d9657*/
  LOBYTE(__src[0]) = 3; /*0x1005d965c*/
  __src[1] = v73; /*0x1005d9663*/
  __src[2] = v77; /*0x1005d966a*/
  __src[3] = v73; /*0x1005d9671*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v102, v95, &v98, __src); /*0x1005d968e*/
  if ( (_BYTE)v102 != 6 ) /*0x1005d9697*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v102); /*0x1005d969d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v102, v95, v78); /*0x1005d96a2*/
  v24 = 15; /*0x1005d96a7*/
  v79 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1005d96b7*/
  if ( !v79 ) /*0x1005d96bf*/
    goto LABEL_88; /*0x1005d96bf*/
  qmemcpy(v79, "search_disabled", 15); /*0x1005d96e1*/
  v98 = 15; /*0x1005d96e4*/
  v99 = v79; /*0x1005d96ec*/
  __n = 15; /*0x1005d96f0*/
  LOBYTE(__src[0]) = 1; /*0x1005d96f8*/
  BYTE1(__src[0]) = a11; /*0x1005d96ff*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v102, v95, &v98, __src); /*0x1005d971b*/
  if ( (_BYTE)v102 != 6 ) /*0x1005d9724*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v102); /*0x1005d972a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v102, v95, v80); /*0x1005d972f*/
  v24 = 5; /*0x1005d9734*/
  v81 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1005d9744*/
  if ( !v81 ) /*0x1005d974c*/
LABEL_88:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24); /*0x1005d98d8*/
  *(_BYTE *)(v81 + 4) = 101; /*0x1005d9759*/
  *(_DWORD *)v81 = 1885431923; /*0x1005d975d*/
  v92 = 5; /*0x1005d9763*/
  v93 = v81; /*0x1005d976e*/
  v94 = 5; /*0x1005d9775*/
  codexmate_lib::core::relay::anthropic_trace::request_shape::h669d07fb314d728d(__src, a8, 0); /*0x1005d9789*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h36f13a05a36237ce( /*0x1005d9799*/
    &v102,
    __src);
  if ( (_BYTE)v102 == 6 ) /*0x1005d97a2*/
  {
    v98 = v103; /*0x1005d98af*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005d98d1*/
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1219,
      43,
      &v98,
      &off_101AACF78,
      &off_101AAC6B0);
  }
  v101 = v105; /*0x1005d97ac*/
  __n = v104; /*0x1005d97b4*/
  v99 = (void *)v103; /*0x1005d97c0*/
  v98 = v102; /*0x1005d97c4*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v102, v95, &v92, &v98); /*0x1005d97de*/
  if ( (_BYTE)v102 != 6 ) /*0x1005d97e7*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v102); /*0x1005d97ed*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(__src); /*0x1005d97f9*/
  __src[1] = v95[0]; /*0x1005d9809*/
  __src[2] = v95[1]; /*0x1005d9810*/
  __src[3] = v96; /*0x1005d981b*/
  LOBYTE(__src[0]) = 5; /*0x1005d9822*/
  v82 = v90; /*0x1005d9829*/
  codexmate_lib::core::relay::anthropic_trace::Inner::emit::h84842d22e12e8a46( /*0x1005d984a*/
    v90 + 16,
    (__int64)"beginmessage_startmessage_stopmessage_deltaupstream_error/delta/type",
    5,
    (__int64)__src);
  return v82; /*0x1005d9852*/
}