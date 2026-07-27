// __ZN13codexmate_lib8platform6screen21compute_hotspot_frame @ 0x100702890 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::screen::compute_hotspot_frame::h4e2ac12e0c110f5a(__int64 a1)
{
  void *v1; // rsi
  __int64 v2; // r14
  void *v3; // rdi
  char *v4; // rax
  char *v5; // r12
  char *i; // r15
  const char *v7; // r13
  id v8; // rax
  id v9; // r14
  __int64 result; // rax
  __int64 v11; // rbx
  id v12; // rax
  id v13; // rbx
  __m128d v14; // xmm0
  __m128d v15; // xmm2
  __m128d v16; // xmm4
  double v17; // xmm1_8
  __int64 v18; // rax
  const char *v19; // rsi
  double v20[4]; // [rsp+8h] [rbp-98h] BYREF
  double v21[2]; // [rsp+28h] [rbp-78h] BYREF
  double v22; // [rsp+38h] [rbp-68h]
  double v23; // [rsp+40h] [rbp-60h]
  double v24[4]; // [rsp+48h] [rbp-58h] BYREF
  __int64 v25; // [rsp+68h] [rbp-38h]
  id v26; // [rsp+70h] [rbp-30h]

  v25 = a1; /*0x1007028a1*/
  v1 = (void *)objc2_foundation::generated::__NSProcessInfo::NSProcessInfo::processInfo::h721a11560ccd5837(); /*0x1007028b1*/
  objc2_foundation::generated::__NSProcessInfo::NSProcessInfo::operatingSystemVersion::h3e891ac55381ed2b(v24); /*0x1007028b4*/
  v2 = *(_QWORD *)&v24[0]; /*0x1007028b9*/
  objc_release(v1); /*0x1007028c0*/
  if ( v2 >= 12 && pthread_main_np() == 1 ) /*0x1007028d7*/
  {
    v3 = (void *)objc2_app_kit::generated::__NSScreen::NSScreen::screens::hf6640a3bf31de043(v1, v1); /*0x1007028e2*/
    v26 = v3; /*0x1007028f2*/
    if ( objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0 ) /*0x1007028f6*/
    {
      v4 = (char *)objc_msgSend( /*0x1007028fc*/
                     v3,
                     (SEL)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0);
    }
    else
    {
      v19 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x100702b39*/
                            &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0,
                            "count");
      v4 = (char *)objc_msgSend(v26, v19); /*0x100702b40*/
    }
    v5 = v4; /*0x100702901*/
    if ( v4 ) /*0x100702907*/
    {
      for ( i = nullptr; v5 != i; ++i ) /*0x10070290d*/
      {
        v7 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666; /*0x10070293b*/
        if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666 ) /*0x100702941*/
          v7 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1007029c5*/
                               &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666,
                               "objectAtIndex:");
        v8 = objc_msgSend(v26, v7, i); /*0x10070294d*/
        v9 = objc_retainAutoreleasedReturnValue(v8); /*0x10070295a*/
        if ( !v9 ) /*0x100702961*/
          goto LABEL_22; /*0x100702961*/
        objc2_app_kit::generated::__NSScreen::NSScreen::auxiliaryTopLeftArea::he83a645a63e41031(v21); /*0x10070296e*/
        objc2_app_kit::generated::__NSScreen::NSScreen::auxiliaryTopRightArea::ha5ad75ba0e94c5a6(v24); /*0x100702979*/
        if ( v22 > 0.0 && v24[2] > 0.0 && v24[0] > v22 + v21[0] ) /*0x1007029aa*/
        {
          objc_release(v9); /*0x1007029fc*/
          v7 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666; /*0x100702a08*/
          if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666 ) /*0x100702a0e*/
            v7 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x100702b58*/
                                 &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666,
                                 "objectAtIndex:");
          v12 = objc_msgSend(v26, v7, i); /*0x100702a1e*/
          v13 = objc_retainAutoreleasedReturnValue(v12); /*0x100702a2b*/
          if ( !v13 ) /*0x100702a32*/
LABEL_22:
            objc2::__macro_helpers::retain_semantics::none_fail::hda1150934f8bd705( /*0x100702b11*/
              v26,
              v7,
              &anon_b756970ae374bf3e9e8d782d8f9d3f8c_189);
          objc2_app_kit::generated::__NSScreen::NSScreen::frame::h38dc04fd305741f8(v20); /*0x100702a42*/
          objc2_app_kit::generated::__NSScreen::NSScreen::auxiliaryTopLeftArea::he83a645a63e41031(v21); /*0x100702a4e*/
          objc2_app_kit::generated::__NSScreen::NSScreen::auxiliaryTopRightArea::ha5ad75ba0e94c5a6(v24); /*0x100702a5a*/
          v14.f64[0] = v24[0] - (v21[0] + v22) + 180.0; /*0x100702a72*/
          v14.f64[1] = v23; /*0x100702a87*/
          v15.f64[0] = 380.0; /*0x100702a8c*/
          v15.f64[1] = v24[3]; /*0x100702a94*/
          v16 = _mm_blendv_pd(_mm_max_pd(v15, v14), v15, _mm_cmpunord_pd(v14, v14)); /*0x100702aae*/
          v17 = v20[1] + v20[3] - _mm_unpackhi_pd(v16, v16).f64[0]; /*0x100702acf*/
          v18 = v25; /*0x100702ad3*/
          *(double *)(v25 + 8) = (v20[2] - v16.f64[0]) * 0.5 + v20[0]; /*0x100702ad7*/
          *(double *)(v18 + 16) = v17; /*0x100702adc*/
          *(__m128d *)(v18 + 24) = v16; /*0x100702ae1*/
          *(_QWORD *)v18 = 1; /*0x100702ae6*/
          objc_release(v13); /*0x100702af0*/
          objc_release(v26); /*0x100702af9*/
          return v25; /*0x100702b10*/
        }
        objc_release(v9); /*0x100702926*/
      }
    }
    v11 = v25; /*0x1007029dd*/
    *(_QWORD *)v25 = 0; /*0x1007029e1*/
    objc_release(v26); /*0x1007029ec*/
    return v11; /*0x1007029f1*/
  }
  else
  {
    result = v25; /*0x1007029cd*/
    *(_QWORD *)v25 = 0; /*0x1007029d1*/
  }
  return result; /*0x100702b02*/
}