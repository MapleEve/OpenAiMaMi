// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::keychain::set_api_key::ha2ab70735a2b849a; addr: 0x1009b42f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 __fastcall codexmate_lib::core::relay::keychain::set_api_key::ha2ab70735a2b849a(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        size_t a4,
        int a5,
        __int64 a6)
{
  int v7; // r12d
  int v8; // r13d
  __int64 v11; // rax
  __int64 v12; // rsi
  char v13; // di
  _QWORD *v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  char v18; // al
  __int64 v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h]
  __int64 v22; // [rsp+30h] [rbp-40h]
  __int64 v23; // [rsp+38h] [rbp-38h]
  char v24; // [rsp+47h] [rbp-29h]

  v7 = a4; /*0x1009b4308*/
  v8 = (int)a3; /*0x1009b430b*/
  codexmate_lib::core::relay::models::validate_relay_provider_id::h1647d70a24fec10d((unsigned __int8 *)&v20, a3, a4); /*0x1009b431e*/
  if ( __OFSUB__(0, v20) ) /*0x1009b4325*/
  {
    codexmate_lib::core::relay::keychain::lock_store::h8b3983fcc7208950(&v20); /*0x1009b433d*/
    v11 = v20; /*0x1009b4342*/
    v12 = v21; /*0x1009b4346*/
    v13 = v22; /*0x1009b434a*/
    if ( v20 == 0x8000000000000000LL ) /*0x1009b4351*/
    {
      v24 = v22; /*0x1009b4353*/
      v23 = v21; /*0x1009b4357*/
      codexmate_lib::core::relay::keychain::write_key_file::h247a96a6c8de277d( /*0x1009b437e*/
        a1,
        *(_QWORD *)(a2 + 584),
        *(_QWORD *)(a2 + 592),
        v8,
        v7,
        a5,
        a6);
      v14 = (_QWORD *)v23; /*0x1009b4387*/
      if ( (v24 & 1) == 0 /*0x1009b439d*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      {
        v18 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(a1); /*0x1009b43eb*/
        v14 = (_QWORD *)v23; /*0x1009b43f0*/
        if ( !v18 ) /*0x1009b43f6*/
          *(_BYTE *)(v23 + 8) = 1; /*0x1009b43f8*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v14); /*0x1009b43a2*/
    }
    else
    {
      v16 = *(_DWORD *)((char *)&v22 + 1); /*0x1009b43c2*/
      *(_DWORD *)(a1 + 20) = HIDWORD(v22); /*0x1009b43c8*/
      *(_DWORD *)(a1 + 17) = v16; /*0x1009b43cb*/
      *(_QWORD *)a1 = v11; /*0x1009b43ce*/
      *(_QWORD *)(a1 + 8) = v12; /*0x1009b43d1*/
      *(_BYTE *)(a1 + 16) = v13; /*0x1009b43d5*/
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v22; /*0x1009b43ad*/
    v15 = v20; /*0x1009b43b1*/
    *(_QWORD *)(a1 + 8) = v21; /*0x1009b43b9*/
    *(_QWORD *)a1 = v15; /*0x1009b43bd*/
  }
  return a1; /*0x1009b43dc*/
}
