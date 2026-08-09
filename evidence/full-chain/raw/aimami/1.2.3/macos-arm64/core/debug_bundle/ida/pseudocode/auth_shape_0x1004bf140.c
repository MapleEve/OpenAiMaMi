// __ZN13codexmate_lib4core12debug_bundle10auth_shape @ 0x1004bf140 | 基线 same-set
// [FULL hexrays]

__int64 __fastcall codexmate_lib::core::debug_bundle::auth_shape::h2c97417e240a0b81(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rax
  char v7; // bl
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  size_t v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // rsi
  _QWORD *v22; // rax
  char v23; // al
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r14
  size_t v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r13
  const void *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 result; // rax
  __int64 *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  _QWORD *v45; // rsi
  void *v46; // rax
  __int64 *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  _QWORD *v52; // rsi
  void *v53; // rax
  __int64 *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  _QWORD *v59; // rsi
  void *v60; // rax
  char v61; // al
  __int64 *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rdx
  _QWORD *v67; // rsi
  void *v68; // rax
  char v69; // al
  __int64 *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rdx
  _QWORD *v75; // rsi
  void *v76; // rax
  char v77; // bl
  __int64 *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdx
  _QWORD *v83; // rsi
  _WORD *v84; // rax
  __int64 v85; // rbx
  void *v86; // rax
  __int64 v87; // r15
  __int64 *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rdx
  _QWORD *v93; // rsi
  void *v94; // rax
  __int64 v95; // r12
  __int64 *v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rdx
  _QWORD *v101; // rsi
  void *v102; // rax
  __int64 v103; // r14
  __int64 *v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rdx
  _QWORD *v109; // rsi
  void *v110; // rax
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rax
  _QWORD __src[22]; // [rsp+8h] [rbp-3F8h] BYREF
  _QWORD v123[3]; // [rsp+B8h] [rbp-348h] BYREF
  unsigned __int64 v124; // [rsp+D0h] [rbp-330h]
  const void *v125; // [rsp+D8h] [rbp-328h]
  _QWORD __dst[22]; // [rsp+E0h] [rbp-320h] BYREF
  __int64 v127; // [rsp+190h] [rbp-270h]
  unsigned __int64 v128; // [rsp+198h] [rbp-268h]
  _QWORD v129[2]; // [rsp+1A0h] [rbp-260h] BYREF
  size_t v130; // [rsp+1B0h] [rbp-250h]
  __int64 v131; // [rsp+1B8h] [rbp-248h]
  _QWORD v132[2]; // [rsp+1C0h] [rbp-240h] BYREF
  __int64 v133; // [rsp+1D0h] [rbp-230h]
  _QWORD v134[22]; // [rsp+1D8h] [rbp-228h] BYREF
  _QWORD v135[22]; // [rsp+288h] [rbp-178h] BYREF
  __int64 v136; // [rsp+338h] [rbp-C8h] BYREF
  void *v137; // [rsp+340h] [rbp-C0h]
  __int64 v138; // [rsp+348h] [rbp-B8h]
  void *v139; // [rsp+350h] [rbp-B0h]
  __int64 v140; // [rsp+358h] [rbp-A8h] BYREF
  _QWORD *v141; // [rsp+360h] [rbp-A0h]
  __int64 v142; // [rsp+368h] [rbp-98h]
  size_t v143; // [rsp+370h] [rbp-90h]
  __int64 v144; // [rsp+378h] [rbp-88h] BYREF
  _QWORD *v145; // [rsp+380h] [rbp-80h]
  __int64 v146; // [rsp+388h] [rbp-78h]
  size_t v147; // [rsp+390h] [rbp-70h]
  __int64 v148; // [rsp+398h] [rbp-68h] BYREF
  __int64 v149; // [rsp+3A0h] [rbp-60h]
  __int64 v150; // [rsp+3A8h] [rbp-58h]
  __int64 v151; // [rsp+3B0h] [rbp-50h]
  __int64 v152; // [rsp+3B8h] [rbp-48h]
  _QWORD *v153; // [rsp+3C0h] [rbp-40h]
  __int64 v154; // [rsp+3C8h] [rbp-38h]
  size_t v155; // [rsp+3D0h] [rbp-30h]

  v127 = a1;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 40);
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v3, v4);
  if ( __src[0] != 0x8000000000000001LL )
  {
    v124 = 0x8000000000000001LL;
    v139 = (void *)v3;
    memcpy(__dst, __src, sizeof(__dst));
    v132[0] = 0;
    v133 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src);
    v14 = 6;
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
    if ( !v15 )
      goto LABEL_139;
    *(_WORD *)(v15 + 4) = 29556;
    *(_DWORD *)v15 = 1936291941;
    v140 = 6;
    v141 = (_QWORD *)v15;
    v142 = 6;
    LOWORD(v152) = 257;
    v16 = v135;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v132, &v140);
    if ( v135[0] == 0x8000000000000000LL )
    {
      v17 = v135[1];
      v18 = 32LL * v135[3];
      v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
      v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
      v19 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
      v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
      v148 = v19;
      *(_QWORD *)(v135[1] + v18 + 24) = v155;
      *(_QWORD *)(v17 + v18 + 16) = v154;
      v20 = v152;
      v21 = v153;
      *(_QWORD *)(v17 + v18 + 8) = v153;
      *(_QWORD *)(v17 + v18) = v20;
      if ( (_BYTE)v148 != 6 )
      {
        v16 = &v148;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
      }
    }
    else
    {
      v134[6] = v135[6];
      v134[5] = v135[5];
      v134[4] = v135[4];
      v134[3] = v135[3];
      v134[2] = v135[2];
      v134[1] = v135[1];
      v134[0] = v135[0];
      v147 = v155;
      v146 = v154;
      v145 = v153;
      v144 = v152;
      v16 = &v148;
      v21 = v134;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v148,
        v134,
        &v144);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v21);
    v14 = 8;
    v22 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
    if ( !v22 )
      goto LABEL_139;
    *v22 = 0x65646F4D68747561LL;
    v140 = 8;
    v141 = v22;
    v142 = 8;
    if ( __dst[0] == 0x8000000000000000LL )
    {
      v128 = 0x8000000000000000LL;
      v23 = 0;
      goto LABEL_39;
    }
    v14 = __dst[2];
    if ( __dst[2] < 0LL )
    {
      v24 = 0;
      goto LABEL_16;
    }
    v128 = __dst[0];
    v31 = (const void *)__dst[1];
    if ( __dst[2] )
    {
      v125 = (const void *)__dst[1];
      v131 = v4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, __dst[1]);
      v24 = 1;
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1);
      if ( !v32 )
