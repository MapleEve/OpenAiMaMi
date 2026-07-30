// __ZN13codexmate_lib4core5relay23codex_thread_visibility40replace_session_meta_lines_with_strategy @ 0x1008f9090 | 1.2.4 NEW-delta
__int64 (__fastcall *__fastcall codexmate_lib::core::relay::codex_thread_visibility::replace_session_meta_lines_with_strategy::h57dd05abf4b9373b(
        __int64 a1,
        void *a2,
        size_t a3,
        __int64 (__fastcall *a4)(),
        __int64 a5,
        char a6,
        __m128 a7))()
{
  __int128 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rcx
  bool v15; // cf
  unsigned __int64 v16; // rdx
  bool v17; // cc
  __int64 (__fastcall *result)(); // rax
  __int64 v19; // r12
  __int64 v20; // r14
  _QWORD *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 (__fastcall *v25)(); // r14
  _QWORD *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 *v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // r12
  __int64 v35; // rsi
  unsigned __int64 v36; // r12
  _QWORD *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rax
  bool v43; // zf
  _QWORD *v44; // r12
  __int64 v45; // r13
  __int64 v46; // rax
  _QWORD *v47; // rcx
  void *v48; // rdi
  size_t v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // r12
  __int64 v54; // rax
  char *v55; // rax
  __int64 v56; // rcx
  unsigned __int64 epi64; // r14
  void *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r12
  __int64 v61; // rax
  size_t v62; // r12
  unsigned __int64 v63; // r13
  unsigned __int64 v64; // rax
  _QWORD *v65; // rdx
  unsigned __int64 v66; // r14
  unsigned __int64 v67; // r12
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rax
  void *v71; // rax
  void *v72; // rax
  unsigned __int64 v73; // r13
  __int64 v74; // rdx
  __int64 v75; // rax
  size_t v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdx
  void *v79; // r14
  size_t v80; // r13
  __int64 v81; // rax
  __m128i si128; // xmm0
  __int64 v83; // r13
  unsigned __int64 v84; // rcx
  __int64 v85; // r14
  __int64 v86; // r13
  __int64 v87; // rsi
  __int64 v88; // r13
  int v89; // r14d
  int v90; // r12d
  __int64 v91; // rax
  __int64 v92; // rax
  void *v93; // rdi
  size_t v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  void *v98; // r14
  __int64 v99; // r12
  __int64 v100; // r13
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 (__fastcall *v103)(); // [rsp+0h] [rbp-3A0h] BYREF
  _QWORD __dst[17]; // [rsp+8h] [rbp-398h] BYREF
  char v105[8]; // [rsp+90h] [rbp-310h] BYREF
  int v106; // [rsp+98h] [rbp-308h]
  __int64 v107; // [rsp+A0h] [rbp-300h]
  unsigned int v108; // [rsp+A8h] [rbp-2F8h]
  int v109; // [rsp+B8h] [rbp-2E8h]
  _QWORD v110[3]; // [rsp+C0h] [rbp-2E0h] BYREF
  _QWORD v111[2]; // [rsp+D8h] [rbp-2C8h] BYREF
  __int64 v112; // [rsp+E8h] [rbp-2B8h] BYREF
  unsigned __int64 v113; // [rsp+F0h] [rbp-2B0h]
  __int64 v114; // [rsp+F8h] [rbp-2A8h]
  __int64 (__fastcall *v115)(); // [rsp+100h] [rbp-2A0h] BYREF
  __int128 v116; // [rsp+108h] [rbp-298h]
  __int64 v117; // [rsp+118h] [rbp-288h]
  __int64 v118; // [rsp+120h] [rbp-280h]
  __int64 v119; // [rsp+128h] [rbp-278h] BYREF
  unsigned __int64 v120; // [rsp+130h] [rbp-270h]
  size_t v121; // [rsp+138h] [rbp-268h]
  __int64 (__fastcall *v122)(); // [rsp+140h] [rbp-260h]
  __int128 v123; // [rsp+148h] [rbp-258h]
  __int64 v124; // [rsp+158h] [rbp-248h]
  __int64 v125; // [rsp+160h] [rbp-240h]
  __int64 v126; // [rsp+168h] [rbp-238h]
  __int64 v127; // [rsp+170h] [rbp-230h]
  __int64 (__fastcall *v128)(); // [rsp+178h] [rbp-228h]
  __int64 v129; // [rsp+180h] [rbp-220h]
  __int64 v130; // [rsp+188h] [rbp-218h]
  _QWORD v131[18]; // [rsp+190h] [rbp-210h] BYREF
  __int64 v132; // [rsp+220h] [rbp-180h] BYREF
  unsigned __int64 v133; // [rsp+228h] [rbp-178h] BYREF
  __int64 (__fastcall *v134)(); // [rsp+230h] [rbp-170h] BYREF
  __int128 v135; // [rsp+238h] [rbp-168h]
  __int64 v136; // [rsp+248h] [rbp-158h]
  __int64 v137; // [rsp+250h] [rbp-150h]
  __int64 v138; // [rsp+258h] [rbp-148h]
  __int64 v139; // [rsp+260h] [rbp-140h]
  __int64 (__fastcall *v140)(); // [rsp+268h] [rbp-138h]
  __int64 v141; // [rsp+270h] [rbp-130h] BYREF
  __int64 (__fastcall *v142)(); // [rsp+278h] [rbp-128h] BYREF
  _BYTE __src[136]; // [rsp+280h] [rbp-120h] BYREF
  __int64 (__fastcall *v144)(); // [rsp+308h] [rbp-98h] BYREF
  __int128 v145; // [rsp+310h] [rbp-90h]
  void *v146[2]; // [rsp+320h] [rbp-80h] BYREF
  unsigned int v147; // [rsp+33Ch] [rbp-64h]
  _QWORD *v148; // [rsp+340h] [rbp-60h]
  size_t __n; // [rsp+348h] [rbp-58h]
  unsigned int v150; // [rsp+350h] [rbp-50h] BYREF
  unsigned int v151; // [rsp+354h] [rbp-4Ch] BYREF
  size_t v152; // [rsp+358h] [rbp-48h]
  unsigned int v153; // [rsp+364h] [rbp-3Ch] BYREF
  void *__s1; // [rsp+368h] [rbp-38h]
  __int64 v155; // [rsp+370h] [rbp-30h]

  v152 = a3; /*0x1008f90a7*/
  v146[0] = a2; /*0x1008f90ab*/
  v141 = 11; /*0x1008f90ba*/
  v103 = a4; /*0x1008f90c5*/
  __dst[0] = (char *)a4 + 72 * a5; /*0x1008f90cc*/
  __dst[1] = &v141; /*0x1008f90da*/
  *(_QWORD *)&v9 = &v134; /*0x1008f90e1*/
  *((_QWORD *)&v9 + 1) = &v103; /*0x1008f90e8*/
  ((void (__fastcall *)(__int64 (__fastcall **)(), __int64 (__fastcall **)()))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h24cb426192cf297d)( /*0x1008f90ef*/
    &v134,
    &v103);
  v10 = v141; /*0x1008f90f4*/
  if ( v141 == 11 ) /*0x1008f90ff*/
  {
    v11 = *((_QWORD *)&v135 + 1); /*0x1008f9105*/
    v12 = (_QWORD *)v135; /*0x1008f9113*/
    v115 = v134; /*0x1008f911a*/
    v116 = v135; /*0x1008f9121*/
    v141 = (__int64)v131; /*0x1008f9136*/
    if ( *((_QWORD *)&v135 + 1) >= 2u ) /*0x1008f9141*/
    {
      v9 = v135; /*0x1008f9cfe*/
      if ( *((_QWORD *)&v135 + 1) >= 0x15u ) /*0x1008f9cec*/
        core::slice::sort::stable::driftsort_main::h6e3c9bd740780918(v135, *((_QWORD *)&v135 + 1), &v141); /*0x1008fa45a*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::h581850b2c24c8067( /*0x1008f9d04*/
          v135,
          *((_QWORD *)&v135 + 1),
          1,
          &v141);
    }
    v13 = v11 + 1; /*0x1008f9147*/
    v14 = v12 + 6; /*0x1008f914b*/
    while ( 1 ) /*0x1008f9153*/
    {
      v15 = v13-- == 1; /*0x1008f9153*/
      if ( v15 || v13 == 1 ) /*0x1008f9153*/
        break; /*0x1008f9157*/
      v16 = *v14 + v14[1]; /*0x1008f9161*/
      v17 = v16 <= v14[8]; /*0x1008f9164*/
      v14 += 8; /*0x1008f9168*/
      if ( !v17 ) /*0x1008f916c*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, *((_QWORD *)&v9 + 1), v16, v14); /*0x1008f916e*/
        result = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x1008f917d*/
        if ( !result ) /*0x1008f9185*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x1008fa446*/
        qmemcpy(result, "session_meta replacements overlap", 33); /*0x1008f91bf*/
        *(_QWORD *)a1 = 9; /*0x1008f91c6*/
        *(_QWORD *)(a1 + 8) = 33; /*0x1008f91cd*/
        *(_QWORD *)(a1 + 16) = result; /*0x1008f91d5*/
        *(_QWORD *)(a1 + 24) = 33; /*0x1008f91d9*/
        if ( !v11 ) /*0x1008f91e4*/
          goto LABEL_133; /*0x1008f91e4*/
        goto LABEL_25; /*0x1008f91e4*/
      }
    }
    v131[0] = 0x10101B600000000LL; /*0x1008f93bb*/
    LODWORD(v131[1]) = 0; /*0x1008f93c2*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa(&v141, v131, v146[0], v152); /*0x1008f93e2*/
    if ( (_DWORD)v141 == 1 ) /*0x1008f93ee*/
    {
      result = v142; /*0x1008f93f0*/
      *(_QWORD *)a1 = 2; /*0x1008f93f7*/
      *(_QWORD *)(a1 + 8) = result; /*0x1008f93fe*/
      if ( !v11 ) /*0x1008f9405*/
        goto LABEL_133; /*0x1008f9405*/
      goto LABEL_25; /*0x1008f9405*/
    }
    v148 = v12; /*0x1008f940c*/
    v153 = HIDWORD(v141); /*0x1008f9416*/
    std::fs::File::metadata::h408606eff73040af(&v141, &v153); /*0x1008f9424*/
    v25 = v142; /*0x1008f9429*/
    if ( (_DWORD)v141 == 1 ) /*0x1008f9437*/
    {
      *(_QWORD *)a1 = 2; /*0x1008f9439*/
      *(_QWORD *)(a1 + 8) = v25; /*0x1008f9440*/
      goto LABEL_24; /*0x1008f9440*/
    }
    memcpy(__dst, __src, sizeof(__dst)); /*0x1008f94af*/
    v103 = v142; /*0x1008f94b4*/
    v29 = &v141; /*0x1008f94bb*/
    v30 = (__int64)&v103; /*0x1008f94c2*/
    std::fs::Metadata::modified::h0e075817eaa8c909(&v141, &v103); /*0x1008f94c9*/
    v32 = v141; /*0x1008f94d4*/
    v147 = (unsigned int)v142; /*0x1008f94db*/
    v129 = v141; /*0x1008f94e3*/
    if ( (_DWORD)v142 == 1000000000 && (v141 & 3) == 1 ) /*0x1008f94f4*/
    {
      v155 = v141 - 1; /*0x1008f94fa*/
      v33 = *(_QWORD *)(v141 - 1); /*0x1008f94fe*/
      v34 = *(_QWORD *)(v141 + 7); /*0x1008f9502*/
      if ( *(_QWORD *)v34 ) /*0x1008f9506*/
        (*(void (__fastcall **)(_QWORD))v34)(*(_QWORD *)(v141 - 1)); /*0x1008f9512*/
      v35 = *(_QWORD *)(v34 + 8); /*0x1008f9514*/
      if ( v35 ) /*0x1008f951c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16)); /*0x1008f9526*/
      v30 = 24; /*0x1008f952b*/
      v29 = (__int64 *)v155; /*0x1008f9535*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, 24, 8); /*0x1008f9539*/
    }
    v155 = v11 << 6; /*0x1008f9545*/
    if ( v11 ) /*0x1008f954c*/
    {
      v36 = 0; /*0x1008f9552*/
      while ( 1 ) /*0x1008f9555*/
      {
        v37 = v148; /*0x1008f9555*/
        if ( v148[v36 / 8 + 2] != v148[v36 / 8 + 7] ) /*0x1008f9563*/
          break; /*0x1008f9563*/
        if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(&v153, 0, v148[v36 / 8 + 6]) & 1) != 0 ) /*0x1008f957b*/
        {
LABEL_80:
          *(_QWORD *)a1 = 2; /*0x1008f9954*/
          *(_QWORD *)(a1 + 8) = v38; /*0x1008f995b*/
          goto LABEL_24; /*0x1008f995f*/
        }
        v40 = (void *)v37[v36 / 8 + 7]; /*0x1008f9581*/
        if ( (__int64)v40 < 0 ) /*0x1008f9589*/
        {
          v102 = 0; /*0x1008f96b8*/
          goto LABEL_65; /*0x1008f96b8*/
        }
        if ( v40 ) /*0x1008f958f*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v153, 0, v38, v39); /*0x1008f9591*/
          v41 = _RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(v40, 1); /*0x1008f959e*/
          if ( !v41 ) /*0x1008f95a6*/
          {
            __s1 = v40; /*0x1008fa464*/
            v102 = 1; /*0x1008fa468*/
            goto LABEL_65; /*0x1008fa46d*/
          }
        }
        else
        {
          v41 = 1; /*0x1008f95ad*/
        }
        v29 = (__int64 *)&v153; /*0x1008f95b2*/
        __s1 = (void *)v41; /*0x1008f95b6*/
        v30 = v41; /*0x1008f95ba*/
        v42 = std::io::default_read_exact::h81f08861643b9d5d(&v153, v41, v40); /*0x1008f95c0*/
        if ( v42 ) /*0x1008f95c8*/
        {
          *(_QWORD *)a1 = 2; /*0x1008f9c0f*/
          *(_QWORD *)(a1 + 8) = v42; /*0x1008f9c16*/
          goto LABEL_106; /*0x1008f9c16*/
        }
        if ( v40 != (void *)v148[v36 / 8 + 2] /*0x1008f95e9*/
          || (v30 = v148[v36 / 8 + 1], v29 = (__int64 *)__s1, memcmp(__s1, (const void *)v30, (size_t)v40)) )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v30, v31, v32); /*0x1008f9b11*/
          v72 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1); /*0x1008f9b20*/
          if ( !v72 ) /*0x1008f9b28*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 53); /*0x1008fa48d*/
          qmemcpy(v72, "session_meta changed while preparing router migration", 53); /*0x1008f9b8c*/
          *(_QWORD *)a1 = 10; /*0x1008f9b8f*/
          *(_QWORD *)(a1 + 8) = 53; /*0x1008f9b96*/
          *(_QWORD *)(a1 + 16) = v72; /*0x1008f9b9e*/
          *(_QWORD *)(a1 + 24) = 53; /*0x1008f9ba2*/
