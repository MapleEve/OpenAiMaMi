// __ZN13codexmate_lib8platform7process21CodexProcessLifecycle18prepare_transition @ 0x10035fa10
__int64 __fastcall codexmate_lib::platform::process::CodexProcessLifecycle::prepare_transition::h285780eb18c8b906(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // r14
  __int64 **v9; // r13
  __int64 v10; // rsi
  __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // rsi
  _QWORD *v23; // rsi
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // r14
  __int64 *v40; // r13
  __int64 v41; // r12
  __int64 v42; // r15
  unsigned __int64 v43; // rbx
  __int64 v44; // rbx
  __int64 v45; // r14
  __int64 v46; // r12
  __int64 v47; // rsi
  __int64 v48; // rdx
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // r14
  __int64 v51; // rax
  unsigned int v52; // edx
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r13
  __int64 v58; // rax
  unsigned int v59; // edx
  _QWORD *v60; // r13
  unsigned __int64 v61; // r12
  __int64 v62; // r14
  __int64 v63; // r15
  _QWORD *v64; // rbx
  __int64 v65; // rsi
  __int64 *v66; // rsi
  __int64 v67; // rcx
  _QWORD *v68; // rcx
  __int64 v69; // r12
  __int64 v70; // r14
  char *v71; // r15
  _QWORD *v72; // rbx
  __int64 v73; // rsi
  __int64 *v74; // rdx
  _QWORD *v75; // rbx
  __int64 v76; // rsi
  _QWORD v77[3]; // [rsp+8h] [rbp-288h] BYREF
  _QWORD v78[3]; // [rsp+20h] [rbp-270h] BYREF
  _QWORD v79[12]; // [rsp+38h] [rbp-258h] BYREF
  _BYTE v80[104]; // [rsp+98h] [rbp-1F8h] BYREF
  _QWORD *v81; // [rsp+100h] [rbp-190h] BYREF
  char *v82; // [rsp+108h] [rbp-188h]
  __int64 v83; // [rsp+110h] [rbp-180h]
  __int64 v84; // [rsp+118h] [rbp-178h]
  _QWORD *v85; // [rsp+120h] [rbp-170h]
  __int64 v86; // [rsp+128h] [rbp-168h]
  __int64 v87; // [rsp+130h] [rbp-160h]
  __int64 v88; // [rsp+138h] [rbp-158h] BYREF
  __int64 v89; // [rsp+140h] [rbp-150h]
  __int64 v90; // [rsp+148h] [rbp-148h]
  _QWORD *v91; // [rsp+150h] [rbp-140h]
  __int64 v92; // [rsp+158h] [rbp-138h]
  _QWORD *v93; // [rsp+160h] [rbp-130h]
  _QWORD *v94; // [rsp+168h] [rbp-128h]
  __int64 v95; // [rsp+170h] [rbp-120h]
  __int64 v96; // [rsp+178h] [rbp-118h]
  __int64 v97; // [rsp+180h] [rbp-110h] BYREF
  __int64 v98; // [rsp+188h] [rbp-108h]
  __int64 v99; // [rsp+190h] [rbp-100h]
  __int64 v100; // [rsp+198h] [rbp-F8h]
  _QWORD *v101; // [rsp+1A0h] [rbp-F0h]
  __int64 v102; // [rsp+1A8h] [rbp-E8h]
  __int64 v103; // [rsp+1B0h] [rbp-E0h]
  __int64 v104; // [rsp+1B8h] [rbp-D8h]
  char *v105; // [rsp+1C0h] [rbp-D0h]
  _QWORD v106[12]; // [rsp+1C8h] [rbp-C8h] BYREF
  __int64 *v107; // [rsp+228h] [rbp-68h] BYREF
  __int64 v108; // [rsp+230h] [rbp-60h] BYREF
  __int64 v109; // [rsp+238h] [rbp-58h]
  __int64 v110; // [rsp+240h] [rbp-50h]
  __int64 v111; // [rsp+248h] [rbp-48h]
  _QWORD *v112; // [rsp+250h] [rbp-40h]
  __int64 v113; // [rsp+258h] [rbp-38h]
  __int64 v114; // [rsp+260h] [rbp-30h]

  v4 = a3; /*0x10035fa24*/
  v5 = a2; /*0x10035fa27*/
  v107 = a1; /*0x10035fa2a*/
  LODWORD(v89) = a4; /*0x10035fa2e*/
  if ( !a4 ) /*0x10035fa36*/
    goto LABEL_17; /*0x10035fa36*/
  codexmate_lib::platform::process::collect_external_codex_writers::h013c99e264542e67(v79); /*0x10035fa43*/
  result = v79[0]; /*0x10035fa48*/
  v106[0] = v79[1]; /*0x10035fa56*/
  v106[1] = v79[2]; /*0x10035fa64*/
  v106[2] = v79[3]; /*0x10035fa72*/
  if ( v79[0] != 11 ) /*0x10035fa7d*/
  {
    v11 = v107; /*0x10035fb1d*/
    v107[11] = v79[11]; /*0x10035fb21*/
    v11[10] = v79[10]; /*0x10035fb2c*/
    v11[9] = v79[9]; /*0x10035fb37*/
    v11[8] = v79[8]; /*0x10035fb42*/
    v11[7] = v79[7]; /*0x10035fb4d*/
    v11[6] = v79[6]; /*0x10035fb58*/
    v12 = v79[4]; /*0x10035fb5c*/
    v11[5] = v79[5]; /*0x10035fb6a*/
    v11[4] = v12; /*0x10035fb6e*/
    v11[3] = v106[2]; /*0x10035fb79*/
    v13 = v106[0]; /*0x10035fb7d*/
    v11[2] = v106[1]; /*0x10035fb8b*/
    v11[1] = v13; /*0x10035fb8f*/
    *v11 = result; /*0x10035fb93*/
    return result; /*0x10035fb96*/
  }
  v7 = (__int64 *)v106[1]; /*0x10035fa8a*/
  v108 = v106[0]; /*0x10035fa91*/
  v109 = v106[1]; /*0x10035fa95*/
  v8 = v106[2]; /*0x10035fa99*/
  v110 = v106[2]; /*0x10035faa0*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h6a3eb4fa4cee287e( /*0x10035fab8*/
    v106,
    v106[1],
    v106[1] + 32LL * v106[2]);
  a1 = v79; /*0x10035fabd*/
  result = codexmate_lib::platform::process::reject_external_codex_writers::h04ed4542d20e0d8e(v79, v106); /*0x10035facb*/
  if ( LODWORD(v79[0]) == 11 ) /*0x10035fad7*/
  {
    if ( v8 ) /*0x10035fae0*/
    {
      v9 = (__int64 **)(v7 + 1); /*0x10035fae6*/
      do /*0x10035faf7*/
      {
        v10 = (__int64)*(v9 - 1); /*0x10035fafd*/
        if ( v10 ) /*0x10035fb04*/
        {
          a1 = *v9; /*0x10035fb06*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1); /*0x10035fb0f*/
        }
        v9 += 4; /*0x10035faf0*/
        --v8; /*0x10035faf4*/
      }
      while ( v8 ); /*0x10035faf7*/
    }
    a2 = v108; /*0x10035fbe5*/
    if ( v108 ) /*0x10035fbec*/
    {
      a2 = 32 * v108; /*0x10035fbee*/
      a1 = v7; /*0x10035fbf7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 32 * v108, 8); /*0x10035fbfa*/
    }
LABEL_17:
    if ( !(unsigned __int8)codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151() ) /*0x10035fc06*/
    {
LABEL_68:
      if ( !(_BYTE)v89 ) /*0x100360340*/
        return codexmate_lib::platform::process::kill_codex_processes_until_clear::h68cdb9b9f156eb27(v107); /*0x1003605af*/
      v50 = 0x8000000000000000LL; /*0x100360346*/
      v51 = std::time::Instant::now::hda76af2c3a449055(a1, a2, v16, v17, v18); /*0x100360350*/
      v104 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x100360366*/
               v51,
               v52,
               3,
               0);
      LODWORD(v105) = v53; /*0x10036036d*/
      while ( 1 ) /*0x100360394*/
      {
        codexmate_lib::platform::process::list_codex_processes_matching::h0a0e1238c317b39e(v79); /*0x100360394*/
        v54 = v79[0]; /*0x100360399*/
        if ( v79[0] != 11 ) /*0x1003603b9*/
          break; /*0x1003603b9*/
        v108 = v79[2]; /*0x1003603c6*/
        v109 = v79[2]; /*0x1003603ca*/
        v110 = v79[1]; /*0x1003603ce*/
        v111 = v79[2] + 32LL * v79[3]; /*0x1003603d2*/
        alloc::vec::in_place_collect::from_iter_in_place::hd366b5e978c41658(&v106[1], &v108); /*0x1003603dd*/
        v57 = v106[3]; /*0x1003603e2*/
        v90 = v106[1]; /*0x1003603ed*/
        v91 = (_QWORD *)v106[2]; /*0x1003603f4*/
        v92 = v106[3]; /*0x1003603fb*/
        if ( !v106[3] ) /*0x100360405*/
        {
          *v107 = 11; /*0x1003606cd*/
          if ( v90 ) /*0x1003606de*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, 32 * v90, 8); /*0x1003606f0*/
          goto LABEL_94; /*0x1003606f0*/
        }
        v58 = std::time::Instant::now::hda76af2c3a449055(&v106[1], &v108, v55, v106[2], v56); /*0x10036040b*/
        if ( v58 == v104 ) /*0x10036041a*/
        {
          if ( v59 >= (unsigned int)v105 ) /*0x100360422*/
            goto LABEL_96; /*0x100360422*/
        }
        else if ( v58 >= v104 ) /*0x100360433*/
        {
LABEL_96:
          v104 = (__int64)v91; /*0x100360716*/
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc22e68783ab88be2( /*0x100360735*/
            &v81,
            v91,
            &v91[4 * v57]);
          v69 = v83; /*0x100360741*/
          v105 = v82; /*0x10036075f*/
          alloc::str::join_generic_copy::heca7a5e86402c6b6(v79, v82, v83, " | ps-ocodexmate_lib::platform::process", 3); /*0x100360769*/
          v99 = v79[2]; /*0x100360775*/
          v98 = v79[1]; /*0x10036078a*/
          v97 = v79[0]; /*0x100360791*/
          if ( v50 == 0x8000000000000000LL ) /*0x1003607ac*/
          {
            v108 = 0; /*0x1003607ae*/
            v109 = 1; /*0x1003607b6*/
            v110 = 0; /*0x1003607be*/
          }
          else
          {
            v79[1] = v4; /*0x10036080e*/
            v79[2] = v89; /*0x100360815*/
            v79[0] = v50; /*0x10036081c*/
            v108 = (__int64)v79; /*0x100360823*/
            v109 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10036082e*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v106, &unk_1017BD380, &v108); /*0x100360844*/
            if ( v79[0] ) /*0x100360853*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[1], v79[0], 1); /*0x100360861*/
            v108 = v106[0]; /*0x100360874*/
            v109 = v106[1]; /*0x100360878*/
            v110 = v106[2]; /*0x100360883*/
          }
          v79[0] = &v97; /*0x10036088e*/
          v79[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10036089c*/
          v79[2] = &v108; /*0x1003608a7*/
          v79[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003608ae*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v106, &unk_1017BD3A9, v79); /*0x1003608ca*/
          if ( v108 ) /*0x1003608d6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v108, 1); /*0x1003608e1*/
          v70 = v104; /*0x1003608f0*/
          v71 = v105; /*0x1003608f7*/
          if ( v97 ) /*0x1003608fe*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, v97, 1); /*0x10036090c*/
          if ( v69 ) /*0x100360914*/
          {
            v72 = v71 + 8; /*0x100360916*/
            do /*0x100360927*/
            {
              v73 = *(v72 - 1); /*0x100360929*/
              if ( v73 ) /*0x100360930*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v72, v73, 1); /*0x10036093a*/
              v72 += 3; /*0x100360920*/
              --v69; /*0x100360924*/
            }
            while ( v69 ); /*0x100360927*/
          }
          if ( v81 ) /*0x10036094b*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, 24LL * (_QWORD)v81, 8); /*0x10036095d*/
          v74 = v107; /*0x100360969*/
          v107[3] = v106[2]; /*0x10036096d*/
          result = v106[0]; /*0x100360971*/
          v74[2] = v106[1]; /*0x10036097f*/
          v74[1] = result; /*0x100360983*/
          *v74 = 10; /*0x100360987*/
          v75 = (_QWORD *)(v70 + 16); /*0x10036098e*/
          do /*0x1003609a7*/
          {
            v76 = *(v75 - 1); /*0x1003609a9*/
            if ( v76 ) /*0x1003609b0*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v75, v76, 1); /*0x1003609ba*/
            v75 += 4; /*0x1003609a0*/
            --v57; /*0x1003609a4*/
          }
          while ( v57 ); /*0x1003609a7*/
          if ( v90 ) /*0x1003609cb*/
          {
            v47 = 32 * v90; /*0x1003609cd*/
            v48 = 8; /*0x1003609d1*/
            v49 = v70; /*0x1003609d6*/
            return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v47, v48); /*0x1003609d6*/
          }
          return result; /*0x1003609cb*/
        }
        codexmate_lib::platform::process::force_kill_targets::hd831432c308f755c(v106, (__int64)v91, v57); /*0x10036044a*/
        if ( v106[0] == 11 ) /*0x10036045a*/
        {
          v60 = (_QWORD *)v4; /*0x10036045c*/
          v61 = 0x8000000000000000LL; /*0x10036045f*/
        }
        else
        {
          qmemcpy(&v79[1], &v106[1], 0x58u); /*0x100360483*/
          v79[0] = v106[0]; /*0x100360486*/
          v108 = 0; /*0x10036048d*/
          v109 = 1; /*0x100360495*/
          v110 = 0; /*0x10036049d*/
          v106[2] = 1610612768; /*0x1003604a5*/
          v106[0] = &v108; /*0x1003604b4*/
          v106[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003604c2*/
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1003604d7*/
                                  v79,
                                  v106) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100360a11*/
              &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
              55,
              &v97,
              &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
              &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
          v61 = v108; /*0x1003604e4*/
          v60 = (_QWORD *)v109; /*0x1003604e8*/
          v89 = v110; /*0x1003604f0*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v79); /*0x1003604fe*/
        }
        if ( 2 * v50 ) /*0x100360503*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v50, 1); /*0x10036051b*/
        std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 300000000); /*0x10036052d*/
        v62 = (__int64)v91; /*0x100360532*/
        v63 = v92; /*0x100360539*/
        if ( v92 ) /*0x100360543*/
        {
          v64 = v91 + 2; /*0x100360545*/
          do /*0x100360557*/
          {
            v65 = *(v64 - 1); /*0x100360559*/
            if ( v65 ) /*0x100360560*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v64, v65, 1); /*0x10036056a*/
            v64 += 4; /*0x100360550*/
            --v63; /*0x100360554*/
          }
          while ( v63 ); /*0x100360557*/
        }
        if ( v90 ) /*0x10036058a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, 32 * v90, 8); /*0x10036059c*/
        v50 = v61; /*0x100360380*/
        v4 = (unsigned __int64)v60; /*0x100360383*/
      }
      v106[11] = v79[11]; /*0x1003605bb*/
      v106[10] = v79[10]; /*0x1003605c6*/
      v106[9] = v79[9]; /*0x1003605d1*/
      v106[8] = v79[8]; /*0x1003605dc*/
      v106[7] = v79[7]; /*0x1003605ea*/
      v106[6] = v79[6]; /*0x1003605f8*/
      v106[5] = v79[5]; /*0x10036060d*/
      v106[4] = v79[4]; /*0x100360614*/
      v106[1] = v79[1]; /*0x10036061b*/
      v106[2] = v79[2]; /*0x100360622*/
      v106[3] = v79[3]; /*0x100360629*/
      v83 = v79[3]; /*0x100360634*/
      v82 = (char *)v79[2]; /*0x100360642*/
      v81 = (_QWORD *)v79[1]; /*0x100360649*/
      v66 = v107; /*0x100360654*/
      v107[11] = v79[11]; /*0x100360658*/
      v66[10] = v106[10]; /*0x100360660*/
      v66[9] = v106[9]; /*0x100360668*/
      v66[8] = v106[8]; /*0x100360673*/
      v66[7] = v106[7]; /*0x10036067e*/
      v66[6] = v106[6]; /*0x100360689*/
      v67 = v106[4]; /*0x10036068d*/
      v66[5] = v106[5]; /*0x10036069b*/
      v66[4] = v67; /*0x10036069f*/
      v66[3] = v83; /*0x1003606aa*/
      v68 = v81; /*0x1003606ae*/
      v66[2] = (__int64)v82; /*0x1003606bc*/
      v66[1] = (__int64)v68; /*0x1003606c0*/
      *v66 = v54; /*0x1003606c4*/
