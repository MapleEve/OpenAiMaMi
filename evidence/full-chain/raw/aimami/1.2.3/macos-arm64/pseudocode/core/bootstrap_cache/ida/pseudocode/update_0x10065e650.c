// __ZN13codexmate_lib4core15bootstrap_cache6update @ 0x10065e650
_QWORD *__fastcall codexmate_lib::core::bootstrap_cache::update::hc1cab0e003b0ccfc(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  int v6; // edx
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // r12
  void *v12; // r13
  size_t v13; // r14
  __int64 v14; // r14
  _QWORD __src[132]; // [rsp+0h] [rbp-8B0h] BYREF
  _QWORD __dst[132]; // [rsp+420h] [rbp-490h] BYREF
  int v18; // [rsp+840h] [rbp-70h]
  _QWORD v19[3]; // [rsp+848h] [rbp-68h] BYREF
  size_t __n; // [rsp+860h] [rbp-50h]
  void *v21; // [rsp+868h] [rbp-48h]
  __int64 v22; // [rsp+870h] [rbp-40h] BYREF
  void *__buf; // [rsp+878h] [rbp-38h]
  size_t __nbyte; // [rsp+880h] [rbp-30h]

  codexmate_lib::core::bootstrap_cache::load::hbe2b23d0f811fb61(__src); /*0x10065e677*/
  v22 = std::time::SystemTime::now::h1fe79e41f9d5677f(__src, a2); /*0x10065e681*/
  LODWORD(__buf) = v6; /*0x10065e685*/
  std::time::SystemTime::duration_since::had059553cab94f96(__dst, &v22, 0, 0); /*0x10065e697*/
  if ( LOBYTE(__dst[0]) ) /*0x10065e6a3*/
    v7 = 0; /*0x10065e6ae*/
  else
    v7 = __dst[1]; /*0x10065e6a5*/
  __src[0] = 1; /*0x10065e6b0*/
  __src[1] = v7; /*0x10065e6bb*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5e221ad65d73ad84(v19, a4); /*0x10065e6c9*/
  v21 = a2; /*0x10065e6ce*/
  __n = a3; /*0x10065e6d2*/
  v8 = *(_DWORD *)(a4 + 56); /*0x10065e6d6*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v22, a4 + 24); /*0x10065e6e4*/
  v9 = *(_QWORD *)(a4 + 48); /*0x10065e6e9*/
  __dst[2] = v19[2]; /*0x10065e6f2*/
  __dst[1] = v19[1]; /*0x10065e701*/
  __dst[0] = v19[0]; /*0x10065e708*/
  __dst[3] = v22; /*0x10065e717*/
  __dst[4] = __buf; /*0x10065e71e*/
  __dst[5] = __nbyte; /*0x10065e729*/
  v10 = __src[124]; /*0x10065e737*/
  if ( !__OFSUB__(-__src[124], 1) ) /*0x10065e744*/
  {
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e99d9d35889ec90(&__src[124]); /*0x10065e749*/
    if ( v10 ) /*0x10065e751*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[125], 184 * v10, 8); /*0x10065e766*/
    if ( __src[127] ) /*0x10065e775*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[128], __src[127], 1); /*0x10065e783*/
  }
  __src[129] = __dst[5]; /*0x10065e78f*/
  __src[128] = __dst[4]; /*0x10065e79b*/
  __src[127] = __dst[3]; /*0x10065e7a7*/
  __src[126] = __dst[2]; /*0x10065e7b3*/
  __src[125] = __dst[1]; /*0x10065e7c6*/
  __src[124] = __dst[0]; /*0x10065e7cb*/
  __src[130] = v9; /*0x10065e7cf*/
  LODWORD(__src[131]) = v8; /*0x10065e7d6*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x10065e7f3*/
  v18 = 1; /*0x10065e7f8*/
  serde_json::ser::to_vec::h36863d77f0446f6b(&v22, __dst); /*0x10065e806*/
  v11 = v22; /*0x10065e815*/
  v12 = __buf; /*0x10065e819*/
  if ( v22 == 0x8000000000000000LL ) /*0x10065e820*/
  {
    *a1 = 3; /*0x10065e822*/
    a1[1] = v12; /*0x10065e829*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(__dst); /*0x10065e834*/
  }
  else
  {
    v13 = __nbyte; /*0x10065e83b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(__dst); /*0x10065e846*/
    v14 = std::fs::write::inner::had0c1bee0a2c1e21(v21, __n, v12, v13); /*0x10065e85e*/
    if ( v11 ) /*0x10065e864*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x10065e871*/
    if ( v14 ) /*0x10065e879*/
    {
      *a1 = 2; /*0x10065e87b*/
      a1[1] = v14; /*0x10065e882*/
    }
    else
    {
      *a1 = 11; /*0x10065e888*/
    }
  }
  return a1; /*0x10065e892*/
}