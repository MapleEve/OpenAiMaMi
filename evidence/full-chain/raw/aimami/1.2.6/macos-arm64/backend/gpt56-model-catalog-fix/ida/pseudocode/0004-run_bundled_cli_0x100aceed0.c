// codexmate_lib::core::relay::codex_catalog::run_bundled_cli::h7475a7ed14327fce
// EA 0x100aceed0, size 1858B (0x742), macOS, AiMaMi 1.2.6
// 完整反编译，无截断（红线20核验：decompile() code 字段长度 13192 字符，无截断标记）。
//
// 修复记录：此前同名文件是一份手写摘要/删节稿（只保留了约 9-48% 的关键调用序列并用
// "..." 省略了大量真实指令），并非 decompile() 的原始输出。本次重新调用 decompile() 工具
// 直接获取，替换为真实逐行伪代码（含全部临时变量、地址注释、分支标签）。
// changelog-item-4证据: run_bundled_cli — 真实spawn bundled CLI子进程(Command::new+arg+stdin/stdout/stderr管道+spawn)，500ms超时轮询try_wait，超时kill，最终wait_with_output取输出；用于官方catalog抓取失败时的本地CLI回退源
__int64 __fastcall codexmate_lib::core::relay::codex_catalog::run_bundled_cli::h7475a7ed14327fce(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v10; // r15
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r14
  unsigned int v19; // edx
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // r13
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // r12
  __int64 v43; // rsi
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // r13
  __int64 v47; // rsi
  __int64 v48; // r14
  __int64 v49; // r15
  __int64 v50; // r12
  __int64 v51; // rsi
  _BYTE __dst[200]; // [rsp+0h] [rbp-230h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-168h] BYREF
  int v54; // [rsp+D0h] [rbp-160h]
  _DWORD v55[2]; // [rsp+D8h] [rbp-158h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-150h]
  _QWORD v57[2]; // [rsp+E8h] [rbp-148h] BYREF
  _QWORD __src[25]; // [rsp+F8h] [rbp-138h] BYREF
  __int64 *v59; // [rsp+1C0h] [rbp-70h] BYREF
  __int128 v60; // [rsp+1C8h] [rbp-68h]
  __int64 (__fastcall *v61)(); // [rsp+1D8h] [rbp-58h]
  __int64 v62; // [rsp+1E0h] [rbp-50h] BYREF
  _BYTE v63[24]; // [rsp+1ECh] [rbp-44h] BYREF
  _BYTE v64[41]; // [rsp+207h] [rbp-29h] BYREF

  v57[0] = a6; /*0x100aceef5*/
  v57[1] = a7; /*0x100aceefc*/
  v53 = a8; /*0x100acef03*/
  v54 = 500000000; /*0x100acef0a*/
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(__src, a2, a3); /*0x100acef1e*/
  std::sys::process::unix::common::Command::stdin::h62c5b3b4d0b5814e(__src, 1); /*0x100acef2b*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x100acef46*/
  v10 = &a4[2 * a5]; /*0x100acef4f*/
  do /*0x100acef78*/
  {
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__dst, *a4, a4[1]); /*0x100acef6c*/
    a4 += 2; /*0x100acef71*/
  }
  while ( a4 != v10 ); /*0x100acef78*/
  std::sys::process::unix::common::Command::stdout::h556648047a6f261e(__dst, 2); /*0x100acef86*/
  std::sys::process::unix::common::Command::stderr::h9704f649d4d0b361(__dst, 2); /*0x100acef97*/
  std::process::Command::spawn::hcb9dc323794e167a(__src, __dst); /*0x100acefaa*/
  if ( LODWORD(__src[0]) == 2 ) /*0x100acefb8*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x100acefc9*/
    {
      v11 = __src[1] - 1LL; /*0x100acefcb*/
      v12 = *(_QWORD *)(__src[1] - 1LL); /*0x100acefcf*/
      v13 = *(_QWORD *)(__src[1] + 7LL); /*0x100acefd3*/
      if ( *(_QWORD *)v13 ) /*0x100acefd7*/
        (*(void (__fastcall **)(__int64))v13)(v12); /*0x100acefe3*/
      v14 = *(_QWORD *)(v13 + 8); /*0x100acefe5*/
      if ( v14 ) /*0x100acefed*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16)); /*0x100aceff7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24, 8); /*0x100acf009*/
    }
    v15 = 0x8000000000000000LL; /*0x100acf00e*/
