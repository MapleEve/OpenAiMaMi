// __ZN13codexmate_lib4core10repository10Repository29reconcile_auto_switch_request @ 0x100a6f840
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::Repository::reconcile_auto_switch_request::h1410e94b2e717fe6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  __m128i v12; // xmm1
  __int64 v13; // r12
  const void *v14; // rdx
  size_t v15; // r10
  __int64 v16; // r15
  __m128i v17; // xmm2
  unsigned __int64 v18; // rax
  __m128i v19; // xmm3
  __m128i v20; // xmm0
  __int64 v22; // rcx
  const void *v23; // r15
  size_t v24; // r13
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __m128i v33; // [rsp+0h] [rbp-A0h] BYREF
  __m128i v34; // [rsp+10h] [rbp-90h] BYREF
  __int64 v35; // [rsp+28h] [rbp-78h]
  unsigned __int64 v36; // [rsp+30h] [rbp-70h]
  __int64 v37; // [rsp+38h] [rbp-68h]
  __int64 v38; // [rsp+40h] [rbp-60h]
  __int64 v39; // [rsp+48h] [rbp-58h]
  __int64 *v40; // [rsp+50h] [rbp-50h]
  __int64 v41; // [rsp+58h] [rbp-48h]
  int v42; // [rsp+60h] [rbp-40h]
  int v43; // [rsp+64h] [rbp-3Ch]
  __int64 v44; // [rsp+68h] [rbp-38h]
  __int64 v45; // [rsp+70h] [rbp-30h]

  v5 = a4; /*0x100a6f851*/
  v6 = a1; /*0x100a6f854*/
  if ( *(_DWORD *)(a3 + 152) == 2 ) /*0x100a6f85e*/
  {
    v7 = 0; /*0x100a6f863*/
LABEL_19:
    v30 = 0; /*0x100a6fa3e*/
    v31 = v5; /*0x100a6fa40*/
    goto LABEL_20; /*0x100a6fa40*/
  }
  v8 = a3 + 152; /*0x100a6f86a*/
  if ( *(_BYTE *)(a3 + 490) != 1 || !a5[3] ) /*0x100a6f87e*/
    goto LABEL_18; /*0x100a6f87e*/
  v44 = a2; /*0x100a6f889*/
  v42 = *(_DWORD *)(a4 + 8); /*0x100a6f891*/
  v45 = a4; /*0x100a6f894*/
  v43 = *(_DWORD *)(a4 + 12); /*0x100a6f89c*/
  v40 = a5; /*0x100a6f8aa*/
  v41 = a3; /*0x100a6f8ae*/
  v9 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(a5 + 4, a3 + 336); /*0x100a6f8b2*/
  v10 = *v40; /*0x100a6f8c6*/
  v11 = v40[1]; /*0x100a6f8c9*/
  v12 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v9 >> 57), (__m128i)0LL); /*0x100a6f8d5*/
  v13 = *v40 - 24; /*0x100a6f8da*/
  v14 = *(const void **)(v41 + 344); /*0x100a6f8de*/
  v15 = *(_QWORD *)(v41 + 352); /*0x100a6f8e5*/
  v16 = 0; /*0x100a6f8ec*/
  v17 = (__m128i)-1LL; /*0x100a6f8ef*/
  while ( 1 ) /*0x100a6f8f3*/
  {
    v18 = v11 & v9; /*0x100a6f8f3*/
    v19 = _mm_loadu_si128((const __m128i *)(v10 + v18)); /*0x100a6f8f6*/
    v20 = _mm_cmpeq_epi8(v19, v12); /*0x100a6f8ff*/
    _RCX = (unsigned int)_mm_movemask_epi8(v20); /*0x100a6f903*/
    v5 = v45; /*0x100a6f909*/
    a2 = v44; /*0x100a6f90d*/
    if ( (_DWORD)_RCX ) /*0x100a6f911*/
      break; /*0x100a6f911*/
LABEL_11:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v19, v17)) ) /*0x100a6f9b4*/
      goto LABEL_18; /*0x100a6f9ba*/
    v9 = v18 + v16 + 16; /*0x100a6f9bc*/
    v16 += 16; /*0x100a6f9c1*/
  }
  v36 = v18; /*0x100a6f917*/
  v37 = v10; /*0x100a6f91b*/
  v38 = v11; /*0x100a6f91f*/
  v33 = v12; /*0x100a6f923*/
  v39 = v16; /*0x100a6f92b*/
  v34 = v19; /*0x100a6f92f*/
  while ( 1 ) /*0x100a6f937*/
  {
    v35 = _RCX; /*0x100a6f937*/
    __asm { tzcnt ecx, ecx } /*0x100a6f93b*/
    v22 = -(__int64)(v11 & (v18 + _RCX)); /*0x100a6f945*/
    if ( v15 == *(_QWORD *)(v13 + 24 * v22 + 16) ) /*0x100a6f951*/
    {
      v23 = v14; /*0x100a6f95e*/
      v24 = v15; /*0x100a6f964*/
      v25 = memcmp(v14, *(const void **)(v13 + 24 * v22 + 8), v15); /*0x100a6f967*/
      v14 = v23; /*0x100a6f96c*/
      v15 = v24; /*0x100a6f96f*/
      if ( !v25 ) /*0x100a6f974*/
        break; /*0x100a6f974*/
    }
    v26 = v35 - 1; /*0x100a6f97a*/
    LOWORD(v26) = v35 & (v35 - 1); /*0x100a6f97d*/
    _RCX = v26; /*0x100a6f980*/
    v5 = v45; /*0x100a6f982*/
    a2 = v44; /*0x100a6f986*/
    v18 = v36; /*0x100a6f98a*/
    v10 = v37; /*0x100a6f98e*/
    v11 = v38; /*0x100a6f992*/
    v12 = _mm_load_si128(&v33); /*0x100a6f996*/
    v16 = v39; /*0x100a6f99e*/
    v17 = (__m128i)-1LL; /*0x100a6f9a2*/
    v19 = _mm_load_si128(&v34); /*0x100a6f9a6*/
    if ( ((unsigned __int16)v35 & (unsigned __int16)(v35 - 1)) == 0 ) /*0x100a6f9ae*/
      goto LABEL_11; /*0x100a6f9ae*/
  }
  v5 = v45; /*0x100a6f9d5*/
  a2 = v44; /*0x100a6f9d9*/
  if ( (*(_DWORD *)(v41 + 232) == 2 || *(_DWORD *)(v41 + 264) > v42) /*0x100a6fa00*/
    && (*(_DWORD *)(v41 + 272) == 2 || *(_DWORD *)(v41 + 304) > v43) )
  {
LABEL_18:
    a1 = v6; /*0x100a6fa38*/
    v7 = v8; /*0x100a6fa3b*/
    goto LABEL_19; /*0x100a6fa3b*/
  }
  v27 = v44; /*0x100a6fa10*/
  v28 = v45; /*0x100a6fa19*/
  v29 = codexmate_lib::core::repository::select_rotation_candidate::hfc64782647f30fde( /*0x100a6fa22*/
          *(_QWORD *)(v41 + 816),
          *(_QWORD *)(v41 + 824),
          v14,
          v15,
          v45,
          v40,
          *(double *)v20.i64,
          *(double *)v12.i64,
          *(double *)v17.i64,
          v33.i64[0],
          v33.i64[1],
          v34.i64[0],
          v34.i64[1]);
  a1 = v6; /*0x100a6fa27*/
  a2 = v27; /*0x100a6fa2a*/
  v7 = v8; /*0x100a6fa2d*/
  v30 = v29; /*0x100a6fa30*/
  v31 = v28; /*0x100a6fa33*/
LABEL_20:
  codexmate_lib::core::repository::Repository::sync_auto_switch_request::h65844a159a40ab13(a1, a2, v7, v30, v31); /*0x100a6fa43*/
  return v6; /*0x100a6fa4b*/
}