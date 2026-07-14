// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_installed_skills node 0x10054cec0 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..SkillListPayload$GT$$GT$::hfbd59de1fb042319(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // rdi

  v6 = *a1; /*0x10054ced1*/
  result = -*a1; /*0x10054ced7*/
  if ( !__OFSUB__(result, 1) ) /*0x10054ceda*/
  {
    v9 = a1[2] + 1; /*0x10054cee7*/
    v10 = a1[1]; /*0x10054ceea*/
    while ( v9 != 1 ) /*0x10054cef4*/
    {
      --v9; /*0x10054cefd*/
      result = core::ptr::drop_in_place$LT$codexmate_lib..core..models..InstalledSkillSummary$GT$::h33eb09211ffbfd92( /*0x10054cf00*/
                 v10,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6);
      v10 += 184; /*0x10054cf05*/
    }
    if ( v6 ) /*0x10054cf0d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054cf1e*/
    if ( a1[3] ) /*0x10054cf23*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054cf43*/
  }
  return result; /*0x10054cf35*/
}