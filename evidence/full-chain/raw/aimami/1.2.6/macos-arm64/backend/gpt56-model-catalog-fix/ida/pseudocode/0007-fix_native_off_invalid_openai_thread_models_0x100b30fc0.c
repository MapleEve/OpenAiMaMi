// codexmate_lib::core::relay::codex_diagnostic::fix_native_off_invalid_openai_thread_models::h1aafca857a32fe60
// EA 0x100b30fc0, size 12719B (0x31af，本轮4个confirmed目标中最大), basic_blocks 320, cyclomatic_complexity 127
// macOS, AiMaMi 1.2.6 —— ⚠ 本轮唯一确认带破坏性副作用（写线程元数据 rollout + 恢复日志/DB）的函数
//
// 红线20真实截断核验：
//   - decompile(addr, include_addresses=true) 返回 code 字段总长 81758 字符，被 MCP 工具
//     truncate 到约 2000 字符预览 + "[81758 chars total]" 标记 —— 这是真实的 MCP 传输层
//     截断（与 0003/0006 号函数"误用 analyze_function 预览"的假截断不同性质）。
//   - decompile(addr, include_addresses=false) 总长降到 62443 字符，但同样被截断到固定预览
//     长度，证实截断阈值与 include_addresses 参数无关，是该 decompile 工具本身对"code"字段
//     的预览截断策略（服务器端），并非 IDA Hex-Rays 反编译能力上限。
//   - basic_blocks(addr) 确认该函数含 320 个基本块，规模确实远超其它7个目标（多数 <110 块）。
//   - 突破方法：改用 py_eval 在 IDA 进程内直接调 ida_hexrays.decompile(0x100b30fc0) 拿到
//     Python 字符串对象 str(cfunc)（长度 62443，与 include_addresses=false 的 decompile()
//     结果长度完全一致，互相印证非伪造），再在 IDA 服务器端对该字符串做切片分 5 段
//     （每段 15000 字符）分别返回，绕开该 decompile 工具自身的预览截断——最终在本地把
//     5 段拼接还原为完整 62443 字符的真实伪代码，无编造、无省略号、无重复。
//   - 本文件即该拼接结果的完整落盘，是本函数当前可获得的最完整反编译版本（无地址逐行注释，
//     因为 include_addresses=false 路径下才能拿到不截断的 str(cfunc)；有地址版本更长
//     [81758 字符]，本轮未能同法切片，留作后续如需逐指令地址精修的 gap）。
size_t __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_native_off_invalid_openai_thread_models::h1aafca857a32fe60(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i si128)
{
  __int64 v4; // rax
  _QWORD *v5; // r14
  void *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rax
  size_t result; // rax
  __int128 v11; // kr00_16
  __int128 v12; // kr10_16
  _QWORD *v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int128 *v16; // rax
  __int128 *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  void **v20; // rdi
  _QWORD *v21; // r14
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // r14
  const __m128i *v30; // rbx
  int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // r15
  bool v36; // zf
  __int64 v37; // r15
  void *v38; // rsi
  void **v39; // r15
  __int64 v40; // r13
  __int64 v41; // r12
  __int128 v42; // kr50_16
  __int64 v43; // r8
  __int64 v44; // r9
  void **v45; // r15
  __int64 v46; // r13
  __int64 v47; // r14
  __int64 v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rax
  const void *v51; // r12
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  _QWORD *v55; // r14
  void *v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // r14
  __int64 v59; // rax
  __int64 v60; // rax
  __int128 v61; // kr70_16
  __int128 v62; // kr80_16
  _QWORD *v63; // r9
  _QWORD *v64; // rsi
  __int64 v65; // rdx
  __int128 v66; // rax
  void **v67; // r13
  void **v68; // r12
  unsigned __int64 v69; // r15
  signed __int64 v70; // r14
  const void *v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rbx
  __m128i v74; // rcx
  const __m128i *v75; // rax
  const __m128i *v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // r8
  char v81; // r8
  __int64 v82; // r10
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // r14
  __int64 v86; // r10
  unsigned __int64 v88; // r13
  void **v89; // r15
  signed __int64 v90; // r14
  const void *v91; // rsi
  const void *v92; // rbx
  __int64 v93; // r15
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 v96; // r15
  __int64 v97; // rax
  __int64 v98; // rcx
  void *v99; // r15
  __int64 v100; // r14
  __int64 v101; // r9
  char v102; // al
  __int128 v103; // kr90_16
  __int64 v104; // rbx
  size_t v105; // r13
  unsigned __int64 v106; // r15
  unsigned __int64 v108; // rcx
  __m128i v109; // xmm1
  __int64 v110; // rdx
  __m128i v111; // xmm2
  __m128i v112; // xmm3
  __int64 v114; // rax
  __int64 v115; // r15
  unsigned __int64 v116; // r13
  _QWORD *v117; // r14
  _QWORD *v118; // r15
  __int64 v119; // rsi
  __int64 v120; // rax
  _QWORD *v121; // r14
  void *v122; // rax
  __int64 v123; // rax
  _QWORD *v124; // r14
  __int64 v125; // rax
  __int128 v126; // krB0_16
  __int64 v127; // rdx
  __int128 v128; // krC0_16
  _QWORD *v129; // r9
  _QWORD *v130; // rdi
  _QWORD *v131; // rsi
  _QWORD *v132; // r13
  __int64 v133; // r14
  __int64 v134; // r12
  __int64 v135; // rax
  unsigned __int64 v136; // rcx
  char v137; // al
  __int128 v138; // krE0_16
  __int64 v139; // rdi
  __int64 j; // r15
  _QWORD *v141; // r14
  __int64 v142; // rsi
  __int64 v143; // rsi
  unsigned __int64 v144; // rbx
  _QWORD *v145; // r14
  __int64 v146; // rsi
  _QWORD *v147; // r14
  __int64 v148; // rbx
  __int64 v149; // r15
  __int64 v150; // rbx
  __int64 v151; // r14
  _QWORD *v152; // rax
  __int64 v153; // r13
  void *v154; // rcx
  _QWORD *v155; // rdx
  unsigned __int64 v156; // rax
  __int64 v158; // rdx
  __int64 v159; // rdi
  __m128i v160; // xmm1
  __int64 v161; // rsi
  __int64 i; // r8
  __int64 v163; // rax
  __m128i v164; // xmm2
  __int64 v166; // r14
  __int64 v167; // r13
  int v168; // eax
  __int64 v169; // rbx
  unsigned __int64 *v170; // r12
  unsigned __int64 v171; // rdi
  __int64 v172; // rbx
  unsigned __int64 v173; // r13
  unsigned __int64 v174; // rdi
  const void *v175; // rsi
  size_t v176; // r13
  __int64 v177; // rax
  __int64 v178; // rcx
  const void *v179; // rbx
  unsigned __int64 v180; // r14
  __m128i v181; // xmm1
  unsigned __int64 v182; // r14
  __m128i v184; // xmm2
  __int64 v186; // r12
  size_t v187; // r14
  __int64 v188; // rbx
  unsigned __int64 v189; // r12
  _QWORD *v190; // r13
  __int64 v191; // rdx
  __int64 v192; // rsi
  __int64 v193; // rdx
  __int64 v194; // r8
  unsigned __int64 v195; // rdi
  void **v196; // r15
  signed __int64 v197; // r13
  const void *v198; // r14
  __int64 v199; // rbx
  void *v200; // r14
  __int64 v201; // rbx
  unsigned __int64 v202; // r14
  char v203; // bl
  void *v204; // rbx
  unsigned __int64 v205; // rbx
  __int64 v206; // rax
  __int64 v207; // r14
  __int64 v208; // rbx
  __int64 v209; // rsi
  __int64 v210; // [rsp+0h] [rbp-970h]
  _QWORD __src[18]; // [rsp+10h] [rbp-960h] BYREF
  _OWORD v212[18]; // [rsp+A0h] [rbp-8D0h] BYREF
  _QWORD v213[12]; // [rsp+1C0h] [rbp-7B0h] BYREF
  _BYTE v214[24]; // [rsp+220h] [rbp-750h] BYREF
  _QWORD v215[12]; // [rsp+238h] [rbp-738h] BYREF
  __int128 v216; // [rsp+298h] [rbp-6D8h] BYREF
  size_t __n; // [rsp+2A8h] [rbp-6C8h]
  _QWORD *v218; // [rsp+2B0h] [rbp-6C0h]
  unsigned __int64 v219; // [rsp+2B8h] [rbp-6B8h]
  __int64 v220; // [rsp+2C8h] [rbp-6A8h]
  char v221[16]; // [rsp+2D0h] [rbp-6A0h] BYREF
  __int64 v222; // [rsp+2E0h] [rbp-690h]
  __int64 v223; // [rsp+2E8h] [rbp-688h]
  __int64 v224; // [rsp+2F8h] [rbp-678h]
  char v225[72]; // [rsp+300h] [rbp-670h] BYREF
  _QWORD v226[3]; // [rsp+348h] [rbp-628h] BYREF
  __int64 v227; // [rsp+360h] [rbp-610h] BYREF
  __int128 v228; // [rsp+368h] [rbp-608h]
  _QWORD v229[3]; // [rsp+378h] [rbp-5F8h] BYREF
  _QWORD *v230; // [rsp+390h] [rbp-5E0h] BYREF
  _QWORD *v231; // [rsp+398h] [rbp-5D8h]
  unsigned __int64 v232; // [rsp+3A0h] [rbp-5D0h]
  _QWORD v233[3]; // [rsp+3A8h] [rbp-5C8h] BYREF
  __int64 v234; // [rsp+3C0h] [rbp-5B0h] BYREF
  void *v235; // [rsp+3C8h] [rbp-5A8h]
  _QWORD *v236; // [rsp+3D0h] [rbp-5A0h]
  __int64 v237; // [rsp+3D8h] [rbp-598h]
  _QWORD *v238; // [rsp+3E0h] [rbp-590h]
  __int64 v239; // [rsp+3E8h] [rbp-588h]
  __int64 v240; // [rsp+3F0h] [rbp-580h]
  __int64 v241; // [rsp+3F8h] [rbp-578h]
  _OWORD v242[6]; // [rsp+400h] [rbp-570h] BYREF
  __int64 v243; // [rsp+460h] [rbp-510h] BYREF
  void **v244; // [rsp+468h] [rbp-508h]
  unsigned __int64 v245; // [rsp+470h] [rbp-500h]
  void *v246; // [rsp+478h] [rbp-4F8h]
  __int64 v247; // [rsp+480h] [rbp-4F0h]
  __int64 v248; // [rsp+488h] [rbp-4E8h]
  __int64 v249; // [rsp+490h] [rbp-4E0h] BYREF
  __int128 v250; // [rsp+498h] [rbp-4D8h]
  __int64 v251; // [rsp+4A8h] [rbp-4C8h]
  __int64 v252; // [rsp+4B0h] [rbp-4C0h]
  __int64 v253; // [rsp+4B8h] [rbp-4B8h]
  __int128 v254; // [rsp+4C0h] [rbp-4B0h]
  __int64 v255; // [rsp+4D0h] [rbp-4A0h]
  __int64 v256; // [rsp+4D8h] [rbp-498h]
  char **v257; // [rsp+4E0h] [rbp-490h]
  __int64 v258; // [rsp+4E8h] [rbp-488h]
  __int64 v259; // [rsp+4F0h] [rbp-480h]
  __int64 v260; // [rsp+4F8h] [rbp-478h]
  _OWORD v261[6]; // [rsp+500h] [rbp-470h] BYREF
  __int64 v262; // [rsp+560h] [rbp-410h]
  _BYTE __dst[184]; // [rsp+568h] [rbp-408h] BYREF
  _BYTE v264[344]; // [rsp+620h] [rbp-350h] BYREF
  __int128 v265; // [rsp+778h] [rbp-1F8h] BYREF
  __int64 v266; // [rsp+788h] [rbp-1E8h]
  __int128 v267; // [rsp+790h] [rbp-1E0h] BYREF
  __int64 v268; // [rsp+7A0h] [rbp-1D0h]
  __int64 v269; // [rsp+7A8h] [rbp-1C8h] BYREF
  void *v270; // [rsp+7B0h] [rbp-1C0h]
  _QWORD *v271; // [rsp+7B8h] [rbp-1B8h]
  void *v272; // [rsp+7C0h] [rbp-1B0h] BYREF
  __int64 v273; // [rsp+7C8h] [rbp-1A8h]
  void *v274; // [rsp+7D0h] [rbp-1A0h]
  __int64 v275; // [rsp+7D8h] [rbp-198h] BYREF
  void **v276; // [rsp+7E0h] [rbp-190h]
  unsigned __int64 v277; // [rsp+7E8h] [rbp-188h]
  __int64 v278; // [rsp+7F0h] [rbp-180h] BYREF
  _QWORD *v279; // [rsp+7F8h] [rbp-178h]
  unsigned __int64 v280; // [rsp+800h] [rbp-170h]
  _QWORD *v281; // [rsp+808h] [rbp-168h] BYREF
  __int128 v282; // [rsp+810h] [rbp-160h]
  __int64 v283; // [rsp+820h] [rbp-150h]
  __int64 v284; // [rsp+828h] [rbp-148h]
  __int64 v285; // [rsp+830h] [rbp-140h]
  unsigned __int64 v286; // [rsp+838h] [rbp-138h]
  __m128i v287; // [rsp+840h] [rbp-130h] BYREF
  _BYTE v288[24]; // [rsp+850h] [rbp-120h]
  _QWORD *v289; // [rsp+868h] [rbp-108h]
  __m128i v290; // [rsp+870h] [rbp-100h] BYREF
  void *v291[2]; // [rsp+880h] [rbp-F0h] BYREF
  __m128i v292; // [rsp+890h] [rbp-E0h] BYREF
  __int128 v293; // [rsp+8A0h] [rbp-D0h] BYREF
  __int128 v294; // [rsp+8B0h] [rbp-C0h]
  _QWORD *v295; // [rsp+8C0h] [rbp-B0h] BYREF
  __int64 v296; // [rsp+8C8h] [rbp-A8h]
  _QWORD *v297; // [rsp+8D0h] [rbp-A0h]
  _QWORD *v298; // [rsp+8D8h] [rbp-98h]
  __int64 v299; // [rsp+8E0h] [rbp-90h] BYREF
  __int64 v300; // [rsp+8E8h] [rbp-88h]
  __int64 v301; // [rsp+8F0h] [rbp-80h]
  __int64 v302; // [rsp+8F8h] [rbp-78h]
  void *v303[2]; // [rsp+900h] [rbp-70h] BYREF
  void **v304; // [rsp+918h] [rbp-58h]
  __int64 v305; // [rsp+920h] [rbp-50h]
  __int64 v306; // [rsp+928h] [rbp-48h]
  unsigned __int64 v307; // [rsp+930h] [rbp-40h]
  _QWORD *v308; // [rsp+938h] [rbp-38h]
  void *__s1; // [rsp+940h] [rbp-30h]

  v289 = a1;
  v255 = a3;
  if ( *(_BYTE *)(a3 + 316) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v4 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v5 = (_QWORD *)v4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
    if ( !v6 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39);
    qmemcpy(v6, "native_off_invalid_openai_thread_models", 39);
    *v5 = 39;
    v5[1] = v6;
    v5[2] = 39;
    *(_QWORD *)&v216 = 1;
    *((_QWORD *)&v216 + 1) = v5;
    __n = 1;
    *(_QWORD *)__dst = 0;
    *(_QWORD *)&__dst[8] = 8;
    *(_QWORD *)&__dst[16] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(39, 1);
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v7 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v8 = (_QWORD *)v7;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1);
    if ( !v9 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 59);
    *(_QWORD *)(v9 + 48) = 0xA1A8E68BA8E7BFBALL;
    *(_QWORD *)(v9 + 40) = 0xE7B996E698AEE520LL;
    *(_QWORD *)(v9 + 32) = 0x66664F6576697461LL;
    *(_QWORD *)(v9 + 24) = 0x4E208DA4E5AEBFE4LL;
    *(_QWORD *)(v9 + 16) = 0x809CE9A097E68CBCLL;
    *(_QWORD *)(v9 + 8) = 0xEFADB8E4A894E7AFLL;
    *(_QWORD *)v9 = 0x90E5B194E7AFB7E8LL;
    *(_DWORD *)(v9 + 55) = -1952520799;
    *v8 = 59;
    v8[1] = v9;
    v8[2] = 59;
    result = __n;
    *(_QWORD *)&v264[16] = __n;
    v11 = v216;
    *(_OWORD *)v264 = v216;
    v12 = *(_OWORD *)__dst;
    *(_OWORD *)&v264[24] = *(_OWORD *)__dst;
    *(_QWORD *)&v264[40] = *(_QWORD *)&__dst[16];
    v13 = v289;
    v289[6] = *(_QWORD *)&__dst[16];
    *((_OWORD *)v13 + 2) = v12;
    v13[3] = result;
    *(_OWORD *)(v13 + 1) = v11;
    v13[7] = 1;
    v13[8] = v8;
    v13[9] = 1;
    *v13 = 11;
    return result;
  }
  v14 = a2;
  codexmate_lib::core::relay::codex_catalog::resolve_native_thread_model_catalog::h024a89cb5bf29dd7(&v216, a2);
  v15 = *(_QWORD *)(v255 + 8) + 232LL * *(_QWORD *)(v255 + 16);
  v213[0] = *(_QWORD *)(v255 + 8);
  v213[1] = v15;
  v213[2] = 0;
  v213[7] = 0;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v17 = v16;
  if ( *((_BYTE *)v16 + 16) == 1 )
  {
    v18 = *(_QWORD *)v16;
    v19 = *((_QWORD *)v17 + 1);
  }
  else
  {
    v18 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    *(_QWORD *)v17 = v18;
    *((_QWORD *)v17 + 1) = v19;
    *((_BYTE *)v17 + 16) = 1;
  }
  *(_QWORD *)v17 = v18 + 1;
  *(_QWORD *)&v264[24] = 0;
  *(_QWORD *)&v264[16] = 0;
  *(_OWORD *)v264 = (unsigned __int64)anon_99e3aac6bf594b8c6c3fde2543ef5152_12;
  *(_QWORD *)&v264[32] = v18;
  *(_QWORD *)&v264[40] = v19;
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h36bfc5d11fe7f895(
    v213,
    v264);
  *((_QWORD *)&v242[2] + 1) = *(_QWORD *)&v264[40];
  *(_OWORD *)((char *)&v242[1] + 8) = *(_OWORD *)&v264[24];
  *(_QWORD *)&v242[1] = *(_QWORD *)&v264[16];
  v242[0] = *(_OWORD *)v264;
  v20 = (void **)v264;
  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::hf60a6da6c23d3e98(v264);
  if ( *(_QWORD *)v264 != 11 )
  {
    v306 = *(_QWORD *)&v264[8];
    __s1 = *(void **)v264;
    v304 = *(void ***)&v264[16];
    v303[0] = *(void **)&v264[32];
    v307 = *(_QWORD *)&v264[24];
    v23 = *(_QWORD *)&v264[40];
    *(_QWORD *)v288 = *(_QWORD *)&v264[56];
    v24 = *(_QWORD *)&v264[48];
    *(_OWORD *)&v288[8] = *(_OWORD *)&v264[64];
    v283 = *(_QWORD *)&v264[80];
    HIDWORD(_RAX) = *(_DWORD *)&v264[92];
    v284 = *(_QWORD *)&v264[88];
    goto LABEL_14;
  }
  v233[0] = *(_QWORD *)&v264[8];
  v233[1] = *(_QWORD *)&v264[16];
  v233[2] = *(_QWORD *)&v264[24];
  v21 = (_QWORD *)__n;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v22 = 0;
    goto LABEL_12;
  }
  v306 = *(_QWORD *)&v264[8];
  v304 = *(void ***)&v264[16];
  v307 = *(_QWORD *)&v264[24];
  v305 = a2;
  v51 = *((const void **)&v216 + 1);
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v264, 11);
    v22 = 1;
    v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v21, 1);
    if ( !v52 )