LABEL_106:
          if ( v40 ) /*0x1008f9c1d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v40, 1); /*0x1008f9c2f*/
LABEL_24:
          result = (__int64 (__fastcall *)())close_NOCANCEL(v153); /*0x1008f9444*/
          v12 = v148; /*0x1008f944c*/
          if ( !v11 ) /*0x1008f9453*/
            goto LABEL_133; /*0x1008f9453*/
          goto LABEL_25; /*0x1008f9453*/
        }
        if ( v40 ) /*0x1008f95f9*/
        {
          v29 = (__int64 *)__s1; /*0x1008f9600*/
          v30 = (__int64)v40; /*0x1008f9604*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v40, 1); /*0x1008f9607*/
        }
        v36 += 64LL; /*0x1008f960c*/
        if ( v155 == v36 ) /*0x1008f9614*/
          goto LABEL_53; /*0x1008f9614*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v30, v31, v32); /*0x1008f9a6c*/
      __s1 = (void *)51; /*0x1008f9a76*/
      v71 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1); /*0x1008f9a84*/
      v102 = 1; /*0x1008f9a89*/
      if ( v71 ) /*0x1008f9a91*/
      {
        qmemcpy(v71, "session_meta line length changed before replacement", 51); /*0x1008f9ae7*/
        *(_QWORD *)a1 = 9; /*0x1008f9af1*/
        *(_QWORD *)(a1 + 8) = 51; /*0x1008f9af8*/
        *(_QWORD *)(a1 + 16) = v71; /*0x1008f9b00*/
        *(_QWORD *)(a1 + 24) = 51; /*0x1008f9b04*/
        goto LABEL_24; /*0x1008f9b0c*/
      }
