// __ZN13codexmate_lib8platform19voice_trigger_macos15listen_callback @ 0x1005e0570 | 基线 same-set
// [FULL hexrays]

CGEventRef __fastcall codexmate_lib::platform::voice_trigger_macos::listen_callback::h0d02846d38aa2540(
        CGEventTapProxy a1,
        __int64 a2,
        CGEventRef a3,
        unsigned __int64 *a4)
{
  unsigned __int64 *v4; // r14
  __CFMachPort *v5; // rdi
  CGEventFlags v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 *v10; // r14
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // r13
  unsigned __int64 *v15; // rdi
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r13
  int64_t v20; // r12
  __int64 v21; // rsi
  int64_t IntegerValueField; // r15
  CGEventFlags Flags; // rax
  int v24; // ecx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // cf
  __int64 v28; // rdx
  __CGEvent *v29; // rbx
  char v30; // r12
  unsigned __int64 v31; // r15
  CGEventRef v32; // rdi
  _QWORD *v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r14
  _QWORD *v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // rdi
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rbx
  __int64 v44; // r13
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r15
  __int64 *v50; // r12
  __int64 v51; // r14
  bool v52; // al
  __int64 v53; // r12
  unsigned __int64 v54; // r13
  __int64 v55; // r14
  _QWORD *v56; // r15
  _QWORD *v57; // r12
  __int64 v58; // rax
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // r14
  _QWORD *v61; // r15
  __int64 v62; // rsi
  __int64 v63; // r15
  __int64 v64; // r12
  __int64 v65; // r15
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rbx
  _QWORD *v71; // r15
  _QWORD *v72; // r12
  __int64 v73; // rax
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // rbx
  _QWORD *v76; // r15
  __int64 v77; // rsi
  int v79; // eax
  unsigned int v80; // edx
  unsigned __int64 v81; // r13
  unsigned __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rbx
  unsigned __int64 v85; // r14
  char v86; // r15
  unsigned __int64 v87; // rdx
  char v88; // al
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // r8
  __int64 v92; // rsi
  __int64 v93; // rcx
  __int64 v94; // rbx
  __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // r15
  int v102; // eax
  char v103; // bl
  char *v104; // rax
  unsigned __int64 v105; // rbx
  unsigned __int64 v106; // rcx
  volatile signed __int64 *v107; // rdx
  bool v108; // of
  __int64 v109; // rbx
  __int64 v110; // r15
  bool v111; // of
  __int64 *v112; // r14
  __int64 *v113; // r13
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 *v116; // rcx
  __int64 v117; // rt0
  unsigned __int64 v118; // rdi
  __int64 v119; // rt0
  __int64 v120; // r12
  __int64 v121; // rdx
  volatile signed __int64 *v122; // rcx
  __int64 v123; // rt0
  unsigned __int64 v124; // r13
  __int64 v125; // r15
  __int64 v126; // rbx
  char v127; // r12
  __int64 v128; // r12
  __int64 v129; // rax
  unsigned __int64 v130; // rbx
  unsigned __int64 v131; // rbx
  _QWORD *v132; // r15
  __int64 v133; // rsi
  __int64 v134; // rt0
  __int64 v135; // rt0
  __int64 v136; // rbx
  int v137; // eax
  bool v138; // al
  unsigned __int64 v139; // [rsp+10h] [rbp-250h] BYREF
  __int64 v140; // [rsp+18h] [rbp-248h]
  __int64 v141; // [rsp+20h] [rbp-240h]
  __int64 v142; // [rsp+28h] [rbp-238h]
  __int64 v143; // [rsp+30h] [rbp-230h]
  __int64 v144; // [rsp+38h] [rbp-228h]
  CGEventFlags v145; // [rsp+40h] [rbp-220h]
  __int64 v146; // [rsp+48h] [rbp-218h]
  char *v147; // [rsp+50h] [rbp-210h] BYREF
  char *v148; // [rsp+58h] [rbp-208h]
  __int64 v149; // [rsp+60h] [rbp-200h]
  char *v150; // [rsp+68h] [rbp-1F8h]
  __int64 v151; // [rsp+70h] [rbp-1F0h]
  __int64 v152; // [rsp+78h] [rbp-1E8h]
  _QWORD *v153; // [rsp+80h] [rbp-1E0h]
  char **v154; // [rsp+88h] [rbp-1D8h]
  unsigned int v155; // [rsp+94h] [rbp-1CCh]
  __int64 v156; // [rsp+98h] [rbp-1C8h]
  __int64 v157; // [rsp+A0h] [rbp-1C0h]
  _QWORD *v158; // [rsp+A8h] [rbp-1B8h]
  CGEventFlags v159; // [rsp+B0h] [rbp-1B0h]
  __int64 v160; // [rsp+B8h] [rbp-1A8h] BYREF
  __int64 v161; // [rsp+C0h] [rbp-1A0h]
  __int64 v162; // [rsp+C8h] [rbp-198h]
  unsigned __int64 v163; // [rsp+D0h] [rbp-190h] BYREF
  __int64 v164; // [rsp+D8h] [rbp-188h]
  __int64 v165; // [rsp+E0h] [rbp-180h]
  unsigned int v166; // [rsp+ECh] [rbp-174h]
  int64_t v167; // [rsp+F0h] [rbp-170h]
  CGEventFlags v168; // [rsp+F8h] [rbp-168h]
  CGEventRef event; // [rsp+100h] [rbp-160h]
  __int64 v170; // [rsp+108h] [rbp-158h] BYREF
  __CGEvent *v171; // [rsp+110h] [rbp-150h]
  unsigned __int64 v172; // [rsp+118h] [rbp-148h] BYREF
  char *v173; // [rsp+120h] [rbp-140h]
  unsigned __int64 v174; // [rsp+128h] [rbp-138h]
  __int128 v175; // [rsp+130h] [rbp-130h]
  char v176; // [rsp+140h] [rbp-120h]
  char v177; // [rsp+141h] [rbp-11Fh]
  __int64 v178; // [rsp+148h] [rbp-118h] BYREF
  __int128 v179; // [rsp+150h] [rbp-110h]
  __int64 v180; // [rsp+160h] [rbp-100h]
  char *v181; // [rsp+168h] [rbp-F8h]
  __int64 v182; // [rsp+170h] [rbp-F0h]
  int v183; // [rsp+17Ch] [rbp-E4h]
  int v184; // [rsp+180h] [rbp-E0h]
  int v185; // [rsp+184h] [rbp-DCh]
  __int64 v186; // [rsp+188h] [rbp-D8h]
  __int128 v187; // [rsp+190h] [rbp-D0h]
  unsigned __int64 v188; // [rsp+1A8h] [rbp-B8h]
  int v189; // [rsp+1B4h] [rbp-ACh]
  __int64 v190; // [rsp+1B8h] [rbp-A8h] BYREF
  char *v191; // [rsp+1C0h] [rbp-A0h]
  unsigned __int64 v192; // [rsp+1C8h] [rbp-98h]
  __int64 v193; // [rsp+1D0h] [rbp-90h]
  __int128 v194; // [rsp+1D8h] [rbp-88h]
  __int64 v195; // [rsp+1E8h] [rbp-78h]
  unsigned __int64 v196; // [rsp+1F0h] [rbp-70h] BYREF
  __int64 v197; // [rsp+1F8h] [rbp-68h]
  unsigned __int64 v198; // [rsp+200h] [rbp-60h]
  char *v199; // [rsp+208h] [rbp-58h] BYREF
  __int128 v200; // [rsp+210h] [rbp-50h]
  __int64 v201; // [rsp+220h] [rbp-40h]
  unsigned __int64 *v202; // [rsp+228h] [rbp-38h]
  unsigned __int64 v203; // [rsp+230h] [rbp-30h]

  v4 = a4;
  event = a3;
  v202 = a4;
  if ( (unsigned int)a2 >= 0xFFFFFFFE )
  {
    if ( !a4 )
      return event;
    v5 = (__CFMachPort *)a4[5];
    if ( v5 )
    {
      a2 = 1;
      CGEventTapEnable(v5, 1);
    }
    v6 = CGEventSourceFlagsState(kCGEventSourceStateCombinedSessionState);
    v178 = 0;
    v179 = 8u;
    v7 = v4[2];
    v8 = *(_QWORD *)(v7 + 16);
    if ( !v8 )
      v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v7 + 16);
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v8);
    v10 = &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6;
    v11 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, 0x8000000000000000LL);
      LOBYTE(v12) = v12 ^ 1;
      v13 = *(unsigned __int8 *)(v7 + 24);
      if ( (_BYTE)v13 )
      {
LABEL_9:
        if ( !(_BYTE)v12
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, v13) )
        {
          *(_BYTE *)(v7 + 24) = 1;
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v7 + 16));
LABEL_88:
        v53 = v178;
        v54 = v179;
        v55 = v179 + 32LL * *((_QWORD *)&v179 + 1);
        v190 = v179;
        v191 = (char *)v179;
        v192 = v178;
        v193 = v55;
        v56 = (_QWORD *)v179;
        if ( *((_QWORD *)&v179 + 1) )
        {
          *(_QWORD *)&v187 = v178;
          v203 = v179;
          v56 = (_QWORD *)(v179 + 32);
          while ( *(v56 - 4) != 4 )
          {
            v57 = v56 - 4;
            v196 = *(v56 - 4);
            v199 = (char *)*(v56 - 1);
            v58 = *(v56 - 3);
            v198 = *(v56 - 2);
            v197 = v58;
            std::sync::mpmc::Sender$LT$T$GT$::send::ha89c8959da38154d(&v170, v202, &v196);
            if ( v170 != 4 )
            {
              switch ( v170 )
              {
                case 0LL:
                case 1LL:
                case 2LL:
                  if ( v171 != (__CGEvent *)0x8000000000000000LL && v171 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v171, 1);
                  break;
                case 3LL:
                  break;
              }
            }
            v56 += 4;
            if ( v57 + 4 == (_QWORD *)v55 )
            {
              v56 = (_QWORD *)v55;
              break;
            }
          }
          v191 = (char *)v56;
          v53 = v187;
          v54 = v203;
        }
        v59 = v55 - (_QWORD)v56;
        if ( v59 )
        {
          v60 = v59 >> 5;
          v61 = v56 + 2;
          do
          {
            switch ( *(v61 - 2) )
            {
              case 0LL:
              case 1LL:
              case 2LL:
                v62 = *(v61 - 1);
                if ( 2 * v62 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v61, v62, 1);
                break;
              case 3LL:
                break;
            }
            v61 += 4;
            --v60;
          }
          while ( v60 );
        }