LABEL_12:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v22, v21);
    v53 = v52;
  }
  else
  {
    v53 = 1;
  }
  memcpy((void *)v53, v51, (size_t)v21);
  v281 = v21;
  *(_QWORD *)&v282 = v53;
  *((_QWORD *)&v282 + 1) = v21;
  if ( *((_BYTE *)v17 + 16) == 1 )
  {
    v66 = *v17;
  }
  else
  {
    *(_QWORD *)&v66 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    *v17 = v66;
    *((_BYTE *)v17 + 16) = 1;
  }
  *(_QWORD *)v17 = v66 + 1;
  v261[1] = 0u;
  v261[0] = (unsigned __int64)anon_99e3aac6bf594b8c6c3fde2543ef5152_12;
  v261[2] = v66;
  if ( !v307 )
    goto LABEL_104;
  v67 = v304;
  v68 = &v304[22 * v307];
  __s1 = nullptr;
  v69 = 1;
  do
  {
    if ( (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::native_off_openai_model_needs_fallback::h50928f7856ab95cc(
                            v67,
                            (__int64 *)v242,
                            (unsigned __int64)&v216) )
    {
      if ( v67[9] == (void *)0x8000000000000000LL )
      {
        *(_QWORD *)__dst = v67 + 3;
        *(_QWORD *)&__dst[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v264[8], &unk_10186EAF8, __dst);
        v14 = v305;
        v290.i64[0] = *(_QWORD *)&v264[8];
        v291[0] = *(void **)&v264[16];
        *(__m128i *)v303 = _mm_loadu_si128((const __m128i *)&v264[24]);
        v21 = *(_QWORD **)&v264[40];
        *(_QWORD *)v288 = *(_QWORD *)&v264[56];
        v69 = *(_QWORD *)&v264[48];
        *(_OWORD *)&v288[8] = *(_OWORD *)&v264[64];
        v283 = *(_QWORD *)&v264[80];
        v284 = *(_QWORD *)&v264[88];
        __s1 = (void *)10;
LABEL_135:
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h39cd983b2ca3757a(v261);
        v292.i64[0] = v69;
        v115 = (__int64)v21;
        if ( v281 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v282, v281, 1);
LABEL_105:
        v116 = v307 + 1;
        v20 = v304;
        while ( v116 != 1 )
        {
          --v116;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::hfb5f956a6abad8d3();
          v20 += 22;
        }
        si128 = _mm_load_si128((const __m128i *)v303);
        v307 = si128.i64[0];
        v303[0] = (void *)_mm_extract_epi64(si128, 1);
        if ( v306 )
        {
          v20 = v304;
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v304, 176 * v306, 8);
        }
        v304 = (void **)v291[0];
        HIDWORD(_RAX) = v290.i32[1];
        v306 = v290.i64[0];
        v23 = v115;
        v24 = v292.i64[0];
        goto LABEL_14;
      }
      v70 = (signed __int64)v67[11];
      if ( v70 < 0 )
      {
        v69 = 0;
LABEL_72:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v69, v70);
      }
      v71 = v67[10];
      if ( v70 )
      {
        v303[0] = v67[10];
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67, v71);
        v72 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v70, 1);
        if ( !v72 )
          goto LABEL_72;
        v73 = v72;
        v71 = v303[0];
      }
      else
      {
        v73 = 1;
      }
      memcpy((void *)v73, v71, v70);
      *(_QWORD *)__dst = v70;
      *(_QWORD *)&__dst[8] = v73;
      *(_QWORD *)&__dst[16] = v70;
      hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::he57d9f7810fc7eca(
        v264,
        v261,
        __dst);
      v74 = *(__m128i *)v264;
      if ( *(_QWORD *)v264 != 0x8000000000000000LL )
      {
        v75 = *(const __m128i **)&v264[24];
        v76 = **(const __m128i ***)&v264[24];
        v77 = *(_QWORD *)(*(_QWORD *)&v264[24] + 8LL);
        v78 = *(_QWORD *)&v264[32] & v77;
        _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(**(_QWORD **)&v264[24]
                                                                              + (*(_QWORD *)&v264[32] & v77))));
        if ( !(_DWORD)_R9 )
        {
          v86 = 16;
          do
          {
            v78 = v77 & (v86 + v78);
            _R9 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v76 + v78)));
            v86 += 16;
          }
          while ( !(_DWORD)_R9 );
        }
        __asm { tzcnt   r9d, r9d }
        _R9 = v77 & (v78 + _R9);
        v81 = v76->i8[_R9];
        if ( v81 >= 0 )
        {
          _R8D = _mm_movemask_epi8(_mm_load_si128(v76));
          __asm { tzcnt   r9d, r8d }
          v81 = v76->i8[_R9];
        }
        v82 = *(_QWORD *)&v264[16];
        v83 = *(_QWORD *)&v264[32] >> 57;
        v76->i8[_R9] = *(_QWORD *)&v264[32] >> 57;
        v76[1].i8[v77 & (_R9 - 16)] = v83;
        v84 = -3 * _R9;
        v76[v84 - 3] = v74;
        v74.i64[1] = (__int64)v76[-3 * _R9].i64;
        v76[v84 - 2].i64[0] = v82;
        *((_QWORD *)&v76[v84 - 1] - 1) = 0;
        v76[v84 - 1].i64[0] = 8;
        v76[v84 - 1].i64[1] = 0;
        v75[1] = _mm_sub_epi64(
                   _mm_loadu_si128(v75 + 1),
                   _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_10165AD00), v81 & 1, 0));
      }
      v85 = *(_QWORD *)(v74.i64[1] - 8);
      if ( v85 == *(_QWORD *)(v74.i64[1] - 24) )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he3f8c8d505fd1b0a(v74.i64[1] - 24);
      *(_QWORD *)(*(_QWORD *)(v74.i64[1] - 16) + 8 * v85) = __s1;
      v21 = (_QWORD *)(v85 + 1);
      *(_QWORD *)(v74.i64[1] - 8) = v21;
    }
    v67 += 22;
    __s1 = (char *)__s1 + 1;
  }
  while ( v67 != v68 );
  v104 = *((_QWORD *)&v261[1] + 1);
  if ( !*((_QWORD *)&v261[1] + 1) )
  {
LABEL_104:
    *(_OWORD *)&v288[8] = v282;
    *(_QWORD *)v288 = v281;
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h39cd983b2ca3757a(v261);
    v14 = v305;
    *(_OWORD *)v303 = 0;
    __s1 = (void *)11;
    v115 = 8;
    v292.i64[0] = 0;
    v291[0] = (void *)8;
    v290.i64[0] = 0;
    goto LABEL_105;
  }
  if ( !v220 )
  {
LABEL_134:
    *(_QWORD *)__dst = &v281;
    *(_QWORD *)&__dst[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v264, &unk_10186EA64, __dst);
    v14 = v305;
    v291[0] = *(void **)&v264[8];
    v290.i64[0] = *(_QWORD *)v264;
    __s1 = (void *)10;
    *(__m128i *)v303 = _mm_loadl_epi64((const __m128i *)&v264[16]);
    goto LABEL_135;
  }
  v105 = *((_QWORD *)&v282 + 1);
  __s1 = (void *)v282;
  v106 = core::hash::BuildHasher::hash_one::h9d6ec3ed5b7c6973(v221, v282, *((_QWORD *)&v282 + 1));
  _RAX = v106 >> 57;
  v21 = v218;
  v108 = v219;
  v109 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v106 >> 57), (__m128i)0LL);
  v110 = 0;
  v111 = (__m128i)-1LL;
  while ( 1 )
  {
    v69 = v108 & v106;
    v112 = _mm_loadu_si128((const __m128i *)((char *)v21 + v69));
    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v112, v109));
    if ( _R12D )
      break;
