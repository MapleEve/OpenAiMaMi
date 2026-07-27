// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream17handle_text_delta @ 0x100a977c0 | 基线 same-set
// [FULL IDA decompiler]

__int64 __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_text_delta::h49a6433a1b443499(
        __int64 a1,
        void *a2,
        size_t a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  bool v8; // of
  char **v9; // rbx
  char ****v10; // r15
  size_t v11; // r14
  __int64 v12; // rbx
  void *v13; // rdi
  void *v14; // rsi
  __int64 v15; // r14
  _DWORD *v16; // rax
  void *v17; // rax
  char ***v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  char ***v21; // rdx
  char *v22; // rdx
  char ****v23; // rsi
  void *v24; // rax
  __int64 v25; // rax
  char ***v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  char ***v29; // rdx
  char *v30; // rdx
  char ****v31; // rsi
  _DWORD *v32; // rax
  signed __int64 v33; // r14
  __int64 v34; // r13
  const void *v35; // r15
  __int64 v36; // rax
  __int64 v37; // r12
  char **v38; // rsi
  char ****v39; // rdi
  __int64 v40; // r14
  _DWORD *v41; // rax
  void *v42; // rax
  char ***v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  char ***v46; // rdx
  char *v47; // rdx
  char ****v48; // rsi
  void *v49; // rax
  char ***v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rcx
  char ***v53; // rdx
  char *v54; // rdx
  char ****v55; // rsi
  _DWORD *v56; // rax
  _DWORD *v57; // rax
  _DWORD *v58; // rax
  char ***v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  char ***v62; // rdx
  char *v63; // rdx
  char ****v64; // rsi
  _WORD *v65; // rax
  size_t v66; // rdx
  __int64 v67; // r13
  _QWORD *v68; // rbx
  __int64 v69; // rax
  __int64 v70; // r14
  char ***v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rcx
  char ***v74; // rdx
  char *v75; // rdx
  char ****v76; // rsi
  void *v77; // rax
  char ***v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rcx
  char ***v81; // rdx
  char *v82; // rdx
  char ****v83; // rsi
  __int64 v84; // rax
  size_t v85; // r14
  __int64 v86; // r15
  __int64 v87; // rax
  __int64 v88; // r14
  size_t v89; // rbx
  char ***v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rcx
  char ***v93; // rdx
  char *v94; // rdx
  char ****v95; // rsi
  __int64 v96; // rax
  void *v97; // rax
  char ***v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rcx
  char ***v101; // rdx
  char *v102; // rdx
  char ****v103; // rsi
  _DWORD *v104; // rax
  __int64 v105; // rax
  char ***v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rcx
  char ***v109; // rdx
  char *v110; // rdx
  char ****v111; // rsi
  _DWORD *v112; // rax
  __int64 v113; // rax
  __int64 v114; // rcx
  char ***v115; // rdx
  char *v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rcx
  char ***v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // r9
  void *v122; // rbx
  size_t v123; // r14
  __int64 v124; // r15
  size_t v125; // r15
  char ***v126; // rsi
  __int64 v127; // r14
  _DWORD *v128; // rax
  void *v129; // rax
  char ***v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rcx
  char ***v133; // rdx
  char *v134; // rdx
  char ****v135; // rsi
  void *v136; // rax
  char ***v137; // rdi
  __int64 v138; // rax
  __int64 v139; // rcx
  char ***v140; // rdx
  char *v141; // rdx
  char ****v142; // rsi
  __int64 v143; // rbx
  _DWORD *v144; // rax
  size_t v145; // rdx
  size_t v146; // rbx
  __int64 v147; // rax
  size_t v148; // r14
  char ***v149; // rdi
  __int64 v150; // rax
  __int64 v151; // rcx
  char ***v152; // rdx
  char *v153; // rdx
  char ****v154; // rsi
  void *v155; // rax
  char ***v156; // rdi
  __int64 v157; // rax
  __int64 v158; // rcx
  char ***v159; // rdx
  char *v160; // rdx
  char ****v161; // rsi
  _DWORD *v162; // rax
  __int64 v163; // r13
  _DWORD *v164; // rax
  void *v165; // rax
  char ***v166; // rdi
  __int64 v167; // rax
  __int64 v168; // rcx
  char ***v169; // rdx
  char *v170; // rdx
  char ****v171; // rsi
  _DWORD *v172; // rax
  char ***v173; // rdi
  __int64 v174; // rax
  __int64 v175; // rcx
  char ***v176; // rdx
  char *v177; // rdx
  char ****v178; // rsi
  void *v179; // rax
  __int64 v180; // rax
  __int64 v181; // rcx
  char ***v182; // rdx
  char *v183; // rdx
  __int64 v184; // rax
  __int64 v185; // rcx
  char ***v186; // rdx
  __int64 v187; // rdx
  __int64 v188; // r9
  void *v189; // rbx
  size_t v190; // r14
  __int64 v191; // rdi
  char ***v192; // rcx
  size_t v193; // rbx
  __int64 v194; // rax
  __int64 v195; // rcx
  char ***v196; // rdx
  char *v197; // rdx
  __int64 v198; // r9
  void *v199; // rbx
  size_t v200; // r14
  __int64 v201; // r15
  __int64 v203; // [rsp+8h] [rbp-1B8h]
  __int64 v204; // [rsp+10h] [rbp-1B0h] BYREF
  _DWORD *v205; // [rsp+18h] [rbp-1A8h]
  __int64 v206; // [rsp+20h] [rbp-1A0h]
  void *__src; // [rsp+28h] [rbp-198h]
  __int64 v208; // [rsp+30h] [rbp-190h]
  size_t v209; // [rsp+38h] [rbp-188h]
  void *v210; // [rsp+40h] [rbp-180h]
  _QWORD *v211; // [rsp+48h] [rbp-178h]
  _DWORD *v212; // [rsp+50h] [rbp-170h] BYREF
  __int64 v213; // [rsp+58h] [rbp-168h]
  __int64 v214; // [rsp+60h] [rbp-160h]
  __int64 v215; // [rsp+68h] [rbp-158h] BYREF
  unsigned __int64 v216; // [rsp+70h] [rbp-150h]
  __int64 v217; // [rsp+78h] [rbp-148h]
  size_t __n; // [rsp+80h] [rbp-140h]
  __int64 v219; // [rsp+88h] [rbp-138h] BYREF
  _DWORD *v220; // [rsp+90h] [rbp-130h]
  __int64 v221; // [rsp+98h] [rbp-128h]
  __int64 v222; // [rsp+A0h] [rbp-120h] BYREF
  _DWORD *v223; // [rsp+A8h] [rbp-118h]
  __int64 v224; // [rsp+B0h] [rbp-110h]
  __int64 v225; // [rsp+B8h] [rbp-108h]
  char ***v226; // [rsp+C0h] [rbp-100h] BYREF
  __int64 (__fastcall **v227)(); // [rsp+C8h] [rbp-F8h]
  size_t v228; // [rsp+D0h] [rbp-F0h]
  __int64 (__fastcall *v229)(); // [rsp+D8h] [rbp-E8h]
  __int64 v230; // [rsp+E0h] [rbp-E0h]
  __int64 v231; // [rsp+E8h] [rbp-D8h]
  __int64 v232; // [rsp+F0h] [rbp-D0h]
  char ***v233; // [rsp+F8h] [rbp-C8h]
  char *v234; // [rsp+100h] [rbp-C0h] BYREF
  __int64 v235; // [rsp+108h] [rbp-B8h]
  __int64 v236; // [rsp+110h] [rbp-B0h]
  __int64 v237; // [rsp+118h] [rbp-A8h]
  char **v238; // [rsp+120h] [rbp-A0h] BYREF
  __int64 v239; // [rsp+128h] [rbp-98h]
  unsigned __int64 v240; // [rsp+130h] [rbp-90h]
  __int64 v241; // [rsp+138h] [rbp-88h]
  __int64 v242; // [rsp+140h] [rbp-80h]
  __int64 v243; // [rsp+148h] [rbp-78h]
  __int64 v244; // [rsp+150h] [rbp-70h]
  char ***v245; // [rsp+158h] [rbp-68h] BYREF
  void *v246; // [rsp+160h] [rbp-60h]
  size_t v247; // [rsp+168h] [rbp-58h]
  __int64 v248; // [rsp+170h] [rbp-50h]
  char *v249; // [rsp+178h] [rbp-48h] BYREF
  __int64 v250; // [rsp+180h] [rbp-40h]
  __int64 v251; // [rsp+188h] [rbp-38h]
  __int64 v252; // [rsp+190h] [rbp-30h]

  __src = a2;
  v8 = __OFSUB__(0, *(_QWORD *)(a1 + 176));
  v209 = a3;
  if ( v8 )
  {
    v208 = *(unsigned int *)(a1 + 424);
    *(_DWORD *)(a1 + 424) = v208 + 1;
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v226);
    v246 = v227;
    v245 = v226;
    v238 = nullptr;
    v239 = 1;
    v240 = 0;
    v228 = 1610612768;
    v226 = &v238;
    v227 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
    if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(
                            &v245,
                            &v226) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        &v234,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v9 = v238;
    v10 = (char ****)v239;
    if ( v240 <= 0x10 )
    {
      if ( v240 != 16 )
LABEL_5:
        core::str::slice_error_fail::h480e51fbd8b15eba(v239, v240, 0, 16, &off_101974268);
    }
    else if ( *(char *)(v239 + 16) < -64 )
    {
      goto LABEL_5;
    }
    v234 = (char *)v239;
    v235 = 16;
    v238 = &v234;
    v239 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    v38 = (char **)&unk_1017C5D19;
    v39 = &v226;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v226, &unk_1017C5D19, &v238);
    if ( v9 )
    {
      v39 = v10;
      v38 = v9;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1);
    }
    v233 = v226;
    v210 = v227;
    __n = v228;
    v215 = 0;
    v217 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, v38);
    v40 = 4;
    v41 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v41 )
      goto LABEL_167;
    *v41 = 1701869940;
    v222 = 4;
    v223 = v41;
    v224 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
    if ( !v42 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
    qmemcpy(v42, "response.output_item.added", 26);
    LOBYTE(v249) = 3;
    v250 = 26;
    v251 = (__int64)v42;
    v252 = 26;
    v43 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v215, &v222);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v44 = v239;
      v45 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v46 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v46;
      *(_QWORD *)(v239 + v45 + 24) = v252;
      *(_QWORD *)(v44 + v45 + 16) = v251;
      v47 = v249;
      v48 = (char ****)v250;
      *(_QWORD *)(v44 + v45 + 8) = v250;
      *(_QWORD *)(v44 + v45) = v47;
      if ( (_BYTE)v245 != 6 )
      {
        v43 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v43 = (char ***)&v245;
      v48 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v48);
    v40 = 12;
    v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v49 )
      goto LABEL_167;
    qmemcpy(v49, "output_index", 12);
    v222 = 12;
    v223 = v49;
    v224 = 12;
    LOBYTE(v249) = 2;
    v250 = 0;
    v251 = v208;
    v50 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v215, &v222);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v51 = v239;
      v52 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v53 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v53;
      *(_QWORD *)(v239 + v52 + 24) = v252;
      *(_QWORD *)(v51 + v52 + 16) = v251;
      v54 = v249;
      v55 = (char ****)v250;
      *(_QWORD *)(v51 + v52 + 8) = v250;
      *(_QWORD *)(v51 + v52) = v54;
      if ( (_BYTE)v245 != 6 )
      {
        v50 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v50 = (char ***)&v245;
      v55 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v50, v55);
    v40 = 4;
    v56 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v56 )