LABEL_16:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, v14);
      v3 = v32;
      v4 = v131;
      v31 = v125;
    }
    else
    {
      v3 = 1;
    }
    memcpy((void *)v3, v31, v14);
    v23 = 3;
LABEL_39:
    LOBYTE(v152) = v23;
    v153 = (_QWORD *)v14;
    v154 = v3;
    v155 = v14;
    v40 = v135;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v132, &v140);
    if ( v135[0] == 0x8000000000000000LL )
    {
      v41 = v135[1];
      v42 = 32LL * v135[3];
      v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
      v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
      v43 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
      v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
      v148 = v43;
      *(_QWORD *)(v135[1] + v42 + 24) = v155;
      *(_QWORD *)(v41 + v42 + 16) = v154;
      v44 = v152;
      v45 = v153;
      *(_QWORD *)(v41 + v42 + 8) = v153;
      *(_QWORD *)(v41 + v42) = v44;
      if ( (_BYTE)v148 != 6 )
      {
        v40 = &v148;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
      }
    }
    else
    {
      v134[6] = v135[6];
      v134[5] = v135[5];
      v134[4] = v135[4];
      v134[3] = v135[3];
      v134[2] = v135[2];
      v134[1] = v135[1];
      v134[0] = v135[0];
      v147 = v155;
      v146 = v154;
      v145 = v153;
      v144 = v152;
      v40 = &v148;
      v45 = v134;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v148,
        v134,
        &v144);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, v45);
    v14 = 15;
    v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
    if ( v46 )
    {
      qmemcpy(v46, "hasOpenAiApiKey", 15);
      v140 = 15;
      v141 = v46;
      v142 = 15;
      v131 = __dst[3];
      LOBYTE(v152) = 1;
      BYTE1(v152) = __dst[3] != 0x8000000000000000LL && __dst[5] != 0;
      v47 = v135;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v132, &v140);
      if ( v135[0] == 0x8000000000000000LL )
      {
        v48 = v135[1];
        v49 = 32LL * v135[3];
        v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
        v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
        v50 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
        v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
        v148 = v50;
        *(_QWORD *)(v135[1] + v49 + 24) = v155;
        *(_QWORD *)(v48 + v49 + 16) = v154;
        v51 = v152;
        v52 = v153;
        *(_QWORD *)(v48 + v49 + 8) = v153;
        *(_QWORD *)(v48 + v49) = v51;
        if ( (_BYTE)v148 != 6 )
        {
          v47 = &v148;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
        }
      }
      else
      {
        v134[6] = v135[6];
        v134[5] = v135[5];
        v134[4] = v135[4];
        v134[3] = v135[3];
        v134[2] = v135[2];
        v134[1] = v135[1];
        v134[0] = v135[0];
        v147 = v155;
        v146 = v154;
        v145 = v153;
        v144 = v152;
        v47 = &v148;
        v52 = v134;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v148,
          v134,
          &v144);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, v52);
      v14 = 18;
      v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
      if ( v53 )
      {
        qmemcpy(v53, "isRouterUnlockAuth", 18);
        v140 = 18;
        v141 = v53;
        v142 = 18;
        LOBYTE(v152) = 1;
        BYTE1(v152) = __dst[21];
        v54 = v135;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v132, &v140);
        if ( v135[0] == 0x8000000000000000LL )
        {
          v55 = v135[1];
          v56 = 32LL * v135[3];
          v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
          v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
          v57 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
          v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
          v148 = v57;
          *(_QWORD *)(v135[1] + v56 + 24) = v155;
          *(_QWORD *)(v55 + v56 + 16) = v154;
          v58 = v152;
          v59 = v153;
          *(_QWORD *)(v55 + v56 + 8) = v153;
          *(_QWORD *)(v55 + v56) = v58;
          if ( (_BYTE)v148 != 6 )
          {
            v54 = &v148;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
          }
        }
        else
        {
          v134[6] = v135[6];
          v134[5] = v135[5];
          v134[4] = v135[4];
          v134[3] = v135[3];
          v134[2] = v135[2];
          v134[1] = v135[1];
          v134[0] = v135[0];
          v147 = v155;
          v146 = v154;
          v145 = v153;
          v144 = v152;
          v54 = &v148;
          v59 = v134;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v148,
            v134,
            &v144);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v59);
        v60 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
        if ( v60 )
        {
          qmemcpy(v60, "routerUnlockActive", 18);
          v140 = 18;
          v141 = v60;
          v142 = 18;
          v61 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(a2);
          LOBYTE(v152) = 1;
          BYTE1(v152) = v61 == 1;
          v62 = v135;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v132, &v140);
          if ( v135[0] == 0x8000000000000000LL )
          {
            v63 = v135[1];
            v64 = 32LL * v135[3];
            v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
            v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
            v65 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
            v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
            v148 = v65;
            *(_QWORD *)(v135[1] + v64 + 24) = v155;
            *(_QWORD *)(v63 + v64 + 16) = v154;
            v66 = v152;
            v67 = v153;
            *(_QWORD *)(v63 + v64 + 8) = v153;
            *(_QWORD *)(v63 + v64) = v66;
            if ( (_BYTE)v148 != 6 )
            {
              v62 = &v148;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
            }
          }
          else
          {
            v134[6] = v135[6];
            v134[5] = v135[5];
            v134[4] = v135[4];
            v134[3] = v135[3];
            v134[2] = v135[2];
            v134[1] = v135[1];
            v134[0] = v135[0];
            v147 = v155;
            v146 = v154;
            v145 = v153;
            v144 = v152;
            v62 = &v148;
            v67 = v134;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v148,
              v134,
              &v144);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v67);
          v14 = 24;
          v68 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1);
          if ( v68 )
          {
            qmemcpy(v68, "routerUnlockMarkerExists", 24);
            v140 = 24;
            v141 = v68;
            v142 = 24;
            v69 = codexmate_lib::core::relay::router_unlock_auth::marker_exists::h2162276b7b4c6489(a2);
            LOBYTE(v152) = 1;
            BYTE1(v152) = v69;
            v70 = v135;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v132, &v140);
            if ( v135[0] == 0x8000000000000000LL )
            {
              v71 = v135[1];
              v72 = 32LL * v135[3];
              v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
              v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
              v73 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
              v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
              v148 = v73;
              *(_QWORD *)(v135[1] + v72 + 24) = v155;
              *(_QWORD *)(v71 + v72 + 16) = v154;
              v74 = v152;
              v75 = v153;
              *(_QWORD *)(v71 + v72 + 8) = v153;
              *(_QWORD *)(v71 + v72) = v74;
              if ( (_BYTE)v148 != 6 )
              {
                v70 = &v148;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
              }
            }
            else
            {
              v134[6] = v135[6];
              v134[5] = v135[5];
              v134[4] = v135[4];
              v134[3] = v135[3];
              v134[2] = v135[2];
              v134[1] = v135[1];
              v134[0] = v135[0];
              v147 = v155;
              v146 = v154;
              v145 = v153;
              v144 = v152;
              v70 = &v148;
              v75 = v134;
              alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                &v148,
                v134,
                &v144);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v75);
            v14 = 23;
            v76 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
            if ( v76 )
            {
              qmemcpy(v76, "hasUsableRealOauthLogin", 23);
              v140 = 23;
              v141 = v76;
              v142 = 23;
              codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(v134, v139, v4);
              if ( v134[0] == v124 )
              {
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v134[1]);
                v77 = 0;
              }
              else
              {
                memcpy(v135, v134, sizeof(v135));
                v77 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(v135);
                if ( v135[0] != 0x8000000000000000LL && v135[0] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135[1], v135[0], 1);
                if ( v135[3] != 0x8000000000000000LL && v135[3] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135[4], v135[3], 1);
                if ( v135[6] != 0x8000000000000000LL && v135[6] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135[7], v135[6], 1);
                if ( v135[9] != 0x8000000000000000LL && v135[9] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135[10], v135[9], 1);
                if ( v135[12] != 0x8000000000000000LL && v135[12] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135[13], v135[12], 1);
                if ( v135[15] != 0x8000000000000000LL && v135[15] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135[16], v135[15], 1);
                if ( v135[18] != 0x8000000000000000LL && v135[18] )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135[19], v135[18], 1);
              }
              LOBYTE(v152) = 1;
              BYTE1(v152) = v77;
              v78 = v135;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v132, &v140);
              if ( v135[0] == 0x8000000000000000LL )
              {
                v79 = v135[1];
                v80 = 32LL * v135[3];
                v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
                v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
                v81 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
                v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
                v148 = v81;
                *(_QWORD *)(v135[1] + v80 + 24) = v155;
                *(_QWORD *)(v79 + v80 + 16) = v154;
                v82 = v152;
                v83 = v153;
                *(_QWORD *)(v79 + v80 + 8) = v153;
                *(_QWORD *)(v79 + v80) = v82;
                if ( (_BYTE)v148 != 6 )
                {
                  v78 = &v148;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
                }
              }
              else
              {
                v134[6] = v135[6];
                v134[5] = v135[5];
                v134[4] = v135[4];
                v134[3] = v135[3];
                v134[2] = v135[2];
                v134[1] = v135[1];
                v134[0] = v135[0];
                v147 = v155;
                v146 = v154;
                v145 = v153;
                v144 = v152;
                v78 = &v148;
                v83 = v134;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v148,
                  v134,
                  &v144);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v78, v83);
              v14 = 6;
              v84 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
              if ( v84 )
              {
                v84[2] = 29550;
                *(_DWORD *)v84 = 1701539700;
                v123[0] = 6;
                v139 = v84;
                v123[1] = v84;
                v123[2] = 6;
                v129[0] = 0;
                v130 = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
                v85 = 10;
                v86 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
                if ( !v86 )
                  goto LABEL_140;
                qmemcpy(v86, "hasIdToken", 10);
                v136 = 10;
                v137 = v86;
                v138 = 10;
                v87 = __dst[6];
                LOBYTE(v152) = 1;
                BYTE1(v152) = __dst[6] != 0x8000000000000000LL && __dst[8] != 0;
                v88 = v135;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v129, &v136);
                if ( v135[0] == 0x8000000000000000LL )
                {
                  v89 = v135[1];
                  v90 = 32LL * v135[3];
                  v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
                  v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
                  v91 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
                  v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
                  v148 = v91;
                  *(_QWORD *)(v135[1] + v90 + 24) = v155;
                  *(_QWORD *)(v89 + v90 + 16) = v154;
                  v92 = v152;
                  v93 = v153;
                  *(_QWORD *)(v89 + v90 + 8) = v153;
                  *(_QWORD *)(v89 + v90) = v92;
                  if ( (_BYTE)v148 != 6 )
                  {
                    v88 = &v148;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
                  }
                }
                else
                {
                  v134[6] = v135[6];
                  v134[5] = v135[5];
                  v134[4] = v135[4];
                  v134[3] = v135[3];
                  v134[2] = v135[2];
                  v134[1] = v135[1];
                  v134[0] = v135[0];
                  v147 = v155;
                  v146 = v154;
                  v145 = v153;
                  v144 = v152;
                  v88 = &v148;
                  v93 = v134;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v148,
                    v134,
                    &v144);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v88, v93);
                v85 = 14;
                v94 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
                if ( !v94 )
                  goto LABEL_140;
                qmemcpy(v94, "hasAccessToken", 14);
                v136 = 14;
                v137 = v94;
                v138 = 14;
                v95 = __dst[9];
                LOBYTE(v152) = 1;
                BYTE1(v152) = __dst[9] != 0x8000000000000000LL && __dst[11] != 0;
                v96 = v135;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v129, &v136);
                if ( v135[0] == 0x8000000000000000LL )
                {
                  v97 = v135[1];
                  v98 = 32LL * v135[3];
                  v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
                  v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
                  v99 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
                  v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
                  v148 = v99;
                  *(_QWORD *)(v135[1] + v98 + 24) = v155;
                  *(_QWORD *)(v97 + v98 + 16) = v154;
                  v100 = v152;
                  v101 = v153;
                  *(_QWORD *)(v97 + v98 + 8) = v153;
                  *(_QWORD *)(v97 + v98) = v100;
                  if ( (_BYTE)v148 != 6 )
                  {
                    v96 = &v148;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
                  }
                }
                else
                {
                  v134[6] = v135[6];
                  v134[5] = v135[5];
                  v134[4] = v135[4];
                  v134[3] = v135[3];
                  v134[2] = v135[2];
                  v134[1] = v135[1];
                  v134[0] = v135[0];
                  v147 = v155;
                  v146 = v154;
                  v145 = v153;
                  v144 = v152;
                  v96 = &v148;
                  v101 = v134;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v148,
                    v134,
                    &v144);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v96, v101);
                v85 = 15;
                v102 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
                if ( !v102 )
                  goto LABEL_140;
                qmemcpy(v102, "hasRefreshToken", 15);
                v136 = 15;
                v137 = v102;
                v138 = 15;
                v103 = __dst[12];
                LOBYTE(v152) = 1;
                BYTE1(v152) = __dst[12] != 0x8000000000000000LL && __dst[14] != 0;
                v104 = v135;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v129, &v136);
                if ( v135[0] == 0x8000000000000000LL )
                {
                  v105 = v135[1];
                  v106 = 32LL * v135[3];
                  v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
                  v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
                  v107 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
                  v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
                  v148 = v107;
                  *(_QWORD *)(v135[1] + v106 + 24) = v155;
                  *(_QWORD *)(v105 + v106 + 16) = v154;
                  v108 = v152;
                  v109 = v153;
                  *(_QWORD *)(v105 + v106 + 8) = v153;
                  *(_QWORD *)(v105 + v106) = v108;
                  if ( (_BYTE)v148 != 6 )
                  {
                    v104 = &v148;
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
                  }
                }
                else
                {
                  v134[6] = v135[6];
                  v134[5] = v135[5];
                  v134[4] = v135[4];
                  v134[3] = v135[3];
                  v134[2] = v135[2];
                  v134[1] = v135[1];
                  v134[0] = v135[0];
                  v147 = v155;
                  v146 = v154;
                  v145 = v153;
                  v144 = v152;
                  v104 = &v148;
                  v109 = v134;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v148,
                    v134,
                    &v144);
                }
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v104, v109);
                v85 = 12;
                v110 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
                if ( !v110 )
