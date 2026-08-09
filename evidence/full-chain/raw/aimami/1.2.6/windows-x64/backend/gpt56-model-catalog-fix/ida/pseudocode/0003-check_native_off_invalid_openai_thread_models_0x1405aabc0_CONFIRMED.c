// codexmate_lib::core::relay::codex_diagnostic::check_native_off_invalid_openai_thread_models
// (Windows 对应体，红线24确认)
// win EA 0x1405aabc0, size 2854B (0xb26), Windows x64, AiMaMi 1.2.6 win64.exe
// mac 对应符号: codexmate_lib::core::relay::codex_diagnostic::check_native_off_invalid_openai_thread_models
//   ::h2311c35d99df0f7f (mac EA 0x100b34f30, size 3194B)
// 符号来源: stripped build 无 demangled 符号；本轮通过红线24 三层恢复法第一层
//   panic-Location 两跳 xref 定位 codex_diagnostic.rs 候选簇（本函数是该簇中同时命中
//   "openai" 字符串 xref 的候选，双重信号交叉确认）。
// 已在 win IDB 中执行 rename(sub_1405AABC0 -> check_native_off_invalid_openai_thread_models)
// + append_comments，idb_save 完成。
//
// 【修复记录】本文件此前版本为人工节略稿（用 "..." 省略号 + 编造条件替换真实寄存器变量声明
// 与真实指针运算，冒充 CONFIRMED 完整反编译，违反红线20）。本次用 win IDA MCP 对
// 0x1405AABC0 重新执行 decompile()，并用 py_eval 对 str(cfunc) 做独立核验、base64 编码传输
// 后逐字节 decode 落盘（避免手工转录引入任何字符偏差）：len=11642 字符 / 394 行，与本文件
// 下方完整函数体逐字符一致，无 "[N chars total]" 截断标记、无编造省略。
//
// 完整反编译（decompile()，无截断，红线20核验：len(str(cfunc))=11642 字符，394 行，
// base64 逐字节核验落盘）：

