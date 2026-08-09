// codexmate_lib::core::relay::codex_diagnostic::check_native_off_invalid_openai_thread_models::h2311c35d99df0f7f
// EA 0x100b34f30, size 3194B (0xc7a), basic_blocks 109, cyclomatic_complexity 45
// macOS, AiMaMi 1.2.6 — 完整反编译，无截断（红线20核验：decompile() code 字段完整长度
// 23298 字符，无 "[N chars total]" 截断标记；此前 0006-0007_TRUNCATED.md 把 573 字符处的
// analyze_function 预览误当截断依据，本次重新用 decompile() 直接获取真实完整函数体）
//
// 关键字符串常量已逐一用 get_bytes 解码确认（非猜测）：
//   0x10171E52B (64B) = "NativeOff 官方线程模型检查（路由启用中，跳过）"   —— 路由已启用时早退提示
//   0x10171E362 (34B) = "NativeOff 官方线程模型正常"                       —— 去重后无异常行时的提示
//   0x10171E384 (105B)= "官方模型目录暂未验证为当前 ChatGPT 版本；本项只修复可确认的中转模型残留。" —— 多个/其它情形（v89==0）
//   0x10171E3ED (54B) = "官方模型目录已验证为当前 ChatGPT 版本。"          —— 单个情形（v89!=0）
//   0x10171BFC0 (3B)  = "、"（中文顿号）                                   —— join 分隔符
//   0x10171E423 / 0x10186EBA6：fmt::Arguments 分片表指针（非纯字符串常量），
//     本轮未完整解出其字面量分片文本，诚实标注为未展开的 gap（非编造）。
//   collect_diagnostic_main_threads 返回 Err 分支（本函数入口早退分支）构建的诊断项：
//     name="native_off_invalid_openai_thread_models"(39B)，
//     key="warning"(7B，见 *v17=1852989815 / *(char*)(v17+3)=1735289198 解码)，
//     value="无法完整读取 NativeOff 官方线程模型"(47B，见 v19[0..4]+尾字节解码)。
//
// 【重要修正】此前 0006-0007_TRUNCATED.md 声称"本函数直接调用 native_off_openai_model_needs_fallback
// 二次判定每行"——完整反编译证实这是错误的：本函数体内完全没有出现 native_off_openai_model_needs_fallback
// 这个符号；该谓词只被 fix_native_off_invalid_openai_thread_models（写修复函数）调用，check
// （本函数）只做"收集线程行 -> resolve_native_thread_model_catalog -> RandomState+Map::fold+
// SpecFromIterNested 构建去重 HashSet -> sort+dedup -> 若非空则 join 拼接 -> 按数量单复数
// 选择模板串 -> fmt::Arguments 组装最终诊断消息"，不涉及 openai provider / native_off 计数的
// 谓词判断。是纯只读诊断扫描函数，不做任何持久化写入（无 handle/apply/write 系列调用）。
double __fastcall codexmate_lib::core::relay::codex_diagnostic::check_native_off_invalid_openai_thread_models::h2311c35d99df0f7f(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r12
  void *v15; // rax
  void *v16; // rbx
  _DWORD *v17; // rax
  _DWORD *v18; // r15
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  __int64 *v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 (__fastcall **v24)(); // r8
  __int64 (__fastcall *v25)(); // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(); // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 (__fastcall *v31)(); // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r12
  _QWORD *v36; // r12
  __int64 v37; // r13
  _QWORD *v38; // rdi
  __int64 v39; // rsi
  _QWORD *v40; // rbx
  __m128i si128; // xmm0
  void *v42; // rcx
  __int64 v43; // rdx
  void *v44; // rax
  void *v45; // r13
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 (__fastcall **v50)(); // rbx
  __int64 v52; // rbx
  const __m128i *v53; // r12
  const __m128i *v55; // r13
  int v56; // r14d
  __int64 v57; // rax
  __int64 v58; // rsi
  unsigned __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // rdi
  __int64 v62; // rcx
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // r12
  __int64 v65; // rax
  __int64 v66; // rbx
  int v67; // eax
  unsigned __int64 v68; // rcx
  __int64 v69; // rdi
  unsigned __int64 v70; // rsi
  const void *v71; // rax
  _QWORD *v72; // rbx
  const void *v73; // rsi
  int v74; // eax
  __int64 v76; // rbx
  const __m128i *v77; // r12
  const __m128i *v79; // r13
  int v80; // r14d
  __int64 v81; // rax
  __int64 v82; // rsi
  unsigned __int64 v83; // rax
  __int64 v84; // r15
  __int64 v85; // rdi
  _BYTE v87[96]; // [rsp+0h] [rbp-2C0h] BYREF
  __int64 v88; // [rsp+60h] [rbp-260h] BYREF
  char v89; // [rsp+A8h] [rbp-218h]
  _QWORD v90[12]; // [rsp+B0h] [rbp-210h] BYREF
  _QWORD v91[4]; // [rsp+110h] [rbp-1B0h] BYREF
  _QWORD v92[3]; // [rsp+130h] [rbp-190h] BYREF
  _QWORD v93[3]; // [rsp+148h] [rbp-178h] BYREF
  _QWORD v94[2]; // [rsp+160h] [rbp-160h] BYREF
  __int64 v95; // [rsp+170h] [rbp-150h] BYREF
  _QWORD v96[2]; // [rsp+178h] [rbp-148h] BYREF
  unsigned __int64 v97; // [rsp+188h] [rbp-138h]
  _QWORD v98[12]; // [rsp+190h] [rbp-130h] BYREF
  const __m128i *v99; // [rsp+1F0h] [rbp-D0h] BYREF
  __int64 (__fastcall **v100)(); // [rsp+1F8h] [rbp-C8h]
  __int64 v101; // [rsp+200h] [rbp-C0h]
  __int64 v102; // [rsp+208h] [rbp-B8h]
  __int64 v103; // [rsp+210h] [rbp-B0h]
  __int64 v104; // [rsp+218h] [rbp-A8h]
  __int64 v105; // [rsp+220h] [rbp-A0h]
  __int64 v106; // [rsp+228h] [rbp-98h]
  __int64 v107; // [rsp+230h] [rbp-90h]
  __int64 v108; // [rsp+238h] [rbp-88h] BYREF
  __int64 v109; // [rsp+240h] [rbp-80h]
  __int64 v110; // [rsp+248h] [rbp-78h]
  unsigned __int64 v111; // [rsp+250h] [rbp-70h]
  __int64 *v112; // [rsp+258h] [rbp-68h] BYREF
  __int64 v113; // [rsp+260h] [rbp-60h]
  __int64 v114; // [rsp+268h] [rbp-58h]
  __int64 v115; // [rsp+270h] [rbp-50h]
  unsigned __int64 v116; // [rsp+278h] [rbp-48h]
  __int64 (__fastcall **v117)(); // [rsp+280h] [rbp-40h]
  __int64 v118; // [rsp+288h] [rbp-38h]
  __int64 v119; // [rsp+290h] [rbp-30h]

  if ( *(_BYTE *)(a3 + 316) ) /*0x100b34f47*/
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::h7e1305a3921b6c8b( /*0x100b34f7d*/
      a1,
      &anon_99e3aac6bf594b8c6c3fde2543ef5152_548,
      39,
      &unk_10171E52B,
      64);
    return *(double *)si128.i64; /*0x100b34f7d*/
  }
  codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads::hf60a6da6c23d3e98(v98); /*0x100b34f8f*/
  if ( LODWORD(v98[0]) == 11 ) /*0x100b34f9b*/
  {
    v107 = v98[3]; /*0x100b34fa8*/
    v106 = v98[2]; /*0x100b34fbd*/
    v105 = v98[1]; /*0x100b34fc4*/
    codexmate_lib::core::relay::codex_catalog::resolve_native_thread_model_catalog::h024a89cb5bf29dd7(v87, a2); /*0x100b34fd8*/
    v5 = *(_QWORD *)(a3 + 8) + 232LL * *(_QWORD *)(a3 + 16); /*0x100b34fe9*/
    v90[0] = *(_QWORD *)(a3 + 8); /*0x100b34fec*/
    v90[1] = v5; /*0x100b34ff3*/
    v90[2] = 0; /*0x100b34ffa*/
    v90[7] = 0; /*0x100b35005*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100b35017*/
    v7 = v6; /*0x100b35019*/
    if ( *(_BYTE *)(v6 + 16) == 1 ) /*0x100b35020*/
    {
      v8 = *(_QWORD *)v6; /*0x100b35026*/
      v9 = *(_QWORD *)(v7 + 8); /*0x100b35029*/
    }
    else
    {
      v8 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100b3584e*/
      *(_QWORD *)v7 = v8; /*0x100b35853*/
      *(_QWORD *)(v7 + 8) = v9; /*0x100b35856*/
      *(_BYTE *)(v7 + 16) = 1; /*0x100b3585a*/
    }
    *(_QWORD *)v7 = v8 + 1; /*0x100b35031*/
    memset(&v98[1], 0, 24); /*0x100b35057*/
    v98[0] = anon_99e3aac6bf594b8c6c3fde2543ef5152_12; /*0x100b35065*/
    v98[4] = v8; /*0x100b3506c*/
    v98[5] = v9; /*0x100b35073*/
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h36bfc5d11fe7f895( /*0x100b35088*/
      v90,
      v98);
    v104 = v98[5]; /*0x100b35094*/
    v103 = v98[4]; /*0x100b350a2*/
    v102 = v98[3]; /*0x100b350b0*/
    v101 = v98[2]; /*0x100b350be*/
    v100 = (__int64 (__fastcall **)())v98[1]; /*0x100b350d3*/
    v99 = (const __m128i *)v98[0]; /*0x100b350da*/
    v10 = v107; /*0x100b350e8*/
    v115 = v106; /*0x100b350f9*/
    v91[0] = v106; /*0x100b350fd*/
    v91[1] = v106 + 176 * v107; /*0x100b35104*/
    v91[2] = &v99; /*0x100b35112*/
    v91[3] = v87; /*0x100b35119*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h5a1622be1086ebdb( /*0x100b3512e*/
      v96,
      v91);
    v117 = (__int64 (__fastcall **)())v96[1]; /*0x100b3513a*/
    v12 = v97; /*0x100b3513e*/
    v13 = 16 * v97; /*0x100b35148*/
    if ( 16 * v97 > 0x7FFFFFFFFFFFFFF8LL ) /*0x100b3515d*/
    {
      v14 = 0; /*0x100b35163*/
      goto LABEL_8; /*0x100b35163*/
    }
    if ( v13 ) /*0x100b3535a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v96, v91); /*0x100b3535c*/
      v14 = 8; /*0x100b35361*/
      v118 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 8); /*0x100b35374*/
      if ( !v118 ) /*0x100b3537b*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v13); /*0x100b35166*/
      v22 = v12; /*0x100b35381*/
      if ( !v12 ) /*0x100b35387*/
        goto LABEL_77; /*0x100b35387*/
    }
    else
    {
      v118 = 8; /*0x100b35393*/
      v22 = 0; /*0x100b35397*/
      if ( !v97 ) /*0x100b3539c*/
      {
LABEL_77:
        codexmate_lib::core::relay::codex_diagnostic::ok_item::h7e1305a3921b6c8b( /*0x100b3599e*/
          a1,
          &anon_99e3aac6bf594b8c6c3fde2543ef5152_548,
          39,
          &unk_10171E362,
          34);
        if ( v22 ) /*0x100b359c2*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, 16 * v22, 8); /*0x100b359d4*/
        if ( v96[0] ) /*0x100b359e7*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117, 8LL * v96[0], 8); /*0x100b359f2*/
        HIDWORD(_RAX) = HIDWORD(v100); /*0x100b359f7*/
        if ( v100 ) /*0x100b35a01*/
        {
          v117 = v100; /*0x100b35a07*/
          v76 = v102; /*0x100b35a0b*/
          if ( v102 ) /*0x100b35a15*/
          {
            v77 = v99; /*0x100b35a1b*/
            si128 = _mm_load_si128(v99); /*0x100b35a22*/
            _R14D = ~_mm_movemask_epi8(si128); /*0x100b35a2d*/
            v79 = v99 + 1; /*0x100b35a30*/
            do /*0x100b35a50*/
            {
              if ( !(_WORD)_R14D ) /*0x100b35a56*/
              {
                do /*0x100b35a7d*/
                {
                  si128 = _mm_load_si128(v79); /*0x100b35a60*/
                  v80 = _mm_movemask_epi8(si128); /*0x100b35a66*/
                  v77 -= 24; /*0x100b35a6b*/
                  ++v79; /*0x100b35a72*/
                }
                while ( v80 == 0xFFFF ); /*0x100b35a7d*/
                _R14D = ~v80; /*0x100b35a7f*/
              }
              __asm { tzcnt eax, r14d } /*0x100b35a82*/
              v81 = -3 * _RAX; /*0x100b35a8a*/
              v82 = *((_QWORD *)&v77[-1] + v81 - 1); /*0x100b35a8e*/
              if ( v82 ) /*0x100b35a96*/
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77[-1].i64[v81], v82, 1); /*0x100b35aa5*/
              --v76; /*0x100b35a40*/
              _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100b35a47*/
              _R14D &= _R14D - 1; /*0x100b35a4a*/
            }
            while ( v76 ); /*0x100b35a50*/
          }
          v83 = (24LL * (_QWORD)v117 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b35abc*/
          if ( (__int64 (__fastcall **)())((char *)v117 + v83) != (__int64 (__fastcall **)())-17LL ) /*0x100b35ac7*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x100b35ad8*/
                                     (char *)v99 - v83,
                                     (char *)v117 + v83 + 17,
                                     16);
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..NativeThreadModelCatalog$GT$::hc4c095575c76323c(v87); /*0x100b35ae4*/
        v84 = v10 + 1; /*0x100b35ae9*/
        v85 = v115; /*0x100b35aec*/
        while ( v84 != 1 ) /*0x100b35af4*/
        {
          --v84; /*0x100b35afd*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::hfb5f956a6abad8d3(); /*0x100b35b00*/
          v85 += 176; /*0x100b35b05*/
        }
LABEL_95:
        if ( v105 ) /*0x100b35b14*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, 176 * v105, 8); /*0x100b35b26*/
        return *(double *)si128.i64; /*0x100b35b26*/
      }
    }
    if ( v12 == 1 ) /*0x100b353a6*/
    {
      v23 = 0; /*0x100b353a8*/
    }
    else
    {
      v11 = (_QWORD *)(v118 + 24); /*0x100b353b7*/
      v23 = 0; /*0x100b353bb*/
      v24 = v117; /*0x100b353bd*/
      do /*0x100b35403*/
      {
        v25 = v24[v23]; /*0x100b353d0*/
        v26 = *((_QWORD *)v25 + 4); /*0x100b353d4*/
        v27 = *((_QWORD *)v25 + 5); /*0x100b353d8*/
        *(v11 - 3) = v26; /*0x100b353dc*/
        *(v11 - 2) = v27; /*0x100b353e0*/
        v28 = v24[v23 + 1]; /*0x100b353e4*/
        v29 = *((_QWORD *)v28 + 4); /*0x100b353e9*/
        v30 = *((_QWORD *)v28 + 5); /*0x100b353ed*/
        *(v11 - 1) = v29; /*0x100b353f1*/
        *v11 = v30; /*0x100b353f5*/
        v23 += 2; /*0x100b353f8*/
        v11 += 4; /*0x100b353fc*/
      }
      while ( (v12 & 0xFFFFFFFFFFFFFFFELL) != v23 ); /*0x100b35403*/
    }
    if ( (v12 & 1) != 0 ) /*0x100b35409*/
    {
      v31 = v117[v23]; /*0x100b3540f*/
      v11 = *((_QWORD **)v31 + 4); /*0x100b35413*/
      v32 = *((_QWORD *)v31 + 5); /*0x100b35417*/
      v33 = 16 * v23; /*0x100b3541b*/
      v34 = v118; /*0x100b3541f*/
      *(_QWORD *)(v118 + v33) = v11; /*0x100b35423*/
      *(_QWORD *)(v34 + v33 + 8) = v32; /*0x100b35427*/
    }
    v35 = 1; /*0x100b3542c*/
    v116 = v22; /*0x100b35436*/
    if ( v12 == 1 ) /*0x100b3543a*/
      goto LABEL_26; /*0x100b3543a*/
    if ( v12 >= 0x15 ) /*0x100b35892*/
      core::slice::sort::unstable::ipnsort::hd3cbac9fbe0e4cf3(v118, v12, &v108); /*0x100b35ba0*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::hb781ec7cd5b87124(v118, v12, 1, &v108); /*0x100b358ab*/
    v62 = v118 + 32; /*0x100b358b4*/
    v63 = 1 - v12; /*0x100b358bd*/
    v64 = 2; /*0x100b358c0*/
    v119 = 1 - v12; /*0x100b358c6*/
    while ( 1 ) /*0x100b358e2*/
    {
      v11 = *(_QWORD **)(v62 - 8); /*0x100b358e2*/
      if ( v11 == *(_QWORD **)(v62 - 24) ) /*0x100b358ea*/
      {
        v66 = v62; /*0x100b358f0*/
        v67 = memcmp(*(const void **)(v62 - 16), *(const void **)(v62 - 32), (size_t)v11); /*0x100b358f7*/
        v63 = v119; /*0x100b358fc*/
        v62 = v66; /*0x100b35900*/
        if ( !v67 ) /*0x100b35905*/
          break; /*0x100b35905*/
      }
      v62 += 16; /*0x100b358cc*/
      v65 = v63 + v64++ + 1; /*0x100b358d0*/
      if ( v65 == 2 ) /*0x100b358dc*/
      {
        v35 = v12; /*0x100b35979*/
        goto LABEL_26; /*0x100b35980*/
      }
    }
    v68 = v12 - v64; /*0x100b3590f*/
    if ( v12 <= v64 ) /*0x100b35912*/
    {
      v35 = v64 - 1; /*0x100b35989*/
    }
    else
    {
      v35 = v64 - 1; /*0x100b35914*/
      v69 = v66; /*0x100b35917*/
      v70 = v68; /*0x100b3591a*/
      do /*0x100b35937*/
      {
        v72 = (_QWORD *)(v118 + 16 * v35); /*0x100b35944*/
        v11 = *(_QWORD **)(v69 + 8); /*0x100b35948*/
        if ( v11 != (_QWORD *)*(v72 - 1) /*0x100b35975*/
          || (v111 = v70,
              v73 = (const void *)*(v72 - 2),
              v119 = v69,
              v74 = memcmp(*(const void **)v69, v73, (size_t)v11),
              v70 = v111,
              v69 = v119,
              v74) )
        {
          v71 = *(const void **)v69; /*0x100b3591f*/
          v72[1] = *(_QWORD *)(v69 + 8); /*0x100b35926*/
          *v72 = v71; /*0x100b3592a*/
          ++v35; /*0x100b3592d*/
        }
        v69 += 16; /*0x100b35930*/
        --v70; /*0x100b35934*/
      }
      while ( v70 ); /*0x100b35937*/
      v22 = v116; /*0x100b35994*/
      if ( !v35 ) /*0x100b35998*/
        goto LABEL_77; /*0x100b35998*/
    }
