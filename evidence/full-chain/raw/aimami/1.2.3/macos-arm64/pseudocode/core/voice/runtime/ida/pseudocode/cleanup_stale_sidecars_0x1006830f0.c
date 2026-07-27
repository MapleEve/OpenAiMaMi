// __ZN13codexmate_lib4core5voice7runtime22cleanup_stale_sidecars @ 0x1006830f0 | 基线 same-set
double codexmate_lib::core::voice::runtime::cleanup_stale_sidecars::h1b663591c5b98611()
{
  __int64 *v0; // rbx
  char *v1; // r14
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rsi
  double result; // xmm0_8
  unsigned int *v6; // rsi
  __int64 (__fastcall *v7)(); // rdi
  __int64 (__fastcall *v8)(); // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  size_t v15; // r13
  const void *v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // rsi
  _QWORD *v22; // rsi
  __int64 v23; // [rsp+8h] [rbp-1B8h] BYREF
  char *v24; // [rsp+10h] [rbp-1B0h]
  __int64 v25; // [rsp+18h] [rbp-1A8h]
  char *v26; // [rsp+20h] [rbp-1A0h]
  const char *v27; // [rsp+28h] [rbp-198h]
  __int64 v28; // [rsp+30h] [rbp-190h]
  __int64 v29; // [rsp+38h] [rbp-188h]
  char *v30; // [rsp+40h] [rbp-180h]
  __int64 v31; // [rsp+48h] [rbp-178h]
  __int64 v32; // [rsp+50h] [rbp-170h]
  char *v33; // [rsp+58h] [rbp-168h]
  unsigned int **v34; // [rsp+60h] [rbp-160h]
  __int64 v35; // [rsp+D0h] [rbp-F0h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-E8h]
  char *v37; // [rsp+E0h] [rbp-E0h]
  __int64 (__fastcall *v38)(); // [rsp+E8h] [rbp-D8h]
  unsigned int *v39; // [rsp+F0h] [rbp-D0h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+F8h] [rbp-C8h]
  __int64 v41; // [rsp+100h] [rbp-C0h]
  __int64 v42; // [rsp+108h] [rbp-B8h]
  __int64 v43; // [rsp+110h] [rbp-B0h]
  __int64 v44; // [rsp+118h] [rbp-A8h]
  __int64 v45; // [rsp+120h] [rbp-A0h]
  unsigned int *v46; // [rsp+128h] [rbp-98h]
  __int64 (__fastcall *v47)(); // [rsp+130h] [rbp-90h]
  __int64 v48; // [rsp+138h] [rbp-88h]
  __int64 v49; // [rsp+140h] [rbp-80h]
  __int64 v50; // [rsp+148h] [rbp-78h]
  __int64 v51; // [rsp+150h] [rbp-70h]
  __int64 v52; // [rsp+158h] [rbp-68h]
  char v53[4]; // [rsp+160h] [rbp-60h] BYREF
  int v54; // [rsp+164h] [rbp-5Ch]
  __int64 v55; // [rsp+168h] [rbp-58h]
  __int64 v56; // [rsp+170h] [rbp-50h]
  __int64 v57; // [rsp+178h] [rbp-48h]
  unsigned int v58; // [rsp+180h] [rbp-40h] BYREF
  char v59; // [rsp+187h] [rbp-39h] BYREF
  unsigned int *v60; // [rsp+188h] [rbp-38h]
  __int64 (__fastcall *v61)(); // [rsp+190h] [rbp-30h]

  v0 = &v23; /*0x10068310b*/
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v23, &unk_101603048, 2); /*0x10068311a*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v23, "-axokillrgbablueIpv4Ipv6", 4); /*0x10068312e*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v23, &unk_10160304A, 19); /*0x100683146*/
  std::process::Command::output::h737eedd4de2ee22e(&v39, &v23); /*0x100683159*/
  if ( __OFSUB__(0, v39) ) /*0x100683160*/
  {
    if ( ((unsigned __int8)v40 & 3) == 1 ) /*0x100683178*/
    {
      v1 = (char *)v40 - 1; /*0x10068317a*/
      v2 = *(_QWORD *)((char *)v40 - 1); /*0x10068317e*/
      v3 = *(_QWORD *)((char *)v40 + 7); /*0x100683182*/
      if ( *(_QWORD *)v3 ) /*0x100683186*/
        (*(void (__fastcall **)(__int64))v3)(v2); /*0x100683192*/
      v4 = *(_QWORD *)(v3 + 8); /*0x100683194*/
      if ( v4 ) /*0x10068319c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, *(_QWORD *)(v3 + 16)); /*0x1006831a6*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24, 8); /*0x1006831b8*/
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v23); /*0x1006831c4*/
    return result; /*0x1006831c9*/
  }
  v52 = v45; /*0x1006831d5*/
  v51 = v44; /*0x1006831e0*/
  v50 = v43; /*0x1006831eb*/
  v49 = v42; /*0x1006831f6*/
  v48 = v41; /*0x100683201*/
  v47 = v40; /*0x100683216*/
  v46 = v39; /*0x10068321d*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v23); /*0x10068322b*/
  if ( (_DWORD)v52 ) /*0x100683234*/
  {
    v6 = v46; /*0x100683236*/
    if ( !v46 ) /*0x100683240*/
      goto LABEL_13; /*0x100683240*/
    v7 = v47; /*0x100683242*/
  }
  else
  {
    v38 = v47; /*0x100683291*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v35, v47, v48); /*0x100683298*/
    v23 = 0; /*0x1006832ab*/
    v24 = v37; /*0x1006832b6*/
    v56 = v36; /*0x1006832bd*/
    v25 = v36; /*0x1006832c1*/
    v26 = v37; /*0x1006832c8*/
    v27 = nullptr; /*0x1006832cf*/
    v28 = (__int64)v37; /*0x1006832da*/
    v29 = 0xA0000000ALL; /*0x1006832eb*/
    LOBYTE(v30) = 1; /*0x1006832f2*/
    LOWORD(v31) = 0; /*0x1006832f9*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::had649616619868cd( /*0x100683310*/
      &v39,
      &v23);
    v60 = v39; /*0x10068331c*/
    v8 = v40; /*0x100683320*/
    if ( v41 ) /*0x100683331*/
    {
      v9 = 4 * v41; /*0x100683337*/
      v10 = 0; /*0x100683349*/
      v61 = v40; /*0x10068334b*/
      while ( 1 ) /*0x10068334f*/
      {
        v11 = v10; /*0x10068334f*/
        v58 = *(_DWORD *)((char *)v8 + v10); /*0x100683356*/
        std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v23, "killrgbablueIpv4Ipv6", 4); /*0x10068335e*/
        v12 = v58; /*0x100683363*/
        v13 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::h94ede26950885649(v58, &v39, 10); /*0x100683372*/
        v15 = v14; /*0x100683377*/
        if ( v14 < 0 ) /*0x10068337d*/
          break; /*0x10068337d*/
        v16 = (const void *)v13; /*0x100683383*/
        if ( v14 ) /*0x100683389*/
        {
          v57 = v9; /*0x10068338b*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, &v39); /*0x10068338f*/
          v17 = 1; /*0x100683394*/
          v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x1006833a1*/
          if ( !v18 ) /*0x1006833a9*/
          {
            v22 = (_QWORD *)v15; /*0x100683600*/
LABEL_43:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, v22); /*0x1006835ee*/
          }
          v9 = v57; /*0x1006833af*/
        }
        else
        {
          v18 = 1; /*0x1006833b5*/
        }
        v0 = (__int64 *)v18; /*0x1006833ba*/
        memcpy((void *)v18, v16, v15); /*0x1006833c6*/
        std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v23, &unk_10160305D, 5); /*0x1006833e1*/
        std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v23, v0, v15); /*0x1006833ef*/
        std::process::Command::status::haba8d8d8e1972e1a(v53, &v23); /*0x1006833fb*/
        if ( v15 ) /*0x100683403*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v0, v15, 1); /*0x100683410*/
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v23); /*0x100683418*/
        v8 = v61; /*0x100683421*/
        if ( (v53[0] & 1) != 0 ) /*0x10068342c*/
        {
          if ( (v55 & 3) == 1 ) /*0x10068343a*/
          {
            v57 = v55 - 1; /*0x100683444*/
            v19 = *(_QWORD *)(v55 - 1); /*0x100683448*/
            v20 = *(_QWORD *)(v55 + 7); /*0x10068344c*/
            if ( *(_QWORD *)v20 ) /*0x100683450*/
              (*(void (__fastcall **)(__int64, char *))v20)(v19, "killrgbablueIpv4Ipv6"); /*0x10068345c*/
            v21 = *(_QWORD *)(v20 + 8); /*0x10068345e*/
            if ( v21 ) /*0x100683465*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v21, *(_QWORD *)(v20 + 16)); /*0x10068346e*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, 24, 8); /*0x100683481*/
            v8 = v61; /*0x100683486*/
          }
        }
        else if ( !v54 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x1006834ae*/
        {
          v39 = &v58; /*0x1006834bb*/
          v40 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x1006834c9*/
          v29 = 2; /*0x1006834d0*/
          v30 = "codexmate_lib::core::voice::runtimestandby"; /*0x1006834e2*/
          v31 = 35; /*0x1006834e9*/
          v33 = (char *)&loc_1017C2F6E + 1; /*0x1006834fb*/
          v34 = &v39; /*0x100683509*/
          v23 = 0; /*0x100683510*/
          v24 = "codexmate_lib::core::voice::runtimestandby"; /*0x10068351b*/
          v25 = 35; /*0x100683522*/
          v26 = nullptr; /*0x10068352d*/
          v27 = "src/core/voice/runtime/mod.rs"; /*0x10068353f*/
          v28 = 29; /*0x100683546*/
          v32 = 0x2D300000001LL; /*0x10068355b*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v59, &v23); /*0x10068356d*/
        }
        v10 = v11 + 4; /*0x100683578*/
        if ( v9 == v11 + 4 ) /*0x100683586*/
          goto LABEL_36; /*0x100683586*/
      }
      v22 = v0; /*0x1006835e9*/
      v17 = 0; /*0x1006835ec*/
      goto LABEL_43; /*0x1006835ec*/
    }
LABEL_36:
    if ( v60 ) /*0x100683593*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 4LL * (_QWORD)v60, 4); /*0x1006835a1*/
    if ( 2 * v35 ) /*0x1006835ad*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v35, 1); /*0x1006835c3*/
    v6 = v46; /*0x1006835c8*/
    if ( !v46 ) /*0x1006835d2*/
      goto LABEL_13; /*0x1006835d2*/
    v7 = v38; /*0x1006835dd*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x10068324e*/
LABEL_13:
  if ( v49 ) /*0x10068325a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x100683265*/
  return result; /*0x10068326a*/
}