LABEL_167:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v40);
    *v56 = 1835365481;
    v204 = 4;
    v211 = v56;
    v205 = v56;
    v206 = 4;
    v212 = nullptr;
    v214 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v57 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v57 )
      goto LABEL_166;
    *v57 = 1701869940;
    v219 = 4;
    v220 = v57;
    v221 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v58 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v58 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
    *(_DWORD *)((char *)v58 + 3) = 1701273971;
    *v58 = 1936942445;
    LOBYTE(v249) = 3;
    v250 = 7;
    v251 = (__int64)v58;
    v252 = 7;
    v59 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v212, &v219);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v60 = v239;
      v61 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v62 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v62;
      *(_QWORD *)(v239 + v61 + 24) = v252;
      *(_QWORD *)(v60 + v61 + 16) = v251;
      v63 = v249;
      v64 = (char ****)v250;
      *(_QWORD *)(v60 + v61 + 8) = v250;
      *(_QWORD *)(v60 + v61) = v63;
      if ( (_BYTE)v245 != 6 )
      {
        v59 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v59 = (char ***)&v245;
      v64 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, v64);
    v40 = 2;
    v65 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
    if ( !v65 )
      goto LABEL_166;
    *v65 = 25705;
    v219 = 2;
    v220 = v65;
    v221 = 2;
    v66 = __n;
    if ( (__n & 0x8000000000000000LL) != 0LL )
    {
      v67 = 0;
      goto LABEL_49;
    }
    if ( __n )
    {
      v68 = a4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
      v67 = 1;
      v69 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
      v66 = __n;
      if ( !v69 )
LABEL_49:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v67, v66);
      v70 = v69;
      a4 = v68;
    }
    else
    {
      v70 = 1;
    }
    v89 = v66;
    memcpy((void *)v70, v210, v66);
    LOBYTE(v249) = 3;
    v250 = v89;
    v251 = v70;
    v252 = v89;
    v90 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v212, &v219);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v91 = v239;
      v92 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v93 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v93;
      *(_QWORD *)(v239 + v92 + 24) = v252;
      *(_QWORD *)(v91 + v92 + 16) = v251;
      v94 = v249;
      v95 = (char ****)v250;
      *(_QWORD *)(v91 + v92 + 8) = v250;
      *(_QWORD *)(v91 + v92) = v94;
      if ( (_BYTE)v245 != 6 )
      {
        v90 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v90 = (char ***)&v245;
      v95 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v90, v95);
    v40 = 6;
    v96 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v96 )
      goto LABEL_166;
    *(_WORD *)(v96 + 4) = 29557;
    *(_DWORD *)v96 = 1952543859;
    v219 = 6;
    v220 = (_DWORD *)v96;
    v221 = 6;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
    v97 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v97 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
    qmemcpy(v97, "in_progress", 11);
    LOBYTE(v249) = 3;
    v250 = 11;
    v251 = (__int64)v97;
    v252 = 11;
    v98 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v212, &v219);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v99 = v239;
      v100 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v101 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v101;
      *(_QWORD *)(v239 + v100 + 24) = v252;
      *(_QWORD *)(v99 + v100 + 16) = v251;
      v102 = v249;
      v103 = (char ****)v250;
      *(_QWORD *)(v99 + v100 + 8) = v250;
      *(_QWORD *)(v99 + v100) = v102;
      if ( (_BYTE)v245 != 6 )
      {
        v98 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v98 = (char ***)&v245;
      v103 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v98, v103);
    v40 = 4;
    v104 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v104 )
      goto LABEL_166;
    *v104 = 1701605234;
    v219 = 4;
    v220 = v104;
    v221 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v105 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v105 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
    *(_QWORD *)v105 = 0x6E61747369737361LL;
    *(_BYTE *)(v105 + 8) = 116;
    LOBYTE(v249) = 3;
    v250 = 9;
    v251 = v105;
    v252 = 9;
    v106 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v212, &v219);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v107 = v239;
      v108 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v109 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v109;
      *(_QWORD *)(v239 + v108 + 24) = v252;
      *(_QWORD *)(v107 + v108 + 16) = v251;
      v110 = v249;
      v111 = (char ****)v250;
      *(_QWORD *)(v107 + v108 + 8) = v250;
      *(_QWORD *)(v107 + v108) = v110;
      if ( (_BYTE)v245 != 6 )
      {
        v106 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v106 = (char ***)&v245;
      v111 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v106, v111);
    v40 = 7;
    v112 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v112 )
