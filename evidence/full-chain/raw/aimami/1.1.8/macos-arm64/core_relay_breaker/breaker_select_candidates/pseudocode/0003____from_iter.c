// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x1006bdc70 depth=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h5937507b05244171(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  char *v10; // rsi
  char *v11; // r15
  char *v12; // r14
  char *v13; // rbx
  unsigned __int64 v14; // r14
  char *v15; // rsi
  char *v16; // r14
  char *v17; // r13
  char *v18; // r15
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v22; // [rsp+8h] [rbp-68h]
  __int64 v23; // [rsp+10h] [rbp-60h]
  unsigned __int64 v24; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h]
  unsigned __int64 v26; // [rsp+30h] [rbp-40h]
  __int64 v27; // [rsp+38h] [rbp-38h]
  _QWORD *v28; // [rsp+40h] [rbp-30h]

  v2 = *a2; /*0x1006bdc81*/
  v3 = a2[4]; /*0x1006bdc84*/
  if ( *a2 ) /*0x1006bdc81*/
  {
    v4 = 0x34F72C234F72C235LL * ((a2[3] - a2[1]) >> 3); /*0x1006bdca3*/
    if ( v3 ) /*0x1006bdcaa*/
      v4 += 0x34F72C234F72C235LL * ((a2[7] - a2[5]) >> 3); /*0x1006bdcbc*/
  }
  else
  {
    if ( !v3 ) /*0x1006bdcc4*/
    {
      v24 = 0; /*0x1006bdd3d*/
      v25 = 8; /*0x1006bdd45*/
      v8 = 0; /*0x1006bdd4d*/
LABEL_45:
      v26 = v8; /*0x1006bdfa5*/
      goto LABEL_46; /*0x1006bdfa5*/
    }
    v4 = 0x34F72C234F72C235LL * ((a2[7] - a2[5]) >> 3); /*0x1006bdcdc*/
  }
  v28 = a2; /*0x1006bdcf4*/
  if ( v4 > 0x8D3DCB08D3DCB0LL ) /*0x1006bdcf8*/
  {
    v5 = 0; /*0x1006bdcfa*/
    goto LABEL_8; /*0x1006bdcfa*/
  }
  v27 = v2; /*0x1006bdd11*/
  if ( 232 * v4 ) /*0x1006bdce0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006bdd17*/
    v5 = 8; /*0x1006bdd1c*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(232 * v4, 8u); /*0x1006bdd2a*/
    if ( !v6 ) /*0x1006bdd32*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, 232 * v4); /*0x1006bdcfd*/
    v7 = v6; /*0x1006bdd34*/
    v2 = v27; /*0x1006bdd37*/
  }
  else
  {
    v7 = 8; /*0x1006bdd55*/
    v4 = 0; /*0x1006bdd5b*/
  }
  v24 = v4; /*0x1006bdd5e*/
  v25 = v7; /*0x1006bdd62*/
  v26 = 0; /*0x1006bdd66*/
  if ( v2 ) /*0x1006bdd71*/
  {
    v9 = 0x34F72C234F72C235LL * ((v28[3] - v28[1]) >> 3); /*0x1006bdd91*/
    if ( v3 ) /*0x1006bdd98*/
      v9 += 0x34F72C234F72C235LL * ((v28[7] - v28[5]) >> 3); /*0x1006bddaa*/
    if ( v9 <= v4 ) /*0x1006bddb0*/
      goto LABEL_18; /*0x1006bddb0*/
LABEL_25:
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v24, 0, v9, 8, 0xE8u); /*0x1006bde48*/
    v7 = v25; /*0x1006bde5e*/
    v8 = v26; /*0x1006bde62*/
    v23 = v3; /*0x1006bde69*/
    if ( !v2 ) /*0x1006bde6d*/
      goto LABEL_33; /*0x1006bde6d*/
    goto LABEL_19; /*0x1006bde6d*/
  }
  if ( !v3 ) /*0x1006bde1b*/
  {
    v8 = 0; /*0x1006bdf9e*/
    goto LABEL_45; /*0x1006bdf9e*/
  }
  v9 = 0x34F72C234F72C235LL * ((v28[7] - v28[5]) >> 3); /*0x1006bde3b*/
  if ( v9 > v4 ) /*0x1006bde42*/
    goto LABEL_25; /*0x1006bde42*/