LABEL_94:
      result = 2 * v50; /*0x1003606f5*/
      if ( !(2 * v50) ) /*0x100360700*/
        return result; /*0x100360700*/
      v48 = 1; /*0x100360706*/
      v49 = v4; /*0x10036070b*/
      v47 = v50; /*0x10036070e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v47, v48); /*0x100360711*/
    }
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379(v79, &unk_1015F7BF8, 18); /*0x10035fc22*/
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v79, &unk_1015F7C0A, 2); /*0x10035fc36*/
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x10035fc4e*/
      v79,
      "if application id \"com.openai.codex\" is running then\n    tell application id \"com.openai.codex\" to quit\nend if/codex framework.framework//contents/resources/native/bare-modifier-monitor",
      110);
    std::process::Command::output::h737eedd4de2ee22e(&v108, v79); /*0x10035fc61*/
    if ( __OFSUB__(0, v108) ) /*0x10035fc68*/
    {
      v88 = v109; /*0x10035fc76*/
      v106[0] = &v88; /*0x10035fc84*/
      v106[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035fc92*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v77, &unk_1017BD10E, v106); /*0x10035fcae*/
      v106[0] = v77[0]; /*0x10035fcc1*/
      v106[1] = v77[1]; /*0x10035fcc8*/
      v106[2] = v77[2]; /*0x10035fcd6*/
      if ( (v88 & 3) == 1 ) /*0x10035fcec*/
      {
        v19 = v88 - 1; /*0x10035fcee*/
        v20 = *(_QWORD *)(v88 - 1); /*0x10035fcf2*/
        v21 = *(_QWORD *)(v88 + 7); /*0x10035fcf6*/
        if ( *(_QWORD *)v21 ) /*0x10035fcfa*/
          (*(void (__fastcall **)(__int64))v21)(v20); /*0x10035fd06*/
        v22 = *(_QWORD *)(v21 + 8); /*0x10035fd08*/
        if ( v22 ) /*0x10035fd0f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x10035fd18*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24, 8); /*0x10035fd2a*/
      }
      v81 = (_QWORD *)v106[0]; /*0x10035fd3d*/
      v82 = (char *)v106[1]; /*0x10035fd44*/
      v83 = v106[2]; /*0x10035fd52*/
      v23 = (_QWORD *)v106[3]; /*0x10035fd59*/
      v84 = v106[3]; /*0x10035fd60*/
      v85 = (_QWORD *)v106[4]; /*0x10035fd6e*/
      v86 = v106[5]; /*0x10035fd7c*/
      v87 = v106[6]; /*0x10035fd8a*/
      v103 = v106[6]; /*0x10035fd91*/
      v102 = v106[5]; /*0x10035fd98*/
      v101 = (_QWORD *)v106[4]; /*0x10035fd9f*/
      v100 = v106[3]; /*0x10035fda6*/
      v99 = v106[2]; /*0x10035fdad*/
      v98 = v106[1]; /*0x10035fdb4*/
      v97 = v106[0]; /*0x10035fdbb*/
      v114 = v106[6]; /*0x10035fdc9*/
      v113 = v106[5]; /*0x10035fdd4*/
      v112 = (_QWORD *)v106[4]; /*0x10035fddf*/
      v111 = v106[3]; /*0x10035fdea*/
      v110 = v106[2]; /*0x10035fdf5*/
      v109 = v106[1]; /*0x10035fe07*/
      v108 = v106[0]; /*0x10035fe0b*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v79); /*0x10035fe16*/
    }
    else
    {
      v87 = v114; /*0x10035fe24*/
      v86 = v113; /*0x10035fe2f*/
      v85 = v112; /*0x10035fe3a*/
      v84 = v111; /*0x10035fe45*/
      v97 = v108; /*0x10035fe58*/
      v98 = v109; /*0x10035fe5f*/
      v99 = v110; /*0x10035fe66*/
      v100 = v111; /*0x10035fe6d*/
      v101 = v112; /*0x10035fe74*/
      v102 = v113; /*0x10035fe7b*/
      v103 = v114; /*0x10035fe82*/
      v96 = v114; /*0x10035fe90*/
      v95 = v113; /*0x10035fe9e*/
      v94 = v112; /*0x10035feac*/
      v93 = (_QWORD *)v111; /*0x10035feba*/
      v92 = v110; /*0x10035fec8*/
      v91 = (_QWORD *)v109; /*0x10035fedd*/
      v90 = v108; /*0x10035fee4*/
      v24 = v79; /*0x10035feeb*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v79); /*0x10035fef2*/
      if ( !(_DWORD)v96 ) /*0x10035fefe*/
      {
        if ( v90 ) /*0x1003607d5*/
        {
          v24 = v91; /*0x1003607d7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v90, 1); /*0x1003607e3*/
        }
        v23 = v93; /*0x1003607e8*/
        if ( v93 ) /*0x1003607f2*/
        {
          v24 = v94; /*0x1003607f8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1); /*0x100360804*/
        }
        goto LABEL_36; /*0x100360809*/
      }
      v28 = v94; /*0x10035ff04*/
      alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v79, v94, v95); /*0x10035ff1c*/
      v29 = v79[1]; /*0x10035ff21*/
      v108 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v79[1], v79[2]); /*0x10035ff37*/
      v109 = v30; /*0x10035ff3b*/
      v106[0] = &v108; /*0x10035ff3f*/
      v106[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10035ff4d*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, &unk_1017BD10E, v106); /*0x10035ff69*/
      if ( 2LL * v79[0] ) /*0x10035ff75*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v79[0], 1); /*0x10035ff8a*/
      v108 = v78[0]; /*0x10035ff9d*/
      v109 = v78[1]; /*0x10035ffa1*/
      v110 = v78[2]; /*0x10035ffac*/
      if ( v90 ) /*0x10035ffba*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v90, 1); /*0x10035ffc8*/
      v23 = v93; /*0x10035ffcd*/
      if ( v93 ) /*0x10035ffd7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v93, 1); /*0x10035ffe1*/
    }
    v106[0] = 10; /*0x10035ffe6*/
    v106[1] = v108; /*0x10035fff9*/
    v106[2] = v109; /*0x100360000*/
    v106[3] = v110; /*0x10036000b*/
    v106[4] = v111; /*0x100360016*/
    v106[5] = v112; /*0x100360021*/
    v106[6] = v113; /*0x10036002c*/
    v106[7] = v114; /*0x100360037*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10036004c*/
    {
      v81 = v106; /*0x100360059*/
      v82 = (char *)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100360067*/
      v79[6] = 2; /*0x10036006e*/
      v79[7] = "codexmate_lib::platform::process"; /*0x100360080*/
      v79[8] = 32; /*0x100360087*/
      v79[10] = &unk_1017BCF76; /*0x100360099*/
      v79[11] = &v81; /*0x1003600a7*/
      v79[0] = 0; /*0x1003600ae*/
      v79[1] = "codexmate_lib::platform::process"; /*0x1003600b9*/
      v79[2] = 32; /*0x1003600c0*/
      v79[3] = 0; /*0x1003600cb*/
      v79[4] = "src/platform/process.rs"; /*0x1003600dd*/
      v79[5] = 23; /*0x1003600e4*/
      v79[9] = 0x5DB00000001LL; /*0x1003600f9*/
      v23 = v79; /*0x100360107*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v97, v79); /*0x10036010e*/
    }
    v24 = v106; /*0x100360113*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v106); /*0x10036011a*/
