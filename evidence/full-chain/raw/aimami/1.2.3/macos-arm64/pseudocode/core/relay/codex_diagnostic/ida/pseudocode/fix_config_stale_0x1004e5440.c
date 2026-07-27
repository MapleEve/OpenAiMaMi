// __ZN13codexmate_lib4core5relay16codex_diagnostic16fix_config_stale @ 0x1004e5440 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_config_stale::h961bc9ea7feb54e4(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD *, __int64))
{
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _BYTE v19[72]; // [rsp+0h] [rbp-E0h] BYREF
  _QWORD v20[13]; // [rsp+48h] [rbp-98h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-30h]

  v21 = a4; /*0x1004e545a*/
  codexmate_lib::core::relay::codex_diagnostic::fix_config_stale_text::hccf66cc8098fc3c2(v20); /*0x1004e546e*/
  result = v20[0]; /*0x1004e5473*/
  v12 = v20[1]; /*0x1004e547a*/
  v13 = v20[2]; /*0x1004e5481*/
  if ( v20[0] == 11 ) /*0x1004e548c*/
  {
    if ( v20[1] ) /*0x1004e5491*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20[2], v20[1], 1); /*0x1004e5498*/
    result = a6(v20, a5); /*0x1004e54a7*/
    if ( LODWORD(v20[0]) == 11 ) /*0x1004e54b1*/
    {
      std::fs::read_to_string::inner::hcce2334f4117b5b3(v20, a2, a3); /*0x1004e54c4*/
      v14 = v20[0]; /*0x1004e54c9*/
      v15 = v20[1]; /*0x1004e54d0*/
      if ( __OFSUB__(-v20[0], 1) ) /*0x1004e54da*/
      {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x1004e54f0*/
          0x8000000000000000LL,
          v20[1]);
        v15 = 0; /*0x1004e54f5*/
      }
      else
      {
        v16 = v20[2]; /*0x1004e5566*/
      }
      codexmate_lib::core::relay::codex_diagnostic::check_config_stale::hd929a92a875899c8(v20, v15, v16, v21); /*0x1004e557b*/
      codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hbdd9e58b4320b7fd( /*0x1004e55a7*/
        v19,
        &anon_92869709a5e99ce1936aa4e326b6c562_346,
        12,
        v20,
        &unk_1015FC81E,
        36);
      qmemcpy(a1 + 1, v19, 0x48u); /*0x1004e55bc*/
      *a1 = 11; /*0x1004e55bf*/
      result = 2 * v14; /*0x1004e55c6*/
      if ( 2 * v14 ) /*0x1004e55c6*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v14, 1); /*0x1004e55de*/
    }
    else
    {
      qmemcpy(a1, v20, 0x60u); /*0x1004e5561*/
    }
  }
  else
  {
    v17 = v20[3]; /*0x1004e54fa*/
    v18 = v20[4]; /*0x1004e54fe*/
    a1[11] = v20[11]; /*0x1004e5506*/
    a1[10] = v20[10]; /*0x1004e550e*/
    a1[9] = v20[9]; /*0x1004e5516*/
    a1[8] = v20[8]; /*0x1004e551e*/
    a1[7] = v20[7]; /*0x1004e5526*/
    a1[6] = v20[6]; /*0x1004e552e*/
    a1[5] = v20[5]; /*0x1004e5536*/
    a1[4] = v18; /*0x1004e553a*/
    a1[1] = v12; /*0x1004e553e*/
    a1[2] = v13; /*0x1004e5542*/
    a1[3] = v17; /*0x1004e5546*/
    *a1 = result; /*0x1004e554a*/
  }
  return result; /*0x1004e55e3*/
}