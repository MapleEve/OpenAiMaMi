// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tools::completed_item::h41a3f40ac0466d1e; addr: 0x1008a5ae0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:20Z
double __fastcall codexmate_lib::core::analytics::parser::tools::completed_item::h41a3f40ac0466d1e(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7)
{
  __int64 v7; // rbx
  const __m128i *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  const __m128i *v14; // rdi
  const __m128i *v15; // rdx
  char *v16; // rsi
  char *v17; // rbx
  __int64 v18; // rax
  size_t v19; // r12
  __int64 (__fastcall *v20)(); // rax
  __int64 (__fastcall *v21)(); // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r13
  bool v25; // si
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 *v28; // rcx
  unsigned __int64 *v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _BYTE *v34; // rax
  __int64 v35; // rsi
  char v36; // r13
  unsigned __int64 v37; // rax
  bool v38; // zf
  void *v39; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rax
  char v43; // bl
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  void *v46; // rsi
  int v47; // eax
  unsigned __int64 v48; // rax
  unsigned __int32 v49; // eax
  unsigned int v50; // ecx
  int v51; // edx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 (__fastcall *v54)(); // rbx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rbx
  __int64 (__fastcall *v58)(); // r12
  _BYTE *v59; // rax
  _BYTE *v60; // rax
  _QWORD *v61; // rax
  unsigned __int64 *v62; // rdx
  _QWORD *v63; // rcx
  __int64 (__fastcall *v64)(); // rdx
  _QWORD *v65; // rsi
  _QWORD *v66; // rdi
  __int64 v68; // [rsp+50h] [rbp-230h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+58h] [rbp-228h]
  size_t v70; // [rsp+60h] [rbp-220h]
  void *v71; // [rsp+68h] [rbp-218h]
  size_t v72; // [rsp+70h] [rbp-210h]
  __int64 v73; // [rsp+78h] [rbp-208h]
  void *v74; // [rsp+88h] [rbp-1F8h]
  size_t v75; // [rsp+90h] [rbp-1F0h]
  __int64 v76[3]; // [rsp+C8h] [rbp-1B8h] BYREF
  char v77; // [rsp+E0h] [rbp-1A0h]
  __int64 v78; // [rsp+E8h] [rbp-198h]
  unsigned __int64 *v79; // [rsp+F0h] [rbp-190h] BYREF
  _QWORD *v80; // [rsp+F8h] [rbp-188h] BYREF
  __int64 (__fastcall *v81)(); // [rsp+100h] [rbp-180h]
  __int64 (__fastcall **v82)(); // [rsp+108h] [rbp-178h]
  __int64 (__fastcall *v83)(); // [rsp+110h] [rbp-170h]
  _QWORD *v84; // [rsp+118h] [rbp-168h]
  __int64 v85; // [rsp+120h] [rbp-160h]
  _QWORD *v86; // [rsp+128h] [rbp-158h]
  __int64 (__fastcall *v87)(); // [rsp+130h] [rbp-150h]
  _QWORD *v88; // [rsp+138h] [rbp-148h]
  __m128i *v89; // [rsp+140h] [rbp-140h]
  unsigned __int64 **v90; // [rsp+148h] [rbp-138h]
  __int64 v91; // [rsp+150h] [rbp-130h]
  __int64 v92; // [rsp+158h] [rbp-128h]
  __int64 v93; // [rsp+160h] [rbp-120h]
  __int64 v94; // [rsp+168h] [rbp-118h]
  size_t __n; // [rsp+170h] [rbp-110h]
  _QWORD *v96; // [rsp+178h] [rbp-108h] BYREF
  __int64 (__fastcall *v97)(); // [rsp+180h] [rbp-100h]
  __int64 (__fastcall **v98)(); // [rsp+188h] [rbp-F8h]
  __int64 v99; // [rsp+190h] [rbp-F0h]
  __int64 v100; // [rsp+198h] [rbp-E8h]
  __int64 v101; // [rsp+1A0h] [rbp-E0h]
  unsigned __int64 v102; // [rsp+1A8h] [rbp-D8h] BYREF
  __int64 (__fastcall *v103)(); // [rsp+1B0h] [rbp-D0h]
  __int64 v104; // [rsp+1B8h] [rbp-C8h]
  char v105; // [rsp+1C0h] [rbp-C0h]
  __int64 v106; // [rsp+1C8h] [rbp-B8h]
  __int64 v107; // [rsp+1D0h] [rbp-B0h]
  __int64 v108; // [rsp+1D8h] [rbp-A8h]
  int v109[2]; // [rsp+1E0h] [rbp-A0h]
  __int64 (__fastcall *v110)(); // [rsp+1E8h] [rbp-98h] BYREF
  __int64 v111; // [rsp+1F0h] [rbp-90h]
  __int64 v112; // [rsp+1F8h] [rbp-88h]
  int v113[2]; // [rsp+200h] [rbp-80h]
  int v114[2]; // [rsp+208h] [rbp-78h]
  int v115[2]; // [rsp+210h] [rbp-70h]
  int v116[2]; // [rsp+218h] [rbp-68h]
  void *v117; // [rsp+220h] [rbp-60h]
  int v118[2]; // [rsp+228h] [rbp-58h]
  void *v119; // [rsp+230h] [rbp-50h]
  size_t v120; // [rsp+238h] [rbp-48h]
  int v121; // [rsp+244h] [rbp-3Ch]
  const __m128i *v122; // [rsp+248h] [rbp-38h]
  void *__src; // [rsp+250h] [rbp-30h]

  v99 = a6; /*0x1008a5af4*/
  v107 = a5; /*0x1008a5afb*/
  *(_QWORD *)v113 = a4; /*0x1008a5b02*/
  *(_QWORD *)v114 = a3; /*0x1008a5b06*/
  v10 = (const __m128i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a5b24*/
                           "item",
                           4,
                           a2);
  if ( !v10 ) /*0x1008a5b2a*/
    v10 = (const __m128i *)&serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1008a5b2c*/
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(&v68, a2, "turn_id", 7); /*0x1008a5b49*/
  v106 = v68; /*0x1008a5b55*/
  if ( __OFSUB__(-v68, 1) ) /*0x1008a5b5c*/
  {
    a1[31].i8[9] = 1; /*0x1008a5b61*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(&a1[25], 7); /*0x1008a5b89*/
    return *(double *)a7.i64; /*0x1008a5b89*/
  }
  *(_QWORD *)v118 = v69; /*0x1008a5b95*/
  *(_QWORD *)v115 = v70; /*0x1008a5ba0*/
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(&v68, v10, &anon_0868f19ff3e9f3569e732f60bdb020cc_26, 2); /*0x1008a5bba*/
  v108 = v68; /*0x1008a5bd0*/
  if ( v68 == 0x8000000000000000LL ) /*0x1008a5bda*/
  {
    a1[31].i8[9] = 1; /*0x1008a5bdc*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(&a1[25], 7); /*0x1008a5bf3*/
LABEL_19:
    if ( v106 ) /*0x1008a5ccd*/
      *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v118, v106, 1); /*0x1008a5ced*/
    return *(double *)a7.i64; /*0x1008a5ced*/
  }
  *(_QWORD *)v116 = v69; /*0x1008a5c04*/
  *(_QWORD *)v109 = v70; /*0x1008a5c0f*/
  v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a5c25*/
          "typeuserinfoweek_up_",
          4,
          v10);
  if ( v11 && *(_BYTE *)v11 == 3 ) /*0x1008a5c32*/
  {
    v12 = *(_QWORD *)(v11 + 16); /*0x1008a5c34*/
    v7 = *(_QWORD *)(v11 + 24); /*0x1008a5c38*/
  }
  else
  {
    v12 = 0; /*0x1008a5c3e*/
  }
  if ( !v12 ) /*0x1008a5c43*/
    v7 = 0; /*0x1008a5c43*/
  v13 = 1; /*0x1008a5c47*/
  if ( v12 ) /*0x1008a5c4c*/
    v13 = v12; /*0x1008a5c4c*/
  v122 = (const __m128i *)v13; /*0x1008a5c50*/
  v14 = *(const __m128i **)v114; /*0x1008a5c54*/
  *(double *)a7.i64 = codexmate_lib::core::analytics::parser::activity::h5533b66eb59dc9f2( /*0x1008a5c72*/
                        *(__int64 *)v114,
                        *(__int64 *)v113,
                        *(__int64 *)v118,
                        *(__int64 *)v115,
                        v107,
                        (_QWORD *)v99);
  v100 = v7; /*0x1008a5c7b*/
  if ( v7 == 10 ) /*0x1008a5c82*/
  {
    if ( v122->i64[0] ^ 0x6E616843656C6946LL | v122->u16[4] ^ 0x6567LL ) /*0x1008a5ca0*/
    {
LABEL_17:
      if ( v108 ) /*0x1008a5cb3*/
        *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v116, v108, 1); /*0x1008a5cbe*/
      goto LABEL_19; /*0x1008a5cbe*/
    }
    v120 = 4; /*0x1008a5df4*/
    v119 = "editturnlsof"; /*0x1008a5dff*/
    v19 = 11; /*0x1008a5e03*/
    v16 = (char *)&unk_10178B9D5; /*0x1008a5e09*/
