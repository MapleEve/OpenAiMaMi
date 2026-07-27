// __ZN13codexmate_lib8platform5paths10CodexPaths36runtime_state_db_candidates_for_home @ 0x100543190 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::runtime_state_db_candidates_for_home::h1661ca7d95ec4c4d(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r13
  volatile signed __int64 **v4; // r14
  _BYTE *v5; // r15
  __m128i *v6; // r13
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  char v10; // al
  __m128i si128; // xmm0
  signed __int64 epi64; // rax
  __m128i *v13; // rbx
  _BYTE *v14; // r13
  volatile signed __int64 **v15; // r15
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rsi
  void *v19; // rbx
  size_t v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  int v24; // eax
  _BOOL8 v25; // rdx
  unsigned __int64 v26; // rcx
  _BYTE *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  void *v32; // rsi
  size_t v33; // rdx
  void *v34; // r8
  __int64 v35; // r9
  int v36; // eax
  char v37; // al
  bool v38; // zf
  __int64 v39; // rdi
  unsigned int v40; // eax
  int v41; // eax
  unsigned int v42; // kr00_4
  unsigned int v43; // r8d
  bool v44; // cf
  _BYTE *v45; // r13
  volatile signed __int64 **v46; // r15
  unsigned __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rbx
  _QWORD *v53; // r12
  __int64 result; // rax
  __int64 v55; // r14
  __int64 v56; // r15
  __m128i *v57; // [rsp+0h] [rbp-1290h] BYREF
  _QWORD *v58; // [rsp+8h] [rbp-1288h]
  __int64 v59; // [rsp+10h] [rbp-1280h]
  __int64 v60; // [rsp+268h] [rbp-1028h]
  __int64 v61; // [rsp+428h] [rbp-E68h]
  volatile signed __int64 *v62; // [rsp+850h] [rbp-A40h] BYREF
  char v63; // [rsp+858h] [rbp-A38h]
  _QWORD __dst[130]; // [rsp+860h] [rbp-A30h] BYREF
  __m128i v65; // [rsp+C70h] [rbp-620h] BYREF
  _BYTE v66[1056]; // [rsp+C80h] [rbp-610h] BYREF
  _QWORD v67[2]; // [rsp+10A0h] [rbp-1F0h] BYREF
  char v68; // [rsp+10B0h] [rbp-1E0h]
  __int64 v69; // [rsp+10B1h] [rbp-1DFh]
  __int64 v70; // [rsp+10B9h] [rbp-1D7h]
  __int64 v71; // [rsp+10C1h] [rbp-1CFh]
  _BYTE v72[15]; // [rsp+10C9h] [rbp-1C7h]
  __int16 v73; // [rsp+10D8h] [rbp-1B8h]
  char v74; // [rsp+10DAh] [rbp-1B6h]
  void *__s2; // [rsp+10E0h] [rbp-1B0h] BYREF
  __int64 v76; // [rsp+10E8h] [rbp-1A8h]
  char v77; // [rsp+10F0h] [rbp-1A0h]
  __int64 v78; // [rsp+10F1h] [rbp-19Fh]
  __int64 v79; // [rsp+10F9h] [rbp-197h]
  __int64 v80; // [rsp+1101h] [rbp-18Fh]
  _BYTE v81[15]; // [rsp+1109h] [rbp-187h]
  __int16 v82; // [rsp+1118h] [rbp-178h]
  char v83; // [rsp+111Ah] [rbp-176h]
  void *v84; // [rsp+1120h] [rbp-170h] BYREF
  size_t __n; // [rsp+1128h] [rbp-168h]
  char v86; // [rsp+1130h] [rbp-160h]
  __int64 v87; // [rsp+1131h] [rbp-15Fh]
  __int64 v88; // [rsp+1139h] [rbp-157h]
  __int64 v89; // [rsp+1141h] [rbp-14Fh]
  _BYTE v90[15]; // [rsp+1149h] [rbp-147h]
  __int16 v91; // [rsp+1158h] [rbp-138h]
  char v92; // [rsp+115Ah] [rbp-136h]
  _QWORD *v93; // [rsp+1160h] [rbp-130h]
  _QWORD *v94; // [rsp+1168h] [rbp-128h]
  __m128i *v95; // [rsp+1170h] [rbp-120h]
  unsigned __int64 v96; // [rsp+1178h] [rbp-118h]
  __int64 v97; // [rsp+1180h] [rbp-110h] BYREF
  void *v98; // [rsp+1188h] [rbp-108h]
  size_t v99; // [rsp+1190h] [rbp-100h]
  _QWORD *v100; // [rsp+1198h] [rbp-F8h]
  __m128i *v101; // [rsp+11A0h] [rbp-F0h]
  __int64 v102; // [rsp+11A8h] [rbp-E8h]
  void *v103; // [rsp+11B0h] [rbp-E0h]
  __int64 v104; // [rsp+11B8h] [rbp-D8h]
  size_t v105; // [rsp+11C0h] [rbp-D0h]
  __int64 v106; // [rsp+11C8h] [rbp-C8h]
  __int64 v107; // [rsp+11D0h] [rbp-C0h]
  __int64 v108; // [rsp+11D8h] [rbp-B8h]
  _BYTE v109[15]; // [rsp+11E0h] [rbp-B0h]
  __int64 v110; // [rsp+11F0h] [rbp-A0h]
  __int64 v111; // [rsp+11F8h] [rbp-98h]
  __int64 v112; // [rsp+1200h] [rbp-90h]
  _BYTE v113[15]; // [rsp+1208h] [rbp-88h]
  _QWORD *v114; // [rsp+1218h] [rbp-78h]
  __int64 *v115; // [rsp+1220h] [rbp-70h]
  void *__s1; // [rsp+1228h] [rbp-68h]
  unsigned __int64 v117; // [rsp+1230h] [rbp-60h]
  __int64 v118; // [rsp+1238h] [rbp-58h] BYREF
  __int64 v119; // [rsp+1240h] [rbp-50h]
  unsigned __int64 v120; // [rsp+1248h] [rbp-48h]
  __m128i v121[4]; // [rsp+1250h] [rbp-40h] BYREF

  v60 = 0; /*0x1005431a4*/
  v118 = 0; /*0x1005431b6*/
  v119 = 8; /*0x1005431be*/
  v120 = 0; /*0x1005431c6*/
  codexmate_lib::platform::paths::CodexPaths::state_db_search_dirs::he3f621873ba76902(&v57, a2, a3); /*0x1005431d5*/
  v100 = a1; /*0x1005431da*/
  v3 = v58; /*0x1005431e8*/
  v93 = v58; /*0x100543200*/
  v94 = v58; /*0x100543207*/
  v101 = v57; /*0x10054320e*/
  v95 = v57; /*0x100543215*/
  v117 = (unsigned __int64)&v58[4 * v59]; /*0x10054321c*/
  v96 = v117; /*0x100543220*/
  v115 = v58; /*0x100543227*/
  if ( v59 ) /*0x10054322e*/
  {
    v4 = &v62; /*0x100543234*/
    v5 = &v66[8]; /*0x10054323b*/
    v6 = &v65; /*0x100543242*/
    v7 = v115; /*0x100543249*/
    while ( 1 ) /*0x10054326d*/
    {
      v114 = v7 + 4; /*0x10054326d*/
      v94 = v7 + 4; /*0x100543271*/
      v8 = *v7; /*0x100543278*/
      if ( __OFSUB__(-*v7, 1) ) /*0x100543281*/
      {
        v3 = v114; /*0x1005438d1*/
        break; /*0x1005438d1*/
      }
      v9 = v7[1]; /*0x100543287*/
      std::sys::fs::read_dir::h768dda1fe4336014(&v57, v9, v7[2]); /*0x100543299*/
      v10 = (char)v58; /*0x10054329e*/
      v65.i64[0] = (__int64)v57; /*0x1005432ac*/
      v65.i8[8] = (char)v58; /*0x1005432b3*/
      if ( v8 ) /*0x1005432bc*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x1005432c9*/
        v10 = v65.i8[8]; /*0x1005432ce*/
      }
      if ( v10 == 2 ) /*0x1005432d7*/
      {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(v6); /*0x100543253*/
        goto LABEL_4; /*0x100543253*/
      }
      v57 = nullptr; /*0x1005432e4*/
      v61 = 0; /*0x1005432ef*/
      v62 = (volatile signed __int64 *)v65.i64[0]; /*0x1005432fa*/
      v63 = v10; /*0x100543301*/
      while ( 1 ) /*0x100543346*/
      {
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(v6); /*0x100543346*/
        if ( !v65.i64[0] ) /*0x100543353*/
          break; /*0x100543353*/
        v121[0] = _mm_loadu_si128((const __m128i *)&v65.u64[1]); /*0x10054335d*/
        memcpy(__dst, v5, sizeof(__dst)); /*0x10054336d*/
LABEL_18:
        si128 = _mm_load_si128(v121); /*0x1005433d2*/
        if ( si128.i64[0] ) /*0x1005433df*/
        {
          v121[0] = si128; /*0x100543449*/
          memcpy(v66, __dst, 0x410u); /*0x10054344e*/
          v65 = _mm_load_si128(v121); /*0x100543458*/
          std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v97, v6); /*0x10054346a*/
          v19 = v98; /*0x10054346f*/
          v20 = v99; /*0x100543480*/
          if ( !(unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b(v98, v99) ) /*0x100543483*/
            goto LABEL_31; /*0x100543483*/
          v21 = std::path::Path::file_name::hf6c2daad91e50ebf(v19, v20); /*0x100543492*/
          if ( !v21 ) /*0x10054349a*/
            goto LABEL_31; /*0x10054349a*/
          core::str::converts::from_utf8::hb32deb9559450f6e(__dst, v21, v22); /*0x1005434a6*/
          if ( LODWORD(__dst[0]) == 1 ) /*0x1005434b2*/
            goto LABEL_31; /*0x1005434b2*/
          if ( __dst[2] < 6u ) /*0x1005434bf*/
            goto LABEL_31; /*0x1005434bf*/
          if ( *(_DWORD *)__dst[1] ^ 0x74617473 | *(unsigned __int16 *)(__dst[1] + 4LL) ^ 0x5F65 ) /*0x1005434db*/
            goto LABEL_31; /*0x1005434db*/
          if ( (unsigned __int64)(__dst[2] - 6LL) < 7 ) /*0x1005434e7*/
            goto LABEL_31; /*0x1005434e7*/
          v23 = (_BYTE *)(__dst[1] + 6LL); /*0x1005434e9*/
          if ( *(_DWORD *)(__dst[1] + 6LL + __dst[2] - 13) ^ 0x6C71732E /*0x100543552*/
             | *(_DWORD *)(__dst[1] + 6LL + __dst[2] - 10) ^ 0x6574696C
            || __dst[2] == 13 )
          {
            goto LABEL_31; /*0x100543552*/
          }
          if ( __dst[2] == 14 ) /*0x100543558*/
          {
            v24 = (unsigned __int8)*v23; /*0x10054355a*/
            if ( v24 == 43 || v24 == 45 ) /*0x100543565*/
              goto LABEL_31; /*0x100543565*/
          }
          else
          {
            LOBYTE(v24) = *v23; /*0x100543569*/
          }
          v25 = (_BYTE)v24 == 43; /*0x100543574*/
          v26 = __dst[2] - 13LL - v25; /*0x100543577*/
          v27 = &v23[v25]; /*0x10054357a*/
          if ( v26 >= 9 ) /*0x100543581*/
          {
            v39 = 0; /*0x100543818*/
            v40 = 0; /*0x10054381a*/
            while ( v26 != v39 ) /*0x10054381f*/
            {
              v42 = v40; /*0x10054382a*/
              v41 = 10 * v40; /*0x10054382a*/
              if ( is_mul_ok(0xAu, v42) ) /*0x10054382a*/
              {
                v43 = (unsigned __int8)v27[v39] - 48; /*0x100543837*/
                v44 = __CFADD__(v43, v41); /*0x10054383b*/
                v40 = v43 + v41; /*0x10054383b*/
                if ( v43 <= 9 ) /*0x100543845*/
                {
                  ++v39; /*0x10054384b*/
                  if ( !v44 ) /*0x100543850*/
                    continue; /*0x100543850*/
                }
              }
              goto LABEL_31; /*0x100543850*/
            }
          }
          else if ( v26 ) /*0x10054358a*/
          {
            v28 = 0; /*0x10054358c*/
            while ( (unsigned __int8)(v27[v28] - 48) <= 9u ) /*0x100543598*/
            {
              if ( v26 == ++v28 ) /*0x1005435a4*/
                goto LABEL_48; /*0x1005435a4*/
            }
LABEL_31:
            if ( v97 ) /*0x100543511*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v97, 1); /*0x10054351b*/
            if ( _InterlockedDecrement64((volatile signed __int64 *)v65.i64[0]) ) /*0x100543527*/
              goto LABEL_35; /*0x10054352b*/
            goto LABEL_34; /*0x10054352b*/
          }
LABEL_48:
          v29 = v119; /*0x1005435a6*/
          v30 = 24 * v120; /*0x1005435b2*/
          while ( v30 ) /*0x1005435b9*/
          {
            v102 = v30; /*0x1005435bf*/
            v31 = *(_QWORD *)(v29 + 8); /*0x1005435c6*/
            v121[0].i64[0] = v29; /*0x1005435ca*/
            std::path::Path::components::he8b0f71a48373be5(&v84, v31, *(_QWORD *)(v29 + 16)); /*0x1005435d9*/
            std::path::Path::components::he8b0f71a48373be5(&__s2, v19, v20); /*0x1005435eb*/
            v32 = v84; /*0x1005435f0*/
            v33 = __n; /*0x1005435f7*/
            v34 = __s2; /*0x1005435fe*/
            v35 = v76; /*0x100543605*/
            if ( __n != v76 ) /*0x10054360f*/
              goto LABEL_89; /*0x10054360f*/
            if ( (_BYTE)v91 != (_BYTE)v82 ) /*0x10054361e*/
              goto LABEL_89; /*0x10054361e*/
            if ( HIBYTE(v91) != 2 ) /*0x100543627*/
              goto LABEL_89; /*0x100543627*/
            if ( HIBYTE(v82) != 2 ) /*0x100543630*/
              goto LABEL_89; /*0x100543630*/
            __s1 = v84; /*0x100543632*/
            v103 = __s2; /*0x10054363d*/
            v104 = v76; /*0x100543644*/
            v105 = __n; /*0x10054364b*/
            v36 = memcmp(v84, __s2, __n); /*0x100543652*/
            v33 = v105; /*0x100543657*/
            v32 = __s1; /*0x10054365e*/
            v35 = v104; /*0x100543662*/
            v34 = v103; /*0x100543669*/
            if ( v36 ) /*0x100543672*/
            {
LABEL_89:
              if ( v86 != 6 ) /*0x100543681*/
              {
                *(_QWORD *)&v113[7] = *(_QWORD *)&v90[7]; /*0x10054368e*/
                *(_QWORD *)v113 = *(_QWORD *)v90; /*0x100543699*/
                v112 = v89; /*0x1005436a4*/
                v111 = v88; /*0x1005436b2*/
                v110 = v87; /*0x1005436b9*/
              }
              v67[0] = v32; /*0x1005436cf*/
              v67[1] = v33; /*0x1005436d6*/
              v68 = v86; /*0x1005436dd*/
              *(_QWORD *)&v72[7] = *(_QWORD *)&v113[7]; /*0x1005436f1*/
              *(_QWORD *)v72 = *(_QWORD *)v113; /*0x1005436fc*/
              v71 = v112; /*0x100543707*/
              v70 = v111; /*0x100543719*/
              v69 = v110; /*0x10054371d*/
              v73 = v91; /*0x100543720*/
              v74 = v92; /*0x100543728*/
              if ( v77 != 6 ) /*0x100543737*/
              {
                *(_QWORD *)&v109[7] = *(_QWORD *)&v81[7]; /*0x100543744*/
                *(_QWORD *)v109 = *(_QWORD *)v81; /*0x10054374f*/
                v108 = v80; /*0x10054375a*/
                v107 = v79; /*0x100543768*/
                v106 = v78; /*0x10054376f*/
              }
              __dst[0] = v34; /*0x100543784*/
              __dst[1] = v35; /*0x10054378b*/
              LOBYTE(__dst[2]) = v77; /*0x100543792*/
              __dst[6] = *(_QWORD *)&v109[7]; /*0x1005437a6*/
              *(_QWORD *)((char *)&__dst[5] + 1) = *(_QWORD *)v109; /*0x1005437b1*/
              *(_QWORD *)((char *)&__dst[4] + 1) = v108; /*0x1005437bc*/
              *(_QWORD *)((char *)&__dst[3] + 1) = v107; /*0x1005437ce*/
              *(_QWORD *)((char *)&__dst[2] + 1) = v106; /*0x1005437d2*/
              LOWORD(__dst[7]) = v82; /*0x1005437d5*/
              BYTE2(__dst[7]) = v83; /*0x1005437dc*/
              v37 = core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(v67, __dst); /*0x1005437f0*/
              v29 = v121[0].i64[0] + 24; /*0x1005437f9*/
              v38 = v37 == 0; /*0x100543808*/
              v30 = v102 - 24; /*0x10054380a*/
              if ( v38 ) /*0x10054380d*/
                continue; /*0x10054380d*/
            }
            goto LABEL_31; /*0x10054380d*/
          }
          v45 = v5; /*0x100543857*/
          v46 = v4; /*0x10054385a*/
          v121[0].i64[0] = v97; /*0x100543864*/
          v47 = v120; /*0x100543868*/
          if ( v120 == v118 ) /*0x100543870*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v118); /*0x100543876*/
          v48 = v119; /*0x10054387b*/
          v49 = 3 * v47; /*0x10054387f*/
          *(_QWORD *)(v119 + 8 * v49) = v121[0].i64[0]; /*0x100543887*/
          *(_QWORD *)(v48 + 8 * v49 + 8) = v19; /*0x10054388b*/
          *(_QWORD *)(v48 + 8 * v49 + 16) = v20; /*0x100543890*/
          v120 = v47 + 1; /*0x100543898*/
          v4 = v46; /*0x10054389c*/
          v5 = v45; /*0x10054389f*/
          v6 = &v65; /*0x1005438a2*/
          if ( _InterlockedDecrement64((volatile signed __int64 *)v65.i64[0]) ) /*0x1005438b0*/
            goto LABEL_35; /*0x1005438b4*/
LABEL_34:
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v6); /*0x10054352d*/
LABEL_35:
          if ( v63 == 2 ) /*0x100543543*/
            goto LABEL_71; /*0x100543543*/
        }
        else
        {
          epi64 = _mm_extract_epi64(si128, 1); /*0x1005433e1*/
          if ( (epi64 & 3) == 1 ) /*0x1005433f0*/
          {
            v13 = v6; /*0x1005433f6*/
            v14 = v5; /*0x1005433f9*/
            v15 = v4; /*0x1005433fc*/
            v121[0].i64[0] = epi64 - 1; /*0x100543403*/
            v16 = *(_QWORD *)(epi64 - 1); /*0x100543407*/
            v17 = *(_QWORD *)(epi64 + 7); /*0x10054340b*/
            if ( *(_QWORD *)v17 ) /*0x10054340f*/
              (*(void (__fastcall **)(__int64))v17)(v16); /*0x10054341a*/
            v18 = *(_QWORD *)(v17 + 8); /*0x10054341c*/
            if ( v18 ) /*0x100543423*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16)); /*0x100543430*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121[0].i64[0], 24, 8); /*0x10054331e*/
            v4 = v15; /*0x100543323*/
            v5 = v14; /*0x100543326*/
            v6 = v13; /*0x100543329*/
          }
          if ( v63 == 2 ) /*0x10054333a*/
            goto LABEL_71; /*0x10054333a*/
        }
      }
      if ( v63 != 2 && !_InterlockedDecrement64(v62) ) /*0x100543390*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v4); /*0x100543399*/
      v63 = 2; /*0x10054339e*/
      v121[0] = _mm_loadu_si128((const __m128i *)&v65.u64[1]); /*0x1005433ad*/
      memcpy(__dst, v5, sizeof(__dst)); /*0x1005433c4*/
      if ( (v65.i8[0] & 1) != 0 ) /*0x1005433cc*/
        goto LABEL_18; /*0x1005433cc*/
