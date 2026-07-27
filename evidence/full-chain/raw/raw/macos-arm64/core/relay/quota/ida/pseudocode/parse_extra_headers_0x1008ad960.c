// __ZN13codexmate_lib4core5relay5quota19parse_extra_headers @ 0x1008ad960 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::quota::parse_extra_headers::h2a52b95440049bf1(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  bool v10; // cl
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r12
  void *v13; // rax
  bool v14; // zf
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // r13
  __int64 v26; // rax
  unsigned __int8 v27; // cl
  __int128 v28; // kr00_16
  __int128 v29; // kr10_16
  __int128 v30; // kr20_16
  __int128 v31; // kr30_16
  _QWORD v33[12]; // [rsp+0h] [rbp-1F0h] BYREF
  __m256i v34; // [rsp+60h] [rbp-190h] BYREF
  char v35; // [rsp+80h] [rbp-170h]
  _BYTE v36[7]; // [rsp+81h] [rbp-16Fh]
  unsigned __int64 v37; // [rsp+88h] [rbp-168h]
  __int64 v38; // [rsp+90h] [rbp-160h]
  __int128 v39; // [rsp+98h] [rbp-158h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-148h]
  __m256i v41[3]; // [rsp+B0h] [rbp-140h] BYREF
  char v42; // [rsp+110h] [rbp-E0h] BYREF
  _BYTE v43[31]; // [rsp+111h] [rbp-DFh]
  __int64 v44; // [rsp+130h] [rbp-C0h] BYREF
  __m256i v45; // [rsp+138h] [rbp-B8h] BYREF
  __m256i v46; // [rsp+158h] [rbp-98h] BYREF
  __m256i v47; // [rsp+178h] [rbp-78h] BYREF
  __m256i v48; // [rsp+198h] [rbp-58h] BYREF
  __int64 v49; // [rsp+1B8h] [rbp-38h]
  _BYTE v50[41]; // [rsp+1C7h] [rbp-29h] BYREF

  *(_QWORD *)&v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008ad97d*/
  if ( !*((_QWORD *)&v3 + 1) ) /*0x1008ad985*/
  {
    *(_WORD *)(a1 + 88) = 0; /*0x1008ada60*/
    *(_QWORD *)(a1 + 72) = 2; /*0x1008ada66*/
    *(_QWORD *)(a1 + 80) = 0; /*0x1008ada6e*/
    *(_QWORD *)(a1 + 24) = 0; /*0x1008ada76*/
    *(_QWORD *)(a1 + 32) = 8; /*0x1008ada7e*/
    *(_QWORD *)(a1 + 40) = 0; /*0x1008ada86*/
    *(_QWORD *)(a1 + 48) = 0; /*0x1008ada8e*/
    *(_QWORD *)(a1 + 56) = 8; /*0x1008ada96*/
    *(_QWORD *)(a1 + 64) = 0; /*0x1008ada9e*/
    *(_QWORD *)a1 = 0; /*0x1008adaa6*/
    return a1; /*0x1008adaad*/
  }
  v41[0].i128[0] = v3; /*0x1008ad98b*/
  v41[0].i128[1] = 0u; /*0x1008ad999*/
  v41[1].i128[0] = v3; /*0x1008ad9af*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v33, v41); /*0x1008ad9cb*/
  if ( LOBYTE(v33[0]) == 6 ) /*0x1008ad9d9*/
  {
    v46.i64[0] = v33[1]; /*0x1008ad9e6*/
    v45.i64[0] = (__int64)&v46; /*0x1008ad9f4*/
    v45.i64[1] = (__int64)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008ada02*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v41, &unk_1017B9881, &v45); /*0x1008ada1e*/
    v4 = v46.i64[0]; /*0x1008ada23*/
    if ( *(_QWORD *)v46.i64[0] == 1 ) /*0x1008ada31*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v46.i64[0] + 8); /*0x1008adff0*/
    }
    else if ( !*(_QWORD *)v46.i64[0] ) /*0x1008ada2a*/
    {
      v5 = *(_QWORD *)(v46.i64[0] + 16); /*0x1008ada40*/
      if ( v5 ) /*0x1008ada47*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v46.i64[0] + 8), v5, 1); /*0x1008ada56*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 40, 8); /*0x1008ae002*/
    v28 = v41[0].i128[0]; /*0x1008ae019*/
    *(__int128 *)((char *)v48.i128 + 15) = *(__int128 *)((char *)v41[0].i128 + 8); /*0x1008ae020*/
    *(__int64 *)((char *)v48.i64 + 7) = v41[0].i64[0]; /*0x1008ae024*/
    *(__int128 *)((char *)v47.i128 + 7) = v41[0].i128[0]; /*0x1008ae028*/
    *(__int64 *)((char *)&v47.i64[2] + 7) = v41[0].i64[2]; /*0x1008ae030*/
    *(_QWORD *)(a1 + 24) = v41[0].i64[2]; /*0x1008ae034*/
    *(_OWORD *)(a1 + 8) = v28; /*0x1008ae03c*/
    *(_QWORD *)a1 = 3; /*0x1008ae040*/
    return a1; /*0x1008ae047*/
  }
  *(__int64 *)((char *)&v48.i64[2] + 7) = v33[3]; /*0x1008adab9*/
  v48.i64[2] = *(_QWORD *)((char *)&v33[2] + 1); /*0x1008adac4*/
  v47.i128[0] = *(_OWORD *)((char *)v33 + 1); /*0x1008adad6*/
  v47.i64[2] = *(_QWORD *)((char *)&v33[2] + 1); /*0x1008adae6*/
  *(__int64 *)((char *)&v47.i64[2] + 7) = *(__int64 *)((char *)&v48.i64[2] + 7); /*0x1008adaea*/
  *(_OWORD *)v43 = *(_OWORD *)((char *)v33 + 1); /*0x1008adaee*/
  *(_QWORD *)&v43[16] = v47.i64[2]; /*0x1008adb04*/
  *(_QWORD *)&v43[23] = *(__int64 *)((char *)&v48.i64[2] + 7); /*0x1008adb0b*/
  v42 = v33[0]; /*0x1008adb12*/
  if ( LOBYTE(v33[0]) != 5 ) /*0x1008adb1a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1008adb92*/
      *(__int64 *)((char *)&v48.i64[2] + 7),
      *(_QWORD *)((char *)&v33[2] + 1));
    v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x1008adba1*/
    if ( !v13 ) /*0x1008adba9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x1008ae274*/
    qmemcpy(v13, "extraHeaders must be a JSON object", 34); /*0x1008adbe3*/
    *(_QWORD *)(a1 + 8) = 34; /*0x1008adbec*/
    *(_QWORD *)(a1 + 16) = v13; /*0x1008adbf4*/
    *(_QWORD *)(a1 + 24) = 34; /*0x1008adbf8*/
    *(_QWORD *)a1 = 3; /*0x1008adc00*/
    goto LABEL_62; /*0x1008adc07*/
  }
  v6 = *(_QWORD *)&v43[23]; /*0x1008adb1c*/
  http::header::map::HeaderMap$LT$T$GT$::try_with_capacity::h3e56951a2765be79(v41, *(_QWORD *)&v43[23]); /*0x1008adb2d*/
  if ( v41[0].i32[0] == 3 ) /*0x1008adb39*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v50, &unk_10196D420, &off_10196D1D8); /*0x1008ae222*/
  qmemcpy(v33, v41, sizeof(v33)); /*0x1008adb52*/
  v9 = *(_QWORD *)&v43[7]; /*0x1008adb55*/
  v10 = *(_QWORD *)&v43[7] != 0; /*0x1008adb5f*/
  v38 = v6; /*0x1008adb65*/
  if ( *(_QWORD *)&v43[7] == 0 || v6 == 0 ) /*0x1008adb6f*/
  {
LABEL_55:
    qmemcpy((void *)a1, v33, 0x60u); /*0x1008ae05b*/
    goto LABEL_62; /*0x1008ae05b*/
  }
  v11 = *(_QWORD *)&v43[15]; /*0x1008adb7c*/
  v12 = 0; /*0x1008adb83*/
  while ( 1 ) /*0x1008adc2a*/
  {
    if ( !v10 ) /*0x1008adc2d*/
      core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1); /*0x1008ae263*/
    if ( v12 ) /*0x1008adc36*/
    {
      if ( v11 < *(unsigned __int16 *)(v12 + 626) ) /*0x1008adc44*/
        goto LABEL_18; /*0x1008adc44*/
      goto LABEL_29; /*0x1008adc44*/
    }
    if ( !v11 ) /*0x1008adc58*/
    {
      v12 = v9; /*0x1008adc8e*/
      goto LABEL_28; /*0x1008adc91*/
    }
    v12 = v9; /*0x1008adc5d*/
    if ( (v11 & 7) == 0 ) /*0x1008adc64*/
    {
      v18 = v11; /*0x1008adc93*/
      if ( v11 < 8 ) /*0x1008adc9a*/
        goto LABEL_28; /*0x1008adc9a*/
      do /*0x1008adcdd*/
      {
LABEL_27:
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 632) /*0x1008adca0*/
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v18 -= 8LL; /*0x1008adcd9*/
      }
      while ( v18 ); /*0x1008adcdd*/
      goto LABEL_28; /*0x1008adcdd*/
    }
    v17 = 0; /*0x1008adc66*/
    do /*0x1008adc7e*/
    {
      v12 = *(_QWORD *)(v12 + 632); /*0x1008adc70*/
      ++v17; /*0x1008adc78*/
    }
    while ( (v11 & 7) != v17 ); /*0x1008adc7e*/
    v18 = v11 - v17; /*0x1008adc83*/
    if ( v11 >= 8 ) /*0x1008adc8a*/
      goto LABEL_27; /*0x1008adc8a*/