LABEL_11:
    *a1 = v15; /*0x100acf018*/
    return core::ptr::drop_in_place$LT$std..process..Command$GT$::h513f921e6d82d630(__dst); /*0x100acf01b*/
  }
  *(_DWORD *)&v63[20] = HIDWORD(__src[2]); /*0x100acf026*/
  *(_OWORD *)&v63[4] = *(_OWORD *)((char *)__src + 4); /*0x100acf03b*/
  *(_DWORD *)v63 = __src[0]; /*0x100acf03f*/
  v16 = std::time::Instant::now::hda76af2c3a449055(__src); /*0x100acf042*/
  v18 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x100acf059*/
          v16,
          v17,
          a8,
          500000000);
  v20 = v19; /*0x100acf05c*/
  while ( 1 ) /*0x100acf087*/
  {
    std::process::Child::try_wait::h2083f420dd3f491c(v55, v63); /*0x100acf087*/
    if ( v55[0] == 1 ) /*0x100acf093*/
    {
      v25 = v56; /*0x100acf1f7*/
      v62 = v56; /*0x100acf1fe*/
      v26 = std::process::Child::kill::h216e7437f57b667c(v63); /*0x100acf206*/
      if ( (v26 & 3) == 1 ) /*0x100acf213*/
      {
        v44 = v26 - 1; /*0x100acf583*/
        v45 = *(_QWORD *)(v26 - 1); /*0x100acf586*/
        v46 = *(_QWORD *)(v26 + 7); /*0x100acf58a*/
        if ( *(_QWORD *)v46 ) /*0x100acf58e*/
          (*(void (__fastcall **)(__int64))v46)(v45); /*0x100acf59a*/
        v47 = *(_QWORD *)(v46 + 8); /*0x100acf59c*/
        if ( v47 ) /*0x100acf5a3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v47, *(_QWORD *)(v46 + 16)); /*0x100acf5ac*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 24, 8); /*0x100acf5be*/
      }
      std::process::Child::wait::hb8726838914c9ff8(__src, v63); /*0x100acf224*/
      if ( LODWORD(__src[0]) && (__src[1] & 3) == 1 ) /*0x100acf241*/
      {
        v36 = __src[1] - 1LL; /*0x100acf4ca*/
        v37 = *(_QWORD *)(__src[1] - 1LL); /*0x100acf4ce*/
        v38 = *(_QWORD *)(__src[1] + 7LL); /*0x100acf4d2*/
        if ( *(_QWORD *)v38 ) /*0x100acf4d6*/
          (*(void (__fastcall **)(__int64))v38)(v37); /*0x100acf4e2*/
        v39 = *(_QWORD *)(v38 + 8); /*0x100acf4e4*/
        if ( v39 ) /*0x100acf4eb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v39, *(_QWORD *)(v38 + 16)); /*0x100acf4f4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24, 8); /*0x100acf506*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x100acf519*/
        {
LABEL_31:
          *a1 = 0x8000000000000000LL; /*0x100acf327*/
          if ( (v25 & 3) == 1 ) /*0x100acf33d*/
          {
            v32 = v25 - 1; /*0x100acf473*/
            v33 = *(_QWORD *)(v25 - 1); /*0x100acf478*/
            v34 = *(_QWORD *)(v25 + 7); /*0x100acf47d*/
            if ( *(_QWORD *)v34 ) /*0x100acf482*/
              (*(void (__fastcall **)(__int64))v34)(v33); /*0x100acf48e*/
            v35 = *(_QWORD *)(v34 + 8); /*0x100acf490*/
            if ( v35 ) /*0x100acf498*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16)); /*0x100acf4a2*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 24, 8); /*0x100acf4b4*/
            v24 = *(unsigned int *)&v63[12]; /*0x100acf4b9*/
            if ( *(_DWORD *)&v63[12] == -1 ) /*0x100acf4bf*/
              goto LABEL_34; /*0x100acf4bf*/
          }
          else
          {
            v24 = *(unsigned int *)&v63[12]; /*0x100acf343*/
            if ( *(_DWORD *)&v63[12] == -1 ) /*0x100acf349*/
              goto LABEL_34; /*0x100acf349*/
          }
LABEL_33:
          close_NOCANCEL(v24); /*0x100acf34b*/
          goto LABEL_34; /*0x100acf34b*/
        }
      }
      else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x100acf255*/
      {
        goto LABEL_31; /*0x100acf255*/
      }
      v59 = v57; /*0x100acf262*/
      *(_QWORD *)&v60 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943; /*0x100acf26d*/
      *((_QWORD *)&v60 + 1) = &v62; /*0x100acf275*/
      v61 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100acf280*/
      __src[6] = 2; /*0x100acf284*/
      __src[7] = &unk_1016FF3B0; /*0x100acf296*/
      __src[8] = 41; /*0x100acf29d*/
      __src[10] = &unk_10186BD9D; /*0x100acf2af*/
      __src[11] = &v59; /*0x100acf2ba*/
      __src[0] = 0; /*0x100acf2c1*/
      __src[1] = &unk_1016FF3B0; /*0x100acf2cc*/
      __src[2] = 41; /*0x100acf2d3*/
      __src[3] = 0; /*0x100acf2de*/
      __src[4] = "src/core/relay/codex_catalog.rs"; /*0x100acf2f0*/
      __src[5] = 31; /*0x100acf2f7*/
      __src[9] = 0x28B00000001LL; /*0x100acf30c*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v64, __src); /*0x100acf31e*/
      v25 = v62; /*0x100acf323*/
      goto LABEL_31; /*0x100acf323*/
    }
    if ( v55[1] == 1 ) /*0x100acf0a0*/
      break; /*0x100acf0a0*/
    v21 = std::time::Instant::now::hda76af2c3a449055(v55); /*0x100acf0a6*/
    if ( v21 == v18 ) /*0x100acf0ae*/
    {
      if ( v22 >= v20 ) /*0x100acf073*/
        goto LABEL_19; /*0x100acf073*/
    }
    else if ( v21 >= v18 ) /*0x100acf0b3*/
    {
LABEL_19:
      v23 = std::process::Child::kill::h216e7437f57b667c(v63); /*0x100acf0b5*/
      if ( (v23 & 3) == 1 ) /*0x100acf0c6*/
      {
        v48 = v23 - 1; /*0x100acf5cb*/
        v49 = *(_QWORD *)(v23 - 1); /*0x100acf5ce*/
        v50 = *(_QWORD *)(v23 + 7); /*0x100acf5d2*/
        if ( *(_QWORD *)v50 ) /*0x100acf5d6*/
          (*(void (__fastcall **)(__int64))v50)(v49); /*0x100acf5e2*/
        v51 = *(_QWORD *)(v50 + 8); /*0x100acf5e4*/
        if ( v51 ) /*0x100acf5ec*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v51, *(_QWORD *)(v50 + 16)); /*0x100acf5f6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 24, 8); /*0x100acf608*/
      }
      std::process::Child::wait::hb8726838914c9ff8(__src, v63); /*0x100acf0d7*/
      if ( LODWORD(__src[0]) && (__src[1] & 3) == 1 ) /*0x100acf0f4*/
      {
        v40 = __src[1] - 1LL; /*0x100acf524*/
        v41 = *(_QWORD *)(__src[1] - 1LL); /*0x100acf528*/
        v42 = *(_QWORD *)(__src[1] + 7LL); /*0x100acf52c*/
        if ( *(_QWORD *)v42 ) /*0x100acf530*/
          (*(void (__fastcall **)(__int64))v42)(v41); /*0x100acf53c*/
        v43 = *(_QWORD *)(v42 + 8); /*0x100acf53e*/
        if ( v43 ) /*0x100acf546*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v43, *(_QWORD *)(v42 + 16)); /*0x100acf550*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 24, 8); /*0x100acf562*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100acf575*/
        {
LABEL_23:
          v59 = &v53; /*0x100acf10e*/
          *(_QWORD *)&v60 = _$LT$core..time..Duration$u20$as$u20$core..fmt..Debug$GT$::fmt::h14ae0fb6ce12691e; /*0x100acf120*/
          *((_QWORD *)&v60 + 1) = v57; /*0x100acf12b*/
          v61 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943; /*0x100acf136*/
          __src[6] = 2; /*0x100acf13a*/
          __src[7] = &unk_1016FF3B0; /*0x100acf14c*/
          __src[8] = 41; /*0x100acf153*/
          __src[10] = &unk_10186BD5E; /*0x100acf165*/
          __src[11] = &v59; /*0x100acf170*/
          __src[0] = 0; /*0x100acf177*/
          __src[1] = &unk_1016FF3B0; /*0x100acf182*/
          __src[2] = 41; /*0x100acf189*/
          __src[3] = 0; /*0x100acf194*/
          __src[4] = "src/core/relay/codex_catalog.rs"; /*0x100acf1a6*/
          __src[5] = 31; /*0x100acf1ad*/
          __src[9] = 0x28100000001LL; /*0x100acf1c2*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v64, __src); /*0x100acf1d4*/
        }
      }
      else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100acf108*/
      {
        goto LABEL_23; /*0x100acf108*/
      }
      *a1 = 0x8000000000000000LL; /*0x100acf1e3*/
      v24 = *(unsigned int *)&v63[12]; /*0x100acf1e6*/
      if ( *(_DWORD *)&v63[12] == -1 ) /*0x100acf1ec*/
      {
LABEL_34:
        if ( *(_DWORD *)&v63[16] != -1 ) /*0x100acf356*/
          close_NOCANCEL(*(unsigned int *)&v63[16]); /*0x100acf358*/
        if ( *(_DWORD *)&v63[20] != -1 ) /*0x100acf363*/
          close_NOCANCEL(*(unsigned int *)&v63[20]); /*0x100acf369*/
        return core::ptr::drop_in_place$LT$std..process..Command$GT$::h513f921e6d82d630(__dst); /*0x100acf36e*/
      }
      goto LABEL_33; /*0x100acf1ec*/
    }
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 25000000); /*0x100acf07c*/
  }
  v60 = *(_OWORD *)&v63[8]; /*0x100acf383*/
  v59 = *(__int64 **)v63; /*0x100acf387*/
  std::process::Child::wait_with_output::hf46682e0b764aa14(__src, &v59); /*0x100acf396*/
  if ( !__OFSUB__(0, __src[0]) ) /*0x100acf3a4*/
  {
    a1[6] = __src[6]; /*0x100acf42c*/
    a1[5] = __src[5]; /*0x100acf437*/
    a1[4] = __src[4]; /*0x100acf442*/
    a1[3] = __src[3]; /*0x100acf44d*/
    a1[2] = __src[2]; /*0x100acf458*/
    v15 = __src[0]; /*0x100acf45c*/
    a1[1] = __src[1]; /*0x100acf46a*/
    goto LABEL_11; /*0x100acf46e*/
  }
  *a1 = 0x8000000000000000LL; /*0x100acf3b0*/
  if ( (__src[1] & 3) == 1 ) /*0x100acf3c2*/
  {
    v27 = __src[1] - 1LL; /*0x100acf3c4*/
    v28 = *(_QWORD *)(__src[1] - 1LL); /*0x100acf3c8*/
    v29 = *(_QWORD *)(__src[1] + 7LL); /*0x100acf3cc*/
    if ( *(_QWORD *)v29 ) /*0x100acf3d0*/
      (*(void (__fastcall **)(__int64))v29)(v28); /*0x100acf3dc*/
    v30 = *(_QWORD *)(v29 + 8); /*0x100acf3de*/
    if ( v30 ) /*0x100acf3e6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v30, *(_QWORD *)(v29 + 16)); /*0x100acf3f0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 24, 8); /*0x100acf402*/
  }
  return core::ptr::drop_in_place$LT$std..process..Command$GT$::h513f921e6d82d630(__dst); /*0x100acf413*/
}
/*
真实行为结论（基于完整反编译核对）：
run_bundled_cli 构造一个 std::process::Command（可执行文件路径+argv 数组来自 a2/a3/a4/a5），
stdin=null、stdout/stderr=piped，spawn 失败直接返回错误（tag=0x8000000000000000）。
spawn 成功后进入 500ms 超时轮询：Instant::now()+Duration(secs=a8,nanos=500000000) 为截止时间，
每次循环调用 try_wait()，若进程已退出则跳出并用 wait_with_output() 一次性拿到完整
stdout/stderr/exit_status；若 try_wait 内部错误也跳出；否则检查是否超时，超时则 kill()
子进程后 wait() 回收，并记录一条 tracing::warn!（panic-Location 锚点确认为
"src/core/relay/codex_catalog.rs"），随后走清理关闭 fd 分支返回错误；未超时则
thread::sleep(25ms) 后继续下一轮轮询。全程对 Command/Child 各步骤都有对应的
drop_in_place 清理（错误路径下的资源释放）。
*/
