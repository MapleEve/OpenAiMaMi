// __ZN13codexmate_lib4core5relay23codex_thread_visibility32matching_session_meta_from_bytes @ 0x100ae5520 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::matching_session_meta_from_bytes::h2d80e74c2ffa6ebb(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        void *a6,
        size_t a7)
{
  char *v7; // rax
  __int64 v8; // r12
  char *v9; // rbx
  char *v10; // r14
  char v11; // r13
  double result; // xmm0_8
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[4]; // [rsp+0h] [rbp-A0h] BYREF
  void *__s2; // [rsp+20h] [rbp-80h]
  __int64 v17; // [rsp+28h] [rbp-78h]
  __int64 v18; // [rsp+30h] [rbp-70h]
  size_t __n; // [rsp+38h] [rbp-68h]
  char *v20; // [rsp+40h] [rbp-60h] BYREF
  char *v21; // [rsp+48h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-50h]
  __int64 v23; // [rsp+58h] [rbp-48h]
  char *v24; // [rsp+60h] [rbp-40h]
  char *v25; // [rsp+68h] [rbp-38h]
  int v26; // [rsp+74h] [rbp-2Ch]

  v7 = (char *)a2[2]; /*0x100ae5534*/
  if ( v7 ) /*0x100ae553b*/
  {
    __s2 = a6; /*0x100ae5541*/
    v18 = a3; /*0x100ae5545*/
    v17 = a4; /*0x100ae5549*/
    v26 = a5; /*0x100ae554d*/
    __n = a7; /*0x100ae5555*/
    v8 = *a2; /*0x100ae5559*/
    v9 = (char *)a2[1]; /*0x100ae555c*/
    v10 = v7 - 1; /*0x100ae5560*/
    v11 = v7[(_QWORD)v9 - 1]; /*0x100ae5564*/
    if ( v11 != 13 ) /*0x100ae556e*/
      v10 = v7; /*0x100ae556e*/
    core::str::converts::from_utf8::hb32deb9559450f6e(&v20, a2[1], v10); /*0x100ae557c*/
    if ( (_BYTE)v20 ) /*0x100ae5585*/
    {
      if ( v8 ) /*0x100ae558a*/
      {
        if ( __OFSUB__(-v8, 1) ) /*0x100ae5593*/
        {
          v8 = (__int64)v9; /*0x100ae559c*/
          v9 = v10; /*0x100ae559f*/
          v10 = v21; /*0x100ae55a2*/
          goto LABEL_8; /*0x100ae55a2*/
        }
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x100ae566f*/
      }
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL; /*0x100ae567e*/
      *(_QWORD *)a1 = 11; /*0x100ae5682*/
      return result; /*0x100ae5689*/
    }
LABEL_8:
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100ae55b8*/
                            &unk_10167D79E,
                            0xCu,
                            v9) )
    {
      v20 = v9; /*0x100ae55c1*/
      v21 = v10; /*0x100ae55c5*/
      v22 = 0; /*0x100ae55c9*/
      v23 = 0; /*0x100ae55d1*/
      v24 = v9; /*0x100ae55d9*/
      v25 = v10; /*0x100ae55dd*/
      serde_json::de::from_trait::h51e180b4bb6af5e0(v15, &v20); /*0x100ae55ec*/
      if ( LOBYTE(v15[0]) != 6 ) /*0x100ae55f8*/
      {
        v23 = v15[3]; /*0x100ae5695*/
        v22 = v15[2]; /*0x100ae56a0*/
        v21 = (char *)v15[1]; /*0x100ae56b2*/
        v20 = (char *)v15[0]; /*0x100ae56b6*/
        v13 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ae56ca*/
                "typefullargsopenwithkindsavetrueuuidemitshowhide",
                4,
                &v20);
        if ( v13 ) /*0x100ae56d2*/
        {
          if ( *(_BYTE *)v13 == 3 /*0x100ae56fa*/
            && *(_QWORD *)(v13 + 24) == 12
            && !(**(_QWORD **)(v13 + 16) ^ 0x5F6E6F6973736573LL
               | *(unsigned int *)(*(_QWORD *)(v13 + 16) + 8LL) ^ 0x6174656DLL) )
          {
            v14 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x100ae5751*/
                    &v20,
                    "/payload/idfirstrouter_model_restore.json",
                    11);
            if ( v14 ) /*0x100ae5759*/
            {
              if ( *(_BYTE *)v14 == 3 && *(_QWORD *)(v14 + 24) == __n && !memcmp(*(const void **)(v14 + 16), __s2, __n) ) /*0x100ae5776*/
              {
                *(_QWORD *)(a1 + 8) = v8; /*0x100ae5783*/
                *(_QWORD *)(a1 + 16) = v9; /*0x100ae5787*/
                *(_QWORD *)(a1 + 24) = v10; /*0x100ae578b*/
                *(_QWORD *)(a1 + 32) = v18; /*0x100ae5793*/
                *(_QWORD *)(a1 + 40) = v17; /*0x100ae579b*/
                *(_BYTE *)(a1 + 48) = v26; /*0x100ae57a2*/
                *(_BYTE *)(a1 + 49) = v11 == 13; /*0x100ae57a6*/
                *(_QWORD *)a1 = 11; /*0x100ae57ab*/
                return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v20); /*0x100ae57b6*/
              }
            }
          }
        }
        *(_QWORD *)(a1 + 8) = 0x8000000000000000LL; /*0x100ae5709*/
        *(_QWORD *)a1 = 11; /*0x100ae570d*/
        result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v20); /*0x100ae5718*/
        goto LABEL_21; /*0x100ae5718*/
      }
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v15); /*0x100ae5605*/
    }
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL; /*0x100ae5614*/
    *(_QWORD *)a1 = 11; /*0x100ae5618*/
LABEL_21:
    if ( v8 ) /*0x100ae5720*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x100ae572d*/
    return result; /*0x100ae572d*/
  }
  *(_QWORD *)(a1 + 8) = 0x8000000000000000LL; /*0x100ae562e*/
  *(_QWORD *)a1 = 11; /*0x100ae5632*/
  if ( *a2 ) /*0x100ae5639*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], *a2, 1); /*0x100ae565f*/
  return result; /*0x100ae5651*/
}