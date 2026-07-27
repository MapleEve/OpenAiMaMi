// __ZN13codexmate_lib4core5voice3llm18call_llm_streaming @ 0x100665310 | 基线 same-set
// [FULL IDA decompiler]

_QWORD *__fastcall codexmate_lib::core::voice::llm::call_llm_streaming::h7ee9e798df91cf33(
        _QWORD *a1,
        _QWORD *a2,
        void *a3,
        size_t a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // esi
  char v18; // di
  char v19; // r8
  char v20; // r9
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // edi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  size_t v30; // rbx
  __int64 v31; // r12
  void *v32; // rax
  _QWORD *v33; // rcx
  const void *v35; // r13
  __int64 v36; // rax
  __int64 v37; // r14
  void *v38; // rdx
  __int64 v39; // r13
  __int64 v40; // rbx
  __int128 v41; // kr10_16
  _QWORD *v42; // rax
  _BYTE *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  _BYTE *v47; // rsi
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // r13
  _DWORD *v52; // rax
  __int64 v53; // rax
  _BYTE *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  _BYTE *v58; // rsi
  _DWORD *v59; // rax
  void *v60; // rax
  __int64 v61; // r14
  _BYTE *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  _BYTE *v66; // rsi
  __int64 v67; // r13
  _DWORD *v68; // rax
  _DWORD *v69; // rax
  _BYTE *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  _BYTE *v74; // rsi
  _DWORD *v75; // rax
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // r14
  _QWORD *v79; // rax
  size_t v80; // rbx
  _QWORD *v81; // r13
  __int64 v82; // rdx
  _BYTE *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  _BYTE *v87; // rsi
  void *v88; // rax
  double v89; // xmm0_8
  _BYTE *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  _BYTE *v94; // rsi
  void *v95; // rax
  _BYTE *v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  _BYTE *v100; // rsi
  __int64 v101; // rax
  _BYTE *v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  _BYTE *v106; // rsi
  __int64 v107; // r12
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // r13
  void *v111; // rax
  void *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  void *v115; // rax
  _QWORD *v116; // rax
  _DWORD *v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int128 v121; // kr20_16
  _QWORD *v122; // rsi
  __int64 v123; // rdx
  __int128 v124; // rax
  __int64 v125; // r14
  __int128 v126; // kr30_16
  _QWORD *v127; // rsi
  __int16 v128; // r15
  __int64 v129; // rax
  __int64 v130; // rbx
  unsigned __int8 v131; // r13
  __int64 v132; // r14
  __int64 v133; // r12
  __int64 v134; // rax
  unsigned __int64 v135; // rdx
  unsigned __int64 v136; // rcx
  __int64 v137; // rdx
  unsigned __int32 v138; // ecx
  unsigned int v139; // esi
  int v140; // edi
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // r9
  size_t v145; // rbx
  size_t v146; // r15
  __int64 v147; // r14
  __int64 v148; // rsi
  __int64 v149; // rdi
  __int64 v150; // rdx
  _QWORD *v151; // rdx
  _QWORD *v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rsi
  __int64 v155; // rdi
  __int64 v156; // r14
  __int64 v157; // rbx
  __int64 v158; // r15
  __int64 v159; // rsi
  __int64 v160; // rcx
  __int64 v161; // rdx
  _QWORD *v162; // rsi
  void *v163; // rax
  _QWORD *v164; // rcx
  _BYTE v165[72]; // [rsp+20h] [rbp-B60h] BYREF
  _BYTE v166[70]; // [rsp+6Ah] [rbp-B16h] BYREF
  char v167[24]; // [rsp+B0h] [rbp-AD0h] BYREF
  _QWORD v168[3]; // [rsp+C8h] [rbp-AB8h] BYREF
  _QWORD v169[3]; // [rsp+E0h] [rbp-AA0h] BYREF
  _BYTE v170[952]; // [rsp+F8h] [rbp-A88h] BYREF
  _BYTE __dst[952]; // [rsp+4B0h] [rbp-6D0h] BYREF
  __int64 v172; // [rsp+868h] [rbp-318h]
  _QWORD *v173; // [rsp+870h] [rbp-310h]
  __int64 v174; // [rsp+878h] [rbp-308h]
  char v175[8]; // [rsp+880h] [rbp-300h] BYREF
  _QWORD v176[3]; // [rsp+888h] [rbp-2F8h] BYREF
  _BYTE v177[328]; // [rsp+8A0h] [rbp-2E0h] BYREF
  __int128 v178; // [rsp+9E8h] [rbp-198h]
  __int64 v179; // [rsp+9F8h] [rbp-188h]
  __int64 v180; // [rsp+A00h] [rbp-180h] BYREF
  __int64 v181; // [rsp+A08h] [rbp-178h]
  size_t v182; // [rsp+A10h] [rbp-170h]
  _QWORD v183[2]; // [rsp+A18h] [rbp-168h] BYREF
  __int64 v184; // [rsp+A28h] [rbp-158h]
  __int128 v185; // [rsp+A30h] [rbp-150h]
  __int64 v186; // [rsp+A40h] [rbp-140h]
  __int128 v187; // [rsp+A48h] [rbp-138h] BYREF
  __int64 v188; // [rsp+A58h] [rbp-128h]
  void *__src; // [rsp+A60h] [rbp-120h]
  __int64 v190; // [rsp+A68h] [rbp-118h] BYREF
  __int64 v191; // [rsp+A70h] [rbp-110h]
  size_t v192; // [rsp+A78h] [rbp-108h]
  __m256i v193; // [rsp+A80h] [rbp-100h]
  __m256i v194; // [rsp+AA0h] [rbp-E0h] BYREF
  size_t __n; // [rsp+AC0h] [rbp-C0h]
  __int64 v196; // [rsp+AC8h] [rbp-B8h] BYREF
  __int128 v197; // [rsp+AD0h] [rbp-B0h]
  size_t v198; // [rsp+AE0h] [rbp-A0h]
  _QWORD *v199; // [rsp+AE8h] [rbp-98h]
  void *__s1; // [rsp+AF0h] [rbp-90h]
  __m256i v201; // [rsp+AF8h] [rbp-88h] BYREF
  __m256i v202; // [rsp+B18h] [rbp-68h] BYREF
  __m256i v203[2]; // [rsp+B38h] [rbp-48h] BYREF

  v199 = a1;
  if ( !(unsigned __int8)codexmate_lib::core::voice::llm::LlmConfig::is_configured::h23c56cc13cc1dc96(a2) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2);
    v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1);
    if ( !v32 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24);
    qmemcpy(v32, "LLM config is incomplete", 24);
    v33 = v199;
    v199[1] = 24;
    v33[2] = v32;
    v33[3] = 24;
    *v33 = 1;
    return v33;
  }
  codexmate_lib::core::voice::llm::normalize_provider::hc20fe0bd6fa0e76d(&v180, a2[1], a2[2]);
  v198 = v182;
  if ( v182 == 6 && !(*(_DWORD *)v181 ^ 0x75616C63 | *(unsigned __int16 *)(v181 + 4) ^ 0x6564) )
  {
    v38 = a3;
    v39 = a6;
    codexmate_lib::core::voice::llm::call_claude::h96d0297c06a28d95(v170, a2, v38, a4, a7, a8);
    v40 = *(_QWORD *)&v170[8];
    v41 = *(_OWORD *)&v170[16];
    if ( *(_DWORD *)v170 == 1 )
    {
      v42 = v199;
      v199[1] = *(_QWORD *)&v170[8];
      *((_OWORD *)v42 + 1) = v41;
      *v42 = 1;
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v39 + 40))(a5, *(_QWORD *)&v170[16], *(_QWORD *)&v170[24]);
      v79 = v199;
      v199[1] = v40;
      *((_OWORD *)v79 + 1) = v41;
      *v79 = 0;
    }
    goto LABEL_190;
  }
  v13 = a2[10];
  v14 = a2[11];
  while ( 1 )
  {
    v15 = v14;
    if ( !v14 )
      break;
    v16 = v13 + v14;
    v17 = *(char *)(v13 + v15 - 1);
    if ( v17 >= 0 )
    {
      v14 = v15 - 1;
      if ( v17 != 47 )
        break;
    }
    else
    {
      v18 = *(_BYTE *)(v16 - 2);
      if ( v18 >= -64 )
      {
        v21 = v16 - 2;
        v23 = v18 & 0x1F;
      }
      else
      {
        v19 = *(_BYTE *)(v16 - 3);
        if ( v19 >= -64 )
        {
          v21 = v16 - 3;
          v22 = v19 & 0xF;
        }
        else
        {
          v20 = *(_BYTE *)(v16 - 4);
          v21 = v16 - 4;
          v22 = ((v20 & 7) << 6) | v19 & 0x3F;
        }
        v23 = (v22 << 6) | v18 & 0x3F;
      }
      v14 = v21 - v13;
      if ( ((v23 << 6) | v17 & 0x3F) != 0x2F )
        break;
    }
  }
  __n = a4;
  v172 = a6;
  *(_QWORD *)v177 = v13;
  *(_QWORD *)&v177[8] = v15;
  *(_QWORD *)__dst = v177;
  *(_QWORD *)&__dst[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v170, &unk_1017C2DDD, __dst);
  v178 = *(_OWORD *)v170;
  v179 = *(_QWORD *)&v170[16];
  v183[0] = 0;
  v184 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v170, &unk_1017C2DDD);
  v24 = 5;
  v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v25 )
    goto LABEL_199;
  __src = a3;
  *(_BYTE *)(v25 + 4) = 108;
  *(_DWORD *)v25 = 1701080941;
  v201.i64[0] = 5;
  v201.i64[1] = v25;
  v201.i64[2] = 5;
  v26 = a2[7];
  __s1 = a2;
  v27 = a2[8];
  v28 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v26, v27);
  v30 = v29;
  if ( v29 < 0 )
  {
    v31 = 0;
    goto LABEL_18;
  }
  v35 = (const void *)v28;
  v174 = a5;
  if ( v29 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v27);
    v31 = 1;
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1);
    if ( !v36 )
