// codexmate_lib::commands::system::restart_codex @ 0x1006c8fb0
// session <审计会话> | AiMaMi 1.1.8 macos-arm64 (universal Mach-O, x86_64 slice; app-level facts only, arch noise filtered)
// role in restart_codex(20/29) call tree; source=ida.decompile, 反编译器 real body, no truncation

_QWORD *__fastcall codexmate_lib::commands::system::restart_codex::hb63e3eeac5d259e2(_QWORD *a1)
{
  __int64 v1; // rax
  _DWORD v3[24]; // [rsp+0h] [rbp-100h] BYREF
  _DWORD v4[24]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v5[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v6; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v7; // [rsp+E0h] [rbp-20h]
  __int64 v8; // [rsp+E8h] [rbp-18h]
  _BYTE v9[9]; // [rsp+F7h] [rbp-9h] BYREF

  codexmate_lib::platform::process::stop_codex_for_file_edit::h58b70230213b1120(v3, 5, 0); /*0x1006c8fcd*/
  if ( v3[0] != 10 ) /*0x1006c8fd9*/
  {
    qmemcpy(v4, v3, sizeof(v4)); /*0x1006c908c*/
    if ( v4[0] != 10 ) /*0x1006c9096*/
      goto LABEL_3; /*0x1006c9096*/
LABEL_6:
    *a1 = 0x8000000000000000LL; /*0x1006c909c*/
    return a1; /*0x1006c90a6*/
  }
  codexmate_lib::platform::process::launch_codex_app::h91cbb8eff855c58e(v4); /*0x1006c8fe6*/
  if ( v4[0] == 10 ) /*0x1006c8ff2*/
    goto LABEL_6; /*0x1006c8ff2*/
LABEL_3:
  qmemcpy(v3, v4, sizeof(v3)); /*0x1006c900e*/
  v6 = 0; /*0x1006c9011*/
  v7 = 1; /*0x1006c9019*/
  v8 = 0; /*0x1006c9021*/
  v5[2] = 1610612768; /*0x1006c9029*/
  v5[0] = &v6; /*0x1006c9035*/
  v5[1] = &anon_e90f81edc9eb47f28b006fedbc3b914a_187; /*0x1006c9040*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1006c904b*/
                          v3,
                          v5) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006c90d4*/
      &anon_e90f81edc9eb47f28b006fedbc3b914a_188,
      55,
      v9,
      &anon_e90f81edc9eb47f28b006fedbc3b914a_201,
      &anon_e90f81edc9eb47f28b006fedbc3b914a_190);
  a1[2] = v8; /*0x1006c9058*/
  v1 = v6; /*0x1006c905c*/
  a1[1] = v7; /*0x1006c9064*/
  *a1 = v1; /*0x1006c9068*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v4); /*0x1006c9072*/
  return a1; /*0x1006c90ac*/
}
