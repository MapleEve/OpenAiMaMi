// __ZN13codexmate_lib4core10repository20apply_imported_alias @ 0x100a79b70
// 1.2.3 NEW-delta | codexmate_lib::core::repository::apply_imported_alias | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void __fastcall codexmate_lib::core::repository::apply_imported_alias::hc61e9d63d54394e9(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  __m128i v7; // xmm1
  __int64 v8; // r13
  const void *v9; // r15
  size_t v10; // rdx
  __int64 v11; // rdi
  __m128i v12; // xmm2
  unsigned __int64 v13; // rax
  __m128i v14; // xmm3
  __int64 v16; // r12
  const void *v17; // rsi
  size_t v18; // r13
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  _QWORD *v22; // r14
  __int64 v23; // rax
  __m128i v24; // [rsp-98h] [rbp-98h] BYREF
  __m128i v25; // [rsp-88h] [rbp-88h] BYREF
  _QWORD v26[3]; // [rsp-78h] [rbp-78h] BYREF
  _QWORD *v27; // [rsp-60h] [rbp-60h]
  __int64 v28; // [rsp-58h] [rbp-58h]
  __int64 v29; // [rsp-50h] [rbp-50h]
  unsigned __int64 v30; // [rsp-48h] [rbp-48h]
  __int64 v31; // [rsp-40h] [rbp-40h]
  __int64 v32; // [rsp-38h] [rbp-38h]

  if ( a2 && !a1[35] && a2[3] ) /*0x100a79b9b*/
  {
    v27 = a1 + 33; /*0x100a79bad*/
    v4 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(a2 + 4, a1 + 24); /*0x100a79bc2*/
    v5 = *a2; /*0x100a79bce*/
    v6 = a2[1]; /*0x100a79bd1*/
    v7 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v4 >> 57), (__m128i)0LL); /*0x100a79bdd*/
    v8 = *a2 - 48; /*0x100a79be2*/
    v9 = (const void *)a1[25]; /*0x100a79be6*/
    v10 = a1[26]; /*0x100a79bed*/
    v11 = 0; /*0x100a79bf4*/
    v12 = (__m128i)-1LL; /*0x100a79bf6*/
    while ( 1 ) /*0x100a79bfa*/
    {
      v13 = v6 & v4; /*0x100a79bfa*/
      v14 = _mm_loadu_si128((const __m128i *)(v5 + v13)); /*0x100a79bfd*/
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v14, v7)); /*0x100a79c0b*/
      if ( (_DWORD)_RCX ) /*0x100a79c11*/
        break; /*0x100a79c11*/
LABEL_10:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v14, v12)) ) /*0x100a79ca2*/
        return; /*0x100a79ca8*/
      v4 = v13 + v11 + 16; /*0x100a79caa*/
      v11 += 16; /*0x100a79caf*/
    }
    v30 = v13; /*0x100a79c17*/
    v24 = v7; /*0x100a79c1b*/
    v31 = v6; /*0x100a79c23*/
    v32 = v11; /*0x100a79c27*/
    v25 = v14; /*0x100a79c2b*/
    while ( 1 ) /*0x100a79c30*/
    {
      v29 = _RCX; /*0x100a79c30*/
      __asm { tzcnt ecx, ecx } /*0x100a79c34*/
      v16 = -48LL * (v6 & (v13 + _RCX)); /*0x100a79c45*/
      if ( v10 == *(_QWORD *)(v8 - 48 * (v6 & (v13 + _RCX)) + 16) ) /*0x100a79c4e*/
      {
        v17 = *(const void **)(v8 - 48 * (v6 & (v13 + _RCX)) + 8); /*0x100a79c55*/
        v28 = v8; /*0x100a79c5c*/
        v18 = v10; /*0x100a79c60*/
        v19 = memcmp(v9, v17, v10); /*0x100a79c63*/
        v10 = v18; /*0x100a79c68*/
        v8 = v28; /*0x100a79c6b*/
        if ( !v19 ) /*0x100a79c71*/
          break; /*0x100a79c71*/
      }
      v20 = v29 - 1; /*0x100a79c77*/
      LOWORD(v20) = v29 & (v29 - 1); /*0x100a79c7a*/
      _RCX = v20; /*0x100a79c7d*/
      v13 = v30; /*0x100a79c7f*/
      v7 = _mm_load_si128(&v24); /*0x100a79c83*/
      v6 = v31; /*0x100a79c8b*/
      v11 = v32; /*0x100a79c8f*/
      v12 = (__m128i)-1LL; /*0x100a79c93*/
      v14 = _mm_load_si128(&v25); /*0x100a79c97*/
      if ( ((unsigned __int16)v29 & (unsigned __int16)(v29 - 1)) == 0 ) /*0x100a79c9c*/
        goto LABEL_10; /*0x100a79c9c*/
    }
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x100a79cc2*/
      *(_QWORD *)(v5 + v16 - 16),
      *(_QWORD *)(v5 + v16 - 8));
    if ( v21 ) /*0x100a79cca*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v26, v16 + v5 - 24); /*0x100a79cda*/
      v22 = v27; /*0x100a79cdf*/
      if ( *v27 ) /*0x100a79ce3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[34], *v27, 1); /*0x100a79cf7*/
      v22[2] = v26[2]; /*0x100a79d00*/
      v23 = v26[0]; /*0x100a79d04*/
      v22[1] = v26[1]; /*0x100a79d0c*/
      *v22 = v23; /*0x100a79d10*/
    }
  }
}