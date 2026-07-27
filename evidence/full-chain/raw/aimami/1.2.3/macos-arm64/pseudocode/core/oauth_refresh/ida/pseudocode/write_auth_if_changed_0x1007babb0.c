// __ZN13codexmate_lib4core13oauth_refresh21write_auth_if_changed @ 0x1007babb0
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::write_auth_if_changed | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::oauth_refresh::write_auth_if_changed::hfa24da92d1836bdd(
        void *a1,
        size_t a2,
        void *a3,
        size_t a4)
{
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  char *v13; // rdi
  char *v14; // r14
  __int64 v16; // [rsp+0h] [rbp-50h] BYREF
  void *__s1; // [rsp+8h] [rbp-48h]
  __int64 v18; // [rsp+10h] [rbp-40h]
  void *__s2; // [rsp+18h] [rbp-38h]
  char *v20; // [rsp+20h] [rbp-30h]

  __s2 = a3; /*0x1007babc4*/
  std::fs::read::inner::h6a30c15c40add28b(&v16, a1, a2); /*0x1007babd8*/
  v7 = v16; /*0x1007babdd*/
  if ( __OFSUB__(-v16, 1) ) /*0x1007babe4*/
  {
    if ( ((unsigned __int8)__s1 & 3) == 1 ) /*0x1007babf5*/
    {
      v20 = (char *)__s1 - 1; /*0x1007babfb*/
      v8 = *(_QWORD *)((char *)__s1 - 1); /*0x1007babff*/
      v9 = *(_QWORD *)((char *)__s1 + 7); /*0x1007bac03*/
      if ( *(_QWORD *)v9 ) /*0x1007bac07*/
        (*(void (__fastcall **)(__int64))v9)(v8); /*0x1007bac12*/
      v10 = *(_QWORD *)(v9 + 8); /*0x1007bac14*/
      if ( v10 ) /*0x1007bac1b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x1007bac24*/
      v11 = 24; /*0x1007bac29*/
      v12 = 8; /*0x1007bac2e*/
      v13 = v20; /*0x1007bac33*/
      goto LABEL_12; /*0x1007bac37*/
    }
    return codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(a1, a2); /*0x1007babf5*/
  }
  v14 = (char *)__s1; /*0x1007bac39*/
  if ( v18 != a4 || memcmp(__s1, __s2, a4) ) /*0x1007bac4d*/
  {
    if ( v7 ) /*0x1007bac59*/
    {
      v12 = 1; /*0x1007bac5b*/
      v13 = v14; /*0x1007bac60*/
      v11 = v7; /*0x1007bac63*/
LABEL_12:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v11, v12); /*0x1007bac66*/
    }
    return codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(a1, a2); /*0x1007bac8c*/
  }
  if ( v7 ) /*0x1007bac94*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v7, 1); /*0x1007baca1*/
  return 0; /*0x1007bac7e*/
}