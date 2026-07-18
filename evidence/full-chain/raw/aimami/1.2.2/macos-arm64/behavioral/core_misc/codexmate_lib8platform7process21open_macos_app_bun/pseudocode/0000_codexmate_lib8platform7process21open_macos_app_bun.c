// mac 1.2.2 NEW codexmate_lib8platform7process21open_macos_app_bun 0x1009ac0a0 d=0
char __fastcall codexmate_lib::platform::process::open_macos_app_bundle::hd9154e32a1d3ee15(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  size_t v6; // rax
  char (__fastcall *v7)(__int64 **, __int64 *); // rdx
  _QWORD v9[25]; // [rsp+0h] [rbp-200h] BYREF
  size_t v10[3]; // [rsp+C8h] [rbp-138h] BYREF
  size_t v11[3]; // [rsp+E0h] [rbp-120h] BYREF
  unsigned __int8 *v12; // [rsp+F8h] [rbp-108h] BYREF
  char (__fastcall *v13)(__int64 **, __int64 *); // [rsp+100h] [rbp-100h]
  size_t v14; // [rsp+108h] [rbp-F8h]
  __int64 v15; // [rsp+110h] [rbp-F0h]
  __int64 v16; // [rsp+118h] [rbp-E8h]
  size_t v17; // [rsp+120h] [rbp-E0h]
  __int64 v18; // [rsp+128h] [rbp-D8h]
  unsigned __int64 v19; // [rsp+130h] [rbp-D0h] BYREF
  unsigned __int8 *v20; // [rsp+138h] [rbp-C8h]
  size_t v21; // [rsp+140h] [rbp-C0h]
  __int64 v22; // [rsp+148h] [rbp-B8h]
  __int64 v23; // [rsp+150h] [rbp-B0h]
  size_t v24; // [rsp+158h] [rbp-A8h]
  __int64 v25; // [rsp+160h] [rbp-A0h]
  unsigned __int8 *v26; // [rsp+168h] [rbp-98h] BYREF
  unsigned __int8 **v27; // [rsp+170h] [rbp-90h] BYREF
  char (__fastcall *v28)(__int64 **, __int64 *); // [rsp+178h] [rbp-88h]
  size_t v29; // [rsp+180h] [rbp-80h]
  __int64 v30; // [rsp+188h] [rbp-78h]
  __int64 v31; // [rsp+190h] [rbp-70h]
  size_t v32; // [rsp+198h] [rbp-68h]
  __int64 v33; // [rsp+1A0h] [rbp-60h]
  unsigned __int64 v34; // [rsp+1A8h] [rbp-58h] BYREF
  unsigned __int8 *v35; // [rsp+1B0h] [rbp-50h]
  __int64 v36; // [rsp+1B8h] [rbp-48h]
  __int64 v37; // [rsp+1C0h] [rbp-40h]
  __int64 v38; // [rsp+1C8h] [rbp-38h]
  size_t v39; // [rsp+1D0h] [rbp-30h]
  __int64 v40; // [rsp+1D8h] [rbp-28h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1009ac0d1*/
    (__int64)v9,
    "/usr/bin/openif application id \"com.openai.codex\" is running then\n    tell application id \"com.openai.codex\" to quit\nend if/codex framework.framework//contents/resources/native/bare-modifier-monitor",
    0xDu);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0((__int64)v9, a2, a3); /*0x1009ac0df*/
  std::process::Command::output::h737eedd4de2ee22e((__int64)&v19, (__int64)v9); /*0x1009ac0f2*/
  if ( __OFSUB__(0, v19) ) /*0x1009ac0f9*/
  {
    v26 = v20; /*0x1009ac10d*/
    v27 = &v26; /*0x1009ac11b*/
    v28 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1009ac129*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v10, byte_1016FB682, (unsigned __int64)&v27); /*0x1009ac145*/
    v27 = (unsigned __int8 **)v10[0]; /*0x1009ac158*/
    v28 = (char (__fastcall *)(__int64 **, __int64 *))v10[1]; /*0x1009ac15f*/
    v29 = v10[2]; /*0x1009ac16d*/
    if ( ((unsigned __int8)v26 & 3) == 1 ) /*0x1009ac180*/
    {
      v4 = *(_QWORD *)(v26 + 7); /*0x1009ac18a*/
      if ( *(_QWORD *)v4 ) /*0x1009ac18e*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v26 - 1)); /*0x1009ac19a*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x1009ac19c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ac1ae*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ac1c0*/
    }
    v12 = (unsigned __int8 *)v27; /*0x1009ac1d3*/
    v13 = v28; /*0x1009ac1da*/
    v14 = v29; /*0x1009ac1e5*/
    v15 = v30; /*0x1009ac1f0*/
    v16 = v31; /*0x1009ac1fb*/
    v17 = v32; /*0x1009ac206*/
    v18 = v33; /*0x1009ac211*/
    v40 = v33; /*0x1009ac218*/
    v39 = v32; /*0x1009ac21c*/
    v38 = v31; /*0x1009ac220*/
    v37 = v30; /*0x1009ac224*/
    v36 = v29; /*0x1009ac228*/
    v35 = (unsigned __int8 *)v28; /*0x1009ac22c*/
    v34 = (unsigned __int64)v27; /*0x1009ac230*/
    a1[7] = v33; /*0x1009ac238*/
    a1[6] = v39; /*0x1009ac240*/
    a1[5] = v38; /*0x1009ac248*/
    a1[4] = v37; /*0x1009ac250*/
    a1[3] = v36; /*0x1009ac258*/
    v5 = v34; /*0x1009ac25c*/
    a1[2] = v35; /*0x1009ac264*/
    a1[1] = v5; /*0x1009ac268*/
    *a1 = 9; /*0x1009ac26c*/
    LOBYTE(v6) = core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758((__int64)v9); /*0x1009ac27a*/
    return v6; /*0x1009ac27f*/
  }
  v18 = v25; /*0x1009ac28b*/
  v17 = v24; /*0x1009ac299*/
  v16 = v23; /*0x1009ac2a7*/
  v15 = v22; /*0x1009ac2b5*/
  v34 = v19; /*0x1009ac2d1*/
  v35 = v20; /*0x1009ac2d5*/
  v36 = v21; /*0x1009ac2d9*/
  v37 = v22; /*0x1009ac2dd*/
  v38 = v23; /*0x1009ac2e1*/
  v39 = v24; /*0x1009ac2e5*/
  v40 = v25; /*0x1009ac2e9*/
  v33 = v25; /*0x1009ac2f1*/
  v32 = v24; /*0x1009ac2f9*/
  v31 = v23; /*0x1009ac301*/
  v30 = v22; /*0x1009ac309*/
  v29 = v21; /*0x1009ac311*/
  v28 = (char (__fastcall *)(__int64 **, __int64 *))v20; /*0x1009ac31d*/
  v27 = (unsigned __int8 **)v19; /*0x1009ac324*/
  LOBYTE(v6) = core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758((__int64)v9); /*0x1009ac332*/
  if ( (_DWORD)v33 ) /*0x1009ac33b*/
  {
    v34 = a2; /*0x1009ac341*/
    v35 = (unsigned __int8 *)a3; /*0x1009ac345*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v19, v31, v32); /*0x1009ac35b*/
    v12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(v20, v21); /*0x1009ac376*/
    v13 = v7; /*0x1009ac37d*/
    v9[0] = &v34; /*0x1009ac388*/
    v9[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1009ac396*/
    v9[2] = &v12; /*0x1009ac3a4*/
    v9[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x1009ac3b2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v11, byte_1016FB667, (unsigned __int64)v9); /*0x1009ac3ce*/
    if ( 2 * v19 ) /*0x1009ac3da*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ac3ef*/
    a1[3] = v11[2]; /*0x1009ac3fb*/
    v6 = v11[0]; /*0x1009ac3ff*/
    a1[2] = v11[1]; /*0x1009ac40d*/
    a1[1] = v6; /*0x1009ac411*/
    *a1 = 9; /*0x1009ac415*/
    if ( v27 ) /*0x1009ac426*/
      LOBYTE(v6) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ac434*/
    if ( v30 ) /*0x1009ac440*/
LABEL_19:
      LOBYTE(v6) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ac482*/
  }
  else
  {
    *a1 = 10; /*0x1009ac44c*/
    if ( v27 ) /*0x1009ac45d*/
      LOBYTE(v6) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ac46b*/
    if ( v30 ) /*0x1009ac477*/
      goto LABEL_19; /*0x1009ac477*/
  }
  return v6; /*0x1009ac487*/
}