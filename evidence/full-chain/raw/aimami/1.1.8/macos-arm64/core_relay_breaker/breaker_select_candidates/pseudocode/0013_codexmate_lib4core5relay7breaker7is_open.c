// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x100542be0 depth=2
__int64 __fastcall codexmate_lib::core::relay::breaker::is_open::h14b923abae8606ad(
        const __m128i **a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  const __m128i *v6; // r13
  pthread_mutex_t *v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __m128i v13; // xmm1
  __int64 v14; // r15
  __int64 v15; // rdi
  __m128i v16; // xmm2
  unsigned __int64 v17; // rax
  __m128i v18; // xmm3
  __int64 v20; // r14
  int v21; // eax
  bool v22; // zf
  __m128i v24; // [rsp+0h] [rbp-80h] BYREF
  __m128i v25; // [rsp+10h] [rbp-70h] BYREF
  size_t __n; // [rsp+20h] [rbp-60h]
  void *__s1; // [rsp+28h] [rbp-58h]
  unsigned __int64 v28; // [rsp+30h] [rbp-50h]
  __int64 v29; // [rsp+38h] [rbp-48h]
  __int64 v30; // [rsp+40h] [rbp-40h]
  __int64 v31; // [rsp+48h] [rbp-38h]
  int v32; // [rsp+54h] [rbp-2Ch]

  v6 = *a1; /*0x100542bfa*/
  v7 = (pthread_mutex_t *)(*a1)[1].i64[0]; /*0x100542bfd*/
  if ( !v7 ) /*0x100542c04*/
    v7 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v6[1].i64); /*0x100542d53*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x100542c0a*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100542c1a*/
  {
    LOBYTE(v8) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x100542d60*/
    if ( v6[3].i64[1] ) /*0x100542d67*/
      goto LABEL_5; /*0x100542d6c*/
LABEL_18:
    LODWORD(v11) = 0; /*0x100542d72*/
    if ( (_BYTE)v8 ) /*0x100542d76*/
      goto LABEL_20; /*0x100542d76*/
    goto LABEL_19; /*0x100542d76*/
  }
  v8 = 0; /*0x100542c26*/
  if ( !v6[3].i64[1] ) /*0x100542c32*/
    goto LABEL_18; /*0x100542c32*/
LABEL_5:
  v32 = v8; /*0x100542c38*/
  __s1 = a2; /*0x100542c3f*/
  __n = a3; /*0x100542c46*/
  v9 = core::hash::BuildHasher::hash_one::h245728ff9d912134(v6 + 4); /*0x100542c4d*/
  _RCX = v9 >> 57; /*0x100542c55*/
  v11 = v6[2].i64[0]; /*0x100542c59*/
  v12 = v6[2].i64[1]; /*0x100542c5d*/
  v13 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v9 >> 57), (__m128i)0LL); /*0x100542c69*/
  v14 = v11 - 40; /*0x100542c6e*/
  v15 = 0; /*0x100542c72*/
  v16 = (__m128i)-1LL; /*0x100542c74*/
  while ( 1 ) /*0x100542c78*/
  {
    v17 = v12 & v9; /*0x100542c78*/
    v18 = _mm_loadu_si128((const __m128i *)(v11 + v17)); /*0x100542c7b*/
    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v18, v13)); /*0x100542c88*/
    if ( _R12D ) /*0x100542c90*/
      break; /*0x100542c90*/
LABEL_11:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v18, v16)); /*0x100542d10*/
    if ( (_DWORD)_RCX ) /*0x100542d1a*/
    {
      LODWORD(v11) = 0; /*0x100542d38*/
      goto LABEL_15; /*0x100542d38*/
    }
    v9 = v17 + v15 + 16; /*0x100542d1c*/
    v15 += 16; /*0x100542d21*/
  }
  v28 = v17; /*0x100542c92*/
  v31 = a4; /*0x100542c96*/
  v24 = v13; /*0x100542c9a*/
  v29 = v12; /*0x100542c9f*/
  v30 = v15; /*0x100542ca3*/
  v25 = v18; /*0x100542ca7*/
  while ( 1 ) /*0x100542cac*/
  {
    __asm { tzcnt ecx, r12d } /*0x100542cac*/
    _RCX = -(__int64)(v12 & (v17 + _RCX)); /*0x100542cb7*/
    v20 = 5 * _RCX; /*0x100542cba*/
    if ( __n == *(_QWORD *)(v14 + 40 * _RCX + 16) && !memcmp(__s1, *(const void **)(v14 + 40 * _RCX + 8), __n) ) /*0x100542cd5*/
      break; /*0x100542cd5*/
    v21 = _R12D - 1; /*0x100542cde*/
    LOWORD(v21) = _R12D & (_R12D - 1); /*0x100542ce3*/
    v22 = (_WORD)v21 == 0; /*0x100542ce3*/
    _R12D = v21; /*0x100542ce7*/
    v17 = v28; /*0x100542cea*/
    a4 = v31; /*0x100542cee*/
    v13 = _mm_load_si128(&v24); /*0x100542cf2*/
    v12 = v29; /*0x100542cf7*/
    v15 = v30; /*0x100542cfb*/
    v16 = (__m128i)-1LL; /*0x100542cff*/
    v18 = _mm_load_si128(&v25); /*0x100542d03*/
    if ( v22 ) /*0x100542d08*/
      goto LABEL_11; /*0x100542d08*/
  }
  LOBYTE(v11) = *(_QWORD *)(v11 + 8 * v20 - 16) > v31; /*0x100542d33*/
LABEL_15:
  if ( !(_BYTE)v32 ) /*0x100542d46*/
  {
LABEL_19:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100542da5*/
      && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      v6[1].i8[8] = 1; /*0x100542dae*/
    }
  }
LABEL_20:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d((pthread_mutex_t *)v6[1].i64[0]); /*0x100542d8b*/
  return (unsigned int)v11; /*0x100542d96*/
}