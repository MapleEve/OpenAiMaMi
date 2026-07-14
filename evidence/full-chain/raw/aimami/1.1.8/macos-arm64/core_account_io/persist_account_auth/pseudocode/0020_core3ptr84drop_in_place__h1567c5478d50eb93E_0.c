// mac 1.1.8 behavioral persist_account_auth 0x10054c4c0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..models..CoreWarning$GT$$GT$::h1567c5478d50eb93(
        __int64 *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 result; // rax

  v1 = a1[2]; /*0x10054c4d2*/
  if ( v1 ) /*0x10054c4d9*/
  {
    v2 = a1[1] + 32; /*0x10054c4db*/
    do /*0x10054c4f7*/
    {
      if ( *(_QWORD *)(v2 - 32) ) /*0x10054c4f9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054c50d*/
      if ( *(_QWORD *)(v2 - 8) ) /*0x10054c512*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054c525*/
      v2 += 48; /*0x10054c4f0*/
      --v1; /*0x10054c4f4*/
    }
    while ( v1 ); /*0x10054c4f7*/
  }
  result = *a1; /*0x10054c52c*/
  if ( *a1 ) /*0x10054c52c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054c54c*/
  return result; /*0x10054c544*/
}