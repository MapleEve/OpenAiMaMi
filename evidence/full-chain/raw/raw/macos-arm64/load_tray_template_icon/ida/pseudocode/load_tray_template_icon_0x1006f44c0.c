// __ZN13codexmate_lib23load_tray_template_icon @ 0x1006f44c0
__int64 **__fastcall codexmate_lib::load_tray_template_icon::hf059a26514a2a845(__int64 **a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rcx
  _QWORD v11[2]; // [rsp+8h] [rbp-1B8h] BYREF
  __int64 *v12; // [rsp+18h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+20h] [rbp-1A0h]
  __int64 *v14; // [rsp+28h] [rbp-198h]
  __int64 *v15; // [rsp+30h] [rbp-190h]
  __int64 v16; // [rsp+40h] [rbp-180h]
  __int64 *v17; // [rsp+48h] [rbp-178h]
  unsigned __int64 v18; // [rsp+50h] [rbp-170h]
  __int64 v19; // [rsp+58h] [rbp-168h]
  __int64 *v20; // [rsp+60h] [rbp-160h]
  unsigned __int64 v21; // [rsp+68h] [rbp-158h]
  __int64 v22; // [rsp+70h] [rbp-150h] BYREF
  __int64 v23; // [rsp+78h] [rbp-148h]
  __int64 v24; // [rsp+80h] [rbp-140h]
  __int64 v25; // [rsp+88h] [rbp-138h]
  unsigned __int64 v26; // [rsp+90h] [rbp-130h]
  __int64 v27; // [rsp+98h] [rbp-128h]
  __int64 v28; // [rsp+A0h] [rbp-120h]
  void *v29; // [rsp+A8h] [rbp-118h]
  __int64 v30; // [rsp+B0h] [rbp-110h]
  __int64 v31; // [rsp+B8h] [rbp-108h]
  __int64 v32; // [rsp+C0h] [rbp-100h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-F8h]
  __int64 v34; // [rsp+D0h] [rbp-F0h]
  __int64 v35; // [rsp+D8h] [rbp-E8h]
  unsigned __int64 v36; // [rsp+E0h] [rbp-E0h]
  __int64 v37; // [rsp+E8h] [rbp-D8h]
  __int64 v38; // [rsp+F0h] [rbp-D0h]
  void *v39; // [rsp+F8h] [rbp-C8h]
  __int64 v40; // [rsp+100h] [rbp-C0h]
  __int64 v41; // [rsp+108h] [rbp-B8h]
  __int64 v42; // [rsp+110h] [rbp-B0h] BYREF
  __int64 *v43; // [rsp+118h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+120h] [rbp-A0h]
  __int64 v45; // [rsp+128h] [rbp-98h] BYREF
  __int64 v46; // [rsp+130h] [rbp-90h]
  __int64 v47; // [rsp+138h] [rbp-88h]
  __int64 *v48; // [rsp+140h] [rbp-80h]
  unsigned __int64 v49; // [rsp+148h] [rbp-78h]
  __int64 v50; // [rsp+150h] [rbp-70h]
  __int64 v51; // [rsp+158h] [rbp-68h]
  void *v52; // [rsp+160h] [rbp-60h]
  __int64 v53; // [rsp+168h] [rbp-58h] BYREF
  __int64 v54; // [rsp+170h] [rbp-50h]
  __int64 *v55; // [rsp+178h] [rbp-48h]
  unsigned __int64 v56; // [rsp+180h] [rbp-40h]
  __int64 v57; // [rsp+188h] [rbp-38h]
  __int64 v58; // [rsp+190h] [rbp-30h]

  v39 = &unk_1016061B8; /*0x1006f44e8*/
  v40 = 4612; /*0x1006f44ef*/
  v41 = 0; /*0x1006f44fa*/
  v36 = 0x8000000000000001LL; /*0x1006f4505*/
  v32 = 1; /*0x1006f450c*/
  v33 = 0x20000000; /*0x1006f4517*/
  LODWORD(v34) = 0; /*0x1006f4522*/
  LODWORD(v35) = 0; /*0x1006f452c*/
  image::io::image_reader_type::ImageReader$LT$R$GT$::with_guessed_format::h5e53adb78595ff77(&v22, &v32); /*0x1006f4547*/
  if ( v22 == 2 ) /*0x1006f4557*/
  {
    v42 = v23; /*0x1006f4564*/
    v12 = &v42; /*0x1006f4572*/
    v13 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1006f4580*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v32, &unk_1017C3F56, &v12); /*0x1006f459c*/
    if ( (v42 & 3) == 1 ) /*0x1006f45b0*/
    {
      v1 = v42 - 1; /*0x1006f45b2*/
      v2 = *(_QWORD *)(v42 - 1); /*0x1006f45b6*/
      v3 = *(_QWORD *)(v42 + 7); /*0x1006f45ba*/
      if ( *(_QWORD *)v3 ) /*0x1006f45be*/
        (*(void (__fastcall **)(__int64))v3)(v2); /*0x1006f45ca*/
      v4 = *(_QWORD *)(v3 + 8); /*0x1006f45cc*/
      if ( v4 ) /*0x1006f45d3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, *(_QWORD *)(v3 + 16)); /*0x1006f45dc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24, 8); /*0x1006f45ee*/
    }
    v5 = v32; /*0x1006f45fa*/
    v6 = v33; /*0x1006f4601*/
    v53 = v32; /*0x1006f4608*/
    v54 = v33; /*0x1006f460c*/
    v55 = (__int64 *)v34; /*0x1006f4610*/
    a1[3] = (__int64 *)v34; /*0x1006f4614*/
    a1[2] = (__int64 *)v6; /*0x1006f4618*/
    a1[1] = (__int64 *)v5; /*0x1006f461c*/
    goto LABEL_12; /*0x1006f4620*/
  }
  v47 = v25; /*0x1006f4630*/
  v46 = v24; /*0x1006f463e*/
  v45 = v23; /*0x1006f4645*/
  v36 = v26; /*0x1006f465a*/
  v37 = v27; /*0x1006f4661*/
  v38 = v28; /*0x1006f466f*/
  v39 = v29; /*0x1006f467d*/
  v40 = v30; /*0x1006f468b*/
  v41 = v31; /*0x1006f4699*/
  v53 = v23; /*0x1006f46ae*/
  v54 = v24; /*0x1006f46b2*/
  v55 = (__int64 *)v25; /*0x1006f46bd*/
  v32 = v22; /*0x1006f46c1*/
  v35 = v25; /*0x1006f46cc*/
  v34 = v24; /*0x1006f46db*/
  v33 = v23; /*0x1006f46e2*/
  image::io::image_reader_type::ImageReader$LT$R$GT$::decode::h5f11bf0ee5235bdf(&v45, &v32); /*0x1006f46f7*/
  if ( (_BYTE)v45 != 10 ) /*0x1006f4703*/
  {
    v29 = v52; /*0x1006f47af*/
    v28 = v51; /*0x1006f47ba*/
    v27 = v50; /*0x1006f47c5*/
    v26 = v49; /*0x1006f47d0*/
    v25 = (__int64)v48; /*0x1006f47db*/
    v24 = v47; /*0x1006f47e9*/
    v23 = v46; /*0x1006f47fe*/
    v22 = v45; /*0x1006f4805*/
    v11[0] = &v22; /*0x1006f480c*/
    v11[1] = _$LT$image..error..ImageError$u20$as$u20$core..fmt..Display$GT$::fmt::h10b0eaf9c2a889b6; /*0x1006f481a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v42, &unk_1017C3F33, v11); /*0x1006f4836*/
    core::ptr::drop_in_place$LT$image..error..ImageError$GT$::h4c2882e70174c50a(&v22); /*0x1006f4842*/
    v8 = v42; /*0x1006f4847*/
    v9 = v43; /*0x1006f484e*/
    v16 = v42; /*0x1006f4855*/
    v18 = v44; /*0x1006f4863*/
    v17 = v43; /*0x1006f486a*/
    v21 = v44; /*0x1006f4871*/
    v20 = v43; /*0x1006f4878*/
    v19 = v42; /*0x1006f487f*/
    a1[3] = (__int64 *)v44; /*0x1006f4886*/
    a1[2] = v9; /*0x1006f488a*/
    a1[1] = (__int64 *)v8; /*0x1006f488e*/
LABEL_12:
    *a1 = (__int64 *)0x8000000000000001LL; /*0x1006f4892*/
    return a1; /*0x1006f4892*/
  }
  v16 = v47; /*0x1006f4717*/
  v17 = v48; /*0x1006f4722*/
  v57 = v50; /*0x1006f4731*/
  v58 = v51; /*0x1006f4739*/
  v19 = v47; /*0x1006f473d*/
  v20 = v48; /*0x1006f4744*/
  v21 = v49; /*0x1006f474b*/
  v56 = v49; /*0x1006f4752*/
  v55 = v48; /*0x1006f4756*/
  v54 = v47; /*0x1006f475a*/
  v53 = v46; /*0x1006f475e*/
  image::images::dynimage::DynamicImage::to_rgba8::h779723173d94da77(&v12, &v53); /*0x1006f476d*/
  core::ptr::drop_in_place$LT$image..images..dynimage..DynamicImage$GT$::hccb1fbfddb10c05a(&v53); /*0x1006f4776*/
  a1[2] = v14; /*0x1006f4782*/
  v7 = v12; /*0x1006f4786*/
  a1[1] = (__int64 *)v13; /*0x1006f4794*/
  *a1 = v7; /*0x1006f4798*/
  a1[3] = v15; /*0x1006f47a2*/
  return a1; /*0x1006f4898*/
}