// 红线24确认(win 1.2.6): =mac codexmate_lib::core::relay::codex_diagnostic::check_native_off_invalid_openai_thread_models (mac EA 0x100b34f30, 3194B)。结构证据: provider默认比较字面量"openai"(a3&1时用dword_14180F528备用值，推测测试覆盖用)；模块字符串="codexmate_lib::core::relay::codex_diagnostic"/文件="src\\core\\relay\\codex_diagnostic.rs"；诊断key="thread_provider_consistency"；早退(counts全0)返回ok消息 vs 非0返回warning消息，且按count单/复数选不同模板(对应mac v89标志区分单个vs多个)——与mac早退+collect+dedupe+count驱动消息选择的整体形状一致。核心收集/计数逻辑委托给sub_1405C2FA0(内部helper，未强行按mac命名，见该函数注释)。⚠诚实缺口: 未逐条验证与mac完全相同的"官方模型目录核验"具体消息文案(win侧走独立字符串模板池，非直接对照)。
__int64 __fastcall check_native_off_invalid_openai_thread_models(__int64 a1, __int64 a2, unsigned int a3)
{
  int *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdi
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm0
  __int64 result; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r15
  __int128 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rbx
  void *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  _OWORD *v52; // rcx
  __int128 v53; // xmm0
  __int64 v54; // rdx
  __int64 *v55; // rax
  __int64 v56; // rdi
  _QWORD *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // rdi
  void *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  _OWORD *v70; // rcx
  __int128 v71; // xmm0
  __int64 v72; // [rsp+20h] [rbp-60h]
  __int64 v73; // [rsp+20h] [rbp-60h]
  __int64 v74; // [rsp+20h] [rbp-60h]
  __int64 v75; // [rsp+20h] [rbp-60h]
  __int64 v76; // [rsp+20h] [rbp-60h]
  __int64 v77; // [rsp+20h] [rbp-60h]
  __int64 v78; // [rsp+20h] [rbp-60h]
  __int128 v79; // [rsp+30h] [rbp-50h]
  _QWORD v80[5]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v81; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v82[88]; // [rsp+D8h] [rbp+58h] BYREF
  _BYTE v83[40]; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v84; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v85; // [rsp+168h] [rbp+E8h]
  __int128 v86; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v87; // [rsp+180h] [rbp+100h]
  __int128 v88; // [rsp+188h] [rbp+108h] BYREF
  __int64 v89; // [rsp+198h] [rbp+118h]
  _BYTE v90[24]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v91; // [rsp+1B8h] [rbp+138h] BYREF
  __m256i v92; // [rsp+1C8h] [rbp+148h]
  __m256i v93; // [rsp+1E8h] [rbp+168h] BYREF
  _QWORD v94[24]; // [rsp+208h] [rbp+188h] BYREF
  __int128 v95; // [rsp+2C8h] [rbp+248h]
  __int64 v96; // [rsp+2D8h] [rbp+258h]
  __int128 v97; // [rsp+2E0h] [rbp+260h] BYREF
  _BYTE v98[24]; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v99; // [rsp+308h] [rbp+288h]
  __int16 v100; // [rsp+318h] [rbp+298h]
  __int128 v101; // [rsp+328h] [rbp+2A8h]
  __int64 v102; // [rsp+338h] [rbp+2B8h]
  __int128 v103; // [rsp+340h] [rbp+2C0h] BYREF
  _BYTE v104[48]; // [rsp+350h] [rbp+2D0h]
  __m256i v105; // [rsp+380h] [rbp+300h]
  char v106; // [rsp+3AFh] [rbp+32Fh] BYREF
  __int64 v107; // [rsp+3B0h] [rbp+330h]
  char v108; // [rsp+3BDh] [rbp+33Dh]
  char v109; // [rsp+3BEh] [rbp+33Eh]
  char v110; // [rsp+3BFh] [rbp+33Fh]
  __int64 v111; // [rsp+3C0h] [rbp+340h]
  __m256i v112; // 0:^78.32

  v111 = -2;
  v6 = (int *)aOpenai;
  if ( (a3 & 1) != 0 )
    v6 = &dword_14180F528;
  *(_QWORD *)&v97 = v6;
  *((_QWORD *)&v97 + 1) = 6;
  sub_140C1CEF0(v90, a2, v6, 6);
  if ( *(_OWORD *)&v93.m256i_u64[1] == 0 && __PAIR128__(v93.m256i_u64[3], 0) == (v92.m256i_i64[0] | v94[0]) )
  {
    sub_14049F3E0(v90);
    nullsub_1(v8, v7, v9, v10, v72);
    v11 = sub_140001650(24, 8);
    if ( !v11 )
      sub_14176E531(8, 24);
    v16 = (_QWORD *)v11;
    nullsub_1(v13, v12, v14, v15, v73);
    v17 = (void *)sub_140001650(27, 1);
    if ( !v17 )
    {
      v107 = (__int64)v16;
      sub_14176E54B(1, 27);
    }
    qmemcpy(v17, "thread_provider_consistency", 27);
    *v16 = 27;
    v16[1] = v17;
    v16[2] = 27;
    *(_QWORD *)&v103 = 1;
    *((_QWORD *)&v103 + 1) = v16;
    *(_QWORD *)v104 = 1;
    *(_QWORD *)&v79 = 0;
    *((_QWORD *)&v79 + 1) = 8;
    nullsub_1(v19, v18, v20, v21, v74);
    v22 = sub_140001650(24, 8);
    if ( !v22 )
      sub_14176E531(8, 24);
    v107 = v22;
    *(_QWORD *)v90 = &v97;
    *(_QWORD *)&v90[8] = sub_1402DDC10;
    sub_141543AF0(&v88, &unk_14183259E, v90);
    v23 = (_OWORD *)v107;
    *(_QWORD *)(v107 + 16) = v89;
    *v23 = v88;
    v24 = v103;
    *(_OWORD *)v90 = v103;
    *(_QWORD *)&v90[16] = *(_QWORD *)v104;
    v91 = v79;
    v92.m256i_i64[0] = 0;
    *(_QWORD *)(a1 + 40) = 8;
    *(_QWORD *)(a1 + 48) = v92.m256i_i64[0];
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v90[16];
    result = v91;
    *(_QWORD *)(a1 + 32) = v91;
    *(_OWORD *)(a1 + 8) = v24;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v23;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    return result;
  }
  sub_14049F3E0(v90);
  v99 = v97;
  v100 = 0;
  *(_QWORD *)v98 = -1;
  result = sub_140C0F880((unsigned int)v90, a2, (unsigned int)v98, 0);
  v103 = *(_OWORD *)&v90[8];
  *(_OWORD *)v104 = v91;
  *(__m256i *)&v104[16] = v92;
  v105 = v93;
  if ( *(_QWORD *)v90 == 2 )
  {
    *(__m256i *)(a1 + 64) = v105;
    v26 = v103;
    v27 = *(_OWORD *)v104;
    v28 = *(_OWORD *)&v104[16];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v104[32];
    *(_OWORD *)(a1 + 32) = v28;
    *(_OWORD *)(a1 + 16) = v27;
    *(_OWORD *)a1 = v26;
    return result;
  }
  sub_14172B820(v80, v94, 192);
  v112 = v105;
  if ( v81 != 0 && *(_QWORD *)off_141FB9E30 >= 3u )
  {
    *(_QWORD *)&v103 = &v81;
    *((_QWORD *)&v103 + 1) = sub_141553F20;
    *(_QWORD *)v104 = (char *)&v81 + 8;
    *(_QWORD *)&v104[8] = sub_141553F20;
    *(_QWORD *)v90 = 0;
    *(_QWORD *)&v90[8] = aCodexmateLibCo_24;
    *(_QWORD *)&v90[16] = 44;
    *(_QWORD *)&v91 = 0;
    *((_QWORD *)&v91 + 1) = aSrcCoreRelayCo_1;
    v92.m256i_i64[0] = 34;
    v92.m256i_i64[1] = 3;
    v92.m256i_i64[2] = (__int64)aCodexmateLibCo_24;
    v92.m256i_i64[3] = 44;
    v93.m256i_i64[0] = 0x83200000001LL;
    v93.m256i_i64[1] = (__int64)&unk_1418324C7;
    v93.m256i_i64[2] = (__int64)&v103;
    sub_14136A9F0(&v106, v90);
  }
  v32 = sub_1415181D0(v30, v29, v31);
  v33 = v32;
  if ( *(_BYTE *)(v32 + 16) == 1 )
  {
    v34 = *(_OWORD *)v32;
  }
  else
  {
    *(_QWORD *)&v34 = sub_14152E890();
    *(_OWORD *)v33 = v34;
    *(_BYTE *)(v33 + 16) = 1;
  }
  *(_QWORD *)v33 = v34 + 1;
  *(_OWORD *)v104 = xmmword_14180DDB0;
  v103 = *(_OWORD *)&off_14180DDA0;
  *(_OWORD *)&v104[16] = v34;
  sub_1405C2FA0(v90, a2, a3, &v103);
  sub_1405226B0(&v103);
  if ( v92.m256i_i64[0] == 2 && (v39 = *((_QWORD *)&v91 + 1), **((_WORD **)&v91 + 1) == 27503) )
  {
    nullsub_1(v36, v35, v37, v38, v72);
    v59 = sub_140001650(24, 8);
    if ( !v59 )
    {
      v110 = 1;
      sub_14176E531(8, 24);
    }
    v64 = (_QWORD *)v59;
    nullsub_1(v61, v60, v62, v63, v77);
    v65 = (void *)sub_140001650(27, 1);
    if ( !v65 )
    {
      v107 = (__int64)v64;
      sub_14176E54B(1, 27);
    }
    qmemcpy(v65, "thread_provider_consistency", 27);
    *v64 = 27;
    v64[1] = v65;
    v64[2] = 27;
    *(_QWORD *)&v101 = 1;
    *((_QWORD *)&v101 + 1) = v64;
    v102 = 1;
    *(_QWORD *)v98 = 0;
    *(_QWORD *)&v98[8] = 8;
    *(_QWORD *)&v98[16] = 0;
    nullsub_1(v67, v66, v68, v69, v78);
    v107 = sub_140001650(24, 8);
    if ( !v107 )
      sub_14176E531(8, 24);
    *(_QWORD *)&v103 = v83;
    *((_QWORD *)&v103 + 1) = sub_141553F20;
    *(_QWORD *)v104 = &v97;
    *(_QWORD *)&v104[8] = sub_1402DDC10;
    sub_141543AF0(&v86, &unk_141832566, &v103);
    v70 = (_OWORD *)v107;
    *(_QWORD *)(v107 + 16) = v87;
    *v70 = v86;
    v71 = v101;
    v103 = v101;
    *(_QWORD *)v104 = v102;
    *(_QWORD *)&v104[24] = *(_QWORD *)&v98[16];
    *(_OWORD *)&v104[8] = *(_OWORD *)v98;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v98[8];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v104[24];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)v104;
    *(_OWORD *)(a1 + 8) = v71;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v70;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)v90 )
      sub_140001660(*(_QWORD *)&v90[8], *(_QWORD *)v90, 1);
    if ( (_QWORD)v91 )
      sub_140001660(v39, v91, 1);
    if ( v92.m256i_i64[1] )
      sub_140001660(v92.m256i_i64[2], v92.m256i_i64[1], 1);
    v54 = v93.m256i_i64[0];
    if ( (unsigned __int64)(v93.m256i_i64[0] - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_32;
    v55 = &v93.m256i_i64[1];
  }
  else
  {
    *(_QWORD *)&v95 = 0;
    *((_QWORD *)&v95 + 1) = 8;
    v96 = 0;
    nullsub_1(v36, v35, v37, v38, v72);
    v40 = sub_140001650(24, 8);
    if ( !v40 )
    {
      v109 = 1;
      sub_14176E531(8, 24);
    }
    v45 = (_QWORD *)v40;
    nullsub_1(v42, v41, v43, v44, v75);
    v46 = (void *)sub_140001650(27, 1);
    if ( !v46 )
    {
      v107 = (__int64)v45;
      sub_14176E54B(1, 27);
    }
    qmemcpy(v46, "thread_provider_consistency", 27);
    *v45 = 27;
    v45[1] = v46;
    v45[2] = 27;
    *(_QWORD *)&v101 = 1;
    *((_QWORD *)&v101 + 1) = v45;
    v102 = 1;
    nullsub_1(v48, v47, v49, v50, v76);
    v51 = sub_140001650(24, 8);
    if ( !v51 )
    {
      v108 = 1;
      sub_14176E531(8, 24);
    }
    v107 = v51;
    if ( v93.m256i_i64[0] == -1 )
    {
      *(_QWORD *)&v98[16] = v92.m256i_i64[3];
      *(_OWORD *)v98 = *(_OWORD *)&v92.m256i_u64[1];
    }
    else
    {
      *(_QWORD *)v98 = v93.m256i_i64[0];
      *(_OWORD *)&v98[8] = *(_OWORD *)&v93.m256i_u64[1];
      if ( v92.m256i_i64[1] )
        sub_140001660(v92.m256i_i64[2], v92.m256i_i64[1], 1);
    }
    *(_QWORD *)&v103 = v83;
    *((_QWORD *)&v103 + 1) = sub_141553F20;
    *(_QWORD *)v104 = v98;
    *(_QWORD *)&v104[8] = sub_1400015F0;
    sub_141543AF0(&v84, &unk_14183252F, &v103);
    if ( *(_QWORD *)v98 )
      sub_140001660(*(_QWORD *)&v98[8], *(_QWORD *)v98, 1);
    v52 = (_OWORD *)v107;
    *(_QWORD *)(v107 + 16) = v85;
    *v52 = v84;
    v53 = v95;
    v103 = v95;
    *(_QWORD *)v104 = v96;
    *(_QWORD *)&v104[24] = v102;
    *(_OWORD *)&v104[8] = v101;
    *(_QWORD *)(a1 + 40) = *((_QWORD *)&v101 + 1);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v104[24];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)v104;
    *(_OWORD *)(a1 + 8) = v53;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v52;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)v90 )
      sub_140001660(*(_QWORD *)&v90[8], *(_QWORD *)v90, 1);
    v54 = v91;
    if ( !(_QWORD)v91 )
      goto LABEL_32;
    v55 = (__int64 *)&v91 + 1;
  }
  sub_140001660(*v55, v54, 1);
