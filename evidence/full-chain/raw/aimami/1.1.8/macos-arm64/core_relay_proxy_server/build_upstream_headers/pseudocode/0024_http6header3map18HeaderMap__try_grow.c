// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1007c8f00 depth=3
bool __fastcall http::header::map::HeaderMap$LT$T$GT$::try_grow::hf6281f79d4bbdd88(__int64 a1, unsigned __int64 a2)
{
  _WORD *v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  __int16 v15; // cx
  _WORD *v16; // rsi
  __int16 v17; // r9
  unsigned __int64 j; // r11
  unsigned __int64 v19; // r10
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  _WORD *v24; // rsi
  _WORD *v25; // r8
  __int16 v26; // r10
  unsigned __int64 i; // r14
  unsigned __int64 v28; // r11
  bool v29; // cf
  unsigned __int64 v30; // r13
  __int64 v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+8h] [rbp-48h]
  __int64 v34; // [rsp+10h] [rbp-40h]
  __int64 v35; // [rsp+18h] [rbp-38h]
  unsigned __int64 v36; // [rsp+20h] [rbp-30h]

  if ( a2 > 0x8000 ) /*0x1007c8f1b*/
    return a2 >= 0x8001; /*0x1007c8f1b*/
  v3 = *(_WORD **)(a1 + 72); /*0x1007c8f21*/
  v4 = *(_QWORD *)(a1 + 80); /*0x1007c8f25*/
  v5 = 4 * v4; /*0x1007c8f29*/
  if ( v4 ) /*0x1007c8f34*/
  {
    v6 = 4 * v4; /*0x1007c8f3e*/
    v7 = 0; /*0x1007c8f41*/
    while ( v3[2 * v7] == 0xFFFF /*0x1007c8f76*/
         || (*(unsigned __int16 *)(a1 + 88) & ((_DWORD)v7 - (unsigned __int16)(*(_WORD *)(a1 + 88) & v3[2 * v7 + 1]))) != 0 )
    {
      ++v7; /*0x1007c8f50*/
      v6 -= 4; /*0x1007c8f53*/
      if ( !v6 ) /*0x1007c8f57*/
        goto LABEL_17; /*0x1007c8f57*/
    }
    v36 = *(_QWORD *)(a1 + 80); /*0x1007c8f7b*/
    if ( a2 ) /*0x1007c8f7f*/
      goto LABEL_8; /*0x1007c8f7f*/
  }
  else
  {
LABEL_17:
    v7 = 0; /*0x1007c9037*/
    v36 = *(_QWORD *)(a1 + 80); /*0x1007c903d*/
    if ( a2 ) /*0x1007c9041*/
    {
LABEL_8:
      v35 = 4 * v4; /*0x1007c8f85*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1007c8f94*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4 * a2, 2u); /*0x1007c8fa1*/
      if ( !v8 ) /*0x1007c8fa9*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(2, 4 * a2); /*0x1007c9220*/
      v9 = (_DWORD *)v8; /*0x1007c8faf*/
      v5 = v35; /*0x1007c8fb9*/
      v4 = v36; /*0x1007c8fbd*/
      if ( a2 != 1 ) /*0x1007c8fc1*/
      {
        v10 = 1; /*0x1007c8fc3*/
        v9 = (_DWORD *)v8; /*0x1007c8fc9*/
        if ( a2 < 9 ) /*0x1007c8fd0*/
          goto LABEL_14; /*0x1007c8fd0*/
        v11 = a2 - 1; /*0x1007c8fd2*/
        v12 = (a2 - 1) & 0xFFFFFFFFFFFFFFF8LL; /*0x1007c8fda*/
        v9 = (_DWORD *)(v8 + 4 * v12); /*0x1007c8fde*/
        v10 = v12 + 1; /*0x1007c8fe2*/
        v13 = 0; /*0x1007c8fe6*/
        do /*0x1007c9002*/
        {
          *(_OWORD *)(v8 + 4 * v13) = xmmword_1012D50C0; /*0x1007c8ff0*/
          *(_OWORD *)(v8 + 4 * v13 + 16) = xmmword_1012D50C0; /*0x1007c8ff5*/
          v13 += 8; /*0x1007c8ffb*/
        }
        while ( v12 != v13 ); /*0x1007c9002*/
        v4 = v36; /*0x1007c9007*/
        if ( v11 != v12 ) /*0x1007c900b*/
        {
LABEL_14:
          v14 = a2 - v10; /*0x1007c9010*/
          do /*0x1007c902d*/
          {
            *v9++ = 0xFFFF; /*0x1007c9020*/
            --v14; /*0x1007c902a*/
          }
          while ( v14 ); /*0x1007c902d*/
        }
      }
      *v9 = 0xFFFF; /*0x1007c902f*/
      goto LABEL_19; /*0x1007c9035*/
    }
  }
  v8 = 2; /*0x1007c9047*/