LABEL_166:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v40);
    *(_DWORD *)((char *)v112 + 3) = 1953391988;
    *v112 = 1953394531;
    v219 = 7;
    v220 = v112;
    v221 = 7;
    v250 = 0;
    v251 = 8;
    v252 = 0;
    LOBYTE(v249) = 4;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v212, &v219);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v113 = v239;
      v114 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v115 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v115;
      *(_QWORD *)(v239 + v114 + 24) = v252;
      *(_QWORD *)(v113 + v114 + 16) = v251;
      v116 = v249;
      *(_QWORD *)(v113 + v114 + 8) = v250;
      *(_QWORD *)(v113 + v114) = v116;
      if ( (_BYTE)v245 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    v223 = v212;
    v224 = v213;
    v225 = v214;
    LOBYTE(v222) = 5;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v215, &v204);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v117 = v239;
      v118 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v119 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v119;
      *(_QWORD *)(v239 + v118 + 24) = v225;
      *(_QWORD *)(v117 + v118 + 16) = v224;
      v120 = v222;
      *(_QWORD *)(v117 + v118 + 8) = v223;
      *(_QWORD *)(v117 + v118) = v120;
      if ( (_BYTE)v245 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v225;
      v236 = v224;
      v235 = (__int64)v223;
      v234 = (char *)v222;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    v239 = v215;
    v240 = v216;
    v241 = v217;
    LOBYTE(v238) = 5;
    v234 = "response.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done";
    v235 = 26;
    v249 = (char *)&v238;
    v226 = (char ***)&v234;
    v227 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    v228 = (size_t)&v249;
    v229 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v245, &unk_1017C9F28, &v226);
    v122 = v246;
    v123 = v247;
    v124 = a4[2];
    if ( v247 > *a4 - v124 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        a4,
        a4[2],
        v247,
        1,
        1,
        v121);
      v124 = a4[2];
    }
    v203 = a4[1];
    memcpy((void *)(v203 + v124), v122, v123);
    v125 = v123 + v124;
    a4[2] = v125;
    v126 = v245;
    if ( v245 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v245, 1);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v238);
    v215 = 0;
    v217 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v238, v126);
    v127 = 4;
    v128 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v128 )
      goto LABEL_168;
    *v128 = 1701869940;
    v222 = 4;
    v223 = v128;
    v224 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v129 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1);
    if ( !v129 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27);
    qmemcpy(v129, "response.content_part.added", 27);
    LOBYTE(v249) = 3;
    v250 = 27;
    v251 = (__int64)v129;
    v252 = 27;
    v130 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v215, &v222);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v131 = v239;
      v132 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v133 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v133;
      *(_QWORD *)(v239 + v132 + 24) = v252;
      *(_QWORD *)(v131 + v132 + 16) = v251;
      v134 = v249;
      v135 = (char ****)v250;
      *(_QWORD *)(v131 + v132 + 8) = v250;
      *(_QWORD *)(v131 + v132) = v134;
      if ( (_BYTE)v245 != 6 )
      {
        v130 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v130 = (char ***)&v245;
      v135 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v130, v135);
    v127 = 12;
    v136 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
    if ( !v136 )
      goto LABEL_168;
    qmemcpy(v136, "output_index", 12);
    v222 = 12;
    v223 = v136;
    v224 = 12;
    LOBYTE(v249) = 2;
    v250 = 0;
    v251 = v208;
    v137 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v215, &v222);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v138 = v239;
      v139 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v140 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v140;
      *(_QWORD *)(v239 + v139 + 24) = v252;
      *(_QWORD *)(v138 + v139 + 16) = v251;
      v141 = v249;
      v142 = (char ****)v250;
      *(_QWORD *)(v138 + v139 + 8) = v250;
      *(_QWORD *)(v138 + v139) = v141;
      if ( (_BYTE)v245 != 6 )
      {
        v137 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v137 = (char ***)&v245;
      v142 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v137, v142);
    v127 = 7;
    v143 = 1;
    v144 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v144 )
      goto LABEL_168;
    *(_DWORD *)((char *)v144 + 3) = 1684627309;
    *v144 = 1835365481;
    v222 = 7;
    v223 = v144;
    v224 = 7;
    v145 = __n;
    if ( __n )
    {
      v146 = __n;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v147 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v146, 1);
      if ( !v147 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
      v143 = v147;
      v145 = __n;
    }
    v148 = v145;
    memcpy((void *)v143, v210, v145);
    LOBYTE(v249) = 3;
    v250 = v148;
    v251 = v143;
    v252 = v148;
    v149 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v215, &v222);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v150 = v239;
      v151 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v152 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v152;
      *(_QWORD *)(v239 + v151 + 24) = v252;
      *(_QWORD *)(v150 + v151 + 16) = v251;
      v153 = v249;
      v154 = (char ****)v250;
      *(_QWORD *)(v150 + v151 + 8) = v250;
      *(_QWORD *)(v150 + v151) = v153;
      if ( (_BYTE)v245 != 6 )
      {
        v149 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v149 = (char ***)&v245;
      v154 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v149, v154);
    v127 = 13;
    v155 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
    if ( !v155 )
      goto LABEL_168;
    qmemcpy(v155, "content_index", 13);
    v222 = 13;
    v223 = v155;
    v224 = 13;
    LOBYTE(v249) = 2;
    v250 = 0;
    v251 = 0;
    v156 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v215, &v222);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v157 = v239;
      v158 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v159 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v159;
      *(_QWORD *)(v239 + v158 + 24) = v252;
      *(_QWORD *)(v157 + v158 + 16) = v251;
      v160 = v249;
      v161 = (char ****)v250;
      *(_QWORD *)(v157 + v158 + 8) = v250;
      *(_QWORD *)(v157 + v158) = v160;
      if ( (_BYTE)v245 != 6 )
      {
        v156 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v156 = (char ***)&v245;
      v161 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v156, v161);
    v127 = 4;
    v162 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v162 )
