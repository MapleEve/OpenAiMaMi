// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x1004f1cc0 depth=2
// core3ptr66drop_in_place::he2a6fe445548b11cE_0
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..models..SkillListPayload$GT$::he2a6fe445548b11c(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 result; // rax

  v7 = a1[2] + 1; /*0x1004f1cd9*/
  v8 = a1[1]; /*0x1004f1cdc*/
  while ( v7 != 1 ) /*0x1004f1ce4*/
  {
    --v7; /*0x1004f1ced*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..InstalledSkillSummary$GT$::h33eb09211ffbfd92( /*0x1004f1cf0*/
      v8,
      a2,
      a3,
      a4,
      a5,
      a6);
    v8 += 184; /*0x1004f1cf5*/
  }
  result = *a1; /*0x1004f1cfa*/
  if ( *a1 ) /*0x1004f1cfa*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f1d11*/
  if ( a1[3] ) /*0x1004f1d16*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f1d36*/
  return result; /*0x1004f1d2c*/
}