LABEL_18:
  v8 = 0; /*0x1006bddb6*/
  v23 = v3; /*0x1006bddbc*/
  if ( !v2 ) /*0x1006bddc0*/
    goto LABEL_33; /*0x1006bddc0*/
LABEL_19:
  v10 = (char *)v28[1]; /*0x1006bddc6*/
  v22 = v28[2]; /*0x1006bddd2*/
  v11 = (char *)v28[3]; /*0x1006bddd6*/
  if ( v10 == v11 ) /*0x1006bdddd*/
  {
    v13 = (char *)v28[1]; /*0x1006bde75*/
  }
  else
  {
    v12 = (char *)(v7 + 232 * v8); /*0x1006bddea*/
    do /*0x1006bde14*/
    {
      memmove(v12, v10, 0xE8u); /*0x1006bddff*/
      ++v8; /*0x1006bde04*/
      v12 += 232; /*0x1006bde07*/
      v10 += 232; /*0x1006bde0e*/
      v13 = v10; /*0x1006bddf0*/
    }
    while ( v10 != v11 ); /*0x1006bde14*/
  }
  if ( v11 != v13 ) /*0x1006bde92*/
  {
    v14 = (v11 - v13) / 0xE8uLL; /*0x1006bde94*/
    do /*0x1006bdeb2*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(v13); /*0x1006bdea3*/
      v13 += 232; /*0x1006bdea8*/
      --v14; /*0x1006bdeaf*/
    }
    while ( v14 ); /*0x1006bdeb2*/
  }
  v3 = v23; /*0x1006bdebb*/
  if ( v22 ) /*0x1006bdebf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006bded1*/
LABEL_33:
  if ( !v3 ) /*0x1006bded9*/
    goto LABEL_45; /*0x1006bded9*/
  v15 = (char *)v28[5]; /*0x1006bdee3*/
  v27 = v28[6]; /*0x1006bdeeb*/
  v16 = (char *)v28[7]; /*0x1006bdeef*/
  if ( v15 == v16 ) /*0x1006bdef6*/
  {
    v18 = v15; /*0x1006bdf38*/
  }
  else
  {
    v17 = (char *)(232 * v8 + v7); /*0x1006bdeff*/
    do /*0x1006bdf34*/
    {
      memmove(v17, v15, 0xE8u); /*0x1006bdf1f*/
      ++v8; /*0x1006bdf24*/
      v17 += 232; /*0x1006bdf27*/
      v15 += 232; /*0x1006bdf2e*/
      v18 = v15; /*0x1006bdf10*/
    }
    while ( v15 != v16 ); /*0x1006bdf34*/
  }
  v26 = v8; /*0x1006bdf52*/
  if ( v16 != v18 ) /*0x1006bdf59*/
  {
    v19 = (v16 - v18) / 0xE8uLL; /*0x1006bdf5b*/
    do /*0x1006bdf72*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(v18); /*0x1006bdf63*/
      v18 += 232; /*0x1006bdf68*/
      --v19; /*0x1006bdf6f*/
    }
    while ( v19 ); /*0x1006bdf72*/
  }
  if ( v27 ) /*0x1006bdf7f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006bdf94*/
LABEL_46:
  a1[2] = v26; /*0x1006bdfa9*/
  v20 = v24; /*0x1006bdfb1*/
  a1[1] = v25; /*0x1006bdfb9*/
  *a1 = v20; /*0x1006bdfbd*/
  return a1; /*0x1006bdfc3*/
}