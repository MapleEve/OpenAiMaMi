// mac 1.1.8 BEHAVIORAL-BACKEND uninstall_daemon node 0x1010abe00 depth=1
// std7process7Command6output
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

  std::sys::process::unix::unix::_$LT$impl$u20$std..sys..process..unix..common..Command$GT$::spawn::h4159ca6cfa5ce011( /*0x1010abe29*/
    &v23,
    a2,
    2,
    0);
  v3 = v23; /*0x1010abe2e*/
  if ( (_DWORD)v23 == 2 ) /*0x1010abe36*/
  {
    v4 = *(_QWORD *)v24; /*0x1010abe38*/
    goto LABEL_24; /*0x1010abe3c*/
  }
  v22 = HIDWORD(v23); /*0x1010abe44*/
  v5 = v24[0]; /*0x1010abe47*/
  v6 = v25[0]; /*0x1010abe4b*/
  v7 = v25[1]; /*0x1010abe63*/
  if ( v24[1] != 0xFFFFFFFFLL ) /*0x1010abe6f*/
    close_NOCANCEL((unsigned int)v24[1]); /*0x1010abe71*/
  v23 = 0; /*0x1010abe76*/
  *(_QWORD *)v24 = 1; /*0x1010abe7e*/
  *(_QWORD *)v25 = 0; /*0x1010abe86*/
  v19 = 0; /*0x1010abe8e*/
  v20 = 1; /*0x1010abe96*/
  v21 = 0; /*0x1010abe9e*/
  if ( v6 == -1 ) /*0x1010abeb5*/
  {
    if ( v7 == -1 ) /*0x1010abedf*/
      goto LABEL_14; /*0x1010abedf*/
    v26 = v7; /*0x1010abee1*/
    if ( (std::sys::fd::unix::FileDesc::read_to_end::h0ea2ab9eb27c9c4e(&v26, &v19) & 1) != 0 ) /*0x1010abef4*/
    {
      *(_QWORD *)v27 = v10; /*0x1010ac077*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1010ac099*/
        (__int64)"called `Result::unwrap()` on an `Err` valueWouldBlock",
        43,
        (__int64)v27,
        (__int64)&off_1015AEAC8,
        (__int64)&off_1015AE4D8);
    }
    v9 = v7; /*0x1010abefa*/
    goto LABEL_12; /*0x1010abefa*/
  }
  if ( v7 == -1 ) /*0x1010abebb*/
  {
    v26 = v6; /*0x1010abebd*/
    if ( (std::sys::fd::unix::FileDesc::read_to_end::h0ea2ab9eb27c9c4e(&v26, &v23) & 1) != 0 ) /*0x1010abed0*/
    {
      *(_QWORD *)v27 = v8; /*0x1010ac025*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1010ac047*/
        (__int64)"called `Result::unwrap()` on an `Err` valueWouldBlock",
        43,
        (__int64)v27,
        (__int64)&off_1015AEAC8,
        (__int64)&off_1015AE4F0);
    }
    v9 = v6; /*0x1010abed6*/
LABEL_12:
    close_NOCANCEL(v9); /*0x1010abefd*/
    goto LABEL_14; /*0x1010abf02*/
  }
  v11 = std::sys::process::unix::common::read_output::hc551af4ae02e8c69(v6); /*0x1010abf12*/
  if ( v11 ) /*0x1010abf1a*/
  {
    *(_QWORD *)v27 = v11; /*0x1010ac04e*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1010ac070*/
      (__int64)"called `Result::unwrap()` on an `Err` valueWouldBlock",
      43,
      (__int64)v27,
      (__int64)&off_1015AEAC8,
      (__int64)&off_1015AE508);
  }
LABEL_14:
  if ( (v3 & 1) != 0 ) /*0x1010abf24*/
  {
LABEL_23:
    v14 = v23; /*0x1010abfa8*/
    v4 = *(_QWORD *)v24; /*0x1010abfac*/
    v15 = *(_QWORD *)v25; /*0x1010abfb0*/
    v17 = v19; /*0x1010abfbc*/
    v18 = v20; /*0x1010abfc3*/
    if ( v23 != 0x8000000000000000LL ) /*0x1010abfdc*/
    {
      *(_QWORD *)(a1 + 40) = v21; /*0x1010abffb*/
      *(_QWORD *)(a1 + 32) = v18; /*0x1010ac00a*/
      *(_QWORD *)(a1 + 24) = v17; /*0x1010ac00e*/
      *(_QWORD *)a1 = v14; /*0x1010ac012*/
      *(_QWORD *)(a1 + 8) = v4; /*0x1010ac015*/
      *(_QWORD *)(a1 + 16) = v15; /*0x1010ac019*/
      *(_DWORD *)(a1 + 48) = v22; /*0x1010ac020*/
      return a1; /*0x1010ac023*/
    }
  }
  else
  {
    v27[0] = 0; /*0x1010abf2a*/
    do /*0x1010abf5e*/
    {
      if ( waitpid(v5, v27, 0) != -1 ) /*0x1010abf50*/
      {
        v22 = v27[0]; /*0x1010abfa5*/
        goto LABEL_23; /*0x1010abfa5*/
      }
      v12 = *__error(); /*0x1010abf57*/
    }
    while ( v12 == 4 ); /*0x1010abf5e*/
    v13 = v12 << 32; /*0x1010abf60*/
    if ( v19 ) /*0x1010abf6b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010abf76*/
    v4 = v13 | 2; /*0x1010abf7b*/
    if ( v23 ) /*0x1010abf90*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010abf9b*/
  }
LABEL_24:
  *(_QWORD *)(a1 + 8) = v4; /*0x1010abfde*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1010abfe2*/
  return a1; /*0x1010abfe8*/
}