LABEL_138:
        if ( !v53 )
          return event;
        v39 = v54;
        v38 = 32 * v53;
        goto LABEL_140;
      }
    }
    else
    {
      v12 = 0;
      v13 = *(unsigned __int8 *)(v7 + 24);
      if ( (_BYTE)v13 )
        goto LABEL_9;
    }
    LODWORD(v157) = v12;
    *(_QWORD *)&v187 = v6;
    v186 = v7 + 16;
    v42 = *(_QWORD *)(v7 + 88);
    if ( !v42 )
    {
LABEL_85:
      if ( !(_BYTE)v157
        && (v11 & *v10) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, v13) )
      {
        *(_BYTE *)(v7 + 24) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v186);
      goto LABEL_88;
    }
    *(_QWORD *)&v187 = v187 & 0x9E0000;
    v43 = *(_QWORD *)(v7 + 80);
    v44 = v42 << 6;
    v203 = v7;
    while ( 1 )
    {
      if ( *(_BYTE *)(v43 + 56) )
        goto LABEL_58;
      if ( *(_BYTE *)(v43 + 57) != 1 )
        goto LABEL_58;
      a2 = *(_QWORD *)(v43 + 32);
      if ( a2 > 999 )
        goto LABEL_58;
      if ( (unsigned __int64)a2 <= 0x3F )
      {
        v46 = 0xFDC0000000000000LL;
        if ( _bittest64((const __int64 *)&v46, a2) )
          break;
      }
      if ( a2 < 0 )
      {
        v13 = *(_QWORD *)(v43 + 48);
        if ( !v13 )
          goto LABEL_67;
        v52 = 0;
        goto LABEL_78;
      }
      v8 = 0;
      v52 = CGEventSourceKeyState(kCGEventSourceStateCombinedSessionState, a2);
      v13 = *(_QWORD *)(v43 + 48);
      if ( v13 )
      {
        a2 = *(_QWORD *)(v43 + 32);
LABEL_78:
        v9 = v13 & 0x9E0000;
        a2 -= 64;
        if ( (unsigned __int64)a2 <= 0x3A )
        {
          v8 = 0x542AEBF04018001LL;
          if ( _bittest64(&v8, a2) )
          {
            v13 &= 0x1E0000u;
            v9 = (unsigned int)v13;
          }
        }
        if ( !v52 )
        {
LABEL_67:
          *(_BYTE *)(v43 + 57) = 0;
          v47 = *(_QWORD *)(v43 + 40) + 1LL;
          if ( *(_QWORD *)(v43 + 40) == -1 )
            v47 = -1;
          *(_QWORD *)(v43 + 40) = v47;
          v48 = 0x8000000000000000LL;
          if ( *(_QWORD *)v43 != 0x8000000000000000LL )
          {
            v8 = (__int64)&v196;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v196, v43);
            v48 = v196;
            v190 = v197;
            v191 = (char *)v198;
          }
          v49 = v11;
          v50 = v10;
          v171 = (__CGEvent *)v48;
          v173 = v191;
          v172 = v190;
          v170 = 1;
          v51 = *((_QWORD *)&v179 + 1);
          if ( *((_QWORD *)&v179 + 1) == v178 )
          {
            v8 = (__int64)&v178;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v178);
          }
          v45 = v179;
          v13 = 32 * v51;
          *(_QWORD *)(v179 + v13 + 24) = v173;
          *(_QWORD *)(v45 + v13 + 16) = v172;
          v9 = v170;
          a2 = (__int64)v171;
          *(_QWORD *)(v45 + v13 + 8) = v171;
          *(_QWORD *)(v45 + v13) = v9;
          *((_QWORD *)&v179 + 1) = v51 + 1;
          v10 = v50;
          v11 = v49;
          v7 = v203;
          goto LABEL_58;
        }
