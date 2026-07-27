// __ZN13codexmate_lib4core5relay10translator6stream23AnthropicToOpenAiStream11final_chunk @ 0x100aa17d0 | 基线 same-set
void __fastcall codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::final_chunk::ha5572247707e26bb(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        size_t a4)
{
  __int64 v5; // r15
  _WORD *v6; // rax
  signed __int64 v7; // r15
  __int64 v8; // r14
  _DWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __m256i *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __m256i *v17; // rsi
  __int64 v18; // rax
  void *v19; // rax
  __m256i *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __m256i *v25; // rsi
  __int64 v26; // rax
  signed __int64 v27; // r15
  __int64 v28; // r12
  const void *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rbx
  __m256i *v32; // rdi
  _QWORD *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __m256i *v38; // rsi
  _DWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // rax
  __m256i *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __m256i *v49; // rsi
  __int64 v50; // rax
  __m256i *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __m256i *v56; // rsi
  void *v57; // rax
  void *v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rdx
  _QWORD v68[3]; // [rsp+18h] [rbp-198h] BYREF
  size_t __n; // [rsp+30h] [rbp-180h]
  void *__src; // [rsp+38h] [rbp-178h]
  _QWORD *v71; // [rsp+40h] [rbp-170h]
  __int128 v72; // [rsp+48h] [rbp-168h] BYREF
  __int64 v73; // [rsp+58h] [rbp-158h]
  __int128 v74; // [rsp+60h] [rbp-150h] BYREF
  __int64 v75; // [rsp+70h] [rbp-140h]
  __int64 v76; // [rsp+78h] [rbp-138h] BYREF
  __int64 v77; // [rsp+80h] [rbp-130h]
  __int64 v78; // [rsp+88h] [rbp-128h]
  _DWORD *v79; // [rsp+90h] [rbp-120h]
  __int64 v80; // [rsp+98h] [rbp-118h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-110h]
  __int64 v82; // [rsp+A8h] [rbp-108h]
  __int64 v83; // [rsp+B0h] [rbp-100h]
  __int64 v84; // [rsp+B8h] [rbp-F8h] BYREF
  size_t v85; // [rsp+C0h] [rbp-F0h]
  __int64 v86; // [rsp+C8h] [rbp-E8h]
  size_t v87; // [rsp+D0h] [rbp-E0h]
  __m256i v88; // [rsp+D8h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+F8h] [rbp-B8h]
  __int64 v90; // [rsp+100h] [rbp-B0h]
  __int64 v91; // [rsp+108h] [rbp-A8h]
  __m256i v92; // [rsp+110h] [rbp-A0h] BYREF
  __int64 v93; // [rsp+130h] [rbp-80h]
  __int64 v94; // [rsp+138h] [rbp-78h]
  __int64 v95; // [rsp+140h] [rbp-70h]
  __int64 v96; // [rsp+148h] [rbp-68h] BYREF
  __int64 v97; // [rsp+150h] [rbp-60h]
  __int64 v98; // [rsp+158h] [rbp-58h]
  __int64 v99; // [rsp+160h] [rbp-50h]
  __int64 v100; // [rsp+168h] [rbp-48h]
  size_t v101; // [rsp+170h] [rbp-40h]
  __int64 v102; // [rsp+178h] [rbp-38h]
  size_t v103; // [rsp+180h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 101) ) /*0x100aa17e7*/
  {
    *a1 = 0; /*0x100aa17ed*/
    a1[1] = 1; /*0x100aa17f4*/
    a1[2] = 0; /*0x100aa17fc*/
    return; /*0x100aa1815*/
  }
  __n = a4; /*0x100aa1819*/
  __src = a3; /*0x100aa1820*/
  *(_QWORD *)&v74 = 0; /*0x100aa1827*/
  v75 = 0; /*0x100aa1832*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100aa183d*/
  v5 = 2; /*0x100aa1842*/
  v6 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100aa1852*/
  if ( !v6 ) /*0x100aa185a*/
    goto LABEL_57; /*0x100aa185a*/
  *v6 = 25705; /*0x100aa1863*/
  v80 = 2; /*0x100aa1868*/
  v81 = (__int64)v6; /*0x100aa1873*/
  v82 = 2; /*0x100aa187a*/
  v7 = *(_QWORD *)(a2 + 40); /*0x100aa1885*/
  if ( v7 < 0 ) /*0x100aa188d*/
  {
    v8 = 0; /*0x100aa188f*/
    goto LABEL_6; /*0x100aa188f*/
  }
  v9 = *(_DWORD **)(a2 + 32); /*0x100aa18a2*/
  v71 = a1; /*0x100aa18a7*/
  if ( v7 ) /*0x100aa18ae*/
  {
    v79 = v9; /*0x100aa18b0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, v9); /*0x100aa18b7*/
    v8 = 1; /*0x100aa18bc*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x100aa18ca*/
    if ( !v10 ) /*0x100aa18d2*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x100aa1892*/
    v11 = v10; /*0x100aa18d4*/
    v9 = v79; /*0x100aa18d7*/
  }
  else
  {
    v11 = 1; /*0x100aa18e0*/
  }
  memcpy((void *)v11, v9, v7); /*0x100aa18eb*/
  LOBYTE(v100) = 3; /*0x100aa18f0*/
  v101 = v7; /*0x100aa18f4*/
  v102 = v11; /*0x100aa18f8*/
  v103 = v7; /*0x100aa18fc*/
  v12 = &v92; /*0x100aa1900*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v92, &v74, &v80); /*0x100aa1915*/
  if ( __OFSUB__(0, v92.i64[0]) ) /*0x100aa191c*/
  {
    v13 = v92.i64[1]; /*0x100aa1925*/
    v14 = 32 * v92.i64[3]; /*0x100aa1933*/
    v99 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 24); /*0x100aa193c*/
    v98 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 16); /*0x100aa1945*/
    v15 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3]); /*0x100aa1949*/
    v97 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 8); /*0x100aa1952*/
    v96 = v15; /*0x100aa1956*/
    *(_QWORD *)(v92.i64[1] + v14 + 24) = v103; /*0x100aa195e*/
    *(_QWORD *)(v13 + v14 + 16) = v102; /*0x100aa1967*/
    v16 = v100; /*0x100aa196c*/
    v17 = (__m256i *)v101; /*0x100aa1970*/
    *(_QWORD *)(v13 + v14 + 8) = v101; /*0x100aa1974*/
    *(_QWORD *)(v13 + v14) = v16; /*0x100aa1979*/
    if ( (_BYTE)v96 != 6 ) /*0x100aa1981*/
    {
      v12 = (__m256i *)&v96; /*0x100aa1987*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x100aa198b*/
    }
  }
  else
  {
    v91 = v95; /*0x100aa1999*/
    v90 = v94; /*0x100aa19a4*/
    v89 = v93; /*0x100aa19af*/
    v88 = v92; /*0x100aa19cb*/
    v87 = v103; /*0x100aa19f2*/
    v86 = v102; /*0x100aa19fd*/
    v85 = v101; /*0x100aa1a0c*/
    v84 = v100; /*0x100aa1a13*/
    v12 = (__m256i *)&v96; /*0x100aa1a1a*/
    v17 = &v88; /*0x100aa1a1e*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa1a2c*/
      &v96,
      &v88,
      &v84);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v17); /*0x100aa1a31*/
  v5 = 6; /*0x100aa1a36*/
  v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100aa1a46*/
  if ( !v18 ) /*0x100aa1a4e*/
    goto LABEL_57; /*0x100aa1a4e*/
  *(_WORD *)(v18 + 4) = 29795; /*0x100aa1a57*/
  *(_DWORD *)v18 = 1701470831; /*0x100aa1a5d*/
  v80 = 6; /*0x100aa1a63*/
  v81 = v18; /*0x100aa1a6e*/
  v82 = 6; /*0x100aa1a75*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100aa1a80*/
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x100aa1a8f*/
  if ( !v19 ) /*0x100aa1a97*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100aa25fc*/
  qmemcpy(v19, "chat.completion.chunk", 21); /*0x100aa1ac3*/
  LOBYTE(v100) = 3; /*0x100aa1ac6*/
  v101 = 21; /*0x100aa1aca*/
  v102 = (__int64)v19; /*0x100aa1ad2*/
  v103 = 21; /*0x100aa1ad6*/
  v20 = &v92; /*0x100aa1ade*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v92, &v74, &v80); /*0x100aa1af3*/
  if ( v92.i64[0] == 0x8000000000000000LL ) /*0x100aa1b09*/
  {
    v21 = v92.i64[1]; /*0x100aa1b0b*/
    v22 = 32 * v92.i64[3]; /*0x100aa1b19*/
    v99 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 24); /*0x100aa1b22*/
    v98 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 16); /*0x100aa1b2b*/
    v23 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3]); /*0x100aa1b2f*/
    v97 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 8); /*0x100aa1b38*/
    v96 = v23; /*0x100aa1b3c*/
    *(_QWORD *)(v92.i64[1] + v22 + 24) = v103; /*0x100aa1b44*/
    *(_QWORD *)(v21 + v22 + 16) = v102; /*0x100aa1b4d*/
    v24 = v100; /*0x100aa1b52*/
    v25 = (__m256i *)v101; /*0x100aa1b56*/
    *(_QWORD *)(v21 + v22 + 8) = v101; /*0x100aa1b5a*/
    *(_QWORD *)(v21 + v22) = v24; /*0x100aa1b5f*/
    if ( (_BYTE)v96 != 6 ) /*0x100aa1b67*/
    {
      v20 = (__m256i *)&v96; /*0x100aa1b6d*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x100aa1b71*/
    }
  }
  else
  {
    v91 = v95; /*0x100aa1b7f*/
    v90 = v94; /*0x100aa1b8a*/
    v89 = v93; /*0x100aa1b95*/
    v88 = v92; /*0x100aa1bb1*/
    v87 = v103; /*0x100aa1bd8*/
    v86 = v102; /*0x100aa1be3*/
    v85 = v101; /*0x100aa1bf2*/
    v84 = v100; /*0x100aa1bf9*/
    v20 = (__m256i *)&v96; /*0x100aa1c00*/
    v25 = &v88; /*0x100aa1c04*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa1c12*/
      &v96,
      &v88,
      &v84);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v25); /*0x100aa1c17*/
  v5 = 5; /*0x100aa1c1c*/
  v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa1c2c*/
  if ( !v26 ) /*0x100aa1c34*/
    goto LABEL_57; /*0x100aa1c34*/
  *(_BYTE *)(v26 + 4) = 108; /*0x100aa1c3d*/
  *(_DWORD *)v26 = 1701080941; /*0x100aa1c41*/
  v80 = 5; /*0x100aa1c47*/
  v81 = v26; /*0x100aa1c52*/
  v82 = 5; /*0x100aa1c59*/
  v27 = *(_QWORD *)(a2 + 16); /*0x100aa1c64*/
  if ( v27 < 0 ) /*0x100aa1c6c*/
  {
    v28 = 0; /*0x100aa1c6e*/
    goto LABEL_24; /*0x100aa1c6e*/
  }
  v29 = *(const void **)(a2 + 8); /*0x100aa1c81*/
  if ( v27 ) /*0x100aa1c86*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100aa1c88*/
    v28 = 1; /*0x100aa1c8d*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1); /*0x100aa1c9b*/
    if ( !v30 ) /*0x100aa1ca3*/
