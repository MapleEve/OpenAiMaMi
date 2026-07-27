// __ZN13codexmate_lib4core12debug_bundle19threads_table_shape @ 0x1004d2b20 | 基线 same-set
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::debug_bundle::threads_table_shape::h3df0c5999cb35c2c(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 ***v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 **v12; // rdx
  __int64 *v13; // rdx
  _QWORD *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 **v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 ***v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 **v30; // rsi
  _DWORD *v31; // rax
  __int64 ***v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 **v35; // rdx
  __int64 *v36; // rdx
  _QWORD *v37; // rsi
  void *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 **v41; // rdx
  __int64 *v42; // rdx
  __int64 v43; // rax
  _DWORD *v44; // rax
  __int64 **v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 ***v50; // rsi
  __int64 v51; // rdi
  int v52; // eax
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 **v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 ***v60; // rsi
  void *v61; // rax
  __int64 **v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 ***v67; // rsi
  __int64 v68; // rax
  __int64 v69; // r14
  size_t v70; // r13
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // rbx
  _DWORD *v74; // rax
  __int64 *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 **v80; // rsi
  void *v81; // rax
  __int64 *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 **v87; // rsi
  __int64 v88; // rax
  __int64 v89; // r14
  size_t v90; // r13
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // r15
  __int64 v94; // r15
  __int64 v95; // rax
  __int64 **v96; // rdi
  __int64 (__fastcall **v97)(); // rax
  __int64 v98; // rcx
  __int64 *v99; // rdx
  __int64 (__fastcall *v100)(); // rdx
  __int64 ***v101; // rsi
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // r14
  __int64 v107; // rax
  _DWORD *v108; // rax
  __int64 **v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 ***v114; // rsi
  void *v115; // rax
  __int64 **v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 ***v121; // rsi
  __int64 v122; // rax
  __int64 v123; // r14
  size_t v124; // r13
  __int64 v125; // rbx
  __int64 v126; // rax
  __int64 v127; // r15
  _DWORD *v128; // rax
  __int64 **v129; // rdi
  __int64 (__fastcall **v130)(); // rax
  __int64 v131; // rcx
  __int64 *v132; // rdx
  __int64 (__fastcall *v133)(); // rdx
  __int64 ***v134; // rsi
  void *v135; // rax
  __int64 (__fastcall **v136)(); // rax
  __int64 v137; // rcx
  __int64 *v138; // rdx
  __int64 (__fastcall *v139)(); // rdx
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // r14
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rbx
  _QWORD *v151; // r14
  __int64 v152; // rsi
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 **i; // rax
  __int64 *v156; // rsi
  __int64 v157; // rbx
  _QWORD *v158; // r14
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rdx
  __int64 v163; // r14
  __int64 v164; // rax
  _QWORD v166[9]; // [rsp+0h] [rbp-320h] BYREF
  _QWORD v167[14]; // [rsp+48h] [rbp-2D8h] BYREF
  __int64 v168; // [rsp+B8h] [rbp-268h] BYREF
  __int64 v169; // [rsp+C0h] [rbp-260h]
  __int64 v170; // [rsp+C8h] [rbp-258h]
  __int64 v171; // [rsp+D0h] [rbp-250h] BYREF
  __int64 v172; // [rsp+D8h] [rbp-248h]
  __int64 v173; // [rsp+E0h] [rbp-240h]
  _QWORD v174[19]; // [rsp+E8h] [rbp-238h] BYREF
  __int64 **v175; // [rsp+180h] [rbp-1A0h] BYREF
  __int64 (__fastcall **v176)(); // [rsp+188h] [rbp-198h]
  size_t v177; // [rsp+190h] [rbp-190h]
  __int64 (__fastcall *v178)(); // [rsp+198h] [rbp-188h]
  __int64 v179; // [rsp+1A0h] [rbp-180h]
  __int64 v180; // [rsp+1A8h] [rbp-178h]
  __int64 v181; // [rsp+1B0h] [rbp-170h]
  sqlite3_stmt *v182; // [rsp+1B8h] [rbp-168h]
  void *__src; // [rsp+1C0h] [rbp-160h]
  __int64 v184; // [rsp+1C8h] [rbp-158h] BYREF
  _DWORD *v185; // [rsp+1D0h] [rbp-150h]
  __int64 v186; // [rsp+1D8h] [rbp-148h]
  __int64 v187; // [rsp+1E0h] [rbp-140h]
  __int64 **v188; // [rsp+1E8h] [rbp-138h] BYREF
  __int64 (__fastcall **v189)(); // [rsp+1F0h] [rbp-130h]
  size_t v190; // [rsp+1F8h] [rbp-128h]
  __int64 (__fastcall *v191)(); // [rsp+200h] [rbp-120h]
  __int64 v192; // [rsp+208h] [rbp-118h]
  __int64 v193; // [rsp+210h] [rbp-110h]
  __int64 v194; // [rsp+218h] [rbp-108h]
  __int64 v195; // [rsp+220h] [rbp-100h]
  __int64 v196; // [rsp+228h] [rbp-F8h] BYREF
  __int64 v197; // [rsp+230h] [rbp-F0h]
  size_t v198; // [rsp+238h] [rbp-E8h]
  __int64 (__fastcall *v199)(); // [rsp+240h] [rbp-E0h]
  __int64 v200; // [rsp+248h] [rbp-D8h]
  __int64 v201; // [rsp+250h] [rbp-D0h]
  __int64 v202; // [rsp+258h] [rbp-C8h]
  __int64 v203; // [rsp+260h] [rbp-C0h] BYREF
  __int64 **v204; // [rsp+268h] [rbp-B8h]
  __int64 v205; // [rsp+270h] [rbp-B0h]
  size_t v206; // [rsp+278h] [rbp-A8h]
  __int64 *v207; // [rsp+280h] [rbp-A0h] BYREF
  __int64 v208; // [rsp+288h] [rbp-98h]
  size_t __n; // [rsp+290h] [rbp-90h]
  __int64 (__fastcall *v210)(); // [rsp+298h] [rbp-88h]
  __int64 v211; // [rsp+2A0h] [rbp-80h]
  __int64 v212; // [rsp+2A8h] [rbp-78h]
  __int64 v213; // [rsp+2B0h] [rbp-70h]
  __int64 v214; // [rsp+2B8h] [rbp-68h] BYREF
  __int64 ***v215; // [rsp+2C0h] [rbp-60h]
  size_t v216; // [rsp+2C8h] [rbp-58h]
  __int64 (__fastcall *v217)(); // [rsp+2D0h] [rbp-50h]
  __int64 v218; // [rsp+2D8h] [rbp-48h] BYREF
  __int64 ***v219; // [rsp+2E0h] [rbp-40h]
  __int64 v220; // [rsp+2E8h] [rbp-38h]
  size_t v221; // [rsp+2F0h] [rbp-30h]

  std::sys::fs::metadata::h32fa16d3052ea535(v174, a2, a3);
  v6 = v174[1];
  if ( LODWORD(v174[0]) == 1 )
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
      1,
      v174[1]);
    v214 = 0;
    v216 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(1, v6);
    v7 = 6;
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v8 )
      goto LABEL_162;
    *(_WORD *)(v8 + 4) = 29556;
    *(_DWORD *)v8 = 1936291941;
    v196 = 6;
    v197 = v8;
    v198 = 6;
    LOWORD(v207) = 1;
    v9 = (__int64 ***)v167;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v167, &v214, &v196);
    if ( __OFSUB__(0, v167[0]) )
    {
      v10 = v167[1];
      v11 = 32LL * v167[3];
      v191 = *(__int64 (__fastcall **)())(v167[1] + 32LL * v167[3] + 24);
      v190 = *(_QWORD *)(v167[1] + 32LL * v167[3] + 16);
      v12 = *(__int64 ***)(v167[1] + 32LL * v167[3]);
      v189 = *(__int64 (__fastcall ***)())(v167[1] + 32LL * v167[3] + 8);
      v188 = v12;
      *(_QWORD *)(v167[1] + v11 + 24) = v210;
      *(_QWORD *)(v10 + v11 + 16) = __n;
      v13 = v207;
      v14 = (_QWORD *)v208;
      *(_QWORD *)(v10 + v11 + 8) = v208;
      *(_QWORD *)(v10 + v11) = v13;
      if ( (_BYTE)v188 != 6 )
      {
        v9 = &v188;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v188);
      }
    }
    else
    {
      v174[6] = v167[6];
      v174[5] = v167[5];
      v174[4] = v167[4];
      v174[3] = v167[3];
      v174[2] = v167[2];
      v174[1] = v167[1];
      v174[0] = v167[0];
      v178 = v210;
      v177 = __n;
      v176 = (__int64 (__fastcall **)())v208;
      v175 = (__int64 **)v207;
      v9 = &v188;
      v14 = v174;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v188,
        v174,
        &v175);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v14);
    v7 = 7;
    v31 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v31 )
      goto LABEL_162;
    *(_DWORD *)((char *)v31 + 3) = 1936616821;
    *v31 = 1970040675;
    v196 = 7;
    v197 = (__int64)v31;
    v198 = 7;
    v208 = 0;
    __n = 8;
    v210 = nullptr;
    LOBYTE(v207) = 4;
    v32 = (__int64 ***)v167;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v167, &v214, &v196);
    if ( v167[0] == 0x8000000000000000LL )
    {
      v33 = v167[1];
      v34 = 32LL * v167[3];
      v191 = *(__int64 (__fastcall **)())(v167[1] + 32LL * v167[3] + 24);
      v190 = *(_QWORD *)(v167[1] + 32LL * v167[3] + 16);
      v35 = *(__int64 ***)(v167[1] + 32LL * v167[3]);
      v189 = *(__int64 (__fastcall ***)())(v167[1] + 32LL * v167[3] + 8);
      v188 = v35;
      *(_QWORD *)(v167[1] + v34 + 24) = v210;
      *(_QWORD *)(v33 + v34 + 16) = __n;
      v36 = v207;
      v37 = (_QWORD *)v208;
      *(_QWORD *)(v33 + v34 + 8) = v208;
      *(_QWORD *)(v33 + v34) = v36;
      if ( (_BYTE)v188 != 6 )
      {
        v32 = &v188;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v188);
      }
    }
    else
    {
      v174[6] = v167[6];
      v174[5] = v167[5];
      v174[4] = v167[4];
      v174[3] = v167[3];
      v174[2] = v167[2];
      v174[1] = v167[1];
      v174[0] = v167[0];
      v178 = v210;
      v177 = __n;
      v176 = (__int64 (__fastcall **)())v208;
      v175 = (__int64 **)v207;
      v32 = &v188;
      v37 = v174;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v188,
        v174,
        &v175);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v37);
    v7 = 18;
    v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
    if ( !v38 )
