// __ZN13codexmate_lib4core11quota_store11upsert_item @ 0x10031f670 | 基线 same-set
char __fastcall codexmate_lib::core::quota_store::upsert_item::h053aeb5691e92848(_QWORD *a1, void *a2, __int64 a3)
{
  __int64 v3; // r15
  _QWORD *v4; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r14
  size_t v8; // rbx
  __int64 v9; // r15
  const void *v10; // r13
  __int64 v11; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  char *v15; // [rsp+0h] [rbp-60h] BYREF
  void *__src; // [rsp+8h] [rbp-58h]
  unsigned __int64 v17; // [rsp+10h] [rbp-50h]
  __int64 v18; // [rsp+18h] [rbp-48h]
  _QWORD *v19; // [rsp+20h] [rbp-40h]
  void *__s2; // [rsp+28h] [rbp-38h]
  char v21; // [rsp+37h] [rbp-29h] BYREF

  v3 = a3; /*0x10031f681*/
  v4 = a1; /*0x10031f684*/
  v5 = a1[1]; /*0x10031f687*/
  v6 = a1[2]; /*0x10031f68b*/
  if ( v6 ) /*0x10031f692*/
  {
    v19 = a1; /*0x10031f698*/
    v18 = a3; /*0x10031f69c*/
    v17 = v6; /*0x10031f6a0*/
    v7 = 160 * v6; /*0x10031f6a8*/
    __s2 = *((void **)a2 + 16); /*0x10031f6b3*/
    __src = a2; /*0x10031f6b7*/
    v8 = *((_QWORD *)a2 + 17); /*0x10031f6bb*/
    v9 = 0; /*0x10031f6c2*/
    while ( 1 ) /*0x10031f6dc*/
    {
      if ( *(_QWORD *)(v5 + v9 + 136) == v8 ) /*0x10031f6e4*/
      {
        v10 = *(const void **)(v5 + v9 + 128); /*0x10031f6e6*/
        if ( !memcmp(v10, __s2, v8) ) /*0x10031f6f8*/
          break; /*0x10031f6f8*/
      }
      v9 += 160; /*0x10031f6d0*/
      if ( v7 == v9 ) /*0x10031f6da*/
      {
        v6 = v17; /*0x10031f737*/
        v3 = v18; /*0x10031f73b*/
        v4 = v19; /*0x10031f73f*/
        a2 = __src; /*0x10031f743*/
        if ( v17 == *v19 ) /*0x10031f74b*/
          goto LABEL_13; /*0x10031f74b*/
        goto LABEL_14; /*0x10031f74b*/
      }
    }
    if ( (unsigned __int8)_$LT$codexmate_lib..core..quota_store..QuotaStoreItem$u20$as$u20$core..cmp..PartialEq$GT$::eq::h901c2df9b33c0edc( /*0x10031f70f*/
                            v5 + v9,
                            __src) )
    {
      v11 = *((_QWORD *)__src + 15); /*0x10031f71c*/
      if ( v11 ) /*0x10031f723*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v11, 1); /*0x10031f72e*/
      return 0; /*0x10031f735*/
    }
    v14 = *(_QWORD *)(v5 + v9 + 120); /*0x10031f7b9*/
    if ( v14 ) /*0x10031f7c1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v14, 1); /*0x10031f7cb*/
    memcpy((void *)(v5 + v9), __src, 0xA0u); /*0x10031f7db*/
    v13 = v17; /*0x10031f7e0*/
    v3 = v18; /*0x10031f7e4*/
    v4 = v19; /*0x10031f7e8*/
  }
  else
  {
    __s2 = *((void **)a2 + 16); /*0x10031f756*/
    if ( !*a1 ) /*0x10031f75a*/
    {
LABEL_13:
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h483ed231e2079eb6(v4); /*0x10031f760*/
      v5 = v4[1]; /*0x10031f76f*/
    }
LABEL_14:
    memcpy((void *)(v5 + 160 * v6), a2, 0xA0u); /*0x10031f776*/
    v13 = v6 + 1; /*0x10031f78b*/
    v4[2] = v13; /*0x10031f78e*/
    v5 = v4[1]; /*0x10031f792*/
  }
  v4[3] = v3; /*0x10031f796*/
  v15 = &v21; /*0x10031f79e*/
  if ( v13 >= 2 ) /*0x10031f7a6*/
  {
    if ( v13 >= 0x15 ) /*0x10031f7f2*/
      core::slice::sort::stable::driftsort_main::h2aa448537450e3b6(v5, v13, &v15); /*0x10031f814*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h7f8577c4c3c24b26(v5, v13, 1, &v15); /*0x10031f803*/
  }
  return 1; /*0x10031f7aa*/
}