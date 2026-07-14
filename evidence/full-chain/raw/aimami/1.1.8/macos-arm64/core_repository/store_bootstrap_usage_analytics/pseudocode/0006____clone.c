// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_usage_analytics node 0x10070eba0 depth=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h592bff4c6c4a164c(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  size_t v11; // rax
  unsigned __int64 *result; // rax
  unsigned __int64 v13; // rdx
  size_t v14[3]; // [rsp+8h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-60h]
  __int64 v16; // [rsp+28h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  unsigned __int64 *v18; // [rsp+38h] [rbp-48h]
  unsigned __int64 v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h]

  v2 = *(_QWORD *)(a2 + 16); /*0x10070ebb1*/
  if ( v2 > 0x333333333333333LL ) /*0x10070ebce*/
  {
    v3 = 0; /*0x10070ebd0*/
    goto LABEL_3; /*0x10070ebd0*/
  }
  v18 = a1; /*0x10070ebde*/
  if ( 40 * v2 ) /*0x10070ebbd*/
  {
    v4 = *(_QWORD *)(a2 + 8); /*0x10070ebeb*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10070ebef*/
    v3 = 8; /*0x10070ebf4*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40 * v2, 8u); /*0x10070ec02*/
    if ( !v5 ) /*0x10070ec0a*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3, 40 * v2); /*0x10070ebd3*/
    v6 = v5; /*0x10070ec0c*/
    v17 = 40 * v2; /*0x10070ec0f*/
    v19 = v2; /*0x10070ec13*/
    v20 = v5; /*0x10070ec17*/
    if ( v2 ) /*0x10070ec1e*/
    {
      v7 = 0; /*0x10070ec20*/
      v8 = 0; /*0x10070ec23*/
      do /*0x10070ec86*/
      {
        if ( v17 == v7 ) /*0x10070ec34*/
          break; /*0x10070ec34*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v14, v4); /*0x10070ec3d*/
        ++v8; /*0x10070ec42*/
        v15 = *(_QWORD *)(v4 + 24); /*0x10070ec4a*/
        v9 = v15; /*0x10070ec45*/
        v10 = *(_QWORD *)(v4 + 32); /*0x10070ec4e*/
        v4 += 40; /*0x10070ec53*/
        v16 = v10; /*0x10070ec57*/
        *(_QWORD *)(v6 + v7 + 32) = v10; /*0x10070ec5b*/
        *(_QWORD *)(v6 + v7 + 24) = v9; /*0x10070ec60*/
        *(_QWORD *)(v6 + v7 + 16) = v14[2]; /*0x10070ec69*/
        v11 = v14[0]; /*0x10070ec6e*/
        *(_QWORD *)(v6 + v7 + 8) = v14[1]; /*0x10070ec76*/
        *(_QWORD *)(v6 + v7) = v11; /*0x10070ec7b*/
        v7 += 40; /*0x10070ec7f*/
      }
      while ( v2 != v8 ); /*0x10070ec86*/
    }
  }
  else
  {
    v19 = 0; /*0x10070ec8a*/
    v20 = 8; /*0x10070ec92*/
  }
  result = v18; /*0x10070ec9e*/
  v18[2] = v2; /*0x10070eca2*/
  v13 = v19; /*0x10070eca6*/
  result[1] = v20; /*0x10070ecae*/
  *result = v13; /*0x10070ecb2*/
  return result; /*0x10070ecb5*/
}