LABEL_162:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7);
    qmemcpy(v38, "missingCoreColumns", 18);
    v196 = 18;
    v197 = (__int64)v38;
    v198 = 18;
    v208 = 0;
    __n = 8;
    v210 = nullptr;
    LOBYTE(v207) = 4;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v167, &v214, &v196);
    if ( v167[0] == 0x8000000000000000LL )
    {
      v39 = v167[1];
      v40 = 32LL * v167[3];
      v191 = *(__int64 (__fastcall **)())(v167[1] + 32LL * v167[3] + 24);
      v190 = *(_QWORD *)(v167[1] + 32LL * v167[3] + 16);
      v41 = *(__int64 ***)(v167[1] + 32LL * v167[3]);
      v189 = *(__int64 (__fastcall ***)())(v167[1] + 32LL * v167[3] + 8);
      v188 = v41;
      *(_QWORD *)(v167[1] + v40 + 24) = v210;
      *(_QWORD *)(v39 + v40 + 16) = __n;
      v42 = v207;
      *(_QWORD *)(v39 + v40 + 8) = v208;
      *(_QWORD *)(v39 + v40) = v42;
      if ( (_BYTE)v188 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v188);
    }
    else
    {
      v174[6] = v167[6];
      v174[5] = v167[5];
      v174[4] = v167[4];
      v174[3] = v167[3];
      v174[2] = v167[2];
      v174[1] = v167[1];
      v174[0] = v167[0];
      v178 = v210;
      v177 = __n;
      v176 = (__int64 (__fastcall **)())v208;
      v175 = (__int64 **)v207;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v188,
        v174,
        &v175);
    }
    *(_QWORD *)(a1 + 24) = v216;
    v43 = v214;
    *(_QWORD *)(a1 + 16) = v215;
    *(_QWORD *)(a1 + 8) = v43;
    *(_BYTE *)a1 = 5;
    return a1;
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    0,
    v174[1]);
  rusqlite::Connection::open_with_flags::h45227a733d927884(v174, a2, a3, 32769);
  if ( LOBYTE(v174[13]) != 3 )
  {
    qmemcpy(v167, v174, sizeof(v167));
    rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v174, v167, 0, 500000000);
    if ( v174[0] != 0x8000000000000016LL )
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v174);
    rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v174, v167, &unk_1015FC54D, 26);
    if ( LODWORD(v174[0]) == 1 )
    {
      v195 = v174[8];
      v194 = v174[7];
      v193 = v174[6];
      v192 = v174[5];
      v191 = (__int64 (__fastcall *)())v174[4];
      v190 = v174[3];
      v189 = (__int64 (__fastcall **)())v174[2];
      v188 = (__int64 **)v174[1];
      v171 = 0;
      v173 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v174, v167);
      v23 = 6;
      v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v24 )
        goto LABEL_164;
      *(_WORD *)(v24 + 4) = 29556;
      *(_DWORD *)v24 = 1936291941;
      v184 = 6;
      v185 = (_DWORD *)v24;
      v186 = 6;
      LOWORD(v203) = 1;
      v25 = &v196;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v196, &v171, &v184);
      if ( v196 == 0x8000000000000000LL )
      {
        v26 = v197;
        v27 = 32LL * (_QWORD)v199;
        v217 = *(__int64 (__fastcall **)())(v197 + 32LL * (_QWORD)v199 + 24);
        v216 = *(_QWORD *)(v197 + 32LL * (_QWORD)v199 + 16);
        v28 = *(_QWORD *)(v197 + 32LL * (_QWORD)v199);
        v215 = *(__int64 ****)(v197 + 32LL * (_QWORD)v199 + 8);
        v214 = v28;
        *(_QWORD *)(v197 + v27 + 24) = v206;
        *(_QWORD *)(v26 + v27 + 16) = v205;
        v29 = v203;
        v30 = v204;
        *(_QWORD *)(v26 + v27 + 8) = v204;
        *(_QWORD *)(v26 + v27) = v29;
        if ( (_BYTE)v214 != 6 )
        {
          v25 = &v214;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v214);
        }
      }
      else
      {
        v213 = v202;
        v212 = v201;
        v211 = v200;
        v210 = v199;
        __n = v198;
        v208 = v197;
        v207 = (__int64 *)v196;
        v221 = v206;
        v220 = v205;
        v219 = (__int64 ***)v204;
        v218 = v203;
        v25 = &v214;
        v30 = &v207;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v214,
          &v207,
          &v218);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v30);
      v23 = 7;
      v74 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v74 )
        goto LABEL_164;
      *(_DWORD *)((char *)v74 + 3) = 1936616821;
      *v74 = 1970040675;
      v184 = 7;
      v185 = v74;
      v186 = 7;
      v204 = nullptr;
      v205 = 8;
      v206 = 0;
      LOBYTE(v203) = 4;
      v75 = &v196;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v196, &v171, &v184);
      if ( v196 == 0x8000000000000000LL )
      {
        v76 = v197;
        v77 = 32LL * (_QWORD)v199;
        v217 = *(__int64 (__fastcall **)())(v197 + 32LL * (_QWORD)v199 + 24);
        v216 = *(_QWORD *)(v197 + 32LL * (_QWORD)v199 + 16);
        v78 = *(_QWORD *)(v197 + 32LL * (_QWORD)v199);
        v215 = *(__int64 ****)(v197 + 32LL * (_QWORD)v199 + 8);
        v214 = v78;
        *(_QWORD *)(v197 + v77 + 24) = v206;
        *(_QWORD *)(v76 + v77 + 16) = v205;
        v79 = v203;
        v80 = v204;
        *(_QWORD *)(v76 + v77 + 8) = v204;
        *(_QWORD *)(v76 + v77) = v79;
        if ( (_BYTE)v214 != 6 )
        {
          v75 = &v214;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v214);
        }
      }
      else
      {
        v213 = v202;
        v212 = v201;
        v211 = v200;
        v210 = v199;
        __n = v198;
        v208 = v197;
        v207 = (__int64 *)v196;
        v221 = v206;
        v220 = v205;
        v219 = (__int64 ***)v204;
        v218 = v203;
        v75 = &v214;
        v80 = &v207;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v214,
          &v207,
          &v218);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v75, v80);
      v23 = 18;
      v81 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
      if ( !v81 )
        goto LABEL_164;
      qmemcpy(v81, "missingCoreColumns", 18);
      v184 = 18;
      v185 = v81;
      v186 = 18;
      v204 = nullptr;
      v205 = 8;
      v206 = 0;
      LOBYTE(v203) = 4;
      v82 = &v196;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v196, &v171, &v184);
      if ( v196 == 0x8000000000000000LL )
      {
        v83 = v197;
        v84 = 32LL * (_QWORD)v199;
        v217 = *(__int64 (__fastcall **)())(v197 + 32LL * (_QWORD)v199 + 24);
        v216 = *(_QWORD *)(v197 + 32LL * (_QWORD)v199 + 16);
        v85 = *(_QWORD *)(v197 + 32LL * (_QWORD)v199);
        v215 = *(__int64 ****)(v197 + 32LL * (_QWORD)v199 + 8);
        v214 = v85;
        *(_QWORD *)(v197 + v84 + 24) = v206;
        *(_QWORD *)(v83 + v84 + 16) = v205;
        v86 = v203;
        v87 = v204;
        *(_QWORD *)(v83 + v84 + 8) = v204;
        *(_QWORD *)(v83 + v84) = v86;
        if ( (_BYTE)v214 != 6 )
        {
          v82 = &v214;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v214);
        }
      }
      else
      {
        v213 = v202;
        v212 = v201;
        v211 = v200;
        v210 = v199;
        __n = v198;
        v208 = v197;
        v207 = (__int64 *)v196;
        v221 = v206;
        v220 = v205;
        v219 = (__int64 ***)v204;
        v218 = v203;
        v82 = &v214;
        v87 = &v207;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v214,
          &v207,
          &v218);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v82, v87);
      v23 = 9;
      v88 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
      if ( !v88 )
