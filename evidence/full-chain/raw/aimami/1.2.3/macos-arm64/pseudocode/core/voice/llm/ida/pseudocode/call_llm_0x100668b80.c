// __ZN13codexmate_lib4core5voice3llm8call_llm @ 0x100668b80 | 基线 same-set
// [FULL decompile]

_QWORD *__fastcall codexmate_lib::core::voice::llm::call_llm::h6022ef50e8dbad9a(
        _QWORD *a1,
        _QWORD *a2,
        void *a3,
        size_t a4,
        double a5,
        double a6)
{
  _QWORD *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // esi
  char v17; // di
  char v18; // r8
  char v19; // r9
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // edi
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  size_t v29; // r13
  __int64 v30; // r14
  void *v31; // rax
  const void *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r15
  _BYTE *v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  _BYTE *v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // rbx
  _DWORD *v46; // rax
  __int64 v47; // rax
  _BYTE *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  _BYTE *v52; // rsi
  _DWORD *v53; // rax
  void *v54; // rax
  void *v55; // rbx
  _BYTE *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  _BYTE *v60; // rsi
  __int64 v61; // rbx
  _DWORD *v62; // rax
  _DWORD *v63; // rax
  _BYTE *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  _BYTE *v68; // rsi
  _DWORD *v69; // rax
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  _BYTE *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  _BYTE *v80; // rsi
  void *v81; // rax
  double v82; // xmm0_8
  _BYTE *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  _BYTE *v87; // rsi
  void *v88; // rax
  _BYTE *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  _BYTE *v93; // rsi
  __int64 v94; // r14
  __int64 v95; // r12
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r15
  void *v99; // rax
  void *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rax
  void *v105; // rax
  _QWORD *v106; // rax
  _DWORD *v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int128 v115; // kr10_16
  __int64 v116; // rdx
  __int128 v117; // rax
  __int128 v118; // kr20_16
  __int64 v119; // rbx
  __int64 v120; // r14
  void *v121; // rax
  _QWORD *v122; // rcx
  signed __int64 v123; // rt0
  _QWORD *v124; // rdx
  _QWORD *v125; // r15
  __int64 v126; // rsi
  _BYTE v127[952]; // [rsp+28h] [rbp-AA8h] BYREF
  _OWORD __dst[60]; // [rsp+3E0h] [rbp-6F0h] BYREF
  _QWORD v129[3]; // [rsp+7A0h] [rbp-330h] BYREF
  _QWORD v130[3]; // [rsp+7B8h] [rbp-318h] BYREF
  size_t __n; // [rsp+7D0h] [rbp-300h]
  _QWORD *v132; // [rsp+7D8h] [rbp-2F8h]
  char v133[8]; // [rsp+7E0h] [rbp-2F0h] BYREF
  _QWORD v134[3]; // [rsp+7E8h] [rbp-2E8h] BYREF
  _BYTE v135[328]; // [rsp+800h] [rbp-2D0h] BYREF
  __int64 v136; // [rsp+948h] [rbp-188h] BYREF
  __int64 v137; // [rsp+950h] [rbp-180h]
  __int64 v138; // [rsp+958h] [rbp-178h]
  void *__src; // [rsp+960h] [rbp-170h]
  _QWORD *v140; // [rsp+968h] [rbp-168h]
  _QWORD v141[2]; // [rsp+970h] [rbp-160h] BYREF
  __int64 v142; // [rsp+980h] [rbp-150h] BYREF
  __int128 v143; // [rsp+988h] [rbp-148h] BYREF
  __int128 v144; // [rsp+998h] [rbp-138h]
  volatile signed __int64 *v145; // [rsp+9A8h] [rbp-128h] BYREF
  __int64 v146; // [rsp+9B0h] [rbp-120h]
  __int64 v147; // [rsp+9B8h] [rbp-118h]
  _BYTE v148[72]; // [rsp+9C0h] [rbp-110h] BYREF
  __int128 v149; // [rsp+A08h] [rbp-C8h] BYREF
  __int64 v150; // [rsp+A18h] [rbp-B8h]
  _QWORD *v151; // [rsp+A20h] [rbp-B0h]
  __int128 v152; // [rsp+A28h] [rbp-A8h] BYREF
  __int64 v153; // [rsp+A38h] [rbp-98h]
  _BYTE v154[70]; // [rsp+A40h] [rbp-90h] BYREF
  __m512i v155; // [rsp+A88h] [rbp-48h] BYREF

  v9 = a1;
  if ( (unsigned __int8)codexmate_lib::core::voice::llm::LlmConfig::is_configured::h23c56cc13cc1dc96(a2) )
  {
    __src = a3;
    v10 = a2[1];
    v11 = a2[2];
    codexmate_lib::core::voice::llm::normalize_provider::hc20fe0bd6fa0e76d((__int64 *)v127, v10, v11);
    if ( *(_QWORD *)&v127[16] != 6
      || **(_DWORD **)&v127[8] ^ 0x75616C63 | *(unsigned __int16 *)(*(_QWORD *)&v127[8] + 4LL) ^ 0x6564 )
    {
      if ( *(_QWORD *)v127 )
        a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v127[8], *(_QWORD *)v127, 1);
      v12 = a2[10];
      v13 = a2[11];
      while ( 1 )
      {
        v14 = v13;
        if ( !v13 )
          break;
        v15 = v12 + v13;
        v16 = *(char *)(v12 + v14 - 1);
        if ( v16 >= 0 )
        {
          v13 = v14 - 1;
          if ( v16 != 47 )
            break;
        }
        else
        {
          v17 = *(_BYTE *)(v15 - 2);
          if ( v17 >= -64 )
          {
            v20 = v15 - 2;
            v22 = v17 & 0x1F;
          }
          else
          {
            v18 = *(_BYTE *)(v15 - 3);
            if ( v18 >= -64 )
            {
              v20 = v15 - 3;
              v21 = v18 & 0xF;
            }
            else
            {
              v19 = *(_BYTE *)(v15 - 4);
              v20 = v15 - 4;
              v21 = ((v19 & 7) << 6) | v18 & 0x3F;
            }
            v22 = (v21 << 6) | v17 & 0x3F;
          }
          v13 = v20 - v12;
          if ( ((v22 << 6) | v16 & 0x3F) != 0x2F )
            break;
        }
      }
      *(_QWORD *)&__dst[0] = a2[10];
      *((_QWORD *)&__dst[0] + 1) = v14;
      *(_QWORD *)v127 = __dst;
      *(_QWORD *)&v127[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v130, &unk_1017C2DDD, v127);
      codexmate_lib::core::voice::llm::normalize_provider::hc20fe0bd6fa0e76d(&v136, v10, v11);
      v151 = v9;
      v145 = nullptr;
      v147 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v136, v10);
      v23 = 5;
      v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v24 )
        goto LABEL_159;
      *(_BYTE *)(v24 + 4) = 108;
      *(_DWORD *)v24 = 1701080941;
      v155.i64[0] = 5;
      v155.i64[1] = v24;
      v155.i64[2] = 5;
      v25 = a2[7];
      v26 = a2[8];
      v27 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v25, v26);
      v29 = v28;
      if ( v28 < 0 )
      {
        v30 = 0;
        goto LABEL_20;
      }
      v33 = (const void *)v27;
      __n = a4;
      v140 = a2;
      if ( v28 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v26);
        v30 = 1;
        v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1);
        if ( !v34 )
