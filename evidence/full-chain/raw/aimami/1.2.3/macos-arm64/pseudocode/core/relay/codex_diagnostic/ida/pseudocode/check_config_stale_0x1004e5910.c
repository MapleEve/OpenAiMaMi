// __ZN13codexmate_lib4core5relay16codex_diagnostic18check_config_stale @ 0x1004e5910 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_config_stale::hd929a92a875899c8(
        __m128i *a1,
        void *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  void *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // r12
  __int64 v14; // rbx
  __m128i si128; // xmm0
  __int64 v17; // rcx
  size_t v18; // r13
  __int64 v20; // rdx
  int v21; // r8d
  void *v22; // rax
  unsigned __int8 v23; // bl
  _DWORD *v24; // rax
  _DWORD *v25; // r15
  char *v26; // rsi
  _QWORD *v27; // rax
  void *v28; // rax
  __int64 v29; // r15
  void *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // rax
  bool v34; // zf
  void *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  _QWORD *v38; // rax
  void *v39; // rax
  __int64 v40; // rbx
  _DWORD *v41; // rax
  __int64 v42; // rax
  void *v43; // rax
  __int64 v44; // r13
  __int64 v45; // rbx
  __int64 v46; // r14
  const __m128i *v47; // r15
  const __m128i *v49; // r12
  int v50; // r13d
  __int64 v51; // rax
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  __int64 v54; // rbx
  void *v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rdi
  size_t v60; // rsi
  void *v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  _QWORD *v64; // rax
  void *v65; // rax
  __int64 v66; // r13
  void *v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rax
  _QWORD *v70; // rax
  void *v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rax
  _BYTE v75[24]; // [rsp+8h] [rbp-138h] BYREF
  __int64 v76; // [rsp+20h] [rbp-120h]
  __int64 v77; // [rsp+28h] [rbp-118h]
  __int64 v78; // [rsp+30h] [rbp-110h]
  __int64 v79; // [rsp+38h] [rbp-108h]
  __int64 v80; // [rsp+40h] [rbp-100h]
  __int64 v81; // [rsp+48h] [rbp-F8h]
  __int64 v82; // [rsp+68h] [rbp-D8h]
  _QWORD *v83; // [rsp+70h] [rbp-D0h]
  size_t v84; // [rsp+78h] [rbp-C8h]
  char v85; // [rsp+C9h] [rbp-77h]
  char v86; // [rsp+CAh] [rbp-76h]
  unsigned __int8 v87; // [rsp+CBh] [rbp-75h]
  unsigned __int8 v88; // [rsp+CCh] [rbp-74h]
  char v89; // [rsp+CDh] [rbp-73h]
  unsigned __int8 v90; // [rsp+CFh] [rbp-71h]
  unsigned __int8 v91; // [rsp+D1h] [rbp-6Fh]
  char v92; // [rsp+D2h] [rbp-6Eh]
  const __m128i *v93; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v94; // [rsp+E0h] [rbp-60h]
  __int64 v95; // [rsp+F0h] [rbp-50h]
  _DWORD *v96; // [rsp+108h] [rbp-38h]
  __int64 v97; // [rsp+110h] [rbp-30h]

  if ( !a2 ) /*0x1004e592a*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004e5b17*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_346,
             12,
             &unk_1015FCAA3,
             51);
  codexmate_lib::core::relay::invariants::RouterConfigSurface::parse::hdc7c7739ede0b191((__int64)v75, 0, a2, a3); /*0x1004e5942*/
  v6 = *(_QWORD *)(a4 + 8); /*0x1004e5947*/
  v7 = (__int64)&v93; /*0x1004e5957*/
  codexmate_lib::core::relay::models::active_codex_relay_model_slugs::hb3cbe297656c04c0( /*0x1004e595b*/
    &v93,
    v6,
    *(_QWORD *)(a4 + 16),
    *(_QWORD *)(a4 + 32),
    *(_QWORD *)(a4 + 40));
  if ( ((v87 | v88) & 1) != 0 /*0x1004e5b4c*/
    || v76 != 0x8000000000000000LL
    && v78 == 6
    && (v6 = (unsigned int)anon_39a6e93098609d65551b0fc4eadbbbd9_97 ^ *(_DWORD *)v77,
        !((unsigned int)v6 | *(_WORD *)(v77 + 4) ^ 0x3169)) )
  {
LABEL_3:
    if ( v86 ) /*0x1004e5981*/
      goto LABEL_4; /*0x1004e5981*/
    if ( v92 ) /*0x1004e5bb6*/
    {
LABEL_17:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004e5bbc*/
      v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004e5bcb*/
      if ( v22 ) /*0x1004e5bd3*/
      {
        qmemcpy(v22, "config_stale", 12); /*0x1004e5be3*/
        v97 = (__int64)v22; /*0x1004e5be6*/
        v23 = *(_BYTE *)(a4 + 292); /*0x1004e5bf1*/
        v18 = 2LL * (v23 ^ 1u) + 5; /*0x1004e5bfe*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x1004e5c03*/
        v24 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1); /*0x1004e5c10*/
        if ( !v24 ) /*0x1004e5c18*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v18); /*0x1004e6a7d*/
        v25 = v24; /*0x1004e5c1e*/
        v26 = "warning"; /*0x1004e5c28*/
        if ( v23 ) /*0x1004e5c31*/
          v26 = "error"; /*0x1004e5c31*/
        memcpy(v24, v26, v18); /*0x1004e5c3b*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v26); /*0x1004e5c40*/
        v27 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x1004e5c4f*/
        v96 = v25; /*0x1004e5c57*/
        if ( !v27 ) /*0x1004e5c5b*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 54); /*0x1004e6a91*/
        v13 = v27; /*0x1004e5c61*/
        *(_QWORD *)((char *)v27 + 46) = 0xA585E5A8B3E62065LL; /*0x1004e5c6e*/
        qmemcpy(v27 + 4, "rovider/Profil", 14); /*0x1004e5c8c*/
        v27[3] = 0x5020ACBDE8ADB8E4LL; /*0x1004e5c9b*/
        v27[2] = 0x8889E7A797E6AB90LL; /*0x1004e5caa*/
        v27[1] = 0xE5858CE5206C6D6FLL; /*0x1004e5cb9*/
        *v27 = 0x742E6769666E6F63LL; /*0x1004e5cc8*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(54, 1); /*0x1004e5ccc*/
        v14 = 91; /*0x1004e5cd1*/
        v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(91, 1); /*0x1004e5ce0*/
        if ( !v28 ) /*0x1004e5ce8*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 91); /*0x1004e6aa5*/
        v29 = (__int64)v28; /*0x1004e5cfd*/
        memcpy(v28, &unk_1015FCA46, 0x5Bu); /*0x1004e5d00*/
        _RAX = v29; /*0x1004e5d05*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBAB0); /*0x1004e5d08*/
        v17 = 54; /*0x1004e5d10*/
        v11 = v96; /*0x1004e5d15*/
        goto LABEL_64; /*0x1004e5d19*/
      }
LABEL_102:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x1004e6a25*/
    }
    if ( *(_BYTE *)(a4 + 292) == 1 ) /*0x1004e5d6b*/
    {
      v6 = v79; /*0x1004e5d71*/
      v20 = v81; /*0x1004e5d78*/
LABEL_33:
      if ( v6 != 0x8000000000000000LL && v20 == 6 ) /*0x1004e5d88*/
      {
        v6 = (unsigned int)anon_39a6e93098609d65551b0fc4eadbbbd9_97 ^ *(_DWORD *)v80; /*0x1004e5d93*/
        if ( !((unsigned int)v6 | *(_WORD *)(v80 + 4) ^ 0x3169) ) /*0x1004e5da9*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004e6417*/
          v55 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004e6426*/
          if ( v55 ) /*0x1004e642e*/
          {
            v56 = (__int64)v55; /*0x1004e6434*/
            qmemcpy(v55, "config_stale", 12); /*0x1004e6441*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x1004e644b*/
            v57 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004e645a*/
            v97 = v56; /*0x1004e6462*/
            if ( !v57 ) /*0x1004e6466*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004e6b6d*/
            v11 = (_DWORD *)v57; /*0x1004e646c*/
            *(_BYTE *)(v57 + 4) = 114; /*0x1004e646f*/
            *(_DWORD *)v57 = 1869771365; /*0x1004e6473*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004e6479*/
            v58 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x1004e6488*/
            if ( !v58 ) /*0x1004e6490*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47); /*0x1004e6b81*/
            v13 = v58; /*0x1004e6496*/
            *(_QWORD *)((char *)v58 + 39) = 0x656C69666F727020LL; /*0x1004e64a3*/
            v58[4] = 0x2082B1E5B6A1E988LL; /*0x1004e64b2*/
            v58[3] = 0x89E7A797E6AB90E5LL; /*0x1004e64c1*/
            v58[2] = 0x858CE58DBBE486BDLL; /*0x1004e64d0*/
            v58[1] = 0xE4A894E7AF90E5B2LL; /*0x1004e64df*/
            *v58 = 0xB7E5B194E7AFB7E8LL; /*0x1004e64ee*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(47, 1); /*0x1004e64f2*/
            v14 = 58; /*0x1004e64f7*/
            _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(58, 1); /*0x1004e6506*/
            if ( !_RAX ) /*0x1004e650e*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 58); /*0x1004e6b95*/
            *(_QWORD *)(_RAX + 48) = 0xE78D85E99986E58DLL; /*0x1004e651e*/
            *(_QWORD *)(_RAX + 40) = 0x87E981A6E8809CE9LL; /*0x1004e652c*/
            *(_QWORD *)(_RAX + 32) = 0x8CBCEF656C69666FLL; /*0x1004e653a*/
            *(_QWORD *)(_RAX + 24) = 0x7270207963616765LL; /*0x1004e6548*/
            *(_QWORD *)(_RAX + 16) = 0x6C209DBBE7928BE6LL; /*0x1004e6556*/
            *(_QWORD *)(_RAX + 8) = 0x9ABCE4202B343331LL; /*0x1004e6564*/
            *(_QWORD *)_RAX = 0x2E30207865646F43LL; /*0x1004e6572*/
            *(_WORD *)(_RAX + 56) = -20803; /*0x1004e6575*/
            si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBAA0); /*0x1004e657b*/
            v17 = 47; /*0x1004e6583*/
            v18 = 5; /*0x1004e6588*/
            goto LABEL_64; /*0x1004e658e*/
          }
          goto LABEL_102; /*0x1004e642e*/
        }
      }
      if ( (v87 & 1) != 0 ) /*0x1004e5db2*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004e5db8*/
        v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004e5dc7*/
        if ( v30 ) /*0x1004e5dcf*/
        {
          v31 = (__int64)v30; /*0x1004e5dd5*/
          qmemcpy(v30, "config_stale", 12); /*0x1004e5de2*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x1004e5dec*/
          v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004e5dfb*/
          v97 = v31; /*0x1004e5e03*/
          if ( !v32 ) /*0x1004e5e07*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004e6af5*/
          v11 = (_DWORD *)v32; /*0x1004e5e0d*/
          *(_BYTE *)(v32 + 4) = 114; /*0x1004e5e10*/
          *(_DWORD *)v32 = 1869771365; /*0x1004e5e14*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004e5e1a*/
          v33 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(62, 1); /*0x1004e5e29*/
          if ( !v33 ) /*0x1004e5e31*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 62); /*0x1004e6b09*/
          v13 = v33; /*0x1004e5e37*/
          *(_QWORD *)((char *)v33 + 54) = 0xA585E5A8B3E6B194LL; /*0x1004e5e44*/
          v33[6] = 0xB194E7AFB7E8206CLL; /*0x1004e5e53*/
          v33[5] = 0x72755F657361625FLL; /*0x1004e5e62*/
          v33[4] = 0x69616E65706F2088LL; /*0x1004e5e71*/
          v33[3] = 0x89E7A797E6AB90E5LL; /*0x1004e5e80*/
          v33[2] = 0x858CE58DBBE486BDLL; /*0x1004e5e8f*/
          v33[1] = 0xE4A894E7AF90E5B2LL; /*0x1004e5e9e*/
          *v33 = 0xB7E5B194E7AFB7E8LL; /*0x1004e5ead*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(62, 1); /*0x1004e5eb1*/
          v14 = 60; /*0x1004e5eb6*/
          _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1); /*0x1004e5ec5*/
          if ( !_RAX ) /*0x1004e5ecd*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 60); /*0x1004e6b1d*/
          *(_QWORD *)(_RAX + 48) = 0xB3E6207265646976LL; /*0x1004e5edd*/
          qmemcpy((void *)(_RAX + 32), "i1 HTTP-only pro", 16); /*0x1004e5ef9*/
          *(_QWORD *)(_RAX + 24) = 0x616D6961209E9BE5LL; /*0x1004e5f07*/
          *(_QWORD *)(_RAX + 16) = 0xB994E68CBCEFAEBDLL; /*0x1004e5f15*/
          *(_QWORD *)(_RAX + 8) = 0xE78D85E99986E58DLL; /*0x1004e5f23*/
          *(_QWORD *)_RAX = 0x87E981A6E8809CE9LL; /*0x1004e5f31*/
          *(_DWORD *)(_RAX + 56) = -1517951576; /*0x1004e5f34*/
          si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBA90); /*0x1004e5f3b*/
          v17 = 62; /*0x1004e5f43*/
          v18 = 5; /*0x1004e5f48*/
          goto LABEL_64; /*0x1004e5f4e*/
        }
        goto LABEL_102; /*0x1004e5dcf*/
      }
      if ( v76 == 0x8000000000000000LL /*0x1004e5fbf*/
        || v78 != 6
        || anon_39a6e93098609d65551b0fc4eadbbbd9_97 ^ *(_DWORD *)v77 | *(_WORD *)(v77 + 4) ^ 0x3169 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004e5fc7*/
        v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004e5fd6*/
        if ( v35 ) /*0x1004e5fde*/
        {
          v36 = (__int64)v35; /*0x1004e5fe4*/
          qmemcpy(v35, "config_stale", 12); /*0x1004e5ff1*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x1004e5ffb*/
          v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004e600a*/
          v97 = v36; /*0x1004e6012*/
          if ( !v37 ) /*0x1004e6016*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004e6b31*/
          v11 = (_DWORD *)v37; /*0x1004e601c*/
          *(_BYTE *)(v37 + 4) = 114; /*0x1004e601f*/
          *(_DWORD *)v37 = 1869771365; /*0x1004e6023*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004e6029*/
          v38 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x1004e6038*/
          if ( !v38 ) /*0x1004e6040*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 54); /*0x1004e6b45*/
          v13 = v38; /*0x1004e6046*/
          *(_QWORD *)((char *)v38 + 46) = 0xA585E5A8B3E62072LL; /*0x1004e6053*/
          v38[5] = 0x2072656469766F72LL; /*0x1004e6062*/
          v38[4] = 0x7020B194E7AFB7E8LL; /*0x1004e6071*/
          v38[3] = 0x203169616D696120LL; /*0x1004e6080*/
          v38[2] = 0x91B0E5BABCE786BDLL; /*0x1004e608f*/
          v38[1] = 0xE4A894E7AF90E5B2LL; /*0x1004e609e*/
          *v38 = 0xB7E5B194E7AFB7E8LL; /*0x1004e60ad*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(54, 1); /*0x1004e60b1*/
          v14 = 59; /*0x1004e60b6*/
          _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1); /*0x1004e60c5*/
          if ( !_RAX ) /*0x1004e60cd*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 59); /*0x1004e6b59*/
          qmemcpy((void *)(_RAX + 40), "provider = \"aimai1\"", 19); /*0x1004e60eb*/
          *(_QWORD *)(_RAX + 32) = 0x5F6C65646F6D2082LL; /*0x1004e60f9*/
          *(_QWORD *)(_RAX + 24) = 0xB1E5B6A1E9A585E5LL; /*0x1004e6107*/
          *(_QWORD *)(_RAX + 16) = 0xA8B3E6A5BBE4AEBDLL; /*0x1004e6115*/
          *(_QWORD *)(_RAX + 8) = 0xE78D85E99986E58DLL; /*0x1004e6123*/
          *(_QWORD *)_RAX = 0x87E981A6E8809CE9LL; /*0x1004e6131*/
          si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBA50); /*0x1004e613b*/
          v17 = 54; /*0x1004e6143*/
          v18 = 5; /*0x1004e6148*/
          goto LABEL_64; /*0x1004e614e*/
        }
        goto LABEL_102; /*0x1004e5fde*/
      }
      if ( !v85 ) /*0x1004e65cf*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004e6758*/
        v67 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004e6767*/
        if ( v67 ) /*0x1004e676f*/
        {
          v68 = (__int64)v67; /*0x1004e6775*/
          qmemcpy(v67, "config_stale", 12); /*0x1004e6782*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x1004e678c*/
          v69 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004e679b*/
          v97 = v68; /*0x1004e67a3*/
          if ( !v69 ) /*0x1004e67a7*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004e6ba9*/
          v11 = (_DWORD *)v69; /*0x1004e67ad*/
          *(_BYTE *)(v69 + 4) = 114; /*0x1004e67b0*/
          *(_DWORD *)v69 = 1869771365; /*0x1004e67b4*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004e67ba*/
          v70 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x1004e67c9*/
          if ( !v70 ) /*0x1004e67d1*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 43); /*0x1004e6bbd*/
          v13 = v70; /*0x1004e67d7*/
          qmemcpy(v70 + 3, " model_catalog_json", 19); /*0x1004e67f3*/
          v70[2] = 0x91B0E5BABCE786BDLL; /*0x1004e6802*/
          v70[1] = 0xE4A894E7AF90E5B2LL; /*0x1004e6811*/
          *v70 = 0xB7E5B194E7AFB7E8LL; /*0x1004e6820*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(43, 1); /*0x1004e682d*/
          v14 = 57; /*0x1004e6832*/
          _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(57, 1); /*0x1004e6841*/
          if ( !_RAX ) /*0x1004e6849*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 57); /*0x1004e6bce*/
          *(_QWORD *)(_RAX + 48) = 0xBDE78D85E99986E5LL; /*0x1004e6859*/
          *(_QWORD *)(_RAX + 40) = 0x8D87E981A6E8809CLL; /*0x1004e6867*/
          *(_QWORD *)(_RAX + 32) = 0xE98CBCEF8B9EE5A1LL; /*0x1004e6875*/
          *(_QWORD *)(_RAX + 24) = 0xA8E6ACBDE8ADB8E4LL; /*0x1004e6883*/
          *(_QWORD *)(_RAX + 16) = 0xBAA4E7BE98E695B3LL; /*0x1004e6891*/
          *(_QWORD *)(_RAX + 8) = 0xE6A097E6958DE59CLL; /*0x1004e689f*/
          *(_QWORD *)_RAX = 0x8FE8207865646F43LL; /*0x1004e68ad*/
          *(_BYTE *)(_RAX + 56) = -82; /*0x1004e68b0*/
          si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBA60); /*0x1004e68b4*/
          v17 = 43; /*0x1004e68bc*/
          v18 = 5; /*0x1004e68c1*/
          goto LABEL_64; /*0x1004e68c7*/
        }
        goto LABEL_102; /*0x1004e676f*/
      }
      if ( (v91 & v90) == 0 ) /*0x1004e65dc*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004e68cc*/
        v71 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004e68db*/
        if ( v71 ) /*0x1004e68e3*/
        {
          v72 = (__int64)v71; /*0x1004e68e9*/
          qmemcpy(v71, "config_stale", 12); /*0x1004e68f6*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x1004e6900*/
          v73 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004e690f*/
          v97 = v72; /*0x1004e6917*/
          if ( !v73 ) /*0x1004e691b*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004e6bdf*/
          v11 = (_DWORD *)v73; /*0x1004e6921*/
          *(_BYTE *)(v73 + 4) = 114; /*0x1004e6924*/
          *(_DWORD *)v73 = 1869771365; /*0x1004e6928*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004e692e*/
          v74 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1004e693d*/
          if ( !v74 ) /*0x1004e6945*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x1004e6bf0*/
          v13 = (_QWORD *)v74; /*0x1004e694b*/
          *(_QWORD *)(v74 + 40) = 0x8FE5A585E5B194E7LL; /*0x1004e6958*/
          *(_QWORD *)(v74 + 32) = 0xAFB7E891B0E5BABCLL; /*0x1004e6967*/
          *(_QWORD *)(v74 + 24) = 0xE7206C6D6F742E67LL; /*0x1004e6976*/
          *(_QWORD *)(v74 + 16) = 0x69666E6F632086BDLL; /*0x1004e6985*/
          *(_QWORD *)(v74 + 8) = 0xE4A894E7AF90E5B2LL; /*0x1004e6994*/
          *(_QWORD *)v74 = 0xB7E5B194E7AFB7E8LL; /*0x1004e69a3*/
          *(_BYTE *)(v74 + 48) = -93; /*0x1004e69a7*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(49, 1); /*0x1004e69ad*/
          v14 = 36; /*0x1004e69b2*/
          _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x1004e69c1*/
          if ( !_RAX ) /*0x1004e69c9*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x1004e6c01*/
          *(_QWORD *)(_RAX + 24) = 0x85E9B194E7AFB7E8LL; /*0x1004e69d9*/
          *(_QWORD *)(_RAX + 16) = 0xBD83E8BA99E6A585LL; /*0x1004e69e7*/
          *(_QWORD *)(_RAX + 8) = 0xE59986E5B096E68DLL; /*0x1004e69f5*/
          *(_QWORD *)_RAX = 0x87E981A6E8809CE9LL; /*0x1004e6a03*/
          *(_DWORD *)(_RAX + 32) = -1363286131; /*0x1004e6a06*/
          si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBA80); /*0x1004e6a0d*/
          v17 = 49; /*0x1004e6a15*/
          v18 = 5; /*0x1004e6a1a*/
          goto LABEL_64; /*0x1004e6a20*/
        }
        goto LABEL_102; /*0x1004e68e3*/
      }
      if ( v82 != 0x8000000000000000LL ) /*0x1004e65e9*/
      {
        v59 = v83; /*0x1004e65eb*/
        v60 = v84; /*0x1004e65f2*/
        if ( (unsigned __int8)codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::hf8fb25c63ce8a656( /*0x1004e6602*/
                                v83,
                                v84,
                                1,
                                (__int64 *)&v93) )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, v60); /*0x1004e660b*/
          v61 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004e661a*/
          if ( v61 ) /*0x1004e6622*/
          {
            v62 = (__int64)v61; /*0x1004e6628*/
            qmemcpy(v61, "config_stale", 12); /*0x1004e6635*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x1004e663f*/
            v63 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004e664e*/
            v97 = v62; /*0x1004e6656*/
            if ( !v63 ) /*0x1004e665a*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004e6c12*/
            v11 = (_DWORD *)v63; /*0x1004e6660*/
            *(_BYTE *)(v63 + 4) = 114; /*0x1004e6663*/
            *(_DWORD *)v63 = 1869771365; /*0x1004e6667*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004e666d*/
            v64 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(63, 1); /*0x1004e667c*/
            if ( !v64 ) /*0x1004e6684*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 63); /*0x1004e6c23*/
            v13 = v64; /*0x1004e668a*/
            qmemcpy(v64 + 6, " active catalog", 15); /*0x1004e66a6*/
            v64[5] = 0xA89CE58DB8E48B9ELL; /*0x1004e66b5*/
            v64[4] = 0xE5A1A8E6ACBDE8ADLL; /*0x1004e66c4*/
            v64[3] = 0xB8E482B1E5B6A1E9LL; /*0x1004e66d3*/
            v64[2] = 0x8D89E593BDE586BDLL; /*0x1004e66e2*/
            v64[1] = 0xE4A894E7AF90E5B2LL; /*0x1004e66f1*/
            *v64 = 0xB7E5B194E7AFB7E8LL; /*0x1004e6700*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(63, 1); /*0x1004e6704*/
            v14 = 87; /*0x1004e6709*/
            v65 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(87, 1); /*0x1004e6718*/
            if ( !v65 ) /*0x1004e6720*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 87); /*0x1004e6c34*/
            v66 = (__int64)v65; /*0x1004e6735*/
            memcpy(v65, &unk_1015FC9EE, 0x57u); /*0x1004e6738*/
            _RAX = v66; /*0x1004e673d*/
            si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBA70); /*0x1004e6740*/
            v17 = 63; /*0x1004e6748*/
            v18 = 5; /*0x1004e674d*/
            goto LABEL_64; /*0x1004e6753*/
          }
          goto LABEL_102; /*0x1004e6622*/
        }
      }
      goto LABEL_82; /*0x1004e6609*/
    }
