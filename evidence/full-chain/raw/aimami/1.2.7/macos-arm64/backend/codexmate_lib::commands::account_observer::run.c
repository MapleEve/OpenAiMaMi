// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::account_observer::run::h62b14d23b7b7facc; addr: 0x100a58940; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
__int64 __fastcall codexmate_lib::commands::account_observer::run::h62b14d23b7b7facc(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        double a5)
{
  unsigned __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // rdi
  unsigned __int64 v10; // r12
  char *v11; // r14
  const char **v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  void *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // rbx
  char v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rsi
  void *v29; // rax
  void *v30; // r14
  unsigned __int64 v31; // r14
  void *v32; // r15
  char *v33; // r15
  unsigned __int64 v34; // rbx
  _QWORD *v35; // rdi
  unsigned __int8 v36; // r14
  _QWORD *v37; // rax
  __int64 v38; // rdx
  int v39; // r12d
  char v40; // al
  void *v41; // rax
  __int64 v42; // rax
  __int64 **v43; // rdi
  _QWORD *v44; // rdx
  __int64 v45; // rdi
  char *v46; // r14
  char v47; // al
  char v48; // al
  int v49; // ebx
  int v50; // ebx
  _QWORD v52[97]; // [rsp+0h] [rbp-B90h] BYREF
  _QWORD v53[22]; // [rsp+308h] [rbp-888h] BYREF
  __int64 v54; // [rsp+3B8h] [rbp-7D8h]
  __int64 v55; // [rsp+3C0h] [rbp-7D0h]
  __int64 v56[22]; // [rsp+420h] [rbp-770h] BYREF
  __int64 v57; // [rsp+4D0h] [rbp-6C0h]
  __int64 v58; // [rsp+4D8h] [rbp-6B8h]
  _QWORD __dst[17]; // [rsp+510h] [rbp-680h] BYREF
  _QWORD v60[3]; // [rsp+598h] [rbp-5F8h] BYREF
  unsigned __int64 v61; // [rsp+5B0h] [rbp-5E0h] BYREF
  char *v62; // [rsp+5B8h] [rbp-5D8h]
  __int64 v63; // [rsp+5C0h] [rbp-5D0h]
  unsigned __int64 v64; // [rsp+5C8h] [rbp-5C8h]
  const char *v65; // [rsp+5D0h] [rbp-5C0h] BYREF
  __int64 v66; // [rsp+5D8h] [rbp-5B8h]
  __int64 v67; // [rsp+5E0h] [rbp-5B0h]
  const char *v68; // [rsp+5E8h] [rbp-5A8h]
  __int64 v69; // [rsp+5F0h] [rbp-5A0h]
  __int64 v70; // [rsp+5F8h] [rbp-598h]
  void *v71; // [rsp+600h] [rbp-590h]
  _QWORD *v72; // [rsp+608h] [rbp-588h]
  _QWORD *v73; // [rsp+610h] [rbp-580h]
  _QWORD __src[97]; // [rsp+618h] [rbp-578h] BYREF
  __int64 v75; // [rsp+920h] [rbp-270h] BYREF
  void *__s2; // [rsp+928h] [rbp-268h]
  size_t v77; // [rsp+930h] [rbp-260h]
  unsigned __int64 v78; // [rsp+938h] [rbp-258h]
  const char *v79; // [rsp+940h] [rbp-250h]
  bool *v80; // [rsp+948h] [rbp-248h]
  __int64 v81; // [rsp+950h] [rbp-240h]
  const char *v82; // [rsp+958h] [rbp-238h]
  __int64 v83; // [rsp+960h] [rbp-230h]
  __int64 v84; // [rsp+968h] [rbp-228h]
  __int64 v85; // [rsp+970h] [rbp-220h]
  _QWORD *v86; // [rsp+978h] [rbp-218h]
  _QWORD *v87; // [rsp+980h] [rbp-210h]
  _QWORD v88[17]; // [rsp+988h] [rbp-208h] BYREF
  __int64 v89; // [rsp+A10h] [rbp-180h]
  bool *v90; // [rsp+A18h] [rbp-178h]
  __int64 v91; // [rsp+A20h] [rbp-170h]
  const char *v92; // [rsp+A28h] [rbp-168h]
  __int64 v93; // [rsp+A30h] [rbp-160h]
  __int64 v94; // [rsp+A38h] [rbp-158h]
  __int64 v95; // [rsp+A40h] [rbp-150h]
  _QWORD *v96; // [rsp+A48h] [rbp-148h]
  _QWORD *v97; // [rsp+A50h] [rbp-140h]
  size_t __n; // [rsp+A58h] [rbp-138h]
  unsigned __int64 v99; // [rsp+A60h] [rbp-130h]
  __int64 v100; // [rsp+A68h] [rbp-128h]
  _QWORD *v101; // [rsp+A70h] [rbp-120h]
  bool *v102; // [rsp+A78h] [rbp-118h] BYREF
  __int64 v103; // [rsp+A80h] [rbp-110h]
  const char *v104; // [rsp+A88h] [rbp-108h]
  __int64 v105; // [rsp+A90h] [rbp-100h]
  __int64 v106; // [rsp+A98h] [rbp-F8h]
  void *v107; // [rsp+AA0h] [rbp-F0h]
  _QWORD *v108; // [rsp+AA8h] [rbp-E8h]
  _QWORD *v109; // [rsp+AB0h] [rbp-E0h]
  _QWORD v110[2]; // [rsp+AB8h] [rbp-D8h] BYREF
  __int64 v111; // [rsp+AC8h] [rbp-C8h]
  __int64 v112; // [rsp+AD0h] [rbp-C0h]
  unsigned __int64 v113; // [rsp+AD8h] [rbp-B8h]
  bool *v114; // [rsp+AE0h] [rbp-B0h] BYREF
  __int64 v115; // [rsp+AE8h] [rbp-A8h]
  __int64 v116; // [rsp+AF0h] [rbp-A0h]
  const char *v117; // [rsp+AF8h] [rbp-98h]
  __int64 v118; // [rsp+B00h] [rbp-90h]
  __int64 v119; // [rsp+B08h] [rbp-88h]
  void *v120; // [rsp+B10h] [rbp-80h]
  _QWORD *v121; // [rsp+B18h] [rbp-78h]
  __int64 v122; // [rsp+B20h] [rbp-70h]
  void *__s1; // [rsp+B28h] [rbp-68h]
  int v124; // [rsp+B34h] [rbp-5Ch]
  __int64 v125; // [rsp+B38h] [rbp-58h]
  char *v126; // [rsp+B40h] [rbp-50h]
  unsigned __int64 v127; // [rsp+B48h] [rbp-48h]
  __int64 v128; // [rsp+B50h] [rbp-40h]
  _QWORD *v129; // [rsp+B58h] [rbp-38h]
  bool v130; // [rsp+B67h] [rbp-29h] BYREF

  v122 = a1; /*0x100a58954*/
  v110[0] = a3; /*0x100a58962*/
  v110[1] = a4; /*0x100a58969*/
  v53[0] = 3; /*0x100a58970*/
  v56[0] = 3; /*0x100a5897b*/
  v111 = a2[1]; /*0x100a5898a*/
  v101 = a2; /*0x100a58991*/
  v89 = a2[2]; /*0x100a5899c*/
  v99 = 0x8000000000000000LL; /*0x100a589a7*/
  v127 = 0x8000000000000000LL; /*0x100a589ae*/
  while ( 1 ) /*0x100a589d9*/
  {
    v6 = std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::hc7feffd09b62a463(v110, 1, 0); /*0x100a589d9*/
    if ( v6 == 2 || (v6 & 1) != 0 ) /*0x100a589e8*/
      break; /*0x100a589e8*/
    v7 = tauri::state::StateManager::try_get::h7aded0c5892c0acf( /*0x100a58a04*/
           *(_QWORD *)(*(_QWORD *)(v122 + 136) + 4872LL) + 16LL,
           a5);
    v8 = v7; /*0x100a58a09*/
    if ( !v7 ) /*0x100a58a0f*/
    {
      v75 = (__int64)&anon_1d5e2ba954832094e55fcdce7f3204cb_1506; /*0x100a599b1*/
      __s2 = (void *)61; /*0x100a599b8*/
      v61 = (unsigned __int64)&v75; /*0x100a599ca*/
      v62 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a599d8*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100a599f4*/
        &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
        &v61,
        &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
    }
    v9 = (__int64 *)&v61; /*0x100a58a15*/
    codexmate_lib::core::relay::codex_mutation::CodexMutationGate::try_lock::hb10f0de202c28c48(&v61, v7); /*0x100a58a1f*/
    v10 = v61; /*0x100a58a24*/
    v11 = v62; /*0x100a58a2b*/
    if ( v61 != 11 ) /*0x100a58a3d*/
    {
      v125 = v64; /*0x100a58a8b*/
      v12 = &v65; /*0x100a58a8f*/
      v114 = (bool *)v65; /*0x100a58a9d*/
      v115 = v66; /*0x100a58aa4*/
      v116 = v67; /*0x100a58aaf*/
      v117 = v68; /*0x100a58aba*/
      v118 = v69; /*0x100a58ac5*/
      v119 = v70; /*0x100a58ad0*/
      v120 = v71; /*0x100a58adb*/
      v121 = v72; /*0x100a58ae3*/
      v5 = (unsigned __int8)v63 /*0x100a58ae7*/
         | ((unsigned __int64)((HIBYTE(v63) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v63 + 5)) << 40)
         | ((unsigned __int64)*(unsigned int *)((char *)&v63 + 1) << 8);
      v128 = (__int64)v62; /*0x100a58aea*/
      goto LABEL_10; /*0x100a58aea*/
    }
    v113 = v5; /*0x100a58a3f*/
    if ( (unsigned __int8)v63 == 2 ) /*0x100a58a49*/
      goto LABEL_8; /*0x100a58a49*/
    if ( (v63 & 1) == 0 /*0x100a597d6*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v61) )
    {
      v11[8] = 1; /*0x100a597e3*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v11); /*0x100a58c04*/
    v16 = std::time::Instant::now::hda76af2c3a449055(a5); /*0x100a58c09*/
    v9 = (__int64 *)&v61; /*0x100a58c11*/
    codexmate_lib::core::account_observation::AuthObservationTracker::poll::h115271a2edddd2d4( /*0x100a58c30*/
      &v61,
      v53,
      v111,
      v89,
      v16,
      v17);
    v10 = (unsigned __int64)v62; /*0x100a58c3c*/
    v18 = v63; /*0x100a58c43*/
    v19 = v64; /*0x100a58c4a*/
    v20 = (__int64)v65; /*0x100a58c51*/
    v12 = &v65; /*0x100a58c58*/
    v90 = (bool *)v66; /*0x100a58c67*/
    v91 = v67; /*0x100a58c6e*/
    v92 = v68; /*0x100a58c79*/
    v93 = v69; /*0x100a58c84*/
    v94 = v70; /*0x100a58c8f*/
    v95 = (__int64)v71; /*0x100a58c9a*/
    v96 = v72; /*0x100a58ca5*/
    v97 = v73; /*0x100a58cb0*/
    if ( v61 == 4 ) /*0x100a58cbb*/
    {
      v114 = v90; /*0x100a58ccf*/
      v115 = v91; /*0x100a58cd6*/
      v116 = (__int64)v92; /*0x100a58ce4*/
      v117 = (const char *)v93; /*0x100a58cf2*/
      v118 = v94; /*0x100a58d00*/
      v119 = v95; /*0x100a58d0e*/
      v120 = v96; /*0x100a58d1c*/
      v121 = v97; /*0x100a58d27*/
      goto LABEL_21; /*0x100a58d27*/
    }
    v100 = v61; /*0x100a59093*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x100a590ad*/
    if ( (_DWORD)v61 == 3 ) /*0x100a590bc*/
      goto LABEL_8; /*0x100a590bc*/
    v75 = v100; /*0x100a590c2*/
    __s2 = v62; /*0x100a590c9*/
    v77 = v63; /*0x100a590d0*/
    v78 = v64; /*0x100a590d7*/
    v79 = v65; /*0x100a590de*/
    v87 = v97; /*0x100a590f3*/
    v86 = v96; /*0x100a590fe*/
    v85 = v95; /*0x100a59109*/
    v84 = v94; /*0x100a59114*/
    v83 = v93; /*0x100a5911f*/
    v82 = v92; /*0x100a5912a*/
    v81 = v91; /*0x100a5913c*/
    v80 = v90; /*0x100a59140*/
    memcpy(v88, __dst, sizeof(v88)); /*0x100a59156*/
    v9 = (__int64 *)&v61; /*0x100a5915b*/
    codexmate_lib::core::relay::codex_mutation::CodexMutationGate::try_lock::hb10f0de202c28c48(&v61, v8); /*0x100a59165*/
    v10 = v61; /*0x100a5916a*/
    v33 = v62; /*0x100a59171*/
    v34 = v113; /*0x100a59183*/
    if ( v61 != 11 ) /*0x100a5918a*/
    {
      v20 = v64; /*0x100a591f2*/
      v114 = (bool *)v65; /*0x100a59207*/
      v115 = v66; /*0x100a5920e*/
      v116 = v67; /*0x100a59219*/
      v117 = v68; /*0x100a59224*/
      v118 = v69; /*0x100a5922f*/
      v119 = v70; /*0x100a5923a*/
      v120 = v71; /*0x100a59245*/
      v121 = v72; /*0x100a5924d*/
      v19 = (unsigned __int8)v63 /*0x100a59251*/
          | ((unsigned __int64)((HIBYTE(v63) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v63 + 5)) << 40)
          | ((unsigned __int64)*(unsigned int *)((char *)&v63 + 1) << 8);
      v18 = (__int64)v62; /*0x100a59254*/
      goto LABEL_74; /*0x100a59257*/
    }
    v10 = 11; /*0x100a5918c*/
    if ( (unsigned __int8)v63 == 2 ) /*0x100a59195*/
      goto LABEL_50; /*0x100a59195*/
    v112 = (unsigned __int8)v63; /*0x100a5925c*/
    v35 = v110; /*0x100a59263*/
    if ( (unsigned __int8)std::sync::mpmc::Receiver$LT$T$GT$::try_recv::hfbba131fef4f3e6c(v110) == 2 ) /*0x100a59271*/
    {
      v19 = v34; /*0x100a59273*/
      v20 = v125; /*0x100a59276*/
      v18 = v128; /*0x100a5927a*/
      goto LABEL_71; /*0x100a5927e*/
    }
    codexmate_lib::commands::accounts::get_cached_display_snapshot::h345feb090b2a25d7(&v61, a5); /*0x100a5928a*/
    v36 = 3; /*0x100a5928f*/
    if ( (_DWORD)v61 != 3 ) /*0x100a59299*/
    {
      v36 = BYTE1(__src[61]); /*0x100a5929b*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::h5a03c3b4d3d7a44c(&v61); /*0x100a592aa*/
    }
    v37 = (_QWORD *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(*(_QWORD *)(*(_QWORD *)(v122 + 136) + 4872LL) + 16LL); /*0x100a592c5*/
    v129 = v37; /*0x100a592ca*/
    if ( !v37 ) /*0x100a592d5*/
    {
      v126 = v33; /*0x100a599fb*/
      v114 = (bool *)&anon_1d5e2ba954832094e55fcdce7f3204cb_1507; /*0x100a59a06*/
      v115 = 76; /*0x100a59a0d*/
      v61 = (unsigned __int64)&v114; /*0x100a59a1f*/
      v62 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a59a2d*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100a59a49*/
        &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
        &v61,
        &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
    }
    v35 = (_QWORD *)*v37; /*0x100a592db*/
    if ( !*v37 ) /*0x100a592db*/
      v35 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v129); /*0x100a597f6*/
    if ( !(unsigned __int8)std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965() ) /*0x100a592ee*/
    {
      v42 = v125; /*0x100a593dd*/
      v18 = v128; /*0x100a593e1*/
LABEL_70:
      v19 = v34; /*0x100a593e5*/
      v20 = v42; /*0x100a593e8*/
      goto LABEL_71; /*0x100a593e8*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a5930b*/
    {
      v39 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v35); /*0x100a5981a*/
      LOBYTE(v39) = v39 ^ 1; /*0x100a5981d*/
    }
    else
    {
      v39 = 0; /*0x100a59311*/
    }
    v40 = *((_BYTE *)v129 + 8); /*0x100a59318*/
    v62 = (char *)v129; /*0x100a59323*/
    LOBYTE(v63) = v39; /*0x100a5932a*/
    v61 = v40 != 0; /*0x100a59331*/
    if ( v40 ) /*0x100a59338*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v35, v129, v38); /*0x100a5933e*/
      v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x100a5934d*/
      if ( !v41 ) /*0x100a59355*/
      {
        v126 = v33; /*0x100a59a5f*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x100a59a6d*/
      }
      v34 = (unsigned __int64)v41; /*0x100a5935b*/
      qmemcpy(v41, "Account repository lock is poisoned", 35); /*0x100a59392*/
      if ( !(_BYTE)v39 /*0x100a59826*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(35) )
      {
        *((_BYTE *)v129 + 8) = 1; /*0x100a59837*/
      }
      v35 = (_QWORD *)*v129; /*0x100a593c2*/
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v129); /*0x100a593c5*/
      v18 = 35; /*0x100a593ca*/
      v10 = 10; /*0x100a593d0*/
      v42 = 35; /*0x100a593d6*/
      goto LABEL_70; /*0x100a593db*/
    }
    v124 = v39; /*0x100a5946b*/
    v126 = v33; /*0x100a5946f*/
    v43 = (__int64 **)&v61; /*0x100a5947b*/
    codexmate_lib::core::repository::account_observation::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::try_sync_auth_observation::h1379f51b3428065f( /*0x100a59489*/
      &v61,
      v129 + 2,
      (__int64)&v75,
      v36,
      a5);
    v10 = (unsigned __int64)v62; /*0x100a59495*/
    v18 = v63; /*0x100a5949c*/
    v19 = v64; /*0x100a594a3*/
    v20 = (__int64)v65; /*0x100a594aa*/
    v102 = (bool *)v66; /*0x100a594c0*/
    v103 = v67; /*0x100a594c7*/
    v104 = v68; /*0x100a594d2*/
    v105 = v69; /*0x100a594dd*/
    v106 = v70; /*0x100a594e8*/
    v107 = v71; /*0x100a594f3*/
    v108 = v72; /*0x100a594fe*/
    v109 = v73; /*0x100a59509*/
    if ( v61 != 4 ) /*0x100a59514*/
    {
      v43 = (__int64 **)v52; /*0x100a59595*/
      memcpy(v52, __src, sizeof(v52)); /*0x100a595a3*/
      if ( (_DWORD)v61 != 3 ) /*0x100a595ac*/
      {
        v73 = v109; /*0x100a5962c*/
        v72 = v108; /*0x100a59637*/
        v71 = v107; /*0x100a59642*/
        v70 = v106; /*0x100a5964d*/
        v69 = v105; /*0x100a59658*/
        v68 = v104; /*0x100a59663*/
        v67 = v103; /*0x100a59675*/
        v66 = (__int64)v102; /*0x100a59679*/
        memcpy(__src, v52, sizeof(__src)); /*0x100a59690*/
        if ( !(_BYTE)v124 /*0x100a5985a*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__src) )
        {
          *((_BYTE *)v129 + 8) = 1; /*0x100a5986b*/
        }
        v45 = *v129; /*0x100a596bc*/
        v46 = v126; /*0x100a596bf*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v129); /*0x100a596c3*/
        v34 = v113; /*0x100a596cf*/
        if ( (v112 & 1) == 0 /*0x100a596ef*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          v48 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v45); /*0x100a59874*/
          v46 = v126; /*0x100a5987b*/
          if ( !v48 ) /*0x100a5987f*/
            v126[8] = 1; /*0x100a59885*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v46); /*0x100a596f8*/
        if ( (unsigned __int8)std::sync::mpmc::Receiver$LT$T$GT$::try_recv::hfbba131fef4f3e6c(v110) != 2 ) /*0x100a5970b*/
        {
          codexmate_lib::commands::accounts::broadcast_runtime_snapshot_with_account::h53cbb1011cf121eb( /*0x100a5973e*/
            v122,
            &v61,
            "authdonetextNoneSome",
            4,
            0);
          codexmate_lib::core::account_observation::AuthObservationTracker::applied::h2005698f11279970(v53, &v75); /*0x100a59751*/
          v130 = __src[62] != 0x8000000000000000LL; /*0x100a5976a*/
          v114 = &v130; /*0x100a59772*/
          v115 = (__int64)_$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x100a59780*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &unk_101905A7D, &v114); /*0x100a5979c*/
          a5 = codexmate_lib::platform::debug_log::app_event::h5d690f20bb61e31b( /*0x100a597c0*/
                 (__int64)"accountshas_moreafter_idthinkingidentitytrailersno-cache",
                 8,
                 (__int64)"external_auth_synced",
                 20,
                 v60);
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::h5a03c3b4d3d7a44c(&v61); /*0x100a597cc*/
LABEL_8:
          v5 = v113; /*0x100a58a4f*/
          goto LABEL_22; /*0x100a58a56*/
        }
        v9 = (__int64 *)&v61; /*0x100a5970d*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::h5a03c3b4d3d7a44c(&v61); /*0x100a59714*/
        v10 = 11; /*0x100a59719*/
LABEL_50:
        v19 = v34; /*0x100a5919b*/
        v20 = v125; /*0x100a5919e*/
        v18 = v128; /*0x100a591a2*/
        goto LABEL_74; /*0x100a591a6*/
      }
      v19 = v113; /*0x100a595ae*/
      v20 = v125; /*0x100a595b5*/
      v18 = v128; /*0x100a595b9*/
      v10 = 11; /*0x100a595bd*/
      v33 = v126; /*0x100a595c7*/
      v44 = v129; /*0x100a595cb*/
      if ( (_BYTE)v124 ) /*0x100a595cf*/
        goto LABEL_85; /*0x100a595cf*/
LABEL_84:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a595e8*/
      {
        v47 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v43); /*0x100a59840*/
        v44 = v129; /*0x100a59847*/
        if ( !v47 ) /*0x100a5984b*/
          *((_BYTE *)v129 + 8) = 1; /*0x100a59851*/
      }
      goto LABEL_85; /*0x100a59855*/
    }
    v114 = v102; /*0x100a59524*/
    v115 = v103; /*0x100a5952b*/
    v116 = (__int64)v104; /*0x100a59539*/
    v117 = (const char *)v105; /*0x100a59547*/
    v118 = v106; /*0x100a59555*/
    v119 = (__int64)v107; /*0x100a59563*/
    v120 = v108; /*0x100a59571*/
    v121 = v109; /*0x100a5957c*/
    v33 = v126; /*0x100a59584*/
    v44 = v129; /*0x100a59588*/
    if ( !(_BYTE)v124 ) /*0x100a5958c*/
      goto LABEL_84; /*0x100a5958c*/