LABEL_20:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v29);
        v35 = v34;
      }
      else
      {
        v35 = 1;
      }
      memcpy((void *)v35, v33, v29);
      v154[0] = 3;
      *(_QWORD *)&v154[8] = v29;
      *(_QWORD *)&v154[16] = v35;
      *(_QWORD *)&v154[24] = v29;
      v36 = __dst;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v145, &v155);
      v37 = __n;
      if ( __OFSUB__(0, *(_QWORD *)&__dst[0]) )
      {
        v38 = *((_QWORD *)&__dst[0] + 1);
        v39 = 32LL * *((_QWORD *)&__dst[1] + 1);
        *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
        v40 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
        *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
        *(_QWORD *)v135 = v40;
        *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v39 + 16) = *(_OWORD *)&v154[16];
        v41 = *(_BYTE **)&v154[8];
        *(_OWORD *)(v38 + v39) = *(_OWORD *)v154;
        if ( v135[0] != 6 )
        {
          v36 = v135;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, a5);
        }
      }
      else
      {
        *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
        *(_OWORD *)&v127[32] = __dst[2];
        *(_OWORD *)&v127[16] = __dst[1];
        *(_OWORD *)v127 = __dst[0];
        *(_OWORD *)&v148[16] = *(_OWORD *)&v154[16];
        *(_OWORD *)v148 = *(_OWORD *)v154;
        v36 = v135;
        v41 = v127;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v135,
          v127,
          v148);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v41);
      v23 = 8;
      v42 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
      if ( !v42 )
        goto LABEL_159;
      *v42 = 0x736567617373656DLL;
      v129[0] = 8;
      v132 = v42;
      v129[1] = v42;
      v129[2] = 8;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
      v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 8);
      if ( !v43 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64);
      v44 = v43;
      *(_QWORD *)&v152 = 0;
      v153 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(64, 8);
      v45 = 4;
      v46 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v46 )
        goto LABEL_161;
      *v46 = 1701605234;
      v155.i64[0] = 4;
      v155.i64[1] = (__int64)v46;
      v155.i64[2] = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v47 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
      *(_WORD *)(v47 + 4) = 28005;
      *(_DWORD *)v47 = 1953724787;
      v154[0] = 3;
      *(_QWORD *)&v154[8] = 6;
      *(_QWORD *)&v154[16] = v47;
      *(_QWORD *)&v154[24] = 6;
      v48 = __dst;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v152, &v155);
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
      {
        v49 = *((_QWORD *)&__dst[0] + 1);
        v50 = 32LL * *((_QWORD *)&__dst[1] + 1);
        *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
        v51 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
        *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
        *(_QWORD *)v135 = v51;
        *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v50 + 16) = *(_OWORD *)&v154[16];
        v52 = *(_BYTE **)&v154[8];
        *(_OWORD *)(v49 + v50) = *(_OWORD *)v154;
        if ( v135[0] != 6 )
        {
          v48 = v135;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, a5);
        }
      }
      else
      {
        *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
        *(_OWORD *)&v127[32] = __dst[2];
        *(_OWORD *)&v127[16] = __dst[1];
        *(_OWORD *)v127 = __dst[0];
        *(_OWORD *)&v148[16] = *(_OWORD *)&v154[16];
        *(_OWORD *)v148 = *(_OWORD *)v154;
        v48 = v135;
        v52 = v127;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v135,
          v127,
          v148);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, v52);
      v45 = 7;
      v53 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v53 )