LABEL_59:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004e619f*/
    v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004e61ae*/
    if ( v39 ) /*0x1004e61b6*/
    {
      v40 = (__int64)v39; /*0x1004e61bc*/
      qmemcpy(v39, "config_stale", 12); /*0x1004e61c9*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x1004e61d3*/
      v41 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004e61e2*/
      v97 = v40; /*0x1004e61ea*/
      if ( !v41 ) /*0x1004e61ee*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004e6ab9*/
      v11 = v41; /*0x1004e61f4*/
      *(_DWORD *)((char *)v41 + 3) = 1735289198; /*0x1004e61f7*/
      *v41 = 1852989815; /*0x1004e61fe*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x1004e6204*/
      v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(58, 1); /*0x1004e6213*/
      if ( !v42 ) /*0x1004e621b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 58); /*0x1004e6acd*/
      v13 = (_QWORD *)v42; /*0x1004e6221*/
      *(_QWORD *)(v42 + 48) = 0xE5A8B3E682B1E5B6LL; /*0x1004e622e*/
      *(_QWORD *)(v42 + 40) = 0xA1E9B194E7AFB7E8LL; /*0x1004e623d*/
      *(_QWORD *)(v42 + 32) = 0xAB90E5858CE58DBBLL; /*0x1004e624c*/
      *(_QWORD *)(v42 + 24) = 0xE4206C6D6F742E67LL; /*0x1004e625b*/
      *(_QWORD *)(v42 + 16) = 0x69666E6F632086BDLL; /*0x1004e626a*/
      *(_QWORD *)(v42 + 8) = 0xE4AD97E9B385E5B2LL; /*0x1004e6279*/
      *(_QWORD *)v42 = 0xB7E5B194E7AFB7E8LL; /*0x1004e6288*/
      *(_WORD *)(v42 + 56) = -23163; /*0x1004e628c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(58, 1); /*0x1004e6294*/
      v14 = 67; /*0x1004e6299*/
      v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(67, 1); /*0x1004e62a8*/
      if ( !v43 ) /*0x1004e62b0*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 67); /*0x1004e6ae1*/
      v44 = (__int64)v43; /*0x1004e62c5*/
      memcpy(v43, &unk_1015FC987, 0x43u); /*0x1004e62c8*/
      _RAX = v44; /*0x1004e62cd*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBA40); /*0x1004e62d0*/
      v17 = 58; /*0x1004e62d8*/
      v18 = 7; /*0x1004e62dd*/
      goto LABEL_64; /*0x1004e62dd*/
    }
    goto LABEL_102; /*0x1004e61b6*/
  }
  v6 = v79; /*0x1004e5b54*/
  v20 = v81; /*0x1004e5b5b*/
  if ( v79 != 0x8000000000000000LL && v81 == 6 ) /*0x1004e5b6d*/
  {
    v21 = anon_39a6e93098609d65551b0fc4eadbbbd9_97 ^ *(_DWORD *)v80; /*0x1004e5b88*/
    v7 = v21 | *(_WORD *)(v80 + 4) ^ 0x3169u; /*0x1004e5b9d*/
    LOBYTE(v7) = (v21 | *(_WORD *)(v80 + 4) ^ 0x3169) == 0; /*0x1004e5ba0*/
    if ( !(v21 | *(_WORD *)(v80 + 4) ^ 0x3169) ) /*0x1004e5b9d*/
      goto LABEL_3; /*0x1004e5ba7*/
  }
  else
  {
    v7 = 0; /*0x1004e5d1e*/
  }
  if ( v89 ) /*0x1004e5d2d*/
    goto LABEL_3; /*0x1004e5d2d*/
  if ( v82 != 0x8000000000000000LL ) /*0x1004e5d3a*/
  {
    v7 = (__int64)v83; /*0x1004e5f53*/
    if ( v84 == 12 ) /*0x1004e5f65*/
    {
      v7 = anon_3ce6d1417794db0febde534c64082f90_184 ^ *v83 | *((_DWORD *)v83 + 2) ^ 0x79616C65u; /*0x1004e5f7a*/
      v34 = v7 == 0; /*0x1004e5f7a*/
    }
    else
    {
      if ( v84 <= 0xC ) /*0x1004e5f82*/
      {
        v7 = 0; /*0x1004e5f88*/
        goto LABEL_56; /*0x1004e5f8a*/
      }
      v34 = (*v83 ^ anon_3ce6d1417794db0febde534c64082f90_194 /*0x1004e6168*/
           | *(_QWORD *)((char *)v83 + 5) ^ *(__int64 *)((char *)&anon_3ce6d1417794db0febde534c64082f90_194 + 5)) == 0;
    }
    LOBYTE(v7) = v34; /*0x1004e616b*/
LABEL_56:
    if ( !v86 ) /*0x1004e6173*/
    {
      if ( v92 ) /*0x1004e617d*/
        goto LABEL_17; /*0x1004e617d*/
      LOBYTE(v7) = (*(_BYTE *)(a4 + 292) ^ 1) & v7; /*0x1004e6192*/
      if ( (_BYTE)v7 != 1 ) /*0x1004e6199*/
      {
        if ( !*(_BYTE *)(a4 + 292) ) /*0x1004e6183*/
          goto LABEL_82; /*0x1004e6596*/
        goto LABEL_33; /*0x1004e6596*/
      }
      goto LABEL_59; /*0x1004e6199*/
    }
LABEL_4:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004e5987*/
    v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004e5996*/
    if ( v8 ) /*0x1004e599e*/
    {
      v9 = (__int64)v8; /*0x1004e59a4*/
      qmemcpy(v8, "config_stale", 12); /*0x1004e59b1*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x1004e59bb*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004e59ca*/
      v97 = v9; /*0x1004e59d2*/
      if ( !v10 ) /*0x1004e59d6*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004e6a43*/
      v11 = (_DWORD *)v10; /*0x1004e59dc*/
      *(_BYTE *)(v10 + 4) = 114; /*0x1004e59df*/
      *(_DWORD *)v10 = 1869771365; /*0x1004e59e3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004e59e9*/
      v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1); /*0x1004e59f8*/
      if ( !v12 ) /*0x1004e5a00*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 51); /*0x1004e6a57*/
      v13 = (_QWORD *)v12; /*0x1004e5a06*/
      *(_QWORD *)(v12 + 40) = 0x8BAEE62072657475LL; /*0x1004e5a13*/
      qmemcpy((void *)(v12 + 24), " aimami_codex_ro", 16); /*0x1004e5a31*/
      *(_QWORD *)(v12 + 16) = 0x8889E7A797E6AB90LL; /*0x1004e5a40*/
      *(_QWORD *)(v12 + 8) = 0xE5858CE5206C6D6FLL; /*0x1004e5a4f*/
      *(_QWORD *)v12 = 0x742E6769666E6F63LL; /*0x1004e5a5e*/
      *(_DWORD *)(v12 + 47) = -1718229109; /*0x1004e5a62*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(51, 1); /*0x1004e5a6b*/
      v14 = 39; /*0x1004e5a70*/
      _RAX = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x1004e5a7f*/
      if ( !_RAX ) /*0x1004e5a87*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39); /*0x1004e6a6b*/
      *(_QWORD *)(_RAX + 31) = 0xA585E59986E5B096LL; /*0x1004e5a97*/
      *(_QWORD *)(_RAX + 24) = 0x96E68D87E98E90E5LL; /*0x1004e5aa5*/
      *(_QWORD *)(_RAX + 16) = 0xA585E5A8B3E68889LL; /*0x1004e5ab3*/
      *(_QWORD *)(_RAX + 8) = 0xE7A797E68690E785LL; /*0x1004e5ac1*/
      *(_QWORD *)_RAX = 0xB8E681A6E8809CE9LL; /*0x1004e5acf*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015FBAC0); /*0x1004e5ad2*/
      v17 = 51; /*0x1004e5ada*/
      v18 = 5; /*0x1004e5adf*/
LABEL_64:
      a1->i64[0] = 12; /*0x1004e62e3*/
      a1->i64[1] = v97; /*0x1004e62ee*/
      a1[1].i64[0] = 12; /*0x1004e62f2*/
      a1[1].i64[1] = v18; /*0x1004e62fa*/
      a1[2].i64[0] = (__int64)v11; /*0x1004e62fe*/
      a1[2].i64[1] = v18; /*0x1004e6302*/
      a1[3].i64[0] = v17; /*0x1004e6306*/
      a1[3].i64[1] = (__int64)v13; /*0x1004e630a*/
      a1[4] = si128; /*0x1004e630e*/
      a1[5].i64[0] = _RAX; /*0x1004e6314*/
      a1[5].i64[1] = v14; /*0x1004e6318*/
      a1[6].i8[0] = 1; /*0x1004e631c*/
      v45 = v94; /*0x1004e6321*/
      if ( v94 ) /*0x1004e6328*/
      {
        v46 = v95; /*0x1004e632e*/
        if ( v95 ) /*0x1004e6335*/
        {
          v47 = v93; /*0x1004e633b*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v93)); /*0x1004e6349*/
          v49 = v93 + 1; /*0x1004e634c*/
          do /*0x1004e6370*/
          {
            if ( !(_WORD)_R13D ) /*0x1004e6376*/
            {
              do /*0x1004e639d*/
              {
                v50 = _mm_movemask_epi8(_mm_load_si128(v49)); /*0x1004e6386*/
                v47 -= 24; /*0x1004e638b*/
                ++v49; /*0x1004e6392*/
              }
              while ( v50 == 0xFFFF ); /*0x1004e639d*/
              _R13D = ~v50; /*0x1004e639f*/
            }
            __asm { tzcnt eax, r13d } /*0x1004e63a2*/
            v51 = -3 * _RAX; /*0x1004e63aa*/
            v52 = *((_QWORD *)&v47[-1] + v51 - 1); /*0x1004e63ae*/
            if ( v52 ) /*0x1004e63b6*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47[-1].i64[v51], v52, 1); /*0x1004e63c5*/
            --v46; /*0x1004e6360*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1004e6367*/
            _R13D &= _R13D - 1; /*0x1004e636a*/
          }
          while ( v46 ); /*0x1004e6370*/
        }
        v53 = (24 * v45 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1004e63d8*/
        v54 = v53 + v45 + 17; /*0x1004e63df*/
        if ( v54 ) /*0x1004e63e3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v93 - v53, v54, 16); /*0x1004e63f4*/
      }
      return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::h451ff63d780f3dd1(v75); /*0x1004e63f4*/
    }
    goto LABEL_102; /*0x1004e599e*/
  }
  if ( v86 ) /*0x1004e5d44*/
    goto LABEL_4; /*0x1004e5d44*/
  if ( v92 ) /*0x1004e5d4e*/
    goto LABEL_17; /*0x1004e5d4e*/
  if ( *(_BYTE *)(a4 + 292) ) /*0x1004e5d54*/
    goto LABEL_33; /*0x1004e5d5c*/
LABEL_82:
  codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004e659c*/
    a1,
    &anon_92869709a5e99ce1936aa4e326b6c562_346,
    12,
    &unk_1015FC9CC,
    27);
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v93); /*0x1004e65c1*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::h451ff63d780f3dd1(v75); /*0x1004e5b06*/
}