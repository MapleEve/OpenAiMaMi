// __ZN13codexmate_lib4core5voice7runtime19apply_sidecar_event @ 0x100676150 | 基线 same-set
// [FULL decompile]

double __fastcall codexmate_lib::core::voice::runtime::apply_sidecar_event::h1a34e0acde633e1c(
        __int64 a1,
        __int64 a2,
        int a3,
        signed __int64 a4)
{
  signed __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rcx
  _BYTE *v16; // r14
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // r13
  __int64 v22; // r14
  _QWORD *v23; // r15
  signed __int64 *v24; // rdi
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // r9d
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdx
  signed __int64 v35; // rcx
  char v36; // r14
  __int64 v37; // r14
  unsigned __int64 v38; // r15
  signed __int64 v39; // rax
  char v40; // r12
  __int64 v41; // rbx
  __int64 v42; // r12
  __int64 v43; // r13
  char v44; // of
  volatile signed __int64 *v45; // r14
  __int64 v46; // rt0
  volatile signed __int64 *v47; // r15
  __int64 v48; // rt0
  char v49; // al
  bool v50; // bl
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdi
  int v54; // eax
  double result; // xmm0_8
  int v56; // eax
  char v57; // of
  volatile signed __int64 *v58; // r14
  __int64 v59; // rt0
  volatile signed __int64 *v60; // r15
  __int64 v61; // rt0
  unsigned int v62; // edx
  unsigned int v63; // ecx
  int v64; // ecx
  char v65; // of
  volatile signed __int64 *v66; // r14
  __int64 v67; // rt0
  volatile signed __int64 *v68; // r15
  __int64 v69; // rt0
  __int64 v70; // rsi
  char v71; // al
  __int64 v72; // rcx
  bool v73; // bl
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rbx
  signed __int64 *v84; // r8
  signed __int64 v85; // rbx
  size_t v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rax
  signed __int64 v90; // rsi
  signed __int64 v91; // r8
  signed __int64 v92; // r15
  __int64 v93; // rsi
  signed __int64 v94; // rax
  signed __int64 v95; // rdx
  __int64 v96; // rsi
  __int64 v97; // rax
  unsigned __int64 v98; // rax
  __int64 v99; // rsi
  signed __int64 *v100; // r13
  __int64 v101; // rsi
  signed __int64 v102; // rax
  int v103; // eax
  char v104; // r12
  signed __int64 *v105; // rbx
  char v106; // bl
  char v107; // r12
  char v108; // bl
  int v109; // eax
  char v110; // r12
  signed __int64 *v111; // r13
  signed __int64 v112; // r12
  char v113; // r12
  __int64 v114; // rsi
  __int64 v115; // rbx
  __int64 v116; // rbx
  signed __int64 *v117; // r13
  __int64 v118; // rsi
  signed __int64 v119; // rax
  unsigned __int64 v120; // rax
  __int64 v121; // rax
  signed __int64 v122; // rbx
  __int64 v123; // r12
  signed __int64 *v124; // r13
  __int64 v125; // rsi
  signed __int64 v126; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // rcx
  char v129; // bl
  _QWORD *v130; // rax
  __int64 v131; // rsi
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rsi
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  unsigned int v138; // r13d
  __int64 v139; // r15
  __int64 v140; // r12
  __int64 v141; // rax
  unsigned int v142; // edx
  __int64 v143; // r12
  int v144[2]; // [rsp+10h] [rbp-2B0h] BYREF
  unsigned __int64 v145; // [rsp+28h] [rbp-298h] BYREF
  __int64 v146; // [rsp+30h] [rbp-290h]
  __int64 v147; // [rsp+38h] [rbp-288h]
  _QWORD v148[3]; // [rsp+40h] [rbp-280h] BYREF
  _QWORD __dst[19]; // [rsp+58h] [rbp-268h] BYREF
  __int64 v150; // [rsp+F0h] [rbp-1D0h] BYREF
  int v151[2]; // [rsp+F8h] [rbp-1C8h]
  unsigned __int64 v152; // [rsp+100h] [rbp-1C0h]
  signed __int64 v153; // [rsp+108h] [rbp-1B8h]
  __int64 v154; // [rsp+110h] [rbp-1B0h]
  signed __int64 __src[19]; // [rsp+118h] [rbp-1A8h] BYREF
  __int64 v156; // [rsp+1B0h] [rbp-110h]
  __int64 v157; // [rsp+1B8h] [rbp-108h]
  unsigned __int64 v158; // [rsp+1C0h] [rbp-100h]
  __int64 v159; // [rsp+1C8h] [rbp-F8h]
  int v160; // [rsp+1D0h] [rbp-F0h]
  __int64 v161; // [rsp+1D8h] [rbp-E8h]
  char v162; // [rsp+1E0h] [rbp-E0h]
  _QWORD v163[2]; // [rsp+1E8h] [rbp-D8h] BYREF
  __int64 v164; // [rsp+1F8h] [rbp-C8h]
  __int64 v165; // [rsp+200h] [rbp-C0h]
  int v166; // [rsp+20Ch] [rbp-B4h]
  __int64 v167; // [rsp+210h] [rbp-B0h]
  int v168[2]; // [rsp+218h] [rbp-A8h] BYREF
  __int64 v169; // [rsp+220h] [rbp-A0h]
  int v170; // [rsp+234h] [rbp-8Ch]
  __int64 v171; // [rsp+238h] [rbp-88h]
  __int64 v172; // [rsp+240h] [rbp-80h]
  _QWORD *v173; // [rsp+248h] [rbp-78h]
  __int16 v174; // [rsp+256h] [rbp-6Ah]
  signed __int64 v175; // [rsp+258h] [rbp-68h]
  signed __int64 v176; // [rsp+260h] [rbp-60h]
  int v177; // [rsp+26Ch] [rbp-54h]
  int v178; // [rsp+270h] [rbp-50h]
  int v179; // [rsp+274h] [rbp-4Ch]
  int v180; // [rsp+278h] [rbp-48h]
  int v181; // [rsp+27Ch] [rbp-44h]
  signed __int64 v182; // [rsp+280h] [rbp-40h]
  __int64 v183; // [rsp+288h] [rbp-38h]
  signed __int64 v184; // [rsp+290h] [rbp-30h]

  LODWORD(v5) = a3;
  v6 = *(_QWORD *)a2;
  v7 = 2;
  if ( *(_QWORD *)a2 >= 2u )
    v7 = *(_QWORD *)a2 - 2LL;
  v167 = v7;
  v183 = a2;
  v8 = a2;
  switch ( v7 )
  {
    case 0LL:
    case 4LL:
      break;
    case 1LL:
    case 3LL:
    case 5LL:
      v8 = v183 + 8;
      goto LABEL_5;
    case 2LL:
LABEL_5:
      if ( *(_BYTE *)v8 )
      {
        a4 = *(_QWORD *)(v8 + 8);
        LOBYTE(v5) = 1;
      }
      break;
  }
  v175 = a4;
  v9 = (_DWORD)v6 == 7;
  v172 = a1;
  LOBYTE(v6) = 1;
  if ( v9 )
  {
    LODWORD(v176) = v6;
    LOBYTE(v6) = 1;
    LODWORD(v184) = v6;
    LOBYTE(v6) = 1;
    LODWORD(v182) = v6;
    v10 = tauri::Manager::state::hb5ba04dc9da9798f(a1);
    LODWORD(v11) = v10 + 32;
    v171 = v10 + 32;
    v12 = *(_QWORD *)(v10 + 32);
    if ( !v12 )
    {
      LOBYTE(v11) = 1;
      LODWORD(v184) = v11;
      LOBYTE(v11) = 1;
      LODWORD(v182) = v11;
      v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v171);
      v12 = v11;
    }
    LOBYTE(v11) = 1;
    LODWORD(v184) = v11;
    LOBYTE(v11) = 1;
    LODWORD(v182) = v11;
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v12);
    v14 = std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6;
    v15 = 0x8000000000000000LL;
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      LOBYTE(v14) = 1;
      LODWORD(v184) = v14;
      LOBYTE(v14) = 1;
      LODWORD(v182) = v14;
      v71 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12, a2, v13, 0x8000000000000000LL);
      v16 = (_BYTE *)(v10 + 40);
      v15 = *(unsigned __int8 *)(v10 + 40);
      if ( (_BYTE)v15 )
      {
        if ( !v71 )
        {
LABEL_13:
          v18 = v171;
          v19 = *(_QWORD *)v171;
          LOBYTE(v18) = 1;
          LODWORD(v184) = v18;
          LOBYTE(v18) = 1;
          LODWORD(v182) = v18;
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v19);
          return result;
        }
