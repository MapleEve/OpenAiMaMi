// __ZN13codexmate_lib4core5relay7manager12RelayManager6upsert @ 0x10027f970 | 基线 same-set
// [FULL IDA decompiler]

_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::upsert::h5326725eb16ae26b(
        _QWORD *__dst,
        _QWORD *a2,
        _QWORD *a3,
        double a4,
        double a5)
{
  _QWORD *v7; // r14
  __int64 v8; // rsi
  _BYTE *v9; // r15
  int v10; // r12d
  __int64 v11; // rsi
  char v12; // r12
  char v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rax
  char v24; // r13
  __int64 v25; // rsi
  __int64 v26; // r15
  _QWORD *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  char v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // rcx
  _QWORD *v39; // rbx
  char v40; // r14
  char v41; // r13
  __int64 v42; // r15
  _QWORD *v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  int v53; // eax
  void *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // r15
  int v58; // eax
  int v59; // eax
  __int64 v60; // rdi
  int v61; // eax
  int v62; // eax
  _QWORD *v63; // rsi
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  char *v70; // rsi
  char *v71; // rdi
  __int64 v72; // r15
  char v73; // r12
  __int64 v74; // rdx
  __int64 v75; // rcx
  char v76; // r12
  __int64 v77; // rcx
  __int64 v78; // rax
  bool v79; // zf
  __int64 v80; // rsi
  char v81; // dl
  _QWORD *v82; // r12
  unsigned __int64 v83; // r12
  __int64 v84; // rsi
  unsigned __int64 v85; // r15
  __int64 v86; // r13
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  bool v89; // cf
  unsigned __int64 v90; // r15
  unsigned __int64 v91; // r13
  unsigned __int64 v92; // r12
  __int64 v93; // rax
  int v94; // eax
  int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // rcx
  void *v98; // r12
  __int128 v99; // kr20_16
  __int128 v100; // xmm0
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  _QWORD *v104; // r12
  _QWORD *v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // rsi
  __int64 v108; // rsi
  __int64 v109; // rsi
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rax
  int v113; // eax
  _QWORD v114[29]; // [rsp+18h] [rbp-818h] BYREF
  _QWORD v115[29]; // [rsp+100h] [rbp-730h] BYREF
  _BYTE __dsta[232]; // [rsp+1E8h] [rbp-648h] BYREF
  __int64 v117; // [rsp+2D0h] [rbp-560h] BYREF
  _BYTE v118[24]; // [rsp+2D8h] [rbp-558h]
  __int128 v119; // [rsp+2F0h] [rbp-540h]
  char v120; // [rsp+3F4h] [rbp-43Ch]
  _QWORD v121[3]; // [rsp+3F8h] [rbp-438h] BYREF
  _QWORD v122[3]; // [rsp+410h] [rbp-420h] BYREF
  _QWORD v123[3]; // [rsp+428h] [rbp-408h] BYREF
  _QWORD v124[12]; // [rsp+440h] [rbp-3F0h] BYREF
  __int128 v125; // [rsp+4A0h] [rbp-390h] BYREF
  __int64 v126; // [rsp+4B0h] [rbp-380h]
  __int64 v127; // [rsp+4B8h] [rbp-378h]
  __int64 v128; // [rsp+4C0h] [rbp-370h]
  __int64 v129; // [rsp+4C8h] [rbp-368h]
  _QWORD *v130; // [rsp+4D0h] [rbp-360h]
  __int64 v131; // [rsp+4D8h] [rbp-358h] BYREF
  __int64 v132; // [rsp+4E0h] [rbp-350h]
  __int64 v133; // [rsp+4E8h] [rbp-348h]
  _OWORD v134[19]; // [rsp+4F0h] [rbp-340h] BYREF
  __int64 v135; // [rsp+620h] [rbp-210h] BYREF
  __int64 v136; // [rsp+628h] [rbp-208h]
  __int64 v137; // [rsp+630h] [rbp-200h]
  __int64 v138; // [rsp+638h] [rbp-1F8h] BYREF
  __int128 v139; // [rsp+640h] [rbp-1F0h]
  __int128 v140; // [rsp+650h] [rbp-1E0h] BYREF
  __int64 v141; // [rsp+660h] [rbp-1D0h]
  __int64 v142; // [rsp+668h] [rbp-1C8h] BYREF
  __int64 v143; // [rsp+670h] [rbp-1C0h]
  __int64 v144; // [rsp+678h] [rbp-1B8h]
  __int64 v145; // [rsp+680h] [rbp-1B0h]
  __int64 v146; // [rsp+688h] [rbp-1A8h]
  char **v147; // [rsp+690h] [rbp-1A0h]
  _BYTE v148[232]; // [rsp+698h] [rbp-198h] BYREF
  _OWORD *v149; // [rsp+780h] [rbp-B0h] BYREF
  __int64 (__fastcall *v150)(_QWORD, _QWORD); // [rsp+788h] [rbp-A8h]
  _QWORD *v151; // [rsp+790h] [rbp-A0h]
  __int64 (__fastcall *v152)(); // [rsp+798h] [rbp-98h]
  _QWORD *v153; // [rsp+7A0h] [rbp-90h]
  __int64 v154; // [rsp+7A8h] [rbp-88h]
  _OWORD *v155; // [rsp+7B0h] [rbp-80h] BYREF
  __int64 (__fastcall *v156)(_QWORD, _QWORD); // [rsp+7B8h] [rbp-78h]
  _QWORD *v157; // [rsp+7C0h] [rbp-70h]
  _QWORD *v158; // [rsp+7C8h] [rbp-68h]
  _QWORD *v159; // [rsp+7D0h] [rbp-60h]
  __int64 v160; // [rsp+7D8h] [rbp-58h]
  unsigned __int64 v161; // [rsp+7E0h] [rbp-50h]
  int v162; // [rsp+7E8h] [rbp-48h]
  unsigned __int8 v163; // [rsp+7EFh] [rbp-41h]
  _QWORD *v164; // [rsp+7F0h] [rbp-40h]
  __int64 v165; // [rsp+7F8h] [rbp-38h]
  __int64 v166; // [rsp+800h] [rbp-30h]

  v7 = __dst;
  v8 = a2[2];
  if ( __OFSUB__(0, *(_QWORD *)(v8 + 16)) )
  {
    v158 = a2;
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v134);
    LODWORD(v9) = v134[0];
    v10 = (SLODWORD(v134[0]) >> 13) - 1;
    if ( SLODWORD(v134[0]) >> 13 <= 0 )
    {
      v14 = (1 - (SLODWORD(v134[0]) >> 13)) / 0x190u + 1;
      v10 += 400 * v14;
      LODWORD(v160) = -146097 * v14;
    }
    else
    {
      LODWORD(v160) = 0;
    }
    v161 = DWORD1(v134[0]);
    v165 = DWORD2(v134[0]);
    v130 = a3 + 6;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v142, a3 + 6);
    v153 = a3 + 12;
    if ( a3[12] != 0x8000000000000000LL )
    {
      codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997(v134, a3[13], a3[14]);
      if ( *(_QWORD *)&v134[0] != 0x8000000000000000LL )
      {
        __dst[4] = *(_QWORD *)&v134[1];
        *((_OWORD *)__dst + 1) = v134[0];
LABEL_35:
        __dst[1] = 9;
        *__dst = 0x8000000000000000LL;
        v31 = 1;
        v12 = 1;
        v13 = 1;
        v32 = v142;
        if ( v142 )
LABEL_36:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, v32, 1);
LABEL_37:
        v33 = *v153;
        if ( *v153 != 0x8000000000000000LL && v33 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[13], v33, 1);
        if ( !v31 )
          goto LABEL_43;
        goto LABEL_41;
      }
    }
    v15 = 0;
    if ( a3[15] != 0x8000000000000000LL )
      v15 = a3[17];
    v16 = 8;
    if ( a3[15] != 0x8000000000000000LL )
      v16 = a3[16];
    codexmate_lib::core::relay::models::normalize_relay_models::hdc474f64afe66555(
      v134,
      v16,
      v15,
      a3[10],
      a3[11],
      *((unsigned __int8 *)a3 + 169));
    if ( *(_QWORD *)&v134[0] == 0x8000000000000000LL )
    {
      v17 = *((_QWORD *)&v134[1] + 1);
      v18 = *((_QWORD *)&v134[0] + 1);
      v19 = *(_QWORD *)&v134[1];
      *(_OWORD *)v148 = *(_OWORD *)((char *)v134 + 8);
      *(_QWORD *)&v148[16] = *((_QWORD *)&v134[1] + 1);
      v20 = *(_QWORD *)&v118[16];
      *(_QWORD *)&v148[24] = *(_QWORD *)&v118[16];
      *(_OWORD *)&v148[32] = v119;
      *((_OWORD *)__dst + 3) = v119;
      __dst[5] = v20;
      __dst[4] = v17;
      __dst[3] = v19;
      __dst[2] = v18;
      goto LABEL_35;
    }
    v119 = v134[2];
    *(_OWORD *)&v118[8] = v134[1];
    *(_QWORD *)v118 = *((_QWORD *)&v134[0] + 1);
    LODWORD(v21) = LOBYTE(v134[3]);
    *(_OWORD *)v148 = v134[0];
    *(_OWORD *)&v148[16] = v134[1];
    *(_OWORD *)&v148[32] = v134[2];
    v141 = *(_QWORD *)&v134[1];
    v140 = v134[0];
    v139 = v134[2];
    v138 = *((_QWORD *)&v134[1] + 1);
    codexmate_lib::core::relay::upstream_url::normalize_upstream_base_url::ha7493063c3bbb978(v134, a3[4], a4, a5);
    v22 = *((_QWORD *)&v134[0] + 1);
    v117 = *((_QWORD *)&v134[0] + 1);
    *(_OWORD *)v118 = v134[1];
    if ( LODWORD(v134[0]) == 1 )
    {
      __dst[4] = *(_QWORD *)&v118[8];
      v23 = v117;
      __dst[3] = *(_QWORD *)v118;
      __dst[2] = v23;
      __dst[1] = 9;
      *__dst = 0x8000000000000000LL;
      LODWORD(v166) = 1;
      LODWORD(v165) = 1;
      v24 = 1;
      v25 = v138;
      if ( !v138 )
      {
LABEL_20:
        v26 = v141;
        if ( !v141 )
        {
LABEL_30:
          v13 = v24;
          if ( (_QWORD)v140 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v140 + 1), 96 * v140, 8);
          v12 = v165;
          v31 = v166;
          v32 = v142;
          if ( v142 )
            goto LABEL_36;
          goto LABEL_37;
        }
        v27 = (_QWORD *)(*((_QWORD *)&v140 + 1) + 72LL);
        while ( 1 )
        {
          v28 = *(v27 - 7);
          if ( v28 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v27 - 6), v28, 1);
          v29 = *(v27 - 1);
          if ( !(2 * v29) )
            break;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v27, v29, 1);
          v30 = *(v27 - 4);
          if ( v30 )
            goto LABEL_29;
