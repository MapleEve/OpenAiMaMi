// __ZN13codexmate_lib4core8sessions7walkdir5visit @ 0x10053cb30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::sessions::walkdir::visit::h035c065a9896c8d4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx
  void *v5; // r14
  size_t v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rsi
  __m128d v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 result; // rax
  _QWORD __src[132]; // [rsp+0h] [rbp-1230h] BYREF
  __int64 v23; // [rsp+420h] [rbp-E10h] BYREF
  char v24; // [rsp+428h] [rbp-E08h]
  __int64 v25; // [rsp+848h] [rbp-9E8h]
  __int64 v26; // [rsp+C70h] [rbp-5C0h]
  char v27; // [rsp+C78h] [rbp-5B8h]
  volatile signed __int64 *__dst[132]; // [rsp+C80h] [rbp-5B0h] BYREF
  _QWORD v29[18]; // [rsp+10A0h] [rbp-190h] BYREF
  __int64 v30; // [rsp+1130h] [rbp-100h] BYREF
  _QWORD v31[12]; // [rsp+1138h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+1198h] [rbp-98h]
  __int64 v33; // [rsp+11A0h] [rbp-90h]
  __int64 v34; // [rsp+11A8h] [rbp-88h]
  __int64 v35; // [rsp+11B0h] [rbp-80h]
  __int64 v36; // [rsp+11B8h] [rbp-78h]
  __int64 v37; // [rsp+11C0h] [rbp-70h]
  __int64 v38; // [rsp+11C8h] [rbp-68h] BYREF
  void *v39; // [rsp+11D0h] [rbp-60h]
  size_t __n; // [rsp+11D8h] [rbp-58h]
  __int64 v41; // [rsp+11E0h] [rbp-50h] BYREF
  char v42; // [rsp+11E8h] [rbp-48h]
  __int64 v43; // [rsp+11F0h] [rbp-40h]
  __int64 v44; // [rsp+11F8h] [rbp-38h]
  double v45; // [rsp+1200h] [rbp-30h]

  __src[65] = 0; /*0x10053cb44*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v23, a1, a2); /*0x10053cb63*/
  v4 = v23; /*0x10053cb6f*/
  v41 = v23; /*0x10053cb76*/
  v42 = v24; /*0x10053cb7a*/
  if ( v24 == 2 ) /*0x10053cb7f*/
    return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(&v41); /*0x10053cef4*/
  v23 = 0; /*0x10053cb85*/
  v25 = 0; /*0x10053cb90*/
  v26 = v4; /*0x10053cb9b*/
  v27 = v24; /*0x10053cba2*/
  while ( 1 ) /*0x10053cbd2*/
  {
    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb16283f610dc29bd( /*0x10053cbd2*/
      __src,
      &v23);
    if ( !__src[0] ) /*0x10053cbdf*/
      break; /*0x10053cbdf*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x10053cbf7*/
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v38, __dst); /*0x10053cc03*/
    v5 = v39; /*0x10053cc08*/
    v6 = __n; /*0x10053cc0c*/
    if ( (unsigned __int8)std::path::Path::is_dir::h7ca012509d3e379e(v39, __n) ) /*0x10053cc16*/
    {
      codexmate_lib::core::sessions::walkdir::visit::h035c065a9896c8d4( /*0x10053cc28*/
        v5,
        v6,
        a3,
        v7,
        v8,
        v9,
        __src[0],
        __src[1],
        __src[2],
        __src[3]);
      if ( v38 ) /*0x10053cc34*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v38, 1); /*0x10053cc3e*/
      if ( !_InterlockedDecrement64(__dst[0]) ) /*0x10053cc4a*/
LABEL_3:
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x10053cbc0*/
    }
    else
    {
      std::fs::DirEntry::metadata::hcca7f11ed9733fc8(&v30, __dst); /*0x10053cc6e*/
      if ( (_DWORD)v30 == 1 ) /*0x10053cc7a*/
      {
        if ( (v31[0] & 3) == 1 ) /*0x10053cc8f*/
        {
          v44 = v31[0] - 1LL; /*0x10053cc95*/
          v10 = *(_QWORD *)(v31[0] - 1LL); /*0x10053cc99*/
          v11 = *(_QWORD *)(v31[0] + 7LL); /*0x10053cc9d*/
          if ( *(_QWORD *)v11 ) /*0x10053cca1*/
            (*(void (__fastcall **)(__int64))v11)(v10); /*0x10053ccad*/
          v12 = *(_QWORD *)(v11 + 8); /*0x10053ccaf*/
          if ( v12 ) /*0x10053ccb7*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x10053ccc1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 24, 8); /*0x10053ccd4*/
        }
        v45 = 0.0; /*0x10053ccdd*/
        v44 = 0; /*0x10053cce2*/
        v13 = v38; /*0x10053ccea*/
        v14 = a3[2]; /*0x10053ccee*/
        if ( v14 != *a3 ) /*0x10053ccf5*/
          goto LABEL_31; /*0x10053ccf5*/
        goto LABEL_30; /*0x10053ccf5*/
      }
      qmemcpy(v29, v31, 0x60u); /*0x10053cd19*/
      v15 = v32; /*0x10053cd1c*/
      v29[17] = v37; /*0x10053cd31*/
      v29[16] = v36; /*0x10053cd3c*/
      v29[15] = v35; /*0x10053cd44*/
      v29[14] = v34; /*0x10053cd50*/
      v29[13] = v33; /*0x10053cd54*/
      v29[12] = v32; /*0x10053cd57*/
      std::fs::Metadata::modified::h0e075817eaa8c909(&v30, v29); /*0x10053cd68*/
      v44 = v15; /*0x10053cd78*/
      if ( LODWORD(v31[0]) == 1000000000 ) /*0x10053cd7c*/
      {
        if ( (v30 & 3) == 1 ) /*0x10053cd8d*/
        {
          v43 = v30 - 1; /*0x10053cd97*/
          v45 = *(double *)(v30 - 1); /*0x10053cd9f*/
          v16 = *(_QWORD *)(v30 + 7); /*0x10053cda3*/
          if ( *(_QWORD *)v16 ) /*0x10053cda7*/
            (*(void (__fastcall **)(double))v16)(COERCE_DOUBLE(*(_QWORD *)&v45)); /*0x10053cdb4*/
          v17 = *(_QWORD *)(v16 + 8); /*0x10053cdba*/
          if ( v17 ) /*0x10053cdc2*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v45, v17, *(_QWORD *)(v16 + 16)); /*0x10053cdc9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, 24, 8); /*0x10053cddc*/
        }
LABEL_27:
        v45 = 0.0; /*0x10053ce17*/
        v13 = v38; /*0x10053ce20*/
        v14 = a3[2]; /*0x10053ce24*/
        if ( v14 != *a3 ) /*0x10053ce2b*/
          goto LABEL_31; /*0x10053ce2b*/
LABEL_30:
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hb1af0d312e7d08cb(a3); /*0x10053ce80*/
        goto LABEL_31; /*0x10053ce83*/
      }
      v29[0] = v30; /*0x10053cdea*/
      LODWORD(v29[1]) = v31[0]; /*0x10053cdf1*/
      std::time::SystemTime::duration_since::had059553cab94f96(&v30, v29, 0, 0); /*0x10053ce09*/
      if ( (_DWORD)v30 == 1 ) /*0x10053ce15*/
        goto LABEL_27; /*0x10053ce15*/
      v18 = _mm_sub_pd((__m128d)_mm_unpacklo_ps((__m128)v31[0], (__m128)xmmword_1015DBA50), (__m128d)xmmword_1015DBA60); /*0x10053ce46*/
      v45 = (double)SLODWORD(v31[1]) / 1000000000.0 + _mm_unpackhi_pd(v18, v18).f64[0] + v18.f64[0]; /*0x10053ce66*/
      v13 = v38; /*0x10053ce6b*/
      v14 = a3[2]; /*0x10053ce6f*/
      if ( v14 == *a3 ) /*0x10053ce76*/
        goto LABEL_30; /*0x10053ce76*/
LABEL_31:
      v19 = a3[1]; /*0x10053ce88*/
      v20 = 5 * v14; /*0x10053ce8c*/
      *(_QWORD *)(v19 + 8 * v20) = v13; /*0x10053ce91*/
      *(_QWORD *)(v19 + 8 * v20 + 8) = v5; /*0x10053ce95*/
      *(_QWORD *)(v19 + 8 * v20 + 16) = v6; /*0x10053ce9a*/
      *(_QWORD *)(v19 + 8 * v20 + 24) = v44; /*0x10053cea3*/
      *(double *)(v19 + 8 * v20 + 32) = v45; /*0x10053cead*/
      a3[2] = v14 + 1; /*0x10053ceb6*/
      if ( !_InterlockedDecrement64(__dst[0]) ) /*0x10053cecf*/
        goto LABEL_3; /*0x10053ced3*/
    }
  }
  result = core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(&v23); /*0x10053cee5*/
  if ( v42 == 2 ) /*0x10053ceee*/
    return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(&v41); /*0x10053ceee*/
  return result; /*0x10053cef9*/
}