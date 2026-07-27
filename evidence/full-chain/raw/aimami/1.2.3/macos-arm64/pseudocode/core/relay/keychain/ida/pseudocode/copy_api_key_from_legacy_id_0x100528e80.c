// __ZN13codexmate_lib4core5relay8keychain27copy_api_key_from_legacy_id @ 0x100528e80
unsigned __int64 *__fastcall codexmate_lib::core::relay::keychain::copy_api_key_from_legacy_id::h440d262830c5cdf7(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v15; // r12
  signed __int64 v16; // rdx
  signed __int64 v17; // r9
  __int64 v18; // rax
  signed __int64 v19; // r12
  signed __int64 v20; // rsi
  __int64 v21; // rdi
  int v22; // r8d
  signed __int64 v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+10h] [rbp-60h]
  __int64 v26; // [rsp+18h] [rbp-58h]
  unsigned __int64 v28; // [rsp+28h] [rbp-48h] BYREF
  signed __int64 v29; // [rsp+30h] [rbp-40h]
  __int64 v30; // [rsp+38h] [rbp-38h]
  __int64 v31; // [rsp+40h] [rbp-30h]

  codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997(&v28, a5, a6); /*0x100528eae*/
  if ( !__OFSUB__(0, v28) ) /*0x100528eb9*/
  {
    a1[2] = v30; /*0x100528f05*/
    v13 = v28; /*0x100528f09*/
    a1[1] = v29; /*0x100528f11*/
LABEL_5:
    *a1 = v13; /*0x100528f15*/
    return a1; /*0x100528f15*/
  }
  v26 = *(_QWORD *)(a2 + 584); /*0x100528ecf*/
  v25 = *(_QWORD *)(a2 + 592); /*0x100528ed3*/
  codexmate_lib::core::relay::keychain::read_key_file::h980bceabd704e07f(&v28, v26, v25, a5, a6); /*0x100528edd*/
  v10 = v29; /*0x100528ee2*/
  v11 = v30; /*0x100528ee6*/
  v12 = v31; /*0x100528eea*/
  if ( (_DWORD)v28 == 1 ) /*0x100528ef2*/
  {
    a1[1] = v30; /*0x100528ef4*/
    a1[2] = v12; /*0x100528ef8*/
    *a1 = v10; /*0x100528efc*/
    return a1; /*0x100528eff*/
  }
  v15 = a4; /*0x100528f37*/
  if ( v29 != 0x8000000000000000LL ) /*0x100528f3b*/
  {
    if ( v31 ) /*0x100528f98*/
    {
      *((_BYTE *)a1 + 8) = 1; /*0x100528f9a*/
      *a1 = 0x8000000000000000LL; /*0x100528fa8*/
      if ( !v10 ) /*0x100528fae*/
        return a1; /*0x100528fae*/
LABEL_37:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x100529137*/
      return a1; /*0x10052913c*/
    }
    if ( v29 ) /*0x100528fd4*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v29, 1); /*0x100528fdf*/
      v15 = a4; /*0x100528fe4*/
    }
  }
  if ( !(unsigned __int8)codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h42f58ae8ebd86916(a3, v15) ) /*0x100528f4a*/
  {
    *((_BYTE *)a1 + 8) = 0; /*0x100528fbe*/
    v13 = 0x8000000000000000LL; /*0x100528fc2*/
    goto LABEL_5; /*0x100528fcc*/
  }
  if ( (unsigned __int8)codexmate_lib::core::relay::keychain::legacy_id_is_safe_identifier::h42f58ae8ebd86916(a3, v15) ) /*0x100528f52*/
  {
    codexmate_lib::core::relay::keychain::read_key_file::h980bceabd704e07f(&v28, v26, v25, a3, v15); /*0x100528f71*/
    v16 = v29; /*0x100528f76*/
    v17 = v30; /*0x100528f7a*/
    v18 = v31; /*0x100528f7e*/
    if ( (_BYTE)v28 ) /*0x100528f86*/
    {
      a1[1] = v30; /*0x100528f88*/
      a1[2] = v18; /*0x100528f8c*/
      *a1 = v16; /*0x100528f90*/
      return a1; /*0x100528f93*/
    }
    v15 = a4; /*0x100528ffa*/
    if ( v29 != 0x8000000000000000LL ) /*0x100528ffe*/
    {
      v19 = v29; /*0x1005290ba*/
      if ( v31 ) /*0x1005290c0*/
        goto LABEL_32; /*0x1005290c0*/
      v15 = a4; /*0x100529147*/
      if ( v29 ) /*0x10052914b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v29, 1); /*0x100529159*/
    }
  }
  codexmate_lib::core::relay::keychain::read_legacy_secret::hcbd56474a2086818(&v28, v26, v25, a3, v15); /*0x100529016*/
  v19 = v28; /*0x10052901b*/
  if ( v28 != 0x8000000000000000LL ) /*0x10052902c*/
  {
    v17 = v29; /*0x100529073*/
    v18 = v30; /*0x100529077*/
    if ( v30 ) /*0x10052907e*/
      goto LABEL_32; /*0x10052907e*/
    if ( v28 ) /*0x100529083*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x100529090*/
  }
  codexmate_lib::core::relay::keychain::mac_keychain::get::hfed926cbdea4b3f6( /*0x100529045*/
    &v28,
    &anon_92869709a5e99ce1936aa4e326b6c562_997,
    16,
    a3,
    a4);
  if ( (_DWORD)v28 == 1 ) /*0x10052904e*/
  {
    v20 = v29; /*0x100529050*/
    if ( !v29 ) /*0x100529061*/
    {
LABEL_28:
      *((_BYTE *)a1 + 8) = 0; /*0x1005290ae*/
      *a1 = 0x8000000000000000LL; /*0x1005290b2*/
      return a1; /*0x1005290b5*/
    }
    v21 = v30; /*0x100529063*/
LABEL_23:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x10052906c*/
    goto LABEL_28; /*0x100529071*/
  }
  v19 = v29; /*0x100529097*/
  if ( v29 < (__int64)0x8000000000000002LL ) /*0x1005290ac*/
    goto LABEL_28; /*0x1005290ac*/
  v17 = v30; /*0x1005290ce*/
  v18 = v31; /*0x1005290d2*/
  if ( !v31 ) /*0x1005290d9*/
  {
    if ( !v29 ) /*0x100529166*/
      goto LABEL_28; /*0x100529166*/
    v21 = v30; /*0x100529171*/
    v20 = v29; /*0x100529174*/
    goto LABEL_23; /*0x100529177*/
  }
LABEL_32:
  v22 = a6; /*0x1005290df*/
  v23 = v17; /*0x1005290f5*/
  codexmate_lib::core::relay::keychain::write_key_file::h73e6c3aba7b96586( /*0x1005290f8*/
    (unsigned int)&v28,
    v26,
    v25,
    a5,
    v22,
    v17,
    v18);
  if ( v28 == 0x8000000000000000LL ) /*0x100529101*/
  {
    *((_BYTE *)a1 + 8) = 1; /*0x100529103*/
    *a1 = 0x8000000000000000LL; /*0x100529107*/
  }
  else
  {
    a1[2] = v30; /*0x100529110*/
    v24 = v28; /*0x100529114*/
    a1[1] = v29; /*0x10052911c*/
    *a1 = v24; /*0x100529120*/
  }
  if ( v19 ) /*0x100529126*/
  {
    v11 = v23; /*0x100529131*/
    v10 = v19; /*0x100529134*/
    goto LABEL_37; /*0x100529134*/
  }
  return a1; /*0x100528f1b*/
}