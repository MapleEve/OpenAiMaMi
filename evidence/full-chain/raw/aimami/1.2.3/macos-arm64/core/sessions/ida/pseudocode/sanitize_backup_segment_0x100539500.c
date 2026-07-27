// __ZN13codexmate_lib4core8sessions23sanitize_backup_segment @ 0x100539500 | 基线 same-set
double __fastcall codexmate_lib::core::sessions::sanitize_backup_segment::hfcc76c2216ef5a0a(
        size_t *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  void *v7; // rax
  __int64 v8; // rdx
  size_t v9; // r15
  __int64 v10; // r12
  _DWORD *v11; // rax
  _DWORD *v12; // r13
  _DWORD *v13; // rax
  double result; // xmm0_8
  __int64 v15; // [rsp+8h] [rbp-48h] BYREF
  __int64 v16; // [rsp+10h] [rbp-40h]
  __int64 v17; // [rsp+18h] [rbp-38h]
  void *__src; // [rsp+20h] [rbp-30h]

  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hc8474ad0947b1571( /*0x10053951b*/
    &v15,
    a2,
    a2 + a3);
  v4 = v16; /*0x100539520*/
  v5 = v17; /*0x100539524*/
  v6 = v16; /*0x100539528*/
  v7 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v16, v17, 45); /*0x100539530*/
  v9 = v8; /*0x100539535*/
  if ( !v8 ) /*0x10053953b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v5); /*0x100539552*/
    v9 = 7; /*0x100539557*/
    v10 = 1; /*0x10053955d*/
    v11 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10053956d*/
    if ( v11 ) /*0x100539575*/
    {
      v12 = v11; /*0x100539577*/
      *(_DWORD *)((char *)v11 + 3) = 1852795251; /*0x10053957a*/
      *v11 = 1936942451; /*0x100539581*/
      goto LABEL_9; /*0x100539587*/
    }
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x100539545*/
  }
  if ( v8 < 0 ) /*0x100539540*/
  {
    v10 = 0; /*0x100539542*/
    goto LABEL_4; /*0x100539542*/
  }
  __src = v7; /*0x100539589*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v5); /*0x10053958d*/
  v10 = 1; /*0x100539592*/
  v13 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1005395a0*/
  if ( !v13 ) /*0x1005395a8*/
    goto LABEL_4; /*0x1005395a8*/
  v12 = v13; /*0x1005395aa*/
  memcpy(v13, __src, v9); /*0x1005395b7*/
LABEL_9:
  *a1 = v9; /*0x1005395bc*/
  a1[1] = (size_t)v12; /*0x1005395bf*/
  a1[2] = v9; /*0x1005395c3*/
  if ( v15 ) /*0x1005395ce*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v15, 1); /*0x1005395e6*/
  return result; /*0x1005395d8*/
}