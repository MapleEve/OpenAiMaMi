// __ZN13codexmate_lib4core5relay23codex_thread_visibility36cleanup_orphan_router_threads_strict @ 0x100aec9a0 | 基线 same-set
// [FULL decompile]

__int64 *__fastcall codexmate_lib::core::relay::codex_thread_visibility::cleanup_orphan_router_threads_strict::h0dc1554601aef88a(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 *v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbx
  signed __int64 epi64; // rbx
  __int64 v11; // r14
  __int64 v12; // r13
  __int128 v13; // krF0_16
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rsi
  int v18; // eax
  unsigned __int64 v19; // r12
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rax
  void *v23; // r12
  __int64 v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v32; // kr60_16
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // r12
  __int64 v42; // rsi
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  const char *v46; // r13
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // r14
  signed __int64 v49; // rbx
  bool v50; // zf
  __int64 v51; // r14
  __int64 v52; // rbx
  _QWORD *v53; // r12
  __int64 v54; // rsi
  __int64 v55; // rsi
  __int64 v56; // r12
  __int64 v57; // rbx
  __int64 j; // r14
  __int64 v59; // rdi
  unsigned __int64 v60; // r14
  __m128i v61; // xmm0
  int v62; // r14d
  unsigned __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rcx
  unsigned __int64 v66; // rax
  char *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 i; // r14
  __int64 v71; // rdi
  unsigned __int64 v72; // rbx
  signed __int64 v73; // r13
  __int64 v74; // r14
  __int64 v75; // rcx
  _QWORD *v76; // r14
  __int64 v77; // rsi
  signed __int64 v78; // r15
  __int64 v79; // rbx
  __int64 v80; // r13
  __int64 v81; // r12
  unsigned __int64 v82; // rbx
  _QWORD *v83; // r15
  __int64 v84; // rsi
  __int64 *v85; // r14
  __int64 *v86; // rdx
  __int64 v87; // r15
  __int64 v88; // r12
  _QWORD *v89; // r13
  unsigned __int64 v90; // rbx
  __int64 v91; // rsi
  _BYTE v93[120]; // [rsp+8h] [rbp-648h] BYREF
  __m128i v94; // [rsp+80h] [rbp-5D0h] BYREF
  unsigned __int64 v95; // [rsp+90h] [rbp-5C0h]
  __m128i v96; // [rsp+A0h] [rbp-5B0h] BYREF
  unsigned __int64 v97; // [rsp+B0h] [rbp-5A0h]
  __int128 v98; // [rsp+C0h] [rbp-590h] BYREF
  __int64 v99; // [rsp+D0h] [rbp-580h]
  __int64 v100; // [rsp+D8h] [rbp-578h]
  _BYTE v101[73]; // [rsp+E0h] [rbp-570h] BYREF
  _BYTE v102[7]; // [rsp+129h] [rbp-527h]
  __int64 v103; // [rsp+130h] [rbp-520h]
  _QWORD *v104; // [rsp+138h] [rbp-518h]
  __int64 v105; // [rsp+140h] [rbp-510h]
  __int64 v106; // [rsp+148h] [rbp-508h]
  _QWORD v107[3]; // [rsp+150h] [rbp-500h] BYREF
  __int64 v108; // [rsp+168h] [rbp-4E8h]
  void *v109; // [rsp+170h] [rbp-4E0h]
  __int64 v110; // [rsp+178h] [rbp-4D8h]
  void *v111; // [rsp+180h] [rbp-4D0h]
  __int64 v112; // [rsp+188h] [rbp-4C8h] BYREF
  __int128 v113; // [rsp+190h] [rbp-4C0h]
  __int64 v114; // [rsp+1A0h] [rbp-4B0h]
  __int64 v115; // [rsp+1A8h] [rbp-4A8h]
  __int64 v116; // [rsp+1B0h] [rbp-4A0h]
  __int128 v117; // [rsp+1B8h] [rbp-498h]
  __int64 v118; // [rsp+1C8h] [rbp-488h]
  __int64 v119; // [rsp+1D0h] [rbp-480h]
  __int64 v120; // [rsp+1D8h] [rbp-478h]
  _QWORD *v121; // [rsp+1E0h] [rbp-470h]
  __int64 v122; // [rsp+1E8h] [rbp-468h]
  __int64 *v123; // [rsp+1F0h] [rbp-460h]
  __int64 v124; // [rsp+1F8h] [rbp-458h]
  __m128i v125; // [rsp+200h] [rbp-450h] BYREF
  _QWORD v126[3]; // [rsp+218h] [rbp-438h] BYREF
  __int128 v127; // [rsp+230h] [rbp-420h]
  __int64 v128; // [rsp+240h] [rbp-410h]
  __int64 v129; // [rsp+248h] [rbp-408h] BYREF
  signed __int64 v130; // [rsp+250h] [rbp-400h] BYREF
  __int128 v131; // [rsp+258h] [rbp-3F8h]
  __int64 v132; // [rsp+268h] [rbp-3E8h]
  __int64 v133; // [rsp+270h] [rbp-3E0h]
  __int64 v134; // [rsp+278h] [rbp-3D8h]
  __int128 v135; // [rsp+280h] [rbp-3D0h]
  __int64 v136; // [rsp+290h] [rbp-3C0h]
  _QWORD *v137; // [rsp+298h] [rbp-3B8h]
  __int64 v138; // [rsp+2A0h] [rbp-3B0h]
  unsigned __int64 v139; // [rsp+2A8h] [rbp-3A8h]
  __int64 v140; // [rsp+2B0h] [rbp-3A0h]
  __int64 v141; // [rsp+2B8h] [rbp-398h]
  __int64 v142; // [rsp+2C0h] [rbp-390h]
  __int64 v143; // [rsp+2C8h] [rbp-388h]
  __int64 v144; // [rsp+2D0h] [rbp-380h]
  __int64 v145; // [rsp+2D8h] [rbp-378h]
  const char *v146; // [rsp+2E0h] [rbp-370h] BYREF
  __int128 v147; // [rsp+2E8h] [rbp-368h]
  __int128 v148; // [rsp+2F8h] [rbp-358h]
  void *v149; // [rsp+308h] [rbp-348h]
  __int128 v150; // [rsp+310h] [rbp-340h] BYREF
  _BYTE v151[24]; // [rsp+320h] [rbp-330h]
  void *v152; // [rsp+338h] [rbp-318h]
  __int64 v153; // [rsp+340h] [rbp-310h] BYREF
  __int64 v154; // [rsp+348h] [rbp-308h]
  __int64 v155; // [rsp+350h] [rbp-300h]
  __int64 v156; // [rsp+358h] [rbp-2F8h]
  __int64 *v157; // [rsp+360h] [rbp-2F0h]
  __int64 v158; // [rsp+368h] [rbp-2E8h]
  __int64 v159; // [rsp+370h] [rbp-2E0h]
  const char **v160; // [rsp+378h] [rbp-2D8h] BYREF
  __int128 v161; // [rsp+380h] [rbp-2D0h] BYREF
  __int128 v162; // [rsp+390h] [rbp-2C0h] BYREF
  void *v163; // [rsp+3A0h] [rbp-2B0h]
  __int64 v164; // [rsp+3A8h] [rbp-2A8h]
  __int64 v165; // [rsp+3B0h] [rbp-2A0h]
  __int64 v166; // [rsp+3B8h] [rbp-298h] BYREF
  __int64 v167; // [rsp+3C0h] [rbp-290h]
  signed __int64 v168; // [rsp+3C8h] [rbp-288h]
  __int128 v169; // [rsp+3D0h] [rbp-280h] BYREF
  void *v170; // [rsp+3E0h] [rbp-270h]
  __int64 v171; // [rsp+3E8h] [rbp-268h]
  __int64 v172; // [rsp+3F0h] [rbp-260h]
  __int64 v173; // [rsp+3F8h] [rbp-258h]
  _OWORD v174[6]; // [rsp+400h] [rbp-250h] BYREF
  __int128 v175; // [rsp+460h] [rbp-1F0h] BYREF
  __int64 v176; // [rsp+470h] [rbp-1E0h]
  __int128 v177; // [rsp+478h] [rbp-1D8h]
  void *v178; // [rsp+488h] [rbp-1C8h]
  _BYTE v179[104]; // [rsp+490h] [rbp-1C0h] BYREF
  char v180; // [rsp+4F8h] [rbp-158h]
  _BYTE v181[7]; // [rsp+4F9h] [rbp-157h]
  _BYTE v182[104]; // [rsp+500h] [rbp-150h] BYREF
  char v183; // [rsp+568h] [rbp-E8h]
  _DWORD v184[11]; // [rsp+569h] [rbp-E7h]
  __int64 v185; // [rsp+598h] [rbp-B8h]
  unsigned __int64 v186; // [rsp+5A0h] [rbp-B0h]
  unsigned __int64 v187; // [rsp+5A8h] [rbp-A8h]
  __int128 v188; // [rsp+5B0h] [rbp-A0h]
  __int64 v189; // [rsp+5C0h] [rbp-90h]
  __int64 v190; // [rsp+5C8h] [rbp-88h]
  __m128i si128; // [rsp+5D0h] [rbp-80h] BYREF
  __int128 v192; // [rsp+5E0h] [rbp-70h] BYREF
  _BYTE v193[40]; // [rsp+5F0h] [rbp-60h]
  __int64 v194; // [rsp+618h] [rbp-38h]
  __int16 v195; // [rsp+626h] [rbp-2Ah]

  v157 = a1;
  v121 = a2;
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(v182, a2);
  v2 = *(__int64 **)&v182[8];
  v103 = *(_QWORD *)&v182[8];
  v104 = *(_QWORD **)&v182[8];
  v105 = *(_QWORD *)v182;
  v156 = *(_QWORD *)&v182[8] + 24LL * *(_QWORD *)&v182[16];
  v106 = v156;
  v142 = *(_QWORD *)&v182[8];
  v141 = *(_QWORD *)v182;
  if ( *(_QWORD *)&v182[16] )
  {
    v3 = 24LL * *(_QWORD *)&v182[16] - 24;
    v4 = *(_QWORD *)&v182[8] + 32LL;
    v5 = *(__int64 **)&v182[8];
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v138 = v6;
      v137 = (_QWORD *)v4;
      v2 = v5 + 3;
      v104 = v5 + 3;
      v8 = *v5;
      v187 = 0x8000000000000000LL;
      if ( v8 == 0x8000000000000000LL )
      {
        v6 = v138;
        goto LABEL_159;
      }
      v119 = v7;
      v139 = v3;
      v9 = v5[2];
      v171 = v5[1];
      std::sys::fs::metadata::h32fa16d3052ea535(v182, v171, v9);
      if ( *(_DWORD *)v182 != 1 )
        break;
      if ( (v182[8] & 3) == 1 )
      {
        v14 = *(_QWORD *)&v182[8] - 1LL;
        v15 = *(_QWORD *)(*(_QWORD *)&v182[8] - 1LL);
        v16 = *(_QWORD *)(*(_QWORD *)&v182[8] + 7LL);
        if ( *(_QWORD *)v16 )
          (*(void (__fastcall **)(_QWORD))v16)(*(_QWORD *)(*(_QWORD *)&v182[8] - 1LL));
        v17 = *(_QWORD *)(v16 + 8);
        if ( v17 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 24, 8);
        si128.i64[0] = 0;
        epi64 = 0;
      }
      else
      {
        si128.i64[0] = 0;
        epi64 = 0;
      }
LABEL_98:
      if ( v8 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v8, 1);
      v7 = epi64 + v119;
      v6 = si128.i64[0] + v138;
      v3 = v139 - 24;
      v4 = (__int64)(v137 + 3);
      v5 = v2;
      if ( v2 == (__int64 *)v156 )
        goto LABEL_164;
    }
    rusqlite::Connection::open_with_flags::h45227a733d927884(v182, v171, v9, 32770);
    v140 = v9;
    v185 = v8;
    v11 = *(_QWORD *)v182;
    v12 = *(_QWORD *)&v182[24];
    v192 = *(_OWORD *)&v182[32];
    *(_QWORD *)v193 = *(_QWORD *)&v182[48];
    *(_QWORD *)&v193[8] = *(_QWORD *)&v182[56];
    v13 = *(_OWORD *)&v182[8];
    if ( v183 == 3 )
    {
      v174[0] = v192;
      v174[1] = *(_OWORD *)v193;
    }
    else
    {
      *(_QWORD *)&v179[96] = *(_QWORD *)&v182[96];
      *(_QWORD *)&v179[88] = *(_QWORD *)&v182[88];
      *(_OWORD *)&v179[72] = *(_OWORD *)&v182[72];
      *(_QWORD *)&v179[64] = *(_QWORD *)&v182[64];
      *(_DWORD *)&v181[3] = *(_DWORD *)((char *)v184 + 3);
      *(_DWORD *)v181 = v184[0];
      *(_OWORD *)v179 = *(_OWORD *)v182;
      *(_QWORD *)&v179[16] = *(_QWORD *)&v182[16];
      *(_QWORD *)&v179[24] = *(_QWORD *)&v182[24];
      *(_QWORD *)&v179[56] = *(_QWORD *)&v193[8];
      *(_QWORD *)&v179[48] = *(_QWORD *)v193;
      *(_OWORD *)&v179[32] = v192;
      v180 = v183;
      rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v182, v179, 5, 0);
      v11 = *(_QWORD *)v182;
      if ( *(_QWORD *)v182 == 0x8000000000000016LL )
      {
        v11 = *(_QWORD *)v179;
        v12 = *(_QWORD *)&v179[24];
        qmemcpy(v174, &v179[32], 0x48u);
        LODWORD(v160) = *(_DWORD *)v181;
        *(_DWORD *)((char *)&v160 + 3) = *(_DWORD *)&v181[3];
        v13 = *(_OWORD *)&v179[8];
        if ( v180 == 3 )
          goto LABEL_171;
        qmemcpy(v101, v174, 0x48u);
        *(_DWORD *)&v102[3] = *(_DWORD *)((char *)&v160 + 3);
        *(_DWORD *)v102 = (_DWORD)v160;
        v99 = *(_QWORD *)&v179[16];
        v100 = *(_QWORD *)&v179[24];
        v98 = *(_OWORD *)v179;
        v101[72] = v180;
        v8 = v185;
        rusqlite::Connection::execute_batch::h4a2529fc120bbad7(
          v179,
          &v98,
          "PRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
          28);
        if ( *(_QWORD *)v179 != 0x8000000000000016LL )
        {
          *(_QWORD *)&v182[56] = *(_QWORD *)&v179[56];
          *(_QWORD *)&v182[48] = *(_QWORD *)&v179[48];
          *(_QWORD *)&v182[40] = *(_QWORD *)&v179[40];
          *(_OWORD *)&v182[24] = *(_OWORD *)&v179[24];
          *(_OWORD *)&v182[8] = *(_OWORD *)&v179[8];
          *(_QWORD *)v182 = *(_QWORD *)v179;
          *(_QWORD *)&v192 = v182;
          *((_QWORD *)&v192 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v174, &unk_1017CBBDC, &v192);
          epi64 = *((_QWORD *)&v174[0] + 1);
          si128.i64[0] = *(_QWORD *)&v174[0];
          v187 = *(_QWORD *)&v174[1];
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v182);
          goto LABEL_96;
        }
        rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(
          v182,
          &v98,
          "SELECT DISTINCT rollout_path FROM threads WHERE rollout_path IS NOT NULL AND rollout_path <> '' AND COALESCE(archived, 0) = 0",
          125);
        if ( *(_DWORD *)v182 == 1 )
        {
          *(_QWORD *)&v179[56] = *(_QWORD *)&v182[64];
          *(_QWORD *)&v179[48] = *(_QWORD *)&v182[56];
          *(_QWORD *)&v179[40] = *(_QWORD *)&v182[48];
          *(_QWORD *)&v179[32] = *(_QWORD *)&v182[40];
          *(_OWORD *)&v179[16] = *(_OWORD *)&v182[24];
          *(_OWORD *)v179 = *(_OWORD *)&v182[8];
          *(_QWORD *)&v192 = v179;
          *((_QWORD *)&v192 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v160, &unk_1017CB00E, &v192);
          si128.i64[0] = (__int64)v160;
          v187 = *((_QWORD *)&v161 + 1);
          epi64 = v161;
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v179);
          goto LABEL_96;
        }
        v174[3] = *(_OWORD *)&v182[56];
        *((_QWORD *)&v174[2] + 1) = *(_QWORD *)&v182[48];
        *(_OWORD *)((char *)&v174[1] + 8) = *(_OWORD *)&v182[32];
        *(_QWORD *)&v174[1] = *(_QWORD *)&v182[24];
        v174[0] = *(_OWORD *)&v182[8];
        v18 = sqlite3_bind_parameter_count(*(sqlite3_stmt **)&v182[64]);
        if ( v18 )
        {
          *(_QWORD *)v182 = 0x8000000000000013LL;
          *(_QWORD *)&v182[8] = 0;
          *(_QWORD *)&v182[16] = v18;
          *(_QWORD *)&v192 = v182;
          *((_QWORD *)&v192 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v179, &unk_1017CB028, &v192);
          epi64 = *(_QWORD *)&v179[8];
          si128.i64[0] = *(_QWORD *)v179;
          v19 = *(_QWORD *)&v179[16];
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v182);
          goto LABEL_95;
        }
        core::iter::adapters::try_process::he5e6ab8a9a2bfd82(v179, v174, 0);
        if ( *(_QWORD *)v179 != 0x8000000000000016LL )
        {
          *(_QWORD *)&v182[56] = *(_QWORD *)&v179[56];
          *(_QWORD *)&v182[48] = *(_QWORD *)&v179[48];
          *(_QWORD *)&v182[40] = *(_QWORD *)&v179[40];
          *(_QWORD *)&v182[32] = *(_QWORD *)&v179[32];
          *(_QWORD *)&v182[24] = *(_QWORD *)&v179[24];
          *(_OWORD *)&v182[8] = *(_OWORD *)&v179[8];
          *(_QWORD *)v182 = *(_QWORD *)v179;
          *(_QWORD *)&v175 = v182;
          *((_QWORD *)&v175 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v192, &unk_1017CB040, &v175);
          epi64 = *((_QWORD *)&v192 + 1);
          si128.i64[0] = v192;
          v19 = *(_QWORD *)v193;
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v182);
LABEL_95:
          v187 = v19;
          core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v174);