LABEL_161:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v45);
      *(_DWORD *)((char *)v53 + 3) = 1953391988;
      *v53 = 1953394531;
      v155.i64[0] = 7;
      v155.i64[1] = (__int64)v53;
      v155.i64[2] = 7;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(222, 1);
      if ( !v54 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 222);
      v55 = v54;
      memcpy(v54, &unk_101602A3B, 0xDEu);
      v154[0] = 3;
      *(_QWORD *)&v154[8] = 222;
      *(_QWORD *)&v154[16] = v55;
      *(_QWORD *)&v154[24] = 222;
      v56 = __dst;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v152, &v155);
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
      {
        v57 = *((_QWORD *)&__dst[0] + 1);
        v58 = 32LL * *((_QWORD *)&__dst[1] + 1);
        *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
        v59 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
        *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
        *(_QWORD *)v135 = v59;
        *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v58 + 16) = *(_OWORD *)&v154[16];
        v60 = *(_BYTE **)&v154[8];
        *(_OWORD *)(v57 + v58) = *(_OWORD *)v154;
        if ( v135[0] != 6 )
        {
          v56 = v135;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, a5);
        }
      }
      else
      {
        *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
        *(_OWORD *)&v127[32] = __dst[2];
        *(_OWORD *)&v127[16] = __dst[1];
        *(_OWORD *)v127 = __dst[0];
        *(_OWORD *)&v148[16] = *(_OWORD *)&v154[16];
        *(_OWORD *)v148 = *(_OWORD *)v154;
        v56 = v135;
        v60 = v127;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v135,
          v127,
          v148);
      }
      *(__int128 *)((char *)v155.i128 + 8) = v152;
      v155.i64[3] = v153;
      v155.i8[0] = 5;
      *(_QWORD *)&v149 = 0;
      v150 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, v60);
      v61 = 4;
      v62 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v62 )
        goto LABEL_162;
      *v62 = 1701605234;
      *(_QWORD *)&v152 = 4;
      *((_QWORD *)&v152 + 1) = v62;
      v153 = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v63 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v63 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
      *v63 = 1919251317;
      v154[0] = 3;
      *(_QWORD *)&v154[8] = 4;
      *(_QWORD *)&v154[16] = v63;
      *(_QWORD *)&v154[24] = 4;
      v64 = __dst;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v149, &v152);
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
      {
        v65 = *((_QWORD *)&__dst[0] + 1);
        v66 = 32LL * *((_QWORD *)&__dst[1] + 1);
        *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
        v67 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
        *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
        *(_QWORD *)v135 = v67;
        *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v66 + 16) = *(_OWORD *)&v154[16];
        v68 = *(_BYTE **)&v154[8];
        *(_OWORD *)(v65 + v66) = *(_OWORD *)v154;
        if ( v135[0] != 6 )
        {
          v64 = v135;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, a5);
        }
      }
      else
      {
        *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
        *(_OWORD *)&v127[32] = __dst[2];
        *(_OWORD *)&v127[16] = __dst[1];
        *(_OWORD *)v127 = __dst[0];
        *(_OWORD *)&v148[16] = *(_OWORD *)&v154[16];
        *(_OWORD *)v148 = *(_OWORD *)v154;
        v64 = v135;
        v68 = v127;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v135,
          v127,
          v148);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v64, v68);
      v61 = 7;
      v69 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v69 )
