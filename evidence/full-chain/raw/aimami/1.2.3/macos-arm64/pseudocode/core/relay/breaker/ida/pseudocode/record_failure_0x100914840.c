// __ZN13codexmate_lib4core5relay7breaker14record_failure @ 0x100914840 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::breaker::record_failure::hf46755412870e316(
        _QWORD *a1,
        void *a2,
        signed __int64 a3,
        __int64 a4)
{
  __int64 v6; // r13
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int8 *v15; // rcx
  const __m128i *v16; // rdx
  const __m128i *v17; // rdi
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v21; // r10
  char v23; // r11
  unsigned __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 *v31; // rbx
  int v33; // eax
  __int64 v34; // r10
  _QWORD v36[3]; // [rsp+8h] [rbp-88h] BYREF
  const __m128i *v37; // [rsp+20h] [rbp-70h]
  unsigned __int64 v38; // [rsp+28h] [rbp-68h]
  _QWORD v39[3]; // [rsp+30h] [rbp-60h] BYREF
  void *__src; // [rsp+48h] [rbp-48h]
  __int64 v41; // [rsp+50h] [rbp-40h]
  __int64 *v42; // [rsp+58h] [rbp-38h]
  int v43; // [rsp+64h] [rbp-2Ch]

  __src = a2; /*0x100914857*/
  v6 = *a1; /*0x10091485b*/
  v7 = (__int64 *)(*a1 + 16LL); /*0x10091485e*/
  v8 = *v7; /*0x100914862*/
  if ( !*v7 ) /*0x100914862*/
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v7); /*0x100914a4c*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v8); /*0x10091486f*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10091487e*/
  {
    v33 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, v10); /*0x100914a54*/
    LOBYTE(v33) = v33 ^ 1; /*0x100914a59*/
    v43 = v33; /*0x100914a5b*/
  }
  else
  {
    v43 = 0; /*0x10091488a*/
  }
  v42 = v7; /*0x10091489d*/
  if ( a3 < 0 ) /*0x1009148a1*/
  {
    v11 = 0; /*0x1009148a3*/
    goto LABEL_7; /*0x1009148a3*/
  }
  if ( a3 ) /*0x1009148b3*/
  {
    v41 = a4; /*0x1009148b5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, a2); /*0x1009148b9*/
    v11 = 1; /*0x1009148be*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1009148cc*/
    if ( !v12 ) /*0x1009148d4*/
LABEL_7:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, a3); /*0x1009148a6*/
    v13 = v12; /*0x1009148d6*/
    a4 = v41; /*0x1009148d9*/
  }
  else
  {
    v13 = 1; /*0x1009148df*/
  }
  memcpy((void *)v13, __src, a3); /*0x1009148ee*/
  v39[0] = a3; /*0x1009148f3*/
  v39[1] = v13; /*0x1009148f7*/
  v39[2] = a3; /*0x1009148fb*/
  hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::hb251185e5c7d12e2( /*0x10091490d*/
    v36,
    v6 + 32,
    v39);
  v14 = v36[0]; /*0x10091491c*/
  v15 = (__int8 *)v36[1]; /*0x100914923*/
  if ( v36[0] != 0x8000000000000000LL ) /*0x10091492e*/
  {
    v16 = v37; /*0x100914934*/
    v17 = (const __m128i *)v37->i64[0]; /*0x10091493c*/
    v18 = v37->i64[1]; /*0x10091493f*/
    v19 = v38 & v18; /*0x100914946*/
    _RBX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v37->i64[0] + (v38 & v18)))); /*0x10091494f*/
    if ( !(_DWORD)_RBX ) /*0x100914955*/
    {
      v34 = 16; /*0x100914a63*/
      do /*0x100914a7f*/
      {
        v19 = v18 & (v34 + v19); /*0x100914a6c*/
        _RBX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v17 + v19))); /*0x100914a75*/
        v34 += 16; /*0x100914a79*/
      }
      while ( !(_DWORD)_RBX ); /*0x100914a7f*/
    }
    v21 = v36[2]; /*0x10091495b*/
    __asm { tzcnt ebx, ebx } /*0x10091495f*/
    _RBX = v18 & (v19 + _RBX); /*0x100914966*/
    v23 = v17->i8[_RBX]; /*0x100914969*/
    if ( v23 >= 0 ) /*0x100914971*/
    {
      _R11D = _mm_movemask_epi8(_mm_load_si128(v17)); /*0x100914a8b*/
      __asm { tzcnt ebx, r11d } /*0x100914a90*/
      v23 = v17->i8[_RBX]; /*0x100914a95*/
    }
    v24 = v38 >> 57; /*0x100914977*/
    v17->i8[_RBX] = v38 >> 57; /*0x100914982*/
    v17[1].i8[v18 & (_RBX - 16)] = v24; /*0x100914986*/
    v25 = -_RBX; /*0x10091498b*/
    v26 = 5 * v25; /*0x10091498e*/
    *((_QWORD *)&v17[-2] + v26 - 1) = v14; /*0x100914992*/
    v17[-2].i64[v26] = (__int64)v15; /*0x100914997*/
    v15 = &v17->i8[40 * v25]; /*0x10091499c*/
    *((_QWORD *)&v17[-1] + v26 - 1) = v21; /*0x1009149a8*/
    v17[-1].i64[v26] = 0; /*0x1009149ad*/
    v17->i32[2 * v26 - 2] = 0; /*0x1009149b6*/
    v16[1] = _mm_sub_epi64( /*0x1009149d7*/
               _mm_loadu_si128(v16 + 1),
               _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v23 & 1, 0));
  }
  v27 = 0xFFFFFFFFLL; /*0x1009149e1*/
  if ( *((_DWORD *)v15 - 2) != -1 ) /*0x1009149e6*/
    v27 = (unsigned int)(*((_DWORD *)v15 - 2) + 1); /*0x1009149e6*/
  v28 = 300000; /*0x1009149f1*/
  if ( (_DWORD)v27 == 2 ) /*0x1009149f6*/
    v28 = 30000; /*0x1009149f6*/
  v29 = 5000; /*0x1009149fd*/
  if ( (_DWORD)v27 != 1 ) /*0x100914a03*/
    v29 = v28; /*0x100914a03*/
  *((_DWORD *)v15 - 2) = v27; /*0x100914a07*/
  v30 = a4 + v29; /*0x100914a0a*/
  *((_QWORD *)v15 - 2) = v30; /*0x100914a0d*/
  v31 = v42; /*0x100914a15*/
  if ( !(_BYTE)v43 /*0x100914a9f*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v28,
                           v27,
                           30000,
                           std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(v6 + 24) = 1; /*0x100914aa8*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v31); /*0x100914a2d*/
  return v30; /*0x100914a35*/
}