LABEL_96:
          v26 = 10;
LABEL_97:
          core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v98);
          if ( v26 != 11 )
            goto LABEL_172;
          goto LABEL_98;
        }
        v143 = *(_QWORD *)&v179[8];
        v20 = *(_QWORD *)&v179[16];
        v21 = *(_QWORD *)&v179[24];
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v174);
        v107[0] = v143;
        v107[1] = v20;
        v107[2] = v21;
        v166 = 0;
        v167 = 8;
        v168 = 0;
        v144 = v20;
        v124 = v21;
        if ( v21 )
        {
          v122 = v20 + 24 * v21;
          v22 = v20;
          do
          {
            v23 = *(void **)(v22 + 8);
            v120 = v22;
            v24 = *(_QWORD *)(v22 + 16);
            std::sys::fs::metadata::h32fa16d3052ea535(v182, v23, v24);
            if ( *(_DWORD *)v182 == 1 )
            {
              if ( (v182[8] & 3) == 1 )
              {
                v37 = *(_QWORD *)&v182[8] - 1LL;
                v38 = *(_QWORD *)(*(_QWORD *)&v182[8] - 1LL);
                v39 = *(_QWORD *)(*(_QWORD *)&v182[8] + 7LL);
                if ( *(_QWORD *)v39 )
                  (*(void (__fastcall **)(_QWORD))v39)(*(_QWORD *)(*(_QWORD *)&v182[8] - 1LL));
                v40 = *(_QWORD *)(v39 + 8);
                if ( v40 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v40, *(_QWORD *)(v39 + 16));
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 24, 8);
              }
              goto LABEL_26;
            }
            codexmate_lib::core::relay::codex_thread_visibility::find_session_meta_anchors::hea544617b47f60bc(
              v182,
              v23,
              v24);
            if ( *(_DWORD *)v182 == 1 )
            {
              si128.i64[0] = *(_QWORD *)&v182[16];
              v188 = *(_OWORD *)&v182[24];
              v192 = *(_OWORD *)&v182[40];
              *(_QWORD *)v193 = *(_QWORD *)&v182[56];
              *(_QWORD *)&v193[8] = *(_QWORD *)&v182[64];
              *(_OWORD *)&v193[16] = *(_OWORD *)&v182[72];
              *(_QWORD *)&v193[32] = *(_QWORD *)&v182[88];
              v194 = *(_QWORD *)&v182[96];
              v25 = 0x8000000000000001LL;
              v26 = *(_QWORD *)&v182[8];
            }
            else if ( *(_QWORD *)&v182[8] == v187 )
            {
              v25 = v187;
              v26 = v190;
            }
            else
            {
              qmemcpy(v174, &v182[8], sizeof(v174));
              codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c(
                v182,
                *((_QWORD **)&v174[0] + 1),
                *(__int64 (__fastcall **)())&v174[1],
                (__int64)v23,
                v24,
                (__int64)"firstrouter_model_restore.json",
                5);
              v189 = *(_QWORD *)&v182[16];
              v172 = *(_QWORD *)&v182[8];
              v27 = *(_QWORD *)&v182[24];
              if ( *(_QWORD *)v182 != 11 )
              {
                v190 = *(_QWORD *)v182;
                v194 = *(_QWORD *)&v182[88];
                *(_OWORD *)&v193[24] = *(_OWORD *)&v182[72];
                *(_QWORD *)&v193[16] = *(_QWORD *)&v182[64];
                *(_QWORD *)&v193[8] = *(_QWORD *)&v182[56];
                *(_QWORD *)v193 = *(_QWORD *)&v182[48];
                v192 = *(_OWORD *)&v182[32];
                v186 = 0x8000000000000001LL;
                v41 = v172;
                v42 = *(_QWORD *)&v174[0];
                if ( !*(_QWORD *)&v174[0] )
                  goto LABEL_58;
                goto LABEL_57;
              }
              v28 = *((_QWORD *)&v174[3] + 1);
              codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c(
                v182,
                *((_QWORD **)&v174[3] + 1),
                *(__int64 (__fastcall **)())&v174[4],
                (__int64)v23,
                v24,
                (__int64)&unk_10167BC38,
                4);
              v158 = *(_QWORD *)&v182[8];
              if ( *(_QWORD *)v182 != 11 )
              {
                v190 = *(_QWORD *)v182;
                v194 = *(_QWORD *)&v182[88];
                *(_OWORD *)&v193[24] = *(_OWORD *)&v182[72];
                *(_QWORD *)&v193[16] = *(_QWORD *)&v182[64];
                *(_QWORD *)&v193[8] = *(_QWORD *)&v182[56];
                *(_QWORD *)v193 = *(_QWORD *)&v182[48];
                v192 = *(_OWORD *)&v182[32];
                v186 = 0x8000000000000001LL;
                if ( v172 )
                {
                  v43 = *(_QWORD *)&v182[16];
                  v27 = *(_QWORD *)&v182[24];
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189, v172, 1);
                  v189 = v43;
                }
                else
                {
                  v27 = *(_QWORD *)&v182[24];
                  v189 = *(_QWORD *)&v182[16];
                }
                v41 = v158;
                v42 = *(_QWORD *)&v174[0];
                if ( !*(_QWORD *)&v174[0] )
                  goto LABEL_58;
                goto LABEL_57;
              }
              v127 = *(_OWORD *)&v182[8];
              v145 = *(_QWORD *)&v182[16];
              v164 = *(_QWORD *)&v182[24];
              v128 = *(_QWORD *)&v182[24];
              v126[0] = v172;
              v29 = v189;
              v126[1] = v189;
              v126[2] = v27;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(*(_QWORD *)&v182[24], v28);
              v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(144, 8);
              if ( !v30 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 144);
              v153 = 2;
              v154 = v30;
              v155 = 0;
              *(_QWORD *)&v150 = 0x8000000000000000LL;
              v186 = 0x8000000000000000LL;
              v146 = (const char *)0x8000000000000000LL;
              if ( codexmate_lib::core::relay::codex_thread_visibility::is_legacy_or_miscased_provider::h5f1be5e6f3f489e9(
                     v29,
                     v27) )
              {
                codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_provider_line::hd36493268159f620(
                  (__int64 *)v182,
                  *((__int64 *)&v174[0] + 1),
                  *(__int64 *)&v174[1],
                  anon_8eb05e0246fafd9ecdc13ef1a946b2b3_732,
                  6);
                v31 = *(_QWORD *)v182;
                v32 = *(_OWORD *)&v182[8];
                v33 = *(_QWORD *)&v182[24];
                if ( *(_QWORD *)v182 != 11 )
                  goto LABEL_66;
                v159 = *(_QWORD *)&v182[8];
                v169 = *(_OWORD *)&v182[8];
                v170 = *(void **)&v182[24];
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v175, v174);
                v125 = _mm_loadu_si128((const __m128i *)((char *)&v174[1] + 8));
                v165 = *((_QWORD *)&v174[1] + 1);
                v195 = WORD4(v174[2]);
                v34 = *((_QWORD *)&v175 + 1);
                v173 = v175;
                v35 = v176;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v175, &v169);
                *(_QWORD *)v182 = v173;
                *(_QWORD *)&v182[8] = v34;
                *(_QWORD *)&v182[16] = v35;
                *(__m128i *)&v182[24] = _mm_load_si128(&v125);
                *(_WORD *)&v182[40] = v195;
                *(_QWORD *)&v182[64] = v176;
                *(_OWORD *)&v182[48] = v175;
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h60ae2a1681de84e9(&v153, v182);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v175, v174);
                *(_QWORD *)&v182[40] = v170;
                *(_OWORD *)&v182[24] = v169;
                v177 = v169;
                v178 = v170;
                core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedSessionMetaAnchorPatch$GT$$GT$::he6f315affe594b3f(&v150);
                v152 = v178;
                *(_OWORD *)&v151[8] = v177;
                *(_QWORD *)v151 = v176;
                v150 = v175;
                v36 = v165;
              }
              else
              {
                v36 = *((_QWORD *)&v174[1] + 1);
              }
              v44 = *((_QWORD *)&v174[4] + 1);
              if ( *((_QWORD *)&v174[4] + 1) != v36
                && codexmate_lib::core::relay::codex_thread_visibility::is_legacy_or_miscased_provider::h5f1be5e6f3f489e9(
                     v145,
                     v164) )
              {
                codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_provider_line::hd36493268159f620(
                  (__int64 *)v182,
                  *((__int64 *)&v174[3] + 1),
                  *(__int64 *)&v174[4],
                  anon_8eb05e0246fafd9ecdc13ef1a946b2b3_732,
                  6);
                v31 = *(_QWORD *)v182;
                v33 = *(_QWORD *)&v182[24];
                v32 = *(_OWORD *)&v182[8];
                if ( *(_QWORD *)v182 != 11 )
                {
LABEL_66:
                  v194 = *(_QWORD *)&v182[88];
                  *(_OWORD *)&v193[24] = *(_OWORD *)&v182[72];
                  *(_QWORD *)&v193[16] = *(_QWORD *)&v182[64];
                  *(_QWORD *)&v193[8] = *(_QWORD *)&v182[56];
                  *(_QWORD *)v193 = *(_QWORD *)&v182[48];
                  v192 = *(_OWORD *)&v182[32];
                  v47 = 0x8000000000000001LL;
                  *((_QWORD *)&v188 + 1) = v33;
                  *(_QWORD *)&v188 = *((_QWORD *)&v32 + 1);
                  si128.i64[0] = v32;
                  v190 = v31;
LABEL_68:
                  v46 = (const char *)v186;
LABEL_69:
                  v186 = v47;
                  if ( v146 != v46 )
                  {
                    if ( v146 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, v146, 1);
                    if ( (_QWORD)v148 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v148 + 1), v148, 1);
                  }
                  v50 = (_QWORD)v150 == (_QWORD)v46;
                  v8 = v185;
                  if ( !v50 )
                  {
                    if ( (_QWORD)v150 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v150 + 1), v150, 1);
                    if ( *(_QWORD *)&v151[8] )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v151[16], *(_QWORD *)&v151[8], 1);
                  }
                  v51 = v154;
                  v52 = v155;
                  if ( v155 )
                  {
                    v53 = (_QWORD *)(v154 + 56);
                    do
                    {
                      v54 = *(v53 - 7);
                      if ( v54 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v53 - 6), v54, 1);
                      v55 = *(v53 - 1);
                      if ( v55 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v53, v55, 1);
                      v53 += 9;
                      --v52;
                    }
                    while ( v52 );
                  }
                  if ( v153 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, 72 * v153, 8);
                  v56 = v190;
                  if ( v172 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189, v172, 1);
                  if ( v158 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v158, 1);
                  v27 = *((_QWORD *)&v188 + 1);
                  v189 = v188;
                  v190 = v56;
                  v41 = si128.i64[0];
                  v42 = *(_QWORD *)&v174[0];
                  if ( !*(_QWORD *)&v174[0] )
                  {
LABEL_58:
                    if ( *(_QWORD *)&v174[3] )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v174[3] + 1), *(_QWORD *)&v174[3], 1);
                    *((_QWORD *)&v188 + 1) = v27;
                    *(_QWORD *)&v188 = v189;
                    si128.i64[0] = v41;
                    v26 = v190;
                    v25 = v186;
                    goto LABEL_61;
                  }
