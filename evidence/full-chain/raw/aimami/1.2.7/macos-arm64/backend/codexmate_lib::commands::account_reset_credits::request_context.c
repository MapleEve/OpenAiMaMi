// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::account_reset_credits::request_context::he4bdbd9cd3335995; addr: 0x100a002e0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
// B-level evidence identity verified; module codexmate_lib/commands/account_reset_credits; range 0x100a002e0-0x100a017a9; sha f019dbc8e267; session <审计会话>; method same-callee-string-number-sets; decompiler-type-variant; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
// [release-semantic-writeback <审计会话> 0x100a002e0]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [accounts-content-analysis / compiler-inlining-confirmed-for-path-clone-and-baseline-guards-observed] request_context 体增大对应CodexPaths::clone内联，旧ChatGPT凭据/身份守卫仍在；不能把体积增长等同新增重置卡协议。 分组证据：pre request_context 调用CodexPaths::clone，release正文展开各路径String的分配/拷贝并保持共享状态try_lock和Account state is busy分支。；release reset_credit_context 保留账号存在性、ChatGPT凭据模式、凭据可读和账号身份匹配检查，错误含Account is no longer available、Reset card credentials are unreadable、Reset card account identity does not match、Reset card details require ChatGPT login credentials。
// 副作用边界："这些上下文函数读取本地状态/凭据，不执行重置或消费卡；实际credits/history网络读取沿用原合同。"
// 限制：非整函数逐路径等价证明。
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e0274206dd853ade3eef7cc9003b68d1e289ab88947f776436e
_QWORD *__fastcall codexmate_lib::commands::account_reset_credits::request_context::he4bdbd9cd3335995(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        size_t a4,
        double a5)
{
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // rcx
  void *v12; // rax
  void *v13; // r14
  __int64 *v14; // rbx
  int v15; // eax
  const void *v16; // r14
  size_t v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdi
  const void *v20; // rsi
  __int64 v21; // rdx
  const void *v22; // r14
  size_t v23; // r12
  void *v24; // r13
  const void *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // rbx
  const void *v28; // r14
  size_t v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  const void *v32; // rsi
  __int64 v33; // rdx
  const void *v34; // r14
  size_t v35; // r15
  const void *v36; // rsi
  __int64 v37; // rdx
  const void *v38; // r14
  size_t v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdi
  const void *v42; // rsi
  __int64 v43; // rdx
  bool v44; // zf
  const void *v45; // r14
  size_t v46; // rcx
  void *v47; // rbx
  size_t v48; // r13
  __int64 v49; // rax
  const void *v50; // r14
  size_t v51; // r15
  __int64 v52; // rax
  __int64 v53; // rdi
  const void *v54; // rsi
  __int64 v55; // rdx
  const void *v56; // r14
  size_t v57; // r12
  const void *v58; // rsi
  __int64 v59; // rdx
  const void *v60; // r14
  size_t v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdi
  const void *v64; // rsi
  __int64 v65; // rdx
  const void *v66; // r14
  size_t v67; // r13
  const void *v68; // rsi
  __int64 v69; // rdx
  const void *v70; // r14
  size_t v71; // r13
  __int64 v72; // rax
  __int64 v73; // rdi
  const void *v74; // rsi
  __int64 v75; // rdx
  const void *v76; // r14
  size_t v77; // rcx
  size_t v78; // r15
  void *v79; // rax
  const void *v80; // rsi
  __int64 v81; // rdx
  const void *v82; // r14
  size_t v83; // r12
  __int64 v84; // rax
  __int64 v85; // rdi
  const void *v86; // rsi
  __int64 v87; // rdx
  const void *v88; // r14
  size_t v89; // rcx
  size_t v90; // r12
  void *v91; // rax
  const void *v92; // rsi
  __int64 v93; // rdx
  const void *v94; // r14
  size_t v95; // rcx
  __int64 v96; // rax
  size_t v97; // r15
  __int64 v98; // rdi
  const void *v99; // rsi
  __int64 v100; // rdx
  const void *v101; // r14
  size_t v102; // rcx
  size_t v103; // r13
  void *v104; // rax
  const void *v105; // rsi
  __int64 v106; // rdx
  const void *v107; // r14
  size_t v108; // r15
  __int64 v109; // rax
  __int64 v110; // rdi
  const void *v111; // rsi
  __int64 v112; // rdx
  const void *v113; // r14
  size_t v114; // r15
  const void *v115; // rsi
  __int64 v116; // rdx
  const void *v117; // r14
  size_t v118; // r15
  __int64 v119; // rax
  __int64 v120; // rdi
  const void *v121; // rsi
  __int64 v122; // rdx
  const void *v123; // r14
  size_t v124; // r13
  const void *v125; // rsi
  __int64 v126; // rdx
  const void *v127; // r14
  size_t v128; // r15
  __int64 v129; // rax
  __int64 v130; // rdi
  const void *v131; // rsi
  __int64 v132; // rdx
  const void *v133; // r14
  size_t v134; // r12
  const void *v135; // rsi
  __int64 v136; // rdx
  const void *v137; // r14
  size_t v138; // r12
  __int64 v139; // rax
  __int64 v140; // rdi
  const void *v141; // rsi
  __int64 v142; // rdx
  const void *v143; // r14
  size_t v144; // r13
  const void *v145; // rsi
  __int64 v146; // rdx
  const void *v147; // r14
  size_t v148; // r13
  __int64 v149; // rax
  __int64 v150; // rdi
  const void *v151; // rsi
  __int64 v152; // rdx
  const void *v153; // r14
  size_t v154; // r15
  const void *v155; // rsi
  __int64 v156; // rdx
  const void *v157; // r14
  size_t v158; // r15
  __int64 v159; // rax
  __int64 v160; // rdi
  const void *v161; // rsi
  __int64 v162; // rdx
  const void *v163; // r14
  size_t v164; // r15
  const void *v165; // rsi
  __int64 v166; // rdx
  const void *v167; // r15
  size_t v168; // r14
  __int64 v169; // rax
  __int64 v170; // rdi
  __int64 v171; // rdx
  const void *v172; // r14
  size_t v173; // r12
  const void *v174; // rsi
  __int64 v175; // rdx
  const void *v176; // r14
  size_t v177; // r15
  __int64 v178; // r13
  __int64 v179; // rcx
  __int64 v180; // rdx
  _QWORD *v182; // [rsp+20h] [rbp-650h] BYREF
  __int64 (__fastcall *v183)(); // [rsp+28h] [rbp-648h]
  __int64 v184; // [rsp+30h] [rbp-640h]
  size_t v185; // [rsp+38h] [rbp-638h]
  void *v186; // [rsp+40h] [rbp-630h]
  size_t v187; // [rsp+48h] [rbp-628h]
  size_t v188; // [rsp+50h] [rbp-620h]
  __int64 v189; // [rsp+58h] [rbp-618h]
  size_t v190; // [rsp+60h] [rbp-610h]
  size_t v191; // [rsp+68h] [rbp-608h]
  void *v192; // [rsp+70h] [rbp-600h]
  size_t v193; // [rsp+78h] [rbp-5F8h]
  size_t v194; // [rsp+80h] [rbp-5F0h]
  __int64 v195; // [rsp+88h] [rbp-5E8h]
  size_t v196; // [rsp+90h] [rbp-5E0h]
  size_t v197; // [rsp+98h] [rbp-5D8h]
  __int64 v198; // [rsp+A0h] [rbp-5D0h]
  size_t v199; // [rsp+A8h] [rbp-5C8h]
  size_t v200; // [rsp+B0h] [rbp-5C0h]
  void *v201; // [rsp+B8h] [rbp-5B8h]
  size_t v202; // [rsp+C0h] [rbp-5B0h]
  size_t v203; // [rsp+C8h] [rbp-5A8h]
  __int64 v204; // [rsp+D0h] [rbp-5A0h]
  size_t v205; // [rsp+D8h] [rbp-598h]
  size_t v206; // [rsp+E0h] [rbp-590h]
  void *v207; // [rsp+E8h] [rbp-588h]
  size_t v208; // [rsp+F0h] [rbp-580h]
  size_t v209; // [rsp+F8h] [rbp-578h]
  __int64 v210; // [rsp+100h] [rbp-570h]
  size_t v211; // [rsp+108h] [rbp-568h]
  size_t v212; // [rsp+110h] [rbp-560h]
  void *v213; // [rsp+118h] [rbp-558h]
  size_t v214; // [rsp+120h] [rbp-550h]
  size_t v215; // [rsp+128h] [rbp-548h]
  __int64 v216; // [rsp+130h] [rbp-540h]
  size_t v217; // [rsp+138h] [rbp-538h]
  size_t v218; // [rsp+140h] [rbp-530h]
  void *v219; // [rsp+148h] [rbp-528h]
  size_t v220; // [rsp+150h] [rbp-520h]
  size_t v221; // [rsp+158h] [rbp-518h]
  __int64 v222; // [rsp+160h] [rbp-510h]
  size_t v223; // [rsp+168h] [rbp-508h]
  size_t v224; // [rsp+170h] [rbp-500h]
  void *v225; // [rsp+178h] [rbp-4F8h]
  size_t v226; // [rsp+180h] [rbp-4F0h]
  size_t v227; // [rsp+188h] [rbp-4E8h]
  __int64 v228; // [rsp+190h] [rbp-4E0h]
  size_t v229; // [rsp+198h] [rbp-4D8h]
  size_t v230; // [rsp+1A0h] [rbp-4D0h]
  void *v231; // [rsp+1A8h] [rbp-4C8h]
  size_t v232; // [rsp+1B0h] [rbp-4C0h]
  size_t v233; // [rsp+1B8h] [rbp-4B8h]
  __int64 v234; // [rsp+1C0h] [rbp-4B0h]
  size_t v235; // [rsp+1C8h] [rbp-4A8h]
  size_t v236; // [rsp+1D0h] [rbp-4A0h]
  void *v237; // [rsp+1D8h] [rbp-498h]
  size_t v238; // [rsp+1E0h] [rbp-490h]
  size_t v239; // [rsp+1E8h] [rbp-488h]
  __int64 v240; // [rsp+1F0h] [rbp-480h]
  size_t v241; // [rsp+1F8h] [rbp-478h]
  size_t v242; // [rsp+200h] [rbp-470h]
  void *v243; // [rsp+208h] [rbp-468h]
  size_t v244; // [rsp+210h] [rbp-460h]
  size_t v245; // [rsp+218h] [rbp-458h]
  __int64 v246; // [rsp+220h] [rbp-450h]
  size_t v247; // [rsp+228h] [rbp-448h]
  size_t v248; // [rsp+230h] [rbp-440h]
  void *v249; // [rsp+238h] [rbp-438h]
  size_t v250; // [rsp+240h] [rbp-430h]
  size_t v251; // [rsp+248h] [rbp-428h]
  __int64 v252; // [rsp+250h] [rbp-420h]
  size_t v253; // [rsp+258h] [rbp-418h]
  size_t v254; // [rsp+260h] [rbp-410h]
  void *v255; // [rsp+268h] [rbp-408h]
  size_t v256; // [rsp+270h] [rbp-400h]
  size_t v257; // [rsp+278h] [rbp-3F8h]
  __int64 v258; // [rsp+280h] [rbp-3F0h]
  size_t v259; // [rsp+288h] [rbp-3E8h]
  size_t v260; // [rsp+290h] [rbp-3E0h]
  void *v261; // [rsp+298h] [rbp-3D8h]
  size_t v262; // [rsp+2A0h] [rbp-3D0h]
  size_t v263; // [rsp+2A8h] [rbp-3C8h]
  __int64 v264; // [rsp+2B0h] [rbp-3C0h]
  size_t v265; // [rsp+2B8h] [rbp-3B8h]
  size_t v266; // [rsp+2C0h] [rbp-3B0h]
  void *v267; // [rsp+2C8h] [rbp-3A8h]
  size_t v268; // [rsp+2D0h] [rbp-3A0h]
  size_t v269; // [rsp+2D8h] [rbp-398h]
  __int64 v270; // [rsp+2E0h] [rbp-390h]
  size_t v271; // [rsp+2E8h] [rbp-388h]
  unsigned __int64 v272; // [rsp+2F0h] [rbp-380h]
  __int64 v273; // [rsp+2F8h] [rbp-378h]
  unsigned __int64 v274; // [rsp+300h] [rbp-370h]
  _QWORD v275[12]; // [rsp+308h] [rbp-368h] BYREF
  _QWORD v276[12]; // [rsp+368h] [rbp-308h] BYREF
  size_t v277; // [rsp+3C8h] [rbp-2A8h]
  _QWORD *v278; // [rsp+3D0h] [rbp-2A0h]
  void *v279; // [rsp+3D8h] [rbp-298h]
  __int64 v280; // [rsp+3E0h] [rbp-290h] BYREF
  __int64 v281; // [rsp+3E8h] [rbp-288h]
  __int64 v282; // [rsp+3F0h] [rbp-280h]
  __int64 *v283; // [rsp+3F8h] [rbp-278h] BYREF
  __int64 (__fastcall **v284)(); // [rsp+400h] [rbp-270h]
  __int64 v285; // [rsp+408h] [rbp-268h]
  __int64 v286; // [rsp+410h] [rbp-260h]
  __int64 v287; // [rsp+418h] [rbp-258h]
  __int64 v288; // [rsp+420h] [rbp-250h]
  __int64 v289; // [rsp+428h] [rbp-248h] BYREF
  __int64 v290; // [rsp+430h] [rbp-240h]
  __int64 v291; // [rsp+438h] [rbp-238h]
  __int64 v292; // [rsp+440h] [rbp-230h]
  __int64 v293; // [rsp+448h] [rbp-228h]
  __int64 v294; // [rsp+450h] [rbp-220h]
  __int64 v295; // [rsp+458h] [rbp-218h]
  __int64 (__fastcall *v296)(); // [rsp+460h] [rbp-210h]
  __int64 v297; // [rsp+468h] [rbp-208h]
  __int64 v298; // [rsp+470h] [rbp-200h]
  __int64 v299; // [rsp+478h] [rbp-1F8h]
  __int64 v300; // [rsp+480h] [rbp-1F0h]
  __int64 v301; // [rsp+488h] [rbp-1E8h]
  __int64 v302; // [rsp+490h] [rbp-1E0h]
  __int64 v303; // [rsp+498h] [rbp-1D8h]
  __int64 v304; // [rsp+4A0h] [rbp-1D0h]
  __int64 v305; // [rsp+4A8h] [rbp-1C8h]
  __int64 v306; // [rsp+4B0h] [rbp-1C0h]
  __int64 v307; // [rsp+4B8h] [rbp-1B8h]
  __int64 v308; // [rsp+4C0h] [rbp-1B0h]
  __int64 v309; // [rsp+4C8h] [rbp-1A8h]
  __int64 v310; // [rsp+4D0h] [rbp-1A0h]
  __int64 v311; // [rsp+4D8h] [rbp-198h]
  __int64 v312; // [rsp+4E0h] [rbp-190h]
  size_t v313; // [rsp+4E8h] [rbp-188h]
  size_t v314; // [rsp+4F0h] [rbp-180h]
  size_t v315; // [rsp+4F8h] [rbp-178h]
  size_t v316; // [rsp+500h] [rbp-170h]
  size_t v317; // [rsp+508h] [rbp-168h]
  size_t v318; // [rsp+510h] [rbp-160h]
  size_t v319; // [rsp+518h] [rbp-158h]
  size_t v320; // [rsp+520h] [rbp-150h]
  size_t v321; // [rsp+528h] [rbp-148h]
  size_t v322; // [rsp+530h] [rbp-140h]
  size_t v323; // [rsp+538h] [rbp-138h]
  size_t v324; // [rsp+540h] [rbp-130h]
  size_t v325; // [rsp+548h] [rbp-128h]
  size_t v326; // [rsp+550h] [rbp-120h]
  size_t v327; // [rsp+558h] [rbp-118h]
  size_t v328; // [rsp+560h] [rbp-110h]
  size_t v329; // [rsp+568h] [rbp-108h]
  size_t v330; // [rsp+570h] [rbp-100h]
  size_t v331; // [rsp+578h] [rbp-F8h]
  size_t v332; // [rsp+580h] [rbp-F0h]
  size_t v333; // [rsp+588h] [rbp-E8h]
  size_t v334; // [rsp+590h] [rbp-E0h]
  size_t v335; // [rsp+598h] [rbp-D8h]
  size_t v336; // [rsp+5A0h] [rbp-D0h]
  size_t v337; // [rsp+5A8h] [rbp-C8h]
  void *__dst; // [rsp+5B0h] [rbp-C0h]
  void *v339; // [rsp+5B8h] [rbp-B8h]
  void *v340; // [rsp+5C0h] [rbp-B0h]
  void *v341; // [rsp+5C8h] [rbp-A8h]
  void *v342; // [rsp+5D0h] [rbp-A0h]
  void *v343; // [rsp+5D8h] [rbp-98h]
  void *v344; // [rsp+5E0h] [rbp-90h]
  void *v345; // [rsp+5E8h] [rbp-88h]
  void *v346; // [rsp+5F0h] [rbp-80h]
  void *v347; // [rsp+5F8h] [rbp-78h]
  void *v348; // [rsp+600h] [rbp-70h]
  void *v349; // [rsp+608h] [rbp-68h]
  void *v350; // [rsp+610h] [rbp-60h]
  void *v351; // [rsp+618h] [rbp-58h]
  unsigned __int64 v352; // [rsp+620h] [rbp-50h]
  size_t __n; // [rsp+628h] [rbp-48h]
  size_t v354; // [rsp+630h] [rbp-40h]
  __int64 *v355; // [rsp+638h] [rbp-38h]
  int v356; // [rsp+644h] [rbp-2Ch]

  v8 = (__int64 *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x100a0030f*/
  if ( !v8 ) /*0x100a00317*/
  {
    v276[0] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1507; /*0x100a0041d*/
    v276[1] = 76; /*0x100a00424*/
    v182 = v276; /*0x100a00436*/
    v183 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a00444*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100a00460*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      &v182,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  v355 = v8; /*0x100a0031d*/
  v9 = *v8; /*0x100a00321*/
  if ( !*v8 ) /*0x100a00321*/
    v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v355); /*0x100a0046e*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a5); /*0x100a00337*/
  v295 = 0x7FFFFFFFFFFFFFFFLL; /*0x100a0034c*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100a00356*/
  {
    v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9); /*0x100a00476*/
    LOBYTE(v15) = v15 ^ 1; /*0x100a0047b*/
    v356 = v15; /*0x100a0047d*/
    v11 = v355; /*0x100a00480*/
    if ( *((_BYTE *)v355 + 8) ) /*0x100a00484*/
      goto LABEL_6; /*0x100a0048a*/
  }
  else
  {
    v356 = 0; /*0x100a0035c*/
    v11 = v355; /*0x100a00363*/
    if ( *((_BYTE *)v355 + 8) ) /*0x100a00367*/
    {
LABEL_6:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, a2, v10); /*0x100a00373*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x100a00382*/
      if ( !v12 ) /*0x100a0038a*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100a015c0*/
      v13 = v12; /*0x100a00390*/
      qmemcpy(v12, "Account state is busy", 21); /*0x100a003b9*/
      v14 = v355; /*0x100a003c0*/
      if ( !(_BYTE)v356 /*0x100a0155b*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v295) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(21) )
      {
        *((_BYTE *)v355 + 8) = 1; /*0x100a01568*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v14); /*0x100a003da*/
      a1[1] = 21; /*0x100a003df*/
      a1[2] = v13; /*0x100a003e7*/
      *((_BYTE *)a1 + 24) = 21; /*0x100a003eb*/
      *((_BYTE *)a1 + 31) = 0; /*0x100a003f0*/
      *(_WORD *)((char *)a1 + 29) = 0; /*0x100a003f5*/
      *(_DWORD *)((char *)a1 + 25) = 0; /*0x100a003fc*/
      *a1 = 0x8000000000000000LL; /*0x100a0040e*/
      return a1; /*0x100a00411*/
    }
  }
  v277 = a4; /*0x100a00490*/
  v16 = (const void *)v11[3]; /*0x100a00497*/
  v17 = v11[4]; /*0x100a0049b*/
  v18 = 1; /*0x100a0049f*/
  __dst = (void *)1; /*0x100a004a4*/
  if ( v17 ) /*0x100a004ae*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, a2, v10); /*0x100a004b0*/
    v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x100a004bd*/
    if ( !v18 ) /*0x100a004c5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v17); /*0x100a015d2*/
  }
  v296 = (__int64 (__fastcall *)())v18; /*0x100a004cb*/
  v19 = v18; /*0x100a004d2*/
  v20 = v16; /*0x100a004d5*/
  v312 = v17; /*0x100a004d8*/
  memcpy((void *)v18, v16, v17); /*0x100a004e2*/
  v22 = (const void *)v355[6]; /*0x100a004eb*/
  v23 = v355[7]; /*0x100a004ef*/
  v24 = a3; /*0x100a004f6*/
  if ( v23 ) /*0x100a004f9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v20, v21); /*0x100a004fb*/
    __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1); /*0x100a0050d*/
    if ( !__dst ) /*0x100a00517*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23); /*0x100a015e4*/
  }
  v278 = a1; /*0x100a0051d*/
  v25 = v22; /*0x100a0052b*/
  v313 = v23; /*0x100a0052e*/
  memcpy(__dst, v22, v23); /*0x100a00538*/
  v27 = v355; /*0x100a0053d*/
  v28 = (const void *)v355[9]; /*0x100a00541*/
  v29 = v355[10]; /*0x100a00545*/
  v30 = 1; /*0x100a00549*/
  v339 = (void *)1; /*0x100a0054e*/
  __n = v29; /*0x100a00555*/
  if ( v29 ) /*0x100a0055c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v25, v26); /*0x100a0055e*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100a0056c*/
    if ( !v30 ) /*0x100a00574*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x100a015f7*/
  }
  v297 = v30; /*0x100a0057a*/
  v31 = v30; /*0x100a00581*/
  v32 = v28; /*0x100a00584*/
  memcpy((void *)v30, v28, __n); /*0x100a0058b*/
  v34 = (const void *)v355[12]; /*0x100a00590*/
  v35 = v355[13]; /*0x100a00594*/
  if ( v35 ) /*0x100a0059b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, v32, v33); /*0x100a0059d*/
    v339 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v35, 1); /*0x100a005af*/
    if ( !v339 ) /*0x100a005b9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v35); /*0x100a01609*/
  }
  v36 = v34; /*0x100a005c6*/
  v314 = v35; /*0x100a005c9*/
  memcpy(v339, v34, v35); /*0x100a005d3*/
  v38 = (const void *)v355[15]; /*0x100a005d8*/
  v39 = v355[16]; /*0x100a005dc*/
  if ( v39 ) /*0x100a005e6*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v339, v36, v37); /*0x100a005e8*/
    v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v39, 1); /*0x100a005f5*/
    if ( !v40 ) /*0x100a005fd*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v39); /*0x100a00607*/
  }
  else
  {
    v40 = 1; /*0x100a00611*/
  }
  v298 = v40; /*0x100a00616*/
  v41 = v40; /*0x100a0061d*/
  v42 = v38; /*0x100a00620*/
  memcpy((void *)v40, v38, v39); /*0x100a00626*/
  v44 = v355[92] == 0x8000000000000000LL; /*0x100a00635*/
  v315 = v39; /*0x100a0063c*/
  if ( v44 ) /*0x100a00643*/
  {
    v352 = 0x8000000000000000LL; /*0x100a00645*/
  }
  else
  {
    v45 = (const void *)v355[93]; /*0x100a0064b*/
    v46 = v355[94]; /*0x100a00652*/
    if ( v46 ) /*0x100a0065c*/
    {
      v47 = v24; /*0x100a0065e*/
      v48 = v355[94]; /*0x100a00661*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v42, v43); /*0x100a00664*/
      v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v48, 1); /*0x100a00671*/
      v46 = v48; /*0x100a00676*/
      v24 = v47; /*0x100a00679*/
      v27 = v355; /*0x100a0067c*/
      if ( !v49 ) /*0x100a00683*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v46); /*0x100a0068d*/
    }
    else
    {
      v49 = 1; /*0x100a00697*/
    }
    v311 = v49; /*0x100a0069c*/
    v41 = v49; /*0x100a006a3*/
    v42 = v45; /*0x100a006a6*/
    v352 = v46; /*0x100a006a9*/
    memcpy((void *)v49, v45, v46); /*0x100a006b0*/
  }
  v279 = v24; /*0x100a006b5*/
  v50 = (const void *)v27[18]; /*0x100a006bc*/
  v51 = v27[19]; /*0x100a006c3*/
  v52 = 1; /*0x100a006ca*/
  v340 = (void *)1; /*0x100a006cf*/
  if ( v51 ) /*0x100a006d9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v42, v43); /*0x100a006db*/
    v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v51, 1); /*0x100a006e8*/
    if ( !v52 ) /*0x100a006f0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v51); /*0x100a0161b*/
  }
  v299 = v52; /*0x100a006f6*/
  v53 = v52; /*0x100a006fd*/
  v54 = v50; /*0x100a00700*/
  memcpy((void *)v52, v50, v51); /*0x100a00706*/
  v56 = (const void *)v27[21]; /*0x100a0070b*/
  v57 = v27[22]; /*0x100a00712*/
  v316 = v51; /*0x100a0071c*/
  if ( v57 ) /*0x100a00723*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v54, v55); /*0x100a00725*/
    v340 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v57, 1); /*0x100a00737*/
    if ( !v340 ) /*0x100a00741*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v57); /*0x100a0162d*/
  }
  v58 = v56; /*0x100a0074e*/
  v317 = v57; /*0x100a00751*/
  memcpy(v340, v56, v57); /*0x100a0075b*/
  v60 = (const void *)v27[24]; /*0x100a00760*/
  v61 = v27[25]; /*0x100a00767*/
  v62 = 1; /*0x100a0076e*/
  v341 = (void *)1; /*0x100a00773*/
  v354 = v61; /*0x100a0077a*/
  if ( v61 ) /*0x100a00781*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v340, v58, v59); /*0x100a00783*/
    v62 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v354, 1); /*0x100a00791*/
    if ( !v62 ) /*0x100a00799*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v354); /*0x100a01640*/
  }
  v300 = v62; /*0x100a0079f*/
  v63 = v62; /*0x100a007a6*/
  v64 = v60; /*0x100a007a9*/
  memcpy((void *)v62, v60, v354); /*0x100a007b0*/
  v66 = (const void *)v27[27]; /*0x100a007b5*/
  v67 = v27[28]; /*0x100a007bc*/
  if ( v67 ) /*0x100a007c6*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v63, v64, v65); /*0x100a007c8*/
    v341 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v67, 1); /*0x100a007da*/
    if ( !v341 ) /*0x100a007e4*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v67); /*0x100a01652*/
  }
  v68 = v66; /*0x100a007f1*/
  v318 = v67; /*0x100a007f4*/
  memcpy(v341, v66, v67); /*0x100a007fe*/
  v70 = (const void *)v27[30]; /*0x100a00803*/
  v71 = v27[31]; /*0x100a0080a*/
  v72 = 1; /*0x100a00811*/
  v342 = (void *)1; /*0x100a00816*/
  if ( v71 ) /*0x100a00820*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v341, v68, v69); /*0x100a00822*/
    v72 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v71, 1); /*0x100a0082f*/
    if ( !v72 ) /*0x100a00837*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v71); /*0x100a01664*/
  }
  v301 = v72; /*0x100a0083d*/
  v73 = v72; /*0x100a00844*/
  v74 = v70; /*0x100a00847*/
  memcpy((void *)v72, v70, v71); /*0x100a0084d*/
  v76 = (const void *)v27[33]; /*0x100a00852*/
  v77 = v27[34]; /*0x100a00859*/
  v319 = v71; /*0x100a00863*/
  if ( v77 ) /*0x100a0086a*/
  {
    v78 = v77; /*0x100a0086c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v73, v74, v75); /*0x100a0086f*/
    v79 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v78, 1); /*0x100a0087c*/
    v77 = v78; /*0x100a00881*/
    v342 = v79; /*0x100a00884*/
    if ( !v79 ) /*0x100a0088e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v78); /*0x100a01676*/
  }
  v80 = v76; /*0x100a0089b*/
  v320 = v77; /*0x100a0089e*/
  memcpy(v342, v76, v77); /*0x100a008a8*/
  v82 = (const void *)v27[36]; /*0x100a008ad*/
  v83 = v27[37]; /*0x100a008b4*/
  v84 = 1; /*0x100a008bb*/
  v343 = (void *)1; /*0x100a008c0*/
  if ( v83 ) /*0x100a008ca*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v342, v80, v81); /*0x100a008cc*/
    v84 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v83, 1); /*0x100a008d9*/
    if ( !v84 ) /*0x100a008e1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v83); /*0x100a01688*/
  }
  v302 = v84; /*0x100a008e7*/
  v85 = v84; /*0x100a008ee*/
  v86 = v82; /*0x100a008f1*/
  memcpy((void *)v84, v82, v83); /*0x100a008f7*/
  v88 = (const void *)v27[39]; /*0x100a008fc*/
  v89 = v27[40]; /*0x100a00903*/
  v321 = v83; /*0x100a0090d*/
  if ( v89 ) /*0x100a00914*/
  {
    v90 = v89; /*0x100a00916*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v85, v86, v87); /*0x100a00919*/
    v91 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v90, 1); /*0x100a00926*/
    v89 = v90; /*0x100a0092b*/
    v343 = v91; /*0x100a0092e*/
    if ( !v91 ) /*0x100a00938*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v90); /*0x100a0169a*/
  }
  v92 = v88; /*0x100a00945*/
  v322 = v89; /*0x100a00948*/
  memcpy(v343, v88, v89); /*0x100a00952*/
  v94 = (const void *)v27[42]; /*0x100a00957*/
  v95 = v27[43]; /*0x100a0095e*/
  v96 = 1; /*0x100a00965*/
  v344 = (void *)1; /*0x100a0096a*/
  if ( v95 ) /*0x100a00974*/
  {
    v97 = v95; /*0x100a00976*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v343, v92, v93); /*0x100a00979*/
    v96 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v97, 1); /*0x100a00986*/
    v95 = v97; /*0x100a0098b*/
    if ( !v96 ) /*0x100a00991*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v97); /*0x100a016ac*/
  }
  v303 = v96; /*0x100a00997*/
  v98 = v96; /*0x100a0099e*/
  v99 = v94; /*0x100a009a1*/
  v323 = v95; /*0x100a009a4*/
  memcpy((void *)v96, v94, v95); /*0x100a009ae*/
  v101 = (const void *)v27[45]; /*0x100a009b3*/
  v102 = v27[46]; /*0x100a009ba*/
  if ( v102 ) /*0x100a009c4*/
  {
    v103 = v27[46]; /*0x100a009c6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v98, v99, v100); /*0x100a009c9*/
    v104 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v103, 1); /*0x100a009d6*/
    v102 = v103; /*0x100a009db*/
    v344 = v104; /*0x100a009de*/
    if ( !v104 ) /*0x100a009e8*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v103); /*0x100a016be*/
  }
  v105 = v101; /*0x100a009f5*/
  v324 = v102; /*0x100a009f8*/
  memcpy(v344, v101, v102); /*0x100a00a02*/
  v107 = (const void *)v27[48]; /*0x100a00a07*/
  v108 = v27[49]; /*0x100a00a0e*/
  v109 = 1; /*0x100a00a15*/
  v345 = (void *)1; /*0x100a00a1a*/
  if ( v108 ) /*0x100a00a24*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v344, v105, v106); /*0x100a00a26*/
    v109 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v108, 1); /*0x100a00a33*/
    if ( !v109 ) /*0x100a00a3b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v108); /*0x100a016d0*/
  }
  v304 = v109; /*0x100a00a41*/
  v110 = v109; /*0x100a00a48*/
  v111 = v107; /*0x100a00a4b*/
  v325 = v108; /*0x100a00a4e*/
  memcpy((void *)v109, v107, v108); /*0x100a00a58*/
  v113 = (const void *)v27[51]; /*0x100a00a5d*/
  v114 = v27[52]; /*0x100a00a64*/
  if ( v114 ) /*0x100a00a6e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v110, v111, v112); /*0x100a00a70*/
    v345 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v114, 1); /*0x100a00a82*/
    if ( !v345 ) /*0x100a00a8c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v114); /*0x100a016e2*/
  }
  v115 = v113; /*0x100a00a99*/
  v326 = v114; /*0x100a00a9c*/
  memcpy(v345, v113, v114); /*0x100a00aa6*/
  v117 = (const void *)v27[54]; /*0x100a00aab*/
  v118 = v27[55]; /*0x100a00ab2*/
  v119 = 1; /*0x100a00ab9*/
  v346 = (void *)1; /*0x100a00abe*/
  if ( v118 ) /*0x100a00ac5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v345, v115, v116); /*0x100a00ac7*/
    v119 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v118, 1); /*0x100a00ad4*/
    if ( !v119 ) /*0x100a00adc*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v118); /*0x100a016f4*/
  }
  v305 = v119; /*0x100a00ae2*/
  v120 = v119; /*0x100a00ae9*/
  v121 = v117; /*0x100a00aec*/
  v327 = v118; /*0x100a00aef*/
  memcpy((void *)v119, v117, v118); /*0x100a00af9*/
  v123 = (const void *)v27[57]; /*0x100a00afe*/
  v124 = v27[58]; /*0x100a00b05*/
  if ( v124 ) /*0x100a00b0f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v120, v121, v122); /*0x100a00b11*/
    v346 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v124, 1); /*0x100a00b23*/
    if ( !v346 ) /*0x100a00b2a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v124); /*0x100a01706*/
  }
  v125 = v123; /*0x100a00b34*/
  v328 = v124; /*0x100a00b37*/
  memcpy(v346, v123, v124); /*0x100a00b41*/
  v127 = (const void *)v27[60]; /*0x100a00b46*/
  v128 = v27[61]; /*0x100a00b4d*/
  v129 = 1; /*0x100a00b54*/
  v347 = (void *)1; /*0x100a00b59*/
  if ( v128 ) /*0x100a00b60*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v346, v125, v126); /*0x100a00b62*/
    v129 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v128, 1); /*0x100a00b6f*/
    if ( !v129 ) /*0x100a00b77*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v128); /*0x100a01718*/
  }
  v306 = v129; /*0x100a00b7d*/
  v130 = v129; /*0x100a00b84*/
  v131 = v127; /*0x100a00b87*/
  memcpy((void *)v129, v127, v128); /*0x100a00b8d*/
  v133 = (const void *)v27[63]; /*0x100a00b92*/
  v134 = v27[64]; /*0x100a00b99*/
  v329 = v128; /*0x100a00ba3*/
  if ( v134 ) /*0x100a00baa*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v130, v131, v132); /*0x100a00bac*/
    v347 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v134, 1); /*0x100a00bbe*/
    if ( !v347 ) /*0x100a00bc5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v134); /*0x100a0172a*/
  }
  v135 = v133; /*0x100a00bcf*/
  v330 = v134; /*0x100a00bd2*/
  memcpy(v347, v133, v134); /*0x100a00bdc*/
  v137 = (const void *)v27[66]; /*0x100a00be1*/
  v138 = v27[67]; /*0x100a00be8*/
  v139 = 1; /*0x100a00bef*/
  v348 = (void *)1; /*0x100a00bf4*/
  if ( v138 ) /*0x100a00bfb*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v347, v135, v136); /*0x100a00bfd*/
    v139 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v138, 1); /*0x100a00c0a*/
    if ( !v139 ) /*0x100a00c12*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v138); /*0x100a01739*/
  }
  v307 = v139; /*0x100a00c18*/
  v140 = v139; /*0x100a00c1f*/
  v141 = v137; /*0x100a00c22*/
  memcpy((void *)v139, v137, v138); /*0x100a00c28*/
  v143 = (const void *)v27[69]; /*0x100a00c2d*/
  v144 = v27[70]; /*0x100a00c34*/
  v331 = v138; /*0x100a00c3e*/
  if ( v144 ) /*0x100a00c45*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v140, v141, v142); /*0x100a00c47*/
    v348 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v144, 1); /*0x100a00c59*/
    if ( !v348 ) /*0x100a00c60*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v144); /*0x100a01748*/
  }
  v145 = v143; /*0x100a00c6a*/
  v332 = v144; /*0x100a00c6d*/
  memcpy(v348, v143, v144); /*0x100a00c77*/
  v147 = (const void *)v27[72]; /*0x100a00c7c*/
  v148 = v27[73]; /*0x100a00c83*/
  v149 = 1; /*0x100a00c8a*/
  v349 = (void *)1; /*0x100a00c8f*/
  if ( v148 ) /*0x100a00c96*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v348, v145, v146); /*0x100a00c98*/
    v149 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v148, 1); /*0x100a00ca5*/
    if ( !v149 ) /*0x100a00cad*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v148); /*0x100a01757*/
  }
  v308 = v149; /*0x100a00cb3*/
  v150 = v149; /*0x100a00cba*/
  v151 = v147; /*0x100a00cbd*/
  memcpy((void *)v149, v147, v148); /*0x100a00cc3*/
  v153 = (const void *)v27[75]; /*0x100a00cc8*/
  v154 = v27[76]; /*0x100a00ccf*/
  v333 = v148; /*0x100a00cd9*/
  if ( v154 ) /*0x100a00ce0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v150, v151, v152); /*0x100a00ce2*/
    v349 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v154, 1); /*0x100a00cf4*/
    if ( !v349 ) /*0x100a00cfb*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v154); /*0x100a01766*/
  }
  v155 = v153; /*0x100a00d05*/
  v334 = v154; /*0x100a00d08*/
  memcpy(v349, v153, v154); /*0x100a00d12*/
  v157 = (const void *)v27[78]; /*0x100a00d17*/
  v158 = v27[79]; /*0x100a00d1e*/
  v159 = 1; /*0x100a00d25*/
  v350 = (void *)1; /*0x100a00d2a*/
  if ( v158 ) /*0x100a00d31*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v349, v155, v156); /*0x100a00d33*/
    v159 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v158, 1); /*0x100a00d40*/
    if ( !v159 ) /*0x100a00d48*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v158); /*0x100a01775*/
  }
  v309 = v159; /*0x100a00d4e*/
  v160 = v159; /*0x100a00d55*/
  v161 = v157; /*0x100a00d58*/
  v335 = v158; /*0x100a00d5b*/
  memcpy((void *)v159, v157, v158); /*0x100a00d65*/
  v163 = (const void *)v27[81]; /*0x100a00d6a*/
  v164 = v27[82]; /*0x100a00d71*/
  if ( v164 ) /*0x100a00d7b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v160, v161, v162); /*0x100a00d7d*/
    v350 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v164, 1); /*0x100a00d8f*/
    if ( !v350 ) /*0x100a00d96*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v164); /*0x100a01784*/
  }
  v165 = v163; /*0x100a00da0*/
  v336 = v164; /*0x100a00da3*/
  memcpy(v350, v163, v164); /*0x100a00dad*/
  v167 = (const void *)v27[84]; /*0x100a00db2*/
  v168 = v27[85]; /*0x100a00db9*/
  v169 = 1; /*0x100a00dc0*/
  v351 = (void *)1; /*0x100a00dc5*/
  if ( v168 ) /*0x100a00dcc*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v350, v165, v166); /*0x100a00dce*/
    v169 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v168, 1); /*0x100a00ddb*/
    if ( !v169 ) /*0x100a00de3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v168); /*0x100a01793*/
  }
  v310 = v169; /*0x100a00de9*/
  v170 = v169; /*0x100a00df0*/
  v337 = v168; /*0x100a00df6*/
  memcpy((void *)v169, v167, v168); /*0x100a00e00*/
  v172 = (const void *)v27[87]; /*0x100a00e05*/
  v173 = v27[88]; /*0x100a00e0c*/
  if ( v173 ) /*0x100a00e16*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v170, v167, v171); /*0x100a00e18*/
    v351 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v173, 1); /*0x100a00e2a*/
    if ( !v351 ) /*0x100a00e31*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v173); /*0x100a017a2*/
  }
  v174 = v172; /*0x100a00e3b*/
  memcpy(v351, v172, v173); /*0x100a00e41*/
  v176 = (const void *)v27[90]; /*0x100a00e46*/
  v177 = v27[91]; /*0x100a00e4d*/
  if ( v177 ) /*0x100a00e57*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v351, v174, v175); /*0x100a00e59*/
    v178 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v177, 1); /*0x100a00e6b*/
    if ( !v178 ) /*0x100a00e71*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v177); /*0x100a00e7b*/
  }
  else
  {
    v178 = 1; /*0x100a00e85*/
  }
  memcpy((void *)v178, v176, v177); /*0x100a00e94*/
  v269 = v177; /*0x100a00e99*/
  v270 = v178; /*0x100a00ea0*/
  v271 = v177; /*0x100a00ea7*/
  v182 = (_QWORD *)v312; /*0x100a00eb5*/
  v183 = v296; /*0x100a00ec3*/
  v184 = v312; /*0x100a00eca*/
  v185 = v313; /*0x100a00ed8*/
  v186 = __dst; /*0x100a00ee6*/
  v187 = v313; /*0x100a00eed*/
  v188 = __n; /*0x100a00ef8*/
  v189 = v297; /*0x100a00f06*/
  v190 = __n; /*0x100a00f0d*/
  v191 = v314; /*0x100a00f1b*/
  v192 = v339; /*0x100a00f29*/
  v193 = v314; /*0x100a00f30*/
  v194 = v315; /*0x100a00f3e*/
  v195 = v298; /*0x100a00f4c*/
  v196 = v315; /*0x100a00f53*/
  v272 = v352; /*0x100a00f5e*/
  v273 = v311; /*0x100a00f6c*/
  v274 = v352; /*0x100a00f73*/
  v197 = v316; /*0x100a00f81*/
  v198 = v299; /*0x100a00f8f*/
  v199 = v316; /*0x100a00f96*/
  v200 = v317; /*0x100a00fa4*/
  v201 = v340; /*0x100a00fb2*/
  v202 = v317; /*0x100a00fb9*/
  v203 = v354; /*0x100a00fc4*/
  v204 = v300; /*0x100a00fd2*/
  v205 = v354; /*0x100a00fd9*/
  v206 = v318; /*0x100a00fe7*/
  v207 = v341; /*0x100a00ff5*/
  v208 = v318; /*0x100a00ffc*/
  v209 = v319; /*0x100a0100a*/
  v210 = v301; /*0x100a01018*/
  v211 = v319; /*0x100a0101f*/
  v212 = v320; /*0x100a0102d*/
  v213 = v342; /*0x100a0103b*/
  v214 = v320; /*0x100a01042*/
  v215 = v321; /*0x100a01050*/
  v216 = v302; /*0x100a0105e*/
  v217 = v321; /*0x100a01065*/
  v218 = v322; /*0x100a01073*/
  v219 = v343; /*0x100a01081*/
  v220 = v322; /*0x100a01088*/
  v221 = v323; /*0x100a01096*/
  v222 = v303; /*0x100a010a4*/
  v223 = v323; /*0x100a010ab*/
  v224 = v324; /*0x100a010b9*/
  v225 = v344; /*0x100a010c7*/
  v226 = v324; /*0x100a010ce*/
  v227 = v325; /*0x100a010dc*/
  v228 = v304; /*0x100a010ea*/
  v229 = v325; /*0x100a010f1*/
  v230 = v326; /*0x100a010ff*/
  v231 = v345; /*0x100a0110d*/
  v232 = v326; /*0x100a01114*/
  v233 = v327; /*0x100a01122*/
  v234 = v305; /*0x100a01130*/
  v235 = v327; /*0x100a01137*/
  v236 = v328; /*0x100a01145*/
  v237 = v346; /*0x100a01150*/
  v238 = v328; /*0x100a01157*/
  v239 = v329; /*0x100a01165*/
  v240 = v306; /*0x100a01173*/
  v241 = v329; /*0x100a0117a*/
  v242 = v330; /*0x100a01188*/
  v243 = v347; /*0x100a01193*/
  v244 = v330; /*0x100a0119a*/
  v245 = v331; /*0x100a011a8*/
  v246 = v307; /*0x100a011b6*/
  v247 = v331; /*0x100a011bd*/
  v248 = v332; /*0x100a011cb*/
  v249 = v348; /*0x100a011d6*/
  v250 = v332; /*0x100a011dd*/
  v251 = v333; /*0x100a011eb*/
  v252 = v308; /*0x100a011f9*/
  v253 = v333; /*0x100a01200*/
  v254 = v334; /*0x100a0120e*/
  v255 = v349; /*0x100a01219*/
  v256 = v334; /*0x100a01220*/
  v257 = v335; /*0x100a0122e*/
  v258 = v309; /*0x100a0123c*/
  v259 = v335; /*0x100a01243*/
  v260 = v336; /*0x100a01251*/
  v261 = v350; /*0x100a0125c*/
  v262 = v336; /*0x100a01263*/
  v263 = v337; /*0x100a01271*/
  v264 = v310; /*0x100a0127f*/
  v265 = v337; /*0x100a01286*/
  v266 = v173; /*0x100a0128d*/
  v267 = v351; /*0x100a01298*/
  v268 = v173; /*0x100a0129f*/
  if ( !(_BYTE)v356 /*0x100a01571*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v295) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v178) )
  {
    *((_BYTE *)v27 + 8) = 1; /*0x100a0157e*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v27); /*0x100a012c6*/
  codexmate_lib::core::repository::account_reset_credits::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::reset_credit_context::h30cba837866be440( /*0x100a012e7*/
    v275,
    (__int64 *)&v182,
    v279,
    v277);
  a1 = v278; /*0x100a012ec*/
  if ( LODWORD(v275[0]) == 11 ) /*0x100a01304*/
  {
    v288 = v275[6]; /*0x100a01342*/
    v287 = v275[5]; /*0x100a01350*/
    v292 = v275[2]; /*0x100a01357*/
    v293 = v275[3]; /*0x100a0135e*/
    v294 = v275[4]; /*0x100a01365*/
    v284 = (__int64 (__fastcall **)())v275[2]; /*0x100a0137a*/
    v285 = v275[3]; /*0x100a01381*/
    v286 = v275[4]; /*0x100a0138f*/
    v283 = (__int64 *)v275[1]; /*0x100a01396*/
    codexmate_lib::core::repository::Repository::api_proxy_config::hcebc05749fae287e(v275, &v182); /*0x100a013ab*/
    v276[5] = v288; /*0x100a013b7*/
    v276[4] = v287; /*0x100a013c5*/
    v276[3] = v286; /*0x100a013d3*/
    v276[2] = v285; /*0x100a013e1*/
    v276[1] = v284; /*0x100a013f6*/
    v276[0] = v283; /*0x100a013fd*/
    v276[6] = v275[0]; /*0x100a01412*/
    v276[7] = v275[1]; /*0x100a01419*/
    v276[8] = v275[2]; /*0x100a01427*/
    v276[9] = v275[3]; /*0x100a01435*/
    qmemcpy(a1, v276, 0x50u); /*0x100a0144b*/
  }
  else
  {
    qmemcpy(v276, v275, sizeof(v276)); /*0x100a01469*/
    v289 = 0; /*0x100a0146c*/
    v290 = 1; /*0x100a01477*/
    v291 = 0; /*0x100a01482*/
    v285 = 1610612768; /*0x100a0148d*/
    v283 = &v289; /*0x100a0149f*/
    v284 = &anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a014ad*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a014be*/
                            v276,
                            &v283) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a015a8*/
        &anon_25039b10cfdf58965817401c80a821a1_818,
        55,
        &v280,
        &anon_25039b10cfdf58965817401c80a821a1_840,
        &anon_25039b10cfdf58965817401c80a821a1_820);
    v280 = v289; /*0x100a014d9*/
    v281 = v290; /*0x100a014e0*/
    v282 = v291; /*0x100a014ee*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v275); /*0x100a014fc*/
    v179 = v280; /*0x100a01508*/
    v180 = v281; /*0x100a0150f*/
    v292 = v280; /*0x100a01516*/
    v293 = v281; /*0x100a0151d*/
    v294 = v282; /*0x100a01524*/
    a1[3] = v282; /*0x100a0152b*/
    a1[2] = v180; /*0x100a0152f*/
    a1[1] = v179; /*0x100a01533*/
    *a1 = 0x8000000000000000LL; /*0x100a01537*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::h2cfd58f3a1a2f74b(&v182); /*0x100a01541*/
  return a1; /*0x100a01549*/
}