LABEL_29:
    __src = v16; /*0x1008a5e10*/
LABEL_30:
    v121 = 0; /*0x1008a5e14*/
LABEL_31:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v16, v15); /*0x1008a5e1b*/
    v20 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1); /*0x1008a5e28*/
    if ( !v20 ) /*0x1008a5e30*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19); /*0x1008a6b77*/
    v21 = v20; /*0x1008a5e36*/
    memcpy(v20, __src, v19); /*0x1008a5e43*/
    v68 = v19; /*0x1008a5e48*/
    v69 = v21; /*0x1008a5e4f*/
    v70 = v19; /*0x1008a5e56*/
  }
  else
  {
    switch ( v7 ) /*0x1008a5d0a*/
    {
      case 9LL: /*0x1008a5d0a*/
        v15 = v122; /*0x1008a5d16*/
        v16 = (char *)&unk_10178BA44; /*0x1008a5d25*/
        v17 = "web_searchcalled"; /*0x1008a5d2c*/
        if ( v122->i64[0] ^ 0x6372616553626557LL | v122->u8[8] ^ 0x68LL ) /*0x1008a5d33*/
        {
          if ( v122->i64[0] ^ 0x6569566567616D49LL | v122->u8[8] ^ 0x77LL ) /*0x1008a5d51*/
          {
            if ( v122->i64[0] ^ 0x6F69736E65747845LL | v122->u8[8] ^ 0x6ELL ) /*0x1008a5d6f*/
              goto LABEL_17; /*0x1008a5d72*/
            v117 = &unk_10178BA44; /*0x1008a5d78*/
            __src = (void *)6; /*0x1008a5d81*/
            v14 = v10; /*0x1008a5d91*/
            v18 = codexmate_lib::core::analytics::parser::text::hf40aeb5c8f1d61ba(v10, &unk_1016E9914, 4); /*0x1008a5d94*/
            LOBYTE(v15) = v18 != 0 && v15 == (const __m128i *)10; /*0x1008a5da6*/
            v120 = 5; /*0x1008a5dad*/
            v119 = &unk_10178BA3A; /*0x1008a5db8*/
            v19 = 9; /*0x1008a5dbc*/
            v16 = "extensiondynamicmcpserver/result/isErrorsuccessexit_codestarted_at_msunified_diffcontentoutput/metadat" /*0x1008a5dc2*/
                  "a/exit_codeisError";
            if ( (_BYTE)v15 != 1 || *(_QWORD *)v18 ^ 0x726165732E626577LL | *(unsigned __int16 *)(v18 + 8) ^ 0x6863LL ) /*0x1008a5de5*/
              goto LABEL_29; /*0x1008a5de8*/
          }
          else
          {
            __src = (void *)4; /*0x1008a64de*/
            v117 = "readeditturnlsof"; /*0x1008a64e9*/
            v17 = "view_image"; /*0x1008a64ed*/
          }
        }
        else
        {
          v117 = &unk_10178BA44; /*0x1008a64ba*/
          __src = (void *)6; /*0x1008a64c3*/
        }
        v19 = 10; /*0x1008a6515*/
        if ( *(_QWORD *)v17 ^ 0x726165735F626577LL | *((unsigned __int16 *)v17 + 4) ^ 0x6863LL ) /*0x1008a6512*/
        {
          v119 = v117; /*0x1008a6521*/
          v120 = (size_t)__src; /*0x1008a6529*/
          __src = v17; /*0x1008a652d*/
          goto LABEL_30; /*0x1008a6531*/
        }
        v14 = a1; /*0x1008a6541*/
        codexmate_lib::core::analytics::parser::tools::web_search_evidence::h8639673e27ccb0d0( /*0x1008a6558*/
          a1,
          *(__int64 *)v114,
          *(__int64 *)v113,
          *(size_t *)v118,
          *(size_t *)v115,
          *(__int64 *)v116,
          *(__int64 *)v109);
        v16 = v17; /*0x1008a655d*/
        v119 = v117; /*0x1008a6564*/
        v120 = (size_t)__src; /*0x1008a656c*/
        goto LABEL_29; /*0x1008a6570*/
      case 11LL: /*0x1008a5d0a*/
        if ( v122->i64[0] ^ 0x436C6F6F5470634DLL | *(__int64 *)((char *)v122->i64 + 3) ^ 0x6C6C61436C6F6F54LL ) /*0x1008a6032*/
          goto LABEL_17; /*0x1008a6035*/
        v52 = (_QWORD *)codexmate_lib::core::analytics::parser::text::hf40aeb5c8f1d61ba( /*0x1008a669e*/
                          v10,
                          "server/result/isErrorsuccessexit_codestarted_at_msunified_diffcontentoutput/metadata/exit_codeisError",
                          6);
        v54 = (__int64 (__fastcall *)())&unk_10178B9C8; /*0x1008a66a6*/
        if ( !v52 ) /*0x1008a66ad*/
        {
          v52 = &unk_10178B9C8; /*0x1008a66ad*/
          v53 = 7; /*0x1008a66b7*/
        }
        v96 = v52; /*0x1008a66bb*/
        v97 = (__int64 (__fastcall *)())v53; /*0x1008a66c2*/
        v55 = codexmate_lib::core::analytics::parser::text::hf40aeb5c8f1d61ba(v10, "toolstopseedautolastNULL", 4); /*0x1008a66d8*/
        if ( v55 ) /*0x1008a66e0*/
          v54 = (__int64 (__fastcall *)())v55; /*0x1008a66e0*/
        else
          v56 = 7; /*0x1008a66e4*/
        v110 = v54; /*0x1008a66e8*/
        v111 = v56; /*0x1008a66ef*/
        v80 = &v96; /*0x1008a66fd*/
        v81 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1008a670b*/
        v82 = &v110; /*0x1008a6719*/
        v83 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1008a6720*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v102, &unk_101902337, &v80); /*0x1008a673c*/
        v57 = v102; /*0x1008a6741*/
        v58 = v103; /*0x1008a6748*/
        codexmate_lib::core::analytics::parser::tools::safe_tool_name::h0db1700278b0404b(&v80); /*0x1008a6760*/
        v70 = (size_t)v82; /*0x1008a676c*/
        v69 = v81; /*0x1008a6781*/
        v68 = (__int64)v80; /*0x1008a6788*/
        v119 = &unk_10178BA3A; /*0x1008a6796*/
        v71 = &unk_10178BA3A; /*0x1008a679a*/
        v120 = 5; /*0x1008a67a6*/
        if ( v57 ) /*0x1008a67ad*/
          *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x1008a67be*/
        v121 = 0; /*0x1008a67c3*/
        break; /*0x1008a67ca*/
      case 15LL: /*0x1008a5d0a*/
        v14 = v122; /*0x1008a5fc7*/
        if ( v122->i64[0] ^ 0x6E65476567616D49LL | *(__int64 *)((char *)v122->i64 + 7) ^ 0x6E6F69746172656ELL ) /*0x1008a5fdc*/
        {
          if ( v122->i64[0] ^ 0x5463696D616E7944LL | *(__int64 *)((char *)v122->i64 + 7) ^ 0x6C6C61436C6F6F54LL ) /*0x1008a5ff2*/
            goto LABEL_17; /*0x1008a5ff5*/
          v19 = 7; /*0x1008a5ffb*/
          v16 = "dynamicmcpserver/result/isErrorsuccessexit_codestarted_at_msunified_diffcontentoutput/metadata/exit_codeisError"; /*0x1008a6001*/
        }
        else
        {
          v19 = 16; /*0x1008a6477*/
          v16 = (char *)&xmmword_1016E9EA0; /*0x1008a647d*/
        }
        v15 = v122; /*0x1008a6484*/
        if ( v122->i64[0] ^ 0x5463696D616E7944LL | *(__int64 *)((char *)v122->i64 + 7) ^ 0x6C6C61436C6F6F54LL ) /*0x1008a648f*/
        {
          __src = v16; /*0x1008a6498*/
          v119 = &unk_10178BA3A; /*0x1008a64a3*/
          v120 = 5; /*0x1008a64ac*/
          v121 = 1; /*0x1008a64b2*/
          goto LABEL_31; /*0x1008a64b5*/
        }
        v44 = codexmate_lib::core::analytics::parser::text::hf40aeb5c8f1d61ba(v10, "toolstopseedautolastNULL", 4); /*0x1008a6584*/
        if ( !v44 ) /*0x1008a6591*/
          v45 = 7; /*0x1008a6591*/
        v46 = &unk_10178B9C8; /*0x1008a6595*/
        if ( v44 ) /*0x1008a659c*/
          v46 = (void *)v44; /*0x1008a659c*/
        codexmate_lib::core::analytics::parser::tools::canonical_tool::h59eff20a10b07782( /*0x1008a65a7*/
          (__int64)&v68,
          (__int64)v46,
          v45);
        v119 = v71; /*0x1008a65b3*/
        v47 = v72; /*0x1008a65b7*/
        v120 = v72; /*0x1008a65be*/
        LOBYTE(v47) = 1; /*0x1008a65c2*/
        v121 = v47; /*0x1008a65c4*/
        break; /*0x1008a65c7*/
      case 16LL: /*0x1008a5d0a*/
        a7 = _mm_xor_si128(_mm_loadu_si128(v122), (__m128i)xmmword_101786A20); /*0x1008a6081*/
        if ( !_mm_testz_si128(a7, a7) ) /*0x1008a608e*/
          goto LABEL_17; /*0x1008a608e*/
        v120 = 7; /*0x1008a6099*/
        v119 = &unk_10178BA4A; /*0x1008a60a4*/
        v19 = 5; /*0x1008a60a8*/
        v16 = "shelltool_searchweb_searchcalled"; /*0x1008a60ae*/
        goto LABEL_29; /*0x1008a60b5*/
      case 19LL: /*0x1008a5d0a*/
        a7 = _mm_or_si128( /*0x1008a60d7*/
               _mm_xor_si128(_mm_loadu_si128(v122), (__m128i)xmmword_101786A10),
               _mm_xor_si128(_mm_loadu_si128((const __m128i *)((char *)v122->i32 + 3)), (__m128i)xmmword_101786A00));
        if ( !_mm_testz_si128(a7, a7) ) /*0x1008a60e0*/
          goto LABEL_17; /*0x1008a60e0*/
        v119 = &unk_10178BA3A; /*0x1008a60ed*/
        v19 = 5; /*0x1008a60f1*/
        v16 = (char *)&unk_10178BA3F; /*0x1008a60f7*/
        v120 = 5; /*0x1008a6103*/
        goto LABEL_29; /*0x1008a6107*/
      default:
        goto LABEL_17;
    }
  }
  v101 = v68; /*0x1008a5e5d*/
  v117 = v69; /*0x1008a5e72*/
  __n = v70; /*0x1008a5e7d*/
  v68 = *(_QWORD *)v114; /*0x1008a5e88*/
  v69 = *(__int64 (__fastcall **)())v113; /*0x1008a5e93*/
  v70 = *(_QWORD *)v118; /*0x1008a5e9e*/
  v71 = *(void **)v115; /*0x1008a5ea9*/
  v72 = *(_QWORD *)v116; /*0x1008a5eb4*/
  v73 = *(_QWORD *)v109; /*0x1008a5ec2*/
  codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db((__int64)&v96, (__int64)&v68, 3); /*0x1008a5edc*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hf978e924c77e5a4e( /*0x1008a5ef6*/
    &v68,
    &a1[26].u64[1],
    &v96,
    *(double *)a7.i64);
  v82 = v98; /*0x1008a5f02*/
  v81 = v97; /*0x1008a5f17*/
  v80 = v96; /*0x1008a5f1e*/
  codexmate_lib::core::analytics::parser::tools::remember_completion::hcd4c85c9e51e1361(a1, &v80); /*0x1008a5f2f*/
  __src = (void *)v68; /*0x1008a5f45*/
  if ( v68 != 0x8000000000000000LL ) /*0x1008a5f4c*/
  {
    v24 = v78; /*0x1008a5f9d*/
    goto LABEL_54; /*0x1008a5fa4*/
  }
  v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a5f5d*/
          "started_at_msunified_diffcontentoutput/metadata/exit_codeisError",
          13,
          a2);
  v24 = v107; /*0x1008a5f62*/
  if ( !v22 ) /*0x1008a5f6c*/
    goto LABEL_54; /*0x1008a5f6c*/
  if ( *(_BYTE *)v22 != 2 ) /*0x1008a5f75*/
    goto LABEL_49; /*0x1008a5f75*/
  v23 = *(_QWORD *)(v22 + 8); /*0x1008a5f7b*/
  if ( !v23 ) /*0x1008a5f82*/
  {
    v23 = *(_QWORD *)(v22 + 16); /*0x1008a64c9*/
    v25 = v23 >= 0; /*0x1008a64d0*/
    goto LABEL_50; /*0x1008a64d4*/
  }
  if ( (_DWORD)v23 == 1 ) /*0x1008a5f8b*/
  {
    v23 = *(_QWORD *)(v22 + 16); /*0x1008a5f91*/
    v25 = 1; /*0x1008a5f95*/
  }
  else
  {
LABEL_49:
    v25 = 0; /*0x1008a610c*/
  }