LABEL_162:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v61);
      *(_DWORD *)((char *)v69 + 3) = 1953391988;
      *v69 = 1953394531;
      *(_QWORD *)&v152 = 7;
      *((_QWORD *)&v152 + 1) = v69;
      v153 = 7;
      if ( v37 < 0 )
      {
        v70 = 0;
        goto LABEL_58;
      }
      if ( v37 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
        v70 = 1;
        v71 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1);
        if ( !v71 )
LABEL_58:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v70, v37);
        v72 = v71;
      }
      else
      {
        v72 = 1;
      }
      memcpy((void *)v72, __src, v37);
      v154[0] = 3;
      *(_QWORD *)&v154[8] = v37;
      *(_QWORD *)&v154[16] = v72;
      *(_QWORD *)&v154[24] = v37;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v149, &v152);
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
      {
        v73 = *((_QWORD *)&__dst[0] + 1);
        v74 = 32LL * *((_QWORD *)&__dst[1] + 1);
        *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
        v75 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
        *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
        *(_QWORD *)v135 = v75;
        *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v74 + 16) = *(_OWORD *)&v154[16];
        *(_OWORD *)(v73 + v74) = *(_OWORD *)v154;
        if ( v135[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, a5);
      }
      else
      {
        *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
        *(_OWORD *)&v127[32] = __dst[2];
        *(_OWORD *)&v127[16] = __dst[1];
        *(_OWORD *)v127 = __dst[0];
        *(_OWORD *)&v148[16] = *(_OWORD *)&v154[16];
        *(_OWORD *)v148 = *(_OWORD *)v154;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v135,
          v127,
          v148);
      }
      *(_OWORD *)&v127[7] = v149;
      *(_QWORD *)&v127[23] = v150;
      *(_OWORD *)(v44 + 16) = v155.i128[1];
      *(_OWORD *)v44 = v155.i128[0];
      *(_BYTE *)(v44 + 32) = 5;
      *(_QWORD *)(v44 + 56) = *(_QWORD *)&v127[23];
      *(_QWORD *)(v44 + 49) = *(_QWORD *)&v127[16];
      *(_OWORD *)(v44 + 33) = *(_OWORD *)v127;
      *((_QWORD *)&v143 + 1) = 2;
      *(_QWORD *)&v144 = v44;
      *((_QWORD *)&v144 + 1) = 2;
      LOBYTE(v143) = 4;
      v76 = __dst;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v145, v129);
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
      {
        v77 = *((_QWORD *)&__dst[0] + 1);
        v78 = 32LL * *((_QWORD *)&__dst[1] + 1);
        *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
        v79 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
        *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
        *(_QWORD *)v135 = v79;
        *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v78 + 16) = v144;
        v80 = *((_BYTE **)&v143 + 1);
        *(_OWORD *)(v77 + v78) = v143;
        if ( v135[0] != 6 )
        {
          v76 = v135;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, a5);
        }
      }
      else
      {
        *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
        *(_OWORD *)&v127[32] = __dst[2];
        *(_OWORD *)&v127[16] = __dst[1];
        *(_OWORD *)v127 = __dst[0];
        *(_OWORD *)&v148[16] = v144;
        *(_OWORD *)v148 = v143;
        v76 = v135;
        v80 = v127;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v135,
          v127,
          v148);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v76, v80);
      v23 = 11;
      v81 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
      if ( !v81 )
        goto LABEL_159;
      qmemcpy(v81, "temperature", 11);
      v155.i64[0] = 11;
      v155.i64[1] = (__int64)v81;
      v155.i64[2] = 11;
      v82 = 0.3;
      serde_json::value::from::_$LT$impl$u20$core..convert..From$LT$f64$GT$$u20$for$u20$serde_json..value..Value$GT$::from::h07ac9d6da7d1e18a(
        v127,
        0.3);
      if ( v127[0] == 6 )
      {
        *(_QWORD *)&__dst[0] = *(_QWORD *)&v127[8];
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_101605B51, 43, __dst, &off_1019684B8, &off_101967A70);
      }
      *(_OWORD *)&v154[16] = *(_OWORD *)&v127[16];
      *(_OWORD *)v154 = *(_OWORD *)v127;
      v83 = __dst;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v145, &v155);
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
      {
        v84 = *((_QWORD *)&__dst[0] + 1);
        v85 = 32LL * *((_QWORD *)&__dst[1] + 1);
        *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
        v86 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
        *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
        *(_QWORD *)v135 = v86;
        *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v85 + 16) = *(_OWORD *)&v154[16];
        v87 = *(_BYTE **)&v154[8];
        *(_OWORD *)(v84 + v85) = *(_OWORD *)v154;
        if ( v135[0] != 6 )
        {
          v83 = v135;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, 0.3);
        }
      }
      else
      {
        *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
        *(_OWORD *)&v127[32] = __dst[2];
        *(_OWORD *)&v127[16] = __dst[1];
        *(_OWORD *)v127 = __dst[0];
        *(_OWORD *)&v148[16] = *(_OWORD *)&v154[16];
        *(_OWORD *)v148 = *(_OWORD *)v154;
        v83 = v135;
        v87 = v127;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v135,
          v127,
          v148);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v83, v87);
      v23 = 10;
      v88 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
      if ( !v88 )