LABEL_102:
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v112, v111));
    if ( (_DWORD)_RAX )
      goto LABEL_134;
    v106 = v69 + v110 + 16;
    v110 += 16;
  }
  v303[0] = (void *)v108;
  v292 = v109;
  v287.i64[0] = v110;
  v290 = v112;
  while ( 1 )
  {
    __asm { tzcnt   eax, r12d }
    v114 = -3LL * (v108 & (v69 + _RAX));
    if ( v105 == v21[v114 - 1] && !memcmp(__s1, (const void *)v21[v114 - 2], v105) )
      break;
    _RAX = (unsigned int)(_R12D - 1);
    LOWORD(_RAX) = _R12D & (_R12D - 1);
    _R12D = _RAX;
    v108 = (unsigned __int64)v303[0];
    v109 = _mm_load_si128(&v292);
    v110 = v287.i64[0];
    v111 = (__m128i)-1LL;
    v112 = _mm_load_si128(&v290);
    if ( !(_WORD)_RAX )
      goto LABEL_102;
  }
  si128 = _mm_load_si128(*(const __m128i **)&v261[0]);
  v215[0] = *(_QWORD *)&v261[0];
  v215[1] = *(_QWORD *)&v261[0] + 16LL;
  v215[2] = *(_QWORD *)&v261[0] + *((_QWORD *)&v261[0] + 1) + 1LL;
  LOWORD(v215[3]) = ~(unsigned __int16)_mm_movemask_epi8(si128);
  v215[4] = v104;
  v130 = &v230;
  v131 = v215;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4d4beb8056bbee40(
    &v230,
    v215,
    *(double *)si128.i64,
    *(double *)v109.i64,
    *(double *)v111.i64);
  v14 = v305;
  v132 = v231;
  v69 = v232;
  if ( v232 <= 1 )
  {
    v133 = 344 * v232;
    if ( 344 * v232 )
      goto LABEL_139;
LABEL_200:
    v135 = 8;
    v136 = 0;
    goto LABEL_201;
  }
  if ( v232 >= 0x15 )
  {
    v130 = v231;
    v131 = (_QWORD *)v232;
    core::slice::sort::stable::driftsort_main::h0e2ff69ca48310bd(v231, v232, &v267);
  }
  else
  {
    v150 = 24 * v232;
    v151 = 24;
    do
    {
      v130 = v132;
      v131 = &v132[(unsigned __int64)v151 / 8];
      core::slice::sort::shared::smallsort::insert_tail::hc5dc2c6cfe28ba82(v132, &v132[(unsigned __int64)v151 / 8]);
      v151 += 24;
    }
    while ( v150 != v151 );
  }
  v133 = 344 * v69;
  if ( v69 > 0x5F417D05F417D0LL )
  {
    v134 = 0;
LABEL_190:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v134, v133);
  }
  v14 = v305;
  if ( !v133 )
    goto LABEL_200;
