// __ZN13codexmate_lib4core5voice3llm11call_claude @ 0x100660930 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::llm::call_claude::h96d0297c06a28d95(
        _QWORD *a1,
        _QWORD *a2,
        void *a3,
        size_t a4,
        double a5,
        double a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  char v13; // di
  char v14; // r8
  char v15; // r9
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // edi
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  const void *v23; // rax
  __int64 v24; // rdx
  size_t v25; // r13
  __int64 v26; // r12
  const void *v27; // r14
  __int64 v28; // rax
  __int64 v29; // r15
  __m256i *v30; // rdi
  _QWORD *v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  _BYTE *v35; // rsi
  void *v36; // rax
  __m256i *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  _BYTE *v41; // rsi
  __int64 v42; // rax
  void *v43; // rax
  void *v44; // r15
  __m256i *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  _BYTE *v49; // rsi
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // r15
  _DWORD *v54; // rax
  _DWORD *v55; // rax
  __m256i *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  _BYTE *v60; // rsi
  _DWORD *v61; // rax
  __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // r15
  size_t v65; // r12
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int128 v72; // kr00_16
  __int128 v73; // kr10_16
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rdi
  void *v84; // rax
  _OWORD __dst[60]; // [rsp+20h] [rbp-9D0h] BYREF
  _BYTE v86[952]; // [rsp+3E0h] [rbp-610h] BYREF
  _QWORD v87[3]; // [rsp+798h] [rbp-258h] BYREF
  __int64 v88; // [rsp+7B0h] [rbp-240h] BYREF
  __int64 v89; // [rsp+7B8h] [rbp-238h]
  __int64 v90; // [rsp+7C0h] [rbp-230h]
  _QWORD v91[3]; // [rsp+7C8h] [rbp-228h] BYREF
  void *__src; // [rsp+7E0h] [rbp-210h]
  _QWORD *v93; // [rsp+7E8h] [rbp-208h]
  __m256i v94; // [rsp+7F0h] [rbp-200h] BYREF
  _BYTE v95[72]; // [rsp+810h] [rbp-1E0h] BYREF
  _WORD v96[36]; // [rsp+858h] [rbp-198h] BYREF
  _BYTE v97[72]; // [rsp+8A0h] [rbp-150h] BYREF
  __int64 v98; // [rsp+8E8h] [rbp-108h] BYREF
  __int128 v99; // [rsp+8F0h] [rbp-100h] BYREF
  __int64 v100; // [rsp+900h] [rbp-F0h]
  __int64 v101; // [rsp+908h] [rbp-E8h] BYREF
  __int128 v102; // [rsp+910h] [rbp-E0h]
  size_t __n; // [rsp+920h] [rbp-D0h]
  _QWORD *v104; // [rsp+928h] [rbp-C8h]
  volatile signed __int64 *v105; // [rsp+930h] [rbp-C0h] BYREF
  __int128 v106; // [rsp+938h] [rbp-B8h]
  __int64 v107; // [rsp+948h] [rbp-A8h] BYREF
  __int128 v108; // [rsp+950h] [rbp-A0h]
  _BYTE v109[70]; // [rsp+960h] [rbp-90h] BYREF
  __int128 v110; // [rsp+9A8h] [rbp-48h] BYREF
  __int128 v111; // [rsp+9B8h] [rbp-38h]

  __n = a4; /*0x100660944*/
  __src = a3; /*0x10066094b*/
  v8 = a2[10]; /*0x100660958*/
  v9 = a2[11]; /*0x10066095c*/
  while ( 1 ) /*0x10066097b*/
  {
    v10 = v9; /*0x10066097b*/
    if ( !v9 ) /*0x100660981*/
      break; /*0x100660981*/
    v11 = v8 + v9; /*0x100660983*/
    v12 = *(char *)(v8 + v10 - 1); /*0x100660987*/
    if ( v12 >= 0 ) /*0x10066098d*/
    {
      v9 = v10 - 1; /*0x100660973*/
      if ( v12 != 47 ) /*0x100660979*/
        break; /*0x100660979*/
    }
    else
    {
      v13 = *(_BYTE *)(v11 - 2); /*0x10066098f*/
      if ( v13 >= -64 ) /*0x100660997*/
      {
        v16 = v11 - 2; /*0x1006609be*/
        v18 = v13 & 0x1F; /*0x1006609c2*/
      }
      else
      {
        v14 = *(_BYTE *)(v11 - 3); /*0x100660999*/
        if ( v14 >= -64 ) /*0x1006609a2*/
        {
          v16 = v11 - 3; /*0x1006609c7*/
          v17 = v14 & 0xF; /*0x1006609cb*/
        }
        else
        {
          v15 = *(_BYTE *)(v11 - 4); /*0x1006609a4*/
          v16 = v11 - 4; /*0x1006609a9*/
          v17 = ((v15 & 7) << 6) | v14 & 0x3F; /*0x1006609b9*/
        }
        v18 = (v17 << 6) | v13 & 0x3F; /*0x1006609d6*/
      }
      v9 = v16 - v8; /*0x1006609e1*/
      if ( ((v18 << 6) | v12 & 0x3F) != 0x2F ) /*0x1006609e7*/
        break; /*0x1006609e7*/
    }
  }
  *(_QWORD *)&__dst[0] = v8; /*0x1006609e9*/
  *((_QWORD *)&__dst[0] + 1) = v10; /*0x1006609f0*/
  *(_QWORD *)v86 = __dst; /*0x1006609fe*/
  *(_QWORD *)&v86[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100660a0c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v91, &unk_1017C2CBE, v86); /*0x100660a28*/
  v105 = nullptr; /*0x100660a2d*/
  *((_QWORD *)&v106 + 1) = 0; /*0x100660a38*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v91, &unk_1017C2CBE); /*0x100660a43*/
  v19 = 5; /*0x100660a48*/
  v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100660a58*/
  if ( !v20 ) /*0x100660a60*/
    goto LABEL_83; /*0x100660a60*/
  *(_BYTE *)(v20 + 4) = 108; /*0x100660a69*/
  *(_DWORD *)v20 = 1701080941; /*0x100660a6d*/
  *(_QWORD *)&v110 = 5; /*0x100660a73*/
  *((_QWORD *)&v110 + 1) = v20; /*0x100660a7b*/
  *(_QWORD *)&v111 = 5; /*0x100660a7f*/
  v21 = a2[7]; /*0x100660a87*/
  v93 = a2; /*0x100660a8b*/
  v22 = a2[8]; /*0x100660a92*/
  v23 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v21, v22); /*0x100660a96*/
  v25 = v24; /*0x100660a9b*/
  if ( v24 < 0 ) /*0x100660aa1*/
  {
    v26 = 0; /*0x100660aa3*/
    goto LABEL_15; /*0x100660aa3*/
  }
  if ( v24 ) /*0x100660ab9*/
  {
    v104 = a1; /*0x100660abb*/
    v27 = v23; /*0x100660ac2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v22); /*0x100660ac5*/
    v26 = 1; /*0x100660aca*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v25, 1); /*0x100660ad8*/
    if ( !v28 ) /*0x100660ae0*/
LABEL_15:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v25); /*0x100660aa6*/
    v29 = v28; /*0x100660ae2*/
    v23 = v27; /*0x100660ae5*/
    a1 = v104; /*0x100660ae8*/
  }
  else
  {
    v29 = 1; /*0x100660af1*/
  }
  memcpy((void *)v29, v23, v25); /*0x100660b00*/
  v109[0] = 3; /*0x100660b05*/
  *(_QWORD *)&v109[8] = v25; /*0x100660b0c*/
  *(_QWORD *)&v109[16] = v29; /*0x100660b13*/
  *(_QWORD *)&v109[24] = v25; /*0x100660b17*/
  v30 = (__m256i *)__dst; /*0x100660b1b*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v105, &v110); /*0x100660b2d*/
  v31 = v93; /*0x100660b3b*/
  if ( __OFSUB__(0, *(_QWORD *)&__dst[0]) ) /*0x100660b34*/
  {
    v32 = *((_QWORD *)&__dst[0] + 1); /*0x100660b48*/
    v33 = 32LL * *((_QWORD *)&__dst[1] + 1); /*0x100660b56*/
    v94.i128[1] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16); /*0x100660b6b*/
    v34 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1)); /*0x100660b72*/
    v94.i64[1] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8); /*0x100660b7b*/
    v94.i64[0] = v34; /*0x100660b82*/
    *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v33 + 16) = *(_OWORD *)&v109[16]; /*0x100660b96*/
    v35 = *(_BYTE **)&v109[8]; /*0x100660ba2*/
    *(_OWORD *)(v32 + v33) = *(_OWORD *)v109; /*0x100660bae*/
    if ( v94.i8[0] != 6 ) /*0x100660bb9*/
    {
      v30 = &v94; /*0x100660bbf*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v94, a5); /*0x100660bc6*/
    }
  }
  else
  {
    *(_QWORD *)&v86[48] = *(_QWORD *)&__dst[3]; /*0x100660bd7*/
    *(_OWORD *)&v86[32] = __dst[2]; /*0x100660bf3*/
    *(_OWORD *)&v86[16] = __dst[1]; /*0x100660c0f*/
    *(_OWORD *)v86 = __dst[0]; /*0x100660c2b*/
    *(_OWORD *)&v97[16] = *(_OWORD *)&v109[16]; /*0x100660c41*/
    *(_OWORD *)v97 = *(_OWORD *)v109; /*0x100660c5d*/
    v30 = &v94; /*0x100660c64*/
    v35 = v86; /*0x100660c6b*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(&v94, v86, v97); /*0x100660c79*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v35); /*0x100660c7e*/
  v19 = 10; /*0x100660c83*/
  v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100660c93*/
  if ( !v36 ) /*0x100660c9b*/
    goto LABEL_83; /*0x100660c9b*/
  qmemcpy(v36, "max_tokens", 10); /*0x100660cab*/
  *(_QWORD *)&v110 = 10; /*0x100660cb4*/
  *((_QWORD *)&v110 + 1) = v36; /*0x100660cbc*/
  *(_QWORD *)&v111 = 10; /*0x100660cc0*/
  v109[0] = 2; /*0x100660cc8*/
  *(_QWORD *)&v109[8] = 0; /*0x100660ccf*/
  *(_QWORD *)&v109[16] = 4096; /*0x100660cda*/
  v37 = (__m256i *)__dst; /*0x100660ce2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v105, &v110); /*0x100660cf4*/
  if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL ) /*0x100660d0a*/
  {
    v38 = *((_QWORD *)&__dst[0] + 1); /*0x100660d10*/
    v39 = 32LL * *((_QWORD *)&__dst[1] + 1); /*0x100660d1e*/
    v94.i128[1] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16); /*0x100660d33*/
    v40 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1)); /*0x100660d3a*/
    v94.i64[1] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8); /*0x100660d43*/
    v94.i64[0] = v40; /*0x100660d4a*/
    *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v39 + 16) = *(_OWORD *)&v109[16]; /*0x100660d5e*/
    v41 = *(_BYTE **)&v109[8]; /*0x100660d6a*/
    *(_OWORD *)(v38 + v39) = *(_OWORD *)v109; /*0x100660d76*/
    if ( v94.i8[0] != 6 ) /*0x100660d81*/
    {
      v37 = &v94; /*0x100660d87*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v94, a5); /*0x100660d8e*/
    }
  }
  else
  {
    *(_QWORD *)&v86[48] = *(_QWORD *)&__dst[3]; /*0x100660d9f*/
    *(_OWORD *)&v86[32] = __dst[2]; /*0x100660dbb*/
    *(_OWORD *)&v86[16] = __dst[1]; /*0x100660dd7*/
    *(_OWORD *)v86 = __dst[0]; /*0x100660df3*/
    *(_OWORD *)&v97[16] = *(_OWORD *)&v109[16]; /*0x100660e09*/
    *(_OWORD *)v97 = *(_OWORD *)v109; /*0x100660e25*/
    v37 = &v94; /*0x100660e2c*/
    v41 = v86; /*0x100660e33*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(&v94, v86, v97); /*0x100660e41*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, v41); /*0x100660e46*/
  v19 = 6; /*0x100660e4b*/
  v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100660e5b*/
  if ( !v42 ) /*0x100660e63*/
    goto LABEL_83; /*0x100660e63*/
  *(_WORD *)(v42 + 4) = 28005; /*0x100660e6c*/
  *(_DWORD *)v42 = 1953724787; /*0x100660e72*/
  *(_QWORD *)&v110 = 6; /*0x100660e78*/
  *((_QWORD *)&v110 + 1) = v42; /*0x100660e80*/
  *(_QWORD *)&v111 = 6; /*0x100660e84*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100660e8c*/
  v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(222, 1); /*0x100660e9b*/
  if ( !v43 ) /*0x100660ea3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 222); /*0x100661e8f*/
  v44 = v43; /*0x100660ea9*/
  memcpy(v43, &unk_101602A3B, 0xDEu); /*0x100660ebb*/
  v109[0] = 3; /*0x100660ec0*/
  *(_QWORD *)&v109[8] = 222; /*0x100660ec7*/
  *(_QWORD *)&v109[16] = v44; /*0x100660ed2*/
  *(_QWORD *)&v109[24] = 222; /*0x100660ed6*/
  v45 = (__m256i *)__dst; /*0x100660ede*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v105, &v110); /*0x100660ef0*/
  if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL ) /*0x100660f06*/
  {
    v46 = *((_QWORD *)&__dst[0] + 1); /*0x100660f0c*/
    v47 = 32LL * *((_QWORD *)&__dst[1] + 1); /*0x100660f1a*/
    v94.i128[1] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16); /*0x100660f2f*/
    v48 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1)); /*0x100660f36*/
    v94.i64[1] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8); /*0x100660f3f*/
    v94.i64[0] = v48; /*0x100660f46*/
    *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v47 + 16) = *(_OWORD *)&v109[16]; /*0x100660f5a*/
    v49 = *(_BYTE **)&v109[8]; /*0x100660f66*/
    *(_OWORD *)(v46 + v47) = *(_OWORD *)v109; /*0x100660f72*/
    if ( v94.i8[0] != 6 ) /*0x100660f7d*/
    {
      v45 = &v94; /*0x100660f83*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v94, a5); /*0x100660f8a*/
    }
  }
  else
  {
    *(_QWORD *)&v86[48] = *(_QWORD *)&__dst[3]; /*0x100660f9b*/
    *(_OWORD *)&v86[32] = __dst[2]; /*0x100660fb7*/
    *(_OWORD *)&v86[16] = __dst[1]; /*0x100660fd3*/
    *(_OWORD *)v86 = __dst[0]; /*0x100660fef*/
    *(_OWORD *)&v97[16] = *(_OWORD *)&v109[16]; /*0x100661005*/
    *(_OWORD *)v97 = *(_OWORD *)v109; /*0x100661021*/
    v45 = &v94; /*0x100661028*/
    v49 = v86; /*0x10066102f*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(&v94, v86, v97); /*0x10066103d*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v49); /*0x100661042*/
  v19 = 8; /*0x100661047*/
  v50 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100661057*/
  if ( !v50 ) /*0x10066105f*/
LABEL_83:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19); /*0x100661e6f*/
  *v50 = 0x736567617373656DLL; /*0x10066106f*/
  v101 = 8; /*0x100661072*/
  v104 = v50; /*0x10066107d*/
  *(_QWORD *)&v102 = v50; /*0x100661084*/
  *((_QWORD *)&v102 + 1) = 8; /*0x10066108b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1); /*0x100661096*/
  v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x1006610a5*/
  if ( !v51 ) /*0x1006610ad*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100661e60*/
  v52 = v51; /*0x1006610b3*/
  *(_QWORD *)&v99 = 0; /*0x1006610b6*/
  v100 = 0; /*0x1006610c1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8); /*0x1006610cc*/
  v53 = 4; /*0x1006610d1*/
  v54 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1006610e1*/
  if ( !v54 ) /*0x1006610e9*/
    goto LABEL_84; /*0x1006610e9*/
  *v54 = 1701605234; /*0x1006610f2*/
  v107 = 4; /*0x1006610f8*/
  *(_QWORD *)&v108 = v54; /*0x100661103*/
  *((_QWORD *)&v108 + 1) = 4; /*0x10066110a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100661115*/
  v55 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100661124*/
  if ( !v55 ) /*0x10066112c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100661ea0*/
  *v55 = 1919251317; /*0x100661132*/
  v109[0] = 3; /*0x100661138*/
  *(_QWORD *)&v109[8] = 4; /*0x10066113f*/
  *(_QWORD *)&v109[16] = v55; /*0x10066114a*/
  *(_QWORD *)&v109[24] = 4; /*0x10066114e*/
  v56 = (__m256i *)__dst; /*0x100661156*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v99, &v107); /*0x10066116b*/
  if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL ) /*0x100661181*/
  {
    v57 = *((_QWORD *)&__dst[0] + 1); /*0x100661187*/
    v58 = 32LL * *((_QWORD *)&__dst[1] + 1); /*0x100661195*/
    v94.i128[1] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16); /*0x1006611aa*/
    v59 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1)); /*0x1006611b1*/
    v94.i64[1] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8); /*0x1006611ba*/
    v94.i64[0] = v59; /*0x1006611c1*/
    *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v58 + 16) = *(_OWORD *)&v109[16]; /*0x1006611d5*/
    v60 = *(_BYTE **)&v109[8]; /*0x1006611e1*/
    *(_OWORD *)(v57 + v58) = *(_OWORD *)v109; /*0x1006611ed*/
    if ( v94.i8[0] != 6 ) /*0x1006611f8*/
    {
      v56 = &v94; /*0x1006611fe*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v94, a5); /*0x100661205*/
    }
  }
  else
  {
    *(_QWORD *)&v86[48] = *(_QWORD *)&__dst[3]; /*0x100661216*/
    *(_OWORD *)&v86[32] = __dst[2]; /*0x100661232*/
    *(_OWORD *)&v86[16] = __dst[1]; /*0x10066124e*/
    *(_OWORD *)v86 = __dst[0]; /*0x10066126a*/
    *(_OWORD *)&v97[16] = *(_OWORD *)&v109[16]; /*0x100661280*/
    *(_OWORD *)v97 = *(_OWORD *)v109; /*0x10066129c*/
    v56 = &v94; /*0x1006612a3*/
    v60 = v86; /*0x1006612aa*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(&v94, v86, v97); /*0x1006612b8*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, v60); /*0x1006612bd*/
  v53 = 7; /*0x1006612c2*/
  v61 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1006612d2*/
  if ( !v61 ) /*0x1006612da*/
LABEL_84:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v53); /*0x100661e7e*/
  *(_DWORD *)((char *)v61 + 3) = 1953391988; /*0x1006612e3*/
  *v61 = 1953394531; /*0x1006612ea*/
  v107 = 7; /*0x1006612f0*/
  *(_QWORD *)&v108 = v61; /*0x1006612fb*/
  *((_QWORD *)&v108 + 1) = 7; /*0x100661302*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100661315*/
  {
    v62 = 0; /*0x100661317*/
    goto LABEL_46; /*0x100661317*/
  }
  if ( __n ) /*0x10066132e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100661330*/
    v62 = 1; /*0x100661335*/
    v63 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100661347*/
    if ( !v63 ) /*0x10066134f*/