LABEL_159:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23);
      qmemcpy(v88, "max_tokens", 10);
      v155.i64[0] = 10;
      v155.i64[1] = (__int64)v88;
      v155.i64[2] = 10;
      v154[0] = 2;
      *(_QWORD *)&v154[8] = 0;
      *(_QWORD *)&v154[16] = 2048;
      v89 = __dst;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v145, &v155);
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
      {
        v90 = *((_QWORD *)&__dst[0] + 1);
        v91 = 32LL * *((_QWORD *)&__dst[1] + 1);
        *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
        v92 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
        *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
        *(_QWORD *)v135 = v92;
        *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v91 + 16) = *(_OWORD *)&v154[16];
        v93 = *(_BYTE **)&v154[8];
        *(_OWORD *)(v90 + v91) = *(_OWORD *)v154;
        if ( v135[0] != 6 )
        {
          v89 = v135;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, 0.3);
        }
      }
      else
      {
        *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
        *(_OWORD *)&v127[32] = __dst[2];
        *(_OWORD *)&v127[16] = __dst[1];
        *(_OWORD *)v127 = __dst[0];
        *(_OWORD *)&v148[16] = *(_OWORD *)&v154[16];
        *(_OWORD *)v148 = *(_OWORD *)v154;
        v89 = v135;
        v93 = v127;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          v135,
          v127,
          v148);
      }
      v134[0] = v145;
      v134[1] = v146;
      v134[2] = v147;
      v133[0] = 5;
      v94 = v137;
      v95 = v138;
      switch ( v138 )
      {
        case 4LL:
          if ( *(_DWORD *)v137 == 1768778091 )
            goto LABEL_107;
          goto LABEL_119;
        case 5LL:
          if ( *(_DWORD *)v137 ^ 0x7069687A | *(unsigned __int8 *)(v137 + 4) ^ 0x75 )
            goto LABEL_119;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v89, v93);
          v98 = 16;
          v99 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
          if ( !v99 )
            goto LABEL_166;
          qmemcpy(v99, "reasoning_effort", 16);
          *(_QWORD *)v135 = 16;
          *(_QWORD *)&v135[8] = v99;
          *(_QWORD *)&v135[16] = 16;
          serde_json::value::to_value::h29e3c39dc75a9151(v127, &off_101967A28);
          if ( v127[0] == 6 )
          {
            *(_QWORD *)&__dst[0] = *(_QWORD *)&v127[8];
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_101605B51, 43, __dst, &off_1019684B8, &off_101967A88);
          }
          __dst[1] = *(_OWORD *)&v127[16];
          __dst[0] = *(_OWORD *)v127;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(v127, v134, v135, __dst);
          if ( v127[0] != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v127, 0.3);
          goto LABEL_119;
        case 6LL:
          if ( !(*(_DWORD *)v137 ^ 0x62756F64 | *(unsigned __int16 *)(v137 + 4) ^ 0x6F61) )
            goto LABEL_107;
          if ( *(_DWORD *)v137 ^ 0x616C6C6F | *(unsigned __int16 *)(v137 + 4) ^ 0x616D )
            goto LABEL_119;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v89, v93);
          v98 = 5;
          v104 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
          if ( !v104 )
            goto LABEL_166;
          *(_BYTE *)(v104 + 4) = 107;
          *(_DWORD *)v104 = 1852401780;
          *(_QWORD *)v135 = 5;
          *(_QWORD *)&v135[8] = v104;
          *(_QWORD *)&v135[16] = 5;
          *(_WORD *)v127 = 1;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(__dst, v134, v135, v127);
          if ( LOBYTE(__dst[0]) != 6 )
