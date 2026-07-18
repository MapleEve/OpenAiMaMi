// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12schema_shape 0x1008976c0 d=2
_QWORD *__fastcall _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h74f2c163ec31cfd3(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  char *v4; // r13
  char *i; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // al
  __int64 *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  _QWORD *v17; // r13
  _QWORD v19[4]; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD v20[4]; // [rsp+20h] [rbp-80h] BYREF
  __int64 v21; // [rsp+40h] [rbp-60h]
  __int64 v22; // [rsp+48h] [rbp-58h]
  __int64 v23; // [rsp+50h] [rbp-50h]
  __int64 v24; // [rsp+58h] [rbp-48h]
  _QWORD *v25; // [rsp+60h] [rbp-40h]
  __int64 v26; // [rsp+68h] [rbp-38h]
  char v27[41]; // [rsp+77h] [rbp-29h] BYREF

  v25 = a1; /*0x1008976d4*/
  v4 = *(char **)(a2 + 8); /*0x1008976d8*/
  v26 = a2; /*0x1008976dc*/
  for ( i = *(char **)(a2 + 24); v4 != i; *a3 = v6 ) /*0x1008976e7*/
  {
    v20[3] = *((_QWORD *)v4 + 3); /*0x10089772c*/
    v20[2] = *((_QWORD *)v4 + 2); /*0x100897735*/
    v7 = *(_QWORD *)v4; /*0x10089773a*/
    v20[1] = *((_QWORD *)v4 + 1); /*0x100897742*/
    v20[0] = v7; /*0x100897747*/
    v4 += 32; /*0x10089774b*/
    *(_QWORD *)(v26 + 8) = v4; /*0x100897753*/
    v8 = a3[1]; /*0x10089775a*/
    v19[0] = *a3; /*0x10089775e*/
    v19[1] = v8; /*0x100897765*/
    v19[2] = a3[2]; /*0x100897770*/
    v19[3] = a3[3]; /*0x10089777b*/
    v9 = ((__int64 (__fastcall *)(char *, _QWORD *, _QWORD *))core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::hcd1813e8de2865ff)( /*0x10089778c*/
           v27,
           v19,
           v20);
    v10 = v20; /*0x100897793*/
    if ( v9 > 0 ) /*0x100897796*/
      v10 = v19; /*0x100897796*/
    v24 = v10[3]; /*0x10089779e*/
    v23 = v10[2]; /*0x1008977a6*/
    v11 = *v10; /*0x1008977aa*/
    v22 = v10[1]; /*0x1008977b1*/
    v21 = v11; /*0x1008977b5*/
    v12 = v19; /*0x1008977b9*/
    if ( v9 > 0 ) /*0x1008977bc*/
      v12 = v20; /*0x1008977bc*/
    if ( *v12 ) /*0x1008977c0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008977e3*/
    a3[3] = v24; /*0x100897704*/
    a3[2] = v23; /*0x10089770c*/
    v6 = v21; /*0x100897710*/
    a3[1] = v22; /*0x100897718*/
  }
  v13 = v25; /*0x1008977f1*/
  v25[3] = a3[3]; /*0x1008977f5*/
  v13[2] = a3[2]; /*0x1008977fd*/
  v14 = *a3; /*0x100897801*/
  v13[1] = a3[1]; /*0x100897808*/
  *v13 = v14; /*0x10089780c*/
  v15 = i - v4; /*0x10089780f*/
  if ( v15 ) /*0x100897812*/
  {
    v16 = v15 >> 5; /*0x100897814*/
    v17 = v4 + 8; /*0x100897818*/
    do /*0x100897827*/
    {
      if ( *(v17 - 1) ) /*0x100897829*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10089783b*/
      v17 += 4; /*0x100897820*/
      --v16; /*0x100897824*/
    }
    while ( v16 ); /*0x100897827*/
  }
  if ( *(_QWORD *)(v26 + 16) ) /*0x100897846*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10089785b*/
  return v13; /*0x100897863*/
}