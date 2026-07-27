// __ZN13codexmate_lib4core5relay12fetch_models19parse_extra_headers @ 0x100254040 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::fetch_models::parse_extra_headers::h8a0e495e96b65543(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v3; // rax
  __int128 v4; // kr00_16
  __int64 v5; // r14
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  bool v9; // cl
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  void *v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int8 v26; // cl
  __int128 v27; // kr10_16
  __int128 v28; // kr20_16
  __int128 v29; // kr30_16
  _QWORD v31[12]; // [rsp+0h] [rbp-1F0h] BYREF
  __m256i v32; // [rsp+60h] [rbp-190h] BYREF
  char v33; // [rsp+80h] [rbp-170h]
  _BYTE v34[7]; // [rsp+81h] [rbp-16Fh]
  unsigned __int64 v35; // [rsp+88h] [rbp-168h]
  __int64 v36; // [rsp+90h] [rbp-160h]
  __int128 v37; // [rsp+98h] [rbp-158h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-148h]
  __m256i v39[3]; // [rsp+B0h] [rbp-140h] BYREF
  char v40; // [rsp+110h] [rbp-E0h] BYREF
  _BYTE v41[31]; // [rsp+111h] [rbp-DFh]
  __int64 v42; // [rsp+130h] [rbp-C0h] BYREF
  __m256i v43; // [rsp+138h] [rbp-B8h] BYREF
  __m256i v44; // [rsp+158h] [rbp-98h] BYREF
  __m256i v45; // [rsp+178h] [rbp-78h] BYREF
  __m256i v46; // [rsp+198h] [rbp-58h] BYREF
  __int64 v47; // [rsp+1B8h] [rbp-38h]
  _BYTE v48[41]; // [rsp+1C7h] [rbp-29h] BYREF

  *(_QWORD *)&v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10025405d*/
  if ( !*((_QWORD *)&v3 + 1) ) /*0x100254065*/
  {
    *(_QWORD *)(a1 + 48) = 0; /*0x100254154*/
    *(_QWORD *)(a1 + 40) = 0; /*0x10025415c*/
    *(_QWORD *)a1 = 0; /*0x100254164*/
    *(_QWORD *)(a1 + 24) = 0; /*0x10025416b*/
    *(_QWORD *)(a1 + 32) = 8; /*0x100254173*/
    *(_QWORD *)(a1 + 56) = 8; /*0x10025417b*/
    *(_QWORD *)(a1 + 64) = 0; /*0x100254183*/
    *(_QWORD *)(a1 + 72) = 2; /*0x10025418b*/
    *(_QWORD *)(a1 + 80) = 0; /*0x100254193*/
    *(_WORD *)(a1 + 88) = 0; /*0x10025419b*/
    return a1; /*0x1002541a1*/
  }
  v39[0].i128[0] = v3; /*0x10025406b*/
  v39[0].i128[1] = 0u; /*0x100254079*/
  v39[1].i128[0] = v3; /*0x10025408f*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v31, v39); /*0x1002540ab*/
  if ( LOBYTE(v31[0]) == 6 ) /*0x1002540b9*/
  {
    v44.i64[0] = v31[1]; /*0x1002540c6*/
    v43.i64[0] = (__int64)&v44; /*0x1002540d4*/
    v43.i64[1] = (__int64)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1002540e2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_1017B9881, &v43); /*0x1002540fe*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v44); /*0x10025410a*/
    *(__int64 *)((char *)&v46.i64[2] + 7) = v39[0].i64[2]; /*0x100254116*/
    v4 = v39[0].i128[0]; /*0x100254121*/
    *(__int128 *)((char *)v46.i128 + 7) = v39[0].i128[0]; /*0x10025412c*/
    *(__int128 *)((char *)v45.i128 + 7) = v39[0].i128[0]; /*0x100254130*/
    *(__int64 *)((char *)&v45.i64[2] + 7) = v39[0].i64[2]; /*0x100254138*/
    *(_QWORD *)(a1 + 24) = v39[0].i64[2]; /*0x10025413c*/
    *(_OWORD *)(a1 + 8) = v4; /*0x100254144*/
    *(_QWORD *)a1 = 3; /*0x100254148*/
    return a1; /*0x10025414f*/
  }
  *(__int64 *)((char *)&v46.i64[2] + 7) = v31[3]; /*0x1002541ad*/
  v46.i64[2] = *(_QWORD *)((char *)&v31[2] + 1); /*0x1002541b8*/
  v45.i128[0] = *(_OWORD *)((char *)v31 + 1); /*0x1002541ca*/
  v45.i64[2] = *(_QWORD *)((char *)&v31[2] + 1); /*0x1002541da*/
  *(__int64 *)((char *)&v45.i64[2] + 7) = *(__int64 *)((char *)&v46.i64[2] + 7); /*0x1002541de*/
  *(_OWORD *)v41 = *(_OWORD *)((char *)v31 + 1); /*0x1002541e2*/
  *(_QWORD *)&v41[16] = v45.i64[2]; /*0x1002541f8*/
  *(_QWORD *)&v41[23] = *(__int64 *)((char *)&v46.i64[2] + 7); /*0x1002541ff*/
  v40 = v31[0]; /*0x100254206*/
  if ( LOBYTE(v31[0]) != 5 ) /*0x10025420e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100254286*/
      *(__int64 *)((char *)&v46.i64[2] + 7),
      *(_QWORD *)((char *)&v31[2] + 1));
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100254295*/
    if ( !v12 ) /*0x10025429d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x10025490b*/
    qmemcpy(v12, "extraHeaders must be a JSON object", 34); /*0x1002542d7*/
    *(_QWORD *)(a1 + 8) = 34; /*0x1002542e0*/
    *(_QWORD *)(a1 + 16) = v12; /*0x1002542e8*/
    *(_QWORD *)(a1 + 24) = 34; /*0x1002542ec*/
    *(_QWORD *)a1 = 3; /*0x1002542f4*/
    goto LABEL_57; /*0x1002542fb*/
  }
  v5 = *(_QWORD *)&v41[23]; /*0x100254210*/
  http::header::map::HeaderMap$LT$T$GT$::try_with_capacity::h3e56951a2765be79(v39, *(_QWORD *)&v41[23]); /*0x100254221*/
  if ( v39[0].i32[0] == 3 ) /*0x10025422d*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002548b9*/
      "size overflows MAX_SIZE",
      23,
      v48,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
      &off_10195D4D0);
  qmemcpy(v31, v39, sizeof(v31)); /*0x100254246*/
  v8 = *(_QWORD *)&v41[7]; /*0x100254249*/
  v9 = *(_QWORD *)&v41[7] != 0; /*0x100254253*/
  v36 = v5; /*0x100254259*/
  if ( *(_QWORD *)&v41[7] == 0 || v5 == 0 ) /*0x100254263*/
  {
LABEL_50:
    qmemcpy((void *)a1, v31, 0x60u); /*0x1002546f2*/
    goto LABEL_57; /*0x1002546f2*/
  }
  v10 = *(_QWORD *)&v41[15]; /*0x100254270*/
  v11 = 0; /*0x100254277*/
  while ( 1 ) /*0x10025431e*/
  {
    if ( !v9 ) /*0x100254321*/
      core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1); /*0x1002548fa*/
    if ( v11 ) /*0x10025432a*/
    {
      if ( v10 < *(unsigned __int16 *)(v11 + 626) ) /*0x100254338*/
        goto LABEL_15; /*0x100254338*/
      goto LABEL_26; /*0x100254338*/
    }
    if ( !v10 ) /*0x10025434c*/
    {
      v11 = v8; /*0x10025437e*/
      goto LABEL_25; /*0x100254381*/
    }
    v11 = v8; /*0x100254351*/
    if ( (v10 & 7) == 0 ) /*0x100254358*/
    {
      v17 = v10; /*0x100254383*/
      if ( v10 < 8 ) /*0x10025438a*/
        goto LABEL_25; /*0x10025438a*/
      do /*0x1002543cd*/
      {
LABEL_24:
        v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 632) /*0x100254390*/
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v17 -= 8LL; /*0x1002543c9*/
      }
      while ( v17 ); /*0x1002543cd*/
      goto LABEL_25; /*0x1002543cd*/
    }
    v16 = 0; /*0x10025435a*/
    do /*0x10025436e*/
    {
      v11 = *(_QWORD *)(v11 + 632); /*0x100254360*/
      ++v16; /*0x100254368*/
    }
    while ( (v10 & 7) != v16 ); /*0x10025436e*/
    v17 = v10 - v16; /*0x100254373*/
    if ( v10 >= 8 ) /*0x10025437a*/
      goto LABEL_24; /*0x10025437a*/