LABEL_66:
        if ( (_QWORD)v187 != v9 )
          goto LABEL_67;
        goto LABEL_58;
      }
      if ( !v52 )
        goto LABEL_67;
LABEL_58:
      v43 += 64;
      v44 -= 64;
      if ( !v44 )
        goto LABEL_85;
    }
    v13 = a2 - 54;
    if ( (((unsigned __int64)(a2 - 54) < 0xA) & (unsigned __int8)(0x3F7u >> (a2 - 54))) != 1 )
      goto LABEL_67;
    v9 = qword_101601C30[a2 - 54] | *(_QWORD *)(v43 + 48) & 0x9E0000LL;
    goto LABEL_66;
  }
  if ( !a4 )
    return event;
  if ( *(_BYTE *)(a4[3] + 16) )
  {
    v178 = 0;
    v179 = 8u;
    v14 = a4[2];
    v15 = *(unsigned __int64 **)(v14 + 16);
    if ( !v15 )
      v15 = (unsigned __int64 *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v14 + 16);
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v15);
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v17 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, a2, v16, 0x8000000000000000LL);
      LOBYTE(v17) = v17 ^ 1;
      v18 = *(unsigned __int8 *)(v14 + 24);
      if ( (_BYTE)v18 )
      {
LABEL_18:
        if ( !(_BYTE)v17
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, a2, v16, v18) )
        {
          *(_BYTE *)(v14 + 24) = 1;
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v14 + 16));
LABEL_121:
        v53 = v178;
        v54 = v179;
        v70 = v179 + 32LL * *((_QWORD *)&v179 + 1);
        v190 = v179;
        v191 = (char *)v179;
        v192 = v178;
        v193 = v70;
        v71 = (_QWORD *)v179;
        if ( *((_QWORD *)&v179 + 1) )
        {
          *(_QWORD *)&v187 = v178;
          v203 = v179;
          v71 = (_QWORD *)(v179 + 32);
          while ( *(v71 - 4) != 4 )
          {
            v72 = v71 - 4;
            v196 = *(v71 - 4);
            v199 = (char *)*(v71 - 1);
            v73 = *(v71 - 3);
            v198 = *(v71 - 2);
            v197 = v73;
            std::sync::mpmc::Sender$LT$T$GT$::send::ha89c8959da38154d(&v170, v202, &v196);
            if ( v170 != 4 )
            {
              switch ( v170 )
              {
                case 0LL:
                case 1LL:
                case 2LL:
                  if ( v171 != (__CGEvent *)0x8000000000000000LL && v171 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v171, 1);
                  break;
                case 3LL:
                  break;
              }
            }
            v71 += 4;
            if ( v72 + 4 == (_QWORD *)v70 )
            {
              v71 = (_QWORD *)v70;
              break;
            }
          }
          v191 = (char *)v71;
          v53 = v187;
          v54 = v203;
        }
        v74 = v70 - (_QWORD)v71;
        if ( v74 )
        {
          v75 = v74 >> 5;
          v76 = v71 + 2;
          do
          {
            switch ( *(v76 - 2) )
            {
              case 0LL:
              case 1LL:
              case 2LL:
                v77 = *(v76 - 1);
                if ( 2 * v77 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v76, v77, 1);
                break;
              case 3LL:
                break;
            }
            v76 += 4;
            --v75;
          }
          while ( v75 );
        }
        goto LABEL_138;
      }
    }
    else
    {
      v17 = 0;
      v18 = *(unsigned __int8 *)(v14 + 24);
      if ( (_BYTE)v18 )
        goto LABEL_18;
    }
    v186 = 0x7FFFFFFFFFFFFFFFLL;
    LODWORD(v203) = v17;
    *(_QWORD *)&v187 = v14 + 16;
    *(_QWORD *)(v14 + 32) = 0;
    v63 = *(_QWORD *)(v14 + 88);
    if ( v63 )
    {
      v64 = *(_QWORD *)(v14 + 80);
      v65 = v63 << 6;
      do
      {
        if ( *(_BYTE *)(v64 + 57) )
        {
          *(_BYTE *)(v64 + 57) = 0;
          v67 = *(_QWORD *)(v64 + 40) + 1LL;
          if ( *(_QWORD *)(v64 + 40) == -1 )
            v67 = -1;
          *(_QWORD *)(v64 + 40) = v67;
          if ( !*(_BYTE *)(v64 + 56) )
          {
            v68 = 0x8000000000000000LL;
            if ( *(_QWORD *)v64 != 0x8000000000000000LL )
            {
              v15 = &v196;
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v196, v64);
              v68 = v196;
              v190 = v197;
              v191 = (char *)v198;
            }
            v171 = (__CGEvent *)v68;
            v173 = v191;
            v172 = v190;
            v170 = 1;
            v69 = *((_QWORD *)&v179 + 1);
            if ( *((_QWORD *)&v179 + 1) == v178 )
            {
              v15 = (unsigned __int64 *)&v178;
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf619fbcef6055e6d(&v178);
            }
            v66 = v179;
            v18 = 32 * v69;
            *(_QWORD *)(v179 + v18 + 24) = v173;
            *(_QWORD *)(v66 + v18 + 16) = v172;
            v16 = v170;
            a2 = (__int64)v171;
            *(_QWORD *)(v66 + v18 + 8) = v171;
            *(_QWORD *)(v66 + v18) = v16;
            *((_QWORD *)&v179 + 1) = v69 + 1;
          }
        }
        v64 += 64;
        v65 -= 64;
      }
      while ( v65 );
    }
    if ( !(_BYTE)v203
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v186) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, a2, v16, v18) )
    {
      *(_BYTE *)(v14 + 24) = 1;
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v187);
    goto LABEL_121;
  }
  v19 = (unsigned int)a2;
  LODWORD(v20) = a2 - 10;
  if ( (unsigned int)(a2 - 10) >= 3 )
  {
    if ( (unsigned int)(a2 - 25) > 1 )
      return event;
    v166 = a2 - 10;
    v21 = 3;
    IntegerValueField = CGEventGetIntegerValueField(event, kCGMouseEventButtonNumber) + 1000;
    Flags = CGEventGetFlags(event);
  }
  else
  {
    v21 = 9;
    IntegerValueField = CGEventGetIntegerValueField(event, kCGKeyboardEventKeycode);
    Flags = CGEventGetFlags(event);
    v24 = v19 & 0xFFFFFFFE;
    v166 = v20;
    if ( (v19 & 0xFFFFFFFE) == 0xA )
    {
      v159 = Flags;
      v168 = Flags & 0x9E0000;
      v25 = IntegerValueField - 64;
      if ( (unsigned __int64)(IntegerValueField - 64) <= 0x3A )
      {
        v26 = 0x542AEBF04018001LL;
        v27 = _bittest64(&v26, v25);
        LODWORD(v25) = v159;
        if ( v27 )
        {
          LODWORD(v25) = v25 & 0x1E0000;
          v168 = (unsigned int)v25;
        }
      }
      v167 = IntegerValueField;
      if ( (_DWORD)v19 == 10 )
      {
        v21 = v4[2] + 16;
        std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(&v170, v21);
        if ( (_BYTE)v170 )
        {
          v29 = v171;
          if ( !(_BYTE)v172
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   &v170,
                                   v21,
                                   v28,
                                   0x7FFFFFFFFFFFFFFFLL) )
          {
            *((_BYTE *)v29 + 8) = 1;
          }
        }
        else
        {
          v29 = v171;
          v40 = (_BYTE)v172 == 0;
          *((_QWORD *)v171 + 2) = 0;
          if ( v40
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   &v170,
                                   v21,
                                   v28,
                                   0x7FFFFFFFFFFFFFFFLL) )
          {
            *((_BYTE *)v29 + 8) = 1;
          }
        }
        v41 = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v29);
        LOBYTE(v41) = 1;
        v185 = v41;
        LODWORD(v20) = 0;
        LODWORD(v186) = 0;
        LOBYTE(v41) = 1;
        v184 = v41;
      }
      else
      {
        LOBYTE(v25) = 1;
        v184 = v25;
        v185 = 0;
        LODWORD(v20) = 0;
        LODWORD(v186) = 0;
      }
      goto LABEL_34;
    }
  }
  v159 = Flags;
  v168 = Flags & 0x9E0000;
  LOBYTE(v24) = (_DWORD)v19 == 12;
  v167 = IntegerValueField;
  v30 = v4[6] & (IntegerValueField == 63);
  LODWORD(v186) = v24;
  LOBYTE(v20) = ((_DWORD)v19 == 12) & v30;
  v185 = 0;
  v184 = 0;