LABEL_18:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v30);
    v37 = v36;
  }
  else
  {
    v37 = 1;
  }
  memcpy((void *)v37, v35, v30);
  v203[0].i8[0] = 3;
  v203[0].i64[1] = v30;
  v203[0].i64[2] = v37;
  v203[0].i64[3] = v30;
  v43 = __dst;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, v183, &v201);
  if ( __OFSUB__(0, *(_QWORD *)__dst) )
  {
    v44 = *(_QWORD *)&__dst[8];
    v45 = 32LL * *(_QWORD *)&__dst[24];
    *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
    v46 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
    *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
    *(_QWORD *)v177 = v46;
    *(_OWORD *)(*(_QWORD *)&__dst[8] + v45 + 16) = v203[0].i128[1];
    v47 = (_BYTE *)v203[0].i64[1];
    *(_OWORD *)(v44 + v45) = v203[0].i128[0];
    if ( v177[0] != 6 )
    {
      v43 = v177;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, a7);
    }
  }
  else
  {
    *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
    *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
    *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
    *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
    *(_OWORD *)v170 = *(_OWORD *)__dst;
    v202 = v203[0];
    v43 = v177;
    v47 = v170;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      v177,
      v170,
      &v202);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v47);
  v24 = 8;
  v48 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v48 )
    goto LABEL_199;
  *v48 = 0x736567617373656DLL;
  v169[0] = 8;
  v173 = v48;
  v169[1] = v48;
  v169[2] = 8;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
  v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 8);
  if ( !v49 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64);
  v50 = v49;
  v196 = 0;
  *((_QWORD *)&v197 + 1) = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(64, 8);
  v51 = 4;
  v52 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v52 )
    goto LABEL_201;
  *v52 = 1701605234;
  v201.i64[0] = 4;
  v201.i64[1] = (__int64)v52;
  v201.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v53 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
  *(_WORD *)(v53 + 4) = 28005;
  *(_DWORD *)v53 = 1953724787;
  v203[0].i8[0] = 3;
  v203[0].i64[1] = 6;
  v203[0].i64[2] = v53;
  v203[0].i64[3] = 6;
  v54 = __dst;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v196, &v201);
  if ( *(_QWORD *)__dst == 0x8000000000000000LL )
  {
    v55 = *(_QWORD *)&__dst[8];
    v56 = 32LL * *(_QWORD *)&__dst[24];
    *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
    v57 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
    *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
    *(_QWORD *)v177 = v57;
    *(_OWORD *)(*(_QWORD *)&__dst[8] + v56 + 16) = v203[0].i128[1];
    v58 = (_BYTE *)v203[0].i64[1];
    *(_OWORD *)(v55 + v56) = v203[0].i128[0];
    if ( v177[0] != 6 )
    {
      v54 = v177;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, a7);
    }
  }
  else
  {
    *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
    *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
    *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
    *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
    *(_OWORD *)v170 = *(_OWORD *)__dst;
    v202 = v203[0];
    v54 = v177;
    v58 = v170;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      v177,
      v170,
      &v202);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v58);
  v51 = 7;
  v59 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v59 )
