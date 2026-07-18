// mac 1.2.2 NEW set_voice_overlay_style 0x10060a7e0 d=1
volatile signed __int64 *__fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond::h8c1c90a39a1b627e(
        void *__src,
        char *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  _BYTE v8[208]; // [rsp+18h] [rbp-308h] BYREF
  _BYTE __dst[360]; // [rsp+E8h] [rbp-238h] BYREF
  __int64 v10; // [rsp+250h] [rbp-D0h] BYREF
  __m256i v11; // [rsp+258h] [rbp-C8h]
  __int64 v12; // [rsp+278h] [rbp-A8h]
  __int64 v13; // [rsp+280h] [rbp-A0h] BYREF
  __m256i v14; // [rsp+288h] [rbp-98h]
  __int64 v15; // [rsp+2A8h] [rbp-78h]
  __int64 v16; // [rsp+2B0h] [rbp-70h]
  _BYTE v17[31]; // [rsp+2B8h] [rbp-68h] BYREF
  __int64 v18; // [rsp+2D8h] [rbp-48h] BYREF
  __m256i v19; // [rsp+2E0h] [rbp-40h]
  _BYTE v20[25]; // [rsp+307h] [rbp-19h] BYREF

  memcpy(__dst, __src, sizeof(__dst)); /*0x10060a805*/
  v2 = *((_QWORD *)__src + 48); /*0x10060a80d*/
  v16 = v2; /*0x10060a814*/
  if ( __OFSUB__(0, *(_QWORD *)a2) ) /*0x10060a81a*/
  {
    v19.i128[1] = *(_OWORD *)(a2 + 24); /*0x10060a82b*/
    v3 = *((_QWORD *)a2 + 1); /*0x10060a82f*/
    v19.i64[1] = *((_QWORD *)a2 + 2); /*0x10060a837*/
    v19.i64[0] = v3; /*0x10060a83b*/
    v18 = 1; /*0x10060a83f*/
  }
  else
  {
    memcpy(v8, a2, sizeof(v8)); /*0x10060a85b*/
    _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hf8fb53ba25fd0eab(&v13, v8); /*0x10060a86a*/
    if ( v13 == 0x8000000000000025LL ) /*0x10060a884*/
    {
      v19 = v14; /*0x10060a895*/
      v4 = 0; /*0x10060a8af*/
    }
    else
    {
      v12 = v15; /*0x10060a8ba*/
      v11 = v14; /*0x10060a8d3*/
      v10 = v13; /*0x10060a8fd*/
      *(_QWORD *)v17 = 0; /*0x10060a904*/
      *(_QWORD *)&v17[8] = 1; /*0x10060a90c*/
      *(_QWORD *)&v17[16] = 0; /*0x10060a914*/
      v19.i64[1] = 1610612768; /*0x10060a91c*/
      v18 = (__int64)v17; /*0x10060a928*/
      v19.i64[0] = (__int64)&anon_21f26993a2155ee534e156309534a585_678; /*0x10060a933*/
      if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x10060a942*/
                              &v10,
                              &v18) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10060a9f4*/
          (__int64)&anon_21f26993a2155ee534e156309534a585_679,
          55,
          (__int64)v20,
          (__int64)&anon_21f26993a2155ee534e156309534a585_700,
          (__int64)&anon_21f26993a2155ee534e156309534a585_681);
      v5 = *(_QWORD *)&v17[16]; /*0x10060a94f*/
      v6 = *(_QWORD *)&v17[8]; /*0x10060a957*/
      *(_QWORD *)&v17[7] = *(_QWORD *)v17; /*0x10060a95b*/
      *(_QWORD *)&v17[15] = v6; /*0x10060a95f*/
      *(_QWORD *)&v17[23] = v5; /*0x10060a963*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h6c215028dbad9df8(&v10); /*0x10060a96e*/
      v19.i8[0] = 3; /*0x10060a973*/
      *(__int128 *)((char *)v19.i128 + 1) = *(_OWORD *)v17; /*0x10060a97f*/
      *(__int64 *)((char *)&v19.i64[2] + 1) = *(_QWORD *)&v17[16]; /*0x10060a98b*/
      v19.i64[3] = *(_QWORD *)&v17[23]; /*0x10060a993*/
      v4 = 1; /*0x10060a997*/
    }
    v18 = v4; /*0x10060a99c*/
  }
  return tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h093f7e920846df9e( /*0x10060a9c8*/
           __dst,
           v2,
           &v18,
           (_QWORD *)__src + 45,
           *((_DWORD *)__src + 98),
           *((_DWORD *)__src + 99));
}