LABEL_34:
  v163 = 0;
  v164 = 8;
  v165 = 0;
  v160 = 0;
  v161 = 8;
  v162 = 0;
  v31 = v4[2];
  v158 = (_QWORD *)(v31 + 16);
  v32 = *(CGEventRef *)(v31 + 16);
  if ( !v32 )
    v32 = (CGEventRef)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v158);
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v32);
  v34 = 0x7FFFFFFFFFFFFFFFLL;
  v151 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v79 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32, v21, v33, 0x7FFFFFFFFFFFFFFFLL);
    LOBYTE(v79) = v79 ^ 1;
    v189 = v79;
    if ( *(_BYTE *)(v31 + 24) )
    {
LABEL_38:
      if ( !(_BYTE)v189
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v151) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32, v21, v33, v34) )
      {
        *(_BYTE *)(v31 + 24) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v158);
      if ( v160 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v161, 16 * v160, 8);
      v35 = v165;
      if ( v165 )
      {
        v36 = (_QWORD *)(v164 + 16);
        do
        {
          switch ( *(v36 - 2) )
          {
            case 0LL:
            case 1LL:
            case 2LL:
              v37 = *(v36 - 1);
              if ( 2 * v37 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v36, v37, 1);
              break;
            case 3LL:
              break;
          }
          v36 += 4;
          --v35;
        }
        while ( v35 );
      }
      if ( !v163 )
        return event;
      v38 = 32 * v163;
      v39 = v164;