LABEL_201:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v51);
  *(_DWORD *)((char *)v59 + 3) = 1953391988;
  *v59 = 1953394531;
  v201.i64[0] = 7;
  v201.i64[1] = (__int64)v59;
  v201.i64[2] = 7;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
  v60 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(222, 1);
  if ( !v60 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 222);
  v61 = (__int64)v60;
  memcpy(v60, &unk_101602A3B, 0xDEu);
  v203[0].i8[0] = 3;
  v203[0].i64[1] = 222;
  v203[0].i64[2] = v61;
  v203[0].i64[3] = 222;
  v62 = __dst;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v196, &v201);
  if ( *(_QWORD *)__dst == 0x8000000000000000LL )
  {
    v63 = *(_QWORD *)&__dst[8];
    v64 = 32LL * *(_QWORD *)&__dst[24];
    *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
    v65 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
    *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
    *(_QWORD *)v177 = v65;
    *(_OWORD *)(*(_QWORD *)&__dst[8] + v64 + 16) = v203[0].i128[1];
    v66 = (_BYTE *)v203[0].i64[1];
    *(_OWORD *)(v63 + v64) = v203[0].i128[0];
    if ( v177[0] != 6 )
    {
      v62 = v177;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, a7);
    }
  }
  else
  {
    *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
    *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
    *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
    *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
    *(_OWORD *)v170 = *(_OWORD *)__dst;
    v202 = v203[0];
    v62 = v177;
    v66 = v170;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      v177,
      v170,
      &v202);
  }
  v201.i64[1] = v196;
  v201.i128[1] = v197;
  v201.i8[0] = 5;
  *(_QWORD *)&v187 = 0;
  v188 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v66);
  v67 = 4;
  v68 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v68 )
    goto LABEL_202;
  *v68 = 1701605234;
  v196 = 4;
  *(_QWORD *)&v197 = v68;
  *((_QWORD *)&v197 + 1) = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v69 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v69 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
  *v69 = 1919251317;
  v203[0].i8[0] = 3;
  v203[0].i64[1] = 4;
  v203[0].i64[2] = (__int64)v69;
  v203[0].i64[3] = 4;
  v70 = __dst;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v187, &v196);
  if ( *(_QWORD *)__dst == 0x8000000000000000LL )
  {
    v71 = *(_QWORD *)&__dst[8];
    v72 = 32LL * *(_QWORD *)&__dst[24];
    *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
    v73 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
    *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
    *(_QWORD *)v177 = v73;
    *(_OWORD *)(*(_QWORD *)&__dst[8] + v72 + 16) = v203[0].i128[1];
    v74 = (_BYTE *)v203[0].i64[1];
    *(_OWORD *)(v71 + v72) = v203[0].i128[0];
    if ( v177[0] != 6 )
    {
      v70 = v177;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, a7);
    }
  }
  else
  {
    *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
    *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
    *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
    *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
    *(_OWORD *)v170 = *(_OWORD *)__dst;
    v202 = v203[0];
    v70 = v177;
    v74 = v170;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      v177,
      v170,
      &v202);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v74);
  v67 = 7;
  v75 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v75 )
