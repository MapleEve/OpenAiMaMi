__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r14
  __int64 v5; // rbx
  _BYTE *v6; // rax
  __int64 v8; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+8h] [rbp-C8h]
  __int64 v10; // [rsp+10h] [rbp-C0h]
  __int64 v11; // [rsp+18h] [rbp-B8h]
  __int64 v12; // [rsp+20h] [rbp-B0h]
  __int64 v13; // [rsp+28h] [rbp-A8h]
  __int64 v14; // [rsp+98h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+A0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 32); /*0x100689c10*/
  v3 = *(_QWORD *)(a1 + 40); /*0x100689c14*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v8, v2, v3); /*0x100689c25*/
  if ( (_DWORD)v8 == 1 ) /*0x100689c38*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x100689c3f*/
      1,
      v9);
    return 0; /*0x100689c44*/
  }
  else
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x100689c4e*/
      0,
      v9);
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v8, v2, v3); /*0x100689c60*/
    v4 = v8; /*0x100689c65*/
    v5 = v9; /*0x100689c6c*/
    if ( __OFSUB__(-v8, 1) ) /*0x100689c76*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h4fb359e0125554c9( /*0x100689c88*/
        0x8000000000000000LL,
        v9);
      LOBYTE(v1) = 3; /*0x100689c8d*/
    }
    else
    {
      v8 = v9; /*0x100689c9c*/
      v9 = v10; /*0x100689ca3*/
      v10 = 0; /*0x100689caa*/
      v11 = 0; /*0x100689cb5*/
      v12 = v5; /*0x100689cc0*/
      v13 = v9; /*0x100689cc7*/
      serde_json::de::from_trait::h13c6255c2aa0fc50(&v14, &v8); /*0x100689cd9*/
      if ( (_BYTE)v14 == 6 ) /*0x100689ce2*/
      {
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(v15); /*0x100689ce8*/
        LOBYTE(v1) = 3; /*0x100689ced*/
      }
      else
      {
        v11 = v15[2]; /*0x100689cf6*/
        v10 = v15[1]; /*0x100689d01*/
        v9 = v15[0]; /*0x100689d10*/
        v8 = v14; /*0x100689d17*/
        v6 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100689d31*/
                        "aimami_router_unlock_auth",
                        25,
                        &v8);
        LOBYTE(v1) = 2; /*0x100689d36*/
        if ( v6 && *v6 == 1 ) /*0x100689d41*/
          LOBYTE(v1) = 2 - v6[1]; /*0x100689d46*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v8); /*0x100689d51*/
      }
      if ( v4 ) /*0x100689d59*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x100689d66*/
    }
  }
  return v1; /*0x100689d6e*/
}
