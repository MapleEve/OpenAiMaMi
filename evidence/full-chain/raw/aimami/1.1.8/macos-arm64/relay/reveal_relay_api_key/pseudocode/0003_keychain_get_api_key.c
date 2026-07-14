// owner_va=0x100415d60
// owner_symbol=codexmate_lib::core::relay::keychain::get_api_key::h8c18c83d5092fbfd
// depth=2 from command owner
// size=0xfcd(4045B) instructions=793 basic_blocks=144 caller_count=6 (shared helper) callee_count=26
// callers (all 6): codex_diagnostic::run_diagnostics@0x1003d1c30, storage::hydrate_secrets@0x1004b0f00, storage::lazy_load_api_key@0x1004b13f0, RelayManager::reveal_api_key@0x1005c0ce0 (this leaf), RelayManager::resolve_draft_api_key@0x1005c2400, relay::io::export_to_file@0x100691c20
// behavior: 2-tier local lookup -- (1) reads a local JSON index file "secrets.json" (12B literal @0x1012c46b0) inside a "keys" subdirectory (4B literal @0x1012c47ff, path-joined under a caller-supplied base dir), parses it via serde_json into a hashbrown HashMap-shaped table, SIMD-accelerated hash probe (BuildHasher::hash_one + RawTable) keyed by providerId, memcmp-confirms match, base64-decodes the cached value, UTF8-validates -> returns cached key; (2) on cache-miss falls through to mac_keychain::get() (actual macOS Keychain Services read); if keychain hit, computes SHA-256(hostname + \"USER\"-or-\"USERNAME\" env var, formatted string) as a machine-binding value and calls write_key_file() to populate the local file cache with it (write-through cache-fill on keychain hit); logs via the `log` crate at target "codexmate_lib::core::relay::keychain" (src/core/relay/keychain.rs, confirmed literal source path)

