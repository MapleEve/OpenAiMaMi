// mac 1.2.2 NEW export_session_markdown 0x1008f12c0 d=1
__int64 __fastcall _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3c46f7e436e2a930(
        _QWORD *a1)
{
  _QWORD *v1; // r14
  unsigned __int64 v2; // r15
  __int64 result; // rax

  v1 = (_QWORD *)a1[1]; /*0x1008f12cd*/
  if ( (_QWORD *)a1[3] != v1 ) /*0x1008f12eb*/
  {
    v2 = (a1[3] - (_QWORD)v1) / 0x148uLL; /*0x1008f12f0*/
    do /*0x1008f1312*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CodexSession$GT$::h7e88e8834c05a698(v1); /*0x1008f1303*/
      v1 += 41; /*0x1008f1308*/
      --v2; /*0x1008f130f*/
    }
    while ( v2 ); /*0x1008f1312*/
  }
  result = a1[2]; /*0x1008f1314*/
  if ( result ) /*0x1008f131b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*a1, 328 * result, 8); /*0x1008f1336*/
  return result; /*0x1008f1330*/
}