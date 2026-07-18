// mac 1.2.2 NEW export_debug_bundle 0x1004f9b50 d=1
_QWORD *__fastcall alloc::vec::in_place_collect::from_iter_in_place::h045a55cab2e05d1c(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 v9; // [rsp+0h] [rbp-30h]

  v2 = *a2; /*0x1004f9b64*/
  v9 = a2[2]; /*0x1004f9b6b*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hcb69ba65f520e84c( /*0x1004f9b80*/
    a2,
    v2,
    v2,
    a2 + 4,
    a2[3]);
  v4 = v3; /*0x1004f9b85*/
  v5 = a2[1]; /*0x1004f9b88*/
  if ( a2[3] != v5 ) /*0x1004f9ba8*/
  {
    v6 = (a2[3] - v5) / 0x18uLL; /*0x1004f9bad*/
    v7 = v5 + 8; /*0x1004f9bb1*/
    do /*0x1004f9bc7*/
    {
      if ( *(_QWORD *)(v7 - 8) ) /*0x1004f9bc9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f9bdb*/
      v7 += 24; /*0x1004f9bc0*/
      --v6; /*0x1004f9bc4*/
    }
    while ( v6 ); /*0x1004f9bc7*/
  }
  *a1 = v9; /*0x1004f9bfb*/
  a1[1] = v2; /*0x1004f9bfe*/
  a1[2] = 0xAAAAAAAAAAAAAAABLL * ((unsigned __int64)(v4 - v2) >> 3); /*0x1004f9c02*/
  return a1; /*0x1004f9c0d*/
}