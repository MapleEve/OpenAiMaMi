// __ZN13codexmate_lib4core5relay7breaker14record_success @ 0x100914ad0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::breaker::record_success::h89f703488f35bc78(
        __int64 *a1,
        void *a2,
        size_t a3)
{
  void *v4; // r14
  __int64 v5; // r12
  char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  unsigned __int64 v14; // rax
  __m128i v15; // xmm3
  __int64 v17; // rcx
  size_t v18; // rbx
  __int64 v19; // r15
  unsigned int v20; // eax
  __m128i v22; // [rsp+0h] [rbp-80h] BYREF
  __m128i v23; // [rsp+10h] [rbp-70h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h]
  unsigned __int64 v25; // [rsp+30h] [rbp-50h]
  __int64 v26; // [rsp+38h] [rbp-48h]
  char *v27; // [rsp+40h] [rbp-40h]
  void *__s1; // [rsp+48h] [rbp-38h]
  int v29; // [rsp+54h] [rbp-2Ch]

  v4 = a2; /*0x100914ae4*/
  v5 = *a1; /*0x100914ae7*/
  v6 = *(char **)(*a1 + 16); /*0x100914aea*/
  if ( !v6 ) /*0x100914af2*/
    v6 = (char *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v5 + 16); /*0x100914c88*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x100914af8*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100914b07*/
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x100914c95*/
    LOBYTE(v9) = v9 ^ 1; /*0x100914c97*/
    if ( !*(_QWORD *)(v5 + 56) ) /*0x100914ca0*/
      goto LABEL_14; /*0x100914ca6*/
  }
  else
  {
    v9 = 0; /*0x100914b13*/
    if ( !*(_QWORD *)(v5 + 56) ) /*0x100914b21*/
      goto LABEL_14; /*0x100914b21*/
  }
  v29 = v9; /*0x100914b27*/
  v10 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v5 + 64, a2, a3); /*0x100914b35*/
  v11 = *(_QWORD *)(v5 + 32); /*0x100914b41*/
  v7 = *(_QWORD *)(v5 + 40); /*0x100914b46*/
  v12 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v10 >> 57), (__m128i)0LL); /*0x100914b53*/
  a2 = (void *)(v11 - 40); /*0x100914b58*/
  v6 = nullptr; /*0x100914b5c*/
  v13 = (__m128i)-1LL; /*0x100914b5e*/
  while ( 1 ) /*0x100914b62*/
  {
    v14 = v7 & v10; /*0x100914b62*/
    v15 = _mm_loadu_si128((const __m128i *)(v11 + v14)); /*0x100914b65*/
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v15, v12)); /*0x100914b74*/
    if ( (_DWORD)_RCX ) /*0x100914b7a*/
      break; /*0x100914b7a*/
LABEL_11:
    LOBYTE(v9) = v29; /*0x100914c10*/
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v13)) ) /*0x100914c14*/
      goto LABEL_14; /*0x100914c24*/
    v10 = (unsigned __int64)&v6[v14 + 16]; /*0x100914c26*/
    v6 += 16; /*0x100914c2b*/
  }
  v25 = v14; /*0x100914b80*/
  __s1 = v4; /*0x100914b84*/
  v26 = v7; /*0x100914b88*/
  v22 = v12; /*0x100914b8c*/
  v27 = v6; /*0x100914b91*/
  v23 = v15; /*0x100914b95*/
  while ( 1 ) /*0x100914b9a*/
  {
    v24 = _RCX; /*0x100914b9a*/
    __asm { tzcnt ecx, ecx } /*0x100914b9e*/
    v17 = -(__int64)(v7 & (v14 + _RCX)); /*0x100914ba8*/
    v18 = a3; /*0x100914bab*/
    v19 = 5 * v17; /*0x100914bae*/
    if ( v18 == *((_QWORD *)a2 + 5 * v17 + 2) ) /*0x100914bb7*/
    {
      v6 = (char *)__s1; /*0x100914bc4*/
      if ( !memcmp(__s1, *((const void **)a2 + 5 * v17 + 1), v18) ) /*0x100914bcb*/
        break; /*0x100914bcb*/
    }
    v20 = v24 - 1; /*0x100914bdb*/
    LOWORD(v20) = v24 & (v24 - 1); /*0x100914bde*/
    _RCX = v20; /*0x100914be1*/
    v14 = v25; /*0x100914be3*/
    a3 = v18; /*0x100914be7*/
    v4 = __s1; /*0x100914bea*/
    v7 = v26; /*0x100914bee*/
    v12 = _mm_load_si128(&v22); /*0x100914bf2*/
    v6 = v27; /*0x100914bf7*/
    v13 = (__m128i)-1LL; /*0x100914bfb*/
    v15 = _mm_load_si128(&v23); /*0x100914bff*/
    if ( ((unsigned __int16)v24 & (unsigned __int16)(v24 - 1)) == 0 ) /*0x100914c04*/
      goto LABEL_11; /*0x100914c04*/
  }
  *(_DWORD *)(v11 + 8 * v19 - 8) = 0; /*0x100914c34*/
  *(_QWORD *)(v11 + 8 * v19 - 16) = 0; /*0x100914c3d*/
  LOBYTE(v9) = v29; /*0x100914c4d*/
LABEL_14:
  if ( !(_BYTE)v9 /*0x100914cae*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v6,
                           a2,
                           v7,
                           std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(v5 + 24) = 1; /*0x100914cb7*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v5 + 16)); /*0x100914c6b*/
}