// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::status::h78b71e6d4a3ce1f7; addr: 0x10089e290; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:19Z
volatile signed __int64 *__fastcall codexmate_lib::core::analytics::index::status::h78b71e6d4a3ce1f7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128i si128)
{
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // rsi
  int v9; // eax
  __int8 v10; // bl
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int128 v13; // kr00_16
  __int64 v14; // rsi
  volatile signed __int64 *v15; // r15
  const __m128i *v17; // r12
  const __m128i *v19; // r13
  volatile signed __int64 *v20; // r15
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 *v29; // rsi
  volatile signed __int64 *v30; // r15
  _BYTE *v31; // rdi
  char v32; // r13
  unsigned __int64 v33; // r14
  __m128i v34; // xmm0
  __int64 v35; // rbx
  char v36; // dl
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rcx
  volatile signed __int64 *result; // rax
  __int64 v41; // [rsp+8h] [rbp-278h] BYREF
  __m128i v42; // [rsp+10h] [rbp-270h]
  __int64 v43; // [rsp+20h] [rbp-260h]
  __int128 v44; // [rsp+28h] [rbp-258h]
  __int128 v45; // [rsp+38h] [rbp-248h]
  __m512i v46; // [rsp+48h] [rbp-238h] BYREF
  __m512i v47; // [rsp+88h] [rbp-1F8h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-1B8h]
  __m128i v49; // [rsp+D0h] [rbp-1B0h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-198h]
  __m256i v51; // [rsp+F0h] [rbp-190h] BYREF
  __int128 v52; // [rsp+110h] [rbp-170h]
  __int128 v53; // [rsp+120h] [rbp-160h]
  __int64 v54; // [rsp+130h] [rbp-150h]
  __int64 v55; // [rsp+138h] [rbp-148h]
  const __m128i *v56; // [rsp+140h] [rbp-140h]
  volatile signed __int64 *v57; // [rsp+148h] [rbp-138h]
  _BYTE __src[88]; // [rsp+150h] [rbp-130h] BYREF
  __int64 v59; // [rsp+1A8h] [rbp-D8h]
  volatile signed __int64 *v60; // [rsp+1B8h] [rbp-C8h] BYREF
  __m256i *v61; // [rsp+1C0h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+1C8h] [rbp-B8h] BYREF
  __m512i v63; // [rsp+1D0h] [rbp-B0h] BYREF
  __m256i v64; // [rsp+210h] [rbp-70h] BYREF
  __int128 v65; // [rsp+230h] [rbp-50h]
  __int128 v66; // [rsp+240h] [rbp-40h]
  char v67; // [rsp+257h] [rbp-29h]

  v5 = a1; /*0x10089e2a7*/
  v60 = (volatile signed __int64 *)codexmate_lib::core::analytics::index::worker::hd4cc4bbca6f7f453(a2); /*0x10089e2b2*/
  v67 = *((_BYTE *)v60 + 105); /*0x10089e2bd*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10089e2d6*/
    __src,
    a3,
    "SELECT value FROM meta WHERE key='scan_complete'SELECT EXISTS(SELECT 1 FROM files WHERE incomplete=1 OR failed=1 OR "
    "complete=0)SELECT value FROM meta WHERE key='updated_at'",
    48);
  v64 = *(__m256i *)&__src[8]; /*0x10089e2f2*/
  v65 = *(_OWORD *)&__src[40]; /*0x10089e31e*/
  v66 = *(_OWORD *)&__src[56]; /*0x10089e334*/
  if ( *(_DWORD *)__src == 1 ) /*0x10089e346*/
  {
    v63.i128[3] = v66; /*0x10089e354*/
    v63.i128[2] = v65; /*0x10089e367*/
    v63.i128[1] = v64.i128[1]; /*0x10089e37d*/
    v63.i128[0] = v64.i128[0]; /*0x10089e393*/
    goto LABEL_13; /*0x10089e39a*/
  }
  v53 = v66; /*0x10089e3ae*/
  v52 = v65; /*0x10089e3c4*/
  v51 = v64; /*0x10089e3da*/
  v6 = sqlite3_bind_parameter_count(*((sqlite3_stmt **)&v66 + 1)); /*0x10089e3fe*/
  if ( !v6 ) /*0x10089e405*/
  {
    v61 = &v51; /*0x10089e432*/
    v62 = 0; /*0x10089e439*/
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10089e452*/
      __src,
      &v61);
    v7 = *(_QWORD *)__src; /*0x10089e457*/
    if ( *(_QWORD *)__src == 0x8000000000000016LL ) /*0x10089e461*/
    {
      v8 = &v62; /*0x10089e463*/
      if ( v62 ) /*0x10089e472*/
      {
        rusqlite::row::Row::get::h28ab7a83373c8ebc(&v63, &v62, 0, &off_101AB6C78); /*0x10089e484*/
LABEL_11:
        core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h2239e9987ac3b07a(&v61); /*0x10089e527*/
        goto LABEL_12; /*0x10089e52e*/
      }
      v7 = 0x8000000000000009LL; /*0x10089e4d9*/
    }
    else
    {
      v8 = *(__int64 **)&__src[8]; /*0x10089e48e*/
      v64 = *(__m256i *)&__src[16]; /*0x10089e49c*/
      v65 = *(_OWORD *)&__src[48]; /*0x10089e4c8*/
    }
    v63.i64[0] = v7; /*0x10089e4dd*/
    v63.i64[1] = (__int64)v8; /*0x10089e4e4*/
    *(__m256i *)&v63.u128[1] = v64; /*0x10089e4f3*/
    v63.i128[3] = v65; /*0x10089e51b*/
    goto LABEL_11; /*0x10089e51b*/
  }
  v63.i128[0] = 0x8000000000000013LL; /*0x10089e40d*/
  v63.i64[2] = v6; /*0x10089e41f*/