LABEL_28:
    v9 = 0; /*0x1008adcdf*/
    v11 = 0; /*0x1008adce1*/
    if ( *(_WORD *)(v12 + 626) ) /*0x1008adce3*/
    {
LABEL_18:
      v15 = v12; /*0x1008adc4a*/
      v16 = v11; /*0x1008adc4d*/
      goto LABEL_31; /*0x1008adc50*/
    }
    do /*0x1008add27*/
    {
LABEL_29:
      v15 = *(_QWORD *)(v12 + 352); /*0x1008add00*/
      if ( !v15 ) /*0x1008add0b*/
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_837); /*0x1008ae255*/
      ++v9; /*0x1008add11*/
      v16 = *(unsigned __int16 *)(v12 + 624); /*0x1008add14*/
      v12 = *(_QWORD *)(v12 + 352); /*0x1008add1d*/
    }
    while ( (unsigned __int16)v16 >= *(_WORD *)(v15 + 626) ); /*0x1008add27*/
LABEL_31:
    if ( v9 ) /*0x1008add2c*/
    {
      v19 = v15 + 8 * v16 + 640; /*0x1008add32*/
      if ( (v9 & 7) != 0 ) /*0x1008add41*/
      {
        v7 = 0; /*0x1008add47*/
        do /*0x1008add61*/
        {
          v12 = *(_QWORD *)v19; /*0x1008add50*/
          v19 = *(_QWORD *)v19 + 632LL; /*0x1008add53*/
          ++v7; /*0x1008add5b*/
        }
        while ( (v9 & 7) != v7 ); /*0x1008add61*/
        v8 = v9 - v7; /*0x1008add66*/
        if ( v9 < 8 ) /*0x1008add6d*/
          goto LABEL_37; /*0x1008add6d*/
      }
      else
      {
        v8 = v9; /*0x1008adfda*/
        if ( v9 < 8 ) /*0x1008adfe1*/
        {
LABEL_37:
          v20 = 0; /*0x1008addb2*/
          goto LABEL_39; /*0x1008addb4*/
        }
      }
      do /*0x1008addb0*/
      {
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 632LL) /*0x1008add9d*/
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v19 = v12 + 632; /*0x1008adda4*/
        v8 -= 8LL; /*0x1008addac*/
      }
      while ( v8 ); /*0x1008addb0*/
      goto LABEL_37; /*0x1008addb0*/
    }
    v20 = v16 + 1; /*0x1008addb6*/
    v12 = v15; /*0x1008addba*/
