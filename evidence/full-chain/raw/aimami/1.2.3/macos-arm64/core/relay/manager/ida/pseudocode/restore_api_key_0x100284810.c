// __ZN13codexmate_lib4core5relay7manager15restore_api_key @ 0x100284810 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::restore_api_key::hf9c9a82491e8c29b(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // ebx
  int v8; // r13d
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v11; // [rsp+20h] [rbp-30h]

  if ( !a5 ) /*0x100284824*/
    return codexmate_lib::core::relay::keychain::delete_api_key::h9464defffa032412(a1, a2, a3, a4); /*0x100284886*/
  v7 = a5; /*0x100284829*/
  v8 = a3; /*0x100284836*/
  v11 = a4; /*0x10028483c*/
  codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997(v10, a3, a4); /*0x100284843*/
  if ( __OFSUB__(0, v10[0]) ) /*0x10028484a*/
    return codexmate_lib::core::relay::keychain::write_key_file::h73e6c3aba7b96586( /*0x100284871*/
             (_DWORD)a1,
             *(_QWORD *)(a2 + 584),
             *(_QWORD *)(a2 + 592),
             v8,
             v11,
             v7,
             a6);
  a1[2] = v10[2]; /*0x10028488f*/
  result = v10[0]; /*0x100284893*/
  a1[1] = v10[1]; /*0x10028489b*/
  *a1 = result; /*0x10028489f*/
  return result; /*0x100284878*/
}