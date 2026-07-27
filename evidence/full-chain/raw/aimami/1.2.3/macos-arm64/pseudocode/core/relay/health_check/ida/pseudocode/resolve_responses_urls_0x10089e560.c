// __ZN13codexmate_lib4core5relay12health_check22resolve_responses_urls @ 0x10089e560 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::health_check::resolve_responses_urls::h6a7227c1ef47b3b0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 *v3; // r15
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  char v6; // r8
  char v7; // r9
  __int64 v8; // rdx
  int v9; // r9d
  int v10; // r8d
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // r14
  __int64 *v15; // r15
  __int64 (__fastcall *v16)(); // r12
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[3]; // [rsp+8h] [rbp-98h] BYREF
  _QWORD v24[3]; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v25[2]; // [rsp+38h] [rbp-68h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-58h]
  __int64 *v27; // [rsp+50h] [rbp-50h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+58h] [rbp-48h]
  __int64 v29; // [rsp+60h] [rbp-40h]
  __int64 v30; // [rsp+68h] [rbp-38h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-30h]

  v3 = (__int64 *)a1; /*0x10089e571*/
  do /*0x10089e601*/
  {
    while ( 1 ) /*0x10089e58c*/
    {
      if ( !a3 ) /*0x10089e58f*/
      {
        v30 = a2; /*0x10089e618*/
        v31 = 0; /*0x10089e61c*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10089e624*/
        goto LABEL_16; /*0x10089e629*/
      }
      v4 = a3; /*0x10089e595*/
      v5 = a2 + a3; /*0x10089e598*/
      a1 = (unsigned int)*(char *)(a2 + a3 - 1); /*0x10089e59c*/
      if ( (a1 & 0x80000000) != 0LL ) /*0x10089e5a2*/
        break; /*0x10089e5a2*/
      --a3; /*0x10089e584*/
      if ( (_DWORD)a1 != 47 ) /*0x10089e58a*/
        goto LABEL_12; /*0x10089e58a*/
    }
    v6 = *(_BYTE *)(v5 - 2); /*0x10089e5a4*/
    if ( v6 >= -64 ) /*0x10089e5ad*/
    {
      v8 = v5 - 2; /*0x10089e5d4*/
      v10 = v6 & 0x1F; /*0x10089e5d8*/
    }
    else
    {
      v7 = *(_BYTE *)(v5 - 3); /*0x10089e5af*/
      if ( v7 >= -64 ) /*0x10089e5b8*/
      {
        v8 = v5 - 3; /*0x10089e5de*/
        v9 = v7 & 0xF; /*0x10089e5e2*/
      }
      else
      {
        v8 = v5 - 4; /*0x10089e5ba*/
        v9 = ((*(_BYTE *)(v5 - 4) & 7) << 6) | v7 & 0x3F; /*0x10089e5cf*/
      }
      v10 = (v9 << 6) | v6 & 0x3F; /*0x10089e5ee*/
    }
    a1 = (v10 << 6) | (unsigned int)(a1 & 0x3F); /*0x10089e5f8*/
    a3 = v8 - a2; /*0x10089e5fb*/
  }
  while ( (_DWORD)a1 == 47 ); /*0x10089e601*/
LABEL_12:
  v30 = a2; /*0x10089e603*/
  v31 = v4; /*0x10089e607*/
  if ( v4 <= 2 ) /*0x10089e60f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10089e611*/
LABEL_16:
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x10089e64d*/
    if ( !v13 ) /*0x10089e65f*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x10089e77a*/
    v14 = (_QWORD *)v13; /*0x10089e665*/
    v26 = v3; /*0x10089e668*/
    v25[0] = &v30; /*0x10089e670*/
    v25[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10089e67b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v27, &anon_10420c9971c21f44d230d15b39fb3fec_638, v25); /*0x10089e68e*/
    v15 = v27; /*0x10089e693*/
    v16 = v28; /*0x10089e697*/
    v17 = v29; /*0x10089e69b*/
    v27 = &v30; /*0x10089e6a3*/
    v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10089e6a7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v23, &anon_10420c9971c21f44d230d15b39fb3fec_639, &v27); /*0x10089e6bd*/
    *v14 = v15; /*0x10089e6c2*/
    v14[1] = v16; /*0x10089e6c5*/
    v14[2] = v17; /*0x10089e6c9*/
    v18 = v23[1]; /*0x10089e6d4*/
    v14[3] = v23[0]; /*0x10089e6db*/
    v14[4] = v18; /*0x10089e6df*/
    v14[5] = v23[2]; /*0x10089e6ea*/
    v19 = 2; /*0x10089e6ee*/
    v3 = v26; /*0x10089e6f3*/
    goto LABEL_18; /*0x10089e6f3*/
  }
  v11 = *(_WORD *)(v5 - 3) ^ 0x762F; /*0x10089e62f*/
  v12 = *(unsigned __int8 *)(v5 - 1) ^ 0x31; /*0x10089e63a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10089e63e*/
  if ( v11 | v12 ) /*0x10089e643*/
    goto LABEL_16; /*0x10089e647*/
  v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10089e71e*/
  if ( !v21 ) /*0x10089e726*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10089e789*/
  v14 = (_QWORD *)v21; /*0x10089e728*/
  v27 = &v30; /*0x10089e72f*/
  v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10089e73a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &anon_10420c9971c21f44d230d15b39fb3fec_638, &v27); /*0x10089e74d*/
  v14[2] = v24[2]; /*0x10089e756*/
  v22 = v24[0]; /*0x10089e75a*/
  v14[1] = v24[1]; /*0x10089e762*/
  *v14 = v22; /*0x10089e766*/
  v19 = 1; /*0x10089e769*/
LABEL_18:
  *v3 = v19; /*0x10089e6f7*/
  v3[1] = (__int64)v14; /*0x10089e6fa*/
  v3[2] = v19; /*0x10089e6fe*/
  return v3; /*0x10089e705*/
}