LABEL_12:
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(&v51); /*0x10089e533*/
LABEL_13:
  if ( v63.i64[0] == 0x8000000000000016LL ) /*0x10089e549*/
  {
    v49.i8[0] = v63.i8[8]; /*0x10089e552*/
  }
  else
  {
    if ( v63.i64[0] != 0x8000000000000009LL ) /*0x10089e561*/
    {
      v47 = v63; /*0x10089e6ed*/
      *(_QWORD *)__src = &v47; /*0x10089e756*/
      *(_QWORD *)&__src[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089e764*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v64, &unk_101902300, __src); /*0x10089e77d*/
      v10 = v64.i8[0]; /*0x10089e782*/
      *(_OWORD *)__src = *(__int128 *)((char *)v64.i128 + 1); /*0x10089e78a*/
      *(_QWORD *)&__src[15] = v64.i64[2]; /*0x10089e7a0*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v47); /*0x10089e7ae*/
LABEL_44:
      memcpy((void *)(a1 + 9), __src, 0x57u); /*0x10089ead6*/
      *(_QWORD *)a1 = 10; /*0x10089eaec*/
      *(_BYTE *)(a1 + 8) = v10; /*0x10089eaf4*/
      goto LABEL_76; /*0x10089eaf9*/
    }
    v49.i8[0] = 2; /*0x10089e567*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v63); /*0x10089e575*/
  }
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10089e590*/
    __src,
    a3,
    "SELECT EXISTS(SELECT 1 FROM files WHERE incomplete=1 OR failed=1 OR complete=0)SELECT value FROM meta WHERE key='updated_at'",
    79);
  v64 = *(__m256i *)&__src[8]; /*0x10089e5a2*/
  v65 = *(_OWORD *)&__src[40]; /*0x10089e5ce*/
  v66 = *(_OWORD *)&__src[56]; /*0x10089e5e4*/
  if ( *(_DWORD *)__src == 1 ) /*0x10089e5f6*/
  {
    v63.i128[3] = v66; /*0x10089e604*/
    v63.i128[2] = v65; /*0x10089e617*/
    v63.i128[1] = v64.i128[1]; /*0x10089e62d*/
    v63.i128[0] = v64.i128[0]; /*0x10089e643*/
    goto LABEL_30; /*0x10089e64a*/
  }
  v53 = v66; /*0x10089e65e*/
  v52 = v65; /*0x10089e674*/
  v51 = v64; /*0x10089e68a*/
  v9 = sqlite3_bind_parameter_count(*((sqlite3_stmt **)&v66 + 1)); /*0x10089e6ae*/
  if ( !v9 ) /*0x10089e6b5*/
  {
    v61 = &v51; /*0x10089e7bf*/
    v62 = 0; /*0x10089e7c6*/
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10089e7df*/
      __src,
      &v61);
    v11 = *(_QWORD *)__src; /*0x10089e7e4*/
    if ( *(_QWORD *)__src == 0x8000000000000016LL ) /*0x10089e7ee*/
    {
      v12 = &v62; /*0x10089e7f0*/
      if ( v62 ) /*0x10089e7ff*/
      {
        rusqlite::row::Row::get::h28ab7a83373c8ebc(&v63, &v62, 0, &off_101AB6C60); /*0x10089e811*/
LABEL_28:
        core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h2239e9987ac3b07a(&v61); /*0x10089e8b4*/
        goto LABEL_29; /*0x10089e8bb*/
      }
      v11 = 0x8000000000000009LL; /*0x10089e866*/
    }
    else
    {
      v12 = *(__int64 **)&__src[8]; /*0x10089e81b*/
      v64 = *(__m256i *)&__src[16]; /*0x10089e829*/
      v65 = *(_OWORD *)&__src[48]; /*0x10089e855*/
    }
    v63.i64[0] = v11; /*0x10089e86a*/
    v63.i64[1] = (__int64)v12; /*0x10089e871*/
    *(__m256i *)&v63.u128[1] = v64; /*0x10089e880*/
    v63.i128[3] = v65; /*0x10089e8ac*/
    goto LABEL_28; /*0x10089e8ac*/
  }
  v63.i128[0] = 0x8000000000000013LL; /*0x10089e6c1*/
  v63.i64[2] = v9; /*0x10089e6d3*/
