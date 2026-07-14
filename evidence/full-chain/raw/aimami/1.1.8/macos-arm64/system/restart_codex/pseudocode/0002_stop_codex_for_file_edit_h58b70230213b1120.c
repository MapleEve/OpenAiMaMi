// codexmate_lib::platform::process::stop_codex_for_file_edit @ 0x1001c0ce0
// session <审计会话> | AiMaMi 1.1.8 macos-arm64 (universal Mach-O, x86_64 slice; app-level facts only, arch noise filtered)
// role in restart_codex(20/29) call tree; source=ida.decompile, 反编译器 real body, no truncation

__int64 *__fastcall codexmate_lib::platform::process::stop_codex_for_file_edit::h58b70230213b1120(
        __int64 *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // r14
  unsigned int v8; // edx
  unsigned int v9; // r15d
  __int64 v10; // rax
  unsigned int v11; // edx
  bool v12; // cc
  __int64 v13; // rax
  _DWORD v15[30]; // [rsp+8h] [rbp-78h] BYREF

  if ( (unsigned __int8)codexmate_lib::platform::process::is_process_running::h2043172b9767bad6() ) /*0x1001c0cf6*/
  {
    codexmate_lib::platform::process::request_codex_app_quit::h7287a6577520f290(v15); /*0x1001c0d03*/
    if ( v15[0] != 10 ) /*0x1001c0d0c*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v15); /*0x1001c0d12*/
    v5 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c0d1c*/
    v7 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x1001c0d2c*/
           v5,
           v6,
           a2,
           a3);
    v9 = v8; /*0x1001c0d2f*/
    v10 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c0d32*/
    v12 = v10 < v7; /*0x1001c0d37*/
    if ( v10 != v7 ) /*0x1001c0d3a*/
      goto LABEL_7; /*0x1001c0d3a*/
LABEL_5:
    if ( v11 < v9 ) /*0x1001c0d43*/
    {
      while ( (unsigned __int8)codexmate_lib::platform::process::is_process_running::h2043172b9767bad6() ) /*0x1001c0d59*/
      {
        std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x1001c0d62*/
        v13 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c0d67*/
        v12 = v13 < v7; /*0x1001c0d6c*/
        if ( v13 == v7 ) /*0x1001c0d6f*/
          goto LABEL_5; /*0x1001c0d6f*/
LABEL_7:
        if ( !v12 ) /*0x1001c0d50*/
          break; /*0x1001c0d50*/
      }
    }
  }
  codexmate_lib::platform::process::kill_codex_processes_until_clear::h163807c1665f0c95(a1); /*0x1001c0d73*/
  return a1; /*0x1001c0d7e*/
}
