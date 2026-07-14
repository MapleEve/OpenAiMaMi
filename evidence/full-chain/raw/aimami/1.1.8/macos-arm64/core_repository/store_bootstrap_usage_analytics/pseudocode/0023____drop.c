// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_usage_analytics node 0x1007127a0 depth=2
__int64 __fastcall _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h828c95178eb6635b(
        __int64 a1)
{
  __int64 v1; // r15
  _BYTE *v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16); /*0x1007127ab*/
  if ( v1 ) /*0x1007127b2*/
  {
    v2 = *(_BYTE **)(a1 + 8); /*0x1007127b4*/
    do /*0x1007127c7*/
    {
      if ( *v2 != 22 ) /*0x1007127cc*/
      {
        core::ptr::drop_in_place$LT$serde_core..private..content..Content$GT$::h72bab24ea874f13d(v2); /*0x1007127d1*/
        result = core::ptr::drop_in_place$LT$serde_core..private..content..Content$GT$::h72bab24ea874f13d(v2 + 32); /*0x1007127da*/
      }
      v2 += 64; /*0x1007127c0*/
      --v1; /*0x1007127c4*/
    }
    while ( v1 ); /*0x1007127c7*/
  }
  return result; /*0x1007127e1*/
}