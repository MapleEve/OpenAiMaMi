// __ZN13codexmate_lib4core5relay12image_compat20image_compat_enabled @ 0x100323690 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::image_compat::image_compat_enabled::ha5a545e2067f03be(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // rsi
  void *v21; // r13
  size_t v22; // r12
  __int64 *v23; // rsi
  __int64 v24; // r8
  __int64 *v25; // rdi
  int v26; // eax
  char v27; // al
  int v28; // eax
  __int64 v30; // [rsp+8h] [rbp-298h] BYREF
  _QWORD __dst[17]; // [rsp+10h] [rbp-290h] BYREF
  __int64 v32; // [rsp+98h] [rbp-208h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-200h]
  _QWORD __src[17]; // [rsp+A8h] [rbp-1F8h] BYREF
  void *__s2; // [rsp+130h] [rbp-170h] BYREF
  __int64 v36; // [rsp+138h] [rbp-168h]
  char v37; // [rsp+140h] [rbp-160h]
  __int64 v38; // [rsp+141h] [rbp-15Fh]
  __int64 v39; // [rsp+149h] [rbp-157h]
  __int64 v40; // [rsp+151h] [rbp-14Fh]
  _BYTE v41[15]; // [rsp+159h] [rbp-147h]
  __int16 v42; // [rsp+168h] [rbp-138h]
  char v43; // [rsp+16Ah] [rbp-136h]
  void *__s1; // [rsp+170h] [rbp-130h] BYREF
  size_t __n; // [rsp+178h] [rbp-128h]
  char v46; // [rsp+180h] [rbp-120h]
  __int64 v47; // [rsp+181h] [rbp-11Fh]
  __int64 v48; // [rsp+189h] [rbp-117h]
  __int64 v49; // [rsp+191h] [rbp-10Fh]
  _BYTE v50[15]; // [rsp+199h] [rbp-107h]
  __int16 v51; // [rsp+1A8h] [rbp-F8h]
  char v52; // [rsp+1AAh] [rbp-F6h]
  __int64 *v53; // [rsp+1B0h] [rbp-F0h]
  __int64 v54; // [rsp+1B8h] [rbp-E8h]
  __int64 v55; // [rsp+1C0h] [rbp-E0h]
  __int64 v56; // [rsp+1C8h] [rbp-D8h]
  __int64 v57; // [rsp+1D0h] [rbp-D0h]
  _BYTE v58[15]; // [rsp+1D8h] [rbp-C8h]
  __int64 v59; // [rsp+1E8h] [rbp-B8h]
  __int64 v60; // [rsp+1F0h] [rbp-B0h]
  __int64 v61; // [rsp+1F8h] [rbp-A8h]
  _BYTE v62[15]; // [rsp+200h] [rbp-A0h]
  __int64 v63; // [rsp+210h] [rbp-90h] BYREF
  __int64 v64; // [rsp+218h] [rbp-88h]
  _BYTE v65[25]; // [rsp+220h] [rbp-80h]
  _BYTE v66[15]; // [rsp+239h] [rbp-67h]
  __int16 v67; // [rsp+248h] [rbp-58h]
  char v68; // [rsp+24Ah] [rbp-56h]
  __int64 v69; // [rsp+250h] [rbp-50h]
  __int64 v70; // [rsp+258h] [rbp-48h]
  __int64 v71; // [rsp+260h] [rbp-40h]
  __int64 v72; // [rsp+268h] [rbp-38h]
  int v73; // [rsp+274h] [rbp-2Ch]

  v4 = (__int64)a1; /*0x1003236b1*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v32, a1, a2); /*0x1003236b7*/
  v5 = v32; /*0x1003236bc*/
  v6 = v33; /*0x1003236c3*/
  if ( v32 != 1 ) /*0x1003236ce*/
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x100323721*/
    v4 = (__int64)&v30; /*0x100323726*/
    v30 = v33; /*0x10032372d*/
    std::fs::Metadata::modified::h0e075817eaa8c909(&v32, &v30); /*0x100323746*/
    v73 = v33; /*0x100323751*/
    v6 = v32; /*0x10032375c*/
    if ( (v32 & 3) == 1 && (_DWORD)v33 == 1000000000 ) /*0x100323759*/
    {
      v71 = v5; /*0x1003238a6*/
      v72 = v32 - 1; /*0x1003238ae*/
      v17 = *(_QWORD *)(v32 - 1); /*0x1003238b2*/
      v18 = v32; /*0x1003238b6*/
      v19 = *(_QWORD *)(v32 + 7); /*0x1003238b9*/
      if ( *(_QWORD *)v19 ) /*0x1003238bd*/
        (*(void (__fastcall **)(__int64))v19)(v17); /*0x1003238c9*/
      v20 = *(_QWORD *)(v19 + 8); /*0x1003238cb*/
      if ( v20 ) /*0x1003238d2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v20, *(_QWORD *)(v19 + 16)); /*0x1003238db*/
      v4 = 24; /*0x1003238e0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 24, 8); /*0x1003238ee*/
      v5 = v71; /*0x1003238f3*/
      v6 = v18; /*0x1003238f7*/
    }
    v72 = 1; /*0x10032377c*/
    v69 = __dst[11]; /*0x100323787*/
    if ( !qword_1019FEC70 ) /*0x100323795*/
      goto LABEL_7; /*0x100323795*/