LABEL_139:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v130, v131);
  v134 = 8;
  v135 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v133, 8);
  if ( !v135 )
    goto LABEL_190;
  v136 = v69;
LABEL_201:
  v275 = v136;
  v276 = (void **)v135;
  v277 = 0;
  v272 = nullptr;
  v273 = 8;
  v274 = nullptr;
  v295 = v132;
  v296 = (__int64)v132;
  v297 = v230;
  v298 = &v132[3 * v69];
  if ( !v69 )
    goto LABEL_265;
  v237 = v224;
  v262 = v222;
  v256 = v223;
  v257 = &off_101A206E8;
  v238 = &v132[3 * v69];
  do
  {
    v152 = v132;
    v153 = *v132;
    v154 = (void *)v152[1];
    v155 = (_QWORD *)v152[2];
    v308 = v152 + 3;
    v236 = v155;
    v235 = v154;
    if ( v153 == 0x8000000000000000LL )
      goto LABEL_264;
    v269 = v153;
    v271 = v236;
    v270 = v235;
    v21 = v236;
    v292.i64[0] = (__int64)v235;
    std::sys::fs::metadata::h32fa16d3052ea535(v264, v235, v236);
    if ( v264[0] )
    {
      v302 = v153;
      v296 = (__int64)v308;
      if ( (v264[8] & 3) == 1 )
      {
        v207 = *(_QWORD *)&v264[8] - 1LL;
        v69 = *(_QWORD *)(*(_QWORD *)&v264[8] - 1LL);
        v208 = *(_QWORD *)(*(_QWORD *)&v264[8] + 7LL);
        if ( *(_QWORD *)v208 )
          (*(void (__fastcall **)(unsigned __int64))v208)(v69);
        v209 = *(_QWORD *)(v208 + 8);
        if ( v209 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v209, *(_QWORD *)(v208 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v207, 24, 8);
        v292.i64[0] = (__int64)v270;
        v21 = v271;
      }
      v299 = v292.i64[0];
      v300 = (__int64)v21;
      *(_QWORD *)&v293 = &v299;
      *((_QWORD *)&v293 + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      v153 = v302;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v264, &unk_10186EAB4, &v293);
      v291[0] = *(void **)&v264[8];
      v290.i64[0] = *(_QWORD *)v264;
      v206 = 10;
LABEL_267:
      __s1 = (void *)v206;
      *(__m128i *)v303 = _mm_loadl_epi64((const __m128i *)&v264[16]);
      goto LABEL_269;
    }
    if ( !*((_QWORD *)&v261[1] + 1) )
    {
LABEL_268:
      v296 = (__int64)v308;
      codexmate_lib::core::relay::codex_diagnostic::prepare_orphan_thread_adoption::_$u7b$$u7b$closure$u7d$$u7d$::h9b3c81985161ac48(v264);
      v290.i64[0] = *(_QWORD *)&v264[8];
      __s1 = *(void **)v264;
      v291[0] = *(void **)&v264[16];
      *(__m128i *)v303 = _mm_loadu_si128((const __m128i *)&v264[24]);
      v21 = *(_QWORD **)&v264[40];
      *(_QWORD *)v288 = *(_QWORD *)&v264[56];
      v69 = *(_QWORD *)&v264[48];
      *(_OWORD *)&v288[8] = *(_OWORD *)&v264[64];
      v283 = *(_QWORD *)&v264[80];
      v284 = *(_QWORD *)&v264[88];
LABEL_269:
      v14 = v305;
LABEL_270:
      if ( v153 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v292.i64[0], v153, 1);
      _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb02b8af41c3a93ec(&v295);
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hbbe0a020c543243b(&v272);
      if ( v272 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v273, 200LL * (_QWORD)v272, 8);
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha0155fa31a433e2b(&v275);
      if ( v275 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v276, 344 * v275, 8);
      goto LABEL_135;
    }
    v156 = core::hash::BuildHasher::hash_one::h9764aa1b4a3db2d1(&v261[2], &v269);
    _RCX = v156 >> 57;
    v159 = *((_QWORD *)&v261[0] + 1);
    v158 = *(_QWORD *)&v261[0];
    v160 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v156 >> 57), (__m128i)0LL);
    v161 = *(_QWORD *)&v261[0] - 48LL;
    for ( i = 0; ; i += 16 )
    {
      v163 = v159 & v156;
      v164 = _mm_loadu_si128((const __m128i *)(v158 + v163));
      _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v164, v160));
      if ( _R12D )
        break;