LABEL_12:
        v17 = std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6;
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          LOBYTE(v17) = 1;
          LODWORD(v184) = v17;
          LOBYTE(v17) = 1;
          LODWORD(v182) = v17;
          if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12, a2, v13, v15) )
            *v16 = 1;
        }
        goto LABEL_13;
      }
      v49 = v71 ^ 1;
    }
    else
    {
      v16 = (_BYTE *)(v10 + 40);
      if ( *(_BYTE *)(v10 + 40) )
        goto LABEL_12;
      v49 = 0;
    }
    LOBYTE(v15) = v175 != 0;
    if ( ((v175 != 0) & (unsigned __int8)v5) == 1 && *(_QWORD *)(v10 + 880) == v175 )
    {
      v15 = *(unsigned __int8 *)(v10 + 908);
      LOBYTE(v15) = v15 - 1;
      v50 = (unsigned __int8)v15 < 3u;
      if ( v49 )
        goto LABEL_41;
    }
    else
    {
      v50 = 0;
      if ( v49 )
      {
LABEL_41:
        v52 = v171;
        v53 = *(_QWORD *)v171;
        LOBYTE(v52) = 1;
        LODWORD(v184) = v52;
        LOBYTE(v52) = 1;
        LODWORD(v182) = v52;
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v53);
        if ( v50 )
        {
          v54 = v183;
          result = *(double *)(v183 + 24);
          LOBYTE(v54) = 1;
          LODWORD(v184) = v54;
          LOBYTE(v54) = 1;
          LODWORD(v182) = v54;
          tauri::Emitter::emit::h58e047631e7f0f7b(__src, v172, "voice-audio-levelstarted", 17, result);
          v56 = 37;
          if ( __src[0] != 0x8000000000000025LL )
          {
            LOBYTE(v56) = 1;
            LODWORD(v184) = v56;
            LOBYTE(v56) = 1;
            LODWORD(v182) = v56;
            core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src);
          }
        }
        return result;
      }
    }
    v51 = std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6;
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      LOBYTE(v51) = 1;
      LODWORD(v184) = v51;
      LOBYTE(v51) = 1;
      LODWORD(v182) = v51;
      if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12, a2, v175, v15) )
        *v16 = 1;
    }
    goto LABEL_41;
  }
  LODWORD(v176) = v6;
  LOBYTE(v6) = 1;
  LODWORD(v184) = v6;
  LOBYTE(v6) = 1;
  LODWORD(v182) = v6;
  v20 = tauri::Manager::state::hb5ba04dc9da9798f(a1);
  v21 = (_QWORD *)v20;
  v22 = v20;
  v23 = (_QWORD *)(v20 + 32);
  v24 = *(signed __int64 **)(v20 + 32);
  if ( !v24 )
  {
    LOBYTE(v20) = 1;
    LODWORD(v184) = v20;
    LOBYTE(v20) = 1;
    LODWORD(v182) = v20;
    v20 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v23);
    v24 = (signed __int64 *)v20;
  }
  LOBYTE(v20) = 1;
  LODWORD(v184) = v20;
  LOBYTE(v20) = 1;
  LODWORD(v182) = v20;
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v24);
  v26 = std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6;
  v27 = 0x7FFFFFFFFFFFFFFFLL;
  v171 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    LOBYTE(v26) = 1;
    LODWORD(v184) = v26;
    LOBYTE(v26) = 1;
    LODWORD(v182) = v26;
    v28 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v24, a2, v25, 0x7FFFFFFFFFFFFFFFLL);
    LOBYTE(v28) = v28 ^ 1;
    v29 = *(unsigned __int8 *)(v22 + 40);
    if ( (_BYTE)v29 )
    {
LABEL_18:
      if ( !(_BYTE)v28 )
      {
        v29 = std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6;
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v171) != 0 )
        {
          LOBYTE(v29) = 1;
          LODWORD(v184) = v29;
          LOBYTE(v29) = 1;
          LODWORD(v182) = v29;
          v29 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v24, a2, v25, v27);
          if ( !(_BYTE)v29 )
            *(_BYTE *)(v22 + 40) = 1;
        }
      }
      v30 = *v23;
      LOBYTE(v29) = 1;
      LODWORD(v176) = v29;
      v31 = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v30);
      v181 = 0;
      v179 = 0;
      v177 = 0;
      v178 = 0;
      LOBYTE(v31) = 1;
      LODWORD(v182) = v31;
      LOBYTE(v31) = 1;
      LODWORD(v184) = v31;
      goto LABEL_21;
    }
  }
  else
  {
    v28 = 0;
    v29 = *(unsigned __int8 *)(v22 + 40);
    if ( (_BYTE)v29 )
      goto LABEL_18;
  }
  LOBYTE(v29) = 1;
  LODWORD(v176) = v29;
  v72 = v167;
  switch ( v167 )
  {
    case 0LL:
      *(_WORD *)(v22 + 905) = *(_WORD *)(v183 + 8);
      JUMPOUT(0x1006769AFLL);
    case 1LL:
      v74 = *(_QWORD *)(v183 + 24);
      v24 = *(signed __int64 **)(v183 + 32);
      v75 = *(_QWORD *)(v183 + 40);
      if ( v75 == 7 )
      {
        LODWORD(v75) = *(_DWORD *)v24 ^ 0x72617473;
        if ( (unsigned int)v75 | *(_DWORD *)((char *)v24 + 3) ^ 0x64657472 )
        {
          LODWORD(v75) = *(_DWORD *)v24 ^ 0x706F7473;
          v72 = (unsigned int)v75 | *(_DWORD *)((char *)v24 + 3) ^ 0x64657070;
          if ( (unsigned int)v75 | *(_DWORD *)((char *)v24 + 3) ^ 0x64657070 )
          {
LABEL_135:
            v181 = 0;
            v178 = 0;
            v177 = 0;
            v179 = 0;
            v73 = 0;
            goto LABEL_136;
          }
          v72 = v175;
          if ( ((v175 != 0) & (unsigned __int8)v5) != 1 )
            goto LABEL_173;
          if ( *(_QWORD *)(v22 + 880) != v175 )
            goto LABEL_173;
          LODWORD(v75) = *(unsigned __int8 *)(v22 + 908);
          if ( (unsigned __int8)(v75 - 1) > 2u )
            goto LABEL_173;
          v122 = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1);
          *(_QWORD *)(v22 + 872) = v122;
          LOBYTE(v75) = *(_BYTE *)(v22 + 908) == 3;
          v177 = v75;
          v9 = *(_QWORD *)(v22 + 344) == 0;
          v180 = v28;
          v184 = (signed __int64)v24;
          if ( v9 && *(_QWORD *)(v22 + 320) )
          {
            v123 = v74;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v21 + 38);
            v124 = v21 + 41;
            v125 = *(_QWORD *)(v22 + 328);
            if ( v125 )
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v22 + 336), v125, 1);
            v124[2] = __src[2];
            v126 = __src[0];
            v124[1] = __src[1];
            *v124 = v126;
            v74 = v123;
          }
          v154 = v122;
          if ( !*(_QWORD *)(v22 + 48) )
          {
            v127 = *(unsigned int *)(v22 + 720);
            if ( (_DWORD)v127 == 1000000000 )
            {
              v128 = 0;
            }
            else
            {
              v140 = v74;
              __src[0] = *(_QWORD *)(v22 + 712);
              LODWORD(__src[1]) = v127;
              v141 = std::time::Instant::elapsed::h457f209775ed485c(__src);
              v127 = 1000 * v141 + v142 / 0xF4240uLL;
              v128 = 1;
              v74 = v140;
            }
            *(_QWORD *)(v22 + 48) = v128;
            *(_QWORD *)(v22 + 56) = v127;
          }
          v143 = v74;
          *(_DWORD *)(v22 + 720) = 1000000000;
          a2 = *(_QWORD *)(v22 + 344);
          v75 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(v22 + 336), a2);
          LOBYTE(v75) = 4;
          v73 = v25 == 0;
          LOBYTE(v28) = v180;
          v74 = v143;
          v24 = (signed __int64 *)v184;
          if ( !v25 )
          {
            *(_QWORD *)(v22 + 880) = 0;
            LODWORD(v75) = 0;
          }
          LOBYTE(v72) = v25 != 0;
          v178 = v72;
          *(_BYTE *)(v22 + 908) = v75;
          LOBYTE(v75) = 1;
          v179 = v75;
          v181 = 0;
        }
        else
        {
          v72 = v175;
          if ( ((v175 != 0) & (unsigned __int8)v5) != 1 || *(_QWORD *)(v22 + 880) != v175 || *(_BYTE *)(v22 + 908) != 1 )
            goto LABEL_173;
          v113 = v28;
          *(_QWORD *)(v22 + 872) = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1);
          *(_BYTE *)(v22 + 908) = 2;
          v114 = *(_QWORD *)(v22 + 664);
          if ( v114 != 0x8000000000000000LL && v114 )
          {
            v115 = v74;
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v22 + 672), v114, 1);
            v74 = v115;
          }
          *(_QWORD *)(v22 + 664) = 0x8000000000000000LL;
          a2 = *(_QWORD *)(v22 + 640);
          if ( a2 != 0x8000000000000000LL && a2 )
          {
            v116 = v74;
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v22 + 648), a2, 1);
            v74 = v116;
          }
          LODWORD(v75) = 1;
          *(_QWORD *)(v22 + 640) = 0x8000000000000000LL;
          v181 = 1;
          v178 = 0;
          v177 = 0;
          v179 = 0;
          v73 = 0;
          LOBYTE(v28) = v113;
        }