LABEL_32:
  if ( v112.m256i_i64[3] != -1 && v112.m256i_i64[3] )
    sub_140001660(v80[0], v112.m256i_i64[3], 1);
  v56 = v112.m256i_i64[2];
  if ( v112.m256i_i64[2] )
  {
    v57 = (_QWORD *)(v112.m256i_i64[1] + 8);
    do
    {
      v58 = *(v57 - 1);
      if ( v58 )
        sub_140001660(*v57, v58, 1);
      v57 += 3;
      --v56;
    }
    while ( v56 );
  }
  if ( v112.m256i_i64[0] )
    sub_140001660(v112.m256i_i64[1], 24 * v112.m256i_i64[0], 8);
  return sub_140522A70(v82);
}


/*
行为结论（结构证据交叉确认，基于完整反编译体）：
1. provider 默认比较字面量硬编码为 "openai"（v6=aOpenai）；a3&1 时用 &dword_14180F528
   备用值（推测为测试/覆盖用途，非生产路径）。
2. sub_140C1CEF0(v90, a2, v6, 6) 按 provider="openai" 扫描线程行，得到计数/标志聚合到
   v90/v92/v93/v94（多路 SIMD 寄存器承载的聚合结果）。
3. 早退分支（第一个 if）：当 v93/v92/v94 聚合结果全 0（无异常线程）时，构造诊断 key
   ="thread_provider_consistency"（qmemcpy 27 字节字面量）+ 通过 sub_141543AF0 用
   unk_14183259E 模板拼出 ok 消息，写入 a1 返回结构体后直接 return。
4. 非早退分支：先调用 sub_140C0F880 做一次判定（若返回 v90[0]==2 直接走另一分支返回）；
   否则进入模块字符串常量段（aCodexmateLibCo_24="codexmate_lib::core::relay::codex_diagnostic"，
   aSrcCoreRelayCo_1="src\core\relay\codex_diagnostic.rs"）并在 v81!=0 时通过
   sub_14136A9F0 记录一条日志（对应 panic-Location 锚点确认路径）。
5. 调用 sub_1415181D0 拿计数器（v34），随后调用 sub_1405C2FA0(v90, a2, a3, &v103) 做实际的
   收集+计数，再 sub_1405226B0(&v103) 归约。根据 v92.m256i_i64[0]==2 且
   v91 高位==27503 分两路构造 diagnostic key="thread_provider_consistency"（两处均
   qmemcpy 27 字节相同字面量）+ 通过 sub_141543AF0 用 unk_141832566 / unk_14183252F
   两个不同模板拼出不同消息，写入 a1 返回结构体。
6. 函数尾部（LABEL_32 及后续）统一做临时分配的 drop（sub_140001660，Rust String/Vec
   的 dealloc 等价）清理，最终 return sub_140522A70(v82) 释放 v82（88字节 BYREF 缓冲）
   并返回。
7. 本函数纯读取诊断收集，未观察到任何持久化写入调用（无 handle/apply/write 系列符号）——
   与 mac 侧"纯只读诊断，不做修复写入"的结论一致。

诚实缺口：
- 未逐条验证与 mac 完全相同的具体诊断消息文案（win 侧走独立字符串模板池
  unk_14183259E/unk_141832566/unk_14183252F 等，非直接逐字节对照 mac 的消息模板，
  两者语义应等价但未做逐字符核对）。
- sub_1405C2FA0 内部调用的 sub_140B9D6B0（实际逐线程收集逻辑）本轮已尝试寻找
  native_off_openai_model_needs_fallback 谓词但未找到（见 0005 号文件说明）。
*/
