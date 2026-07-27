// __ZN13codexmate_lib8commands8accounts32merge_post_commit_refresh_result @ 0x1006a0270
__int64 __fastcall codexmate_lib::commands::accounts::merge_post_commit_refresh_result::h45f05e795d4637e8(
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

  v38 = a1; /*0x1006a0281*/
  v28[0] = a5; /*0x1006a0285*/
  v28[1] = a6; /*0x1006a028c*/
  if ( *(_DWORD *)a2 == 1 ) /*0x1006a0293*/
  {
    v37 = *(_QWORD *)(a2 + 24); /*0x1006a02a3*/
    v8 = *(_QWORD *)(a2 + 8); /*0x1006a02a7*/
    v36 = *(_QWORD **)(a2 + 16); /*0x1006a02af*/
    v35 = v8; /*0x1006a02b3*/
    v31 = v28; /*0x1006a02be*/
    v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a02c9*/
    v33 = &v35; /*0x1006a02d1*/
    v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1006a02dc*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v27, &unk_1017C34AC, &v31); /*0x1006a02f2*/
    result = codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(v38 + 6, a3, a4, v27); /*0x1006a030c*/
    v10 = v35; /*0x1006a0311*/
    if ( !v35 ) /*0x1006a0318*/
      return result; /*0x1006a0318*/
    v11 = v36; /*0x1006a031e*/
    v12 = 1; /*0x1006a0322*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, v12); /*0x1006a0327*/
  }
  v13 = *(__int64 **)(a2 + 8); /*0x1006a032c*/
  v14 = *(_QWORD **)(a2 + 16); /*0x1006a0330*/
  v15 = *(_QWORD *)(a2 + 24); /*0x1006a0334*/
  v16 = (__int64 (__fastcall *)())&v14[6 * v15]; /*0x1006a0340*/
  v31 = v14; /*0x1006a0343*/
  v32 = (__int64 (__fastcall *)())v14; /*0x1006a0347*/
  v29 = (__int64)v13; /*0x1006a034b*/
  v33 = v13; /*0x1006a034f*/
  v34 = v16; /*0x1006a0353*/
  v17 = (__int64 (__fastcall *)())v14; /*0x1006a0357*/
  if ( v15 ) /*0x1006a035d*/
  {
    v38 += 6; /*0x1006a0363*/
    v30 = v14; /*0x1006a0368*/
    v17 = (__int64 (__fastcall *)())(v14 + 6); /*0x1006a036c*/
    while ( 1 ) /*0x1006a038d*/
    {
      v18 = *((_QWORD *)v17 - 6); /*0x1006a038d*/
      if ( __OFSUB__(-v18, 1) ) /*0x1006a0397*/
        break; /*0x1006a0397*/
      v19 = (__int64)v17 - 48; /*0x1006a0399*/
      v20 = *((const void **)v17 - 5); /*0x1006a039d*/
      v21 = *((_QWORD *)v17 - 4); /*0x1006a03a1*/
      v37 = *((_QWORD *)v17 - 1); /*0x1006a03a9*/
      v22 = *((_QWORD *)v17 - 3); /*0x1006a03ad*/
      v36 = *((_QWORD **)v17 - 2); /*0x1006a03b5*/
      v35 = v22; /*0x1006a03b9*/
      codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(v38, v20, v21, &v35); /*0x1006a03c8*/
      if ( v18 ) /*0x1006a03d0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v18, 1); /*0x1006a03dd*/
      v17 = (__int64 (__fastcall *)())((char *)v17 + 48); /*0x1006a0380*/
      if ( (__int64 (__fastcall *)())(v19 + 48) == v16 ) /*0x1006a038b*/
      {
        v17 = v16; /*0x1006a03e4*/
        break; /*0x1006a03e4*/
      }
    }
    v32 = v17; /*0x1006a03e7*/
    v14 = v30; /*0x1006a03eb*/
  }
  if ( v16 != v17 ) /*0x1006a0405*/
  {
    v23 = ((char *)v16 - (char *)v17) / 0x30uLL; /*0x1006a040a*/
    v24 = (_QWORD *)((char *)v17 + 32); /*0x1006a040e*/
    do /*0x1006a0427*/
    {
      v25 = *(v24 - 4); /*0x1006a0429*/
      if ( v25 ) /*0x1006a0430*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v24 - 3), v25, 1); /*0x1006a043b*/
      v26 = *(v24 - 1); /*0x1006a0440*/
      if ( v26 ) /*0x1006a0447*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v26, 1); /*0x1006a0451*/
      v24 += 6; /*0x1006a0420*/
      --v23; /*0x1006a0424*/
    }
    while ( v23 ); /*0x1006a0427*/
  }
  result = v29; /*0x1006a0458*/
  if ( v29 ) /*0x1006a045f*/
  {
    v10 = 48 * v29; /*0x1006a0465*/
    v12 = 8; /*0x1006a0469*/
    v11 = v14; /*0x1006a046e*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, v12); /*0x1006a0471*/
  }
  return result; /*0x1006a0476*/
}