LABEL_101:
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(__dst, 0.3);
          goto LABEL_119;
        case 7LL:
          if ( *(_DWORD *)v137 ^ 0x6C696162 | *(_DWORD *)(v137 + 3) ^ 0x6E61696C )
            goto LABEL_119;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v89, v93);
          v98 = 15;
          v105 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
          if ( !v105 )
            goto LABEL_166;
          qmemcpy(v105, "enable_thinking", 15);
          *(_QWORD *)v135 = 15;
          *(_QWORD *)&v135[8] = v105;
          *(_QWORD *)&v135[16] = 15;
          *(_WORD *)v127 = 1;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(__dst, v134, v135, v127);
          if ( LOBYTE(__dst[0]) != 6 )
            goto LABEL_101;
          goto LABEL_119;
        case 8LL:
          if ( *(_QWORD *)v137 != 0x6B65657370656564LL )
            goto LABEL_119;
LABEL_107:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v89, v93);
          v98 = 8;
          v106 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
          if ( !v106 )
            goto LABEL_166;
          *v106 = 0x676E696B6E696874LL;
          *(_QWORD *)&v149 = 8;
          *((_QWORD *)&v149 + 1) = v106;
          v150 = 8;
          *(_QWORD *)&v152 = 0;
          v153 = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1);
          v107 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v107 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
          *v107 = 1701869940;
          *(_QWORD *)&v143 = 4;
          *((_QWORD *)&v143 + 1) = v107;
          *(_QWORD *)&v144 = 4;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v108 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
          if ( !v108 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
          *v108 = 0x64656C6261736964LL;
          v154[0] = 3;
          *(_QWORD *)&v154[8] = 8;
          *(_QWORD *)&v154[16] = v108;
          *(_QWORD *)&v154[24] = 8;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v152, &v143);
          if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
          {
            v109 = *((_QWORD *)&__dst[0] + 1);
            v110 = 32LL * *((_QWORD *)&__dst[1] + 1);
            *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
            v111 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
            *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
            *(_QWORD *)v135 = v111;
            *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v110 + 16) = *(_OWORD *)&v154[16];
            *(_OWORD *)(v109 + v110) = *(_OWORD *)v154;
            if ( v135[0] != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, 0.3);
          }
          else
          {
            *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
            *(_OWORD *)&v127[32] = __dst[2];
            *(_OWORD *)&v127[16] = __dst[1];
            *(_OWORD *)v127 = __dst[0];
            *(_OWORD *)&v148[16] = *(_OWORD *)&v154[16];
            *(_OWORD *)v148 = *(_OWORD *)v154;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              v135,
              v127,
              v148);
          }
          *(__int128 *)((char *)v155.i128 + 8) = v152;
          v155.i64[3] = v153;
          v155.i8[0] = 5;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, v134, &v149);
          if ( *(_QWORD *)&__dst[0] != 0x8000000000000000LL )
          {
            *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
            *(_OWORD *)&v127[32] = __dst[2];
            *(_OWORD *)&v127[16] = __dst[1];
            *(_OWORD *)v127 = __dst[0];
            *(_OWORD *)&v148[16] = v155.i128[1];
            *(_OWORD *)v148 = v155.i128[0];
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              v135,
              v127,
              v148);
            goto LABEL_119;
          }
          v112 = *((_QWORD *)&__dst[0] + 1);
          v113 = 32LL * *((_QWORD *)&__dst[1] + 1);
          *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
          v114 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
          *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
          *(_QWORD *)v135 = v114;
          *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v113 + 16) = v155.i128[1];
          *(_OWORD *)(v112 + v113) = v155.i128[0];
          if ( v135[0] == 6 )
            goto LABEL_119;
          goto LABEL_96;
        case 9LL:
          v96 = *(_QWORD *)v137 ^ 0x6378616D696E696DLL;
          v97 = *(unsigned __int8 *)(v137 + 8) ^ 0x6ELL;
          goto LABEL_92;
        case 11LL:
          v96 = *(_QWORD *)v137 ^ 0x6978616D696E696DLL;
          v97 = *(_QWORD *)(v137 + 3) ^ 0x6C746E6978616D69LL;
LABEL_92:
          if ( v96 | v97 )
            goto LABEL_119;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v89, v93);
          v98 = 15;
          v100 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
          if ( !v100 )
LABEL_166:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v98);
          qmemcpy(v100, "reasoning_split", 15);
          v155.i64[0] = 15;
          v155.i64[1] = (__int64)v100;
          v155.i64[2] = 15;
          *(_WORD *)v154 = 257;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, v134, &v155);
          if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
          {
            v101 = *((_QWORD *)&__dst[0] + 1);
            v102 = 32LL * *((_QWORD *)&__dst[1] + 1);
            *(_OWORD *)&v135[16] = *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 16);
            v103 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1));
            *(_QWORD *)&v135[8] = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 32LL * *((_QWORD *)&__dst[1] + 1) + 8);
            *(_QWORD *)v135 = v103;
            *(_OWORD *)(*((_QWORD *)&__dst[0] + 1) + v102 + 16) = *(_OWORD *)&v154[16];
            *(_OWORD *)(v101 + v102) = *(_OWORD *)v154;
            if ( v135[0] != 6 )