LABEL_50:
  v24 = v23 / 1000; /*0x1008a610e*/
  if ( v23 < 0 ) /*0x1008a6139*/
    v24 = v107; /*0x1008a6139*/
  if ( !v25 ) /*0x1008a6140*/
    v24 = v107; /*0x1008a6140*/
LABEL_54:
  v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a6144*/
          &anon_0868f19ff3e9f3569e732f60bdb020cc_274,
          6,
          v10);
  if ( v26 ) /*0x1008a615b*/
  {
    v27 = v100; /*0x1008a6160*/
    if ( *(_BYTE *)v26 == 3 ) /*0x1008a6167*/
    {
      v28 = *(unsigned __int64 **)(v26 + 16); /*0x1008a6169*/
      v26 = *(_QWORD *)(v26 + 24); /*0x1008a616d*/
    }
    else
    {
      v28 = nullptr; /*0x1008a617e*/
    }
  }
  else
  {
    v28 = nullptr; /*0x1008a6173*/
    v27 = v100; /*0x1008a6175*/
  }
  v29 = (unsigned __int64 *)&unk_10178B9C8; /*0x1008a6183*/
  if ( v28 ) /*0x1008a618a*/
    v29 = v28; /*0x1008a618a*/
  v30 = 7; /*0x1008a618e*/
  if ( v28 ) /*0x1008a6193*/
    v30 = v26; /*0x1008a6193*/
  if ( v27 == 10 ) /*0x1008a619b*/
    goto LABEL_78; /*0x1008a619b*/
  if ( v27 == 16 ) /*0x1008a61c5*/
  {
    a7 = _mm_xor_si128(_mm_loadu_si128(v122), (__m128i)xmmword_101786A20); /*0x1008a61cf*/
    if ( _mm_testz_si128(a7, a7) ) /*0x1008a61d7*/
    {
      v31 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a61f1*/
              "exit_codestarted_at_msunified_diffcontentoutput/metadata/exit_codeisError",
              9,
              v10);
      if ( v31 ) /*0x1008a61f9*/
      {
        if ( *(_BYTE *)v31 == 2 ) /*0x1008a6202*/
        {
          v32 = *(_QWORD *)(v31 + 8); /*0x1008a6208*/
          if ( v32 != 2 ) /*0x1008a6210*/
          {
            if ( (_DWORD)v32 == 1 ) /*0x1008a6219*/
            {
              v33 = *(_QWORD *)(v31 + 16); /*0x1008a621f*/
LABEL_158:
              v35 = v24; /*0x1008a6ad1*/
              v36 = v33 == 0; /*0x1008a6ad7*/
              goto LABEL_85; /*0x1008a6adb*/
            }
            v33 = *(_QWORD *)(v31 + 16); /*0x1008a6ac8*/
            if ( v33 >= 0 ) /*0x1008a6acf*/
              goto LABEL_158; /*0x1008a6acf*/
          }
        }
      }
      v35 = v24; /*0x1008a6ae0*/
      v36 = 2; /*0x1008a6ae3*/
      if ( v30 == 8 ) /*0x1008a6aea*/
      {
        if ( *v29 != 0x64656E696C636564LL ) /*0x1008a6b23*/
          goto LABEL_85; /*0x1008a6b23*/
      }
      else if ( v30 != 6 || *(_DWORD *)v29 ^ 0x6C696166 | *((unsigned __int16 *)v29 + 2) ^ 0x6465 ) /*0x1008a6b0b*/
      {
        goto LABEL_85; /*0x1008a6b0d*/
      }
      v36 = 0; /*0x1008a6b29*/
      goto LABEL_85; /*0x1008a6b2c*/
    }
    goto LABEL_78; /*0x1008a61dc*/
  }
  if ( !(_BYTE)v121 ) /*0x1008a622c*/
  {
    if ( v27 == 11 /*0x1008a62ad*/
      && !(v122->i64[0] ^ 0x436C6F6F5470634DLL | *(__int64 *)((char *)v122->i64 + 3) ^ 0x6C6C61436C6F6F54LL) )
    {
      v59 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a67de*/
                       "error/choices/0/finish_reason",
                       5,
                       v10);
      if ( (!v59 || !*v59) && (v30 != 6 || *(_DWORD *)v29 ^ 0x6C696166 | *((unsigned __int16 *)v29 + 2) ^ 0x6465) ) /*0x1008a680c*/
      {
        v60 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1008a6823*/
                         v10,
                         "/result/isErrorsuccessexit_codestarted_at_msunified_diffcontentoutput/metadata/exit_codeisError",
                         15);
        if ( v60 ) /*0x1008a682b*/
        {
          v35 = v24; /*0x1008a6831*/
        }
        else
        {
          v60 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27(v10, &unk_101786B00, 16); /*0x1008a6b40*/
          v35 = v24; /*0x1008a6b45*/
          if ( !v60 ) /*0x1008a6b4b*/
          {
            v36 = 2; /*0x1008a6b67*/
            goto LABEL_85; /*0x1008a6b6a*/
          }
        }
        v36 = 2; /*0x1008a6b4d*/
        if ( *v60 == 1 ) /*0x1008a6b53*/
          v36 = v60[1] ^ 1; /*0x1008a6b5e*/
        goto LABEL_85; /*0x1008a6b62*/
      }
      v35 = v24; /*0x1008a6ab1*/
      v36 = 0; /*0x1008a6ab4*/
      goto LABEL_85; /*0x1008a6ab7*/
    }