LABEL_164:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23);
      *(_QWORD *)v88 = 0x6F72724564616572LL;
      *(_BYTE *)(v88 + 8) = 114;
      v184 = 9;
      v185 = (_DWORD *)v88;
      v186 = 9;
      v196 = 0;
      v197 = 1;
      v198 = 0;
      __n = 1610612768;
      v207 = &v196;
      v208 = (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_1257;
      if ( (unsigned __int8)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4(
                              &v188,
                              &v207) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_92869709a5e99ce1936aa4e326b6c562_1258,
          55,
          &v214,
          &anon_92869709a5e99ce1936aa4e326b6c562_1272,
          &anon_92869709a5e99ce1936aa4e326b6c562_1260);
      v89 = a1;
      v187 = v196;
      __src = (void *)v197;
      v90 = v198;
      if ( (v198 & 0x8000000000000000LL) != 0LL )
      {
        v91 = 0;
        goto LABEL_69;
      }
      if ( v198 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v188, &v207);
        v91 = 1;
        v92 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v90, 1);
        if ( !v92 )
LABEL_69:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v91, v90);
        v93 = v92;
      }
      else
      {
        v93 = 1;
      }
      memcpy((void *)v93, __src, v90);
      LOBYTE(v203) = 3;
      v204 = (__int64 **)v90;
      v205 = v93;
      v206 = v90;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v196, &v171, &v184);
      a1 = v89;
      if ( v196 == 0x8000000000000000LL )
      {
        v140 = v197;
        v141 = 32LL * (_QWORD)v199;
        v217 = *(__int64 (__fastcall **)())(v197 + 32LL * (_QWORD)v199 + 24);
        v216 = *(_QWORD *)(v197 + 32LL * (_QWORD)v199 + 16);
        v142 = *(_QWORD *)(v197 + 32LL * (_QWORD)v199);
        v215 = *(__int64 ****)(v197 + 32LL * (_QWORD)v199 + 8);
        v214 = v142;
        *(_QWORD *)(v197 + v141 + 24) = v206;
        *(_QWORD *)(v140 + v141 + 16) = v205;
        v143 = v203;
        v144 = (__int64)v204;
        *(_QWORD *)(v140 + v141 + 8) = v204;
        *(_QWORD *)(v140 + v141) = v143;
        v145 = v187;
        if ( (_BYTE)v214 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v214);
      }
      else
      {
        v213 = v202;
        v212 = v201;
        v211 = v200;
        v210 = v199;
        __n = v198;
        v208 = v197;
        v207 = (__int64 *)v196;
        v221 = v206;
        v220 = v205;
        v219 = (__int64 ***)v204;
        v218 = v203;
        v144 = (__int64)&v207;
        v145 = v187;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v214,
          &v207,
          &v218);
      }
      if ( v145 )
      {
        v144 = v145;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v145, 1);
      }
      *(_QWORD *)(a1 + 24) = v173;
      v146 = v171;
      *(_QWORD *)(a1 + 16) = v172;
      *(_QWORD *)(a1 + 8) = v146;
      *(_BYTE *)a1 = 5;
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v188);
LABEL_155:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v167, v144, v147, v148);
      return a1;
    }
    v182 = (sqlite3_stmt *)v174[8];
    v181 = v174[7];
    v180 = v174[6];
    v179 = v174[5];
    v178 = (__int64 (__fastcall *)())v174[4];
    v177 = v174[3];
    v176 = (__int64 (__fastcall **)())v174[2];
    v175 = (__int64 **)v174[1];
    v51 = v174[8];
    v52 = sqlite3_bind_parameter_count((sqlite3_stmt *)v174[8]);
    if ( !v52 )
    {
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h776a2947b3242e1e(
        &v168,
        &v175,
        0);
      _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h9a451a9580a0b5cc(
        &v171,
        v169,
        v169 + 24 * v170);
      v166[0] = &v171;
      v166[1] = 0;
      v166[2] = 3;
      v166[3] = &anon_92869709a5e99ce1936aa4e326b6c562_188;
      v166[4] = 2;
      v166[5] = "model_provider";
      v166[6] = 14;
      v166[7] = &unk_1015FC569;
      v166[8] = 12;
      ((void (__fastcall *)(__int64 *, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h3b942496e6757f3d)(
        &v184,
        v166);
      v203 = 0;
      v205 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v184, v166);
      v94 = 6;
      v95 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v95 )
        goto LABEL_166;
      *(_WORD *)(v95 + 4) = 29556;
      *(_DWORD *)v95 = 1936291941;
      v218 = 6;
      v219 = (__int64 ***)v95;
      v220 = 6;
      LOBYTE(v214) = 1;
      BYTE1(v214) = v170 != 0;
      v96 = (__int64 **)&v188;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v188, &v203, &v218);
      if ( v188 == (__int64 **)0x8000000000000000LL )
      {
        v97 = v189;
        v98 = 4LL * (_QWORD)v191;
        v210 = v189[4 * (_QWORD)v191 + 3];
        __n = (size_t)v189[4 * (_QWORD)v191 + 2];
        v99 = (__int64 *)v189[4 * (_QWORD)v191];
        v208 = (__int64)v189[4 * (_QWORD)v191 + 1];
        v207 = v99;
        v189[v98 + 3] = v217;
        v97[v98 + 2] = (__int64 (__fastcall *)())v216;
        v100 = (__int64 (__fastcall *)())v214;
        v101 = v215;
        v97[v98 + 1] = (__int64 (__fastcall *)())v215;
        v97[v98] = v100;
        if ( (_BYTE)v207 != 6 )
        {
          v96 = &v207;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v207);
        }
      }
      else
      {
        v174[6] = v194;
        v174[5] = v193;
        v174[4] = v192;
        v174[3] = v191;
        v174[2] = v190;
        v174[1] = v189;
        v174[0] = v188;
        v199 = v217;
        v198 = v216;
        v197 = (__int64)v215;
        v196 = v214;
        v96 = &v207;
        v101 = (__int64 ***)v174;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v207,
          v174,
          &v196);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v96, v101);
      v94 = 7;
      v128 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v128 )
        goto LABEL_166;
      *(_DWORD *)((char *)v128 + 3) = 1936616821;
      *v128 = 1970040675;
      v218 = 7;
      v219 = (__int64 ***)v128;
      v220 = 7;
      serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(v174, &v168);
      if ( LOBYTE(v174[0]) == 6 )
      {
        v188 = (__int64 **)v174[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
          43,
          &v188,
          &off_101964900,
          &off_101964038);
      }
      v217 = (__int64 (__fastcall *)())v174[3];
      v216 = v174[2];
      v215 = (__int64 ***)v174[1];
      v214 = v174[0];
      v129 = (__int64 **)&v188;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v188, &v203, &v218);
      if ( v188 == (__int64 **)0x8000000000000000LL )
      {
        v130 = v189;
        v131 = 4LL * (_QWORD)v191;
        v210 = v189[4 * (_QWORD)v191 + 3];
        __n = (size_t)v189[4 * (_QWORD)v191 + 2];
        v132 = (__int64 *)v189[4 * (_QWORD)v191];
        v208 = (__int64)v189[4 * (_QWORD)v191 + 1];
        v207 = v132;
        v189[v131 + 3] = v217;
        v130[v131 + 2] = (__int64 (__fastcall *)())v216;
        v133 = (__int64 (__fastcall *)())v214;
        v134 = v215;
        v130[v131 + 1] = (__int64 (__fastcall *)())v215;
        v130[v131] = v133;
        if ( (_BYTE)v207 != 6 )
        {
          v129 = &v207;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v207);
        }
      }
      else
      {
        v174[6] = v194;
        v174[5] = v193;
        v174[4] = v192;
        v174[3] = v191;
        v174[2] = v190;
        v174[1] = v189;
        v174[0] = v188;
        v199 = v217;
        v198 = v216;
        v197 = (__int64)v215;
        v196 = v214;
        v129 = &v207;
        v134 = (__int64 ***)v174;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v207,
          v174,
          &v196);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v129, v134);
      v94 = 18;
      v135 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
      if ( !v135 )
