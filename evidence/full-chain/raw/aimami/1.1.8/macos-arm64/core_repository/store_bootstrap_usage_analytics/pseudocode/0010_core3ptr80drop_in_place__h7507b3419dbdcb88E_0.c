// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_usage_analytics node 0x10054c030 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(
        __int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r13

  if ( *(_DWORD *)(a1 + 16) != 3 ) /*0x10054c045*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e(a1 + 16); /*0x10054c04b*/
    v2 = *(_QWORD *)(a1 + 688) + 1LL; /*0x10054c05e*/
    v3 = *(_QWORD *)(a1 + 680); /*0x10054c061*/
    while ( v2 != 1 ) /*0x10054c074*/
    {
      --v2; /*0x10054c07d*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(v3); /*0x10054c080*/
      v3 += 336; /*0x10054c085*/
    }
    if ( *(_QWORD *)(a1 + 672) ) /*0x10054c08a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054c0a5*/
  }
  v4 = *(_QWORD *)(a1 + 696); /*0x10054c0aa*/
  if ( !__OFSUB__(-v4, 1) ) /*0x10054c0b7*/
  {
    v5 = *(_QWORD *)(a1 + 720); /*0x10054c0c7*/
    if ( v5 != 0x8000000000000000LL && v5 ) /*0x10054c0d6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054c0e4*/
    v6 = *(_QWORD *)(a1 + 712); /*0x10054c0f0*/
    if ( v6 ) /*0x10054c0fa*/
    {
      v7 = *(_QWORD *)(a1 + 704) + 8LL; /*0x10054c0fc*/
      do /*0x10054c117*/
      {
        if ( *(_QWORD *)(v7 - 8) ) /*0x10054c119*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054c12b*/
        v7 += 40; /*0x10054c110*/
        --v6; /*0x10054c114*/
      }
      while ( v6 ); /*0x10054c117*/
    }
    if ( v4 ) /*0x10054c135*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054c147*/
  }
  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..McpServerListPayload$GT$$GT$::ha92737fbdd27ed42((__int64 *)(a1 + 792)); /*0x10054c153*/
  return core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..SkillListPayload$GT$$GT$::hfbd59de1fb042319(a1 + 856); /*0x10054c166*/
}