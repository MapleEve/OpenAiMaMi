// __ZN13codexmate_lib4core10repository10Repository24preflight_account_switch @ 0x100a5e5f0 | 基线 same-set
_BYTE *__fastcall codexmate_lib::core::repository::Repository::preflight_account_switch::hfae264efc19f9c01(
        _BYTE *a1,
        __int64 a2,
        void *a3,
        size_t a4,
        __m128i a5)
{
  __int64 v6; // r14
  void *v7; // rbx
  __int64 v8; // r13
  bool v9; // r15
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r15
  _BYTE v14[96]; // [rsp+8h] [rbp-288h] BYREF
  _QWORD v15[12]; // [rsp+68h] [rbp-228h] BYREF
  __int64 v16; // [rsp+C8h] [rbp-1C8h] BYREF
  _BYTE __dst[144]; // [rsp+D0h] [rbp-1C0h] BYREF
  _QWORD v18[12]; // [rsp+160h] [rbp-130h] BYREF
  __int64 v19; // [rsp+1C0h] [rbp-D0h]
  _BYTE __src[144]; // [rsp+1C8h] [rbp-C8h] BYREF
  void *__s2; // [rsp+258h] [rbp-38h]
  __int64 v22; // [rsp+260h] [rbp-30h]

  __s2 = a3; /*0x100a5e617*/
  codexmate_lib::core::repository::Repository::load_account_switch_target::h4d1e127205729df9( /*0x100a5e61b*/
    v18,
    a2,
    a3,
    a4,
    *(double *)a5.i64);
  qmemcpy(v14, v18, sizeof(v14)); /*0x100a5e636*/
  if ( v19 == 2 ) /*0x100a5e63d*/
  {
    qmemcpy(a1, v14, 0x60u); /*0x100a5e64e*/
    return a1; /*0x100a5e64e*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x100a5e669*/
  qmemcpy(v15, v14, sizeof(v15)); /*0x100a5e684*/
  v16 = v19; /*0x100a5e68e*/
  qmemcpy(v18, v14, 0x58u); /*0x100a5e6a4*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v16); /*0x100a5e6aa*/
  v6 = v18[3]; /*0x100a5e6af*/
  if ( !__OFSUB__(-v18[3], 1) && v18[5] == a4 ) /*0x100a5e6c5*/
  {
    v7 = __s2; /*0x100a5e6ce*/
    if ( !memcmp((const void *)v18[4], __s2, a4) /*0x100a5e709*/
      && (codexmate_lib::core::repository::Repository::live_account_identity::h503e6c01c902a0b6(
            (__int64)v15,
            *(_QWORD *)(a2 + 32),
            *(_QWORD *)(a2 + 40),
            a5),
          v8 = v15[0],
          v15[0] != 0x8000000000000000LL) )
    {
      v22 = v15[1]; /*0x100a5e7c7*/
      v9 = v15[2] == a4 && memcmp((const void *)v15[1], v7, a4) == 0; /*0x100a5e7da*/
      if ( v8 ) /*0x100a5e7e6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v8, 1); /*0x100a5e7f8*/
    }
    else
    {
      v9 = 0; /*0x100a5e70f*/
    }
    a1[8] = v9; /*0x100a5e712*/
    *(_QWORD *)a1 = 11; /*0x100a5e717*/
    goto LABEL_10; /*0x100a5e71f*/
  }
  a1[8] = 0; /*0x100a5e721*/
  *(_QWORD *)a1 = 11; /*0x100a5e727*/
  if ( v6 != 0x8000000000000000LL ) /*0x100a5e73c*/
  {
LABEL_10:
    if ( v6 ) /*0x100a5e741*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[4], v6, 1); /*0x100a5e752*/
  }
  v10 = v18[1]; /*0x100a5e757*/
  v11 = v18[2]; /*0x100a5e75e*/
  if ( v18[2] ) /*0x100a5e768*/
  {
    v12 = v18[1]; /*0x100a5e76a*/
    do /*0x100a5e782*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v12); /*0x100a5e773*/
      v12 += 424; /*0x100a5e778*/
      --v11; /*0x100a5e77f*/
    }
    while ( v11 ); /*0x100a5e782*/
  }
  if ( v18[0] ) /*0x100a5e78e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 424LL * v18[0], 8); /*0x100a5e79f*/
  return a1; /*0x100a5e7a7*/
}