LABEL_78:
    v35 = v24; /*0x1008a62b3*/
    if ( v30 == 6 ) /*0x1008a62ba*/
    {
      v38 = (*(_DWORD *)v29 ^ 0x6C696166 | *((unsigned __int16 *)v29 + 2) ^ 0x6465) == 0; /*0x1008a6326*/
    }
    else
    {
      if ( v30 != 8 ) /*0x1008a62c0*/
      {
        v36 = 2; /*0x1008a62c2*/
        if ( v30 == 9 ) /*0x1008a62c9*/
          v36 = 2 - ((*v29 ^ 0x6574656C706D6F63LL | *((unsigned __int8 *)v29 + 8) ^ 0x64LL) == 0); /*0x1008a62ec*/
        goto LABEL_85; /*0x1008a62ef*/
      }
      v37 = _byteswap_uint64(*v29); /*0x1008a62f5*/
      v38 = (char)((v37 > 0x6465636C696E6564LL) - (v37 < 0x6465636C696E6564LL)) == 0; /*0x1008a630d*/
    }
LABEL_84:
    v36 = 2 * !v38; /*0x1008a6328*/
    goto LABEL_85; /*0x1008a632c*/
  }
  if ( v122->i64[0] ^ 0x5463696D616E7944LL | *(__int64 *)((char *)v122->i64 + 7) ^ 0x6C6C61436C6F6F54LL ) /*0x1008a624d*/
    goto LABEL_78; /*0x1008a6250*/
  v34 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a6261*/
                   "successexit_codestarted_at_msunified_diffcontentoutput/metadata/exit_codeisError",
                   7,
                   v10);
  v35 = v24; /*0x1008a6266*/
  if ( !v34 || *v34 != 1 ) /*0x1008a6275*/
  {
    v36 = 2; /*0x1008a6643*/
    if ( v30 != 6 ) /*0x1008a664a*/
      goto LABEL_85; /*0x1008a664a*/
    v49 = _byteswap_ulong(*(_DWORD *)v29); /*0x1008a6654*/
    v50 = 1717660012; /*0x1008a6656*/
    if ( v49 != 1717660012 /*0x1008a667b*/
      || (v49 = (unsigned __int16)__ROL2__(*((_WORD *)v29 + 2), 8), v50 = 25956, v51 = 0, (unsigned __int16)v49 != 25956) )
    {
      v51 = 2 * (v49 >= v50) - 1; /*0x1008a6684*/
    }
    v38 = v51 == 0; /*0x1008a6688*/
    goto LABEL_84; /*0x1008a668a*/
  }
  v36 = v34[1]; /*0x1008a627b*/