LABEL_140:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 8);
      return event;
    }
  }
  else
  {
    v189 = 0;
    if ( *(_BYTE *)(v31 + 24) )
      goto LABEL_38;
  }
  v157 = *(_QWORD *)(v31 + 88);
  if ( !v157 )
  {
    v103 = 0;
    if ( !(_BYTE)v189 )
    {
LABEL_195:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v151) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32, v21, v33, v34) )
      {
        *(_BYTE *)(v31 + 24) = 1;
      }
    }
    goto LABEL_196;
  }
  v156 = v19;
  v183 = v20;
  v145 = v159 & 0x9E0000;
  v80 = 0x3F7u >> (v167 - 54);
  v34 = v31 + 32;
  v153 = (_QWORD *)(v31 + 32);
  LOBYTE(v80) = ((unsigned __int64)(v167 - 54) < 0xA) & v80;
  v155 = v80;
  v152 = 0;
  v154 = &off_1019656A8;
  v81 = 0;
  v188 = v31;
  while ( 1 )
  {
    v82 = *(_QWORD *)(v31 + 88);
    if ( v81 >= v82 )
      core::panicking::panic_bounds_check::h56740b1198b22635(v81, v82, &off_101965678, v34);
    v83 = *(_QWORD *)(v31 + 80);
    v20 = v81 << 6;
    v84 = v83 + (v81 << 6);
    *(_QWORD *)&v187 = *(_QWORD *)(v84 + 24);
    v85 = *(_QWORD *)(v84 + 32);
    v86 = *(_BYTE *)(v84 + 56);
    v87 = 0x8000000000000000LL;
    if ( *(_QWORD *)v84 != 0x8000000000000000LL )
    {
      v32 = (CGEventRef)&v196;
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v196, v83 + (v81 << 6));
      v87 = v196;
      v190 = v197;
      v191 = (char *)v198;
    }
    v88 = *(_BYTE *)(v84 + 57);
    v173 = (char *)v187;
    v174 = v85;
    v176 = v86;
    v203 = v87;
    v170 = v87;
    v34 = v190;
    v33 = v191;
    v172 = (unsigned __int64)v191;
    v171 = (__CGEvent *)v190;
    v177 = v88;
    v89 = *(_QWORD *)(v84 + 48);
    v175 = *(_OWORD *)(v84 + 40);
    if ( v85 <= 0x3F )
    {
      v34 = 0xFDC0000000000000LL;
      if ( _bittest64((const __int64 *)&v34, v85) )
        break;
    }
    LOBYTE(v34) = v89 != 0;
    if ( ((v89 != 0) & (unsigned __int8)v186) != 0 )
    {
      v31 = v188;
      v33 = *(_QWORD **)(v188 + 88);
      v4 = v202;
      if ( v81 >= (unsigned __int64)v33 )
      {
        v154 = &off_1019656C0;
LABEL_290:
        core::panicking::panic_bounds_check::h56740b1198b22635(v81, v33, v154, v34);
      }
      v34 = ~v168;
      if ( (~v168 & v89) != 0 )
      {
        v98 = *(_QWORD *)(v188 + 80);
        if ( *(_BYTE *)(v98 + v20 + 57) )
        {
          codexmate_lib::platform::voice_trigger_macos::dispatch_binding_event_locked::h2a3678ee63c7d652(
            &v196,
            v98,
            v33,
            v81,
            0);
          v190 = v197;
          v192 = v196;
          v191 = (char *)v197;
          v193 = v197 + 32 * v198;
          _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h2d8be2ff9605713e(
            &v163,
            &v190);
          v190 = v200;
          v192 = (unsigned __int64)v199;
          v191 = (char *)v200;
          v193 = v200 + 16LL * *((_QWORD *)&v200 + 1);
          v32 = (CGEventRef)&v160;
          v99 = _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h87b4bff87993be73(
                  &v160,
                  &v190);
          LOBYTE(v99) = 1;
          v152 = v99;
        }
      }
      goto LABEL_171;
    }
    v40 = v167 == v85;
    v4 = v202;
    v31 = v188;
    if ( v40 )
    {
      if ( v89 )
      {
        if ( (_BYTE)v184 )
        {
          if ( v168 == v89 )
            goto LABEL_253;
          if ( (_DWORD)v156 == 11 )
          {
            v33 = *(_QWORD **)(v188 + 88);
            if ( v81 >= (unsigned __int64)v33 )
              goto LABEL_290;
            v100 = *(_QWORD *)(v188 + 80);
            if ( *(_BYTE *)(v100 + v20 + 57) )
            {
              codexmate_lib::platform::voice_trigger_macos::dispatch_binding_event_locked::h2a3678ee63c7d652(
                &v196,
                v100,
                v33,
                v81,
                0);
              v190 = v197;
              v192 = v196;
              v191 = (char *)v197;
              v193 = v197 + 32 * v198;
              _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h2d8be2ff9605713e(
                &v163,
                &v190);
              v190 = v200;
              v192 = (unsigned __int64)v199;
              v191 = (char *)v200;
              v193 = v200 + 16LL * *((_QWORD *)&v200 + 1);
              v32 = (CGEventRef)&v160;
              v21 = (__int64)&v190;
              _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h87b4bff87993be73(
                &v160,
                &v190);
              goto LABEL_245;
            }
          }
        }
        goto LABEL_171;
      }
      if ( v166 >= 2 )
      {
        v137 = v156;
      }
      else
      {
        if ( v168 )
          goto LABEL_171;
LABEL_253:
        v137 = v156;
        if ( (_DWORD)v156 == 10 )
        {
LABEL_264:
          v32 = event;
          v21 = 8;
          if ( CGEventGetIntegerValueField(event, kCGKeyboardEventAutorepeat) )
          {
            v103 = 0;
            goto LABEL_257;
          }
          v138 = 1;
          goto LABEL_268;
        }
      }
      if ( v137 == 12 )
      {
        v20 = v167;
        if ( (unsigned __int64)(v167 - 58) >= 6 )
        {
          v138 = 0;
          goto LABEL_268;
        }
        v138 = (CGEventGetFlags(event) & qword_101601BB0[v20 - 58]) != 0;
      }
      else
      {
        v138 = v137 == 25;
      }
      if ( (v138 & (unsigned __int8)v185) != 0 )
        goto LABEL_264;
LABEL_268:
      codexmate_lib::platform::voice_trigger_macos::dispatch_binding_event_locked::h2a3678ee63c7d652(
        &v196,
        *(_QWORD *)(v31 + 80),
        *(_QWORD *)(v31 + 88),
        v81,
        v138);
      v190 = v197;
      v192 = v196;
      v191 = (char *)v197;
      v193 = v197 + 32 * v198;
      _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h2d8be2ff9605713e(
        &v163,
        &v190);
      v190 = v200;
      v192 = (unsigned __int64)v199;
      v191 = (char *)v200;
      v193 = v200 + 16LL * *((_QWORD *)&v200 + 1);
      v32 = (CGEventRef)&v160;
      v21 = (__int64)&v190;
      v101 = v203;
      _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h87b4bff87993be73(
        &v160,
        &v190);
      goto LABEL_269;
    }
