// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::platform::paths::CodexPaths as core::clone::Clone>::clone::hf6c0d3e83be86178 @ 0x1006e6a80 | full-body via IDA decompiler
__int64 __fastcall _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(
        size_t *a1,
        _QWORD *a2)
{
  const void *v4; // rbx
  size_t v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  const void *v8; // rsi
  const void *v9; // rbx
  size_t v10; // r12
  const void *v11; // rsi
  const void *v12; // rbx
  size_t v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdi
  const void *v16; // rsi
  const void *v17; // rbx
  size_t v18; // rcx
  size_t v19; // r14
  __int64 v20; // rax
  const void *v21; // rsi
  const void *v22; // rbx
  size_t v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdi
  const void *v26; // rsi
  const void *v27; // rbx
  size_t v28; // r12
  __int64 v29; // rax
  const void *v30; // rbx
  size_t v31; // r12
  __int64 v32; // rax
  __int64 v33; // rdi
  const void *v34; // rsi
  const void *v35; // rbx
  size_t v36; // rcx
  size_t v37; // r14
  __int64 v38; // rax
  const void *v39; // rsi
  const void *v40; // rbx
  size_t v41; // r12
  __int64 v42; // rax
  __int64 v43; // rdi
  const void *v44; // rsi
  const void *v45; // rbx
  size_t v46; // r12
  const void *v47; // rsi
  const void *v48; // rbx
  size_t v49; // r12
  __int64 v50; // rax
  __int64 v51; // rdi
  const void *v52; // rsi
  const void *v53; // rbx
  size_t v54; // rcx
  size_t v55; // r12
  __int64 v56; // rax
  const void *v57; // rsi
  const void *v58; // rbx
  size_t v59; // r14
  __int64 v60; // rax
  __int64 v61; // rdi
  const void *v62; // rsi
  const void *v63; // rbx
  size_t v64; // rcx
  size_t v65; // r14
  __int64 v66; // rax
  const void *v67; // rsi
  const void *v68; // rbx
  size_t v69; // r14
  __int64 v70; // rax
  __int64 v71; // rdi
  const void *v72; // rsi
  const void *v73; // rbx
  size_t v74; // rcx
  size_t v75; // r12
  __int64 v76; // rax
  const void *v77; // rsi
  const void *v78; // rbx
  size_t v79; // rcx
  __int64 v80; // rax
  size_t v81; // r14
  __int64 v82; // rdi
  const void *v83; // rsi
  const void *v84; // rbx
  size_t v85; // rcx
  size_t v86; // r14
  __int64 v87; // rax
  const void *v88; // rsi
  const void *v89; // rbx
  size_t v90; // r12
  __int64 v91; // rax
  __int64 v92; // rdi
  const void *v93; // rsi
  const void *v94; // rbx
  size_t v95; // r12
  const void *v96; // rsi
  const void *v97; // rbx
  size_t v98; // r12
  __int64 v99; // rax
  __int64 v100; // rdi
  const void *v101; // rsi
  const void *v102; // rbx
  size_t v103; // r14
  const void *v104; // rsi
  const void *v105; // rbx
  size_t v106; // r14
  __int64 v107; // rax
  __int64 v108; // rdi
  const void *v109; // rsi
  const void *v110; // rbx
  size_t v111; // r12
  const void *v112; // rsi
  const void *v113; // rbx
  size_t v114; // r12
  __int64 v115; // rax
  __int64 v116; // rdi
  const void *v117; // rsi
  const void *v118; // rbx
  size_t v119; // r14
  const void *v120; // rsi
  const void *v121; // rbx
  size_t v122; // r14
  __int64 v123; // rax
  __int64 v124; // rdi
  const void *v125; // rsi
  const void *v126; // rbx
  size_t v127; // rcx
  size_t v128; // r12
  __int64 v129; // rax
  const void *v130; // rsi
  const void *v131; // rbx
  size_t v132; // r14
  __int64 v133; // rax
  __int64 v134; // rdi
  const void *v135; // rsi
  const void *v136; // r14
  size_t v137; // rbx
  const void *v138; // rsi
  const void *v139; // r14
  size_t v140; // r13
  __int64 v141; // r12
  __int64 v143; // [rsp+0h] [rbp-200h]
  __int64 v144; // [rsp+8h] [rbp-1F8h]
  __int64 v145; // [rsp+10h] [rbp-1F0h]
  __int64 v146; // [rsp+18h] [rbp-1E8h]
  __int64 v147; // [rsp+20h] [rbp-1E0h]
  __int64 v148; // [rsp+28h] [rbp-1D8h]
  __int64 v149; // [rsp+30h] [rbp-1D0h]
  __int64 v150; // [rsp+38h] [rbp-1C8h]
  __int64 v151; // [rsp+40h] [rbp-1C0h]
  __int64 v152; // [rsp+48h] [rbp-1B8h]
  __int64 v153; // [rsp+50h] [rbp-1B0h]
  __int64 v154; // [rsp+58h] [rbp-1A8h]
  __int64 v155; // [rsp+60h] [rbp-1A0h]
  __int64 v156; // [rsp+68h] [rbp-198h]
  __int64 v157; // [rsp+70h] [rbp-190h]
  __int64 v158; // [rsp+78h] [rbp-188h]
  size_t v159; // [rsp+80h] [rbp-180h]
  size_t v160; // [rsp+88h] [rbp-178h]
  size_t v161; // [rsp+90h] [rbp-170h]
  size_t v162; // [rsp+98h] [rbp-168h]
  size_t v163; // [rsp+A0h] [rbp-160h]
  size_t v164; // [rsp+A8h] [rbp-158h]
  size_t v165; // [rsp+B0h] [rbp-150h]
  size_t v166; // [rsp+B8h] [rbp-148h]
  size_t v167; // [rsp+C0h] [rbp-140h]
  size_t v168; // [rsp+C8h] [rbp-138h]
  size_t v169; // [rsp+D0h] [rbp-130h]
  size_t v170; // [rsp+D8h] [rbp-128h]
  size_t v171; // [rsp+E0h] [rbp-120h]
  size_t v172; // [rsp+E8h] [rbp-118h]
  size_t v173; // [rsp+F0h] [rbp-110h]
  size_t v174; // [rsp+F8h] [rbp-108h]
  size_t v175; // [rsp+100h] [rbp-100h]
  size_t v176; // [rsp+108h] [rbp-F8h]
  size_t v177; // [rsp+110h] [rbp-F0h]
  size_t v178; // [rsp+118h] [rbp-E8h]
  size_t v179; // [rsp+120h] [rbp-E0h]
  size_t v180; // [rsp+128h] [rbp-D8h]
  size_t v181; // [rsp+130h] [rbp-D0h]
  size_t v182; // [rsp+138h] [rbp-C8h]
  size_t v183; // [rsp+140h] [rbp-C0h]
  size_t v184; // [rsp+148h] [rbp-B8h]
  size_t v185; // [rsp+150h] [rbp-B0h]
  size_t v186; // [rsp+158h] [rbp-A8h]
  __int64 __dst; // [rsp+160h] [rbp-A0h]
  __int64 v188; // [rsp+168h] [rbp-98h]
  __int64 v189; // [rsp+170h] [rbp-90h]
  __int64 v190; // [rsp+178h] [rbp-88h]
  __int64 v191; // [rsp+180h] [rbp-80h]
  __int64 v192; // [rsp+188h] [rbp-78h]
  __int64 v193; // [rsp+190h] [rbp-70h]
  __int64 v194; // [rsp+198h] [rbp-68h]
  __int64 v195; // [rsp+1A0h] [rbp-60h]
  __int64 v196; // [rsp+1A8h] [rbp-58h]
  __int64 v197; // [rsp+1B0h] [rbp-50h]
  __int64 v198; // [rsp+1B8h] [rbp-48h]
  __int64 v199; // [rsp+1C0h] [rbp-40h]
  __int64 v200; // [rsp+1C8h] [rbp-38h]
  unsigned __int64 v201; // [rsp+1D0h] [rbp-30h]

  v4 = (const void *)a2[1];
  v5 = a2[2];
  v6 = 1;
  __dst = 1;
  if ( v5 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1);
    if ( !v6 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5);
  }
  v143 = v6;
  v7 = v6;
  v8 = v4;
  memcpy((void *)v6, v4, v5);
  v9 = (const void *)a2[4];
  v10 = a2[5];
  v159 = v5;
  if ( v10 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v8);
    __dst = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1);
    if ( !__dst )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v10);
  }
  v11 = v9;
  v160 = v10;
  memcpy((void *)__dst, v9, v10);
  v12 = (const void *)a2[7];
  v13 = a2[8];
  v14 = 1;
  v188 = 1;
  if ( v13 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v11);
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 1);
    if ( !v14 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13);
  }
  v144 = v14;
  v15 = v14;
  v16 = v12;
  v161 = v13;
  memcpy((void *)v14, v12, v13);
  v17 = (const void *)a2[10];
  v18 = a2[11];
  if ( v18 )
  {
    v19 = a2[11];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v16);
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1);
    v18 = v19;
    v188 = v20;
    if ( !v20 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19);
  }
  v21 = v17;
  v162 = v18;
  memcpy((void *)v188, v17, v18);
  v22 = (const void *)a2[13];
  v23 = a2[14];
  if ( v23 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v188, v21);
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1);
    if ( !v24 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23);
  }
  else
  {
    v24 = 1;
  }
  v145 = v24;
  v25 = v24;
  v26 = v22;
  v163 = v23;
  memcpy((void *)v24, v22, v23);
  if ( __OFSUB__(0, a2[90]) )
  {
    v201 = 0x8000000000000000LL;
  }
  else
  {
    v27 = (const void *)a2[91];
    v28 = a2[92];
    if ( v28 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v26);
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1);
      if ( !v29 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28);
    }
    else
    {
      v29 = 1;
    }
    v158 = v29;
    v25 = v29;
    v26 = v27;
    v201 = v28;
    memcpy((void *)v29, v27, v28);
  }
  v30 = (const void *)a2[16];
  v31 = a2[17];
  v32 = 1;
  v189 = 1;
  if ( v31 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v26);
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v31, 1);
    if ( !v32 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v31);
  }
  v146 = v32;
  v33 = v32;
  v34 = v30;
  v164 = v31;
  memcpy((void *)v32, v30, v31);
  v35 = (const void *)a2[19];
  v36 = a2[20];
  if ( v36 )
  {
    v37 = a2[20];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v34);
    v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1);
    v36 = v37;
    v189 = v38;
    if ( !v38 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v37);
  }
  v39 = v35;
  v165 = v36;
  memcpy((void *)v189, v35, v36);
  v40 = (const void *)a2[22];
  v41 = a2[23];
  v42 = 1;
  v190 = 1;
  if ( v41 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v189, v39);
    v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v41, 1);
    if ( !v42 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v41);
  }
  v147 = v42;
  v43 = v42;
  v44 = v40;
  v166 = v41;
  memcpy((void *)v42, v40, v41);
  v45 = (const void *)a2[25];
  v46 = a2[26];
  if ( v46 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43, v44);
    v190 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v46, 1);
    if ( !v190 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v46);
  }
  v47 = v45;
  v167 = v46;
  memcpy((void *)v190, v45, v46);
  v48 = (const void *)a2[28];
  v49 = a2[29];
  v50 = 1;
  v191 = 1;
  if ( v49 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v190, v47);
    v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v49, 1);
    if ( !v50 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v49);
  }
  v148 = v50;
  v51 = v50;
  v52 = v48;
  memcpy((void *)v50, v48, v49);
  v53 = (const void *)a2[31];
  v54 = a2[32];
  v168 = v49;
  if ( v54 )
  {
    v55 = a2[32];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v52);
    v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v55, 1);
    v54 = v55;
    v191 = v56;
    if ( !v56 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v55);
  }
  v57 = v53;
  v169 = v54;
  memcpy((void *)v191, v53, v54);
  v58 = (const void *)a2[34];
  v59 = a2[35];
  v60 = 1;
  v192 = 1;
  if ( v59 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v191, v57);
    v60 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v59, 1);
    if ( !v60 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v59);
  }
  v149 = v60;
  v61 = v60;
  v62 = v58;
  memcpy((void *)v60, v58, v59);
  v63 = (const void *)a2[37];
  v64 = a2[38];
  v170 = v59;
  if ( v64 )
  {
    v65 = a2[38];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, v62);
    v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v65, 1);
    v64 = v65;
    v192 = v66;
    if ( !v66 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v65);
  }
  v67 = v63;
  v171 = v64;
  memcpy((void *)v192, v63, v64);
  v68 = (const void *)a2[40];
  v69 = a2[41];
  v70 = 1;
  v193 = 1;
  if ( v69 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v192, v67);
    v70 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v69, 1);
    if ( !v70 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v69);
  }
  v150 = v70;
  v71 = v70;
  v72 = v68;
  memcpy((void *)v70, v68, v69);
  v73 = (const void *)a2[43];
  v74 = a2[44];
  v172 = v69;
  if ( v74 )
  {
    v75 = a2[44];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v71, v72);
    v76 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v75, 1);
    v74 = v75;
    v193 = v76;
    if ( !v76 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v75);
  }
  v77 = v73;
  v173 = v74;
  memcpy((void *)v193, v73, v74);
  v78 = (const void *)a2[46];
  v79 = a2[47];
  v80 = 1;
  v194 = 1;
  if ( v79 )
  {
    v81 = a2[47];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v193, v77);
    v80 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v81, 1);
    v79 = v81;
    if ( !v80 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v81);
  }
  v151 = v80;
  v82 = v80;
  v83 = v78;
  v174 = v79;
  memcpy((void *)v80, v78, v79);
  v84 = (const void *)a2[49];
  v85 = a2[50];
  if ( v85 )
  {
    v86 = a2[50];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v82, v83);
    v87 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v86, 1);
    v85 = v86;
    v194 = v87;
    if ( !v87 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v86);
  }
  v88 = v84;
  v175 = v85;
  memcpy((void *)v194, v84, v85);
  v89 = (const void *)a2[52];
  v90 = a2[53];
  v91 = 1;
  v195 = 1;
  if ( v90 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v194, v88);
    v91 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v90, 1);
    if ( !v91 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v90);
  }
  v152 = v91;
  v92 = v91;
  v93 = v89;
  v176 = v90;
  memcpy((void *)v91, v89, v90);
  v94 = (const void *)a2[55];
  v95 = a2[56];
  if ( v95 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v92, v93);
    v195 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v95, 1);
    if ( !v195 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v95);
  }
  v96 = v94;
  v177 = v95;
  memcpy((void *)v195, v94, v95);
  v97 = (const void *)a2[58];
  v98 = a2[59];
  v99 = 1;
  v196 = 1;
  if ( v98 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v195, v96);
    v99 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v98, 1);
    if ( !v99 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v98);
  }
  v153 = v99;
  v100 = v99;
  v101 = v97;
  memcpy((void *)v99, v97, v98);
  v102 = (const void *)a2[61];
  v103 = a2[62];
  v178 = v98;
  if ( v103 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v100, v101);
    v196 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v103, 1);
    if ( !v196 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v103);
  }
  v104 = v102;
  v179 = v103;
  memcpy((void *)v196, v102, v103);
  v105 = (const void *)a2[64];
  v106 = a2[65];
  v107 = 1;
  v197 = 1;
  if ( v106 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v196, v104);
    v107 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v106, 1);
    if ( !v107 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v106);
  }
  v154 = v107;
  v108 = v107;
  v109 = v105;
  memcpy((void *)v107, v105, v106);
  v110 = (const void *)a2[67];
  v111 = a2[68];
  v180 = v106;
  if ( v111 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v108, v109);
    v197 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v111, 1);
    if ( !v197 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v111);
  }
  v112 = v110;
  v181 = v111;
  memcpy((void *)v197, v110, v111);
  v113 = (const void *)a2[70];
  v114 = a2[71];
  v115 = 1;
  v198 = 1;
  if ( v114 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v197, v112);
    v115 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v114, 1);
    if ( !v115 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v114);
  }
  v155 = v115;
  v116 = v115;
  v117 = v113;
  memcpy((void *)v115, v113, v114);
  v118 = (const void *)a2[73];
  v119 = a2[74];
  v182 = v114;
  if ( v119 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v116, v117);
    v198 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v119, 1);
    if ( !v198 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v119);
  }
  v120 = v118;
  v183 = v119;
  memcpy((void *)v198, v118, v119);
  v121 = (const void *)a2[76];
  v122 = a2[77];
  v123 = 1;
  v199 = 1;
  if ( v122 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v198, v120);
    v123 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v122, 1);
    if ( !v123 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v122);
  }
  v156 = v123;
  v124 = v123;
  v125 = v121;
  memcpy((void *)v123, v121, v122);
  v126 = (const void *)a2[79];
  v127 = a2[80];
  v184 = v122;
  if ( v127 )
  {
    v128 = a2[80];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v124, v125);
    v129 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v128, 1);
    v127 = v128;
    v199 = v129;
    if ( !v129 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v128);
  }
  v130 = v126;
  v185 = v127;
  memcpy((void *)v199, v126, v127);
  v131 = (const void *)a2[82];
  v132 = a2[83];
  v133 = 1;
  v200 = 1;
  if ( v132 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v199, v130);
    v133 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v132, 1);
    if ( !v133 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v132);
  }
  v157 = v133;
  v134 = v133;
  v135 = v131;
  v186 = v132;
  memcpy((void *)v133, v131, v132);
  v136 = (const void *)a2[85];
  v137 = a2[86];
  if ( v137 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v134, v135);
    v200 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v137, 1);
    if ( !v200 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v137);
  }
  v138 = v136;
  memcpy((void *)v200, v136, v137);
  v139 = (const void *)a2[88];
  v140 = a2[89];
  if ( v140 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v200, v138);
    v141 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v140, 1);
    if ( !v141 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v140);
  }
  else
  {
    v141 = 1;
  }
  memcpy((void *)v141, v139, v140);
  a1[87] = v140;
  a1[88] = v141;
  a1[89] = v140;
  *a1 = v159;
  a1[1] = v143;
  a1[2] = v159;
  a1[3] = v160;
  a1[4] = __dst;
  a1[5] = v160;
  a1[6] = v161;
  a1[7] = v144;
  a1[8] = v161;
  a1[9] = v162;
  a1[10] = v188;
  a1[11] = v162;
  a1[12] = v163;
  a1[13] = v145;
  a1[14] = v163;
  a1[90] = v201;
  a1[91] = v158;
  a1[92] = v201;
  a1[15] = v164;
  a1[16] = v146;
  a1[17] = v164;
  a1[18] = v165;
  a1[19] = v189;
  a1[20] = v165;
  a1[21] = v166;
  a1[22] = v147;
  a1[23] = v166;
  a1[24] = v167;
  a1[25] = v190;
  a1[26] = v167;
  a1[27] = v168;
  a1[28] = v148;
  a1[29] = v168;
  a1[30] = v169;
  a1[31] = v191;
  a1[32] = v169;
  a1[33] = v170;
  a1[34] = v149;
  a1[35] = v170;
  a1[36] = v171;
  a1[37] = v192;
  a1[38] = v171;
  a1[39] = v172;
  a1[40] = v150;
  a1[41] = v172;
  a1[42] = v173;
  a1[43] = v193;
  a1[44] = v173;
  a1[45] = v174;
  a1[46] = v151;
  a1[47] = v174;
  a1[48] = v175;
  a1[49] = v194;
  a1[50] = v175;
  a1[51] = v176;
  a1[52] = v152;
  a1[53] = v176;
  a1[54] = v177;
  a1[55] = v195;
  a1[56] = v177;
  a1[57] = v178;
  a1[58] = v153;
  a1[59] = v178;
  a1[60] = v179;
  a1[61] = v196;
  a1[62] = v179;
  a1[63] = v180;
  a1[64] = v154;
  a1[65] = v180;
  a1[66] = v181;
  a1[67] = v197;
  a1[68] = v181;
  a1[69] = v182;
  a1[70] = v155;
  a1[71] = v182;
  a1[72] = v183;
  a1[73] = v198;
  a1[74] = v183;
  a1[75] = v184;
  a1[76] = v156;
  a1[77] = v184;
  a1[78] = v185;
  a1[79] = v199;
  a1[80] = v185;
  a1[81] = v186;
  a1[82] = v157;
  a1[83] = v186;
  a1[84] = v137;
  a1[85] = v200;
  a1[86] = v137;
  return v200;
}