LABEL_29:
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(&v51); /*0x10089e8c0*/
LABEL_30:
  if ( v63.i64[0] != 0x8000000000000016LL ) /*0x10089e8d3*/
  {
    v46 = v63; /*0x10089ea17*/
    *(_QWORD *)__src = &v46; /*0x10089ea79*/
    *(_QWORD *)&__src[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089ea87*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v64, &unk_101902300, __src); /*0x10089eaa0*/
    v10 = v64.i8[0]; /*0x10089eaa5*/
    *(_OWORD *)__src = *(__int128 *)((char *)v64.i128 + 1); /*0x10089eaad*/
    *(_QWORD *)&__src[15] = v64.i64[2]; /*0x10089eac3*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v46); /*0x10089ead1*/
    goto LABEL_44; /*0x10089ead1*/
  }
  LOBYTE(v56) = 1; /*0x10089e8d9*/
  if ( (v49.i8[0] & 1) != 0 && !v63.i8[8] ) /*0x10089e8f4*/
  {
    codexmate_lib::core::analytics::index::history_gaps::hee098c9e2ae81a21((__int64)__src, a3, *(double *)si128.i64); /*0x10089e904*/
    v13 = *(_OWORD *)__src; /*0x10089e910*/
    v14 = *(_QWORD *)&__src[16]; /*0x10089e917*/
    if ( *(_QWORD *)__src != 11 ) /*0x10089e922*/
    {
      v64.i128[0] = *(_OWORD *)&__src[40]; /*0x10089eb10*/
      *(_QWORD *)(a1 + 88) = v59; /*0x10089eb1b*/
      *(_QWORD *)(a1 + 80) = *(_QWORD *)&__src[80]; /*0x10089eb27*/
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&__src[72]; /*0x10089eb33*/
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&__src[64]; /*0x10089eb3f*/
      *(_QWORD *)(a1 + 56) = *(_QWORD *)&__src[56]; /*0x10089eb4b*/
      v24 = _mm_loadu_si128((const __m128i *)&__src[24]); /*0x10089eb50*/
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v13 + 1); /*0x10089eb58*/
      *(_QWORD *)(a1 + 16) = v14; /*0x10089eb5d*/
      *(__m128i *)(a1 + 24) = v24; /*0x10089eb62*/
      v25 = v64.i64[1]; /*0x10089eb6d*/
      *(_QWORD *)(a1 + 40) = v64.i64[0]; /*0x10089eb71*/
      *(_QWORD *)(a1 + 48) = v25; /*0x10089eb76*/
      *(_QWORD *)a1 = v13; /*0x10089eb7b*/
      goto LABEL_76; /*0x10089eb7f*/
    }
    v15 = *(volatile signed __int64 **)&__src[32]; /*0x10089e928*/
    v64.i128[0] = *(_OWORD *)&__src[40]; /*0x10089e936*/
    HIDWORD(_RAX) = *(_DWORD *)&__src[52]; /*0x10089e93a*/
    if ( *(_QWORD *)&__src[16] ) /*0x10089e948*/
    {
      v56 = *(const __m128i **)&__src[8]; /*0x10089e94e*/
      v55 = *(_QWORD *)&__src[16]; /*0x10089e955*/
      v50 = a3; /*0x10089e95c*/
      v54 = a1; /*0x10089e963*/
      v57 = *(volatile signed __int64 **)&__src[32]; /*0x10089e96a*/
      if ( *(_QWORD *)&__src[32] ) /*0x10089e974*/
      {
        v17 = v56; /*0x10089e97a*/
        si128 = _mm_load_si128(v56); /*0x10089e981*/
        _EBX = ~_mm_movemask_epi8(si128); /*0x10089e98b*/
        v19 = v56 + 1; /*0x10089e98d*/
        v20 = v57; /*0x10089e992*/
        do /*0x10089e9ad*/
        {
          if ( !(_WORD)_EBX ) /*0x10089e9b6*/
          {
            do /*0x10089e9db*/
            {
              si128 = _mm_load_si128(v19); /*0x10089e9c0*/
              v21 = _mm_movemask_epi8(si128); /*0x10089e9c6*/
              v17 -= 24; /*0x10089e9ca*/
              ++v19; /*0x10089e9d1*/
            }
            while ( v21 == 0xFFFF ); /*0x10089e9db*/
            _EBX = ~v21; /*0x10089e9dd*/
          }
          __asm { tzcnt eax, ebx } /*0x10089e9df*/
          v22 = -3 * _RAX; /*0x10089e9e6*/
          v23 = *((_QWORD *)&v17[-1] + v22 - 1); /*0x10089e9ea*/
          if ( v23 ) /*0x10089e9f2*/
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[-1].i64[v22], v23, 1); /*0x10089ea01*/
          v20 = (volatile signed __int64 *)((char *)v20 - 1); /*0x10089e9a0*/
          _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x10089e9a6*/
          _EBX &= _EBX - 1; /*0x10089e9a8*/
        }
        while ( v20 ); /*0x10089e9ad*/
      }
      v26 = (24 * v55 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10089eb97*/
      v5 = v54; /*0x10089eba2*/
      a3 = v50; /*0x10089eba9*/
      v15 = v57; /*0x10089ebb7*/
      if ( v26 + v55 != -17 ) /*0x10089ebbe*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v56 - v26, v26 + v55 + 17, 16); /*0x10089ebc8*/
    }
    LOBYTE(v56) = v15 != nullptr; /*0x10089ebd0*/
  }
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10089ebed*/
    __src,
    a3,
    "SELECT value FROM meta WHERE key='updated_at'",
    45);
  v64 = *(__m256i *)&__src[8]; /*0x10089ebff*/
  v65 = *(_OWORD *)&__src[40]; /*0x10089ec2b*/
  v66 = *(_OWORD *)&__src[56]; /*0x10089ec41*/
  if ( *(_DWORD *)__src == 1 ) /*0x10089ec53*/
  {
    v63.i128[3] = v66; /*0x10089ec61*/
    v63.i128[2] = v65; /*0x10089ec74*/
    v63.i128[1] = v64.i128[1]; /*0x10089ec8a*/
    v63.i128[0] = v64.i128[0]; /*0x10089eca0*/
    goto LABEL_61; /*0x10089eca7*/
  }
  v53 = v66; /*0x10089ecbb*/
  v52 = v65; /*0x10089ecd1*/
  v51 = v64; /*0x10089ece7*/
  v27 = sqlite3_bind_parameter_count(*((sqlite3_stmt **)&v66 + 1)); /*0x10089ed0b*/
  if ( !v27 ) /*0x10089ed12*/
  {
    v61 = &v51; /*0x10089ed3f*/
    v62 = 0; /*0x10089ed46*/
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10089ed5f*/
      __src,
      &v61);
    v28 = *(_QWORD *)__src; /*0x10089ed64*/
    if ( *(_QWORD *)__src == 0x8000000000000016LL ) /*0x10089ed6e*/
    {
      v29 = &v62; /*0x10089ed70*/
      if ( v62 ) /*0x10089ed7f*/
      {
        rusqlite::row::Row::get::h36ab96ba55e8751f(&v63, &v62, 0, &off_101AB6C90); /*0x10089ed91*/
LABEL_59:
        core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h2239e9987ac3b07a(&v61); /*0x10089ee34*/
        goto LABEL_60; /*0x10089ee3b*/
      }
      v28 = 0x8000000000000009LL; /*0x10089ede6*/
    }
    else
    {
      v29 = *(__int64 **)&__src[8]; /*0x10089ed9b*/
      v64 = *(__m256i *)&__src[16]; /*0x10089eda9*/
      v65 = *(_OWORD *)&__src[48]; /*0x10089edd9*/
    }
    v63.i64[0] = v28; /*0x10089edea*/
    v63.i64[1] = (__int64)v29; /*0x10089edf1*/
    *(__m256i *)&v63.u128[1] = v64; /*0x10089ee00*/
    v63.i128[3] = v65; /*0x10089ee2c*/
    goto LABEL_59; /*0x10089ee2c*/
  }
  v63.i128[0] = 0x8000000000000013LL; /*0x10089ed1a*/
  v63.i64[2] = v27; /*0x10089ed2c*/
