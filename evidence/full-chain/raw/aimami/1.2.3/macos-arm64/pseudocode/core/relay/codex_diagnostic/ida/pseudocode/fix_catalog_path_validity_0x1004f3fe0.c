// __ZN13codexmate_lib4core5relay16codex_diagnostic25fix_catalog_path_validity @ 0x1004f3fe0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_catalog_path_validity::h1e41ae17259608a3(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(_QWORD *, __int64))
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10[9]; // [rsp+8h] [rbp-D8h] BYREF
  _QWORD v11[18]; // [rsp+50h] [rbp-90h] BYREF

  result = a5(v11, a4); /*0x1004f4007*/
  if ( LODWORD(v11[0]) == 11 ) /*0x1004f4011*/
  {
    std::fs::read_to_string::inner::hcce2334f4117b5b3(v11, a2[7], a2[8]); /*0x1004f4022*/
    v7 = v11[0]; /*0x1004f4027*/
    v8 = v11[1]; /*0x1004f402e*/
    if ( __OFSUB__(-v11[0], 1) ) /*0x1004f4038*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x1004f404a*/
        0x8000000000000000LL,
        v11[1]);
      v8 = 0; /*0x1004f404f*/
    }
    else
    {
      v9 = v11[2]; /*0x1004f406b*/
    }
    codexmate_lib::core::relay::codex_diagnostic::check_catalog_path_validity::hd7a64d474efe9821( /*0x1004f408b*/
      v11,
      v8,
      v9,
      a2[73],
      a2[74],
      a3);
    codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hbdd9e58b4320b7fd( /*0x1004f40b7*/
      v10,
      &anon_92869709a5e99ce1936aa4e326b6c562_605,
      0x15u,
      v11,
      &unk_1015FD7B0,
      0x31u);
    qmemcpy(a1 + 1, v10, 0x48u); /*0x1004f40cc*/
    *a1 = 11; /*0x1004f40cf*/
    result = 2 * v7; /*0x1004f40d6*/
    if ( 2 * v7 ) /*0x1004f40d6*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1004f40ee*/
  }
  else
  {
    qmemcpy(a1, v11, 0x60u); /*0x1004f4063*/
  }
  return result; /*0x1004f40f3*/
}