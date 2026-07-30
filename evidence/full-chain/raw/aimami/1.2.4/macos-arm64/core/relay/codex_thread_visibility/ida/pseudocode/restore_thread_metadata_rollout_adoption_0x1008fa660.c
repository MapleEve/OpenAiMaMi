// __ZN13codexmate_lib4core5relay23codex_thread_visibility41restore_thread_metadata_rollout_adoptions @ 0x1008fa660 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::restore_thread_metadata_rollout_adoptions::h07288689b2ce9c7b(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128 a4)
{
  _QWORD *v4; // r15
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // r12
  size_t v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // r14
  __int64 v13; // r13
  __int64 v14; // r14
  _QWORD *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rsi
  void *v18; // rdi
  size_t v19; // r13
  const void *v20; // rsi
  int v21; // eax
  void *v22; // rdi
  size_t v23; // r13
  const void *v24; // rsi
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r13
  _QWORD *v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rbx
  _QWORD *v41; // r14
  __int64 v42; // rsi
  _BYTE v44[96]; // [rsp+0h] [rbp-4F0h] BYREF
  _QWORD __dst[23]; // [rsp+60h] [rbp-490h] BYREF
  _QWORD v46[12]; // [rsp+118h] [rbp-3D8h] BYREF
  _BYTE v47[104]; // [rsp+178h] [rbp-378h] BYREF
  _BYTE __src[184]; // [rsp+1E0h] [rbp-310h] BYREF
  _QWORD *v49; // [rsp+298h] [rbp-258h] BYREF
  _QWORD v50[12]; // [rsp+2A0h] [rbp-250h] BYREF
  _QWORD v51[23]; // [rsp+300h] [rbp-1F0h] BYREF
  _QWORD v52[3]; // [rsp+3B8h] [rbp-138h] BYREF
  unsigned __int64 v53; // [rsp+3D0h] [rbp-120h]
  _QWORD *v54; // [rsp+3D8h] [rbp-118h]
  _QWORD **v55; // [rsp+3E0h] [rbp-110h] BYREF
  __int64 (__fastcall *v56)(); // [rsp+3E8h] [rbp-108h]
  __int64 v57; // [rsp+3F0h] [rbp-100h]
  __int128 v58; // [rsp+3F8h] [rbp-F8h]
  __int64 v59; // [rsp+408h] [rbp-E8h]
  _QWORD *v60; // [rsp+410h] [rbp-E0h]
  size_t v61; // [rsp+418h] [rbp-D8h]
  __int64 v62; // [rsp+420h] [rbp-D0h]
  __int64 v63; // [rsp+428h] [rbp-C8h]
  _QWORD *v64; // [rsp+430h] [rbp-C0h] BYREF
  size_t v65; // [rsp+438h] [rbp-B8h]
  __int64 v66; // [rsp+440h] [rbp-B0h]
  __int64 v67; // [rsp+448h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+450h] [rbp-A0h]
  __int64 v69; // [rsp+458h] [rbp-98h]
  __int64 v70; // [rsp+460h] [rbp-90h]
  _QWORD *v71; // [rsp+468h] [rbp-88h] BYREF
  __int64 (__fastcall *v72)(); // [rsp+470h] [rbp-80h]
  __int64 v73; // [rsp+478h] [rbp-78h]
  __int128 v74; // [rsp+480h] [rbp-70h]
  __int64 v75; // [rsp+490h] [rbp-60h]
  void *__s1; // [rsp+498h] [rbp-58h]
  _QWORD *v77; // [rsp+4A0h] [rbp-50h]
  __int64 *v78; // [rsp+4A8h] [rbp-48h]
  __int64 v79; // [rsp+4B0h] [rbp-40h] BYREF
  __int64 v80; // [rsp+4B8h] [rbp-38h]
  __int64 v81; // [rsp+4C0h] [rbp-30h]

  v4 = a1; /*0x1008fa674*/
  v67 = 0; /*0x1008fa677*/
  v68 = 8; /*0x1008fa682*/
  v69 = 0; /*0x1008fa68d*/
  if ( !a3 ) /*0x1008fa69b*/
    goto LABEL_81; /*0x1008fa69b*/
  v5 = a2; /*0x1008fa6a1*/
  v54 = a1; /*0x1008fa6a4*/
  v6 = a2 + 144 * a3; /*0x1008fa6bd*/
  v53 = 0x8000000000000001LL; /*0x1008fa6c3*/
  v78 = (__int64 *)&v55; /*0x1008fa6d1*/
  v63 = a2; /*0x1008fa6d5*/
  do /*0x1008fa6ea*/
  {
    v7 = *(_QWORD **)(v6 - 136); /*0x1008fa6f0*/
    v8 = *(_QWORD *)(v6 - 128); /*0x1008fa6f7*/
    codexmate_lib::core::relay::codex_thread_visibility::prepare_thread_metadata_rollout::h4a8908f8faf37875( /*0x1008fa710*/
      v47,
      (__int64)v7,
      v8,
      *(const void **)(v6 - 112),
      *(_QWORD *)(v6 - 104));
    qmemcpy(v44, &v47[8], sizeof(v44)); /*0x1008fa732*/
    if ( *(_QWORD *)v47 == v53 ) /*0x1008fa73c*/
    {
      qmemcpy(v46, v44, sizeof(v46)); /*0x1008fa74d*/
      goto LABEL_62; /*0x1008fa74d*/
    }
    v77 = v7; /*0x1008fa760*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1008fa780*/
    if ( *(_QWORD *)v47 == 0x8000000000000000LL ) /*0x1008fa792*/
    {
      v9 = (__int64)v77; /*0x1008fa794*/
      v71 = v77; /*0x1008fa798*/
      v72 = (__int64 (__fastcall *)())v8; /*0x1008fa79f*/
      v55 = &v71; /*0x1008fa7aa*/
      v56 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008fa7b8*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v47[8], &unk_1017D27C1, v78); /*0x1008fa7d1*/
      v7 = (_QWORD *)v9; /*0x1008fa7dc*/
      *(_QWORD *)v47 = 9; /*0x1008fa7df*/
      qmemcpy(v46, v47, sizeof(v46)); /*0x1008fa7fd*/
      goto LABEL_62; /*0x1008fa7fd*/
    }
    memcpy(v51, __dst, sizeof(v51)); /*0x1008fa81f*/
    qmemcpy(v50, v44, sizeof(v50)); /*0x1008fa837*/
    v70 = *(_QWORD *)v47; /*0x1008fa83a*/
    v49 = *(_QWORD **)v47; /*0x1008fa841*/
    qmemcpy(v47, &__dst[11], 0x60u); /*0x1008fa85b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v47[96], v46, v10, 0); /*0x1008fa85e*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(144, 8); /*0x1008fa86d*/
    if ( !v11 ) /*0x1008fa875*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 144); /*0x1008fb02c*/
    v12 = (__int64 (__fastcall *)())v11; /*0x1008fa87b*/
    v79 = 2; /*0x1008fa87e*/
    v80 = v11; /*0x1008fa886*/
    v81 = 0; /*0x1008fa88a*/
    if ( *(_QWORD *)(v6 - 96) == 0x8000000000000000LL ) /*0x1008fa8a3*/
    {
      v13 = 0; /*0x1008fa8a9*/
      v7 = v77; /*0x1008fa8ac*/
    }
    else
    {
      v18 = *(void **)&v47[8]; /*0x1008fa94d*/
      v19 = *(_QWORD *)&v47[16]; /*0x1008fa954*/
      v7 = v77; /*0x1008fa95f*/
      if ( *(_QWORD *)&v47[16] == *(_QWORD *)(v6 - 56) /*0x1008fa97f*/
        && (v20 = *(const void **)(v6 - 64),
            __s1 = *(void **)&v47[8],
            v21 = memcmp(*(const void **)&v47[8], v20, *(size_t *)&v47[16]),
            v18 = __s1,
            !v21) )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v71, v47); /*0x1008fad8e*/
        a4 = *(__m128 *)&v47[24]; /*0x1008fad9e*/
        v74 = *(_OWORD *)&v47[24]; /*0x1008fada5*/
        LOWORD(v75) = *(_WORD *)&v47[40]; /*0x1008fada9*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v64, v6 - 96); /*0x1008fadb4*/
        v59 = v75; /*0x1008fadbd*/
        v58 = v74; /*0x1008fadd3*/
        v57 = v73; /*0x1008fadde*/
        v56 = v72; /*0x1008fadf0*/
        v55 = (_QWORD **)v71; /*0x1008fadf7*/
        v62 = v66; /*0x1008fae0c*/
        v61 = v65; /*0x1008fae1e*/
        v60 = v64; /*0x1008fae22*/
        v37 = v81; /*0x1008fae25*/
        if ( v81 == v79 ) /*0x1008fae2d*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe98f8595b104309(&v79); /*0x1008fae33*/
        v12 = (__int64 (__fastcall *)())v80; /*0x1008fae38*/
        qmemcpy((void *)(v80 + 72 * v37), v78, 0x48u); /*0x1008fae4e*/
        v13 = v37 + 1; /*0x1008fae51*/
        v81 = v13; /*0x1008fae54*/
      }
      else
      {
        if ( v19 != *(_QWORD *)(v6 - 80) || memcmp(v18, *(const void **)(v6 - 88), v19) ) /*0x1008fa992*/
        {
          v64 = v7; /*0x1008fa99f*/
          v65 = v8; /*0x1008fa9a6*/
          v71 = &v64; /*0x1008fa9b4*/
          v72 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008fa9c2*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, (char *)&loc_1017D273A + 2, &v71); /*0x1008fa9d8*/
          goto LABEL_30; /*0x1008fa9dd*/
        }
        v13 = 0; /*0x1008fae5d*/
      }
    }
    v77 = (_QWORD *)v13; /*0x1008fa8b0*/
    if ( *(_QWORD *)(v6 - 48) == 0x8000000000000000LL ) /*0x1008fa8c2*/
      goto LABEL_12; /*0x1008fa8c2*/
    v22 = *(void **)&v47[56]; /*0x1008fa9e2*/
    v23 = *(_QWORD *)&v47[64]; /*0x1008fa9e9*/
    if ( *(_QWORD *)&v47[64] == *(_QWORD *)(v6 - 8) ) /*0x1008fa9f4*/
    {
      v24 = *(const void **)(v6 - 16); /*0x1008fa9f6*/
      __s1 = *(void **)&v47[56]; /*0x1008fa9fa*/
      v25 = memcmp(*(const void **)&v47[56], v24, *(size_t *)&v47[64]); /*0x1008faa05*/
      v22 = __s1; /*0x1008faa0a*/
      if ( !v25 ) /*0x1008faa10*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v71, &v47[48]); /*0x1008fae73*/
        a4 = *(__m128 *)&v47[72]; /*0x1008fae83*/
        v74 = *(_OWORD *)&v47[72]; /*0x1008fae8a*/
        LOWORD(v75) = *(_WORD *)&v47[88]; /*0x1008fae8e*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v64, v6 - 48); /*0x1008fae99*/
        v59 = v75; /*0x1008faea2*/
        v58 = v74; /*0x1008faeb8*/
        v57 = v73; /*0x1008faec3*/
        v56 = v72; /*0x1008faed5*/
        v55 = (_QWORD **)v71; /*0x1008faedc*/
        v62 = v66; /*0x1008faef1*/
        v61 = v65; /*0x1008faf03*/
        v60 = v64; /*0x1008faf07*/
        v38 = v81; /*0x1008faf0a*/
        if ( v81 == v79 ) /*0x1008faf12*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe98f8595b104309(&v79); /*0x1008faf18*/
        v12 = (__int64 (__fastcall *)())v80; /*0x1008faf1d*/
        qmemcpy((void *)(v80 + 72 * v38), v78, 0x48u); /*0x1008faf33*/
        v77 = (_QWORD *)(v38 + 1); /*0x1008faf39*/
        v81 = v38 + 1; /*0x1008faf3d*/
LABEL_12:
        if ( v77 ) /*0x1008fa8cf*/
        {
          codexmate_lib::core::relay::codex_thread_visibility::replace_session_meta_lines_with_strategy::h57dd05abf4b9373b( /*0x1008fa8eb*/
            (__int64)v46,
            v7,
            v8,
            v12,
            (__int64)v77,
            1,
            a4);
          v14 = v81; /*0x1008fa8f0*/
          if ( v81 ) /*0x1008fa8f7*/
          {
            v15 = (_QWORD *)(v80 + 56); /*0x1008fa901*/
            do /*0x1008fa917*/
            {
              v16 = *(v15 - 7); /*0x1008fa91d*/
              if ( v16 ) /*0x1008fa924*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v15 - 6), v16, 1); /*0x1008fa92f*/
              v17 = *(v15 - 1); /*0x1008fa934*/
              if ( v17 ) /*0x1008fa93b*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v15, v17, 1); /*0x1008fa946*/
              v15 += 9; /*0x1008fa910*/
              --v14; /*0x1008fa914*/
            }
            while ( v14 ); /*0x1008fa917*/
          }
        }
        else
        {
          v46[0] = 11; /*0x1008faae8*/
        }
        goto LABEL_38; /*0x1008fa917*/
      }
    }
    if ( v23 == *(_QWORD *)(v6 - 32) && !memcmp(v22, *(const void **)(v6 - 40), v23) ) /*0x1008faa2a*/
      goto LABEL_12; /*0x1008faa2a*/
    v64 = v7; /*0x1008faa30*/
    v65 = v8; /*0x1008faa37*/
    v71 = &v64; /*0x1008faa45*/
    v72 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008faa53*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, &unk_1017D277F, &v71); /*0x1008faa69*/