LABEL_60:
  core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(&v51); /*0x10089ee40*/
LABEL_61:
  if ( v63.i64[0] == 0x8000000000000016LL ) /*0x10089ee56*/
  {
    v54 = 1; /*0x10089ee5d*/
    v50 = v63.i64[1]; /*0x10089ee6b*/
  }
  else
  {
    if ( v63.i64[0] != 0x8000000000000009LL ) /*0x10089ee7b*/
    {
      v45 = v63.i128[3]; /*0x10089ef02*/
      v44 = v63.i128[2]; /*0x10089ef1e*/
      v43 = v63.i64[3]; /*0x10089ef2c*/
      v34 = _mm_loadu_si128((const __m128i *)&v63.u32[2]); /*0x10089ef33*/
      v41 = v63.i64[0]; /*0x10089ef3b*/
      v42 = v34; /*0x10089ef42*/
      v64.i64[0] = (__int64)&v41; /*0x10089ef51*/
      v64.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089ef5c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_101902300, &v64); /*0x10089ef72*/
      v49 = _mm_load_si128((const __m128i *)__src); /*0x10089ef7f*/
      v35 = *(_QWORD *)&__src[16]; /*0x10089ef87*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v41); /*0x10089ef95*/
      *(_QWORD *)v5 = 10; /*0x10089ef9a*/
      *(__m128i *)(v5 + 8) = _mm_load_si128(&v49); /*0x10089efaa*/
      *(_QWORD *)(v5 + 24) = v35; /*0x10089efb1*/
      goto LABEL_76; /*0x10089efb6*/
    }
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v63); /*0x10089ee84*/
    v54 = 0; /*0x10089ee89*/
  }
  v30 = v60; /*0x10089ee94*/
  v57 = v60 + 8; /*0x10089ee9f*/
  v31 = *((_BYTE **)v60 + 8); /*0x10089eea6*/
  if ( !v31 ) /*0x10089eead*/
    v31 = (_BYTE *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v57); /*0x10089efc7*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(*(double *)si128.i64); /*0x10089eeb3*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10089eec9*/
  {
    v32 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v31) ^ 1; /*0x10089efd7*/
    v33 = 0x8000000000000000LL; /*0x10089efe0*/
    if ( *((_QWORD *)v30 + 10) == 0x8000000000000000LL ) /*0x10089efe8*/
    {
LABEL_69:
      if ( v32 ) /*0x10089eee8*/
        goto LABEL_75; /*0x10089eee8*/
LABEL_74:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10089f0f5*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v31) )
      {
        *((_BYTE *)v30 + 72) = 1; /*0x10089f102*/
      }
      goto LABEL_75; /*0x10089f107*/
    }
  }
  else
  {
    v32 = 0; /*0x10089eecf*/
    v33 = 0x8000000000000000LL; /*0x10089eed7*/
    if ( *((_QWORD *)v30 + 10) == 0x8000000000000000LL ) /*0x10089eedf*/
      goto LABEL_69; /*0x10089eedf*/
  }
  v31 = __src; /*0x10089eff2*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v30 + 10); /*0x10089eff9*/
  v55 = *(_QWORD *)&__src[8]; /*0x10089f00c*/
  v33 = *(_QWORD *)__src; /*0x10089f00c*/
  v48 = *(_QWORD *)&__src[16]; /*0x10089f01a*/
  if ( !v32 ) /*0x10089f024*/
    goto LABEL_74; /*0x10089f024*/