LABEL_65:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v102, __s1); /*0x1008f96ba*/
    }
LABEL_53:
    v43 = a6 == 0; /*0x1008f961a*/
    v44 = v148; /*0x1008f961d*/
    v45 = v155; /*0x1008f9621*/
    if ( v43 ) /*0x1008f9625*/
    {
      v46 = v155; /*0x1008f9627*/
      v47 = v148; /*0x1008f962a*/
      while ( v46 ) /*0x1008f9633*/
      {
        v31 = v47[5]; /*0x1008f9639*/
        v46 -= 64; /*0x1008f963d*/
        v43 = v31 == v47[7]; /*0x1008f9641*/
        v47 += 8; /*0x1008f9645*/
        if ( !v43 ) /*0x1008f9649*/
          goto LABEL_57; /*0x1008f9649*/
      }
      while ( v45 ) /*0x1008f9731*/
      {
        if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(&v153, 0, v44[6]) & 1) != 0 ) /*0x1008f9748*/
          goto LABEL_80; /*0x1008f9748*/
        v30 = v44[4]; /*0x1008f974e*/
        v61 = std::io::Write::write_all::hb53dfa0f46569c39(&v153, v30, v44[5]); /*0x1008f975b*/
        v44 += 8; /*0x1008f9760*/
        v45 -= 64; /*0x1008f9764*/
        if ( v61 ) /*0x1008f976b*/
          goto LABEL_94; /*0x1008f976b*/
      }
      v61 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v153, v30, v31, v47); /*0x1008f9a47*/
      if ( v61 ) /*0x1008f9a56*/
      {
LABEL_94:
        *(_QWORD *)a1 = 2; /*0x1008f9a5c*/
        *(_QWORD *)(a1 + 8) = v61; /*0x1008f9a63*/
      }
      else
      {
        if ( v147 != 1000000000 ) /*0x1008f9c40*/
        {
          v106 = 1000000000; /*0x1008f9c42*/
          v109 = 1000000000; /*0x1008f9c4c*/
          v107 = v129; /*0x1008f9c56*/
          v108 = v147; /*0x1008f9c60*/
          v75 = std::fs::File::set_times::had0248e52bff5c3b(&v153, v105); /*0x1008f9c71*/
          core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hdb795dcbc2a5f3b0(v75); /*0x1008f9c79*/
        }
        *(_QWORD *)a1 = 11; /*0x1008f9c7e*/
      }
      goto LABEL_24; /*0x1008f9a67*/
    }