LABEL_26:
    v119 = v35; /*0x100b35440*/
    v93[0] = v117; /*0x100b3544c*/
    v93[1] = &v117[v12]; /*0x100b35453*/
    v93[2] = 5; /*0x100b3545a*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4639a87e4c695197( /*0x100b35470*/
      &v112,
      v93,
      v11);
    v36 = (_QWORD *)v113; /*0x100b35475*/
    v37 = v114; /*0x100b35479*/
    v38 = v98; /*0x100b35484*/
    v39 = v113; /*0x100b35491*/
    alloc::str::join_generic_copy::h02d08564f831751b(v98, v113, v114, &unk_10171BFC0, 3); /*0x100b35497*/
    v110 = v98[2]; /*0x100b354a3*/
    v109 = v98[1]; /*0x100b354b5*/
    v108 = v98[0]; /*0x100b354b9*/
    if ( v37 ) /*0x100b354c3*/
    {
      v40 = v36 + 1; /*0x100b354c5*/
      do /*0x100b354d7*/
      {
        v39 = *(v40 - 1); /*0x100b354d9*/
        if ( v39 ) /*0x100b354e0*/
        {
          v38 = (_QWORD *)*v40; /*0x100b354e2*/
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v40, v39, 1); /*0x100b354ea*/
        }
        v40 += 3; /*0x100b354d0*/
        --v37; /*0x100b354d4*/
      }
      while ( v37 ); /*0x100b354d7*/
    }
    if ( v112 ) /*0x100b354f8*/
    {
      v39 = 24LL * (_QWORD)v112; /*0x100b354fe*/
      v38 = v36; /*0x100b35507*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24LL * (_QWORD)v112, 8); /*0x100b3550a*/
    }
    v42 = &unk_10171E384; /*0x100b35516*/
    if ( v89 ) /*0x100b35524*/
      v42 = &unk_10171E3ED; /*0x100b35524*/
    v43 = 105; /*0x100b3552d*/
    if ( v89 ) /*0x100b35532*/
      v43 = 54; /*0x100b35532*/
    v94[0] = v42; /*0x100b35536*/
    v94[1] = v43; /*0x100b3553d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v39); /*0x100b35544*/
    v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x100b35553*/
    if ( !v44 ) /*0x100b3555b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39); /*0x100b35b7a*/
    v45 = v44; /*0x100b35561*/
    qmemcpy(v44, "native_off_invalid_openai_thread_models", 39); /*0x100b355a6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(39, 1); /*0x100b355aa*/
    v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100b355b9*/
    if ( !v46 ) /*0x100b355c1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100b35b8b*/
    v47 = v46; /*0x100b355c7*/
    *(_BYTE *)(v46 + 4) = 114; /*0x100b355ca*/
    *(_DWORD *)v46 = 1869771365; /*0x100b355ce*/
    v95 = v119; /*0x100b355d8*/
    v112 = &v95; /*0x100b355e6*/
    v113 = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100b355f1*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_10186EBA6, &v112); /*0x100b35607*/
    v119 = v98[0]; /*0x100b35613*/
    v111 = v98[1]; /*0x100b3561e*/
    v48 = v98[2]; /*0x100b35622*/
    v98[0] = v94; /*0x100b35630*/
    v98[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943; /*0x100b3563e*/
    v98[2] = &v108; /*0x100b3564c*/
    v98[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100b3565a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v92, &unk_10171E423, v98); /*0x100b35676*/
    *(_QWORD *)(a1 + 88) = v92[2]; /*0x100b35682*/
    v49 = v92[0]; /*0x100b35686*/
    *(_QWORD *)(a1 + 80) = v92[1]; /*0x100b35694*/
    *(_QWORD *)(a1 + 72) = v49; /*0x100b35698*/
    *(_QWORD *)a1 = 39; /*0x100b3569c*/
    *(_QWORD *)(a1 + 8) = v45; /*0x100b356a3*/
    *(_QWORD *)(a1 + 16) = 39; /*0x100b356a7*/
    *(_QWORD *)(a1 + 24) = 5; /*0x100b356af*/
    *(_QWORD *)(a1 + 32) = v47; /*0x100b356b7*/
    *(_QWORD *)(a1 + 40) = 5; /*0x100b356bb*/
    *(_QWORD *)(a1 + 48) = v119; /*0x100b356c7*/
    *(_QWORD *)(a1 + 56) = v111; /*0x100b356cf*/
    *(_QWORD *)(a1 + 64) = v48; /*0x100b356d3*/
    *(_BYTE *)(a1 + 96) = 1; /*0x100b356d7*/
    if ( v108 ) /*0x100b356e6*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v108, 1); /*0x100b356f1*/
    v50 = v117; /*0x100b356fd*/
    if ( v116 ) /*0x100b35701*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, 16 * v116, 8); /*0x100b35710*/
    if ( v96[0] ) /*0x100b3571f*/
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, 8LL * v96[0], 8); /*0x100b3572d*/
    HIDWORD(_RAX) = HIDWORD(v100); /*0x100b35732*/
    if ( v100 ) /*0x100b3573c*/
    {
      v117 = v100; /*0x100b35742*/
      v52 = v102; /*0x100b35746*/
      if ( v102 ) /*0x100b35750*/
      {
        v53 = v99; /*0x100b35756*/
        si128 = _mm_load_si128(v99); /*0x100b3575d*/
        _R14D = ~_mm_movemask_epi8(si128); /*0x100b35768*/
        v55 = v99 + 1; /*0x100b3576b*/
        do /*0x100b35790*/
        {
          if ( !(_WORD)_R14D ) /*0x100b35796*/
          {
            do /*0x100b357bd*/
            {
              si128 = _mm_load_si128(v55); /*0x100b357a0*/
              v56 = _mm_movemask_epi8(si128); /*0x100b357a6*/
              v53 -= 24; /*0x100b357ab*/
              ++v55; /*0x100b357b2*/
            }
            while ( v56 == 0xFFFF ); /*0x100b357bd*/
            _R14D = ~v56; /*0x100b357bf*/
          }
          __asm { tzcnt eax, r14d } /*0x100b357c2*/
          v57 = -3 * _RAX; /*0x100b357ca*/
          v58 = *((_QWORD *)&v53[-1] + v57 - 1); /*0x100b357ce*/
          if ( v58 ) /*0x100b357d6*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[-1].i64[v57], v58, 1); /*0x100b357e5*/
          --v52; /*0x100b35780*/
          _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100b35787*/
          _R14D &= _R14D - 1; /*0x100b3578a*/
        }
        while ( v52 ); /*0x100b35790*/
      }
      v59 = (24LL * (_QWORD)v117 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b357fc*/
      if ( (__int64 (__fastcall **)())((char *)v117 + v59) != (__int64 (__fastcall **)())-17LL ) /*0x100b35807*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x100b35818*/
                                 (char *)v99 - v59,
                                 (char *)v117 + v59 + 17,
                                 16);
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..NativeThreadModelCatalog$GT$::hc4c095575c76323c(v87); /*0x100b35824*/
    v60 = v10 + 1; /*0x100b35829*/
    v61 = v115; /*0x100b3582c*/
    while ( v60 != 1 ) /*0x100b35834*/
    {
      --v60; /*0x100b35841*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_diagnostic..DiagnosticMainThreadRow$GT$::hfb5f956a6abad8d3(); /*0x100b35844*/
      v61 += 176; /*0x100b35849*/
    }
    goto LABEL_95; /*0x100b35834*/
  }
  qmemcpy(v87, v98, sizeof(v87)); /*0x100b35189*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v88, &v99); /*0x100b3518c*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x100b3519b*/
  if ( !v15 ) /*0x100b351a3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39); /*0x100b35b47*/
  v16 = v15; /*0x100b351a9*/
  qmemcpy(v15, "native_off_invalid_openai_thread_models", 39); /*0x100b351ee*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(39, 1); /*0x100b351f1*/
  v17 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100b35200*/
  if ( !v17 ) /*0x100b35208*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100b35b58*/
  v18 = v17; /*0x100b3520e*/
  *(_DWORD *)((char *)v17 + 3) = 1735289198; /*0x100b35211*/
  *v17 = 1852989815; /*0x100b35218*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100b3521e*/
  v19 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x100b3522d*/
  if ( !v19 ) /*0x100b35235*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47); /*0x100b35b69*/
  v20 = v19; /*0x100b3523b*/
  *(_QWORD *)((char *)v19 + 39) = 0x8B9EE5A1A8E68BA8LL; /*0x100b35248*/
  v19[4] = 0xA8E7BFBAE7B996E6LL; /*0x100b35257*/
  v19[3] = 0x98AEE52066664F65LL; /*0x100b35266*/
  v19[2] = 0x766974614E20968FLL; /*0x100b35275*/
  v19[1] = 0xE5BBAFE8B495E68CLL; /*0x100b35284*/
  *v19 = 0xAEE595B3E6A097E6LL; /*0x100b35293*/
  v112 = nullptr; /*0x100b35297*/
  v113 = 1; /*0x100b3529f*/
  v114 = 0; /*0x100b352a7*/
  v101 = 1610612768; /*0x100b352af*/
  v99 = (const __m128i *)&v112; /*0x100b352be*/
  v100 = &off_101A20B70; /*0x100b352cc*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e( /*0x100b352e1*/
                          v87,
                          &v99) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10171ECD2, 55, &v108, &unk_101A20C38, &off_101A20BA0); /*0x100b35884*/
  *(_QWORD *)(a1 + 88) = v114; /*0x100b352f2*/
  v21 = v112; /*0x100b352f6*/
  *(_QWORD *)(a1 + 80) = v113; /*0x100b352fe*/
  *(_QWORD *)(a1 + 72) = v21; /*0x100b35302*/
  *(_QWORD *)a1 = 39; /*0x100b35306*/
  *(_QWORD *)(a1 + 8) = v16; /*0x100b3530d*/
  *(_QWORD *)(a1 + 16) = 39; /*0x100b35311*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100b35319*/
  *(_QWORD *)(a1 + 32) = v18; /*0x100b35321*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100b35325*/
  *(_QWORD *)(a1 + 48) = 47; /*0x100b3532d*/
  *(_QWORD *)(a1 + 56) = v20; /*0x100b35335*/
  *(_QWORD *)(a1 + 64) = 47; /*0x100b35339*/
  *(_BYTE *)(a1 + 96) = 0; /*0x100b35341*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v98); /*0x100b3534d*/
  return *(double *)si128.i64; /*0x100b34f6c*/
}
/*
真实行为结论（基于完整反编译逐行核对 + 字符串常量解码，非摘要推断）：

1. 入口早退：若 a3+316 处标志位为真（"路由启用中"，具体触发条件本轮未反查调用方语义），
   直接返回 ok_item(诊断项="native_off_invalid_openai_thread_models", 消息="NativeOff 官方
   线程模型检查（路由启用中，跳过）")，不做任何扫描。

2. 主路径：调用 collect_diagnostic_main_threads 收集全部诊断主线程行。
   - 若返回 Err（LODWORD(v98[0]) != 11）：构建错误诊断项，key="warning"，
     value="无法完整读取 NativeOff 官方线程模型"，直接返回，不做后续扫描。
   - 若返回 Ok：
     a) 调用 resolve_native_thread_model_catalog 取得当前 NativeThreadModelCatalog；
     b) 用 RandomState + Iterator::Map::fold + Vec::from_iter(SpecFromIterNested) 构建一个
        去重集合（对线程行做 hash + 排序 ipnsort/insertion_sort + memcmp 相邻去重）；
     c) 若去重后集合为空：返回 ok_item(消息="NativeOff 官方线程模型正常")；
     d) 若非空：用 "、"(U+3001) 作为分隔符 join 拼接去重后的行标识，按数量单/复数分支
        选择模板（v89 标志区分单个 vs 多个）："官方模型目录已验证为当前 ChatGPT 版本。"
        （单个）或 "官方模型目录暂未验证为当前 ChatGPT 版本；本项只修复可确认的中转模型
        残留。"（多个/其它），再通过 fmt::Arguments 组装成最终诊断消息（含数量与拼接内容，
        具体格式字符串分片本轮未完整展开，见文件头 gap 声明）。

3. 【与旧版本证据的差异修正】本函数完全不调用 native_off_openai_model_needs_fallback，
   也不做"对每行判断是否需要 fallback"的逻辑——那是 fix_native_off_invalid_openai_thread_models
   （写修复函数）的职责。check 函数纯粹是"收集 + 去重 + 报告数量/名单"的只读诊断，语义上更像
   "官方模型目录版本核验"而非"逐行 openai fallback 判定"。旧证据文件里"遍历所有行调用
   native_off_openai_model_needs_fallback"的结论已被本次完整反编译证伪并删除。

诚实缺口：
- unk_10171E423 / unk_10186EBA6 两处 fmt::Arguments 分片表指针的具体字面量文本本轮未展开
  （这两处是编译器生成的格式化参数表，不是扁平字符串，需要额外按 fmt::rt::Argument 结构
  逐分片提取，超出本轮时间预算）。
- a3+316 标志位的语义来源（哪个上层调用设置了"路由启用中"）本轮未向上追溯调用方。
*/
