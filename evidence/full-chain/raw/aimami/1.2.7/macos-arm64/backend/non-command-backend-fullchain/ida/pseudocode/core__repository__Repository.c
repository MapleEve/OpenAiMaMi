// aimami 1.2.7 mac truly_undone deep reverse — cluster core/repository/Repository
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::repository::Repository::rebuild_registry_state::hefa9a5a8b2d5a759 @ 0x10024e590 size=11758 lines=1353 =====
__int64 __fastcall codexmate_lib::core::repository::Repository::rebuild_registry_state::hefa9a5a8b2d5a759(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  _QWORD *v11; // r12
  __int64 result; // rax
  size_t v13; // r14
  _QWORD *v14; // rsi
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  void **v17; // rdi
  __int64 v18; // rdx
  void *v19; // r15
  __int64 v20; // rax
  _QWORD *v21; // r14
  __int64 v22; // r12
  void **v23; // r15
  __int64 v24; // rbx
  __int64 v25; // r13
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  __m128 v29; // xmm0
  char v30; // si
  char v31; // dl
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // r12
  __int64 v37; // rsi
  char *v38; // rsi
  _OWORD *v39; // rdi
  char v40; // bl
  __int64 v41; // rcx
  _QWORD *v42; // r12
  size_t v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // r14
  __int64 v47; // r13
  size_t v48; // r15
  __int64 v49; // rbx
  const void *v50; // r15
  size_t v51; // r14
  void *v52; // rbx
  __int64 v53; // r8
  char v54; // al
  char v55; // bl
  _QWORD *v56; // r15
  void *v57; // rsi
  size_t v58; // rdx
  void *v59; // r8
  void *v60; // rbx
  int v61; // eax
  char v62; // al
  char v63; // al
  void *v64; // r15
  size_t v65; // r12
  size_t v66; // r13
  unsigned int v67; // r13d
  unsigned int v68; // eax
  __int64 v69; // r15
  __int64 v70; // rbx
  __int128 v71; // kr50_16
  __int64 v72; // r14
  const void *v73; // r12
  size_t v74; // r15
  __int64 v75; // rbx
  __int64 v76; // r14
  __int64 v77; // rbx
  void *v78; // rbx
  _QWORD *v79; // rdi
  __int64 v80; // rbx
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 v83; // r14
  void *v84; // r15
  char v85; // bl
  _QWORD *v86; // rax
  size_t v87; // rbx
  size_t v88; // r12
  __int64 v89; // r14
  size_t v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // rax
  _OWORD *v93; // rcx
  char *v94; // rsi
  _QWORD *v95; // rdx
  __int64 v96; // rax
  _QWORD *v97; // rdx
  __int64 v98; // rax
  __int64 v99; // r12
  __int64 v100; // rbx
  __int64 v101; // r14
  __int64 v102; // r13
  __int64 v103; // rax
  __int64 v104; // rbx
  _QWORD *v105; // rdi
  __int64 v106; // rax
  __int64 v107; // [rsp+8h] [rbp-968h]
  _QWORD v108[3]; // [rsp+28h] [rbp-948h] BYREF
  _QWORD v109[3]; // [rsp+40h] [rbp-930h] BYREF
  _QWORD v110[2]; // [rsp+58h] [rbp-918h] BYREF
  _OWORD __dst[11]; // [rsp+68h] [rbp-908h] BYREF
  _QWORD *v112; // [rsp+118h] [rbp-858h] BYREF
  size_t v113[12]; // [rsp+120h] [rbp-850h] BYREF
  _BYTE v114[72]; // [rsp+180h] [rbp-7F0h] BYREF
  _OWORD __src[11]; // [rsp+1C8h] [rbp-7A8h] BYREF
  _QWORD v116[11]; // [rsp+278h] [rbp-6F8h] BYREF
  void *v117; // [rsp+2D0h] [rbp-6A0h] BYREF
  __int64 v118; // [rsp+2D8h] [rbp-698h]
  __int128 v119; // [rsp+2E0h] [rbp-690h]
  void *v120[22]; // [rsp+2F8h] [rbp-678h] BYREF
  _QWORD v121[12]; // [rsp+3A8h] [rbp-5C8h] BYREF
  __int64 v122; // [rsp+408h] [rbp-568h] BYREF
  void **v123; // [rsp+410h] [rbp-560h]
  size_t v124; // [rsp+418h] [rbp-558h]
  _QWORD v125[11]; // [rsp+420h] [rbp-550h] BYREF
  __int64 v126; // [rsp+478h] [rbp-4F8h]
  __int128 v127; // [rsp+480h] [rbp-4F0h]
  _OWORD v128[11]; // [rsp+490h] [rbp-4E0h] BYREF
  __int64 v129; // [rsp+540h] [rbp-430h]
  _QWORD v130[24]; // [rsp+548h] [rbp-428h] BYREF
  const void *v131; // [rsp+608h] [rbp-368h]
  size_t v132; // [rsp+610h] [rbp-360h]
  size_t v133; // [rsp+618h] [rbp-358h]
  void *v134; // [rsp+620h] [rbp-350h]
  __int64 v135; // [rsp+628h] [rbp-348h]
  void *v136; // [rsp+630h] [rbp-340h]
  size_t v137; // [rsp+638h] [rbp-338h]
  size_t v138; // [rsp+640h] [rbp-330h]
  __int64 v139; // [rsp+648h] [rbp-328h]
  __int64 v140; // [rsp+650h] [rbp-320h]
  __int64 v141; // [rsp+658h] [rbp-318h]
  __int64 v142; // [rsp+660h] [rbp-310h]
  __int128 v143; // [rsp+668h] [rbp-308h]
  void *v144; // [rsp+678h] [rbp-2F8h]
  __int128 v145; // [rsp+680h] [rbp-2F0h]
  __int64 v146; // [rsp+690h] [rbp-2E0h]
  size_t v147; // [rsp+698h] [rbp-2D8h]
  size_t v148; // [rsp+6A0h] [rbp-2D0h]
  __int128 v149; // [rsp+6A8h] [rbp-2C8h]
  void *v150; // [rsp+6B8h] [rbp-2B8h]
  __int128 v151; // [rsp+6C0h] [rbp-2B0h]
  void *v152; // [rsp+6D0h] [rbp-2A0h]
  __int64 v153; // [rsp+6D8h] [rbp-298h]
  __int64 v154; // [rsp+6E0h] [rbp-290h]
  int v155; // [rsp+6E8h] [rbp-288h]
  __int128 v156; // [rsp+6F0h] [rbp-280h]
  __int128 v157; // [rsp+700h] [rbp-270h]
  _DWORD v158[2]; // [rsp+710h] [rbp-260h]
  _OWORD v159[11]; // [rsp+718h] [rbp-258h] BYREF
  _QWORD v160[3]; // [rsp+7C8h] [rbp-1A8h] BYREF
  __int64 v161; // [rsp+7E0h] [rbp-190h]
  __int64 v162; // [rsp+7E8h] [rbp-188h]
  _QWORD *v163; // [rsp+7F0h] [rbp-180h]
  int v164; // [rsp+7F8h] [rbp-178h]
  int v165; // [rsp+7FCh] [rbp-174h]
  void **v166; // [rsp+800h] [rbp-170h]
  unsigned __int64 v167; // [rsp+808h] [rbp-168h]
  _OWORD v168[11]; // [rsp+810h] [rbp-160h] BYREF
  size_t v169; // [rsp+8C0h] [rbp-B0h]
  __int64 v170; // [rsp+8C8h] [rbp-A8h]
  __int64 v171; // [rsp+8D0h] [rbp-A0h]
  void *v172; // [rsp+8D8h] [rbp-98h]
  size_t v173; // [rsp+8E0h] [rbp-90h]
  __int64 v174; // [rsp+8E8h] [rbp-88h]
  unsigned __int64 v175; // [rsp+8F0h] [rbp-80h]
  void *v176; // [rsp+8F8h] [rbp-78h]
  void *v177; // [rsp+900h] [rbp-70h]
  size_t v178; // [rsp+908h] [rbp-68h]
  size_t v179; // [rsp+910h] [rbp-60h]
  int v180; // [rsp+91Ch] [rbp-54h]
  _OWORD *v181; // [rsp+920h] [rbp-50h]
  void **v182; // [rsp+928h] [rbp-48h]
  size_t v183; // [rsp+930h] [rbp-40h]
  void *__s2; // [rsp+938h] [rbp-38h]
  size_t v185; // [rsp+940h] [rbp-30h]

  v162 = a6;
  v11 = a2;
  result = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h388e0ba1cfe56cce(a2);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
    return result;
  }
  v161 = a4;
  v129 = a3;
  v180 = a5;
  v181 = a1;
  v13 = 0x8000000000000000LL;
  v14 = (_QWORD *)a2[28];
  codexmate_lib::core::repository::Repository::load_registry::hc51b7fe546571e2c(v130, v14, v11[29]);
  if ( LODWORD(v130[0]) == 11 )
  {
    v15 = 0x8000000000000000LL;
    qmemcpy(v116, &v130[1], sizeof(v116));
    v14 = &v130[12];
    v17 = &v117;
    v16 = 0;
    v18 = a8;
    if ( !a7 )
      goto LABEL_24;
  }
  else
  {
    v15 = 0x8000000000000000LL;
    v116[0] = 0x8000000000000000LL;
    v17 = (void **)v130;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(v130);
    v18 = a8;
    if ( !a7 )
      goto LABEL_24;
  }
  v19 = (void *)v18;
  codexmate_lib::core::auth::ensure_managed_account_snapshot_location::h5e97988fa1010acc(
    v130,
    a7,
    v18,
    v11[31],
    v11[32]);
  if ( LODWORD(v130[0]) == 11 )
  {
    std::sys::fs::symlink_metadata::hd69903fe66faddbd(v130, a7, v19);
    if ( LODWORD(v130[0]) == 1 )
    {
      *((_QWORD *)&v168[0] + 1) = v130[1];
      v20 = 2;
LABEL_70:
      v15 = *((_QWORD *)&v168[0] + 1);
      v13 = *((_QWORD *)&v168[1] + 1);
      v172 = *(void **)&v168[1];
      v159[0] = v168[2];
      v159[1] = v168[3];
      v159[2] = v168[4];
      v159[3] = v168[5];
      v128[3] = v168[5];
      v128[2] = v168[4];
      v128[1] = v168[3];
      v128[0] = v168[2];
      goto LABEL_71;
    }
    if ( (v130[1] & 0xF00000000000LL) != 0x800000000000LL )
    {
      v120[0] = a7;
      v120[1] = v19;
      v130[0] = v120;
      v130[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        (char *)v168 + 8,
        &anon_934eb766a8cad5eebd2cfa1275fd1b1a_442,
        v130);
      v20 = 9;
      goto LABEL_70;
    }
  }
  else
  {
    qmemcpy(v168, v130, 0x60u);
    v20 = *(_QWORD *)&v168[0];
    if ( *(_QWORD *)&v168[0] != 11 )
      goto LABEL_70;
  }
  v17 = (void **)v130;
  v14 = a7;
  codexmate_lib::core::repository::load_switchable_account_snapshot::h0ee7ebb3fd4ae365(v130, a7, v19);
  if ( LODWORD(v130[0]) != 2 )
  {
    v21 = v11;
    v22 = v130[8];
    v23 = (void **)v130[9];
    v24 = v130[11];
    v175 = v130[12];
    v25 = v130[14];
    v182 = (void **)v130[15];
    v178 = v130[17];
    v166 = (void **)v130[18];
    if ( v130[2] )
    {
      v17 = (void **)v130[3];
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130[3], v130[2], 1);
    }
    if ( v22 )
    {
      v17 = v23;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1);
    }
    if ( 2 * v24 )
    {
      v17 = (void **)v175;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v175, v24, 1);
      v11 = v21;
      if ( !(2 * v25) )
      {
LABEL_22:
        v14 = (_QWORD *)v178;
        if ( !(2 * v178) )
        {
LABEL_23:
          v15 = v130[5];
          v172 = (void *)v130[6];
          v13 = v130[7];
          goto LABEL_24;
        }
LABEL_238:
        v17 = v166;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v14, 1);
        goto LABEL_23;
      }
    }
    else
    {
      v11 = v21;
      if ( !(2 * v25) )
        goto LABEL_22;
    }
    v17 = v182;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v182, v25, 1);
    v14 = (_QWORD *)v178;
    if ( !(2 * v178) )
      goto LABEL_23;
    goto LABEL_238;
  }
  v20 = v130[1];
  v15 = v130[2];
  v172 = (void *)v130[3];
  v13 = v130[4];
  v159[0] = *(_OWORD *)&v130[5];
  v159[1] = *(_OWORD *)&v130[7];
  v159[2] = *(_OWORD *)&v130[9];
  v159[3] = *(_OWORD *)&v130[11];
  v18 = v130[6];
  v128[0] = *(_OWORD *)&v130[5];
  v128[1] = *(_OWORD *)&v130[7];
  v128[2] = *(_OWORD *)&v130[9];
  v128[3] = *(_OWORD *)&v130[11];
  v16 = v130[12];
  if ( v130[1] != 11 )
  {
LABEL_71:
    v39 = v181;
    v181[5] = v128[3];
    v39[4] = v128[2];
    v39[3] = v128[1];
    v39[2] = v128[0];
    *((_QWORD *)v39 + 2) = v172;
    *((_QWORD *)v39 + 3) = v13;
    *(_QWORD *)v39 = v20;
    *((_QWORD *)v39 + 1) = v15;
    result = 0x8000000000000000LL;
    if ( v116[0] != 0x8000000000000000LL )
      return core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::hcf896bc2be1b9a01(v116);
    return result;
  }
