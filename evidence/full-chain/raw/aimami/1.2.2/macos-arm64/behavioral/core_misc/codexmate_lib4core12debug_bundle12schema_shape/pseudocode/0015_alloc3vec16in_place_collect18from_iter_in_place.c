// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12schema_shape 0x1004f9a80 d=2
_QWORD *__fastcall alloc::vec::in_place_collect::from_iter_in_place::h022ca8b1d1eac60c(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  __int64 v10; // [rsp+0h] [rbp-30h]

  v2 = *a2; /*0x1004f9a94*/
  v10 = a2[2]; /*0x1004f9a9b*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h4b5764c89ce9be63( /*0x1004f9ab0*/
    a2,
    v2,
    v2,
    a2 + 4,
    a2[3]);
  v4 = v3; /*0x1004f9ab5*/
  v5 = a2[1]; /*0x1004f9ab8*/
  v6 = a2[3] - v5; /*0x1004f9ac2*/
  if ( v6 ) /*0x1004f9ac5*/
  {
    v7 = v6 >> 5; /*0x1004f9ac7*/
    v8 = v5 + 8; /*0x1004f9acb*/
    do /*0x1004f9ae7*/
    {
      if ( *(_QWORD *)(v8 - 8) ) /*0x1004f9ae9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f9afb*/
      v8 += 32; /*0x1004f9ae0*/
      --v7; /*0x1004f9ae4*/
    }
    while ( v7 ); /*0x1004f9ae7*/
  }
  *a1 = v10; /*0x1004f9b0d*/
  a1[1] = v2; /*0x1004f9b10*/
  a1[2] = (unsigned __int64)(v4 - v2) >> 5; /*0x1004f9b14*/
  return a1; /*0x1004f9b1f*/
}