// __ZN13codexmate_lib4core5voice7runtime24update_settings_internal @ 0x100685a60 | 基线 same-set
void __fastcall codexmate_lib::core::voice::runtime::update_settings_internal::h84dae0cf7084379f(
        void *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 *a7)
{
  __int64 *v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  char v12; // bl
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // kr00_16
  char v17; // r15
  int v18; // eax
  char *v19; // rdx
  char v20; // al
  __int64 *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r15
  unsigned int v31; // r13d
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rcx
  char v36; // r13
  int v37; // eax
  char *v38; // rdx
  __int64 v39; // rsi
  __int64 *v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // rax
  bool v44; // zf
  __int64 v45; // rbx
  char v46; // al
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 *v50; // rbx
  __int64 v51; // r15
  __int64 *v52; // rbx
  double v53; // xmm0_8
  unsigned int v54; // eax
  size_t v55; // r13
  const void *v56; // rbx
  _QWORD *v57; // rax
  size_t v58; // r15
  __int64 v59; // rdx
  __int64 v60; // rdi
  __int64 *v61; // rbx
  __int64 v62; // r13
  __int64 v63; // rbx
  char v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 *v68; // r15
  int v69; // eax
  __int64 v70; // r14
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int128 v76; // kr20_16
  char v77; // r13
  int v78; // eax
  char *v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rdi
  int v83; // eax
  __int64 v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // rsi
  __int64 v89; // rsi
  __int64 v90; // rsi
  __int64 v91; // rsi
  __int64 v92; // rsi
  __int64 *v93; // rdi
  __int64 v94; // rdx
  __int64 v95; // rsi
  __int64 *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rsi
  __int64 v99; // rdi
  char *v100; // rdx
  _QWORD v101[93]; // [rsp+0h] [rbp-7C0h] BYREF
  _BYTE v102[72]; // [rsp+2E8h] [rbp-4D8h] BYREF
  __int64 v103; // [rsp+330h] [rbp-490h] BYREF
  __int128 v104; // [rsp+338h] [rbp-488h]
  __int64 v105; // [rsp+348h] [rbp-478h]
  __int128 v106; // [rsp+350h] [rbp-470h]
  __int64 v107; // [rsp+360h] [rbp-460h]
  __int128 v108; // [rsp+368h] [rbp-458h]
  __int64 *v109; // [rsp+378h] [rbp-448h]
  __int128 v110; // [rsp+380h] [rbp-440h]
  __int64 v111; // [rsp+390h] [rbp-430h]
  __int128 v112; // [rsp+398h] [rbp-428h]
  __int64 v113; // [rsp+3A8h] [rbp-418h]
  __int128 v114; // [rsp+3B0h] [rbp-410h]
  __int64 v115; // [rsp+3C0h] [rbp-400h]
  __int64 v116; // [rsp+3C8h] [rbp-3F8h]
  __int64 v117; // [rsp+3D0h] [rbp-3F0h]
  size_t v118; // [rsp+3D8h] [rbp-3E8h]
  _QWORD *v119; // [rsp+3E0h] [rbp-3E0h]
  size_t v120; // [rsp+3E8h] [rbp-3D8h]
  _QWORD *v121; // [rsp+3F0h] [rbp-3D0h]
  __int64 v122; // [rsp+3F8h] [rbp-3C8h]
  __int64 v123; // [rsp+400h] [rbp-3C0h]
  __int64 v124; // [rsp+408h] [rbp-3B8h]
  __int128 v125; // [rsp+410h] [rbp-3B0h]
  __int64 v126; // [rsp+420h] [rbp-3A0h]
  __int128 v127; // [rsp+428h] [rbp-398h]
  __int64 v128; // [rsp+438h] [rbp-388h]
  __int64 v129; // [rsp+440h] [rbp-380h]
  __int64 *v130; // [rsp+448h] [rbp-378h]
  __int64 v131; // [rsp+450h] [rbp-370h]
  __int64 *v132; // [rsp+458h] [rbp-368h]
  __int64 v133; // [rsp+460h] [rbp-360h]
  int v134; // [rsp+468h] [rbp-358h]
  __int16 v135; // [rsp+46Ch] [rbp-354h]
  char v136; // [rsp+46Eh] [rbp-352h]
  char v137; // [rsp+46Fh] [rbp-351h]
  char v138; // [rsp+470h] [rbp-350h]
  char v139; // [rsp+471h] [rbp-34Fh]
  char v140; // [rsp+472h] [rbp-34Eh]
  unsigned __int8 v141; // [rsp+473h] [rbp-34Dh]
  _QWORD *v142; // [rsp+478h] [rbp-348h] BYREF
  __int64 v143; // [rsp+480h] [rbp-340h]
  __int64 v144; // [rsp+488h] [rbp-338h]
  __int64 *v145; // [rsp+490h] [rbp-330h]
  __int64 v146; // [rsp+498h] [rbp-328h]
  __int128 v147; // [rsp+4A0h] [rbp-320h]
  __int64 v148; // [rsp+4B0h] [rbp-310h]
  __int128 v149; // [rsp+4B8h] [rbp-308h]
  __int64 v150; // [rsp+4C8h] [rbp-2F8h]
  __int64 *v151; // [rsp+4D0h] [rbp-2F0h]
  __int64 v152; // [rsp+4D8h] [rbp-2E8h]
  _OWORD v153[6]; // [rsp+4E0h] [rbp-2E0h] BYREF
  __int64 v154; // [rsp+540h] [rbp-280h] BYREF
  __int128 v155; // [rsp+548h] [rbp-278h]
  __int64 v156; // [rsp+558h] [rbp-268h] BYREF
  __int128 v157; // [rsp+560h] [rbp-260h]
  __int64 v158; // [rsp+570h] [rbp-250h] BYREF
  __int128 v159; // [rsp+578h] [rbp-248h]
  __int64 v160; // [rsp+588h] [rbp-238h]
  __int64 v161; // [rsp+590h] [rbp-230h] BYREF
  __int128 v162; // [rsp+598h] [rbp-228h]
  __int64 v163; // [rsp+5A8h] [rbp-218h] BYREF
  __int128 v164; // [rsp+5B0h] [rbp-210h]
  _BYTE v165[72]; // [rsp+5C0h] [rbp-200h] BYREF
  __int64 v166; // [rsp+608h] [rbp-1B8h] BYREF
  __int128 v167; // [rsp+610h] [rbp-1B0h]
  __int64 v168; // [rsp+620h] [rbp-1A0h]
  __int64 *v169; // [rsp+628h] [rbp-198h]
  __int64 v170; // [rsp+630h] [rbp-190h]
  __int64 *v171; // [rsp+638h] [rbp-188h] BYREF
  __int128 v172; // [rsp+640h] [rbp-180h]
  __int64 v173; // [rsp+650h] [rbp-170h]
  __int128 v174; // [rsp+658h] [rbp-168h]
  __int64 v175; // [rsp+668h] [rbp-158h] BYREF
  __int128 v176; // [rsp+670h] [rbp-150h]
  __int64 v177; // [rsp+680h] [rbp-140h] BYREF
  __int128 v178; // [rsp+688h] [rbp-138h]
  __int64 v179; // [rsp+698h] [rbp-128h] BYREF
  __int128 v180; // [rsp+6A0h] [rbp-120h]
  __int128 v181; // [rsp+6B0h] [rbp-110h]
  __int16 v182; // [rsp+6C2h] [rbp-FEh]
  int v183; // [rsp+6C4h] [rbp-FCh]
  __int64 v184; // [rsp+6C8h] [rbp-F8h] BYREF
  __int128 v185; // [rsp+6D0h] [rbp-F0h]
  void *__dst; // [rsp+6E0h] [rbp-E0h]
  __int64 v187; // [rsp+6E8h] [rbp-D8h]
  __int64 v188; // [rsp+6F0h] [rbp-D0h] BYREF
  __int128 v189; // [rsp+6F8h] [rbp-C8h]
  _OWORD v190[6]; // [rsp+708h] [rbp-B8h] BYREF
  int v191; // [rsp+76Ch] [rbp-54h]
  _QWORD *v192; // [rsp+770h] [rbp-50h]
  int v193; // [rsp+77Ch] [rbp-44h]
  __int64 v194; // [rsp+780h] [rbp-40h]
  unsigned __int8 v195; // [rsp+78Fh] [rbp-31h]
  _QWORD *v196; // [rsp+790h] [rbp-30h]

  v193 = a6; /*0x100685a74*/
  v191 = a5; /*0x100685a78*/
  v169 = a4; /*0x100685a7c*/
  v183 = a3; /*0x100685a83*/
  __dst = a1; /*0x100685a8c*/
  v8 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x100685aa5*/
  v9 = v8; /*0x100685aaa*/
  if ( !v8 ) /*0x100685ab0*/
  {
    *(_QWORD *)v102 = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x100685bef*/
    *(_QWORD *)&v102[8] = 76; /*0x100685bf6*/
    v101[0] = v102; /*0x100685c08*/
    v101[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100685c16*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100685c32*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v101,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v10 = *v8; /*0x100685ab6*/
  if ( !*v8 ) /*0x100685ab6*/
    v10 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v8); /*0x100685c44*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v10); /*0x100685ac2*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, a2, v11, 0x8000000000000000LL) ^ 1; /*0x100685c53*/
    v20 = *((_BYTE *)v9 + 8); /*0x100685c56*/
    v187 = 0x7FFFFFFFFFFFFFFFLL; /*0x100685c5d*/
    if ( v20 ) /*0x100685c64*/
      goto LABEL_6; /*0x100685c64*/
LABEL_12:
    v21 = v9 + 2; /*0x100685c6a*/
    v22 = _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178( /*0x100685c78*/
            v101,
            v9 + 2);
    if ( !v12 ) /*0x100685c7f*/
    {
      LODWORD(v22) = std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6; /*0x100685c88*/
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100685c8e*/
      {
        LOBYTE(v22) = 1; /*0x100686dc4*/
        LODWORD(v181) = v22; /*0x100686dc6*/
        LODWORD(v22) = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v101, v21, v23, v24); /*0x100686dcc*/
        if ( !(_BYTE)v22 ) /*0x100686dd3*/
          *((_BYTE *)v9 + 8) = 1; /*0x100686dd9*/
      }
    }
    v25 = *v9; /*0x100685c94*/
    LOBYTE(v22) = 1; /*0x100685c97*/
    LODWORD(v181) = v22; /*0x100685c99*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v25); /*0x100685c9f*/
    v26 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100685cac*/
    v196 = (_QWORD *)(v26 + 32); /*0x100685cb3*/
    v27 = *(_QWORD *)(v26 + 32); /*0x100685cb7*/
    if ( !v27 ) /*0x100685cbe*/
      v27 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v196); /*0x100685e94*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v27); /*0x100685cc4*/
    v30 = v187; /*0x100685cd3*/
    if ( (v187 & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 )
    {
      v31 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v27, v21, v28, v29); /*0x100685ea1*/
      LOBYTE(v31) = v31 ^ 1; /*0x100685ea4*/
      v30 = v187; /*0x100685ea8*/
      if ( *(_BYTE *)(v26 + 40) ) /*0x100685eaf*/
        goto LABEL_18; /*0x100685eb6*/
    }
    else
    {
      v31 = 0; /*0x100685ce3*/
      if ( *(_BYTE *)(v26 + 40) )
      {
LABEL_18:
        *(_QWORD *)v165 = 0; /*0x100685cf3*/
        *(_OWORD *)&v165[8] = 1u; /*0x100685cfe*/
        *(_QWORD *)&v190[1] = 1610612768; /*0x100685d14*/
        *(_QWORD *)&v190[0] = v165; /*0x100685d26*/
        *((_QWORD *)&v190[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100685d34*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                v190) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100686dba*/
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
            55,
            &v161,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
        v33 = *(_QWORD *)v165; /*0x100685d5b*/
        v34 = *(_QWORD *)&v165[8]; /*0x100685d62*/
        v35 = v31; /*0x100685d69*/
        v36 = v165[16]; /*0x100685d6c*/
        LODWORD(v171) = *(_DWORD *)&v165[17]; /*0x100685d7a*/
        *(_DWORD *)((char *)&v171 + 3) = *(_DWORD *)&v165[20]; /*0x100685d86*/
        if ( !(_BYTE)v35
          && (v30 & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 v32,
                                 v35) )
        {
          *(_BYTE *)(v26 + 40) = 1; /*0x100686df0*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v196); /*0x100685daa*/
        v37 = (int)v171; /*0x100685daf*/
        v38 = (char *)__dst; /*0x100685dbb*/
        *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)&v171 + 3); /*0x100685dc2*/
        *(_DWORD *)(v38 + 25) = v37; /*0x100685dc5*/
        *((_QWORD *)v38 + 1) = v33; /*0x100685dc8*/
        *((_QWORD *)v38 + 2) = v34; /*0x100685dcc*/
        v38[24] = v36; /*0x100685dd0*/
        *(_QWORD *)v38 = 2; /*0x100685dd4*/
        core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v101); /*0x100685de2*/
        goto LABEL_22; /*0x100685de2*/
      }
    }
    v43 = *v169; /*0x100685ec3*/
    v44 = *v169 == 0x8000000000000000LL; /*0x100685ed0*/
    LODWORD(v194) = v31; /*0x100685ed3*/
    if ( v44 )
    {
      v45 = *(_QWORD *)(v26 + 824); /*0x100685edd*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v171, v26 + 112); /*0x100685eef*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v165, v26 + 136); /*0x100685f02*/
      v46 = *(_BYTE *)(v26 + 899); /*0x100685f07*/
      v47 = *(_QWORD *)(v26 + 832); /*0x100685f0f*/
      *(_QWORD *)&v190[3] = v45; /*0x100685f16*/
      *(_QWORD *)&v190[0] = v171; /*0x100685f2b*/
      *(_OWORD *)((char *)v190 + 8) = v172; /*0x100685f32*/
      *((_QWORD *)&v190[1] + 1) = *(_QWORD *)v165; /*0x100685f55*/
      v190[2] = *(_OWORD *)&v165[8]; /*0x100685f5c*/
      LOBYTE(v190[4]) = v46; /*0x100685f71*/
      *((_QWORD *)&v190[3] + 1) = v47; /*0x100685f74*/
      if ( (_BYTE)v191 != 3 )
      {
LABEL_37:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v163, v26 + 256); /*0x100685fea*/
        if ( (_BYTE)v193 == 4 ) /*0x100686001*/
          v193 = *(unsigned __int8 *)(v26 + 903); /*0x10068600b*/
        if ( *a7 == 0x8000000000000000LL ) /*0x100686022*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v188, v26 + 280); /*0x100686032*/
        }
        else
        {
          v188 = *a7; /*0x100686039*/
          v49 = a7[2]; /*0x100686044*/
          *(_QWORD *)&v189 = a7[1]; /*0x100686048*/
          *((_QWORD *)&v189 + 1) = v49; /*0x10068604f*/
        }
        v50 = *(__int64 **)(v26 + 840); /*0x100686056*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v179, v26 + 160); /*0x10068606b*/
        v145 = v50; /*0x100686070*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v177, v26 + 184); /*0x100686085*/
        v51 = *(_QWORD *)(v26 + 848); /*0x10068608a*/
        v52 = *(__int64 **)(v26 + 856); /*0x100686091*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v175, v26 + 208); /*0x1006860a6*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v161, v26 + 232); /*0x1006860b9*/
        v150 = v51; /*0x1006860be*/
        v160 = *(_QWORD *)(v26 + 864); /*0x1006860cc*/
        v181 = *(_OWORD *)(v26 + 808); /*0x1006860e2*/
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h08697cf7f9d0479a( /*0x1006860f0*/
          v165,
          v26 + 776);
        v151 = v52; /*0x1006860f5*/
        v53 = *(double *)&v181; /*0x1006860fc*/
        *(_OWORD *)&v165[32] = v181; /*0x100686103*/
        v171 = *(__int64 **)v165; /*0x100686118*/
        v172 = *(_OWORD *)&v165[8]; /*0x10068611f*/
        v173 = *(_QWORD *)&v165[24]; /*0x10068613b*/
        v174 = v181; /*0x100686150*/
        v182 = *(_WORD *)(v26 + 896); /*0x100686166*/
        v54 = 8 * *(unsigned __int8 *)(v26 + 902); /*0x100686175*/
        v55 = *(_QWORD *)((char *)&unk_101605D30 + v54); /*0x10068617f*/
        v56 = *(_UNKNOWN **)((char *)&off_101968990 + v54); /*0x10068618a*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v165, v26 + 776); /*0x10068618e*/
        v57 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v55, 1); /*0x10068619b*/
        if ( !v57 ) /*0x1006861a3*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v55); /*0x10068757a*/
        v192 = v57; /*0x1006861a9*/
        v58 = v55; /*0x1006861b3*/
        memcpy(v57, v56, v55); /*0x1006861b9*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v142, v26 + 568); /*0x1006861cf*/
        v195 = *(_BYTE *)(v26 + 904); /*0x1006861dc*/
        qmemcpy(v102, v190, sizeof(v102)); /*0x1006861f2*/
        v159 = v164; /*0x100686211*/
        v158 = v163; /*0x100686218*/
        v168 = v188; /*0x100686226*/
        v152 = *((_QWORD *)&v189 + 1); /*0x100686242*/
        v170 = v189; /*0x100686242*/
        v156 = v179; /*0x100686257*/
        v157 = v180; /*0x10068625e*/
        v154 = v177; /*0x100686281*/
        v155 = v178; /*0x100686288*/
        v167 = v176; /*0x1006862b9*/
        v166 = v175; /*0x1006862c0*/
        v184 = v161; /*0x1006862d5*/
        v185 = v162; /*0x1006862dc*/
        *(_QWORD *)&v153[0] = v171; /*0x1006862ff*/
        *(_OWORD *)((char *)v153 + 8) = v172; /*0x100686306*/
        *((_QWORD *)&v153[1] + 1) = v173; /*0x100686322*/
        v153[2] = v174; /*0x100686337*/
        if ( !(_BYTE)v194 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v187) != 0 ) /*0x10068635c*/
        {
          LODWORD(v181) = 0; /*0x100686dfa*/
          if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x100686e04*/
                                   &v103,
                                   (char *)&v190[4] + 8,
                                   v59,
                                   v172) )
            *(_BYTE *)(v26 + 40) = 1; /*0x100686e11*/
        }
        v60 = *v196; /*0x100686366*/
        LODWORD(v181) = 0; /*0x100686369*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v60); /*0x100686373*/
        qmemcpy(v165, v102, sizeof(v165)); /*0x10068638b*/
        v164 = v159; /*0x1006863aa*/
        v163 = v158; /*0x1006863b1*/
        v189 = v157; /*0x1006863d4*/
        v188 = v156; /*0x1006863db*/
        v180 = v155; /*0x1006863fe*/
        v179 = v154; /*0x100686405*/
        v178 = v167; /*0x100686428*/
        v177 = v166; /*0x10068642f*/
        v176 = v185; /*0x100686452*/
        v175 = v184; /*0x100686459*/
        v149 = v153[2]; /*0x100686475*/
        v148 = *((_QWORD *)&v153[1] + 1); /*0x100686483*/
        v147 = *(_OWORD *)((char *)v153 + 8); /*0x1006864a6*/
        v146 = *(_QWORD *)&v153[0]; /*0x1006864ad*/
        v196 = v142; /*0x1006864bb*/
        v61 = *(__int64 **)&v165[48]; /*0x1006864c6*/
        v194 = v143; /*0x1006864d4*/
        if ( v165[64] == 1 ) /*0x1006864d8*/
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v102, v165); /*0x1006864ec*/
          if ( v177 ) /*0x1006864fb*/
            v53 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v178, v177, 1); /*0x100686509*/
          v178 = *(_OWORD *)&v102[8]; /*0x10068652a*/
          v177 = *(_QWORD *)v102; /*0x100686531*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v102, &v165[24]); /*0x100686546*/
          if ( v175 ) /*0x100686555*/
            v53 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v176, v175, 1); /*0x100686563*/
          v176 = *(_OWORD *)&v102[8]; /*0x100686584*/
          v175 = *(_QWORD *)v102; /*0x10068658b*/
          v62 = *(_QWORD *)&v165[56]; /*0x100686592*/
          v160 = *(_QWORD *)&v165[56]; /*0x100686599*/
          v151 = v61; /*0x1006865a0*/
          v61 = v145; /*0x1006865a7*/
        }
        else
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v102, v165); /*0x1006865c1*/
          if ( v188 ) /*0x1006865d0*/
            v53 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189, v188, 1); /*0x1006865de*/
          v189 = *(_OWORD *)&v102[8]; /*0x1006865ff*/
          v188 = *(_QWORD *)v102; /*0x100686606*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v102, &v165[24]); /*0x10068661b*/
          if ( v179 ) /*0x10068662a*/
            v53 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v180, v179, 1); /*0x100686638*/
          v180 = *(_OWORD *)&v102[8]; /*0x100686659*/
          v179 = *(_QWORD *)v102; /*0x100686660*/
          v62 = *(_QWORD *)&v165[56]; /*0x100686667*/
          v150 = *(_QWORD *)&v165[56]; /*0x10068666e*/
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v161, v165); /*0x100686683*/
        v169 = v61; /*0x100686688*/
        v63 = *(_QWORD *)&v165[48]; /*0x10068668f*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v158, v165); /*0x1006866a4*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v156, &v165[24]); /*0x1006866b7*/
        v64 = v165[64]; /*0x1006866bc*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v154, &v188); /*0x1006866d2*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v166, &v179); /*0x1006866e5*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v184, &v177); /*0x1006866f8*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v171, &v175); /*0x10068670b*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v153, &v163); /*0x10068671e*/
        v65 = v170; /*0x10068672e*/
        LODWORD(v181) = (unsigned __int8)v193; /*0x10068673c*/
        codexmate_lib::core::voice::runtime::normalize_processing_mode_id::hecc8c93fa1ac0fb0(v190, v170, v152); /*0x100686742*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v190, v65); /*0x100686747*/
        v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100686756*/
        if ( !v66 ) /*0x10068675e*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10068758b*/
        v118 = v58; /*0x100686764*/
        v119 = v192; /*0x10068676f*/
        v120 = v58; /*0x100686776*/
        v121 = v142; /*0x100686784*/
        v122 = v143; /*0x100686792*/
        v123 = v144; /*0x1006867a0*/
        v134 = 7; /*0x1006867a7*/
        v136 = v183; /*0x1006867b7*/
        *(_QWORD *)v102 = v161; /*0x1006867c4*/
        *(_OWORD *)&v102[8] = v162; /*0x1006867d2*/
        v128 = v63; /*0x1006867e7*/
        *(_OWORD *)&v102[32] = v159; /*0x100686803*/
        *(_QWORD *)&v102[24] = v158; /*0x100686811*/
        *(_OWORD *)&v102[56] = v157; /*0x10068682d*/
        *(_QWORD *)&v102[48] = v156; /*0x10068683b*/
        v137 = v64; /*0x100686842*/
        v129 = v62; /*0x100686849*/
        v130 = v169; /*0x100686857*/
        v103 = v154; /*0x100686865*/
        v104 = v155; /*0x100686873*/
        v106 = v167; /*0x10068689d*/
        v105 = v166; /*0x1006868ab*/
        v67 = v150; /*0x1006868b2*/
        v131 = v150; /*0x1006868b9*/
        v68 = v151; /*0x1006868c0*/
        v132 = v151; /*0x1006868c7*/
        v108 = v185; /*0x1006868e3*/
        v107 = v184; /*0x1006868f1*/
        v110 = v172; /*0x10068690d*/
        v109 = v171; /*0x10068691b*/
        v133 = v160; /*0x100686929*/
        v139 = v191; /*0x100686933*/
        v112 = *(_OWORD *)((char *)v153 + 8); /*0x10068694e*/
        v111 = *(_QWORD *)&v153[0]; /*0x10068695c*/
        v140 = v193; /*0x100686966*/
        v114 = *(_OWORD *)((char *)v190 + 8); /*0x100686981*/
        v113 = *(_QWORD *)&v190[0]; /*0x10068698f*/
        v127 = v149; /*0x1006869ab*/
        v126 = v148; /*0x1006869b9*/
        v125 = v147; /*0x1006869d5*/
        v124 = v146; /*0x1006869e3*/
        *(_WORD *)(v66 + 4) = 28005; /*0x1006869ea*/
        *(_DWORD *)v66 = 1953724787; /*0x1006869f0*/
        v115 = 6; /*0x1006869f6*/
        v116 = v66; /*0x100686a01*/
        v117 = 6; /*0x100686a08*/
        v135 = v182; /*0x100686a1a*/
        v138 = 0; /*0x100686a21*/
        v69 = v195; /*0x100686a28*/
        v141 = v195; /*0x100686a2c*/
        LOBYTE(v69) = 1; /*0x100686a32*/
        LODWORD(v196) = v69; /*0x100686a34*/
        codexmate_lib::core::voice::runtime::write_runtime_file::hbc4e21afe493dd65( /*0x100686a4f*/
          v153,
          (__int64)v101,
          (__int64)v102,
          v53);
        if ( LODWORD(v153[0]) != 11 ) /*0x100686a5b*/
        {
          qmemcpy(v190, v153, sizeof(v190)); /*0x100686ba9*/
          v184 = 0; /*0x100686bac*/
          v185 = 1u; /*0x100686bb7*/
          *((_QWORD *)&v172 + 1) = 1610612768; /*0x100686bcd*/
          v171 = &v184; /*0x100686bdf*/
          *(_QWORD *)&v172 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100686bed*/
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100686bfe*/
                                  v190,
                                  &v171) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100686e4d*/
              &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
              55,
              &v161,
              &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
              &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
          v166 = v184; /*0x100686c19*/
          v167 = v185; /*0x100686c20*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v153); /*0x100686c3c*/
          v79 = (char *)__dst; /*0x100686c48*/
          *((_QWORD *)__dst + 3) = *((_QWORD *)&v167 + 1); /*0x100686c4f*/
          v80 = v166; /*0x100686c53*/
          *((_QWORD *)v79 + 2) = v167; /*0x100686c61*/
          *((_QWORD *)v79 + 1) = v80; /*0x100686c65*/
          goto LABEL_68; /*0x100686c65*/
        }
        v70 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100686a69*/
        v192 = (_QWORD *)(v70 + 32); /*0x100686a70*/
        v71 = *(_QWORD *)(v70 + 32); /*0x100686a74*/
        if ( !v71 ) /*0x100686a7b*/
          v71 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v192); /*0x100686e24*/
        std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v71); /*0x100686a81*/
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v187) != 0 )
        {
          v83 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v71, v101, v72, v73); /*0x100686e57*/
          LOBYTE(v83) = v83 ^ 1; /*0x100686e62*/
          LODWORD(v194) = v83; /*0x100686e64*/
          if ( *(_BYTE *)(v70 + 40) ) /*0x100686e67*/
            goto LABEL_62; /*0x100686e6e*/
        }
        else
        {
          LODWORD(v194) = 0; /*0x100686a9d*/
          if ( *(_BYTE *)(v70 + 40) )
          {
LABEL_62:
            *(_QWORD *)&v153[0] = 0; /*0x100686ab1*/
            *(_OWORD *)((char *)v153 + 8) = 1u; /*0x100686abc*/
            *(_QWORD *)&v190[1] = 1610612768; /*0x100686ad2*/
            *(_QWORD *)&v190[0] = v153; /*0x100686add*/
            *((_QWORD *)&v190[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100686aeb*/
            if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                    "poisoned lock: another task failed inside",
                                    41,
                                    v190) )
              core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10068750e*/
                &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
                55,
                &v161,
                &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
                &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
            v76 = v153[0]; /*0x100686b19*/
            v77 = v153[1]; /*0x100686b20*/
            LODWORD(v171) = *(_DWORD *)((char *)&v153[1] + 1); /*0x100686b2e*/
            *(_DWORD *)((char *)&v171 + 3) = DWORD1(v153[1]); /*0x100686b3a*/
            if ( !(_BYTE)v194
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v187) != 0
              && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                     "poisoned lock: another task failed inside",
                                     41,
                                     v74,
                                     v75) )
            {
              *(_BYTE *)(v70 + 40) = 1; /*0x10068754a*/
            }
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v192); /*0x100686b64*/
            v78 = (int)v171; /*0x100686b69*/
            v79 = (char *)__dst; /*0x100686b75*/
            *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)&v171 + 3); /*0x100686b7c*/
            *(_DWORD *)(v79 + 25) = v78; /*0x100686b7f*/
            *(_OWORD *)(v79 + 8) = v76; /*0x100686b82*/
            v79[24] = v77; /*0x100686b8a*/
