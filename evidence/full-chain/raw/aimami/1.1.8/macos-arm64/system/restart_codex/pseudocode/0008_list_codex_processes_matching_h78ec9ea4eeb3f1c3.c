// codexmate_lib::platform::process::list_codex_processes_matching @ 0x1001c13b0
// session <审计会话> | AiMaMi 1.1.8 macos-arm64 (universal Mach-O, x86_64 slice; app-level facts only, arch noise filtered)
// role in restart_codex(20/29) call tree; source=ida.decompile, 反编译器 real body, no truncation

double __fastcall codexmate_lib::platform::process::list_codex_processes_matching::h78ec9ea4eeb3f1c3(
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
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 (__fastcall *v13)(); // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(); // r14
  __int64 (__fastcall *v18)(); // r15
  __int64 v19; // rax
  __int64 *v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-250h] BYREF
  __int64 v22; // [rsp+8h] [rbp-248h]
  __int64 v23; // [rsp+10h] [rbp-240h]
  _QWORD v24[8]; // [rsp+C8h] [rbp-188h] BYREF
  char v25; // [rsp+108h] [rbp-148h]
  __int16 v26; // [rsp+110h] [rbp-140h]
  _QWORD v27[3]; // [rsp+118h] [rbp-138h] BYREF
  _QWORD v28[3]; // [rsp+130h] [rbp-120h] BYREF
  __int64 v29; // [rsp+148h] [rbp-108h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+150h] [rbp-100h]
  __int64 v31; // [rsp+158h] [rbp-F8h]
  __int64 v32; // [rsp+160h] [rbp-F0h]
  __int64 v33; // [rsp+168h] [rbp-E8h]
  __int64 v34; // [rsp+170h] [rbp-E0h]
  __int64 v35; // [rsp+178h] [rbp-D8h]
  __int64 *v36; // [rsp+180h] [rbp-D0h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+188h] [rbp-C8h]
  __int64 v38; // [rsp+190h] [rbp-C0h]
  __int64 v39; // [rsp+198h] [rbp-B8h]
  __int64 v40; // [rsp+1A0h] [rbp-B0h]
  __int64 v41; // [rsp+1A8h] [rbp-A8h]
  __int64 v42; // [rsp+1B0h] [rbp-A0h]
  __int64 (__fastcall *v43)(); // [rsp+1B8h] [rbp-98h] BYREF
  __int64 *v44; // [rsp+1C0h] [rbp-90h]
  __int64 (__fastcall *v45)(); // [rsp+1C8h] [rbp-88h]
  __int64 v46; // [rsp+1D0h] [rbp-80h]
  __int64 v47; // [rsp+1D8h] [rbp-78h]
  __int64 v48; // [rsp+1E0h] [rbp-70h]
  __int64 v49; // [rsp+1E8h] [rbp-68h]
  __int64 v50; // [rsp+1F0h] [rbp-60h]
  __int64 *v51; // [rsp+1F8h] [rbp-58h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+200h] [rbp-50h]
  __int64 v53; // [rsp+208h] [rbp-48h]
  __int64 v54; // [rsp+210h] [rbp-40h]
  __int64 v55; // [rsp+218h] [rbp-38h]
  __int64 v56; // [rsp+220h] [rbp-30h]
  __int64 v57; // [rsp+228h] [rbp-28h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001c13db*/
    &v21,
    "ps-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
    2,
    a4);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v21, "-axpid=,command=-t-- | ", 3); /*0x1001c13ef*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001c1407*/
    &v21,
    "-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
    2);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v21, "pid=,command=-t-- | ", 13); /*0x1001c141f*/
  std::process::Command::output::h737eedd4de2ee22e(&v36, &v21); /*0x1001c1432*/
  if ( __OFSUB__(0, v36) )
  {
    v43 = v37; /*0x1001c144d*/
    v51 = (__int64 *)&v43; /*0x1001c145b*/
    v52 = (__int64 (__fastcall *)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1001c1466*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v27, "\vps failed: \xC0\xC0\xC0", &v51);
    v51 = (__int64 *)v27[0]; /*0x1001c148f*/
    v52 = (__int64 (__fastcall *)())v27[1]; /*0x1001c1493*/
    v53 = v27[2]; /*0x1001c149e*/
    if ( ((unsigned __int8)v43 & 3) == 1 ) /*0x1001c14b1*/
    {
      v4 = (char *)v43 - 1; /*0x1001c14b3*/
      v5 = *(_QWORD *)((char *)v43 - 1); /*0x1001c14b7*/
      v6 = *(_QWORD *)((char *)v43 + 7); /*0x1001c14bb*/
      if ( *(_QWORD *)v6 ) /*0x1001c14bf*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x1001c14cb*/
      v7 = *(_QWORD *)(v6 + 8); /*0x1001c14cd*/
      if ( v7 ) /*0x1001c14d5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x1001c14df*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x1001c14f1*/
    }
    v29 = (__int64)v51; /*0x1001c14fe*/
    v30 = v52; /*0x1001c1505*/
    v31 = v53; /*0x1001c1510*/
    v32 = v54; /*0x1001c151b*/
    v33 = v55; /*0x1001c1526*/
    v34 = v56; /*0x1001c1531*/
    v35 = v57; /*0x1001c153c*/
    v50 = v57; /*0x1001c1543*/
    v49 = v56; /*0x1001c1547*/
    v48 = v55; /*0x1001c154b*/
    v47 = v54; /*0x1001c154f*/
    v46 = v53; /*0x1001c1553*/
    v45 = v52; /*0x1001c1557*/
    v44 = v51; /*0x1001c155e*/
    a1[7] = v57; /*0x1001c1569*/
    a1[6] = v49; /*0x1001c1571*/
    a1[5] = v48; /*0x1001c1579*/
    a1[4] = v47; /*0x1001c1581*/
    a1[3] = v46; /*0x1001c1589*/
    v9 = v44; /*0x1001c158d*/
    a1[2] = v45; /*0x1001c159b*/
    a1[1] = v9; /*0x1001c159f*/
    *a1 = 9; /*0x1001c15a3*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v21); /*0x1001c15b1*/
    return result; /*0x1001c15b6*/
  }
  v35 = v42; /*0x1001c15c2*/
  v34 = v41; /*0x1001c15d0*/
  v33 = v40; /*0x1001c15de*/
  v10 = v39; /*0x1001c15e5*/
  v32 = v39; /*0x1001c15ec*/
  v44 = v36; /*0x1001c1608*/
  v45 = v37; /*0x1001c160f*/
  v46 = v38; /*0x1001c1616*/
  v47 = v39; /*0x1001c161a*/
  v48 = v40; /*0x1001c161e*/
  v49 = v41; /*0x1001c1622*/
  v50 = v42; /*0x1001c1626*/
  v57 = v42; /*0x1001c162e*/
  v56 = v41; /*0x1001c1636*/
  v55 = v40; /*0x1001c163e*/
  v54 = v39; /*0x1001c1646*/
  v53 = v38; /*0x1001c164e*/
  v52 = v37; /*0x1001c1660*/
  v51 = v36; /*0x1001c1664*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v21); /*0x1001c166f*/
  if ( !(_DWORD)v57 ) /*0x1001c1678*/
  {
    LODWORD(v29) = std::process::id::ha72f58ec62264e78(&v21, v10); /*0x1001c176e*/
    v17 = v52; /*0x1001c1774*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v36, v52, v53); /*0x1001c1786*/
    v18 = v37; /*0x1001c178b*/
    v24[1] = 0; /*0x1001c1799*/
    v24[2] = v38; /*0x1001c17a4*/
    v24[3] = v37; /*0x1001c17ab*/
    v24[4] = v38; /*0x1001c17b2*/
    v24[5] = 0; /*0x1001c17b9*/
    v24[6] = v38; /*0x1001c17c4*/
    v24[7] = 0xA0000000ALL; /*0x1001c17d5*/
    v25 = 1; /*0x1001c17dc*/
    v26 = 0; /*0x1001c17e3*/
    v24[0] = &v29; /*0x1001c17f3*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h690961e91a7d59f1( /*0x1001c1808*/
      &v21,
      v24);
    a1[3] = v23; /*0x1001c1814*/
    v19 = v21; /*0x1001c1818*/
    a1[2] = v22; /*0x1001c1826*/
    a1[1] = v19; /*0x1001c182a*/
    *a1 = 10; /*0x1001c182e*/
    if ( 2LL * (_QWORD)v36 ) /*0x1001c183c*/
    {
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v36, 1); /*0x1001c188e*/
      v20 = v51; /*0x1001c1893*/
      if ( !v51 ) /*0x1001c189a*/
        goto LABEL_19; /*0x1001c189a*/
    }
    else
    {
      v20 = v51; /*0x1001c1849*/
      if ( !v51 ) /*0x1001c1850*/
      {
LABEL_19:
        v15 = v54; /*0x1001c185f*/
        if ( !v54 ) /*0x1001c1866*/
          return result; /*0x1001c1866*/
        v16 = v55; /*0x1001c1868*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1001c1868*/
      }
    }
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v20, 1); /*0x1001c185a*/
    goto LABEL_19; /*0x1001c185a*/
  }
  v11 = v55; /*0x1001c167e*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v21, v55, v56); /*0x1001c1690*/
  v12 = v22; /*0x1001c1695*/
  v29 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v22, v23); /*0x1001c16ab*/
  v30 = v13; /*0x1001c16b2*/
  v36 = &v29; /*0x1001c16c0*/
  v37 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1001c16ce*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v28, "\vps failed: \xC0\xC0\xC0", &v36);
  if ( 2 * v21 ) /*0x1001c16f6*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v21, 1); /*0x1001c170b*/
  a1[3] = v28[2]; /*0x1001c1717*/
  v14 = v28[0]; /*0x1001c171b*/
  a1[2] = v28[1]; /*0x1001c1729*/
  a1[1] = v14; /*0x1001c172d*/
  *a1 = 9; /*0x1001c1731*/
  if ( v51 ) /*0x1001c173f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x1001c174a*/
  v15 = v54; /*0x1001c174f*/
  if ( v54 ) /*0x1001c1756*/
  {
    v16 = v11; /*0x1001c1761*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1001c1871*/
  }
  return result; /*0x1001c1876*/
}