LABEL_168:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v127);
    v211 = a4;
    *v162 = 1953653104;
    v204 = 4;
    v205 = v162;
    v206 = 4;
    v212 = nullptr;
    v214 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v163 = 4;
    v164 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v164 )
      goto LABEL_170;
    *v164 = 1701869940;
    v219 = 4;
    v220 = v164;
    v221 = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v165 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v165 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
    qmemcpy(v165, "output_text", 11);
    LOBYTE(v249) = 3;
    v250 = 11;
    v251 = (__int64)v165;
    v252 = 11;
    v166 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v212, &v219);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v167 = v239;
      v168 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v169 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v169;
      *(_QWORD *)(v239 + v168 + 24) = v252;
      *(_QWORD *)(v167 + v168 + 16) = v251;
      v170 = v249;
      v171 = (char ****)v250;
      *(_QWORD *)(v167 + v168 + 8) = v250;
      *(_QWORD *)(v167 + v168) = v170;
      if ( (_BYTE)v245 != 6 )
      {
        v166 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v166 = (char ***)&v245;
      v171 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v166, v171);
    v172 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v172 )
      goto LABEL_170;
    *v172 = 1954047348;
    v219 = 4;
    v220 = v172;
    v221 = 4;
    LOBYTE(v249) = 3;
    v250 = 0;
    v251 = 1;
    v252 = 0;
    v173 = &v238;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v212, &v219);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v174 = v239;
      v175 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v176 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v176;
      *(_QWORD *)(v239 + v175 + 24) = v252;
      *(_QWORD *)(v174 + v175 + 16) = v251;
      v177 = v249;
      v178 = (char ****)v250;
      *(_QWORD *)(v174 + v175 + 8) = v250;
      *(_QWORD *)(v174 + v175) = v177;
      if ( (_BYTE)v245 != 6 )
      {
        v173 = (char ***)&v245;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
      }
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      v173 = (char ***)&v245;
      v178 = &v226;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v173, v178);
    v163 = 11;
    v179 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v179 )