LABEL_25:
    v8 = 0; /*0x1002543cf*/
    v10 = 0; /*0x1002543d1*/
    if ( *(_WORD *)(v11 + 626) ) /*0x1002543d3*/
    {
LABEL_15:
      v14 = v11; /*0x10025433e*/
      v15 = v10; /*0x100254341*/
      goto LABEL_28; /*0x100254344*/
    }
    do /*0x100254417*/
    {
LABEL_26:
      v14 = *(_QWORD *)(v11 + 352); /*0x1002543f0*/
      if ( !v14 ) /*0x1002543fb*/
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_837); /*0x1002548ec*/
      ++v8; /*0x100254401*/
      v15 = *(unsigned __int16 *)(v11 + 624); /*0x100254404*/
      v11 = *(_QWORD *)(v11 + 352); /*0x10025440d*/
    }
    while ( (unsigned __int16)v15 >= *(_WORD *)(v14 + 626) ); /*0x100254417*/
LABEL_28:
    if ( v8 ) /*0x10025441c*/
    {
      v18 = v14 + 8 * v15 + 640; /*0x100254422*/
      if ( (v8 & 7) != 0 ) /*0x100254431*/
      {
        v6 = 0; /*0x100254437*/
        do /*0x100254451*/
        {
          v11 = *(_QWORD *)v18; /*0x100254440*/
          v18 = *(_QWORD *)v18 + 632LL; /*0x100254443*/
          ++v6; /*0x10025444b*/
        }
        while ( (v8 & 7) != v6 ); /*0x100254451*/
        v7 = v8 - v6; /*0x100254456*/
        if ( v8 < 8 ) /*0x10025445d*/
          goto LABEL_34; /*0x10025445d*/
      }
      else
      {
        v7 = v8; /*0x1002546d1*/
        if ( v8 < 8 ) /*0x1002546d8*/
        {
LABEL_34:
          v19 = 0; /*0x1002544a2*/
          goto LABEL_36; /*0x1002544a4*/
        }
      }
      do /*0x1002544a0*/
      {
        v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 632LL) /*0x10025448d*/
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v18 = v11 + 632; /*0x100254494*/
        v7 -= 8LL; /*0x10025449c*/
      }
      while ( v7 ); /*0x1002544a0*/
      goto LABEL_34; /*0x1002544a0*/
    }
    v19 = v15 + 1; /*0x1002544a6*/
    v11 = v14; /*0x1002544aa*/
