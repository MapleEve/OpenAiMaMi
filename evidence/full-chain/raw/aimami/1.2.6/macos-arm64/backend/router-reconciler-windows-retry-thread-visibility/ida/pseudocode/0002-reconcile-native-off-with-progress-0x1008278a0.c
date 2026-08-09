// codexmate_lib::core::relay::router_reconciler::reconcile_native_off_with_progress::h4d7d689ebda9e6fc
// addr=0x1008278a0 size=0x1d25 (7461 bytes) module=AiMaMi (mac, symbolized)
// macOS, AiMaMi 1.2.6 —— NativeOff（原生代理关闭）模式下的路由协调（router reconcile）主流程。
//
// 【恢复方法说明（红线20 DECOMPILE_TRUNCATION_GUARD 突破记录）】
//   本函数此前用 decompile() 单次调用返回被 IDA MCP 截断（"...[60099 chars total]"，含地址注释版本），
//   已确认为 MCP 传输层/服务端预览截断，非 Hex-Rays 反编译能力上限（basic_blocks 确认 139 个基本块，
//   地址范围 0x1008278a0-0x1008295c5，与 func_query 报告 size=0x1d25 完全吻合，说明反编译本身已成功，
//   只是结果字符串在返回给客户端前被截断）。
//   突破法（参照同批 item4 fix_native_off_invalid_openai_thread_models 的成功经验）：
//     1. 用 py_eval 在 IDA 进程内直接执行 `ida_hexrays.decompile(0x1008278a0)` 拿到 Hex-Rays 生成的
//        Python 字符串对象 `str(cfunc)`（不含逐指令地址前缀），测得总长度 49540 字符。
//     2. 首次尝试把该 49540 字符整体作为 py_eval 的 result 返回，仍被 IDA MCP 工具截断到约 2500
//        字符预览 + "...[49540 chars total]" 标记，但这次响应额外带了服务端下载端点
//        （downloadUrl: http://192.168.110.95:13337/output/<uuid>.json，_meta.ida_mcp.output_truncated=true），
//        这是比"手工切片 5×15000 字符再本地拼接"更直接的绕过通道。
//     3. 用 curl 直接 GET 该下载端点，一次性拿到完整 JSON，其中 result 字段长度精确等于 49540
//        （与步骤1直接测得的 len(str(cfunc)) 完全一致，互相印证非伪造/非截断）。
//     4. 落盘前二次核验：花括号计数 46 open / 46 close 配平；末尾以 "return v187;\n}\n" 正常收尾
//        （非省略号/非嵌套截断标记）；字符串内不含任何 "chars total" / "TRUNCATED" 残留标记。
//   结论：本文件即该完整拼接结果的落盘版本，49540 字符伪代码为本函数当前可获得的完整反编译版本
//   （无逐指令地址前缀；如需地址级精修需用 include_addresses=true 版本再走同法核验，留作后续 gap）。
//
// 【函数职责（人话结论）】
//   这是 AiMaMi 在"NativeOff"（原生代理关闭，即中转走本地直连而非二级代理）模式下，路由状态协调器
//   的核心执行体：校验当前是否处于可安全协调的"quiet window"（安静期，无外部 Codex 写者在活动）、
//   校验/协调基础路由配置（reconcile_inner）、必要时迁移或清理旧版 auth 残留状态
//   （router_unlock_auth::migrate_legacy_auth_state / cleanup）、按需从备份恢复配置
//   （config_takeover::backup_exists / restore）、恢复/协调受影响线程的可见性
//   （codex_thread_visibility::restore_no_account_model_threads / reconcile_threads_with_progress）、
//   检查并修复项目状态残留问题（codex_project_state::inspect / stability_issue / repair_if_needed），
//   并把每一阶段的计时（record_timing）、警告（append_thread_reconcile_warnings）和错误
//   （CoreError 系列）汇总写回调用方传入的结果结构（a1/v187），供上层展示协调进度与失败原因。
//   该函数与同目录 0001-reconcile-router-on 共享同一常量池条目（阶段名/错误提示文案完全一致），
//   说明 native-off 路径和 router-on 路径复用了同一组阶段拆分与错误文案，只是触发条件与部分
//   子步骤（如本函数特有的 collect/reject external codex writers 早退校验）不同。
//
// 已确认的调用点（来自 xref refs 列表，与函数体内实际调用完全对应，交叉验证一致）：
//   __RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2
//   __RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc / __rust_dealloc
//   alloc::alloc::handle_alloc_error::h450e44845847d219
//   alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f / RawVec::grow_one::hbfe65ab6de98a449
//   core::fmt::Display for &T (hb3d2dce6d5e95943)
//   alloc::fmt::format::format_inner::h3c16c74008a310d4
//   codexmate_lib::platform::process::collect_external_codex_writers::h3be8251710adafef
//   codexmate_lib::platform::process::reject_external_codex_writers::h1eb039688026abfd
//   alloc::vec::in_place_collect::from_iter_in_place::h73f6946e3acb007f
//   codexmate_lib::core::relay::codex_config_reconciler::reconcile_inner::ha48d63df54fced37
//   codexmate_lib::core::relay::router_unlock_auth::migrate_legacy_auth_state::hdd39103f009134c7
//   codexmate_lib::core::relay::router_unlock_auth::has_residue::ha27e95189af2cf67
//   codexmate_lib::core::relay::router_unlock_auth::cleanup::h0a5d26dc3478dacb
//   codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302
//   codexmate_lib::core::relay::config_takeover::backup_exists::h95a1293b93a4f6dd
//   codexmate_lib::core::relay::config_takeover::restore::h3a2e456ac0847c21
//   codexmate_lib::core::relay::codex_catalog::resolve_native_default_model::h23eacd24efb3a6a8
//   codexmate_lib::core::relay::codex_thread_visibility::restore_no_account_model_threads::h7e65e217bb3ed9be
//   codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads_with_progress::hedb8602cf4909d61
//   codexmate_lib::core::relay::router_reconciler::describe_thread_reconcile::h9a788c47605ee6a1
//   codexmate_lib::core::relay::router_reconciler::append_thread_reconcile_warnings::habe6076c14f87082
//   codexmate_lib::core::relay::codex_project_state::inspect::hcb684185c418e8f5
//   codexmate_lib::core::relay::codex_project_state::stability_issue::h829c06402e62b9be
//   codexmate_lib::core::relay::codex_project_state::repair_if_needed::hd64c5cca3a8ebccf
//   codexmate_lib::core::codex_config::update_text::h9073855187835857
//   codexmate_lib::platform::paths::CodexPaths::ensure_directories::h11ee5c38df4ac403
//   std::time::Instant::now / elapsed (计时打点，多处 record_timing 配对)
//   字符串常量 "project_statewriting_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restoreauth_commit"
//     （与 reconcile_router_on 共享同一常量池条目，说明 native-off 路径复用了同一组阶段名/错误提示文案）