LABEL_166:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v94);
      qmemcpy(v135, "missingCoreColumns", 18);
      v218 = 18;
      v219 = (__int64 ***)v135;
      v220 = 18;
      serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(v174, &v184);
      if ( LOBYTE(v174[0]) == 6 )
      {
        v188 = (__int64 **)v174[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
          43,
          &v188,
          &off_101964900,
          &off_101964038);
      }
      v217 = (__int64 (__fastcall *)())v174[3];
      v216 = v174[2];
      v215 = (__int64 ***)v174[1];
      v214 = v174[0];
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v188, &v203, &v218);
      if ( v188 == (__int64 **)0x8000000000000000LL )
      {
        v136 = v189;
        v137 = 4LL * (_QWORD)v191;
        v210 = v189[4 * (_QWORD)v191 + 3];
        __n = (size_t)v189[4 * (_QWORD)v191 + 2];
        v138 = (__int64 *)v189[4 * (_QWORD)v191];
        v208 = (__int64)v189[4 * (_QWORD)v191 + 1];
        v207 = v138;
        v189[v137 + 3] = v217;
        v136[v137 + 2] = (__int64 (__fastcall *)())v216;
        v139 = (__int64 (__fastcall *)())v214;
        v136[v137 + 1] = (__int64 (__fastcall *)())v215;
        v136[v137] = v139;
        if ( (_BYTE)v207 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v207);
      }
      else
      {
        v174[6] = v194;
        v174[5] = v193;
        v174[4] = v192;
        v174[3] = v191;
        v174[2] = v190;
        v174[1] = v189;
        v174[0] = v188;
        v199 = v217;
        v198 = v216;
        v197 = (__int64)v215;
        v196 = v214;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v207,
          v174,
          &v196);
      }
      *(_QWORD *)(a1 + 24) = v205;
      v149 = v203;
      *(_QWORD *)(a1 + 16) = v204;
      *(_QWORD *)(a1 + 8) = v149;
      *(_BYTE *)a1 = 5;
      v150 = v186;
      if ( v186 )
      {
        v151 = v185 + 2;
        do
        {
          v152 = *(v151 - 1);
          if ( v152 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v151, v152, 1);
          v151 += 3;
          --v150;
        }
        while ( v150 );
      }
      if ( v184 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v185, 24 * v184, 8);
      if ( v171 )
      {
        v153 = v173;
        v174[1] = 0;
        v174[2] = v171;
        v174[3] = v172;
        v174[5] = 0;
        v174[6] = v171;
        v174[7] = v172;
        v154 = 1;
      }
      else
      {
        v154 = 0;
        v153 = 0;
      }
      v174[0] = v154;
      v174[4] = v154;
      v174[8] = v153;
      v144 = (__int64)v174;
      alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v188, v174);
      for ( i = v188; v188; i = v188 )
      {
        v156 = i[3 * v190 + 1];
        if ( v156 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(i[3 * v190 + 2], v156, 1);
        v144 = (__int64)v174;
        alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v188, v174);
      }
      v157 = v170;
      if ( v170 )
      {
        v158 = (_QWORD *)(v169 + 8);
        do
        {
          v144 = *(v158 - 1);
          if ( v144 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v158, v144, 1);
          v158 += 3;
          --v157;
        }
        while ( v157 );
      }
      if ( v168 )
      {
        v144 = 24 * v168;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v169, 24 * v168, 8);
      }
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v175);
      goto LABEL_155;
    }
    v174[0] = 0x8000000000000013LL;
    v174[1] = 0;
    v174[2] = v52;
    v184 = 0;
    v186 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v167);
    v53 = 6;
    v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v54 )
      goto LABEL_165;
    *(_WORD *)(v54 + 4) = 29556;
    *(_DWORD *)v54 = 1936291941;
    v203 = 6;
    v204 = (__int64 **)v54;
    v205 = 6;
    LOWORD(v218) = 1;
    v55 = &v207;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v207, &v184, &v203);
    if ( v207 == (__int64 *)0x8000000000000000LL )
    {
      v56 = v208;
      v57 = 32LL * (_QWORD)v210;
      v199 = *(__int64 (__fastcall **)())(v208 + 32LL * (_QWORD)v210 + 24);
      v198 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 16);
      v58 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210);
      v197 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 8);
      v196 = v58;
      *(_QWORD *)(v208 + v57 + 24) = v221;
      *(_QWORD *)(v56 + v57 + 16) = v220;
      v59 = v218;
      v60 = v219;
      *(_QWORD *)(v56 + v57 + 8) = v219;
      *(_QWORD *)(v56 + v57) = v59;
      if ( (_BYTE)v196 != 6 )
      {
        v55 = (__int64 **)&v196;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
      }
    }
    else
    {
      v194 = v213;
      v193 = v212;
      v192 = v211;
      v191 = v210;
      v190 = __n;
      v189 = (__int64 (__fastcall **)())v208;
      v188 = (__int64 **)v207;
      v217 = (__int64 (__fastcall *)())v221;
      v216 = v220;
      v215 = v219;
      v214 = v218;
      v55 = (__int64 **)&v196;
      v60 = &v188;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v196,
        &v188,
        &v214);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v55, v60);
    v53 = 7;
    v108 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v108 )
      goto LABEL_165;
    *(_DWORD *)((char *)v108 + 3) = 1936616821;
    *v108 = 1970040675;
    v203 = 7;
    v204 = (__int64 **)v108;
    v205 = 7;
    v219 = nullptr;
    v220 = 8;
    v221 = 0;
    LOBYTE(v218) = 4;
    v109 = &v207;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v207, &v184, &v203);
    if ( v207 == (__int64 *)0x8000000000000000LL )
    {
      v110 = v208;
      v111 = 32LL * (_QWORD)v210;
      v199 = *(__int64 (__fastcall **)())(v208 + 32LL * (_QWORD)v210 + 24);
      v198 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 16);
      v112 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210);
      v197 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 8);
      v196 = v112;
      *(_QWORD *)(v208 + v111 + 24) = v221;
      *(_QWORD *)(v110 + v111 + 16) = v220;
      v113 = v218;
      v114 = v219;
      *(_QWORD *)(v110 + v111 + 8) = v219;
      *(_QWORD *)(v110 + v111) = v113;
      if ( (_BYTE)v196 != 6 )
      {
        v109 = (__int64 **)&v196;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
      }
    }
    else
    {
      v194 = v213;
      v193 = v212;
      v192 = v211;
      v191 = v210;
      v190 = __n;
      v189 = (__int64 (__fastcall **)())v208;
      v188 = (__int64 **)v207;
      v217 = (__int64 (__fastcall *)())v221;
      v216 = v220;
      v215 = v219;
      v214 = v218;
      v109 = (__int64 **)&v196;
      v114 = &v188;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v196,
        &v188,
        &v214);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v109, v114);
    v53 = 18;
    v115 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
    if ( !v115 )
      goto LABEL_165;
    qmemcpy(v115, "missingCoreColumns", 18);
    v203 = 18;
    v204 = (__int64 **)v115;
    v205 = 18;
    v219 = nullptr;
    v220 = 8;
    v221 = 0;
    LOBYTE(v218) = 4;
    v116 = &v207;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v207, &v184, &v203);
    if ( v207 == (__int64 *)0x8000000000000000LL )
    {
      v117 = v208;
      v118 = 32LL * (_QWORD)v210;
      v199 = *(__int64 (__fastcall **)())(v208 + 32LL * (_QWORD)v210 + 24);
      v198 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 16);
      v119 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210);
      v197 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 8);
      v196 = v119;
      *(_QWORD *)(v208 + v118 + 24) = v221;
      *(_QWORD *)(v117 + v118 + 16) = v220;
      v120 = v218;
      v121 = v219;
      *(_QWORD *)(v117 + v118 + 8) = v219;
      *(_QWORD *)(v117 + v118) = v120;
      if ( (_BYTE)v196 != 6 )
      {
        v116 = (__int64 **)&v196;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
      }
    }
    else
    {
      v194 = v213;
      v193 = v212;
      v192 = v211;
      v191 = v210;
      v190 = __n;
      v189 = (__int64 (__fastcall **)())v208;
      v188 = (__int64 **)v207;
      v217 = (__int64 (__fastcall *)())v221;
      v216 = v220;
      v215 = v219;
      v214 = v218;
      v116 = (__int64 **)&v196;
      v121 = &v188;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v196,
        &v188,
        &v214);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v116, v121);
    v53 = 9;
    v122 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
    if ( !v122 )
