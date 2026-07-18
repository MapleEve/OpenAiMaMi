// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle24log_mai 0x100a3b5f0 d=0
void codexmate_lib::platform::macos_main_bundle::log_main_bundle_identity::h57acaa687b51b39d()
{
  id v0; // rbx
  id v1; // r15
  id v2; // rax
  void *v3; // r15
  __int64 v4; // rax
  size_t v5[3]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+18h] [rbp-88h] BYREF
  __int64 v7; // [rsp+20h] [rbp-80h]
  __int64 v8; // [rsp+28h] [rbp-78h]
  _QWORD v9[3]; // [rsp+30h] [rbp-70h] BYREF
  __int64 *v10; // [rsp+48h] [rbp-58h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+50h] [rbp-50h]
  __int64 v12; // [rsp+58h] [rbp-48h]
  __int64 (__fastcall *v13)(); // [rsp+60h] [rbp-40h]
  __int64 v14; // [rsp+68h] [rbp-38h] BYREF
  __int64 v15; // [rsp+70h] [rbp-30h]
  __int64 v16; // [rsp+78h] [rbp-28h]

  v0 = objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::h8f70f79ef50df5f2(); /*0x100a3b607*/
  v1 = objc2_foundation::generated::__NSBundle::NSBundle::bundlePath::ha4a7b6892415744a(v0); /*0x100a3b612*/
  v14 = 0; /*0x100a3b615*/
  v15 = 1; /*0x100a3b61d*/
  v16 = 0; /*0x100a3b625*/
  v12 = 1610612768; /*0x100a3b62d*/
  v10 = &v14; /*0x100a3b639*/
  v11 = &anon_8b24e3f70b5df2fccdf26f545f136f0f_1225; /*0x100a3b644*/
  if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x100a3b64f*/
                          v1,
                          (__int64)&v10) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a3b822*/
      (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1226,
      55,
      (__int64)&v6,
      (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1239,
      (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1228);
  v9[0] = v14; /*0x100a3b664*/
  v9[1] = v15; /*0x100a3b668*/
  v9[2] = v16; /*0x100a3b670*/
  objc_release(v1); /*0x100a3b677*/
  v2 = objc2_foundation::generated::__NSBundle::NSBundle::bundleIdentifier::h3e1edc2fcf4a9604(v0); /*0x100a3b67f*/
  v3 = v2; /*0x100a3b684*/
  if ( v2 ) /*0x100a3b68a*/
  {
    v14 = 0; /*0x100a3b68c*/
    v15 = 1; /*0x100a3b694*/
    v16 = 0; /*0x100a3b69c*/
    v12 = 1610612768; /*0x100a3b6a4*/
    v10 = &v14; /*0x100a3b6ac*/
    v11 = &anon_8b24e3f70b5df2fccdf26f545f136f0f_1225; /*0x100a3b6b0*/
    if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x100a3b6bb*/
                            v2,
                            (__int64)&v10) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a3b84a*/
        (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1226,
        55,
        (__int64)&v6,
        (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1239,
        (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1228);
    v6 = v14; /*0x100a3b6d0*/
    v7 = v15; /*0x100a3b6d7*/
    v8 = v16; /*0x100a3b6df*/
    objc_release(v3); /*0x100a3b6e6*/
    v16 = v8; /*0x100a3b6ef*/
    v15 = v7; /*0x100a3b6fe*/
    v14 = v6; /*0x100a3b702*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3b708*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x100a3b717*/
    if ( !v4 ) /*0x100a3b71f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100a3b85b*/
    *(_BYTE *)(v4 + 4) = 62; /*0x100a3b725*/
    *(_DWORD *)v4 = 1818848828; /*0x100a3b729*/
    v14 = 5; /*0x100a3b72f*/
    v15 = v4; /*0x100a3b737*/
    v16 = 5; /*0x100a3b73b*/
  }
  v10 = v9; /*0x100a3b747*/
  v11 = (__int64 (__fastcall **)())_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a3b752*/
  v12 = (__int64)&v14; /*0x100a3b756*/
  v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a3b75a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v5, byte_1016FED19, (unsigned __int64)&v10); /*0x100a3b770*/
  if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::hcb8a774b937aebd6 ) /*0x100a3b782*/
    codexmate_lib::platform::debug_log::append_line::hd94facb518a61d68((__int64)&unk_10192A090, v5[1], v5[2]); /*0x100a3b799*/
  if ( v5[0] ) /*0x100a3b7a8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3b7b6*/
  if ( v14 ) /*0x100a3b7c2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3b7cd*/
  if ( v9[0] ) /*0x100a3b7d9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3b7e4*/
  objc_release(v0); /*0x100a3b7ec*/
}