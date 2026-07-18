// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x100a28bd0 d=1
size_t *__fastcall codexmate_lib::core::relay::keychain::copy_api_key_from_legacy_id::h33737e9173015a42(
        size_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        size_t a6)
{
  signed __int64 v9; // rsi
  __int64 v10; // rax
  size_t v11; // rax
  __int64 v13; // r12
  signed __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // rax
  size_t v17; // r12
  size_t v18; // rax
  __int64 v19; // [rsp+10h] [rbp-60h]
  __int64 v20; // [rsp+18h] [rbp-58h]
  size_t v22; // [rsp+28h] [rbp-48h] BYREF
  signed __int64 v23; // [rsp+30h] [rbp-40h]
  __int64 v24; // [rsp+38h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-30h]

  codexmate_lib::core::relay::models::validate_relay_provider_id::he4e399639c4c988d(&v22, a5, a6); /*0x100a28bfe*/
  if ( !__OFSUB__(0, v22) ) /*0x100a28c09*/
  {
    a1[2] = v24; /*0x100a28c55*/
    v11 = v22; /*0x100a28c59*/
    a1[1] = v23; /*0x100a28c61*/
LABEL_5:
    *a1 = v11; /*0x100a28c65*/
    return a1; /*0x100a28c65*/
  }
  v20 = *(_QWORD *)(a2 + 584); /*0x100a28c1f*/
  v19 = *(_QWORD *)(a2 + 592); /*0x100a28c23*/
  codexmate_lib::core::relay::keychain::read_key_file::h6916322e23183833(&v22, v20, v19, a5, a6); /*0x100a28c2d*/
  v9 = v23; /*0x100a28c32*/
  v10 = v25; /*0x100a28c3a*/
  if ( (_DWORD)v22 == 1 ) /*0x100a28c42*/
  {
    a1[1] = v24; /*0x100a28c44*/
    a1[2] = v10; /*0x100a28c48*/
    *a1 = v9; /*0x100a28c4c*/
    return a1; /*0x100a28c4f*/
  }
  v13 = a4; /*0x100a28c87*/
  if ( v23 != 0x8000000000000000LL ) /*0x100a28c8b*/
  {
    if ( v25 ) /*0x100a28ce8*/
    {
      *((_BYTE *)a1 + 8) = 1; /*0x100a28cea*/
      *a1 = 0x8000000000000000LL; /*0x100a28cf8*/
      if ( !v9 ) /*0x100a28cfe*/
        return a1; /*0x100a28cfe*/
LABEL_35:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a28e87*/
      return a1; /*0x100a28e8c*/
    }
    if ( v23 ) /*0x100a28d24*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a28d2f*/
      v13 = a4; /*0x100a28d34*/
    }
  }
  if ( !(unsigned __int8)codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h84109c06bc33f952(a3, v13) ) /*0x100a28c9a*/
  {
    *((_BYTE *)a1 + 8) = 0; /*0x100a28d0e*/
    v11 = 0x8000000000000000LL; /*0x100a28d12*/
    goto LABEL_5; /*0x100a28d1c*/
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h84109c06bc33f952(a3, v13) ) /*0x100a28ca2*/
  {
    codexmate_lib::core::relay::keychain::read_key_file::h6916322e23183833(&v22, v20, v19, a3, v13); /*0x100a28cc1*/
    v14 = v23; /*0x100a28cc6*/
    v15 = v24; /*0x100a28cca*/
    v16 = v25; /*0x100a28cce*/
    if ( (_BYTE)v22 ) /*0x100a28cd6*/
    {
      a1[1] = v24; /*0x100a28cd8*/
      a1[2] = v16; /*0x100a28cdc*/
      *a1 = v14; /*0x100a28ce0*/
      return a1; /*0x100a28ce3*/
    }
    v13 = a4; /*0x100a28d4a*/
    if ( v23 != 0x8000000000000000LL ) /*0x100a28d4e*/
    {
      v17 = v23; /*0x100a28e0a*/
      if ( v25 ) /*0x100a28e10*/
        goto LABEL_31; /*0x100a28e10*/
      v13 = a4; /*0x100a28e97*/
      if ( v23 ) /*0x100a28e9b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a28ea9*/
    }
  }
  codexmate_lib::core::relay::keychain::read_legacy_secret::h50ecdc4bfc1e690c(&v22, v20, v19, a3, v13); /*0x100a28d66*/
  v17 = v22; /*0x100a28d6b*/
  if ( v22 != 0x8000000000000000LL ) /*0x100a28d7c*/
  {
    v15 = v23; /*0x100a28dc3*/
    v16 = v24; /*0x100a28dc7*/
    if ( v24 ) /*0x100a28dce*/
      goto LABEL_31; /*0x100a28dce*/
    if ( v22 ) /*0x100a28dd3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a28de0*/
  }
  codexmate_lib::core::relay::keychain::mac_keychain::get::h28325330db64fe31( /*0x100a28d95*/
    &v22,
    &anon_8b24e3f70b5df2fccdf26f545f136f0f_962,
    16,
    a3,
    a4);
  if ( (_DWORD)v22 == 1 ) /*0x100a28d9e*/
  {
    if ( !v23 ) /*0x100a28db1*/
    {
LABEL_27:
      *((_BYTE *)a1 + 8) = 0; /*0x100a28dfe*/
      *a1 = 0x8000000000000000LL; /*0x100a28e02*/
      return a1; /*0x100a28e05*/
    }
LABEL_22:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a28dbc*/
    goto LABEL_27; /*0x100a28dc1*/
  }
  v17 = v23; /*0x100a28de7*/
  if ( v23 < (__int64)0x8000000000000002LL ) /*0x100a28dfc*/
    goto LABEL_27; /*0x100a28dfc*/
  v15 = v24; /*0x100a28e1e*/
  v16 = v25; /*0x100a28e22*/
  if ( !v25 ) /*0x100a28e29*/
  {
    if ( !v23 ) /*0x100a28eb6*/
      goto LABEL_27; /*0x100a28eb6*/
    goto LABEL_22; /*0x100a28eb6*/
  }
LABEL_31:
  codexmate_lib::core::relay::keychain::write_key_file::h68def4dfd0c9ecbe( /*0x100a28e2f*/
    (unsigned int)&v22,
    v20,
    v19,
    (_DWORD)a5,
    a6,
    v15,
    v16);
  if ( v22 == 0x8000000000000000LL ) /*0x100a28e51*/
  {
    *((_BYTE *)a1 + 8) = 1; /*0x100a28e53*/
    *a1 = 0x8000000000000000LL; /*0x100a28e57*/
  }
  else
  {
    a1[2] = v24; /*0x100a28e60*/
    v18 = v22; /*0x100a28e64*/
    a1[1] = v23; /*0x100a28e6c*/
    *a1 = v18; /*0x100a28e70*/
  }
  if ( v17 ) /*0x100a28e76*/
    goto LABEL_35; /*0x100a28e76*/
  return a1; /*0x100a28c6b*/
}