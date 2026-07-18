// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x1008ad100 d=1
size_t *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hfedfe0ca7a25b8e0(
        size_t *a1,
        __int64 a2)
{
  unsigned __int8 *v2; // r15
  unsigned __int8 *v3; // rax
  size_t v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r12
  size_t v9; // r14
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rax
  size_t *result; // rax
  size_t v14; // rdx
  _QWORD v15[4]; // [rsp+8h] [rbp-68h] BYREF
  size_t *v16; // [rsp+28h] [rbp-48h]
  size_t v17; // [rsp+30h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-38h]

  v2 = *(unsigned __int8 **)a2; /*0x1008ad111*/
  v3 = *(unsigned __int8 **)(a2 + 8); /*0x1008ad114*/
  v4 = (size_t)&v3[-*(_QWORD *)a2]; /*0x1008ad11b*/
  if ( v4 > 0x7FFFFFFFFFFFFFF8LL ) /*0x1008ad12b*/
  {
    v5 = 0; /*0x1008ad12d*/
    goto LABEL_3; /*0x1008ad12d*/
  }
  v16 = a1; /*0x1008ad13a*/
  if ( v3 == v2 ) /*0x1008ad141*/
  {
    v17 = 0; /*0x1008ad1c6*/
    v18 = 8; /*0x1008ad1ce*/
    v9 = 0; /*0x1008ad1d6*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008ad14a*/
    v5 = 8; /*0x1008ad14f*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 8u); /*0x1008ad15c*/
    if ( !v6 ) /*0x1008ad164*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5); /*0x1008ad12f*/
    v8 = (_QWORD *)v6; /*0x1008ad166*/
    v9 = v4 >> 5; /*0x1008ad169*/
    v17 = v9; /*0x1008ad16d*/
    v18 = v6; /*0x1008ad171*/
    v10 = *(_QWORD *)(a2 + 16); /*0x1008ad175*/
    v11 = 0; /*0x1008ad179*/
    do /*0x1008ad1c2*/
    {
      codexmate_lib::core::debug_bundle::redact_json_value_with_key::h8a2fc8ecd52f0626((__int64)v15, 0, v7, v2, v10); /*0x1008ad18c*/
      v8[3] = v15[3]; /*0x1008ad195*/
      v8[2] = v15[2]; /*0x1008ad19e*/
      v12 = v15[0]; /*0x1008ad1a3*/
      v8[1] = v15[1]; /*0x1008ad1ab*/
      *v8 = v12; /*0x1008ad1b0*/
      ++v11; /*0x1008ad1b4*/
      v2 += 32; /*0x1008ad1b7*/
      v8 += 4; /*0x1008ad1bb*/
    }
    while ( v9 != v11 ); /*0x1008ad1c2*/
  }
  result = v16; /*0x1008ad1dd*/
  v16[2] = v9; /*0x1008ad1e1*/
  v14 = v17; /*0x1008ad1e5*/
  result[1] = v18; /*0x1008ad1ed*/
  *result = v14; /*0x1008ad1f1*/
  return result; /*0x1008ad1f4*/
}