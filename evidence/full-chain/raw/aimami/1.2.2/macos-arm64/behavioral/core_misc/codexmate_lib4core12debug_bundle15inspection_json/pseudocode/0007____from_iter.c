// mac 1.2.2 NEW codexmate_lib4core12debug_bundle15inspection_json 0x10089c880 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9e9d4d40bdced7f8(
        unsigned __int64 *a1,
        __int64 *a2)
{
  size_t v2; // r15
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  _QWORD v13[3]; // [rsp+8h] [rbp-68h] BYREF
  __int64 v14; // [rsp+20h] [rbp-50h]
  unsigned __int64 *v15; // [rsp+28h] [rbp-48h]
  unsigned __int64 v16; // [rsp+30h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-38h]

  v2 = a2[1] - *a2; /*0x10089c89b*/
  if ( v2 > 0x7FFFFFFFFFFFFFF8LL ) /*0x10089c8bb*/
  {
    v3 = 0; /*0x10089c8bd*/
    goto LABEL_3; /*0x10089c8bd*/
  }
  if ( a2[1] == *a2 ) /*0x10089c8ce*/
  {
    v16 = 0; /*0x10089c96d*/
    v17 = 8; /*0x10089c975*/
    v6 = 0; /*0x10089c97d*/
  }
  else
  {
    v14 = *a2; /*0x10089c8d4*/
    v15 = a1; /*0x10089c8de*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10089c8e2*/
    v3 = 8; /*0x10089c8e7*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v2, 8u); /*0x10089c8f5*/
    if ( !v4 ) /*0x10089c8fd*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3); /*0x10089c8c0*/
    v5 = v4; /*0x10089c8ff*/
    v6 = v2 / 0x18; /*0x10089c902*/
    v16 = v2 / 0x18; /*0x10089c906*/
    v17 = v4; /*0x10089c90a*/
    v7 = a2[2]; /*0x10089c90e*/
    v8 = 0; /*0x10089c912*/
    v9 = 0; /*0x10089c915*/
    do /*0x10089c965*/
    {
      codexmate_lib::platform::debug_log::redact_text_inner::hab2d4f742d78f6c8( /*0x10089c93c*/
        (__int64)v13,
        *(const void **)(v14 + v8 + 8),
        *(_QWORD *)(v14 + v8 + 16),
        *(_QWORD *)(v7 + 8),
        *(_QWORD *)(v7 + 16));
      *(_QWORD *)(v5 + v8 + 16) = v13[2]; /*0x10089c945*/
      v10 = v13[0]; /*0x10089c94a*/
      *(_QWORD *)(v5 + v8 + 8) = v13[1]; /*0x10089c952*/
      *(_QWORD *)(v5 + v8) = v10; /*0x10089c957*/
      ++v9; /*0x10089c95b*/
      v8 += 24; /*0x10089c95e*/
    }
    while ( v6 != v9 ); /*0x10089c965*/
    a1 = v15; /*0x10089c967*/
  }
  a1[2] = v6; /*0x10089c984*/
  v11 = v16; /*0x10089c988*/
  a1[1] = v17; /*0x10089c990*/
  *a1 = v11; /*0x10089c994*/
  return a1; /*0x10089c99a*/
}