__m128i *__fastcall codexmate_lib::core::relay::router_reconciler::reconcile_native_off_with_progress::h4d7d689ebda9e6fc(
        __m128i *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        __m128i *a11,
        __int64 a12,
        unsigned __int64 a13,
        __int64 a14)
{
  __int64 v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __m128i *v21; // rdi
  int v22; // edx
  _QWORD *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  _QWORD *v27; // rax
  _QWORD *v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r14
  _OWORD *v33; // rdi
  __int64 v34; // r13
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rsi
  _QWORD *v38; // rax
  _QWORD *v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __m128i *v43; // rax
  __m128i *v44; // r14
  __m128i *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  void *v49; // rax
  void *v50; // r14
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __m128i v55; // kr00_16
  __int64 v56; // rsi
  __int64 v57; // rdi
  char *v58; // r8
  void *v59; // rax
  __int64 v60; // r14
  __int64 *v61; // rax
  __int64 v62; // rbx
  _QWORD *v63; // r14
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rsi
  void *v67; // rax
  void *v68; // r14
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rsi
  _QWORD *v73; // rax
  _QWORD *v74; // r14
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // edx
  __int64 v80; // r12
  int v81; // edx
  int v82; // r13d
  _QWORD *v83; // rsi
  __int64 v84; // rbx
  char v85; // r15
  _OWORD *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // r14
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rcx
  char *v92; // rdx
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // r12
  int v98; // edx
  int v99; // r13d
  __m128i *v100; // rsi
  __int64 v101; // rbx
  __int64 v102; // r14
  __int64 v103; // r15
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // r13
  int v112; // edx
  int v113; // r12d
  __int64 v114; // rbx
  char *v115; // rax
  _QWORD *v116; // r14
  __int64 v117; // rsi
  __int64 v118; // r12
  int v119; // edx
  int v120; // r15d
  __int64 v121; // r11
  __int64 v122; // r14
  __int64 v123; // r13
  __int64 v124; // rax
  __int64 v125; // r12
  int v126; // edx
  int v127; // r15d
  __int64 v128; // rax
  __m128i v129; // kr30_16
  __int64 v130; // rsi
  char *v131; // r9
  __int64 *v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rbx
  _QWORD *v135; // r14
  __int64 v136; // rsi
  _QWORD v138[3]; // [rsp+0h] [rbp-600h] BYREF
  _QWORD v139[3]; // [rsp+18h] [rbp-5E8h] BYREF
  _QWORD v140[2]; // [rsp+30h] [rbp-5D0h] BYREF
  int v141; // [rsp+40h] [rbp-5C0h]
  _BYTE v142[24]; // [rsp+48h] [rbp-5B8h] BYREF
  _QWORD v143[3]; // [rsp+60h] [rbp-5A0h] BYREF
  _BYTE v144[24]; // [rsp+78h] [rbp-588h] BYREF
  _QWORD v145[3]; // [rsp+90h] [rbp-570h] BYREF
  _BYTE v146[24]; // [rsp+A8h] [rbp-558h] BYREF
  _QWORD v147[3]; // [rsp+C0h] [rbp-540h] BYREF
  _QWORD v148[3]; // [rsp+D8h] [rbp-528h] BYREF
  _BYTE v149[24]; // [rsp+F0h] [rbp-510h] BYREF
  _QWORD v150[3]; // [rsp+108h] [rbp-4F8h] BYREF
  _QWORD v151[3]; // [rsp+120h] [rbp-4E0h] BYREF
  _QWORD v152[3]; // [rsp+138h] [rbp-4C8h] BYREF
  _QWORD v153[2]; // [rsp+150h] [rbp-4B0h] BYREF
  __int64 v154; // [rsp+160h] [rbp-4A0h] BYREF
  __int64 v155; // [rsp+168h] [rbp-498h] BYREF
  _QWORD v156[3]; // [rsp+170h] [rbp-490h] BYREF
  _QWORD v157[3]; // [rsp+188h] [rbp-478h] BYREF
  _QWORD v158[3]; // [rsp+1A0h] [rbp-460h] BYREF
  __int64 v159; // [rsp+1B8h] [rbp-448h]
  __int128 v160; // [rsp+1C0h] [rbp-440h] BYREF
  _OWORD *v161; // [rsp+1D0h] [rbp-430h]
  __int64 v162; // [rsp+1D8h] [rbp-428h]
  _OWORD v163[6]; // [rsp+1E0h] [rbp-420h] BYREF
  __m128i __dst[18]; // [rsp+240h] [rbp-3C0h] BYREF
  _BYTE v165[104]; // [rsp+360h] [rbp-2A0h] BYREF
  __int64 (__fastcall *v166)(); // [rsp+3C8h] [rbp-238h]
  _OWORD *v167; // [rsp+3D0h] [rbp-230h]
  __int64 (__fastcall *v168)(); // [rsp+3D8h] [rbp-228h]
  __int64 *v169; // [rsp+3E0h] [rbp-220h]
  __int64 (__fastcall *v170)(); // [rsp+3E8h] [rbp-218h]
  char *v171; // [rsp+3F0h] [rbp-210h]
  __int64 (__fastcall *v172)(); // [rsp+3F8h] [rbp-208h]
  __int64 *v173; // [rsp+400h] [rbp-200h]
  __int64 (__fastcall *v174)(); // [rsp+408h] [rbp-1F8h]
  __int64 *v175; // [rsp+410h] [rbp-1F0h]
  __int64 (__fastcall *v176)(); // [rsp+418h] [rbp-1E8h]
  __int128 *v177; // [rsp+420h] [rbp-1E0h]
  __int64 (__fastcall *v178)(); // [rsp+428h] [rbp-1D8h]
  int v179; // [rsp+434h] [rbp-1CCh]
  __int64 v180; // [rsp+438h] [rbp-1C8h] BYREF
  __int64 v181; // [rsp+440h] [rbp-1C0h] BYREF
  __int64 v182; // [rsp+448h] [rbp-1B8h] BYREF
  _OWORD v183[18]; // [rsp+450h] [rbp-1B0h] BYREF
  __int128 v184; // [rsp+570h] [rbp-90h] BYREF
  _OWORD *v185; // [rsp+580h] [rbp-80h]
  __int64 (__fastcall *v186)(_QWORD, _QWORD); // [rsp+588h] [rbp-78h]
  __m128i *v187; // [rsp+590h] [rbp-70h]
  __int64 v188; // [rsp+598h] [rbp-68h] BYREF
  __m128i v189; // [rsp+5A0h] [rbp-60h]
  _QWORD *v190; // [rsp+5B0h] [rbp-50h]
  __m128i v191; // [rsp+5B8h] [rbp-48h] BYREF
  __int64 v192; // [rsp+5C8h] [rbp-38h]
  char v193; // [rsp+5D6h] [rbp-2Ah] BYREF
  char v194; // [rsp+5D7h] [rbp-29h] BYREF

  v190 = a2;
  v187 = a1;
  v153[0] = a7;
  v153[1] = a8;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !v18 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  v19 = (_QWORD *)v18;
  *(_QWORD *)&v183[0] = v153;
  *((_QWORD *)&v183[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v152, &unk_1018658C9, v183);
  v19[2] = v152[2];
  v20 = v152[0];
  v19[1] = v152[1];
  *v19 = v20;
  v191.i64[0] = 1;
  v191.i64[1] = (__int64)v19;
  v192 = 1;
  v188 = 0;
  v189 = (__m128i)8uLL;
  if ( a10 )
  {
    codexmate_lib::platform::process::collect_external_codex_writers::h3be8251710adafef(v183);
    if ( *(_QWORD *)&v183[0] == 11 )
    {
      *(_QWORD *)v165 = *(_QWORD *)&v183[1];
      *(_QWORD *)&v165[8] = *(_QWORD *)&v183[1];
      *(_QWORD *)&v165[16] = *((_QWORD *)&v183[0] + 1);
      *(_QWORD *)&v165[24] = *(_QWORD *)&v183[1] + 32LL * *((_QWORD *)&v183[1] + 1);
      alloc::vec::in_place_collect::from_iter_in_place::h73f6946e3acb007f(v163, v165);
      v21 = __dst;
      codexmate_lib::platform::process::reject_external_codex_writers::h1eb039688026abfd(__dst, v163);
      if ( __dst[0].i32[0] == 11 )
      {
        if ( a11 )
        {
          v21 = a11;
          (*(void (__fastcall **)(__m128i *, char *, __int64))(a12 + 32))(
            a11,
            "writing_configconfig_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restoreauth_commit",
            14);
        }
        v159 = std::time::Instant::now::hda76af2c3a449055(v21);
        v179 = v22;
        *(_QWORD *)&v183[1] = a3;
        *((_QWORD *)&v183[1] + 1) = a4;
        *(_QWORD *)&v183[2] = a5;
        *((_QWORD *)&v183[2] + 1) = a6;
        *(_QWORD *)&v183[0] = 0;
        LOWORD(v183[4]) = 0;
        v183[3] = 8u;
        v23 = v190;
        codexmate_lib::core::relay::codex_config_reconciler::reconcile_inner::ha48d63df54fced37(
          v163,
          v190,
          v183,
          0,
          v24,
          v25,
          v138[0],
          v138[1],
          v138[2],
          v139[0],
          v139[1],
          v139[2],
          v140[0],
          v140[1],
          v141);
        if ( LODWORD(v163[0]) == 11 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v163, v23);
          v26 = 22;
          v27 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1);
          if ( !v27 )
            goto LABEL_142;
          v28 = v27;
          *(_QWORD *)((char *)v27 + 14) = 0x6769666E6F6320B1LL;
          v27[1] = 0x20B194E7AFB7E886LL;
          *v27 = 0x90E785B8E6B2B7E5LL;
          v29 = v192;
          if ( v192 == v191.i64[0] )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v191);
          v30 = v191.i64[1];
          v31 = 3 * v29;
          *(_QWORD *)(v191.i64[1] + 8 * v31) = 22;
          *(_QWORD *)(v30 + 8 * v31 + 8) = v28;
          *(_QWORD *)(v30 + 8 * v31 + 16) = 22;
          v192 = v29 + 1;
          std::path::Path::_join::hb1a495d4f06b13b8(
            __dst,
            v190[73],
            v190[74],
            "codex_router_catalog.jsondebug--bundleddebug models --bundled",
            25);
          v32 = __dst[0].i64[1];
          v33 = v183;
          std::sys::fs::metadata::h32fa16d3052ea535(v183, __dst[0].i64[1], __dst[1].i64[0]);
          if ( LOBYTE(v183[0]) )
          {
            if ( (BYTE8(v183[0]) & 3) == 1 )
            {
              v162 = *((_QWORD *)&v183[0] + 1) - 1LL;
              v34 = *(_QWORD *)(*((_QWORD *)&v183[0] + 1) - 1LL);
              v35 = *(_QWORD *)(*((_QWORD *)&v183[0] + 1) + 7LL);
              if ( *(_QWORD *)v35 )
                (*(void (__fastcall **)(__int64))v35)(v34);
              v36 = *(_QWORD *)(v35 + 8);
              if ( v36 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v36, *(_QWORD *)(v35 + 16));
              v33 = (_OWORD *)v162;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, 24, 8);
            }
            v37 = __dst[0].i64[0];
            if ( __dst[0].i64[0] )
            {
              v33 = (_OWORD *)v32;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, __dst[0].i64[0], 1);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v37);
            v26 = 23;
            v38 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
            if ( !v38 )
              goto LABEL_142;
            v39 = v38;
            *(_QWORD *)((char *)v38 + 15) = 0x676F6C6174616320LL;
            v38[1] = 0x20B194E7AFB7E886LL;
            *v38 = 0x90E785B8E6B2B7E5LL;
            v40 = v192;
            if ( v192 == v191.i64[0] )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v191);
            v41 = v191.i64[1];
            v42 = 3 * v40;
            *(_QWORD *)(v191.i64[1] + 8 * v42) = 23;
            *(_QWORD *)(v41 + 8 * v42 + 8) = v39;
            *(_QWORD *)(v41 + 8 * v42 + 16) = 23;
            v192 = v40 + 1;
          }
          else
          {
            v66 = __dst[0].i64[0];
            if ( __dst[0].i64[0] )
            {
              v33 = (_OWORD *)v32;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, __dst[0].i64[0], 1);
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v66);
            v26 = 102;
            v67 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(102, 1);
            if ( !v67 )
              goto LABEL_142;
            v68 = v67;
            memcpy(v67, &unk_1016F5FA1, 0x66u);
            v69 = v189.i64[1];
            if ( v189.i64[1] == v188 )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v188);
            v70 = v189.i64[0];
            v71 = 3 * v69;
            *(_QWORD *)(v189.i64[0] + 8 * v71) = 102;
            *(_QWORD *)(v70 + 8 * v71 + 8) = v68;
            *(_QWORD *)(v70 + 8 * v71 + 16) = 102;
            v189.i64[1] = v69 + 1;
          }