LABEL_46:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v62, __n); /*0x10066131a*/
    v64 = v63; /*0x100661351*/
    v31 = v93; /*0x100661354*/
  }
  else
  {
    v64 = 1; /*0x10066135d*/
  }
  v65 = __n; /*0x10066136d*/
  memcpy((void *)v64, __src, __n); /*0x100661377*/
  v109[0] = 3; /*0x10066137c*/
  *(_QWORD *)&v109[8] = v65; /*0x100661383*/
  *(_QWORD *)&v109[16] = v64; /*0x10066138a*/
  *(_QWORD *)&v109[24] = v65; /*0x10066138e*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v99, &v107); /*0x1006613aa*/
  if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL ) /*0x1006613c0*/
  {
    v66 = *((_QWORD *)&__dst[0] + 1); /*0x1006613c6*/
    v67 = 32LL * *((_QWORD *)&__dst[1] + 1); /*0x1006613d4*/
    v94.i128[1] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16); /*0x1006613e9*/
    v68 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1)); /*0x1006613f0*/
    v94.i64[1] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8); /*0x1006613f9*/
    v94.i64[0] = v68; /*0x100661400*/
    *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v67 + 16) = *(_OWORD *)&v109[16]; /*0x100661414*/
    *(_OWORD *)(v66 + v67) = *(_OWORD *)v109; /*0x10066142c*/
    if ( v94.i8[0] != 6 ) /*0x100661437*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v94, a5); /*0x100661444*/
  }
  else
  {
    *(_QWORD *)&v86[48] = *(_QWORD *)&__dst[3]; /*0x100661455*/
    *(_OWORD *)&v86[32] = __dst[2]; /*0x100661471*/
    *(_OWORD *)&v86[16] = __dst[1]; /*0x10066148d*/
    *(_OWORD *)v86 = __dst[0]; /*0x1006614a9*/
    *(_OWORD *)&v97[16] = *(_OWORD *)&v109[16]; /*0x1006614bf*/
    *(_OWORD *)v97 = *(_OWORD *)v109; /*0x1006614db*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(&v94, v86, v97); /*0x1006614f7*/
  }
  *(_OWORD *)&v86[7] = v99; /*0x100661511*/
  *(_QWORD *)&v86[23] = v100; /*0x10066151f*/
  *(_BYTE *)v52 = 5; /*0x100661526*/
  *(_QWORD *)(v52 + 24) = *(_QWORD *)&v86[23]; /*0x100661530*/
  *(_QWORD *)(v52 + 17) = *(_QWORD *)&v86[16]; /*0x10066153b*/
  *(_OWORD *)(v52 + 1) = *(_OWORD *)v86; /*0x100661551*/
  *((_QWORD *)&v110 + 1) = 1; /*0x100661555*/
  *(_QWORD *)&v111 = v52; /*0x10066155d*/
  *((_QWORD *)&v111 + 1) = 1; /*0x100661561*/
  LOBYTE(v110) = 4; /*0x100661569*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v105, &v101); /*0x100661582*/
  if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL ) /*0x100661598*/
  {
    v69 = *((_QWORD *)&__dst[0] + 1); /*0x10066159e*/
    v70 = 32LL * *((_QWORD *)&__dst[1] + 1); /*0x1006615ac*/
    v94.i128[1] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16); /*0x1006615c1*/
    v71 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1)); /*0x1006615c8*/
    v94.i64[1] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8); /*0x1006615d1*/
    v94.i64[0] = v71; /*0x1006615d8*/
    *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v70 + 16) = v111; /*0x1006615ec*/
    *(_OWORD *)(v69 + v70) = v110; /*0x1006615fe*/
    if ( v94.i8[0] != 6 ) /*0x100661609*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v94, a5); /*0x100661616*/
  }
  else
  {
    *(_QWORD *)&v86[48] = *(_QWORD *)&__dst[3]; /*0x100661627*/
    *(_OWORD *)&v86[32] = __dst[2]; /*0x100661643*/
    *(_OWORD *)&v86[16] = __dst[1]; /*0x10066165f*/
    *(_OWORD *)v86 = __dst[0]; /*0x10066167b*/
    *(_OWORD *)&v97[16] = v111; /*0x100661691*/
    *(_OWORD *)v97 = v110; /*0x1006616a7*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(&v94, v86, v97); /*0x1006616c3*/
  }
  *((_QWORD *)&v110 + 1) = v105; /*0x1006616d6*/
  v111 = v106; /*0x1006616da*/
  LOBYTE(v110) = 5; /*0x1006616e9*/
  _$LT$reqwest..blocking..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::hcdeb91c9f4bc265f( /*0x1006616f4*/
    v86,
    a5,
    a6);
  *(_QWORD *)&v86[936] = 60; /*0x1006616f9*/
  *(_DWORD *)&v86[944] = 0; /*0x100661704*/
  memcpy(__dst, v86, 0x3B8u); /*0x100661724*/
  reqwest::blocking::client::ClientBuilder::build::h8f43bce474d3a935(&v94, __dst); /*0x100661733*/
  if ( v94.i32[4] == 1000000001 ) /*0x100661742*/
  {
    v107 = v94.i64[0]; /*0x10066174f*/
    *(_QWORD *)&__dst[0] = &v107; /*0x100661756*/
    *((_QWORD *)&__dst[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x100661764*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &unk_1017C2D1B, __dst); /*0x100661780*/
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v107); /*0x10066178c*/
    v72 = *(_OWORD *)v86; /*0x10066179f*/
    *(_OWORD *)v109 = *(_OWORD *)v86; /*0x1006617a6*/
    *(_QWORD *)&v109[16] = *(_QWORD *)&v86[16]; /*0x1006617b4*/
    a1[3] = *(_QWORD *)&v86[16]; /*0x1006617b8*/
    *(_OWORD *)(a1 + 1) = v72; /*0x1006617c0*/
    *a1 = 1; /*0x1006617c4*/
    goto LABEL_76; /*0x1006617cb*/
  }
  v105 = (volatile signed __int64 *)v94.i64[0]; /*0x1006617e5*/
  v106 = *(__int128 *)((char *)v94.i128 + 8); /*0x1006617ec*/
  a5 = 5.377940751268117e-299; /*0x10066180b*/
  memset(__dst, 2, 24); /*0x100661812*/
  reqwest::blocking::client::Client::request::h10ce84dee71472ae(v86); /*0x100661835*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v31[4], v31[5]); /*0x100661842*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__dst, v86, 0); /*0x10066186e*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(v86, __dst, 0); /*0x1006618a1*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__dst, v86, 0); /*0x1006618d4*/
  reqwest::blocking::request::RequestBuilder::json::h6afc03ea6fb18200(v86, __dst); /*0x1006618eb*/
  reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(&v94, v86); /*0x100661901*/
  if ( v94.i64[0] == 3 ) /*0x100661911*/
  {
    v98 = v94.i64[1]; /*0x10066191e*/
    *(_QWORD *)&__dst[0] = &v98; /*0x10066192c*/
    *((_QWORD *)&__dst[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x10066193a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &unk_1017C2D35, __dst); /*0x100661956*/
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v98); /*0x100661962*/
    v73 = *(_OWORD *)v86; /*0x100661975*/
    v99 = *(_OWORD *)v86; /*0x10066197c*/
    v100 = *(_QWORD *)&v86[16]; /*0x10066198a*/
    a1[3] = *(_QWORD *)&v86[16]; /*0x100661991*/
    *(_OWORD *)(a1 + 1) = v73; /*0x100661999*/
    *a1 = 1; /*0x10066199d*/
    goto LABEL_74; /*0x1006619a4*/
  }
  v108 = v94.i128[1]; /*0x1006619c5*/
  v107 = v94.i64[1]; /*0x1006619cc*/
  qmemcpy(v97, v95, sizeof(v97)); /*0x1006619e6*/
  memcpy(v109, &v96[1], sizeof(v109)); /*0x100661a03*/
  v100 = v94.i64[3]; /*0x100661a0f*/
  v101 = v94.i64[1]; /*0x100661a24*/
  v102 = v94.i128[1]; /*0x100661a2b*/
  if ( (unsigned __int16)(v96[0] - 200) < 0x64u ) /*0x100661a45*/
  {
    *(_QWORD *)v86 = v94.i64[0]; /*0x100661a4b*/
    *(_QWORD *)&v86[8] = v101; /*0x100661a60*/
    *(_OWORD *)&v86[16] = v102; /*0x100661a6e*/
    qmemcpy(&v86[32], v97, 0x48u); /*0x100661a8f*/
    *(_WORD *)&v86[104] = v96[0]; /*0x100661a92*/
    memcpy(&v86[106], v109, 0x46u); /*0x100661aad*/
    reqwest::blocking::response::Response::json::h6f234783f29d02a2(__dst, v86); /*0x100661ac0*/
    if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL ) /*0x100661ae3*/
    {
      v107 = *((_QWORD *)&__dst[0] + 1); /*0x100661ae9*/
      v94.i64[0] = (__int64)&v107; /*0x100661af0*/
      v94.i64[1] = (__int64)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x100661afe*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &unk_1017C2CFB, &v94); /*0x100661b1a*/
      core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v107); /*0x100661b26*/
      v74 = *(_QWORD *)&v86[8]; /*0x100661b32*/
      v75 = *(_QWORD *)&v86[16]; /*0x100661b39*/
      a1[1] = *(_QWORD *)v86; /*0x100661b40*/
      a1[2] = v74; /*0x100661b44*/
      a1[3] = v75; /*0x100661b48*/
      *a1 = 1; /*0x100661b4c*/
      goto LABEL_74; /*0x100661b53*/
    }
    *(_QWORD *)v86 = *((_QWORD *)&__dst[0] + 1); /*0x100661c35*/
    *(_QWORD *)&v86[8] = *((_QWORD *)&__dst[0] + 1); /*0x100661c3c*/
    *(_QWORD *)&v86[16] = *(_QWORD *)&__dst[0]; /*0x100661c43*/
    *(_QWORD *)&v86[24] = *((_QWORD *)&__dst[0] + 1) + 24LL * *(_QWORD *)&__dst[1]; /*0x100661c4a*/
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::he67e4857e7b3dc06( /*0x100661c5f*/
      &v88,
      v86);
    v76 = v89; /*0x100661c64*/
    v77 = v90; /*0x100661c6b*/
    v78 = v89; /*0x100661c72*/
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v89, v90); /*0x100661c75*/
    if ( v79 ) /*0x100661c7d*/
    {
      codexmate_lib::core::voice::llm::strip_think_tags::hafb183b43a34c569(v86, &v88); /*0x100661c91*/
      a1[3] = *(_QWORD *)&v86[16]; /*0x100661c9d*/
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v86; /*0x100661cb3*/
      *a1 = 0; /*0x100661cb7*/
      goto LABEL_74; /*0x100661cbe*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v78, v77); /*0x100661dca*/
    v84 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100661dd9*/
    if ( !v84 ) /*0x100661de1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x100661eb1*/
    qmemcpy(v84, "Claude returned empty response", 30); /*0x100661e1b*/
    a1[1] = 30; /*0x100661e1e*/
    a1[2] = v84; /*0x100661e26*/
    a1[3] = 30; /*0x100661e2a*/
    *a1 = 1; /*0x100661e32*/
    v81 = v88; /*0x100661e39*/
    if ( !v88 ) /*0x100661e43*/
      goto LABEL_74; /*0x100661e43*/
    v82 = v76; /*0x100661e4e*/
    goto LABEL_73; /*0x100661e51*/
  }
  LOWORD(v107) = v96[0]; /*0x100661b58*/
  *(_QWORD *)v86 = v94.i64[0]; /*0x100661b60*/
  *(_QWORD *)&v86[8] = v101; /*0x100661b75*/
  *(_OWORD *)&v86[16] = v102; /*0x100661b83*/
  qmemcpy(&v86[32], v97, 0x48u); /*0x100661ba4*/
  *(_WORD *)&v86[104] = v96[0]; /*0x100661ba7*/
  memcpy(&v86[106], v109, 0x46u); /*0x100661bc2*/
  reqwest::blocking::response::Response::text::h6135e3e5df4ac470(__dst, v86); /*0x100661bd5*/
  if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL ) /*0x100661bee*/
  {
    v94.i64[0] = 0; /*0x100661bf4*/
    *(__int128 *)((char *)v94.i128 + 8) = 1u; /*0x100661bff*/
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(*((_QWORD *)&__dst[0] + 1)); /*0x100661c1c*/
  }
  else
  {
    v94.i64[2] = *(_QWORD *)&__dst[1]; /*0x100661cca*/
    v94.i128[0] = __dst[0]; /*0x100661ce6*/
  }
  *(_QWORD *)v86 = &v107; /*0x100661ced*/
  *(_QWORD *)&v86[8] = _$LT$http..status..StatusCode$u20$as$u20$core..fmt..Display$GT$::fmt::h9532ff36c27bd9e7; /*0x100661cfb*/
  *(_QWORD *)&v86[16] = &v94; /*0x100661d02*/
  *(_QWORD *)&v86[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100661d10*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v87, &unk_1017C2CE0, v86); /*0x100661d2c*/
  a1[3] = v87[2]; /*0x100661d38*/
  v80 = v87[0]; /*0x100661d3c*/
  a1[2] = v87[1]; /*0x100661d4a*/
  a1[1] = v80; /*0x100661d4e*/
  *a1 = 1; /*0x100661d52*/
  v81 = v94.i64[0]; /*0x100661d59*/
  if ( v94.i64[0] ) /*0x100661d63*/
  {
    v82 = v94.i64[1]; /*0x100661d65*/
LABEL_73:
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v81, 1); /*0x100661d71*/
  }
LABEL_74:
  if ( !_InterlockedDecrement64(v105) ) /*0x100661d7d*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v105); /*0x100661d8a*/
LABEL_76:
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v110, a5); /*0x100661d8f*/
  if ( v91[0] ) /*0x100661da2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91[1], v91[0], 1); /*0x100661db0*/
  return a1; /*0x100661db8*/
}