LABEL_39:
    v21 = v15 + 24 * v16 + 360; /*0x1008addbd*/
    v22 = 32 * v16; /*0x1008addc9*/
    v44 = v21; /*0x1008addcd*/
    if ( *(_BYTE *)(v15 + v22) != 3 ) /*0x1008addd8*/
    {
      v48.i64[0] = (__int64)&v44; /*0x1008ae111*/
      v48.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1008ae11c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v41, &unk_1017B9854, &v48); /*0x1008ae132*/
      v30 = *(__int128 *)((char *)v41[0].i128 + 8); /*0x1008ae145*/
      *(_QWORD *)(a1 + 8) = v41[0].i64[0]; /*0x1008ae14c*/
      *(_OWORD *)(a1 + 16) = v30; /*0x1008ae150*/
LABEL_60:
      *(_QWORD *)a1 = 3; /*0x1008ae1d0*/
      goto LABEL_61; /*0x1008ae1d0*/
    }
    v37 = v20; /*0x1008addde*/
    v23 = v22 + v15; /*0x1008adde5*/
    v24 = *(_QWORD *)(v23 + 16); /*0x1008adde8*/
    v25 = *(_QWORD *)(v23 + 24); /*0x1008addec*/
    http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b( /*0x1008addfb*/
      v41,
      *(_QWORD *)(v21 + 8),
      *(_QWORD *)(v21 + 16),
      v23,
      v7,
      v8);
    if ( v41[0].i32[0] == 1 ) /*0x1008ade07*/
    {
      v48.i64[0] = (__int64)&v44; /*0x1008ae161*/
      v48.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1008ae16c*/
      v48.i64[2] = (__int64)v50; /*0x1008ae174*/
      v48.i64[3] = (__int64)_$LT$http..header..name..InvalidHeaderName$u20$as$u20$core..fmt..Display$GT$::fmt::h3ae263927821ecca; /*0x1008ae17f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v39, &unk_1017B989F, &v48); /*0x1008ae195*/
      v31 = v39; /*0x1008ae1a8*/
      v45.i128[0] = v39; /*0x1008ae1af*/
      v45.i64[2] = v40; /*0x1008ae1bd*/
      *(_QWORD *)(a1 + 24) = v40; /*0x1008ae1c4*/
      *(_OWORD *)(a1 + 8) = v31; /*0x1008ae1cc*/
      goto LABEL_60; /*0x1008ae1cc*/
    }
    v45.i64[0] = v41[0].i64[1]; /*0x1008ade23*/
    v46 = *(__m256i *)((char *)v41 + 8); /*0x1008ade2a*/
    if ( v25 ) /*0x1008ade49*/
      break; /*0x1008ade49*/
