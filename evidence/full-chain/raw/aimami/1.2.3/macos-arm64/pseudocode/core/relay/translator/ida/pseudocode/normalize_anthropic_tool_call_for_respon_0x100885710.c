// __ZN13codexmate_lib4core5relay10translator43normalize_anthropic_tool_call_for_responses @ 0x100885710 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::translator::normalize_anthropic_tool_call_for_responses::h5854e4c15575a469(
        __int64 *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        signed __int64 a5)
{
  __int64 v9; // rsi
  signed __int64 *v10; // rdi
  __int64 v11; // r15
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r15
  bool v22; // r12
  __int64 v23; // rax
  const void *v24; // r13
  signed __int64 v25; // r15
  __int64 v26; // rdx
  signed __int64 v27; // r12
  __int64 v28; // r15
  __int64 v29; // rax
  char *v30; // r13
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r9
  void *v46; // r15
  size_t v47; // r13
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // r13
  void *v53; // r15
  __int64 (__fastcall *v54)(); // rcx
  __int64 v56; // rax
  __int64 v57; // r15
  char *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  _QWORD **v61; // rdx
  __int64 v62; // r13
  __int64 v63; // r15
  void *v64; // rax
  signed __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // r9
  void *v68; // r13
  size_t v69; // rdx
  size_t v70; // r15
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int64 v73; // rax
  __int64 v74; // rdx
  __m128i v75; // xmm1
  _QWORD **v76; // rax
  __int64 v77; // rax
  bool v78; // cf
  __int64 v79; // r12
  __int64 v80; // rax
  size_t v81; // r15
  _QWORD v82[3]; // [rsp+8h] [rbp-188h] BYREF
  __int64 *v83; // [rsp+20h] [rbp-170h]
  _QWORD v84[2]; // [rsp+28h] [rbp-168h] BYREF
  __int64 (__fastcall *v85)(); // [rsp+38h] [rbp-158h]
  signed __int64 v86; // [rsp+40h] [rbp-150h]
  void *v87; // [rsp+48h] [rbp-148h]
  __int64 *v88; // [rsp+50h] [rbp-140h]
  __int64 **v89; // [rsp+58h] [rbp-138h] BYREF
  __int64 (__fastcall *v90)(); // [rsp+60h] [rbp-130h]
  _DWORD *v91; // [rsp+68h] [rbp-128h]
  _DWORD *v92; // [rsp+70h] [rbp-120h]
  _QWORD **v93; // [rsp+78h] [rbp-118h] BYREF
  __int64 v94; // [rsp+80h] [rbp-110h]
  __int64 v95; // [rsp+88h] [rbp-108h]
  _DWORD *v96; // [rsp+90h] [rbp-100h]
  signed __int64 v97; // [rsp+98h] [rbp-F8h] BYREF
  void *v98; // [rsp+A0h] [rbp-F0h]
  size_t v99; // [rsp+A8h] [rbp-E8h]
  __int64 (__fastcall *v100)(); // [rsp+B0h] [rbp-E0h]
  __int64 *v101; // [rsp+B8h] [rbp-D8h] BYREF
  void *__src; // [rsp+C0h] [rbp-D0h]
  size_t __n; // [rsp+C8h] [rbp-C8h]
  __int64 (__fastcall *v104)(); // [rsp+D0h] [rbp-C0h]
  __int64 *v105; // [rsp+D8h] [rbp-B8h]
  __int64 (__fastcall *v106)(); // [rsp+E0h] [rbp-B0h]
  _QWORD *v107; // [rsp+E8h] [rbp-A8h]
  __int64 *v108; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 (__fastcall *v109)(); // [rsp+F8h] [rbp-98h]
  size_t v110; // [rsp+100h] [rbp-90h]
  __int64 (__fastcall *v111)(); // [rsp+108h] [rbp-88h]
  __int64 *v112; // [rsp+110h] [rbp-80h]
  __int64 (__fastcall *v113)(); // [rsp+118h] [rbp-78h]
  _QWORD *v114; // [rsp+120h] [rbp-70h]
  __int64 (__fastcall *v115)(); // [rsp+128h] [rbp-68h]
  __int64 *v116; // [rsp+130h] [rbp-60h]
  __int64 v117; // [rsp+138h] [rbp-58h] BYREF
  __int64 v118; // [rsp+140h] [rbp-50h]
  __int64 v119; // [rsp+148h] [rbp-48h]
  __int64 v120; // [rsp+150h] [rbp-40h]
  _QWORD **v121; // [rsp+158h] [rbp-38h]
  void *v122; // [rsp+160h] [rbp-30h]

  v108 = a4; /*0x100885730*/
  v109 = (__int64 (__fastcall *)())a5; /*0x100885737*/
  v110 = 0; /*0x10088573e*/
  v111 = nullptr; /*0x100885749*/
  v83 = a4; /*0x100885754*/
  v112 = a4; /*0x10088575b*/
  v113 = (__int64 (__fastcall *)())a5; /*0x10088575f*/
  v9 = (__int64)&v108; /*0x10088576a*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v101, &v108); /*0x100885771*/
  LOBYTE(v108) = 0; /*0x100885776*/
  if ( (_BYTE)v101 == 6 ) /*0x100885784*/
  {
    v100 = v111; /*0x10088578d*/
    v99 = v110; /*0x10088579b*/
    v98 = v109; /*0x1008857b0*/
    v97 = (signed __int64)v108; /*0x1008857b7*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(&v101); /*0x1008857c5*/
    if ( a3 != 4 ) /*0x1008857ce*/
      goto LABEL_3; /*0x1008857ce*/
  }
  else
  {
    v100 = v104; /*0x1008857fa*/
    v99 = __n; /*0x100885808*/
    v98 = __src; /*0x10088581d*/
    v97 = (signed __int64)v101; /*0x100885824*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v108); /*0x100885832*/
    if ( a3 != 4 ) /*0x10088583b*/
    {
LABEL_3:
      v10 = &v97; /*0x1008857d0*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v97); /*0x1008857d7*/
      if ( a3 < 0 ) /*0x1008857df*/
      {
        v11 = 0; /*0x1008857e5*/
        goto LABEL_5; /*0x1008857e5*/
      }
      v87 = a2; /*0x100885e2d*/
      v86 = a5; /*0x100885e34*/
      if ( !a3 ) /*0x100885e3b*/
      {
        v52 = 1; /*0x100885e41*/
LABEL_63:
        v53 = v87; /*0x100885d88*/
        memcpy((void *)v52, v87, a3); /*0x100885d98*/
        codexmate_lib::core::relay::translator::unwrap_custom_tool_arguments::hbc090364675fdd0e( /*0x100885db8*/
          (signed __int64 *)&v108,
          (__int64)v53,
          a3,
          v83,
          v86);
        *a1 = a3; /*0x100885dbd*/
        a1[1] = v52; /*0x100885dc0*/
        a1[2] = a3; /*0x100885dc4*/
        v54 = v109; /*0x100885dcf*/
        a1[3] = (__int64)v108; /*0x100885dd6*/
        a1[4] = (__int64)v54; /*0x100885dda*/
        a1[5] = v110; /*0x100885de5*/
        return a1; /*0x100885de5*/
      }
LABEL_61:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v9); /*0x100885d64*/
      v11 = 1; /*0x100885d69*/
      v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100885d77*/
      if ( !v51 ) /*0x100885d7f*/
LABEL_5:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, a3); /*0x1008857e8*/
      v52 = v51; /*0x100885d85*/
      goto LABEL_63; /*0x100885d85*/
    }
  }
  v12 = *a2 == 1752392002; /*0x10088583d*/
  v86 = a5; /*0x100885845*/
  v87 = a2; /*0x10088584c*/
  if ( !v12 ) /*0x100885853*/
  {
    switch ( *a2 ) /*0x100885861*/
    {
      case 0x64616552: /*0x100885861*/
        v13 = (__int64)&unk_101674CED; /*0x1008859af*/
        v9 = 9; /*0x1008859bd*/
        v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008859c2*/
                &unk_101674CED,
                9,
                &v97);
        if ( v29 /*0x1008859e7*/
          || (v13 = (__int64)"pathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
              v9 = 4,
              (v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "pathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                       4,
                       &v97)) != 0) )
        {
          if ( *(_BYTE *)v29 == 3 ) /*0x1008859f0*/
          {
            v30 = *(char **)(v29 + 16); /*0x1008859f6*/
            v31 = *(_QWORD *)(v29 + 24); /*0x1008859fa*/
            v13 = (__int64)v30; /*0x1008859fe*/
            v9 = v31; /*0x100885a01*/
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v30, v31); /*0x100885a04*/
            if ( v32 ) /*0x100885a0c*/
            {
              alloc::str::_$LT$impl$u20$str$GT$::replace::hd6a1094b8ae40c7f(&v108, v30, v31, 39, "'\"'\"'", 5); /*0x100885a34*/
              v101 = (__int64 *)&v108; /*0x100885a39*/
              __src = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100885a47*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x100885a63*/
                &v117,
                &anon_10420c9971c21f44d230d15b39fb3fec_106,
                &v101);
              if ( v108 ) /*0x100885a72*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v108, 1); /*0x100885a80*/
              v33 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100885a98*/
                      &unk_101674CF6,
                      6,
                      &v97);
              v34 = 1; /*0x100885a9d*/
              if ( v33 && *(_BYTE *)v33 == 2 && !*(_QWORD *)(v33 + 8) ) /*0x100885aad*/
                v34 = *(_QWORD *)(v33 + 16); /*0x100885ab4*/
              v35 = (v34 == 0) + v34; /*0x100885abc*/
              v93 = (_QWORD **)v35; /*0x100885ac0*/
              v36 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100885ada*/
                      &unk_101674CFC,
                      5,
                      &v97);
              if ( v36 && *(_BYTE *)v36 == 2 && !*(_QWORD *)(v36 + 8) && (v77 = *(_QWORD *)(v36 + 16)) != 0 ) /*0x1008863a9*/
              {
                v78 = __CFADD__(v77, v35); /*0x1008863af*/
                v79 = v77 + v35; /*0x1008863af*/
                v80 = -1; /*0x1008863b2*/
                if ( !v78 ) /*0x1008863b9*/
                  v80 = v79; /*0x1008863b9*/
                v89 = (__int64 **)(v80 - 1); /*0x1008863c0*/
                v108 = (__int64 *)&v93; /*0x1008863ce*/
                v109 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008863dc*/
                v110 = (size_t)&v89; /*0x1008863ea*/
                v111 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008863f1*/
                v112 = &v117; /*0x1008863f8*/
                v113 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008863fc*/
                v13 = (__int64)&v101; /*0x100886407*/
                alloc::fmt::format::format_inner::h3c16c74008a310d4(&v101, &unk_1017C5B55, &v108); /*0x100886415*/
                v25 = (signed __int64)v101; /*0x10088641a*/
                v122 = __src; /*0x100886428*/
                a2 = (_DWORD *)__n; /*0x10088642c*/
                v9 = v117; /*0x100886433*/
                if ( !v117 ) /*0x10088643a*/
                {
LABEL_42:
                  if ( v25 != 0x8000000000000000LL ) /*0x100885b65*/
                    goto LABEL_43; /*0x100885b65*/
LABEL_60:
                  v10 = &v97; /*0x100885d58*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v97); /*0x100885d5f*/
                  goto LABEL_61; /*0x100885d5f*/
                }
              }
              else
              {
                v101 = &v117; /*0x100885af4*/
                __src = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100885afb*/
                v13 = (__int64)&v108; /*0x100885b09*/
                alloc::fmt::format::format_inner::h3c16c74008a310d4(&v108, &unk_1017C5B6B, &v101); /*0x100885b17*/
                a2 = (_DWORD *)v110; /*0x100885b1c*/
                v25 = (signed __int64)v108; /*0x100885b23*/
                v122 = v109; /*0x100885b31*/
                v9 = v117; /*0x100885b35*/
                if ( !v117 ) /*0x100885b3c*/
                  goto LABEL_42; /*0x100885b3c*/
              }
              v13 = v118; /*0x100885b3e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v9, 1); /*0x100885b47*/
              goto LABEL_42; /*0x100885b4c*/
            }
          }
        }
        break;
      case 0x626F6C47: /*0x100885861*/
        v9 = 7; /*0x100885bf4*/
        v39 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100885bf9*/
                "pattern.output_modehead_limit",
                7,
                &v97);
        if ( !v39 ) /*0x100885c01*/
          goto LABEL_60; /*0x100885c01*/
        if ( *(_BYTE *)v39 != 3 ) /*0x100885c0a*/
          goto LABEL_60; /*0x100885c0a*/
        v40 = *(_QWORD *)(v39 + 16); /*0x100885c10*/
        v41 = *(_QWORD *)(v39 + 24); /*0x100885c14*/
        v9 = v41; /*0x100885c1b*/
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v40, v41); /*0x100885c1e*/
        if ( !v42 ) /*0x100885c26*/
          goto LABEL_60; /*0x100885c26*/
        v117 = 0; /*0x100885c2c*/
        v118 = 1; /*0x100885c34*/
        v119 = 0; /*0x100885c3c*/
        v43 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100885c57*/
                "pathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                4,
                &v97);
        v122 = (void *)1; /*0x100885c61*/
        v121 = (_QWORD **)v41; /*0x100885c68*/
        if ( v43 && *(_BYTE *)v43 == 3 && (v44 = *(_QWORD *)(v43 + 24)) != 0 ) /*0x100885c82*/
        {
          codexmate_lib::core::relay::translator::shell_quote::hbf5fac58a1f490e1( /*0x100885c96*/
            (__int64)&v108,
            *(_QWORD *)(v43 + 16),
            v44);
          v89 = &v108; /*0x100885c9b*/
          v90 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100885ca9*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v101, &unk_1017C5B12, &v89); /*0x100885cc5*/
          v116 = (__int64 *)v40; /*0x100885cca*/
          if ( v108 ) /*0x100885cd8*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v108, 1); /*0x100885ce6*/
          v88 = v101; /*0x100885cf2*/
          v46 = __src; /*0x100885cf9*/
          v47 = __n; /*0x100885d00*/
          if ( __n ) /*0x100885d0a*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008864b8*/
              &v117,
              0,
              __n,
              1,
              1,
              v45);
            v48 = v118; /*0x1008864bd*/
            v49 = v119; /*0x1008864c1*/
          }
          else
          {
            v48 = 1; /*0x100885d10*/
            v49 = 0; /*0x100885d15*/
          }
          v122 = (void *)v48; /*0x100885d18*/
          memcpy((void *)(v48 + v49), v46, v47); /*0x100885d26*/
          v50 = v47 + v49; /*0x100885d2b*/
          v119 = v50; /*0x100885d2e*/
          if ( v88 ) /*0x100885d3c*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v88, 1); /*0x100885d4a*/
          v40 = (__int64)v116; /*0x100885d4f*/
        }
        else
        {
          v50 = 0; /*0x10088612e*/
        }
        codexmate_lib::core::relay::translator::shell_quote::hbf5fac58a1f490e1((__int64)&v108, v40, (__int64)v121); /*0x100886142*/
        v89 = &v108; /*0x100886147*/
        v90 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100886155*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v101, &unk_1017C5B1D, &v89); /*0x100886171*/
        if ( v108 ) /*0x100886180*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v108, 1); /*0x10088618e*/
        v121 = (_QWORD **)v101; /*0x10088619a*/
        v68 = __src; /*0x10088619e*/
        v69 = __n; /*0x1008861a5*/
        if ( __n > v117 - v50 ) /*0x1008861b6*/
        {
          v81 = __n; /*0x100886488*/
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10088648b*/
            &v117,
            v50,
            __n,
            1,
            1,
            v67);
          v122 = (void *)v118; /*0x100886494*/
          v50 = v119; /*0x100886498*/
          v69 = v81; /*0x10088649c*/
        }
        v13 = (__int64)v122 + v50; /*0x1008861c0*/
        v70 = v69; /*0x1008861c7*/
        memcpy((char *)v122 + v50, v68, v69); /*0x1008861ca*/
        v9 = (__int64)v121; /*0x1008861cf*/
        if ( v121 ) /*0x1008861d6*/
        {
          v13 = (__int64)v68; /*0x1008861dd*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v121, 1); /*0x1008861e0*/
        }
        a2 = (_DWORD *)(v70 + v50); /*0x1008861e5*/
        v25 = v117; /*0x1008861e8*/
        goto LABEL_42; /*0x1008861ec*/
      case 0x70657247: /*0x100885861*/
        v13 = (__int64)"pattern.output_modehead_limit"; /*0x100885883*/
        v9 = 7; /*0x100885891*/
        v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100885896*/
                "pattern.output_modehead_limit",
                7,
                &v97);
        if ( v14 ) /*0x10088589e*/
        {
          if ( *(_BYTE *)v14 == 3 ) /*0x1008858a7*/
          {
            v15 = *(_QWORD *)(v14 + 16); /*0x1008858ad*/
            v13 = v15; /*0x1008858b5*/
            v122 = *(void **)(v14 + 24); /*0x1008858b8*/
            v9 = (__int64)v122; /*0x1008858b1*/
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v15, v122); /*0x1008858bc*/
            if ( v16 ) /*0x1008858c4*/
            {
              v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008858dd*/
                      "pathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                      4,
                      &v97);
              v18 = ".output_modehead_limit"; /*0x1008858e2*/
              v19 = 1; /*0x1008858e9*/
              if ( v17 && *(_BYTE *)v17 == 3 ) /*0x1008858f6*/
              {
                v18 = *(char **)(v17 + 16); /*0x1008858f8*/
                v19 = *(_QWORD *)(v17 + 24); /*0x1008858fc*/
              }
              v116 = (__int64 *)v19; /*0x100885900*/
              v121 = (_QWORD **)v18; /*0x100885904*/
              v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10088591b*/
                      "output_modehead_limit",
                      11,
                      &v97);
              v21 = 1; /*0x100885920*/
              if ( v20 && *(_BYTE *)v20 == 3 ) /*0x100885932*/
              {
                v21 = *(_QWORD *)(v20 + 16); /*0x100885938*/
                v22 = *(_QWORD *)(v20 + 24) == 18; /*0x100885941*/
              }
              else
              {
                v22 = 0; /*0x10088620d*/
              }
              v71 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100886223*/
                      "head_limit",
                      10,
                      &v97);
              v72 = 200; /*0x100886228*/
              if ( v71 && *(_BYTE *)v71 == 2 && !*(_QWORD *)(v71 + 8) ) /*0x100886237*/
              {
                v73 = *(_QWORD *)(v71 + 16); /*0x10088623e*/
                v74 = 1000; /*0x100886248*/
                if ( v73 < 0x3E8 ) /*0x10088624d*/
                  v74 = v73; /*0x10088624d*/
                v72 = 1; /*0x100886254*/
                if ( v73 ) /*0x100886259*/
                  v72 = v74; /*0x100886259*/
              }
              v82[0] = v72; /*0x10088625d*/
              if ( v22 ) /*0x100886267*/
              {
                v75 = _mm_or_si128( /*0x100886287*/
                        _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v21 + 16)), (__m128i)xmmword_1016748C0),
                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)v21), (__m128i)xmmword_1016748B0));
                v76 = (_QWORD **)&unk_101674CE9; /*0x100886297*/
                if ( _mm_testz_si128(v75, v75) ) /*0x10088628b*/
                  v76 = (_QWORD **)&unk_101674CEB; /*0x10088629e*/
              }
              else
              {
                v76 = (_QWORD **)&unk_101674CE9; /*0x1008862a4*/
              }
              v93 = v76; /*0x1008862ab*/
              v94 = 2; /*0x1008862b2*/
              codexmate_lib::core::relay::translator::shell_quote::hbf5fac58a1f490e1((__int64)&v117, v15, (__int64)v122); /*0x1008862cb*/
              codexmate_lib::core::relay::translator::shell_quote::hbf5fac58a1f490e1( /*0x1008862e2*/
                (__int64)&v101,
                (__int64)v121,
                (__int64)v116);
              v108 = (__int64 *)&v93; /*0x1008862ee*/
              v109 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008862fc*/
              v110 = (size_t)&v117; /*0x100886303*/
              v111 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100886311*/
              v112 = (__int64 *)&v101; /*0x100886318*/
              v113 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10088631c*/
              v114 = v82; /*0x100886327*/
              v115 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100886332*/
              v13 = (__int64)&v89; /*0x10088633d*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v89, &unk_1017C5B3B, &v108); /*0x10088634b*/
              if ( v101 ) /*0x10088635a*/
              {
                v13 = (__int64)__src; /*0x10088635c*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v101, 1); /*0x100886368*/
              }
              v9 = v117; /*0x10088636d*/
              if ( v117 ) /*0x100886374*/
              {
                v13 = v118; /*0x100886376*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, v117, 1); /*0x10088637f*/
              }
              v25 = (signed __int64)v89; /*0x100886384*/
              v122 = v90; /*0x100886392*/
              a2 = v91; /*0x100886396*/
              goto LABEL_42; /*0x10088639d*/
            }
          }
        }
        break;
      default:
        goto LABEL_60; /*0x10088587d*/
    }
    v25 = 0x8000000000000000LL; /*0x100885b4e*/
    goto LABEL_42; /*0x100885b4e*/
  }
  v9 = 7; /*0x100885958*/
  v23 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674B65, 7, &v97); /*0x10088595d*/
  if ( !v23 ) /*0x100885965*/
    goto LABEL_60; /*0x100885965*/
  if ( *(_BYTE *)v23 != 3 ) /*0x10088596e*/
    goto LABEL_60; /*0x10088596e*/
  v24 = *(const void **)(v23 + 16); /*0x100885974*/
  v25 = *(_QWORD *)(v23 + 24); /*0x100885978*/
  v9 = v25; /*0x10088597f*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v24, v25); /*0x100885982*/
  if ( !v26 ) /*0x10088598a*/
    goto LABEL_60; /*0x10088598a*/
  if ( v25 < 0 ) /*0x100885993*/
  {
    v27 = v25; /*0x100885999*/
    v28 = 0; /*0x10088599c*/
    goto LABEL_25; /*0x10088599c*/
  }
  if ( v25 ) /*0x1008860f9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v25); /*0x1008860ff*/
    v65 = v25; /*0x100886104*/
    v28 = 1; /*0x100886107*/
    v27 = v65; /*0x100886112*/
    v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v65, 1); /*0x100886115*/
    if ( !v66 ) /*0x10088611d*/