LABEL_171:
    v21 = v203;
    if ( v203 != 0x8000000000000000LL && v203 )
    {
      v32 = v171;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v203, 1);
    }
    if ( ++v81 == v157 )
    {
      v102 = v152;
      LOBYTE(v102) = v183 | v152;
      v103 = 0;
      LODWORD(v20) = v102;
      if ( !(_BYTE)v189 )
        goto LABEL_195;
      goto LABEL_196;
    }
  }
  if ( !(_BYTE)v186
    || (v34 = v85 - 54,
        LOBYTE(v33) = v85 - 54 < 0xA,
        ((unsigned __int8)v33 & (unsigned __int8)(0x3F7u >> (v85 - 54))) != 1)
    || !(_BYTE)v155
    || (v33 = qword_101601C30,
        v90 = qword_101601C30[v85 - 54] | v89 & 0x9E0000,
        v34 = v167,
        (v90 & qword_101601C30[v167 - 54]) == 0) )
  {
    v4 = v202;
LABEL_170:
    v31 = v188;
    goto LABEL_171;
  }
  if ( v145 == v90 )
  {
    v136 = *(_QWORD *)(v188 + 80);
    v20 = *(_QWORD *)(v188 + 88);
    if ( !(unsigned __int8)codexmate_lib::platform::voice_trigger_macos::should_defer_modifier_trigger::h2fdf50b67e6d9a1d(
                             v136,
                             v20,
                             &v170) )
    {
      if ( !*(_BYTE *)v153 || *(_QWORD *)(v188 + 40) != (_QWORD)v187 )
        *v153 = 0;
      codexmate_lib::platform::voice_trigger_macos::dispatch_binding_event_locked::h2a3678ee63c7d652(
        &v196,
        v136,
        v20,
        v81,
        1);
      v4 = v202;
      v190 = v197;
      v192 = v196;
      v191 = (char *)v197;
      v193 = v197 + 32 * v198;
      _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h2d8be2ff9605713e(
        &v163,
        &v190);
      v190 = v200;
      v192 = (unsigned __int64)v199;
      v191 = (char *)v200;
      v193 = v200 + 16LL * *((_QWORD *)&v200 + 1);
      v32 = (CGEventRef)&v160;
      v21 = (__int64)&v190;
      v101 = v203;
      _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h87b4bff87993be73(
        &v160,
        &v190);
      goto LABEL_269;
    }
    v32 = (CGEventRef)&v178;
    v21 = (__int64)v153;
    codexmate_lib::platform::voice_trigger_macos::prepare_pending_modifier_trigger_locked::hd4575969ca3d0fa7(
      &v178,
      v153,
      &v170);
    if ( v86 )
    {
LABEL_245:
      v103 = 0;
    }
    else
    {
      v103 = v178;
      v187 = v179;
    }
    v4 = v202;
LABEL_257:
    v101 = v203;
    goto LABEL_270;
  }
  v34 = ~v159;
  v4 = v202;
  if ( (~v159 & v90) == 0 )
    goto LABEL_170;
  LOBYTE(v201) = 0;
  v196 = 0;
  v197 = 8;
  v199 = nullptr;
  v198 = 0;
  v200 = 8u;
  v31 = v188;
  if ( *(_DWORD *)(v188 + 32) != 1
    || *(_QWORD *)(v188 + 40) != (_QWORD)v187
    || (*(_QWORD *)(v188 + 32) = 0, LOBYTE(v201) = 1, (v91 = *(_QWORD *)(v31 + 88)) == 0) )
  {
LABEL_165:
    v195 = v201;
    v194 = v200;
    v193 = (__int64)v199;
    v192 = v198;
    v95 = v197;
    v191 = (char *)v197;
    v190 = v196;
    v32 = (CGEventRef)&v190;
    if ( (_BYTE)v201 )
      goto LABEL_191;
    goto LABEL_166;
  }
  v92 = *(_QWORD *)(v31 + 80);
  v93 = 0;
  v94 = 0;
  while ( *(_QWORD *)(v92 + v93 + 24) != (_QWORD)v187 )
  {
    ++v94;
    v93 += 64;
    if ( v91 << 6 == v93 )
      goto LABEL_165;
  }
  v146 = *(_QWORD *)(v31 + 80);
  *(_QWORD *)&v187 = v91;
  codexmate_lib::platform::voice_trigger_macos::dispatch_binding_event_locked::h2a3678ee63c7d652(
    &v139,
    v92,
    v91,
    v94,
    1);
  v178 = v140;
  *((_QWORD *)&v179 + 1) = v139;
  *(_QWORD *)&v179 = v140;
  v180 = v140 + 32 * v141;
  _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h2d8be2ff9605713e(
    &v196,
    &v178);
  v178 = v143;
  *((_QWORD *)&v179 + 1) = v142;
  *(_QWORD *)&v179 = v143;
  v180 = v143 + 16 * v144;
  _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h87b4bff87993be73(
    &v199,
    &v178);
  codexmate_lib::platform::voice_trigger_macos::dispatch_binding_event_locked::h2a3678ee63c7d652(
    &v178,
    v146,
    v187,
    v94,
    0);
  v147 = (char *)v179;
  v149 = v178;
  v148 = (char *)v179;
  v150 = (char *)(v179 + 32LL * *((_QWORD *)&v179 + 1));
  _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h2d8be2ff9605713e(
    &v196,
    &v147);
  v147 = v181;
  v149 = v180;
  v148 = v181;
  v150 = &v181[16 * v182];
  _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h87b4bff87993be73(
    &v199,
    &v147);
  v95 = v197;
  v190 = v196;
  v191 = (char *)v197;
  v192 = v198;
  v193 = (__int64)v199;
  v194 = v200;
  v195 = v201;
  v32 = (CGEventRef)&v190;
  if ( !(_BYTE)v201 )
  {
LABEL_166:
    v96 = *(_QWORD *)(v31 + 88);
    if ( v81 >= v96 )
      core::panicking::panic_bounds_check::h56740b1198b22635(v81, *(_QWORD *)(v31 + 88), &off_101965690, v95);
    v97 = *(_QWORD *)(v31 + 80);
    if ( *(_BYTE *)(v97 + v20 + 57) )
    {
      codexmate_lib::platform::voice_trigger_macos::dispatch_binding_event_locked::h2a3678ee63c7d652(
        &v196,
        v97,
        v96,
        v81,
        0);
      v178 = v197;
      *((_QWORD *)&v179 + 1) = v196;
      *(_QWORD *)&v179 = v197;
      v180 = v197 + 32 * v198;
      _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h2d8be2ff9605713e(
        &v163,
        &v178);
      v178 = v200;
      *((_QWORD *)&v179 + 1) = v199;
      *(_QWORD *)&v179 = v200;
      v180 = v200 + 16LL * *((_QWORD *)&v200 + 1);
      v101 = v203;
      _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h87b4bff87993be73(
        &v160,
        &v178);
      v32 = (CGEventRef)&v190;
      core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..platform..voice_trigger_macos..TriggerAction$GT$$GT$::h8d5047e57c3ee58c(&v190);
      v21 = v193;
      if ( v193 )
      {
        v32 = (CGEventRef)v194;
        v21 = 16 * v193;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v194, 16 * v193, 8);
      }
      goto LABEL_269;
    }
    core::ptr::drop_in_place$LT$codexmate_lib..platform..voice_trigger_macos..PendingReleaseOutcome$GT$::hb06050b8a8992d43(&v190);
    goto LABEL_171;
  }
