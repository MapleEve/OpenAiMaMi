// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x1006e80e0 depth=2
// core5slice4sort6shared9smallsort25insertion_sort_shift_left
__int64 __fastcall core::slice::sort::shared::smallsort::insertion_sort_shift_left::h492aa26a4a5cf38a(
        char *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  char *v4; // rbx
  char *v5; // r14
  char *v6; // r15
  char *v7; // r15
  char *v8; // r12
  char v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  unsigned __int8 v14; // al
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  size_t v20; // rdx
  __int64 v21; // r15
  int v22; // ebx
  __int64 v23; // rax
  _BYTE __src[208]; // [rsp+8h] [rbp-1D8h] BYREF
  _BYTE v25[105]; // [rsp+D8h] [rbp-108h] BYREF
  _QWORD v26[2]; // [rsp+148h] [rbp-98h] BYREF
  size_t v27; // [rsp+158h] [rbp-88h]
  __int64 v28; // [rsp+160h] [rbp-80h] BYREF
  void *__s1; // [rsp+168h] [rbp-78h]
  size_t __n; // [rsp+170h] [rbp-70h]
  void *v31; // [rsp+178h] [rbp-68h]
  char *v32; // [rsp+180h] [rbp-60h]
  __int64 v33; // [rsp+188h] [rbp-58h]
  __int64 v34; // [rsp+190h] [rbp-50h]
  __int64 v35; // [rsp+198h] [rbp-48h]
  void *__dst; // [rsp+1A0h] [rbp-40h]
  char *v37; // [rsp+1A8h] [rbp-38h]
  unsigned int v38; // [rsp+1B0h] [rbp-30h]
  __int16 v39; // [rsp+1B4h] [rbp-2Ch]
  char v40; // [rsp+1B7h] [rbp-29h]

  result = a3 - 1; /*0x1006e80f4*/
  if ( a3 - 1 >= a2 ) /*0x1006e80fb*/
    BUG(); /*0x1006e837f*/
  if ( a3 == a2 ) /*0x1006e8104*/
    return result; /*0x1006e8104*/
  v4 = a1; /*0x1006e8118*/
  v5 = &a1[336 * a2]; /*0x1006e8122*/
  v6 = &a1[336 * a3]; /*0x1006e812c*/
  v33 = 336 - 336 * a3; /*0x1006e8138*/
  __dst = a1; /*0x1006e813c*/
  v37 = v5; /*0x1006e8140*/
  while ( 2 ) /*0x1006e81db*/
  {
    v8 = v6 - 336; /*0x1006e81db*/
    result = alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::_$u7b$$u7b$closure$u7d$$u7d$::h1960bc0189f68e94( /*0x1006e81e8*/
               v6,
               v6 - 336);
    if ( !(_BYTE)result ) /*0x1006e81ef*/
      goto LABEL_8; /*0x1006e81ef*/
    memcpy(__src, v6, sizeof(__src)); /*0x1006e8200*/
    v35 = *((_QWORD *)v6 + 26); /*0x1006e820c*/
    v34 = *((_QWORD *)v6 + 27); /*0x1006e8217*/
    qmemcpy(v25, v6 + 224, sizeof(v25)); /*0x1006e822e*/
    v9 = v6[329]; /*0x1006e823f*/
    v38 = *(_DWORD *)(v6 + 330); /*0x1006e824e*/
    v39 = *((_WORD *)v6 + 167); /*0x1006e8259*/
    v32 = v6; /*0x1006e8262*/
    memcpy(v6, v6 - 336, 0x150u); /*0x1006e826c*/
    v7 = v4; /*0x1006e8271*/
    if ( v8 == v4 ) /*0x1006e8277*/
      goto LABEL_7; /*0x1006e8277*/
    v13 = v33; /*0x1006e827d*/
    v40 = v9; /*0x1006e8281*/
    while ( 1 ) /*0x1006e82cc*/
    {
      v14 = *(v8 - 7) - v9; /*0x1006e82cc*/
      if ( !v14 ) /*0x1006e82cf*/
        break; /*0x1006e82cf*/
      if ( v14 != 255 ) /*0x1006e8298*/
        goto LABEL_24; /*0x1006e8298*/
LABEL_13:
      memcpy(v8, v8 - 336, 0x150u); /*0x1006e829e*/
      v8 -= 336; /*0x1006e82b6*/
      v13 += 336; /*0x1006e82b9*/
      if ( !v13 ) /*0x1006e82c0*/
      {
        v4 = (char *)__dst; /*0x1006e8149*/
        v7 = (char *)__dst; /*0x1006e814d*/
        goto LABEL_6; /*0x1006e814d*/
      }
    }
    v15 = *((_QWORD *)v8 - 16); /*0x1006e82d1*/
    v16 = *((_QWORD *)v8 - 15); /*0x1006e82d6*/
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v28, v35, v34, v10, v11, v12); /*0x1006e82e7*/
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(v26, v15, v16, v17, v18, v19); /*0x1006e82f9*/
    v20 = v27; /*0x1006e830d*/
    v21 = __n - v27; /*0x1006e8317*/
    if ( __n < v27 ) /*0x1006e831a*/
      v20 = __n; /*0x1006e831a*/
    v31 = __s1; /*0x1006e831e*/
    v22 = memcmp(__s1, (const void *)v26[1], v20); /*0x1006e832a*/
    if ( v26[0] ) /*0x1006e8336*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e8340*/
    v9 = v40; /*0x1006e834c*/
    if ( v28 ) /*0x1006e8351*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e835c*/
    v23 = v22; /*0x1006e8363*/
    if ( !v22 ) /*0x1006e8366*/
      v23 = v21; /*0x1006e8366*/
    if ( v23 < 0 ) /*0x1006e836d*/
      goto LABEL_13; /*0x1006e836d*/
LABEL_24:
    v7 = v8; /*0x1006e8373*/
    v4 = (char *)__dst; /*0x1006e8376*/
LABEL_6:
    v5 = v37; /*0x1006e8150*/
LABEL_7:
    memcpy(v7, __src, 0xD0u); /*0x1006e8154*/
    *((_QWORD *)v7 + 26) = v35; /*0x1006e816c*/
    *((_QWORD *)v7 + 27) = v34; /*0x1006e8177*/
    qmemcpy(v7 + 224, v25, 0x68u); /*0x1006e8191*/
    v7[328] = v25[104]; /*0x1006e819b*/
    v7[329] = v9; /*0x1006e81a2*/
    *((_WORD *)v7 + 167) = v39; /*0x1006e81ad*/
    result = v38; /*0x1006e81b5*/
    *(_DWORD *)(v7 + 330) = v38; /*0x1006e81b8*/
    v6 = v32; /*0x1006e81bf*/
LABEL_8:
    v6 += 336; /*0x1006e81c3*/
    v33 -= 336; /*0x1006e81ca*/
    if ( v6 != v5 ) /*0x1006e81d5*/
      continue; /*0x1006e81d5*/
    return result; /*0x1006e8106*/
  }
}