_QWORD *__fastcall codexmate_lib::core::relay::keychain::get_api_key::h8c18c83d5092fbfd(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        size_t a4)
{
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  size_t v10; // r13
  __int64 v11; // rsi
  void *v12; // r14
  size_t v13; // r15
  _QWORD *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm1
  __int64 v29; // rsi
  __m128i v30; // xmm2
  unsigned __int64 v31; // rax
  __m128i v32; // xmm3
  __m128i v33; // xmm0
  __int64 v35; // r15
  int v36; // eax
  bool v37; // zf
  const void *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // r15
  __int64 v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rsi
  unsigned __int64 v45; // rsi
  size_t v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rbx
  __int64 v49; // r15
  __int64 v51; // r14
  __int64 v52; // rsi
  __int64 v53; // r15
  unsigned __int64 v54; // r14
  __int64 v55; // r12
  _OWORD *v56; // rdi
  __int64 v57; // r14
  __int64 v58; // r14
  __int64 v59; // r15
  __int64 v60; // r13
  __int64 v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // rdx
  _OWORD *v64; // r15
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // r14
  int *v68; // r15
  int *v69; // rdi
  __int64 v70; // r14
  int *v71; // r15
  __int64 v72; // rax
  char *v73; // rsi
  size_t v74; // rbx
  char *v75; // r12
  __int64 v76; // r15
  unsigned __int64 v77; // r14
  __m128i *v78; // rax
  __m128i v79; // xmm0
  __m128i v80; // xmm1
  __m128i v81; // xmm2
  __int64 v82; // r14
  __m128i v83; // [rsp+10h] [rbp-290h] BYREF
  __int128 v84; // [rsp+20h] [rbp-280h] BYREF
  __int128 v85; // [rsp+30h] [rbp-270h]
  __int128 v86; // [rsp+40h] [rbp-260h]
  __int64 v87; // [rsp+50h] [rbp-250h]
  unsigned __int64 v88; // [rsp+58h] [rbp-248h]
  __int64 v89; // [rsp+68h] [rbp-238h] BYREF
  __int64 v90; // [rsp+70h] [rbp-230h]
  __int64 v91; // [rsp+78h] [rbp-228h]
  __int64 v92; // [rsp+80h] [rbp-220h]
  _QWORD v93[2]; // [rsp+88h] [rbp-218h] BYREF
  unsigned __int64 v94; // [rsp+98h] [rbp-208h] BYREF
  size_t v95; // [rsp+A0h] [rbp-200h]
  __int64 v96; // [rsp+A8h] [rbp-1F8h]
  __m128i si128; // [rsp+B0h] [rbp-1F0h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-1D8h] BYREF
  __m128i *v99; // [rsp+D0h] [rbp-1D0h]
  __int64 v100; // [rsp+D8h] [rbp-1C8h]
  int v101; // [rsp+E0h] [rbp-1C0h] BYREF
  __int64 v102; // [rsp+E8h] [rbp-1B8h]
  int *v103; // [rsp+F0h] [rbp-1B0h]
  __int64 v104; // [rsp+F8h] [rbp-1A8h]
  __m128i v105; // [rsp+100h] [rbp-1A0h] BYREF
  _QWORD v106[14]; // [rsp+110h] [rbp-190h] BYREF
  __int64 v107; // [rsp+180h] [rbp-120h] BYREF
  __int64 v108; // [rsp+188h] [rbp-118h]
  __int64 v109; // [rsp+190h] [rbp-110h]
  __int64 v110; // [rsp+198h] [rbp-108h] BYREF
  __int64 v111; // [rsp+1A0h] [rbp-100h]
  __int64 v112; // [rsp+1A8h] [rbp-F8h]
  __int64 v113; // [rsp+1B0h] [rbp-F0h]
  __int64 v114; // [rsp+1B8h] [rbp-E8h]
  __int64 v115; // [rsp+1C0h] [rbp-E0h]
  __int64 v116; // [rsp+1C8h] [rbp-D8h]
  _OWORD v117[7]; // [rsp+1D0h] [rbp-D0h] BYREF
  void *__s1; // [rsp+240h] [rbp-60h] BYREF
  size_t __n; // [rsp+248h] [rbp-58h]
  __int64 v120; // [rsp+250h] [rbp-50h]
  _QWORD *v121; // [rsp+258h] [rbp-48h]
  __int64 v122; // [rsp+260h] [rbp-40h]
  __int64 v123; // [rsp+268h] [rbp-38h]
  size_t v124; // [rsp+270h] [rbp-30h]

  v6 = a1; /*0x100415d7a*/
  __s1 = a3; /*0x100415d7d*/
  __n = a4; /*0x100415d81*/
  v7 = *(_QWORD *)(a2 + 592); /*0x100415d8c*/
  v114 = *(_QWORD *)(a2 + 584); /*0x100415da7*/
  v113 = v7; /*0x100415db1*/
  std::path::Path::_join::hb1a495d4f06b13b8(v117, v114, v7, &anon_0eedd02070250de7472aa97ee6b1a8ea_795, 4); /*0x100415db8*/
  v8 = *((_QWORD *)&v117[0] + 1); /*0x100415dbd*/
  std::path::Path::_join::hb1a495d4f06b13b8(v106, *((_QWORD *)&v117[0] + 1), *(_QWORD *)&v117[1], a3, a4); /*0x100415ddb*/
  if ( *(_QWORD *)&v117[0] ) /*0x100415dea*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, *(_QWORD *)&v117[0], 1); /*0x100415df4*/
  v122 = v106[1]; /*0x100415e0e*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v117, v106[1], v106[2]); /*0x100415e12*/
  v9 = *(_QWORD *)&v117[0]; /*0x100415e21*/
  if ( !__OFSUB__(-*(_QWORD *)&v117[0], 1) ) /*0x100415e2e*/
  {
    v121 = a1; /*0x100415f40*/
    v19 = *((_QWORD *)&v117[0] + 1); /*0x100415f44*/
    v20 = *((_QWORD *)&v117[0] + 1); /*0x100415f52*/
    v21 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a( /*0x100415f55*/
            *((_QWORD *)&v117[0] + 1),
            *(_QWORD *)&v117[1]);
    v10 = v22; /*0x100415f5a*/
    if ( v22 < 0 ) /*0x100415f60*/
    {
      v23 = 0; /*0x100415f66*/
      goto LABEL_17; /*0x100415f66*/
    }
    v38 = (const void *)v21; /*0x10041615c*/
    if ( v22 ) /*0x100416162*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20); /*0x100416168*/
      v23 = 1; /*0x10041616d*/
      v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x10041617b*/
      if ( !v39 ) /*0x100416183*/
LABEL_17:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, v10); /*0x100415f69*/
      v40 = v39; /*0x100416189*/
    }
    else
    {
      v40 = 1; /*0x100416472*/
    }
    v8 = v40; /*0x100416477*/
    memcpy((void *)v40, v38, v10); /*0x100416480*/
    if ( v9 ) /*0x100416488*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v9, 1); /*0x100416495*/
    v6 = v121; /*0x10041649a*/
    v11 = v106[0]; /*0x1004164a8*/
    if ( v106[0] ) /*0x1004164b2*/
      goto LABEL_6; /*0x1004164b2*/
    goto LABEL_7; /*0x1004164b2*/
  }
  if ( (BYTE8(v117[0]) & 3) == 1 ) /*0x100415e43*/
  {
    v10 = 0x8000000000000000LL; /*0x1004161af*/
    v41 = *((_QWORD *)&v117[0] + 1) - 1LL; /*0x1004161b5*/
    v42 = *(_QWORD *)(*((_QWORD *)&v117[0] + 1) - 1LL); /*0x1004161b9*/
    v8 = *(_QWORD *)(*((_QWORD *)&v117[0] + 1) + 7LL); /*0x1004161bd*/
    if ( *(_QWORD *)v8 ) /*0x1004161c1*/
      (*(void (__fastcall **)(__int64))v8)(v42); /*0x1004161cc*/
    v43 = *(_QWORD *)(v8 + 8); /*0x1004161ce*/
    if ( v43 ) /*0x1004161d5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v43, *(_QWORD *)(v8 + 16)); /*0x1004161de*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 24, 8); /*0x1004161f0*/
    v6 = a1; /*0x1004161f5*/
    v11 = v106[0]; /*0x1004161fe*/
    if ( v106[0] ) /*0x100416208*/
      goto LABEL_6; /*0x100416208*/
  }
  else
  {
    v10 = 0x8000000000000000LL; /*0x100415e49*/
    v11 = v106[0]; /*0x100415e4c*/
    if ( v106[0] ) /*0x100415e56*/
LABEL_6:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v11, 1); /*0x100415e58*/
  }