LABEL_36:
    v20 = v14 + 24 * v15 + 360; /*0x1002544ad*/
    v21 = 32 * v15; /*0x1002544b9*/
    v42 = v20; /*0x1002544bd*/
    if ( *(_BYTE *)(v14 + v21) != 3 ) /*0x1002544c8*/
    {
      v46.i64[0] = (__int64)&v42; /*0x1002547a8*/
      v46.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1002547b3*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_1017B9854, &v46); /*0x1002547c9*/
      v28 = *(__int128 *)((char *)v39[0].i128 + 8); /*0x1002547dc*/
      *(_QWORD *)(a1 + 8) = v39[0].i64[0]; /*0x1002547e3*/
      *(_OWORD *)(a1 + 16) = v28; /*0x1002547e7*/
LABEL_55:
      *(_QWORD *)a1 = 3; /*0x100254867*/
      goto LABEL_56; /*0x100254867*/
    }
    v35 = v19; /*0x1002544ce*/
    v22 = v21 + v14; /*0x1002544d5*/
    v23 = *(_QWORD *)(v22 + 16); /*0x1002544d8*/
    v24 = *(_QWORD *)(v22 + 24); /*0x1002544dc*/
    http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b( /*0x1002544eb*/
      v39,
      *(_QWORD *)(v20 + 8),
      *(_QWORD *)(v20 + 16),
      v22,
      v6,
      v7);
    if ( v39[0].i32[0] == 1 ) /*0x1002544f7*/
    {
      v46.i64[0] = (__int64)&v42; /*0x1002547f8*/
      v46.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x100254803*/
      v46.i64[2] = (__int64)v48; /*0x10025480b*/
      v46.i64[3] = (__int64)_$LT$http..header..name..InvalidHeaderName$u20$as$u20$core..fmt..Display$GT$::fmt::h3ae263927821ecca; /*0x100254816*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v37, &unk_1017B989F, &v46); /*0x10025482c*/
      v29 = v37; /*0x10025483f*/
      v43.i128[0] = v37; /*0x100254846*/
      v43.i64[2] = v38; /*0x100254854*/
      *(_QWORD *)(a1 + 24) = v38; /*0x10025485b*/
      *(_OWORD *)(a1 + 8) = v29; /*0x100254863*/
      goto LABEL_55; /*0x100254863*/
    }
    v43.i64[0] = v39[0].i64[1]; /*0x100254513*/
    v44 = *(__m256i *)((char *)v39 + 8); /*0x10025451a*/
    if ( v24 ) /*0x100254539*/
      break; /*0x100254539*/