LABEL_165:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v53);
    *(_QWORD *)v122 = 0x6F72724564616572LL;
    *(_BYTE *)(v122 + 8) = 114;
    v203 = 9;
    v204 = (__int64 **)v122;
    v205 = 9;
    v207 = nullptr;
    v208 = 1;
    __n = 0;
    v190 = 1610612768;
    v188 = &v207;
    v189 = &anon_92869709a5e99ce1936aa4e326b6c562_1257;
    if ( (unsigned __int8)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4(
                            v174,
                            &v188) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        &v214,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    v123 = a1;
    v187 = (__int64)v207;
    __src = (void *)v208;
    v124 = __n;
    if ( (__n & 0x8000000000000000LL) != 0LL )
    {
      v125 = 0;
      goto LABEL_100;
    }
    if ( __n )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v174, &v188);
      v125 = 1;
      v126 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v124, 1);
      if ( !v126 )
LABEL_100:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v125, v124);
      v127 = v126;
    }
    else
    {
      v127 = 1;
    }
    memcpy((void *)v127, __src, v124);
    LOBYTE(v218) = 3;
    v219 = (__int64 ***)v124;
    v220 = v127;
    v221 = v124;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v207, &v184, &v203);
    a1 = v123;
    if ( v207 == (__int64 *)0x8000000000000000LL )
    {
      v159 = v208;
      v160 = 32LL * (_QWORD)v210;
      v199 = *(__int64 (__fastcall **)())(v208 + 32LL * (_QWORD)v210 + 24);
      v198 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 16);
      v161 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210);
      v197 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 8);
      v196 = v161;
      *(_QWORD *)(v208 + v160 + 24) = v221;
      *(_QWORD *)(v159 + v160 + 16) = v220;
      v162 = v218;
      v144 = (__int64)v219;
      *(_QWORD *)(v159 + v160 + 8) = v219;
      *(_QWORD *)(v159 + v160) = v162;
      v163 = v187;
      if ( (_BYTE)v196 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
    else
    {
      v194 = v213;
      v193 = v212;
      v192 = v211;
      v191 = v210;
      v190 = __n;
      v189 = (__int64 (__fastcall **)())v208;
      v188 = (__int64 **)v207;
      v217 = (__int64 (__fastcall *)())v221;
      v216 = v220;
      v215 = v219;
      v214 = v218;
      v144 = (__int64)&v188;
      v163 = v187;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v196,
        &v188,
        &v214);
    }
    if ( v163 )
    {
      v144 = v163;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v163, 1);
    }
    *(_QWORD *)(a1 + 24) = v186;
    v164 = v184;
    *(_QWORD *)(a1 + 16) = v185;
    *(_QWORD *)(a1 + 8) = v164;
    *(_BYTE *)a1 = 5;
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v174);
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v175);
    goto LABEL_155;
  }
  v195 = v174[7];
  v194 = v174[6];
  v193 = v174[5];
  v192 = v174[4];
  v191 = (__int64 (__fastcall *)())v174[3];
  v190 = v174[2];
  v189 = (__int64 (__fastcall **)())v174[1];
  v188 = (__int64 **)v174[0];
  v184 = 0;
  v186 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v174, a2);
  v15 = 6;
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v16 )
    goto LABEL_163;
  *(_WORD *)(v16 + 4) = 29556;
  *(_DWORD *)v16 = 1936291941;
  v203 = 6;
  v204 = (__int64 **)v16;
  v205 = 6;
  LOWORD(v218) = 1;
  v17 = &v207;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v207, &v184, &v203);
  if ( __OFSUB__(0, v207) )
  {
    v18 = v208;
    v19 = 32LL * (_QWORD)v210;
    v199 = *(__int64 (__fastcall **)())(v208 + 32LL * (_QWORD)v210 + 24);
    v198 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 16);
    v20 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210);
    v197 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 8);
    v196 = v20;
    *(_QWORD *)(v208 + v19 + 24) = v221;
    *(_QWORD *)(v18 + v19 + 16) = v220;
    v21 = v218;
    v22 = v219;
    *(_QWORD *)(v18 + v19 + 8) = v219;
    *(_QWORD *)(v18 + v19) = v21;
    if ( (_BYTE)v196 != 6 )
    {
      v17 = (__int64 **)&v196;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v181 = v213;
    v180 = v212;
    v179 = v211;
    v178 = v210;
    v177 = __n;
    v176 = (__int64 (__fastcall **)())v208;
    v175 = (__int64 **)v207;
    v217 = (__int64 (__fastcall *)())v221;
    v216 = v220;
    v215 = v219;
    v214 = v218;
    v17 = (__int64 **)&v196;
    v22 = &v175;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v175,
      &v214);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v22);
  v15 = 7;
  v44 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v44 )
    goto LABEL_163;
  *(_DWORD *)((char *)v44 + 3) = 1936616821;
  *v44 = 1970040675;
  v203 = 7;
  v204 = (__int64 **)v44;
  v205 = 7;
  v219 = nullptr;
  v220 = 8;
  v221 = 0;
  LOBYTE(v218) = 4;
  v45 = &v207;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v207, &v184, &v203);
  if ( v207 == (__int64 *)0x8000000000000000LL )
  {
    v46 = v208;
    v47 = 32LL * (_QWORD)v210;
    v199 = *(__int64 (__fastcall **)())(v208 + 32LL * (_QWORD)v210 + 24);
    v198 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 16);
    v48 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210);
    v197 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 8);
    v196 = v48;
    *(_QWORD *)(v208 + v47 + 24) = v221;
    *(_QWORD *)(v46 + v47 + 16) = v220;
    v49 = v218;
    v50 = v219;
    *(_QWORD *)(v46 + v47 + 8) = v219;
    *(_QWORD *)(v46 + v47) = v49;
    if ( (_BYTE)v196 != 6 )
    {
      v45 = (__int64 **)&v196;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v181 = v213;
    v180 = v212;
    v179 = v211;
    v178 = v210;
    v177 = __n;
    v176 = (__int64 (__fastcall **)())v208;
    v175 = (__int64 **)v207;
    v217 = (__int64 (__fastcall *)())v221;
    v216 = v220;
    v215 = v219;
    v214 = v218;
    v45 = (__int64 **)&v196;
    v50 = &v175;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v175,
      &v214);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v50);
  v15 = 18;
  v61 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
  if ( !v61 )
    goto LABEL_163;
  qmemcpy(v61, "missingCoreColumns", 18);
  v203 = 18;
  v204 = (__int64 **)v61;
  v205 = 18;
  v219 = nullptr;
  v220 = 8;
  v221 = 0;
  LOBYTE(v218) = 4;
  v62 = &v207;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v207, &v184, &v203);
  if ( v207 == (__int64 *)0x8000000000000000LL )
  {
    v63 = v208;
    v64 = 32LL * (_QWORD)v210;
    v199 = *(__int64 (__fastcall **)())(v208 + 32LL * (_QWORD)v210 + 24);
    v198 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 16);
    v65 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210);
    v197 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 8);
    v196 = v65;
    *(_QWORD *)(v208 + v64 + 24) = v221;
    *(_QWORD *)(v63 + v64 + 16) = v220;
    v66 = v218;
    v67 = v219;
    *(_QWORD *)(v63 + v64 + 8) = v219;
    *(_QWORD *)(v63 + v64) = v66;
    if ( (_BYTE)v196 != 6 )
    {
      v62 = (__int64 **)&v196;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
    }
  }
  else
  {
    v181 = v213;
    v180 = v212;
    v179 = v211;
    v178 = v210;
    v177 = __n;
    v176 = (__int64 (__fastcall **)())v208;
    v175 = (__int64 **)v207;
    v217 = (__int64 (__fastcall *)())v221;
    v216 = v220;
    v215 = v219;
    v214 = v218;
    v62 = (__int64 **)&v196;
    v67 = &v175;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v175,
      &v214);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v67);
  v15 = 9;
  v68 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v68 )
