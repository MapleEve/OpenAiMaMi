// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x10070f000 depth=3
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h68c58a439707a4f3(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbx
  char v10; // al
  size_t v11; // rax
  unsigned __int64 *result; // rax
  unsigned __int64 v13; // rdx
  size_t v14[3]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v15; // [rsp+18h] [rbp-58h]
  unsigned __int64 *v16; // [rsp+20h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-48h]
  __int64 v18; // [rsp+30h] [rbp-40h]
  unsigned __int64 v19; // [rsp+40h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 16); /*0x10070f011*/
  v3 = 32 * v2; /*0x10070f018*/
  if ( v2 >> 59 != 0 || 32 * v2 > 0x7FFFFFFFFFFFFFF8LL ) /*0x10070f033*/
  {
    v4 = 0; /*0x10070f03a*/
    goto LABEL_3; /*0x10070f03a*/
  }
  v16 = a1; /*0x10070f048*/
  v19 = v2; /*0x10070f04f*/
  if ( v3 ) /*0x10070f053*/
  {
    v5 = *(_QWORD *)(a2 + 8); /*0x10070f059*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10070f05d*/
    v4 = 8; /*0x10070f062*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 8u); /*0x10070f070*/
    if ( !v6 ) /*0x10070f078*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v3); /*0x10070f03d*/
    v7 = v6; /*0x10070f07a*/
    v17 = v2; /*0x10070f07d*/
    v18 = v6; /*0x10070f081*/
    if ( v2 ) /*0x10070f088*/
    {
      v8 = 0; /*0x10070f08a*/
      v9 = 0; /*0x10070f08d*/
      do /*0x10070f0db*/
      {
        if ( v3 == v8 ) /*0x10070f093*/
          break; /*0x10070f093*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v14, v5); /*0x10070f09c*/
        ++v9; /*0x10070f0a1*/
        v10 = *(_BYTE *)(v5 + 24); /*0x10070f0a4*/
        v5 += 32; /*0x10070f0a9*/
        LOBYTE(v15) = v10; /*0x10070f0ad*/
        *(_QWORD *)(v7 + v8 + 16) = v14[2]; /*0x10070f0b4*/
        v11 = v14[0]; /*0x10070f0b9*/
        *(_QWORD *)(v7 + v8 + 8) = v14[1]; /*0x10070f0c1*/
        *(_QWORD *)(v7 + v8) = v11; /*0x10070f0c6*/
        *(_QWORD *)(v7 + v8 + 24) = v15; /*0x10070f0ce*/
        v8 += 32; /*0x10070f0d3*/
      }
      while ( v19 != v9 ); /*0x10070f0db*/
    }
  }
  else
  {
    v17 = 0; /*0x10070f0df*/
    v18 = 8; /*0x10070f0e7*/
  }
  result = v16; /*0x10070f0f7*/
  v16[2] = v19; /*0x10070f0fb*/
  v13 = v17; /*0x10070f0ff*/
  result[1] = v18; /*0x10070f107*/
  *result = v13; /*0x10070f10b*/
  return result; /*0x10070f10e*/
}