// codexmate_lib::platform::process::request_codex_app_quit @ 0x1001c0860
// session <审计会话> | AiMaMi 1.1.8 macos-arm64 (universal Mach-O, x86_64 slice; app-level facts only, arch noise filtered)
// role in restart_codex(20/29) call tree; source=ida.decompile, 反编译器 real body, no truncation

double __fastcall codexmate_lib::platform::process::request_codex_app_quit::h7287a6577520f290(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  double result; // xmm0_8
  __int64 *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 (__fastcall *v12)(); // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // [rsp+0h] [rbp-200h] BYREF
  __int64 v17; // [rsp+8h] [rbp-1F8h]
  __int64 v18; // [rsp+10h] [rbp-1F0h]
  _QWORD v19[3]; // [rsp+C8h] [rbp-138h] BYREF
  _QWORD v20[3]; // [rsp+E0h] [rbp-120h] BYREF
  __int64 *v21; // [rsp+F8h] [rbp-108h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+100h] [rbp-100h]
  __int64 v23; // [rsp+108h] [rbp-F8h]
  __int64 v24; // [rsp+110h] [rbp-F0h]
  __int64 v25; // [rsp+118h] [rbp-E8h]
  __int64 v26; // [rsp+120h] [rbp-E0h]
  __int64 v27; // [rsp+128h] [rbp-D8h]
  __int64 v28; // [rsp+130h] [rbp-D0h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+138h] [rbp-C8h]
  __int64 v30; // [rsp+140h] [rbp-C0h]
  __int64 v31; // [rsp+148h] [rbp-B8h]
  __int64 v32; // [rsp+150h] [rbp-B0h]
  __int64 v33; // [rsp+158h] [rbp-A8h]
  __int64 v34; // [rsp+160h] [rbp-A0h]
  __int64 (__fastcall *v35)(); // [rsp+168h] [rbp-98h] BYREF
  __int64 *v36; // [rsp+170h] [rbp-90h]
  __int64 (__fastcall *v37)(); // [rsp+178h] [rbp-88h]
  __int64 v38; // [rsp+180h] [rbp-80h]
  __int64 v39; // [rsp+188h] [rbp-78h]
  __int64 v40; // [rsp+190h] [rbp-70h]
  __int64 v41; // [rsp+198h] [rbp-68h]
  __int64 v42; // [rsp+1A0h] [rbp-60h]
  __int64 *v43; // [rsp+1A8h] [rbp-58h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+1B0h] [rbp-50h]
  __int64 v45; // [rsp+1B8h] [rbp-48h]
  __int64 v46; // [rsp+1C0h] [rbp-40h]
  __int64 v47; // [rsp+1C8h] [rbp-38h]
  __int64 v48; // [rsp+1D0h] [rbp-30h]
  __int64 v49; // [rsp+1D8h] [rbp-28h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001c088b*/
    &v16,
    "osascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
    9,
    a4);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001c089f*/
    &v16,
    "-etell application \"Codex\" to quitCodex.app/Codex Helper",
    2);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001c08b7*/
    &v16,
    "tell application \"Codex\" to quitCodex.app/Codex Helper",
    32);
  std::process::Command::output::h737eedd4de2ee22e(&v21, &v16); /*0x1001c08ca*/
  if ( __OFSUB__(0, v21) )
  {
    v35 = v22; /*0x1001c08e5*/
    v43 = (__int64 *)&v35; /*0x1001c08f3*/
    v44 = (__int64 (__fastcall *)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1001c08fe*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(
      v19,
      "\x1Dosascript quit Codex failed: \xC0\vps failed: \xC0\xC0\xC0",
      &v43);
    v43 = (__int64 *)v19[0]; /*0x1001c0927*/
    v44 = (__int64 (__fastcall *)())v19[1]; /*0x1001c092b*/
    v45 = v19[2]; /*0x1001c0936*/
    if ( ((unsigned __int8)v35 & 3) == 1 ) /*0x1001c0949*/
    {
      v4 = (char *)v35 - 1; /*0x1001c094b*/
      v5 = *(_QWORD *)((char *)v35 - 1); /*0x1001c094f*/
      v6 = *(_QWORD *)((char *)v35 + 7); /*0x1001c0953*/
      if ( *(_QWORD *)v6 ) /*0x1001c0957*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x1001c0963*/
      v7 = *(_QWORD *)(v6 + 8); /*0x1001c0965*/
      if ( v7 ) /*0x1001c096d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x1001c0977*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x1001c0989*/
    }
    v28 = (__int64)v43; /*0x1001c0996*/
    v29 = v44; /*0x1001c099d*/
    v30 = v45; /*0x1001c09a8*/
    v31 = v46; /*0x1001c09b3*/
    v32 = v47; /*0x1001c09be*/
    v33 = v48; /*0x1001c09c9*/
    v34 = v49; /*0x1001c09d4*/
    v42 = v49; /*0x1001c09db*/
    v41 = v48; /*0x1001c09df*/
    v40 = v47; /*0x1001c09e3*/
    v39 = v46; /*0x1001c09e7*/
    v38 = v45; /*0x1001c09eb*/
    v37 = v44; /*0x1001c09ef*/
    v36 = v43; /*0x1001c09f6*/
    a1[7] = v49; /*0x1001c0a01*/
    a1[6] = v41; /*0x1001c0a09*/
    a1[5] = v40; /*0x1001c0a11*/
    a1[4] = v39; /*0x1001c0a19*/
    a1[3] = v38; /*0x1001c0a21*/
    v9 = v36; /*0x1001c0a25*/
    a1[2] = v37; /*0x1001c0a33*/
    a1[1] = v9; /*0x1001c0a37*/
    *a1 = 9; /*0x1001c0a3b*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v16); /*0x1001c0a49*/
    return result; /*0x1001c0a4e*/
  }
  v34 = v27; /*0x1001c0a5a*/
  v33 = v26; /*0x1001c0a68*/
  v32 = v25; /*0x1001c0a76*/
  v31 = v24; /*0x1001c0a84*/
  v36 = v21; /*0x1001c0aa0*/
  v37 = v22; /*0x1001c0aa7*/
  v38 = v23; /*0x1001c0aae*/
  v39 = v24; /*0x1001c0ab2*/
  v40 = v25; /*0x1001c0ab6*/
  v41 = v26; /*0x1001c0aba*/
  v42 = v27; /*0x1001c0abe*/
  v49 = v27; /*0x1001c0ac6*/
  v48 = v26; /*0x1001c0ace*/
  v47 = v25; /*0x1001c0ad6*/
  v46 = v24; /*0x1001c0ade*/
  v45 = v23; /*0x1001c0ae6*/
  v44 = v22; /*0x1001c0af8*/
  v43 = v21; /*0x1001c0afc*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v16); /*0x1001c0b07*/
  if ( (_DWORD)v49 )
  {
    v10 = v47; /*0x1001c0b16*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v16, v47, v48); /*0x1001c0b28*/
    v11 = v17; /*0x1001c0b2d*/
    v28 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v17, v18); /*0x1001c0b43*/
    v29 = v12; /*0x1001c0b4a*/
    v21 = &v28; /*0x1001c0b58*/
    v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1001c0b66*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(
      v20,
      "\x1Dosascript quit Codex failed: \xC0\vps failed: \xC0\xC0\xC0",
      &v21);
    if ( 2 * v16 ) /*0x1001c0b8e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v16, 1); /*0x1001c0ba3*/
    a1[3] = v20[2]; /*0x1001c0baf*/
    v13 = v20[0]; /*0x1001c0bb3*/
    a1[2] = v20[1]; /*0x1001c0bc1*/
    a1[1] = v13; /*0x1001c0bc5*/
    *a1 = 9; /*0x1001c0bc9*/
    if ( v43 ) /*0x1001c0bd7*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v43, 1); /*0x1001c0be2*/
    v14 = v46; /*0x1001c0be7*/
    if ( v46 ) /*0x1001c0bee*/
    {
      v15 = v10; /*0x1001c0bf5*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v14, 1); /*0x1001c0c2a*/
    }
  }
  else
  {
    *a1 = 10; /*0x1001c0bfa*/
    if ( v43 ) /*0x1001c0c08*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v43, 1); /*0x1001c0c13*/
    v14 = v46; /*0x1001c0c18*/
    if ( v46 ) /*0x1001c0c1f*/
    {
      v15 = v47; /*0x1001c0c21*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v14, 1); /*0x1001c0c21*/
    }
  }
  return result; /*0x1001c0c2f*/
}