LABEL_18:
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h1f787c9234e9aa54(); /*0x10032387d*/
    v7 = codexmate_lib::core::relay::image_compat::IMAGE_COMPAT_CACHE::haebb9032711654b0; /*0x100323882*/
    if ( codexmate_lib::core::relay::image_compat::IMAGE_COMPAT_CACHE::haebb9032711654b0 ) /*0x10032388c*/
      goto LABEL_8; /*0x10032388c*/
    goto LABEL_19; /*0x10032388c*/
  }
  v73 = 1000000000; /*0x1003236e1*/
  if ( (v33 & 3) == 1 ) /*0x1003236eb*/
  {
    v14 = v32; /*0x100323819*/
    v72 = v33 - 1; /*0x100323820*/
    v15 = *(_QWORD *)(v33 - 1); /*0x100323824*/
    v6 = *(_QWORD *)(v33 + 7); /*0x100323828*/
    if ( *(_QWORD *)v6 ) /*0x10032382c*/
      (*(void (__fastcall **)(__int64))v6)(v15); /*0x100323838*/
    v16 = *(_QWORD *)(v6 + 8); /*0x10032383a*/
    if ( v16 ) /*0x100323841*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v16, *(_QWORD *)(v6 + 16)); /*0x10032384a*/
    v4 = 24; /*0x10032384f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, 24, 8); /*0x10032385d*/
    v72 = 0; /*0x100323862*/
    v5 = v14; /*0x10032386a*/
    if ( !qword_1019FEC70 ) /*0x100323877*/
      goto LABEL_7; /*0x100323877*/
    goto LABEL_18; /*0x100323877*/
  }
  v72 = 0; /*0x1003236f1*/
  if ( qword_1019FEC70 ) /*0x100323703*/
    goto LABEL_18; /*0x100323703*/
LABEL_7:
  v7 = codexmate_lib::core::relay::image_compat::IMAGE_COMPAT_CACHE::haebb9032711654b0; /*0x10032379b*/
  if ( codexmate_lib::core::relay::image_compat::IMAGE_COMPAT_CACHE::haebb9032711654b0 ) /*0x1003237a5*/
    goto LABEL_8; /*0x1003237a5*/
LABEL_19:
  v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::core::relay::image_compat::IMAGE_COMPAT_CACHE::haebb9032711654b0); /*0x100323892*/
