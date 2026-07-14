// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND expand_aimami_compactions_for_upstream node 0x100714280 depth=1
__int64 __fastcall _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2493b1aa827ad809(
        _QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 i; // r12
  __int64 result; // rax

  v2 = (_QWORD *)a1[1]; /*0x100714291*/
  for ( i = ((a1[3] - (_QWORD)v2) >> 5) + 1LL; i != 1; --i ) /*0x1007142a0*/
  {
    result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v2); /*0x1007142bd*/
    v2 += 4; /*0x1007142c2*/
  }
  if ( a1[2] ) /*0x1007142c7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1007142ea*/
  return result; /*0x1007142e0*/
}