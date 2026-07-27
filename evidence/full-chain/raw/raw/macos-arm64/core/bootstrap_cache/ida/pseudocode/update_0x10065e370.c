// __ZN13codexmate_lib4core15bootstrap_cache6update @ 0x10065e370
_QWORD *__fastcall codexmate_lib::core::bootstrap_cache::update::h50213464ac459fea(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  int v6; // edx
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // r12
  void *v11; // r13
  size_t v12; // r14
  __int64 v13; // r14
  _QWORD __src[132]; // [rsp+8h] [rbp-8A8h] BYREF
  _QWORD __dst[132]; // [rsp+428h] [rbp-488h] BYREF
  int v17; // [rsp+848h] [rbp-68h]
  _QWORD v18[3]; // [rsp+850h] [rbp-60h] BYREF
  size_t __n; // [rsp+868h] [rbp-48h]
  __int64 v20; // [rsp+870h] [rbp-40h] BYREF
  void *__buf; // [rsp+878h] [rbp-38h]
  size_t __nbyte; // [rsp+880h] [rbp-30h]

  codexmate_lib::core::bootstrap_cache::load::hbe2b23d0f811fb61(__src); /*0x10065e397*/
  v20 = std::time::SystemTime::now::h1fe79e41f9d5677f(__src, a2); /*0x10065e3a1*/
  LODWORD(__buf) = v6; /*0x10065e3a5*/
  std::time::SystemTime::duration_since::had059553cab94f96(__dst, &v20, 0, 0); /*0x10065e3b7*/
  if ( LOBYTE(__dst[0]) ) /*0x10065e3c3*/
    v7 = 0; /*0x10065e3ce*/
  else
    v7 = __dst[1]; /*0x10065e3c5*/
  __src[0] = 1; /*0x10065e3d0*/
  __src[1] = v7; /*0x10065e3db*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf78dc5999b5593ff(v18, a4); /*0x10065e3e9*/
  __n = a3; /*0x10065e3ee*/
  v8 = *(_DWORD *)(a4 + 56); /*0x10065e3f2*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v20, a4 + 24); /*0x10065e400*/
  v9 = *(_QWORD *)(a4 + 48); /*0x10065e405*/
  __dst[2] = v18[2]; /*0x10065e40e*/
  __dst[1] = v18[1]; /*0x10065e41d*/
  __dst[0] = v18[0]; /*0x10065e424*/
  __dst[3] = v20; /*0x10065e433*/
  __dst[4] = __buf; /*0x10065e43a*/
  __dst[5] = __nbyte; /*0x10065e445*/
  if ( !__OFSUB__(0, __src[116]) ) /*0x10065e45c*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerListPayload$GT$::h380e229e68d9ef7b(&__src[116]); /*0x10065e461*/
  __src[121] = __dst[5]; /*0x10065e46d*/
  __src[120] = __dst[4]; /*0x10065e479*/
  __src[119] = __dst[3]; /*0x10065e485*/
  __src[118] = __dst[2]; /*0x10065e491*/
  __src[117] = __dst[1]; /*0x10065e4a4*/
  __src[116] = __dst[0]; /*0x10065e4a9*/
  __src[122] = v9; /*0x10065e4ad*/
  LODWORD(__src[123]) = v8; /*0x10065e4b4*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x10065e4d1*/
  v17 = 1; /*0x10065e4d6*/
  serde_json::ser::to_vec::h36863d77f0446f6b(&v20, __dst); /*0x10065e4e4*/
  v10 = v20; /*0x10065e4f3*/
  v11 = __buf; /*0x10065e4f7*/
  if ( v20 == 0x8000000000000000LL ) /*0x10065e4fe*/
  {
    *a1 = 3; /*0x10065e500*/
    a1[1] = v11; /*0x10065e507*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(__dst); /*0x10065e512*/
  }
  else
  {
    v12 = __nbyte; /*0x10065e519*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(__dst); /*0x10065e524*/
    v13 = std::fs::write::inner::had0c1bee0a2c1e21(a2, __n, v11, v12); /*0x10065e53b*/
    if ( v10 ) /*0x10065e541*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x10065e54e*/
    if ( v13 ) /*0x10065e556*/
    {
      *a1 = 2; /*0x10065e558*/
      a1[1] = v13; /*0x10065e55f*/
    }
    else
    {
      *a1 = 11; /*0x10065e565*/
    }
  }
  return a1; /*0x10065e56f*/
}