LABEL_140:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v85);
                qmemcpy(v110, "hasAccountId", 12);
                v136 = 12;
                v137 = v110;
                v138 = 12;
                v111 = __dst[15];
                LOBYTE(v152) = 1;
                BYTE1(v152) = __dst[15] != 0x8000000000000000LL && __dst[17] != 0;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v129, &v136);
                if ( v135[0] == 0x8000000000000000LL )
                {
                  v112 = v135[1];
                  v113 = 32LL * v135[3];
                  v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
                  v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
                  v114 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
                  v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
                  v148 = v114;
                  *(_QWORD *)(v135[1] + v113 + 24) = v155;
                  *(_QWORD *)(v112 + v113 + 16) = v154;
                  v115 = v152;
                  *(_QWORD *)(v112 + v113 + 8) = v153;
                  *(_QWORD *)(v112 + v113) = v115;
                  if ( (_BYTE)v148 != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
                }
                else
                {
                  v134[6] = v135[6];
                  v134[5] = v135[5];
                  v134[4] = v135[4];
                  v134[3] = v135[3];
                  v134[2] = v135[2];
                  v134[1] = v135[1];
                  v134[0] = v135[0];
                  v147 = v155;
                  v146 = v154;
                  v145 = v153;
                  v144 = v152;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v148,
                    v134,
                    &v144);
                }
                v141 = (_QWORD *)v129[0];
                v142 = v129[1];
                v143 = v130;
                LOBYTE(v140) = 5;
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(v135, v132, v123);
                if ( v135[0] == 0x8000000000000000LL )
                {
                  v116 = v135[1];
                  v117 = 32LL * v135[3];
                  v151 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 24);
                  v150 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 16);
                  v118 = *(_QWORD *)(v135[1] + 32LL * v135[3]);
                  v149 = *(_QWORD *)(v135[1] + 32LL * v135[3] + 8);
                  v148 = v118;
                  *(_QWORD *)(v135[1] + v117 + 24) = v143;
                  *(_QWORD *)(v116 + v117 + 16) = v142;
                  v119 = v140;
                  *(_QWORD *)(v116 + v117 + 8) = v141;
                  *(_QWORD *)(v116 + v117) = v119;
                  if ( (_BYTE)v148 != 6 )
                    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
                }
                else
                {
                  v134[6] = v135[6];
                  v134[5] = v135[5];
                  v134[4] = v135[4];
                  v134[3] = v135[3];
                  v134[2] = v135[2];
                  v134[1] = v135[1];
                  v134[0] = v135[0];
                  v147 = v143;
                  v146 = v142;
                  v145 = v141;
                  v144 = v140;
                  alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                    &v148,
                    v134,
                    &v144);
                }
                v120 = v127;
                *(_QWORD *)(v127 + 24) = v133;
                v121 = v132[0];
                *(_QWORD *)(v120 + 16) = v132[1];
                *(_QWORD *)(v120 + 8) = v121;
                *(_BYTE *)v120 = 5;
                if ( v128 != 0x8000000000000000LL && v128 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], v128, 1);
                if ( v131 != 0x8000000000000000LL && v131 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], v131, 1);
                result = 0x8000000000000000LL;
                if ( v87 != 0x8000000000000000LL && v87 )
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], v87, 1);
                if ( v95 != 0x8000000000000000LL && v95 )
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], v95, 1);
                if ( v103 != 0x8000000000000000LL && v103 )
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], v103, 1);
                if ( v111 != 0x8000000000000000LL && v111 )
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], v111, 1);
                if ( __dst[18] != 0x8000000000000000LL && __dst[18] )
                  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1);
                return result;
              }
            }
          }
        }
      }
    }
