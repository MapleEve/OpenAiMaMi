// __ZN13codexmate_lib4core5relay5quota15value_to_string @ 0x1008acc40 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(
        unsigned __int64 *a1,
        unsigned __int8 *a2)
{
  int v3; // eax
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rdi
  const void *v8; // rax
  __int64 v9; // rdx
  size_t v10; // r14
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  const void *v14; // r13
  __int64 v15; // rax
  __int64 v16; // r15
  _QWORD v17[3]; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-48h] BYREF
  __int64 v19; // [rsp+20h] [rbp-40h]
  unsigned __int64 v20; // [rsp+28h] [rbp-38h]
  char v21[41]; // [rsp+37h] [rbp-29h] BYREF

  if ( !a2 ) /*0x1008acc57*/
    goto LABEL_8; /*0x1008acc57*/
  v3 = *a2; /*0x1008acc59*/
  if ( v3 == 2 ) /*0x1008acc5f*/
  {
    v18 = 0; /*0x1008accb3*/
    v19 = 1; /*0x1008accbb*/
    v20 = 0; /*0x1008accc3*/
    v17[2] = 1610612768; /*0x1008acccb*/
    v17[0] = &v18; /*0x1008accd7*/
    v17[1] = &anon_10420c9971c21f44d230d15b39fb3fec_964; /*0x1008acce2*/
    if ( (unsigned __int8)_$LT$serde_json..number..Number$u20$as$u20$core..fmt..Display$GT$::fmt::hf3bcbc63ca3abd0b( /*0x1008accf0*/
                            a2 + 8,
                            v17) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008acd8f*/
        &anon_10420c9971c21f44d230d15b39fb3fec_965,
        55,
        v21,
        &anon_10420c9971c21f44d230d15b39fb3fec_976,
        &anon_10420c9971c21f44d230d15b39fb3fec_967);
    a1[2] = v20; /*0x1008accfd*/
    v12 = v18; /*0x1008acd01*/
    a1[1] = v19; /*0x1008acd09*/
    goto LABEL_11; /*0x1008acd09*/
  }
  if ( v3 != 3 /*0x1008acc7c*/
    || (v4 = *((_QWORD *)a2 + 2),
        v5 = *((_QWORD *)a2 + 3),
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v5),
        !v6) )
  {
LABEL_8:
    v12 = 0x8000000000000000LL; /*0x1008acca3*/
LABEL_11:
    *a1 = v12; /*0x1008acd0d*/
    return a1; /*0x1008acd0d*/
  }
  v7 = v4; /*0x1008acc7e*/
  v8 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v5); /*0x1008acc84*/
  v10 = v9; /*0x1008acc89*/
  if ( v9 < 0 ) /*0x1008acc8f*/
  {
    v11 = 0; /*0x1008acc95*/
    goto LABEL_7; /*0x1008acc95*/
  }
  if ( v9 ) /*0x1008acd22*/
  {
    v14 = v8; /*0x1008acd24*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v5); /*0x1008acd27*/
    v11 = 1; /*0x1008acd2c*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x1008acd3a*/
    if ( !v15 ) /*0x1008acd42*/
LABEL_7:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x1008acc98*/
    v16 = v15; /*0x1008acd48*/
    v8 = v14; /*0x1008acd4b*/
  }
  else
  {
    v16 = 1; /*0x1008acd50*/
  }
  memcpy((void *)v16, v8, v10); /*0x1008acd5f*/
  *a1 = v10; /*0x1008acd64*/
  a1[1] = v16; /*0x1008acd67*/
  a1[2] = v10; /*0x1008acd6b*/
  return a1; /*0x1008acd13*/
}