LABEL_24:
  v167 = v15;
  *(_QWORD *)&v168[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v17, v14, v18, v16);
  DWORD2(v168[0]) = v26;
  std::time::SystemTime::duration_since::had059553cab94f96(v130, v168, 0, 0);
  v27 = 0;
  v28 = 0;
  if ( !LOBYTE(v130[0]) )
    v28 = v130[1];
  v166 = (void **)v116[0];
  if ( v116[0] == 0x8000000000000000LL )
  {
    v29 = (__m128)0xA0000000FuLL;
    v30 = 1;
    v31 = 0;
  }
  else
  {
    v31 = v116[8];
    if ( LOBYTE(v116[8]) == 2 )
    {
      v29 = (__m128)0xA0000000FuLL;
      v27 = 0;
      v31 = 0;
    }
    else
    {
      v27 = v116[6];
      v29 = (__m128)v116[7];
      v158[0] = *(_DWORD *)((char *)&v116[8] + 1);
      *(_DWORD *)((char *)v158 + 3) = HIDWORD(v116[8]);
    }
    v30 = 1;
    if ( BYTE4(v116[10]) != 2 )
      v30 = BYTE4(v116[10]);
  }
  LODWORD(v125[10]) = 4;
  v125[9] = v28;
  v125[3] = 0x8000000000000000LL;
  v125[0] = 0;
  v125[1] = 8;
  v125[2] = 0;
  v125[6] = v27;
  _mm_storel_ps((double *)&v125[7], v29);
  LOBYTE(v125[8]) = v31;
  *(_DWORD *)((char *)&v125[8] + 1) = v158[0];
  HIDWORD(v125[8]) = *(_DWORD *)((char *)v158 + 3);
  BYTE4(v125[10]) = v30;
  v32 = v11[4];
  v163 = v11;
  v178 = v11[5];
  codexmate_lib::core::auth::load_auth_file::h3f192b6820e78b1d(__src, v32);
  v33 = *(_QWORD *)&__src[0];
  v175 = 0x8000000000000001LL;
  if ( *(_QWORD *)&__src[0] != 0x8000000000000001LL )
  {
    if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::he859c38ef587beb8(__src) )
    {
LABEL_46:
      if ( v33 != 0x8000000000000000LL && v33 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[0] + 1), v33, 1);
      if ( *((_QWORD *)&__src[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&__src[1] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[2], *((_QWORD *)&__src[1] + 1), 1);
      if ( *(_QWORD *)&__src[3] != 0x8000000000000000LL && *(_QWORD *)&__src[3] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[3] + 1), *(_QWORD *)&__src[3], 1);
      if ( *((_QWORD *)&__src[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&__src[4] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[5], *((_QWORD *)&__src[4] + 1), 1);
      if ( *(_QWORD *)&__src[6] != 0x8000000000000000LL && *(_QWORD *)&__src[6] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[6] + 1), *(_QWORD *)&__src[6], 1);
      if ( *((_QWORD *)&__src[7] + 1) != 0x8000000000000000LL && *((_QWORD *)&__src[7] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[8], *((_QWORD *)&__src[7] + 1), 1);
      if ( *(_QWORD *)&__src[9] != 0x8000000000000000LL && *(_QWORD *)&__src[9] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[9] + 1), *(_QWORD *)&__src[9], 1);
      goto LABEL_76;
    }
    memcpy(__dst, __src, sizeof(__dst));
    codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(v130, __dst, v32, v178);
    qmemcpy(v168, &v130[1], 0x60u);
    if ( v130[0] == 2 )
    {
      qmemcpy(v181, v168, 0x60u);
LABEL_275:
      if ( *(_QWORD *)&__dst[0] != 0x8000000000000000LL && *(_QWORD *)&__dst[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[0] + 1), *(_QWORD *)&__dst[0], 1);
      if ( *((_QWORD *)&__dst[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&__dst[1] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[2], *((_QWORD *)&__dst[1] + 1), 1);
      if ( *(_QWORD *)&__dst[3] != 0x8000000000000000LL && *(_QWORD *)&__dst[3] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[3] + 1), *(_QWORD *)&__dst[3], 1);
      if ( *((_QWORD *)&__dst[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&__dst[4] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[5], *((_QWORD *)&__dst[4] + 1), 1);
      if ( *(_QWORD *)&__dst[6] != 0x8000000000000000LL && *(_QWORD *)&__dst[6] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[6] + 1), *(_QWORD *)&__dst[6], 1);
      if ( *((_QWORD *)&__dst[7] + 1) != 0x8000000000000000LL && *((_QWORD *)&__dst[7] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[8], *((_QWORD *)&__dst[7] + 1), 1);
      if ( *(_QWORD *)&__dst[9] != 0x8000000000000000LL && *(_QWORD *)&__dst[9] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[9] + 1), *(_QWORD *)&__dst[9], 1);
      goto LABEL_296;
    }
    qmemcpy(v114, &v130[13], sizeof(v114));
    qmemcpy(v113, v168, sizeof(v113));
    v112 = (_QWORD *)v130[0];
    v87 = v113[5];
    v88 = v113[6];
    __s2 = (void *)v113[5];
    v183 = v113[6];
    if ( a7 != nullptr && v167 != 0x8000000000000000LL && v13 == v113[6] && !memcmp(v172, (const void *)v113[5], v13) )
    {
      std::path::Path::to_path_buf::h73855ce4b54f7174(v130, a7, a8);
      v124 = v130[2];
      v123 = (void **)v130[1];
      v122 = v130[0];
      v91 = v163[31];
      v89 = v163[32];
    }
    else
    {
      v89 = v163[32];
      v90 = v87;
      v91 = v163[31];
      codexmate_lib::core::auth::account_snapshot_path::h321912d5c2a039db(&v122, v91, v89, v90, v88);
    }
    v182 = v123;
    v185 = v124;
    codexmate_lib::core::auth::ensure_managed_account_snapshot_location::h5e97988fa1010acc(v130, v123, v124, v91, v89);
    if ( LODWORD(v130[0]) != 11 )
    {
      qmemcpy(v181, v130, 0x60u);
LABEL_272:
      if ( v122 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v182, v122, 1);
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(&v112);
      goto LABEL_275;
    }
    _$LT$codexmate_lib..core..auth..AuthFile$u20$as$u20$core..clone..Clone$GT$::clone::h260344d34f7e03a6(v120, __dst);
    std::sys::fs::metadata::h32fa16d3052ea535(v130, v182, v185);
    if ( LOBYTE(v130[0]) )
    {
      *((_QWORD *)&v168[0] + 1) = v130[1];
      *(_QWORD *)&v168[0] = 1;
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0f9d15e22e253cd((char *)v168 + 8);
      goto LABEL_234;
    }
    codexmate_lib::core::auth::ensure_managed_account_snapshot::h1ceeb3f02cbea00c(v130, v182, v185, v91, v89);
    if ( LODWORD(v130[0]) != 11 )
    {
      v94 = (char *)v130;
      goto LABEL_270;
    }
    codexmate_lib::core::auth::load_auth_file::h3f192b6820e78b1d(v128, v182);
    if ( *(_QWORD *)&v128[0] == v175 )
    {
      if ( (_BYTE)v180 )
      {
        v94 = (char *)v128 + 8;
LABEL_270:
        qmemcpy(v181, v94, 0x60u);
        goto LABEL_271;
      }
      qmemcpy(v130, (char *)v128 + 8, 0x60u);
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        *(_QWORD *)&v159[0] = v130;
        *((_QWORD *)&v159[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h3df4a8fbdd73e5e8;
        *(_QWORD *)&v168[0] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *((_QWORD *)&v168[0] + 1) = 31;
        *(_QWORD *)&v168[1] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        *((_QWORD *)&v168[1] + 1) = 31;
        *(_QWORD *)&v168[2] = &off_101BF1760;
        log::__private_api::log::hbec82629837037f7(&unk_101A2BBBA, v159, 2, v168);
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(v130);
LABEL_234:
      v92 = codexmate_lib::core::relay::atomic_write::copy_atomic_private::h48233e88b566607e(v32, v178, v182, v185);
      if ( v92 )
      {
        v93 = v181;
        *(_QWORD *)v181 = 2;
        *((_QWORD *)v93 + 1) = v92;
LABEL_271:
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v120);
        goto LABEL_272;
      }
      goto LABEL_268;
    }
    if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::he859c38ef587beb8(v128) )
    {
      memcpy(v159, v128, sizeof(v159));
      codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(v130, v159, v182, v185);
      qmemcpy(v121, &v130[1], sizeof(v121));
      if ( v130[0] == 2 )
      {
        qmemcpy(v181, v121, 0x60u);
LABEL_263:
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v128);
        goto LABEL_271;
      }
      qmemcpy((char *)&v168[6] + 8, &v130[13], 0x48u);
      qmemcpy((char *)v168 + 8, v121, 0x60u);
      *(_QWORD *)&v168[0] = v130[0];
      if ( *((_QWORD *)&v168[3] + 1) != v183 || memcmp(*(const void **)&v168[3], __s2, v183) )
      {
        v121[0] = v182;
        v121[1] = v185;
        v130[0] = v121;
        v130[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v109, &unk_101A2BB8C, v130);
        v97 = v181;
        *((_QWORD *)v181 + 3) = v109[2];
        v98 = v109[0];
        v97[2] = v109[1];
        v97[1] = v98;
        *v97 = 9;
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v168);
        goto LABEL_263;
      }
      if ( a7
        && (std::path::Path::components::he8b0f71a48373be5(v121, a7, a8),
            std::path::Path::components::he8b0f71a48373be5(v130, v182, v185),
            (unsigned __int8)_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5193f8baacc9df8f(
                               v121,
                               v130))
        || (unsigned __int8)codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(v159, __dst) )
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v120);
        memcpy(v120, v128, sizeof(v120));
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v168);
LABEL_268:
        codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(v130, v120, v182, v185);
        qmemcpy(v159, &v130[1], 0x60u);
        if ( v130[0] != 2 )
        {
          qmemcpy((char *)&v168[6] + 8, &v130[13], 0x48u);
          qmemcpy((char *)v168 + 8, v159, 0x60u);
          *(_QWORD *)&v168[0] = v130[0];
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
            v160,
            (char *)&v168[2] + 8);
          v110[0] = v182;
          v110[1] = v185;
          _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hc03a08f60524f040(v121, v110);
          v183 = *((_QWORD *)&v168[4] + 1);
          v178 = *(_QWORD *)&v168[4];
          v185 = *((_QWORD *)&v168[5] + 1);
          v99 = *(_QWORD *)&v168[5];
          v179 = *(_QWORD *)&v168[6];
          *(_QWORD *)&v157 = *(_QWORD *)&v168[7];
          v156 = *(_OWORD *)((char *)&v168[6] + 8);
          v176 = *((void **)&v168[7] + 1);
          v174 = *((_QWORD *)&v168[8] + 1);
          v127 = v168[8];
          v100 = *((_QWORD *)&v168[9] + 1);
          v177 = *(void **)&v168[9];
          *(_QWORD *)&v159[0] = (char *)&v168[10] + 10;
          *((_QWORD *)&v159[0] + 1) = _$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::hfd62e806a0f88133;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v130, &unk_101A2BC0F, v159);
          v169 = v130[1];
          __s2 = (void *)v130[0];
          alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(v128, v130[1], v130[2]);
          v101 = codexmate_lib::core::repository::subscription_clock_millis::hdffd16afbec2cfe8();
          *(_QWORD *)&v159[0] = (char *)&v168[10] + 8;
          *((_QWORD *)&v159[0] + 1) = _$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::hf5e97145309b68d1;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v130, &unk_101A2BC0F, v159);
          v173 = v130[0];
          *(_QWORD *)&v119 = v130[1];
          alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(v159, v130[1], v130[2]);
          v102 = *(_QWORD *)&v168[10];
          v103 = codexmate_lib::core::auth::current_timestamp::h4c3d94c83b347dd2();
          v133 = v160[2];
          v132 = v160[1];
          v131 = (const void *)v160[0];
          v134 = (void *)v121[0];
          v135 = v121[1];
          v136 = (void *)v121[2];
          v137 = v178;
          v138 = v183;
          v139 = v99;
          v140 = 0;
          v141 = 1;
          v142 = 0;
          v147 = v185;
          v148 = v179;
          v149 = v156;
          v150 = v176;
          v151 = v127;
          v152 = v177;
          v153 = v100;
          v144 = *(void **)&v128[1];
          v143 = v128[0];
          v130[0] = 1;
          v130[1] = v101;
          v145 = v159[0];
          v146 = *(_QWORD *)&v159[1];
          v130[2] = 0;
          v155 = 50332162;
          v130[4] = 0;
          v130[6] = 0;
          v130[8] = 0;
          v154 = v102;
          v130[10] = 1;
          v130[11] = v103;
          v130[12] = 0;
          v130[14] = 2;
          v130[19] = 2;
          if ( v173 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v173, 1);
          v104 = v162;
          if ( __s2 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v169, __s2, 1);
          v105 = v116;
          if ( v166 == (void **)0x8000000000000000LL )
            v105 = nullptr;
          v106 = codexmate_lib::core::repository::prev_item::hc990ab025e867694(
                   v105,
                   *(_QWORD *)&v168[3],
                   *((_QWORD *)&v168[3] + 1));
          codexmate_lib::core::repository::carry_over_registry_state::h141fb920c22aa824(v130, v106);
          codexmate_lib::core::repository::apply_imported_alias::hbfba257593ac5a7a(v130, v104);
          alloc::vec::Vec$LT$T$C$A$GT$::push_mut::he8c971261f70618c(v125, v130);
          *(_OWORD *)((char *)v159 + 8) = v168[3];
          *(_QWORD *)&v159[0] = *((_QWORD *)&v168[2] + 1);
          if ( v125[3] != 0x8000000000000000LL && v125[3] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v125[4], v125[3], 1);
          v125[5] = *(_QWORD *)&v159[1];
          *(_OWORD *)&v125[3] = v159[0];
          if ( *(_QWORD *)&v168[1] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v168[1] + 1), *(_QWORD *)&v168[1], 1);
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v120);
          if ( v122 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v182, v122, 1);
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(&v112);
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(__dst);
          goto LABEL_76;
        }
        v94 = (char *)v159;
        goto LABEL_270;
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v168);
    }
    else
    {
      if ( (_BYTE)v180 )
      {
        *(_QWORD *)&v168[0] = v182;
        *((_QWORD *)&v168[0] + 1) = v185;
        v130[0] = v168;
        v130[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v108, &unk_101A2BB4B, v130);
        v95 = v181;
        *((_QWORD *)v181 + 3) = v108[2];
        v96 = v108[0];
        v95[2] = v108[1];
        v95[1] = v96;
        *v95 = 9;
        goto LABEL_263;
      }
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        v130[0] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        v130[1] = 31;
        v130[2] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        v130[3] = 31;
        v130[4] = &off_101BF1748;
        log::__private_api::log::hbec82629837037f7(
          "[AiMaMi][accounts] repairing non-switchable active snapshot during registry recovery[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity",
          169,
          2,
          v130);
        if ( *(_QWORD *)&v128[0] == v175 )
          goto LABEL_234;
      }
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v128);
    goto LABEL_234;
  }
  std::sys::fs::metadata::h32fa16d3052ea535(v130, v32, v178);
  if ( LOBYTE(v130[0]) )
  {
    if ( (v130[1] & 3) == 1 )
    {
      v34 = v130[1] - 1LL;
      v35 = *(_QWORD *)(v130[1] - 1LL);
      v36 = *(_QWORD *)(v130[1] + 7LL);
      if ( *(_QWORD *)v36 )
        (*(void (__fastcall **)(__int64))v36)(v35);
      v37 = *(_QWORD *)(v36 + 8);
      if ( v37 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v37, *(_QWORD *)(v36 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 24, 8);
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d((char *)__src + 8);
    v33 = *(_QWORD *)&__src[0];
    if ( *(_QWORD *)&__src[0] != v175 )
      goto LABEL_46;
  }
  else
  {
    if ( (_BYTE)v180 )
    {
      v38 = (char *)__src + 8;
      goto LABEL_226;
    }
    qmemcpy(v130, (char *)__src + 8, 0x60u);
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&v159[0] = v130;
      *((_QWORD *)&v159[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h3df4a8fbdd73e5e8;
      *(_QWORD *)&v168[0] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      *((_QWORD *)&v168[0] + 1) = 31;
      *(_QWORD *)&v168[1] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      *((_QWORD *)&v168[1] + 1) = 31;
      *(_QWORD *)&v168[2] = &off_101BF1778;
      log::__private_api::log::hbec82629837037f7(&unk_101A2BC11, v159, 2, v168);
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(v130);
  }
LABEL_76:
  v40 = v180;
  v41 = v129;
  if ( !v161 )
  {
LABEL_221:
    v130[0] = v160;
    if ( v125[2] >= 2u )
    {
      if ( v125[2] >= 0x15u )
        core::slice::sort::stable::driftsort_main::h20ed7041b9582f09(v125[1], v125[2], v130, v41);
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::hf6ce98a818bf376d((void *)v125[1]);
    }
    codexmate_lib::core::repository::Repository::persist_registry::he3845a2433b36ff3(v130, v163, v125, 1);
    if ( LODWORD(v130[0]) == 11 )
    {
      v86 = v181;
      qmemcpy((char *)v181 + 8, v125, 0x58u);
      *v86 = 11;
      goto LABEL_297;
    }
    v38 = (char *)v130;
LABEL_226:
    qmemcpy(v181, v38, 0x60u);
    goto LABEL_296;
  }
  v166 = (void **)(v129 + 24 * v161);
  v161 = v163[31];
  v178 = v163[32];
  while ( 1 )
  {
    v42 = *(_QWORD **)(v41 + 8);
    v129 = v41;
    v43 = *(_QWORD *)(v41 + 16);
    codexmate_lib::core::auth::ensure_managed_account_snapshot_location::h5e97988fa1010acc(v130, v42, v43, v161, v178);
    if ( LODWORD(v130[0]) == 11 )
    {
      std::sys::fs::symlink_metadata::hd69903fe66faddbd(v130, v42, v43);
      if ( LODWORD(v130[0]) == 1 )
      {
        *(_QWORD *)&v159[0] = 2;
        *((_QWORD *)&v159[0] + 1) = v130[1];
LABEL_119:
        qmemcpy(v168, v159, 0x60u);
        if ( v40 )
        {
          v38 = (char *)v159;
          goto LABEL_226;
        }
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          *(_QWORD *)&v128[0] = v168;
          *((_QWORD *)&v128[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h3df4a8fbdd73e5e8;
          v130[6] = 2;
          v130[7] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
          v130[8] = 31;
          v130[10] = &unk_101A2BC5B;
          v130[11] = v128;
          v130[0] = 0;
          v130[1] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
          v130[2] = 31;
          v130[3] = 0;
          v130[4] = "src/core/repository.rs";
          v130[5] = 22;
          v130[9] = 0xB1000000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v160, v130, v44);
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(v168);
        goto LABEL_79;
      }
      if ( (v130[1] & 0xF00000000000LL) != 0x800000000000LL )
      {
        *(_QWORD *)&v168[0] = v42;
        *((_QWORD *)&v168[0] + 1) = v43;
        v130[0] = v168;
        v130[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(
          (char *)v159 + 8,
          &anon_934eb766a8cad5eebd2cfa1275fd1b1a_442,
          v130);
        *(_QWORD *)&v159[0] = 9;
        goto LABEL_119;
      }
    }
    else
    {
      qmemcpy(v159, v130, 0x60u);
      if ( *(_QWORD *)&v159[0] != 11 )
        goto LABEL_119;
    }
    codexmate_lib::core::auth::load_auth_file::h3f192b6820e78b1d(v130, v42);
    if ( v130[0] != v175 )
      break;
    if ( v40 )
    {
      qmemcpy(v181, &v130[1], 0x60u);
      goto LABEL_296;
    }
    qmemcpy(v159, &v130[1], 0x60u);
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v112 = v42;
      v113[0] = v43;
      v120[0] = &v112;
      v120[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      v120[2] = v159;
      v120[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h3df4a8fbdd73e5e8;
      *(_QWORD *)&v168[3] = 2;
      *((_QWORD *)&v168[3] + 1) = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      *(_QWORD *)&v168[4] = 31;
      *(_QWORD *)&v168[5] = &unk_101A2BD56;
      *((_QWORD *)&v168[5] + 1) = v120;
      *(_QWORD *)&v168[0] = 0;
      *((_QWORD *)&v168[0] + 1) = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      v168[1] = 0x1Fu;
      *(_QWORD *)&v168[2] = "src/core/repository.rs";
      *((_QWORD *)&v168[2] + 1) = 22;
      *((_QWORD *)&v168[4] + 1) = 0xB1A00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v160, v168, v159);
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(v159);
LABEL_79:
    v41 = v129 + 24;
    if ( (void **)(v129 + 24) == v166 )
      goto LABEL_221;
  }
  v185 = v43;
  memcpy(v128, v130, sizeof(v128));
  if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::he859c38ef587beb8(v128) )
    goto LABEL_97;
  codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(v130, v128, v42, v43);
  if ( LODWORD(v130[0]) == 2 )
  {
    if ( v40 )
    {
      qmemcpy(v181, &v130[1], 0x60u);
      goto LABEL_248;
    }
    qmemcpy(v120, &v130[1], 0x60u);
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&__dst[0] = v42;
      *((_QWORD *)&__dst[0] + 1) = v43;
      v112 = __dst;
      v113[0] = (size_t)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      v113[1] = (size_t)v120;
      v113[2] = (size_t)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h3df4a8fbdd73e5e8;
      *(_QWORD *)&v168[3] = 2;
      *((_QWORD *)&v168[3] + 1) = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      *(_QWORD *)&v168[4] = 31;
      *(_QWORD *)&v168[5] = &unk_101A2BCFC;
      *((_QWORD *)&v168[5] + 1) = &v112;
      *(_QWORD *)&v168[0] = 0;
      *((_QWORD *)&v168[0] + 1) = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      v168[1] = 0x1Fu;
      *(_QWORD *)&v168[2] = "src/core/repository.rs";
      *((_QWORD *)&v168[2] + 1) = 22;
      *((_QWORD *)&v168[4] + 1) = 0xB2800000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v160, v168, v120);
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(v120);
LABEL_97:
    v45 = *(_QWORD *)&v128[0];
    if ( *(_QWORD *)&v128[0] != 0x8000000000000000LL )
    {
LABEL_98:
      if ( v45 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v128[0] + 1), v45, 1);
    }
LABEL_100:
    if ( *((_QWORD *)&v128[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&v128[1] + 1) )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v128[2], *((_QWORD *)&v128[1] + 1), 1);
    if ( *(_QWORD *)&v128[3] != 0x8000000000000000LL && *(_QWORD *)&v128[3] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v128[3] + 1), *(_QWORD *)&v128[3], 1);
    if ( *((_QWORD *)&v128[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&v128[4] + 1) )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v128[5], *((_QWORD *)&v128[4] + 1), 1);
    if ( *(_QWORD *)&v128[6] != 0x8000000000000000LL && *(_QWORD *)&v128[6] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v128[6] + 1), *(_QWORD *)&v128[6], 1);
    if ( *((_QWORD *)&v128[7] + 1) != 0x8000000000000000LL && *((_QWORD *)&v128[7] + 1) )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v128[8], *((_QWORD *)&v128[7] + 1), 1);
    if ( *(_QWORD *)&v128[9] != 0x8000000000000000LL && *(_QWORD *)&v128[9] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v128[9] + 1), *(_QWORD *)&v128[9], 1);
    goto LABEL_79;
  }
  memcpy(v159, v130, sizeof(v159));
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v121, (char *)&v159[2] + 8);
  if ( !v125[2] )
  {
    LODWORD(v56) = 0;
    goto LABEL_151;
  }
  v46 = v125[1];
  v47 = 424LL * v125[2];
  __s2 = (void *)v121[1];
  v48 = v121[2];
  v49 = 0;
  v182 = nullptr;
  while ( *(_QWORD *)(v46 + v49 + 208) != v48 || memcmp(*(const void **)(v46 + v49 + 200), __s2, v48) )
  {
    v182 = (void **)((char *)v182 + 1);
    v49 += 424;
    if ( v47 == v49 )
    {
      LODWORD(v56) = 0;
      v43 = v185;
      goto LABEL_151;
    }
  }
  if ( v125[3] != 0x8000000000000000LL && v125[5] == v48 && !memcmp((const void *)v125[4], __s2, v48) )
  {
LABEL_217:
    if ( v121[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121[1], v121[0], 1);
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v159);
    v40 = v180;
    v45 = *(_QWORD *)&v128[0];
    if ( *(_QWORD *)&v128[0] != 0x8000000000000000LL )
      goto LABEL_98;
    goto LABEL_100;
  }
  v50 = *(const void **)(v46 + v49 + 224);
  v51 = *(_QWORD *)(v46 + v49 + 232);
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::hd1744e5f3df8d4ac(v130, v51, 0, 1, 1);
  v183 = v130[1];
  if ( LOBYTE(v130[0]) )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v183, v130[2]);
  v52 = (void *)v130[2];
  memcpy((void *)v130[2], v50, v51);
  __s2 = v52;
  v179 = v51;
  v43 = v185;
  v54 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(v52, v51, v42, v185, v53);
  v55 = v180;
  v56 = v130;
  if ( v54 )
    goto LABEL_215;
  if ( !a7 )
    goto LABEL_144;
  std::path::Path::components::he8b0f71a48373be5(&v112, a7, a8);
  std::path::Path::components::he8b0f71a48373be5(v120, __s2, v179);
  v57 = v112;
  v58 = v113[0];
  v59 = v120[0];
  v60 = v120[1];
  if ( (void *)v113[0] == v120[1] && LOBYTE(v113[6]) == LOBYTE(v120[7]) && BYTE1(v113[6]) == 2 && BYTE1(v120[7]) == 2 )
  {
    v176 = v112;
    v177 = v120[0];
    *(_QWORD *)&v156 = v113[0];
    v61 = memcmp(v112, v120[0], v113[0]);
    v58 = v156;
    v57 = v176;
    v59 = v177;
    if ( !v61 )
      goto LABEL_215;
  }
  if ( LOBYTE(v113[1]) != 6 )
  {
    *(_QWORD *)((char *)&__src[1] + 15) = v113[5];
    __src[1] = *(_OWORD *)((char *)&v113[3] + 1);
    __src[0] = *(_OWORD *)((char *)&v113[1] + 1);
  }
  *(_QWORD *)&v168[0] = v57;
  *((_QWORD *)&v168[0] + 1) = v58;
  LOBYTE(v168[1]) = v113[1];
  *(_QWORD *)&v168[3] = *(_QWORD *)((char *)&__src[1] + 15);
  *(_OWORD *)((char *)&v168[2] + 1) = __src[1];
  *(_OWORD *)((char *)&v168[1] + 1) = __src[0];
  WORD4(v168[3]) = v113[6];
  BYTE10(v168[3]) = BYTE2(v113[6]);
  if ( LOBYTE(v120[2]) != 6 )
  {
    *(void **)((char *)&__dst[1] + 15) = v120[6];
    *((void **)&__dst[1] + 1) = *(void **)((char *)&v120[5] + 1);
    *(_OWORD *)((char *)__dst + 8) = *(_OWORD *)((char *)&v120[3] + 1);
    *(void **)&__dst[0] = *(void **)((char *)&v120[2] + 1);
  }
  v130[0] = v59;
  v130[1] = v60;
  LOBYTE(v130[2]) = v120[2];
  v130[6] = *(_QWORD *)((char *)&__dst[1] + 15);
  *(_OWORD *)((char *)&v130[4] + 1) = __dst[1];
  *(_OWORD *)((char *)&v130[2] + 1) = __dst[0];
  LOWORD(v130[7]) = v120[7];
  BYTE2(v130[7]) = BYTE2(v120[7]);
  v62 = core::iter::traits::iterator::Iterator::eq_by::h2bf41b2071abf6d2(v168, v130);
  v55 = v180;
  if ( v62 )
  {
LABEL_215:
    if ( v183 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v183, 1);
    goto LABEL_217;
  }
  std::path::Path::components::he8b0f71a48373be5(v168, a7, a8);
  std::path::Path::components::he8b0f71a48373be5(v130, v42, v43);
  if ( (unsigned __int8)_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5193f8baacc9df8f(
                          v168,
                          v130) )
    goto LABEL_210;
