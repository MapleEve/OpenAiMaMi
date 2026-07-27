// __ZN13codexmate_lib4core12plan_mapping14tokens_contain @ 0x1003202c0 | 基线 same-set
int __fastcall codexmate_lib::core::plan_mapping::tokens_contain::ha0eebb87f1f65e42(
        __int64 a1,
        __int64 a2,
        const void *a3,
        size_t a4)
{
  __int64 v6; // r13

  if ( !a2 ) /*0x1003202c3*/
    return 0; /*0x100320329*/
  v6 = 0; /*0x1003202e4*/
  do /*0x1003202f7*/
  {
    if ( *(_QWORD *)(a1 + v6 + 16) == a4 && !memcmp(*(const void **)(a1 + v6 + 8), a3, a4) ) /*0x10032030b*/
      return 1; /*0x100320316*/
    v6 += 24; /*0x1003202f0*/
  }
  while ( 24 * a2 != v6 ); /*0x1003202f7*/
  return 0; /*0x100320328*/
}