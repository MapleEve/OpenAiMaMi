// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1006b7aa0 depth=1
// _::fold
__int64 __fastcall _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha38e5828bcad3a18(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v2; // r12
  __int64 *v3; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  _QWORD *v6; // r12
  __int64 result; // rax
  __int64 v8[8]; // [rsp+0h] [rbp-40h] BYREF

  v2 = (__int64 *)a1[1]; /*0x1006b7ab4*/
  v3 = (__int64 *)a1[3]; /*0x1006b7ab8*/
  while ( v2 != v3 ) /*0x1006b7abf*/
  {
    v8[2] = v2[2]; /*0x1006b7ad5*/
    v4 = *v2; /*0x1006b7ad9*/
    v8[1] = v2[1]; /*0x1006b7ae2*/
    v8[0] = v4; /*0x1006b7ae6*/
    v2 += 3; /*0x1006b7aea*/
    a1[1] = v2; /*0x1006b7aee*/
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1d31b66c0e1d63b4(a2, v8); /*0x1006b7af8*/
  }
  if ( v3 != v2 ) /*0x1006b7b18*/
  {
    v5 = ((char *)v3 - (char *)v2) / 0x18uLL; /*0x1006b7b1d*/
    v6 = v2 + 1; /*0x1006b7b21*/
    do /*0x1006b7b37*/
    {
      if ( *(v6 - 1) ) /*0x1006b7b39*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b7b4c*/
      v6 += 3; /*0x1006b7b30*/
      --v5; /*0x1006b7b34*/
    }
    while ( v5 ); /*0x1006b7b37*/
  }
  result = a1[2]; /*0x1006b7b53*/
  if ( result ) /*0x1006b7b5a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b7b6c*/
  return result; /*0x1006b7b71*/
}