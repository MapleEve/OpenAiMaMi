// __ZN13codexmate_lib4core5relay7manager12RelayManager20fix_diagnostic_issue @ 0x100275400 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::fix_diagnostic_issue::hd354ed51ff72464a(
        _QWORD *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4)
{
  _QWORD *v5; // r15
  __int64 v6; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  void *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdx
  char *v19; // rdi
  __int64 v20; // rdx
  char *v21; // rbx
  __int64 v22; // r14
  char v23; // r12
  __m128i v24; // xmm0
  char v25; // al
  char v26; // bl
  char v27; // r12
  __m128i v28; // xmm0
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // r13
  __int64 v32; // r10
  __int64 v33; // r12
  __int64 v34; // r11
  __int64 v35; // r9
  __int64 v36; // rdi
  _QWORD *v37; // rsi
  __int64 v38; // rax
  bool v39; // r14
  bool v40; // r12
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  _QWORD *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // r12
  _QWORD *v51; // rax
  __int64 v52; // rdx
  char v54; // al
  __int64 v55; // [rsp+20h] [rbp-AF0h] BYREF
  _BYTE v56[96]; // [rsp+28h] [rbp-AE8h] BYREF
  _BYTE __dst[640]; // [rsp+88h] [rbp-A88h] BYREF
  _BYTE v58[296]; // [rsp+308h] [rbp-808h] BYREF
  _QWORD v59[12]; // [rsp+430h] [rbp-6E0h] BYREF
  _BYTE v60[104]; // [rsp+490h] [rbp-680h] BYREF
  _BYTE v61[640]; // [rsp+4F8h] [rbp-618h] BYREF
  _BYTE v62[24]; // [rsp+778h] [rbp-398h] BYREF
  _QWORD v63[12]; // [rsp+790h] [rbp-380h] BYREF
  _BYTE v64[196]; // [rsp+7F0h] [rbp-320h] BYREF
  unsigned __int8 v65; // [rsp+8B4h] [rbp-25Ch]
  unsigned __int8 v66[3]; // [rsp+8B5h] [rbp-25Bh] BYREF
  __int64 v67[9]; // [rsp+8B8h] [rbp-258h] BYREF
  _QWORD v68[4]; // [rsp+900h] [rbp-210h] BYREF
  _QWORD v69[3]; // [rsp+920h] [rbp-1F0h] BYREF
  __int64 v70; // [rsp+938h] [rbp-1D8h] BYREF
  __int64 v71; // [rsp+940h] [rbp-1D0h]
  __int64 v72; // [rsp+948h] [rbp-1C8h]
  _QWORD v73[20]; // [rsp+958h] [rbp-1B8h] BYREF
  __int64 v74; // [rsp+9F8h] [rbp-118h]
  __int64 v75; // [rsp+A00h] [rbp-110h]
  __int64 v76; // [rsp+A08h] [rbp-108h]
  __int64 v77; // [rsp+A10h] [rbp-100h]
  __int64 v78; // [rsp+A18h] [rbp-F8h]
  __int64 v79; // [rsp+A20h] [rbp-F0h]
  __int64 v80; // [rsp+A28h] [rbp-E8h]
  __int64 v81; // [rsp+A30h] [rbp-E0h]
  __int64 v82; // [rsp+A38h] [rbp-D8h]
  __int64 v83; // [rsp+A40h] [rbp-D0h]
  const __m128i *v84; // [rsp+A48h] [rbp-C8h] BYREF
  __int64 v85; // [rsp+A50h] [rbp-C0h]
  __int64 v86; // [rsp+A58h] [rbp-B8h]
  __int64 v87[12]; // [rsp+A60h] [rbp-B0h] BYREF
  _QWORD *v88; // [rsp+AC0h] [rbp-50h] BYREF
  char *v89; // [rsp+AC8h] [rbp-48h]
  char **v90; // [rsp+AD0h] [rbp-40h]
  char v91; // [rsp+ADFh] [rbp-31h] BYREF
  int v92; // [rsp+AE0h] [rbp-30h]
  char v93; // [rsp+AE6h] [rbp-2Ah] BYREF
  char v94; // [rsp+AE7h] [rbp-29h]

  v5 = a1; /*0x100275417*/
  v84 = a3; /*0x100275424*/
  v85 = a4; /*0x10027542b*/
  v6 = *(_QWORD *)(a2 + 16); /*0x100275432*/
  if ( *(_QWORD *)(v6 + 16) != 0x8000000000000000LL ) /*0x10027543e*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v60[8], v6 + 16); /*0x1002754c1*/
    *(_QWORD *)v60 = 9; /*0x1002754c6*/
    qmemcpy(a1, v60, 0x60u); /*0x1002754e0*/
    return v5; /*0x1002754e0*/
  }
  if ( a4 != 3 || a3->i16[0] ^ 0x6C61 | a3->u8[2] ^ 0x6C ) /*0x10027545f*/
  {
    v6 = a4; /*0x10027546b*/
    if ( (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::fix_requires_quiet_window::h450b49c01f430cd0( /*0x100275475*/
                            a3,
                            a4) == 2 )
    {
      *(_QWORD *)v60 = &v84; /*0x10027547e*/
      *(_QWORD *)&v60[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10027548c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &unk_1017BA1E5, v60); /*0x1002754a5*/
      *a1 = 10; /*0x1002754aa*/
      return v5; /*0x1002754b1*/
    }
  }
  v9 = *(_QWORD *)(a2 + 32); /*0x1002754e8*/
  v88 = (_QWORD *)(v9 + 16); /*0x1002754f0*/
  v86 = v9; /*0x1002754f4*/
  v10 = *(_QWORD *)(v9 + 16); /*0x1002754fb*/
  if ( !v10 ) /*0x100275502*/
    v10 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v88); /*0x100275620*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v10); /*0x100275508*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100275524*/
  {
    v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, v6, v11, 0x7FFFFFFFFFFFFFFFLL); /*0x100275628*/
    LOBYTE(v15) = v15 ^ 1; /*0x10027562d*/
    v92 = v15; /*0x10027562f*/
    if ( *(_BYTE *)(v86 + 24) ) /*0x100275639*/
      goto LABEL_11; /*0x10027563f*/
  }
  else
  {
    v92 = 0; /*0x10027552a*/
    if ( *(_BYTE *)(v86 + 24) ) /*0x100275538*/
    {
LABEL_11:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v6); /*0x100275544*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x100275553*/
      if ( !v12 ) /*0x10027555b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x100276468*/
      v14 = (unsigned __int64)v12; /*0x100275561*/
      qmemcpy(v12, "Codex router transition lock is poisoned", 40); /*0x1002755a6*/
      if ( !(_BYTE)v92 /*0x1002763f7*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               40,
                               1,
                               v13,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v86 + 24) = 1; /*0x10027640b*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v88); /*0x1002755d3*/
      *v5 = 10; /*0x1002755df*/
      v5[1] = 40; /*0x1002755e6*/
      *((_BYTE *)v5 + 16) = v14; /*0x1002755ee*/
      *((_BYTE *)v5 + 23) = HIBYTE(v14); /*0x1002755f9*/
      *(_WORD *)((char *)v5 + 21) = HIDWORD(v14) >> 8; /*0x100275601*/
      *(_DWORD *)((char *)v5 + 17) = v14 >> 8; /*0x100275606*/
      v5[3] = 40; /*0x10027560a*/
      return v5; /*0x100275612*/
    }
  }
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x10027565c*/
    v60,
    a2 + 40,
    "repairing Codex diagnostics",
    27);
  v89 = (char *)v5; /*0x100275661*/
  v16 = *(_QWORD *)v60; /*0x100275665*/
  if ( *(_QWORD *)v60 == 11 ) /*0x10027567e*/
  {
    v94 = v60[16]; /*0x100275684*/
    v90 = *(char ***)&v60[8]; /*0x100275687*/
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v58, a2); /*0x100275695*/
    codexmate_lib::core::relay::manager::RelayManager::transition_paths::h8ef4521bfd1dad53(v60); /*0x1002756a5*/
    v5 = v89; /*0x1002756aa*/
    qmemcpy(v63, &v60[8], sizeof(v63)); /*0x1002756c8*/
    if ( *(_QWORD *)v60 == 0x8000000000000000LL ) /*0x1002756ce*/
    {
      qmemcpy(v89, v63, 0x60u); /*0x1002756e3*/
      v17 = (__int64)v64; /*0x1002756e3*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v58); /*0x1002756ed*/
      if ( (v94 & 1) == 0 /*0x10027642a*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v58,
                               v64,
                               v18,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v90 + 8) = 1; /*0x10027643b*/
      }
      v19 = *v90; /*0x100275719*/
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v90); /*0x10027571c*/
      goto LABEL_82; /*0x100275721*/
    }
    memcpy(__dst, v61, sizeof(__dst)); /*0x10027576e*/
    qmemcpy(v56, v63, sizeof(v56)); /*0x100275786*/
    v55 = *(_QWORD *)v60; /*0x100275789*/
    codexmate_lib::core::relay::codex_diagnostic::run_diagnostics_with_mode::h30a2ac42c421fd0d(&v70, &v55, v58, 1); /*0x1002757aa*/
    if ( a4 == 20 ) /*0x1002757b3*/
    {
      v24 = _mm_or_si128( /*0x1002757d2*/
              _mm_xor_si128(_mm_loadu_si128(a3), (__m128i)xmmword_1015DCAE0),
              _mm_xor_si128(_mm_cvtsi32_si128(a3[1].u32[0]), (__m128i)xmmword_1015DCAD0));
      if ( _mm_testz_si128(v24, v24) ) /*0x1002757d6*/
      {
        v25 = 1; /*0x1002757dd*/
LABEL_28:
        v93 = v25; /*0x100275805*/
        v26 = codexmate_lib::core::relay::codex_diagnostic::fix_requires_quiet_window::h450b49c01f430cd0(v84, v85); /*0x10027581b*/
        goto LABEL_29; /*0x10027581b*/
      }
    }
    else if ( a4 == 3 && !(a3->i16[0] ^ 0x6C61 | a3->u8[2] ^ 0x6C) ) /*0x1002757fd*/
    {
      v47 = v71; /*0x100276090*/
      v48 = v72; /*0x100276097*/
      v49 = 104 * v72; /*0x10027609e*/
      *(_QWORD *)v60 = v71; /*0x1002760a6*/
      *(_QWORD *)&v60[8] = v71 + 104 * v72; /*0x1002760ad*/
      v93 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h1c763b1563110a9a(v60); /*0x1002760c0*/
      if ( v48 ) /*0x1002760c6*/
      {
        v50 = 0; /*0x1002760cc*/
        v5 = v89; /*0x1002760cf*/
        while ( *(_BYTE *)(v47 + v50 + 96) != 1 /*0x1002760e6*/
             || *(_QWORD *)(v47 + v50 + 40) == 2 && **(_WORD **)(v47 + v50 + 32) == 27503
             || (codexmate_lib::core::relay::codex_diagnostic::fix_requires_quiet_window::h450b49c01f430cd0(
                   *(_QWORD *)(v47 + v50 + 8),
                   *(_QWORD *)(v47 + v50 + 16))
               & 1) == 0 )
        {
          v50 += 104; /*0x1002760ec*/
          if ( v49 == v50 ) /*0x1002760f3*/
          {
            v26 = 0; /*0x1002763de*/
            goto LABEL_29; /*0x1002763e0*/
          }
        }
        v26 = 1; /*0x1002763f0*/
      }
      else
      {
        v26 = 0; /*0x1002763e5*/
        v5 = v89; /*0x1002763e7*/
      }
LABEL_29:
      v27 = v94; /*0x10027581d*/
      LOBYTE(v89) = codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151(); /*0x100275832*/
      if ( v85 == 20 /*0x100275860*/
        && (v28 = _mm_or_si128(
                    _mm_xor_si128(_mm_loadu_si128(v84), (__m128i)xmmword_1015DCAE0),
                    _mm_xor_si128(_mm_cvtsi32_si128(v84[1].u32[0]), (__m128i)xmmword_1015DCAD0)),
            _mm_testz_si128(v28, v28)) )
      {
        v37 = (_QWORD *)a2; /*0x100275d5d*/
        codexmate_lib::core::relay::manager::RelayManager::reconcile_current_mode_locked_from_with_writer_policy::hf7a5f317757b1502( /*0x100275d63*/
          v87,
          a2,
          (__int64)&unk_1015DCC50,
          16,
          0);
        v39 = 1; /*0x100275d68*/
        v30 = v87[0]; /*0x100275d6b*/
      }
      else
      {
        v68[0] = a2; /*0x100275866*/
        v68[1] = &v84; /*0x100275874*/
        v68[2] = &v55; /*0x100275882*/
        v68[3] = v58; /*0x100275890*/
        if ( (v26 & 1) != 0 ) /*0x10027589a*/
        {
          codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v63, a2); /*0x1002758aa*/
          _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178( /*0x1002758c0*/
            v60,
            &v55);
          v91 = v65 ^ 1; /*0x1002758cf*/
          v87[0] = (__int64)v68; /*0x1002758d9*/
          v87[1] = a2; /*0x1002758e0*/
          v87[2] = (__int64)v60; /*0x1002758e7*/
          v87[3] = (__int64)&v91; /*0x1002758f2*/
          v87[4] = (__int64)&v93; /*0x1002758fd*/
          v67[0] = a2; /*0x100275904*/
          v67[1] = (__int64)v60; /*0x10027590b*/
          v67[2] = (__int64)&v91; /*0x100275912*/
          codexmate_lib::core::relay::router_transition::run_with_writer_policy::h95f8fadb6cf11dd8( /*0x10027595a*/
            v73,
            (__int64)v60,
            v65 ^ 1u,
            0,
            (__int64)"diagnostic repair",
            17,
            (__int64)v87,
            v67,
            a2,
            v66);
          v29 = v73[0]; /*0x10027595f*/
          v30 = v73[1]; /*0x100275966*/
          v31 = v73[2]; /*0x10027596d*/
          v32 = v73[3]; /*0x100275974*/
          v33 = v73[4]; /*0x10027597b*/
          v34 = v73[5]; /*0x100275982*/
          v35 = v73[6]; /*0x100275989*/
          v36 = v73[7]; /*0x100275990*/
          v37 = (_QWORD *)v73[9]; /*0x10027599e*/
          v38 = v73[11]; /*0x1002759ac*/
          if ( v73[0] == 4 ) /*0x1002759be*/
          {
            v87[0] = v73[1]; /*0x1002759c4*/
            v87[1] = v73[2]; /*0x1002759cb*/
            v87[2] = v73[3]; /*0x1002759d2*/
            v87[3] = v73[4]; /*0x1002759d9*/
            v87[4] = v73[5]; /*0x1002759e0*/
            v87[5] = v73[6]; /*0x1002759e7*/
            v87[6] = v73[7]; /*0x1002759ee*/
            v87[7] = v73[8]; /*0x1002759f2*/
            v87[8] = v73[9]; /*0x1002759f6*/
            v87[9] = v73[10]; /*0x1002759fa*/
            v87[10] = v73[11]; /*0x1002759fe*/
            v87[11] = v73[12]; /*0x100275a02*/
            v27 = v94; /*0x100275a06*/
          }
          else
          {
            v76 = v73[8]; /*0x100275c7b*/
            v74 = v73[12]; /*0x100275c82*/
            v81 = v73[13]; /*0x100275c90*/
            v82 = v73[15]; /*0x100275ca5*/
            v83 = v73[16]; /*0x100275cb3*/
            v80 = v73[17]; /*0x100275cc1*/
            if ( LODWORD(v73[0]) == 3 ) /*0x100275ccc*/
            {
              v75 = 8; /*0x100275cd7*/
              v79 = v73[5]; /*0x100275cde*/
              v77 = v82; /*0x100275cec*/
              v78 = v81; /*0x100275cfa*/
              v81 = v73[14]; /*0x100275d01*/
              v34 = v73[6]; /*0x100275d08*/
              v82 = v83; /*0x100275d12*/
              v35 = v73[7]; /*0x100275d19*/
              v36 = v76; /*0x100275d1c*/
              v41 = v73[9]; /*0x100275d23*/
              v83 = v80; /*0x100275d2d*/
              v37 = (_QWORD *)v73[10]; /*0x100275d34*/
              v29 = v73[1]; /*0x100275d37*/
              v42 = 0; /*0x100275d3a*/
              v43 = 0; /*0x100275d3c*/
              v44 = v74; /*0x100275d3e*/
            }
            else
            {
              v75 = v73[18]; /*0x100275d87*/
              v79 = v73[4]; /*0x100275d95*/
              v77 = v73[14]; /*0x100275d9c*/
              v33 = v73[3]; /*0x100275da3*/
              v78 = v74; /*0x100275dad*/
              v44 = v73[11]; /*0x100275db4*/
              v32 = v73[2]; /*0x100275db7*/
              v38 = v73[10]; /*0x100275dba*/
              v31 = v73[1]; /*0x100275dbd*/
              v42 = v73[19]; /*0x100275dc0*/
              v41 = v76; /*0x100275dc3*/
              v43 = v80; /*0x100275dca*/
            }
            v73[0] = v29; /*0x100275dd1*/
            v73[1] = v31; /*0x100275dd8*/
            v73[2] = v32; /*0x100275ddf*/
            v73[3] = v33; /*0x100275de6*/
            v73[4] = v79; /*0x100275df4*/
            v73[5] = v34; /*0x100275dfb*/
            v73[6] = v35; /*0x100275e02*/
            v73[7] = v36; /*0x100275e09*/
            v73[8] = v41; /*0x100275e10*/
            v73[9] = v37; /*0x100275e17*/
            v73[10] = v38; /*0x100275e1e*/
            v73[11] = v44; /*0x100275e25*/
            v73[12] = v78; /*0x100275e33*/
            v73[13] = v81; /*0x100275e41*/
            v73[14] = v77; /*0x100275e4f*/
            v73[15] = v82; /*0x100275e64*/
            v73[16] = v83; /*0x100275e72*/
            qmemcpy(v67, &v73[8], sizeof(v67)); /*0x100275e85*/
            v87[0] = v75; /*0x100275e8f*/
            v87[2] = v43; /*0x100275e96*/
            v87[1] = v75; /*0x100275ea5*/
            v87[3] = v75 + 24 * v42; /*0x100275eac*/
            _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h171b1334bba34601( /*0x100275ec1*/
              &v67[6],
              v87);
            qmemcpy(&v87[1], v67, 0x48u); /*0x100275ed9*/
            v37 = v68; /*0x100275ed9*/
            v87[0] = 11; /*0x100275edc*/
            v27 = v94; /*0x100275eeb*/
            if ( v29 != 2 ) /*0x100275ef0*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnResult$GT$::h6e06eaf0a1fab1d9(&v73[1]); /*0x100275efc*/
            v30 = 11; /*0x100275f01*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v60); /*0x100275f0d*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v63); /*0x100275f19*/
          v39 = 1; /*0x100275f1e*/
        }
        else
        {
          v87[0] = a2; /*0x100275a10*/
          if ( v85 == 3 && !(v84->i16[0] ^ 0x6C61 | v84->u8[2] ^ 0x6C) ) /*0x100275a36*/
            codexmate_lib::core::relay::codex_diagnostic::fix_all::h6d81f868efc23743( /*0x10027613d*/
              v60,
              &v55,
              v58,
              v87,
              &unk_10195DB70,
              0);
          else
            codexmate_lib::core::relay::codex_diagnostic::fix_issue::h260abb9ade4e9823( /*0x100275a6b*/
              (unsigned int)v60,
              (unsigned int)&v55,
              (unsigned int)v58,
              (_DWORD)v84,
              v85,
              (unsigned int)v87,
              (__int64)&unk_10195DB70,
              0);
          qmemcpy(v63, &v60[8], 0x48u); /*0x100275a8a*/
          v39 = *(_QWORD *)v60 == 11; /*0x100275a91*/
          if ( *(_QWORD *)v60 != 11 ) /*0x100275a95*/
          {
            v87[11] = *(_QWORD *)&v60[88]; /*0x100275c48*/
            v87[10] = *(_QWORD *)&v60[80]; /*0x100275c4c*/
            qmemcpy(&v87[1], v63, 0x48u); /*0x100275c63*/
            v87[0] = *(_QWORD *)v60; /*0x100275c66*/
            goto LABEL_72; /*0x100275c76*/
          }
          qmemcpy(v73, v63, 0x48u); /*0x100275aae*/
          v40 = v93; /*0x100275ab1*/
          if ( v93 ) /*0x100275ab9*/
          {
            codexmate_lib::core::relay::manager::RelayManager::reconcile_current_mode_locked_from_with_writer_policy::hf7a5f317757b1502( /*0x100275ad8*/
              (__int64 *)v60,
              a2,
              (__int64)&unk_1015DCC50,
              16,
              0);
            v30 = *(_QWORD *)v60; /*0x100275add*/
            qmemcpy(v63, &v60[8], 0x48u); /*0x100275af7*/
            if ( *(_QWORD *)v60 != 11 ) /*0x100275afe*/
            {
              v87[11] = *(_QWORD *)&v60[88]; /*0x1002761ea*/
              v87[10] = *(_QWORD *)&v60[80]; /*0x1002761ee*/
              qmemcpy(&v87[1], v63, 0x48u); /*0x100276205*/
              v37 = &v63[9]; /*0x100276205*/
              v87[0] = *(_QWORD *)v60; /*0x100276208*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$::h3cf7265f554713ec(v73); /*0x100276216*/
              v27 = v94; /*0x10027621b*/
              if ( !v39 ) /*0x100276223*/
                goto LABEL_72; /*0x100276223*/
              goto LABEL_52; /*0x100276223*/
            }
            qmemcpy(v60, v63, 0x48u); /*0x100275b17*/
            v87[0] = *(_QWORD *)&v60[8]; /*0x100275b37*/
            v87[2] = *(_QWORD *)v60; /*0x100275b3e*/
            v87[1] = *(_QWORD *)&v60[8]; /*0x100275b45*/
            v87[3] = *(_QWORD *)&v60[8] + 24LL * *(_QWORD *)&v60[16]; /*0x100275b4c*/
            _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h171b1334bba34601( /*0x100275b61*/
              v73,
              v87);
            v87[0] = *(_QWORD *)&v60[32]; /*0x100275b8a*/
            v87[2] = *(_QWORD *)&v60[24]; /*0x100275b91*/
            v87[1] = *(_QWORD *)&v60[32]; /*0x100275b98*/
            v87[3] = *(_QWORD *)&v60[32] + 24LL * *(_QWORD *)&v60[40]; /*0x100275b9f*/
            _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h171b1334bba34601( /*0x100275bad*/
              &v73[3],
              v87);
            v87[0] = *(_QWORD *)&v60[56]; /*0x100275bd6*/
            v87[2] = *(_QWORD *)&v60[48]; /*0x100275bdd*/
            v87[1] = *(_QWORD *)&v60[56]; /*0x100275be4*/
            v87[3] = *(_QWORD *)&v60[56] + 24LL * *(_QWORD *)&v60[64]; /*0x100275beb*/
            _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h171b1334bba34601( /*0x100275bf9*/
              &v73[6],
              v87);
          }
          qmemcpy(&v87[1], v73, 0x48u); /*0x100275c11*/
          v37 = &v73[9]; /*0x100275c11*/
          v87[0] = 11; /*0x100275c14*/
          v30 = 11; /*0x100275c1f*/
          v39 = v40; /*0x100275c24*/
          v27 = v94; /*0x100275c27*/
          if ( !v39 ) /*0x100275c2f*/
            goto LABEL_72; /*0x100275c2f*/
        }
      }
LABEL_52:
      if ( v30 == 11 ) /*0x100275f2e*/
      {
        if ( (_BYTE)v89 ) /*0x100275f38*/
        {
          codexmate_lib::platform::process::CodexProcessLifecycle::launch::ha2d4ffcf3d332a03(v59, (__int64)v37); /*0x100275f41*/
          qmemcpy(v5, v87, 0x60u); /*0x100275f55*/
          v17 = (__int64)&v88; /*0x100275f55*/
          v45 = v90; /*0x100275f63*/
          if ( *(_DWORD *)v5 != 11 ) /*0x100275f67*/
          {
            if ( LODWORD(v59[0]) != 11 ) /*0x100275fd6*/
            {
              qmemcpy(v63, v87, sizeof(v63)); /*0x100275ff2*/
              qmemcpy(v60, v59, 0x60u); /*0x10027600b*/
              v73[0] = v63; /*0x10027600e*/
              v73[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027601c*/
              v73[2] = v60; /*0x100276023*/
              v73[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027602a*/
              v17 = (__int64)&unk_1017BA1A6; /*0x100276031*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v69, &unk_1017BA1A6, v73); /*0x100276046*/
              v5[3] = v69[2]; /*0x100276052*/
              v46 = v69[0]; /*0x100276056*/
              v5[2] = v69[1]; /*0x100276064*/
              v5[1] = v46; /*0x100276068*/
              *v5 = 10; /*0x10027606c*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v60); /*0x10027607a*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v63); /*0x100276086*/
            }
            goto LABEL_77; /*0x10027608b*/
          }
          if ( LODWORD(v59[0]) == 11 ) /*0x100275f73*/
          {
            qmemcpy(v60, &v87[1], 0x48u); /*0x100275f85*/
LABEL_74:
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v60[72], &v87[10]); /*0x100276274*/
            v51 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x100276283*/
            if ( !v51 ) /*0x10027628b*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45); /*0x100276479*/
            *(_QWORD *)((char *)v51 + 37) = 0x8895E69F94E78DA4LL; /*0x1002762a2*/
            v51[4] = 0xE78DA4E5AEBFE4BFLL; /*0x1002762b0*/
            v51[3] = 0xBDE4205450477461LL; /*0x1002762be*/
            v51[2] = 0x68432080BCE59389LL; /*0x1002762cc*/
            v51[1] = 0xE6B096E68D87E9A8LL; /*0x1002762da*/
            *v51 = 0x8AE5AA87E8B2B7E5LL; /*0x1002762e8*/
            v63[0] = 45; /*0x1002762eb*/
            v63[1] = v51; /*0x1002762f6*/
            v63[2] = 45; /*0x1002762fd*/
            alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v60[48], v63); /*0x10027630f*/
            goto LABEL_76; /*0x10027630f*/
          }
          qmemcpy(v63, &v87[1], 0x48u); /*0x100276153*/
          qmemcpy(v60, v59, 0x60u); /*0x10027616c*/
          v73[0] = v60; /*0x10027616f*/
          v73[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10027617d*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v62, &unk_1017BA152, v73); /*0x100276199*/
          alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v63[6], v62); /*0x1002761ac*/
          qmemcpy(v5 + 1, v63, 0x48u); /*0x1002761c1*/
          v17 = (__int64)&v63[9]; /*0x1002761c1*/
          *v5 = 11; /*0x1002761c4*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v60); /*0x1002761d2*/
LABEL_77:
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he2770c63d3b041ed(&v70); /*0x10027632e*/
          if ( v70 ) /*0x100276344*/
          {
            v17 = 104 * v70; /*0x10027634d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, 104 * v70, 8); /*0x100276356*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v55); /*0x100276362*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v58); /*0x10027636e*/
          if ( (v27 & 1) == 0 /*0x100276390*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
          {
            v54 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v58, v17, v52, 0x7FFFFFFFFFFFFFFFLL); /*0x100276444*/
            v45 = v90; /*0x10027644b*/
            if ( !v54 ) /*0x10027644f*/
              *((_BYTE *)v90 + 8) = 1; /*0x100276455*/
          }
          v19 = (char *)*v45; /*0x100276396*/
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v45); /*0x100276399*/
          goto LABEL_82; /*0x100276399*/
        }
        v59[0] = 11; /*0x100275f8d*/
        qmemcpy(v5, v87, 0x60u); /*0x100275fa7*/
        v17 = (__int64)&v88; /*0x100275fa7*/
        v45 = v90; /*0x100275fae*/
        if ( *(_DWORD *)v5 != 11 ) /*0x100275fb2*/
          goto LABEL_77; /*0x100275fb2*/
        qmemcpy(v60, &v87[1], 0x48u); /*0x100275fcb*/
LABEL_76:
        qmemcpy(v5 + 1, v60, 0x48u); /*0x100276314*/
        v17 = (__int64)&v60[72]; /*0x100276324*/
        *v5 = 11; /*0x100276327*/
        goto LABEL_77; /*0x100276327*/
      }
