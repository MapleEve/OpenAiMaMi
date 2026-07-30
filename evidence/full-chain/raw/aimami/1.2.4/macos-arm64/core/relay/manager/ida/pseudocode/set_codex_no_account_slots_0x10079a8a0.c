// __ZN13codexmate_lib4core5relay7manager12RelayManager26set_codex_no_account_slots @ 0x10079a8a0 | 1.2.4 NEW-delta
void *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_no_account_slots::h6cd96d51aef3ee95(
        void *a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  __int64 v6; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax
  unsigned __int64 v13; // r14
  char *v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rbx
  _QWORD *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // r15
  char v25; // r13
  __int64 v26; // r13
  __int64 *v27; // r9
  __int64 v28; // r12
  __int64 *v29; // rbx
  _QWORD *v30; // r14
  __int64 v31; // rax
  __int64 v32; // r13
  const void *v33; // r14
  size_t v34; // rbx
  __int64 *v35; // r15
  __int64 v36; // rsi
  size_t v37; // rsi
  _QWORD *v38; // r14
  char *v39; // rdi
  _QWORD *v40; // rax
  __int64 *v41; // r15
  unsigned __int64 v42; // r14
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rbx
  __int64 **v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // r13
  _QWORD *v51; // rax
  char *v52; // rdi
  _QWORD *v53; // rax
  _BYTE *v54; // r8
  __int64 (__fastcall *v55)(_QWORD, _QWORD); // rcx
  _BYTE *v56; // r9
  __int64 (__fastcall *v57)(_QWORD, _QWORD); // rdx
  __int64 v58; // r10
  __int64 v59; // rsi
  __int64 v60; // r11
  __int64 v61; // rdi
  __int64 v62; // r15
  __int64 v63; // rbx
  __int64 v64; // r14
  __int64 v65; // r12
  _QWORD *v66; // rbx
  _BYTE *v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  void *v71; // rax
  void *v72; // rbx
  _QWORD *v73; // rax
  _QWORD *v74; // rdx
  __int64 v75; // rax
  _QWORD *v76; // rdx
  __int64 v77; // rax
  _QWORD *v78; // r15
  __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 v81; // [rsp+18h] [rbp-E68h] BYREF
  _BYTE v82[96]; // [rsp+20h] [rbp-E60h] BYREF
  _BYTE v83[640]; // [rsp+80h] [rbp-E00h] BYREF
  _QWORD __dst[40]; // [rsp+300h] [rbp-B80h] BYREF
  _BYTE v85[128]; // [rsp+440h] [rbp-A40h] BYREF
  _QWORD v86[24]; // [rsp+4C0h] [rbp-9C0h] BYREF
  _QWORD v87[40]; // [rsp+580h] [rbp-900h] BYREF
  _BYTE v88[136]; // [rsp+6C0h] [rbp-7C0h] BYREF
  _BYTE *v89; // [rsp+748h] [rbp-738h]
  __int64 v90; // [rsp+750h] [rbp-730h]
  char v91; // [rsp+7FCh] [rbp-684h]
  char v92; // [rsp+7FDh] [rbp-683h]
  _BYTE v93[80]; // [rsp+800h] [rbp-680h] BYREF
  __int64 *v94[40]; // [rsp+850h] [rbp-630h] BYREF
  _BYTE v95[744]; // [rsp+990h] [rbp-4F0h] BYREF
  __int64 v96; // [rsp+C78h] [rbp-208h] BYREF
  _QWORD v97[12]; // [rsp+C80h] [rbp-200h] BYREF
  _QWORD v98[3]; // [rsp+CE0h] [rbp-1A0h] BYREF
  _QWORD v99[3]; // [rsp+CF8h] [rbp-188h] BYREF
  __int64 v100; // [rsp+D10h] [rbp-170h]
  __int64 v101; // [rsp+D18h] [rbp-168h]
  void *__s2; // [rsp+D20h] [rbp-160h]
  _BYTE *v103; // [rsp+D28h] [rbp-158h] BYREF
  __int64 (__fastcall *v104)(_QWORD, _QWORD); // [rsp+D30h] [rbp-150h]
  _BYTE *v105; // [rsp+D38h] [rbp-148h]
  __int64 (__fastcall *v106)(_QWORD, _QWORD); // [rsp+D40h] [rbp-140h]
  __int64 v107; // [rsp+D48h] [rbp-138h]
  __int64 v108; // [rsp+D50h] [rbp-130h]
  __int64 v109; // [rsp+D58h] [rbp-128h]
  __int64 v110; // [rsp+D60h] [rbp-120h]
  __int64 v111; // [rsp+D68h] [rbp-118h]
  __int64 v112; // [rsp+D70h] [rbp-110h]
  __int64 v113; // [rsp+D78h] [rbp-108h] BYREF
  __int64 v114; // [rsp+D80h] [rbp-100h]
  __int64 v115; // [rsp+D88h] [rbp-F8h]
  _QWORD *v116; // [rsp+D90h] [rbp-F0h]
  __int64 *v117; // [rsp+D98h] [rbp-E8h]
  __int64 *v118; // [rsp+DA0h] [rbp-E0h]
  __int64 *v119; // [rsp+DA8h] [rbp-D8h]
  __int64 *v120; // [rsp+DB0h] [rbp-D0h]
  __int64 *v121; // [rsp+DB8h] [rbp-C8h]
  __int64 *v122; // [rsp+DC0h] [rbp-C0h]
  __int64 v123; // [rsp+DC8h] [rbp-B8h]
  __int64 v124; // [rsp+DD0h] [rbp-B0h]
  __int64 v125; // [rsp+DD8h] [rbp-A8h]
  unsigned __int64 v126; // [rsp+DE0h] [rbp-A0h]
  char **v127; // [rsp+DE8h] [rbp-98h]
  int v128; // [rsp+DF4h] [rbp-8Ch]
  unsigned __int64 v129; // [rsp+DF8h] [rbp-88h] BYREF
  __int64 v130; // [rsp+E00h] [rbp-80h]
  _BYTE *v131; // [rsp+E08h] [rbp-78h]
  __int64 v132; // [rsp+E10h] [rbp-70h] BYREF
  __int64 *v133; // [rsp+E18h] [rbp-68h]
  unsigned __int64 v134; // [rsp+E20h] [rbp-60h]
  _QWORD *v135; // [rsp+E28h] [rbp-58h]
  _QWORD *v136; // [rsp+E30h] [rbp-50h]
  size_t __n; // [rsp+E38h] [rbp-48h]
  int v138; // [rsp+E40h] [rbp-40h]
  char v139; // [rsp+E47h] [rbp-39h] BYREF
  void *v140; // [rsp+E48h] [rbp-38h]
  unsigned __int8 v141; // [rsp+E57h] [rbp-29h]

  v140 = a1; /*0x10079a8ba*/
  v6 = *(_QWORD *)(a2 + 16); /*0x10079a8be*/
  if ( __OFSUB__(0, *(_QWORD *)(v6 + 16)) ) /*0x10079a8c4*/
  {
    v8 = *(_QWORD *)(a2 + 32); /*0x10079a8d1*/
    v135 = (_QWORD *)(v8 + 16); /*0x10079a8d9*/
    v123 = v8; /*0x10079a8dd*/
    v9 = *(_QWORD *)(v8 + 16); /*0x10079a8e4*/
    if ( !v9 ) /*0x10079a8eb*/
      v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h719e63cd76cd1e9b(v135); /*0x10079aafb*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x10079a8f1*/
    v11 = 0x7FFFFFFFFFFFFFFFLL; /*0x10079a90a*/
    v124 = 0x7FFFFFFFFFFFFFFFLL; /*0x10079a90d*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10079a917*/
    {
      v22 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, v6); /*0x10079ab03*/
      LOBYTE(v22) = v22 ^ 1; /*0x10079ab08*/
      v138 = v22; /*0x10079ab0a*/
      if ( *(_BYTE *)(v123 + 24) ) /*0x10079ab14*/
        goto LABEL_6; /*0x10079ab1a*/
    }
    else
    {
      v138 = 0; /*0x10079a91d*/
      if ( *(_BYTE *)(v123 + 24) ) /*0x10079a92b*/
      {
LABEL_6:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v6, v10, v11); /*0x10079a937*/
        v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x10079a946*/
        if ( !v12 ) /*0x10079a94e*/
        {
          v136 = a3; /*0x10079b99b*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x10079b9a9*/
        }
        v13 = (unsigned __int64)v12; /*0x10079a954*/
        qmemcpy(v12, "Codex router transition lock is poisoned", 40); /*0x10079a999*/
        if ( !(_BYTE)v138 /*0x10079b94b*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v124) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(40, 1) )
        {
          *(_BYTE *)(v123 + 24) = 1; /*0x10079b95f*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v135, 1); /*0x10079a9c0*/
        v14 = (char *)v140; /*0x10079a9cc*/
        *((_QWORD *)v140 + 1) = 10; /*0x10079a9d0*/
        *((_QWORD *)v14 + 2) = 40; /*0x10079a9d8*/
        v14[24] = v13; /*0x10079a9e0*/
        v14[31] = HIBYTE(v13); /*0x10079a9eb*/
        *(_WORD *)(v14 + 29) = HIDWORD(v13) >> 8; /*0x10079a9f2*/
        *(_DWORD *)(v14 + 25) = v13 >> 8; /*0x10079a9f7*/
        *((_QWORD *)v14 + 4) = 40; /*0x10079a9fa*/
        goto LABEL_11; /*0x10079aa02*/
      }
    }
    v128 = a4; /*0x10079ab20*/
    v125 = a2; /*0x10079ab27*/
    codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::hfde42f798cc22c47( /*0x10079ab45*/
      v95,
      a2 + 40,
      &unk_10167939B,
      31);
    v23 = *(_QWORD *)v95; /*0x10079ab4a*/
    v24 = *(_QWORD *)&v95[8]; /*0x10079ab51*/
    v25 = v95[16]; /*0x10079ab58*/
    if ( *(_QWORD *)v95 != 11 ) /*0x10079ab64*/
    {
      v37 = (size_t)&v95[17]; /*0x10079ad93*/
      v38 = v140; /*0x10079ad9a*/
      v39 = (char *)v140 + 25; /*0x10079ad9e*/
      memcpy((char *)v140 + 25, &v95[17], 0x4Fu); /*0x10079ada7*/
      v38[1] = v23; /*0x10079adac*/
      v38[2] = v24; /*0x10079adb0*/
      *((_BYTE *)v38 + 24) = v25; /*0x10079adb4*/
      *v38 = 0x8000000000000000LL; /*0x10079adc2*/
LABEL_109:
      if ( !(_BYTE)v138 /*0x10079b968*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v124) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v39, v37) )
      {
        *(_BYTE *)(v123 + 24) = 1; /*0x10079b978*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v135, v37); /*0x10079b941*/
      goto LABEL_12; /*0x10079b946*/
    }
    v141 = v95[16]; /*0x10079ab6a*/
    v127 = *(char ***)&v95[8]; /*0x10079ab6e*/
    v26 = v125; /*0x10079ab7c*/
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hdbd948221248bbf9(v94, v125); /*0x10079ab86*/
    v27 = (__int64 *)a3[1]; /*0x10079aba7*/
    v126 = a3[2]; /*0x10079abb1*/
    v118 = v94[1]; /*0x10079abc3*/
    v119 = v94[2]; /*0x10079abca*/
    v120 = v94[4]; /*0x10079abd1*/
    v121 = v94[5]; /*0x10079abd8*/
    v122 = v27; /*0x10079abdf*/
    codexmate_lib::core::relay::codex_catalog::validate_no_account_slots::he4facdd0ca5ca838( /*0x10079abe6*/
      v95,
      v94[1],
      (__int64)v94[2],
      (__int64)v94[4],
      (__int64)v94[5],
      v27,
      v126);
    if ( *(_DWORD *)v95 != 11 ) /*0x10079abf2*/
    {
      v40 = v140; /*0x10079adca*/
      qmemcpy((char *)v140 + 8, v95, 0x60u); /*0x10079adde*/
      v37 = (size_t)&v95[96]; /*0x10079adde*/
      *v40 = 0x8000000000000000LL; /*0x10079adeb*/
LABEL_105:
      v46 = v94; /*0x10079b8ed*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v94); /*0x10079b8f4*/
      goto LABEL_106; /*0x10079b8f4*/
    }
    v136 = a3; /*0x10079abf8*/
    if ( v126 ) /*0x10079ac04*/
    {
      v28 = (__int64)v122; /*0x10079ac15*/
      v29 = &v122[9 * v126]; /*0x10079ac1c*/
      v117 = v29; /*0x10079ac20*/
      do /*0x10079ac7d*/
      {
        if ( *(_QWORD *)(v28 + 48) == 0x8000000000000000LL ) /*0x10079ac92*/
        {
          v116 = (_QWORD *)(v28 + 48); /*0x10079ac99*/
          if ( !v94[18] ) /*0x10079acaa*/
            goto LABEL_30; /*0x10079acaa*/
          v32 = 72 * (__int64)v94[18]; /*0x10079acb7*/
          v33 = *(const void **)(v28 + 8); /*0x10079acbb*/
          v34 = *(_QWORD *)(v28 + 16); /*0x10079acc0*/
          __n = *(_QWORD *)(v28 + 40); /*0x10079acca*/
          __s2 = *(void **)(v28 + 32); /*0x10079acd3*/
          v35 = v94[17] + 6; /*0x10079acda*/
          while ( *(v35 - 4) != v34 /*0x10079ad27*/
               || memcmp((const void *)*(v35 - 5), v33, v34)
               || *(v35 - 1) != __n
               || memcmp((const void *)*(v35 - 2), __s2, __n) )
          {
            v35 += 9; /*0x10079ace0*/
            v32 -= 72; /*0x10079ace4*/
            if ( !v32 ) /*0x10079ace8*/
              goto LABEL_30; /*0x10079ace8*/
          }
          if ( *v35 == 0x8000000000000000LL ) /*0x10079ad36*/
          {
LABEL_30:
            *(_QWORD *)v95 = 0x8000000000000000LL; /*0x10079ac30*/
            v26 = v125; /*0x10079ac41*/
            v29 = v117; /*0x10079ac48*/
            v30 = v116; /*0x10079ac4f*/
          }
          else
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v95, v35); /*0x10079ad46*/
            v30 = v116; /*0x10079ad4b*/
            v36 = *v116; /*0x10079ad52*/
            v26 = v125; /*0x10079ad62*/
            v29 = v117; /*0x10079ad69*/
            if ( *v116 != 0x8000000000000000LL && v36 ) /*0x10079ad79*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v28 + 56), v36, 1); /*0x10079ad89*/
          }
          v30[2] = *(_QWORD *)&v95[16]; /*0x10079ac5d*/
          v31 = *(_QWORD *)v95; /*0x10079ac61*/
          v30[1] = *(_QWORD *)&v95[8]; /*0x10079ac6f*/
          *v30 = v31; /*0x10079ac73*/
        }
        v28 += 72; /*0x10079ac76*/
      }
      while ( (__int64 *)v28 != v29 ); /*0x10079ac7d*/
    }
    a3 = v136; /*0x10079ae2d*/
    codexmate_lib::core::relay::codex_catalog::normalize_no_account_slot_preference::h2650e5fed1d457cb( /*0x10079ae31*/
      &v132,
      (__int64)v118,
      (__int64)v119,
      (__int64)v120,
      (__int64)v121,
      (__int64)v122,
      v126,
      0);
    v41 = v133; /*0x10079ae36*/
    v42 = v134; /*0x10079ae3a*/
    codexmate_lib::core::relay::codex_catalog::validate_no_account_slots::he4facdd0ca5ca838( /*0x10079ae68*/
      v95,
      v118,
      (__int64)v119,
      (__int64)v120,
      (__int64)v121,
      v133,
      v134);
    if ( *(_DWORD *)v95 != 11 ) /*0x10079ae74*/
    {
      v44 = v140; /*0x10079aeef*/
      qmemcpy((char *)v140 + 8, v95, 0x60u); /*0x10079af03*/
      v37 = (size_t)&v95[96]; /*0x10079af03*/
      *v44 = 0x8000000000000000LL; /*0x10079af10*/
LABEL_93:
      if ( v42 ) /*0x10079b85d*/
      {
        v78 = v41 + 7; /*0x10079b85f*/
        do /*0x10079b877*/
        {
          v79 = *(v78 - 7); /*0x10079b879*/
          if ( v79 ) /*0x10079b880*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v78 - 6), v79, 1); /*0x10079b88b*/
          v80 = *(v78 - 4); /*0x10079b890*/
          if ( v80 ) /*0x10079b897*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v78 - 3), v80, 1); /*0x10079b8a2*/
          v37 = *(v78 - 1); /*0x10079b8a7*/
          if ( v37 != 0x8000000000000000LL && v37 ) /*0x10079b8bd*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v78, v37, 1); /*0x10079b8c7*/
          v78 += 9; /*0x10079b870*/
          --v42; /*0x10079b874*/
        }
        while ( v42 ); /*0x10079b877*/
      }
      if ( v132 ) /*0x10079b8d5*/
      {
        v37 = 72 * v132; /*0x10079b8df*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, 72 * v132, 8); /*0x10079b8e8*/
      }
      goto LABEL_105; /*0x10079b8e8*/
    }
    if ( BYTE4(v94[39]) != 1 || !BYTE5(v94[39]) ) /*0x10079ae8a*/
    {
      LOBYTE(__n) = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfabc9aec947020b0( /*0x10079af31*/
                      v94[17],
                      v94[18],
                      v41,
                      v42);
      if ( !(_BYTE)__n ) /*0x10079af36*/
      {
        memcpy(__dst, v94, sizeof(__dst)); /*0x10079af4e*/
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$$GT$::he120409b891d899d(&__dst[16]); /*0x10079af5a*/
        __dst[18] = v134; /*0x10079af63*/
        __dst[17] = v133; /*0x10079af72*/
        __dst[16] = v132; /*0x10079af79*/
        codexmate_lib::core::relay::manager::RelayManager::persist::h834ff2e1c3ab231c(v95, v26, __dst); /*0x10079af8d*/
        if ( *(_DWORD *)v95 != 11 ) /*0x10079af99*/
        {
          v51 = v140; /*0x10079b2a8*/
          v52 = (char *)v140 + 8; /*0x10079b2ac*/
          qmemcpy((char *)v140 + 8, v95, 0x60u); /*0x10079b2bc*/
          v37 = (size_t)&v95[96]; /*0x10079b2bc*/
          v46 = (__int64 **)(v52 + 96); /*0x10079b2bc*/
          *v51 = 0x8000000000000000LL; /*0x10079b2c9*/
          goto LABEL_106; /*0x10079b2cc*/
        }
      }
      codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::h2cbcceba73514238(v95, v26); /*0x10079afa9*/
      v37 = (size_t)v95; /*0x10079afae*/
      v45 = v140; /*0x10079afba*/
      v46 = (__int64 **)v140; /*0x10079afbe*/
      memcpy(v140, v95, 0x140u); /*0x10079afc1*/
      v45[40] = 0; /*0x10079afc6*/
      v45[41] = 8; /*0x10079afd1*/
      v45[42] = 0; /*0x10079afdc*/
      v45[43] = 0x8000000000000000LL; /*0x10079aff1*/
      if ( !(_BYTE)__n ) /*0x10079affc*/
      {
LABEL_106:
        if ( (v141 & 1) == 0 /*0x10079b97e*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v124) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v46, v37) )
        {
          *((_BYTE *)v127 + 8) = 1; /*0x10079b98e*/
        }
        v39 = *v127; /*0x10079b919*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v127, v37); /*0x10079b91c*/
        goto LABEL_109; /*0x10079b91c*/
      }
      goto LABEL_93; /*0x10079affc*/
    }
    codexmate_lib::core::relay::manager::RelayManager::transition_paths::hcfaf80809ed84863(v95); /*0x10079ae9b*/
    qmemcpy(v87, &v95[8], 0x60u); /*0x10079aeba*/
    if ( *(_QWORD *)v95 == 0x8000000000000000LL ) /*0x10079aeca*/
    {
      v43 = v140; /*0x10079aed0*/
      qmemcpy((char *)v140 + 8, v87, 0x60u); /*0x10079aee4*/
      v37 = (size_t)&v87[12]; /*0x10079aee4*/
      *v43 = 0x8000000000000000LL; /*0x10079aee7*/
LABEL_92:
      v41 = v133; /*0x10079b852*/
      v42 = v134; /*0x10079b856*/
      goto LABEL_93; /*0x10079b856*/
    }
    memcpy(v83, &v95[104], sizeof(v83)); /*0x10079b01a*/
    qmemcpy(v82, v87, sizeof(v82)); /*0x10079b032*/
    v81 = *(_QWORD *)v95; /*0x10079b035*/
    if ( (unsigned __int8)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfabc9aec947020b0( /*0x10079b052*/
                            v94[17],
                            v94[18],
                            v133,
                            v134) )
    {
      codexmate_lib::core::relay::manager::RelayManager::verify_target_state_at_with_depth::h777afebe35249911( /*0x10079b072*/
        v95,
        *(_QWORD *)(v26 + 24),
        &v81,
        0,
        0);
      v47 = *(_QWORD *)&v95[16]; /*0x10079b077*/
      core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..invariants..Violation$GT$$GT$::h2689e7e37692b97c(v95); /*0x10079b085*/
      if ( !v47 ) /*0x10079b08d*/
      {
        codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h1afe826eb3685d5c(v95, v26); /*0x10079b363*/
        if ( *(_QWORD *)v95 == 0x8000000000000000LL ) /*0x10079b37c*/
        {
          codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::h2cbcceba73514238(v95, v26); /*0x10079b38c*/
          v37 = (size_t)v95; /*0x10079b391*/
          v66 = v140; /*0x10079b39d*/
          memcpy(v140, v95, 0x140u); /*0x10079b3a4*/
          v66[40] = 0; /*0x10079b3a9*/
          v66[41] = 8; /*0x10079b3b4*/
          v66[42] = 0; /*0x10079b3bf*/
          v66[43] = 0x8000000000000000LL; /*0x10079b3d4*/
LABEL_91:
          core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::he6cfaf149ad23955(&v81); /*0x10079b846*/
          goto LABEL_92; /*0x10079b84d*/
        }
        if ( *(_QWORD *)v95 ) /*0x10079b5e9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v95[8], *(_QWORD *)v95, 1); /*0x10079b5fb*/
      }
    }
    _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hb4649042da169073( /*0x10079b0a1*/
      v85,
      v94);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h043d8215e79628e6(v95, &v132); /*0x10079b0b1*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$$GT$::he120409b891d899d(v86); /*0x10079b0bd*/
    v86[2] = *(_QWORD *)&v95[16]; /*0x10079b0c9*/
    v86[1] = *(_QWORD *)&v95[8]; /*0x10079b0de*/
    v86[0] = *(_QWORD *)v95; /*0x10079b0e5*/
    codexmate_lib::core::relay::router_reconciler::RouterOnPlan::from_state::h2034138848607fa3(v93, v85, &v81); /*0x10079b104*/
    codexmate_lib::core::relay::router_reconciler::RouterOnPlan::ensure_ready::h466013c1c81290e2(v95, v93); /*0x10079b11a*/
    if ( *(_DWORD *)v95 == 11 ) /*0x10079b126*/
    {
      v139 = codexmate_lib::core::relay::codex_catalog::no_account_slot_routing_changed::h1165a0bed077aaa5( /*0x10079b147*/
               (__int64)v94[17],
               (__int64)v94[18],
               (__int64)v133,
               v134);
      *(_QWORD *)v95 = &v139; /*0x10079b14e*/
      *(_QWORD *)&v95[8] = &v81; /*0x10079b155*/
      *(_QWORD *)&v95[16] = v26; /*0x10079b15c*/
      *(_QWORD *)&v95[24] = v93; /*0x10079b163*/
      codexmate_lib::core::relay::router_transition::run::h1981d9b111991e9b( /*0x10079b185*/
        &v96,
        &v81,
        v95,
        *(_QWORD *)(v26 + 24),
        &v81,
        v26);
      v48 = v96; /*0x10079b18a*/
      if ( v96 == 0x8000000000000001LL ) /*0x10079b1a2*/
      {
        qmemcpy(v88, v97, 0x60u); /*0x10079b1be*/
        v87[0] = v88; /*0x10079b1c1*/
        v87[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x10079b1cf*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v95, &unk_1017CCFDF, v87); /*0x10079b1ee*/
        __n = *(_QWORD *)v95; /*0x10079b1fa*/
        v49 = v26; /*0x10079b221*/
        v50 = *(_QWORD *)&v95[8]; /*0x10079b224*/
        codexmate_lib::core::relay::manager::RelayManager::restore_router_enabled_stably::hba77f38f42b267c7( /*0x10079b22a*/
          v87,
          v49,
          &v81,
          *(_QWORD *)&v95[8],
          *(_QWORD *)&v95[16],
          v94);
        if ( LODWORD(v87[0]) == 11 ) /*0x10079b23c*/
        {
          if ( (_BYTE)v128 /*0x10079b282*/
            && (codexmate_lib::core::relay::manager::launch_codex_app_warning::he8065dcd749a4f10(v95),
                v100 = *(_QWORD *)&v95[8],
                v101 = *(_QWORD *)&v95[16],
                *(_QWORD *)v95 != 0x8000000000000000LL) )
          {
            *(_QWORD *)&v95[16] = v101; /*0x10079b728*/
            *(_QWORD *)&v95[8] = v100; /*0x10079b72f*/
            codexmate_lib::core::relay::manager::RelayManager::set_codex_no_account_slots::_$u7b$$u7b$closure$u7d$$u7d$::h4c090519e89ea688( /*0x10079b74b*/
              &v103,
              v95);
            v129 = (unsigned __int64)v103; /*0x10079b75e*/
            v130 = (__int64)v104; /*0x10079b765*/
            v131 = v105; /*0x10079b770*/
          }
          else
          {
            v129 = 0; /*0x10079b288*/
            v130 = 1; /*0x10079b293*/
            v131 = nullptr; /*0x10079b29b*/
          }
          *(_QWORD *)v95 = &v129; /*0x10079b77b*/
          *(_QWORD *)&v95[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10079b789*/
          *(_QWORD *)&v95[16] = v88; /*0x10079b790*/
          *(_QWORD *)&v95[24] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x10079b797*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v99, &unk_1017CD00B, v95); /*0x10079b7b3*/
          v76 = v140; /*0x10079b7bf*/
          *((_QWORD *)v140 + 4) = v99[2]; /*0x10079b7c3*/
          v77 = v99[0]; /*0x10079b7c7*/
          v76[3] = v99[1]; /*0x10079b7d5*/
          v76[2] = v77; /*0x10079b7d9*/
          v76[1] = 10; /*0x10079b7dd*/
          *v76 = 0x8000000000000000LL; /*0x10079b7ef*/
          if ( v129 ) /*0x10079b7fc*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, v129, 1); /*0x10079b807*/
        }
        else
        {
          qmemcpy(v95, v87, 0x60u); /*0x10079b562*/
          v103 = v88; /*0x10079b565*/
          v104 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x10079b56c*/
          v105 = v95; /*0x10079b573*/
          v106 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x10079b57a*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_1017CD058, &v103); /*0x10079b596*/
          v74 = v140; /*0x10079b5a2*/
          *((_QWORD *)v140 + 4) = v98[2]; /*0x10079b5a6*/
          v75 = v98[0]; /*0x10079b5aa*/
          v74[3] = v98[1]; /*0x10079b5b8*/
          v74[2] = v75; /*0x10079b5bc*/
          v74[1] = 10; /*0x10079b5c0*/
          *v74 = 0x8000000000000000LL; /*0x10079b5d2*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v95); /*0x10079b5dc*/
        }
        v37 = __n; /*0x10079b80c*/
        if ( __n ) /*0x10079b813*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, __n, 1); /*0x10079b81d*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v88); /*0x10079b829*/
      }
      else
      {
        v54 = (_BYTE *)v97[0]; /*0x10079b2fa*/
        v55 = (__int64 (__fastcall *)(_QWORD, _QWORD))v97[1]; /*0x10079b301*/
        v56 = (_BYTE *)v97[2]; /*0x10079b308*/
        v57 = (__int64 (__fastcall *)(_QWORD, _QWORD))v97[3]; /*0x10079b30f*/
        v58 = v97[4]; /*0x10079b316*/
        v59 = v97[5]; /*0x10079b31d*/
        v60 = v97[6]; /*0x10079b324*/
        v61 = v97[7]; /*0x10079b32b*/
        v62 = v97[8]; /*0x10079b332*/
        v63 = v97[9]; /*0x10079b339*/
        if ( v96 == 0x8000000000000000LL ) /*0x10079b343*/
        {
          v64 = 8; /*0x10079b349*/
          v48 = 0; /*0x10079b34f*/
          v65 = 0; /*0x10079b351*/
        }
        else
        {
          v64 = v97[0]; /*0x10079b3e0*/
          v54 = (_BYTE *)v97[2]; /*0x10079b3e3*/
          v56 = (_BYTE *)v97[4]; /*0x10079b3e6*/
          v58 = v97[6]; /*0x10079b3e9*/
          v60 = v97[8]; /*0x10079b3ec*/
          v62 = v97[10]; /*0x10079b3ef*/
          v65 = v97[1]; /*0x10079b3f6*/
          v55 = (__int64 (__fastcall *)(_QWORD, _QWORD))v97[3]; /*0x10079b3f9*/
          v57 = (__int64 (__fastcall *)(_QWORD, _QWORD))v97[5]; /*0x10079b3fc*/
          v59 = v97[7]; /*0x10079b3ff*/
          v61 = v97[9]; /*0x10079b402*/
          v63 = v97[11]; /*0x10079b405*/
        }
        v103 = v54; /*0x10079b40c*/
        v104 = v55; /*0x10079b413*/
        v105 = v56; /*0x10079b41a*/
        v106 = v57; /*0x10079b421*/
        v107 = v58; /*0x10079b428*/
        v108 = v59; /*0x10079b42f*/
        v109 = v60; /*0x10079b436*/
        v110 = v61; /*0x10079b43d*/
        v111 = v62; /*0x10079b444*/
        v112 = v63; /*0x10079b44b*/
        v113 = v48; /*0x10079b452*/
        v114 = v64; /*0x10079b459*/
        v115 = v65; /*0x10079b460*/
        v67 = v88; /*0x10079b467*/
        v68 = v26; /*0x10079b46e*/
        a3 = v136; /*0x10079b471*/
        codexmate_lib::core::relay::manager::RelayManager::snapshot::hdbd948221248bbf9(v88, v26); /*0x10079b475*/
        if ( v91 == 1 ) /*0x10079b481*/
        {
          if ( v92 ) /*0x10079b48a*/
          {
            v67 = v89; /*0x10079b48c*/
            v68 = v90; /*0x10079b493*/
            if ( (unsigned __int8)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfabc9aec947020b0( /*0x10079b4a2*/
                                    v89,
                                    v90,
                                    v133,
                                    v134) )
            {
              if ( (_BYTE)v128 ) /*0x10079b4b2*/
                codexmate_lib::core::relay::manager::launch_codex_app_warning::he8065dcd749a4f10(&v129); /*0x10079b4bf*/
              else
                v129 = 0x8000000000000000LL; /*0x10079b60f*/
              codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::h2cbcceba73514238(v87, v26); /*0x10079b620*/
              *(_QWORD *)&v95[360] = v131; /*0x10079b629*/
              *(_QWORD *)&v95[352] = v130; /*0x10079b63b*/
              *(_QWORD *)&v95[344] = v129; /*0x10079b642*/
              *(_QWORD *)&v95[320] = v113; /*0x10079b657*/
              *(_QWORD *)&v95[328] = v114; /*0x10079b65e*/
              *(_QWORD *)&v95[336] = v115; /*0x10079b66c*/
              memcpy(v95, v87, 0x140u); /*0x10079b689*/
              memcpy(v140, v95, 0x170u); /*0x10079b69a*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v88); /*0x10079b6a6*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::h9fad7015310d244b(&v103); /*0x10079b6b2*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnPlan$GT$::he08c36b72bfe0f94(v93); /*0x10079b6be*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v85); /*0x10079b6ca*/
              core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::he6cfaf149ad23955(&v81); /*0x10079b6d6*/
              core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$$GT$::he120409b891d899d(&v132); /*0x10079b6df*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v94); /*0x10079b6eb*/
              core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$usize$GT$$GT$::h1590b224b46c270c( /*0x10079b6fb*/
                v127,
                v141);
              core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$usize$GT$$GT$::h1590b224b46c270c( /*0x10079b708*/
                v135,
                (unsigned __int8)v138);
              core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$$GT$::he120409b891d899d(a3); /*0x10079b710*/
              return v140; /*0x10079b715*/
            }
          }
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67, v68, v69, v70); /*0x10079b4c9*/
        v71 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(78, 1); /*0x10079b4d8*/
        if ( !v71 ) /*0x10079b4e0*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 78); /*0x10079b9ba*/
        v72 = v71; /*0x10079b4e6*/
        v37 = (size_t)&unk_1016793D7; /*0x10079b4e9*/
        memcpy(v71, &unk_1016793D7, 0x4Eu); /*0x10079b4f8*/
        v73 = v140; /*0x10079b4fd*/
        *((_QWORD *)v140 + 1) = 10; /*0x10079b501*/
        v73[2] = 78; /*0x10079b509*/
        v73[3] = v72; /*0x10079b511*/
        v73[4] = 78; /*0x10079b515*/
        *v73 = 0x8000000000000000LL; /*0x10079b527*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v88); /*0x10079b531*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::hd9e96c63ab56e645(&v113); /*0x10079b53d*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..ReconciledRouterTarget$GT$::h9fad7015310d244b(&v103); /*0x10079b549*/
      }
    }
    else
    {
      v53 = v140; /*0x10079b2d1*/
      qmemcpy((char *)v140 + 8, v95, 0x60u); /*0x10079b2e5*/
      v37 = (size_t)&v95[96]; /*0x10079b2e5*/
      *v53 = 0x8000000000000000LL; /*0x10079b2f2*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_reconciler..RouterOnPlan$GT$::he08c36b72bfe0f94(v93); /*0x10079b835*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v85); /*0x10079b841*/
    goto LABEL_91; /*0x10079b841*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v95[8], v6 + 16); /*0x10079aa0f*/
  *(_QWORD *)v95 = 9; /*0x10079aa14*/
  v14 = (char *)v140; /*0x10079aa1f*/
  qmemcpy((char *)v140 + 8, v95, 0x60u); /*0x10079aa33*/
LABEL_11:
  *(_QWORD *)v14 = 0x8000000000000000LL; /*0x10079aa36*/
LABEL_12:
  v15 = a3[1]; /*0x10079aa43*/
  v16 = a3[2]; /*0x10079aa48*/
  if ( v16 ) /*0x10079aa50*/
  {
    v17 = (_QWORD *)(v15 + 56); /*0x10079aa52*/
    do /*0x10079aa67*/
    {
      v18 = *(v17 - 7); /*0x10079aa69*/
      if ( v18 ) /*0x10079aa70*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v17 - 6), v18, 1); /*0x10079aa7b*/
      v19 = *(v17 - 4); /*0x10079aa80*/
      if ( v19 ) /*0x10079aa87*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v17 - 3), v19, 1); /*0x10079aa92*/
      v20 = *(v17 - 1); /*0x10079aa97*/
      if ( v20 != 0x8000000000000000LL && v20 ) /*0x10079aaad*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v20, 1); /*0x10079aab7*/
      v17 += 9; /*0x10079aa60*/
      --v16; /*0x10079aa64*/
    }
    while ( v16 ); /*0x10079aa67*/
  }
  if ( *a3 ) /*0x10079aabe*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 72LL * *a3, 8); /*0x10079aad7*/
  return v140; /*0x10079aae0*/
}