LABEL_144:
  codexmate_lib::core::auth::load_auth_file::h3f192b6820e78b1d(v168, __s2);
  if ( *(_QWORD *)&v168[0] != v175 )
  {
    memcpy(v130, v168, 0xB0u);
    v79 = v116;
    if ( v116[0] == 0x8000000000000000LL )
      v79 = nullptr;
    v80 = v121[1];
    v81 = v121[2];
    v82 = codexmate_lib::core::repository::prev_item::hc990ab025e867694(v79, v121[1], v121[2]);
    v83 = 0;
    if ( v82 )
    {
      v83 = *(_QWORD *)(v82 + 224);
      v43 = *(_QWORD *)(v82 + 232);
    }
    codexmate_lib::core::auth::account_snapshot_path::h321912d5c2a039db(v120, v161, v178, v80, v81);
    v84 = v120[1];
    v107 = v43;
    v43 = v185;
    v85 = codexmate_lib::core::repository::prefer_duplicate_snapshot_candidate::ha9b3e84268285871(
            (_DWORD)v42,
            v185,
            (unsigned int)v128,
            (_DWORD)__s2,
            v179,
            (unsigned int)v130,
            v83,
            v107,
            (__int64)v120[1],
            (__int64)v120[2]);
    if ( v120[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v120[0], 1);
    v56 = v130;
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v130);
    if ( v85 )
      goto LABEL_210;
    goto LABEL_215;
  }
  if ( !v55 )
  {
    qmemcpy(v130, (char *)v168 + 8, 0x60u);
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v112 = v130;
      v113[0] = (size_t)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h3df4a8fbdd73e5e8;
      v120[0] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      v120[1] = (void *)31;
      v120[2] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      v120[3] = (void *)31;
      v120[4] = &off_101BF1790;
      log::__private_api::log::hbec82629837037f7(&unk_101A2BCA4, &v112, 2, v120);
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(v130);
LABEL_210:
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      v130[0] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      v130[1] = 31;
      v130[2] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
      v130[3] = 31;
      v130[4] = &off_101BF17A8;
      log::__private_api::log::hbec82629837037f7(
        "[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity",
        215,
        2,
        v130);
    }
    LOBYTE(v56) = 1;
    if ( v183 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v183, 1);
