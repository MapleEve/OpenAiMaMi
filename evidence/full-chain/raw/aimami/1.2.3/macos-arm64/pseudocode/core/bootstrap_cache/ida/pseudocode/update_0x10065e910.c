// __ZN13codexmate_lib4core15bootstrap_cache6update @ 0x10065e910
_QWORD *__fastcall codexmate_lib::core::bootstrap_cache::update::hd7784444676a6e73(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  _QWORD *v6; // r13
  int v7; // edx
  __int64 v8; // rcx
  _QWORD *v9; // r12
  __int64 v10; // r14
  __int64 v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r14
  void *v16; // r12
  size_t v17; // r15
  __int64 v18; // r15
  _QWORD __dst[132]; // [rsp+8h] [rbp-8E8h] BYREF
  int v21; // [rsp+428h] [rbp-4C8h]
  _QWORD __src[132]; // [rsp+430h] [rbp-4C0h] BYREF
  __m128 v23; // [rsp+850h] [rbp-A0h]
  __int64 v24; // [rsp+860h] [rbp-90h]
  __int64 v25; // [rsp+868h] [rbp-88h]
  __int64 v26; // [rsp+870h] [rbp-80h]
  size_t __n; // [rsp+878h] [rbp-78h]
  void *v28; // [rsp+880h] [rbp-70h]
  _QWORD *v29; // [rsp+888h] [rbp-68h]
  __int64 v30; // [rsp+890h] [rbp-60h]
  __int64 v31; // [rsp+898h] [rbp-58h]
  int v32; // [rsp+8A4h] [rbp-4Ch]
  __int64 v33; // [rsp+8A8h] [rbp-48h] BYREF
  void *__buf; // [rsp+8B0h] [rbp-40h]
  size_t __nbyte; // [rsp+8B8h] [rbp-38h]
  unsigned __int64 v36; // [rsp+8C0h] [rbp-30h]

  v6 = a1; /*0x10065e92d*/
  codexmate_lib::core::bootstrap_cache::load::hbe2b23d0f811fb61(__src); /*0x10065e937*/
  v33 = std::time::SystemTime::now::h1fe79e41f9d5677f(__src, a2); /*0x10065e941*/
  LODWORD(__buf) = v7; /*0x10065e945*/
  std::time::SystemTime::duration_since::had059553cab94f96(__dst, &v33, 0, 0); /*0x10065e957*/
  v8 = 0; /*0x10065e965*/
  if ( !LOBYTE(__dst[0]) ) /*0x10065e96a*/
    v8 = __dst[1]; /*0x10065e96c*/
  __src[0] = 1; /*0x10065e97d*/
  __src[1] = v8; /*0x10065e988*/
  v24 = *(_QWORD *)(a4 + 48); /*0x10065e994*/
  v23 = (__m128)*(unsigned __int64 *)(a4 + 64); /*0x10065e9a2*/
  v25 = *(_QWORD *)(a4 + 56); /*0x10065e9b0*/
  if ( __OFSUB__(0, *(_QWORD *)(a4 + 24)) ) /*0x10065e9b8*/
  {
    v36 = 0x8000000000000000LL; /*0x10065e9bf*/
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, a4 + 24); /*0x10065e9d1*/
    v36 = __dst[0]; /*0x10065e9dd*/
    v30 = __dst[1]; /*0x10065e9e8*/
    v26 = __dst[2]; /*0x10065e9f3*/
  }
  v28 = a2; /*0x10065e9f7*/
  __n = a3; /*0x10065e9fb*/
  v32 = *(_DWORD *)(a4 + 72); /*0x10065ea04*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he6a9fa8d499019ac(__dst, a4); /*0x10065ea11*/
  v9 = (_QWORD *)(a4 + 80); /*0x10065ea16*/
  __nbyte = __dst[2]; /*0x10065ea21*/
  __buf = (void *)__dst[1]; /*0x10065ea33*/
  v33 = __dst[0]; /*0x10065ea37*/
  v10 = __src[104]; /*0x10065ea42*/
  if ( __src[104] != 0x8000000000000000LL ) /*0x10065ea4c*/
  {
    v29 = a1; /*0x10065ea52*/
    if ( __src[107] != 0x8000000000000000LL && __src[107] ) /*0x10065ea65*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[108], __src[107], 1); /*0x10065ea73*/
    v31 = __src[105]; /*0x10065ea7f*/
    v11 = __src[106]; /*0x10065ea83*/
    if ( __src[106] ) /*0x10065ea8d*/
    {
      v12 = (_QWORD *)(v31 + 8); /*0x10065ea93*/
      do /*0x10065eaa7*/
      {
        v13 = *(v12 - 1); /*0x10065eaa9*/
        if ( v13 ) /*0x10065eab0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v12, v13, 1); /*0x10065eaba*/
        v12 += 5; /*0x10065eaa0*/
        --v11; /*0x10065eaa4*/
      }
      while ( v11 ); /*0x10065eaa7*/
    }
    v6 = v29; /*0x10065eac4*/
    if ( v10 ) /*0x10065ead2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 40 * v10, 8); /*0x10065eae5*/
  }
  __src[106] = __nbyte; /*0x10065eaee*/
  __src[105] = __buf; /*0x10065eafa*/
  __src[104] = v33; /*0x10065eafe*/
  __src[107] = v36; /*0x10065eb05*/
  __src[108] = v30; /*0x10065eb10*/
  __src[109] = v26; /*0x10065eb1b*/
  __src[110] = v24; /*0x10065eb29*/
  __src[111] = v25; /*0x10065eb38*/
  _mm_storel_ps((double *)&__src[112], v23); /*0x10065eb47*/
  LODWORD(__src[113]) = v32; /*0x10065eb51*/
  v14 = v9[1]; /*0x10065eb5b*/
  __src[114] = *v9; /*0x10065eb60*/
  __src[115] = v14; /*0x10065eb67*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x10065eb84*/
  v21 = 1; /*0x10065eb89*/
  serde_json::ser::to_vec::h36863d77f0446f6b(&v33, __dst); /*0x10065eb9a*/
  v15 = v33; /*0x10065eb9f*/
  v16 = __buf; /*0x10065eba3*/
  if ( v33 == 0x8000000000000000LL ) /*0x10065ebaa*/
  {
    *v6 = 3; /*0x10065ebac*/
    v6[1] = v16; /*0x10065ebb4*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(__dst); /*0x10065ebbf*/
  }
  else
  {
    v17 = __nbyte; /*0x10065ebc6*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h773ad2d63f6c7b34(__dst); /*0x10065ebd1*/
    v18 = std::fs::write::inner::had0c1bee0a2c1e21(v28, __n, v16, v17); /*0x10065ebe9*/
    if ( v15 ) /*0x10065ebef*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x10065ebfc*/
    if ( v18 ) /*0x10065ec04*/
    {
      *v6 = 2; /*0x10065ec06*/
      v6[1] = v18; /*0x10065ec0e*/
    }
    else
    {
      *v6 = 11; /*0x10065ec14*/
    }
  }
  return v6; /*0x10065ec1f*/
}