LABEL_24:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v27); /*0x100aa1c71*/
    v31 = v30; /*0x100aa1ca5*/
  }
  else
  {
    v31 = 1; /*0x100aa1caa*/
  }
  memcpy((void *)v31, v29, v27); /*0x100aa1cb8*/
  LOBYTE(v100) = 3; /*0x100aa1cbd*/
  v101 = v27; /*0x100aa1cc1*/
  v102 = v31; /*0x100aa1cc5*/
  v103 = v27; /*0x100aa1cc9*/
  v32 = &v92; /*0x100aa1ccd*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v92, &v74, &v80); /*0x100aa1ce2*/
  v33 = v71; /*0x100aa1cf8*/
  if ( v92.i64[0] == 0x8000000000000000LL ) /*0x100aa1cff*/
  {
    v34 = v92.i64[1]; /*0x100aa1d01*/
    v35 = 32 * v92.i64[3]; /*0x100aa1d0f*/
    v99 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 24); /*0x100aa1d18*/
    v98 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 16); /*0x100aa1d21*/
    v36 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3]); /*0x100aa1d25*/
    v97 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 8); /*0x100aa1d2e*/
    v96 = v36; /*0x100aa1d32*/
    *(_QWORD *)(v92.i64[1] + v35 + 24) = v103; /*0x100aa1d3a*/
    *(_QWORD *)(v34 + v35 + 16) = v102; /*0x100aa1d43*/
    v37 = v100; /*0x100aa1d48*/
    v38 = (__m256i *)v101; /*0x100aa1d4c*/
    *(_QWORD *)(v34 + v35 + 8) = v101; /*0x100aa1d50*/
    *(_QWORD *)(v34 + v35) = v37; /*0x100aa1d55*/
    if ( (_BYTE)v96 != 6 ) /*0x100aa1d5d*/
    {
      v32 = (__m256i *)&v96; /*0x100aa1d63*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x100aa1d67*/
    }
  }
  else
  {
    v91 = v95; /*0x100aa1d75*/
    v90 = v94; /*0x100aa1d80*/
    v89 = v93; /*0x100aa1d8b*/
    v88 = v92; /*0x100aa1da7*/
    v87 = v103; /*0x100aa1dce*/
    v86 = v102; /*0x100aa1dd9*/
    v85 = v101; /*0x100aa1de8*/
    v84 = v100; /*0x100aa1def*/
    v32 = (__m256i *)&v96; /*0x100aa1df6*/
    v38 = &v88; /*0x100aa1dfa*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa1e08*/
      &v96,
      &v88,
      &v84);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v38); /*0x100aa1e0d*/
  v5 = 7; /*0x100aa1e12*/
  v39 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100aa1e22*/
  if ( !v39 ) /*0x100aa1e2a*/