LABEL_151:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v112, v121);
    *(_QWORD *)&__src[0] = v42;
    *((_QWORD *)&__src[0] + 1) = v43;
    v120[0] = nullptr;
    v120[1] = (void *)1;
    v120[2] = nullptr;
    *(_QWORD *)&v168[1] = 1610612768;
    *(_QWORD *)&v168[0] = v120;
    *((_QWORD *)&v168[0] + 1) = &anon_5a43fe550916ced6ff2b8ab69a2876c4_1319;
    v63 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(__src, v168);
    LODWORD(v185) = (_DWORD)v56;
    if ( v63 )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_5a43fe550916ced6ff2b8ab69a2876c4_1320,
        55,
        v160,
        &anon_5a43fe550916ced6ff2b8ab69a2876c4_1333,
        &anon_5a43fe550916ced6ff2b8ab69a2876c4_1322);
    __s2 = v120[0];
    v64 = v120[1];
    v117 = v120[2];
    v65 = *((_QWORD *)&v159[4] + 1);
    v183 = *(_QWORD *)&v159[4];
    v179 = *((_QWORD *)&v159[5] + 1);
    v118 = *(_QWORD *)&v159[5];
    v66 = *(_QWORD *)&v159[6];
    v170 = *(_QWORD *)&v159[7];
    v119 = *(_OWORD *)((char *)&v159[6] + 8);
    *(_QWORD *)&v156 = *((_QWORD *)&v159[7] + 1);
    v171 = *((_QWORD *)&v159[8] + 1);
    v157 = v159[8];
    v174 = *((_QWORD *)&v159[9] + 1);
    v177 = *(void **)&v159[9];
    v120[0] = (char *)&v159[10] + 10;
    v120[1] = _$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::hfd62e806a0f88133;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v168, &unk_101A2BC0F, v120);
    v169 = v66;
    v173 = v65;
    *(_QWORD *)&v127 = v64;
    v126 = *((_QWORD *)&v168[0] + 1);
    v176 = *(void **)&v168[0];
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(
      v120,
      *((_QWORD *)&v168[0] + 1),
      *(_QWORD *)&v168[1]);
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v168);
    v67 = v168[0];
    if ( SLODWORD(v168[0]) >> 13 <= 0 )
    {
      v68 = (1 - (SLODWORD(v168[0]) >> 13)) / 0x190u + 1;
      v165 = 400 * v68 + (SLODWORD(v168[0]) >> 13) - 1;
      v164 = -146097 * v68;
    }
    else
    {
      v165 = (SLODWORD(v168[0]) >> 13) - 1;
      v164 = 0;
    }
    v69 = DWORD1(v168[0]);
    v70 = DWORD2(v168[0]);
    *(_QWORD *)&__dst[0] = (char *)&v159[10] + 8;
    *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::hf5e97145309b68d1;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v168, &unk_101A2BC0F, __dst);
    v71 = v168[0];
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(
      v168,
      *((_QWORD *)&v168[0] + 1),
      *(_QWORD *)&v168[1]);
    v133 = v113[1];
    v132 = v113[0];
    v131 = v112;
    v134 = __s2;
    v135 = v127;
    v136 = v117;
    v137 = v183;
    v138 = v173;
    v139 = v118;
    v140 = 0;
    v141 = 1;
    v142 = 0;
    v147 = v179;
    v148 = v169;
    v149 = v119;
    v150 = (void *)v156;
    v151 = v157;
    v152 = v177;
    v153 = v174;
    v144 = v120[2];
    v143 = *(_OWORD *)v120;
    v130[0] = 1;
    v130[1] = 1000
            * (v69
             + 86400LL
             * (int)(((v165 / 100) >> 2) + ((1461 * v165) >> 2) + v164 + ((v67 >> 4) & 0x1FF) - v165 / 100 - 719163))
            + ((unsigned __int64)(1125899907 * v70) >> 50);
    v146 = *(_QWORD *)&v168[1];
    v145 = v168[0];
    v130[2] = 0;
    v155 = 50332162;
    v130[4] = 0;
    v130[6] = 0;
    v130[8] = 0;
    v154 = *(_QWORD *)&v159[10];
    v130[10] = 0;
    v130[12] = 0;
    v130[14] = 2;
    v130[19] = 2;
    if ( (_QWORD)v71 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v71 + 1), v71, 1);
    v72 = v162;
    if ( v176 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v126, v176, 1);
    v73 = (const void *)v121[1];
    if ( v116[0] == 0x8000000000000000LL || !v116[2] )
    {
      v75 = 0;
    }
    else
    {
      v74 = v121[2];
      v75 = v116[1];
      v76 = 424LL * v116[2];
      while ( *(_QWORD *)(v75 + 208) != v74 || memcmp(*(const void **)(v75 + 200), v73, v74) )
      {
        v75 += 424;
        v76 -= 424;
        if ( !v76 )
        {
          v75 = 0;
          break;
        }
      }
      v72 = v162;
    }
    codexmate_lib::core::repository::carry_over_registry_state::h141fb920c22aa824(v130, v75);
    codexmate_lib::core::repository::apply_imported_alias::hbfba257593ac5a7a(v130, v72);
    v77 = v125[2];
    if ( (_BYTE)v185 )
    {
      if ( (unsigned __int64)v182 >= v125[2] )
        core::panicking::panic_bounds_check::h56740b1198b22635(v182, v125[2], &off_101BF17C0);
      v78 = (void *)(v125[1] + 424LL * (_QWORD)v182);
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h4f91d57551ad7252(v78);
      memmove(v78, v130, 0x1A8u);
    }
    else
    {
      if ( v125[2] == v125[0] )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hdd6b1b2d9aa01c90(v125);
      memmove((void *)(v125[1] + 424 * v77), v130, 0x1A8u);
      v125[2] = v77 + 1;
    }
    v40 = v180;
    if ( v121[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v121[0], 1);
    if ( *(_QWORD *)&v159[1] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v159[1] + 1), *(_QWORD *)&v159[1], 1);
    if ( *((_QWORD *)&v159[2] + 1) )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v159[3], *((_QWORD *)&v159[2] + 1), 1);
    if ( *(_QWORD *)&v128[0] != 0x8000000000000000LL && *(_QWORD *)&v128[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v128[0] + 1), *(_QWORD *)&v128[0], 1);
    if ( *((_QWORD *)&v128[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&v128[1] + 1) )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v128[2], *((_QWORD *)&v128[1] + 1), 1);
    if ( *(_QWORD *)&v128[3] != 0x8000000000000000LL && *(_QWORD *)&v128[3] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v128[3] + 1), *(_QWORD *)&v128[3], 1);
    if ( *((_QWORD *)&v128[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&v128[4] + 1) )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v128[5], *((_QWORD *)&v128[4] + 1), 1);
    if ( *(_QWORD *)&v128[6] != 0x8000000000000000LL && *(_QWORD *)&v128[6] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v128[6] + 1), *(_QWORD *)&v128[6], 1);
    if ( *((_QWORD *)&v128[7] + 1) != 0x8000000000000000LL && *((_QWORD *)&v128[7] + 1) )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v128[8], *((_QWORD *)&v128[7] + 1), 1);
    if ( *(_QWORD *)&v128[9] != 0x8000000000000000LL && *(_QWORD *)&v128[9] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v128[9] + 1), *(_QWORD *)&v128[9], 1);
    goto LABEL_79;
  }
  qmemcpy(v181, (char *)v168 + 8, 0x60u);
  if ( v183 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v183, 1);
  if ( v121[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121[1], v121[0], 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v159);
LABEL_248:
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v128);
LABEL_296:
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::hcf896bc2be1b9a01(v125);
LABEL_297:
  if ( 2 * v167 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v167, 1);
    result = 0x8000000000000000LL;
    if ( v116[0] != 0x8000000000000000LL )
      return core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::hcf896bc2be1b9a01(v116);
  }
  else
  {
    result = 0x8000000000000000LL;
    if ( v116[0] != 0x8000000000000000LL )
      return core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::hcf896bc2be1b9a01(v116);
  }
  return result;
}

