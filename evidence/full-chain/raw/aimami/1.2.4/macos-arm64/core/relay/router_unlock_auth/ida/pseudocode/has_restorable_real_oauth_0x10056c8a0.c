// __ZN13codexmate_lib4core5relay18router_unlock_auth25has_restorable_real_oauth @ 0x10056c8a0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::has_restorable_real_oauth::hfae36b554456dafc(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  char v10; // al
  __int64 v11; // r14
  __int64 __dst; // [rsp+0h] [rbp-100h] BYREF
  __int64 v14; // [rsp+8h] [rbp-F8h]
  __int64 v15; // [rsp+18h] [rbp-E8h]
  __int64 v16; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+30h] [rbp-D0h]
  __int64 v18; // [rsp+38h] [rbp-C8h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 v31; // [rsp+D0h] [rbp-30h]

  LODWORD(v1) = 0; /*0x10056c8b7*/
  v2 = *(_QWORD *)(a1 + 584); /*0x10056c8c1*/
  v3 = *(_QWORD *)(a1 + 592); /*0x10056c8c8*/
  codexmate_lib::core::relay::router_unlock_auth::read_marker::hf41ab369f1f8ea12(&__dst, v2, v3); /*0x10056c8dc*/
  if ( __dst != 0x8000000000000001LL ) /*0x10056c8ec*/
  {
    v1 = __dst; /*0x10056c8f2*/
    v31 = v14; /*0x10056c900*/
    v28 = v15; /*0x10056c90b*/
    v30 = v16; /*0x10056c916*/
    v27 = v17; /*0x10056c921*/
    v29 = v18; /*0x10056c92c*/
    if ( (v20 & 1) != 0 ) /*0x10056c937*/
    {
      v4 = codexmate_lib::core::relay::router_unlock_auth::backup_contains_usable_real_oauth::h701d7b5a00403619(v2, v3); /*0x10056c93f*/
      if ( 2 * v1 ) /*0x10056c944*/
      {
        v9 = v1; /*0x10056ca1d*/
        LODWORD(v1) = v4; /*0x10056ca20*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v9, 1); /*0x10056ca22*/
        v4 = v1; /*0x10056ca27*/
        v5 = v28; /*0x10056ca29*/
        if ( !(2 * v28) ) /*0x10056ca38*/
        {
LABEL_5:
          v6 = v27; /*0x10056c96a*/
          if ( !(2 * v27) ) /*0x10056c96e*/
            goto LABEL_6; /*0x10056c979*/
          goto LABEL_17; /*0x10056c979*/
        }
      }
      else
      {
        v5 = v28; /*0x10056c955*/
        if ( !(2 * v28) ) /*0x10056c959*/
          goto LABEL_5; /*0x10056c964*/
      }
      LODWORD(v1) = v4; /*0x10056ca47*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v5, 1); /*0x10056ca49*/
      v4 = v1; /*0x10056ca4e*/
      v6 = v27; /*0x10056ca50*/
      if ( !(2 * v27) ) /*0x10056ca5f*/
      {
LABEL_6:
        LOBYTE(v1) = 1; /*0x10056c97f*/
        if ( (_BYTE)v4 ) /*0x10056c983*/
          return (unsigned int)v1; /*0x10056c983*/
        goto LABEL_18; /*0x10056c983*/
      }
LABEL_17:
      LODWORD(v1) = v4; /*0x10056ca65*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v6, 1); /*0x10056ca70*/
      v10 = v1; /*0x10056ca75*/
      LOBYTE(v1) = 1; /*0x10056ca77*/
      if ( v10 ) /*0x10056ca7b*/
        return (unsigned int)v1; /*0x10056ca7b*/
      goto LABEL_18; /*0x10056ca7b*/
    }
    if ( 2 * __dst ) /*0x10056c98e*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, __dst, 1); /*0x10056c9cf*/
      v7 = v28; /*0x10056c9d4*/
      if ( !(2 * v28) ) /*0x10056c9e3*/
      {
LABEL_10:
        v8 = v27; /*0x10056c9ac*/
        if ( !(2 * v27) ) /*0x10056c9bb*/
          goto LABEL_18; /*0x10056c9bb*/
LABEL_14:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v8, 1); /*0x10056ca04*/
        goto LABEL_18; /*0x10056ca12*/
      }
    }
    else
    {
      v7 = v28; /*0x10056c99b*/
      if ( !(2 * v28) ) /*0x10056c99f*/
        goto LABEL_10; /*0x10056c9aa*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v7, 1); /*0x10056c9ee*/
    v8 = v27; /*0x10056c9f3*/
    if ( !(2 * v27) ) /*0x10056ca02*/
      goto LABEL_18; /*0x10056ca02*/
    goto LABEL_14; /*0x10056ca02*/
  }
LABEL_18:
  LOBYTE(v1) = 1; /*0x10056ca81*/
  if ( !(unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::backup_contains_usable_real_oauth::h701d7b5a00403619( /*0x10056ca87*/
                           v2,
                           v3) )
  {
    codexmate_lib::core::relay::legacy_virtual_auth::restorable_backup_auth::hfcd28f49b073d9a0(&__dst); /*0x10056caa0*/
    v11 = __dst; /*0x10056caa5*/
    if ( __dst == 0x8000000000000001LL ) /*0x10056caaf*/
    {
      LODWORD(v1) = 0; /*0x10056cab1*/
    }
    else
    {
      LODWORD(v1) = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h6e7e553ec9b7fa62(&__dst); /*0x10056cac4*/
      if ( v11 != 0x8000000000000000LL && v11 ) /*0x10056cad8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v11, 1); /*0x10056cae9*/
      if ( v15 != 0x8000000000000000LL && v15 ) /*0x10056cafd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x10056cb0b*/
      if ( v17 != 0x8000000000000000LL && v17 ) /*0x10056cb1f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x10056cb2d*/
      if ( v19 != 0x8000000000000000LL && v19 ) /*0x10056cb41*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x10056cb4f*/
      if ( v21 != 0x8000000000000000LL && v21 ) /*0x10056cb63*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v21, 1); /*0x10056cb71*/
      if ( v23 != 0x8000000000000000LL && v23 ) /*0x10056cb85*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x10056cb90*/
      if ( v25 != 0x8000000000000000LL && v25 ) /*0x10056cba1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x10056cbac*/
    }
  }
  return (unsigned int)v1; /*0x10056cbb3*/
}