LABEL_25:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v27); /*0x10088599f*/
    v13 = v66; /*0x100886123*/
    v25 = v27; /*0x100886126*/
  }
  else
  {
    v13 = 1; /*0x1008861f1*/
  }
  v122 = (void *)v13; /*0x1008861f6*/
  v9 = (__int64)v24; /*0x1008861fa*/
  memcpy((void *)v13, v24, v25); /*0x100886200*/
  a2 = (_DWORD *)v25; /*0x100886205*/
LABEL_43:
  v84[0] = 0; /*0x100885b6b*/
  v85 = nullptr; /*0x100885b76*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v9); /*0x100885b81*/
  v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1); /*0x100885b90*/
  v121 = (_QWORD **)v25; /*0x100885b98*/
  if ( !v37 ) /*0x100885b9c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 3); /*0x1008864d4*/
  *(_BYTE *)(v37 + 2) = 100; /*0x100885ba5*/
  *(_WORD *)v37 = 28003; /*0x100885ba9*/
  v82[0] = 3; /*0x100885bae*/
  v82[1] = v37; /*0x100885bb9*/
  v82[2] = 3; /*0x100885bc0*/
  if ( (__int64)a2 < 0 ) /*0x100885bce*/
  {
    v38 = 0; /*0x100885bd4*/
    goto LABEL_46; /*0x100885bd4*/
  }
  if ( a2 ) /*0x100885dfe*/
  {
    v116 = a1; /*0x100885e00*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3, 1); /*0x100885e04*/
    v38 = 1; /*0x100885e0c*/
    v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x100885e16*/
    if ( !v56 ) /*0x100885e1e*/
LABEL_46:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v38, a2); /*0x100885bd6*/
    v57 = v56; /*0x100885e24*/
    a1 = v116; /*0x100885e27*/
  }
  else
  {
    v57 = 1; /*0x100885e4c*/
  }
  memcpy((void *)v57, v122, (size_t)a2); /*0x100885e5c*/
  LOBYTE(v93) = 3; /*0x100885e61*/
  v94 = (__int64)a2; /*0x100885e68*/
  v95 = v57; /*0x100885e6f*/
  v96 = a2; /*0x100885e76*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v101, v84, v82); /*0x100885e92*/
  if ( __OFSUB__(0, v101) ) /*0x100885e99*/
  {
    v58 = (char *)__src; /*0x100885ea2*/
    v59 = 32LL * (_QWORD)v104; /*0x100885eb0*/
    v120 = *((_QWORD *)__src + 4 * (_QWORD)v104 + 3); /*0x100885eb9*/
    v119 = *((_QWORD *)__src + 4 * (_QWORD)v104 + 2); /*0x100885ec2*/
    v60 = *((_QWORD *)__src + 4 * (_QWORD)v104); /*0x100885ec6*/
    v118 = *((_QWORD *)__src + 4 * (_QWORD)v104 + 1); /*0x100885ecf*/
    v117 = v60; /*0x100885ed3*/
    *(_QWORD *)((char *)__src + v59 + 24) = v96; /*0x100885ede*/
    *(_QWORD *)&v58[v59 + 16] = v95; /*0x100885eea*/
    v61 = v93; /*0x100885eef*/
    *(_QWORD *)&v58[v59 + 8] = v94; /*0x100885efd*/
    *(_QWORD *)&v58[v59] = v61; /*0x100885f02*/
    if ( (_BYTE)v117 != 6 ) /*0x100885f0a*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v117); /*0x100885f14*/
  }
  else
  {
    v114 = v107; /*0x100885f25*/
    v113 = v106; /*0x100885f30*/
    v112 = v105; /*0x100885f3b*/
    v111 = v104; /*0x100885f46*/
    v110 = __n; /*0x100885f54*/
    v109 = (__int64 (__fastcall *)())__src; /*0x100885f69*/
    v108 = v101; /*0x100885f70*/
    v92 = v96; /*0x100885f7e*/
    v91 = (_DWORD *)v95; /*0x100885f8c*/
    v90 = (__int64 (__fastcall *)())v94; /*0x100885fa1*/
    v89 = v93; /*0x100885fa8*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100885fc1*/
      &v117,
      &v108,
      &v89);
  }
  v109 = (__int64 (__fastcall *)())v84[0]; /*0x100885fd4*/
  v110 = v84[1]; /*0x100885fdb*/
  v111 = v85; /*0x100885fe9*/
  LOBYTE(v108) = 5; /*0x100885ff0*/
  v117 = 0; /*0x100885ff7*/
  v118 = 1; /*0x100885fff*/
  v119 = 0; /*0x100886007*/
  __n = 1610612768; /*0x10088600f*/
  v101 = &v117; /*0x10088601e*/
  __src = &anon_10420c9971c21f44d230d15b39fb3fec_964; /*0x10088602c*/
  if ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce( /*0x100886041*/
                          &v108,
                          &v101) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10088646f*/
      &anon_10420c9971c21f44d230d15b39fb3fec_965,
      55,
      &v89,
      &anon_10420c9971c21f44d230d15b39fb3fec_976,
      &anon_10420c9971c21f44d230d15b39fb3fec_967);
  v62 = v117; /*0x10088604e*/
  v116 = (__int64 *)v118; /*0x100886056*/
  v63 = v119; /*0x10088605a*/
  v9 = (__int64)v121; /*0x10088605e*/
  if ( v121 ) /*0x100886065*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v121, 1); /*0x100886070*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v97); /*0x10088607c*/
  v10 = (signed __int64 *)&v108; /*0x10088608b*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v108); /*0x100886092*/
  if ( v62 == 0x8000000000000000LL ) /*0x10088609a*/
    goto LABEL_61; /*0x10088609a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v108, v9); /*0x1008860a0*/
  v64 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1008860af*/
  if ( !v64 ) /*0x1008860b7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x1008864e5*/
  qmemcpy(v64, "exec_command", 12); /*0x1008860c7*/
  a1[3] = v62; /*0x1008860d1*/
  a1[4] = (__int64)v116; /*0x1008860d9*/
  a1[5] = v63; /*0x1008860dd*/
  *a1 = 12; /*0x1008860e1*/
  a1[1] = (__int64)v64; /*0x1008860e8*/
  a1[2] = 12; /*0x1008860ec*/
  return a1; /*0x100885dec*/
}