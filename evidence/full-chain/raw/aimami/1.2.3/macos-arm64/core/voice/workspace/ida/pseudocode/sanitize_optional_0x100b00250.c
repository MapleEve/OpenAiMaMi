// __ZN13codexmate_lib4core5voice9workspace17sanitize_optional @ 0x100b00250 | 基线 same-set
size_t *__fastcall codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(size_t *a1, __int64 *a2)
{
  __int64 v2; // rbx
  size_t *result; // rax
  __int64 v4; // r14
  __int64 v5; // rsi
  void *v6; // rax
  __int64 v7; // rdx
  size_t v8; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  void *__src; // [rsp+8h] [rbp-38h]

  v2 = *a2; /*0x100b0026b*/
  result = (size_t *)-*a2; /*0x100b00271*/
  if ( __OFSUB__(result, 1) ) /*0x100b00271*/
  {
    *a1 = 0x8000000000000000LL; /*0x100b00276*/
    return result; /*0x100b00279*/
  }
  v4 = a2[1]; /*0x100b00282*/
  v5 = a2[2]; /*0x100b00286*/
  v6 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v5); /*0x100b0028d*/
  v8 = v7; /*0x100b00292*/
  if ( v7 < 0 ) /*0x100b00298*/
  {
    v9 = 0; /*0x100b0029a*/
    goto LABEL_5; /*0x100b0029a*/
  }
  if ( v7 ) /*0x100b002ad*/
  {
    __src = v6; /*0x100b002af*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v5); /*0x100b002b3*/
    v9 = 1; /*0x100b002b8*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x100b002c6*/
    if ( !v10 ) /*0x100b002ce*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x100b0029d*/
    v11 = v10; /*0x100b002d0*/
    v6 = __src; /*0x100b002d3*/
  }
  else
  {
    v11 = 1; /*0x100b002e3*/
  }
  memcpy((void *)v11, v6, v8); /*0x100b002f2*/
  if ( v2 ) /*0x100b002fa*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v2, 1); /*0x100b00307*/
  if ( v8 ) /*0x100b0030f*/
  {
    *a1 = v8; /*0x100b00315*/
    a1[1] = v11; /*0x100b00318*/
    a1[2] = v8; /*0x100b0031c*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x100b00326*/
  }
  return a1; /*0x100b00329*/
}