LABEL_56:
          LOBYTE(v180) = 1;
          *(_QWORD *)&v160 = "config_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restoreauth_commit";
          *((_QWORD *)&v160 + 1) = 11;
          *(_QWORD *)&v184 = v159;
          DWORD2(v184) = v179;
          v78 = std::time::Instant::elapsed::h457f209775ed485c(&v184);
          v163[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v78 + v79 / 0xF4240uLL;
          *(_QWORD *)v165 = "router_enabled=false";
          *(_QWORD *)&v165[8] = 20;
          *(_QWORD *)&v183[0] = &v180;
          *((_QWORD *)&v183[0] + 1) = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h12200cec4eeaa7ff;
          *(_QWORD *)&v183[1] = &v160;
          *((_QWORD *)&v183[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
          *(_QWORD *)&v183[2] = v163;
          *((_QWORD *)&v183[2] + 1) = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
          *(_QWORD *)&v183[3] = v165;
          *((_QWORD *)&v183[3] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1018651B2, v183);
          codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a(
            "router_transitionphase_timingcatalog_preflightstarting_proxyproxy_startedproxy_root_present=truepreparing_au"
            "thauth_preflight",
            17,
            "phase_timingcatalog_preflightstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_preflight",
            12,
            __dst);
          v80 = std::time::Instant::now::hda76af2c3a449055(
                  "router_transitionphase_timingcatalog_preflightstarting_proxyproxy_startedproxy_root_present=trueprepar"
                  "ing_authauth_preflight");
          v82 = v81;
          v83 = v190;
          codexmate_lib::core::relay::router_unlock_auth::migrate_legacy_auth_state::hdd39103f009134c7(v183, v190);
          v84 = *(_QWORD *)&v183[0];
          v85 = BYTE8(v183[0]);
          if ( *(_QWORD *)&v183[0] == 11 )
          {
            v86 = v190;
            if ( !(unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::ha27e95189af2cf67(v190) )
            {
LABEL_60:
              if ( (v85 & 1) == 0 )
              {
LABEL_65:
                v194 = v85;
                goto LABEL_71;
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v86, v83);
              v26 = 59;
              v87 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1);
              if ( v87 )
              {
                v88 = v87;
                *(_QWORD *)(v87 + 48) = 0x8BAEE6B78FE5A6B4LL;
                *(_QWORD *)(v87 + 40) = 0xE89F8BE69A99E820LL;
                *(_QWORD *)(v87 + 32) = 0x694D614D69412088LL;
                *(_QWORD *)(v87 + 24) = 0x89E7A797E68690E7LL;
                *(_QWORD *)(v87 + 16) = 0x85B8E6B6B9E581AFLL;
                *(_QWORD *)(v87 + 8) = 0xE8A4AEE89F8EE58DLL;
                *(_QWORD *)v87 = 0xA4E5A281E6B2B7E5LL;
                *(_DWORD *)(v87 + 55) = -1718229109;
                v89 = v192;
                if ( v192 == v191.i64[0] )
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v191);
                v90 = v191.i64[1];
                v91 = 3 * v89;
                *(_QWORD *)(v191.i64[1] + 8 * v91) = 59;
                *(_QWORD *)(v90 + 8 * v91 + 8) = v88;
                *(_QWORD *)(v90 + 8 * v91 + 16) = 59;
                v192 = v89 + 1;
                goto LABEL_65;
              }
LABEL_142:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v26);
            }
            v86 = v183;
            v83 = v190;
            codexmate_lib::core::relay::router_unlock_auth::cleanup::h0a5d26dc3478dacb(v183, v190);
            v84 = *(_QWORD *)&v183[0];
            if ( *(_QWORD *)&v183[0] == 11 )
            {
              v85 |= BYTE8(v183[0]);
              goto LABEL_60;
            }
            memcpy(__dst, (char *)v183 + 9, 0x57u);
            v85 = BYTE8(v183[0]);
            if ( !a9 )
              goto LABEL_94;
          }
          else
          {
            memcpy(__dst, (char *)v183 + 9, 0x57u);
            if ( !a9 )
            {
LABEL_94:
              v115 = (char *)v187;
              v187->i64[0] = v84;
              v115[8] = v85;
              memcpy(v115 + 9, __dst, 0x57u);
LABEL_95:
              v114 = v189.i64[1];
              if ( v189.i64[1] )
                goto LABEL_96;
              goto LABEL_131;
            }
          }
          *(_QWORD *)&v183[0] = v84;
          BYTE8(v183[0]) = v85;
          memcpy((char *)v183 + 9, __dst, 0x57u);
          *(_QWORD *)v165 = v183;
          *(_QWORD *)&v165[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v158, &unk_10186598A, v165);
          v93 = v189.i64[1];
          if ( v189.i64[1] == v188 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v188);
          v94 = v189.i64[0];
          v95 = 3 * v93;
          *(_QWORD *)(v189.i64[0] + 8 * v95 + 16) = v158[2];
          v96 = v158[0];
          *(_QWORD *)(v94 + 8 * v95 + 8) = v158[1];
          *(_QWORD *)(v94 + 8 * v95) = v96;
          v189.i64[1] = v93 + 1;
          v194 = 0;
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v183);
LABEL_71:
          *(_QWORD *)&v183[0] = &v194;
          *((_QWORD *)&v183[0] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v150, &unk_1018659D2, v183);
          codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
            1,
            (__int64)"auth_cleanupno_account_model_restorereconciling_threads/managed auth refused: no-account catalog do"
                     "es not match the active relay slots",
            12,
            v80,
            v82,
            v150);
          v97 = std::time::Instant::now::hda76af2c3a449055(1);
          v99 = v98;
          v193 = codexmate_lib::core::relay::config_takeover::backup_exists::h95a1293b93a4f6dd(v190);
          v182 = 0;
          v181 = 0;
          if ( v193 )
          {
            codexmate_lib::core::relay::config_takeover::restore::h3a2e456ac0847c21(v183, v190);
            if ( LODWORD(v183[0]) == 1 )
            {
              v100 = (__m128i *)((char *)v183 + 8);
              if ( !a9 )
                goto LABEL_91;
              qmemcpy(__dst, (char *)v183 + 8, 0x60u);
              *(_QWORD *)v165 = __dst;
              *(_QWORD *)&v165[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v149, &unk_101865A85, v165);
              alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v188, v149);
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(__dst);
            }
            else
            {
              v101 = *((_QWORD *)&v183[1] + 1);
              v102 = *(_QWORD *)&v183[3];
              if ( *(_QWORD *)&v183[6] )
              {
                alloc::str::join_generic_copy::h02d08564f831751b(
                  __dst,
                  *((_QWORD *)&v183[5] + 1),
                  *(_QWORD *)&v183[6],
                  &unk_1016F5D32,
                  3);
                *(_QWORD *)&v165[16] = __dst[1].i64[0];
                *(__m128i *)v165 = __dst[0];
                __dst[0].i64[0] = (__int64)v165;
                __dst[0].i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v157, &unk_1018659DD, __dst);
                if ( *(_QWORD *)v165 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v165[8], *(_QWORD *)v165, 1);
                v103 = v189.i64[1];
                if ( v189.i64[1] == v188 )
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v188);
                v104 = v189.i64[0];
                v105 = 3 * v103;
                *(_QWORD *)(v189.i64[0] + 8 * v105 + 16) = v157[2];
                v106 = v157[0];
                *(_QWORD *)(v104 + 8 * v105 + 8) = v157[1];
                *(_QWORD *)(v104 + 8 * v105) = v106;
                v189.i64[1] = v103 + 1;
              }
              v182 = v101;
              v181 = v102;
              __dst[0].i64[0] = (__int64)&v182;
              __dst[0].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
              __dst[1].i64[0] = (__int64)&v181;
              __dst[1].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v156, &unk_101865A56, __dst);
              v107 = v192;
              if ( v192 == v191.i64[0] )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v191);
              v108 = v191.i64[1];
              v109 = 3 * v107;
              *(_QWORD *)(v191.i64[1] + 8 * v109 + 16) = v156[2];
              v110 = v156[0];
              *(_QWORD *)(v108 + 8 * v109 + 8) = v156[1];
              *(_QWORD *)(v108 + 8 * v109) = v110;
              v192 = v107 + 1;
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..RestoreSummary$GT$::h86cec2791492a2f7((char *)v183 + 8);
            }
          }
          *(_QWORD *)&v183[0] = &v193;
          *((_QWORD *)&v183[0] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
          *(_QWORD *)&v183[1] = &v182;
          *((_QWORD *)&v183[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          *(_QWORD *)&v183[2] = &v181;
          *((_QWORD *)&v183[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v148, &unk_101865AD1, v183);
          codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
            1,
            (__int64)"takeover_restorerestore-rollbackPngEncodingError",
            16,
            v97,
            v99,
            v148);
          codexmate_lib::platform::process::collect_external_codex_writers::h3be8251710adafef(v183);
          if ( *(_QWORD *)&v183[0] == 11 )
          {
            *(_QWORD *)v165 = *(_QWORD *)&v183[1];
            *(_QWORD *)&v165[8] = *(_QWORD *)&v183[1];
            *(_QWORD *)&v165[16] = *((_QWORD *)&v183[0] + 1);
            *(_QWORD *)&v165[24] = *(_QWORD *)&v183[1] + 32LL * *((_QWORD *)&v183[1] + 1);
            alloc::vec::in_place_collect::from_iter_in_place::h73f6946e3acb007f(v163, v165);
            codexmate_lib::platform::process::reject_external_codex_writers::h1eb039688026abfd(__dst, v163);
            if ( __dst[0].i32[0] == 11 )
            {
              v111 = std::time::Instant::now::hda76af2c3a449055(__dst);
              v113 = v112;
              codexmate_lib::core::relay::codex_thread_visibility::restore_no_account_model_threads::h7e65e217bb3ed9be(
                __dst,
                v190);
              if ( __dst[0].i32[0] == 11 )
              {
                *(__m128i *)&v165[24] = __dst[2];
                *(__m128i *)&v165[8] = __dst[1];
                *(_QWORD *)v165 = __dst[0].i64[1];
                *(_QWORD *)&v183[0] = v165;
                *((_QWORD *)&v183[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                *(_QWORD *)&v183[1] = &v165[8];
                *((_QWORD *)&v183[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                *(_QWORD *)&v183[2] = &v165[16];
                *((_QWORD *)&v183[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                *(_QWORD *)&v183[3] = &v165[24];
                *((_QWORD *)&v183[3] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                *(_QWORD *)&v183[4] = &v165[32];
                *((_QWORD *)&v183[4] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v147, &unk_10186050E, v183);
                codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
                  1,
                  (__int64)"no_account_model_restorereconciling_threads/managed auth refused: no-account catalog does not match the active relay slots",
                  24,
                  v111,
                  v113,
                  v147);
                if ( *(_QWORD *)v165 )
                {
                  *(_QWORD *)&v183[0] = v165;
                  *((_QWORD *)&v183[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v146, &unk_101865B07, v183);
                  alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v191, v146);
                }
                goto LABEL_102;
              }
              if ( a9 )
              {
                qmemcpy(v183, __dst, 0x60u);
                *(_QWORD *)v165 = v183;
                *(_QWORD *)&v165[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v145, &unk_101865411, v165);
                codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
                  1,
                  (__int64)"no_account_model_restorereconciling_threads/managed auth refused: no-account catalog does not match the active relay slots",
                  24,
                  v111,
                  v113,
                  v145);
                *(_QWORD *)v165 = v183;
                *(_QWORD *)&v165[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v144, &unk_101865B43, v165);
                alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v188, v144);
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v183);
LABEL_102:
                codexmate_lib::core::relay::codex_catalog::resolve_native_default_model::h23eacd24efb3a6a8(&v184, v190);
                if ( a11 )
                  (*(void (__fastcall **)(__m128i *, char *, __int64))(a12 + 32))(
                    a11,
                    "reconciling_threads/managed auth refused: no-account catalog does not match the active relay slots",
                    19);
                v118 = std::time::Instant::now::hda76af2c3a449055(a11);
                v120 = v119;
                *(_QWORD *)&v183[1] = v185;
                v183[0] = v184;
                *((_QWORD *)&v183[1] + 1) = &anon_3f0cee2931c58d8d540c26f0254bc451_514;
                *(_QWORD *)&v183[2] = 6;
                WORD4(v183[2]) = 257;
                codexmate_lib::core::relay::codex_thread_visibility::reconcile_threads_with_progress::hedb8602cf4909d61(
                  __dst,
                  (__int64)v190,
                  (__int64 *)v183,
                  a13,
                  a14);
                if ( __dst[0].i32[0] != 2 )
                {
                  memcpy(v183, __dst, sizeof(v183));
                  v121 = 0;
                  v122 = 0;
                  if ( LOBYTE(v183[0]) )
                    v122 = *(_QWORD *)&v183[1];
                  v123 = *(_QWORD *)&v183[3];
                  if ( !LOBYTE(v183[2]) )
                    v123 = 0;
                  v124 = *((_QWORD *)&v183[3] + 1);
                  if ( !LOBYTE(v183[2]) )
                    v124 = 0;
                  v155 = v122;
                  if ( LOBYTE(v183[2]) )
                    v121 = *(_QWORD *)&v183[4];
                  v154 = v123;
                  v180 = v124;
                  *(_QWORD *)&v160 = v121;
                  *(_QWORD *)v165 = (char *)&v183[14] + 8;
                  *(_QWORD *)&v165[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  *(_QWORD *)&v165[16] = &v183[15];
                  *(_QWORD *)&v165[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  *(_QWORD *)&v165[32] = (char *)&v183[15] + 8;
                  *(_QWORD *)&v165[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  *(_QWORD *)&v165[48] = &v183[16];
                  *(_QWORD *)&v165[56] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  *(_QWORD *)&v165[64] = (char *)&v183[16] + 8;
                  *(_QWORD *)&v165[72] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  *(_QWORD *)&v165[80] = &v183[17];
                  *(_QWORD *)&v165[88] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  *(_QWORD *)&v165[96] = (char *)&v183[8] + 8;
                  v166 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  v167 = &v183[9];
                  v168 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  v169 = &v155;
                  v170 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  v171 = (char *)&v183[17] + 8;
                  v172 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  v173 = &v154;
                  v174 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  v175 = &v180;
                  v176 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  v177 = &v160;
                  v178 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v163, &unk_101865458, v165);
                  codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
                    1,
                    (__int64)"thread_reconcileimage generationconnection resetlastAsrErrorCodecannot_be_a_basecontent-encodingcontent-languagecontent-locationwww-authenticatex-xss-protectionIllegalEventNameTokioOneshotRecvTauri-Channel-IdTauri-Invoke-Keytauri_utils::Env",
                    16,
                    v118,
                    v120,
                    v163);
                  codexmate_lib::core::relay::router_reconciler::describe_thread_reconcile::h9a788c47605ee6a1(
                    v163,
                    (__int64)"NativeOff  Client handshake done.tungstenite::handshake::clienttungstenite::protocolSending"
                             " pong/closetungstenite::protocol::frame::frame",
                    9,
                    (__int64)v183);
                  *(_QWORD *)v165 = *((_QWORD *)&v163[0] + 1);
                  *(_QWORD *)&v165[8] = *((_QWORD *)&v163[0] + 1);
                  *(_QWORD *)&v165[16] = *(_QWORD *)&v163[0];
                  *(_QWORD *)&v165[24] = *((_QWORD *)&v163[0] + 1) + 24LL * *(_QWORD *)&v163[1];
                  _$LT$alloc..vec..Vec$LT$T$C$A1$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$C$A2$GT$$GT$$GT$::spec_extend::h905bbc641d74b26f(
                    &v191,
                    v165);
                  codexmate_lib::core::relay::router_reconciler::append_thread_reconcile_warnings::habe6076c14f87082(
                    &v188,
                    (__int64)"NativeOff  Client handshake done.tungstenite::handshake::clienttungstenite::protocolSending"
                             " pong/closetungstenite::protocol::frame::frame",
                    9,
                    (__int64)v183);
                  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadReconcileSummary$GT$::h2b41588bb47f903d(v183);
LABEL_118:
                  v125 = std::time::Instant::now::hda76af2c3a449055(v183);
                  v127 = v126;
                  codexmate_lib::core::relay::codex_project_state::inspect::hcb684185c418e8f5(v183, v190);
                  codexmate_lib::core::relay::codex_project_state::stability_issue::h829c06402e62b9be(__dst, v183);
                  if ( __OFSUB__(-__dst[0].i64[0], 1) )
                  {
                    __dst[0].i64[0] = (__int64)&v183[9];
                    __dst[0].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    __dst[1].i64[0] = (__int64)&v183[11];
                    __dst[1].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    __dst[2].i64[0] = (__int64)&v183[11] + 8;
                    __dst[2].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v138, &unk_10186537D, __dst);
                    codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
                      1,
                      (__int64)"project_statewriting_configconfig_syncrouter reconcile did not become effective: missing "
                               "active provider, proxy, or catalogmodel_restoreauth_commit",
                      13,
                      v125,
                      v127,
                      v138);
LABEL_129:
                    v128 = v192;
                    __dst[1].i64[0] = v192;
                    v129 = v191;
                    __dst[0] = v191;
                    v130 = v188;
                    __dst[1].i64[1] = v188;
                    __dst[2] = v189;
                    v131 = (char *)v187;
                    *(__m128i *)((char *)v187 + 40) = v189;
                    *((_QWORD *)v131 + 4) = v130;
                    *((_QWORD *)v131 + 3) = v128;
                    *(__m128i *)(v131 + 8) = v129;
                    v131[56] = 1;
                    *(_QWORD *)v131 = 11;
                    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h9462794aee212e0d(v183);
                    return v187;
                  }
                  if ( __dst[0].i64[0] )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[0].i64[1], __dst[0].i64[0], 1);
                  codexmate_lib::core::relay::codex_project_state::repair_if_needed::hd64c5cca3a8ebccf(v165, v190);
                  if ( *(_QWORD *)v165 != 0x8000000000000000LL )
                  {
                    qmemcpy(__dst, v165, 0x68u);
                    *(_QWORD *)&v163[0] = &__dst[6];
                    *((_QWORD *)&v163[0] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
                    *(_QWORD *)&v163[1] = &__dst[4].i64[1];
                    *((_QWORD *)&v163[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    *(_QWORD *)&v163[2] = &__dst[5];
                    *((_QWORD *)&v163[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    *(_QWORD *)&v163[3] = &__dst[5].i64[1];
                    *((_QWORD *)&v163[3] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v140, &unk_101865C2B, v163);
                    codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
                      1,
                      (__int64)"project_statewriting_configconfig_syncrouter reconcile did not become effective: missing "
                               "active provider, proxy, or catalogmodel_restoreauth_commit",
                      13,
                      v125,
                      v127,
                      v140);
                    *(_QWORD *)&v163[1] = __dst[1].i64[0];
                    v163[0] = __dst[0];
                    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v191, v163);
                    if ( 2 * __dst[1].i64[1] )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[2].i64[0], __dst[1].i64[1], 1);
                    if ( 2 * __dst[3].i64[0] )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[3].i64[1], __dst[3].i64[0], 1);
                    goto LABEL_129;
                  }
                  if ( a9 )
                  {
                    qmemcpy(__dst, &v165[8], 0x60u);
                    *(_QWORD *)&v163[0] = __dst;
                    *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v139, &unk_101865C5B, v163);
                    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v188, v139);
                    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(__dst);
                    goto LABEL_129;
                  }
                  qmemcpy(__dst, &v165[8], 0x60u);
                  *(_QWORD *)&v163[0] = __dst;
                  *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_101865C94, v163);
                  v132 = (__int64 *)v187;
                  v187[1].i64[1] = v151[2];
                  v133 = v151[0];
                  v132[2] = v151[1];
                  v132[1] = v133;
                  *v132 = 10;
                  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(__dst);
                  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h9462794aee212e0d(v183);
                  v114 = v189.i64[1];
                  if ( !v189.i64[1] )
                    goto LABEL_131;
                  goto LABEL_96;
                }
                v100 = (__m128i *)&__dst[0].u64[1];
                if ( a9 )
                {
                  qmemcpy(v183, &__dst[0].u64[1], 0x60u);
                  *(_QWORD *)v165 = v183;
                  *(_QWORD *)&v165[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v143, &unk_101865411, v165);
                  codexmate_lib::core::relay::router_reconciler::record_timing::hde89d7c8f43d2302(
                    1,
                    (__int64)"thread_reconcileimage generationconnection resetlastAsrErrorCodecannot_be_a_basecontent-encodingcontent-languagecontent-locationwww-authenticatex-xss-protectionIllegalEventNameTokioOneshotRecvTauri-Channel-IdTauri-Invoke-Keytauri_utils::Env",
                    16,
                    v118,
                    v120,
                    v143);
                  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
                  {
                    *(_QWORD *)&v163[0] = v183;
                    *((_QWORD *)&v163[0] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
                    *(_QWORD *)v165 = "codexmate_lib::core::relay::router_reconciler";
                    *(_QWORD *)&v165[8] = 45;
                    *(_QWORD *)&v165[16] = "codexmate_lib::core::relay::router_reconciler";
                    *(_QWORD *)&v165[24] = 45;
                    *(_QWORD *)&v165[32] = &off_101A17E88;
                    log::__private_api::log::hb6fd2cff84d9e9dd(&unk_101865B94, v163, 2, v165);
                  }
                  *(_QWORD *)v165 = v183;
                  *(_QWORD *)&v165[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v142, &unk_101865BEF, v165);
                  alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(&v188, v142);
                  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v183);
                  goto LABEL_118;
                }
LABEL_91:
                qmemcpy(v187, v100, 0x60u);
                v114 = v189.i64[1];
                if ( !v189.i64[1] )
                  goto LABEL_131;
LABEL_96:
                v116 = (_QWORD *)(v189.i64[0] + 8);
                do
                {
                  v117 = *(v116 - 1);
                  if ( v117 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v116, v117, 1);
                  v116 += 3;
                  --v114;
                }
                while ( v114 );
                goto LABEL_131;
              }
            }
          }
          else
          {
            __dst[5] = (__m128i)v183[5];
            __dst[4] = (__m128i)v183[4];
            __dst[3] = (__m128i)v183[3];
            __dst[2] = (__m128i)v183[2];
            __dst[0] = (__m128i)v183[0];
            __dst[1] = (__m128i)v183[1];
          }
          v100 = __dst;
          goto LABEL_91;
        }
        qmemcpy(v165, v163, 0x60u);
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
        {
          __dst[0].i64[0] = (__int64)v165;
          __dst[0].i64[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
          *(_QWORD *)&v183[3] = 2;
          *((_QWORD *)&v183[3] + 1) = "codexmate_lib::core::relay::router_reconciler";
          *(_QWORD *)&v183[4] = 45;
          *(_QWORD *)&v183[5] = &unk_1018658F5;
          *((_QWORD *)&v183[5] + 1) = __dst;
          *(_QWORD *)&v183[0] = 0;
          *((_QWORD *)&v183[0] + 1) = "codexmate_lib::core::relay::router_reconciler";
          v183[1] = 0x2Du;
          *(_QWORD *)&v183[2] = "src/core/relay/router_reconciler.rs";
          *((_QWORD *)&v183[2] + 1) = 35;
          *((_QWORD *)&v183[4] + 1) = 0x1EE00000001LL;
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v184, v183);
        }
        v183[2] = 8u;
        v183[3] = 8u;
        *(_QWORD *)&v183[0] = 0;
        LOWORD(v183[5]) = 0;
        v183[4] = 8u;
        *(_QWORD *)&v183[1] = 0;
        v65 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h11ee5c38df4ac403(v190);
        if ( v65 )
        {
          __dst[0].i64[0] = 2;
          __dst[0].i64[1] = v65;
        }
        else
        {
          v72 = v190[7];
          codexmate_lib::core::codex_config::update_text::h9073855187835857(
            __dst,
            v72,
            v190[8],
            &anon_597a1ab5dc54f5a7c7ef0ba6972bc544_252,
            23,
            v183);
          if ( __dst[0].i64[0] == 11 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v72);
            v73 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(58, 1);
            if ( !v73 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 58);
            v74 = v73;
            qmemcpy(v73 + 5, "MaMi managed block", 18);
            v73[4] = 0x6941208690E785B8LL;
            v73[3] = 0xE6A7BAE78D99E9B2LL;
            v73[2] = 0xB7E58E90E5A5B4E8LL;
            v73[1] = 0xB1A4E5A5ADE68C90LL;
            *v73 = 0xE5206769666E6F63LL;
            v75 = v192;
            if ( v192 == v191.i64[0] )
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v191);
            v76 = v191.i64[1];
            v77 = 3 * v75;
            *(_QWORD *)(v191.i64[1] + 8 * v77) = 58;
            *(_QWORD *)(v76 + 8 * v77 + 8) = v74;
            *(_QWORD *)(v76 + 8 * v77 + 16) = 58;
            v192 = v75 + 1;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v165);
            goto LABEL_56;
          }
        }
        qmemcpy(v183, __dst, 0x60u);
        *(_QWORD *)&v184 = v165;
        *((_QWORD *)&v184 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
        v185 = v183;
        v186 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v160, &unk_101865CC6, &v184);
        v184 = v160;
        v185 = v161;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v183);
        v92 = (char *)v187;
        v187[1].i64[1] = (__int64)v185;
        *(_OWORD *)(v92 + 8) = v184;
        *(_QWORD *)v92 = 10;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v165);
        goto LABEL_95;
      }
    }
    else
    {
      __dst[5] = (__m128i)v183[5];
      __dst[4] = (__m128i)v183[4];
      __dst[3] = (__m128i)v183[3];
      __dst[2] = (__m128i)v183[2];
      __dst[0] = (__m128i)v183[0];
      __dst[1] = (__m128i)v183[1];
    }
    qmemcpy(v187, __dst, 0x60u);
    v62 = v189.i64[1];
    if ( !v189.i64[1] )
      goto LABEL_131;
