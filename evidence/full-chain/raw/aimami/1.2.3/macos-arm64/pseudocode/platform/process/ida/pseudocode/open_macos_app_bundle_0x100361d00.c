// __ZN13codexmate_lib8platform7process21open_macos_app_bundle @ 0x100361d00 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::open_macos_app_bundle::h55caa9f65d2a5407(
        _QWORD *a1,
        char **a2,
        char *a3)
{
  char *v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  char **v8; // rax
  __int64 result; // rax
  __int64 v10; // r14
  char *v11; // r15
  char *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  _QWORD v15[25]; // [rsp+0h] [rbp-200h] BYREF
  _QWORD v16[3]; // [rsp+C8h] [rbp-138h] BYREF
  _QWORD v17[3]; // [rsp+E0h] [rbp-120h] BYREF
  __int64 v18; // [rsp+F8h] [rbp-108h] BYREF
  char *v19; // [rsp+100h] [rbp-100h]
  __int64 v20; // [rsp+108h] [rbp-F8h]
  __int64 v21; // [rsp+110h] [rbp-F0h]
  __int64 v22; // [rsp+118h] [rbp-E8h]
  __int64 v23; // [rsp+120h] [rbp-E0h]
  __int64 v24; // [rsp+128h] [rbp-D8h]
  char **v25; // [rsp+130h] [rbp-D0h] BYREF
  char *v26; // [rsp+138h] [rbp-C8h]
  __int64 v27; // [rsp+140h] [rbp-C0h]
  __int64 v28; // [rsp+148h] [rbp-B8h]
  __int64 v29; // [rsp+150h] [rbp-B0h]
  __int64 v30; // [rsp+158h] [rbp-A8h]
  __int64 v31; // [rsp+160h] [rbp-A0h]
  char *v32; // [rsp+168h] [rbp-98h] BYREF
  char **v33; // [rsp+170h] [rbp-90h] BYREF
  char *v34; // [rsp+178h] [rbp-88h]
  __int64 v35; // [rsp+180h] [rbp-80h]
  __int64 v36; // [rsp+188h] [rbp-78h]
  __int64 v37; // [rsp+190h] [rbp-70h]
  __int64 v38; // [rsp+198h] [rbp-68h]
  __int64 v39; // [rsp+1A0h] [rbp-60h]
  char **v40; // [rsp+1A8h] [rbp-58h] BYREF
  char *v41; // [rsp+1B0h] [rbp-50h]
  __int64 v42; // [rsp+1B8h] [rbp-48h]
  __int64 v43; // [rsp+1C0h] [rbp-40h]
  __int64 v44; // [rsp+1C8h] [rbp-38h]
  __int64 v45; // [rsp+1D0h] [rbp-30h]
  __int64 v46; // [rsp+1D8h] [rbp-28h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x100361d31*/
    v15,
    "/usr/bin/openif application id \"com.openai.codex\" is running then\n"
    "    tell application id \"com.openai.codex\" to quit\n"
    "end if/codex framework.framework//contents/resources/native/bare-modifier-monitor",
    13);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v15, a2, a3); /*0x100361d3f*/
  std::process::Command::output::h737eedd4de2ee22e(&v25, v15); /*0x100361d52*/
  if ( __OFSUB__(0, v25) ) /*0x100361d59*/
  {
    v32 = v26; /*0x100361d6d*/
    v33 = &v32; /*0x100361d7b*/
    v34 = (char *)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100361d89*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v16, &unk_1017BD0FA, &v33); /*0x100361da5*/
    v33 = (char **)v16[0]; /*0x100361db8*/
    v34 = (char *)v16[1]; /*0x100361dbf*/
    v35 = v16[2]; /*0x100361dcd*/
    if ( ((unsigned __int8)v32 & 3) == 1 ) /*0x100361de0*/
    {
      v4 = v32 - 1; /*0x100361de2*/
      v5 = *(_QWORD *)(v32 - 1); /*0x100361de6*/
      v6 = *(_QWORD *)(v32 + 7); /*0x100361dea*/
      if ( *(_QWORD *)v6 ) /*0x100361dee*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x100361dfa*/
      v7 = *(_QWORD *)(v6 + 8); /*0x100361dfc*/
      if ( v7 ) /*0x100361e04*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x100361e0e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x100361e20*/
    }
    v18 = (__int64)v33; /*0x100361e33*/
    v19 = v34; /*0x100361e3a*/
    v20 = v35; /*0x100361e45*/
    v21 = v36; /*0x100361e50*/
    v22 = v37; /*0x100361e5b*/
    v23 = v38; /*0x100361e66*/
    v24 = v39; /*0x100361e71*/
    v46 = v39; /*0x100361e78*/
    v45 = v38; /*0x100361e7c*/
    v44 = v37; /*0x100361e80*/
    v43 = v36; /*0x100361e84*/
    v42 = v35; /*0x100361e88*/
    v41 = v34; /*0x100361e8c*/
    v40 = v33; /*0x100361e90*/
    a1[7] = v39; /*0x100361e98*/
    a1[6] = v45; /*0x100361ea0*/
    a1[5] = v44; /*0x100361ea8*/
    a1[4] = v43; /*0x100361eb0*/
    a1[3] = v42; /*0x100361eb8*/
    v8 = v40; /*0x100361ebc*/
    a1[2] = v41; /*0x100361ec4*/
    a1[1] = v8; /*0x100361ec8*/
    *a1 = 10; /*0x100361ecc*/
    return core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v15); /*0x100361edf*/
  }
  v24 = v31; /*0x100361eeb*/
  v23 = v30; /*0x100361ef9*/
  v22 = v29; /*0x100361f07*/
  v21 = v28; /*0x100361f15*/
  v40 = v25; /*0x100361f31*/
  v41 = v26; /*0x100361f35*/
  v42 = v27; /*0x100361f39*/
  v43 = v28; /*0x100361f3d*/
  v44 = v29; /*0x100361f41*/
  v45 = v30; /*0x100361f45*/
  v46 = v31; /*0x100361f49*/
  v39 = v31; /*0x100361f51*/
  v38 = v30; /*0x100361f59*/
  v37 = v29; /*0x100361f61*/
  v36 = v28; /*0x100361f69*/
  v35 = v27; /*0x100361f71*/
  v34 = v26; /*0x100361f7d*/
  v33 = v25; /*0x100361f84*/
  result = core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v15); /*0x100361f92*/
  if ( (_DWORD)v39 ) /*0x100361f9b*/
  {
    v40 = a2; /*0x100361fa1*/
    v41 = a3; /*0x100361fa5*/
    v10 = v37; /*0x100361fa9*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v25, v37, v38); /*0x100361fbb*/
    v11 = v26; /*0x100361fc0*/
    v18 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v26, v27); /*0x100361fd6*/
    v19 = v12; /*0x100361fdd*/
    v15[0] = &v40; /*0x100361fe8*/
    v15[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100361ff6*/
    v15[2] = &v18; /*0x100362004*/
    v15[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100362012*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v17, &unk_1017BD0DF, v15); /*0x10036202e*/
    if ( 2LL * (_QWORD)v25 ) /*0x10036203a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v25, 1); /*0x10036204f*/
    a1[3] = v17[2]; /*0x10036205b*/
    result = v17[0]; /*0x10036205f*/
    a1[2] = v17[1]; /*0x10036206d*/
    a1[1] = result; /*0x100362071*/
    *a1 = 10; /*0x100362075*/
    if ( v33 ) /*0x100362086*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x100362094*/
    v13 = v36; /*0x100362099*/
    if ( v36 ) /*0x1003620a0*/
    {
      v14 = v10; /*0x1003620a7*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x1003620e2*/
    }
  }
  else
  {
    *a1 = 11; /*0x1003620ac*/
    if ( v33 ) /*0x1003620bd*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x1003620cb*/
    v13 = v36; /*0x1003620d0*/
    if ( v36 ) /*0x1003620d7*/
    {
      v14 = v37; /*0x1003620d9*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x1003620d9*/
    }
  }
  return result; /*0x1003620e7*/
}