LABEL_7:
  if ( v10 != 0x8000000000000000LL && v10 ) /*0x100415f7c*/
  {
    v6[1] = v10; /*0x100415f82*/
    v6[2] = v8; /*0x100415f87*/
LABEL_20:
    v6[3] = v10; /*0x100415f8c*/
LABEL_58:
    *v6 = 0; /*0x10041640e*/
    return v6; /*0x10041640e*/
  }
  v12 = __s1; /*0x100415e6f*/
  v10 = __n; /*0x100415e73*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v94, v114, v113, &unk_1012C46B0, 12); /*0x100415e99*/
  v13 = v95; /*0x100415e9e*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v117, v95, v96); /*0x100415eb6*/
  v122 = *(_QWORD *)&v117[0]; /*0x100415ec2*/
  if ( *(_QWORD *)&v117[0] == 0x8000000000000000LL ) /*0x100415ec9*/
  {
    if ( (BYTE8(v117[0]) & 3) == 1 ) /*0x100415ede*/
    {
      v123 = v13; /*0x100415ee7*/
      v14 = v6; /*0x100415eeb*/
      v15 = *((_QWORD *)&v117[0] + 1) - 1LL; /*0x100415eee*/
      v16 = *(_QWORD *)(*((_QWORD *)&v117[0] + 1) - 1LL); /*0x100415ef2*/
      v17 = *(_QWORD *)(*((_QWORD *)&v117[0] + 1) + 7LL); /*0x100415ef6*/
      if ( *(_QWORD *)v17 ) /*0x100415efa*/
        (*(void (__fastcall **)(__int64))v17)(v16); /*0x100415f06*/
      v18 = *(_QWORD *)(v17 + 8); /*0x100415f08*/
      if ( v18 ) /*0x100415f10*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16)); /*0x100415f1a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24, 8); /*0x100415f2c*/
      v6 = v14; /*0x100415f31*/
      v13 = v123; /*0x100415f34*/
    }
    goto LABEL_43; /*0x100415f3b*/
  }
  v117[0] = *(_OWORD *)((char *)v117 + 8); /*0x100415fa4*/
  v117[1] = 0u; /*0x100415fb2*/
  v115 = *(_QWORD *)&v117[0]; /*0x100415fc8*/
  v117[2] = v117[0]; /*0x100415fcf*/
  serde_json::de::from_trait::h35a9cf09aba37601(v106, v117); /*0x100415feb*/
  v24 = v106[0]; /*0x100415ff0*/
  if ( !v106[0] ) /*0x100415ffa*/
  {
    v51 = v106[1]; /*0x10041642b*/
    if ( *(_QWORD *)v106[1] == 1 ) /*0x100416439*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v106[1] + 8LL); /*0x100416531*/
    }
    else if ( !*(_QWORD *)v106[1] ) /*0x100416432*/
    {
      v52 = *(_QWORD *)(v106[1] + 16LL); /*0x100416452*/
      if ( v52 ) /*0x100416459*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v106[1] + 8LL), v52, 1); /*0x100416468*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, 40, 8); /*0x10041654d*/
    v44 = v122; /*0x100416552*/
    if ( !v122 ) /*0x100416559*/
      goto LABEL_43; /*0x100416559*/
    goto LABEL_42; /*0x100416559*/
  }
  v93[1] = v106[5]; /*0x100416007*/
  v93[0] = v106[4]; /*0x100416015*/
  v92 = v106[3]; /*0x100416023*/
  v91 = v106[2]; /*0x100416038*/
  v90 = v106[1]; /*0x10041603f*/
  v89 = v106[0]; /*0x100416046*/
  if ( !v106[3] ) /*0x100416050*/
  {
LABEL_41:
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h37f7d692fde42b17(&v89); /*0x100416213*/
    v44 = v122; /*0x100416229*/
    if ( !v122 ) /*0x100416230*/
    {
LABEL_43:
      v45 = v94; /*0x100416243*/
      if ( !v94 ) /*0x10041624d*/
        goto LABEL_46; /*0x10041624d*/
      v46 = v13; /*0x100416254*/
      goto LABEL_45; /*0x100416254*/
    }
LABEL_42:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, v44, 1); /*0x100416232*/
    goto LABEL_43; /*0x10041623e*/
  }
  v121 = v6; /*0x100416056*/
  v25 = core::hash::BuildHasher::hash_one::h245728ff9d912134(v93, v12, v10); /*0x100416067*/
  _RCX = v25 >> 57; /*0x10041606f*/
  v27 = v90; /*0x100416073*/
  v28 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v25 >> 57), (__m128i)0LL); /*0x100416082*/
  v29 = 0; /*0x100416087*/
  v30 = (__m128i)-1LL; /*0x100416089*/
  while ( 1 ) /*0x10041608d*/
  {
    v31 = v27 & v25; /*0x10041608d*/
    v32 = _mm_loadu_si128((const __m128i *)(v24 + v31)); /*0x100416090*/
    v33 = _mm_cmpeq_epi8(v32, v28); /*0x100416099*/
    _R12D = _mm_movemask_epi8(v33); /*0x10041609d*/
    if ( _R12D ) /*0x1004160a5*/
      break; /*0x1004160a5*/
LABEL_29:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v32, v30)); /*0x10041613a*/
    v6 = v121; /*0x100416144*/
    if ( (_DWORD)_RCX ) /*0x100416148*/
      goto LABEL_41; /*0x100416148*/
    v25 = v31 + v29 + 16; /*0x10041614e*/
    v29 += 16; /*0x100416153*/
  }
  v124 = v31; /*0x1004160ab*/
  v123 = v13; /*0x1004160af*/
  v120 = v27; /*0x1004160b3*/
  v105 = v28; /*0x1004160b7*/
  v116 = v29; /*0x1004160bf*/
  si128 = v32; /*0x1004160c6*/
  while ( 1 ) /*0x1004160ce*/
  {
    __asm { tzcnt ecx, r12d } /*0x1004160ce*/
    _RCX = -(__int64)(v27 & (v31 + _RCX)); /*0x1004160d9*/
    if ( v10 == *(_QWORD *)(v24 + 48 * _RCX - 32) ) /*0x1004160e9*/
    {
      v35 = v24 + 48 * _RCX; /*0x1004160eb*/
      if ( !memcmp(v12, *(const void **)(v35 - 40), v10) ) /*0x1004160f8*/
        break; /*0x1004160f8*/
    }
    v36 = _R12D - 1; /*0x100416105*/
    LOWORD(v36) = _R12D & (_R12D - 1); /*0x10041610a*/
    v37 = (_WORD)v36 == 0; /*0x10041610a*/
    _R12D = v36; /*0x10041610e*/
    v31 = v124; /*0x100416111*/
    v13 = v123; /*0x100416115*/
    v27 = v120; /*0x100416119*/
    v28 = _mm_load_si128(&v105); /*0x10041611d*/
    v29 = v116; /*0x100416125*/
    v30 = (__m128i)-1LL; /*0x10041612c*/
    v32 = _mm_load_si128(&si128); /*0x100416130*/
    if ( v37 ) /*0x100416138*/
      goto LABEL_29; /*0x100416138*/
  }
  base64::engine::Engine::decode::inner::h6a6fd532ed40bccc( /*0x1004164d3*/
    v117,
    &unk_1012C46BC,
    *(_QWORD *)(v35 - 16),
    *(_QWORD *)(v35 - 8));
  v53 = v123; /*0x1004164ec*/
  if ( *(_QWORD *)&v117[0] != 0x8000000000000000LL ) /*0x1004164f0*/
  {
    v120 = *((_QWORD *)&v117[0] + 1); /*0x100416572*/
    v105.i64[0] = *(_QWORD *)&v117[0]; /*0x100416572*/
    v55 = *(_QWORD *)&v117[1]; /*0x100416576*/
    v56 = v117; /*0x10041657d*/
    hostname::get::hc653fae84de866de(v117); /*0x100416584*/
    v57 = *(_QWORD *)&v117[0]; /*0x100416589*/
    if ( *(_QWORD *)&v117[0] == 0x8000000000000000LL ) /*0x100416593*/
    {
      if ( (BYTE8(v117[0]) & 3) == 1 ) /*0x1004165a4*/
      {
        v58 = *((_QWORD *)&v117[0] + 1) - 1LL; /*0x1004165a6*/
        v59 = *(_QWORD *)(*((_QWORD *)&v117[0] + 1) - 1LL); /*0x1004165aa*/
        v60 = *(_QWORD *)(*((_QWORD *)&v117[0] + 1) + 7LL); /*0x1004165ae*/
        if ( *(_QWORD *)v60 ) /*0x1004165b2*/
          (*(void (__fastcall **)(__int64, double, double, double))v60)( /*0x1004165be*/
            v59,
            *(double *)v33.i64,
            *(double *)v28.i64,
            *(double *)v30.i64);
        v61 = *(_QWORD *)(v60 + 8); /*0x1004165c0*/
        if ( v61 ) /*0x1004165c7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v61, *(_QWORD *)(v60 + 16)); /*0x1004165d0*/
        v62 = 24; /*0x1004165d5*/
        v63 = 8; /*0x1004165da*/
        v56 = (_OWORD *)v58; /*0x1004165df*/
        goto LABEL_86; /*0x1004165e2*/
      }
    }
    else
    {
      v64 = *((_OWORD **)&v117[0] + 1); /*0x1004165e4*/
      v65 = *(_QWORD *)&v117[1]; /*0x1004165eb*/
      v56 = v117; /*0x1004165f2*/
      core::str::converts::from_utf8::hb32deb9559450f6e(v117, *((_QWORD *)&v117[0] + 1), *(_QWORD *)&v117[1]); /*0x1004165ff*/
      if ( LODWORD(v117[0]) != 1 ) /*0x10041660b*/
      {
        v111 = (__int64)v64; /*0x10041666a*/
        v112 = v65; /*0x100416671*/
        v110 = v57; /*0x100416678*/
LABEL_90:
        std::env::_var::h5297a832922dea45(&v101, "USER", 4, *(double *)v33.i64, *(double *)v28.i64, *(double *)v30.i64); /*0x10041667f*/
        if ( v101 != 1 ) /*0x10041669e*/
          goto LABEL_97; /*0x10041669e*/
        v67 = v102; /*0x1004166a4*/
        v68 = v103; /*0x1004166ab*/
        v69 = &v101; /*0x1004166b9*/
        std::env::_var::h5297a832922dea45( /*0x1004166c5*/
          &v101,
          "USERNAMEshortcutsegmentsoriginalROLLBACKnoneautohighUSER",
          8,
          *(double *)v33.i64,
          *(double *)v28.i64,
          *(double *)v30.i64);
        if ( 2 * v67 ) /*0x1004166ca*/
        {
          v69 = v68; /*0x1004166dc*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v67, 1); /*0x1004166e2*/
        }
        if ( v101 == 1 ) /*0x1004166ee*/
        {
          v70 = v102; /*0x1004166f0*/
          v71 = v103; /*0x1004166f7*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v69); /*0x1004166fe*/
          v72 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10041670d*/
          if ( !v72 ) /*0x100416715*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100416d26*/
          *(_WORD *)(v72 + 4) = 26989; /*0x10041671b*/
          *(_DWORD *)v72 = 1634560353; /*0x100416721*/
          v107 = 6; /*0x100416727*/
          v108 = v72; /*0x100416732*/
          v109 = 6; /*0x100416739*/
          if ( 2 * v70 ) /*0x100416744*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v70, 1); /*0x10041675c*/
        }
        else
        {
LABEL_97:
          v109 = v104; /*0x10041676a*/
          v108 = (__int64)v103; /*0x10041677f*/
          v107 = v102; /*0x100416786*/
        }
        v116 = v55; /*0x10041678d*/
        *(_QWORD *)&v117[0] = &v110; /*0x10041679b*/
        *((_QWORD *)&v117[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004167a9*/
        *(_QWORD *)&v117[1] = &v107; /*0x1004167b7*/
        *((_QWORD *)&v117[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004167be*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v106, &unk_101229124, v117); /*0x1004167da*/
        v124 = v106[0]; /*0x1004167e6*/
        v73 = (char *)v106[1]; /*0x1004167ea*/
        v74 = v106[2]; /*0x1004167f1*/
        v106[0] = 0xBB67AE856A09E667LL; /*0x100416868*/
        v106[1] = 0xA54FF53A3C6EF372LL; /*0x100416879*/
        v106[2] = 0x9B05688C510E527FLL; /*0x10041688a*/
        v106[3] = 0x5BE0CD191F83D9ABLL; /*0x10041689b*/
        memset(&v106[4], 0, 73); /*0x1004168a2*/
        if ( v74 >= 0x40 ) /*0x1004168b1*/
        {
          v106[4] = v74 >> 6; /*0x1004168c2*/
          v75 = v73; /*0x1004168d0*/
          sha2::sha256::compress256::hc74ebc2fd6208bb9(v106, v73); /*0x1004168d3*/
          v73 += v74 & 0x7FFFFFFFFFFFFFC0LL; /*0x1004168e9*/
          v74 &= 0x3Fu; /*0x1004168ec*/
        }
        else
        {
          v75 = v73; /*0x1004168b6*/
        }
        memcpy(&v106[5], v73, v74); /*0x1004168f5*/
        LOBYTE(v106[13]) = v74; /*0x1004168fa*/
        qmemcpy(v117, v106, sizeof(v117)); /*0x100416913*/
        v76 = BYTE8(v117[6]); /*0x10041691d*/
        v77 = _byteswap_uint64((*(_QWORD *)&v117[2] << 9) | (8 * (unsigned int)BYTE8(v117[6]))); /*0x100416938*/
        *((_BYTE *)&v117[2] + BYTE8(v117[6]) + 8) = 0x80; /*0x10041693b*/
        if ( (_DWORD)v76 == 63 || (__bzero((char *)&v117[2] + v76 + 9, v76 ^ 0x3F), ((unsigned int)v76 ^ 0x38) <= 7) ) /*0x100416969*/
        {
          v53 = v123; /*0x10041697a*/
          sha2::sha256::compress256::hc74ebc2fd6208bb9(v117, (char *)&v117[2] + 8); /*0x10041697e*/
          v86 = 0; /*0x100416987*/
          v85 = 0; /*0x10041698f*/
          v84 = 0; /*0x100416997*/
          v87 = 0; /*0x10041699f*/
          v88 = v77; /*0x1004169aa*/
          sha2::sha256::compress256::hc74ebc2fd6208bb9(v117, &v84); /*0x1004169c4*/
        }
        else
        {
          *(_QWORD *)&v117[6] = v77; /*0x1004169cb*/
          v53 = v123; /*0x1004169de*/
          sha2::sha256::compress256::hc74ebc2fd6208bb9(v117, (char *)&v117[2] + 8); /*0x1004169e2*/
        }
        v83 = (__m128i)v117[0]; /*0x1004169ee*/
        si128 = _mm_load_si128((const __m128i *)&v117[1]); /*0x1004169fd*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v117); /*0x100416a05*/
        v78 = (__m128i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x100416a14*/
        if ( !v78 ) /*0x100416a1c*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x100416d04*/
        v79 = _mm_load_si128((const __m128i *)&xmmword_1012C1900); /*0x100416a22*/
        v80 = _mm_shuffle_epi8(_mm_load_si128(&si128), v79); /*0x100416a32*/
        v81 = _mm_shuffle_epi8(_mm_load_si128(&v83), v79); /*0x100416a3f*/
        v98 = 32; /*0x100416a44*/
        v99 = v78; /*0x100416a4f*/
        *v78 = v81; /*0x100416a56*/
        v78[1] = v80; /*0x100416a5a*/
        v100 = 32; /*0x100416a5f*/
        if ( v124 ) /*0x100416a7b*/
          *(double *)v79.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v124, 1); /*0x100416a85*/
        v82 = v116; /*0x100416a94*/
        if ( v107 ) /*0x100416a9b*/
          *(double *)v79.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v107, 1); /*0x100416aa9*/
        if ( v110 ) /*0x100416ab8*/
          *(double *)v79.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v110, 1); /*0x100416ac6*/
        *(_QWORD *)&v117[0] = v120; /*0x100416ad2*/
        *((_QWORD *)&v117[0] + 1) = v120 + v82; /*0x100416ad9*/
        *(_QWORD *)&v117[1] = 0; /*0x100416ae0*/
        *((_QWORD *)&v117[1] + 1) = &v98; /*0x100416af2*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd20906aa780fb94e( /*0x100416b07*/
          &v84,
          v117,
          *(double *)v79.i64);
        v124 = *((_QWORD *)&v84 + 1); /*0x100416b21*/
        v10 = v85; /*0x100416b25*/
        core::str::converts::from_utf8::hb32deb9559450f6e(v106, *((_QWORD *)&v84 + 1), v85); /*0x100416b28*/
        v6 = v121; /*0x100416b2d*/
        if ( LOBYTE(v106[0]) ) /*0x100416b38*/
        {
          v54 = v124; /*0x100416b47*/
          if ( __OFSUB__(-(__int64)v84, 1) ) /*0x100416b4b*/
          {
            v124 = v10; /*0x100416b6a*/
            v10 = v106[1]; /*0x100416b6e*/
          }
          else
          {
            if ( (_QWORD)v84 ) /*0x100416b4d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v84, 1); /*0x100416b57*/
            v54 = 0x8000000000000000LL; /*0x100416b5c*/
          }
        }
        else
        {
          v54 = v84; /*0x100416b61*/
        }
        if ( v98 ) /*0x100416b7f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v98, 1); /*0x100416b8d*/
        if ( v105.i64[0] ) /*0x100416b9c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, v105.i64[0], 1); /*0x100416ba7*/
        goto LABEL_123; /*0x100416ba7*/
      }
      if ( v57 ) /*0x100416610*/
      {
        v63 = 1; /*0x100416612*/
        v56 = v64; /*0x100416617*/
        v62 = v57; /*0x10041661a*/
LABEL_86:
        *(double *)v33.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v62, v63); /*0x10041661d*/
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56); /*0x100416622*/
    v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100416631*/
    if ( !v66 ) /*0x100416639*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100416d15*/
    *(_WORD *)(v66 + 4) = 26989; /*0x10041663f*/
    *(_DWORD *)v66 = 1634560353; /*0x100416645*/
    v110 = 6; /*0x10041664b*/
    v111 = v66; /*0x100416656*/
    v112 = 6; /*0x10041665d*/
    goto LABEL_90; /*0x100416668*/
  }
  v54 = 0x8000000000000000LL; /*0x1004164f2*/
  v6 = v121; /*0x1004164f5*/