LABEL_85:
  v39 = v117; /*0x1008a632f*/
  if ( __src != (void *)0x8000000000000000LL ) /*0x1008a6341*/
  {
    v39 = v74; /*0x1008a6343*/
    __n = v75; /*0x1008a6351*/
  }
  codexmate_lib::core::analytics::parser::tools::tool_fact::hd4f5ab2826a4f3a1( /*0x1008a63c0*/
    v114[0],
    v113[0],
    v118[0],
    v115[0],
    v116[0],
    v109[0],
    v35,
    v39,
    __n,
    v119,
    v120,
    v29,
    v30,
    v36,
    100,
    v99);
  if ( v100 == 10 && !(v122->i64[0] ^ 0x6E616843656C6946LL | v122->u16[4] ^ 0x6567LL) ) /*0x1008a63ef*/
  {
    if ( (v36 & 1) != 0 ) /*0x1008a63fc*/
    {
      if ( __src == (void *)0x8000000000000000LL ) /*0x1008a643a*/
      {
        v42 = codexmate_lib::core::analytics::parser::ParserState::cwd::hb20f1f5411eab99f( /*0x1008a644b*/
                a1,
                *(_QWORD *)v118,
                *(_QWORD *)v115);
        if ( v42 ) /*0x1008a6453*/
        {
          v43 = *(_BYTE *)(v42 + 24); /*0x1008a6459*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(&v102, v42); /*0x1008a6467*/
          v105 = v43; /*0x1008a646c*/
        }
        else
        {
          v102 = 0x8000000000000000LL; /*0x1008a6839*/
        }
      }
      else
      {
        v48 = 0x8000000000000000LL; /*0x1008a65cc*/
        if ( v76[0] != 0x8000000000000000LL ) /*0x1008a65d6*/
        {
          LOBYTE(v30) = v77; /*0x1008a65df*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(&v80, v76); /*0x1008a65ed*/
          v48 = (unsigned __int64)v80; /*0x1008a65f2*/
          v110 = v81; /*0x1008a6600*/
          v111 = (__int64)v82; /*0x1008a660e*/
        }
        v104 = v111; /*0x1008a6623*/
        v103 = v110; /*0x1008a662a*/
        v102 = v48; /*0x1008a6631*/
        v105 = v30; /*0x1008a6638*/
      }
      v61 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a684f*/
                        "changessource_or_index_ioindex_decodeindex_stateSELECT value FROM meta WHERE key='generation'.js"
                        "onlDELETE FROM files WHERE path=?1INSERT INTO files(path,fingerprint,state,offset,ordinal,comple"
                        "te,thread_id,subagent,incomplete,rollout_id)\n"
                        "         VALUES(?1,?2,?3,?4,?5,?6,?7,?8,?9,?10) ON CONFLICT(path) DO UPDATE SET\n"
                        "         fingerprint=excluded.fingerprint,state=excluded.state,offset=excluded.offset,ordinal=ex"
                        "cluded.ordinal,\n"
                        "         complete=excluded.complete,thread_id=excluded.thread_id,subagent=excluded.subagent,\n"
                        "         incomplete=excluded.incomplete,failed=0,rollout_id=excluded.rollout_idINSERT INTO facts"
                        "(source,key,thread_id,turn_id,ts,kind,priority,data)\n"
                        "            VALUES(?1,?2,?3,?4,?5,?6,?7,?8) ON CONFLICT(source,key) DO UPDATE SET\n"
                        "            ts=excluded.ts,priority=excluded.priority,data=excluded.data\n"
                        "            WHERE excluded.priority>=facts.priorityINSERT INTO meta(key,value) VALUES('updated_a"
                        "t',?1) ON CONFLICT(key) DO UPDATE SET value=excluded.value",
                        7,
                        v10);
      if ( !v61 ) /*0x1008a6857*/
        v61 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1008a6859*/
      v62 = &v102; /*0x1008a6869*/
      if ( v102 == 0x8000000000000000LL ) /*0x1008a6870*/
        v62 = nullptr; /*0x1008a6870*/
      v79 = v62; /*0x1008a6874*/
      if ( *(_BYTE *)v61 == 5 ) /*0x1008a687e*/
      {
        v63 = (_QWORD *)v61[1]; /*0x1008a6884*/
        v64 = (__int64 (__fastcall *)())v61[2]; /*0x1008a6888*/
        v65 = nullptr; /*0x1008a688c*/
        v66 = v63; /*0x1008a688e*/
        if ( v63 ) /*0x1008a6898*/
          v66 = (_QWORD *)v61[3]; /*0x1008a689a*/
        LOBYTE(v65) = v63 != nullptr; /*0x1008a689e*/
        v80 = v65; /*0x1008a68a1*/
        v81 = nullptr; /*0x1008a68a8*/
        v82 = (__int64 (__fastcall **)())v63; /*0x1008a68b3*/
        v83 = v64; /*0x1008a68ba*/
        v84 = v65; /*0x1008a68c1*/
        v85 = 0; /*0x1008a68c8*/
        v86 = v63; /*0x1008a68d3*/
        v87 = v64; /*0x1008a68da*/
        v88 = v66; /*0x1008a68e1*/
        v89 = a1; /*0x1008a68e8*/
        v90 = &v79; /*0x1008a68f6*/
        v91 = *(_QWORD *)v114; /*0x1008a6901*/
        v92 = *(_QWORD *)v113; /*0x1008a690c*/
        v93 = *(_QWORD *)v118; /*0x1008a6917*/
        v94 = *(_QWORD *)v115; /*0x1008a6922*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8f5684ebbc4fd2b1( /*0x1008a6937*/
          &v110,
          &v80);
      }
      else
      {
        a1[31].i8[9] = 1; /*0x1008a693e*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(&a1[25], 8); /*0x1008a6955*/
        v110 = nullptr; /*0x1008a695a*/
        v111 = 8; /*0x1008a6965*/
        v112 = 0; /*0x1008a6970*/
      }
      if ( v102 != 0x8000000000000000LL ) /*0x1008a6982*/
      {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf7b5376469337172(&v102); /*0x1008a698b*/
        if ( v102 ) /*0x1008a699a*/
          *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103, 24 * v102, 8); /*0x1008a69b0*/
      }
      v40 = v111; /*0x1008a69b5*/
      v41 = v112; /*0x1008a69bc*/
    }
    else
    {
      v110 = nullptr; /*0x1008a63fe*/
      v111 = 8; /*0x1008a6409*/
      v112 = 0; /*0x1008a6414*/
      v40 = 8; /*0x1008a641f*/
      v41 = 0; /*0x1008a6425*/
    }
    codexmate_lib::core::analytics::parser::tools::change_facts::ha218b024c7f82f59( /*0x1008a6a07*/
      *(_QWORD **)v114,
      *(__int64 *)v113,
      *(__int64 *)v118,
      *(__int64 *)v115,
      *(__int64 *)v116,
      *(__int64 *)v109,
      v107,
      v40,
      v41,
      100,
      (_QWORD *)v99);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha810179bb43db0a3(&v110); /*0x1008a6a13*/
    if ( v110 ) /*0x1008a6a22*/
      *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 56LL * (_QWORD)v110, 8); /*0x1008a6a30*/
  }
  if ( __src != (void *)0x8000000000000000LL ) /*0x1008a6a43*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..tools..PendingCall$GT$::hc68bf139b01b8fe2( /*0x1008a6a4c*/
      &v68,
      *(double *)a7.i64);
  if ( v101 ) /*0x1008a6a5b*/
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117, v101, 1); /*0x1008a6a66*/
  if ( v108 ) /*0x1008a6a75*/
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v116, v108, 1); /*0x1008a6a80*/
  if ( v106 ) /*0x1008a6a8f*/
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v118, v106, 1); /*0x1008a6a9a*/
  return *(double *)a7.i64; /*0x1008a5b78*/
}