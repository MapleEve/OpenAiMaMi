// __ZN13codexmate_lib4core10repository10Repository24preflight_account_switch @ 0x10073b080 | 1.2.4 NEW-delta
_BYTE *__fastcall codexmate_lib::core::repository::Repository::preflight_account_switch::h4d168e2a000a5db5(
        _BYTE *a1,
        __int64 a2,
        void *a3,
        size_t a4)
{
  bool v5; // r13
  void *v6; // r15
  __int64 v7; // r12
  _BYTE v9[96]; // [rsp+8h] [rbp-288h] BYREF
  _QWORD v10[12]; // [rsp+68h] [rbp-228h] BYREF
  __int64 v11; // [rsp+C8h] [rbp-1C8h] BYREF
  _BYTE __dst[144]; // [rsp+D0h] [rbp-1C0h] BYREF
  _QWORD v13[12]; // [rsp+160h] [rbp-130h] BYREF
  __int64 v14; // [rsp+1C0h] [rbp-D0h]
  _BYTE __src[144]; // [rsp+1C8h] [rbp-C8h] BYREF
  void *__s2; // [rsp+258h] [rbp-38h]
  __int64 v17; // [rsp+260h] [rbp-30h]

  __s2 = a3; /*0x10073b0a7*/
  codexmate_lib::core::repository::Repository::load_account_switch_target::h1fb500f29912f672(v13); /*0x10073b0ab*/
  qmemcpy(v9, v13, sizeof(v9)); /*0x10073b0c6*/
  if ( v14 == 2 ) /*0x10073b0cd*/
  {
    qmemcpy(a1, v9, 0x60u); /*0x10073b0de*/
  }
  else
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x10073b0f9*/
    qmemcpy(v10, v9, sizeof(v10)); /*0x10073b114*/
    v11 = v14; /*0x10073b11e*/
    qmemcpy(v13, v9, 0x58u); /*0x10073b134*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h8a92ac7224da7736(&v11); /*0x10073b13a*/
    v5 = 0; /*0x10073b13f*/
    if ( !__OFSUB__(0, v13[3]) && v13[5] == a4 ) /*0x10073b152*/
    {
      v6 = __s2; /*0x10073b15b*/
      if ( !memcmp((const void *)v13[4], __s2, a4) /*0x10073b198*/
        && (codexmate_lib::core::repository::Repository::live_account_identity::h3024e0f43e2bbcb7(
              v10,
              *(_QWORD *)(a2 + 32),
              *(_QWORD *)(a2 + 40)),
            v7 = v10[0],
            v10[0] != 0x8000000000000000LL) )
      {
        v17 = v10[1]; /*0x10073b1d7*/
        v5 = v10[2] == a4 && memcmp((const void *)v10[1], v6, a4) == 0; /*0x10073b1ea*/
        if ( v7 ) /*0x10073b1f6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v7, 1); /*0x10073b204*/
      }
      else
      {
        v5 = 0; /*0x10073b19a*/
      }
    }
    a1[8] = v5; /*0x10073b19d*/
    *(_QWORD *)a1 = 11; /*0x10073b1a1*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::ha96ba23e9c410a0d(v13); /*0x10073b1af*/
  }
  return a1; /*0x10073b1b7*/
}