LABEL_211:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v164, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        goto LABEL_268;
      v156 = v163 + i + 16;
    }
    v302 = v153;
    __s1 = v21;
    *(__m128i *)v303 = v160;
    v287.i64[0] = v163;
    v290.i64[0] = i;
    *(__m128i *)v291 = v164;
    while ( 1 )
    {
      v166 = v158;
      __asm { tzcnt   ecx, r12d }
      v167 = -48LL * (v159 & (v163 + _RCX));
      if ( (unsigned __int8)_$LT$Q$u20$as$u20$hashbrown..Equivalent$LT$K$GT$$GT$::equivalent::he9e6d5d03a47ffda(
                              &v269,
                              v167 + v161) )
        break;
      v168 = _R12D - 1;
      LOWORD(v168) = _R12D & (_R12D - 1);
      v36 = (_WORD)v168 == 0;
      _R12D = v168;
      v163 = v287.i64[0];
      v153 = v302;
      v158 = v166;
      v21 = __s1;
      v160 = _mm_load_si128((const __m128i *)v303);
      i = v290.i64[0];
      v164 = _mm_load_si128((const __m128i *)v291);
      if ( v36 )
        goto LABEL_211;
    }
    v169 = *(_QWORD *)(v166 + v167 - 8);
    if ( !v169 )
    {
      v171 = 0;
      v307 = 0;
LABEL_294:
      v296 = (__int64)v308;
      core::panicking::panic_bounds_check::h56740b1198b22635(v171, v307, v257);
    }
    v170 = *(unsigned __int64 **)(v166 + v167 - 16);
    v171 = *v170;
    if ( *v170 >= v307 )
    {
      v257 = &off_101A20700;
      goto LABEL_294;
    }
    v286 = v167 + v166;
    v285 = (__int64)&v304[22 * v171 + 3];
    v234 = v285;
    v69 = (unsigned __int64)v304[22 * v171 + 4];
    v21 = v304[22 * v171 + 5];
    v172 = 8 * v169;
    v173 = 0;
    while ( v172 != v173 )
    {
      v174 = v170[v173 / 8];
      if ( v174 >= v307 )
      {
        v296 = (__int64)v308;
        core::panicking::panic_bounds_check::h56740b1198b22635(v174, v307, &off_101A20730);
      }
      if ( v304[22 * v174 + 5] == v21 )
      {
        v173 += 8LL;
        if ( !memcmp(v304[22 * v174 + 4], (const void *)v69, (size_t)v21) )
          continue;
      }
      v296 = (__int64)v308;
      v299 = v292.i64[0];
      v300 = (__int64)__s1;
      *(_QWORD *)&v293 = &v299;
      *((_QWORD *)&v293 + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      v153 = v302;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v264, &unk_10186D9D8, &v293);
      v291[0] = *(void **)&v264[8];
      v290.i64[0] = *(_QWORD *)v264;
      v206 = 9;
      goto LABEL_267;
    }
    v153 = v302;
    codexmate_lib::core::relay::codex_thread_visibility::prepare_thread_metadata_rollout::h87a3f5fb1f3b37e3(
      v264,
      v292.i64[0],
      __s1,
      v69,
      v21);
    __s1 = *(void **)&v264[8];
    v290.i64[0] = *(_QWORD *)&v264[16];
    v291[0] = *(void **)&v264[24];
    *(__m128i *)v303 = _mm_loadu_si128((const __m128i *)&v264[32]);
    v69 = *(_QWORD *)&v264[56];
    v287.i64[0] = *(_QWORD *)&v264[48];
    v267 = *(_OWORD *)&v264[64];
    v268 = *(_QWORD *)&v264[80];
    v252 = *(_QWORD *)&v264[96];
    v251 = *(_QWORD *)&v264[88];
    if ( *(_QWORD *)v264 == 0x8000000000000001LL )
    {
      v296 = (__int64)v308;
      *(_OWORD *)v288 = v267;
      *(_QWORD *)&v288[16] = v268;
      v283 = v251;
      v284 = v252;
      v14 = v305;
      v21 = (_QWORD *)v287.i64[0];
      goto LABEL_270;
    }
    memcpy(__dst, &v264[104], sizeof(__dst));
    if ( *(_QWORD *)v264 == 0x8000000000000000LL )
    {
      v296 = (__int64)v308;
      *(_QWORD *)&v293 = &v234;
      *((_QWORD *)&v293 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h359015f8047cb9a8;
      v153 = v302;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v264[8], &unk_10186EB57, &v293);
      v290.i64[0] = *(_QWORD *)&v264[8];
      v291[0] = *(void **)&v264[16];
      *(__m128i *)v303 = _mm_loadu_si128((const __m128i *)&v264[24]);
      v21 = *(_QWORD **)&v264[40];
      *(_QWORD *)v288 = *(_QWORD *)&v264[56];
      v69 = *(_QWORD *)&v264[48];
      *(_OWORD *)&v288[8] = *(_OWORD *)&v264[64];
      v283 = *(_QWORD *)&v264[80];
      v284 = *(_QWORD *)&v264[88];
      __s1 = (void *)10;
      goto LABEL_269;
    }
    memcpy((char *)&v212[6] + 8, __dst, 0xB8u);
    *(_QWORD *)&v212[1] = v290.i64[0];
    *((void **)&v212[1] + 1) = v291[0];
    si128 = _mm_load_si128((const __m128i *)v303);
    v212[2] = si128;
    v212[3] = __PAIR128__(*(unsigned __int64 *)&v264[56], v287.u64[0]);
    *(_QWORD *)&v212[5] = v268;
    v212[4] = v267;
    *((_QWORD *)&v212[5] + 1) = v251;
    *(_QWORD *)&v212[6] = v252;
    v212[0] = __PAIR128__((unsigned __int64)__s1, *(unsigned __int64 *)v264);
    v176 = *((_QWORD *)&v282 + 1);
    v175 = (const void *)v282;
    v177 = *(_QWORD *)(v285 + 8);
    v178 = *(_QWORD *)(v285 + 16);
    v265 = v282;
    v299 = v177;
    v300 = v178;
    if ( !v237 )
      goto LABEL_234;
    v179 = (const void *)v282;
    v180 = core::hash::BuildHasher::hash_one::h9d6ec3ed5b7c6973(v225, v282, *((_QWORD *)&v282 + 1));
    v181 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v180 >> 57), (__m128i)0LL);
    __s1 = nullptr;
    *(__m128i *)v303 = v181;
    while ( 1 )
    {
      v182 = v256 & v180;
      HIDWORD(_RAX) = HIDWORD(v262);
      v184 = _mm_loadu_si128((const __m128i *)(v262 + v182));
      si128 = _mm_cmpeq_epi8(v184, v181);
      _R15D = _mm_movemask_epi8(si128);
      if ( _R15D )
        break;
LABEL_230:
      si128.i64[0] = -1;
      v175 = v179;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v184, (__m128i)-1LL)) )
        goto LABEL_234;
      v180 = (unsigned __int64)__s1 + v182 + 16;
      __s1 = (char *)__s1 + 16;
      v181 = _mm_load_si128((const __m128i *)v303);
    }
    v287 = v184;
    while ( 1 )
    {
      __asm { tzcnt   eax, r15d }
      if ( v176 == *(_QWORD *)(v262 - 48 * (v256 & (v182 + _RAX)) - 32) )
      {
        v186 = v262 - 48 * (v256 & (v182 + _RAX));
        if ( !memcmp(v179, *(const void **)(v186 - 40), v176) )
          break;
      }
      _RAX = (unsigned int)(_R15D - 1);
      LOWORD(_RAX) = _R15D & (_R15D - 1);
      _R15D = _RAX;
      v184 = _mm_load_si128(&v287);
      if ( !(_WORD)_RAX )
        goto LABEL_230;
    }
    v69 = *(_QWORD *)(v186 - 16);
    v187 = *(_QWORD *)(v186 - 8);
    v175 = v179;
    if ( !(unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_valid_codex_reasoning_effort::hee3aee1ebd9283c2(
                             v69,
                             v187)
      || !(unsigned __int8)codexmate_lib::core::relay::codex_catalog::NativeThreadModelCatalog::supports_reasoning::hca531ca950d64a4a(
                             &v216,
                             v179,
                             v176,
                             v69,
                             v187) )
    {
LABEL_234:
      v187 = 6;
      v69 = (unsigned __int64)"medium";
      if ( !(unsigned __int8)codexmate_lib::core::relay::codex_catalog::NativeThreadModelCatalog::supports_reasoning::hca531ca950d64a4a(
                               &v216,
                               v175,
                               v176,
                               "medium",
                               6) )
      {
        v296 = (__int64)v308;
        *(_QWORD *)&v293 = &v299;
        *((_QWORD *)&v293 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
        *(_QWORD *)&v294 = &v265;
        *((_QWORD *)&v294 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v264[8], &unk_10186DA91, &v293);
        v290.i64[0] = *(_QWORD *)&v264[8];
        v291[0] = *(void **)&v264[16];
        *(__m128i *)v303 = _mm_loadu_si128((const __m128i *)&v264[24]);
        v21 = *(_QWORD **)&v264[40];
        *(_QWORD *)v288 = *(_QWORD *)&v264[56];
        v69 = *(_QWORD *)&v264[48];
        *(_OWORD *)&v288[8] = *(_OWORD *)&v264[64];
        v283 = *(_QWORD *)&v264[80];
        v284 = *(_QWORD *)&v264[88];
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..PreparedThreadMetadataRollout$GT$::hdc0507a3a8fe1f80(v212);
        __s1 = (void *)10;
        v14 = v305;
        v153 = v302;
        goto LABEL_270;
      }
    }
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h6f510c42e92fad87(v264, v187, 0, 1, 1);
    v188 = *(_QWORD *)&v264[8];
    v189 = v307;
    if ( *(_DWORD *)v264 == 1 )
    {
      v296 = (__int64)v308;
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*(_QWORD *)&v264[8], *(_QWORD *)&v264[16]);
    }
    v190 = *(_QWORD **)&v264[16];
    memcpy(*(void **)&v264[16], (const void *)v69, v187);
    v278 = v188;
    v279 = v190;
    v280 = v187;
    v191 = *(_QWORD *)(v286 - 8);
    if ( v191 )
    {
      v192 = *(_QWORD *)(v286 - 16);
      v193 = 8 * v191;
      v194 = 0;
      do
      {
        v195 = *(_QWORD *)(v192 + v194);
        if ( v195 >= v189 )
        {
          v296 = (__int64)v308;
          core::panicking::panic_bounds_check::h56740b1198b22635(v195, v189, &off_101A20718);
        }
        v196 = &v304[22 * v195];
        v197 = (signed __int64)v196[2];
        if ( v197 < 0 )
        {
          v199 = 0;
LABEL_277:
          v296 = (__int64)v308;
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v199, v197);
        }
        v290.i64[0] = v194;
        v287.i64[0] = v192;
        v292.i64[0] = v193;
        v198 = v304[22 * v195 + 1];
        if ( v197 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v195, v192);
          v199 = 1;
          v303[0] = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v197, 1);
          if ( !v303[0] )
            goto LABEL_277;
        }
        else
        {
          v303[0] = (void *)1;
        }
        memcpy(v303[0], v198, v197);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v265, v196 + 3);
        __s1 = v271;
        if ( (__int64)v271 < 0 )
        {
          v201 = 0;
LABEL_279:
          v296 = (__int64)v308;
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v201, __s1);
        }
        v200 = v270;
        if ( v271 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v265, v196 + 3);
          v201 = 1;
          v291[0] = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__s1, 1);
          if ( !v291[0] )
            goto LABEL_279;
        }
        else
        {
          v291[0] = (void *)1;
        }
        memcpy(v291[0], v200, (size_t)__s1);
        v285 = 0x8000000000000000LL;
        if ( v196[12] != (void *)0x8000000000000000LL )
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v293, v196 + 12);
          v258 = *((_QWORD *)&v293 + 1);
          v285 = v293;
          v239 = v294;
        }
        v286 = 0x8000000000000000LL;
        if ( v196[15] != (void *)0x8000000000000000LL )
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v293, v196 + 15);
          v259 = *((_QWORD *)&v293 + 1);
          v286 = v293;
          v240 = v294;
        }
        v202 = 0x8000000000000000LL;
        if ( v196[18] != (void *)0x8000000000000000LL )
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v293, v196 + 18);
          v260 = *((_QWORD *)&v293 + 1);
          v202 = v293;
          v241 = v294;
        }
        v203 = *((_BYTE *)v196 + 168);
        v69 = *((unsigned __int8 *)v196 + 169);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v299, &v281);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v293, &v278);
        *(_QWORD *)v264 = v197;
        *(void **)&v264[8] = v303[0];
        *(_QWORD *)&v264[16] = v197;
        *(_QWORD *)&v264[40] = v266;
        *(_OWORD *)&v264[24] = v265;
        *(_QWORD *)&v264[48] = __s1;
        *(void **)&v264[56] = v291[0];
        *(_QWORD *)&v264[64] = __s1;
        *(_QWORD *)&v264[120] = v285;
        *(_QWORD *)&v264[128] = v258;
        *(_QWORD *)&v264[136] = v239;
        *(_QWORD *)&v264[144] = v286;
        *(_QWORD *)&v264[152] = v259;
        *(_QWORD *)&v264[160] = v240;
        *(_QWORD *)&v264[168] = v202;
        *(_QWORD *)&v264[176] = v260;
        *(_QWORD *)&v264[184] = v241;
        v264[192] = v203;
        v264[193] = v69;
        *(_QWORD *)&v264[88] = v301;
        *(_QWORD *)&v264[80] = v300;
        *(_QWORD *)&v264[72] = v299;
        *(_QWORD *)&v264[112] = v294;
        *(_OWORD *)&v264[96] = v293;
        v204 = v274;
        if ( v274 == v272 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hebc55be65850e26a(&v272);
        memcpy((void *)(v273 + 200LL * (_QWORD)v204), v264, 0xC8u);
        v274 = (char *)v204 + 1;
        v194 = v290.i64[0] + 8;
        v193 = v292.i64[0];
        v189 = v307;
        v192 = v287.i64[0];
      }
      while ( v292.i64[0] != v290.i64[0] + 8 );
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v293, &v281);
    *(_QWORD *)&v264[328] = v280;
    *(_QWORD *)&v264[320] = v279;
    *(_QWORD *)&v264[312] = v278;
    memcpy(v264, v212, 0x120u);
    *(_OWORD *)&v264[288] = v293;
    *(_QWORD *)&v264[304] = v294;
    v264[336] = 0;
    v205 = v277;
    if ( v277 == v275 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc2f4c2bcdda115fa(&v275);
    memcpy(&v276[43 * v205], v264, 0x158u);
    v277 = v205 + 1;
    if ( v302 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v270, v302, 1);
    v132 = v308;
  }
  while ( v308 != v238 );
  v308 = v238;
