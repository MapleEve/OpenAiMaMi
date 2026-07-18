// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x1009aced0 d=4
unsigned __int8 __fastcall codexmate_lib::platform::process::read_macos_bundle_value::h6eb011077c5e814c(
        size_t *a1,
        const void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5)
{
  size_t v7; // r14
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int8 result; // al
  size_t v11; // r14
  void *v12; // rax
  __int64 v13; // rdx
  size_t v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // [rsp+0h] [rbp-190h] BYREF
  __int64 v19; // [rsp+8h] [rbp-188h]
  size_t v20; // [rsp+10h] [rbp-180h]
  __int64 v21; // [rsp+18h] [rbp-178h]
  __int64 v22; // [rsp+20h] [rbp-170h]
  __int64 v23; // [rsp+28h] [rbp-168h]
  __int64 v24; // [rsp+30h] [rbp-160h]
  unsigned __int64 v25; // [rsp+38h] [rbp-158h] BYREF
  unsigned __int8 *v26; // [rsp+40h] [rbp-150h]
  __int64 v27; // [rsp+48h] [rbp-148h]
  size_t v28[4]; // [rsp+100h] [rbp-90h] BYREF
  void *__src; // [rsp+120h] [rbp-70h]
  __int64 v30; // [rsp+128h] [rbp-68h]
  __int64 v31; // [rsp+130h] [rbp-60h]
  size_t v32; // [rsp+138h] [rbp-58h]
  __int64 v33; // [rsp+140h] [rbp-50h]
  __int64 v34; // [rsp+148h] [rbp-48h]
  __int64 v35; // [rsp+150h] [rbp-40h]
  __int64 v36; // [rsp+158h] [rbp-38h]
  unsigned __int8 *v37; // [rsp+160h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(v28, a2, a3, "Contents/Info.plist/usr/bin/plutilraw", 0x13u); /*0x1009acf01*/
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379((__int64)&v25, "/usr/bin/plutilraw", 0xFu); /*0x1009acf19*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1009acf34*/
    (__int64)&v25,
    (__int64)"-extractTimedOutsegmentsoriginal------------------------",
    8);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0((__int64)&v25, a4, a5); /*0x1009acf46*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0((__int64)&v25, (__int64)"raw", 3); /*0x1009acf5e*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1009acf76*/
    (__int64)&v25,
    (__int64)"-ocodexmate_lib::platform::process",
    2);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0((__int64)&v25, (__int64)"-voice-audio-level", 1); /*0x1009acf8e*/
  v7 = v28[0]; /*0x1009acf93*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0((__int64)&v25, v28[1], v28[2]); /*0x1009acfaf*/
  if ( v7 ) /*0x1009acfb7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009acfc4*/
  std::process::Command::output::h737eedd4de2ee22e((__int64)&v18, (__int64)&v25); /*0x1009acfda*/
  v8 = v18; /*0x1009acfe9*/
  if ( __OFSUB__(-v18, 1) ) /*0x1009acff3*/
  {
    if ( (v19 & 3) == 1 ) /*0x1009ad007*/
    {
      v9 = *(_QWORD *)(v19 + 7); /*0x1009ad011*/
      if ( *(_QWORD *)v9 ) /*0x1009ad015*/
        (*(void (__fastcall **)(_QWORD))v9)(*(_QWORD *)(v19 - 1)); /*0x1009ad021*/
      if ( *(_QWORD *)(v9 + 8) ) /*0x1009ad023*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad033*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad045*/
    }
    *a1 = 0x8000000000000000LL; /*0x1009ad04a*/
    return core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758((__int64)&v25); /*0x1009ad059*/
  }
  v36 = v24; /*0x1009ad069*/
  v35 = v23; /*0x1009ad071*/
  v34 = v22; /*0x1009ad079*/
  v33 = v21; /*0x1009ad081*/
  v32 = v20; /*0x1009ad08c*/
  v31 = v19; /*0x1009ad090*/
  v30 = v18; /*0x1009ad094*/
  result = core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758((__int64)&v25); /*0x1009ad09f*/
  if ( !(_DWORD)v36 ) /*0x1009ad0a8*/
  {
    v11 = v31; /*0x1009ad0e3*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v25, v31, v32); /*0x1009ad0f5*/
    v37 = v26; /*0x1009ad108*/
    v12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(v26, v27); /*0x1009ad10c*/
    v14 = v13; /*0x1009ad111*/
    if ( v13 < 0 ) /*0x1009ad117*/
    {
      v15 = 0; /*0x1009ad119*/
      goto LABEL_18; /*0x1009ad119*/
    }
    if ( v13 ) /*0x1009ad12c*/
    {
      __src = v12; /*0x1009ad12e*/
      v28[3] = v11; /*0x1009ad132*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009ad136*/
      v15 = 1; /*0x1009ad13b*/
      v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1u); /*0x1009ad149*/
      if ( !v16 ) /*0x1009ad151*/
LABEL_18:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15); /*0x1009ad11c*/
      v17 = v16; /*0x1009ad153*/
      v12 = __src; /*0x1009ad15a*/
    }
    else
    {
      v17 = 1; /*0x1009ad160*/
    }
    memcpy((void *)v17, v12, v14); /*0x1009ad16f*/
    *a1 = v14; /*0x1009ad174*/
    a1[1] = v17; /*0x1009ad177*/
    a1[2] = v14; /*0x1009ad17b*/
    if ( v8 ) /*0x1009ad182*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad18f*/
    if ( v33 ) /*0x1009ad19b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad1a6*/
    result = 2 * v25; /*0x1009ad1b2*/
    if ( 2 * v25 ) /*0x1009ad1b2*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad1bd*/
    return result; /*0x1009ad1bd*/
  }
  *a1 = 0x8000000000000000LL; /*0x1009ad0aa*/
  if ( v8 ) /*0x1009ad0b0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad0be*/
  if ( v33 ) /*0x1009ad0ca*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ad0d9*/
  return result; /*0x1009ad1bf*/
}