LABEL_30:
    v46[3] = v78[2]; /*0x1008faa6e*/
    v26 = *v78; /*0x1008faa81*/
    v46[2] = v78[1]; /*0x1008faa88*/
    v46[1] = v26; /*0x1008faa8c*/
    v27 = v81; /*0x1008faa93*/
    v46[0] = 10; /*0x1008faa97*/
    if ( v81 ) /*0x1008faaa5*/
    {
      v28 = (_QWORD *)(v80 + 56); /*0x1008faaa7*/
      do /*0x1008faab7*/
      {
        v29 = *(v28 - 7); /*0x1008faab9*/
        if ( v29 ) /*0x1008faac0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v28 - 6), v29, 1); /*0x1008faacb*/
        v30 = *(v28 - 1); /*0x1008faad0*/
        if ( v30 ) /*0x1008faad7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v28, v30, 1); /*0x1008faae1*/
        v28 += 9; /*0x1008faab0*/
        --v27; /*0x1008faab4*/
      }
      while ( v27 ); /*0x1008faab7*/
    }
LABEL_38:
    if ( v79 ) /*0x1008fab07*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, 72 * v79, 8); /*0x1008fab1a*/
    v5 = v63; /*0x1008fab29*/
    if ( *(_QWORD *)v47 ) /*0x1008fab30*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v47[8], *(_QWORD *)v47, 1); /*0x1008fab3e*/
    if ( *(_QWORD *)&v47[48] ) /*0x1008fab4d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v47[56], *(_QWORD *)&v47[48], 1); /*0x1008fab5b*/
    if ( v70 ) /*0x1008fab6a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[0], v70, 1); /*0x1008fab78*/
    if ( v50[2] ) /*0x1008fab87*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[3], v50[2], 1); /*0x1008fab95*/
    if ( v50[5] ) /*0x1008faba4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[6], v50[5], 1); /*0x1008fabb2*/
    if ( v50[8] != 0x8000000000000000LL && v50[8] ) /*0x1008fabd0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[9], v50[8], 1); /*0x1008fabde*/
    if ( !(2LL * v50[11]) ) /*0x1008fabea*/
    {
      v31 = v51[2]; /*0x1008fabfb*/
      if ( !v51[2] ) /*0x1008fac05*/
        goto LABEL_56; /*0x1008fac05*/
LABEL_55:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[3], v31, 1); /*0x1008fac07*/
      goto LABEL_56; /*0x1008fac13*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[0], v50[11], 1); /*0x1008fad66*/
    v31 = v51[2]; /*0x1008fad6b*/
    if ( v51[2] ) /*0x1008fad75*/
      goto LABEL_55; /*0x1008fad75*/