LABEL_8:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x1003237ab*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1003237ba*/
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, v4, v8, v9) ^ 1; /*0x100323907*/
    if ( byte_1019FEC28 ) /*0x100323914*/
    {
LABEL_10:
      if ( !v10 /*0x100323cd1*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v7,
                               v4,
                               v8,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        byte_1019FEC28 = 1; /*0x100323cde*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::core::relay::image_compat::IMAGE_COMPAT_CACHE::haebb9032711654b0); /*0x100323801*/
      return (unsigned int)codexmate_lib::core::relay::image_compat::read_image_compat_enabled::h8dc099761b0d7d30( /*0x100323814*/
                             a1,
                             a2,
                             v11,
                             v12);
    }
  }
  else
  {
    v10 = 0; /*0x1003237c6*/
    if ( byte_1019FEC28 ) /*0x1003237d2*/
      goto LABEL_10; /*0x1003237d2*/
  }
  if ( (_DWORD)qword_1019FEC30 == 2 ) /*0x100323921*/
    goto LABEL_49; /*0x100323921*/
  std::path::Path::components::he8b0f71a48373be5(&__s1, qword_1019FEC48, qword_1019FEC50); /*0x10032393c*/
  std::path::Path::components::he8b0f71a48373be5(&__s2, a1, a2); /*0x10032394e*/
  v70 = v6; /*0x100323953*/
  v71 = v5; /*0x100323957*/
  v21 = __s1; /*0x10032395b*/
  v22 = __n; /*0x100323962*/
  v23 = (__int64 *)__s2; /*0x100323969*/
  v24 = v36; /*0x100323970*/
  if ( __n == v36 && (_BYTE)v51 == (_BYTE)v42 && HIBYTE(v51) == 2 && HIBYTE(v42) == 2 ) /*0x10032399b*/
  {
    v25 = (__int64 *)__s1; /*0x10032399d*/
    v53 = (__int64 *)__s2; /*0x1003239a3*/
    v54 = v36; /*0x1003239aa*/
    v26 = memcmp(__s1, __s2, __n); /*0x1003239b1*/
    v24 = v54; /*0x1003239b6*/
    v23 = v53; /*0x1003239bd*/
    if ( !v26 ) /*0x1003239c6*/
    {
      v9 = v71; /*0x100323b77*/
      v6 = v70; /*0x100323b7b*/
      v28 = dword_1019FEC60; /*0x100323b7f*/
      if ( dword_1019FEC60 == 1000000000 ) /*0x100323b8a*/
        goto LABEL_38; /*0x100323b8a*/
LABEL_41:
      if ( v73 == 1000000000 || v28 != v73 || qword_1019FEC58 != v6 ) /*0x100323ba1*/
        goto LABEL_49; /*0x100323ba1*/
      goto LABEL_44; /*0x100323ba1*/
    }
  }
  if ( v46 != 6 ) /*0x1003239d5*/
  {
    *(_QWORD *)&v62[7] = *(_QWORD *)&v50[7]; /*0x1003239de*/
    *(_QWORD *)v62 = *(_QWORD *)v50; /*0x1003239ec*/
    v61 = v49; /*0x1003239fa*/
    v60 = v48; /*0x100323a0f*/
    v59 = v47; /*0x100323a16*/
  }
  v63 = (__int64)v21; /*0x100323a2b*/
  v64 = v22; /*0x100323a32*/
  v65[0] = v46; /*0x100323a39*/
  *(_QWORD *)&v65[1] = v59; /*0x100323a4a*/
  *(_QWORD *)&v65[9] = v60; /*0x100323a4e*/
  *(_QWORD *)&v65[17] = v61; /*0x100323a59*/
  *(_QWORD *)v66 = *(_QWORD *)v62; /*0x100323a64*/
  *(_QWORD *)&v66[7] = *(_QWORD *)&v62[7]; /*0x100323a6f*/
  v67 = v51; /*0x100323a73*/
  v68 = v52; /*0x100323a77*/
  if ( v37 != 6 ) /*0x100323a83*/
  {
    *(_QWORD *)&v58[7] = *(_QWORD *)&v41[7]; /*0x100323a8c*/
    *(_QWORD *)v58 = *(_QWORD *)v41; /*0x100323a9a*/
    v57 = v40; /*0x100323aa8*/
    v56 = v39; /*0x100323abd*/
    v55 = v38; /*0x100323ac4*/
  }
  v32 = (__int64)v23; /*0x100323ad9*/
  v33 = v24; /*0x100323ae0*/
  LOBYTE(__src[0]) = v37; /*0x100323ae7*/
  *(_QWORD *)((char *)__src + 1) = v55; /*0x100323afb*/
  *(_QWORD *)((char *)&__src[1] + 1) = v56; /*0x100323b02*/
  *(_QWORD *)((char *)&__src[2] + 1) = v57; /*0x100323b10*/
  *(_QWORD *)((char *)&__src[3] + 1) = *(_QWORD *)v58; /*0x100323b1e*/
  __src[4] = *(_QWORD *)&v58[7]; /*0x100323b2c*/
  LOWORD(__src[5]) = v42; /*0x100323b33*/
  BYTE2(__src[5]) = v43; /*0x100323b3a*/
  v25 = &v63; /*0x100323b40*/
  v23 = &v32; /*0x100323b47*/
  v27 = core::iter::traits::iterator::Iterator::eq_by::h10276caca526c536(&v63, &v32); /*0x100323b4e*/
  v9 = v71; /*0x100323b53*/
  v6 = v70; /*0x100323b57*/
  if ( !v27 ) /*0x100323b5d*/
    goto LABEL_49; /*0x100323b5d*/
  v28 = dword_1019FEC60; /*0x100323b5f*/
  if ( dword_1019FEC60 != 1000000000 ) /*0x100323b6a*/
    goto LABEL_41; /*0x100323b6a*/
