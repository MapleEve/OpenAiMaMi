// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x1006b7ba0 depth=1
__int64 __fastcall _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hdcd1906d68679446(
        __int64 a1,
        __int64 *a2)
{
  char *v2; // r15
  char *v3; // r12
  __int64 *v4; // r13
  __int64 *v5; // rbx
  char *v6; // r14
  __int64 v7; // r14
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  _QWORD *v10; // r15
  __int64 result; // rax
  _BYTE __dst[240]; // [rsp+0h] [rbp-220h] BYREF
  _QWORD v13[29]; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v14; // [rsp+1D8h] [rbp-48h]
  _QWORD *v15; // [rsp+1E0h] [rbp-40h]
  _BYTE *v16; // [rsp+1E8h] [rbp-38h]
  __int64 v17; // [rsp+1F0h] [rbp-30h]

  v2 = *(char **)(a1 + 8); /*0x1006b7bb4*/
  v17 = a1; /*0x1006b7bb8*/
  v3 = *(char **)(a1 + 24); /*0x1006b7bbc*/
  if ( v2 != v3 ) /*0x1006b7bc3*/
  {
    v16 = &__dst[8]; /*0x1006b7bd0*/
    v14 = *a2; /*0x1006b7bd7*/
    v15 = (_QWORD *)a2[1]; /*0x1006b7bdf*/
    v4 = (__int64 *)a2[2]; /*0x1006b7be3*/
    v5 = (__int64 *)a2[3]; /*0x1006b7be7*/
    do /*0x1006b7c16*/
    {
      while ( 1 ) /*0x1006b7c1c*/
      {
        v6 = v2; /*0x1006b7c1c*/
        memcpy(__dst, v2, sizeof(__dst)); /*0x1006b7c2e*/
        v2 += 240; /*0x1006b7c33*/
        *(_QWORD *)(v17 + 8) = v2; /*0x1006b7c3e*/
        memcpy(v13, v6 + 8, sizeof(v13)); /*0x1006b7c55*/
        if ( !(unsigned __int8)codexmate_lib::core::relay::breaker::is_open::h14b923abae8606ad( /*0x1006b7c73*/
                                 v14,
                                 v13[1],
                                 v13[2],
                                 *v15) )
          break; /*0x1006b7c73*/
        v7 = v5[2]; /*0x1006b7c7c*/
        if ( v7 == *v5 ) /*0x1006b7c83*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h268242bfb87af67e(v5); /*0x1006b7c88*/
        memcpy((void *)(v5[1] + 232 * v7), &__dst[8], 0xE8u); /*0x1006b7ca4*/
        v5[2] = v7 + 1; /*0x1006b7cac*/
        if ( v2 == v3 ) /*0x1006b7cb3*/
          goto LABEL_11; /*0x1006b7cb3*/
      }
      v8 = v4[2]; /*0x1006b7cc0*/
      if ( v8 == *v4 ) /*0x1006b7cc8*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h268242bfb87af67e(v4); /*0x1006b7cd1*/
      memcpy((void *)(v4[1] + 232 * v8), &__dst[8], 0xE8u); /*0x1006b7c07*/
      v4[2] = v8 + 1; /*0x1006b7c0f*/
    }
    while ( v2 != v3 ); /*0x1006b7c16*/
  }
LABEL_11:
  if ( v3 != v2 ) /*0x1006b7cf1*/
  {
    v9 = (v3 - v2) / 0xF0uLL; /*0x1006b7cf6*/
    v10 = v2 + 8; /*0x1006b7cfa*/
    do /*0x1006b7d12*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(v10); /*0x1006b7d03*/
      v10 += 30; /*0x1006b7d08*/
      --v9; /*0x1006b7d0f*/
    }
    while ( v9 ); /*0x1006b7d12*/
  }
  result = *(_QWORD *)(v17 + 16); /*0x1006b7d18*/
  if ( result ) /*0x1006b7d1f*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b7d41*/
  return result; /*0x1006b7d30*/
}