LABEL_136:
        if ( v74 )
        {
          v110 = v28;
          a2 = v74;
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v74, 1);
          LOBYTE(v28) = v110;
        }
        LODWORD(v5) = 0;
        LOBYTE(v75) = 1;
        LODWORD(v184) = v75;
        if ( (_BYTE)v28 )
          goto LABEL_204;
        goto LABEL_203;
      }
      if ( v75 != 8 )
        goto LABEL_135;
      LODWORD(v75) = 1884516206;
      if ( *v24 != 0x6863656570536F6ELL )
        goto LABEL_135;
      v72 = v175;
      if ( ((v175 != 0) & (unsigned __int8)v5) == 1 && *(_QWORD *)(v22 + 880) == v175 )
      {
        LODWORD(v75) = *(unsigned __int8 *)(v22 + 908);
        if ( (unsigned __int8)(v75 - 1) < 3u )
        {
          v184 = *(_QWORD *)(v183 + 32);
          v180 = v28;
          *(_QWORD *)(v22 + 872) = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1);
          *(_QWORD *)(v22 + 880) = 0;
          *(_BYTE *)(v22 + 908) = 0;
          *(_QWORD *)(v22 + 320) = 0;
          *(_QWORD *)(v22 + 344) = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, a2);
          v76 = 18;
          v77 = 18;
          v78 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
          if ( v78 )
          {
            *(_QWORD *)(v78 + 8) = 0xE9ADAFE8B088E58BLL;
            *(_QWORD *)v78 = 0xB5E680A3E6AA9CE6LL;
            *(_WORD *)(v78 + 16) = -19553;
            v79 = *(_QWORD *)(v22 + 664);
            if ( v79 != 0x8000000000000000LL && v79 )
            {
              v77 = *(_QWORD *)(v22 + 672);
              v80 = v78;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v79, 1);
              v78 = v80;
            }
            *(_QWORD *)(v22 + 664) = 18;
            *(_QWORD *)(v22 + 672) = v78;
            *(_QWORD *)(v22 + 680) = 18;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v77, v79);
            v76 = 9;
            v81 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
            if ( v81 )
            {
              *(_QWORD *)v81 = 0x63656570735F6F6ELL;
              *(_BYTE *)(v81 + 8) = 104;
              v82 = *(_QWORD *)(v22 + 640);
              if ( v82 != 0x8000000000000000LL && v82 )
              {
                v83 = v81;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v22 + 648), v82, 1);
                v81 = v83;
              }
              *(_QWORD *)(v22 + 640) = 9;
              *(_QWORD *)(v22 + 648) = v81;
              *(_QWORD *)(v22 + 656) = 9;
              JUMPOUT(0x100676BD7LL);
            }
          }
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v76);
        }
      }