LABEL_202:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v67);
  *(_DWORD *)((char *)v75 + 3) = 1953391988;
  *v75 = 1953394531;
  v196 = 7;
  *(_QWORD *)&v197 = v75;
  *((_QWORD *)&v197 + 1) = 7;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v76 = 0;
    goto LABEL_54;
  }
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v76 = 1;
    v77 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    if ( !v77 )
LABEL_54:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v76, __n);
    v78 = v77;
  }
  else
  {
    v78 = 1;
  }
  v80 = __n;
  memcpy((void *)v78, __src, __n);
  v203[0].i8[0] = 3;
  v203[0].i64[1] = v80;
  v203[0].i64[2] = v78;
  v203[0].i64[3] = v80;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v187, &v196);
  v81 = __s1;
  if ( *(_QWORD *)__dst == 0x8000000000000000LL )
  {
    *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
    v82 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
    *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
    *(_QWORD *)v177 = v82;
    *(__m256i *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]) = v203[0];
    if ( v177[0] != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, a7);
  }
  else
  {
    *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
    *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
    *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
    *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
    *(_OWORD *)v170 = *(_OWORD *)__dst;
    v202 = v203[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      v177,
      v170,
      &v202);
  }
  *(_OWORD *)&v170[7] = v187;
  *(_QWORD *)&v170[23] = v188;
  *(__m256i *)v50 = v201;
  *(_BYTE *)(v50 + 32) = 5;
  *(_QWORD *)(v50 + 56) = *(_QWORD *)&v170[23];
  *(_QWORD *)(v50 + 49) = *(_QWORD *)&v170[16];
  *(_OWORD *)(v50 + 33) = *(_OWORD *)v170;
  v194.i64[1] = 2;
  v194.i64[2] = v50;
  v194.i64[3] = 2;
  v194.i8[0] = 4;
  v83 = __dst;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, v183, v169);
  if ( *(_QWORD *)__dst == 0x8000000000000000LL )
  {
    v84 = *(_QWORD *)&__dst[8];
    v85 = 32LL * *(_QWORD *)&__dst[24];
    *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
    v86 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
    *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
    *(_QWORD *)v177 = v86;
    *(_OWORD *)(*(_QWORD *)&__dst[8] + v85 + 16) = v194.i128[1];
    v87 = (_BYTE *)v194.i64[1];
    *(_OWORD *)(v84 + v85) = v194.i128[0];
    if ( v177[0] != 6 )
    {
      v83 = v177;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, a7);
    }
  }
  else
  {
    *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
    *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
    *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
    *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
    *(_OWORD *)v170 = *(_OWORD *)__dst;
    v202 = v194;
    v83 = v177;
    v87 = v170;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      v177,
      v170,
      &v202);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v83, v87);
  v24 = 11;
  v88 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v88 )
    goto LABEL_199;
  qmemcpy(v88, "temperature", 11);
  v201.i64[0] = 11;
  v201.i64[1] = (__int64)v88;
  v201.i64[2] = 11;
  v89 = 0.3;
  serde_json::value::from::_$LT$impl$u20$core..convert..From$LT$f64$GT$$u20$for$u20$serde_json..value..Value$GT$::from::h07ac9d6da7d1e18a(
    v170,
    0.3);
  if ( v170[0] == 6 )
  {
    *(_QWORD *)__dst = *(_QWORD *)&v170[8];
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_101605B51, 43, __dst, &off_1019684B8, &off_101967A10);
  }
  v203[0] = *(__m256i *)v170;
  v90 = __dst;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, v183, &v201);
  if ( *(_QWORD *)__dst == 0x8000000000000000LL )
  {
    v91 = *(_QWORD *)&__dst[8];
    v92 = 32LL * *(_QWORD *)&__dst[24];
    *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
    v93 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
    *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
    *(_QWORD *)v177 = v93;
    *(_OWORD *)(*(_QWORD *)&__dst[8] + v92 + 16) = v203[0].i128[1];
    v94 = (_BYTE *)v203[0].i64[1];
    *(_OWORD *)(v91 + v92) = v203[0].i128[0];
    if ( v177[0] != 6 )
    {
      v90 = v177;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, 0.3);
    }
  }
  else
  {
    *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
    *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
    *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
    *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
    *(_OWORD *)v170 = *(_OWORD *)__dst;
    v202 = v203[0];
    v90 = v177;
    v94 = v170;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      v177,
      v170,
      &v202);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v90, v94);
  v24 = 10;
  v95 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
  if ( !v95 )
    goto LABEL_199;
  qmemcpy(v95, "max_tokens", 10);
  v201.i64[0] = 10;
  v201.i64[1] = (__int64)v95;
  v201.i64[2] = 10;
  v203[0].i8[0] = 2;
  v203[0].i64[1] = 0;
  v203[0].i64[2] = 2048;
  v96 = __dst;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, v183, &v201);
  if ( *(_QWORD *)__dst == 0x8000000000000000LL )
  {
    v97 = *(_QWORD *)&__dst[8];
    v98 = 32LL * *(_QWORD *)&__dst[24];
    *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
    v99 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
    *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
    *(_QWORD *)v177 = v99;
    *(_OWORD *)(*(_QWORD *)&__dst[8] + v98 + 16) = v203[0].i128[1];
    v100 = (_BYTE *)v203[0].i64[1];
    *(_OWORD *)(v97 + v98) = v203[0].i128[0];
    if ( v177[0] != 6 )
    {
      v96 = v177;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, 0.3);
    }
  }
  else
  {
    *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
    *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
    *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
    *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
    *(_OWORD *)v170 = *(_OWORD *)__dst;
    v202 = v203[0];
    v96 = v177;
    v100 = v170;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      v177,
      v170,
      &v202);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v96, v100);
  v24 = 6;
  v101 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v101 )
