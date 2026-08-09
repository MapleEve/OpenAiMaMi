// __ZN13codexmate_lib4core5relay17router_reconciler20reconcile_native_off @ 0x100326400 | 基线 same-set
// [FULL hexrays]

char *__fastcall codexmate_lib::core::relay::router_reconciler::reconcile_native_off::h9c7a4e89d050482c(
        char *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // edx
  _QWORD *v24; // rsi
  __int64 v25; // r14
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  _OWORD *v31; // r14
  _OWORD *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rsi
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rcx
  _OWORD *v42; // rax
  _OWORD *v43; // r15
  __int128 *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rcx
  void *v48; // rax
  void *v49; // r15
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int128 v54; // kr00_16
  __int64 v55; // rsi
  __int64 v56; // rdi
  char *v57; // r8
  void *v58; // rax
  void *v59; // rbx
  _QWORD *v60; // rax
  __int64 v61; // rbx
  _QWORD *v62; // r14
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rsi
  void *v66; // rax
  void *v67; // r15
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rsi
  _QWORD *v72; // rax
  _QWORD *v73; // r14
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // edx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r12
  int v83; // edx
  int v84; // r13d
  _QWORD *v85; // rsi
  char v86; // bl
  _QWORD *v87; // rax
  _QWORD *v88; // r15
  __int64 v89; // r14
  __int64 v90; // rax
  __int64 v91; // rcx
  char *v92; // rdx
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r12
  int v101; // edx
  int v102; // r13d
  char *v103; // rsi
  __int64 v104; // r14
  __int64 v105; // r15
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rdx
  _QWORD *v114; // rsi
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r12
  int v119; // edx
  int v120; // ebx
  _BYTE *v121; // rsi
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rbx
  _QWORD *v126; // r14
  __int64 v127; // rsi
  __int64 v128; // r10
  __int64 v129; // r12
  int v130; // edx
  int v131; // ebx
  __int64 v132; // rax
  __int128 v133; // kr30_16
  __int64 v134; // rsi
  char *v135; // r9
  _QWORD *v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rbx
  _QWORD *v139; // r14
  __int64 v140; // rsi
  _QWORD v142[3]; // [rsp+8h] [rbp-4A8h] BYREF
  _BYTE v143[24]; // [rsp+20h] [rbp-490h] BYREF
  _QWORD v144[3]; // [rsp+38h] [rbp-478h] BYREF
  _BYTE v145[24]; // [rsp+50h] [rbp-460h] BYREF
  _QWORD v146[3]; // [rsp+68h] [rbp-448h] BYREF
  _QWORD v147[3]; // [rsp+80h] [rbp-430h] BYREF
  _BYTE v148[24]; // [rsp+98h] [rbp-418h] BYREF
  _QWORD v149[3]; // [rsp+B0h] [rbp-400h] BYREF
  _QWORD v150[3]; // [rsp+C8h] [rbp-3E8h] BYREF
  _QWORD v151[3]; // [rsp+E0h] [rbp-3D0h] BYREF
  _QWORD v152[2]; // [rsp+F8h] [rbp-3B8h] BYREF
  _QWORD v153[3]; // [rsp+108h] [rbp-3A8h] BYREF
  _QWORD v154[3]; // [rsp+120h] [rbp-390h] BYREF
  _QWORD v155[3]; // [rsp+138h] [rbp-378h] BYREF
  __int128 v156; // [rsp+150h] [rbp-360h] BYREF
  _OWORD *v157; // [rsp+160h] [rbp-350h]
  __int64 v158; // [rsp+168h] [rbp-348h]
  _OWORD v159[6]; // [rsp+170h] [rbp-340h] BYREF
  _BYTE v160[104]; // [rsp+1D0h] [rbp-2E0h] BYREF
  __int64 (__fastcall *v161)(); // [rsp+238h] [rbp-278h]
  __int128 *v162; // [rsp+240h] [rbp-270h]
  __int64 (__fastcall *v163)(); // [rsp+248h] [rbp-268h]
  char *v164; // [rsp+250h] [rbp-260h]
  __int64 (__fastcall *v165)(); // [rsp+258h] [rbp-258h]
  __int64 v166; // [rsp+260h] [rbp-250h] BYREF
  __int64 v167; // [rsp+268h] [rbp-248h]
  _OWORD __src[12]; // [rsp+270h] [rbp-240h] BYREF
  _OWORD __dst[14]; // [rsp+330h] [rbp-180h] BYREF
  __int128 v170; // [rsp+410h] [rbp-A0h] BYREF
  _OWORD *v171; // [rsp+420h] [rbp-90h]
  __int64 (__fastcall *v172)(_QWORD, _QWORD); // [rsp+428h] [rbp-88h]
  __int64 v173; // [rsp+430h] [rbp-80h] BYREF
  int v174; // [rsp+43Ch] [rbp-74h]
  char *v175; // [rsp+440h] [rbp-70h]
  _QWORD *v176; // [rsp+448h] [rbp-68h]
  __int64 v177; // [rsp+450h] [rbp-60h] BYREF
  __int128 v178; // [rsp+458h] [rbp-58h]
  __int128 v179; // [rsp+468h] [rbp-48h] BYREF
  __int64 v180; // [rsp+478h] [rbp-38h]
  char v181; // [rsp+486h] [rbp-2Ah] BYREF
  char v182; // [rsp+487h] [rbp-29h] BYREF

  v176 = a2;
  v175 = a1;
  v152[0] = a7;
  v152[1] = a8;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !v16 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  v17 = (_QWORD *)v16;
  *(_QWORD *)&__dst[0] = v152;
  *((_QWORD *)&__dst[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017BBEEC, __dst);
  v17[2] = v151[2];
  v18 = v151[0];
  v17[1] = v151[1];
  *v17 = v18;
  *(_QWORD *)&v179 = 1;
  *((_QWORD *)&v179 + 1) = v17;
  v180 = 1;
  v177 = 0;
  v178 = 8u;
  if ( a10 )
  {
    codexmate_lib::platform::process::collect_external_codex_writers::h013c99e264542e67(__dst);
    if ( *(_QWORD *)&__dst[0] == 11 )
    {
      *(_QWORD *)v160 = *(_QWORD *)&__dst[1];
      *(_QWORD *)&v160[8] = *(_QWORD *)&__dst[1];
      *(_QWORD *)&v160[16] = *((_QWORD *)&__dst[0] + 1);
      *(_QWORD *)&v160[24] = *(_QWORD *)&__dst[1] + 32LL * *((_QWORD *)&__dst[1] + 1);
      alloc::vec::in_place_collect::from_iter_in_place::h7c38924dca936911(v159, v160);
      v19 = (char *)v159;
      codexmate_lib::platform::process::reject_external_codex_writers::h04ed4542d20e0d8e(__src, v159);
      if ( LODWORD(__src[0]) == 11 )
      {
        if ( a11 )
        {
          v19 = "writing_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore";
          (*(void (__fastcall **)(__int64, char *, __int64))(a12 + 32))(
            a11,
            "writing_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
            14);
        }
        v167 = std::time::Instant::now::hda76af2c3a449055(a11, v19, v20, v21, v22);
        v174 = v23;
        *(_QWORD *)&__dst[0] = a3;
        *((_QWORD *)&__dst[0] + 1) = a4;
        *(_QWORD *)&__dst[1] = a5;
        *((_QWORD *)&__dst[1] + 1) = a6;
        *(_QWORD *)&__dst[2] = 0;
        LOBYTE(__dst[3]) = 0;
        v24 = v176;
        codexmate_lib::core::relay::codex_config_reconciler::reconcile::h1c034bae44515f5c(v159, v176, __dst);
        if ( LODWORD(v159[0]) == 11 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v159, v24);
          v25 = 22;
          v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1);
          if ( !v26 )
            goto LABEL_124;
          v27 = v26;
          *(_QWORD *)((char *)v26 + 14) = 0x6769666E6F6320B1LL;
          v26[1] = 0x20B194E7AFB7E886LL;
          *v26 = 0x90E785B8E6B2B7E5LL;
          v28 = v180;
          if ( v180 == (_QWORD)v179 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v179);
          v29 = *((_QWORD *)&v179 + 1);
          v30 = 3 * v28;
          *(_QWORD *)(*((_QWORD *)&v179 + 1) + 8 * v30) = 22;
          *(_QWORD *)(v29 + 8 * v30 + 8) = v27;
          *(_QWORD *)(v29 + 8 * v30 + 16) = 22;
          v180 = v28 + 1;
          std::path::Path::_join::hb1a495d4f06b13b8(__src, v176[73], v176[74], "codex_router_catalog.json", 25);
          v31 = *((_OWORD **)&__src[0] + 1);
          v32 = __dst;
          std::sys::fs::metadata::h32fa16d3052ea535(__dst, *((_QWORD *)&__src[0] + 1), *(_QWORD *)&__src[1]);
          if ( LOBYTE(__dst[0]) )
          {
            if ( (BYTE8(__dst[0]) & 3) == 1 )
            {
              v158 = *((_QWORD *)&__dst[0] + 1) - 1LL;
              v33 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) - 1LL);
              v34 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 7LL);
              if ( *(_QWORD *)v34 )
                (*(void (__fastcall **)(__int64))v34)(v33);
              v35 = *(_QWORD *)(v34 + 8);
              if ( v35 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16));
              v32 = (_OWORD *)v158;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v158, 24, 8);
            }
            v36 = *(_QWORD *)&__src[0];
            if ( *(_QWORD *)&__src[0] )
            {
              v32 = v31;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, *(_QWORD *)&__src[0], 1);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v36);
            v25 = 23;
            v37 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
            if ( !v37 )
              goto LABEL_124;
            v38 = v37;
            *(_QWORD *)((char *)v37 + 15) = 0x676F6C6174616320LL;
            v37[1] = 0x20B194E7AFB7E886LL;
            *v37 = 0x90E785B8E6B2B7E5LL;
            v39 = v180;
            if ( v180 == (_QWORD)v179 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v179);
            v40 = *((_QWORD *)&v179 + 1);
            v41 = 3 * v39;
            *(_QWORD *)(*((_QWORD *)&v179 + 1) + 8 * v41) = 23;
            *(_QWORD *)(v40 + 8 * v41 + 8) = v38;
            *(_QWORD *)(v40 + 8 * v41 + 16) = 23;
            v180 = v39 + 1;
          }
          else
          {
            v65 = *(_QWORD *)&__src[0];
            if ( *(_QWORD *)&__src[0] )
            {
              v32 = v31;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, *(_QWORD *)&__src[0], 1);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v65);
            v25 = 102;
            v66 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(102, 1);
            if ( !v66 )
              goto LABEL_124;
            v67 = v66;
            memcpy(v66, &unk_1015E4347, 0x66u);
            v68 = *((_QWORD *)&v178 + 1);
            if ( *((_QWORD *)&v178 + 1) == v177 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v177);
            v69 = v178;
            v70 = 3 * v68;
            *(_QWORD *)(v178 + 8 * v70) = 102;
            *(_QWORD *)(v69 + 8 * v70 + 8) = v67;
            *(_QWORD *)(v69 + 8 * v70 + 16) = 102;
            *((_QWORD *)&v178 + 1) = v68 + 1;
          }
          goto LABEL_56;
        }
        qmemcpy(v160, v159, 0x60u);
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          *(_QWORD *)&__src[0] = v160;
          *((_QWORD *)&__src[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          *(_QWORD *)&__dst[3] = 2;
          *((_QWORD *)&__dst[3] + 1) = "codexmate_lib::core::relay::router_reconciler";
          *(_QWORD *)&__dst[4] = 45;
          *(_QWORD *)&__dst[5] = &unk_1017BBF18;
          *((_QWORD *)&__dst[5] + 1) = __src;
          *(_QWORD *)&__dst[0] = 0;
          *((_QWORD *)&__dst[0] + 1) = "codexmate_lib::core::relay::router_reconciler";
          __dst[1] = 0x2Du;
          *(_QWORD *)&__dst[2] = "src/core/relay/router_reconciler.rs";
          *((_QWORD *)&__dst[2] + 1) = 35;
          *((_QWORD *)&__dst[4] + 1) = 0x14700000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v170, __dst);
        }
        __dst[0] = 8u;
        __dst[1] = 8u;
        LOBYTE(__dst[4]) = 0;
        *(_QWORD *)&__dst[3] = 0;
        *(_QWORD *)&__dst[2] = 0;
        v64 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(v176);
        if ( v64 )
        {
          *(_QWORD *)&__src[0] = 2;
          *((_QWORD *)&__src[0] + 1) = v64;
        }
        else
        {
          v71 = v176[7];
          codexmate_lib::core::codex_config::update_text::he68e9fad74444d83(
            __src,
            v71,
            v176[8],
            &anon_3ce6d1417794db0febde534c64082f90_158,
            23,
            __dst);
          if ( *(_QWORD *)&__src[0] == 11 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v71);
            v72 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(58, 1);
            if ( !v72 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 58);
            v73 = v72;
            qmemcpy(v72 + 5, "MaMi managed block", 18);
            v72[4] = 0x6941208690E785B8LL;
            v72[3] = 0xE6A7BAE78D99E9B2LL;
            v72[2] = 0xB7E58E90E5A5B4E8LL;
            v72[1] = 0xB1A4E5A5ADE68C90LL;
            *v72 = 0xE5206769666E6F63LL;
            v74 = v180;
            if ( v180 == (_QWORD)v179 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v179);
            v75 = *((_QWORD *)&v179 + 1);
            v76 = 3 * v74;
            *(_QWORD *)(*((_QWORD *)&v179 + 1) + 8 * v76) = 58;
            *(_QWORD *)(v75 + 8 * v76 + 8) = v73;
            *(_QWORD *)(v75 + 8 * v76 + 16) = 58;
            v180 = v74 + 1;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v160);
