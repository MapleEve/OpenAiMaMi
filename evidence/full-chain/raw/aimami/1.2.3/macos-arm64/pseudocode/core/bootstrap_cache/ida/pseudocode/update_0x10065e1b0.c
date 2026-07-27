// __ZN13codexmate_lib4core15bootstrap_cache6update @ 0x10065e1b0
_QWORD *__fastcall codexmate_lib::core::bootstrap_cache::update::h3bd104096f6abd57(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // r12
  void *v9; // r13
  size_t v10; // r14
  __int64 v11; // r14
  _QWORD v13[132]; // [rsp+0h] [rbp-890h] BYREF
  _QWORD __src[132]; // [rsp+420h] [rbp-470h] BYREF
  int v15; // [rsp+840h] [rbp-50h]
  void *v16; // [rsp+848h] [rbp-48h]
  __int64 v17; // [rsp+850h] [rbp-40h] BYREF
  void *__buf; // [rsp+858h] [rbp-38h]
  size_t __nbyte; // [rsp+860h] [rbp-30h]

  codexmate_lib::core::bootstrap_cache::load::hbe2b23d0f811fb61(v13); /*0x10065e1d7*/
  v17 = std::time::SystemTime::now::h1fe79e41f9d5677f(v13, a2); /*0x10065e1e1*/
  LODWORD(__buf) = v6; /*0x10065e1e5*/
  std::time::SystemTime::duration_since::had059553cab94f96(__src, &v17, 0, 0); /*0x10065e1f7*/
  if ( LOBYTE(__src[0]) ) /*0x10065e203*/
    v7 = 0; /*0x10065e20e*/
  else
    v7 = __src[1]; /*0x10065e205*/
  v13[0] = 1; /*0x10065e210*/
  v13[1] = v7; /*0x10065e21b*/
  _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::hbbf1f4b394d1158f(__src); /*0x10065e22c*/
  v16 = a2; /*0x10065e231*/
  if ( LODWORD(v13[2]) != 3 ) /*0x10065e243*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043(&v13[2], a4); /*0x10065e248*/
  memcpy(&v13[2], __src, 0x330u); /*0x10065e25c*/
  memcpy(__src, v13, sizeof(__src)); /*0x10065e277*/
  v15 = 1; /*0x10065e27c*/
  serde_json::ser::to_vec::h36863d77f0446f6b(&v17, __src); /*0x10065e28a*/
  v8 = v17; /*0x10065e28f*/
  v9 = __buf; /*0x10065e293*/
  if ( __OFSUB__(-v17, 1) ) /*0x10065e29a*/
  {
    *a1 = 3; /*0x10065e29f*/
    a1[1] = v9; /*0x10065e2a6*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(__src); /*0x10065e2b1*/
  }
  else
  {
    v10 = __nbyte; /*0x10065e2b8*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(__src); /*0x10065e2c3*/
    v11 = std::fs::write::inner::had0c1bee0a2c1e21(v16, a3, v9, v10); /*0x10065e2da*/
    if ( v8 ) /*0x10065e2e0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x10065e2ed*/
    if ( v11 ) /*0x10065e2f5*/
    {
      *a1 = 2; /*0x10065e2f7*/
      a1[1] = v11; /*0x10065e2fe*/
    }
    else
    {
      *a1 = 11; /*0x10065e304*/
    }
  }
  return a1; /*0x10065e30e*/
}