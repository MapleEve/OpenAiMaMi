// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tokens::native_usage::h76867ae5e060b81e; addr: 0x10039bb20; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:20Z
double __fastcall codexmate_lib::core::analytics::parser::tokens::native_usage::h76867ae5e060b81e(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5)
{
  __int64 v5; // r13
  double result; // xmm0_8
  __int64 v8; // rdi
  _BYTE *v9; // r15
  __int64 v10; // rax
  char *v11; // rcx
  bool v12; // al
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  char *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r14
  char *v19; // rbx
  bool v20; // zf
  __int64 v21; // r9
  _QWORD *v22; // r13
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  bool v26; // al
  size_t v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  bool v30; // al
  __int64 v31; // rax
  __int64 v32; // rcx
  bool v33; // al
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rcx
  bool v37; // cl
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r15
  char v43; // r13
  __int64 v44; // rax
  __int64 v45; // r14
  size_t v46; // r15
  __int64 v47; // rax
  __int64 v48; // r15
  _QWORD *v49; // r14
  __int64 v50; // rax
  int v51; // ecx
  __int64 v52; // rbx
  char *v53; // rbx
  _QWORD __src[18]; // [rsp+30h] [rbp-290h] BYREF
  _QWORD v55[18]; // [rsp+C0h] [rbp-200h] BYREF
  _QWORD v56[4]; // [rsp+150h] [rbp-170h] BYREF
  __int64 v57; // [rsp+170h] [rbp-150h]
  __int64 v58; // [rsp+178h] [rbp-148h] BYREF
  void *v59; // [rsp+180h] [rbp-140h]
  size_t v60; // [rsp+188h] [rbp-138h]
  __int64 v61; // [rsp+190h] [rbp-130h]
  char *v62; // [rsp+198h] [rbp-128h]
  __int64 v63; // [rsp+1A0h] [rbp-120h]
  __int64 v64; // [rsp+1A8h] [rbp-118h]
  __int64 v65; // [rsp+1B0h] [rbp-110h]
  __int64 v66; // [rsp+1B8h] [rbp-108h]
  __int64 v67; // [rsp+1C0h] [rbp-100h]
  __int64 v68; // [rsp+1C8h] [rbp-F8h]
  __int64 v69; // [rsp+1D0h] [rbp-F0h]
  __int64 v70; // [rsp+1D8h] [rbp-E8h]
  __int64 v71; // [rsp+1E0h] [rbp-E0h]
  __int64 v72; // [rsp+1E8h] [rbp-D8h] BYREF
  __int64 v73; // [rsp+1F0h] [rbp-D0h]
  __int64 v74; // [rsp+1F8h] [rbp-C8h]
  __int64 v75; // [rsp+200h] [rbp-C0h]
  char *v76; // [rsp+208h] [rbp-B8h] BYREF
  __int64 v77; // [rsp+210h] [rbp-B0h]
  __int64 v78; // [rsp+218h] [rbp-A8h]
  __int64 v79; // [rsp+220h] [rbp-A0h]
  void *v80; // [rsp+228h] [rbp-98h]
  size_t v81; // [rsp+230h] [rbp-90h]
  __int64 v82; // [rsp+238h] [rbp-88h]
  __int64 v83; // [rsp+240h] [rbp-80h]
  __int64 v84; // [rsp+248h] [rbp-78h]
  int v85; // [rsp+254h] [rbp-6Ch]
  size_t __n; // [rsp+258h] [rbp-68h]
  void *v87; // [rsp+260h] [rbp-60h]
  __int64 v88; // [rsp+268h] [rbp-58h]
  char *v89; // [rsp+270h] [rbp-50h]
  char *v90; // [rsp+278h] [rbp-48h]
  __int64 v91; // [rsp+280h] [rbp-40h]
  __int64 v92; // [rsp+288h] [rbp-38h]
  char *v93; // [rsp+290h] [rbp-30h]

  v85 = a4; /*0x10039bb37*/
  v68 = a3; /*0x10039bb3a*/
  v91 = a1; /*0x10039bb44*/
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(&v76, a2, &unk_1016F15AE, 9); /*0x10039bb5b*/
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(&v58, a2, &unk_1016F15B7, 11); /*0x10039bb76*/
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(v55, a2, &unk_1016F1546, 7); /*0x10039bb91*/
  v88 = v77; /*0x10039bba4*/
  v87 = v59; /*0x10039bbb6*/
  v92 = v55[1]; /*0x10039bbc8*/
  v82 = v58; /*0x10039bbdc*/
  v83 = v55[0]; /*0x10039bbeb*/
  if ( v76 == (char *)0x8000000000000000LL || v58 == 0x8000000000000000LL || v55[0] == 0x8000000000000000LL ) /*0x10039bbf2*/
  {
    if ( 2LL * (_QWORD)v76 ) /*0x10039bbff*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v76, 1); /*0x10039bc15*/
    if ( 2 * v82 ) /*0x10039bc24*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v82, 1); /*0x10039bc35*/
    if ( 2 * v83 ) /*0x10039bc41*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v83, 1); /*0x10039bc52*/
    v8 = v91; /*0x10039bc57*/
    *(_BYTE *)(v91 + 505) = 1; /*0x10039bc5b*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v8 + 400, 5); /*0x10039bc7f*/
    return result; /*0x10039bc7f*/
  }
  v93 = v76; /*0x10039bc84*/
  v57 = v78; /*0x10039bc8f*/
  __n = v60; /*0x10039bc9d*/
  v84 = v55[2]; /*0x10039bca8*/
  v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10039bcc0*/
                  &unk_1016F15C2,
                  5,
                  a2);
  if ( !v9 ) /*0x10039bcc6*/
    v9 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x10039bcc8*/
  if ( *v9 != 5 ) /*0x10039bcd3*/
  {
    v58 = 0; /*0x10039bd1c*/
    v60 = 0; /*0x10039bd27*/
    v62 = nullptr; /*0x10039bd32*/
    v64 = 0; /*0x10039bd3d*/
    v66 = 0; /*0x10039bd48*/
    goto LABEL_18; /*0x10039bd48*/
  }
  v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10039bce4*/
          (char *)&loc_1016F15D0 + 2,
          12,
          v9);
  if ( v10 ) /*0x10039bcec*/
  {
    if ( *(_BYTE *)v10 != 2 ) /*0x10039bcf5*/
      goto LABEL_27; /*0x10039bcf5*/
    v11 = *(char **)(v10 + 8); /*0x10039bcfb*/
    if ( !v11 ) /*0x10039bd02*/
    {
      v11 = *(char **)(v10 + 16); /*0x10039c456*/
      v12 = (__int64)v11 >= 0; /*0x10039c45d*/
      goto LABEL_28; /*0x10039c460*/
    }
    if ( (_DWORD)v11 == 1 ) /*0x10039bd0b*/
    {
      v11 = *(char **)(v10 + 16); /*0x10039bd11*/
      v12 = 1; /*0x10039bd15*/
    }
    else
    {
LABEL_27:
      v12 = 0; /*0x10039bf28*/
    }
LABEL_28:
    v89 = v11; /*0x10039bf2a*/
    v71 = v12 & (unsigned __int8)((__int64)v11 >= 0); /*0x10039bf39*/
    goto LABEL_30; /*0x10039bf40*/
  }
  v71 = 0; /*0x10039bf42*/