LABEL_57:
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v174[0] + 1), v42, 1);
                  goto LABEL_58;
                }
                v165 = *(_QWORD *)&v182[8];
                v169 = *(_OWORD *)&v182[8];
                v170 = *(void **)&v182[24];
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v175, &v174[3]);
                v125.i64[0] = *(_QWORD *)&v174[5];
                v195 = WORD4(v174[5]);
                v173 = *((_QWORD *)&v175 + 1);
                v164 = v175;
                v45 = v176;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v175, &v169);
                *(_QWORD *)v182 = v164;
                *(_QWORD *)&v182[8] = v173;
                *(_QWORD *)&v182[16] = v45;
                *(_QWORD *)&v182[24] = v44;
                *(_QWORD *)&v182[32] = v125.i64[0];
                *(_WORD *)&v182[40] = v195;
                *(_QWORD *)&v182[64] = v176;
                *(_OWORD *)&v182[48] = v175;
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h60ae2a1681de84e9(&v153, v182);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v182, &v174[3]);
                v163 = v170;
                v162 = v169;
                v160 = *(const char ***)v182;
                v161 = *(_OWORD *)&v182[8];
                core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedSessionMetaAnchorPatch$GT$$GT$::he6f315affe594b3f(&v146);
                v149 = v163;
                v148 = v162;
                v147 = v161;
                v146 = (const char *)v160;
              }
              v46 = (const char *)v186;
              v47 = v186;
              if ( !v155 )
                goto LABEL_69;
              codexmate_lib::core::relay::codex_thread_visibility::replace_session_meta_lines::haca5d114b57dfff7(
                v182,
                (__int64)v23,
                v24,
                v154,
                v155);
              v190 = *(_QWORD *)v182;
              if ( *(_QWORD *)v182 != 11 )
              {
                v188 = *(_OWORD *)&v182[16];
                si128.i64[0] = *(_QWORD *)&v182[8];
                v192 = *(_OWORD *)&v182[32];
                *(_QWORD *)v193 = *(_QWORD *)&v182[48];
                *(_QWORD *)&v193[8] = *(_QWORD *)&v182[56];
                *(_QWORD *)&v193[16] = *(_QWORD *)&v182[64];
                *(_OWORD *)&v193[24] = *(_OWORD *)&v182[72];
                v194 = *(_QWORD *)&v182[88];
                v47 = 0x8000000000000001LL;
                goto LABEL_68;
              }
              std::path::Path::to_path_buf::h73855ce4b54f7174(v182, v23, v24);
              *(_QWORD *)&v179[40] = v152;
              *(_QWORD *)&v179[32] = *(_QWORD *)&v151[16];
              *(_OWORD *)&v179[16] = *(_OWORD *)v151;
              *(_OWORD *)v179 = v150;
              *(_QWORD *)&v179[88] = v149;
              *(_OWORD *)&v179[72] = v148;
              *(_OWORD *)&v179[56] = v147;
              *(_QWORD *)&v179[48] = v146;
              v48 = *(_QWORD *)v182;
              si128.i64[0] = *(_QWORD *)&v182[16];
              v26 = *(_QWORD *)&v182[8];
              v188 = v150;
              v194 = v148;
              *(_OWORD *)&v193[24] = v147;
              *(_QWORD *)&v193[16] = v146;
              *(_QWORD *)&v193[8] = v152;
              *(_QWORD *)v193 = *(_QWORD *)&v151[16];
              v192 = *(_OWORD *)v151;
              v111 = v149;
              v110 = *((_QWORD *)&v148 + 1);
              core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$codexmate_lib..core..relay..codex_thread_visibility..SessionMetaLine$C$alloc..string..String$RP$$GT$$GT$::hf4442198a098bf28(&v153);
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreWarning$GT$::h62f2d75346d7894b(v126);
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..SessionMetaAnchors$GT$::ha4e921fec32abf85(v174);
              v25 = v48;
              v8 = v185;
            }