// ===== codexmate_lib::core::repository::Repository::sync_auth_bundle_into_registry::hbe997555e9d9b5e0 @ 0x100260530 size=5229 lines=744 =====
__int64 __fastcall codexmate_lib::core::repository::Repository::sync_auth_bundle_into_registry::hbe997555e9d9b5e0(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        void *a5,
        size_t a6,
        void *a7,
        size_t a8)
{
  __int64 result; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r12
  int v14; // edx
  _QWORD *v15; // rbx
  unsigned __int64 v16; // r13
  bool v17; // zf
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdx
  char v21; // cl
  __int64 v22; // r15
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  unsigned int v27; // r15d
  int v28; // r13d
  int v29; // r12d
  unsigned int v30; // ecx
  __int64 v31; // rbx
  __int64 v32; // r14
  unsigned __int64 v33; // r12
  _QWORD *v34; // r15
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r13
  const void *v38; // rbx
  size_t v39; // r14
  size_t v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  size_t v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rsi
  char v47; // r15
  void *v48; // r12
  __int64 v49; // r14
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rax
  void **v53; // rdi
  size_t v54; // rbx
  void *v55; // r14
  void *v56; // rax
  _QWORD *v57; // rcx
  __int64 v58; // rsi
  _QWORD *v59; // r14
  __int64 v60; // rbx
  char v61; // r15
  char v62; // bl
  _QWORD *v63; // r12
  size_t v64; // rdx
  _QWORD *v65; // r15
  _QWORD *v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // r14
  void *v70; // rdi
  unsigned __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 v73; // rdi
  unsigned __int64 v74; // rbx
  size_t v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // rsi
  unsigned __int64 v81; // rbx
  size_t v82; // rdx
  __int64 v83; // rcx
  char v84; // al
  size_t v85; // rdx
  char v86; // bl
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // r14
  __int64 v91; // rdx
  _QWORD *v92; // rax
  _DWORD v93[44]; // [rsp+0h] [rbp-5E0h] BYREF
  _QWORD v94[22]; // [rsp+B0h] [rbp-530h] BYREF
  void *v95; // [rsp+160h] [rbp-480h] BYREF
  size_t v96; // [rsp+168h] [rbp-478h]
  _QWORD __dst[20]; // [rsp+170h] [rbp-470h] BYREF
  _QWORD v98[53]; // [rsp+210h] [rbp-3D0h] BYREF
  _QWORD v99[22]; // [rsp+3B8h] [rbp-228h] BYREF
  __int64 v100; // [rsp+468h] [rbp-178h] BYREF
  __int64 v101; // [rsp+470h] [rbp-170h]
  _QWORD v102[22]; // [rsp+478h] [rbp-168h] BYREF
  __int64 v103; // [rsp+528h] [rbp-B8h]
  __int64 v104; // [rsp+530h] [rbp-B0h]
  __int64 v105; // [rsp+538h] [rbp-A8h] BYREF
  __int64 v106; // [rsp+540h] [rbp-A0h]
  __int64 v107; // [rsp+548h] [rbp-98h]
  void *v108; // [rsp+550h] [rbp-90h] BYREF
  void *v109; // [rsp+558h] [rbp-88h]
  __int64 v110; // [rsp+560h] [rbp-80h]
  _QWORD *v111; // [rsp+568h] [rbp-78h]
  __int64 v112; // [rsp+570h] [rbp-70h]
  __int64 v113; // [rsp+578h] [rbp-68h]
  __int64 v114; // [rsp+580h] [rbp-60h] BYREF
  void *v115; // [rsp+588h] [rbp-58h]
  __int64 v116; // [rsp+590h] [rbp-50h]
  _QWORD *v117; // [rsp+598h] [rbp-48h]
  void *v118; // [rsp+5A0h] [rbp-40h]
  void *v119; // [rsp+5A8h] [rbp-38h]
  size_t v120; // [rsp+5B0h] [rbp-30h]

  v120 = a6;
  result = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h388e0ba1cfe56cce(a2);
  if ( result )
  {
    *a1 = 2;
    a1[1] = result;
    return result;
  }
  v103 = a2;
  v118 = a5;
  v95 = a7;
  v96 = a8;
  v102[0] = 0;
  v102[1] = 1;
  v102[2] = 0;
  v98[2] = 1610612768;
  v98[0] = v102;
  v98[1] = &anon_5a43fe550916ced6ff2b8ab69a2876c4_1319;
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v95, v98) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1320,
      55,
      &v100,
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1333,
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1322);
  v13 = a3;
  v108 = (void *)v102[0];
  v109 = (void *)v102[1];
  v110 = v102[2];
  v102[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(&v95, v98, v12, v102[1]);
  LODWORD(v102[1]) = v14;
  std::time::SystemTime::duration_since::had059553cab94f96(v98, v102, 0, 0);
  if ( LOBYTE(v98[0]) )
    v112 = 0;
  else
    v112 = v98[1];
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v114, a4 + 2);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v95, a4 + 5);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v102, a4 + 8);
  v15 = a4;
  v16 = 0x8000000000000000LL;
  if ( __OFSUB__(0, a4[11]) )
  {
    v119 = (void *)0x8000000000000000LL;
    v17 = a4[14] == 0x8000000000000000LL;
    v117 = a1;
    v111 = v13;
    if ( v17 )
      goto LABEL_9;
LABEL_12:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, a4 + 14);
    v18 = v98[0];
    v16 = v98[1];
    v15 = (_QWORD *)v98[2];
    v19 = 0x8000000000000000LL;
    v20 = a4;
    if ( a4[17] == 0x8000000000000000LL )
      goto LABEL_14;
    goto LABEL_13;
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, a4 + 11);
  v119 = (void *)v98[0];
  v113 = v98[1];
  v104 = v98[2];
  v17 = a4[14] == 0x8000000000000000LL;
  v117 = a1;
  v111 = v13;
  if ( !v17 )
    goto LABEL_12;