LABEL_264:
  v296 = (__int64)v308;
  v14 = v305;
LABEL_265:
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb02b8af41c3a93ec(&v295);
  v306 = v275;
  v304 = v276;
  v307 = v277;
  v303[0] = v272;
  v23 = v273;
  v24 = (__int64)v274;
  *(_QWORD *)v288 = v281;
  *(_OWORD *)&v288[8] = v282;
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h39cd983b2ca3757a(v261);
  __s1 = (void *)11;
  v20 = (void **)v233;
  HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$$GT$::h62b14a6889e46c91(v233) >> 32;
LABEL_14:
  v26 = *((_QWORD *)&v242[0] + 1);
  v305 = v14;
  if ( *((_QWORD *)&v242[0] + 1) )
  {
    v292.i64[0] = v24;
    v287.i64[0] = v23;
    v27 = *((_QWORD *)&v242[1] + 1);
    if ( *((_QWORD *)&v242[1] + 1) )
    {
      v28 = *(_QWORD *)&v242[0];
      si128 = _mm_load_si128(*(const __m128i **)&v242[0]);
      _R12D = ~_mm_movemask_epi8(si128);
      v30 = (const __m128i *)(*(_QWORD *)&v242[0] + 16LL);
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            si128 = _mm_load_si128(v30);
            v31 = _mm_movemask_epi8(si128);
            v28 -= 384;
            ++v30;
          }
          while ( v31 == 0xFFFF );
          _R12D = ~v31;
        }
        __asm { tzcnt   eax, r12d }
        v32 = -3 * _RAX;
        v33 = *(_QWORD *)(v28 + 8 * v32 - 24);
        if ( v33 )
        {
          v20 = *(void ***)(v28 + 8 * v32 - 16);
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v33, 1);
        }
        --v27;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v27 );
    }
    v34 = (24 * v26 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v35 = v34 + v26;
    v36 = v35 == -17;
    v37 = v35 + 17;
    v23 = v287.i64[0];
    v24 = v292.i64[0];
    if ( !v36 )
    {
      v20 = (void **)(*(_QWORD *)&v242[0] - v34);
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v242[0] - v34, v37, 16);
    }
  }
  v253 = *(_QWORD *)v288;
  v254 = *(_OWORD *)&v288[8];
  v38 = __s1;
  if ( __s1 != (void *)11 )
  {
    v48 = v283;
    v49 = v289;
    v289[11] = v284;
    v49[10] = v48;
    v49[9] = *((_QWORD *)&v254 + 1);
    v50 = v253;
    v49[8] = v254;
    v49[7] = v50;
    *v49 = v38;
    v49[1] = v306;
    v49[2] = v304;
    v49[3] = v307;
    v49[4] = v303[0];
    v49[5] = v23;
    v49[6] = v24;
    return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..NativeThreadModelCatalog$GT$::hc4c095575c76323c(&v216);
  }
  v249 = v253;
  v250 = v254;
  v243 = v306;
  v244 = v304;
  v245 = v307;
  v246 = v303[0];
  v247 = v23;
  v248 = v24;
  if ( !v307 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, 11);
    v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v54 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v55 = (_QWORD *)v54;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
    if ( !v56 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39);
    qmemcpy(v56, "native_off_invalid_openai_thread_models", 39);
    *v55 = 39;
    v55[1] = v56;
    v55[2] = 39;
    *(_QWORD *)&v261[0] = 1;
    *((_QWORD *)&v261[0] + 1) = v55;
    *(_QWORD *)&v261[1] = 1;
    *(_QWORD *)__dst = 0;
    *(_QWORD *)&__dst[8] = 8;
    *(_QWORD *)&__dst[16] = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(39, 1);
    v57 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v57 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v58 = (_QWORD *)v57;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
    v59 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(50, 1);
    if ( !v59 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 50);
    *(_QWORD *)(v59 + 40) = 0xE5A1A8E68BA8E7BFLL;
    *(_QWORD *)(v59 + 32) = 0xBAE7B996E698AEE5LL;
    *(_QWORD *)(v59 + 24) = 0x2066664F65766974LL;
    *(_QWORD *)(v59 + 16) = 0x614E20849AE7BD90LL;
    *(_QWORD *)(v59 + 8) = 0xE89E9BE581A6E880LL;
    *(_QWORD *)v59 = 0x9CE9899CE6A1B2E6LL;
    *(_WORD *)(v59 + 48) = -29794;
    *v58 = 50;
    v58[1] = v59;
    v58[2] = 50;
    v60 = *(_QWORD *)&v261[1];
    *(_QWORD *)&v264[16] = *(_QWORD *)&v261[1];
    v61 = v261[0];
    *(_OWORD *)v264 = v261[0];
    v62 = *(_OWORD *)__dst;
    *(_OWORD *)&v264[24] = *(_OWORD *)__dst;
    *(_QWORD *)&v264[40] = *(_QWORD *)&__dst[16];
    v63 = v289;
    v289[6] = *(_QWORD *)&__dst[16];
    *((_OWORD *)v63 + 2) = v62;
    v63[3] = v60;
    *(_OWORD *)(v63 + 1) = v61;
    v63[7] = 1;
    v63[8] = v58;
    v63[9] = 1;
    *v63 = 11;
    goto LABEL_170;
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he87fb6d07660217e(
    &v278,
    v23,
    v23 + 200 * v24);
  if ( v280 >= 2 )
  {
    v147 = v279;
    if ( v280 >= 0x15 )
    {
      core::slice::sort::stable::driftsort_main::h0e2ff69ca48310bd(v279, v280, &v267);
    }
    else
    {
      v148 = 24 * v280;
      v149 = 24;
      do
      {
        core::slice::sort::shared::smallsort::insert_tail::hc5dc2c6cfe28ba82(v147, &v147[(unsigned __int64)v149 / 8]);
        v149 += 24;
      }
      while ( v148 != v149 );
    }
  }
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::hbd60e266f34c6c1e(&v278);
  v39 = (void **)v279;
  v307 = v280;
  v229[0] = v279;
  v229[1] = &v279[3 * v280];
  v229[2] = v305;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h80f55a8e5071e497(
    &v265,
    v229);
  v40 = *((_QWORD *)&v265 + 1);
  v41 = v266;
  codexmate_lib::core::relay::codex_diagnostic::write_orphan_thread_adoption_recovery::h51a6eef2bb522389(
    v264,
    *(_QWORD *)(v305 + 584),
    *(_QWORD *)(v305 + 592),
    &v243,
    *((_QWORD *)&v265 + 1),
    v266);
  v42 = *(_OWORD *)v264;
  v43 = *(_QWORD *)&v264[16];
  *(_OWORD *)__dst = *(_OWORD *)&v264[32];
  v44 = *(_QWORD *)&v264[24];
  *(_OWORD *)&__dst[16] = *(_OWORD *)&v264[48];
  if ( *(_QWORD *)v264 != 11 )
  {
    v64 = v289;
    v289[11] = *(_QWORD *)&v264[88];
    v64[10] = *(_QWORD *)&v264[80];
    *((_OWORD *)v64 + 4) = *(_OWORD *)&v264[64];
    v64[1] = *((_QWORD *)&v42 + 1);
    v64[2] = v43;
    v64[3] = v44;
    v65 = *(_QWORD *)&__dst[8];
    v64[4] = *(_QWORD *)__dst;
    v64[5] = v65;
    *((_OWORD *)v64 + 3) = *(_OWORD *)&__dst[16];
    *v64 = v42;
    goto LABEL_154;
  }
  v303[0] = *(void **)&v264[24];
  v292.i64[0] = v40;
  v304 = v39;
  v306 = *(_QWORD *)&v264[16];
  __s1 = *(void **)&v264[8];
  v294 = *(_OWORD *)&__dst[16];
  v293 = *(_OWORD *)__dst;
  v299 = 0;
  v300 = 8;
  v301 = 0;
  if ( !v245 )
  {
LABEL_73:
    v295 = nullptr;
    v296 = 8;
    v297 = nullptr;
    v269 = 0;
    if ( v307 )
    {
      v287.i64[0] = 24 * v307;
      v88 = 0;
      while ( 1 )
      {
        v89 = v304;
        codexmate_lib::core::relay::codex_diagnostic::apply_orphan_thread_adoption_db::h7ebac638bded554f(
          v215,
          v304[v88 / 8 + 1],
          v304[v88 / 8 + 2],
          v247,
          v248,
          v44);
        if ( LODWORD(v215[0]) != 11 )
          break;
        v269 += v215[1];
        v90 = (signed __int64)v89[v88 / 8 + 2];
        if ( v90 < 0 )
        {
          v93 = 0;
LABEL_89:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v93, v90);
        }
        v91 = v89[v88 / 8 + 1];
        if ( v90 )
        {
          v92 = v89[v88 / 8 + 1];
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v215, v91);
          v93 = 1;
          v94 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v90, 1);
          if ( !v94 )
            goto LABEL_89;
          v91 = v92;
        }
        else
        {
          v94 = 1;
        }
        v95 = v94;
        memcpy((void *)v94, v91, v90);
        v96 = (__int64)v297;
        if ( v297 == v295 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v295);
        v97 = v296;
        v98 = 3 * v96;
        *(_QWORD *)(v296 + 8 * v98) = v90;
        *(_QWORD *)(v97 + 8 * v98 + 8) = v95;
        *(_QWORD *)(v97 + 8 * v98 + 16) = v90;
        v297 = (_QWORD *)(v96 + 1);
        v88 += 24LL;
        if ( v287.i64[0] == v88 )
          goto LABEL_84;
      }
      qmemcpy(v242, v215, sizeof(v242));
      codexmate_lib::core::relay::codex_diagnostic::rollback_orphan_thread_adoption::h649acad70dde1882(
        (unsigned int)v261,
        v247,
        v248,
        v296,
        (_DWORD)v297,
        v300,
        v301);
      *(_QWORD *)__dst = 0;
      *(_QWORD *)&__dst[8] = 1;
      *(_QWORD *)&__dst[16] = 0;
      *(_QWORD *)&v264[16] = 1610612768;
      *(_QWORD *)v264 = __dst;
      *(_QWORD *)&v264[8] = &off_101A20B70;
      v137 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e(
               v242,
               v264);
      v40 = v292.i64[0];
      if ( v137 )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10171ECD2, 55, &v267, &unk_101A20C38, &off_101A20BA0);
      v138 = *(_OWORD *)__dst;
      codexmate_lib::core::relay::codex_diagnostic::mark_orphan_thread_adoption_recovery::h4444b447762c6c63(
        v306,
        v303[0],
        &v293,
        &unk_10171E0EF,
        11,
        *(_QWORD *)&__dst[8],
        *(_QWORD *)&__dst[16]);
      if ( (_QWORD)v138 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v138 + 1), v138, 1);
      qmemcpy(v264, v242, 0x60u);
      codexmate_lib::core::relay::codex_diagnostic::with_orphan_adoption_rollback::hc3ae066c8791e283(__dst, v264, v261);
      qmemcpy(v289, __dst, 0x60u);
      v117 = v297;
      if ( !v297 )
        goto LABEL_145;
    }
    else
    {
LABEL_84:
      *(double *)si128.i64 = codexmate_lib::core::relay::codex_diagnostic::check_native_off_invalid_openai_thread_models::h2311c35d99df0f7f(
                               (__int64)v264,
                               v305,
                               v255);
      v99 = v303[0];
      if ( *(_QWORD *)&v264[40] == 2 && **(_WORD **)&v264[32] == 27503 )
      {
        codexmate_lib::core::relay::codex_diagnostic::mark_orphan_thread_adoption_recovery::h4444b447762c6c63(
          v306,
          v303[0],
          &v293,
          &unk_10171E0FA,
          9,
          0,
          v210);
        *(_QWORD *)&v242[0] = v245;
        *(_QWORD *)&v261[0] = v301;
        *(_QWORD *)__dst = v242;
        *(_QWORD *)&__dst[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        *(_QWORD *)&__dst[16] = &v269;
        *(_QWORD *)&__dst[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        *(_QWORD *)&__dst[32] = v261;
        *(_QWORD *)&__dst[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        *(_QWORD *)&__dst[48] = &v249;
        *(_QWORD *)&__dst[56] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v214, &unk_10186E87F, __dst);
        codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a(
          "relay_native_off_model_fallback",
          31,
          &unk_10171E0FA,
          9,
          v214);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("relay_native_off_model_fallback", 31);
        v120 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
        if ( !v120 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
        v121 = (_QWORD *)v120;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8);
        v122 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
        if ( !v122 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39);
        qmemcpy(v122, "native_off_invalid_openai_thread_models", 39);
        *v121 = 39;
        v121[1] = v122;
        v121[2] = 39;
        *(_QWORD *)&v242[0] = 1;
        *((_QWORD *)&v242[0] + 1) = v121;
        *(_QWORD *)&v242[1] = 1;
        *(_QWORD *)&v261[0] = 0;
        *((_QWORD *)&v261[0] + 1) = 8;
        *(_QWORD *)&v261[1] = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(39, 1);
        v123 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
        if ( !v123 )
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
        v124 = (_QWORD *)v123;
        *(_QWORD *)&v267 = v245;
        v215[0] = v301;
        *(_QWORD *)__dst = &v267;
        *(_QWORD *)&__dst[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        *(_QWORD *)&__dst[16] = &v249;
        *(_QWORD *)&__dst[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&__dst[32] = &v269;
        *(_QWORD *)&__dst[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        *(_QWORD *)&__dst[48] = v215;
        *(_QWORD *)&__dst[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v226, &unk_10186E8BD, __dst);
        v124[2] = v226[2];
        v125 = v226[0];
        v124[1] = v226[1];
        *v124 = v125;
        v126 = v242[0];
        *(_OWORD *)__dst = v242[0];
        v127 = *(_QWORD *)&v242[1];
        *(_QWORD *)&__dst[16] = *(_QWORD *)&v242[1];
        v128 = v261[0];
        *(_OWORD *)&__dst[24] = v261[0];
        *(_QWORD *)&__dst[40] = *(_QWORD *)&v261[1];
        v129 = v289;
        v289[6] = *(_QWORD *)&v261[1];
        *((_OWORD *)v129 + 2) = v128;
        v129[3] = v127;
        *(_OWORD *)(v129 + 1) = v126;
        v129[7] = 1;
        v129[8] = v124;
        v129[9] = 1;
        *v129 = 11;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticItem$GT$::hb3ee25522e6a4804(
          v264,
          *(double *)si128.i64);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h464bd091b805443b(&v295);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedThreadMetadataRolloutPatch$GT$$GT$::hcc7f235a4c8d81e2(&v299);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v293);
        if ( __s1 )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v306, __s1, 1);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$std..path..PathBuf$RP$$GT$$GT$::hd38728a3cc7d67fe(
          &v265,
          *(double *)si128.i64);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h464bd091b805443b(&v278);
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..OrphanThreadAdoptionPlan$GT$::h60392b50e0638eb5(&v243);
        return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..NativeThreadModelCatalog$GT$::hc4c095575c76323c(&v216);
      }
      codexmate_lib::core::relay::codex_diagnostic::rollback_orphan_thread_adoption::h649acad70dde1882(
        (unsigned int)v242,
        v247,
        v248,
        v296,
        (_DWORD)v297,
        v300,
        v301);
      v100 = *(_QWORD *)&v264[72];
      v40 = v292.i64[0];
      if ( __OFSUB__(-*(_QWORD *)&v264[72], 1) )
        v101 = 0;
      else
        v101 = *(_QWORD *)&v264[80];
      codexmate_lib::core::relay::codex_diagnostic::mark_orphan_thread_adoption_recovery::h4444b447762c6c63(
        v306,
        v99,
        &v293,
        &unk_10171E0EF,
        11,
        v101,
        *(_QWORD *)&v264[88]);
      if ( v100 == 0x8000000000000000LL )
      {
        *(_QWORD *)&__dst[16] = *(_QWORD *)&v264[64];
        *(_OWORD *)__dst = *(_OWORD *)&v264[48];
      }
      else
      {
        *(_QWORD *)__dst = v100;
        *(_QWORD *)&__dst[8] = *(_QWORD *)&v264[80];
        *(_QWORD *)&__dst[16] = *(_QWORD *)&v264[88];
        if ( *(_QWORD *)&v264[48] )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                   *(_QWORD *)&v264[56],
                                   *(_QWORD *)&v264[48],
                                   1);
      }
      *(_QWORD *)&v261[0] = __dst;
      *((_QWORD *)&v261[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v227, &unk_10186E923, v261);
      if ( *(_QWORD *)__dst )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[8], *(_QWORD *)__dst, 1);
      *(_QWORD *)&__dst[8] = v227;
      *(_OWORD *)&__dst[16] = v228;
      *(_QWORD *)__dst = 10;
      codexmate_lib::core::relay::codex_diagnostic::with_orphan_adoption_rollback::hc3ae066c8791e283(v261, __dst, v242);
      qmemcpy(v289, v261, 0x60u);
      if ( *(_QWORD *)v264 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v264[8], *(_QWORD *)v264, 1);
      if ( *(_QWORD *)&v264[24] )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(
                                 *(_QWORD *)&v264[32],
                                 *(_QWORD *)&v264[24],
                                 1);
      v117 = v297;
      if ( !v297 )
      {
LABEL_145:
        if ( v295 )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v296, 24LL * (_QWORD)v295, 8);
        goto LABEL_147;
      }
    }
    v118 = (_QWORD *)(v296 + 8);
    do
    {
      v119 = *(v118 - 1);
      if ( v119 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v118, v119, 1);
      v118 += 3;
      v117 = (_QWORD *)((char *)v117 - 1);
    }
    while ( v117 );
    goto LABEL_145;
  }
  v45 = v244;
  v46 = 344 * v245;
  while ( 1 )
  {
    codexmate_lib::core::relay::codex_thread_visibility::apply_thread_metadata_rollout_adoption::h787855d6601085d5(
      (unsigned int)__src,
      (_DWORD)v45,
      (unsigned int)"openai",
      6,
      (unsigned int)v45[37],
      (unsigned int)v45[38],
      (__int64)v45[40],
      (__int64)v45[41]);
    if ( !__OFSUB__(-__src[0], 1) )
      break;
LABEL_32:
    v45 += 43;
    v46 -= 344;
    if ( !v46 )
      goto LABEL_73;
  }
  if ( __src[0] != 0x8000000000000001LL )
  {
    v47 = v301;
    if ( v301 == v299 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb13c645b4676581f(&v299);
    memcpy((void *)(v300 + 144 * v47), __src, 0x90u);
    v301 = v47 + 1;
    goto LABEL_32;
  }
  qmemcpy(v242, &__src[1], sizeof(v242));
  codexmate_lib::core::relay::codex_diagnostic::rollback_orphan_thread_adoption::h649acad70dde1882(
    (unsigned int)v261,
    v247,
    v248,
    8,
    0,
    v300,
    v301);
  *(_QWORD *)__dst = 0;
  *(_QWORD *)&__dst[8] = 1;
  *(_QWORD *)&__dst[16] = 0;
  *(_QWORD *)&v264[16] = 1610612768;
  *(_QWORD *)v264 = __dst;
  *(_QWORD *)&v264[8] = &off_101A20B70;
  v102 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e(
           v242,
           v264);
  v40 = v292.i64[0];
  if ( v102 )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10171ECD2, 55, &v267, &unk_101A20C38, &off_101A20BA0);
  v103 = *(_OWORD *)__dst;
  codexmate_lib::core::relay::codex_diagnostic::mark_orphan_thread_adoption_recovery::h4444b447762c6c63(
    v306,
    v303[0],
    &v293,
    &unk_10171E0EF,
    11,
    *(_QWORD *)&__dst[8],
    *(_QWORD *)&__dst[16]);
  if ( (_QWORD)v103 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v103 + 1), v103, 1);
  qmemcpy(v264, v242, 0x60u);
  codexmate_lib::core::relay::codex_diagnostic::with_orphan_adoption_rollback::hc3ae066c8791e283(__dst, v264, v261);
  qmemcpy(v289, __dst, 0x60u);