LABEL_22:
          v27 += 12;
          if ( !--v26 )
            goto LABEL_30;
        }
        v30 = *(v27 - 4);
        if ( !v30 )
          goto LABEL_22;
LABEL_29:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v27 - 3), v30, 1);
        goto LABEL_22;
      }
LABEL_19:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v25, 1);
      goto LABEL_20;
    }
    LOBYTE(v146) = v21;
    v137 = *(_QWORD *)&v118[8];
    v136 = *(_QWORD *)v118;
    v135 = v117;
    v49 = v158[4];
    LODWORD(v50) = v49 + 16;
    v159 = (_QWORD *)(v49 + 16);
    v145 = v49;
    v51 = *(_QWORD *)(v49 + 16);
    if ( !v51 )
    {
      LOBYTE(v50) = 1;
      LODWORD(v166) = v50;
      LOBYTE(v50) = 1;
      LODWORD(v164) = v50;
      v50 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v159);
      v51 = v50;
    }
    LOBYTE(v50) = 1;
    LODWORD(v166) = v50;
    LOBYTE(v50) = 1;
    LODWORD(v164) = v50;
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v51);
    v53 = std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6;
    v154 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      LOBYTE(v53) = 1;
      LODWORD(v164) = v53;
      v61 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v51, v22, v52, 0x7FFFFFFFFFFFFFFFLL);
      LOBYTE(v61) = v61 ^ 1;
      v162 = v61;
      if ( *(_BYTE *)(v145 + 24) )
        goto LABEL_73;
    }
    else
    {
      v162 = 0;
      if ( *(_BYTE *)(v145 + 24) )
      {
LABEL_73:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v22);
        v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1);
        if ( !v54 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40);
        v57 = (unsigned __int64)v54;
        qmemcpy(v54, "Codex router transition lock is poisoned", 40);
        if ( !(_BYTE)v162 )
        {
          v58 = std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6;
          if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v154) != 0 )
          {
            LOBYTE(v58) = 1;
            LODWORD(v164) = v58;
            if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(40, 1, v55, v56) )
              *(_BYTE *)(v145 + 24) = 1;
          }
        }
        v59 = (int)v159;
        v60 = *v159;
        LOBYTE(v59) = 1;
        LODWORD(v164) = v59;
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v60);
        v7[1] = 10;
        v7[2] = 40;
        *((_BYTE *)v7 + 24) = v57;
        *((_BYTE *)v7 + 31) = HIBYTE(v57);
        *(_WORD *)((char *)v7 + 29) = HIDWORD(v57) >> 8;
        *(_DWORD *)((char *)v7 + 25) = v57 >> 8;
        v7[4] = 40;
        *v7 = 0x8000000000000000LL;
        LODWORD(v166) = 1;
        LOBYTE(v21) = 1;
        LODWORD(v164) = 1;
        goto LABEL_143;
      }
    }
    v62 = (int)v158;
    v63 = v158 + 5;
    LOBYTE(v62) = 1;
    LODWORD(v166) = v62;
    LOBYTE(v62) = 1;
    LODWORD(v164) = v62;
    codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba(
      v134,
      v158 + 5,
      &unk_1015DEB7D,
      26);
    v21 = *(_QWORD *)&v134[0];
    if ( *(_QWORD *)&v134[0] != 11 )
    {
      v70 = (char *)&v134[1] + 1;
      v71 = (char *)v7 + 25;
      v72 = *((_QWORD *)&v134[0] + 1);
      v73 = v134[1];
      memcpy((char *)v7 + 25, (char *)&v134[1] + 1, 0x4Fu);
      v7[1] = v21;
      v7[2] = v72;
      *((_BYTE *)v7 + 24) = v73;
      *v7 = 0x8000000000000000LL;
      LODWORD(v166) = 1;
      LOBYTE(v21) = 1;
      LODWORD(v164) = 1;
LABEL_140:
      if ( !(_BYTE)v162
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v154) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v71, v70, v74, v75) )
      {
        *(_BYTE *)(v145 + 24) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v159);