LABEL_96:
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v135, 0.3);
          }
          else
          {
            *(_QWORD *)&v127[48] = *(_QWORD *)&__dst[3];
            *(_OWORD *)&v127[32] = __dst[2];
            *(_OWORD *)&v127[16] = __dst[1];
            *(_OWORD *)v127 = __dst[0];
            *(_OWORD *)&v148[16] = *(_OWORD *)&v154[16];
            *(_OWORD *)v148 = *(_OWORD *)v154;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              v135,
              v127,
              v148);
          }
LABEL_119:
          _$LT$reqwest..blocking..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::hcdeb91c9f4bc265f(
            v127,
            0.3,
            a6);
          *(_QWORD *)&v127[936] = 30;
          *(_DWORD *)&v127[944] = 0;
          memcpy(__dst, v127, 0x3B8u);
          v9 = v151;
          reqwest::blocking::client::ClientBuilder::build::h8f43bce474d3a935(v135, __dst);
          if ( *(_DWORD *)&v135[16] == 1000000001 )
          {
            v155.i64[0] = *(_QWORD *)v135;
            *(_QWORD *)&__dst[0] = &v155;
            *((_QWORD *)&__dst[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v127, &unk_1017C2D1B, __dst);
            core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v155.i64[0]);
            v115 = *(_OWORD *)v127;
            *(_OWORD *)v154 = *(_OWORD *)v127;
            *(_QWORD *)&v154[16] = *(_QWORD *)&v127[16];
            v9[3] = *(_QWORD *)&v127[16];
            *(_OWORD *)(v9 + 1) = v115;
            *v9 = 1;
            goto LABEL_130;
          }
          v145 = *(volatile signed __int64 **)v135;
          v146 = *(_QWORD *)&v135[8];
          v147 = *(_QWORD *)&v135[16];
          v82 = 5.377940751268117e-299;
          memset(__dst, 2, 24);
          reqwest::blocking::client::Client::request::h10ce84dee71472ae(v127);
          reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__dst, v127, 0);
          reqwest::blocking::request::RequestBuilder::json::h6afc03ea6fb18200(v135, __dst);
          if ( v95 != 6
            || *(_DWORD *)v94 ^ 0x616C6C6F | *(unsigned __int16 *)(v94 + 4) ^ 0x616D
            || (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v140[4], v140[5]), v116) )
          {
            memcpy(v127, v135, 0x148u);
            *(_QWORD *)&v117 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v140[4], v140[5]);
            *(_OWORD *)v148 = v117;
            *(_QWORD *)&__dst[0] = v148;
            *((_QWORD *)&__dst[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v129, &unk_1017B931C, __dst);
            reqwest::blocking::request::RequestBuilder::header_sensitive::hf40612ea765502d2(__dst, v127);
            memcpy(v135, __dst, sizeof(v135));
          }
          memcpy(v127, v135, 0x148u);
          reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(__dst, v127);
          v9 = v151;
          if ( *(_QWORD *)&__dst[0] == 3 )
          {
            v141[0] = *((_QWORD *)&__dst[0] + 1);
            *(_QWORD *)&v152 = v141;
            *((_QWORD *)&v152 + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v127, (char *)&loc_1017C2E58 + 2, &v152);
            core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v141[0]);
LABEL_127:
            v118 = *(_OWORD *)v127;
            v143 = *(_OWORD *)v127;
            *(_QWORD *)&v144 = *(_QWORD *)&v127[16];
            v9[3] = *(_QWORD *)&v127[16];
            *(_OWORD *)(v9 + 1) = v118;
            *v9 = 1;
