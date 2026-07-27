// __ZN13codexmate_lib8commands8accounts32merge_post_commit_refresh_result @ 0x1006a0c30
__int64 __fastcall codexmate_lib::commands::accounts::merge_post_commit_refresh_result::hb0d323861eebb4ff(
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

  v38 = a1; /*0x1006a0c41*/
  v28[0] = a5; /*0x1006a0c45*/
  v28[1] = a6; /*0x1006a0c4c*/
  if ( *(_DWORD *)a2 == 1 ) /*0x1006a0c53*/
  {
    v37 = *(_QWORD *)(a2 + 24); /*0x1006a0c63*/
    v8 = *(_QWORD *)(a2 + 8); /*0x1006a0c67*/
    v36 = *(_QWORD **)(a2 + 16); /*0x1006a0c6f*/
    v35 = v8; /*0x1006a0c73*/
    v31 = v28; /*0x1006a0c7e*/
    v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a0c89*/
    v33 = &v35; /*0x1006a0c91*/
    v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1006a0c9c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v27, &unk_1017C34AC, &v31); /*0x1006a0cb2*/
    result = codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(v38 + 6, a3, a4, v27); /*0x1006a0ccc*/
    v10 = v35; /*0x1006a0cd1*/
    if ( !v35 ) /*0x1006a0cd8*/
      return result; /*0x1006a0cd8*/
    v11 = v36; /*0x1006a0cde*/
    v12 = 1; /*0x1006a0ce2*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, v12); /*0x1006a0ce7*/
  }
  v13 = *(__int64 **)(a2 + 8); /*0x1006a0cec*/
  v14 = *(_QWORD **)(a2 + 16); /*0x1006a0cf0*/
  v15 = *(_QWORD *)(a2 + 24); /*0x1006a0cf4*/
  v16 = (__int64 (__fastcall *)())&v14[6 * v15]; /*0x1006a0d00*/
  v31 = v14; /*0x1006a0d03*/
  v32 = (__int64 (__fastcall *)())v14; /*0x1006a0d07*/
  v29 = (__int64)v13; /*0x1006a0d0b*/
  v33 = v13; /*0x1006a0d0f*/
  v34 = v16; /*0x1006a0d13*/
  v17 = (__int64 (__fastcall *)())v14; /*0x1006a0d17*/
  if ( v15 ) /*0x1006a0d1d*/
  {
    v38 += 6; /*0x1006a0d23*/
    v30 = v14; /*0x1006a0d28*/
    v17 = (__int64 (__fastcall *)())(v14 + 6); /*0x1006a0d2c*/
    while ( 1 ) /*0x1006a0d4d*/
    {
      v18 = *((_QWORD *)v17 - 6); /*0x1006a0d4d*/
      if ( __OFSUB__(-v18, 1) ) /*0x1006a0d57*/
        break; /*0x1006a0d57*/
      v19 = (__int64)v17 - 48; /*0x1006a0d59*/
      v20 = *((const void **)v17 - 5); /*0x1006a0d5d*/
      v21 = *((_QWORD *)v17 - 4); /*0x1006a0d61*/
      v37 = *((_QWORD *)v17 - 1); /*0x1006a0d69*/
      v22 = *((_QWORD *)v17 - 3); /*0x1006a0d6d*/
      v36 = *((_QWORD **)v17 - 2); /*0x1006a0d75*/
      v35 = v22; /*0x1006a0d79*/
      codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(v38, v20, v21, &v35); /*0x1006a0d88*/
      if ( v18 ) /*0x1006a0d90*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v18, 1); /*0x1006a0d9d*/
      v17 = (__int64 (__fastcall *)())((char *)v17 + 48); /*0x1006a0d40*/
      if ( (__int64 (__fastcall *)())(v19 + 48) == v16 ) /*0x1006a0d4b*/
      {
        v17 = v16; /*0x1006a0da4*/
        break; /*0x1006a0da4*/
      }
    }
    v32 = v17; /*0x1006a0da7*/
    v14 = v30; /*0x1006a0dab*/
  }
  if ( v16 != v17 ) /*0x1006a0dc5*/
  {
    v23 = ((char *)v16 - (char *)v17) / 0x30uLL; /*0x1006a0dca*/
    v24 = (_QWORD *)((char *)v17 + 32); /*0x1006a0dce*/
    do /*0x1006a0de7*/
    {
      v25 = *(v24 - 4); /*0x1006a0de9*/
      if ( v25 ) /*0x1006a0df0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v24 - 3), v25, 1); /*0x1006a0dfb*/
      v26 = *(v24 - 1); /*0x1006a0e00*/
      if ( v26 ) /*0x1006a0e07*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v26, 1); /*0x1006a0e11*/
      v24 += 6; /*0x1006a0de0*/
      --v23; /*0x1006a0de4*/
    }
    while ( v23 ); /*0x1006a0de7*/
  }
  result = v29; /*0x1006a0e18*/
  if ( v29 ) /*0x1006a0e1f*/
  {
    v10 = 48 * v29; /*0x1006a0e25*/
    v12 = 8; /*0x1006a0e29*/
    v11 = v14; /*0x1006a0e2e*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, v12); /*0x1006a0e31*/
  }
  return result; /*0x1006a0e36*/
}