LABEL_57:
    close_NOCANCEL(v153); /*0x1008f964b*/
    v48 = v146[0]; /*0x1008f9653*/
    v49 = v152; /*0x1008f9657*/
    v52 = std::path::Path::parent::h4c3ac26770731fbb(v146[0], v152); /*0x1008f9660*/
    if ( !v52 ) /*0x1008f9666*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, v49, v50, v51); /*0x1008f96c8*/
      epi64 = 26; /*0x1008f96cd*/
      v58 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x1008f96dd*/
      if ( !v58 ) /*0x1008f96e5*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x1008fa47c*/
      qmemcpy(v58, "rollout path has no parent", 26); /*0x1008f9711*/
      v59 = 9; /*0x1008f971a*/
      v60 = 26; /*0x1008f971f*/
      goto LABEL_132; /*0x1008f9725*/
    }
    v53 = v50; /*0x1008f9668*/
    v54 = std::path::Path::file_name::hf6c2daad91e50ebf(v146[0], v152); /*0x1008f9673*/
    if ( v54 ) /*0x1008f967b*/
    {
      core::str::converts::from_utf8::hb32deb9559450f6e(&v141, v54); /*0x1008f968b*/
      v55 = "rolloutrollout changed while router migration was streaming; retry required"; /*0x1008f9697*/
      if ( !(_BYTE)v141 ) /*0x1008f969e*/
        v55 = (char *)v142; /*0x1008f969e*/
      v56 = 7; /*0x1008f96a6*/
      if ( !(_BYTE)v141 ) /*0x1008f96ab*/
        v56 = *(_QWORD *)__src; /*0x1008f96ab*/
    }
    else
    {
      v56 = 7; /*0x1008f9772*/
      v55 = "rolloutrollout changed while router migration was streaming; retry required"; /*0x1008f9777*/
    }
    v111[0] = v55; /*0x1008f977e*/
    v111[1] = v56; /*0x1008f9785*/
    LODWORD(v134) = std::process::id::ha72f58ec62264e78(); /*0x1008f9791*/
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v141); /*0x1008f979e*/
    v131[1] = v142; /*0x1008f97b1*/
    v131[0] = v141; /*0x1008f97b8*/
    v141 = (__int64)v111; /*0x1008f97c6*/
    v142 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1008f97d4*/
    *(_QWORD *)__src = &v134; /*0x1008f97e2*/
    *(_QWORD *)&__src[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x1008f97f0*/
    *(_QWORD *)&__src[16] = v131; /*0x1008f97fe*/
    *(_QWORD *)&__src[24] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1008f980c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v112, &unk_1017CA0EA, &v141); /*0x1008f9828*/
    epi64 = v113; /*0x1008f982d*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v119, v52, v53, v113, v114); /*0x1008f984b*/
    if ( v112 ) /*0x1008f985a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(epi64, v112, 1); /*0x1008f9864*/
    LODWORD(v131[0]) = 0; /*0x1008f9869*/
    WORD2(v131[0]) = 438; /*0x1008f9873*/
    *(_DWORD *)((char *)v131 + 6) = 1; /*0x1008f987c*/
    WORD1(v131[1]) = 0; /*0x1008f9886*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa(&v141, v131, v146[0], v152); /*0x1008f98ac*/
    if ( (_DWORD)v141 == 1 ) /*0x1008f98b8*/
    {
      v60 = (__int64)v142; /*0x1008f98ba*/
      v59 = 2; /*0x1008f98c1*/
      goto LABEL_129; /*0x1008f98c6*/
    }
    v117 = v53; /*0x1008f98cb*/
    v150 = HIDWORD(v141); /*0x1008f98d8*/
    LODWORD(v131[0]) = 0; /*0x1008f98db*/
    WORD2(v131[0]) = 438; /*0x1008f98e5*/
    *(_DWORD *)((char *)v131 + 6) = 256; /*0x1008f98ee*/
    WORD1(v131[1]) = 256; /*0x1008f98f8*/
    epi64 = v120; /*0x1008f990f*/
    v62 = v121; /*0x1008f9916*/
    std::fs::OpenOptions::_open::h1dad73452047b8aa(&v141, v131, v120, v121); /*0x1008f9931*/
    if ( (_DWORD)v141 == 1 ) /*0x1008f993d*/
    {
      v60 = (__int64)v142; /*0x1008f993f*/
LABEL_79:
      v155 = 2; /*0x1008f9946*/
      goto LABEL_128; /*0x1008f994f*/
    }
    v118 = v52; /*0x1008f9964*/
    __n = v62; /*0x1008f996b*/
    __s1 = (void *)epi64; /*0x1008f996f*/
    v151 = HIDWORD(v141); /*0x1008f9979*/
    if ( v11 ) /*0x1008f997f*/
    {
      v63 = 0; /*0x1008f9985*/
      epi64 = 0; /*0x1008f9988*/
      while ( 1 ) /*0x1008f998b*/
      {
        v64 = epi64; /*0x1008f998b*/
        v65 = v148; /*0x1008f998e*/
        v66 = v148[v63 / 8 + 6]; /*0x1008f9992*/
        v67 = 0; /*0x1008f999d*/
        if ( v66 >= v64 ) /*0x1008f99a3*/
          v67 = v66 - v64; /*0x1008f99a3*/
        v133 = v67; /*0x1008f99a7*/
        if ( v66 > v64 ) /*0x1008f99ae*/
        {
          v144 = (__int64 (__fastcall *)())&v150; /*0x1008f99b4*/
          *(_QWORD *)&v145 = v67; /*0x1008f99bb*/
          *((_QWORD *)&v145 + 1) = v67; /*0x1008f99c2*/
          if ( (std::io::copy::stack_buffer_copy::h2e143ab515afb63a(&v144, &v151) & 1) != 0 ) /*0x1008f99db*/
          {
            v60 = v68; /*0x1008f9d0e*/
            v155 = 2; /*0x1008f9d16*/
            goto LABEL_122; /*0x1008f9d1a*/
          }
          v132 = v68; /*0x1008f99e1*/
          if ( v67 != v68 ) /*0x1008f99eb*/
          {
            v131[0] = &v133; /*0x1008f9d23*/
            v131[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008f9d31*/
            v131[2] = &v132; /*0x1008f9d3f*/
            v131[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008f9d46*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v142, &unk_1017D11BF, v131); /*0x1008f9d62*/
            v155 = 10; /*0x1008f9d6c*/
            v60 = (__int64)v142; /*0x1008f9d70*/
LABEL_122:
            v79 = __s1; /*0x1008f9d77*/
            v80 = __n; /*0x1008f9d7b*/
            *(_OWORD *)v146 = *(_OWORD *)__src; /*0x1008f9d86*/
            v134 = *(__int64 (__fastcall **)())&__src[16]; /*0x1008f9d91*/
            v135 = *(_OWORD *)&__src[24]; /*0x1008f9d9f*/
            v136 = *(_QWORD *)&__src[40]; /*0x1008f9dbb*/
            v137 = *(_QWORD *)&__src[48]; /*0x1008f9dc9*/
            v138 = *(_QWORD *)&__src[56]; /*0x1008f9dd7*/
            v139 = *(_QWORD *)&__src[64]; /*0x1008f9de5*/
            v140 = *(__int64 (__fastcall **)())&__src[72]; /*0x1008f9df3*/
LABEL_126:
            close_NOCANCEL(v151); /*0x1008f9edd*/
            v141 = v155; /*0x1008f9ee9*/
            v142 = (__int64 (__fastcall *)())v60; /*0x1008f9ef0*/
            *(_OWORD *)__src = *(_OWORD *)v146; /*0x1008f9efb*/
            *(_QWORD *)&__src[16] = v134; /*0x1008f9f10*/
            *(_OWORD *)&__src[24] = v135; /*0x1008f9f17*/
            *(_QWORD *)&__src[40] = v136; /*0x1008f9f33*/
            *(_QWORD *)&__src[48] = v137; /*0x1008f9f41*/
            *(_QWORD *)&__src[56] = v138; /*0x1008f9f4f*/
            *(_QWORD *)&__src[64] = v139; /*0x1008f9f5d*/
            *(_QWORD *)&__src[72] = v140; /*0x1008f9f6b*/
            v81 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v79, v80); /*0x1008f9f78*/
            if ( (v81 & 3) == 1 ) /*0x1008f9f85*/
            {
              v85 = v81 - 1; /*0x1008fa0e5*/
              v152 = *(_QWORD *)(v81 - 1); /*0x1008fa0ec*/
              v86 = *(_QWORD *)(v81 + 7); /*0x1008fa0f0*/
              if ( *(_QWORD *)v86 ) /*0x1008fa0f4*/
                (*(void (__fastcall **)(size_t))v86)(v152); /*0x1008fa101*/
              v87 = *(_QWORD *)(v86 + 8); /*0x1008fa103*/
              if ( v87 ) /*0x1008fa10a*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v152, v87, *(_QWORD *)(v86 + 16)); /*0x1008fa114*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, 24, 8); /*0x1008fa126*/
            }
            v128 = v140; /*0x1008f9f92*/
            v127 = v139; /*0x1008f9fa0*/
            v126 = v138; /*0x1008f9fae*/
            v125 = v137; /*0x1008f9fbc*/
            v124 = v136; /*0x1008f9fca*/
            v123 = v135; /*0x1008f9fed*/
            v122 = v134; /*0x1008f9ff4*/
            si128 = _mm_load_si128((const __m128i *)v146); /*0x1008f9ffb*/
            v152 = si128.i64[0]; /*0x1008fa000*/
            epi64 = _mm_extract_epi64(si128, 1); /*0x1008fa005*/
LABEL_128:
            close_NOCANCEL(v150); /*0x1008fa00c*/
            v59 = v155; /*0x1008fa014*/
LABEL_129:
            if ( v119 ) /*0x1008fa022*/
            {
              v83 = v59; /*0x1008fa030*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, v119, 1); /*0x1008fa033*/
              v59 = v83; /*0x1008fa038*/
            }
            v58 = (void *)v152; /*0x1008fa03b*/
LABEL_132:
            *(_QWORD *)a1 = v59; /*0x1008fa03f*/
            *(_QWORD *)(a1 + 8) = v60; /*0x1008fa042*/
            *(_QWORD *)(a1 + 16) = v58; /*0x1008fa046*/
            *(_QWORD *)(a1 + 24) = epi64; /*0x1008fa04a*/
            v84 = v123; /*0x1008fa055*/
            *(_QWORD *)(a1 + 32) = v122; /*0x1008fa05c*/
            *(_OWORD *)(a1 + 40) = __PAIR128__(*((unsigned __int64 *)&v123 + 1), v84); /*0x1008fa060*/
            *(_QWORD *)(a1 + 56) = v124; /*0x1008fa076*/
            *(_QWORD *)(a1 + 64) = v125; /*0x1008fa081*/
            *(_QWORD *)(a1 + 72) = v126; /*0x1008fa08c*/
            *(_QWORD *)(a1 + 80) = v127; /*0x1008fa097*/
            result = v128; /*0x1008fa09b*/
            *(_QWORD *)(a1 + 88) = v128; /*0x1008fa0a2*/
            v12 = v148; /*0x1008fa0a6*/
            if ( !v11 ) /*0x1008fa0ad*/
            {
LABEL_133:
              if ( v115 ) /*0x1008fa0bd*/
                return (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, (_QWORD)v115 << 6, 8); /*0x1008fa0cb*/
              return result; /*0x1008fa0cb*/
            }
LABEL_25:
            v26 = v12 + 4; /*0x1008f9459*/
            do /*0x1008f9467*/
            {
              v27 = *(v26 - 4); /*0x1008f946d*/
              if ( v27 ) /*0x1008f9474*/
                result = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v26 - 3), v27, 1); /*0x1008f947f*/
              v28 = *(v26 - 1); /*0x1008f9484*/
              if ( v28 ) /*0x1008f948b*/
                result = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v26, v28, 1); /*0x1008f9495*/
              v26 += 8; /*0x1008f9460*/
              --v11; /*0x1008f9464*/
            }
            while ( v11 ); /*0x1008f9467*/
            goto LABEL_133; /*0x1008f9467*/
          }
          v65 = v148; /*0x1008f99f1*/
        }
        epi64 = v65[v63 / 8 + 7] + v66; /*0x1008f99f5*/
        if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(&v150, 0, epi64) & 1) != 0 ) /*0x1008f9a0a*/
        {
          v60 = v69; /*0x1008f9c8a*/
LABEL_113:
          v155 = 2; /*0x1008f9c92*/
          goto LABEL_125; /*0x1008f9c9b*/
        }
        v70 = std::io::Write::write_all::hb53dfa0f46569c39(&v151, v148[v63 / 8 + 4], v148[v63 / 8 + 5]); /*0x1008f9a22*/
        if ( v70 ) /*0x1008f9a2a*/
        {
          v60 = v70; /*0x1008f9c8f*/
          goto LABEL_113; /*0x1008f9c8f*/
        }
        v63 += 64LL; /*0x1008f9a30*/
        if ( v155 == v63 ) /*0x1008f9a38*/
          goto LABEL_100; /*0x1008f9a38*/
      }
    }
    epi64 = 0; /*0x1008f9bac*/