LABEL_199:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24);
  *(_WORD *)(v101 + 4) = 28001;
  *(_DWORD *)v101 = 1701999731;
  v201.i64[0] = 6;
  v201.i64[1] = v101;
  v201.i64[2] = 6;
  v193.i16[0] = 257;
  v203[0] = v193;
  v102 = __dst;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, v183, &v201);
  if ( *(_QWORD *)__dst == 0x8000000000000000LL )
  {
    v103 = *(_QWORD *)&__dst[8];
    v104 = 32LL * *(_QWORD *)&__dst[24];
    *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
    v105 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
    *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
    *(_QWORD *)v177 = v105;
    *(_OWORD *)(*(_QWORD *)&__dst[8] + v104 + 16) = v193.i128[1];
    v106 = (_BYTE *)v193.i64[1];
    *(_OWORD *)(v103 + v104) = v193.i128[0];
    if ( v177[0] != 6 )
    {
      v102 = v177;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, 0.3);
    }
  }
  else
  {
    *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
    *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
    *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
    *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
    *(_OWORD *)v170 = *(_OWORD *)__dst;
    v202 = v193;
    v102 = v177;
    v106 = v170;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      v177,
      v170,
      &v202);
  }
  v176[0] = v183[0];
  v176[1] = v183[1];
  v176[2] = v184;
  v175[0] = 5;
  v107 = v181;
  switch ( v198 )
  {
    case 4uLL:
      if ( *(_DWORD *)v181 == 1768778091 )
        goto LABEL_109;
      goto LABEL_121;
    case 5uLL:
      if ( *(_DWORD *)v181 ^ 0x7069687A | *(unsigned __int8 *)(v181 + 4) ^ 0x75 )
        goto LABEL_121;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v106);
      v110 = 16;
      v111 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
      if ( !v111 )
        goto LABEL_206;
      qmemcpy(v111, "reasoning_effort", 16);
      *(_QWORD *)v177 = 16;
      *(_QWORD *)&v177[8] = v111;
      *(_QWORD *)&v177[16] = 16;
      serde_json::value::to_value::h29e3c39dc75a9151(v170, &off_101967A28);
      v81 = __s1;
      if ( v170[0] == 6 )
      {
        *(_QWORD *)__dst = *(_QWORD *)&v170[8];
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_101605B51, 43, __dst, &off_1019684B8, &off_101967A38);
      }
      *(_OWORD *)&__dst[16] = *(_OWORD *)&v170[16];
      *(_OWORD *)__dst = *(_OWORD *)v170;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v170, v176, v177, __dst);
      if ( v170[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v170, 0.3);
      goto LABEL_121;
    case 6uLL:
      if ( !(*(_DWORD *)v181 ^ 0x62756F64 | *(unsigned __int16 *)(v181 + 4) ^ 0x6F61) )
        goto LABEL_109;
      if ( *(_DWORD *)v181 ^ 0x616C6C6F | *(unsigned __int16 *)(v181 + 4) ^ 0x616D )
        goto LABEL_121;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v106);
      v110 = 5;
      v114 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v114 )
        goto LABEL_206;
      *(_BYTE *)(v114 + 4) = 107;
      *(_DWORD *)v114 = 1852401780;
      *(_QWORD *)v177 = 5;
      *(_QWORD *)&v177[8] = v114;
      *(_QWORD *)&v177[16] = 5;
      *(_WORD *)v170 = 1;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(__dst, v176, v177, v170);
      v81 = __s1;
      if ( __dst[0] != 6 )
LABEL_103:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(__dst, 0.3);
      goto LABEL_121;
    case 7uLL:
      if ( *(_DWORD *)v181 ^ 0x6C696162 | *(_DWORD *)(v181 + 3) ^ 0x6E61696C )
        goto LABEL_121;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v106);
      v110 = 15;
      v115 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
      if ( !v115 )
        goto LABEL_206;
      qmemcpy(v115, "enable_thinking", 15);
      *(_QWORD *)v177 = 15;
      *(_QWORD *)&v177[8] = v115;
      *(_QWORD *)&v177[16] = 15;
      *(_WORD *)v170 = 1;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(__dst, v176, v177, v170);
      v81 = __s1;
      if ( __dst[0] != 6 )
        goto LABEL_103;
      goto LABEL_121;
    case 8uLL:
      if ( *(_QWORD *)v181 != 0x6B65657370656564LL )
        goto LABEL_121;
