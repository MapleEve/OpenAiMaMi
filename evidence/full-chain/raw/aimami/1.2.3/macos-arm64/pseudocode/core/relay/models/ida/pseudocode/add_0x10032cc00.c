// __ZN13codexmate_lib4core5relay6models16RelayActiveByIde3add @ 0x10032cc00 | 基线 same-set
char __fastcall codexmate_lib::core::relay::models::RelayActiveByIde::add::h544ec7a2d9875c7e(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+8h] [rbp-38h]

  v2 = a1; /*0x10032cc11*/
  v3 = a1[1]; /*0x10032cc14*/
  v4 = a1[2]; /*0x10032cc18*/
  if ( v4 ) /*0x10032cc1f*/
  {
    v13 = a1[2]; /*0x10032cc29*/
    v5 = 24 * v4; /*0x10032cc35*/
    v6 = (const void *)a2[1]; /*0x10032cc39*/
    v7 = a2[2]; /*0x10032cc41*/
    v8 = 0; /*0x10032cc45*/
    do /*0x10032cc57*/
    {
      if ( *(_QWORD *)(v3 + v8 + 16) == v7 && !memcmp(*(const void **)(v3 + v8 + 8), v6, v7) ) /*0x10032cc6b*/
      {
        v9 = *a2; /*0x10032cc78*/
        if ( *a2 ) /*0x10032cc78*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v9, 1); /*0x10032cc88*/
        return 0; /*0x10032cc8f*/
      }
      v8 += 24; /*0x10032cc50*/
    }
    while ( v5 != v8 ); /*0x10032cc57*/
    v2 = a1; /*0x10032cc91*/
    v4 = v13; /*0x10032cc95*/
    if ( v13 == *a1 ) /*0x10032cca0*/
      goto LABEL_12; /*0x10032cca0*/
  }
  else if ( !*a1 ) /*0x10032cca8*/
  {
LABEL_12:
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v2); /*0x10032ccad*/
    v3 = v2[1]; /*0x10032ccbb*/
  }
  v11 = 3 * v4; /*0x10032ccc2*/
  *(_QWORD *)(v3 + 8 * v11 + 16) = a2[2]; /*0x10032cccb*/
  v12 = *a2; /*0x10032ccd0*/
  *(_QWORD *)(v3 + 8 * v11 + 8) = a2[1]; /*0x10032ccd7*/
  *(_QWORD *)(v3 + 8 * v11) = v12; /*0x10032ccdc*/
  v2[2] = v4 + 1; /*0x10032cce3*/
  return 1; /*0x10032cce9*/
}