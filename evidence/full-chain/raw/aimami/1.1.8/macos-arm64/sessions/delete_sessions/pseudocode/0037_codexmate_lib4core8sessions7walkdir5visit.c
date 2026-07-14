// mac 1.1.8 delete_sessions node va=0x1001bced0 depth=2
// codexmate_lib4core8sessions7walkdir5visit
__int64 __fastcall codexmate_lib::core::sessions::walkdir::visit::h55602ccf7b5e00ae(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  void *v5; // r14
  size_t v6; // r15
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r12
  __m128d v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  _QWORD __src[132]; // [rsp+0h] [rbp-1230h] BYREF
  __int64 v17; // [rsp+420h] [rbp-E10h] BYREF
  char v18; // [rsp+428h] [rbp-E08h]
  __int64 v19; // [rsp+848h] [rbp-9E8h]
  __int64 v20; // [rsp+C70h] [rbp-5C0h]
  char v21; // [rsp+C78h] [rbp-5B8h]
  volatile signed __int64 *__dst[132]; // [rsp+C80h] [rbp-5B0h] BYREF
  _QWORD v23[18]; // [rsp+10A0h] [rbp-190h] BYREF
  __int64 v24; // [rsp+1130h] [rbp-100h] BYREF
  _QWORD v25[12]; // [rsp+1138h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+1198h] [rbp-98h]
  __int64 v27; // [rsp+11A0h] [rbp-90h]
  __int64 v28; // [rsp+11A8h] [rbp-88h]
  __int64 v29; // [rsp+11B0h] [rbp-80h]
  __int64 v30; // [rsp+11B8h] [rbp-78h]
  __int64 v31; // [rsp+11C0h] [rbp-70h]
  __int64 v32; // [rsp+11C8h] [rbp-68h] BYREF
  void *v33; // [rsp+11D0h] [rbp-60h]
  size_t __n; // [rsp+11D8h] [rbp-58h]
  __int64 v35; // [rsp+11E0h] [rbp-50h]
  char v36; // [rsp+11E8h] [rbp-48h]
  __int64 v37; // [rsp+11F0h] [rbp-40h]
  __int64 v38; // [rsp+11F8h] [rbp-38h]
  double v39; // [rsp+1200h] [rbp-30h]

  __src[65] = 0; /*0x1001bcee4*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v17, a1, a2); /*0x1001bcf03*/
  result = v17; /*0x1001bcf0f*/
  v35 = v17; /*0x1001bcf16*/
  v36 = v18; /*0x1001bcf1a*/
  if ( v18 == 2 ) /*0x1001bcf20*/
    goto LABEL_35; /*0x1001bcf20*/
  v17 = 0; /*0x1001bcf26*/
  v19 = 0; /*0x1001bcf31*/
  v20 = result; /*0x1001bcf3c*/
  v21 = v18; /*0x1001bcf43*/
  while ( 1 ) /*0x1001bcf72*/
  {
    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he040380398a2fb7a( /*0x1001bcf72*/
      __src,
      &v17);
    if ( !__src[0] ) /*0x1001bcf7f*/
      break; /*0x1001bcf7f*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1001bcf97*/
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v32, __dst); /*0x1001bcfa3*/
    v5 = v33; /*0x1001bcfa8*/
    v6 = __n; /*0x1001bcfac*/
    if ( (unsigned __int8)std::path::Path::is_dir::h7ca012509d3e379e(v33, __n) ) /*0x1001bcfb6*/
    {
      codexmate_lib::core::sessions::walkdir::visit::h55602ccf7b5e00ae(v5, v6, a3); /*0x1001bcfc8*/
      if ( v32 ) /*0x1001bcfd4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bcfde*/
      if ( !_InterlockedDecrement64(__dst[0]) ) /*0x1001bcfea*/
LABEL_3:
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x1001bcf60*/
    }
    else
    {
      std::fs::DirEntry::metadata::hcca7f11ed9733fc8(&v24, __dst); /*0x1001bd00e*/
      if ( (_DWORD)v24 == 1 ) /*0x1001bd01a*/
      {
        if ( (v25[0] & 3) == 1 ) /*0x1001bd02f*/
        {
          v38 = v25[0] - 1LL; /*0x1001bd035*/
          v7 = *(_QWORD *)(v25[0] + 7LL); /*0x1001bd03d*/
          if ( *(_QWORD *)v7 ) /*0x1001bd041*/
            (*(void (__fastcall **)(_QWORD))v7)(*(_QWORD *)(v25[0] - 1LL)); /*0x1001bd04d*/
          if ( *(_QWORD *)(v7 + 8) ) /*0x1001bd04f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bd061*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bd074*/
        }
        v39 = 0.0; /*0x1001bd07d*/
        v38 = 0; /*0x1001bd082*/
        v8 = v32; /*0x1001bd08a*/
        v9 = a3[2]; /*0x1001bd08e*/
        if ( v9 != *a3 ) /*0x1001bd095*/
          goto LABEL_31; /*0x1001bd095*/
        goto LABEL_30; /*0x1001bd095*/
      }
      qmemcpy(v23, v25, 0x60u); /*0x1001bd0b9*/
      v10 = v26; /*0x1001bd0bc*/
      v23[17] = v31; /*0x1001bd0d1*/
      v23[16] = v30; /*0x1001bd0dc*/
      v23[15] = v29; /*0x1001bd0e4*/
      v23[14] = v28; /*0x1001bd0f0*/
      v23[13] = v27; /*0x1001bd0f4*/
      v23[12] = v26; /*0x1001bd0f7*/
      std::fs::Metadata::modified::h0e075817eaa8c909(&v24, v23); /*0x1001bd108*/
      v38 = v10; /*0x1001bd118*/
      if ( LODWORD(v25[0]) == 1000000000 ) /*0x1001bd11c*/
      {
        if ( (v24 & 3) == 1 ) /*0x1001bd12d*/
        {
          v37 = v24 - 1; /*0x1001bd137*/
          v39 = *(double *)(v24 - 1); /*0x1001bd13f*/
          v11 = *(_QWORD *)(v24 + 7); /*0x1001bd143*/
          if ( *(_QWORD *)v11 ) /*0x1001bd147*/
            (*(void (__fastcall **)(double))v11)(COERCE_DOUBLE(*(_QWORD *)&v39)); /*0x1001bd154*/
          if ( *(_QWORD *)(v11 + 8) ) /*0x1001bd15a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bd169*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bd17c*/
        }
LABEL_27:
        v39 = 0.0; /*0x1001bd1b7*/
        v8 = v32; /*0x1001bd1c0*/
        v9 = a3[2]; /*0x1001bd1c4*/
        if ( v9 != *a3 ) /*0x1001bd1cb*/
          goto LABEL_31; /*0x1001bd1cb*/
LABEL_30:
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he8881f2a85c6b250(a3); /*0x1001bd220*/
        goto LABEL_31; /*0x1001bd223*/
      }
      v23[0] = v24; /*0x1001bd18a*/
      LODWORD(v23[1]) = v25[0]; /*0x1001bd191*/
      std::time::SystemTime::duration_since::had059553cab94f96(&v24, v23, 0, 0); /*0x1001bd1a9*/
      if ( (_DWORD)v24 == 1 ) /*0x1001bd1b5*/
        goto LABEL_27; /*0x1001bd1b5*/
      v12 = _mm_sub_pd((__m128d)_mm_unpacklo_ps((__m128)v25[0], (__m128)xmmword_10125B370), (__m128d)xmmword_10125B380); /*0x1001bd1e6*/
      v39 = (double)SLODWORD(v25[1]) / 1000000000.0 + _mm_unpackhi_pd(v12, v12).f64[0] + v12.f64[0]; /*0x1001bd206*/
      v8 = v32; /*0x1001bd20b*/
      v9 = a3[2]; /*0x1001bd20f*/
      if ( v9 == *a3 ) /*0x1001bd216*/
        goto LABEL_30; /*0x1001bd216*/
LABEL_31:
      v13 = a3[1]; /*0x1001bd228*/
      v14 = 5 * v9; /*0x1001bd22c*/
      *(_QWORD *)(v13 + 8 * v14) = v8; /*0x1001bd231*/
      *(_QWORD *)(v13 + 8 * v14 + 8) = v5; /*0x1001bd235*/
      *(_QWORD *)(v13 + 8 * v14 + 16) = v6; /*0x1001bd23a*/
      *(_QWORD *)(v13 + 8 * v14 + 24) = v38; /*0x1001bd243*/
      *(double *)(v13 + 8 * v14 + 32) = v39; /*0x1001bd24d*/
      a3[2] = v9 + 1; /*0x1001bd256*/
      if ( !_InterlockedDecrement64(__dst[0]) ) /*0x1001bd26f*/
        goto LABEL_3; /*0x1001bd273*/
    }
  }
  result = core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::he15cef2cd682728c(&v17); /*0x1001bd285*/
  if ( v36 == 2 ) /*0x1001bd28e*/
  {
    result = v35; /*0x1001bd290*/
LABEL_35:
    if ( (result & 3) == 1 ) /*0x1001bd29c*/
    {
      v15 = *(_QWORD *)(result + 7); /*0x1001bd2a6*/
      if ( *(_QWORD *)v15 ) /*0x1001bd2aa*/
        (*(void (__fastcall **)(_QWORD))v15)(*(_QWORD *)(result - 1)); /*0x1001bd2b6*/
      if ( *(_QWORD *)(v15 + 8) ) /*0x1001bd2b8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bd2ca*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001bd2dc*/
    }
  }
  return result; /*0x1001bd2e1*/
}