LABEL_191:
  v196 = (unsigned __int64)v191;
  v198 = v190;
  v197 = (__int64)v191;
  v199 = &v191[32 * v192];
  _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h2d8be2ff9605713e(
    &v163,
    &v196);
  v196 = v194;
  v198 = v193;
  v197 = v194;
  v199 = (char *)(v194 + 16LL * *((_QWORD *)&v194 + 1));
  v32 = (CGEventRef)&v160;
  v21 = (__int64)&v196;
  v101 = v203;
  _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h87b4bff87993be73(
    &v160,
    &v196);
LABEL_269:
  v103 = 0;
LABEL_270:
  if ( 2 * v101 )
  {
    v32 = v171;
    v21 = v101;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v101, 1);
  }
  LOBYTE(v20) = 1;
  v31 = v188;
  if ( !(_BYTE)v189 )
    goto LABEL_195;
LABEL_196:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v158);
  if ( (v103 & 1) == 0 )
    goto LABEL_204;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v4[2]) <= 0
    || (v104 = (char *)v4[2], v147 = v104, _InterlockedIncrement64((volatile signed __int64 *)v4[4]) <= 0) )
  {
LABEL_293:
    BUG();
  }
  v105 = v4[4];
  v139 = v105;
  v106 = *v4;
  v107 = (volatile signed __int64 *)v4[1];
  v108 = __OFSUB__(*v4, 2);
  if ( *v4 == 2 )
  {
    v134 = _InterlockedIncrement64(v107);
    if ( (v134 < 0) ^ v108 | (v134 == 0) )
      goto LABEL_240;
  }
  else
  {
    if ( (_DWORD)v106 == 1 )
    {
      if ( _InterlockedIncrement64(v107 + 48) > 0 )
        goto LABEL_202;
LABEL_240:
      ((void (__noreturn *)(void))std::process::abort::h38b4a24325fecca0)();
    }
    v135 = _InterlockedIncrement64(v107 + 64);
    if ( (v135 < 0) ^ __OFSUB__((_DWORD)v106, 1) | (v135 == 0) )
      goto LABEL_240;
  }