LABEL_72:
      v59[0] = 11; /*0x100276229*/
      qmemcpy(v5, v87, 0x60u); /*0x100276243*/
      v17 = (__int64)&v88; /*0x100276243*/
      v45 = v90; /*0x10027624a*/
      if ( *(_DWORD *)v5 != 11 ) /*0x10027624e*/
        goto LABEL_77; /*0x10027624e*/
      qmemcpy(v60, &v87[1], 0x48u); /*0x100276267*/
      if ( (v39 & (unsigned __int8)v89) != 0 ) /*0x10027626e*/
        goto LABEL_74; /*0x10027626e*/
      goto LABEL_76; /*0x10027626e*/
    }
    v25 = 0; /*0x100275803*/
    goto LABEL_28; /*0x100275803*/
  }
  v17 = (__int64)&v60[17]; /*0x100275726*/
  v21 = v89; /*0x10027572d*/
  v19 = v89 + 17; /*0x100275731*/
  v22 = *(_QWORD *)&v60[8]; /*0x10027573a*/
  v23 = v60[16]; /*0x10027573d*/
  memcpy(v89 + 17, &v60[17], 0x4Fu); /*0x100275740*/
  *(_QWORD *)v21 = v16; /*0x100275745*/
  v5 = v21; /*0x100275748*/
  *((_QWORD *)v21 + 1) = v22; /*0x10027574b*/
  v21[16] = v23; /*0x10027574f*/
LABEL_82:
  if ( !(_BYTE)v92 /*0x100276414*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v19,
                           v17,
                           v20,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v86 + 24) = 1; /*0x100276424*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v88); /*0x1002763c4*/
  return v5; /*0x1002763cc*/
}