LABEL_173:
      LOBYTE(v75) = 1;
      LODWORD(v176) = v75;
      if ( v74 )
      {
        v129 = v28;
        a2 = v74;
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v74, 1);
        LOBYTE(v28) = v129;
      }
      v107 = 0;
      LOBYTE(v75) = 1;
      LODWORD(v184) = v75;
      if ( !(_BYTE)v28 )
      {
LABEL_176:
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v171) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v24, a2, v25, v72) )
        {
          *(_BYTE *)(v22 + 40) = 1;
        }
      }
LABEL_177:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v23);
      if ( v167 != 3 )
      {
        if ( v167 != 2 )
        {
          if ( !v107 )
            return result;
LABEL_69:
          v70 = *(_QWORD *)(v183 + 24);
          v183 += 24;
          goto LABEL_192;
        }
LABEL_179:
        if ( (_BYTE)v184 )
        {
          v130 = (_QWORD *)v183;
          v131 = *(_QWORD *)(v183 + 16);
          if ( v131 )
          {
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v183 + 24), v131, 1);
            v130 = (_QWORD *)v183;
          }
          v132 = v130[5];
          if ( v132 != 0x8000000000000000LL && v132 )
          {
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130[6], v132, 1);
            v130 = (_QWORD *)v183;
          }
          v70 = v130[8];
          if ( v70 != 0x8000000000000000LL )
          {
            v183 += 64;
            goto LABEL_192;
          }
        }
        return result;
      }