LABEL_143:
      LODWORD(v165) = v21;
      if ( v135 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, v135, 1);
      v24 = (char)v164;
      v25 = v138;
      if ( !v138 )
        goto LABEL_20;
      goto LABEL_19;
    }
    v163 = v134[1];
    v147 = *((char ***)&v134[0] + 1);
    v64 = v158[1];
    v164 = (_QWORD *)(v64 + 16);
    v21 = v64;
    v65 = *(_QWORD *)(v64 + 16);
    if ( !v65 )
      v65 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v164);
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v65);
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v154) != 0 )
    {
      v113 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v65, v63, v66, v67);
      LOBYTE(v113) = v113 ^ 1;
      LODWORD(v166) = v113;
      if ( !*(_BYTE *)(v21 + 24) )
        goto LABEL_83;
    }
    else
    {
      LODWORD(v166) = 0;
      if ( !*(_BYTE *)(v21 + 24) )
      {
LABEL_83:
        _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393(
          &v117,
          v21 + 32);
        if ( !(_BYTE)v166
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v154) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 &v117,
                                 v21 + 32,
                                 v68,
                                 v69) )
        {
          *(_BYTE *)(v21 + 24) = 1;
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v164);
        if ( v120 )
        {
          codexmate_lib::core::relay::manager::codex_router_provider_operation_locked_error::h60ede02d74b2a292(v134);
          qmemcpy(v7 + 1, v134, 0x60u);
          v70 = (char *)&v134[6];
          *v7 = 0x8000000000000000LL;
          LODWORD(v166) = 1;
          LOBYTE(v21) = 1;
          LOBYTE(v9) = 1;
          goto LABEL_137;
        }
        v21 = 1000
            * (v161
             + 86400LL
             * (int)(((v10 / 100) >> 2)
                   + ((1461 * v10) >> 2)
                   + v160
                   + (((unsigned int)v9 >> 4) & 0x1FF)
                   - v10 / 100
                   - 719163))
            + ((unsigned __int64)(1125899907 * v165) >> 50);
        if ( *v153 == 0x8000000000000000LL )
        {
          codexmate_lib::core::relay::manager::short_id::hb044325f66ad609e(v134);
          *(_QWORD *)v148 = v134;
          *(_QWORD *)&v148[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v125, &unk_1017BAB0D, v148);
          if ( *(_QWORD *)&v134[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v134[0] + 1), *(_QWORD *)&v134[0], 1);
          v166 = *((_QWORD *)&v125 + 1);
          v160 = v125;
          v165 = *a3;
          v9 = (_BYTE *)a3[2];
          v161 = a3[1];
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v155, &v135);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v149, &v142);
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v124, &v138);
          v76 = *((_BYTE *)a3 + 170);
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h30f03e4abd722ada(v134, &v140);
          v77 = a3[18];
          v78 = 0;
          v79 = v77 == 0x8000000000000000LL;
          if ( v77 == 0x8000000000000000LL )
            v77 = 0;
          v80 = 1;
          if ( !v79 )
          {
            v80 = a3[19];
            v78 = a3[20];
          }
          v81 = *((_BYTE *)a3 + 168);
          *(_QWORD *)&v148[16] = v126;
          *(_OWORD *)v148 = v125;
          *(_QWORD *)&v148[24] = v165;
          *(_QWORD *)&v148[32] = v161;
          *(_QWORD *)&v148[40] = v9;
          *(_QWORD *)&v148[48] = v155;
          *(_QWORD *)&v148[56] = v156;
          *(_QWORD *)&v148[64] = v157;
          *(_QWORD *)&v148[72] = v149;
          *(_QWORD *)&v148[80] = v150;
          *(_QWORD *)&v148[88] = v151;
          v148[228] = 0;
          *(_QWORD *)&v148[112] = v124[2];
          *(_QWORD *)&v148[104] = v124[1];
          *(_QWORD *)&v148[96] = v124[0];
          v148[230] = v146;
          v148[231] = v76;
          *(_QWORD *)&v148[136] = *(_QWORD *)&v134[1];
          *(_OWORD *)&v148[120] = v134[0];
          *(_QWORD *)&v148[144] = v77;
          *(_QWORD *)&v148[152] = v80;
          *(_QWORD *)&v148[160] = v78;
          *(_DWORD *)&v148[224] = 0;
          *(_QWORD *)&v148[192] = -1;
          *(_QWORD *)&v148[200] = 0;
          *(_QWORD *)&v148[208] = v21;
          *(_QWORD *)&v148[216] = v21;
          *(_QWORD *)&v148[168] = 0x8000000000000000LL;
          v148[229] = v81;
          _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec(
            v134,
            v148);
          alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5e2c2f5828bca20e(&v117, v134);
          memcpy(__dsta, v148, sizeof(__dsta));
          LODWORD(v21) = 0;
          LODWORD(v9) = 0;
          v82 = v158;
          goto LABEL_130;
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v134, v153);
        v83 = v21;
        v84 = *((_QWORD *)&v134[0] + 1);
        v161 = *(_QWORD *)&v134[0];
        v85 = *(_QWORD *)&v118[8];
        v86 = *(_QWORD *)v118;
        *(_QWORD *)&v134[0] = *(_QWORD *)v118;
        *((_QWORD *)&v134[0] + 1) = *(_QWORD *)v118 + 232LL * *(_QWORD *)&v118[8];
        v160 = v84;
        v165 = *(_QWORD *)&v134[1];
        v87 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h66e3ee029f1c9628(v134);
        v89 = v88 < v85;
        v90 = v88;
        v166 = v87;
        if ( (v89 & (unsigned __int8)v87) != 0 )
        {
          _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec(
            v115,
            232 * v88 + v86);
          v91 = v83;
          if ( v115[0] != 0x8000000000000000LL )
          {
            memcpy(v148, v115, sizeof(v148));
LABEL_101:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v131, &v148[72]);
            if ( *(_QWORD *)v148 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[8], *(_QWORD *)v148, 1);
            v92 = v90;
            *(_QWORD *)v148 = v161;
            *(_QWORD *)&v148[8] = v160;
            *(_QWORD *)&v148[16] = v165;
            *(_QWORD *)&v134[1] = a3[2];
            v93 = *a3;
            *((_QWORD *)&v134[0] + 1) = a3[1];
            *(_QWORD *)&v134[0] = v93;
            if ( *(_QWORD *)&v148[24] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[32], *(_QWORD *)&v148[24], 1);
            *(_QWORD *)&v148[40] = *(_QWORD *)&v134[1];
            v94 = v134[0];
            *(_OWORD *)&v148[24] = v134[0];
            LOBYTE(v94) = 1;
            LODWORD(v165) = v94;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v134, &v135);
            if ( *(_QWORD *)&v148[48] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[56], *(_QWORD *)&v148[48], 1);
            *(_QWORD *)&v148[64] = *(_QWORD *)&v134[1];
            *(_OWORD *)&v148[48] = v134[0];
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v134, &v138);
            v9 = &v148[96];
            if ( *(_QWORD *)&v148[96] )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[104], *(_QWORD *)&v148[96], 1);
            *(_QWORD *)&v148[112] = *(_QWORD *)&v134[1];
            *(_OWORD *)&v148[96] = v134[0];
            v148[230] = v146;
            v148[231] = *((_BYTE *)a3 + 170);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h30f03e4abd722ada(v134, &v140);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..RelayModelEntry$GT$$GT$::h0c66d149bfaf8c94(&v148[120]);
            *(_QWORD *)&v148[136] = *(_QWORD *)&v134[1];
            v95 = v134[0];
            *(_OWORD *)&v148[120] = v134[0];
            LOBYTE(v95) = 1;
            LODWORD(v165) = v95;
            if ( a3[18] != 0x8000000000000000LL )
            {
              v129 = a3[20];
              v96 = a3[18];
              v128 = a3[19];
              v127 = v96;
              v9 = &v148[144];
              if ( *(_QWORD *)&v148[144] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[152], *(_QWORD *)&v148[144], 1);
              *(_QWORD *)&v148[160] = v129;
              *(_QWORD *)&v148[152] = v128;
              *(_QWORD *)&v148[144] = v127;
              LODWORD(v165) = 0;
            }
            v148[229] = *((_BYTE *)a3 + 168);
            *(_QWORD *)&v148[216] = v91;
            if ( !*(_QWORD *)&v148[208] )
              *(_QWORD *)&v148[208] = v91;
            if ( v144 )
            {
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v134, &v142);
              if ( *(_QWORD *)&v148[72] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[80], *(_QWORD *)&v148[72], 1);
              *(_QWORD *)&v148[88] = *(_QWORD *)&v134[1];
              *(_OWORD *)&v148[72] = v134[0];
              LOBYTE(v9) = 1;
            }
            else
            {
              if ( *(_QWORD *)&v148[72] )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v148[80], *(_QWORD *)&v148[72], 1);
              *(_QWORD *)&v148[88] = v133;
              *(_QWORD *)&v148[80] = v132;
              *(_QWORD *)&v148[72] = v131;
              LODWORD(v9) = 0;
            }
            if ( (v166 & 1) != 0 )
            {
              _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec(
                v134,
                v148);
              if ( v92 >= *(_QWORD *)&v118[8] )
                core::panicking::panic_bounds_check::h56740b1198b22635(v92, *(_QWORD *)&v118[8], &off_10195DD08, v97);
              v98 = (void *)(*(_QWORD *)v118 + 232 * v92);
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v98);
              memcpy(v98, v134, 0xE8u);
            }
            else
            {
              _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec(
                v134,
                v148);
              alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h5e2c2f5828bca20e(&v117, v134);
            }
            LODWORD(v21) = v165;
            memcpy(__dsta, v148, sizeof(__dsta));
            v82 = v158;
            if ( (_BYTE)v9 && v131 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1);
            LOBYTE(v9) = 1;
