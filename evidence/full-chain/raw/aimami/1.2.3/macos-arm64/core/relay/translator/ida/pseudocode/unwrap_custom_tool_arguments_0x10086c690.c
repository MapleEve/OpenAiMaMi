// __ZN13codexmate_lib4core5relay10translator28unwrap_custom_tool_arguments @ 0x10086c690 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::translator::unwrap_custom_tool_arguments::hbc090364675fdd0e(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        signed __int64 a5)
{
  signed __int64 *v7; // rbx
  bool v8; // zf
  __int64 v9; // r13
  const char *v10; // rdi
  __int64 v11; // rax
  signed __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r12
  void *result; // rax
  const void *v17; // r15
  __int64 v18; // rax
  __int64 v19; // r12
  _QWORD v20[4]; // [rsp+8h] [rbp-78h] BYREF
  const void *v21; // [rsp+28h] [rbp-58h] BYREF
  signed __int64 v22; // [rsp+30h] [rbp-50h]
  __int64 v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-40h]
  const void *v25; // [rsp+48h] [rbp-38h]
  signed __int64 v26; // [rsp+50h] [rbp-30h]

  v7 = a1; /*0x10086c6a7*/
  if ( a3 != 11 || *(_QWORD *)a2 ^ 0x61705F796C707061LL | *(_QWORD *)(a2 + 3) ^ 0x68637461705F796CLL ) /*0x10086c6cb*/
  {
LABEL_5:
    v8 = a5 == 0; /*0x10086c70c*/
    if ( a5 < 0 ) /*0x10086c70f*/
    {
LABEL_6:
      v9 = 0; /*0x10086c715*/
      goto LABEL_7; /*0x10086c715*/
    }
    goto LABEL_15; /*0x10086c70f*/
  }
  v21 = a4; /*0x10086c6d0*/
  v22 = a5; /*0x10086c6d4*/
  v23 = 0; /*0x10086c6d8*/
  v24 = 0; /*0x10086c6e0*/
  v25 = a4; /*0x10086c6e8*/
  v26 = a5; /*0x10086c6ec*/
  a2 = (__int64)&v21; /*0x10086c6f4*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v20, &v21); /*0x10086c6f8*/
  if ( LOBYTE(v20[0]) == 6 ) /*0x10086c701*/
  {
    a1 = v20; /*0x10086c703*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v20); /*0x10086c707*/
    goto LABEL_5; /*0x10086c707*/
  }
  v24 = v20[3]; /*0x10086c727*/
  v23 = v20[2]; /*0x10086c72f*/
  v22 = v20[1]; /*0x10086c73b*/
  v21 = (const void *)v20[0]; /*0x10086c73f*/
  v10 = (const char *)&anon_10420c9971c21f44d230d15b39fb3fec_146; /*0x10086c743*/
  a2 = 5; /*0x10086c74e*/
  v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086c753*/
          &anon_10420c9971c21f44d230d15b39fb3fec_146,
          5,
          &v21);
  if ( v11 /*0x10086c775*/
    || (v10 = "patchminimallowmediumxhighmaxultrasysteminstructions",
        a2 = 5,
        (v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 "patchminimallowmediumxhighmaxultrasysteminstructions",
                 5,
                 &v21)) != 0) )
  {
    if ( *(_BYTE *)v11 == 3 ) /*0x10086c77a*/
    {
      v12 = *(_QWORD *)(v11 + 24); /*0x10086c77c*/
      if ( v12 < 0 ) /*0x10086c783*/
      {
        v13 = 0; /*0x10086c785*/
        goto LABEL_13; /*0x10086c785*/
      }
      v17 = *(const void **)(v11 + 16); /*0x10086c7fd*/
      if ( v12 ) /*0x10086c801*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, 5); /*0x10086c803*/
        v13 = 1; /*0x10086c808*/
        v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x10086c816*/
        if ( !v18 ) /*0x10086c81e*/
LABEL_13:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x10086c788*/
        v19 = v18; /*0x10086c824*/
      }
      else
      {
        v19 = 1; /*0x10086c829*/
      }
      memcpy((void *)v19, v17, v12); /*0x10086c838*/
      *v7 = v12; /*0x10086c83d*/
      v7[1] = v19; /*0x10086c840*/
      v7[2] = v12; /*0x10086c844*/
      return (void *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v21); /*0x10086c84c*/
    }
  }
  a1 = v20; /*0x10086c795*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v20); /*0x10086c799*/
  v8 = a5 == 0; /*0x10086c79e*/
  if ( a5 < 0 ) /*0x10086c7a1*/
    goto LABEL_6; /*0x10086c7a1*/
LABEL_15:
  if ( v8 ) /*0x10086c7a7*/
  {
    v15 = 1; /*0x10086c7cf*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10086c7a9*/
    v9 = 1; /*0x10086c7ae*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x10086c7bc*/
    if ( !v14 ) /*0x10086c7c4*/
LABEL_7:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, a5); /*0x10086c718*/
    v15 = v14; /*0x10086c7ca*/
  }
  result = memcpy((void *)v15, a4, a5); /*0x10086c7de*/
  *v7 = a5; /*0x10086c7e3*/
  v7[1] = v15; /*0x10086c7e6*/
  v7[2] = a5; /*0x10086c7ea*/
  return result; /*0x10086c7ee*/
}