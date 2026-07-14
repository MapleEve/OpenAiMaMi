// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND drop_cross_provider_previous_response_id node 0x1001cdfd0 depth=1
_QWORD *__fastcall alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::ha4a32ae9a99cdf0e(
        _QWORD *a1,
        _QWORD *a2,
        void *a3,
        size_t a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  size_t v10; // rdx
  __int64 v11; // r15
  int v12; // eax
  char v13; // cl
  _QWORD *result; // rax
  __int64 v15; // rdx
  _QWORD v16[7]; // [rsp+0h] [rbp-B0h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-78h] BYREF
  void *__s1; // [rsp+58h] [rbp-58h]
  __int64 v19; // [rsp+60h] [rbp-50h]
  _QWORD *v20; // [rsp+68h] [rbp-48h]
  _QWORD *v21; // [rsp+70h] [rbp-40h]
  __int64 v22; // [rsp+78h] [rbp-38h]
  __int64 v23; // [rsp+80h] [rbp-30h]

  __s1 = a3; /*0x1001cdfe7*/
  v21 = a1; /*0x1001cdfeb*/
  v20 = a2; /*0x1001cdfef*/
  v5 = *a2; /*0x1001cdff3*/
  if ( !*a2 ) /*0x1001cdff3*/
    goto LABEL_16; /*0x1001cdff3*/
  v23 = v20[1]; /*0x1001ce007*/
LABEL_3:
  v6 = v5 + 360; /*0x1001ce00b*/
  v22 = v5; /*0x1001ce012*/
  v19 = *(unsigned __int16 *)(v5 + 626); /*0x1001ce01d*/
  v7 = 3LL * (unsigned int)(8 * v19); /*0x1001ce028*/
  v8 = -1; /*0x1001ce02c*/
  do /*0x1001ce084*/
  {
    if ( !v7 ) /*0x1001ce043*/
    {
      v8 = v19; /*0x1001ce090*/
LABEL_13:
      if ( !v23 ) /*0x1001ce0a0*/
        goto LABEL_16; /*0x1001ce0a0*/
      --v23; /*0x1001ce0a2*/
      v5 = *(_QWORD *)(v22 + 8 * v8 + 632); /*0x1001ce0a6*/
      goto LABEL_3; /*0x1001ce0ae*/
    }
    v9 = v6 + 24; /*0x1001ce045*/
    v10 = *(_QWORD *)(v6 + 16); /*0x1001ce04d*/
    v11 = a4 - v10; /*0x1001ce054*/
    if ( a4 < v10 ) /*0x1001ce057*/
      v10 = a4; /*0x1001ce057*/
    v12 = memcmp(__s1, *(const void **)(v6 + 8), v10); /*0x1001ce05f*/
    if ( v12 ) /*0x1001ce068*/
      v11 = v12; /*0x1001ce068*/
    v13 = (v11 > 0) - (v11 < 0); /*0x1001ce075*/
    ++v8; /*0x1001ce077*/
    v7 -= 24; /*0x1001ce07a*/
    v6 = v9; /*0x1001ce07e*/
  }
  while ( v13 == 1 ); /*0x1001ce084*/
  if ( v13 ) /*0x1001ce08b*/
    goto LABEL_13; /*0x1001ce08b*/
  v17[0] = v22; /*0x1001ce0b7*/
  v17[1] = v23; /*0x1001ce0bf*/
  v17[2] = v8; /*0x1001ce0c3*/
  v17[3] = v20; /*0x1001ce0cb*/
  alloc::collections::btree::map::entry::OccupiedEntry$LT$K$C$V$C$A$GT$::remove_kv::ha23963b496fcbc2d(v16, v17); /*0x1001ce0da*/
  if ( !__OFSUB__(-v16[0], 1) ) /*0x1001ce0ec*/
  {
    if ( v16[0] ) /*0x1001ce0fe*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ce10c*/
    result = v21; /*0x1001ce115*/
    v21[3] = v16[6]; /*0x1001ce119*/
    result[2] = v16[5]; /*0x1001ce121*/
    v15 = v16[3]; /*0x1001ce125*/
    result[1] = v16[4]; /*0x1001ce12c*/
    *result = v15; /*0x1001ce130*/
  }
  else
  {
LABEL_16:
    result = v21; /*0x1001ce0ee*/
    *(_BYTE *)v21 = 6; /*0x1001ce0f2*/
  }
  return result; /*0x1001ce133*/
}