LABEL_61:
            v131 = v192;
            v132 = *(_QWORD *)v193;
            v133 = *(_QWORD *)&v193[8];
            v134 = *(_QWORD *)&v193[16];
            v135 = *(_OWORD *)&v193[24];
            v136 = v194;
            if ( v25 == 0x8000000000000001LL )
            {
              v113 = v131;
              v114 = v132;
              v115 = v133;
              v116 = v134;
              v117 = v135;
              v118 = v136;
              v187 = *((_QWORD *)&v188 + 1);
              epi64 = v188;
              goto LABEL_140;
            }
            v109 = v111;
            v108 = v110;
            v190 = v26;
            if ( v25 != 0x8000000000000000LL )
            {
              *(_QWORD *)v93 = v25;
              *(_QWORD *)&v93[8] = v26;
              *(_QWORD *)&v93[16] = si128.i64[0];
              *(_OWORD *)&v93[24] = v188;
              *(_QWORD *)&v93[96] = v136;
              *(_OWORD *)&v93[80] = v135;
              *(_QWORD *)&v93[72] = v134;
              *(_QWORD *)&v93[64] = v133;
              *(_QWORD *)&v93[56] = v132;
              *(_OWORD *)&v93[40] = v131;
              *(_QWORD *)&v93[112] = v109;
              *(_QWORD *)&v93[104] = v108;
              v49 = v168;
              if ( v168 == v166 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h1b084316e5dd5683(&v166);
              qmemcpy((void *)(v167 + 120 * v49), v93, 0x78u);
              v168 = v49 + 1;
            }
LABEL_26:
            v22 = v120 + 24;
          }
          while ( v120 + 24 != v122 );
        }
        *(_QWORD *)&v150 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_812;
        *((_QWORD *)&v150 + 1) = 6;
        *(_QWORD *)&v174[0] = &off_1019748B8;
        *((_QWORD *)&v174[0] + 1) = &unk_1019747F0;
        *(_QWORD *)&v174[1] = &v150;
        *((_QWORD *)&v174[1] + 1) = &unk_1019747F0;
        *(_QWORD *)&v174[2] = &off_1019748F8;
        *((_QWORD *)&v174[2] + 1) = &unk_1019747F0;
        rusqlite::Connection::execute::h1e8b76b744a4c88a(
          v179,
          &v98,
          "UPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalizemissing-rollout repair",
          146,
          v174,
          3);
        if ( *(_QWORD *)v179 == 0x8000000000000016LL )
        {
          si128.i64[0] = *(_QWORD *)&v179[8];
          rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v182, &v98, "PRAGMA wal_checkpoint(TRUNCATE);", 32);
          if ( *(_QWORD *)v182 != 0x8000000000000016LL )
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v182);
          v146 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_812;
          *(_QWORD *)&v147 = 6;
          v160 = &v146;
          *(_QWORD *)&v161 = &unk_1019747F0;
          *((_QWORD *)&v161 + 1) = &off_1019748F8;
          *(_QWORD *)&v162 = &unk_1019747F0;
          *((_QWORD *)&v162 + 1) = &off_1019748B8;
          v163 = &unk_1019747F0;
          rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(
            v182,
            &v98,
            "SELECT COUNT(*) FROM threads WHERE model_provider = ?1 OR model_provider = ?2 OR (model_provider LIKE 'openai' AND model_provider <> ?3)SELECT source FROM threads WHERE COALESCE(archived, 0) = 0 AND model_provider = ?1/payload/model_reasoning_effortmedium",
            136);
          *(_OWORD *)v179 = *(_OWORD *)&v182[8];
          *(_QWORD *)&v179[16] = *(_QWORD *)&v182[24];
          *(_QWORD *)&v179[24] = *(_QWORD *)&v182[32];
          *(_QWORD *)&v179[32] = *(_QWORD *)&v182[40];
          *(_QWORD *)&v179[40] = *(_QWORD *)&v182[48];
          *(_QWORD *)&v179[48] = *(_QWORD *)&v182[56];
          *(_QWORD *)&v179[56] = *(_QWORD *)&v182[64];
          if ( *(_DWORD *)v182 == 1 )
          {
            v194 = *(_QWORD *)&v179[56];
            *(_OWORD *)&v193[24] = *(_OWORD *)&v179[40];
            *(_QWORD *)&v193[16] = *(_QWORD *)&v179[32];
            *(_QWORD *)&v193[8] = *(_QWORD *)&v179[24];
            *(_QWORD *)v193 = *(_QWORD *)&v179[16];
            v192 = *(_OWORD *)v179;
            goto LABEL_129;
          }
          v174[3] = *(_OWORD *)&v179[48];
          *((_QWORD *)&v174[2] + 1) = *(_QWORD *)&v179[40];
          *(_OWORD *)((char *)&v174[1] + 8) = *(_OWORD *)&v179[24];
          *(_QWORD *)&v174[1] = *(_QWORD *)&v179[16];
          v174[0] = *(_OWORD *)v179;
          v62 = sqlite3_bind_parameter_count(*(sqlite3_stmt **)&v179[56]);
          v126[0] = &v160;
          if ( v62 )
          {
            rusqlite::statement::Statement::bind_parameter::h827c23edb04c4beb(v182, v174, v126, 1);
            v63 = *(_QWORD *)v182;
            if ( *(_QWORD *)v182 != 0x8000000000000016LL )
              goto LABEL_116;
            v126[0] = (char *)&v161 + 8;
            v64 = 2;
            if ( v62 != 1 )
            {
              rusqlite::statement::Statement::bind_parameter::h827c23edb04c4beb(v182, v174, v126, 2);
              v63 = *(_QWORD *)v182;
              if ( *(_QWORD *)v182 != 0x8000000000000016LL
                || (v126[0] = (char *)&v162 + 8, v64 = 3, v62 != 2)
                && (rusqlite::statement::Statement::bind_parameter::h827c23edb04c4beb(v182, v174, v126, 3),
                    v63 = *(_QWORD *)v182,
                    *(_QWORD *)v182 != 0x8000000000000016LL) )
              {
LABEL_116:
                v65 = *(_QWORD *)&v182[16];
                v64 = *(_QWORD *)&v182[8];
                *(_OWORD *)v179 = *(_OWORD *)&v182[24];
                *(_QWORD *)&v179[16] = *(_QWORD *)&v182[40];
                *(_QWORD *)&v179[24] = *(_QWORD *)&v182[48];
                *(_QWORD *)&v179[32] = *(_QWORD *)&v182[56];
                goto LABEL_123;
              }
            }
          }
          else
          {
            v64 = 1;
          }
          v65 = v62;
          if ( v64 == v62 )
          {
            *(_QWORD *)&v175 = v174;
            *((_QWORD *)&v175 + 1) = 0;
            _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa(
              v182,
              &v175);
            v66 = *(_QWORD *)v182;
            if ( *(_QWORD *)v182 == 0x8000000000000016LL )
            {
              if ( *((_QWORD *)&v175 + 1) )
              {
                rusqlite::row::Row::get::h100bc309f48de08a(&v192, (char *)&v175 + 8, 0, 0x8000000000000016LL);
                goto LABEL_127;
              }
              v66 = 0x8000000000000009LL;
              v67 = (char *)&v175 + 8;
            }
            else
            {
              v67 = *(char **)&v182[8];
              *(_OWORD *)v179 = *(_OWORD *)&v182[16];
              *(_QWORD *)&v179[16] = *(_QWORD *)&v182[32];
              *(_QWORD *)&v179[24] = *(_QWORD *)&v182[40];
              *(_QWORD *)&v179[32] = *(_QWORD *)&v182[48];
              *(_QWORD *)&v179[40] = *(_QWORD *)&v182[56];
            }
            *(_QWORD *)&v192 = v66;
            *((_QWORD *)&v192 + 1) = v67;
            v194 = *(_QWORD *)&v179[40];
            *(_OWORD *)&v193[24] = *(_OWORD *)&v179[24];
            *(_QWORD *)&v193[16] = *(_QWORD *)&v179[16];
            *(_OWORD *)v193 = *(_OWORD *)v179;
LABEL_127:
            core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h4341110857a45553(&v175);
          }
          else
          {
            v63 = 0x8000000000000013LL;
LABEL_123:
            *(_QWORD *)&v192 = v63;
            *((_QWORD *)&v192 + 1) = v64;
            *(_QWORD *)v193 = v65;
            v194 = *(_QWORD *)&v179[32];
            *(_OWORD *)&v193[24] = *(_OWORD *)&v179[16];
            *(_OWORD *)&v193[8] = *(_OWORD *)v179;
          }
          core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(v174);
