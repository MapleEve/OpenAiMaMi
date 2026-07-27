// __ZN13codexmate_lib4core10repository10Repository20load_bootstrap_state @ 0x100a5cc70
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void *__fastcall codexmate_lib::core::repository::Repository::load_bootstrap_state::h3c5dbe1baa3c80e6(
        void *__dst,
        __int64 a2)
{
  __int64 v3; // rsi
  int v4; // r14d
  int v5; // edx
  _QWORD *v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r12
  _QWORD *v18; // r15
  _QWORD *v19; // r8
  __int64 v20; // r15
  _QWORD *v21; // rdi
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // r10
  _QWORD *v25; // rsi
  unsigned int v26; // edi
  bool v27; // al
  _QWORD __src[132]; // [rsp+0h] [rbp-470h] BYREF
  __int64 v30; // [rsp+420h] [rbp-50h] BYREF
  int v31; // [rsp+428h] [rbp-48h]
  _QWORD *v32; // [rsp+430h] [rbp-40h] BYREF
  __int64 v33; // [rsp+438h] [rbp-38h]

  v3 = *(_QWORD *)(a2 + 464); /*0x100a5cc9c*/
  codexmate_lib::core::bootstrap_cache::load::hbe2b23d0f811fb61(__src); /*0x100a5cc9f*/
  v4 = __src[2]; /*0x100a5cca4*/
  if ( __src[2] == 3 ) /*0x100a5ccaf*/
    goto LABEL_30; /*0x100a5ccaf*/
  v30 = std::time::SystemTime::now::h1fe79e41f9d5677f(__src, v3); /*0x100a5ccba*/
  v31 = v5; /*0x100a5ccbe*/
  v6 = &v32; /*0x100a5ccc1*/
  v7 = &v30; /*0x100a5ccc5*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v32, &v30, 0, 0); /*0x100a5cccd*/
  if ( (_BYTE)v32 ) /*0x100a5ccd6*/
  {
    v10 = 0; /*0x100a5cced*/
    v11 = __src[88]; /*0x100a5ccef*/
    if ( !__src[88] ) /*0x100a5ccf9*/
      goto LABEL_17; /*0x100a5ccf9*/
LABEL_6:
    v12 = 352 * v11; /*0x100a5ccff*/
    v13 = __src[87] + 144LL; /*0x100a5cd0d*/
    v7 = nullptr; /*0x100a5cd14*/
    do /*0x100a5cd4d*/
    {
      v14 = *(__int64 *)((char *)v7 + v13 - 64); /*0x100a5cd53*/
      v15 = (__int64 *)((char *)v7 + v13 - 40); /*0x100a5cd58*/
      v16 = 2; /*0x100a5cd5d*/
      v17 = 2; /*0x100a5cd62*/
      if ( v14 != 2 ) /*0x100a5cd6c*/
      {
        v8 = *(__int64 *)((char *)v7 + v13 - 56); /*0x100a5cd6e*/
        if ( (*((_BYTE *)v7 + v13 - 48) & 1) != 0 ) /*0x100a5cd7f*/
        {
          v9 = *(_DWORD *)((char *)v7 + v13 - 44); /*0x100a5cd81*/
          if ( (unsigned int)(v9 - 361) >= 0xFFFFFE98 && ((unsigned __int8)v14 & (v8 <= v10)) == 0 ) /*0x100a5cd99*/
          {
            v18 = (_QWORD *)*v15; /*0x100a5cd9b*/
            v33 = v15[1]; /*0x100a5cda2*/
            v32 = v18; /*0x100a5cda6*/
            v17 = v14; /*0x100a5cdaa*/
          }
        }
      }
      v19 = (__int64 *)((char *)v7 + v13); /*0x100a5cdad*/
      *(__int64 *)((char *)v7 + v13 - 64) = v17; /*0x100a5cdb1*/
      *(__int64 *)((char *)v7 + v13 - 56) = v8; /*0x100a5cdb6*/
      *(_DWORD *)((char *)v7 + v13 - 48) = 1; /*0x100a5cdbb*/
      *(_DWORD *)((char *)v7 + v13 - 44) = v9; /*0x100a5cdc3*/
      v8 = (__int64)v32; /*0x100a5cdc8*/
      v9 = v33; /*0x100a5cdcc*/
      v15[1] = v33; /*0x100a5cdd0*/
      *v15 = v8; /*0x100a5cdd4*/
      v20 = *(__int64 *)((char *)v7 + v13 - 24); /*0x100a5cdd7*/
      if ( v20 != 2 ) /*0x100a5cde0*/
      {
        v15 = *(__int64 **)((char *)v7 + v13 - 16); /*0x100a5cde6*/
        v8 = *(unsigned int *)((char *)v7 + v13 - 8); /*0x100a5cdeb*/
        v9 = *(_DWORD *)((char *)v7 + v13 - 4); /*0x100a5cdf0*/
        if ( ((v9 < 8640) & (unsigned __int8)v8) == 0 && ((unsigned __int8)v20 & ((__int64)v15 <= v10)) == 0 ) /*0x100a5ce13*/
        {
          v21 = (_QWORD *)*v19; /*0x100a5ce19*/
          v33 = v19[1]; /*0x100a5ce20*/
          v32 = v21; /*0x100a5ce24*/
          v16 = v20; /*0x100a5ce28*/
        }
      }
      *(__int64 *)((char *)v7 + v13 - 24) = v16; /*0x100a5cd20*/
      *(__int64 *)((char *)v7 + v13 - 16) = (__int64)v15; /*0x100a5cd25*/
      *(_DWORD *)((char *)v7 + v13 - 8) = v8; /*0x100a5cd2a*/
      *(_DWORD *)((char *)v7 + v13 - 4) = v9; /*0x100a5cd2f*/
      v6 = v32; /*0x100a5cd34*/
      v19[1] = v33; /*0x100a5cd3c*/
      *v19 = v6; /*0x100a5cd40*/
      v7 += 44; /*0x100a5cd43*/
    }
    while ( (__int64 *)v12 != v7 ); /*0x100a5cd4d*/
    goto LABEL_17; /*0x100a5cd4d*/
  }
  v10 = v33; /*0x100a5ccd8*/
  v11 = __src[88]; /*0x100a5ccdc*/
  if ( __src[88] ) /*0x100a5cce6*/
    goto LABEL_6; /*0x100a5cce6*/
LABEL_17:
  if ( v4 != 2 ) /*0x100a5ce34*/
  {
    v22 = __src[12]; /*0x100a5ce3a*/
    v23 = 2; /*0x100a5ce48*/
    if ( __src[12] == 2 ) /*0x100a5ce51*/
    {
      v24 = 2; /*0x100a5ce53*/
    }
    else
    {
      v7 = (__int64 *)__src[13]; /*0x100a5ce5b*/
      v24 = 2; /*0x100a5ce70*/
      if ( (__src[14] & 1) != 0 ) /*0x100a5ce76*/
      {
        LODWORD(v6) = HIDWORD(__src[14]); /*0x100a5ce78*/
        if ( (unsigned int)(HIDWORD(__src[14]) - 361) >= 0xFFFFFE98 && (__src[12] & (__src[13] <= v10)) == 0 ) /*0x100a5ce91*/
        {
          v33 = __src[16]; /*0x100a5ce9a*/
          v32 = (_QWORD *)__src[15]; /*0x100a5ce9e*/
          v24 = __src[12]; /*0x100a5cea2*/
        }
      }
    }
    __src[12] = v24; /*0x100a5cea5*/
    __src[13] = v7; /*0x100a5ceac*/
    LODWORD(__src[14]) = 1; /*0x100a5ceb3*/
    HIDWORD(__src[14]) = (_DWORD)v6; /*0x100a5cebd*/
    v25 = v32; /*0x100a5cec3*/
    v26 = v33; /*0x100a5cec7*/
    __src[16] = v33; /*0x100a5cecb*/
    __src[15] = v32; /*0x100a5cecf*/
    if ( __src[17] != 2 ) /*0x100a5cee4*/
    {
      v25 = (_QWORD *)__src[18]; /*0x100a5cee8*/
      v26 = __src[19]; /*0x100a5ceef*/
      v22 = HIDWORD(__src[19]); /*0x100a5cef5*/
      v27 = __src[18] <= v10; /*0x100a5cf0a*/
      if ( ((SHIDWORD(__src[19]) < 8640) & __src[19]) == 0 && (__src[17] & v27) == 0 ) /*0x100a5cf15*/
      {
        v33 = __src[21]; /*0x100a5cf1e*/
        v32 = (_QWORD *)__src[20]; /*0x100a5cf22*/
        v23 = __src[17]; /*0x100a5cf26*/
      }
    }
    __src[17] = v23; /*0x100a5cf29*/
    __src[18] = v25; /*0x100a5cf30*/
    __src[19] = __PAIR64__(v22, v26); /*0x100a5cf37*/
    __src[21] = v33; /*0x100a5cf4c*/
    __src[20] = v32; /*0x100a5cf50*/
  }
LABEL_30:
  memcpy(__dst, __src, 0x420u); /*0x100a5cf53*/
  return __dst; /*0x100a5cf6a*/
}