LABEL_139:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v14);
  }
  qmemcpy(v135, &__src[1], 0x60u);
  v136 = 0;
  v138 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v135[12], &__src[13]);
  v5 = 6;
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v6 )
    goto LABEL_141;
  *(_WORD *)(v6 + 4) = 29556;
  *(_DWORD *)v6 = 1936291941;
  v140 = 6;
  v141 = (_QWORD *)v6;
  v142 = 6;
  std::sys::fs::metadata::h32fa16d3052ea535(v134, v3, v4);
  v7 = v134[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    v134[0],
    v134[1]);
  LOBYTE(v152) = 1;
  BYTE1(v152) = v7 ^ 1;
  v8 = __dst;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v136, &v140);
  if ( __dst[0] == 0x8000000000000000LL )
  {
    v9 = __dst[1];
    v10 = 32LL * __dst[3];
    v151 = *(_QWORD *)(__dst[1] + 32LL * __dst[3] + 24);
    v150 = *(_QWORD *)(__dst[1] + 32LL * __dst[3] + 16);
    v11 = *(_QWORD *)(__dst[1] + 32LL * __dst[3]);
    v149 = *(_QWORD *)(__dst[1] + 32LL * __dst[3] + 8);
    v148 = v11;
    *(_QWORD *)(__dst[1] + v10 + 24) = v155;
    *(_QWORD *)(v9 + v10 + 16) = v154;
    v12 = v152;
    v13 = v153;
    *(_QWORD *)(v9 + v10 + 8) = v153;
    *(_QWORD *)(v9 + v10) = v12;
    if ( (_BYTE)v148 != 6 )
    {
      v8 = &v148;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
    }
  }
  else
  {
    v134[6] = __dst[6];
    v134[5] = __dst[5];
    v134[4] = __dst[4];
    v134[3] = __dst[3];
    v134[2] = __dst[2];
    v134[1] = __dst[1];
    v134[0] = __dst[0];
    v147 = v155;
    v146 = v154;
    v145 = v153;
    v144 = v152;
    v8 = &v148;
    v13 = v134;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v148,
      v134,
      &v144);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v13);
  v5 = 5;
  v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v25 )
