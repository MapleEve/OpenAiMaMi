// mac 1.1.8 BEHAVIORAL-BACKEND install_daemon node 0x1001e9a40 depth=0
// install_daemon_owner
_QWORD *__fastcall codexmate_lib::platform::daemon::install_daemon::hdeeec86e4023ee95(
        _QWORD *a1,
        _BYTE *a2,
        size_t a3,
        size_t a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        __int64 a10)
{
  _QWORD *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE *v16; // rax
  char *v17; // rdx
  _UNKNOWN **v18; // rax
  size_t v19; // r12
  char **v20; // rbx
  size_t v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // r14
  __int64 v28; // r13
  __int64 v29; // r12
  _QWORD v30[25]; // [rsp+0h] [rbp-180h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-B0h]
  __int64 v33; // [rsp+E0h] [rbp-A0h]
  _QWORD v34[2]; // [rsp+100h] [rbp-80h] BYREF
  size_t v35; // [rsp+110h] [rbp-70h] BYREF
  __int64 v36; // [rsp+118h] [rbp-68h]
  __int64 v37; // [rsp+120h] [rbp-60h]
  size_t v38[3]; // [rsp+128h] [rbp-58h] BYREF
  __int64 v39; // [rsp+140h] [rbp-40h] BYREF
  size_t v40; // [rsp+148h] [rbp-38h]
  _QWORD *v41; // [rsp+150h] [rbp-30h]

  v11 = a1; /*0x1001e9a5a*/
  if ( codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::h6d8f7a7b7010e1d0 ) /*0x1001e9a6b*/
  {
    LOBYTE(v31) = 1; /*0x1001e9d2e*/
    v30[0] = &v31; /*0x1001e9d3c*/
    v40 = a4; /*0x1001e9d61*/
    v28 = a5; /*0x1001e9d68*/
    v41 = a1; /*0x1001e9d6e*/
    v29 = a6; /*0x1001e9d72*/
    std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c( /*0x1001e9d75*/
      &codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::h6d8f7a7b7010e1d0,
      0,
      (__int64)v30,
      (__int64)&unk_101527FA8,
      (__int64)&off_101526D68);
    a4 = v40; /*0x1001e9d7a*/
    a5 = v28; /*0x1001e9d7e*/
    a6 = v29; /*0x1001e9d81*/
    v11 = v41; /*0x1001e9d84*/
  }
  v35 = a4; /*0x1001e9a71*/
  v36 = a5; /*0x1001e9a75*/
  v31 = a6; /*0x1001e9a79*/
  v32 = a10; /*0x1001e9a80*/
  v30[0] = &off_101526D58; /*0x1001e9a8e*/
  v30[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1001e9a9c*/
  v30[2] = &v35; /*0x1001e9aa7*/
  v30[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1001e9ab5*/
  v30[4] = &v31; /*0x1001e9ac3*/
  v30[5] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1001e9aca*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v38, byte_10125D1DD, (unsigned __int64)v30); /*0x1001e9ae3*/
  v16 = (_BYTE *)std::path::Path::parent::h4c3ac26770731fbb(a2, a3, v12, v13, v14, v15); /*0x1001e9aee*/
  if ( v16 /*0x1001e9b1a*/
    && (LOWORD(v30[0]) = 511,
        BYTE2(v30[0]) = 1,
        (v18 = std::fs::DirBuilder::_create::h099c6e2853c95452((__int64)v30, v16, v17)) != nullptr) )
  {
    *v11 = 2; /*0x1001e9b1c*/
    v11[1] = v18; /*0x1001e9b24*/
    if ( v38[0] ) /*0x1001e9b30*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9b3f*/
  }
  else
  {
    v41 = v11; /*0x1001e9b49*/
    v19 = v38[0]; /*0x1001e9b4d*/
    v20 = std::fs::write::inner::had0c1bee0a2c1e21(a2, a3, (char *)v38[1], v38[2], a7, a8, a9); /*0x1001e9b67*/
    if ( v19 ) /*0x1001e9b6d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9b7a*/
    if ( v20 ) /*0x1001e9b82*/
    {
      v11 = v41; /*0x1001e9b84*/
      *v41 = 2; /*0x1001e9b88*/
      v11[1] = v20; /*0x1001e9b90*/
    }
    else
    {
      std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001e9bb0*/
        (__int64)v30,
        "launchctl-wunloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistremovedev.aionsale.auto-switch",
        9u);
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001e9bc4*/
        (__int64)v30,
        (__int64)"loadlistlogsHomeInfoPathUser",
        4);
      v11 = v41; /*0x1001e9bc9*/
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001e9be0*/
        (__int64)v30,
        (__int64)"-wunloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistremovedev.aionsale.auto-switch",
        2);
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0((__int64)v30, (__int64)a2, a3); /*0x1001e9bf2*/
      std::process::Command::output::h737eedd4de2ee22e((__int64)&v31, (__int64)v30); /*0x1001e9c05*/
      if ( __OFSUB__(-v31, 1) ) /*0x1001e9c1b*/
      {
        v39 = v32; /*0x1001e9c24*/
        v34[0] = &v39; /*0x1001e9c2c*/
        v34[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1001e9c37*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v35, byte_101224459, (unsigned __int64)v34); /*0x1001e9c4a*/
        v21 = v35; /*0x1001e9c4f*/
        v22 = v36; /*0x1001e9c53*/
        v23 = v37; /*0x1001e9c57*/
        if ( (v39 & 3) == 1 ) /*0x1001e9c67*/
        {
          v40 = v39 - 1; /*0x1001e9c6d*/
          v24 = *(_QWORD *)(v39 + 7); /*0x1001e9c75*/
          if ( *(_QWORD *)v24 ) /*0x1001e9c79*/
            (*(void (__fastcall **)(_QWORD))v24)(*(_QWORD *)(v39 - 1)); /*0x1001e9c84*/
          if ( *(_QWORD *)(v24 + 8) ) /*0x1001e9c86*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9c96*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9ca9*/
        }
        v25 = v41; /*0x1001e9cae*/
        v41[1] = v21; /*0x1001e9cb2*/
        v25[2] = v22; /*0x1001e9cb6*/
        v11 = v25; /*0x1001e9cba*/
        v25[3] = v23; /*0x1001e9cbd*/
        *v25 = 9; /*0x1001e9cc1*/
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(v30); /*0x1001e9ccf*/
      }
      else
      {
        v26 = v33; /*0x1001e9cd6*/
        if ( v31 ) /*0x1001e9ce4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9ceb*/
        if ( v26 ) /*0x1001e9cf3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9d00*/
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(v30); /*0x1001e9d0c*/
        *v11 = 10; /*0x1001e9d11*/
      }
    }
  }
  return v11; /*0x1001e9d1c*/
}