LABEL_71:
      core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(&v57); /*0x1005438c0*/
LABEL_4:
      v7 = v114; /*0x100543258*/
      if ( v114 == (_QWORD *)v117 ) /*0x100543263*/
        goto LABEL_78; /*0x100543263*/
    }
  }
  v117 -= (unsigned __int64)v3; /*0x1005438d5*/
  if ( v117 ) /*0x1005438d9*/
  {
    v117 >>= 5; /*0x1005438db*/
    v50 = v3 + 1; /*0x1005438e0*/
    do /*0x1005438f8*/
    {
      v51 = *(v50 - 1); /*0x1005438fa*/
      if ( v51 ) /*0x100543901*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v50, v51, 1); /*0x10054390c*/
      v50 += 4; /*0x1005438f0*/
      --v117; /*0x1005438f4*/
    }
    while ( v117 ); /*0x1005438f8*/
  }
LABEL_78:
  if ( v101 ) /*0x10054391d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, 32LL * (_QWORD)v101, 8); /*0x10054392c*/
  v52 = v119; /*0x100543931*/
  v57 = &v65; /*0x100543940*/
  v53 = v100; /*0x10054394b*/
  if ( v120 >= 2 ) /*0x100543952*/
  {
    if ( v120 >= 0x15 ) /*0x100543984*/
    {
      core::slice::sort::stable::driftsort_main::h1d3960af3ec988f6(v119, v120, &v57); /*0x1005439b5*/
    }
    else
    {
      v55 = 24 * v120; /*0x10054398a*/
      v56 = 24; /*0x10054398e*/
      do /*0x1005439a7*/
      {
        core::slice::sort::shared::smallsort::insert_tail::hb23f36382a855491(v52, v52 + v56); /*0x10054399b*/
        v56 += 24; /*0x1005439a0*/
      }
      while ( v55 != v56 ); /*0x1005439a7*/
    }
  }
  v53[2] = v120; /*0x100543958*/
  result = v118; /*0x10054395d*/
  v53[1] = v119; /*0x100543965*/
  *v53 = result; /*0x10054396a*/
  return result; /*0x10054396e*/
}