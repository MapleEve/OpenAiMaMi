// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x101362550 d=2
__int64 __fastcall std::process::Command::output::h737eedd4de2ee22e(__int64 a1, __int64 a2)
{
  char v3; // r13
  __int64 v4; // r12
  pid_t v5; // r14d
  unsigned int v6; // r12d
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+18h] [rbp-88h]
  __int64 v18; // [rsp+20h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-70h] BYREF
  __int64 v20; // [rsp+38h] [rbp-68h]
  __int64 v21; // [rsp+40h] [rbp-60h]
  int v22; // [rsp+4Ch] [rbp-54h]
  __int64 v23; // [rsp+50h] [rbp-50h] BYREF
  pid_t v24[2]; // [rsp+58h] [rbp-48h]
  int v25[3]; // [rsp+60h] [rbp-40h]
  unsigned int v26; // [rsp+6Ch] [rbp-34h] BYREF
  int v27[12]; // [rsp+70h] [rbp-30h] BYREF

  std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::spawn::h4159ca6cfa5ce011( /*0x101362579*/
    &v23,
    a2,
    2,
    0);
  v3 = v23; /*0x10136257e*/
  if ( (_DWORD)v23 == 2 ) /*0x101362586*/
  {
    v4 = *(_QWORD *)v24; /*0x101362588*/
    goto LABEL_24; /*0x10136258c*/
  }
  v22 = HIDWORD(v23); /*0x101362594*/
  v5 = v24[0]; /*0x101362597*/
  v6 = v25[0]; /*0x10136259b*/
  v7 = v25[1]; /*0x1013625b3*/
  if ( v24[1] != 0xFFFFFFFFLL ) /*0x1013625bf*/
    close_NOCANCEL((unsigned int)v24[1]); /*0x1013625c1*/
  v23 = 0; /*0x1013625c6*/
  *(_QWORD *)v24 = 1; /*0x1013625ce*/
  *(_QWORD *)v25 = 0; /*0x1013625d6*/
  v19 = 0; /*0x1013625de*/
  v20 = 1; /*0x1013625e6*/
  v21 = 0; /*0x1013625ee*/
  if ( v6 == -1 ) /*0x101362605*/
  {
    if ( v7 == -1 ) /*0x10136262f*/
      goto LABEL_14; /*0x10136262f*/
    v26 = v7; /*0x101362631*/
    if ( (std::sys::fd::unix::FileDesc::read_to_end::h0ea2ab9eb27c9c4e(&v26, &v19) & 1) != 0 ) /*0x101362644*/
    {
      *(_QWORD *)v27 = v10; /*0x1013627c7*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1013627e9*/
        (__int64)"called `Result::unwrap()` on an `Err` valueWouldBlock",
        43,
        (__int64)v27,
        (__int64)&off_1019269E8,
        (__int64)&off_1019263F8);
    }
    v9 = v7; /*0x10136264a*/
    goto LABEL_12; /*0x10136264a*/
  }
  if ( v7 == -1 ) /*0x10136260b*/
  {
    v26 = v6; /*0x10136260d*/
    if ( (std::sys::fd::unix::FileDesc::read_to_end::h0ea2ab9eb27c9c4e(&v26, &v23) & 1) != 0 ) /*0x101362620*/
    {
      *(_QWORD *)v27 = v8; /*0x101362775*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x101362797*/
        (__int64)"called `Result::unwrap()` on an `Err` valueWouldBlock",
        43,
        (__int64)v27,
        (__int64)&off_1019269E8,
        (__int64)&off_101926410);
    }
    v9 = v6; /*0x101362626*/
LABEL_12:
    close_NOCANCEL(v9); /*0x10136264d*/
    goto LABEL_14; /*0x101362652*/
  }
  v11 = std::sys::process::unix::common::read_output::hc551af4ae02e8c69(v6); /*0x101362662*/
  if ( v11 ) /*0x10136266a*/
  {
    *(_QWORD *)v27 = v11; /*0x10136279e*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1013627c0*/
      (__int64)"called `Result::unwrap()` on an `Err` valueWouldBlock",
      43,
      (__int64)v27,
      (__int64)&off_1019269E8,
      (__int64)&off_101926428);
  }
LABEL_14:
  if ( (v3 & 1) != 0 ) /*0x101362674*/
  {
LABEL_23:
    v14 = v23; /*0x1013626f8*/
    v4 = *(_QWORD *)v24; /*0x1013626fc*/
    v15 = *(_QWORD *)v25; /*0x101362700*/
    v17 = v19; /*0x10136270c*/
    v18 = v20; /*0x101362713*/
    if ( v23 != 0x8000000000000000LL ) /*0x10136272c*/
    {
      *(_QWORD *)(a1 + 40) = v21; /*0x10136274b*/
      *(_QWORD *)(a1 + 32) = v18; /*0x10136275a*/
      *(_QWORD *)(a1 + 24) = v17; /*0x10136275e*/
      *(_QWORD *)a1 = v14; /*0x101362762*/
      *(_QWORD *)(a1 + 8) = v4; /*0x101362765*/
      *(_QWORD *)(a1 + 16) = v15; /*0x101362769*/
      *(_DWORD *)(a1 + 48) = v22; /*0x101362770*/
      return a1; /*0x101362773*/
    }
  }
  else
  {
    v27[0] = 0; /*0x10136267a*/
    do /*0x1013626ae*/
    {
      if ( waitpid(v5, v27, 0) != -1 ) /*0x1013626a0*/
      {
        v22 = v27[0]; /*0x1013626f5*/
        goto LABEL_23; /*0x1013626f5*/
      }
      v12 = *__error(); /*0x1013626a7*/
    }
    while ( v12 == 4 ); /*0x1013626ae*/
    v13 = v12 << 32; /*0x1013626b0*/
    if ( v19 ) /*0x1013626bb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013626c6*/
    v4 = v13 | 2; /*0x1013626cb*/
    if ( v23 ) /*0x1013626e0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013626eb*/
  }
LABEL_24:
  *(_QWORD *)(a1 + 8) = v4; /*0x10136272e*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x101362732*/
  return a1; /*0x101362738*/
}