LABEL_170:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v163);
    qmemcpy(v179, "annotations", 11);
    v219 = 11;
    v220 = v179;
    v221 = 11;
    v250 = 0;
    v251 = 8;
    v252 = 0;
    LOBYTE(v249) = 4;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v212, &v219);
    a4 = v211;
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v180 = v239;
      v181 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v182 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v182;
      *(_QWORD *)(v239 + v181 + 24) = v252;
      *(_QWORD *)(v180 + v181 + 16) = v251;
      v183 = v249;
      *(_QWORD *)(v180 + v181 + 8) = v250;
      *(_QWORD *)(v180 + v181) = v183;
      if ( (_BYTE)v245 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v252;
      v236 = v251;
      v235 = v250;
      v234 = v249;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    v223 = v212;
    v224 = v213;
    v225 = v214;
    LOBYTE(v222) = 5;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v215, &v204);
    if ( v238 == (char **)0x8000000000000000LL )
    {
      v184 = v239;
      v185 = 32 * v241;
      v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
      v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
      v186 = *(char ****)(v239 + 32 * v241);
      v246 = *(void **)(v239 + 32 * v241 + 8);
      v245 = v186;
      *(_QWORD *)(v239 + v185 + 24) = v225;
      *(_QWORD *)(v184 + v185 + 16) = v224;
      v187 = v222;
      *(_QWORD *)(v184 + v185 + 8) = v223;
      *(_QWORD *)(v184 + v185) = v187;
      if ( (_BYTE)v245 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
    }
    else
    {
      v232 = v244;
      v231 = v243;
      v230 = v242;
      v229 = (__int64 (__fastcall *)())v241;
      v228 = v240;
      v227 = (__int64 (__fastcall **)())v239;
      v226 = (char ***)v238;
      v237 = v225;
      v236 = v224;
      v235 = (__int64)v223;
      v234 = (char *)v222;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v245,
        &v226,
        &v234);
    }
    v239 = v215;
    v240 = v216;
    v241 = v217;
    LOBYTE(v238) = 5;
    v234 = "response.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done";
    v235 = 27;
    v249 = (char *)&v238;
    v226 = (char ***)&v234;
    v227 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    v228 = (size_t)&v249;
    v229 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v245, &unk_1017C9F28, &v226);
    v189 = v246;
    v190 = v247;
    if ( v247 > *a4 - v125 )
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
        a4,
        v125,
        v247,
        1,
        1,
        v188);
      v191 = a4[1];
      v125 = a4[2];
    }
    else
    {
      v191 = v203;
    }
    memcpy((void *)(v125 + v191), v189, v190);
    a4[2] = v190 + v125;
    if ( v245 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189, v245, 1);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v238);
    v192 = v233;
    *(_QWORD *)(a1 + 176) = v233;
    *(_QWORD *)(a1 + 184) = v210;
    *(_QWORD *)(a1 + 192) = __n;
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 208) = 1;
    *(_QWORD *)(a1 + 216) = 0;
    *(_DWORD *)(a1 + 224) = v208;
    v11 = v209;
    if ( v192 == (char ***)0x8000000000000000LL )
      core::option::expect_failed::ha75f8bdcbd673567(&unk_10167BBD8, 8, &off_1019742A0);
    v12 = 0;
    if ( !v209 )
      goto LABEL_7;
  }
  else
  {
    v11 = a3;
    v12 = *(_QWORD *)(a1 + 216);
    if ( a3 <= *(_QWORD *)(a1 + 200) - v12 )
      goto LABEL_7;
  }
  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(a1 + 200, v12, v11, 1, 1, a6);
  v12 = *(_QWORD *)(a1 + 216);