LABEL_123:
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h37f7d692fde42b17(&v89); /*0x100416bac*/
  if ( v122 ) /*0x100416bbf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, v122, 1); /*0x100416bcd*/
  if ( v94 ) /*0x100416bdc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v94, 1); /*0x100416be6*/
  if ( v54 != 0x8000000000000000LL ) /*0x100416bee*/
  {
    if ( v10 ) /*0x100416bfa*/
    {
      codexmate_lib::core::relay::keychain::write_key_file::h5b927cde006c7475(v117, v114, v113, __s1, __n, v124, v10); /*0x100416c25*/
      if ( *(_QWORD *)&v117[0] != 0x8000000000000000LL && *(_QWORD *)&v117[0] ) /*0x100416c39*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v117[0] + 1), *(_QWORD *)&v117[0], 1); /*0x100416c47*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x100416c5a*/
      {
        v106[0] = &__s1; /*0x100416c60*/
        v106[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100416c6e*/
        *(_QWORD *)&v117[0] = "codexmate_lib::core::relay::keychain"; /*0x100416c7c*/
        *((_QWORD *)&v117[0] + 1) = 36; /*0x100416c83*/
        *(_QWORD *)&v117[1] = "codexmate_lib::core::relay::keychain"; /*0x100416c8e*/
        *((_QWORD *)&v117[1] + 1) = 36; /*0x100416c95*/
        *(_QWORD *)&v117[2] = &off_10152F1F0; /*0x100416ca7*/
        log::__private_api::log::h08ccde1c7672bffb(&unk_101229087, v106, 3, v117); /*0x100416cc8*/
      }
      v6[1] = v54; /*0x100416ccd*/
      v6[2] = v124; /*0x100416cd6*/
      goto LABEL_20; /*0x100416cdb*/
    }
    if ( v54 ) /*0x100416ce3*/
    {
      v46 = v124; /*0x100416cee*/
      v45 = v54; /*0x100416cf2*/
LABEL_45:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x100416257*/
    }
  }
LABEL_46:
  codexmate_lib::core::relay::keychain::mac_keychain::get::h1e7ca26ef9472e74( /*0x10041625c*/
    v106,
    &anon_0eedd02070250de7472aa97ee6b1a8ea_792,
    16,
    __s1,
    __n);
  if ( LOBYTE(v106[0]) ) /*0x100416283*/
  {
    v6[1] = 0x8000000000000000LL; /*0x100416285*/
    *v6 = 0; /*0x10041628a*/
    if ( v106[1] ) /*0x10041629c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106[2], v106[1], 1); /*0x1004162ae*/
  }
  else
  {
    v47 = v106[1]; /*0x1004162b8*/
    if ( v106[1] == 0x8000000000000000LL ) /*0x1004162c2*/
    {
      v6[1] = 0x8000000000000000LL; /*0x1004162c4*/
      goto LABEL_58; /*0x1004162c9*/
    }
    v48 = v106[3]; /*0x1004162d1*/
    if ( v106[3] ) /*0x1004162db*/
    {
      v49 = v106[2]; /*0x1004162e1*/
      codexmate_lib::core::relay::keychain::write_key_file::h5b927cde006c7475( /*0x10041630c*/
        v117,
        v114,
        v113,
        __s1,
        __n,
        v106[2],
        v106[3]);
      if ( *(_QWORD *)&v117[0] != 0x8000000000000000LL && *(_QWORD *)&v117[0] ) /*0x100416320*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v117[0] + 1), *(_QWORD *)&v117[0], 1); /*0x10041632e*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x100416341*/
      {
        *(_QWORD *)&v84 = &__s1; /*0x10041634b*/
        *((_QWORD *)&v84 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100416359*/
        *(_QWORD *)&v117[3] = 3; /*0x100416360*/
        *((_QWORD *)&v117[3] + 1) = "codexmate_lib::core::relay::keychain"; /*0x100416372*/
        *(_QWORD *)&v117[4] = 36; /*0x100416379*/
        *(_QWORD *)&v117[5] = &unk_1012290E5; /*0x10041638b*/
        *((_QWORD *)&v117[5] + 1) = &v84; /*0x100416396*/
        *(_QWORD *)&v117[0] = 0; /*0x10041639a*/
        *((_QWORD *)&v117[0] + 1) = "codexmate_lib::core::relay::keychain"; /*0x1004163a5*/
        v117[1] = 0x24u; /*0x1004163ac*/
        *(_QWORD *)&v117[2] = "src/core/relay/keychain.rs"; /*0x1004163c9*/
        *((_QWORD *)&v117[2] + 1) = 26; /*0x1004163d0*/
        *((_QWORD *)&v117[4] + 1) = 0x3500000001LL; /*0x1004163e5*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v89, v117); /*0x1004163fa*/
      }
      v6[1] = v47; /*0x1004163ff*/
      v6[2] = v49; /*0x100416404*/
      v6[3] = v48; /*0x100416409*/
      goto LABEL_58; /*0x100416409*/
    }
    v6[1] = 0x8000000000000000LL; /*0x1004164fe*/
    *v6 = 0; /*0x100416503*/
    if ( v47 ) /*0x10041650e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106[2], v47, 1); /*0x100416523*/
  }
  return v6; /*0x100416419*/
}