LABEL_37:
    v63 = (_QWORD *)(v189.i64[0] + 8);
    do
    {
      v64 = *(v63 - 1);
      if ( v64 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v63, v64, 1);
      v63 += 3;
      --v62;
    }
    while ( v62 );
    goto LABEL_131;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v152, &unk_1018658C9);
  if ( !a9 )
  {
    v26 = 70;
    v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(70, 1);
    if ( !v59 )
      goto LABEL_142;
    v60 = (__int64)v59;
    memcpy(
      v59,
      "NativeOff strict reconciliation requires a verified Codex quiet windowcodexmate_lib::core::relay::router_reconciler",
      0x46u);
    v61 = (__int64 *)v187;
    v187->i64[0] = 10;
    v61[1] = 70;
    v61[2] = v60;
    v61[3] = 70;
    v62 = v189.i64[1];
    if ( !v189.i64[1] )
    {
LABEL_131:
      if ( v188 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189.i64[0], 24 * v188, 8);
      v134 = v192;
      if ( v192 )
      {
        v135 = (_QWORD *)(v191.i64[1] + 8);
        do
        {
          v136 = *(v135 - 1);
          if ( v136 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v135, v136, 1);
          v135 += 3;
          --v134;
        }
        while ( v134 );
      }
      if ( v191.i64[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v191.i64[1], 24 * v191.i64[0], 8);
      return v187;
    }
    goto LABEL_37;
  }
  v26 = 84;
  v43 = (__m128i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(84, 1);
  if ( !v43 )
    goto LABEL_142;
  v44 = v43;
  v45 = v43;
  memcpy(v43, &unk_1016F5E71, 0x54u);
  v46 = v192;
  if ( v192 == v191.i64[0] )
  {
    v45 = &v191;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v191);
  }
  v47 = v191.i64[1];
  v48 = 3 * v46;
  *(_QWORD *)(v191.i64[1] + 8 * v48) = 84;
  *(_QWORD *)(v47 + 8 * v48 + 8) = v44;
  *(_QWORD *)(v47 + 8 * v48 + 16) = 84;
  v192 = v46 + 1;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, &unk_1016F5E71);
  v26 = 98;
  v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(98, 1);
  if ( !v49 )
    goto LABEL_142;
  v50 = v49;
  memcpy(v49, &unk_1016F5EC5, 0x62u);
  v51 = v189.i64[1];
  if ( v189.i64[1] == v188 )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v188);
  v52 = v189.i64[0];
  v53 = 3 * v51;
  *(_QWORD *)(v189.i64[0] + 8 * v53) = 98;
  *(_QWORD *)(v52 + 8 * v53 + 8) = v50;
  *(_QWORD *)(v52 + 8 * v53 + 16) = 98;
  v189.i64[1] = v51 + 1;
  v54 = v192;
  *(_QWORD *)&v183[1] = v192;
  v55 = v191;
  v183[0] = v191;
  v56 = v188;
  v57 = v189.i64[0];
  *((_QWORD *)&v183[1] + 1) = v188;
  *(_QWORD *)&v183[2] = v189.i64[0];
  *((_QWORD *)&v183[2] + 1) = v51 + 1;
  v58 = (char *)v187;
  v187[3].i64[0] = v51 + 1;
  *((_QWORD *)v58 + 5) = v57;
  *((_QWORD *)v58 + 4) = v56;
  *((_QWORD *)v58 + 3) = v54;
  *(__m128i *)(v58 + 8) = v55;
  v58[56] = 0;
  *(_QWORD *)v58 = 11;
  return v187;
}