LABEL_187:
      if ( (_BYTE)v176 )
      {
        v133 = v183;
        v134 = *(_QWORD *)(v183 + 24);
        if ( v134 )
        {
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v183 + 32), v134, 1);
          v133 = v183;
        }
        v70 = *(_QWORD *)(v133 + 48);
        if ( v70 != 0x8000000000000000LL )
        {
          v183 += 48;
LABEL_192:
          if ( v70 )
            return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v183 + 8), v70, 1);
        }
      }
      return result;
    case 2LL:
      v25 = v183;
      __dst[2] = *(_QWORD *)(v183 + 32);
      v89 = *(_QWORD *)(v183 + 16);
      __dst[1] = *(_QWORD *)(v183 + 24);
      __dst[0] = v89;
      v90 = *(_QWORD *)(v183 + 40);
      v24 = *(signed __int64 **)(v183 + 48);
      v91 = *(_QWORD *)(v183 + 64);
      v72 = v175;
      if ( ((v175 != 0) & (unsigned __int8)v5) == 1
        && *(_QWORD *)(v22 + 880) == v175
        && (unsigned __int8)(*(_BYTE *)(v22 + 908) - 1) <= 2u )
      {
        v173 = *(_QWORD **)(v183 + 72);
        v184 = v91;
        v176 = (signed __int64)v24;
        v182 = v90;
        v180 = v28;
        v175 = (signed __int64)v23;
        LOBYTE(v181) = *(_BYTE *)(v183 + 88);
        v5 = *(_QWORD *)(v183 + 56);
        v92 = *(_QWORD *)(v183 + 80);
        _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h26da71cd7b0b1b83(
          __dst[1],
          __dst[1] + __dst[2]);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, __dst);
        v93 = *(_QWORD *)(v22 + 304);
        if ( v93 )
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v22 + 312), v93, 1);
        v21[40] = __src[2];
        v94 = __src[0];
        v21[39] = __src[1];
        v21[38] = v94;
        __src[0] = v182;
        __src[1] = v176;
        __src[2] = v5;
        codexmate_lib::core::voice::runtime::sanitize_runtime_meta::he3e38aa8d37a8b6d(v148, __src);
        v95 = v184;
        if ( v148[0] != 0x8000000000000000LL )
        {
          v96 = *(_QWORD *)(v22 + 496);
          if ( v96 )
          {
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v22 + 504), v96, 1);
            v95 = v184;
          }
          v21[64] = v148[2];
          v97 = v148[0];
          v21[63] = v148[1];
          v21[62] = v97;
        }
        __src[0] = v95;
        __src[1] = (signed __int64)v173;
        __src[2] = v92;
        v24 = (signed __int64 *)&v145;
        v23 = (_QWORD *)v175;
        codexmate_lib::core::voice::runtime::sanitize_runtime_meta::he3e38aa8d37a8b6d(&v145, __src);
        LODWORD(v98) = 0;
        if ( v145 != 0x8000000000000000LL )
        {
          v99 = *(_QWORD *)(v22 + 520);
          if ( v99 )
          {
            v24 = *(signed __int64 **)(v22 + 528);
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v99, 1);
          }
          v21[67] = v147;
          v98 = v145;
          v72 = v146;
          v21[66] = v146;
          v21[65] = v98;
        }
        if ( (_BYTE)v181 )
        {
          v24 = __src;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, __dst);
          v100 = v21 + 41;
          v101 = *(_QWORD *)(v22 + 328);
          if ( v101 )
          {
            v24 = *(signed __int64 **)(v22 + 336);
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v101, 1);
          }
          v100[2] = __src[2];
          v102 = __src[0];
          v100[1] = __src[1];
          *v100 = v102;
          v98 = *(unsigned int *)(v22 + 720);
          if ( (_DWORD)v98 == 1000000000 )
          {
            v72 = 0;
          }
          else
          {
            __src[0] = *(_QWORD *)(v22 + 712);
            LODWORD(__src[1]) = v98;
            v24 = __src;
            v135 = std::time::Instant::elapsed::h457f209775ed485c(__src);
            v98 = 1000 * v135 + (unsigned int)v25 / 0xF4240uLL;
            v72 = 1;
          }
          *(_QWORD *)(v22 + 48) = v72;
          *(_QWORD *)(v22 + 56) = v98;
        }
        a2 = __dst[0];
        if ( __dst[0] )
        {
          v24 = (signed __int64 *)__dst[1];
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1);
        }
        LOBYTE(v98) = 1;
        LODWORD(v176) = v98;
        LODWORD(v184) = 0;
        LOBYTE(v5) = 1;
        v178 = 0;
        v177 = 0;
        v179 = 0;
        v73 = 0;
