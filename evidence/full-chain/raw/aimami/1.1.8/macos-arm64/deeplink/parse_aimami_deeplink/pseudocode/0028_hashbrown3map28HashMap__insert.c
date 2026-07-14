// mac 1.1.8 parse_aimami_deeplink node va=0x10071b2e0 depth=2
// hashbrown3map28HashMap::insert
__int64 *__fastcall hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h0863545c6138448b(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // r12
  unsigned __int64 v6; // r13
  const __m128i *v7; // r11
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  __m128i v10; // xmm1
  const void *v11; // r15
  size_t v12; // rbx
  __int64 v13; // rdx
  __m128i v14; // xmm2
  __int64 i; // rcx
  unsigned __int64 v16; // r13
  __m128i v17; // xmm3
  const __m128i *v19; // r12
  const __m128i *v20; // r13
  int v21; // eax
  __int64 *v23; // r14
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __m128i v34; // [rsp+0h] [rbp-D0h] BYREF
  __m128i v35; // [rsp+10h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+28h] [rbp-A8h]
  __int64 v37; // [rsp+30h] [rbp-A0h]
  __int64 v38; // [rsp+38h] [rbp-98h]
  __int64 v39; // [rsp+40h] [rbp-90h]
  __int64 v40; // [rsp+48h] [rbp-88h]
  __int64 v41; // [rsp+50h] [rbp-80h]
  const __m128i *v42; // [rsp+58h] [rbp-78h]
  __int64 v43; // [rsp+60h] [rbp-70h]
  unsigned __int64 v44; // [rsp+68h] [rbp-68h]
  unsigned __int64 v45; // [rsp+70h] [rbp-60h]
  __int64 v46; // [rsp+78h] [rbp-58h]
  __int64 v47; // [rsp+80h] [rbp-50h]
  unsigned __int64 v48; // [rsp+88h] [rbp-48h]
  __int64 *v49; // [rsp+90h] [rbp-40h]
  __int64 *v50; // [rsp+98h] [rbp-38h]
  __int64 *v51; // [rsp+A0h] [rbp-30h]

  v51 = a4; /*0x10071b2f4*/
  v4 = a3; /*0x10071b2f8*/
  _RAX = core::hash::BuildHasher::hash_one::hf01745fa5506c7f9(a2 + 32, a3); /*0x10071b30b*/
  v6 = _RAX; /*0x10071b310*/
  if ( !*(_QWORD *)(a2 + 16) ) /*0x10071b313*/
    HIDWORD(_RAX) = (unsigned __int64)hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h50c0c5969bb24bb3( /*0x10071b5d0*/
                                        a2,
                                        1,
                                        a2 + 32,
                                        1) >> 32;
  v49 = a1; /*0x10071b31e*/
  v7 = *(const __m128i **)a2; /*0x10071b322*/
  v42 = (const __m128i *)a2; /*0x10071b325*/
  v8 = *(_QWORD *)(a2 + 8); /*0x10071b329*/
  v9 = v6 >> 57; /*0x10071b330*/
  v10 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v6 >> 57), (__m128i)0LL); /*0x10071b33d*/
  v11 = (const void *)v4[1]; /*0x10071b342*/
  v12 = v4[2]; /*0x10071b347*/
  v13 = 0; /*0x10071b34c*/
  v14 = (__m128i)-1LL; /*0x10071b34e*/
  for ( i = 0; ; i += 16 ) /*0x10071b352*/
  {
    v16 = v8 & v6; /*0x10071b354*/
    v17 = _mm_loadu_si128((const __m128i *)((char *)v7 + v16)); /*0x10071b357*/
    _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v17, v10)); /*0x10071b365*/
    if ( _R14D ) /*0x10071b36d*/
      break; /*0x10071b36d*/