LABEL_100:
    v73 = 0; /*0x1008f9baf*/
    if ( __dst[11] >= epi64 ) /*0x1008f9bbc*/
      v73 = __dst[11] - epi64; /*0x1008f9bbc*/
    v133 = v73; /*0x1008f9bc0*/
    if ( __dst[11] > epi64 ) /*0x1008f9bc7*/
    {
      v144 = (__int64 (__fastcall *)())&v150; /*0x1008f9bd1*/
      *(_QWORD *)&v145 = v73; /*0x1008f9bd8*/
      *((_QWORD *)&v145 + 1) = v73; /*0x1008f9bdf*/
      if ( (std::io::copy::stack_buffer_copy::h2e143ab515afb63a(&v144, &v151) & 1) != 0 ) /*0x1008f9bf8*/
      {
        v60 = v74; /*0x1008f9bfe*/
        v155 = 2; /*0x1008f9c06*/
LABEL_124:
        *(__m128 *)v146 = a7; /*0x1008f9e61*/
        v134 = *(__int64 (__fastcall **)())&__src[16]; /*0x1008f9e73*/
        v135 = *(_OWORD *)&__src[24]; /*0x1008f9e7a*/
        v136 = *(_QWORD *)&__src[40]; /*0x1008f9e96*/
        v137 = *(_QWORD *)&__src[48]; /*0x1008f9ea4*/
        v138 = *(_QWORD *)&__src[56]; /*0x1008f9eb2*/
        v139 = *(_QWORD *)&__src[64]; /*0x1008f9ec0*/
        v140 = *(__int64 (__fastcall **)())&__src[72]; /*0x1008f9ece*/
        goto LABEL_125; /*0x1008f9ece*/
      }
      v132 = v74; /*0x1008f9c9d*/
      if ( v73 != v74 ) /*0x1008f9ca7*/
      {
        v131[0] = &v133; /*0x1008f9e06*/
        v131[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008f9e14*/
        v131[2] = &v132; /*0x1008f9e22*/
        v131[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008f9e29*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v142, &unk_1017D11BF, v131); /*0x1008f9e45*/
        v60 = (__int64)v142; /*0x1008f9e4a*/
        v155 = 10; /*0x1008f9e56*/
        a7 = *(__m128 *)__src; /*0x1008f9e5a*/
        goto LABEL_124; /*0x1008f9e5a*/
      }
    }
    v76 = __n; /*0x1008f9cb7*/
    v77 = std::sys::fs::set_permissions::hfb7e5143e400282f(__s1, __n); /*0x1008f9cbb*/
    v155 = 2; /*0x1008f9cc5*/
    if ( v77 || (v77 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(&v151, v76, v78, 2)) != 0 ) /*0x1008f9cda*/
    {
      v60 = v77; /*0x1008f9ce0*/
LABEL_125:
      v79 = __s1; /*0x1008f9ed5*/
      v80 = __n; /*0x1008f9ed9*/
      goto LABEL_126; /*0x1008f9ed9*/
    }
    close_NOCANCEL(v151); /*0x1008fa133*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v141, v146[0], v152); /*0x1008fa147*/
    v60 = (__int64)v142; /*0x1008fa14c*/
    if ( (_BYTE)v141 ) /*0x1008fa15a*/
      goto LABEL_79; /*0x1008fa15a*/
    qmemcpy(&v131[1], __src, 0x58u); /*0x1008fa173*/
    v88 = *(_QWORD *)&__src[88]; /*0x1008fa176*/
    v131[13] = *(_QWORD *)&__src[96]; /*0x1008fa184*/
    v131[14] = *(_QWORD *)&__src[104]; /*0x1008fa192*/
    v131[15] = *(_QWORD *)&__src[112]; /*0x1008fa1a0*/
    v131[16] = *(_QWORD *)&__src[120]; /*0x1008fa1ae*/
    v131[17] = *(_QWORD *)&__src[128]; /*0x1008fa1bc*/
    v131[0] = v142; /*0x1008fa1c3*/
    v131[12] = *(_QWORD *)&__src[88]; /*0x1008fa1ca*/
    std::fs::Metadata::modified::h0e075817eaa8c909(&v141, &v103); /*0x1008fa1df*/
    v89 = (int)v142; /*0x1008fa1e4*/
    v155 = v141; /*0x1008fa1f2*/
    if ( (_DWORD)v142 == 1000000000 ) /*0x1008fa1fd*/
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hdaf8ae7044e1e341(v155); /*0x1008fa203*/
    std::fs::Metadata::modified::h0e075817eaa8c909(&v141, v131); /*0x1008fa216*/
    v90 = (int)v142; /*0x1008fa21b*/
    v130 = v141; /*0x1008fa229*/
    if ( (_DWORD)v142 == 1000000000 ) /*0x1008fa237*/
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hdaf8ae7044e1e341(v130); /*0x1008fa240*/
    if ( v88 != __dst[11] || v89 != 1000000000 && (v90 != v89 || v90 == 1000000000 || v130 != v155) ) /*0x1008fa27c*/
    {
      v93 = __s1; /*0x1008fa325*/
      v94 = __n; /*0x1008fa329*/
      v95 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__s1, __n); /*0x1008fa32d*/
      v97 = v95 & 3; /*0x1008fa334*/
      if ( (_DWORD)v97 == 1 ) /*0x1008fa33a*/
      {
        v98 = (void *)(v95 - 1); /*0x1008fa3f7*/
        v99 = *(_QWORD *)(v95 - 1); /*0x1008fa3fa*/
        v100 = *(_QWORD *)(v95 + 7); /*0x1008fa3fe*/
        if ( *(_QWORD *)v100 ) /*0x1008fa402*/
          (*(void (__fastcall **)(__int64))v100)(v99); /*0x1008fa40e*/
        v101 = *(_QWORD *)(v100 + 8); /*0x1008fa410*/
        if ( v101 ) /*0x1008fa417*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v101, *(_QWORD *)(v100 + 16)); /*0x1008fa420*/
        v94 = 24; /*0x1008fa425*/
        v93 = v98; /*0x1008fa42f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, 24, 8); /*0x1008fa432*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v93, v94, v96, v97); /*0x1008fa340*/
      v152 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(68, 1); /*0x1008fa354*/
      if ( !v152 ) /*0x1008fa35b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 68); /*0x1008fa49e*/
      epi64 = 68; /*0x1008fa368*/
      memcpy((void *)v152, "rollout changed while router migration was streaming; retry required", 0x44u); /*0x1008fa377*/
      v155 = 10; /*0x1008fa381*/
      v60 = 68; /*0x1008fa385*/
      goto LABEL_128; /*0x1008fa38b*/
    }
    v91 = std::sys::fs::rename::h7934e6142c921014(__s1, __n, v146[0], v152); /*0x1008fa292*/
    if ( v91 ) /*0x1008fa29a*/
    {
      v144 = (__int64 (__fastcall *)())v91; /*0x1008fa2a0*/
      v92 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__s1, __n); /*0x1008fa2af*/
      core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hdb795dcbc2a5f3b0(v92); /*0x1008fa2b7*/
      v141 = (__int64)&v144; /*0x1008fa2c3*/
      v142 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008fa2d1*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v110, &unk_1017D215E, &v141); /*0x1008fa2ed*/
      v60 = v110[0]; /*0x1008fa2f2*/
      v152 = v110[1]; /*0x1008fa300*/
      epi64 = v110[2]; /*0x1008fa304*/
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hdaf8ae7044e1e341(v144); /*0x1008fa312*/
      v155 = 10; /*0x1008fa31c*/
      goto LABEL_128; /*0x1008fa320*/
    }
    codexmate_lib::core::relay::codex_thread_visibility::sync_parent_dir::h7a36e3facf1f3baa(v118, v117); /*0x1008fa39e*/
    close_NOCANCEL(v150); /*0x1008fa3a6*/
    if ( v119 ) /*0x1008fa3b5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v119, 1); /*0x1008fa3c0*/
    codexmate_lib::core::relay::codex_thread_visibility::restore_rollout_mtime_best_effort::h40e418d1fa34c3a1( /*0x1008fa3d7*/
      v146[0],
      v152,
      v129,
      v147);
    *(_QWORD *)a1 = 11; /*0x1008fa3dc*/
    return (__int64 (__fastcall *)())core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..PreparedSessionMetaReplacement$GT$$GT$::h2b778c56e6e8f629(&v115); /*0x1008fa3ea*/
  }
  else
  {
    v123 = *(_OWORD *)__src; /*0x1008f920b*/
    v122 = v142; /*0x1008f9212*/
    v131[0] = *(_QWORD *)&__src[16]; /*0x1008f9220*/
    *(_OWORD *)&v131[1] = *(_OWORD *)&__src[24]; /*0x1008f922e*/
    v131[3] = *(_QWORD *)&__src[40]; /*0x1008f924a*/
    v131[4] = *(_QWORD *)&__src[48]; /*0x1008f9258*/
    v131[5] = *(_QWORD *)&__src[56]; /*0x1008f9266*/
    v131[6] = *(_QWORD *)&__src[64]; /*0x1008f9274*/
    v131[7] = *(_QWORD *)&__src[72]; /*0x1008f9282*/
    v19 = *((_QWORD *)&v135 + 1); /*0x1008f9290*/
    v20 = v135; /*0x1008f9290*/
    if ( *((_QWORD *)&v135 + 1) ) /*0x1008f929a*/
    {
      v21 = (_QWORD *)(v135 + 32); /*0x1008f929c*/
      do /*0x1008f92b7*/
      {
        v22 = *(v21 - 4); /*0x1008f92b9*/
        if ( v22 ) /*0x1008f92c0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v21 - 3), v22, 1); /*0x1008f92cb*/
        v23 = *(v21 - 1); /*0x1008f92d0*/
        if ( v23 ) /*0x1008f92d7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v21, v23, 1); /*0x1008f92e2*/
        v21 += 8; /*0x1008f92b0*/
        --v19; /*0x1008f92b4*/
      }
      while ( v19 ); /*0x1008f92b7*/
    }
    if ( v134 ) /*0x1008f92f3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, (_QWORD)v134 << 6, 8); /*0x1008f9301*/
    v144 = v122; /*0x1008f9314*/
    v145 = v123; /*0x1008f931b*/
    *(_QWORD *)(a1 + 88) = v131[7]; /*0x1008f9337*/
    *(_QWORD *)(a1 + 80) = v131[6]; /*0x1008f9342*/
    *(_QWORD *)(a1 + 72) = v131[5]; /*0x1008f934d*/
    *(_QWORD *)(a1 + 64) = v131[4]; /*0x1008f9358*/
    *(_QWORD *)(a1 + 56) = v131[3]; /*0x1008f9363*/
    *(_QWORD *)(a1 + 48) = v131[2]; /*0x1008f936e*/
    v24 = v131[0]; /*0x1008f9372*/
    *(_QWORD *)(a1 + 40) = v131[1]; /*0x1008f9380*/
    *(_QWORD *)(a1 + 32) = v24; /*0x1008f9384*/
    *(_QWORD *)(a1 + 24) = *((_QWORD *)&v145 + 1); /*0x1008f938f*/
    result = v144; /*0x1008f9393*/
    *(_QWORD *)(a1 + 16) = v145; /*0x1008f93a1*/
    *(_QWORD *)(a1 + 8) = result; /*0x1008f93a5*/
    *(_QWORD *)a1 = v10; /*0x1008f93a9*/
  }
  return result; /*0x1008fa0d0*/
}