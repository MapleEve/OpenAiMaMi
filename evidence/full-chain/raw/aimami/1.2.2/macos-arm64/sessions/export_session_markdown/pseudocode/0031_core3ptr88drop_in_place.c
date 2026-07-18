// mac 1.2.2 NEW export_session_markdown 0x100a48fb0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..sessions..ExportMessage$GT$$GT$::h72dae3ffbbf49997(
        _QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 result; // rax

  v1 = a1[2]; /*0x100a48fc2*/
  if ( v1 ) /*0x100a48fc9*/
  {
    v2 = a1[1] + 32LL; /*0x100a48fcb*/
    do /*0x100a48fe7*/
    {
      result = -*(_QWORD *)(v2 - 8); /*0x100a48ff1*/
      if ( !__OFSUB__(result, 1) && *(_QWORD *)(v2 - 8) ) /*0x100a48fee*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a49001*/
      if ( *(_QWORD *)(v2 - 32) ) /*0x100a49006*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a4901a*/
      v2 += 64; /*0x100a48fe0*/
      --v1; /*0x100a48fe4*/
    }
    while ( v1 ); /*0x100a48fe7*/
  }
  if ( *a1 ) /*0x100a49021*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a4903d*/
  return result; /*0x100a49035*/
}