LABEL_202:
        v181 = 0;
        if ( (_BYTE)v180 )
        {
LABEL_204:
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v23);
          LODWORD(v182) = v5;
          if ( (_BYTE)v181 )
          {
            codexmate_lib::core::voice::runtime::overlay::show_voice_overlay::h4dc30be668a4a289(v172);
            a2 = 1;
            codexmate_lib::core::voice::runtime::tray::update_tray_recording_state::he8064c52aac3ad4d(v172, 1);
          }
          if ( v73 )
          {
            codexmate_lib::core::voice::runtime::overlay::hide_voice_overlay::he8e888d837f13236(v172);
            a2 = 0;
            codexmate_lib::core::voice::runtime::tray::update_tray_recording_state::he8064c52aac3ad4d(v172, 0);
          }
LABEL_21:
          v32 = tauri::Manager::state::hb5ba04dc9da9798f(v172);
          v173 = (_QWORD *)(v32 + 32);
          v33 = *(_QWORD *)(v32 + 32);
          if ( !v33 )
            v33 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v173);
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v33);
          if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v171) != 0 )
          {
            v36 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v33, a2, v34, v35) ^ 1;
            if ( *(_BYTE *)(v32 + 40) )
            {
LABEL_25:
              if ( (v36 & 1) == 0 )
              {
LABEL_26:
                if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v171) != 0
                  && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                         v33,
                                         a2,
                                         v34,
                                         v35) )
                {
                  *((_BYTE *)v173 + 8) = 1;
                }
              }