LABEL_129:
          v68 = *((_QWORD *)&v192 + 1);
          if ( (_QWORD)v192 == 0x8000000000000016LL )
          {
            if ( *((__int64 *)&v192 + 1) <= 0 )
              v68 = 0;
            *(_QWORD *)&v169 = v68;
            if ( *((__int64 *)&v192 + 1) <= 0 )
            {
              epi64 = v168;
              v129 = si128.i64[0];
              v130 = v168;
              if ( si128.i64[0] | v168 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
              {
                *(_QWORD *)&v174[0] = v171;
                *((_QWORD *)&v174[0] + 1) = v140;
                *(_QWORD *)v182 = v174;
                *(_QWORD *)&v182[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
                *(_QWORD *)&v182[16] = &v129;
                *(_QWORD *)&v182[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                *(_QWORD *)&v182[32] = &v130;
                *(_QWORD *)&v182[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                *(_QWORD *)v179 = &unk_10167D5D6;
                *(_QWORD *)&v179[8] = 51;
                *(_QWORD *)&v179[16] = &unk_10167D5D6;
                *(_QWORD *)&v179[24] = 51;
                *(_QWORD *)&v179[32] = &off_101974988;
                log::__private_api::log::h719f4907c7336ae9(&unk_1017CBB1C, v182, 3, v179);
                si128.i64[0] = v129;
                epi64 = v130;
              }
              core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$$GT$::h82ad24c16a5e9d85(&v166);
              core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h3a57af220ffcaba2(v107);
              core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(&v98);
              goto LABEL_98;
            }
            v69 = v167 - 120;
            for ( i = 120 * v168; i; i -= 120 )
            {
              v71 = v69 + i;
              codexmate_lib::core::relay::codex_thread_visibility::revert_convergence_rollout_patch::hc77c01e88ccade68(v71);
            }
            *(_QWORD *)v179 = v171;
            *(_QWORD *)&v179[8] = v140;
            *(_QWORD *)v182 = v179;
            *(_QWORD *)&v182[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
            *(_QWORD *)&v182[16] = &v169;
            *(_QWORD *)&v182[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v94, &unk_1017CBB6C, v182);
            v61 = _mm_load_si128(&v94);
            v72 = v95;
          }
          else
          {
            *(_QWORD *)&v182[56] = v194;
            *(_OWORD *)&v182[40] = *(_OWORD *)&v193[24];
            *(_QWORD *)&v182[32] = *(_QWORD *)&v193[16];
            *(_QWORD *)&v182[24] = *(_QWORD *)&v193[8];
            *(_QWORD *)&v182[16] = *(_QWORD *)v193;
            *(_OWORD *)v182 = v192;
            *(_QWORD *)&v174[0] = v182;
            *((_QWORD *)&v174[0] + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v179, &unk_1017CB05A, v174);
            si128 = _mm_load_si128((const __m128i *)v179);
            v72 = *(_QWORD *)&v179[16];
            core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v182);
            v61 = _mm_load_si128(&si128);
          }
          v187 = v72;
        }
        else
        {
          *(_QWORD *)&v182[56] = *(_QWORD *)&v179[56];
          *(_QWORD *)&v182[48] = *(_QWORD *)&v179[48];
          *(_QWORD *)&v182[40] = *(_QWORD *)&v179[40];
          *(_QWORD *)&v182[32] = *(_QWORD *)&v179[32];
          *(_QWORD *)&v182[24] = *(_QWORD *)&v179[24];
          *(_OWORD *)&v182[8] = *(_OWORD *)&v179[8];
          *(_QWORD *)v182 = *(_QWORD *)v179;
          v57 = v167 - 120;
          for ( j = 120 * v168; j; j -= 120 )
          {
            v59 = v57 + j;
            codexmate_lib::core::relay::codex_thread_visibility::revert_convergence_rollout_patch::hc77c01e88ccade68(v59);
          }
          *(_QWORD *)&v192 = v182;
          *((_QWORD *)&v192 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v96, &unk_1017CBBB9, &v192);
          si128 = _mm_load_si128(&v96);
          v60 = v97;
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v182);
          v187 = v60;
          v61 = _mm_load_si128(&si128);
        }
        si128.i64[0] = v61.i64[0];
        epi64 = _mm_extract_epi64(v61, 1);
        v26 = 10;
LABEL_140:
        v73 = v168;
        if ( v168 )
        {
          v74 = v167;
          do
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$::h591335b9f819025e(v74);
            v74 += 120;
            --v73;
          }
          while ( v73 );
        }
        if ( v166 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v167, 120 * v166, 8);
        v75 = v124;
        v8 = v185;
        if ( v124 )
        {
          v76 = (_QWORD *)(v144 + 8);
          v123 = v2;
          do
          {
            v77 = *(v76 - 1);
            if ( v77 )
            {
              v78 = epi64;
              v79 = v8;
              v80 = v26;
              v81 = v75;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v76, v77, 1);
              v75 = v81;
              v26 = v80;
              v8 = v79;
              epi64 = v78;
              v2 = v123;
            }
            v76 += 3;
            --v75;
          }
          while ( v75 );
        }
        if ( v143 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v144, 24 * v143, 8);
        goto LABEL_97;
      }
      v13 = *(_OWORD *)&v182[8];
      v12 = *(_QWORD *)&v182[24];
      v174[0] = *(_OWORD *)&v182[32];
      v174[1] = *(_OWORD *)&v182[48];
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v179);
    }
