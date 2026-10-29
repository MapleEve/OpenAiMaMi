// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::Trace::output_item::ha6e290e57a395df9; addr: 0x1005d7e50; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::Trace::output_item::ha6e290e57a395df9(
        _QWORD *a1,
        const void *a2,
        signed __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int64 a8,
        __int64 a9)
{
  char *v11; // rcx
  char *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned __int128 v22; // kr00_16
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  void *v27; // rax
  __int64 v28; // rbx
  void *v29; // rdi
  __int64 v30; // rdx
  void *v31; // rax
  void *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rax
  size_t v40; // rsi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v48; // eax
  __int64 v49; // [rsp+0h] [rbp-F0h]
  __int64 v50; // [rsp+18h] [rbp-D8h]
  __int64 v52; // [rsp+30h] [rbp-C0h]
  unsigned int v53; // [rsp+5Ch] [rbp-94h]
  __int64 v54; // [rsp+60h] [rbp-90h]
  __int64 *v55; // [rsp+68h] [rbp-88h]
  __int64 v56; // [rsp+70h] [rbp-80h] BYREF
  size_t v57; // [rsp+78h] [rbp-78h]
  __int64 v58; // [rsp+80h] [rbp-70h]
  size_t v59; // [rsp+88h] [rbp-68h]
  __int64 v60; // [rsp+90h] [rbp-60h]
  __int64 v61; // [rsp+98h] [rbp-58h]
  __int64 v62; // [rsp+A0h] [rbp-50h]
  __int64 v63; // [rsp+A8h] [rbp-48h]
  int v64; // [rsp+B4h] [rbp-3Ch]
  size_t v65; // [rsp+B8h] [rbp-38h]
  void *v66; // [rsp+C0h] [rbp-30h]

  switch ( a6 ) /*0x1005d7e91*/
  {
    case 7LL: /*0x1005d7e91*/
      if ( *(_DWORD *)a5 ^ 0x7373656D | *(_DWORD *)(a5 + 3) ^ 0x65676173 ) /*0x1005d7ea4*/
        goto LABEL_12; /*0x1005d7ea6*/
      v65 = 7; /*0x1005d7eb1*/
      v11 = "message"; /*0x1005d7eb5*/
      break; /*0x1005d7ebc*/
    case 9LL: /*0x1005d7e91*/
      if ( *(_QWORD *)a5 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(a5 + 8) ^ 0x67LL ) /*0x1005d7f17*/
        goto LABEL_12; /*0x1005d7f1a*/
      v65 = 9; /*0x1005d7f21*/
      v11 = "reasoning"; /*0x1005d7f25*/
      break; /*0x1005d7f2c*/
    case 13LL: /*0x1005d7e91*/
      if ( *(_QWORD *)a5 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(a5 + 5) ^ 0x6C6C61635F6E6F69LL ) /*0x1005d7ee3*/
        goto LABEL_12; /*0x1005d7ee6*/
      v65 = 8; /*0x1005d7ef1*/
      v11 = (char *)&unk_1016F25C0; /*0x1005d7ef5*/
      break; /*0x1005d7efc*/
    case 15LL: /*0x1005d7e91*/
      if ( *(_QWORD *)a5 ^ 0x726165735F626577LL | *(_QWORD *)(a5 + 7) ^ 0x6C6C61635F686372LL ) /*0x1005d7f49*/
        goto LABEL_12; /*0x1005d7f4c*/
      v65 = 10; /*0x1005d7f53*/
      v11 = "web_searchcommentary"; /*0x1005d7f57*/
      break; /*0x1005d7f5e*/
    case 16LL: /*0x1005d7e91*/
      a7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a5), (__m128i)xmmword_1016F1130); /*0x1005d7f65*/
      if ( _mm_testz_si128(a7, a7) ) /*0x1005d7f72*/
      {
        v65 = 6; /*0x1005d8445*/
        v11 = "customtool_searchnamedstream"; /*0x1005d8449*/
      }
      else
      {
        a7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a5), (__m128i)xmmword_1016F1140); /*0x1005d7f7d*/
        if ( !_mm_testz_si128(a7, a7) ) /*0x1005d7f8a*/
          goto LABEL_12; /*0x1005d7f8a*/
        v65 = 11; /*0x1005d845a*/
        v11 = "tool_searchnamedstream"; /*0x1005d845e*/
      }
      break; /*0x1005d8465*/
    default:
LABEL_12:
      v65 = 7; /*0x1005d7f90*/
      v11 = (char *)&unk_1016FD335; /*0x1005d7f99*/
      break; /*0x1005d7f99*/
  }
  v66 = v11; /*0x1005d7fa0*/
  v54 = 4; /*0x1005d7fa9*/
  v12 = "nonesluglogsnameroletoolstopseedautolastNULL"; /*0x1005d7fb0*/
  if ( a8 ) /*0x1005d7fba*/
  {
    if ( a9 == 12 ) /*0x1005d7fc8*/
    {
      v12 = "nonesluglogsnameroletoolstopseedautolastNULL"; /*0x1005d8038*/
      if ( !(*(_QWORD *)a8 ^ 0x6E615F6C616E6966LL | *(unsigned int *)(a8 + 8) ^ 0x72657773LL) ) /*0x1005d802b*/
        v12 = "finaloutput"; /*0x1005d803f*/
      v54 = ((*(_QWORD *)a8 ^ 0x6E615F6C616E6966LL | *(unsigned int *)(a8 + 8) ^ 0x72657773LL) == 0) | 4LL; /*0x1005d8047*/
    }
    else if ( a9 == 10 ) /*0x1005d7fce*/
    {
      v12 = "nonesluglogsnameroletoolstopseedautolastNULL"; /*0x1005d7ff1*/
      if ( !(*(_QWORD *)a8 ^ 0x61746E656D6D6F63LL | *(unsigned __int16 *)(a8 + 8) ^ 0x7972LL) ) /*0x1005d7fe7*/
        v12 = "commentary"; /*0x1005d7ff8*/
      v13 = 4; /*0x1005d8001*/
      if ( !(*(_QWORD *)a8 ^ 0x61746E656D6D6F63LL | *(unsigned __int16 *)(a8 + 8) ^ 0x7972LL) ) /*0x1005d7fe7*/
        v13 = 10; /*0x1005d8006*/
      v54 = v13; /*0x1005d800a*/
    }
  }
  v14 = *a1; /*0x1005d8055*/
  v15 = (__int64 *)(*a1 + 56LL); /*0x1005d8058*/
  v16 = *v15; /*0x1005d805c*/
  if ( !*v15 ) /*0x1005d805c*/
    v16 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v15); /*0x1005d8472*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(*(double *)a7.i64); /*0x1005d8069*/
  v55 = v15; /*0x1005d807e*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005d8078*/
  {
    v48 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16); /*0x1005d847a*/
    LOBYTE(v48) = v48 ^ 1; /*0x1005d847f*/
    v64 = v48; /*0x1005d8481*/
  }
  else
  {
    v64 = 0; /*0x1005d808b*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v12, v17); /*0x1005d8097*/
  v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(160, 8); /*0x1005d80a6*/
  if ( !v18 ) /*0x1005d80ae*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 160); /*0x1005d8493*/
  v19 = v18; /*0x1005d80b4*/
  v53 = a4; /*0x1005d80b7*/
  v20 = std::time::Instant::elapsed::h457f209775ed485c(v14 + 40); /*0x1005d80c2*/
  v22 = 0x3E8 * (unsigned __int128)(unsigned __int64)v20 + v21 / 0xF4240uLL; /*0x1005d80de*/
  v23 = 0; /*0x1005d80e5*/
  LOBYTE(v49) = 2; /*0x1005d80f5*/
  if ( a3 < 0 ) /*0x1005d8111*/
LABEL_30:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, a3); /*0x1005d8113*/
  if ( a3 ) /*0x1005d812a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14 + 40, 8, -*((_QWORD *)&v22 + 1)); /*0x1005d812c*/
    v23 = 1; /*0x1005d8131*/
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1005d8145*/
    if ( !v24 ) /*0x1005d814d*/
      goto LABEL_30; /*0x1005d814d*/
    v25 = v24; /*0x1005d814f*/
  }
  else
  {
    v25 = 1; /*0x1005d8154*/
  }
  memcpy((void *)v25, a2, a3); /*0x1005d816e*/
  LOBYTE(v52) = 3; /*0x1005d8173*/
  LOBYTE(v60) = 2; /*0x1005d8195*/
  v61 = 0; /*0x1005d8199*/
  v62 = v53; /*0x1005d81a1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, a2, v26); /*0x1005d81a5*/
  v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v65, 1); /*0x1005d81b6*/
  if ( !v27 ) /*0x1005d81be*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v65); /*0x1005d84b5*/
  v28 = (__int64)v27; /*0x1005d81c4*/
  v29 = v27; /*0x1005d81c7*/
  memcpy(v27, v66, v65); /*0x1005d81d1*/
  LOBYTE(v56) = 3; /*0x1005d81d6*/
  v57 = v65; /*0x1005d81da*/
  v58 = v28; /*0x1005d81de*/
  v59 = v65; /*0x1005d81e2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v66, v30); /*0x1005d81e6*/
  v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v54, 1); /*0x1005d81fa*/
  if ( !v31 ) /*0x1005d8202*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v54); /*0x1005d84c4*/
  v32 = v31; /*0x1005d8208*/
  memcpy(v31, v12, v54); /*0x1005d8218*/
  *(_BYTE *)(v19 + 128) = 3; /*0x1005d821d*/
  *(_QWORD *)(v19 + 136) = v54; /*0x1005d8225*/
  *(_QWORD *)(v19 + 144) = v32; /*0x1005d822c*/
  *(_QWORD *)(v19 + 152) = v54; /*0x1005d8233*/
  *(_QWORD *)(v19 + 24) = v50; /*0x1005d8241*/
  *(_QWORD *)(v19 + 16) = v22 | -(__int64)(*((_QWORD *)&v22 + 1) != 0); /*0x1005d824c*/
  *(_QWORD *)(v19 + 8) = 0; /*0x1005d825e*/
  *(_QWORD *)v19 = v49; /*0x1005d8262*/
  *(_QWORD *)(v19 + 56) = a3; /*0x1005d826c*/
  *(_QWORD *)(v19 + 48) = v25; /*0x1005d8277*/
  *(_QWORD *)(v19 + 40) = a3; /*0x1005d8289*/
  *(_QWORD *)(v19 + 32) = v52; /*0x1005d828d*/
  *(_QWORD *)(v19 + 88) = v63; /*0x1005d8295*/
  *(_QWORD *)(v19 + 80) = v62; /*0x1005d829d*/
  v33 = v60; /*0x1005d82a1*/
  *(_QWORD *)(v19 + 72) = v61; /*0x1005d82a9*/
  *(_QWORD *)(v19 + 64) = v33; /*0x1005d82ad*/
  *(_QWORD *)(v19 + 120) = v59; /*0x1005d82b5*/
  *(_QWORD *)(v19 + 112) = v58; /*0x1005d82bd*/
  v34 = v56; /*0x1005d82c1*/
  *(_QWORD *)(v19 + 104) = v57; /*0x1005d82c9*/
  *(_QWORD *)(v19 + 96) = v34; /*0x1005d82cd*/
  v61 = 5; /*0x1005d82d1*/
  v62 = v19; /*0x1005d82d9*/
  v63 = 5; /*0x1005d82dd*/
  LOBYTE(v60) = 4; /*0x1005d82e5*/
  v35 = *(_QWORD *)(v14 + 176); /*0x1005d82e9*/
  if ( v35 == 12 ) /*0x1005d82fb*/
  {
    v36 = *(_QWORD *)(v14 + 168); /*0x1005d82fd*/
    v37 = 0; /*0x1005d830f*/
    if ( (unsigned __int64)(v36 + 1) >= *(_QWORD *)(v14 + 152) ) /*0x1005d8314*/
      v37 = *(_QWORD *)(v14 + 152); /*0x1005d8314*/
    v38 = *(_QWORD *)(v14 + 160); /*0x1005d8318*/
    *(_QWORD *)(v14 + 168) = v36 - v37 + 1; /*0x1005d8327*/
    *(_QWORD *)(v14 + 176) = 11; /*0x1005d832e*/
    v39 = 32 * v36; /*0x1005d8339*/
    v40 = *(_QWORD *)(v38 + v39 + 8); /*0x1005d8341*/
    v56 = *(_QWORD *)(v38 + v39); /*0x1005d8346*/
    v59 = *(_QWORD *)(v38 + v39 + 24); /*0x1005d834f*/
    v58 = *(_QWORD *)(v38 + v39 + 16); /*0x1005d8358*/
    v57 = v40; /*0x1005d835c*/
    v35 = 11; /*0x1005d8360*/
    if ( (_BYTE)v56 != 6 ) /*0x1005d8368*/
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v56); /*0x1005d836e*/
      v35 = *(_QWORD *)(v14 + 176); /*0x1005d8373*/
    }
  }
  v59 = v63; /*0x1005d8385*/
  v58 = v62; /*0x1005d838d*/
  v57 = v61; /*0x1005d8399*/
  v56 = v60; /*0x1005d839d*/
  v41 = *(_QWORD *)(v14 + 152); /*0x1005d83a1*/
  if ( v35 == v41 ) /*0x1005d83a7*/
  {
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::grow::hd79b5bb231922937(); /*0x1005d83a9*/
    v41 = *(_QWORD *)(v14 + 152); /*0x1005d83ae*/
    v35 = *(_QWORD *)(v14 + 176); /*0x1005d83b5*/
  }
  *(_QWORD *)(v14 + 176) = v35 + 1; /*0x1005d83c0*/
  v42 = *(_QWORD *)(v14 + 168) + v35; /*0x1005d83c7*/
  v43 = 0; /*0x1005d83ce*/
  if ( v42 >= v41 ) /*0x1005d83d3*/
    v43 = v41; /*0x1005d83d3*/
  v44 = *(_QWORD *)(v14 + 160); /*0x1005d83da*/
  v45 = 32 * (v42 - v43); /*0x1005d83e1*/
  *(_QWORD *)(v44 + v45 + 24) = v63; /*0x1005d83e9*/
  *(_QWORD *)(v44 + v45 + 16) = v62; /*0x1005d83f2*/
  v46 = v60; /*0x1005d83f7*/
  *(_QWORD *)(v44 + v45 + 8) = v61; /*0x1005d83ff*/
  *(_QWORD *)(v44 + v45) = v46; /*0x1005d8404*/
  if ( !(_BYTE)v64 /*0x1005d849a*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v14 + 152) )
  {
    *(_BYTE *)(v14 + 64) = 1; /*0x1005d84a3*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v55); /*0x1005d842a*/
}