LABEL_45:
    bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(v39, v23, v24); /*0x100254565*/
    v39[1].i8[0] = 0; /*0x100254573*/
    *(_DWORD *)&v34[3] = v39[1].i32[1]; /*0x1002545ba*/
    *(_DWORD *)v34 = *(__int32 *)((char *)v39[1].i32 + 1); /*0x1002545bd*/
    v43 = v39[0]; /*0x1002545ce*/
    v32 = v39[0]; /*0x1002545f9*/
    v33 = 0; /*0x100254623*/
    v45 = v44; /*0x10025462e*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(v39, v31, &v45, &v32); /*0x100254668*/
    if ( v39[1].i8[0] == 3 ) /*0x100254674*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002548de*/
        "size overflows MAX_SIZE",
        23,
        v48,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
    v47 = v39[1].i64[0]; /*0x100254681*/
    v46 = v39[0]; /*0x100254697*/
    if ( v39[1].i8[0] != 2 ) /*0x1002546b3*/
      (*(void (__fastcall **)(__int8 *, __int64, __int64))(v46.i64[0] + 32))(&v46.i8[24], v46.i64[1], v46.i64[2]); /*0x1002546c9*/
    v9 = 1; /*0x100254300*/
    v8 = 0; /*0x100254302*/
    v13 = v36-- == 1; /*0x100254307*/
    v10 = v35; /*0x100254311*/
    if ( v13 ) /*0x100254318*/
      goto LABEL_50; /*0x100254318*/
  }
  v25 = 0; /*0x10025453b*/
  while ( 1 ) /*0x100254551*/
  {
    v26 = *(_BYTE *)(v23 + v25); /*0x100254551*/
    if ( v26 <= 0x1Fu ) /*0x100254559*/
      break; /*0x100254559*/
    if ( v26 == 127 ) /*0x100254543*/
      goto LABEL_51; /*0x100254543*/
LABEL_41:
    if ( v24 == ++v25 ) /*0x10025454f*/
      goto LABEL_45; /*0x10025454f*/
  }
  if ( v26 == 9 ) /*0x10025455e*/
    goto LABEL_41; /*0x10025455e*/
LABEL_51:
  v46.i64[0] = (__int64)&v42; /*0x1002546fa*/
  v46.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x10025470c*/
  v46.i64[2] = (__int64)v48; /*0x100254714*/
  v46.i64[3] = (__int64)_$LT$http..header..value..InvalidHeaderValue$u20$as$u20$core..fmt..Display$GT$::fmt::h1648c0f90d2bbcf9; /*0x10025471f*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v37, &unk_1017B9832, &v46); /*0x100254735*/
  v27 = v37; /*0x100254748*/
  v43.i128[0] = v37; /*0x10025474f*/
  v43.i64[2] = v38; /*0x10025475d*/
  *(_QWORD *)(a1 + 24) = v38; /*0x100254764*/
  *(_OWORD *)(a1 + 8) = v27; /*0x10025476c*/
  *(_QWORD *)a1 = 3; /*0x100254770*/
  if ( v44.i64[0] ) /*0x100254781*/
    (*(void (__fastcall **)(__int8 *, __int64, __int64))(v44.i64[0] + 32))(&v44.i8[24], v44.i64[1], v44.i64[2]); /*0x100254799*/
LABEL_56:
  core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v31); /*0x10025486e*/
LABEL_57:
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v40); /*0x10025487a*/
  return a1; /*0x100254889*/
}