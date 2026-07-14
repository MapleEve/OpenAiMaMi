// mac 1.1.8 activate_relay_provider node va=0x1004ae620 depth=2
// codexmate_lib4core5relay6models16RelayActiveByIde3add
char __fastcall codexmate_lib::core::relay::models::RelayActiveByIde::add::h74790265eadc9c8e(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // r12
  __int64 v8; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+8h] [rbp-38h]

  v2 = a1; /*0x1004ae631*/
  v3 = a1[1]; /*0x1004ae634*/
  v4 = a1[2]; /*0x1004ae638*/
  if ( v4 ) /*0x1004ae63f*/
  {
    v12 = a1[2]; /*0x1004ae649*/
    v5 = 24 * v4; /*0x1004ae655*/
    v6 = (const void *)a2[1]; /*0x1004ae659*/
    v7 = a2[2]; /*0x1004ae661*/
    v8 = 0; /*0x1004ae665*/
    do /*0x1004ae677*/
    {
      if ( *(_QWORD *)(v3 + v8 + 16) == v7 && !memcmp(*(const void **)(v3 + v8 + 8), v6, v7) ) /*0x1004ae68b*/
      {
        if ( *a2 ) /*0x1004ae698*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ae6a8*/
        return 0; /*0x1004ae6af*/
      }
      v8 += 24; /*0x1004ae670*/
    }
    while ( v5 != v8 ); /*0x1004ae677*/
    v2 = a1; /*0x1004ae6b1*/
    v4 = v12; /*0x1004ae6b5*/
    if ( v12 == *a1 ) /*0x1004ae6c0*/
      goto LABEL_12; /*0x1004ae6c0*/
  }
  else if ( !*a1 ) /*0x1004ae6c8*/
  {
LABEL_12:
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v2); /*0x1004ae6cd*/
    v3 = v2[1]; /*0x1004ae6db*/
  }
  v10 = 3 * v4; /*0x1004ae6e2*/
  *(_QWORD *)(v3 + 8 * v10 + 16) = a2[2]; /*0x1004ae6eb*/
  v11 = *a2; /*0x1004ae6f0*/
  *(_QWORD *)(v3 + 8 * v10 + 8) = a2[1]; /*0x1004ae6f7*/
  *(_QWORD *)(v3 + 8 * v10) = v11; /*0x1004ae6fc*/
  v2[2] = v4 + 1; /*0x1004ae703*/
  return 1; /*0x1004ae709*/
}