LABEL_19:
  *(_QWORD *)(a1 + 72) = v8; /*0x1007c904c*/
  *(_QWORD *)(a1 + 80) = a2; /*0x1007c9050*/
  v15 = a2 - 1; /*0x1007c9054*/
  *(_WORD *)(a1 + 88) = a2 - 1; /*0x1007c9059*/
  if ( v7 > v4 ) /*0x1007c9060*/
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v7, v4, v4, (__int64)&off_101539E08); /*0x1007c9204*/
  if ( 4 * v7 != v5 ) /*0x1007c9075*/
  {
    v24 = &v3[2 * v36]; /*0x1007c9139*/
    v25 = &v3[2 * v7]; /*0x1007c913d*/
    do /*0x1007c9162*/
    {
      if ( *v25 != 0xFFFF ) /*0x1007c9171*/
      {
        v26 = v25[1]; /*0x1007c9173*/
        for ( i = (unsigned __int16)(v15 & v26); ; i = v28 + 1 ) /*0x1007c917e*/
        {
          do /*0x1007c919c*/
          {
            v28 = i; /*0x1007c9190*/
            i = 0; /*0x1007c9193*/
          }
          while ( v28 >= a2 ); /*0x1007c919c*/
          if ( *(_WORD *)(v8 + 4 * v28) == 0xFFFF ) /*0x1007c91a4*/
            break; /*0x1007c91a4*/
        }
        *(_WORD *)(v8 + 4 * v28) = *v25; /*0x1007c9150*/
        *(_WORD *)(v8 + 4 * v28 + 2) = v26; /*0x1007c9155*/
      }
      v25 += 2; /*0x1007c915b*/
    }
    while ( v25 != v24 ); /*0x1007c9162*/
  }
  if ( v7 ) /*0x1007c907e*/
  {
    v16 = v3; /*0x1007c9080*/
    do /*0x1007c90a2*/
    {
      if ( *v16 != 0xFFFF ) /*0x1007c90ad*/
      {
        v17 = v16[1]; /*0x1007c90af*/
        for ( j = (unsigned __int16)(v15 & v17); ; j = v19 + 1 ) /*0x1007c90ba*/
        {
          do /*0x1007c90cc*/
          {
            v19 = j; /*0x1007c90c0*/
            j = 0; /*0x1007c90c3*/
          }
          while ( v19 >= a2 ); /*0x1007c90cc*/
          if ( *(_WORD *)(v8 + 4 * v19) == 0xFFFF ) /*0x1007c90d4*/
            break; /*0x1007c90d4*/
        }
        *(_WORD *)(v8 + 4 * v19) = *v16; /*0x1007c9090*/
        *(_WORD *)(v8 + 4 * v19 + 2) = v17; /*0x1007c9095*/
      }
      v16 += 2; /*0x1007c909b*/
    }
    while ( v16 != &v3[2 * v7] ); /*0x1007c90a2*/
  }
  v20 = *(_QWORD *)(a1 + 24); /*0x1007c90e5*/
  v21 = *(_QWORD *)(a1 + 40); /*0x1007c90e9*/
  v22 = a2 - (v21 + (a2 >> 2)); /*0x1007c90f3*/
  if ( v22 > v20 - v21 ) /*0x1007c90ff*/
  {
    v29 = __CFADD__(v21, v22); /*0x1007c91ae*/
    v30 = a2 - (a2 >> 2); /*0x1007c91ae*/
    if ( v29 ) /*0x1007c91b1*/
    {
      v31 = 0; /*0x1007c920b*/
    }
    else
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h1ffa785b217faa63( /*0x1007c91cd*/
        &v32,
        v20,
        *(_QWORD *)(a1 + 32),
        v30,
        8u,
        104);
      if ( (_DWORD)v32 != 1 ) /*0x1007c91d6*/
      {
        *(_QWORD *)(a1 + 32) = v33; /*0x1007c91dc*/
        *(_QWORD *)(a1 + 24) = v30; /*0x1007c91e0*/
        if ( !v36 ) /*0x1007c91e9*/
          return a2 >= 0x8001; /*0x1007c91e9*/
        goto LABEL_32; /*0x1007c91e9*/
      }
      v31 = v33; /*0x1007c9225*/
      v20 = v34; /*0x1007c9229*/
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v20); /*0x1007c9211*/
  }
  if ( v36 ) /*0x1007c910a*/
LABEL_32:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1007c910c*/
  return a2 >= 0x8001; /*0x1007c9126*/
}