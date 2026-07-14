// mac 1.1.8 behavioral keychain_delete_api_key 0x100416fd0 d=0
_QWORD *__fastcall codexmate_lib::core::relay::keychain::delete_api_key::h4ff57e2a251d9760(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3,
        size_t a4)
{
  _UNKNOWN **v6; // rax
  __int64 v8; // r13
  size_t v9[3]; // [rsp+8h] [rbp-68h] BYREF
  size_t v10[4]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10041700c*/
    v10,
    *(const void **)(a2 + 584),
    *(_QWORD *)(a2 + 592),
    anon_0eedd02070250de7472aa97ee6b1a8ea_795,
    4u);
  std::path::Path::_join::hb1a495d4f06b13b8(v9, (const void *)v10[1], v10[2], a3, a4); /*0x100417026*/
  if ( v10[0] ) /*0x100417032*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10041703c*/
  v6 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac((void *)v9[1], v9[2]); /*0x10041704c*/
  if ( ((unsigned __int8)v6 & 3) == 1 ) /*0x100417059*/
  {
    v10[3] = (size_t)v6 - 1; /*0x1004170cd*/
    v11 = *(__int64 *)((char *)v6 - 1); /*0x1004170d5*/
    v8 = *(__int64 *)((char *)v6 + 7); /*0x1004170d9*/
    if ( *(_QWORD *)v8 ) /*0x1004170dd*/
      (*(void (__fastcall **)(__int64))v8)(v11); /*0x1004170ea*/
    if ( *(_QWORD *)(v8 + 8) ) /*0x1004170f0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004170fd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100417110*/
    if ( v9[0] ) /*0x10041711c*/
      goto LABEL_5; /*0x10041711c*/
  }
  else if ( v9[0] ) /*0x100417062*/
  {
LABEL_5:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100417064*/
  }
  codexmate_lib::core::relay::keychain::mac_keychain::delete::hb572897fa9a2898b( /*0x100417071*/
    v10,
    &anon_0eedd02070250de7472aa97ee6b1a8ea_792,
    16,
    a3,
    a4);
  if ( !__OFSUB__(-v10[0], 1) && v10[0] ) /*0x1004170a2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004170ad*/
  *a1 = 0x8000000000000000LL; /*0x1004170b2*/
  return a1; /*0x1004170b8*/
}