LABEL_9:
  v18 = 0x8000000000000000LL;
  v19 = 0x8000000000000000LL;
  v20 = a4;
  if ( a4[17] != 0x8000000000000000LL )
  {
LABEL_13:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, v20 + 17);
    v19 = v98[0];
    v105 = v98[1];
    v106 = v98[2];
    v20 = a4;
  }
LABEL_14:
  v99[4] = v116;
  v99[3] = v115;
  v99[2] = v114;
  v99[5] = v95;
  v99[6] = v96;
  v99[7] = __dst[0];
  v99[8] = v102[0];
  v99[9] = v102[1];
  v99[10] = v102[2];
  v99[11] = v119;
  v99[12] = v113;
  v99[13] = v104;
  v99[14] = v18;
  v99[15] = v16;
  v99[16] = v15;
  v99[17] = v19;
  v99[19] = v106;
  v99[18] = v105;
  v21 = *((_BYTE *)v20 + 168);
  BYTE2(v99[21]) = *((_BYTE *)v20 + 170);
  LOBYTE(v99[21]) = v21;
  v99[20] = v20[20];
  v99[0] = *v20;
  v99[1] = v20[1];
  BYTE1(v99[21]) = *((_BYTE *)v20 + 169);
  if ( !v118 )
  {
    LODWORD(v22) = 0;
    goto LABEL_18;
  }
  v102[0] = v118;
  v102[1] = v120;
  v102[2] = 0;
  v102[3] = 0;
  serde_json::de::from_trait::h8ec55585dc871976(v98, v102);
  v22 = v98[0];
  v23 = v98[1];
  if ( v98[0] == 0x8000000000000001LL )
  {
    v24 = v117;
    *v117 = 3;
    v24[1] = v23;
    goto LABEL_97;
  }
  memcpy(__dst, &v98[2], sizeof(__dst));
  v95 = (void *)v98[0];
  v119 = (void *)v98[1];
  v96 = v98[1];
  codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(
    v98,
    &v95,
    *(_QWORD *)(v103 + 32),
    *(_QWORD *)(v103 + 40));
  qmemcpy(v102, &v98[1], 0x60u);
  if ( v98[0] == 2 )
  {
    qmemcpy(v117, v102, 0x60u);
    goto LABEL_53;
  }
  qmemcpy(&v94[13], &v98[13], 0x48u);
  qmemcpy(&v94[1], v102, 0x60u);
  v94[0] = v98[0];
  v53 = &v95;
  if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::he859c38ef587beb8(&v95)
    || (v54 = v94[7], v94[7] != a4[7])
    || (v55 = (void *)a4[6], v53 = (void **)v94[6], memcmp((const void *)v94[6], v55, v94[7])) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53);
    v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1);
    if ( !v56 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 52);
    qmemcpy(v56, "Live account changed while synchronizing credentials", 52);
    v57 = v117;
    *v117 = 10;
    v57[1] = 52;
    v57[2] = v56;
    v57[3] = 52;
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v94);
    goto LABEL_53;
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v99);
  memcpy(v99, v94, sizeof(v99));
  codexmate_lib::core::auth::load_auth_file::h3f192b6820e78b1d(v98, a7);
  if ( v98[0] == 0x8000000000000001LL )
  {
    v102[0] = 0x8000000000000001LL;
    core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthFile$C$codexmate_lib..core..models..CoreError$GT$$GT$::h764c4e7398d6ef4a(v98);
  }
  else
  {
    memcpy(v102, v98, sizeof(v102));
    if ( v102[0] != 0x8000000000000001LL
      && (unsigned __int8)codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(v102, &v95) )
    {
      codexmate_lib::core::repository::Repository::sync_auth_bundle_into_registry::_$u7b$$u7b$closure$u7d$$u7d$::h634552c278762f8c(v98);
      goto LABEL_141;
    }
  }
  v98[0] = 2;
LABEL_141:
  core::option::Option$LT$T$GT$::filter::h49afb5173a354ff6(v93, v98, v55, v54);
  if ( v93[0] == 2 )
  {
    std::fs::read::inner::h6a30c15c40add28b(v98, a7, a8);
    v89 = v98[0];
    if ( v98[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$::h31ec7842e054a86a(v98);
LABEL_150:
      if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hcd723884b82d3047(
              a7,
              a8,
              (__int64)v118,
              v120)
          & 1) != 0 )
      {
        v92 = v117;
        *v117 = 2;
        v92[1] = v91;
        if ( v102[0] != 0x8000000000000001LL )
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v102);
LABEL_53:
        if ( 2 * v22 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, v22, 1);
          v58 = __dst[1];
          if ( __dst[1] == 0x8000000000000000LL )
            goto LABEL_81;
        }
        else
        {
          v58 = __dst[1];
          if ( __dst[1] == 0x8000000000000000LL )
          {
LABEL_81:
            if ( __dst[4] != 0x8000000000000000LL && __dst[4] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[5], __dst[4], 1);
            if ( __dst[7] != 0x8000000000000000LL && __dst[7] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[8], __dst[7], 1);
            if ( __dst[10] != 0x8000000000000000LL && __dst[10] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[11], __dst[10], 1);
            if ( __dst[13] != 0x8000000000000000LL && __dst[13] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[14], __dst[13], 1);
            v72 = __dst[16];
            if ( __dst[16] == 0x8000000000000000LL || !__dst[16] )
              goto LABEL_97;
            v73 = __dst[17];
            goto LABEL_96;
          }
        }
        if ( v58 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[2], v58, 1);
        goto LABEL_81;
      }
      LOBYTE(v22) = 1;
      codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hb1198e95828e3009(v91);
      goto LABEL_154;
    }
    v90 = v98[1];
    if ( v98[2] != v120 || memcmp((const void *)v98[1], v118, v120) )
    {
      if ( v89 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v89, 1);
      goto LABEL_150;
    }
    if ( v89 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v89, 1);
  }
  else
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v99);
    memcpy(v99, v93, sizeof(v99));
  }
  LODWORD(v22) = 0;