LABEL_109:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v106);
      v110 = 8;
      v116 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
      if ( !v116 )
        goto LABEL_206;
      *v116 = 0x676E696B6E696874LL;
      *(_QWORD *)&v187 = 8;
      *((_QWORD *)&v187 + 1) = v116;
      v188 = 8;
      v196 = 0;
      *((_QWORD *)&v197 + 1) = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
      v117 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v117 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
      *v117 = 1701869940;
      v194.i64[0] = 4;
      v194.i64[1] = (__int64)v117;
      v194.i64[2] = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v118 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
      v81 = __s1;
      if ( !v118 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
      *v118 = 0x64656C6261736964LL;
      v203[0].i8[0] = 3;
      v203[0].i64[1] = 8;
      v203[0].i64[2] = (__int64)v118;
      v203[0].i64[3] = 8;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v196, &v194);
      if ( *(_QWORD *)__dst == 0x8000000000000000LL )
      {
        *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
        v119 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
        *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
        *(_QWORD *)v177 = v119;
        *(__m256i *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]) = v203[0];
        if ( v177[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, 0.3);
      }
      else
      {
        *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
        *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
        *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
        *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
        *(_OWORD *)v170 = *(_OWORD *)__dst;
        v202 = v203[0];
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v177,
          v170,
          &v202);
      }
      v201.i64[1] = v196;
      v201.i128[1] = v197;
      v201.i8[0] = 5;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, v176, &v187);
      if ( *(_QWORD *)__dst != 0x8000000000000000LL )
      {
        *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
        *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
        *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
        *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
        *(_OWORD *)v170 = *(_OWORD *)__dst;
        v202 = v201;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v177,
          v170,
          &v202);
        goto LABEL_121;
      }
      *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
      v120 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
      *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
      *(_QWORD *)v177 = v120;
      *(__m256i *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]) = v201;
      if ( v177[0] == 6 )
        goto LABEL_121;
      goto LABEL_98;
    case 9uLL:
      v108 = *(_QWORD *)v181 ^ 0x6378616D696E696DLL;
      v109 = *(unsigned __int8 *)(v181 + 8) ^ 0x6ELL;
      goto LABEL_94;
    case 0xBuLL:
      v108 = *(_QWORD *)v181 ^ 0x6978616D696E696DLL;
      v109 = *(_QWORD *)(v181 + 3) ^ 0x6C746E6978616D69LL;
LABEL_94:
      if ( v108 | v109 )
        goto LABEL_121;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v106);
      v110 = 15;
      v112 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
      if ( !v112 )
LABEL_206:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v110);
      qmemcpy(v112, "reasoning_split", 15);
      v203[0].i64[0] = 15;
      v203[0].i64[1] = (__int64)v112;
      v203[0].i64[2] = 15;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, v176, v203);
      v81 = __s1;
      if ( *(_QWORD *)__dst == 0x8000000000000000LL )
      {
        *(_OWORD *)&v177[16] = *(_OWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 16);
        v113 = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]);
        *(_QWORD *)&v177[8] = *(_QWORD *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24] + 8);
        *(_QWORD *)v177 = v113;
        *(__m256i *)(*(_QWORD *)&__dst[8] + 32LL * *(_QWORD *)&__dst[24]) = v193;
        if ( v177[0] != 6 )
LABEL_98:
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v177, 0.3);
      }
      else
      {
        *(_QWORD *)&v170[48] = *(_QWORD *)&__dst[48];
        *(_QWORD *)&v170[40] = *(_QWORD *)&__dst[40];
        *(_QWORD *)&v170[32] = *(_QWORD *)&__dst[32];
        *(_OWORD *)&v170[16] = *(_OWORD *)&__dst[16];
        *(_OWORD *)v170 = *(_OWORD *)__dst;
        v202 = v193;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v177,
          v170,
          &v202);
      }