LABEL_128:
            if ( !_InterlockedDecrement64(v145) )
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v145);
            goto LABEL_130;
          }
          *(__int128 *)((char *)v155.i128 + 8) = __dst[1];
          v155.i64[0] = *((_QWORD *)&__dst[0] + 1);
          qmemcpy(v148, &__dst[2], sizeof(v148));
          memcpy(v154, (char *)&__dst[6] + 10, sizeof(v154));
          *(_QWORD *)&v144 = *((_QWORD *)&__dst[1] + 1);
          v149 = v155.i128[0];
          v150 = *((_QWORD *)&__dst[1] + 1);
          if ( (unsigned __int16)(WORD4(__dst[6]) - 200) >= 0x64u )
          {
            LOWORD(v143) = WORD4(__dst[6]);
            *(_QWORD *)v127 = *(_QWORD *)&__dst[0];
            *(_OWORD *)&v127[8] = v149;
            *(_QWORD *)&v127[24] = v150;
            qmemcpy(&v127[32], v148, 0x48u);
            *(_WORD *)&v127[104] = WORD4(__dst[6]);
            memcpy(&v127[106], v154, 0x46u);
            reqwest::blocking::response::Response::text::h6135e3e5df4ac470(__dst, v127);
            v9 = v151;
            if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
            {
              v155.i64[0] = 0;
              *(__int128 *)((char *)v155.i128 + 8) = 1u;
              core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(*((_QWORD *)&__dst[0] + 1));
            }
            else
            {
              v155.i64[2] = *(_QWORD *)&__dst[1];
              v155.i128[0] = __dst[0];
            }
            *(_QWORD *)v127 = &v143;
            *(_QWORD *)&v127[8] = _$LT$http..status..StatusCode$u20$as$u20$core..fmt..Display$GT$::fmt::h9532ff36c27bd9e7;
            *(_QWORD *)&v127[16] = &v155;
            *(_QWORD *)&v127[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C2DF1, v127);
            v9[3] = *(_QWORD *)&__dst[1];
            *(_OWORD *)(v9 + 1) = __dst[0];
            *v9 = 1;
            if ( v155.i64[0] )
              v82 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155.i64[1], v155.i64[0], 1);
            goto LABEL_128;
          }
          *(_QWORD *)v127 = *(_QWORD *)&__dst[0];
          *(_OWORD *)&v127[8] = v149;
          *(_QWORD *)&v127[24] = v150;
          qmemcpy(&v127[32], v148, 0x48u);
          *(_WORD *)&v127[104] = WORD4(__dst[6]);
          memcpy(&v127[106], v154, 0x46u);
          reqwest::blocking::response::Response::json::h27122b37760ec0f1(__dst, v127);
          v9 = v151;
          if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
          {
            v142 = *((_QWORD *)&__dst[0] + 1);
            v141[0] = &v142;
            v141[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v127, &unk_1017C2E3D, v141);
            core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v142);
            goto LABEL_127;
          }
          v119 = *(_QWORD *)&__dst[1];
          v120 = *((_QWORD *)&__dst[0] + 1);
          v152 = __dst[0];
          v153 = *(_QWORD *)&__dst[1];
          if ( *(_QWORD *)&__dst[1] && **((_QWORD **)&__dst[0] + 1) != 0x8000000000000000LL )
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              v127,
              *((_QWORD *)&__dst[0] + 1));
            *(_QWORD *)&__dst[1] = *(_QWORD *)&v127[16];
            __dst[0] = *(_OWORD *)v127;
            codexmate_lib::core::voice::llm::strip_think_tags::hafb183b43a34c569((size_t *)v127, __dst);
            v124 = v151;
            v151[3] = *(_QWORD *)&v127[16];
            *(_OWORD *)(v124 + 1) = *(_OWORD *)v127;
            *v124 = 0;
          }
          else
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v127);
            v121 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1);
            if ( !v121 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27);
            qmemcpy(v121, "LLM returned empty response", 27);
            v122 = v151;
            v151[1] = 27;
            v122[2] = v121;
            v122[3] = 27;
            *v122 = 1;
            if ( !v119 )
            {
LABEL_143:
              if ( (_QWORD)v152 )
                v82 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, 24 * v152, 8);
              v123 = _InterlockedDecrement64(v145);
              v9 = v151;
              if ( !v123 )
                alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v145);
LABEL_130:
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v133, v82);
              if ( v136 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v137, v136, 1);
              if ( v130[0] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130[1], v130[0], 1);
              return v9;
            }
          }
          v125 = (_QWORD *)(v120 + 8);
          do
          {
            v126 = *(v125 - 1);
            if ( 2 * v126 )
              v82 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v125, v126, 1);
            v125 += 3;
            --v119;
          }
          while ( v119 );
          goto LABEL_143;
        default:
          goto LABEL_119;
      }
    }
    if ( *(_QWORD *)v127 )
      a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v127[8], *(_QWORD *)v127, 1);
    codexmate_lib::core::voice::llm::call_claude::h96d0297c06a28d95(a1, a2, __src, a4, a5, a6);
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2);
    v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1);
    if ( !v31 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24);
    qmemcpy(v31, "LLM config is incomplete", 24);
    a1[1] = 24;
    a1[2] = v31;
    a1[3] = 24;
    *a1 = 1;
  }
  return v9;
}
