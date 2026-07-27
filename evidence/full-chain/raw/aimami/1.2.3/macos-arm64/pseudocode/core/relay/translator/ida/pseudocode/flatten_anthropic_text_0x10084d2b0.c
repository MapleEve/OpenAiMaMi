// __ZN13codexmate_lib4core5relay10translator22flatten_anthropic_text @ 0x10084d2b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::flatten_anthropic_text::h4a769f7578ec855b(
        __int64 *a1,
        unsigned __int8 *a2)
{
  int v2; // eax
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r9
  size_t v11; // r12
  __int64 v12; // rcx
  __int64 result; // rax
  void *__src; // [rsp+0h] [rbp-50h]
  size_t v15; // [rsp+10h] [rbp-40h] BYREF
  __int64 v16; // [rsp+18h] [rbp-38h]
  __int64 v17; // [rsp+20h] [rbp-30h]

  v2 = *a2; /*0x10084d2c5*/
  if ( v2 == 3 ) /*0x10084d2cb*/
    return _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(a1, a2 + 8); /*0x10084d408*/
  if ( v2 == 4 ) /*0x10084d2d4*/
  {
    v15 = 0; /*0x10084d2da*/
    v16 = 1; /*0x10084d2e2*/
    v17 = 0; /*0x10084d2ea*/
    v3 = *((_QWORD *)a2 + 3); /*0x10084d2f2*/
    if ( v3 ) /*0x10084d2f9*/
    {
      v4 = *((_QWORD *)a2 + 2); /*0x10084d2ff*/
      v5 = 32 * v3; /*0x10084d303*/
      v6 = 1; /*0x10084d307*/
      v7 = 0; /*0x10084d30c*/
      while ( 1 ) /*0x10084d33f*/
      {
        v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10084d33f*/
               &anon_10420c9971c21f44d230d15b39fb3fec_110,
               4,
               v4);
        if ( !v9 || *(_BYTE *)v9 != 3 ) /*0x10084d34c*/
          goto LABEL_14; /*0x10084d34c*/
        __src = *(void **)(v9 + 16); /*0x10084d352*/
        v11 = *(_QWORD *)(v9 + 24); /*0x10084d356*/
        if ( v7 ) /*0x10084d361*/
          break; /*0x10084d361*/
        v8 = 0; /*0x10084d311*/
        if ( v11 > v15 ) /*0x10084d31a*/
          goto LABEL_16; /*0x10084d31a*/
LABEL_13:
        v6 = v16; /*0x10084d382*/
        memcpy((void *)(v16 + v8), __src, v11); /*0x10084d391*/
        v7 = v11 + v8; /*0x10084d396*/
        v17 = v7; /*0x10084d399*/
LABEL_14:
        v4 += 32; /*0x10084d39d*/
        v5 -= 32; /*0x10084d3a1*/
        if ( !v5 ) /*0x10084d3a5*/
          goto LABEL_19; /*0x10084d3a5*/
      }
      v12 = v7; /*0x10084d363*/
      if ( v15 == v7 ) /*0x10084d369*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v15, v7, 1, 1, 1, v10); /*0x10084d3e0*/
        v6 = v16; /*0x10084d3e5*/
        v12 = v17; /*0x10084d3e9*/
      }
      *(_BYTE *)(v6 + v12) = 10; /*0x10084d36b*/
      v8 = v7 + 1; /*0x10084d36f*/
      v17 = v8; /*0x10084d372*/
      if ( v11 <= v15 - v8 ) /*0x10084d380*/
        goto LABEL_13; /*0x10084d380*/
LABEL_16:
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v15, v8, v11, 1, 1, v10); /*0x10084d3a9*/
      v8 = v17; /*0x10084d3c3*/
      goto LABEL_13; /*0x10084d3c7*/
    }
LABEL_19:
    a1[2] = v17; /*0x10084d420*/
    result = v15; /*0x10084d42c*/
    a1[1] = v16; /*0x10084d434*/
    *a1 = result; /*0x10084d438*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x10084d41b*/
    return 0x8000000000000000LL; /*0x10084d40d*/
  }
  return result; /*0x10084d3fa*/
}