LABEL_9:
    _R8 = v48; /*0x10071b420*/
    if ( v13 != 1 ) /*0x10071b428*/
    {
      _RAX = (unsigned int)_mm_movemask_epi8(v17); /*0x10071b42a*/
      if ( !(_DWORD)_RAX ) /*0x10071b430*/
      {
        v13 = 0; /*0x10071b450*/
        goto LABEL_15; /*0x10071b450*/
      }
      __asm { tzcnt r8d, eax } /*0x10071b432*/
      _R8 = v8 & (v16 + _R8); /*0x10071b43a*/
    }
    _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v17, v14)); /*0x10071b441*/
    if ( (_DWORD)_RAX ) /*0x10071b447*/
    {
      v27 = v7->i8[_R8]; /*0x10071b4c3*/
      v23 = v49; /*0x10071b4ca*/
      if ( v27 >= 0 ) /*0x10071b4ce*/
      {
        _EAX = _mm_movemask_epi8(_mm_load_si128(v7)); /*0x10071b5df*/
        __asm { tzcnt r8d, eax } /*0x10071b5e3*/
        v27 = v7->i8[_R8]; /*0x10071b5e8*/
      }
      v38 = v4[2]; /*0x10071b4d9*/
      v28 = *v4; /*0x10071b4e0*/
      v37 = v4[1]; /*0x10071b4e9*/
      v36 = v28; /*0x10071b4f0*/
      v29 = v51[1]; /*0x10071b4fe*/
      v39 = *v51; /*0x10071b502*/
      v40 = v29; /*0x10071b509*/
      v41 = v51[2]; /*0x10071b514*/
      v7->i8[_R8] = v9; /*0x10071b524*/
      v7[1].i8[v8 & (_R8 - 16)] = v9; /*0x10071b528*/
      v42[1] = _mm_sub_epi64( /*0x10071b549*/
                 _mm_loadu_si128(v42 + 1),
                 _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_10125B150), v27 & 1, 0));
      v30 = 0xFFFFFFFFFFFFFFDLL * _R8; /*0x10071b555*/
      v7[v30 - 1].i64[1] = v41; /*0x10071b55d*/
      v7[v30 - 1].i64[0] = v40; /*0x10071b569*/
      *((_QWORD *)&v7[v30 - 1] - 1) = v39; /*0x10071b575*/
      v7[v30 - 2].i64[0] = v38; /*0x10071b581*/
      v31 = v36; /*0x10071b586*/
      *((_QWORD *)&v7[v30 - 2] - 1) = v37; /*0x10071b594*/
      v7[v30 - 3].i64[0] = v31; /*0x10071b599*/
      *v23 = 0x8000000000000000LL; /*0x10071b5a8*/
      return v23; /*0x10071b5a8*/
    }
    v13 = 1; /*0x10071b449*/
LABEL_15:
    v48 = _R8; /*0x10071b452*/
    v6 = i + v16 + 16; /*0x10071b456*/
  }
  v50 = v4; /*0x10071b373*/
  v43 = v8; /*0x10071b377*/
  v34 = v10; /*0x10071b37b*/
  v44 = v9; /*0x10071b383*/
  v45 = v16; /*0x10071b387*/
  v46 = i; /*0x10071b38b*/
  v47 = v13; /*0x10071b38f*/
  v35 = v17; /*0x10071b393*/
  while ( 1 ) /*0x10071b39b*/
  {
    __asm { tzcnt eax, r14d } /*0x10071b39b*/
    if ( v12 == v7[-3 * (v8 & (v16 + _RAX)) - 2].i64[0] ) /*0x10071b3b6*/
    {
      v19 = &v7[-3 * (v8 & (v16 + _RAX))]; /*0x10071b3b8*/
      v20 = v7; /*0x10071b3c6*/
      v21 = memcmp(v11, (const void *)v19[-3].i64[1], v12); /*0x10071b3c9*/
      v7 = v20; /*0x10071b3ce*/
      if ( !v21 ) /*0x10071b3d3*/
        break; /*0x10071b3d3*/
    }
    _RAX = (unsigned int)(_R14D - 1); /*0x10071b3d9*/
    LOWORD(_RAX) = _R14D & (_R14D - 1); /*0x10071b3dd*/
    _R14D = _RAX; /*0x10071b3e1*/
    v4 = v50; /*0x10071b3e4*/
    v8 = v43; /*0x10071b3e8*/
    v10 = _mm_load_si128(&v34); /*0x10071b3ec*/
    v9 = v44; /*0x10071b3f4*/
    v16 = v45; /*0x10071b3f8*/
    v14 = (__m128i)-1LL; /*0x10071b3fc*/
    i = v46; /*0x10071b400*/
    v13 = v47; /*0x10071b404*/
    v17 = _mm_load_si128(&v35); /*0x10071b408*/
    if ( !(_WORD)_RAX ) /*0x10071b410*/
      goto LABEL_9; /*0x10071b410*/
  }
  v23 = v49; /*0x10071b469*/
  v49[2] = v19[-1].i64[1]; /*0x10071b46d*/
  v24 = v19[-2].i64[1]; /*0x10071b471*/
  v23[1] = v19[-1].i64[0]; /*0x10071b47b*/
  *v23 = v24; /*0x10071b47f*/
  v25 = v51; /*0x10071b482*/
  v19[-1].i64[1] = v51[2]; /*0x10071b48a*/
  v26 = *v25; /*0x10071b48f*/
  v19[-1].i64[0] = v25[1]; /*0x10071b496*/
  v19[-2].i64[1] = v26; /*0x10071b49b*/
  if ( *v50 ) /*0x10071b4a4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10071b4b9*/
  return v23; /*0x10071b5ae*/
}