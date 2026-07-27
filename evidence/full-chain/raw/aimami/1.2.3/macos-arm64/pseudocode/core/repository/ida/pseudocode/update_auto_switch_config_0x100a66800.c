// __ZN13codexmate_lib4core10repository10Repository25update_auto_switch_config @ 0x100a66800
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
unsigned __int64 __fastcall codexmate_lib::core::repository::Repository::update_auto_switch_config::h8b83d455cb5f769b(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  __int64 v9; // r12
  __int64 v10; // rbx
  int v11; // r15d
  _DWORD *v12; // rsi
  _DWORD *v13; // rdi
  __int64 i; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rdi
  _QWORD *v21; // rdx
  _DWORD *v22; // rdi
  _DWORD *v23; // rsi
  __int64 j; // rcx
  _QWORD *v26; // rdx
  int v27; // r13d
  unsigned __int8 v28; // r15
  unsigned __int64 v29; // rsi
  char v30; // bl
  int v31; // r12d
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  bool v36; // of
  __int64 v37; // r12
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  __int64 v41; // r8
  void *v42; // rax
  void *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rsi
  char v46; // bl
  void *v47; // rax
  __int64 v48; // rbx
  __int64 v49; // r15
  __int64 v50; // r14
  _QWORD *v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  _QWORD *v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // r15
  __int64 v61; // r14
  _QWORD v62[3]; // [rsp+8h] [rbp-2E8h] BYREF
  _QWORD v63[3]; // [rsp+20h] [rbp-2D0h] BYREF
  _QWORD v64[3]; // [rsp+38h] [rbp-2B8h] BYREF
  _QWORD v65[3]; // [rsp+50h] [rbp-2A0h] BYREF
  _QWORD v66[3]; // [rsp+68h] [rbp-288h] BYREF
  _QWORD v67[15]; // [rsp+80h] [rbp-270h] BYREF
  _QWORD v68[12]; // [rsp+F8h] [rbp-1F8h] BYREF
  _QWORD v69[12]; // [rsp+158h] [rbp-198h] BYREF
  _QWORD *v70; // [rsp+1B8h] [rbp-138h] BYREF
  __int64 (__fastcall *v71)(_QWORD, _QWORD); // [rsp+1C0h] [rbp-130h]
  _QWORD *v72; // [rsp+1C8h] [rbp-128h]
  __int64 (__fastcall *v73)(_QWORD, _QWORD); // [rsp+1D0h] [rbp-120h]
  _QWORD v74[11]; // [rsp+1D8h] [rbp-118h] BYREF
  __int64 v75; // [rsp+230h] [rbp-C0h]
  _QWORD v76[12]; // [rsp+238h] [rbp-B8h] BYREF
  unsigned int v77; // [rsp+29Ch] [rbp-54h] BYREF
  unsigned int v78; // [rsp+2A0h] [rbp-50h] BYREF
  int v79; // [rsp+2A4h] [rbp-4Ch]
  unsigned int v80; // [rsp+2A8h] [rbp-48h]
  _DWORD v81[2]; // [rsp+2ACh] [rbp-44h]
  unsigned int v82; // [rsp+2B4h] [rbp-3Ch]
  _QWORD *v83; // [rsp+2B8h] [rbp-38h]
  _DWORD v84[11]; // [rsp+2C4h] [rbp-2Ch] BYREF

  v80 = a6; /*0x100a66814*/
  v79 = a5; /*0x100a66818*/
  v82 = a3; /*0x100a6681f*/
  v83 = a1; /*0x100a66825*/
  std::path::Path::_join::hb1a495d4f06b13b8(v69, a2[25], a2[26], &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20); /*0x100a6684b*/
  v9 = v69[1]; /*0x100a66850*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a66875*/
    (__int64)v67,
    v69[1],
    v69[2],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v10 = v67[0]; /*0x100a6687a*/
  v11 = v67[1]; /*0x100a66881*/
  if ( v67[0] != 11 ) /*0x100a6688c*/
  {
    v12 = (_DWORD *)&v67[1] + 1; /*0x100a6688e*/
    v13 = v68; /*0x100a66895*/
    for ( i = 21; i; --i ) /*0x100a6689c*/
      *v13++ = *v12++; /*0x100a668a1*/
  }
  if ( v69[0] ) /*0x100a668ad*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v69[0], 1); /*0x100a668b7*/
  if ( (_DWORD)v10 == 11 ) /*0x100a668bf*/
  {
    v84[0] = v11; /*0x100a668c5*/
    codexmate_lib::core::repository::Repository::load_registry_for_mutation::h2b0f27ffcaeb4a0b(v67, a2[28], a2[29]); /*0x100a668e1*/
    v15 = v67[0]; /*0x100a668f0*/
    qmemcpy(v68, &v67[1], 0x58u); /*0x100a6690a*/
    if ( v67[0] != 11 ) /*0x100a66911*/
    {
      v26 = v83; /*0x100a66985*/
      qmemcpy(v83 + 2, v68, 0x58u); /*0x100a66999*/
      v26[1] = v15; /*0x100a6699c*/
      *v26 = 0x8000000000000000LL; /*0x100a669a0*/
LABEL_68:
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v84); /*0x100a67274*/
      return close_NOCANCEL(v84[0]); /*0x100a67296*/
    }
    qmemcpy(v74, v68, sizeof(v74)); /*0x100a66926*/
    if ( LOBYTE(v74[8]) == 2 ) /*0x100a66932*/
    {
      v16 = 15; /*0x100a66934*/
      v17 = 10; /*0x100a66939*/
      v18 = 0; /*0x100a6693e*/
      v19 = 0; /*0x100a66941*/
      v20 = 15; /*0x100a66944*/
      if ( (v82 & 1) == 0 ) /*0x100a6694a*/
        goto LABEL_19; /*0x100a6694a*/
    }
    else
    {
      v19 = v74[6]; /*0x100a669a8*/
      v16 = LODWORD(v74[7]); /*0x100a669af*/
      v17 = HIDWORD(v74[7]); /*0x100a669b5*/
      v81[0] = *(_DWORD *)((char *)&v74[8] + 1); /*0x100a669c1*/
      *(_DWORD *)((char *)v81 + 3) = HIDWORD(v74[8]); /*0x100a669ca*/
      v18 = LOBYTE(v74[8]); /*0x100a669cd*/
      v20 = LODWORD(v74[7]); /*0x100a669d0*/
      if ( (v82 & 1) == 0 ) /*0x100a669d6*/
        goto LABEL_19; /*0x100a669d6*/
    }
    v78 = a4; /*0x100a669d8*/
    v20 = a4; /*0x100a669dc*/
    if ( a4 >= 0x65 ) /*0x100a669e3*/
    {
      v67[0] = &v78; /*0x100a66a72*/
      v67[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x100a66a80*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v66, &unk_1017C940E, v67); /*0x100a66a9c*/
      v32 = v83; /*0x100a66aa8*/
      v83[4] = v66[2]; /*0x100a66aac*/
      v33 = v66[0]; /*0x100a66ab0*/
      v34 = v66[1]; /*0x100a66ab7*/
      goto LABEL_28; /*0x100a66abe*/
    }
LABEL_19:
    v27 = v17; /*0x100a669e9*/
    if ( (v79 & 1) == 0 || (v77 = v80, v27 = v80, v80 < 0x65) ) /*0x100a669fe*/
    {
      v28 = a7; /*0x100a66a04*/
      v29 = (unsigned int)v18; /*0x100a66a09*/
      v75 = v18; /*0x100a66a10*/
      if ( a7 != 2 ) /*0x100a66a17*/
      {
        if ( a7 != (_BYTE)v18 ) /*0x100a66a1c*/
        {
          v82 = v20; /*0x100a66b32*/
          v29 = (unsigned __int64)a2; /*0x100a66b40*/
          codexmate_lib::core::repository::Repository::restore_auto_switch_service::h4929bd797d587a0a( /*0x100a66b43*/
            v76,
            a2,
            a7,
            v16,
            v18);
          if ( LODWORD(v76[0]) != 11 ) /*0x100a66b4f*/
          {
            qmemcpy(v69, v76, sizeof(v69)); /*0x100a66f45*/
            codexmate_lib::core::repository::Repository::restore_auto_switch_service::h4929bd797d587a0a( /*0x100a66f59*/
              v68,
              a2,
              (unsigned __int8)v75,
              0,
              v35);
            if ( LODWORD(v68[0]) == 11 ) /*0x100a66f65*/
            {
LABEL_57:
              v52 = v83; /*0x100a67023*/
              v83[1] = v69[0]; /*0x100a6702e*/
              v53 = v76[2]; /*0x100a67039*/
              v52[2] = v76[1]; /*0x100a67040*/
              v52[3] = v53; /*0x100a67044*/
              v52[4] = v76[3]; /*0x100a6704f*/
              v54 = v76[5]; /*0x100a6705a*/
              v52[5] = v76[4]; /*0x100a67061*/
              v52[6] = v54; /*0x100a67065*/
              v52[7] = v76[6]; /*0x100a67070*/
              v52[8] = v76[7]; /*0x100a67078*/
              v52[9] = v76[8]; /*0x100a67080*/
              v52[10] = v76[9]; /*0x100a67088*/
              v52[11] = v76[10]; /*0x100a67090*/
              v52[12] = v76[11]; /*0x100a67098*/
              *v52 = 0x8000000000000000LL; /*0x100a6709c*/
              goto LABEL_60; /*0x100a670a9*/
            }
            qmemcpy(v67, v68, 0x60u); /*0x100a670bd*/
            v70 = v69; /*0x100a670c0*/
            v71 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a670ce*/
            v72 = v67; /*0x100a670d5*/
            v73 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a670dc*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_1017C9458, &v70); /*0x100a670f8*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v67); /*0x100a67104*/
            v55 = v83; /*0x100a67109*/
            v83[1] = 10; /*0x100a6710d*/
            v56 = v64[1]; /*0x100a6711c*/
            v55[2] = v64[0]; /*0x100a67123*/
            v55[3] = v56; /*0x100a67127*/
            v55[4] = v64[2]; /*0x100a67132*/
            *v55 = 0x8000000000000000LL; /*0x100a67140*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v69); /*0x100a6714a*/
LABEL_60:
            if ( v74[3] != 0x8000000000000000LL && v74[3] ) /*0x100a6720b*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[4], v74[3], 1); /*0x100a67219*/
            v59 = v74[1]; /*0x100a6721e*/
            v60 = v74[2]; /*0x100a67225*/
            if ( v74[2] ) /*0x100a6722f*/
            {
              v61 = v74[1]; /*0x100a67231*/
              do /*0x100a67252*/
              {
                core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v61); /*0x100a67243*/
                v61 += 424; /*0x100a67248*/
                --v60; /*0x100a6724f*/
              }
              while ( v60 ); /*0x100a67252*/
            }
            if ( v74[0] ) /*0x100a6725e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 424LL * v74[0], 8); /*0x100a6726f*/
            goto LABEL_68; /*0x100a6726f*/
          }
          v30 = 0; /*0x100a66b55*/
          v20 = v82; /*0x100a66b57*/
LABEL_31:
          v36 = __OFADD__(1, v19); /*0x100a66b5a*/
          v37 = v19 + 1; /*0x100a66b5a*/
          v38 = 0x7FFFFFFFFFFFFFFFLL; /*0x100a66b5d*/
          if ( !v36 ) /*0x100a66b67*/
            v38 = v37; /*0x100a66b67*/
          HIDWORD(v74[8]) = *(_DWORD *)((char *)v81 + 3); /*0x100a66b71*/
          *(_DWORD *)((char *)&v74[8] + 1) = v81[0]; /*0x100a66b77*/
          v74[6] = v38; /*0x100a66b7d*/
          v31 = v20; /*0x100a66b84*/
          v74[7] = __PAIR64__(v27, v20); /*0x100a66b87*/
          LOBYTE(v74[8]) = v28; /*0x100a66b94*/
          v68[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v20, v29); /*0x100a66ba0*/
          LODWORD(v68[1]) = v39; /*0x100a66ba7*/
          std::time::SystemTime::duration_since::had059553cab94f96(v67, v68, 0, 0); /*0x100a66bbf*/
          if ( LOBYTE(v67[0]) ) /*0x100a66bcb*/
            v40 = 0; /*0x100a66bd6*/
          else
            v40 = v67[1]; /*0x100a66bcd*/
          v74[9] = v40; /*0x100a66bd8*/
          codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f(v76, a2, v74, 1); /*0x100a66bf5*/
          if ( LODWORD(v76[0]) == 11 ) /*0x100a66c01*/
          {
            v76[0] = 0; /*0x100a66c07*/
            v76[1] = 8; /*0x100a66c12*/
            v76[2] = 0; /*0x100a66c1d*/
            codexmate_lib::core::repository::Repository::clear_auto_switch_transient_state::h6b182342bc1d4f08(v68, a2); /*0x100a66c32*/
            if ( LODWORD(v68[0]) != 11 ) /*0x100a66c3e*/
            {
              qmemcpy(v67, v68, 0x60u); /*0x100a66c57*/
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v67[12], v69); /*0x100a66c5a*/
              v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x100a66c69*/
              if ( !v42 ) /*0x100a66c71*/
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x100a672b2*/
              v43 = v42; /*0x100a66c77*/
              qmemcpy(v42, "AUTO_SWITCH_TRANSIENT_CLEANUP_FAILED", 36); /*0x100a66cae*/
              v69[0] = v67; /*0x100a66cbf*/
              v69[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a66ccd*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v62, &unk_1017C9519, v69); /*0x100a66ce9*/
              v69[0] = 36; /*0x100a66cee*/
              v69[1] = v43; /*0x100a66cf9*/
              v69[2] = 36; /*0x100a66d00*/
              v69[3] = v62[0]; /*0x100a66d19*/
              v69[4] = v62[1]; /*0x100a66d20*/
              v69[5] = v62[2]; /*0x100a66d2e*/
              alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hbc0858bc68482e3a(v76, v69); /*0x100a66d43*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v67); /*0x100a66d4f*/
            }
            goto LABEL_40; /*0x100a66d4f*/
          }
          qmemcpy(v69, v76, sizeof(v69)); /*0x100a66ef8*/
          if ( v30 ) /*0x100a66efd*/
          {
            v51 = v83; /*0x100a66f03*/
            qmemcpy(v83 + 1, v76, 0x60u); /*0x100a66f17*/
            *v51 = 0x8000000000000000LL; /*0x100a66f24*/
            goto LABEL_60; /*0x100a66f27*/
          }
          codexmate_lib::core::repository::Repository::restore_auto_switch_service::h4929bd797d587a0a( /*0x100a67007*/
            v68,
            a2,
            (unsigned __int8)v75,
            0,
            v41);
          if ( LODWORD(v68[0]) == 11 ) /*0x100a6701d*/
            goto LABEL_57; /*0x100a6701d*/
          qmemcpy(v67, v68, 0x60u); /*0x100a6716a*/
          v70 = v69; /*0x100a6716d*/
          v71 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a6717b*/
          v72 = v67; /*0x100a67182*/
          v73 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a67189*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v63, &unk_1017C94B8, &v70); /*0x100a671a5*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v67); /*0x100a671b1*/
          v57 = v83; /*0x100a671b6*/
          v83[1] = 10; /*0x100a671ba*/
          v58 = v63[1]; /*0x100a671c9*/
          v57[2] = v63[0]; /*0x100a671d0*/
          v57[3] = v58; /*0x100a671d4*/
          v57[4] = v63[2]; /*0x100a671df*/
          *v57 = 0x8000000000000000LL; /*0x100a671e3*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v69); /*0x100a671ed*/
          goto LABEL_60; /*0x100a671ed*/
        }
        v29 = a7; /*0x100a66a22*/
      }
      v30 = 1; /*0x100a66a2a*/
      v28 = v29; /*0x100a66a2e*/
      if ( !((unsigned int)v20 ^ (unsigned int)v16 | v27 ^ v17) ) /*0x100a66a2c*/
      {
        v76[0] = 0; /*0x100a66a37*/
        v76[1] = 8; /*0x100a66a42*/
        v76[2] = 0; /*0x100a66a4d*/
        v31 = v74[7]; /*0x100a66a58*/
        v27 = HIDWORD(v74[7]); /*0x100a66a5f*/
        v28 = v74[8]; /*0x100a66a66*/
LABEL_40:
        v44 = a2[79]; /*0x100a66d54*/
        v45 = a2[80]; /*0x100a66d5b*/
        v46 = codexmate_lib::platform::daemon::check_daemon_state::hcbc03433a17a641c(v44, v45); /*0x100a66d67*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, v45); /*0x100a66d69*/
        v47 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x100a66d78*/
        if ( !v47 ) /*0x100a66d80*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x100a672a1*/
        if ( v28 == 2 ) /*0x100a66d8f*/
        {
          v27 = 10; /*0x100a66d8f*/
          v31 = 15; /*0x100a66d98*/
        }
        qmemcpy(v47, "dev.aimami.auto-switch", 22); /*0x100a66dc6*/
        v68[0] = 22; /*0x100a66dc9*/
        v68[1] = v47; /*0x100a66dd4*/
        v68[2] = 22; /*0x100a66ddb*/
        v68[3] = __PAIR64__(v27, v31); /*0x100a66de6*/
        LOBYTE(v68[4]) = v28 & 1; /*0x100a66df4*/
        BYTE1(v68[4]) = v46; /*0x100a66dfb*/
        v69[2] = v76[2]; /*0x100a66e08*/
        v69[1] = v76[1]; /*0x100a66e1d*/
        v69[0] = v76[0]; /*0x100a66e24*/
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::he5e6cf309da90506(v67, v68, v69); /*0x100a66e40*/
        qmemcpy(v83, v67, 0x78u); /*0x100a66e55*/
        if ( v74[3] != 0x8000000000000000LL && v74[3] ) /*0x100a66e71*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74[4], v74[3], 1); /*0x100a66e7f*/
        v48 = v74[1]; /*0x100a66e84*/
        v49 = v74[2]; /*0x100a66e8b*/
        if ( v74[2] ) /*0x100a66e95*/
        {
          v50 = v74[1]; /*0x100a66e97*/
          do /*0x100a66eb2*/
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v50); /*0x100a66ea3*/
            v50 += 424; /*0x100a66ea8*/
            --v49; /*0x100a66eaf*/
          }
          while ( v49 ); /*0x100a66eb2*/
        }
        if ( v74[0] ) /*0x100a66ebe*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 424LL * v74[0], 8); /*0x100a66ecf*/
        _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v84); /*0x100a66ed8*/
        return close_NOCANCEL(v84[0]); /*0x100a66edd*/
      }
      goto LABEL_31; /*0x100a66a31*/
    }
    v67[0] = &v77; /*0x100a66ac4*/
    v67[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x100a66ad2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v65, &unk_1017C9431, v67); /*0x100a66aee*/
    v32 = v83; /*0x100a66afa*/
    v83[4] = v65[2]; /*0x100a66afe*/
    v33 = v65[0]; /*0x100a66b02*/
    v34 = v65[1]; /*0x100a66b09*/
LABEL_28:
    v32[3] = v34; /*0x100a66b10*/
    v32[2] = v33; /*0x100a66b14*/
    v32[1] = 9; /*0x100a66b18*/
    *v32 = 0x8000000000000000LL; /*0x100a66b2a*/
    goto LABEL_60; /*0x100a66b2d*/
  }
  v21 = v83; /*0x100a66955*/
  v22 = (_DWORD *)v83 + 5; /*0x100a66959*/
  v23 = v68; /*0x100a6695d*/
  for ( j = 21; j; --j ) /*0x100a66964*/
    *v22++ = *v23++; /*0x100a66969*/
  v21[1] = v10; /*0x100a6696b*/
  *((_DWORD *)v21 + 4) = v11; /*0x100a6696f*/
  *v21 = 0x8000000000000000LL; /*0x100a6697d*/
  return 0x8000000000000000LL; /*0x100a67285*/
}