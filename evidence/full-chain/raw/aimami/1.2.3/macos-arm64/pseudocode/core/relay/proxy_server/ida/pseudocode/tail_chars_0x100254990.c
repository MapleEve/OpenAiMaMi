// __ZN13codexmate_lib4core5relay12proxy_server10tail_chars @ 0x100254990 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::proxy_server::tail_chars::h8d6acf2dedbce298(
        signed __int64 *a1,
        char *a2,
        signed __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v10; // rax
  bool v11; // cc
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  void *result; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  _QWORD v18[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( (unsigned __int64)a3 >= 0x20 ) /*0x1002549b7*/
  {
    v14 = core::str::count::do_count_chars::h4875767a8f682eeb(a2, a3); /*0x1002549d6*/
    v11 = v14 <= a4; /*0x1002549db*/
    v12 = v14 - a4; /*0x1002549db*/
    if ( v11 ) /*0x1002549de*/
      goto LABEL_3; /*0x1002549de*/
LABEL_7:
    v18[0] = a2; /*0x1002549e0*/
    v18[1] = &a2[a3]; /*0x1002549e7*/
    v18[2] = v12; /*0x1002549eb*/
    return (void *)((__int64 (__fastcall *)(signed __int64 *, _QWORD *))_$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h7a01a4466c85d16a)( /*0x1002549fb*/
                     a1,
                     v18);
  }
  v10 = core::str::count::char_count_general_case::h35f326d7c82e4f55(a2, a3); /*0x1002549b9*/
  v11 = v10 <= a4; /*0x1002549be*/
  v12 = v10 - a4; /*0x1002549be*/
  if ( !v11 ) /*0x1002549c1*/
    goto LABEL_7; /*0x1002549c1*/
LABEL_3:
  if ( a3 < 0 ) /*0x1002549c6*/
  {
    v13 = 0; /*0x1002549c8*/
    goto LABEL_5; /*0x1002549c8*/
  }
  if ( a3 ) /*0x1002549fd*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1002549ff*/
    v13 = 1; /*0x100254a04*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100254a12*/
    if ( !v16 ) /*0x100254a1a*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, a3); /*0x1002549cb*/
    v17 = v16; /*0x100254a1c*/
  }
  else
  {
    v17 = 1; /*0x100254a21*/
  }
  result = memcpy((void *)v17, a2, a3); /*0x100254a30*/
  *a1 = a3; /*0x100254a35*/
  a1[1] = v17; /*0x100254a38*/
  a1[2] = a3; /*0x100254a3c*/
  return result; /*0x100254a40*/
}