LABEL_30:
  v24 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&loc_1016F15DE, 13, v9); /*0x10039bf4d*/
  if ( v24 ) /*0x10039bf64*/
  {
    if ( *(_BYTE *)v24 != 2 || (v25 = *(_QWORD *)(v24 + 8), v25 == 2) ) /*0x10039bf73*/
    {
      v26 = 0; /*0x10039bf86*/
    }
    else if ( (_DWORD)v25 == 1 ) /*0x10039bf78*/
    {
      v25 = *(_QWORD *)(v24 + 16); /*0x10039bf7e*/
      v26 = 1; /*0x10039bf82*/
    }
    else
    {
      v25 = *(_QWORD *)(v24 + 16); /*0x10039c465*/
      v26 = v25 >= 0; /*0x10039c46c*/
    }
    v69 = v25; /*0x10039bf88*/
    v27 = v26 & (unsigned __int8)(v25 >= 0); /*0x10039bf97*/
  }
  else
  {
    v27 = 0; /*0x10039bf9c*/
  }
  v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&loc_1016F15EB, 23, v9); /*0x10039bfad*/
  if ( v28 ) /*0x10039bfb5*/
  {
    if ( *(_BYTE *)v28 != 2 || (v29 = *(_QWORD *)(v28 + 8), v29 == 2) ) /*0x10039bfc4*/
    {
      v30 = 0; /*0x10039bfd7*/
    }
    else if ( (_DWORD)v29 == 1 ) /*0x10039bfc9*/
    {
      v29 = *(_QWORD *)(v28 + 16); /*0x10039bfcf*/
      v30 = 1; /*0x10039bfd3*/
    }
    else
    {
      v29 = *(_QWORD *)(v28 + 16); /*0x10039c474*/
      v30 = v29 >= 0; /*0x10039c47b*/
    }
    v70 = v29; /*0x10039bfd9*/
    v90 = (char *)(v30 & (unsigned __int8)(v29 >= 0)); /*0x10039bfeb*/
  }
  else
  {
    v90 = nullptr; /*0x10039bff1*/
  }
  v31 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1016F1602, 19, v9); /*0x10039c008*/
  if ( v31 ) /*0x10039c010*/
  {
    if ( *(_BYTE *)v31 != 2 || (v32 = *(_QWORD *)(v31 + 8), v32 == 2) ) /*0x10039c01f*/
    {
      v33 = 0; /*0x10039c032*/
    }
    else
    {
      v5 = *(_QWORD *)(v31 + 16); /*0x10039c02a*/
      v33 = (_DWORD)v32 == 1 || v5 >= 0; /*0x10039c02e*/
    }
    v34 = v33 & (unsigned __int8)(v5 >= 0); /*0x10039c03c*/
  }
  else
  {
    v34 = 0; /*0x10039c042*/
  }
  v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1016F1615, 12, v9); /*0x10039c054*/
  if ( v35 ) /*0x10039c05c*/
  {
    if ( *(_BYTE *)v35 != 2 || (v36 = *(_QWORD *)(v35 + 8), v36 == 2) ) /*0x10039c06b*/
    {
      v37 = 0; /*0x10039c07e*/
    }
    else
    {
      v35 = *(_QWORD *)(v35 + 16); /*0x10039c076*/
      v37 = (_DWORD)v36 == 1 || v35 >= 0; /*0x10039c07a*/
    }
    v38 = v37 & (unsigned __int8)(v35 >= 0); /*0x10039c088*/
  }
  else
  {
    v38 = 0; /*0x10039c08d*/
  }
  v58 = v71; /*0x10039c096*/
  v59 = v89; /*0x10039c0a1*/
  v60 = v27; /*0x10039c0a8*/
  v61 = v69; /*0x10039c0b6*/
  v62 = v90; /*0x10039c0c1*/
  v63 = v70; /*0x10039c0cf*/
  v64 = v34; /*0x10039c0d6*/
  v65 = v5; /*0x10039c0dd*/
  v66 = v38; /*0x10039c0e4*/
  v67 = v35; /*0x10039c0eb*/
  if ( v71 /*0x10039c151*/
    && (_BYTE)v27
    && (_BYTE)v38
    && v70 <= v69
    && v5 <= (__int64)v89
    && &v89[v69] == (char *)v35
    && !__OFADD__(v69, v89)
    && (_BYTE)v34
    && (_BYTE)v90 )
  {
    LOBYTE(v9) = 1; /*0x10039c157*/
    if ( !(_BYTE)v85 ) /*0x10039c15e*/
      goto LABEL_77; /*0x10039c15e*/
    goto LABEL_19; /*0x10039c15e*/
  }
