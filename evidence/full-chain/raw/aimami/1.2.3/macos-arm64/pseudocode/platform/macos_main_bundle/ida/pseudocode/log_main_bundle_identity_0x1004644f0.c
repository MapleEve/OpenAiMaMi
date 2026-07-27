// __ZN13codexmate_lib8platform17macos_main_bundle24log_main_bundle_identity @ 0x1004644f0 | 基线 same-set
void codexmate_lib::platform::macos_main_bundle::log_main_bundle_identity::haa72a320aaf1a02f()
{
  void *v0; // rbx
  void *v1; // r15
  __int64 v2; // rax
  void *v3; // r15
  __int64 v4; // rax
  __int64 v5; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+8h] [rbp-98h]
  __int64 v7; // [rsp+10h] [rbp-90h]
  __int64 v8; // [rsp+18h] [rbp-88h] BYREF
  __int64 v9; // [rsp+20h] [rbp-80h]
  __int64 v10; // [rsp+28h] [rbp-78h]
  __int64 v11; // [rsp+30h] [rbp-70h] BYREF
  __int64 v12; // [rsp+38h] [rbp-68h]
  __int64 v13; // [rsp+40h] [rbp-60h]
  __int64 *v14; // [rsp+48h] [rbp-58h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+50h] [rbp-50h]
  __int64 v16; // [rsp+58h] [rbp-48h]
  __int64 (__fastcall *v17)(); // [rsp+60h] [rbp-40h]
  __int64 v18; // [rsp+68h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp-30h]
  __int64 v20; // [rsp+78h] [rbp-28h]

  v0 = (void *)objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::h8f70f79ef50df5f2(); /*0x100464507*/
  v1 = (void *)objc2_foundation::generated::__NSBundle::NSBundle::bundlePath::ha4a7b6892415744a(v0); /*0x100464512*/
  v18 = 0; /*0x100464515*/
  v19 = 1; /*0x10046451d*/
  v20 = 0; /*0x100464525*/
  v16 = 1610612768; /*0x10046452d*/
  v14 = &v18; /*0x100464539*/
  v15 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_394; /*0x100464544*/
  if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x10046454f*/
                          v1,
                          &v14) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100464722*/
      &anon_4fd0d0f33f5bcd90fdaba20400e954f2_395,
      55,
      &v8,
      &anon_4fd0d0f33f5bcd90fdaba20400e954f2_406,
      &anon_4fd0d0f33f5bcd90fdaba20400e954f2_397);
  v11 = v18; /*0x100464564*/
  v12 = v19; /*0x100464568*/
  v13 = v20; /*0x100464570*/
  objc_release(v1); /*0x100464577*/
  v2 = objc2_foundation::generated::__NSBundle::NSBundle::bundleIdentifier::h3e1edc2fcf4a9604(v0); /*0x10046457f*/
  v3 = (void *)v2; /*0x100464584*/
  if ( v2 ) /*0x10046458a*/
  {
    v18 = 0; /*0x10046458c*/
    v19 = 1; /*0x100464594*/
    v20 = 0; /*0x10046459c*/
    v16 = 1610612768; /*0x1004645a4*/
    v14 = &v18; /*0x1004645ac*/
    v15 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_394; /*0x1004645b0*/
    if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x1004645bb*/
                            v2,
                            &v14) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10046474a*/
        &anon_4fd0d0f33f5bcd90fdaba20400e954f2_395,
        55,
        &v8,
        &anon_4fd0d0f33f5bcd90fdaba20400e954f2_406,
        &anon_4fd0d0f33f5bcd90fdaba20400e954f2_397);
    v8 = v18; /*0x1004645d0*/
    v9 = v19; /*0x1004645d7*/
    v10 = v20; /*0x1004645df*/
    objc_release(v3); /*0x1004645e6*/
    v20 = v10; /*0x1004645ef*/
    v19 = v9; /*0x1004645fe*/
    v18 = v8; /*0x100464602*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v0, &v14); /*0x100464608*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100464617*/
    if ( !v4 ) /*0x10046461f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10046475b*/
    *(_BYTE *)(v4 + 4) = 62; /*0x100464625*/
    *(_DWORD *)v4 = 1818848828; /*0x100464629*/
    v18 = 5; /*0x10046462f*/
    v19 = v4; /*0x100464637*/
    v20 = 5; /*0x10046463b*/
  }
  v14 = &v11; /*0x100464647*/
  v15 = (__int64 (__fastcall **)())_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100464652*/
  v16 = (__int64)&v18; /*0x100464656*/
  v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10046465a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v5, &unk_1017BEB7D, &v14); /*0x100464670*/
  if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de ) /*0x100464682*/
    codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc(&unk_1019FF248, v6, v7); /*0x100464699*/
  if ( v5 ) /*0x1004646a8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1004646b6*/
  if ( v18 ) /*0x1004646c2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x1004646cd*/
  if ( v11 ) /*0x1004646d9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x1004646e4*/
  objc_release(v0); /*0x1004646ec*/
}