LABEL_85:
    v35 = (_QWORD *)*v44; /*0x100a595ee*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v44); /*0x100a595f1*/
LABEL_71:
    if ( (v112 & 1) == 0 /*0x100a597fe*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v35) )
    {
      v33[8] = 1; /*0x100a5980b*/
    }
    v9 = *(__int64 **)v33; /*0x100a59411*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v33); /*0x100a59414*/
LABEL_74:
    v12 = (const char **)v88[9]; /*0x100a59419*/
    if ( 2LL * v88[9] ) /*0x100a59420*/
    {
      v9 = (__int64 *)v88[10]; /*0x100a5943c*/
      a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88[10], v88[9], 1); /*0x100a59448*/
      if ( (_DWORD)v100 != 2 ) /*0x100a59454*/
      {
LABEL_78:
        v9 = &v75; /*0x100a5945a*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h5f117fc37895616c(&v75); /*0x100a59461*/
      }
    }
    else if ( (_DWORD)v100 != 2 ) /*0x100a59434*/
    {
      goto LABEL_78; /*0x100a59434*/
    }
LABEL_21:
    v128 = v18; /*0x100a58d2b*/
    v125 = v20; /*0x100a58d2f*/
    v5 = v19; /*0x100a58d33*/
    if ( v10 == 11 ) /*0x100a58d3a*/
    {
LABEL_22:
      if ( 2 * v127 ) /*0x100a58d44*/
        a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v127, 1); /*0x100a58d5e*/
      v127 = v99; /*0x100a589c7*/
    }
    else
    {
LABEL_10:
      v52[0] = v10; /*0x100a58aee*/
      v52[1] = v128; /*0x100a58af9*/
      v52[2] = v5; /*0x100a58b00*/
      v52[3] = v125; /*0x100a58b0b*/
      v52[11] = v121; /*0x100a58b1d*/
      v52[10] = v120; /*0x100a58b25*/
      v52[9] = v119; /*0x100a58b30*/
      v52[8] = v118; /*0x100a58b3b*/
      v52[7] = v117; /*0x100a58b46*/
      v52[6] = v116; /*0x100a58b51*/
      v52[5] = v115; /*0x100a58b63*/
      v52[4] = v114; /*0x100a58b67*/
      v13 = v10 - 2; /*0x100a58b6d*/
      if ( v10 < 2 ) /*0x100a58b76*/
        v13 = 2; /*0x100a58b76*/
      if ( v13 ) /*0x100a58b7d*/
      {
        if ( v13 == 1 ) /*0x100a58b87*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v12, &v52[4]); /*0x100a58d68*/
          v14 = 12; /*0x100a58d6d*/
          v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100a58d7d*/
          if ( !v15 ) /*0x100a58d85*/
            goto LABEL_126; /*0x100a58d85*/
          qmemcpy(v15, "invalid_json", 12); /*0x100a58d95*/
LABEL_26:
          v75 = 12; /*0x100a58d9f*/
          __s2 = v15; /*0x100a58daa*/
          v77 = 12; /*0x100a58db1*/
          if ( v127 == 0x8000000000000000LL ) /*0x100a58dcd*/
            goto LABEL_40; /*0x100a58dcd*/
          goto LABEL_38; /*0x100a58dcd*/
        }
        if ( v13 == 7 ) /*0x100a58b91*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v12, &v52[4]); /*0x100a58b97*/
          v14 = 12; /*0x100a58b9c*/
          v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100a58bac*/
          if ( !v15 ) /*0x100a58bb4*/
            goto LABEL_126; /*0x100a58bb4*/
          qmemcpy(v15, "invalid_auth", 12); /*0x100a58bc4*/
          goto LABEL_26; /*0x100a58bce*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v12, &v52[4]); /*0x100a58eb8*/
        v14 = 11; /*0x100a58ebd*/
        v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100a58ecd*/
        if ( !v29 ) /*0x100a58ed5*/
LABEL_126:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v14); /*0x100a59a50*/
        qmemcpy(v29, "sync_failed", 11); /*0x100a58ee5*/
        v75 = 11; /*0x100a58eef*/
        __s2 = v29; /*0x100a58efa*/
        v77 = 11; /*0x100a58f01*/
        if ( v127 == 0x8000000000000000LL ) /*0x100a58f1d*/
        {
LABEL_40:
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a58f6e*/
          {
            __dst[0] = &v75; /*0x100a58f7b*/
            __dst[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a58f89*/
            v67 = 2; /*0x100a58f90*/
            v68 = "codexmate_lib::commands::account_observer"; /*0x100a58fa2*/
            v69 = 41; /*0x100a58fa9*/
            v71 = &unk_101905A99; /*0x100a58fbb*/
            v72 = __dst; /*0x100a58fc9*/
            v61 = 0; /*0x100a58fd0*/
            v62 = "codexmate_lib::commands::account_observer"; /*0x100a58fdb*/
            v63 = 41; /*0x100a58fe2*/
            v64 = 0; /*0x100a58fed*/
            v65 = "src/commands/account_observer.rs"; /*0x100a58fff*/
            v66 = 32; /*0x100a59006*/
            v70 = 0x3500000001LL; /*0x100a5901b*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v102, &v61); /*0x100a59030*/
          }
          v31 = v75; /*0x100a59035*/
          v32 = __s2; /*0x100a5903c*/
          __n = v77; /*0x100a5904a*/
          if ( 2 * v127 ) /*0x100a59055*/
            a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v127, 1); /*0x100a5906b*/
          __s1 = v32; /*0x100a59070*/
          v127 = v31; /*0x100a59074*/
          goto LABEL_45; /*0x100a59074*/
        }
      }
      else
      {
        v21 = v128; /*0x100a58dd8*/
        __dst[0] = v128; /*0x100a58ddc*/
        LOBYTE(v102) = std::io::error::Error::kind::hbe3dd139aa56fd1b(v128); /*0x100a58deb*/
        v75 = (__int64)&v102; /*0x100a58df8*/
        __s2 = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Debug$GT$::fmt::hc444154466c62606; /*0x100a58e06*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v61, &unk_101905A93, &v75); /*0x100a58e22*/
        v75 = v61; /*0x100a58e35*/
        __s2 = v62; /*0x100a58e3c*/
        v77 = v63; /*0x100a58e4a*/
        if ( (v21 & 3) == 1 ) /*0x100a58e5a*/
        {
          v25 = v128 - 1; /*0x100a58e60*/
          v26 = *(_QWORD *)(v128 - 1); /*0x100a58e64*/
          v27 = *(_QWORD *)(v128 + 7); /*0x100a58e68*/
          if ( *(_QWORD *)v27 ) /*0x100a58e6c*/
            (*(void (__fastcall **)(_QWORD, void *, __int64, char *, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v27)( /*0x100a58e77*/
              *(_QWORD *)(v128 - 1),
              &unk_101905A93,
              v22,
              v62,
              v23,
              v24,
              v52[0],
              v52[1],
              v52[2],
              v52[3],
              v52[4],
              v52[5],
              v52[6],
              v52[7],
              v52[8],
              v52[9],
              v52[10],
              v52[11]);
          v28 = *(_QWORD *)(v27 + 8); /*0x100a58e79*/
          if ( v28 ) /*0x100a58e80*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x100a58e89*/
          a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x100a58e9b*/
        }
        if ( v127 == 0x8000000000000000LL ) /*0x100a58eb1*/
          goto LABEL_40; /*0x100a58eb1*/
      }
LABEL_38:
      if ( __n != v77 ) /*0x100a58f2d*/
        goto LABEL_40; /*0x100a58f2d*/
      v30 = __s2; /*0x100a58f2f*/
      if ( memcmp(__s1, __s2, __n) ) /*0x100a58f44*/
        goto LABEL_40; /*0x100a58f4b*/
      if ( v75 ) /*0x100a591b5*/
        a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v75, 1); /*0x100a591c3*/
LABEL_45:
      if ( v10 != 2 ) /*0x100a59083*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v52); /*0x100a59089*/
    }
  }
  if ( 2 * v127 ) /*0x100a59893*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v127, 1); /*0x100a598b8*/
    v49 = v53[0]; /*0x100a598bd*/
    if ( v53[0] == 3 ) /*0x100a598c8*/
      goto LABEL_113; /*0x100a598c8*/
  }
  else
  {
    v49 = v53[0]; /*0x100a598a0*/
    if ( v53[0] == 3 ) /*0x100a598ab*/
      goto LABEL_113; /*0x100a598ab*/
  }
  if ( !(2 * v54) ) /*0x100a598d1*/
  {
    if ( v49 == 2 ) /*0x100a598e5*/
      goto LABEL_113; /*0x100a598e5*/
    goto LABEL_112; /*0x100a598e5*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v54, 1); /*0x100a59978*/
  if ( v49 != 2 ) /*0x100a59980*/
LABEL_112:
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h5f117fc37895616c(v53); /*0x100a598e7*/
LABEL_113:
  v50 = v56[0]; /*0x100a598f3*/
  if ( v56[0] != 3 ) /*0x100a598fe*/
  {
    if ( 2 * v57 ) /*0x100a59907*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x100a59997*/
      if ( v50 != 2 ) /*0x100a5999f*/
LABEL_116:
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h5f117fc37895616c(v56); /*0x100a59919*/
    }
    else if ( LODWORD(v56[0]) != 2 ) /*0x100a59917*/
    {
      goto LABEL_116; /*0x100a59917*/
    }
  }
  _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb3639ec761870c94(v110); /*0x100a5992c*/
  if ( *v101 ) /*0x100a59938*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, *v101, 1); /*0x100a5994c*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v122); /*0x100a5995a*/
}