LABEL_18:
  v13 = v91; /*0x10039bd53*/
  *(_BYTE *)(v91 + 505) = 1; /*0x10039bd57*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v13 + 400, 5); /*0x10039bd6a*/
  LODWORD(v9) = 0; /*0x10039bd6f*/
  if ( !(_BYTE)v85 ) /*0x10039bd76*/
  {
LABEL_77:
    v40 = 0; /*0x10039c1c5*/
    goto LABEL_79; /*0x10039c1c8*/
  }
LABEL_19:
  if ( *(_BYTE *)(v91 + 508) ) /*0x10039bd80*/
  {
    v15 = v91 + 264; /*0x10039bd8d*/
    v16 = *(char **)(v91 + 272); /*0x10039bd94*/
    v17 = *(_QWORD *)(v91 + 280); /*0x10039bd9b*/
    *(_QWORD *)(v91 + 280) = 0; /*0x10039bda2*/
    v18 = 144 * v17; /*0x10039bdb4*/
    v76 = v16; /*0x10039bdbc*/
    v77 = (__int64)&v16[144 * v17]; /*0x10039bdc3*/
    v78 = v15; /*0x10039bdca*/
    v79 = v17; /*0x10039bdd1*/
    v80 = nullptr; /*0x10039bdd8*/
    if ( v17 ) /*0x10039bde6*/
    {
      v90 = &v16[144 * v17]; /*0x10039bdec*/
      LODWORD(v89) = (_DWORD)v9; /*0x10039bdf0*/
      v19 = v16 + 144; /*0x10039bdf4*/
      do /*0x10039be41*/
      {
        memcpy(__src, v19 - 144, sizeof(__src)); /*0x10039be56*/
        v55[0] = 0; /*0x10039be5b*/
        v55[2] = 0; /*0x10039be66*/
        v55[4] = 0; /*0x10039be71*/
        v55[6] = 0; /*0x10039be7c*/
        v55[8] = 0; /*0x10039be87*/
        codexmate_lib::core::analytics::parser::tokens::token_data::hb557ea2d1e4212b5( /*0x10039beac*/
          &v72,
          v55,
          (char *)&loc_1016F157F + 2,
          0,
          0,
          v21);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&__src[12]); /*0x10039bebb*/
        __src[15] = v75; /*0x10039bec7*/
        __src[14] = v74; /*0x10039bed2*/
        __src[13] = v73; /*0x10039bee4*/
        __src[12] = v72; /*0x10039bee8*/
        LODWORD(__src[17]) = 20; /*0x10039beec*/
        v22 = a5; /*0x10039bef6*/
        v23 = a5[2]; /*0x10039bef9*/
        if ( v23 == *v22 ) /*0x10039bf02*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd1924b4a937a2a03(v22); /*0x10039bf0b*/
        memcpy((void *)(v22[1] + 144 * v23), __src, 0x90u); /*0x10039be24*/
        v22[2] = v23 + 1; /*0x10039be2c*/
        v19 += 144; /*0x10039be30*/
        v20 = v18 == 144; /*0x10039be37*/
        v18 -= 144; /*0x10039be37*/
        a5 = v22; /*0x10039be3e*/
      }
      while ( !v20 ); /*0x10039be41*/
      v76 = v90; /*0x10039c16a*/
      LOBYTE(v9) = (_BYTE)v89; /*0x10039c171*/
    }
    _$LT$alloc..vec..drain..Drain$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he62b76eeb45479b2(&v76); /*0x10039c17c*/
    v39 = v91; /*0x10039c181*/
    *(_BYTE *)(v91 + 505) = 1; /*0x10039c185*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v39 + 400, 6); /*0x10039c198*/
  }
  else if ( *(_QWORD *)(v91 + 224) ) /*0x10039bf15*/
  {
    goto LABEL_76; /*0x10039bf1d*/
  }
  codexmate_lib::core::analytics::parser::set_turn::h15f14214b5a991e4(v91, v92, v84); /*0x10039c1a9*/