LABEL_163:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v15);
  *(_QWORD *)v68 = 0x6F72724564616572LL;
  *(_BYTE *)(v68 + 8) = 114;
  v203 = 9;
  v204 = (__int64 **)v68;
  v205 = 9;
  v207 = nullptr;
  v208 = 1;
  __n = 0;
  v177 = 1610612768;
  v175 = &v207;
  v176 = &anon_92869709a5e99ce1936aa4e326b6c562_1257;
  if ( (unsigned __int8)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4(
                          &v188,
                          &v175) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_92869709a5e99ce1936aa4e326b6c562_1258,
      55,
      &v214,
      &anon_92869709a5e99ce1936aa4e326b6c562_1272,
      &anon_92869709a5e99ce1936aa4e326b6c562_1260);
  v69 = a1;
  v187 = (__int64)v207;
  __src = (void *)v208;
  v70 = __n;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v71 = 0;
    goto LABEL_50;
  }
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v188, &v175);
    v71 = 1;
    v72 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v70, 1);
    if ( !v72 )
LABEL_50:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v71, v70);
    v73 = v72;
  }
  else
  {
    v73 = 1;
  }
  memcpy((void *)v73, __src, v70);
  LOBYTE(v218) = 3;
  v219 = (__int64 ***)v70;
  v220 = v73;
  v221 = v70;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v207, &v184, &v203);
  a1 = v69;
  if ( v207 == (__int64 *)0x8000000000000000LL )
  {
    v102 = v208;
    v103 = 32LL * (_QWORD)v210;
    v199 = *(__int64 (__fastcall **)())(v208 + 32LL * (_QWORD)v210 + 24);
    v198 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 16);
    v104 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210);
    v197 = *(_QWORD *)(v208 + 32LL * (_QWORD)v210 + 8);
    v196 = v104;
    *(_QWORD *)(v208 + v103 + 24) = v221;
    *(_QWORD *)(v102 + v103 + 16) = v220;
    v105 = v218;
    *(_QWORD *)(v102 + v103 + 8) = v219;
    *(_QWORD *)(v102 + v103) = v105;
    v106 = v187;
    if ( (_BYTE)v196 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v196);
  }
  else
  {
    v181 = v213;
    v180 = v212;
    v179 = v211;
    v178 = v210;
    v177 = __n;
    v176 = (__int64 (__fastcall **)())v208;
    v175 = (__int64 **)v207;
    v217 = (__int64 (__fastcall *)())v221;
    v216 = v220;
    v215 = v219;
    v214 = v218;
    v106 = v187;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v196,
      &v175,
      &v214);
  }
  if ( v106 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v106, 1);
  *(_QWORD *)(a1 + 24) = v186;
  v107 = v184;
  *(_QWORD *)(a1 + 16) = v185;
  *(_QWORD *)(a1 + 8) = v107;
  *(_BYTE *)a1 = 5;
  core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v188);
  return a1;
}
