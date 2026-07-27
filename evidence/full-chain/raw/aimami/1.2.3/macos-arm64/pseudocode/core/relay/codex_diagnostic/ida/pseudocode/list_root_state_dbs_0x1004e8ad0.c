// __ZN13codexmate_lib4core5relay16codex_diagnostic19list_root_state_dbs @ 0x1004e8ad0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::list_root_state_dbs::h55608faea2116e07(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  volatile signed __int64 *v4; // rcx
  volatile signed __int64 **v5; // r15
  char *v6; // r12
  _OWORD *v7; // r14
  __m128i si128; // xmm0
  signed __int64 epi64; // rax
  volatile signed __int64 **v10; // rbx
  _OWORD *v11; // r15
  char *v12; // r14
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  size_t v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  _OWORD *v19; // r15
  char *v20; // r14
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 result; // rax
  _QWORD __dst[130]; // [rsp+0h] [rbp-1110h] BYREF
  volatile signed __int64 *v27; // [rsp+410h] [rbp-D00h] BYREF
  char v28; // [rsp+418h] [rbp-CF8h]
  __int64 v29; // [rsp+838h] [rbp-8D8h]
  volatile signed __int64 *v30; // [rsp+C60h] [rbp-4B0h] BYREF
  char v31; // [rsp+C68h] [rbp-4A8h]
  _OWORD v32[66]; // [rsp+C70h] [rbp-4A0h] BYREF
  _QWORD *v33; // [rsp+1098h] [rbp-78h]
  __int64 v34; // [rsp+10A0h] [rbp-70h] BYREF
  void *v35; // [rsp+10A8h] [rbp-68h]
  size_t __n; // [rsp+10B0h] [rbp-60h]
  __int64 v37; // [rsp+10B8h] [rbp-58h] BYREF
  __int64 v38; // [rsp+10C0h] [rbp-50h]
  __int64 v39; // [rsp+10C8h] [rbp-48h]
  __m128i v40[4]; // [rsp+10D0h] [rbp-40h] BYREF

  __dst[29] = 0; /*0x1004e8ae4*/
  v3 = a1; /*0x1004e8af3*/
  v37 = 0; /*0x1004e8af6*/
  v38 = 8; /*0x1004e8afe*/
  v39 = 0; /*0x1004e8b06*/
  std::sys::fs::read_dir::h768dda1fe4336014(&v27, a2, a3); /*0x1004e8b15*/
  v4 = v27; /*0x1004e8b21*/
  *(_QWORD *)&v32[0] = v27; /*0x1004e8b28*/
  BYTE8(v32[0]) = v28; /*0x1004e8b2f*/
  if ( v28 != 2 ) /*0x1004e8b37*/
  {
    v33 = a1; /*0x1004e8b4a*/
    v27 = nullptr; /*0x1004e8b4e*/
    v29 = 0; /*0x1004e8b59*/
    v5 = &v30; /*0x1004e8b64*/
    v30 = v4; /*0x1004e8b6b*/
    v31 = v28; /*0x1004e8b72*/
    v6 = (char *)&v32[1] + 8; /*0x1004e8b78*/
    v7 = v32; /*0x1004e8b7f*/
    while ( 1 ) /*0x1004e8bc6*/
    {
      _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(v7); /*0x1004e8bc6*/
      if ( *(_QWORD *)&v32[0] ) /*0x1004e8bd3*/
      {
        v40[0] = *(__m128i *)((char *)v32 + 8); /*0x1004e8bdc*/
        memcpy(__dst, v6, sizeof(__dst)); /*0x1004e8beb*/
      }
      else
      {
        if ( v31 != 2 && !_InterlockedDecrement64(v30) ) /*0x1004e8c10*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v5); /*0x1004e8c19*/
        v31 = 2; /*0x1004e8c1e*/
        v40[0] = *(__m128i *)((char *)v32 + 8); /*0x1004e8c2c*/
        memcpy(__dst, v6, sizeof(__dst)); /*0x1004e8c42*/
        if ( (v32[0] & 1) == 0 ) /*0x1004e8c4a*/
        {
LABEL_32:
          core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae(&v27); /*0x1004e8e0a*/
          v3 = v33; /*0x1004e8e16*/
          goto LABEL_33; /*0x1004e8e16*/
        }
      }
      si128 = _mm_load_si128(v40); /*0x1004e8c50*/
      if ( si128.i64[0] ) /*0x1004e8c5d*/
      {
        v40[0] = si128; /*0x1004e8cc8*/
        memcpy(&v32[1], __dst, 0x410u); /*0x1004e8ccd*/
        v32[0] = _mm_load_si128(v40); /*0x1004e8cd7*/
        std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v34, v7); /*0x1004e8ce6*/
        v16 = __n; /*0x1004e8cef*/
        v40[0].i64[0] = (__int64)v35; /*0x1004e8cf3*/
        if ( !(unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b(v35, __n) /*0x1004e8d6b*/
          || (v17 = std::path::Path::file_name::hf6c2daad91e50ebf(v40[0].i64[0], v16)) == 0
          || (core::str::converts::from_utf8::hb32deb9559450f6e(__dst, v17, v18), LODWORD(__dst[0]) == 1)
          || __dst[2] <= 6u
          || *(_DWORD *)__dst[1] ^ 0x74617473 | *(unsigned __int16 *)(__dst[1] + 4LL) ^ 0x5F65
          || *(_DWORD *)(__dst[1] + __dst[2] - 7LL) ^ 0x6C71732E | *(_DWORD *)(__dst[1] + __dst[2] - 4LL) ^ 0x6574696C )
        {
          if ( v34 ) /*0x1004e8d76*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40[0].i64[0], v34, 1); /*0x1004e8d81*/
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)&v32[0]) ) /*0x1004e8d8d*/
            goto LABEL_5; /*0x1004e8d91*/
        }
        else
        {
          v19 = v7; /*0x1004e8da4*/
          v20 = v6; /*0x1004e8da7*/
          v21 = v34; /*0x1004e8daa*/
          v22 = v39; /*0x1004e8dae*/
          if ( v39 == v37 ) /*0x1004e8db6*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v37); /*0x1004e8dbc*/
          v23 = v38; /*0x1004e8dc1*/
          v24 = 3 * v22; /*0x1004e8dc5*/
          *(_QWORD *)(v38 + 8 * v24) = v21; /*0x1004e8dca*/
          *(_QWORD *)(v23 + 8 * v24 + 8) = v40[0].i64[0]; /*0x1004e8dd2*/
          *(_QWORD *)(v23 + 8 * v24 + 16) = v16; /*0x1004e8dd7*/
          v39 = v22 + 1; /*0x1004e8ddf*/
          v6 = v20; /*0x1004e8de3*/
          v7 = v19; /*0x1004e8de6*/
          v5 = &v30; /*0x1004e8de9*/
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)&v32[0]) ) /*0x1004e8dfe*/
            goto LABEL_5; /*0x1004e8e02*/
        }
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v7); /*0x1004e8d9a*/
      }
      else
      {
        epi64 = _mm_extract_epi64(si128, 1); /*0x1004e8c5f*/
        if ( (epi64 & 3) == 1 ) /*0x1004e8c6e*/
        {
          v10 = v5; /*0x1004e8c74*/
          v11 = v7; /*0x1004e8c77*/
          v12 = v6; /*0x1004e8c7a*/
          v40[0].i64[0] = epi64 - 1; /*0x1004e8c81*/
          v13 = *(_QWORD *)(epi64 - 1); /*0x1004e8c85*/
          v14 = *(_QWORD *)(epi64 + 7); /*0x1004e8c89*/
          if ( *(_QWORD *)v14 ) /*0x1004e8c8d*/
            (*(void (__fastcall **)(__int64))v14)(v13); /*0x1004e8c99*/
          v15 = *(_QWORD *)(v14 + 8); /*0x1004e8c9b*/
          if ( v15 ) /*0x1004e8ca2*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x1004e8caf*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40[0].i64[0], 24, 8); /*0x1004e8b9e*/
          v6 = v12; /*0x1004e8ba3*/
          v7 = v11; /*0x1004e8ba6*/
          v5 = v10; /*0x1004e8ba9*/
        }
      }
LABEL_5:
      if ( v31 == 2 ) /*0x1004e8bba*/
        goto LABEL_32; /*0x1004e8bba*/
    }
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(v32); /*0x1004e8b40*/
LABEL_33:
  v3[2] = v39; /*0x1004e8e1a*/
  result = v37; /*0x1004e8e22*/
  v3[1] = v38; /*0x1004e8e2a*/
  *v3 = result; /*0x1004e8e2e*/
  return result; /*0x1004e8e31*/
}