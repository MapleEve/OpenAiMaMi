// __ZN13codexmate_lib4core8sessions24serialize_export_content @ 0x10053bbc0 | 基线 same-set
double __fastcall codexmate_lib::core::sessions::serialize_export_content::hf52d7d64a4ffc9d5(
        size_t *a1,
        unsigned __int8 *a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // r14
  size_t v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rsi
  double result; // xmm0_8
  _QWORD v9[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h]

  if ( !a2 ) /*0x10053bbd0*/
    goto LABEL_9; /*0x10053bbd0*/
  v2 = *a2; /*0x10053bbd6*/
  if ( v2 == 3 ) /*0x10053bbdc*/
  {
    codexmate_lib::core::sessions::normalize_export_text::habb588d1fecee409( /*0x10053bca8*/
      a1,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 3));
    return result; /*0x10053bca8*/
  }
  if ( v2 == 4 ) /*0x10053bbe5*/
  {
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd7ea2f3b361a19bc( /*0x10053bc04*/
      &v10,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 2) + 32LL * *((_QWORD *)a2 + 3));
    v3 = v11; /*0x10053bc09*/
    v4 = v12; /*0x10053bc0d*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v9, v11, v12, &unk_1015FD00E, 2); /*0x10053bc28*/
    a1[2] = v9[2]; /*0x10053bc31*/
    v5 = v9[0]; /*0x10053bc35*/
    a1[1] = v9[1]; /*0x10053bc3d*/
    *a1 = v5; /*0x10053bc41*/
    if ( v4 ) /*0x10053bc47*/
    {
      v6 = (_QWORD *)(v3 + 8); /*0x10053bc49*/
      do /*0x10053bc57*/
      {
        v7 = *(v6 - 1); /*0x10053bc59*/
        if ( v7 ) /*0x10053bc60*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v7, 1); /*0x10053bc6a*/
        v6 += 3; /*0x10053bc50*/
        --v4; /*0x10053bc54*/
      }
      while ( v4 ); /*0x10053bc57*/
    }
    if ( v10 ) /*0x10053bcb4*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24 * v10, 8); /*0x10053bcc6*/
  }
  else
  {
LABEL_9:
    *a1 = 0; /*0x10053bc71*/
    a1[1] = 1; /*0x10053bc78*/
    a1[2] = 0; /*0x10053bc80*/
  }
  return result; /*0x10053bc88*/
}