LABEL_154:
  if ( v102[0] != 0x8000000000000001LL )
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v102);
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(&v95);
LABEL_18:
  v102[0] = (char *)&v99[21] + 2;
  v102[1] = _$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::hfd62e806a0f88133;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_101A2BC0F, v102);
  v25 = v98[0];
  v26 = v98[1];
  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v105, v98[1], v98[2]);
  LODWORD(v119) = v22;
  if ( v25 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1);
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v98);
  v27 = v98[0];
  v28 = (SLODWORD(v98[0]) >> 13) - 1;
  v29 = 0;
  if ( SLODWORD(v98[0]) >> 13 <= 0 )
  {
    v30 = (1 - (SLODWORD(v98[0]) >> 13)) / 0x190u + 1;
    v28 += 400 * v30;
    v29 = -146097 * v30;
  }
  v120 = HIDWORD(v98[0]);
  v118 = (void *)LODWORD(v98[1]);
  v102[0] = &v99[21];
  v102[1] = _$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::hf5e97145309b68d1;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_101A2BC0F, v102);
  v31 = v98[0];
  v32 = v98[1];
  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v114, v98[1], v98[2]);
  v120 = 1000
       * (v120
        + 86400LL * (int)(((v28 / 100) >> 2) + ((1461 * v28) >> 2) + v29 + ((v27 >> 4) & 0x1FF) - v28 / 100 - 719163));
  v33 = (unsigned __int64)(1125899907LL * (_QWORD)v118) >> 50;
  if ( v31 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v31, 1);
  v34 = &v99[8];
  v120 += v33;
  v35 = v111[2];
  if ( !v35 )
  {
LABEL_44:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v95, &v99[5]);
    v118 = v108;
    v48 = v109;
    v49 = v110;
    v119 = v109;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v102, &v99[8]);
    if ( v99[11] == 0x8000000000000000LL )
    {
      v50 = 0x8000000000000000LL;
      if ( v99[14] == 0x8000000000000000LL )
        goto LABEL_46;
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v99[11]);
      v50 = v98[0];
      v113 = v98[1];
      v104 = v98[2];
      if ( v99[14] == 0x8000000000000000LL )
      {
LABEL_46:
        v51 = 0x8000000000000000LL;
        v52 = 0x8000000000000000LL;
        if ( v99[17] == 0x8000000000000000LL )
          goto LABEL_59;
        goto LABEL_58;
      }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v99[14]);
    v51 = v98[0];
    v48 = (void *)v98[1];
    v34 = (_QWORD *)v98[2];
    v52 = 0x8000000000000000LL;
    if ( v99[17] == 0x8000000000000000LL )
    {
LABEL_59:
      v98[38] = v107;
      v98[37] = v106;
      v98[36] = v105;
      v98[39] = v114;
      v98[40] = v115;
      v98[41] = v116;
      v98[24] = v95;
      v98[25] = v96;
      v98[26] = __dst[0];
      v98[27] = v118;
      v98[28] = v119;
      v98[29] = v49;
      v98[30] = v102[0];
      v98[31] = v102[1];
      v98[32] = v102[2];
      v98[33] = 0;
      v98[34] = 1;
      v98[35] = 0;
      v98[42] = v50;
      v98[43] = v113;
      v98[44] = v104;
      v98[45] = v51;
      v98[46] = v48;
      v98[47] = v34;
      v98[48] = v52;
      v98[50] = v101;
      v98[49] = v100;
      v98[0] = 1;
      v98[1] = v120;
      v98[2] = 0;
      LODWORD(v98[52]) = 50332162;
      v98[4] = 0;
      v98[6] = 0;
      v98[8] = 0;
      v98[51] = v99[20];
      v98[10] = 1;
      v98[11] = v112;
      v98[12] = 0;
      v98[14] = 2;
      v98[19] = 2;
      v59 = v111;
      v60 = v111[2];
      if ( v60 == *v111 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hdd6b1b2d9aa01c90(v111);
      memcpy((void *)(v59[1] + 424 * v60), v98, 0x1A8u);
      v59[2] = v60 + 1;
      v61 = 1;
      v62 = 0;
      goto LABEL_62;
    }
LABEL_58:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v99[17]);
    v52 = v98[0];
    v100 = v98[1];
    v101 = v98[2];
    goto LABEL_59;
  }
  v36 = v111[1];
  v37 = 424 * v35;
  v38 = (const void *)v99[6];
  v39 = v99[7];
  while ( *(_QWORD *)(v36 + 208) != v39 || memcmp(*(const void **)(v36 + 200), v38, v39) )
  {
    v36 += 424;
    v37 -= 424;
    if ( !v37 )
      goto LABEL_44;
  }
  v40 = *(_QWORD *)(v36 + 232);
  if ( v40 != v110 || memcmp(*(const void **)(v36 + 224), v109, v40) )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v108);
    v41 = *(_QWORD *)(v36 + 216);
    if ( v41 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v36 + 224), v41, 1);
    *(_QWORD *)(v36 + 232) = v98[2];
    v42 = v98[0];
    *(_QWORD *)(v36 + 224) = v98[1];
    *(_QWORD *)(v36 + 216) = v42;
    LOBYTE(v42) = 1;
    LODWORD(v119) = v42;
  }
  v43 = *(_QWORD *)(v36 + 256);
  if ( v43 != v99[10] || memcmp(*(const void **)(v36 + 248), (const void *)v99[9], v43) )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v99[8]);
    v44 = *(_QWORD *)(v36 + 240);
    if ( v44 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v36 + 248), v44, 1);
    *(_QWORD *)(v36 + 256) = v98[2];
    v45 = v98[0];
    *(_QWORD *)(v36 + 248) = v98[1];
    *(_QWORD *)(v36 + 240) = v45;
    LOBYTE(v45) = 1;
    LODWORD(v119) = v45;
  }
  v46 = *(_QWORD *)(v36 + 336);
  if ( v46 == 0x8000000000000000LL )
  {
    v47 = (char)v119;
    if ( v99[11] == 0x8000000000000000LL )
      goto LABEL_110;
    goto LABEL_106;
  }
  if ( v99[11] == 0x8000000000000000LL )
  {
    v74 = 0x8000000000000000LL;
    goto LABEL_107;
  }
  v75 = *(_QWORD *)(v36 + 352);
  v47 = (char)v119;
  if ( v75 != v99[13] || memcmp(*(const void **)(v36 + 344), (const void *)v99[12], v75) )
  {
LABEL_106:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v99[11]);
    v74 = v98[0];
    v102[0] = v98[1];
    v102[1] = v98[2];
    v46 = *(_QWORD *)(v36 + 336);
    if ( v46 == 0x8000000000000000LL )
    {
LABEL_109:
      *(_QWORD *)(v36 + 336) = v74;
      v76 = v102[1];
      *(_QWORD *)(v36 + 344) = v102[0];
      *(_QWORD *)(v36 + 352) = v76;
      v47 = 1;
      goto LABEL_110;
    }
LABEL_107:
    if ( v46 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v36 + 344), v46, 1);
    goto LABEL_109;
  }
LABEL_110:
  if ( *(_QWORD *)(v36 + 360) == 0x8000000000000000LL && v99[14] != 0x8000000000000000LL )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v99[14]);
    v77 = v98[0];
    v102[0] = v98[1];
    v102[1] = v98[2];
    v78 = *(_QWORD *)(v36 + 360);
    if ( v78 != 0x8000000000000000LL && v78 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v36 + 368), v78, 1);
    *(_QWORD *)(v36 + 360) = v77;
    v79 = v102[1];
    *(_QWORD *)(v36 + 368) = v102[0];
    *(_QWORD *)(v36 + 376) = v79;
    v47 = 1;
  }
  v80 = *(_QWORD *)(v36 + 384);
  if ( v80 != 0x8000000000000000LL )
  {
    if ( v99[17] == 0x8000000000000000LL )
    {
      v81 = 0x8000000000000000LL;
      goto LABEL_124;
    }
    v82 = *(_QWORD *)(v36 + 400);
    if ( v82 == v99[19] && !memcmp(*(const void **)(v36 + 392), (const void *)v99[18], v82) )
      goto LABEL_127;
LABEL_123:
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v99[17]);
    v81 = v98[0];
    v102[0] = v98[1];
    v102[1] = v98[2];
    v80 = *(_QWORD *)(v36 + 384);
    if ( v80 == 0x8000000000000000LL )
    {
LABEL_126:
      *(_QWORD *)(v36 + 384) = v81;
      v83 = v102[1];
      *(_QWORD *)(v36 + 392) = v102[0];
      *(_QWORD *)(v36 + 400) = v83;
      v47 = 1;
      goto LABEL_127;
    }
LABEL_124:
    if ( v80 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v36 + 392), v80, 1);
    goto LABEL_126;
  }
  if ( v99[17] != 0x8000000000000000LL )
    goto LABEL_123;
LABEL_127:
  v84 = codexmate_lib::core::repository::apply_plan_state::h9716ca492c71eb31(v36, BYTE2(v99[21]), 0, v120);
  v85 = *(_QWORD *)(v36 + 328);
  if ( v85 == v116 )
  {
    v86 = v84;
    if ( !memcmp(*(const void **)(v36 + 320), v115, v85) )
    {
      v61 = v86 | v47;
      v62 = 1;
      v59 = v111;
      if ( *(_QWORD *)(v36 + 80) )
        goto LABEL_62;
      goto LABEL_132;
    }
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v114);
  v87 = *(_QWORD *)(v36 + 312);
  if ( v87 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v36 + 320), v87, 1);
  *(_QWORD *)(v36 + 328) = v98[2];
  v88 = v98[0];
  *(_QWORD *)(v36 + 320) = v98[1];
  *(_QWORD *)(v36 + 312) = v88;
  v61 = 1;
  v62 = 1;
  v59 = v111;
  if ( !*(_QWORD *)(v36 + 80) )
  {
LABEL_132:
    *(_QWORD *)(v36 + 80) = 1;
    *(_QWORD *)(v36 + 88) = v112;
    v62 = 1;
    v61 = 1;
  }
LABEL_62:
  v63 = v59;
  if ( v59[3] != 0x8000000000000000LL
    && (v64 = v59[5], v64 == v99[7])
    && !memcmp((const void *)v59[4], (const void *)v99[6], v64) )
  {
    v17 = v61 == 0;
    v65 = v117;
    v69 = v103;
    if ( v17 )
      goto LABEL_71;
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v98, &v99[5]);
    v65 = v117;
    v66 = v59 + 3;
    v102[2] = v98[2];
    v102[1] = v98[1];
    v102[0] = v98[0];
    v67 = v63[3];
    if ( v67 != 0x8000000000000000LL && v67 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63[4], v67, 1);
    v63[5] = v102[2];
    v68 = v102[0];
    v63[4] = v102[1];
    *v66 = v68;
    v69 = v103;
  }
  v70 = (void *)v63[1];
  v71 = v63[2];
  v98[0] = &v100;
  if ( v71 >= 2 )
  {
    if ( v71 >= 0x15 )
      core::slice::sort::stable::driftsort_main::hc8078c05894e6e57(v70, v71, v98);
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::hf6ce98a818bf376d(v70);
  }
  v63[9] = v112;
  codexmate_lib::core::repository::Repository::persist_registry::he3845a2433b36ff3(v98, v69, v63, 0);
  if ( LODWORD(v98[0]) != 11 )
  {
    qmemcpy(v65, v98, 0x60u);
    if ( v62 )
      goto LABEL_72;
    return core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v99);
  }
LABEL_71:
  *v65 = 11;
  if ( !v62 )
    return core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v99);
LABEL_72:
  if ( v114 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, v114, 1);
  v72 = v105;
  if ( !v105 )
    goto LABEL_97;
  v73 = v106;
LABEL_96:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v72, 1);
LABEL_97:
  result = core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(v99);
  if ( v108 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v108, 1);
  return result;
}