LABEL_27:
              std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v173);
              v37 = 1;
              v174 = -1;
              LOBYTE(v180) = 2;
              v170 = 1000000000;
              v38 = 0;
              v39 = 0;
              v40 = 0;
              goto LABEL_28;
            }
          }
          else
          {
            v36 = 0;
            if ( *(_BYTE *)(v32 + 40) )
              goto LABEL_25;
          }
          LOBYTE(v180) = *(_BYTE *)(v32 + 902);
          a2 = v32 + 568;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v32 + 568);
          v174 = *(_WORD *)(v32 + 896);
          v165 = *(_QWORD *)(v32 + 712);
          v170 = *(_DWORD *)(v32 + 720);
          v175 = __src[0];
          v153 = __src[1];
          v40 = __src[2];
          v166 = HIBYTE(__src[2]);
          v138 = *(unsigned __int16 *)((char *)&__src[2] + 5);
          v139 = *(unsigned int *)((char *)&__src[2] + 1);
          if ( !v36
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v171) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   __src,
                                   a2,
                                   v136,
                                   v137) )
          {
            *(_BYTE *)(v32 + 40) = 1;
          }
          v33 = *v173;
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v173);
          v35 = v175;
          v37 = v153;
          if ( v175 != 0x8000000000000000LL )
          {
            v39 = v175;
            v38 = ((unsigned __int64)((v166 << 16) | v138) << 32) | v139;
LABEL_28:
            v41 = v172;
            v175 = v39;
            v163[0] = v39;
            v163[1] = v37;
            LOBYTE(v164) = v40;
            *(_DWORD *)((char *)&v164 + 1) = v38;
            HIBYTE(v164) = BYTE6(v38);
            *(_WORD *)((char *)&v164 + 5) = WORD2(v38);
            v42 = v37;
            if ( (_BYTE)v181 )
            {
              v43 = codexmate_lib::platform::system_volume::start_sound_delay_ms::h82bb5f0623048731();
              if ( v43 )
              {
                _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(
                  __src,
                  v41);
                v45 = *(volatile signed __int64 **)(v41 + 136);
                v46 = _InterlockedIncrement64(v45);
                if ( (v46 < 0) ^ v44 | (v46 == 0) )
                  goto LABEL_238;
                v47 = *(volatile signed __int64 **)(v41 + 144);
                v48 = _InterlockedIncrement64(v47);
                if ( (v48 < 0) ^ v44 | (v48 == 0) )
                  goto LABEL_238;
                memcpy(__dst, __src, 0x88u);
                __dst[17] = v45;
                __dst[18] = v47;
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v150, v163);
                v161 = v43;
                memcpy(__src, __dst, sizeof(__src));
                v159 = v165;
                v160 = v170;
                v162 = v180;
                v156 = v150;
                v157 = *(_QWORD *)v151;
                v158 = v152;
                *(_QWORD *)v144 = 0x8000000000000000LL;
                v37 = v42;
                std::thread::lifecycle::spawn_unchecked::h9566b084869a7bc0(
                  (int)v168,
                  (int)v144,
                  0,
                  v151[0],
                  0,
                  0,
                  __src);
                v41 = v172;
                if ( !*(_QWORD *)v168 )
                {
                  *(_QWORD *)v168 = v169;
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "failed to spawn thread",
                    22,
                    v168,
                    &off_101968498,
                    &off_101967AA0);
                }
                core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(v168);
              }
              else
              {
                codexmate_lib::core::voice::runtime::send_play_sound_to_standby::h968845f4d87a6a7d(
                  v41,
                  "start",
                  5,
                  (unsigned __int8)v180,
                  v37,
                  v164);
              }
              LOBYTE(v150) = v180;
              if ( (unsigned __int16)v174 < 0x65u && v170 != 1000000000 )
              {
                _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(
                  __src,
                  v41);
                v58 = *(volatile signed __int64 **)(v41 + 136);
                v59 = _InterlockedIncrement64(v58);
                if ( (v59 < 0) ^ v57 | (v59 == 0) )
                  goto LABEL_238;
                v60 = *(volatile signed __int64 **)(v41 + 144);
                v61 = _InterlockedIncrement64(v60);
                if ( (v61 < 0) ^ v57 | (v61 == 0) )
                  goto LABEL_238;
                memcpy(__dst, __src, 0x88u);
                __dst[17] = v58;
                __dst[18] = v60;
                v158 = v43
                     + codexmate_lib::platform::audio_feedback::PromptSoundStyle::start_ducking_delay_ms::h6ee75f92699dbe28(
                         &v150,
                         (__int64)__src,
                         v62,
                         v63);
                memcpy(__src, __dst, sizeof(__src));
                v156 = v165;
                LODWORD(v157) = v170;
                LOWORD(v159) = v174;
                *(_QWORD *)v144 = 0x8000000000000000LL;
                v37 = v42;
                std::thread::lifecycle::spawn_unchecked::h2a55b5c25a4b193f((int)v168, (int)v144, 0, v64, 0, 0, __src);
                v41 = v172;
                if ( !*(_QWORD *)v168 )
                {
                  *(_QWORD *)v168 = v169;
                  core::result::unwrap_failed::h855bccc0ecc45c4f(
                    "failed to spawn thread",
                    22,
                    v168,
                    &off_101968498,
                    &off_101967AA0);
                }
                core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(v168);
              }
            }
            if ( (_BYTE)v177 )
            {
              codexmate_lib::core::voice::runtime::send_play_sound_to_standby::h968845f4d87a6a7d(
                v41,
                "stopLeftDownmovecell",
                4,
                (unsigned __int8)v180,
                v37,
                v164);
            }
            else if ( !(_BYTE)v179 )
            {
LABEL_56:
              if ( !(_BYTE)v178 )
              {
LABEL_60:
                codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__src, v41);
                if ( __src[0] != 0x8000000000000000LL && __src[0] )
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1);
                if ( v175 )
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v175, 1);
                if ( v167 != 3 )
                {
                  if ( v167 != 2 )
                  {
                    if ( v167 != 1 || !(_BYTE)v182 )
                      return result;
                    goto LABEL_69;
                  }
                  goto LABEL_179;
                }
                goto LABEL_187;
              }
              _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(
                __dst,
                v41);
              v66 = *(volatile signed __int64 **)(v41 + 136);
              v67 = _InterlockedIncrement64(v66);
              if ( !((v67 < 0) ^ v65 | (v67 == 0)) )
              {
                v68 = *(volatile signed __int64 **)(v41 + 144);
                v69 = _InterlockedIncrement64(v68);
                if ( !((v69 < 0) ^ v65 | (v69 == 0)) )
                {
                  memcpy(__src, __dst, 0x88u);
                  __src[17] = (signed __int64)v66;
                  __src[18] = (signed __int64)v68;
                  v37 = v42;
                  codexmate_lib::core::voice::runtime::watchdog::spawn_processing_watchdog::hd1792ea121b670af(
                    __src,
                    v154);
                  v41 = v172;
                  goto LABEL_60;
                }
              }
LABEL_238:
              BUG();
            }
            if ( qword_1019FF088 )
              std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hb43fbf08bf63748c(&codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce);
            std::sync::mpmc::Sender$LT$T$GT$::send::h22e3779823916dcc(
              &codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce,
              1);
            goto LABEL_56;
          }
          v173 = (_QWORD *)v153;
          if ( (v40 & 1) == 0 )
            goto LABEL_26;
          goto LABEL_27;
        }
