// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1007c7e80 depth=2
char __fastcall http::header::map::HeaderMap$LT$T$GT$::try_reserve_one::hf53f395e7cfa8488(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  float v4; // xmm0_4
  char v5; // cl
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // rcx
  unsigned __int64 v10; // rsi
  _DWORD *v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // r8
  _DWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // r13
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 i; // rdx
  bool v27; // di
  bool v28; // si
  __int16 v29; // dx
  __int16 v30; // si
  __int64 v31; // r15
  _OWORD *v32; // rax
  _OWORD *v33; // r14
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // [rsp+8h] [rbp-48h]
  __int64 v37; // [rsp+10h] [rbp-40h]
  __int64 v38; // [rsp+18h] [rbp-38h]
  __int64 v39; // [rsp+20h] [rbp-30h]

  v1 = a1; /*0x1007c7e91*/
  v2 = *(_QWORD *)(a1 + 40); /*0x1007c7e94*/
  v3 = *(_QWORD *)(a1 + 80); /*0x1007c7e9b*/
  if ( *(_DWORD *)a1 == 1 ) /*0x1007c7e9f*/
  {
    v4 = (float)(int)v2; /*0x1007c7ea1*/
    if ( v3 < 0 ) /*0x1007c7ea9*/
    {
      v7 = (*(_QWORD *)(a1 + 80) >> 1) | *(_QWORD *)(a1 + 80) & 1LL; /*0x1007c7f0c*/
      if ( (float)(v4 / (float)((float)(int)v7 + (float)(int)v7)) >= 0.2 ) /*0x1007c7f23*/
        goto LABEL_4; /*0x1007c7f23*/
    }
    else if ( (float)(v4 / (float)(int)v3) >= 0.2 ) /*0x1007c7ebb*/
    {
LABEL_4:
      *(_QWORD *)a1 = 0; /*0x1007c7ebd*/
      goto LABEL_7; /*0x1007c7ec4*/
    }
    http::header::map::Danger::set_red::h743c4358056b3930(a1); /*0x1007c7f28*/
    v8 = *(_QWORD *)(a1 + 80); /*0x1007c7f2d*/
    if ( v8 ) /*0x1007c7f34*/
    {
      v9 = *(_DWORD **)(a1 + 72); /*0x1007c7f36*/
      v10 = 4 * v8 - 4; /*0x1007c7f42*/
      v11 = v9; /*0x1007c7f46*/
      if ( v10 < 0x1C ) /*0x1007c7f4d*/
        goto LABEL_15; /*0x1007c7f4d*/
      v12 = (v10 >> 2) + 1; /*0x1007c7f53*/
      v13 = v12 & 0xFFFFFFFFFFFFFFF8LL; /*0x1007c7f59*/
      v11 = &v9[v12 & 0xFFFFFFFFFFFFFFF8LL]; /*0x1007c7f5d*/
      v14 = 0; /*0x1007c7f61*/
      do /*0x1007c7f82*/
      {
        *(_OWORD *)&v9[v14] = xmmword_1012D50C0; /*0x1007c7f70*/
        *(_OWORD *)&v9[v14 + 4] = xmmword_1012D50C0; /*0x1007c7f75*/
        v14 += 8; /*0x1007c7f7b*/
      }
      while ( v13 != v14 ); /*0x1007c7f82*/
      if ( v12 != v13 ) /*0x1007c7f87*/
      {
LABEL_15:
        v15 = &v9[v8]; /*0x1007c7f89*/
        do /*0x1007c7f9d*/
          *v11++ = 0xFFFF; /*0x1007c7f90*/
        while ( v11 != v15 ); /*0x1007c7f9d*/
      }
    }
    v16 = *(_QWORD *)(v1 + 40); /*0x1007c7f9f*/
    if ( v16 ) /*0x1007c7fa6*/
    {
      v17 = *(_QWORD *)(v1 + 32); /*0x1007c7fac*/
      v38 = v17 + 104 * v16; /*0x1007c7fb7*/
      v18 = *(unsigned __int16 *)(v1 + 88); /*0x1007c7fbb*/
      v19 = *(_QWORD *)(v1 + 72); /*0x1007c7fc0*/
      v20 = *(_QWORD *)(v1 + 80); /*0x1007c7fc4*/
      v21 = 0; /*0x1007c7fc8*/
      v39 = v1; /*0x1007c7fcb*/
      do /*0x1007c80b6*/
      {
        v22 = v1; /*0x1007c7fcf*/
        v23 = v17; /*0x1007c7fd2*/
        v36 = v17 + 104; /*0x1007c7fd9*/
        v37 = v21 + 1; /*0x1007c7fe1*/
        v24 = http::header::map::hash_elem_using::h264a804aff6cac0b(v22, v17 + 64); /*0x1007c7fe9*/
        v25 = v18 & v24; /*0x1007c7ff3*/
        *(_WORD *)(v23 + 96) = v24; /*0x1007c7ff6*/
        for ( i = 0; ; ++i ) /*0x1007c7ffa*/
        {
          v27 = v25 < v20; /*0x1007c800a*/
          if ( v25 >= v20 ) /*0x1007c800e*/
            v25 = 0; /*0x1007c800e*/
          if ( v20 == 0 && !v27 ) /*0x1007c8012*/
          {
            while ( 1 ) /*0x1007c80d0*/
              ; /*0x1007c80d0*/
          }
          if ( *(_WORD *)(v19 + 4 * v25) == 0xFFFF ) /*0x1007c8022*/
          {
            *(_WORD *)(v19 + 4 * v25) = v21; /*0x1007c8041*/
            v1 = v39; /*0x1007c8047*/
            goto LABEL_34; /*0x1007c804b*/
          }
          if ( (v18 & ((unsigned int)v25 - (unsigned __int16)(v18 & *(_WORD *)(v19 + 4 * v25 + 2)))) < i ) /*0x1007c8037*/
            break; /*0x1007c8037*/
          ++v25; /*0x1007c803c*/
        }
        v1 = v39; /*0x1007c804d*/
        while ( 1 ) /*0x1007c8069*/
        {
          v28 = v25 < v20; /*0x1007c8069*/
          if ( v25 >= v20 ) /*0x1007c806d*/
            v25 = 0; /*0x1007c806d*/
          if ( v20 == 0 && !v28 ) /*0x1007c8071*/
          {
            while ( 1 ) /*0x1007c80e0*/
              ; /*0x1007c80e0*/
          }
          v29 = *(_WORD *)(v19 + 4 * v25); /*0x1007c8076*/
          if ( v29 == -1 ) /*0x1007c8080*/
            break; /*0x1007c8080*/
          v30 = *(_WORD *)(v19 + 4 * v25 + 2); /*0x1007c8082*/
          *(_WORD *)(v19 + 4 * v25) = v21; /*0x1007c8088*/
          *(_WORD *)(v19 + 4 * v25++ + 2) = v24; /*0x1007c808e*/
          LOWORD(v21) = v29; /*0x1007c8097*/
          LOWORD(v24) = v30; /*0x1007c809a*/
        }
        *(_WORD *)(v19 + 4 * v25) = v21; /*0x1007c809e*/
LABEL_34:
        *(_WORD *)(v19 + 4 * v25 + 2) = v24; /*0x1007c80a4*/
        v17 = v36; /*0x1007c80aa*/
        v21 = v37; /*0x1007c80b2*/
      }
      while ( v36 != v38 ); /*0x1007c80b6*/
    }
    return 0; /*0x1007c80b6*/
  }
  if ( v2 != v3 - ((unsigned __int64)v3 >> 2) ) /*0x1007c7ed6*/
    return 0; /*0x1007c81a7*/
  if ( !v2 ) /*0x1007c7edf*/
  {
    v31 = *(_QWORD *)(a1 + 80); /*0x1007c80e2*/
    *(_WORD *)(a1 + 88) = 7; /*0x1007c80e5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1007c80eb*/
    v32 = (_OWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x20u, 2u); /*0x1007c80fa*/
    if ( !v32 ) /*0x1007c8102*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(2, 32); /*0x1007c81b2*/
    v33 = v32; /*0x1007c8108*/
    *v32 = xmmword_1012D50C0; /*0x1007c8112*/
    v32[1] = xmmword_1012D50C0; /*0x1007c8115*/
    if ( v31 ) /*0x1007c811c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1007c812e*/
    *(_QWORD *)(a1 + 72) = v33; /*0x1007c8133*/
    *(_QWORD *)(a1 + 80) = 8; /*0x1007c8137*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1007c813f*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x270u, 8u); /*0x1007c814e*/
    if ( !v34 ) /*0x1007c8156*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 624); /*0x1007c81c1*/
    v35 = v34; /*0x1007c8158*/
    core::ptr::drop_in_place$LT$$u5b$http..header..map..Bucket$LT$http..header..value..HeaderValue$GT$$u5d$$GT$::h2cb5ff9d3370c342( /*0x1007c8164*/
      *(_QWORD *)(a1 + 32),
      0);
    if ( *(_QWORD *)(a1 + 24) ) /*0x1007c8169*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1007c817e*/
    *(_QWORD *)(a1 + 24) = 6; /*0x1007c8183*/
    *(_QWORD *)(a1 + 32) = v35; /*0x1007c818b*/
    *(_QWORD *)(a1 + 40) = 0; /*0x1007c818f*/
    return 0; /*0x1007c818f*/
  }
LABEL_7:
  v5 = http::header::map::HeaderMap$LT$T$GT$::try_grow::hf6281f79d4bbdd88(a1, 2 * v3); /*0x1007c7ee5*/
  result = 1; /*0x1007c7ef2*/
  if ( !v5 ) /*0x1007c7ef6*/
    return 0; /*0x1007c7ef6*/
  return result; /*0x1007c8199*/
}