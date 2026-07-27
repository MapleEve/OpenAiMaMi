// __ZN13codexmate_lib4core5relay18router_unlock_auth15live_auth_state @ 0x10051a5b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(__int64 a1)
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

  v2 = *(_QWORD *)(a1 + 32); /*0x10051a5c0*/
  v3 = *(_QWORD *)(a1 + 40); /*0x10051a5c4*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v8, v2, v3); /*0x10051a5d5*/
  if ( (_DWORD)v8 == 1 ) /*0x10051a5e8*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10051a5ef*/
      1,
      v9);
    return 0; /*0x10051a5f4*/
  }
  else
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10051a5fe*/
      0,
      v9);
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v8, v2, v3); /*0x10051a610*/
    v4 = v8; /*0x10051a615*/
    v5 = v9; /*0x10051a61c*/
    if ( __OFSUB__(-v8, 1) ) /*0x10051a626*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x10051a638*/
        0x8000000000000000LL,
        v9);
      LOBYTE(v1) = 3; /*0x10051a63d*/
    }
    else
    {
      v8 = v9; /*0x10051a64c*/
      v9 = v10; /*0x10051a653*/
      v10 = 0; /*0x10051a65a*/
      v11 = 0; /*0x10051a665*/
      v12 = v5; /*0x10051a670*/
      v13 = v9; /*0x10051a677*/
      serde_json::de::from_trait::h51e180b4bb6af5e0(&v14, &v8); /*0x10051a689*/
      if ( (_BYTE)v14 == 6 ) /*0x10051a692*/
      {
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v15); /*0x10051a698*/
        LOBYTE(v1) = 3; /*0x10051a69d*/
      }
      else
      {
        v11 = v15[2]; /*0x10051a6a6*/
        v10 = v15[1]; /*0x10051a6b1*/
        v9 = v15[0]; /*0x10051a6c0*/
        v8 = v14; /*0x10051a6c7*/
        v6 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10051a6e1*/
                        "aimami_router_unlock_authlast_refresh",
                        25,
                        &v8);
        LOBYTE(v1) = 2; /*0x10051a6e6*/
        if ( v6 && *v6 == 1 ) /*0x10051a6f1*/
          LOBYTE(v1) = 2 - v6[1]; /*0x10051a6f6*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v8); /*0x10051a701*/
      }
      if ( v4 ) /*0x10051a709*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x10051a716*/
    }
  }
  return v1; /*0x10051a71e*/
}