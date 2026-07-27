// __ZN13codexmate_lib4core5relay7breaker7is_open @ 0x100914f30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::breaker::is_open::h64931d1b1f502cdd(
        __int64 *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  __int64 v6; // r13
  char *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v13; // rbx
  __m128i v14; // xmm1
  __int64 v15; // r15
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
  char *v30; // [rsp+40h] [rbp-40h]
  __int64 v31; // [rsp+48h] [rbp-38h]
  int v32; // [rsp+54h] [rbp-2Ch]

  v6 = *a1; /*0x100914f4a*/
  v7 = *(char **)(*a1 + 16); /*0x100914f4d*/
  if ( !v7 ) /*0x100914f54*/
    v7 = (char *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v6 + 16); /*0x1009150a3*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x100914f5a*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100914f6a*/
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9); /*0x1009150ab*/
    LOBYTE(v10) = v10 ^ 1; /*0x1009150b0*/
    if ( *(_QWORD *)(v6 + 56) ) /*0x1009150b7*/
      goto LABEL_5; /*0x1009150bc*/
LABEL_18:
    LODWORD(v13) = 0; /*0x1009150c2*/
    if ( (_BYTE)v10 ) /*0x1009150c6*/
      goto LABEL_20; /*0x1009150c6*/
    goto LABEL_19; /*0x1009150c6*/
  }
  v10 = 0; /*0x100914f76*/
  if ( !*(_QWORD *)(v6 + 56) ) /*0x100914f82*/
    goto LABEL_18; /*0x100914f82*/
LABEL_5:
  v32 = v10; /*0x100914f88*/
  __s1 = a2; /*0x100914f8f*/
  __n = a3; /*0x100914f96*/
  v11 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v6 + 64, a2, a3); /*0x100914f9d*/
  _RCX = v11 >> 57; /*0x100914fa5*/
  v13 = *(_QWORD *)(v6 + 32); /*0x100914fa9*/
  v8 = *(_QWORD *)(v6 + 40); /*0x100914fad*/
  v14 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v11 >> 57), (__m128i)0LL); /*0x100914fb9*/
  v15 = v13 - 40; /*0x100914fbe*/
  v7 = nullptr; /*0x100914fc2*/
  v16 = (__m128i)-1LL; /*0x100914fc4*/
  while ( 1 ) /*0x100914fc8*/
  {
    v17 = v8 & v11; /*0x100914fc8*/
    v18 = _mm_loadu_si128((const __m128i *)(v13 + v17)); /*0x100914fcb*/
    _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v18, v14)); /*0x100914fd8*/
    if ( _R12D ) /*0x100914fe0*/
      break; /*0x100914fe0*/
LABEL_11:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v18, v16)); /*0x100915060*/
    if ( (_DWORD)_RCX ) /*0x10091506a*/
    {
      LODWORD(v13) = 0; /*0x100915088*/
      goto LABEL_15; /*0x100915088*/
    }
    v11 = (unsigned __int64)&v7[v17 + 16]; /*0x10091506c*/
    v7 += 16; /*0x100915071*/
  }
  v28 = v17; /*0x100914fe2*/
  v31 = a4; /*0x100914fe6*/
  v24 = v14; /*0x100914fea*/
  v29 = v8; /*0x100914fef*/
  v30 = v7; /*0x100914ff3*/
  v25 = v18; /*0x100914ff7*/
  while ( 1 ) /*0x100914ffc*/
  {
    __asm { tzcnt ecx, r12d } /*0x100914ffc*/
    _RCX = -(__int64)(v8 & (v17 + _RCX)); /*0x100915007*/
    v20 = 5 * _RCX; /*0x10091500a*/
    if ( __n == *(_QWORD *)(v15 + 40 * _RCX + 16) ) /*0x100915017*/
    {
      a2 = *(void **)(v15 + 40 * _RCX + 8); /*0x10091501d*/
      v7 = (char *)__s1; /*0x100915021*/
      if ( !memcmp(__s1, a2, __n) ) /*0x100915025*/
        break; /*0x100915025*/
    }
    v21 = _R12D - 1; /*0x10091502e*/
    LOWORD(v21) = _R12D & (_R12D - 1); /*0x100915033*/
    v22 = (_WORD)v21 == 0; /*0x100915033*/
    _R12D = v21; /*0x100915037*/
    v17 = v28; /*0x10091503a*/
    a4 = v31; /*0x10091503e*/
    v14 = _mm_load_si128(&v24); /*0x100915042*/
    v8 = v29; /*0x100915047*/
    v7 = v30; /*0x10091504b*/
    v16 = (__m128i)-1LL; /*0x10091504f*/
    v18 = _mm_load_si128(&v25); /*0x100915053*/
    if ( v22 ) /*0x100915058*/
      goto LABEL_11; /*0x100915058*/
  }
  LOBYTE(v13) = *(_QWORD *)(v13 + 8 * v20 - 16) > v31; /*0x100915083*/
LABEL_15:
  if ( !(_BYTE)v32 ) /*0x100915096*/
  {
LABEL_19:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1009150f5*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v7,
                             a2,
                             v8,
                             std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
    {
      *(_BYTE *)(v6 + 24) = 1; /*0x1009150fe*/
    }
  }
LABEL_20:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v6 + 16)); /*0x1009150db*/
  return (unsigned int)v13; /*0x1009150e6*/
}