LABEL_38:
  if ( v73 != 1000000000 ) /*0x100323b73*/
  {
LABEL_49:
    v13 = codexmate_lib::core::relay::image_compat::read_image_compat_enabled::h8dc099761b0d7d30(a1, a2, v8, v9); /*0x100323bd1*/
    v25 = &v32; /*0x100323bdf*/
    v23 = a1; /*0x100323be6*/
    std::path::Path::to_path_buf::h73855ce4b54f7174(&v32, a1, a2); /*0x100323bec*/
    *(_QWORD *)v65 = __src[0]; /*0x100323bf8*/
    v64 = v33; /*0x100323c0a*/
    v63 = v32; /*0x100323c11*/
    if ( (_DWORD)qword_1019FEC30 != 2 ) /*0x100323c1f*/
    {
      v23 = (__int64 *)qword_1019FEC40; /*0x100323c21*/
      if ( qword_1019FEC40 ) /*0x100323c2b*/
      {
        v25 = (__int64 *)qword_1019FEC48; /*0x100323c2d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(qword_1019FEC48, qword_1019FEC40, 1); /*0x100323c39*/
      }
    }
    qword_1019FEC30 = v72; /*0x100323c42*/
    qword_1019FEC38 = v69; /*0x100323c4d*/
    qword_1019FEC40 = v63; /*0x100323c62*/
    qword_1019FEC48 = v64; /*0x100323c69*/
    qword_1019FEC50 = *(_QWORD *)v65; /*0x100323c74*/
    qword_1019FEC58 = v6; /*0x100323c7b*/
    dword_1019FEC60 = v73; /*0x100323c85*/
    byte_1019FEC68 = v13; /*0x100323c8b*/
    goto LABEL_53; /*0x100323c8b*/
  }
LABEL_44:
  if ( (_DWORD)qword_1019FEC30 == 1 ) /*0x100323baa*/
  {
    if ( !v72 || qword_1019FEC38 != v69 ) /*0x100323bbe*/
      goto LABEL_49; /*0x100323bbe*/
  }
  else if ( !(_BYTE)v9 ) /*0x100323bcf*/
  {
    goto LABEL_49; /*0x100323bcf*/
  }
  v13 = (unsigned __int8)byte_1019FEC68; /*0x100323bc0*/
LABEL_53:
  if ( !v10 /*0x100323cea*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v25,
                           v23,
                           v8,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    byte_1019FEC28 = 1; /*0x100323cf3*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::core::relay::image_compat::IMAGE_COMPAT_CACHE::haebb9032711654b0); /*0x100323cb7*/
  return v13; /*0x100323cbf*/
}