LABEL_7:
  v13 = (void *)(v12 + *(_QWORD *)(a1 + 208));
  v14 = __src;
  memcpy(v13, __src, v11);
  *(_QWORD *)(a1 + 216) = v11 + v12;
  v219 = 0;
  v221 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14);
  v15 = 4;
  v16 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v16 )
    goto LABEL_165;
  *v16 = 1701869940;
  v222 = 4;
  v223 = v16;
  v224 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
  if ( !v17 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
  qmemcpy(v17, "response.output_text.delta", 26);
  LOBYTE(v249) = 3;
  v250 = 26;
  v251 = (__int64)v17;
  v252 = 26;
  v18 = &v238;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v219, &v222);
  if ( v238 == (char **)0x8000000000000000LL )
  {
    v19 = v239;
    v20 = 32 * v241;
    v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
    v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
    v21 = *(char ****)(v239 + 32 * v241);
    v246 = *(void **)(v239 + 32 * v241 + 8);
    v245 = v21;
    *(_QWORD *)(v239 + v20 + 24) = v252;
    *(_QWORD *)(v19 + v20 + 16) = v251;
    v22 = v249;
    v23 = (char ****)v250;
    *(_QWORD *)(v19 + v20 + 8) = v250;
    *(_QWORD *)(v19 + v20) = v22;
    if ( (_BYTE)v245 != 6 )
    {
      v18 = (char ***)&v245;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
    }
  }
  else
  {
    v232 = v244;
    v231 = v243;
    v230 = v242;
    v229 = (__int64 (__fastcall *)())v241;
    v228 = v240;
    v227 = (__int64 (__fastcall **)())v239;
    v226 = (char ***)v238;
    v237 = v252;
    v236 = v251;
    v235 = v250;
    v234 = v249;
    v18 = (char ***)&v245;
    v23 = &v226;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v245,
      &v226,
      &v234);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v23);
  v15 = 12;
  v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v24 )
    goto LABEL_165;
  qmemcpy(v24, "output_index", 12);
  v222 = 12;
  v223 = v24;
  v224 = 12;
  v25 = *(unsigned int *)(a1 + 224);
  LOBYTE(v249) = 2;
  v250 = 0;
  v251 = v25;
  v26 = &v238;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v219, &v222);
  if ( v238 == (char **)0x8000000000000000LL )
  {
    v27 = v239;
    v28 = 32 * v241;
    v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
    v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
    v29 = *(char ****)(v239 + 32 * v241);
    v246 = *(void **)(v239 + 32 * v241 + 8);
    v245 = v29;
    *(_QWORD *)(v239 + v28 + 24) = v252;
    *(_QWORD *)(v27 + v28 + 16) = v251;
    v30 = v249;
    v31 = (char ****)v250;
    *(_QWORD *)(v27 + v28 + 8) = v250;
    *(_QWORD *)(v27 + v28) = v30;
    if ( (_BYTE)v245 != 6 )
    {
      v26 = (char ***)&v245;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
    }
  }
  else
  {
    v232 = v244;
    v231 = v243;
    v230 = v242;
    v229 = (__int64 (__fastcall *)())v241;
    v228 = v240;
    v227 = (__int64 (__fastcall **)())v239;
    v226 = (char ***)v238;
    v237 = v252;
    v236 = v251;
    v235 = v250;
    v234 = v249;
    v26 = (char ***)&v245;
    v31 = &v226;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v245,
      &v226,
      &v234);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v31);
  v15 = 7;
  v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v32 )
    goto LABEL_165;
  *(_DWORD *)((char *)v32 + 3) = 1684627309;
  *v32 = 1835365481;
  v222 = 7;
  v223 = v32;
  v224 = 7;
  v33 = *(_QWORD *)(a1 + 192);
  if ( v33 < 0 )
  {
    v34 = 0;
    goto LABEL_21;
  }
  v35 = *(const void **)(a1 + 184);
  if ( v33 )
  {
    v211 = a4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v34 = 1;
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v33, 1);
    if ( !v36 )