LABEL_75:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v57); /*0x10089f039*/
  v36 = v49.i8[0] & 1; /*0x10089f04f*/
  v37 = v67 == 0; /*0x10089f052*/
  v38 = *((_QWORD *)v60 + 6); /*0x10089f05d*/
  v39 = *((_QWORD *)v60 + 7); /*0x10089f068*/
  *(_QWORD *)(v5 + 24) = v33; /*0x10089f06c*/
  *(_QWORD *)(v5 + 32) = v55; /*0x10089f078*/
  *(_QWORD *)(v5 + 40) = v48; /*0x10089f084*/
  *(_QWORD *)(v5 + 8) = v54; /*0x10089f090*/
  *(_QWORD *)(v5 + 16) = v50; /*0x10089f09c*/
  *(_QWORD *)(v5 + 48) = v38; /*0x10089f0a1*/
  *(_QWORD *)(v5 + 56) = v39; /*0x10089f0a6*/
  *(_BYTE *)(v5 + 64) = !v37; /*0x10089f0ab*/
  *(_BYTE *)(v5 + 65) = (_BYTE)v56; /*0x10089f0b8*/
  *(_BYTE *)(v5 + 66) = v36; /*0x10089f0bd*/
  *(_QWORD *)v5 = 11; /*0x10089f0c2*/
LABEL_76:
  result = v60; /*0x10089f0ca*/
  if ( !_InterlockedDecrement64(v60) ) /*0x10089f0d1*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf3ecc9bd6a189e11(&v60); /*0x10089f0de*/
  return result; /*0x10089f0e3*/
}