LABEL_48:
    bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(v41, v24, v25); /*0x1008ade75*/
    *(_DWORD *)&v36[3] = v41[1].i32[1]; /*0x1008adec3*/
    *(_DWORD *)v36 = *(__int32 *)((char *)v41[1].i32 + 1); /*0x1008adec6*/
    v45 = v41[0]; /*0x1008aded0*/
    v34 = v41[0]; /*0x1008adf02*/
    v35 = 0; /*0x1008adf2c*/
    v47 = v46; /*0x1008adf42*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(v41, v33, &v47, &v34); /*0x1008adf71*/
    if ( v41[1].i8[0] == 3 ) /*0x1008adf7d*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, v50, &unk_10196D420, &off_10196D130); /*0x1008ae247*/
    v49 = v41[1].i64[0]; /*0x1008adf8a*/
    v48 = v41[0]; /*0x1008adfa0*/
    if ( v41[1].i8[0] != 2 ) /*0x1008adfbc*/
      (*(void (__fastcall **)(__int8 *, __int64, __int64))(v48.i64[0] + 32))(&v48.i8[24], v48.i64[1], v48.i64[2]); /*0x1008adfd2*/
    v10 = 1; /*0x1008adc0c*/
    v9 = 0; /*0x1008adc0e*/
    v14 = v38-- == 1; /*0x1008adc13*/
    v11 = v37; /*0x1008adc1d*/
    if ( v14 ) /*0x1008adc24*/
      goto LABEL_55; /*0x1008adc24*/
  }
  v26 = 0; /*0x1008ade4b*/
  while ( 1 ) /*0x1008ade61*/
  {
    v27 = *(_BYTE *)(v24 + v26); /*0x1008ade61*/
    if ( v27 <= 0x1Fu ) /*0x1008ade69*/
      break; /*0x1008ade69*/
    if ( v27 == 127 ) /*0x1008ade53*/
      goto LABEL_56; /*0x1008ade53*/
LABEL_44:
    if ( v25 == ++v26 ) /*0x1008ade5f*/
      goto LABEL_48; /*0x1008ade5f*/
  }
  if ( v27 == 9 ) /*0x1008ade6e*/
    goto LABEL_44; /*0x1008ade6e*/
LABEL_56:
  v48.i64[0] = (__int64)&v44; /*0x1008ae063*/
  v48.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1008ae075*/
  v48.i64[2] = (__int64)v50; /*0x1008ae07d*/
  v48.i64[3] = (__int64)_$LT$http..header..value..InvalidHeaderValue$u20$as$u20$core..fmt..Display$GT$::fmt::h1648c0f90d2bbcf9; /*0x1008ae088*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v39, &unk_1017B9832, &v48); /*0x1008ae09e*/
  v29 = v39; /*0x1008ae0b1*/
  v45.i128[0] = v39; /*0x1008ae0b8*/
  v45.i64[2] = v40; /*0x1008ae0c6*/
  *(_QWORD *)(a1 + 24) = v40; /*0x1008ae0cd*/
  *(_OWORD *)(a1 + 8) = v29; /*0x1008ae0d5*/
  *(_QWORD *)a1 = 3; /*0x1008ae0d9*/
  if ( v46.i64[0] ) /*0x1008ae0ea*/
    (*(void (__fastcall **)(__int8 *, __int64, __int64))(v46.i64[0] + 32))(&v46.i8[24], v46.i64[1], v46.i64[2]); /*0x1008ae102*/
LABEL_61:
  core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v33); /*0x1008ae1d7*/
LABEL_62:
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v42); /*0x1008ae1e3*/
  return a1; /*0x1008ae1f2*/
}