LABEL_130:
            _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec(
              v148,
              __dsta);
            v165 = v144;
            codexmate_lib::core::relay::manager::RelayManager::sync_codex_config::haffd47a484d4cdfa(v134, v82);
            if ( LODWORD(v134[0]) != 11 )
            {
              qmemcpy(v7 + 1, v134, 0x60u);
              v70 = (char *)&v134[6];
              goto LABEL_135;
            }
            if ( v165 )
            {
              v160 = *v82 + 16LL;
              codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53(
                v124,
                v160,
                *(_QWORD *)&v148[8],
                *(_QWORD *)&v148[16]);
              if ( LODWORD(v124[0]) == 1 )
              {
                v151 = (_QWORD *)v124[3];
                v150 = (__int64 (__fastcall *)(_QWORD, _QWORD))v124[2];
                v149 = (_OWORD *)v124[1];
                v70 = (char *)&v149;
                codexmate_lib::core::relay::manager::RelayManager::upsert::_$u7b$$u7b$closure$u7d$$u7d$::hdacd303f8dc7f8ff(
                  v134,
                  &v149);
                v99 = v134[1];
                *(_OWORD *)(v7 + 11) = v134[5];
                *(_OWORD *)(v7 + 9) = v134[4];
                *(_OWORD *)(v7 + 7) = v134[3];
                *(_OWORD *)(v7 + 5) = v134[2];
                v100 = v134[0];
                *(_OWORD *)(v7 + 3) = v99;
                *(_OWORD *)(v7 + 1) = v100;
LABEL_135:
                *v7 = 0x8000000000000000LL;
LABEL_136:
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v148);
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(__dsta);
                LODWORD(v166) = 0;
LABEL_137:
                LODWORD(v164) = (_DWORD)v9;
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v117);
                if ( (v163 & 1) == 0
                  && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v154) != 0
                  && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                         &v117,
                                         v70,
                                         v101,
                                         v102) )
                {
                  *((_BYTE *)v147 + 8) = 1;
                }
                v71 = *v147;
                std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v147);
                goto LABEL_140;
              }
              v161 = v124[1];
              v166 = v124[2];
              v146 = v124[3];
              codexmate_lib::core::relay::keychain::set_api_key::h0814f45be6d5b783(
                &v155,
                v160,
                *(_QWORD *)&v148[8],
                *(_QWORD *)&v148[16],
                v143,
                v165);
              if ( v155 != (_OWORD *)0x8000000000000000LL )
              {
                v151 = v157;
                v150 = v156;
                v149 = v155;
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 )
                {
                  v124[0] = v148;
                  v124[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                  v124[2] = &v149;
                  v124[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                  *(_QWORD *)&v134[0] = "codexmate_lib::core::relay::manager";
                  *((_QWORD *)&v134[0] + 1) = 35;
                  *(_QWORD *)&v134[1] = "codexmate_lib::core::relay::manager";
                  *((_QWORD *)&v134[1] + 1) = 35;
                  *(_QWORD *)&v134[2] = &off_10195DD20;
                  log::__private_api::log::h719f4907c7336ae9(&unk_1017BAB64, v124, 1, v134);
                }
                *(_QWORD *)&v134[0] = &v149;
                *((_QWORD *)&v134[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v122, &unk_1017BAB8E, v134);
                v7[4] = v122[2];
                v111 = v122[0];
                v7[3] = v122[1];
                v7[2] = v111;
                v7[1] = 10;
                *v7 = 0x8000000000000000LL;
                if ( v149 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v150, v149, 1);
LABEL_185:
                v70 = (char *)v161;
                if ( 2 * v161 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v161, 1);
                goto LABEL_136;
              }
              v148[228] = 1;
            }
            else
            {
              v161 = 0x8000000000000000LL;
            }
            v124[0] = *(_QWORD *)v118;
            v124[1] = *(_QWORD *)v118 + 232LL * *(_QWORD *)&v118[8];
            v103 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h2caca272e36d40b5(
                     v124,
                     *(_QWORD *)&v148[8],
                     *(_QWORD *)&v148[16]);
            LODWORD(v164) = (_DWORD)v9;
            if ( v103 )
            {
              v104 = (_QWORD *)v103;
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v134, &v148[72]);
              v105 = v104;
              v106 = v104[9];
              if ( v106 )
              {
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104[10], v106, 1);
                v105 = v104;
              }
              v104[11] = *(_QWORD *)&v134[1];
              *(_OWORD *)(v104 + 9) = v134[0];
              *((_BYTE *)v105 + 228) = v148[228];
              v82 = v158;
            }
            _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393(
              v134,
              &v117);
            codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(v124, v82, v134);
            if ( LODWORD(v124[0]) == 11 )
            {
              _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec(
                v114,
                v148);
              v114[11] = 0;
              memcpy(v7, v114, 0xE8u);
              if ( 2 * v161 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v161, 1);
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v148);
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(__dsta);
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v117);
              LODWORD(v166) = 0;
              core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f(
                v147,
                v163);
              LODWORD(v166) = 0;
              core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f(
                v159,
                (unsigned __int8)v162);
              if ( v135 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136, v135, 1);
              if ( v138 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v138, 1);
              core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..RelayModelEntry$GT$$GT$::h0c66d149bfaf8c94(&v140);
              if ( v142 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, v142, 1);
              v107 = *v153;
              if ( *v153 != 0x8000000000000000LL && v107 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[13], v107, 1);
              v108 = a3[3];
              if ( v108 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[4], v108, 1);
              if ( *v130 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[7], *v130, 1);
              v109 = a3[9];
              if ( v109 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[10], v109, 1);
              core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..RelayModelEntry$GT$$GT$$GT$::h40db5b07ec27a9c5(a3 + 15);
              return v7;
            }
            qmemcpy(v134, v124, 0x60u);
            if ( !v165 )
              goto LABEL_177;
            v110 = 0;
            if ( v161 != 0x8000000000000000LL )
              v110 = v166;
            codexmate_lib::core::relay::manager::restore_api_key::hf9c9a82491e8c29b(
              v123,
              *v82 + 16LL,
              *(_QWORD *)&v148[8],
              *(_QWORD *)&v148[16],
              v110,
              v146);
            if ( v123[0] != 0x8000000000000000LL )
            {
              v157 = (_QWORD *)v123[2];
              v156 = (__int64 (__fastcall *)(_QWORD, _QWORD))v123[1];
              v155 = (_OWORD *)v123[0];
              v149 = v134;
              v150 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
              v151 = &v155;
              v152 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v121, &unk_1017BAB1D, &v149);
              v7[4] = v121[2];
              v112 = v121[0];
              v7[3] = v121[1];
              v7[2] = v112;
              v7[1] = 10;
              *v7 = 0x8000000000000000LL;
              LODWORD(v9) = (_DWORD)v164;
              if ( v155 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v156, v155, 1);
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v134);
            }
            else
            {
LABEL_177:
              qmemcpy(v7 + 1, v134, 0x60u);
              *v7 = 0x8000000000000000LL;
              LODWORD(v9) = (_DWORD)v164;
            }
            goto LABEL_185;
          }
        }
        else
        {
          v115[0] = 0x8000000000000000LL;
          v91 = v83;
        }
        *(_QWORD *)v148 = 0;
        *(_QWORD *)&v148[8] = 1;
        *(_QWORD *)&v148[16] = 0;
        *(_QWORD *)&v148[24] = 0;
        *(_QWORD *)&v148[32] = 1;
        *(_QWORD *)&v148[40] = 0;
        *(_QWORD *)&v148[48] = 0;
        *(_QWORD *)&v148[56] = 1;
        *(_QWORD *)&v148[64] = 0;
        *(_QWORD *)&v148[72] = 0;
        *(_QWORD *)&v148[80] = 1;
        *(_QWORD *)&v148[88] = 0;
        *(_QWORD *)&v148[96] = 0;
        *(_QWORD *)&v148[104] = 1;
        *(_QWORD *)&v148[112] = 0;
        *(_QWORD *)&v148[120] = 0;
        *(_QWORD *)&v148[128] = 8;
        *(_QWORD *)&v148[144] = 0;
        *(_QWORD *)&v148[136] = 0;
        *(_QWORD *)&v148[152] = 1;
        *(_QWORD *)&v148[160] = 0;
        *(_QWORD *)&v148[192] = -1;
        memset(&v148[200], 0, 32);
        *(_QWORD *)&v148[168] = 0x8000000000000000LL;
        goto LABEL_101;
      }
    }
    *(_QWORD *)&v134[0] = v164;
    BYTE8(v134[0]) = v166;
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, v134, &off_10195E740, &off_10195DCF0);
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1((char *)v134 + 8, v8 + 16);
  *(_QWORD *)&v134[0] = 9;
  qmemcpy(__dst + 1, v134, 0x60u);
  *__dst = 0x8000000000000000LL;
  v11 = a3[12];
  v12 = 1;
  if ( v11 != 0x8000000000000000LL && v11 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[13], v11, 1);
  v13 = 1;