LABEL_147:
  v139 = v300;
  for ( j = v301 + 1; j != 1; --j )
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedThreadMetadataRolloutPatch$GT$::h63ab4b8e28b44c7d(*(double *)si128.i64);
    v139 += 144;
  }
  if ( v299 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v300, 144 * v299, 8);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v293);
  v39 = v304;
  if ( __s1 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v306, __s1, 1);
LABEL_154:
  if ( v41 )
  {
    v141 = (_QWORD *)(v40 + 32);
    do
    {
      v142 = *(v141 - 4);
      if ( v142 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v141 - 3), v142, 1);
      v143 = *(v141 - 1);
      if ( v143 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v141, v143, 1);
      v141 += 6;
      --v41;
    }
    while ( v41 );
  }
  if ( (_QWORD)v265 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 48 * v265, 8);
  v144 = v307;
  if ( v307 )
  {
    v145 = v39 + 1;
    do
    {
      v146 = *(v145 - 1);
      if ( v146 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v145, v146, 1);
      v145 += 3;
      --v144;
    }
    while ( v144 );
  }
  if ( v278 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, 24 * v278, 8);
LABEL_170:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..OrphanThreadAdoptionPlan$GT$::h60392b50e0638eb5(&v243);
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..NativeThreadModelCatalog$GT$::hc4c095575c76323c(&v216);
}