LABEL_36:
    v31 = std::time::Instant::now::hda76af2c3a449055(v24, v23, v25, v26, v27); /*0x10036011f*/
    a2 = v32; /*0x100360127*/
    v35 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x100360134*/
            v31,
            v32,
            v5,
            (unsigned int)v4);
    LODWORD(v104) = v33; /*0x100360137*/
    v4 = (unsigned __int64)v106; /*0x100360144*/
    v105 = (char *)v35; /*0x10036014b*/
    while ( 1 ) /*0x100360174*/
    {
      v37 = std::time::Instant::now::hda76af2c3a449055(v31, a2, v33, v34, v36); /*0x100360174*/
      if ( v37 == v35 ) /*0x10036017c*/
      {
        if ( v38 >= (unsigned int)v104 ) /*0x100360184*/
          goto LABEL_56; /*0x100360184*/
      }
      else if ( v37 >= v35 ) /*0x100360190*/
      {
LABEL_56:
        a1 = v79; /*0x10036026c*/
        codexmate_lib::platform::process::collect_codex_kill_targets::hff13fe245335b237(v79); /*0x100360273*/
        if ( LODWORD(v79[0]) == 11 ) /*0x10036027f*/
        {
          v44 = v79[1]; /*0x100360281*/
          v4 = v79[2]; /*0x100360288*/
          if ( v79[3] ) /*0x100360299*/
          {
            v45 = 32LL * v79[3]; /*0x10036029f*/
            v46 = 0; /*0x1003602a3*/
            do /*0x1003602b7*/
            {
              a2 = *(_QWORD *)(v4 + v46 + 8); /*0x1003602b9*/
              if ( a2 ) /*0x1003602c1*/
              {
                a1 = *(__int64 **)(v4 + v46 + 16); /*0x1003602c3*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1, a2, 1); /*0x1003602cd*/
              }
              v46 += 32; /*0x1003602b0*/
            }
            while ( v45 != v46 ); /*0x1003602b7*/
          }
          if ( v44 ) /*0x100360323*/
          {
            a1 = (__int64 *)v4; /*0x10036032e*/
            a2 = 32 * v44; /*0x100360331*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 32 * v44, 8); /*0x100360334*/
          }
        }
        else
        {
          qmemcpy(v106, v79, sizeof(v106)); /*0x100360305*/
          a2 = (__int64)v80; /*0x100360305*/
          a1 = (__int64 *)&v107; /*0x100360305*/
          v17 = 0; /*0x100360305*/
          if ( v106[0] != 11 ) /*0x100360310*/
          {
            a1 = v106; /*0x100360312*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v106); /*0x100360319*/
          }
        }
        goto LABEL_68; /*0x100360334*/
      }
      a1 = v79; /*0x100360196*/
      codexmate_lib::platform::process::collect_codex_kill_targets::hff13fe245335b237(v79); /*0x100360199*/
      if ( LODWORD(v79[0]) == 11 ) /*0x1003601a5*/
      {
        v39 = v79[1]; /*0x1003601a7*/
        v40 = (__int64 *)v79[2]; /*0x1003601ae*/
        v41 = v79[3]; /*0x1003601b5*/
        if ( v79[3] ) /*0x1003601bf*/
        {
          v42 = 32LL * v79[3]; /*0x1003601c4*/
          v43 = 0; /*0x1003601c8*/
          do /*0x1003601d7*/
          {
            a2 = v40[v43 / 8 + 1]; /*0x1003601d9*/
            if ( a2 ) /*0x1003601e1*/
            {
              a1 = (__int64 *)v40[v43 / 8 + 2]; /*0x1003601e3*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1, a2, 1); /*0x1003601ed*/
            }
            v43 += 32LL; /*0x1003601d0*/
          }
          while ( v42 != v43 ); /*0x1003601d7*/
        }
        if ( v39 ) /*0x100360233*/
        {
          a1 = v40; /*0x10036023e*/
          a2 = 32 * v39; /*0x100360241*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 32 * v39, 8); /*0x100360244*/
        }
        v35 = (__int64)v105; /*0x10036024c*/
        v4 = (unsigned __int64)v106; /*0x10036025a*/
        if ( !v41 ) /*0x100360261*/
          goto LABEL_68; /*0x100360261*/
      }
      else
      {
        qmemcpy(v106, v79, sizeof(v106)); /*0x10036020b*/
        a2 = (__int64)v80; /*0x10036020b*/
        a1 = (__int64 *)&v107; /*0x10036020b*/
        v17 = 0; /*0x10036020b*/
        if ( v106[0] == 11 ) /*0x100360216*/
        {
          if ( LOBYTE(v106[1]) ) /*0x100360223*/
            goto LABEL_68; /*0x100360223*/
        }
        else
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v106); /*0x100360163*/
        }
      }
      v31 = 0; /*0x100360168*/
      a2 = 100000000; /*0x10036016a*/
      std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 100000000); /*0x10036016f*/
    }
  }
  qmemcpy(v107, v79, 0x60u); /*0x10035fbab*/
  if ( v8 ) /*0x10035fbb1*/
  {
    v14 = v7 + 1; /*0x10035fbb7*/
    do /*0x10035fbc7*/
    {
      v15 = *(v14 - 1); /*0x10035fbcd*/
      if ( v15 ) /*0x10035fbd4*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v14, v15, 1); /*0x10035fbde*/
      v14 += 4; /*0x10035fbc0*/
      --v8; /*0x10035fbc4*/
    }
    while ( v8 ); /*0x10035fbc7*/
  }
  if ( v108 ) /*0x1003602db*/
  {
    v47 = 32 * v108; /*0x1003602e1*/
    v48 = 8; /*0x1003602e5*/
    v49 = (unsigned __int64)v7; /*0x1003602ea*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v47, v48); /*0x1003609d9*/
  }
  return result; /*0x1003609de*/
}