// ===== codexmate_lib::core::repository::Repository::flush_live_auth_into_matching_snapshot::h37d4725d8e303fc2 @ 0x100265000 size=1690 lines=234 =====
_QWORD *__fastcall codexmate_lib::core::repository::Repository::flush_live_auth_into_matching_snapshot::h37d4725d8e303fc2(
        _QWORD *a1,
        _QWORD *a2,
        void *a3,
        size_t a4,
        void *a5,
        size_t a6)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rsi
  _QWORD *result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rsi
  _BYTE *v19; // rdi
  __int64 v20; // rbx
  void *v21; // rax
  _QWORD *v22; // rcx
  char v23; // al
  __int64 v24; // rbx
  __int64 v25; // r14
  char v26; // al
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // [rsp+0h] [rbp-340h] BYREF
  void *v30[12]; // [rsp+8h] [rbp-338h] BYREF
  _BYTE v31[72]; // [rsp+68h] [rbp-2D8h] BYREF
  _QWORD v32[22]; // [rsp+B0h] [rbp-290h] BYREF
  _QWORD v33[2]; // [rsp+160h] [rbp-1E0h] BYREF
  _QWORD __dst[20]; // [rsp+170h] [rbp-1D0h] BYREF
  _QWORD v35[22]; // [rsp+210h] [rbp-130h] BYREF
  size_t __n; // [rsp+2C0h] [rbp-80h]
  void *__s2; // [rsp+2C8h] [rbp-78h]
  unsigned __int64 v38; // [rsp+2D0h] [rbp-70h]
  void *v39; // [rsp+2D8h] [rbp-68h]
  __int64 v40; // [rsp+2E0h] [rbp-60h]
  size_t v41; // [rsp+2E8h] [rbp-58h]
  __int64 v42; // [rsp+2F0h] [rbp-50h]
  size_t v43; // [rsp+2F8h] [rbp-48h]
  void *v44; // [rsp+300h] [rbp-40h]
  __int64 v45; // [rsp+308h] [rbp-38h]
  _QWORD *v46; // [rsp+310h] [rbp-30h]

  __n = a6;
  __s2 = a5;
  v46 = a1;
  v8 = a2[4];
  v9 = a2[5];
  std::sys::fs::metadata::h32fa16d3052ea535(v35, v8, v9);
  if ( LODWORD(v35[0]) == 1 )
  {
    if ( (v35[1] & 3) == 1 )
    {
      v10 = v35[1] - 1LL;
      v11 = *(_QWORD *)(v35[1] - 1LL);
      v12 = *(_QWORD *)(v35[1] + 7LL);
      if ( *(_QWORD *)v12 )
        (*(void (__fastcall **)(__int64))v12)(v11);
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24, 8);
    }
    result = v46;
    *v46 = 11;
    return result;
  }
  std::fs::read::inner::h6a30c15c40add28b(v35, v8, v9);
  v15 = v35[1];
  if ( __OFSUB__(-v35[0], 1) )
  {
    result = v46;
    *v46 = 2;
    result[1] = v15;
    return result;
  }
  v42 = v35[0];
  v44 = (void *)v35[1];
  v32[0] = v35[1];
  v41 = v35[2];
  v32[1] = v35[2];
  v32[2] = 0;
  v32[3] = 0;
  serde_json::de::from_trait::h8ec55585dc871976(v35, v32);
  v16 = v35[1];
  v38 = 0x8000000000000001LL;
  if ( v35[0] == 0x8000000000000001LL )
  {
    result = v46;
    *v46 = 3;
    result[1] = v16;
    v17 = v42;
    if ( !v42 )
      return result;
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v17, 1);
  }
  v43 = a4;
  v39 = a3;
  memcpy(__dst, &v35[2], sizeof(__dst));
  v45 = v35[0];
  v33[0] = v35[0];
  v40 = v35[1];
  v33[1] = v35[1];
  if ( !(unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h348e0c90ba3c9249(v33)
    && !(unsigned __int8)codexmate_lib::core::auth::is_api_key_auth::hfe24d937ecd3b80c(v33)
    && (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::he859c38ef587beb8(v33) )
  {
    codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(v35, v33, v8, v9);
    qmemcpy(v32, &v35[1], 0x60u);
    if ( v35[0] == 2 )
    {
      qmemcpy(v46, v32, 0x60u);
      goto LABEL_20;
    }
    qmemcpy(v31, &v35[13], sizeof(v31));
    qmemcpy(v30, v32, sizeof(v30));
    v19 = v31;
    v29 = v35[0];
    v20 = v45;
    if ( v30[6] != (void *)__n || (v19 = v30[5], memcmp(v30[5], __s2, __n)) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19);
      v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(50, 1);
      if ( !v21 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 50);
      qmemcpy(v21, "Live account changed while handing off credentials", 50);
      v22 = v46;
      *v46 = 10;
      v22[1] = 50;
      v22[2] = v21;
      v22[3] = 50;
      goto LABEL_47;
    }
    codexmate_lib::core::auth::ensure_managed_account_snapshot_location::h5e97988fa1010acc(v35, a3, v43, a2[31], a2[32]);
    if ( LODWORD(v35[0]) != 11 )
    {
      qmemcpy(v46, v35, 0x60u);
      goto LABEL_47;
    }
    codexmate_lib::core::auth::load_auth_file::h3f192b6820e78b1d(v32, a3);
    if ( v32[0] == v38 )
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthFile$C$codexmate_lib..core..models..CoreError$GT$$GT$::h764c4e7398d6ef4a(v32);
    }
    else
    {
      memcpy(v35, v32, sizeof(v35));
      v23 = codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(v35, v33);
      v20 = v45;
      if ( v23 )
      {
        *v46 = 11;
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v32);
        goto LABEL_47;
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v32);
    }
    std::fs::read::inner::h6a30c15c40add28b(v35, a3, v43);
    v24 = v35[0];
    if ( v35[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$::h31ec7842e054a86a(v35);
    }
    else
    {
      v25 = v35[1];
      if ( v35[2] == v41 && !memcmp((const void *)v35[1], v44, v41) )
      {
        if ( v24 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1);
        *v46 = 11;
        v20 = v45;
        goto LABEL_47;
      }
      if ( v24 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1);
    }
    v26 = codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hcd723884b82d3047(
            a3,
            v43,
            (__int64)v44,
            v41);
    v20 = v45;
    if ( (v26 & 1) == 0 )
    {
      codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hb1198e95828e3009(v27);
      *v46 = 11;
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(&v29);
      result = (_QWORD *)core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v33);
      v17 = v42;
      if ( !v42 )
        return result;
      return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v17, 1);
    }
    v28 = v46;
    *v46 = 2;
    v28[1] = v27;
LABEL_47:
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h4f2fd2f0b6ae5f0b(&v29);
    v18 = v20;
    if ( !(2 * v20) )
      goto LABEL_22;
    goto LABEL_21;
  }
  *v46 = 11;
LABEL_20:
  v18 = v45;
  if ( 2 * v45 )
LABEL_21:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v18, 1);
LABEL_22:
  if ( __dst[1] != 0x8000000000000000LL && __dst[1] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[2], __dst[1], 1);
  if ( __dst[4] != 0x8000000000000000LL && __dst[4] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[5], __dst[4], 1);
  if ( __dst[7] != 0x8000000000000000LL && __dst[7] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[8], __dst[7], 1);
  if ( __dst[10] != 0x8000000000000000LL && __dst[10] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[11], __dst[10], 1);
  if ( __dst[13] != 0x8000000000000000LL && __dst[13] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[14], __dst[13], 1);
  result = (_QWORD *)0x8000000000000000LL;
  if ( __dst[16] != 0x8000000000000000LL && __dst[16] )
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[17], __dst[16], 1);
  v17 = v42;
  if ( v42 )
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v17, 1);
  return result;
}

// ===== codexmate_lib::core::repository::Repository::load_registry_for_mutation::h0b26d83573b0ca0a @ 0x10025b520 size=318 lines=58 =====
__int64 __fastcall codexmate_lib::core::repository::Repository::load_registry_for_mutation::h0b26d83573b0ca0a(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int *v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // r14
  int v15; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-C0h]
  __int64 v17; // [rsp+A0h] [rbp-30h] BYREF
  int v18; // [rsp+A8h] [rbp-28h]

  v5 = &v15;
  std::sys::fs::metadata::h32fa16d3052ea535(&v15, a2, a3);
  if ( v15 != 1 )
    return codexmate_lib::core::repository::Repository::load_registry::hc51b7fe546571e2c(a1, a2, a3);
  v7 = v16 & 3;
  if ( (_DWORD)v7 == 1 )
  {
    v8 = (int *)(v16 - 1);
    v9 = *(_QWORD *)(v16 - 1);
    v10 = *(_QWORD *)(v16 + 7);
    if ( *(_QWORD *)v10 )
      (*(void (__fastcall **)(__int64))v10)(v9);
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16));
    a2 = 24;
    v5 = v8;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24, 8);
  }
  v17 = std::time::SystemTime::now::h1fe79e41f9d5677f(v5, a2, v6, v7);
  v18 = v12;
  v13 = 0;
  std::time::SystemTime::duration_since::had059553cab94f96(&v15, &v17, 0, 0);
  if ( !(_BYTE)v15 )
    v13 = v16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 8;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 15;
  *(_DWORD *)(a1 + 68) = 10;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = v13;
  *(_DWORD *)(a1 + 88) = 4;
  *(_BYTE *)(a1 + 92) = 1;
  *(_QWORD *)a1 = 11;
  return 0x8000000000000000LL;
}

// ===== codexmate_lib::core::repository::Repository::switch_account::_$u7b$$u7b$closure$u7d$$u7d$::h6bcddc9e999a201e @ 0x100248a90 size=233 lines=68 =====
unsigned __int64 __fastcall codexmate_lib::core::repository::Repository::switch_account::_$u7b$$u7b$closure$u7d$$u7d$::h6bcddc9e999a201e(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t a5)
{
  __int64 v7; // rbx
  __int64 v8; // r13
  const void *v9; // rdi
  signed __int64 v10; // r14
  __int64 v11; // r13
  unsigned __int64 result; // rax
  const void *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r12

  if ( a3 )
  {
    v7 = 424 * a3;
    v8 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + v8 + 208) == a5 )
      {
        v9 = *(const void **)(a2 + v8 + 200);
        if ( !memcmp(v9, a4, a5) )
          break;
      }
      v8 += 424;
      if ( v7 == v8 )
        goto LABEL_9;
    }
    v10 = *(_QWORD *)(a2 + v8 + 232);
    if ( v10 < 0 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    v13 = *(const void **)(a2 + v8 + 224);
    if ( v10 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9);
      v11 = 1;
      v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1);
      if ( !v14 )
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10);
      v15 = v14;
    }
    else
    {
      v15 = 1;
    }
    memcpy((void *)v15, v13, v10);
    *a1 = v10;
    a1[1] = v15;
    a1[2] = v10;
    return (unsigned __int64)a1;
  }
  else
  {
LABEL_9:
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  return result;
}

// ===== codexmate_lib::core::repository::Repository::sync_auth_bundle_into_registry::_$u7b$$u7b$closure$u7d$$u7d$::h634552c278762f8c @ 0x100261cd0 size=107 lines=14 =====
void *__fastcall codexmate_lib::core::repository::Repository::sync_auth_bundle_into_registry::_$u7b$$u7b$closure$u7d$$u7d$::h634552c278762f8c(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD __src[46]; // [rsp+8h] [rbp-B8h] BYREF

  codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(__src, a4, a2, a3);
  if ( __src[0] != 2 )
    return memcpy(__dst, __src, 0xB0u);
  *__dst = 2;
  return (void *)core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h2b3888839031de9d(&__src[2]);
}