LABEL_68:
            *(_QWORD *)v79 = 2; /*0x100686c69*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(v102); /*0x100686c77*/
            if ( v175 ) /*0x100686c86*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v176, v175, 1); /*0x100686c94*/
            if ( v177 ) /*0x100686ca3*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v178, v177, 1); /*0x100686cb1*/
            if ( v179 ) /*0x100686cc0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v180, v179, 1); /*0x100686cce*/
            if ( v188 ) /*0x100686cdd*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189, v188, 1); /*0x100686ceb*/
            if ( v168 ) /*0x100686cfa*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v170, v168, 1); /*0x100686d08*/
            if ( v163 ) /*0x100686d17*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v164, v163, 1); /*0x100686d25*/
            if ( *(_QWORD *)v165 ) /*0x100686d34*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v165[8], *(_QWORD *)v165, 1); /*0x100686d42*/
            v81 = *(_QWORD *)&v165[24]; /*0x100686d47*/
            if ( !*(_QWORD *)&v165[24] ) /*0x100686d51*/
              goto LABEL_85; /*0x100686d51*/
            v82 = *(_QWORD *)&v165[32]; /*0x100686d53*/
LABEL_84:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v81, 1); /*0x100686d5f*/
LABEL_85:
            core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v101); /*0x100686d64*/
            return; /*0x100686d6b*/
          }
        }
        *(_BYTE *)(v70 + 898) = v183; /*0x100686e7a*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v190, v165); /*0x100686e91*/
        v84 = *(_QWORD *)(v70 + 88); /*0x100686e9a*/
        if ( v84 ) /*0x100686ea1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v70 + 96), v84, 1); /*0x100686eac*/
        *(_QWORD *)(v70 + 104) = *(_QWORD *)&v190[1]; /*0x100686eb8*/
        *(_OWORD *)(v70 + 88) = v190[0]; /*0x100686ece*/
        *(_QWORD *)(v70 + 824) = *(_QWORD *)&v165[48]; /*0x100686ed8*/
        *(_OWORD *)((char *)v190 + 8) = *(_OWORD *)&v165[8]; /*0x100686efb*/
        *(_QWORD *)&v190[0] = *(_QWORD *)v165; /*0x100686f02*/
        v85 = *(_QWORD *)(v70 + 112); /*0x100686f0d*/
        if ( v85 ) /*0x100686f14*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v70 + 120), v85, 1); /*0x100686f1f*/
        *(_QWORD *)(v70 + 128) = *(_QWORD *)&v190[1]; /*0x100686f2b*/
        *(_OWORD *)(v70 + 112) = v190[0]; /*0x100686f41*/
        *(_OWORD *)((char *)v190 + 8) = *(_OWORD *)&v165[32]; /*0x100686f5d*/
        *(_QWORD *)&v190[0] = *(_QWORD *)&v165[24]; /*0x100686f64*/
        v86 = *(_QWORD *)(v70 + 136); /*0x100686f72*/
        if ( v86 ) /*0x100686f7c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v70 + 144), v86, 1); /*0x100686f8a*/
        *(_QWORD *)(v70 + 152) = *(_QWORD *)&v190[1]; /*0x100686f96*/
        *(_OWORD *)(v70 + 136) = v190[0]; /*0x100686fac*/
        *(_BYTE *)(v70 + 899) = v165[64]; /*0x100686fb6*/
        *(_QWORD *)(v70 + 832) = *(_QWORD *)&v165[56]; /*0x100686fc4*/
        *(_QWORD *)(v70 + 840) = v169; /*0x100686fd2*/
        *(_OWORD *)((char *)v190 + 8) = v189; /*0x100686ff5*/
        *(_QWORD *)&v190[0] = v188; /*0x100686ffc*/
        v87 = *(_QWORD *)(v70 + 160); /*0x10068700a*/
        if ( v87 ) /*0x100687014*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v70 + 168), v87, 1); /*0x100687022*/
        *(_QWORD *)(v70 + 176) = *(_QWORD *)&v190[1]; /*0x10068702e*/
        *(_OWORD *)(v70 + 160) = v190[0]; /*0x100687044*/
        *(_OWORD *)((char *)v190 + 8) = v180; /*0x100687063*/
        *(_QWORD *)&v190[0] = v179; /*0x10068706a*/
        v88 = *(_QWORD *)(v70 + 184); /*0x100687078*/
        if ( v88 ) /*0x100687082*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v70 + 192), v88, 1); /*0x100687090*/
        *(_QWORD *)(v70 + 200) = *(_QWORD *)&v190[1]; /*0x10068709c*/
        *(_OWORD *)(v70 + 184) = v190[0]; /*0x1006870b2*/
        *(_QWORD *)(v70 + 848) = v67; /*0x1006870b5*/
        *(_QWORD *)(v70 + 856) = v68; /*0x1006870bc*/
        *(_OWORD *)((char *)v190 + 8) = v178; /*0x1006870df*/
        *(_QWORD *)&v190[0] = v177; /*0x1006870e6*/
        v89 = *(_QWORD *)(v70 + 208); /*0x1006870f4*/
        if ( v89 ) /*0x1006870fe*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v70 + 216), v89, 1); /*0x10068710c*/
        *(_QWORD *)(v70 + 224) = *(_QWORD *)&v190[1]; /*0x100687118*/
        *(_OWORD *)(v70 + 208) = v190[0]; /*0x10068712e*/
        *(_OWORD *)((char *)v190 + 8) = v176; /*0x10068714d*/
        *(_QWORD *)&v190[0] = v175; /*0x100687154*/
        v90 = *(_QWORD *)(v70 + 232); /*0x100687162*/
        if ( v90 ) /*0x10068716c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v70 + 240), v90, 1); /*0x10068717a*/
        *(_QWORD *)(v70 + 248) = *(_QWORD *)&v190[1]; /*0x100687186*/
        *(_OWORD *)(v70 + 232) = v190[0]; /*0x10068719c*/
        *(_QWORD *)(v70 + 864) = v160; /*0x1006871a6*/
        *(_BYTE *)(v70 + 901) = v191; /*0x1006871b0*/
        *(_OWORD *)((char *)v190 + 8) = v164; /*0x1006871d3*/
        *(_QWORD *)&v190[0] = v163; /*0x1006871da*/
        v91 = *(_QWORD *)(v70 + 256); /*0x1006871e8*/
        if ( v91 ) /*0x1006871f2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v70 + 264), v91, 1); /*0x100687200*/
        *(_QWORD *)(v70 + 272) = *(_QWORD *)&v190[1]; /*0x10068720c*/
        *(_OWORD *)(v70 + 256) = v190[0]; /*0x100687222*/
        *(_BYTE *)(v70 + 903) = v193; /*0x100687228*/
        codexmate_lib::core::voice::runtime::normalize_processing_mode_id::hecc8c93fa1ac0fb0(v190, v170, v152); /*0x10068724c*/
        v92 = *(_QWORD *)(v70 + 280); /*0x100687258*/
        if ( v92 ) /*0x100687262*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v70 + 288), v92, 1); /*0x100687270*/
        *(_QWORD *)(v70 + 296) = *(_QWORD *)&v190[1]; /*0x10068727c*/
        *(_OWORD *)(v70 + 280) = v190[0]; /*0x100687292*/
        v184 = v101[70]; /*0x1006872a3*/
        *(_QWORD *)&v185 = v101[71]; /*0x1006872aa*/
        *(_QWORD *)&v153[0] = 0; /*0x1006872b1*/
        *(_OWORD *)((char *)v153 + 8) = 1u; /*0x1006872bc*/
        *(_QWORD *)&v190[1] = 1610612768; /*0x1006872d2*/
        *(_QWORD *)&v190[0] = v153; /*0x1006872e4*/
        *((_QWORD *)&v190[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006872f2*/
        v93 = &v184; /*0x1006872f9*/
        if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x100687307*/
                                &v184,
                                v190) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100687536*/
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
            55,
            &v161,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
        v171 = *(__int64 **)&v153[0]; /*0x100687322*/
        v172 = *(_OWORD *)((char *)v153 + 8); /*0x100687329*/
        v95 = *(_QWORD *)(v70 + 544); /*0x100687348*/
        if ( v95 ) /*0x100687352*/
        {
          v93 = *(__int64 **)(v70 + 552); /*0x100687354*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v95, 1); /*0x100687360*/
        }
        *(_QWORD *)(v70 + 560) = *((_QWORD *)&v172 + 1); /*0x10068736c*/
        v96 = v171; /*0x100687370*/
        v97 = v172; /*0x100687377*/
        *(_QWORD *)(v70 + 552) = v172; /*0x10068737e*/
        *(_QWORD *)(v70 + 544) = v96; /*0x100687382*/
        v98 = *(_QWORD *)(v70 + 664); /*0x100687385*/
        if ( v98 != 0x8000000000000000LL && v98 ) /*0x10068739e*/
        {
          v93 = *(__int64 **)(v70 + 672); /*0x1006873a0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v98, 1); /*0x1006873ac*/
        }
        *(_QWORD *)(v70 + 664) = 0x8000000000000000LL; /*0x1006873bb*/
        if ( !(_BYTE)v194 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v187) != 0 ) /*0x1006873d9*/
        {
          LODWORD(v196) = 0; /*0x100687554*/
          if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v93, v98, v94, v97) ) /*0x10068755b*/
            *(_BYTE *)(v70 + 40) = 1; /*0x100687568*/
        }
        v99 = *v192; /*0x1006873e3*/
        LODWORD(v196) = 0; /*0x1006873e6*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v99); /*0x1006873ed*/
        LODWORD(v196) = 0; /*0x1006873f2*/
        codexmate_lib::core::voice::runtime::restart_trigger_listener_internal::hbf9d14de69187c5e((__int64)v190, a2); /*0x100687403*/
        if ( *(_QWORD *)&v190[0] != 0x8000000000000000LL ) /*0x100687419*/
          goto LABEL_130; /*0x100687419*/
        LODWORD(v196) = 0; /*0x100687424*/
        if ( (_BYTE)v183 ) /*0x100687422*/
          codexmate_lib::core::voice::runtime::ensure_standby_sidecar::h2b73fed91d90f079(a2, a2); /*0x10068742e*/
        else
          codexmate_lib::core::voice::runtime::shutdown_standby_sidecar::h75d9bc0590dc9e1b(a2, (char **)a2); /*0x10068743f*/
        LODWORD(v196) = 0; /*0x100687444*/
        codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)v190, a2); /*0x100687455*/
        if ( *(_QWORD *)&v190[0] == 0x8000000000000000LL ) /*0x10068746b*/
        {
          LODWORD(v196) = 0; /*0x10068746d*/
          codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(__dst, a2); /*0x10068747e*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(v102); /*0x10068748a*/
        }
        else
        {
LABEL_130:
          v100 = (char *)__dst; /*0x100687498*/
          *((_QWORD *)__dst + 3) = *(_QWORD *)&v190[1]; /*0x10068749f*/
          *(_OWORD *)(v100 + 8) = v190[0]; /*0x1006874b5*/
          *(_QWORD *)v100 = 2; /*0x1006874b9*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(v102); /*0x1006874c7*/
        }
        v81 = v168; /*0x1006874cc*/
        if ( !v168 ) /*0x1006874d6*/
          goto LABEL_85; /*0x1006874d6*/
        v82 = v170; /*0x1006874e1*/
        goto LABEL_84; /*0x1006874e8*/
      }
    }
    else
    {
      *(_QWORD *)&v190[0] = v43; /*0x100685f80*/
      v48 = v169[2]; /*0x100685f8b*/
      *((_QWORD *)&v190[0] + 1) = v169[1]; /*0x100685f8f*/
      *(_QWORD *)&v190[1] = v48; /*0x100685f96*/
      *((_QWORD *)&v190[1] + 1) = v169[3]; /*0x100685fa1*/
      v190[2] = *((_OWORD *)v169 + 2); /*0x100685fac*/
      v190[3] = *((_OWORD *)v169 + 3); /*0x100685fc2*/
      *(_QWORD *)&v190[4] = v169[8]; /*0x100685fd5*/
      if ( (_BYTE)v191 != 3 ) /*0x100685fdd*/
        goto LABEL_37; /*0x100685fdd*/
    }
    v191 = *(unsigned __int8 *)(v26 + 901); /*0x100685fe7*/
    goto LABEL_37; /*0x100685fe7*/
  }
  v12 = 0; /*0x100685ae8*/
  v13 = *((_BYTE *)v9 + 8); /*0x100685aea*/
  v187 = 0x7FFFFFFFFFFFFFFFLL; /*0x100685af1*/
  if ( !v13 ) /*0x100685af8*/
    goto LABEL_12; /*0x100685af8*/