LABEL_56:
            LOBYTE(v173) = 1;
            *(_QWORD *)&v156 = "config_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore";
            *((_QWORD *)&v156 + 1) = 11;
            *(_QWORD *)&v170 = v167;
            DWORD2(v170) = v174;
            v77 = std::time::Instant::elapsed::h457f209775ed485c(&v170);
            v159[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v77 + v78 / 0xF4240uLL;
            *(_QWORD *)v160 = "router_enabled=false";
            *(_QWORD *)&v160[8] = 20;
            *(_QWORD *)&__dst[0] = &v173;
            *((_QWORD *)&__dst[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e;
            *(_QWORD *)&__dst[1] = &v156;
            *((_QWORD *)&__dst[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            *(_QWORD *)&__dst[2] = v159;
            *((_QWORD *)&__dst[2] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
            *(_QWORD *)&__dst[3] = v160;
            *((_QWORD *)&__dst[3] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017BBC51, __dst);
            codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
              "router_transitionphase_timingstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_ready",
              17,
              "phase_timingstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_ready",
              12,
              __src);
            v82 = std::time::Instant::now::hda76af2c3a449055(
                    "router_transitionphase_timingstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_ready",
                    17,
                    v79,
                    v80,
                    v81);
            v84 = v83;
            v85 = v176;
            codexmate_lib::core::relay::router_unlock_auth::cleanup_for_native_off::hf6c64171c633b030(__src, v176);
            if ( LODWORD(__src[0]) != 11 )
            {
              if ( !a9 )
                goto LABEL_89;
              qmemcpy(__dst, __src, 0x60u);
              *(_QWORD *)v160 = __dst;
              *(_QWORD *)&v160[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v155, &unk_1017BBFAD, v160);
              v93 = *((_QWORD *)&v178 + 1);
              if ( *((_QWORD *)&v178 + 1) == v177 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v177);
              v94 = v178;
              v95 = 3 * v93;
              *(_QWORD *)(v178 + 8 * v95 + 16) = v155[2];
              v96 = v155[0];
              *(_QWORD *)(v94 + 8 * v95 + 8) = v155[1];
              *(_QWORD *)(v94 + 8 * v95) = v96;
              *((_QWORD *)&v178 + 1) = v93 + 1;
              v182 = 0;
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
LABEL_68:
              *(_QWORD *)&__dst[0] = &v182;
              *((_QWORD *)&__dst[0] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v149, &unk_1017BBFE9, __dst);
              codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
                1,
                (__int64)&unk_1015E43C9,
                12,
                v82,
                v84,
                v149);
              v100 = std::time::Instant::now::hda76af2c3a449055(1, &unk_1015E43C9, v97, v98, v99);
              v102 = v101;
              v181 = codexmate_lib::core::relay::config_takeover::backup_exists::h42f18c99a961aa37(v176);
              v166 = 0;
              v173 = 0;
              if ( v181 )
              {
                codexmate_lib::core::relay::config_takeover::restore::h21110a3f65c0585f(__dst, v176);
                if ( LODWORD(__dst[0]) == 1 )
                {
                  v103 = (char *)__dst + 8;
                  if ( !a9 )
                  {
LABEL_90:
                    qmemcpy(v175, v103, 0x60u);
LABEL_91:
                    v125 = *((_QWORD *)&v178 + 1);
                    if ( *((_QWORD *)&v178 + 1) )
                    {
LABEL_92:
                      v126 = (_QWORD *)(v178 + 8);
                      do
                      {
                        v127 = *(v126 - 1);
                        if ( v127 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v126, v127, 1);
                        v126 += 3;
                        --v125;
                      }
                      while ( v125 );
                    }
LABEL_113:
                    if ( v177 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v178, 24 * v177, 8);
                    v138 = v180;
                    if ( v180 )
                    {
                      v139 = (_QWORD *)(*((_QWORD *)&v179 + 1) + 8LL);
                      do
                      {
                        v140 = *(v139 - 1);
                        if ( v140 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v139, v140, 1);
                        v139 += 3;
                        --v138;
                      }
                      while ( v138 );
                    }
                    if ( (_QWORD)v179 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v179 + 1), 24 * v179, 8);
                    return v175;
                  }
                  qmemcpy(__src, (char *)__dst + 8, 0x60u);
                  *(_QWORD *)v160 = __src;
                  *(_QWORD *)&v160[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v148, &unk_1017BC09C, v160);
                  alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v177, v148);
                  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
                }
                else
                {
                  v104 = *((_QWORD *)&__dst[1] + 1);
                  v105 = *(_QWORD *)&__dst[3];
                  if ( *(_QWORD *)&__dst[6] )
                  {
                    alloc::str::join_generic_copy::heca7a5e86402c6b6(
                      __src,
                      *((_QWORD *)&__dst[5] + 1),
                      *(_QWORD *)&__dst[6],
                      &unk_1015E417C,
                      3);
                    *(_QWORD *)&v160[16] = *(_QWORD *)&__src[1];
                    *(_OWORD *)v160 = __src[0];
                    *(_QWORD *)&__src[0] = v160;
                    *((_QWORD *)&__src[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v154, &unk_1017BBFF4, __src);
                    if ( *(_QWORD *)v160 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v160[8], *(_QWORD *)v160, 1);
                    v106 = *((_QWORD *)&v178 + 1);
                    if ( *((_QWORD *)&v178 + 1) == v177 )
                      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v177);
                    v107 = v178;
                    v108 = 3 * v106;
                    *(_QWORD *)(v178 + 8 * v108 + 16) = v154[2];
                    v109 = v154[0];
                    *(_QWORD *)(v107 + 8 * v108 + 8) = v154[1];
                    *(_QWORD *)(v107 + 8 * v108) = v109;
                    *((_QWORD *)&v178 + 1) = v106 + 1;
                  }
                  v166 = v104;
                  v173 = v105;
                  *(_QWORD *)&__src[0] = &v166;
                  *((_QWORD *)&__src[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  *(_QWORD *)&__src[1] = &v173;
                  *((_QWORD *)&__src[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v153, &unk_1017BC06D, __src);
                  v110 = v180;
                  if ( v180 == (_QWORD)v179 )
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v179);
                  v111 = *((_QWORD *)&v179 + 1);
                  v112 = 3 * v110;
                  *(_QWORD *)(*((_QWORD *)&v179 + 1) + 8 * v112 + 16) = v153[2];
                  v113 = v153[0];
                  *(_QWORD *)(v111 + 8 * v112 + 8) = v153[1];
                  *(_QWORD *)(v111 + 8 * v112) = v113;
                  v180 = v110 + 1;
                  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..RestoreSummary$GT$::h602bb0437fd5edef((char *)__dst + 8);
                }
              }
              *(_QWORD *)&__dst[0] = &v181;
              *((_QWORD *)&__dst[0] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
              *(_QWORD *)&__dst[1] = &v166;
              *((_QWORD *)&__dst[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
              *(_QWORD *)&__dst[2] = &v173;
              *((_QWORD *)&__dst[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v147, &unk_1017BC0E8, __dst);
              codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
                1,
                (__int64)"takeover_restorethread_reconcileimage generationconnection resetreasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
                16,
                v100,
                v102,
                v147);
              codexmate_lib::platform::process::collect_external_codex_writers::h013c99e264542e67(__dst);
              if ( *(_QWORD *)&__dst[0] == 11 )
              {
                *(_QWORD *)v160 = *(_QWORD *)&__dst[1];
                *(_QWORD *)&v160[8] = *(_QWORD *)&__dst[1];
                *(_QWORD *)&v160[16] = *((_QWORD *)&__dst[0] + 1);
                *(_QWORD *)&v160[24] = *(_QWORD *)&__dst[1] + 32LL * *((_QWORD *)&__dst[1] + 1);
                alloc::vec::in_place_collect::from_iter_in_place::h7c38924dca936911(v159, v160);
                codexmate_lib::platform::process::reject_external_codex_writers::h04ed4542d20e0d8e(__src, v159);
                if ( LODWORD(__src[0]) == 11 )
                {
                  v114 = v176;
                  codexmate_lib::core::relay::codex_catalog::resolve_native_default_model::hdcb8d9b9260fe2d4(
                    &v170,
                    v176);
                  v118 = std::time::Instant::now::hda76af2c3a449055(&v170, v114, v115, v116, v117);
                  v120 = v119;
                  *(_QWORD *)&__dst[1] = v171;
                  __dst[0] = v170;
                  *((_QWORD *)&__dst[1] + 1) = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_732;
                  *(_QWORD *)&__dst[2] = 6;
                  BYTE8(__dst[2]) = 1;
                  codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads::hfdb93758fe0846e8(
                    __src,
                    v176,
                    __dst);
                  if ( LODWORD(__src[0]) != 2 )
                  {
                    memcpy(__dst, __src, 0xC0u);
                    if ( LOBYTE(__dst[0]) )
                      v128 = *(_QWORD *)&__dst[1];
                    else
                      v128 = 0;
                    *(_QWORD *)&v156 = v128;
                    *(_QWORD *)v160 = &__dst[9];
                    *(_QWORD *)&v160[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    *(_QWORD *)&v160[16] = (char *)&__dst[9] + 8;
                    *(_QWORD *)&v160[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    *(_QWORD *)&v160[32] = &__dst[10];
                    *(_QWORD *)&v160[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    *(_QWORD *)&v160[48] = (char *)&__dst[10] + 8;
                    *(_QWORD *)&v160[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    *(_QWORD *)&v160[64] = &__dst[11];
                    *(_QWORD *)&v160[72] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    *(_QWORD *)&v160[80] = &__dst[6];
                    *(_QWORD *)&v160[88] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    *(_QWORD *)&v160[96] = (char *)&__dst[6] + 8;
                    v161 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    v162 = &v156;
                    v163 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    v164 = (char *)&__dst[11] + 8;
                    v165 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v159, &unk_1017BC283, v160);
                    codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
                      1,
                      (__int64)"thread_reconcileimage generationconnection resetreasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
                      16,
                      v118,
                      v120,
                      v159);
                    codexmate_lib::core::relay::router_reconciler::describe_thread_reconcile::h074221fb86954afe(
                      v159,
                      &unk_1015E3B70,
                      9,
                      __dst);
                    *(_QWORD *)v160 = *((_QWORD *)&v159[0] + 1);
                    *(_QWORD *)&v160[8] = *((_QWORD *)&v159[0] + 1);
                    *(_QWORD *)&v160[16] = *(_QWORD *)&v159[0];
                    *(_QWORD *)&v160[24] = *((_QWORD *)&v159[0] + 1) + 24LL * *(_QWORD *)&v159[1];
                    v121 = v160;
                    _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h171b1334bba34601(
                      &v179,
                      v160);
                    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadReconcileSummary$GT$::hdf8d2837b81a54e9(__dst);
                    goto LABEL_100;
                  }
                  v103 = (char *)__src + 8;
                  if ( a9 )
                  {
                    qmemcpy(__dst, (char *)__src + 8, 0x60u);
                    *(_QWORD *)v160 = __dst;
                    *(_QWORD *)&v160[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v146, &unk_1017BBEA5, v160);
                    codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
                      1,
                      (__int64)"thread_reconcileimage generationconnection resetreasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
                      16,
                      v118,
                      v120,
                      v146);
                    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                    {
                      *(_QWORD *)&v159[0] = __dst;
                      *((_QWORD *)&v159[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                      *(_QWORD *)v160 = "codexmate_lib::core::relay::router_reconciler";
                      *(_QWORD *)&v160[8] = 45;
                      *(_QWORD *)&v160[16] = "codexmate_lib::core::relay::router_reconciler";
                      *(_QWORD *)&v160[24] = 45;
                      *(_QWORD *)&v160[32] = &off_1019609E0;
                      log::__private_api::log::h719f4907c7336ae9(&unk_1017BC11E, v159, 2, v160);
                    }
                    *(_QWORD *)v160 = __dst;
                    *(_QWORD *)&v160[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v145, &unk_1017BC179, v160);
                    v121 = v145;
                    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v177, v145);
                    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
LABEL_100:
                    v129 = std::time::Instant::now::hda76af2c3a449055(__dst, v121, v122, v123, v124);
                    v131 = v130;
                    codexmate_lib::core::relay::codex_project_state::inspect::hec557ca3f520652c(__dst, v176);
                    codexmate_lib::core::relay::codex_project_state::stability_issue::haa4350ab63214d44(__src, __dst);
                    if ( __OFSUB__(-*(_QWORD *)&__src[0], 1) )
                    {
                      *(_QWORD *)&__src[0] = &__dst[9];
                      *((_QWORD *)&__src[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                      *(_QWORD *)&__src[1] = &__dst[11];
                      *((_QWORD *)&__src[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                      *(_QWORD *)&__src[2] = (char *)&__dst[11] + 8;
                      *((_QWORD *)&__src[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(v142, &unk_1017BBDD5, __src);
                      codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
                        1,
                        (__int64)"project_statewriting_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
                        13,
                        v129,
                        v131,
                        v142);
LABEL_111:
                      v132 = v180;
                      *(_QWORD *)&__src[1] = v180;
                      v133 = v179;
                      __src[0] = v179;
                      v134 = v177;
                      *((_QWORD *)&__src[1] + 1) = v177;
                      __src[2] = v178;
                      v135 = v175;
                      *(_OWORD *)(v175 + 40) = v178;
                      *((_QWORD *)v135 + 4) = v134;
                      *((_QWORD *)v135 + 3) = v132;
                      *(_OWORD *)(v135 + 8) = v133;
                      v135[56] = 1;
                      *(_QWORD *)v135 = 11;
                      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee(__dst);
                      return v175;
                    }
                    if ( *(_QWORD *)&__src[0] )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[0] + 1), *(_QWORD *)&__src[0], 1);
                    codexmate_lib::core::relay::codex_project_state::repair_if_needed::h6ff0d1e866baa369(v160, v176);
                    if ( *(_QWORD *)v160 != 0x8000000000000000LL )
                    {
                      qmemcpy(__src, v160, 0x68u);
                      *(_QWORD *)&v159[0] = &__src[6];
                      *((_QWORD *)&v159[0] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
                      *(_QWORD *)&v159[1] = (char *)&__src[4] + 8;
                      *((_QWORD *)&v159[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                      *(_QWORD *)&v159[2] = &__src[5];
                      *((_QWORD *)&v159[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                      *(_QWORD *)&v159[3] = (char *)&__src[5] + 8;
                      *((_QWORD *)&v159[3] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(v144, &unk_1017BC1B5, v159);
                      codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
                        1,
                        (__int64)"project_statewriting_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore",
                        13,
                        v129,
                        v131,
                        v144);
                      *(_QWORD *)&v159[1] = *(_QWORD *)&__src[1];
                      v159[0] = __src[0];
                      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v179, v159);
                      if ( 2LL * *((_QWORD *)&__src[1] + 1) )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                          *(_QWORD *)&__src[2],
                          *((_QWORD *)&__src[1] + 1),
                          1);
                      if ( 2LL * *(_QWORD *)&__src[3] )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                          *((_QWORD *)&__src[3] + 1),
                          *(_QWORD *)&__src[3],
                          1);
                      goto LABEL_111;
                    }
                    if ( a9 )
                    {
                      qmemcpy(__src, &v160[8], 0x60u);
                      *(_QWORD *)&v159[0] = __src;
                      *((_QWORD *)&v159[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(v143, &unk_1017BC1E5, v159);
                      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v177, v143);
                      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
                      goto LABEL_111;
                    }
                    qmemcpy(__src, &v160[8], 0x60u);
                    *(_QWORD *)&v159[0] = __src;
                    *((_QWORD *)&v159[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v150, &unk_1017BC21E, v159);
                    v136 = v175;
                    *((_QWORD *)v175 + 3) = v150[2];
                    v137 = v150[0];
                    v136[2] = v150[1];
                    v136[1] = v137;
                    *v136 = 10;
                    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
                    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee(__dst);
                    v125 = *((_QWORD *)&v178 + 1);
                    if ( !*((_QWORD *)&v178 + 1) )
                      goto LABEL_113;
                    goto LABEL_92;
                  }
                  goto LABEL_90;
                }
              }
              else
              {
                __src[5] = __dst[5];
                __src[4] = __dst[4];
                __src[3] = __dst[3];
                __src[2] = __dst[2];
                __src[0] = __dst[0];
                __src[1] = __dst[1];
              }
LABEL_89:
              v103 = (char *)__src;
              goto LABEL_90;
            }
            v86 = BYTE8(__src[0]);
            if ( !BYTE8(__src[0]) )
            {
LABEL_62:
              v182 = v86;
              goto LABEL_68;
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v85);
            v25 = 56;
            v87 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(56, 1);
            if ( v87 )
            {
              v88 = v87;
              v87[6] = 0x81AFE8A4AEE89F8ELL;
              v87[5] = 0xE58DA4E5A281E6B6LL;
              v87[4] = 0xB9E58180E695BDE5LL;
              v87[3] = 0xBB99E7B78FE5A6B4LL;
              v87[2] = 0xE89F8BE69A99E820LL;
              v87[1] = 0x694D614D69412086LL;
              *v87 = 0x90E785B8E6B2B7E5LL;
              v89 = v180;
              if ( v180 == (_QWORD)v179 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v179);
              v90 = *((_QWORD *)&v179 + 1);
              v91 = 3 * v89;
              *(_QWORD *)(*((_QWORD *)&v179 + 1) + 8 * v91) = 56;
              *(_QWORD *)(v90 + 8 * v91 + 8) = v88;
              *(_QWORD *)(v90 + 8 * v91 + 16) = 56;
              v180 = v89 + 1;
              goto LABEL_62;
            }
LABEL_124:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v25);
          }
        }
        qmemcpy(__dst, __src, 0x60u);
        *(_QWORD *)&v170 = v160;
        *((_QWORD *)&v170 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        v171 = __dst;
        v172 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v156, &unk_1017BC250, &v170);
        v170 = v156;
        v171 = v157;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
        v92 = v175;
        *((_QWORD *)v175 + 3) = v171;
        *(_OWORD *)(v92 + 8) = v170;
        *(_QWORD *)v92 = 10;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v160);
        goto LABEL_91;
      }
    }
    else
    {
      __src[5] = __dst[5];
      __src[4] = __dst[4];
      __src[3] = __dst[3];
      __src[2] = __dst[2];
      __src[0] = __dst[0];
      __src[1] = __dst[1];
    }
    qmemcpy(v175, __src, 0x60u);
    v61 = *((_QWORD *)&v178 + 1);
    if ( !*((_QWORD *)&v178 + 1) )
      goto LABEL_113;
LABEL_37:
    v62 = (_QWORD *)(v178 + 8);
    do
    {
      v63 = *(v62 - 1);
      if ( v63 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v62, v63, 1);
      v62 += 3;
      --v61;
    }
    while ( v61 );
    goto LABEL_113;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v151, &unk_1017BBEEC);
  if ( !a9 )
  {
    v25 = 70;
    v58 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(70, 1);
    if ( !v58 )
      goto LABEL_124;
    v59 = v58;
    memcpy(
      v58,
      "NativeOff strict reconciliation requires a verified Codex quiet windowcodexmate_lib::core::relay::router_reconciler",
      0x46u);
    v60 = v175;
    *(_QWORD *)v175 = 10;
    v60[1] = 70;
    v60[2] = v59;
    v60[3] = 70;
    v61 = *((_QWORD *)&v178 + 1);
    if ( !*((_QWORD *)&v178 + 1) )
      goto LABEL_113;
    goto LABEL_37;
  }
  v25 = 84;
  v42 = (_OWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(84, 1);
  if ( !v42 )
    goto LABEL_124;
  v43 = v42;
  v44 = v42;
  memcpy(v42, &unk_1015E4217, 0x54u);
  v45 = v180;
  if ( v180 == (_QWORD)v179 )
  {
    v44 = &v179;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v179);
  }
  v46 = *((_QWORD *)&v179 + 1);
  v47 = 3 * v45;
  *(_QWORD *)(*((_QWORD *)&v179 + 1) + 8 * v47) = 84;
  *(_QWORD *)(v46 + 8 * v47 + 8) = v43;
  *(_QWORD *)(v46 + 8 * v47 + 16) = 84;
  v180 = v45 + 1;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, &unk_1015E4217);
  v25 = 98;
  v48 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(98, 1);
  if ( !v48 )
    goto LABEL_124;
  v49 = v48;
  memcpy(v48, &unk_1015E426B, 0x62u);
  v50 = *((_QWORD *)&v178 + 1);
  if ( *((_QWORD *)&v178 + 1) == v177 )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v177);
  v51 = v178;
  v52 = 3 * v50;
  *(_QWORD *)(v178 + 8 * v52) = 98;
  *(_QWORD *)(v51 + 8 * v52 + 8) = v49;
  *(_QWORD *)(v51 + 8 * v52 + 16) = 98;
  *((_QWORD *)&v178 + 1) = v50 + 1;
  v53 = v180;
  *(_QWORD *)&__dst[1] = v180;
  v54 = v179;
  __dst[0] = v179;
  v55 = v177;
  v56 = v178;
  *((_QWORD *)&__dst[1] + 1) = v177;
  *(_QWORD *)&__dst[2] = v178;
  *((_QWORD *)&__dst[2] + 1) = v50 + 1;
  v57 = v175;
  *((_QWORD *)v175 + 6) = v50 + 1;
  *((_QWORD *)v57 + 5) = v56;
  *((_QWORD *)v57 + 4) = v55;
  *((_QWORD *)v57 + 3) = v53;
  *(_OWORD *)(v57 + 8) = v54;
  v57[56] = 0;
  *(_QWORD *)v57 = 11;
  return v175;
}