LABEL_56:
    if ( v51[5] != 0x8000000000000000LL && v51[5] ) /*0x1008fac31*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[6], v51[5], 1); /*0x1008fac3f*/
    if ( v51[8] != 0x8000000000000000LL && v51[8] ) /*0x1008fac5d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[9], v51[8], 1); /*0x1008fac6b*/
LABEL_62:
    if ( LODWORD(v46[0]) != 11 ) /*0x1008fac77*/
    {
      v32 = v5; /*0x1008fac7d*/
      qmemcpy(v47, v46, 0x60u); /*0x1008fac96*/
      __dst[0] = v7; /*0x1008fac99*/
      __dst[1] = v8; /*0x1008faca0*/
      v49 = __dst; /*0x1008facae*/
      v50[0] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008facbc*/
      v50[1] = v47; /*0x1008facc3*/
      v50[2] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x1008facd1*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v52, &unk_1017C3E33, &v49); /*0x1008faced*/
      v33 = v69; /*0x1008facf2*/
      if ( v69 == v67 ) /*0x1008fad00*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v67); /*0x1008fad09*/
      v34 = v68; /*0x1008fad0e*/
      v35 = 3 * v33; /*0x1008fad15*/
      *(_QWORD *)(v68 + 8 * v35 + 16) = v52[2]; /*0x1008fad20*/
      v36 = v52[0]; /*0x1008fad25*/
      *(_QWORD *)(v34 + 8 * v35 + 8) = v52[1]; /*0x1008fad33*/
      *(_QWORD *)(v34 + 8 * v35) = v36; /*0x1008fad38*/
      v69 = v33 + 1; /*0x1008fad3f*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v47); /*0x1008fad4d*/
      v5 = v32; /*0x1008fad52*/
    }
    v6 -= 144; /*0x1008fa6e0*/
  }
  while ( v5 != v6 ); /*0x1008fa6ea*/
  v4 = v54; /*0x1008faf50*/
  if ( !v69 ) /*0x1008faf57*/
  {
LABEL_81:
    *v4 = 11; /*0x1008fafe1*/
    goto LABEL_82; /*0x1008fafe1*/
  }
  alloc::str::join_generic_copy::h1b385c7941ba5aef(v47, v68, v69, &unk_10167E97F, 3); /*0x1008faf78*/
  v4[3] = *(_QWORD *)&v47[16]; /*0x1008faf84*/
  v39 = *(_QWORD *)v47; /*0x1008faf88*/
  v4[2] = *(_QWORD *)&v47[8]; /*0x1008faf96*/
  v4[1] = v39; /*0x1008faf9a*/
  v40 = v69; /*0x1008faf9e*/
  *v4 = 10; /*0x1008fafa5*/
  if ( v40 ) /*0x1008fafaf*/
  {
    v41 = (_QWORD *)(v68 + 8); /*0x1008fafb8*/
    do /*0x1008fafc7*/
    {
      v42 = *(v41 - 1); /*0x1008fafc9*/
      if ( v42 ) /*0x1008fafd0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v41, v42, 1); /*0x1008fafda*/
      v41 += 3; /*0x1008fafc0*/
      --v40; /*0x1008fafc4*/
    }
    while ( v40 ); /*0x1008fafc7*/
  }
LABEL_82:
  if ( v67 ) /*0x1008faff2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, 24 * v67, 8); /*0x1008fb008*/
  return v4; /*0x1008fb010*/
}