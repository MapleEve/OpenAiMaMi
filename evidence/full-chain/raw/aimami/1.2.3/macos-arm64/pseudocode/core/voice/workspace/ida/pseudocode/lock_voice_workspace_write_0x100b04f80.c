// __ZN13codexmate_lib4core5voice9workspace26lock_voice_workspace_write @ 0x100b04f80 | 基线 same-set
char __fastcall codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char result; // al
  __int64 v7; // rdx
  __int64 *v8; // r15
  __int64 (__fastcall *v9)(); // rcx
  _QWORD v10[3]; // [rsp+8h] [rbp-58h] BYREF
  __int64 **v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int64 *v14; // [rsp+38h] [rbp-28h] BYREF
  char v15; // [rsp+40h] [rbp-20h]

  if ( qword_1019FF2A0 ) /*0x100b04f9a*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hab11dcae9b0d5feb(&codexmate_lib::core::voice::workspace::voice_workspace_write_lock::LOCK::he14e92e75a85947b); /*0x100b05079*/
    v3 = codexmate_lib::core::voice::workspace::voice_workspace_write_lock::LOCK::he14e92e75a85947b; /*0x100b0507e*/
    if ( codexmate_lib::core::voice::workspace::voice_workspace_write_lock::LOCK::he14e92e75a85947b ) /*0x100b05088*/
      goto LABEL_3; /*0x100b05088*/
  }
  else
  {
    v3 = codexmate_lib::core::voice::workspace::voice_workspace_write_lock::LOCK::he14e92e75a85947b; /*0x100b04fa0*/
    if ( codexmate_lib::core::voice::workspace::voice_workspace_write_lock::LOCK::he14e92e75a85947b ) /*0x100b04faa*/
      goto LABEL_3; /*0x100b04faa*/
  }
  v3 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::core::voice::workspace::voice_workspace_write_lock::LOCK::he14e92e75a85947b); /*0x100b0509a*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x100b04fb0*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x100b04fbf*/
  {
    result = 0; /*0x100b04fcb*/
    if ( byte_1019FF298 ) /*0x100b04fd6*/
      goto LABEL_5; /*0x100b04fd6*/
LABEL_11:
    *(_QWORD *)(a1 + 8) = &codexmate_lib::core::voice::workspace::voice_workspace_write_lock::LOCK::he14e92e75a85947b; /*0x100b050b8*/
    *(_BYTE *)(a1 + 16) = result; /*0x100b050c3*/
    *(_QWORD *)a1 = 11; /*0x100b050c6*/
    return result; /*0x100b050d7*/
  }
  result = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) ^ 1; /*0x100b050a7*/
  if ( !byte_1019FF298 ) /*0x100b050b2*/
    goto LABEL_11; /*0x100b050b2*/
LABEL_5:
  v14 = &codexmate_lib::core::voice::workspace::voice_workspace_write_lock::LOCK::he14e92e75a85947b; /*0x100b04fdc*/
  v15 = result; /*0x100b04fe7*/
  v11 = &v14; /*0x100b04fee*/
  v12 = _$LT$std..sync..poison..PoisonError$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb1357f3846f4009a; /*0x100b04ff9*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v10, &unk_1017CBFAD, &v11); /*0x100b0500c*/
  v11 = (__int64 **)v10[0]; /*0x100b05019*/
  v12 = (__int64 (__fastcall *)())v10[1]; /*0x100b0501d*/
  v13 = v10[2]; /*0x100b05025*/
  v8 = v14; /*0x100b05029*/
  if ( !v15 /*0x100b050d8*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v10,
                           &unk_1017CBFAD,
                           v7,
                           std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *((_BYTE *)v8 + 8) = 1; /*0x100b050e5*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v8); /*0x100b0504c*/
  *(_QWORD *)a1 = 10; /*0x100b05051*/
  v9 = v12; /*0x100b0505c*/
  *(_QWORD *)(a1 + 8) = v11; /*0x100b05060*/
  *(_QWORD *)(a1 + 16) = v9; /*0x100b05064*/
  result = v13; /*0x100b05068*/
  *(_QWORD *)(a1 + 24) = v13; /*0x100b0506c*/
  return result; /*0x100b050cd*/
}