LABEL_202:
  v198 = v105;
  v199 = v104;
  v200 = v187;
  v196 = v106;
  v197 = (__int64)v107;
  v21 = (__int64)&v172;
  v172 = 0x8000000000000000LL;
  v170 = 0;
  LOBYTE(v175) = 0;
  std::thread::lifecycle::spawn_unchecked::h60a9d9327efe264a(&v190, &v172, 0, v106, 0, 0, &v196);
  if ( !v190 )
  {
    v170 = (__int64)v191;
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole",
      22,
      &v170,
      &off_101965F28,
      &off_101965588);
  }
  v170 = v190;
  v171 = (__CGEvent *)v191;
  v172 = v192;
  core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(&v170);
LABEL_204:
  v183 = v20;
  v109 = v160;
  v110 = v161;
  if ( v162 )
  {
    v111 = __OFADD__(v161, 16 * v162);
    v112 = (__int64 *)(v161 + 16 * v162);
    v113 = (__int64 *)v161;
    do
    {
      v114 = *v113;
      v115 = v113[1];
      v116 = (__int64 *)v202;
      v117 = _InterlockedIncrement64((volatile signed __int64 *)v202[2]);
      if ( (v117 < 0) ^ v111 | (v117 == 0) )
        goto LABEL_293;
      v118 = v116[2];
      v196 = v118;
      v119 = _InterlockedIncrement64((volatile signed __int64 *)v116[4]);
      if ( (v119 < 0) ^ v111 | (v119 == 0) )
        goto LABEL_293;
      v120 = v116[4];
      v170 = v120;
      v121 = *v116;
      v122 = (volatile signed __int64 *)v116[1];
      if ( v121 == 2 )
      {
        if ( _InterlockedIncrement64(v122) <= 0 )
          goto LABEL_252;
      }
      else if ( (_DWORD)v121 == 1 )
      {
        if ( _InterlockedIncrement64(v122 + 48) <= 0 )
          goto LABEL_252;
      }
      else
      {
        v123 = _InterlockedIncrement64(v122 + 64);
        if ( (v123 < 0) ^ __OFSUB__((_DWORD)v121, 1) | (v123 == 0) )
LABEL_252:
          std::process::abort::h38b4a24325fecca0(v118, v21, v121, v122, v114, v115);
      }
      v21 = v120;
      codexmate_lib::platform::voice_trigger_macos::spawn_hold_safety_timer::h30731bf7dd82fffa(
        v118,
        v120,
        v121,
        v122,
        v114,
        v115);
      v113 += 2;
      v111 = __OFSUB__(v113, v112);
    }
    while ( v113 != v112 );
  }
  if ( v109 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, 16 * v109, 8);
  v124 = v163;
  v125 = v164;
  v126 = v164 + 32 * v165;
  v190 = v164;
  v191 = (char *)v164;
  v192 = v163;
  v193 = v126;
  *(_QWORD *)&v187 = v164;
  v127 = v183;
  if ( v165 )
  {
    v203 = v163;
    v125 = v187 + 32;
    while ( *(_QWORD *)(v125 - 32) != 4 )
    {
      v128 = v125 - 32;
      v196 = *(_QWORD *)(v125 - 32);
      v199 = *(char **)(v125 - 32 + 24);
      v129 = *(_QWORD *)(v125 - 32 + 8);
      v198 = *(_QWORD *)(v125 - 32 + 16);
      v197 = v129;
      std::sync::mpmc::Sender$LT$T$GT$::send::ha89c8959da38154d(&v170, v202, &v196);
      if ( v170 != 4 )
      {
        switch ( v170 )
        {
          case 0LL:
          case 1LL:
          case 2LL:
            if ( v171 != (__CGEvent *)0x8000000000000000LL && v171 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v171, 1);
            break;
          case 3LL:
            break;
        }
      }
      v125 += 32;
      if ( v128 + 32 == v126 )
      {
        v125 = v126;
        break;
      }
    }
    v191 = (char *)v125;
    v127 = v183;
    v124 = v203;
  }
  v130 = v126 - v125;
  if ( v130 )
  {
    v131 = v130 >> 5;
    v132 = (_QWORD *)(v125 + 16);
    do
    {
      switch ( *(v132 - 2) )
      {
        case 0LL:
        case 1LL:
        case 2LL:
          v133 = *(v132 - 1);
          if ( 2 * v133 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v132, v133, 1);
          break;
        case 3LL:
          break;
      }
      v132 += 4;
      --v131;
    }
    while ( v131 );
  }
  if ( v124 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v187, 32 * v124, 8);
  if ( (v127 & 1) != 0 )
    return nullptr;
  return event;
}