LABEL_171:
    *(_QWORD *)v182 = v11;
    *(_OWORD *)&v182[8] = v13;
    *(_QWORD *)&v182[24] = v12;
    *(_OWORD *)&v182[32] = v174[0];
    *(_OWORD *)&v182[48] = v174[1];
    *(_QWORD *)&v192 = v182;
    *((_QWORD *)&v192 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v179, &unk_1017C18E3, &v192);
    epi64 = *(_QWORD *)&v179[8];
    si128.i64[0] = *(_QWORD *)v179;
    v187 = *(_QWORD *)&v179[16];
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v182);
    v26 = 10;
    v8 = v185;
LABEL_172:
    v86 = v157;
    v157[11] = v118;
    *(_OWORD *)(v86 + 9) = v117;
    v86[8] = v116;
    v86[7] = v115;
    v86[6] = v114;
    *((_OWORD *)v86 + 2) = v113;
    *v86 = v26;
    v86[1] = si128.i64[0];
    v86[2] = epi64;
    v86[3] = v187;
    if ( v8 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v8, 1);
    v50 = v156 == (_QWORD)v2;
    v85 = v157;
    v87 = v142;
    v88 = v141;
    v89 = v137;
    if ( !v50 )
    {
      v90 = v139 / 0x18;
      do
      {
        v91 = *(v89 - 1);
        if ( v91 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v89, v91, 1);
        v89 += 3;
        --v90;
      }
      while ( v90 );
    }
    if ( v88 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, 24 * v88, 8);
  }
  else
  {
    v7 = 0;
    v6 = 0;
LABEL_159:
    if ( (__int64 *)v156 != v2 )
    {
      v82 = (v156 - (__int64)v2) / 0x18uLL;
      v83 = v2 + 1;
      do
      {
        v84 = *(v83 - 1);
        if ( v84 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v83, v84, 1);
        v83 += 3;
        --v82;
      }
      while ( v82 );
    }
LABEL_164:
    if ( v141 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, 24 * v141, 8);
    v112 = codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_visibility::h1b95e8bc7282f0f5(v121);
    v85 = v157;
    if ( v112 )
    {
      *(_QWORD *)v182 = &v112;
      *(_QWORD *)&v182[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v157 + 1, &unk_1017CB869, v182);
      *v85 = 10;
    }
    else
    {
      v157[1] = v6;
      v85[2] = v7;
      *v85 = 11;
    }
  }
  return v85;
}
