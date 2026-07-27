// __ZN13codexmate_lib4core5relay8keychain11set_api_key @ 0x1005276c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::keychain::set_api_key::h0814f45be6d5b783(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        size_t a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-30h]

  v12 = a5; /*0x1005276d4*/
  v7 = a4; /*0x1005276d8*/
  v8 = (int)a3; /*0x1005276db*/
  codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997((unsigned __int8 *)v11, a3, a4); /*0x1005276ee*/
  if ( __OFSUB__(0, v11[0]) ) /*0x1005276f5*/
  {
    codexmate_lib::core::relay::keychain::write_key_file::h73e6c3aba7b96586( /*0x10052771a*/
      (_DWORD)a1,
      *(_QWORD *)(a2 + 584),
      *(_QWORD *)(a2 + 592),
      v8,
      v7,
      v12,
      a6);
  }
  else
  {
    a1[2] = v11[2]; /*0x100527725*/
    v9 = v11[0]; /*0x100527729*/
    a1[1] = v11[1]; /*0x100527731*/
    *a1 = v9; /*0x100527735*/
  }
  return a1; /*0x10052773b*/
}