LABEL_21:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v34, v33);
    v37 = v36;
    a4 = v211;
  }
  else
  {
    v37 = 1;
  }
  memcpy((void *)v37, v35, v33);
  LOBYTE(v249) = 3;
  v250 = v33;
  v251 = v37;
  v252 = v33;
  v71 = &v238;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v219, &v222);
  if ( v238 == (char **)0x8000000000000000LL )
  {
    v72 = v239;
    v73 = 32 * v241;
    v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
    v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
    v74 = *(char ****)(v239 + 32 * v241);
    v246 = *(void **)(v239 + 32 * v241 + 8);
    v245 = v74;
    *(_QWORD *)(v239 + v73 + 24) = v252;
    *(_QWORD *)(v72 + v73 + 16) = v251;
    v75 = v249;
    v76 = (char ****)v250;
    *(_QWORD *)(v72 + v73 + 8) = v250;
    *(_QWORD *)(v72 + v73) = v75;
    if ( (_BYTE)v245 != 6 )
    {
      v71 = (char ***)&v245;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
    }
  }
  else
  {
    v232 = v244;
    v231 = v243;
    v230 = v242;
    v229 = (__int64 (__fastcall *)())v241;
    v228 = v240;
    v227 = (__int64 (__fastcall **)())v239;
    v226 = (char ***)v238;
    v237 = v252;
    v236 = v251;
    v235 = v250;
    v234 = v249;
    v71 = (char ***)&v245;
    v76 = &v226;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v245,
      &v226,
      &v234);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v71, v76);
  v15 = 13;
  v77 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v77 )
    goto LABEL_165;
  qmemcpy(v77, "content_index", 13);
  v222 = 13;
  v223 = v77;
  v224 = 13;
  LOBYTE(v249) = 2;
  v250 = 0;
  v251 = 0;
  v78 = &v238;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v219, &v222);
  if ( v238 == (char **)0x8000000000000000LL )
  {
    v79 = v239;
    v80 = 32 * v241;
    v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
    v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
    v81 = *(char ****)(v239 + 32 * v241);
    v246 = *(void **)(v239 + 32 * v241 + 8);
    v245 = v81;
    *(_QWORD *)(v239 + v80 + 24) = v252;
    *(_QWORD *)(v79 + v80 + 16) = v251;
    v82 = v249;
    v83 = (char ****)v250;
    *(_QWORD *)(v79 + v80 + 8) = v250;
    *(_QWORD *)(v79 + v80) = v82;
    if ( (_BYTE)v245 != 6 )
    {
      v78 = (char ***)&v245;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
    }
  }
  else
  {
    v232 = v244;
    v231 = v243;
    v230 = v242;
    v229 = (__int64 (__fastcall *)())v241;
    v228 = v240;
    v227 = (__int64 (__fastcall **)())v239;
    v226 = (char ***)v238;
    v237 = v252;
    v236 = v251;
    v235 = v250;
    v234 = v249;
    v78 = (char ***)&v245;
    v83 = &v226;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v245,
      &v226,
      &v234);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v78, v83);
  v15 = 5;
  v84 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v84 )