/*
真实行为结论（基于完整反编译逐行核对，非摘要推断；⚠ 本函数含破坏性副作用）：

1. 入口早退（同 check 函数）：若 a3+316 标志位为真，直接返回 ok_item 成功诊断项
   （消息="native_off_invalid_openai_thread_models"，内嵌一段中文 UTF-8 常量，
   本轮解码出的其中一段为 "本项只修复可确认的..." 类提示，具体全文本轮未逐字节展开，
   只确认了该分支不做任何扫描/写入，是早退成功路径）。

2. 主路径：调用 resolve_native_thread_model_catalog 取当前 catalog，再调用
   collect_diagnostic_main_threads：
   - 若返回 Err：直接透传错误诊断项返回（LABEL_14 及后续清理），不做任何写入。
   - 若返回 Ok：用 RandomState + Map::fold 构建去重集合（与 check 函数同款去重手法），
     逐行调用 native_off_openai_model_needs_fallback(row, ctx1, catalog) 判定该行是否
     需要 fallback：
       a) 若命中且该行"某扩展字段"(v67[9]) 为哨兵值 0x8000000000000000：视为"model字段
          无效/为空"，提前汇总现有结果并返回（不崩溃，不写入）；
       b) 若命中且字段有效：把该行的 model 名字符串拷贝一份所有权，通过
          hashbrown::rustc_entry 插入一个 HashMap<String, u64>（键=model名，值=计数/索引），
          用于后续按 model 名分组去重候选修复目标。
   - 遍历完所有行后，若该 HashMap 为空（`v261[1]+1`为0）：直接返回成功诊断（无需修复）。
   - 否则对候选 model 名集合排序（driftsort_main 或 insert_tail，按规模选择排序算法），
     逐个处理每个候选 model：
       i.   对该 model 关联的路径调用 std::sys::fs::metadata 做文件系统存在性/属性检查；
            若检查失败，构造错误诊断消息（模板 unk_10186EAB4）并跳过该候选（不崩溃）。
       ii.  在另一个基于 hashbrown 的索引结构里查找该 model 对应的线程行索引，查找过程
            带 `core::panicking::panic_bounds_check` 越界检查——若上游数据结构内部不一致
            导致索引越界，这里会真实 panic（进程崩溃），而非静默错误处理；这是本函数体内
            确认存在的真实 panic 风险点（Rust 数组越界检查），非本次臆测。
       iii. 对同一 model 名下的多个候选行做二次 memcmp 一致性校验；不一致则生成
            "存在冲突/重复条目"类诊断消息（模板 unk_10186D9D8）并跳过该候选。
       iv.  校验通过后，先调用 is_valid_codex_reasoning_effort + 
            NativeThreadModelCatalog::supports_reasoning(catalog, 原model, 原reasoning)
            检查该行原本的 reasoning effort 是否被当前 catalog 支持；若不支持，
            【关键修正点】不会盲目回退——而是显式改用字面量 "medium" 再调用一次
            supports_reasoning(catalog, ..., "medium", 6) 做二次确认；
              - 若连 "medium" 都不被当前 catalog 支持：生成警告诊断（模板 unk_10186DA91，
                同时插值原 model 名与原 reasoning），跳过该候选，不写入、不崩溃；
              - 若 "medium" 被支持：才继续走写入分支。
       v.   写入分支：调用 prepare_thread_metadata_rollout(catalog, model, "medium", 6)
            准备一份"线程元数据 rollout 补丁"结构体（PreparedThreadMetadataRollout），
            随后用 with_orphan_adoption_rollback 包裹一个"try 写入 + 失败回滚"的事务：
              - 事务体内先调用 write_orphan_thread_adoption_recovery 写一条恢复日志/DB 前置
                标记，再调用 apply_orphan_thread_adoption_db（在一个内层循环里对该 model
                关联的全部线程 id 逐个应用）把该候选真正持久化到 DB/日志；
              - 循环内还调用 apply_thread_metadata_rollout_adoption(ctx, thread_id, "openai", ...)
                ——本次完整反编译**直接证实**该调用的 provider 参数字面量硬编码为 "openai"，
                即该"应用线程元数据 rollout"的写操作明确限定作用于 openai provider 的线程，
                与函数名 "native_off_*_openai_*" 语义完全吻合；
              - 若中途失败：调用 rollback_orphan_thread_adoption 回滚，再调用
                mark_orphan_thread_adoption_recovery 标记本次尝试的最终状态（成功或失败）
                到恢复记录里，供下次诊断/修复识别是否已处理过。
              - 事务体内还存在 `core::result::unwrap_failed`（.unwrap() panic）调用点
                （对应某个 Result 类型内部字段读取失败即 panic），是代码里真实存在的
                unwrap panic 风险点，非本次臆测。
       vi.  处理完全部候选后，汇总所有诊断消息（含"已修复N条"/"跳过N条"/"警告N条"等
            分支消息，具体计数拼接细节参见函数体 LABEL_147 之后的清理与汇总代码）返回。

3. ⚠ 破坏性副作用最终确认（完整反编译核实，非callee列表推断）：
   本函数在满足以下全部条件时会产生真实持久化写入：
     (a) 某线程行的 provider 精确等于 "openai"（大小写不敏感，来自 0005 号谓词）；
     (b) native_off 计数为 0 且 tag==6；
     (c) 该行 model 名命中候选集合的两级 HashSet 成员测试；
     (d) 目标 model 的元数据路径 fs::metadata 检查通过；
     (e) 与其它同名候选行做一致性校验通过；
     (f) 当前 NativeThreadModelCatalog 至少支持 "medium" 档位。
   全部满足后，会调用 apply_thread_metadata_rollout_adoption(..., "openai", ...) 写入线程
   元数据 rollout（本机线程可见性/reasoning 档位状态持久化），并调用
   apply_orphan_thread_adoption_db 写恢复日志/DB 条目；失败路径有显式回滚
   （rollback_orphan_thread_adoption）与恢复标记（mark_orphan_thread_adoption_recovery），
   属于"prepare→try apply（带回滚）→mark/write recovery"的事务性写入模式，非无保护的
   盲写。

诚实缺口：
- unk_10186EAF8 / unk_10186EAB4 / unk_10186D9D8 / unk_10186DA91 / unk_10186EB57 /
  unk_10186EA64 等多处 fmt::Arguments 分片表指针的具体字面量文本本轮未逐一展开
  （与 0006 号文件同类 gap，是编译器生成的格式化参数分片表，非扁平字符串）。
- 本文件为 include_addresses=false 路径下经 py_eval 分块拼接得到的 62443 字符版本，
  不含逐行 /*0xNNNN*/ 地址注释；若后续需要逐指令地址级别核对，需另行对
  include_addresses=true 的 81758 字符版本做同样的 py_eval 分块拼接（本轮未做，
  因当前的无地址版本已足以支撑完整行为核验，留作可选精修项）。
- 事务体内 `core::result::unwrap_failed` 具体对应哪个 Result 类型/哪个字段本轮未展开
  （只确认该 panic 调用点真实存在于代码路径中）。
*/
