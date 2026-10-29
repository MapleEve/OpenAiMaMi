// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::worker::hd4cc4bbca6f7f453; addr: 0x10089f250; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:19Z
__int64 __fastcall codexmate_lib::core::analytics::index::worker::hd4cc4bbca6f7f453(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  const void *v7; // r15
  size_t v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r15
  const __m128i *v12; // r14
  bool v13; // of
  __int64 v14; // r12
  __int64 v15; // r13
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  const __m128i *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  char v23; // si
  __int64 v24; // rdi
  const __m128i *v25; // rdx
  __int64 v26; // rt0
  __int64 v27; // r14
  __int64 v29; // r8
  _QWORD v31[5]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v32[3]; // [rsp+28h] [rbp-48h] BYREF
  int v33; // [rsp+44h] [rbp-2Ch]

  if ( qword_101B46D70 ) /*0x10089f26e*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hcd92c356e4d6b6a3(&codexmate_lib::core::analytics::index::worker::WORKERS::hf9fe7da3ca93bcc0); /*0x10089f43c*/
    v4 = codexmate_lib::core::analytics::index::worker::WORKERS::hf9fe7da3ca93bcc0; /*0x10089f441*/
    if ( codexmate_lib::core::analytics::index::worker::WORKERS::hf9fe7da3ca93bcc0 ) /*0x10089f44b*/
      goto LABEL_3; /*0x10089f44b*/
  }
  else
  {
    v4 = codexmate_lib::core::analytics::index::worker::WORKERS::hf9fe7da3ca93bcc0; /*0x10089f274*/
    if ( codexmate_lib::core::analytics::index::worker::WORKERS::hf9fe7da3ca93bcc0 ) /*0x10089f27e*/
      goto LABEL_3; /*0x10089f27e*/
  }
  v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(&codexmate_lib::core::analytics::index::worker::WORKERS::hf9fe7da3ca93bcc0); /*0x10089f45d*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a3); /*0x10089f284*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10089f294*/
  {
    LODWORD(v6) = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4); /*0x10089f46a*/
    LOBYTE(v6) = v6 ^ 1; /*0x10089f46c*/
  }
  else
  {
    LODWORD(v6) = 0; /*0x10089f2a0*/
  }
  v7 = *(const void **)(a1 + 344); /*0x10089f2a9*/
  v8 = *(_QWORD *)(a1 + 352); /*0x10089f2b0*/
  if ( v8 ) /*0x10089f2ba*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, a2, v5); /*0x10089f2bc*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x10089f2ce*/
    if ( !v9 ) /*0x10089f2d4*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8); /*0x10089f2de*/
  }
  else
  {
    v9 = 1; /*0x10089f2e8*/
  }
  memcpy((void *)v9, v7, v8); /*0x10089f2f7*/
  v32[0] = v8; /*0x10089f2fc*/
  v32[1] = v9; /*0x10089f300*/
  v32[2] = v8; /*0x10089f304*/
  v10 = (__int64)v31; /*0x10089f30f*/
  hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h209a731747efac5e( /*0x10089f317*/
    v31,
    &unk_101B46D40,
    v32);
  v11 = v31[0]; /*0x10089f326*/
  v12 = (const __m128i *)v31[1]; /*0x10089f32a*/
  v13 = __OFSUB__(v31[0], 0x8000000000000000LL); /*0x10089f332*/
  if ( v31[0] != 0x8000000000000000LL ) /*0x10089f335*/
  {
    v33 = v6; /*0x10089f33b*/
    v14 = v31[2]; /*0x10089f33e*/
    v15 = v31[3]; /*0x10089f342*/
    v16 = v31[4]; /*0x10089f346*/
    v17 = _$LT$alloc..sync..Arc$LT$T$GT$$u20$as$u20$core..default..Default$GT$::default::h8be251c43eb9f2a6(); /*0x10089f34a*/
    v18 = *(const __m128i **)v15; /*0x10089f34f*/
    v19 = *(_QWORD *)(v15 + 8); /*0x10089f353*/
    v20 = v16 & v19; /*0x10089f35a*/
    _RDI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v15 + (v16 & v19)))); /*0x10089f362*/
    if ( !(_DWORD)_RDI ) /*0x10089f368*/
    {
      v29 = 16; /*0x10089f474*/
      do /*0x10089f48f*/
      {
        v20 = v19 & (v29 + v20); /*0x10089f47d*/
        _RDI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v18 + v20))); /*0x10089f485*/
        v29 += 16; /*0x10089f489*/
      }
      while ( !(_DWORD)_RDI ); /*0x10089f48f*/
    }
    __asm { tzcnt edi, edi } /*0x10089f36e*/
    _RDI = v19 & (v20 + _RDI); /*0x10089f375*/
    v23 = v18->i8[_RDI]; /*0x10089f378*/
    if ( v23 >= 0 ) /*0x10089f37f*/
    {
      _ESI = _mm_movemask_epi8(_mm_load_si128(v18)); /*0x10089f49b*/
      __asm { tzcnt edi, esi } /*0x10089f49f*/
      v23 = v18->i8[_RDI]; /*0x10089f4a3*/
    }
    v6 = v16 >> 57; /*0x10089f385*/
    v18->i8[_RDI] = v6; /*0x10089f390*/
    v18[1].i8[v19 & (_RDI - 16)] = v6; /*0x10089f393*/
    v24 = 32 * _RDI; /*0x10089f398*/
    v25 = &v18[v24 / 0xFFFFFFFFFFFFFFF0LL]; /*0x10089f39f*/
    v10 = -v24; /*0x10089f3aa*/
    v13 = __OFSUB__(v10, 1); /*0x10089f3aa*/
    *(__int64 *)((char *)v18[-2].i64 + v10) = v11; /*0x10089f3ad*/
    v25[-2].i64[1] = (__int64)v12; /*0x10089f3b2*/
    v25[-1].i64[0] = v14; /*0x10089f3b6*/
    v25[-1].i64[1] = v17; /*0x10089f3ba*/
    *(__m128i *)(v15 + 16) = _mm_sub_epi64( /*0x10089f3d7*/
                               _mm_loadu_si128((const __m128i *)(v15 + 16)),
                               _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1016E9AE0), v23 & 1, 0));
    v12 = v25; /*0x10089f3dd*/
    LOBYTE(v6) = v33; /*0x10089f3e0*/
  }
  v26 = _InterlockedIncrement64((volatile signed __int64 *)v12[-1].i64[1]); /*0x10089f3f8*/
  if ( (v26 < 0) ^ v13 | (v26 == 0) ) /*0x10089f3fc*/
    BUG(); /*0x10089f4c5*/
  v27 = v12[-1].i64[1]; /*0x10089f402*/
  if ( !(_BYTE)v6 /*0x10089f4ac*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10) )
  {
    byte_101B46D38 = 1; /*0x10089f4b9*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::core::analytics::index::worker::WORKERS::hf9fe7da3ca93bcc0); /*0x10089f41e*/
  return v27; /*0x10089f426*/
}