LABEL_6:
  *(_QWORD *)&v190[0] = 0; /*0x100685afe*/
  *(_OWORD *)((char *)v190 + 8) = 1u; /*0x100685b09*/
  *(_QWORD *)&v102[16] = 1610612768; /*0x100685b1f*/
  *(_QWORD *)v102 = v190; /*0x100685b31*/
  *(_QWORD *)&v102[8] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100685b3f*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v102) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100685e81*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v161,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v16 = v190[0]; /*0x100685b6d*/
  v17 = v190[1]; /*0x100685b74*/
  LODWORD(v153[0]) = *(_DWORD *)((char *)&v190[1] + 1); /*0x100685b82*/
  *(_DWORD *)((char *)v153 + 3) = DWORD1(v190[1]); /*0x100685b8e*/
  if ( !v12
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v187) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v14,
                           v15) )
  {
    *((_BYTE *)v9 + 8) = 1; /*0x100686d8f*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x100685bb2*/
  v18 = v153[0]; /*0x100685bb7*/
  v19 = (char *)__dst; /*0x100685bc3*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v153 + 3); /*0x100685bca*/
  *(_DWORD *)(v19 + 25) = v18; /*0x100685bcd*/
  *(_OWORD *)(v19 + 8) = v16; /*0x100685bd0*/
  v19[24] = v17; /*0x100685bd8*/
  *(_QWORD *)v19 = 2; /*0x100685bdc*/
LABEL_22:
  v39 = *a7; /*0x100685de7*/
  if ( *a7 != 0x8000000000000000LL && v39 ) /*0x100685e00*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a7[1], v39, 1); /*0x100685e0b*/
  v40 = v169; /*0x100685e10*/
  v41 = *v169; /*0x100685e17*/
  if ( *v169 != 0x8000000000000000LL ) /*0x100685e27*/
  {
    if ( v41 ) /*0x100685e30*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v169[1], v41, 1); /*0x100685e3b*/
    v42 = v40[3]; /*0x100685e40*/
    if ( v42 ) /*0x100685e47*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40[4], v42, 1); /*0x100685e56*/
  }
}