LABEL_57:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5); /*0x100aa25dc*/
  *(_DWORD *)((char *)v39 + 3) = 1936024425; /*0x100aa1e30*/
  *v39 = 1768908899; /*0x100aa1e37*/
  v68[0] = 7; /*0x100aa1e3d*/
  v79 = v39; /*0x100aa1e48*/
  v68[1] = v39; /*0x100aa1e4f*/
  v68[2] = 7; /*0x100aa1e56*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100aa1e61*/
  v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x100aa1e70*/
  if ( !v40 ) /*0x100aa1e78*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100aa25cd*/
  v41 = v40; /*0x100aa1e7e*/
  *(_QWORD *)&v72 = 0; /*0x100aa1e81*/
  v73 = 0; /*0x100aa1e8c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8); /*0x100aa1e97*/
  v42 = 5; /*0x100aa1e9c*/
  v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa1eac*/
  if ( !v43 ) /*0x100aa1eb4*/
    goto LABEL_58; /*0x100aa1eb4*/
  *(_BYTE *)(v43 + 4) = 120; /*0x100aa1eba*/
  *(_DWORD *)v43 = 1701080681; /*0x100aa1ebe*/
  v76 = 5; /*0x100aa1ec4*/
  v77 = v43; /*0x100aa1ecf*/
  v78 = 5; /*0x100aa1ed6*/
  LOBYTE(v100) = 2; /*0x100aa1ee1*/
  v101 = 0; /*0x100aa1ee5*/
  v102 = 0; /*0x100aa1eed*/
  v44 = &v92; /*0x100aa1ef5*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v92, &v72, &v76); /*0x100aa1f0a*/
  if ( v92.i64[0] == 0x8000000000000000LL ) /*0x100aa1f16*/
  {
    v45 = v92.i64[1]; /*0x100aa1f18*/
    v46 = 32 * v92.i64[3]; /*0x100aa1f26*/
    v99 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 24); /*0x100aa1f2f*/
    v98 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 16); /*0x100aa1f38*/
    v47 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3]); /*0x100aa1f3c*/
    v97 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 8); /*0x100aa1f45*/
    v96 = v47; /*0x100aa1f49*/
    *(_QWORD *)(v92.i64[1] + v46 + 24) = v103; /*0x100aa1f51*/
    *(_QWORD *)(v45 + v46 + 16) = v102; /*0x100aa1f5a*/
    v48 = v100; /*0x100aa1f5f*/
    v49 = (__m256i *)v101; /*0x100aa1f63*/
    *(_QWORD *)(v45 + v46 + 8) = v101; /*0x100aa1f67*/
    *(_QWORD *)(v45 + v46) = v48; /*0x100aa1f6c*/
    if ( (_BYTE)v96 != 6 ) /*0x100aa1f74*/
    {
      v44 = (__m256i *)&v96; /*0x100aa1f7a*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x100aa1f7e*/
    }
  }
  else
  {
    v91 = v95; /*0x100aa1f8c*/
    v90 = v94; /*0x100aa1f97*/
    v89 = v93; /*0x100aa1fa2*/
    v88 = v92; /*0x100aa1fbe*/
    v87 = v103; /*0x100aa1fe5*/
    v86 = v102; /*0x100aa1ff0*/
    v85 = v101; /*0x100aa1fff*/
    v84 = v100; /*0x100aa2006*/
    v44 = (__m256i *)&v96; /*0x100aa200d*/
    v49 = &v88; /*0x100aa2011*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa201f*/
      &v96,
      &v88,
      &v84);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, v49); /*0x100aa2024*/
  v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa2033*/
  if ( !v50 ) /*0x100aa203b*/
    goto LABEL_58; /*0x100aa203b*/
  *(_BYTE *)(v50 + 4) = 97; /*0x100aa2041*/
  *(_DWORD *)v50 = 1953260900; /*0x100aa2045*/
  v76 = 5; /*0x100aa204b*/
  v77 = v50; /*0x100aa2056*/
  v78 = 5; /*0x100aa205d*/
  v101 = 0; /*0x100aa2068*/
  v103 = 0; /*0x100aa2070*/
  LOBYTE(v100) = 5; /*0x100aa2078*/
  v51 = &v92; /*0x100aa207c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v92, &v72, &v76); /*0x100aa2091*/
  if ( v92.i64[0] == 0x8000000000000000LL ) /*0x100aa209d*/
  {
    v52 = v92.i64[1]; /*0x100aa209f*/
    v53 = 32 * v92.i64[3]; /*0x100aa20ad*/
    v99 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 24); /*0x100aa20b6*/
    v98 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 16); /*0x100aa20bf*/
    v54 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3]); /*0x100aa20c3*/
    v97 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 8); /*0x100aa20cc*/
    v96 = v54; /*0x100aa20d0*/
    *(_QWORD *)(v92.i64[1] + v53 + 24) = v103; /*0x100aa20d8*/
    *(_QWORD *)(v52 + v53 + 16) = v102; /*0x100aa20e1*/
    v55 = v100; /*0x100aa20e6*/
    v56 = (__m256i *)v101; /*0x100aa20ea*/
    *(_QWORD *)(v52 + v53 + 8) = v101; /*0x100aa20ee*/
    *(_QWORD *)(v52 + v53) = v55; /*0x100aa20f3*/
    if ( (_BYTE)v96 != 6 ) /*0x100aa20fb*/
    {
      v51 = (__m256i *)&v96; /*0x100aa2101*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x100aa2105*/
    }
  }
  else
  {
    v91 = v95; /*0x100aa2113*/
    v90 = v94; /*0x100aa211e*/
    v89 = v93; /*0x100aa2129*/
    v88 = v92; /*0x100aa2145*/
    v87 = v103; /*0x100aa216c*/
    v86 = v102; /*0x100aa2177*/
    v85 = v101; /*0x100aa2186*/
    v84 = v100; /*0x100aa218d*/
    v51 = (__m256i *)&v96; /*0x100aa2194*/
    v56 = &v88; /*0x100aa2198*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa21a6*/
      &v96,
      &v88,
      &v84);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v56); /*0x100aa21ab*/
  v42 = 13; /*0x100aa21b0*/
  v57 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100aa21c0*/
  if ( !v57 ) /*0x100aa21c8*/