LABEL_203:
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v171) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v24, a2, v25, v72) )
        {
          *(_BYTE *)(v22 + 40) = 1;
        }
        goto LABEL_204;
      }
      if ( 2 * v91 )
      {
        v111 = *(signed __int64 **)(v183 + 48);
        v108 = v28;
        v112 = *(_QWORD *)(v183 + 40);
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v183 + 72), *(_QWORD *)(v183 + 64), 1);
        v24 = v111;
        v90 = v112;
        v109 = 2 * v112;
        if ( !(2 * v112) )
        {
LABEL_129:
          a2 = __dst[0];
          if ( !__dst[0] )
            goto LABEL_131;
          goto LABEL_130;
        }
      }
      else
      {
        v108 = v28;
        v109 = 2 * v90;
        if ( !(2 * v90) )
          goto LABEL_129;
      }
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v90, 1);
      a2 = __dst[0];
      if ( !__dst[0] )
      {
LABEL_131:
        LOBYTE(v109) = 1;
        LODWORD(v176) = v109;
        LODWORD(v184) = 0;
        v107 = 1;
        if ( v108 )
          goto LABEL_177;
        goto LABEL_176;
      }
LABEL_130:
      v24 = (signed __int64 *)__dst[1];
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], a2, 1);
      goto LABEL_131;
    case 3LL:
      v182 = *(_QWORD *)(v183 + 24);
      v84 = *(signed __int64 **)(v183 + 32);
      v85 = *(_QWORD *)(v183 + 48);
      v24 = *(signed __int64 **)(v183 + 56);
      v72 = v175;
      if ( ((v175 != 0) & (unsigned __int8)v5) != 1
        || *(_QWORD *)(v22 + 880) != v175
        || (unsigned __int8)(*(_BYTE *)(v22 + 908) - 1) >= 3u )
      {
        v103 = 2 * v85;
        if ( 2 * v85 )
        {
          v104 = v28;
          v105 = *(signed __int64 **)(v183 + 32);
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, *(_QWORD *)(v183 + 48), 1);
          v84 = v105;
          LOBYTE(v28) = v104;
        }
        LOBYTE(v103) = 1;
        LODWORD(v184) = v103;
        a2 = v182;
        if ( v182 )
        {
          v24 = v84;
          v106 = v28;
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v182, 1);
          LOBYTE(v28) = v106;
        }
        LODWORD(v176) = 0;
        v107 = 1;
        if ( !(_BYTE)v28 )
          goto LABEL_176;
        goto LABEL_177;
      }
      v184 = *(_QWORD *)(v183 + 56);
      v180 = v28;
      v175 = (signed __int64)v23;
      v86 = *(_QWORD *)(v183 + 40);
      v5 = *(_QWORD *)(v183 + 64);
      *(_QWORD *)(v22 + 872) = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1);
      *(_QWORD *)(v22 + 880) = 0;
      *(_BYTE *)(v22 + 908) = 5;
      v176 = (signed __int64)v84;
      v173 = (_QWORD *)v86;
      codexmate_lib::core::voice::runtime::friendly_asr_error::hded542bba6d15307(__src, v84, v86);
      __dst[2] = __src[2];
      __dst[1] = __src[1];
      __dst[0] = __src[0];
      v87 = *(_QWORD *)(v22 + 664);
      if ( v87 != 0x8000000000000000LL && v87 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v22 + 672), v87, 1);
      v21[85] = __dst[2];
      v88 = __dst[0];
      v21[84] = __dst[1];
      v21[83] = v88;
      __src[0] = v85;
      __src[1] = v184;
      __src[2] = v5;
      v23 = (_QWORD *)v175;
      codexmate_lib::core::voice::runtime::sanitize_runtime_meta::he3e38aa8d37a8b6d(__dst, __src);
      if ( __dst[0] == 0x8000000000000000LL )
        JUMPOUT(0x100676D5CLL);
      __src[2] = __dst[2];
      __src[1] = __dst[1];
      __src[0] = __dst[0];
      v117 = v21 + 80;
      v118 = *(_QWORD *)(v22 + 640);
      if ( v118 != 0x8000000000000000LL && v118 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v22 + 648), v118, 1);
      v117[2] = __src[2];
      v119 = __src[0];
      v117[1] = __src[1];
      *v117 = v119;
      v120 = *(unsigned int *)(v22 + 720);
      if ( (_DWORD)v120 == 1000000000 )
      {
        v72 = 0;
      }
      else
      {
        __src[0] = *(_QWORD *)(v22 + 712);
        LODWORD(__src[1]) = v120;
        v121 = std::time::Instant::elapsed::h457f209775ed485c(__src);
        v120 = 1000 * v121 + (unsigned int)v25 / 0xF4240uLL;
        v72 = 1;
      }
      *(_QWORD *)(v22 + 48) = v72;
      *(_QWORD *)(v22 + 56) = v120;
      *(_DWORD *)(v22 + 720) = 1000000000;
      a2 = v182;
      v24 = (signed __int64 *)v176;
      if ( v182 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v176, v182, 1);
      LOBYTE(v120) = 1;
      LODWORD(v184) = v120;
      LODWORD(v176) = 0;
      LOBYTE(v5) = 1;
      v178 = 0;
      v177 = 0;
      LOBYTE(v120) = 1;
      v179 = v120;
      v73 = 1;
      goto LABEL_202;
    case 4LL:
    case 5LL:
      v178 = 0;
      LOBYTE(v29) = 1;
      LODWORD(v184) = v29;
      LOBYTE(v5) = 1;
      v177 = 0;
      v179 = 0;
      v73 = 0;
      v181 = 0;
      if ( (_BYTE)v28 )
        goto LABEL_204;
      goto LABEL_203;
  }
}
