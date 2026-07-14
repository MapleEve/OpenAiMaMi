// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x1005f1f90 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..RestoreSummary$GT$::hbdb181ed4c9cc782(
        _QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 result; // rax

  v1 = a1[2]; /*0x1005f1fa2*/
  if ( v1 ) /*0x1005f1fa9*/
  {
    v2 = a1[1] + 8LL; /*0x1005f1fab*/
    do /*0x1005f1fc7*/
    {
      if ( *(_QWORD *)(v2 - 8) ) /*0x1005f1fc9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f1fdc*/
      v2 += 24; /*0x1005f1fc0*/
      --v1; /*0x1005f1fc4*/
    }
    while ( v1 ); /*0x1005f1fc7*/
  }
  if ( *a1 ) /*0x1005f1fe3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f1ffb*/
  v3 = a1[5]; /*0x1005f2004*/
  if ( v3 ) /*0x1005f200b*/
  {
    v4 = a1[4] + 8LL; /*0x1005f200d*/
    do /*0x1005f2027*/
    {
      if ( *(_QWORD *)(v4 - 8) ) /*0x1005f2029*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f203c*/
      v4 += 24; /*0x1005f2020*/
      --v3; /*0x1005f2024*/
    }
    while ( v3 ); /*0x1005f2027*/
  }
  if ( a1[3] ) /*0x1005f2043*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f205c*/
  v5 = a1[8]; /*0x1005f2065*/
  if ( v5 ) /*0x1005f206c*/
  {
    v6 = a1[7] + 8LL; /*0x1005f206e*/
    do /*0x1005f2087*/
    {
      if ( *(_QWORD *)(v6 - 8) ) /*0x1005f2089*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f209c*/
      v6 += 24; /*0x1005f2080*/
      --v5; /*0x1005f2084*/
    }
    while ( v5 ); /*0x1005f2087*/
  }
  result = a1[6]; /*0x1005f20a3*/
  if ( result ) /*0x1005f20aa*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f20c4*/
  return result; /*0x1005f20bc*/
}