LABEL_41:
  if ( *a3 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], *a3, 1);
LABEL_43:
  v34 = a3[3];
  if ( v34 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[4], v34, 1);
  v35 = a3[6];
  if ( v35 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[7], v35, 1);
  v36 = a3[9];
  if ( v36 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[10], v36, 1);
  v37 = a3[15];
  if ( v37 != 0x8000000000000000LL )
  {
    v38 = a3;
    v39 = v7;
    v40 = v12;
    v41 = v13;
    v42 = v38[17];
    if ( v42 )
    {
      v153 = v38;
      v43 = (_QWORD *)(v38[16] + 72LL);
      while ( 1 )
      {
        v44 = *(v43 - 7);
        if ( v44 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v43 - 6), v44, 1);
        v45 = *(v43 - 1);
        if ( !(2 * v45) )
          break;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v43, v45, 1);
        v46 = *(v43 - 4);
        if ( v46 )
          goto LABEL_59;
LABEL_52:
        v43 += 12;
        if ( !--v42 )
        {
          v38 = v153;
          v37 = v153[15];
          goto LABEL_61;
        }
      }
      v46 = *(v43 - 4);
      if ( !v46 )
        goto LABEL_52;
LABEL_59:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v43 - 3), v46, 1);
      goto LABEL_52;
    }
LABEL_61:
    v13 = v41;
    v12 = v40;
    v7 = v39;
    a3 = v38;
    if ( v37 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38[16], 96 * v37, 8);
  }
  if ( v13 )
  {
    v47 = a3[18];
    if ( v47 != 0x8000000000000000LL && v12 && v47 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[19], v47, 1);
  }
  return v7;
}