LABEL_141:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5);
  *(_BYTE *)(v25 + 4) = 114;
  *(_DWORD *)v25 = 1869771365;
  v140 = 5;
  v141 = (_QWORD *)v25;
  v142 = 5;
  __dst[0] = 0;
  __dst[1] = 1;
  __dst[2] = 0;
  v134[2] = 1610612768;
  v134[0] = __dst;
  v134[1] = &anon_92869709a5e99ce1936aa4e326b6c562_1257;
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                          v135,
                          v134) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_92869709a5e99ce1936aa4e326b6c562_1258,
      55,
      &v148,
      &anon_92869709a5e99ce1936aa4e326b6c562_1272,
      &anon_92869709a5e99ce1936aa4e326b6c562_1260);
  v26 = __dst[0];
  v139 = (void *)__dst[1];
  v27 = __dst[2];
  if ( __dst[2] < 0LL )
  {
    v28 = 0;
    goto LABEL_22;
  }
  if ( __dst[2] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v135, v134);
    v28 = 1;
    v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1);
    if ( !v29 )
LABEL_22:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v27);
    v30 = v29;
  }
  else
  {
    v30 = 1;
  }
  memcpy((void *)v30, v139, v27);
  LOBYTE(v152) = 3;
  v153 = (_QWORD *)v27;
  v154 = v30;
  v155 = v27;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(__dst, &v136, &v140);
  if ( __dst[0] == 0x8000000000000000LL )
  {
    v33 = __dst[1];
    v34 = 32LL * __dst[3];
    v151 = *(_QWORD *)(__dst[1] + 32LL * __dst[3] + 24);
    v150 = *(_QWORD *)(__dst[1] + 32LL * __dst[3] + 16);
    v35 = *(_QWORD *)(__dst[1] + 32LL * __dst[3]);
    v149 = *(_QWORD *)(__dst[1] + 32LL * __dst[3] + 8);
    v148 = v35;
    *(_QWORD *)(__dst[1] + v34 + 24) = v155;
    *(_QWORD *)(v33 + v34 + 16) = v154;
    v36 = v152;
    *(_QWORD *)(v33 + v34 + 8) = v153;
    *(_QWORD *)(v33 + v34) = v36;
    if ( (_BYTE)v148 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148);
  }
  else
  {
    v134[6] = __dst[6];
    v134[5] = __dst[5];
    v134[4] = __dst[4];
    v134[3] = __dst[3];
    v134[2] = __dst[2];
    v134[1] = __dst[1];
    v134[0] = __dst[0];
    v147 = v155;
    v146 = v154;
    v145 = v153;
    v144 = v152;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v148,
      v134,
      &v144);
  }
  if ( v26 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v26, 1);
  v37 = v127;
  *(_QWORD *)(v127 + 24) = v138;
  v38 = v136;
  *(_QWORD *)(v37 + 16) = v137;
  *(_QWORD *)(v37 + 8) = v38;
  *(_BYTE *)v37 = 5;
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v135);
}
