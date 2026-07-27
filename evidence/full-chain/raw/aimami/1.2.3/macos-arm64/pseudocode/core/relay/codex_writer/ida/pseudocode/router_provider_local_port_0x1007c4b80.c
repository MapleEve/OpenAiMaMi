// __ZN13codexmate_lib4core5relay12codex_writer26router_provider_local_port @ 0x1007c4b80
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_writer::router_provider_local_port | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_writer::router_provider_local_port::h7660823adac56076(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // r13d
  void *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // rdi
  const __m128i *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int8 *v14; // rdx
  int v15; // esi
  char v16; // di
  char v17; // r8
  char v18; // r9
  char *v19; // rdx
  int v20; // r8d
  int v21; // edi
  __m128i v22; // xmm0
  __int64 v23; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v24[10]; // [rsp+8h] [rbp-F8h] BYREF
  _QWORD v25[5]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  void *__s1[10]; // [rsp+88h] [rbp-78h] BYREF

  codexmate_lib::core::relay::codex_writer::router_provider_base_url::hca7b84a05e0d0b9b(&v23, a1, a2); /*0x1007c4ba1*/
  v2 = v23; /*0x1007c4ba6*/
  if ( __OFSUB__(-v23, 1) ) /*0x1007c4bb3*/
    return 0; /*0x1007c4c25*/
  v3 = v24[0]; /*0x1007c4bb5*/
  v25[4] = 0; /*0x1007c4bc3*/
  v25[0] = 0; /*0x1007c4bce*/
  v25[2] = 0; /*0x1007c4bd9*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(&v23, v25, v24[0], v24[1]); /*0x1007c4bf5*/
  v4 = v23; /*0x1007c4c04*/
  if ( v23 == 0x8000000000000000LL ) /*0x1007c4c0e*/
  {
    if ( v2 ) /*0x1007c4c13*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v2, 1); /*0x1007c4c20*/
    return 0; /*0x1007c4c20*/
  }
  qmemcpy(__s1, v24, sizeof(__s1)); /*0x1007c4c50*/
  v26 = v23; /*0x1007c4c53*/
  v7 = __s1[0]; /*0x1007c4c5a*/
  if ( HIDWORD(__s1[4]) ) /*0x1007c4c61*/
  {
    if ( __s1[1] <= (void *)HIDWORD(__s1[4]) ) /*0x1007c4c6a*/
    {
      if ( __s1[1] != (void *)HIDWORD(__s1[4]) ) /*0x1007c4c86*/
LABEL_10:
        core::str::slice_error_fail::h480e51fbd8b15eba(__s1[0], __s1[1], 0, HIDWORD(__s1[4]), &off_10196C470); /*0x1007c4c73*/
    }
    else if ( *((char *)__s1[0] + HIDWORD(__s1[4])) <= -65 ) /*0x1007c4c71*/
    {
      goto LABEL_10; /*0x1007c4c71*/
    }
    if ( HIDWORD(__s1[4]) == 4 /*0x1007c4c9a*/
      && !memcmp(__s1[0], "httpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls", 4u) )
    {
      v8 = url::Url::host_str::h951633b861c322f2(&v26); /*0x1007c4ca7*/
      if ( v8 != 0 && v9 == 9 && !(*(_QWORD *)v8 ^ 0x2E302E302E373231LL | *(unsigned __int8 *)(v8 + 8) ^ 0x31LL) ) /*0x1007c4cd8*/
      {
        v11 = (const __m128i *)url::Url::path::hdacd300d547f5011(&v26); /*0x1007c4d14*/
        while ( v12 ) /*0x1007c4d29*/
        {
          v13 = v12; /*0x1007c4d2b*/
          v14 = &v11->i8[v12]; /*0x1007c4d2e*/
          v15 = *(v14 - 1); /*0x1007c4d31*/
          if ( v15 >= 0 ) /*0x1007c4d37*/
          {
            v12 = v14 - 1 - (__int8 *)v11; /*0x1007c4d1e*/
            if ( v15 != 47 ) /*0x1007c4d24*/
              goto LABEL_32; /*0x1007c4d24*/
          }
          else
          {
            v16 = *(v14 - 2); /*0x1007c4d39*/
            if ( v16 >= -64 ) /*0x1007c4d41*/
            {
              v19 = v14 - 2; /*0x1007c4d68*/
              v21 = v16 & 0x1F; /*0x1007c4d6c*/
            }
            else
            {
              v17 = *(v14 - 3); /*0x1007c4d43*/
              if ( v17 >= -64 ) /*0x1007c4d4c*/
              {
                v19 = v14 - 3; /*0x1007c4d71*/
                v20 = v17 & 0xF; /*0x1007c4d75*/
              }
              else
              {
                v18 = *(v14 - 4); /*0x1007c4d4e*/
                v19 = v14 - 4; /*0x1007c4d53*/
                v20 = ((v18 & 7) << 6) | v17 & 0x3F; /*0x1007c4d63*/
              }
              v21 = (v20 << 6) | v16 & 0x3F; /*0x1007c4d80*/
            }
            v12 = v19 - (char *)v11; /*0x1007c4d8b*/
            if ( ((v21 << 6) | v15 & 0x3F) != 0x2F ) /*0x1007c4d91*/
            {
LABEL_32:
              if ( v13 != 16 ) /*0x1007c4d97*/
                break; /*0x1007c4d97*/
              v10 = v7; /*0x1007c4d9d*/
              v22 = _mm_xor_si128( /*0x1007c4da4*/
                      _mm_loadu_si128(v11),
                      *(__m128i *)"/codex/router/v1xy-authorizationproxy-authorizatproxy-authenticate");
              if ( !_mm_testz_si128(v22, v22) ) /*0x1007c4db1*/
                goto LABEL_17; /*0x1007c4db1*/
              v5 = LOWORD(__s1[4]); /*0x1007c4db7*/
              if ( v4 ) /*0x1007c4dc4*/
                goto LABEL_18; /*0x1007c4dc4*/
              goto LABEL_19; /*0x1007c4dc4*/
            }
          }
        }
      }
    }
  }
  v10 = v7; /*0x1007c4cda*/
LABEL_17:
  v5 = 0; /*0x1007c4cdd*/
  if ( v4 ) /*0x1007c4ce3*/
LABEL_18:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v4, 1); /*0x1007c4ce5*/
LABEL_19:
  if ( v2 ) /*0x1007c4cf5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v2, 1); /*0x1007c4d06*/
  return v5; /*0x1007c4c2e*/
}