LABEL_76:
  if ( *(_QWORD *)(v91 + 344) == 0x8000000000000000LL ) /*0x10039c1c3*/
    goto LABEL_77; /*0x10039c1c3*/
  v40 = *(_QWORD *)(v91 + 352); /*0x10039c1ca*/
  v14 = *(_QWORD *)(v91 + 360); /*0x10039c1d1*/
LABEL_79:
  codexmate_lib::core::analytics::parser::tokens::token_data::hb557ea2d1e4212b5( /*0x10039c1d8*/
    v56,
    &v58,
    &unk_1016F15C7,
    (unsigned __int8)v9,
    v40,
    v14);
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10039c1fe*/
  {
    v42 = 0; /*0x10039c200*/
    goto LABEL_81; /*0x10039c200*/
  }
  v43 = (char)v9; /*0x10039c211*/
  if ( __n ) /*0x10039c214*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, &v58, v41); /*0x10039c216*/
    v42 = 1; /*0x10039c21b*/
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10039c22a*/
    if ( !v44 ) /*0x10039c232*/
LABEL_81:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42, __n); /*0x10039c203*/
    v45 = v44; /*0x10039c234*/
  }
  else
  {
    v45 = 1; /*0x10039c239*/
  }
  v46 = __n; /*0x10039c246*/
  memcpy((void *)v45, v87, __n); /*0x10039c24d*/
  LOBYTE(v55[0]) = 3; /*0x10039c252*/
  v55[1] = v46; /*0x10039c259*/
  v55[2] = v45; /*0x10039c260*/
  v55[3] = v46; /*0x10039c267*/
  v47 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10039c281*/
          &unk_1016F15B7,
          0xBu);
  v48 = v57; /*0x10039c286*/
  v49 = (_QWORD *)v47; /*0x10039c28d*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v47); /*0x10039c293*/
  v49[3] = v55[3]; /*0x10039c29f*/
  v49[2] = v55[2]; /*0x10039c2aa*/
  v50 = v55[0]; /*0x10039c2ae*/
  v49[1] = v55[1]; /*0x10039c2bc*/
  *v49 = v50; /*0x10039c2c0*/
  v76 = (char *)&unk_1016F15C7; /*0x10039c2c3*/
  v77 = 6; /*0x10039c2ca*/
  v78 = v88; /*0x10039c2d9*/
  v79 = v48; /*0x10039c2e0*/
  v80 = v87; /*0x10039c2eb*/
  v81 = __n; /*0x10039c2f6*/
  v75 = v56[3]; /*0x10039c304*/
  v74 = v56[2]; /*0x10039c312*/
  v73 = v56[1]; /*0x10039c327*/
  v72 = v56[0]; /*0x10039c32e*/
  v51 = 90; /*0x10039c33d*/
  if ( v43 ) /*0x10039c342*/
    v51 = 100; /*0x10039c342*/
  codexmate_lib::core::analytics::parser::fact::ha64429e32170a0de( /*0x10039c397*/
    v55,
    &anon_7534e791983e23e0bbee4dd7c8383343_216,
    5,
    &v76,
    3,
    v88,
    v48,
    v92,
    v84,
    v68,
    &v72,
    v51);
  v52 = a5[2]; /*0x10039c39c*/
  if ( v52 == *a5 ) /*0x10039c3a5*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd1924b4a937a2a03(a5); /*0x10039c3aa*/
  memcpy((void *)(a5[1] + 144 * v52), v55, 0x90u); /*0x10039c3c8*/
  a5[2] = v52 + 1; /*0x10039c3d0*/
  if ( (_BYTE)v85 ) /*0x10039c3d9*/
    result = codexmate_lib::core::analytics::parser::activity::h5533b66eb59dc9f2(v88, v48, v92, v84, v68, a5); /*0x10039c3f4*/
  if ( v83 ) /*0x10039c400*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v83, 1); /*0x10039c40b*/
  v53 = v93; /*0x10039c41a*/
  if ( v82 ) /*0x10039c41e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v82, 1); /*0x10039c429*/
  if ( v53 ) /*0x10039c431*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v53, 1); /*0x10039c43f*/
  return result; /*0x10039bc6e*/
}