LABEL_121:
      _$LT$reqwest..blocking..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::hcdeb91c9f4bc265f(
        v170,
        0.3,
        a8);
      *(_QWORD *)&v170[936] = 60;
      *(_DWORD *)&v170[944] = 0;
      memcpy(__dst, v170, sizeof(__dst));
      reqwest::blocking::client::ClientBuilder::build::h8f43bce474d3a935(v177, __dst);
      if ( *(_DWORD *)&v177[16] == 1000000001 )
      {
        v201.i64[0] = *(_QWORD *)v177;
        *(_QWORD *)__dst = &v201;
        *(_QWORD *)&__dst[8] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v170, &unk_1017C2D1B, __dst);
        core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v201.i64[0]);
        v121 = *(_OWORD *)v170;
        v203[0].i128[0] = *(_OWORD *)v170;
        v203[0].i64[2] = *(_QWORD *)&v170[16];
        v122 = v199;
        v199[3] = *(_QWORD *)&v170[16];
        *(_OWORD *)(v122 + 1) = v121;
        *v122 = 1;
        goto LABEL_188;
      }
      v194.i128[0] = *(_OWORD *)v177;
      v194.i64[2] = *(_QWORD *)&v177[16];
      v89 = 5.377940751268117e-299;
      memset(__dst, 2, 24);
      reqwest::blocking::client::Client::request::h10ce84dee71472ae(v170);
      reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__dst, v170, 0);
      reqwest::blocking::request::RequestBuilder::json::h6afc03ea6fb18200(v177, __dst);
      if ( v198 != 6
        || *(_DWORD *)v107 ^ 0x616C6C6F | *(unsigned __int16 *)(v107 + 4) ^ 0x616D
        || (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v81[4], v81[5]), v123) )
      {
        memcpy(v170, v177, 0x148u);
        *(_QWORD *)&v124 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v81[4], v81[5]);
        v202.i128[0] = v124;
        *(_QWORD *)__dst = &v202;
        *(_QWORD *)&__dst[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v167, &unk_1017B931C, __dst);
        reqwest::blocking::request::RequestBuilder::header_sensitive::hf40612ea765502d2(__dst, v170);
        memcpy(v177, __dst, sizeof(v177));
      }
      memcpy(v170, v177, 0x148u);
      reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(__dst, v170);
      v125 = *(_QWORD *)__dst;
      if ( *(_QWORD *)__dst == 3 )
      {
        v196 = *(_QWORD *)&__dst[8];
        v201.i64[0] = (__int64)&v196;
        v201.i64[1] = (__int64)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v170, (char *)&loc_1017C2E1E + 1, &v201);
        core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v196);
        v126 = *(_OWORD *)v170;
        v203[0].i128[0] = *(_OWORD *)v170;
        v203[0].i64[2] = *(_QWORD *)&v170[16];
        v127 = v199;
        v199[3] = *(_QWORD *)&v170[16];
        *(_OWORD *)(v127 + 1) = v126;
        *v127 = 1;
        goto LABEL_186;
      }
      *(__int128 *)((char *)v202.i128 + 8) = *(_OWORD *)&__dst[16];
      v202.i64[0] = *(_QWORD *)&__dst[8];
      qmemcpy(v165, &__dst[32], sizeof(v165));
      v128 = *(_WORD *)&__dst[104];
      memcpy(v166, &__dst[106], sizeof(v166));
      v203[0].i64[2] = *(_QWORD *)&__dst[24];
      v185 = v202.i128[0];
      v186 = *(_QWORD *)&__dst[24];
      if ( (unsigned __int16)(*(_WORD *)&__dst[104] - 200) >= 0x64u )
      {
        v203[0].i16[0] = *(_WORD *)&__dst[104];
        *(_QWORD *)v170 = *(_QWORD *)__dst;
        *(_OWORD *)&v170[8] = v185;
        *(_QWORD *)&v170[24] = v186;
        qmemcpy(&v170[32], v165, 0x48u);
        *(_WORD *)&v170[104] = *(_WORD *)&__dst[104];
        memcpy(&v170[106], v166, 0x46u);
        reqwest::blocking::response::Response::text::h6135e3e5df4ac470(__dst, v170);
        if ( *(_QWORD *)__dst == 0x8000000000000000LL )
        {
          v202.i64[0] = 0;
          *(__int128 *)((char *)v202.i128 + 8) = 1u;
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(*(_QWORD *)&__dst[8]);
        }
        else
        {
          v202.i64[2] = *(_QWORD *)&__dst[16];
          v202.i128[0] = *(_OWORD *)__dst;
        }
        *(_QWORD *)v170 = v203;
        *(_QWORD *)&v170[8] = _$LT$http..status..StatusCode$u20$as$u20$core..fmt..Display$GT$::fmt::h9532ff36c27bd9e7;
        *(_QWORD *)&v170[16] = &v202;
        *(_QWORD *)&v170[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v168, &unk_1017C2DF1, v170);
        v152 = v199;
        v199[3] = v168[2];
        v153 = v168[0];
        v152[2] = v168[1];
        v152[1] = v153;
        *v152 = 1;
        v154 = v202.i64[0];
        if ( v202.i64[0] )
        {
          v155 = v202.i64[1];
          goto LABEL_185;
        }
        goto LABEL_186;
      }
      *(_OWORD *)&__dst[8] = v185;
      *(_QWORD *)&__dst[24] = v186;
      qmemcpy(&__dst[32], v165, 0x48u);
      memcpy(&__dst[106], v166, 0x46u);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__dst[106], v166);
      v129 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1);
      if ( !v129 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000);
      v130 = v129;
      memset(&v170[16], 0, 24);
      *(_OWORD *)&v170[48] = v185;
      *(_QWORD *)&v170[64] = v186;
      qmemcpy(&v170[72], v165, 0x48u);
      memcpy(&v170[146], v166, 0x46u);
      v190 = 0;
      v191 = 1;
      v192 = 0;
      *(_QWORD *)v170 = v130;
      *(_QWORD *)&v170[8] = 0x2000;
      *(_QWORD *)&v170[40] = v125;
      *(_WORD *)&v170[144] = v128;
      __src = *(void **)(v172 + 40);
      v198 = 0;
      __n = 0x8000000000000001LL;
      v131 = 0;
      break;
    default:
      goto LABEL_121;
  }
  while ( 1 )
  {
    _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b6f11e2b08d1c4e(
      &v201,
      v170);
    v132 = v201.i64[0];
    if ( v201.i64[0] == __n )
      break;
    v133 = v201.i64[1];
    if ( v201.i64[0] == 0x8000000000000000LL )
    {
      v203[0].i64[0] = v201.i64[1];
      v202.i64[0] = (__int64)v203;
      v202.i64[1] = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, (char *)&loc_1017C2E08 + 1, &v202);
      if ( (v203[0].i8[0] & 3) == 1 )
      {
        v156 = v203[0].i64[0] - 1;
        v157 = *(_QWORD *)(v203[0].i64[0] - 1);
        v158 = *(_QWORD *)(v203[0].i64[0] + 7);
        if ( *(_QWORD *)v158 )
          (*(void (__fastcall **)(__int64))v158)(v157);
        v159 = *(_QWORD *)(v158 + 8);
        if ( v159 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v157, v159, *(_QWORD *)(v158 + 16));
        v89 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v156, 24, 8);
      }
      v160 = *(_QWORD *)&__dst[8];
      v161 = *(_QWORD *)&__dst[16];
      v162 = v199;
      v199[1] = *(_QWORD *)__dst;
      v162[2] = v160;
      v162[3] = v161;
      *v162 = 1;
      if ( *(_QWORD *)&v170[8] )
        v89 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v170, *(_QWORD *)&v170[8], 1);
      core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(&v170[40]);
      v154 = v190;
      if ( v190 )
      {
        v155 = v191;
        goto LABEL_185;
      }
      goto LABEL_186;
    }
    v134 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v201.i64[1], v201.i64[2]);
    if ( v135 == 12 )
    {
      if ( !(*(_QWORD *)v134 ^ 0x445B203A61746164LL | *(unsigned int *)(v134 + 8) ^ 0x5D454E4FLL) )
        goto LABEL_159;
LABEL_139:
      v138 = _byteswap_ulong(*(_DWORD *)v134);
      v139 = 1684108385;
      if ( v138 != 1684108385
        || (v138 = (unsigned __int16)__ROL2__(*(_WORD *)(v134 + 4), 8),
            v139 = 14880,
            v140 = 0,
            (unsigned __int16)v138 != 14880) )
      {
        v140 = 2 * (v139 >= v138) - 1;
      }
      v136 = v135 - 6;
      if ( v140 )
        v136 = v135;
      v137 = 0;
      if ( !v140 )
        v137 = 6;
      goto LABEL_146;
    }
    if ( !v135 )
      goto LABEL_159;
    if ( v135 >= 6 )
      goto LABEL_139;
    v136 = v135;
    v137 = 0;