LABEL_165:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v15);
  *(_BYTE *)(v84 + 4) = 97;
  *(_DWORD *)v84 = 1953260900;
  v222 = 5;
  v223 = (_DWORD *)v84;
  v224 = 5;
  v85 = v209;
  if ( (v209 & 0x8000000000000000LL) != 0LL )
  {
    v86 = 0;
    goto LABEL_66;
  }
  if ( v209 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v86 = 1;
    v87 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v85, 1);
    if ( !v87 )
LABEL_66:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v86, v209);
    v88 = v87;
  }
  else
  {
    v88 = 1;
  }
  v193 = v209;
  memcpy((void *)v88, __src, v209);
  LOBYTE(v249) = 3;
  v250 = v193;
  v251 = v88;
  v252 = v193;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v238, &v219, &v222);
  if ( v238 == (char **)0x8000000000000000LL )
  {
    v194 = v239;
    v195 = 32 * v241;
    v248 = *(_QWORD *)(v239 + 32 * v241 + 24);
    v247 = *(_QWORD *)(v239 + 32 * v241 + 16);
    v196 = *(char ****)(v239 + 32 * v241);
    v246 = *(void **)(v239 + 32 * v241 + 8);
    v245 = v196;
    *(_QWORD *)(v239 + v195 + 24) = v252;
    *(_QWORD *)(v194 + v195 + 16) = v251;
    v197 = v249;
    *(_QWORD *)(v194 + v195 + 8) = v250;
    *(_QWORD *)(v194 + v195) = v197;
    if ( (_BYTE)v245 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
  }
  else
  {
    v232 = v244;
    v231 = v243;
    v230 = v242;
    v229 = (__int64 (__fastcall *)())v241;
    v228 = v240;
    v227 = (__int64 (__fastcall **)())v239;
    v226 = (char ***)v238;
    v237 = v252;
    v236 = v251;
    v235 = v250;
    v234 = v249;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v245,
      &v226,
      &v234);
  }
  v239 = v219;
  v240 = (unsigned __int64)v220;
  v241 = v221;
  LOBYTE(v238) = 5;
  v234 = "response.output_text.deltaresponse.reasoning_summary_text.done";
  v235 = 26;
  v249 = (char *)&v238;
  v226 = (char ***)&v234;
  v227 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  v228 = (size_t)&v249;
  v229 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v245, &unk_1017C9F28, &v226);
  v199 = v246;
  v200 = v247;
  v201 = a4[2];
  if ( v247 > *a4 - v201 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(a4, a4[2], v247, 1, 1, v198);
    v201 = a4[2];
  }
  memcpy((void *)(v201 + a4[1]), v199, v200);
  a4[2] = v200 + v201;
  if ( v245 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v199, v245, 1);
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v238);
}