LABEL_58:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v42); /*0x100aa25eb*/
  qmemcpy(v57, "finish_reason", 13); /*0x100aa21e9*/
  v76 = 13; /*0x100aa21ec*/
  v77 = (__int64)v57; /*0x100aa21f7*/
  v78 = 13; /*0x100aa21fe*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1); /*0x100aa2209*/
  v58 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100aa221d*/
  if ( !v58 ) /*0x100aa2225*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x100aa260b*/
  v59 = (__int64)v58; /*0x100aa222b*/
  memcpy(v58, __src, __n); /*0x100aa223b*/
  LOBYTE(v100) = 3; /*0x100aa2240*/
  v101 = __n; /*0x100aa2244*/
  v102 = v59; /*0x100aa2248*/
  v103 = __n; /*0x100aa224c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v92, &v72, &v76); /*0x100aa2265*/
  if ( v92.i64[0] == 0x8000000000000000LL ) /*0x100aa227b*/
  {
    v60 = v92.i64[1]; /*0x100aa227d*/
    v61 = 32 * v92.i64[3]; /*0x100aa228b*/
    v99 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 24); /*0x100aa2294*/
    v98 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 16); /*0x100aa229d*/
    v62 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3]); /*0x100aa22a1*/
    v97 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 8); /*0x100aa22aa*/
    v96 = v62; /*0x100aa22ae*/
    *(_QWORD *)(v92.i64[1] + v61 + 24) = v103; /*0x100aa22b6*/
    *(_QWORD *)(v60 + v61 + 16) = v102; /*0x100aa22bf*/
    v63 = v100; /*0x100aa22c4*/
    *(_QWORD *)(v60 + v61 + 8) = v101; /*0x100aa22cc*/
    *(_QWORD *)(v60 + v61) = v63; /*0x100aa22d1*/
    if ( (_BYTE)v96 != 6 ) /*0x100aa22d9*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x100aa22e3*/
  }
  else
  {
    v91 = v95; /*0x100aa22f1*/
    v90 = v94; /*0x100aa22fc*/
    v89 = v93; /*0x100aa2307*/
    v88 = v92; /*0x100aa2323*/
    v87 = v103; /*0x100aa234a*/
    v86 = v102; /*0x100aa2355*/
    v85 = v101; /*0x100aa2364*/
    v84 = v100; /*0x100aa236b*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa2384*/
      &v96,
      &v88,
      &v84);
  }
  *(__int128 *)((char *)v88.i128 + 7) = v72; /*0x100aa239e*/
  *(__int64 *)((char *)&v88.i64[2] + 7) = v73; /*0x100aa23ac*/
  *(_BYTE *)v41 = 5; /*0x100aa23b3*/
  *(_QWORD *)(v41 + 24) = *(__int64 *)((char *)&v88.i64[2] + 7); /*0x100aa23bf*/
  *(_QWORD *)(v41 + 17) = v88.i64[2]; /*0x100aa23ca*/
  *(_OWORD *)(v41 + 1) = v88.i128[0]; /*0x100aa23e0*/
  v81 = 1; /*0x100aa23e4*/
  v82 = v41; /*0x100aa23ef*/
  v83 = 1; /*0x100aa23f6*/
  LOBYTE(v80) = 4; /*0x100aa2401*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v92, &v74, v68); /*0x100aa241d*/
  if ( v92.i64[0] == 0x8000000000000000LL ) /*0x100aa2429*/
  {
    v64 = v92.i64[1]; /*0x100aa242b*/
    v65 = 32 * v92.i64[3]; /*0x100aa2439*/
    v99 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 24); /*0x100aa2442*/
    v98 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 16); /*0x100aa244b*/
    v66 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3]); /*0x100aa244f*/
    v97 = *(_QWORD *)(v92.i64[1] + 32 * v92.i64[3] + 8); /*0x100aa2458*/
    v96 = v66; /*0x100aa245c*/
    *(_QWORD *)(v92.i64[1] + v65 + 24) = v83; /*0x100aa2467*/
    *(_QWORD *)(v64 + v65 + 16) = v82; /*0x100aa2473*/
    v67 = v80; /*0x100aa2478*/
    *(_QWORD *)(v64 + v65 + 8) = v81; /*0x100aa2486*/
    *(_QWORD *)(v64 + v65) = v67; /*0x100aa248b*/
    if ( (_BYTE)v96 != 6 ) /*0x100aa2493*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x100aa249d*/
  }
  else
  {
    v91 = v95; /*0x100aa24ab*/
    v90 = v94; /*0x100aa24b6*/
    v89 = v93; /*0x100aa24c1*/
    v88 = v92; /*0x100aa24dd*/
    v87 = v83; /*0x100aa2507*/
    v86 = v82; /*0x100aa2515*/
    v85 = v81; /*0x100aa252a*/
    v84 = v80; /*0x100aa2531*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa254a*/
      &v96,
      &v88,
      &v84);
  }
  *(__int128 *)((char *)v88.i128 + 8) = v74; /*0x100aa255d*/
  v88.i64[3] = v75; /*0x100aa2572*/
  v88.i8[0] = 5; /*0x100aa2579*/
  v92.i64[0] = (__int64)&v88; /*0x100aa2587*/
  v92.i64[1] = (__int64)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce; /*0x100aa2595*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v33, &unk_1017C9F07, &v92); /*0x100aa25ad*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v88); /*0x100aa25b9*/
}