LABEL_146:
    *(_OWORD *)__dst = __PAIR128__(v136, v134 + v137);
    *(_OWORD *)&__dst[16] = 0u;
    *(_QWORD *)&__dst[32] = v134 + v137;
    *(_QWORD *)&__dst[40] = v136;
    serde_json::de::from_trait::h51e180b4bb6af5e0(&v202, __dst);
    if ( v202.i8[0] == 6 )
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(
        &v202,
        v89);
    }
    else
    {
      v203[0] = v202;
      v141 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "choicesdelta",
               7,
               v203);
      if ( v141 )
      {
        if ( *(_BYTE *)v141 == 4 )
        {
          if ( *(_QWORD *)(v141 + 24) )
          {
            v142 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "delta",
                     5,
                     *(_QWORD *)(v141 + 16));
            if ( v142 )
            {
              v143 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "contentx-api-keyanthropic-version2023-06-01Content-Type",
                       7,
                       v142);
              if ( v143 )
              {
                if ( *(_BYTE *)v143 == 3 )
                {
                  v145 = *(_QWORD *)(v143 + 24);
                  if ( v145 )
                  {
                    __s1 = *(void **)(v143 + 16);
                    if ( v145 > v190 - v198 )
                    {
                      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                        &v190,
                        v198,
                        v145,
                        1,
                        1,
                        v144);
                      v198 = v192;
                    }
                    v146 = v198;
                    memcpy((void *)(v198 + v191), __s1, v145);
                    v198 = v145 + v146;
                    v192 = v145 + v146;
                    if ( ((v131
                         | (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                              "<think>doubao",
                                              7u,
                                              __s1))
                        & 1) != 0 )
                      v131 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                               &unk_1016021B0,
                               8u,
                               __s1)
                           ^ 1;
                    else
                      v89 = ((double (__fastcall *)(__int64, void *, size_t))__src)(v174, __s1, v145);
                  }
                }
              }
            }
          }
        }
      }
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v203, v89);
    }
LABEL_159:
    if ( v132 )
      v89 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v132, 1);
  }
  if ( *(_QWORD *)&v170[8] )
    v89 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v170, *(_QWORD *)&v170[8], 1);
  core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(&v170[40]);
  codexmate_lib::core::voice::llm::strip_think_tags::hafb183b43a34c569((size_t *)v170, &v190);
  v147 = *(_QWORD *)&v170[8];
  v148 = *(_QWORD *)&v170[16];
  v149 = *(_QWORD *)&v170[8];
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)&v170[8], *(_QWORD *)&v170[16]);
  if ( !v150 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v149, v148);
    v163 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1);
    if ( !v163 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34);
    qmemcpy(v163, "LLM stream returned empty response", 34);
    v164 = v199;
    v199[1] = 34;
    v164[2] = v163;
    v164[3] = 34;
    *v164 = 1;
    v154 = *(_QWORD *)v170;
    if ( *(_QWORD *)v170 )
    {
      v155 = v147;
LABEL_185:
      v89 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v154, 1);
    }
LABEL_186:
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v194.i64[0]) )
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v194);
    goto LABEL_188;
  }
  v151 = v199;
  v199[3] = *(_QWORD *)&v170[16];
  *(_OWORD *)(v151 + 1) = *(_OWORD *)v170;
  *v151 = 0;
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v194.i64[0]) )
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v194);
LABEL_188:
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v175, v89);
  if ( (_QWORD)v178 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v178 + 1), v178, 1);
LABEL_190:
  if ( v180 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v181, v180, 1);
  return v199;
}
