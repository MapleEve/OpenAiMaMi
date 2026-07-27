// __ZN13codexmate_lib8commands8accounts32merge_post_commit_refresh_result @ 0x1006a09c0
__int64 __fastcall codexmate_lib::commands::accounts::merge_post_commit_refresh_result::ha5d47a2e39fb630b(
        _QWORD *a1,
        __int64 a2,
        const void *a3,
        signed __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // rcx
  _QWORD *v14; // r12
  __int64 v15; // rax
  __int64 (__fastcall *v16)(); // r15
  __int64 (__fastcall *v17)(); // rbx
  __int64 v18; // r12
  __int64 v19; // r14
  const void *v20; // r13
  signed __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rsi
  _QWORD v27[3]; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD v28[2]; // [rsp+18h] [rbp-88h] BYREF
  __int64 v29; // [rsp+28h] [rbp-78h]
  _QWORD *v30; // [rsp+30h] [rbp-70h]
  _QWORD *v31; // [rsp+38h] [rbp-68h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+40h] [rbp-60h]
  __int64 *v33; // [rsp+48h] [rbp-58h]
  __int64 (__fastcall *v34)(); // [rsp+50h] [rbp-50h]
  __int64 v35; // [rsp+58h] [rbp-48h] BYREF
  _QWORD *v36; // [rsp+60h] [rbp-40h]
  __int64 v37; // [rsp+68h] [rbp-38h]
  _QWORD *v38; // [rsp+70h] [rbp-30h]

  v38 = a1; /*0x1006a09d1*/
  v28[0] = a5; /*0x1006a09d5*/
  v28[1] = a6; /*0x1006a09dc*/
  if ( *(_DWORD *)a2 == 1 ) /*0x1006a09e3*/
  {
    v37 = *(_QWORD *)(a2 + 24); /*0x1006a09f3*/
    v8 = *(_QWORD *)(a2 + 8); /*0x1006a09f7*/
    v36 = *(_QWORD **)(a2 + 16); /*0x1006a09ff*/
    v35 = v8; /*0x1006a0a03*/
    v31 = v28; /*0x1006a0a0e*/
    v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a0a19*/
    v33 = &v35; /*0x1006a0a21*/
    v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1006a0a2c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v27, &unk_1017C34AC, &v31); /*0x1006a0a42*/
    result = codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(v38 + 6, a3, a4, v27); /*0x1006a0a5c*/
    v10 = v35; /*0x1006a0a61*/
    if ( !v35 ) /*0x1006a0a68*/
      return result; /*0x1006a0a68*/
    v11 = v36; /*0x1006a0a6e*/
    v12 = 1; /*0x1006a0a72*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, v12); /*0x1006a0a77*/
  }
  v13 = *(__int64 **)(a2 + 8); /*0x1006a0a7c*/
  v14 = *(_QWORD **)(a2 + 16); /*0x1006a0a80*/
  v15 = *(_QWORD *)(a2 + 24); /*0x1006a0a84*/
  v16 = (__int64 (__fastcall *)())&v14[6 * v15]; /*0x1006a0a90*/
  v31 = v14; /*0x1006a0a93*/
  v32 = (__int64 (__fastcall *)())v14; /*0x1006a0a97*/
  v29 = (__int64)v13; /*0x1006a0a9b*/
  v33 = v13; /*0x1006a0a9f*/
  v34 = v16; /*0x1006a0aa3*/
  v17 = (__int64 (__fastcall *)())v14; /*0x1006a0aa7*/
  if ( v15 ) /*0x1006a0aad*/
  {
    v38 += 6; /*0x1006a0ab3*/
    v30 = v14; /*0x1006a0ab8*/
    v17 = (__int64 (__fastcall *)())(v14 + 6); /*0x1006a0abc*/
    while ( 1 ) /*0x1006a0add*/
    {
      v18 = *((_QWORD *)v17 - 6); /*0x1006a0add*/
      if ( __OFSUB__(-v18, 1) ) /*0x1006a0ae7*/
        break; /*0x1006a0ae7*/
      v19 = (__int64)v17 - 48; /*0x1006a0ae9*/
      v20 = *((const void **)v17 - 5); /*0x1006a0aed*/
      v21 = *((_QWORD *)v17 - 4); /*0x1006a0af1*/
      v37 = *((_QWORD *)v17 - 1); /*0x1006a0af9*/
      v22 = *((_QWORD *)v17 - 3); /*0x1006a0afd*/
      v36 = *((_QWORD **)v17 - 2); /*0x1006a0b05*/
      v35 = v22; /*0x1006a0b09*/
      codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(v38, v20, v21, &v35); /*0x1006a0b18*/
      if ( v18 ) /*0x1006a0b20*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v18, 1); /*0x1006a0b2d*/
      v17 = (__int64 (__fastcall *)())((char *)v17 + 48); /*0x1006a0ad0*/
      if ( (__int64 (__fastcall *)())(v19 + 48) == v16 ) /*0x1006a0adb*/
      {
        v17 = v16; /*0x1006a0b34*/
        break; /*0x1006a0b34*/
      }
    }
    v32 = v17; /*0x1006a0b37*/
    v14 = v30; /*0x1006a0b3b*/
  }
  if ( v16 != v17 ) /*0x1006a0b55*/
  {
    v23 = ((char *)v16 - (char *)v17) / 0x30uLL; /*0x1006a0b5a*/
    v24 = (_QWORD *)((char *)v17 + 32); /*0x1006a0b5e*/
    do /*0x1006a0b77*/
    {
      v25 = *(v24 - 4); /*0x1006a0b79*/
      if ( v25 ) /*0x1006a0b80*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v24 - 3), v25, 1); /*0x1006a0b8b*/
      v26 = *(v24 - 1); /*0x1006a0b90*/
      if ( v26 ) /*0x1006a0b97*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v26, 1); /*0x1006a0ba1*/
      v24 += 6; /*0x1006a0b70*/
      --v23; /*0x1006a0b74*/
    }
    while ( v23 ); /*0x1006a0b77*/
  }
  result = v29; /*0x1006a0ba8*/
  if ( v29 ) /*0x1006a0baf*/
  {
    v10 = 48 * v29; /*0x1006a0bb5*/
    v12 = 8; /*0x1006a0bb9*/
    v11 = v14; /*0x1006a0bbe*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, v12); /*0x1006a0bc1*/
  }
  return result; /*0x1006a0bc6*/
}