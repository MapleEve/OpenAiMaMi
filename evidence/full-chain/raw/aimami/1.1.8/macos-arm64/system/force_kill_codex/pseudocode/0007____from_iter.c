// mac 1.1.8 force_kill_codex node va=0x1006c1940 depth=2
// _::from_iter
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hbba4a9ef9e47ac24(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r15
  __int64 v8; // r14
  __int64 v9; // r13
  size_t v10; // rax
  unsigned __int64 *result; // rax
  unsigned __int64 v12; // rdx
  size_t v13[3]; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 *v14; // [rsp+18h] [rbp-48h]
  unsigned __int64 v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+28h] [rbp-38h]

  if ( (unsigned __int64)(a3 - a2) > 0xAAAAAAAAAAAAAAA0LL ) /*0x1006c1964*/
  {
    v4 = 0; /*0x1006c1966*/
    goto LABEL_3; /*0x1006c1966*/
  }
  v14 = a1; /*0x1006c1977*/
  if ( a3 == a2 ) /*0x1006c197e*/
  {
    v15 = 0; /*0x1006c1a04*/
    v16 = 8; /*0x1006c1a0c*/
    v5 = 0; /*0x1006c1a14*/
  }
  else
  {
    v5 = (unsigned __int64)(a3 - a2) >> 5; /*0x1006c1984*/
    v3 = 24 * v5; /*0x1006c1990*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006c1994*/
    v4 = 8; /*0x1006c1999*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v5, 8u); /*0x1006c19a7*/
    if ( !v6 ) /*0x1006c19af*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v3); /*0x1006c1969*/
    v7 = (_QWORD *)v6; /*0x1006c19b1*/
    v15 = v5; /*0x1006c19b4*/
    v16 = v6; /*0x1006c19b8*/
    v8 = a2 + 8; /*0x1006c19bc*/
    v9 = 0; /*0x1006c19c0*/
    do /*0x1006c1a00*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v13, v8); /*0x1006c19d6*/
      v7[2] = v13[2]; /*0x1006c19df*/
      v10 = v13[0]; /*0x1006c19e3*/
      v7[1] = v13[1]; /*0x1006c19eb*/
      *v7 = v10; /*0x1006c19ef*/
      ++v9; /*0x1006c19f2*/
      v8 += 32; /*0x1006c19f5*/
      v7 += 3; /*0x1006c19f9*/
    }
    while ( v5 != v9 ); /*0x1006c1a00*/
  }
  result = v14; /*0x1006c1a1a*/
  v14[2] = v5; /*0x1006c1a1e*/
  v12 = v15; /*0x1006c1a22*/
  result[1] = v16; /*0x1006c1a2a*/
  *result = v12; /*0x1006c1a2e*/
  return result; /*0x1006c1a31*/
}