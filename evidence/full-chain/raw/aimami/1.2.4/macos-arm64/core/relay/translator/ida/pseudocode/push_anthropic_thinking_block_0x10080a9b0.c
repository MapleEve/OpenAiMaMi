// __ZN13codexmate_lib4core5relay10translator29push_anthropic_thinking_block @ 0x10080a9b0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::translator::push_anthropic_thinking_block::hdf0f1b05088506b8(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // r13
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  const __m128i *v18; // rcx
  __int64 v19; // rax
  __m128i v20; // xmm1
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // r12
  unsigned __int64 v25; // [rsp+0h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+10h] [rbp-40h]
  __int64 v28; // [rsp+18h] [rbp-38h]
  __int64 v29; // [rsp+20h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 16); /*0x10080a9c7*/
  if ( v2 /*0x10080aa86*/
    && (v3 = *(_QWORD *)(a1 + 8) + 32 * v2 - 32,
        (v4 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
                4,
                v3)) != 0)
    && *(_BYTE *)v4 == 3
    && *(_QWORD *)(v4 + 24) == 9
    && (v7 = *(_QWORD *)(v4 + 16),
        v8 = *(_QWORD *)v7 ^ 0x6E61747369737361LL,
        !(v8 | *(unsigned __int8 *)(v7 + 8) ^ 0x74LL))
    && (v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                "contentpattern.output_modehead_limit",
                7,
                v3,
                v8,
                v5,
                v6),
        (v12 = (_QWORD *)v11) != nullptr)
    && *(_BYTE *)v11 == 4 )
  {
    v13 = *(_QWORD *)(v11 + 24); /*0x10080aa88*/
    if ( v13 ) /*0x10080aa8f*/
    {
      v14 = *(_QWORD *)(v11 + 16); /*0x10080aa95*/
      v15 = 32 * v13; /*0x10080aa99*/
      v25 = ((unsigned __int64)(v15 - 32) >> 5) + 1; /*0x10080aaa8*/
      v16 = 0; /*0x10080aaac*/
      while ( 1 ) /*0x10080aae4*/
      {
        v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10080aae4*/
                &anon_22327b6004f579c0722d6ebc68f79196_45,
                4,
                v14);
        if ( !v17 || *(_BYTE *)v17 != 3 ) /*0x10080aaf1*/
          break; /*0x10080aaf1*/
        v18 = *(const __m128i **)(v17 + 16); /*0x10080aaf3*/
        v19 = *(_QWORD *)(v17 + 24); /*0x10080aaf7*/
        if ( v19 == 8 ) /*0x10080aaff*/
        {
          if ( v18->i64[0] != 0x676E696B6E696874LL ) /*0x10080aabe*/
            break; /*0x10080aabe*/
        }
        else
        {
          if ( v19 != 17 ) /*0x10080ab05*/
            break; /*0x10080ab05*/
          v20 = _mm_or_si128( /*0x10080ab23*/
                  _mm_xor_si128(_mm_cvtsi32_si128(v18[1].u8[0]), (__m128i)xmmword_101665E80),
                  _mm_xor_si128(_mm_loadu_si128(v18), (__m128i)xmmword_10166CCA0));
          if ( !_mm_testz_si128(v20, v20) ) /*0x10080ab2c*/
            break; /*0x10080ab2c*/
        }
        v14 += 32; /*0x10080aac4*/
        ++v16; /*0x10080aac8*/
        v15 -= 32; /*0x10080aacb*/
        if ( !v15 ) /*0x10080aacf*/
        {
          v16 = v25; /*0x10080ab56*/
          break; /*0x10080ab56*/
        }
      }
      v29 = a2[3]; /*0x10080ab5a*/
      v28 = a2[2]; /*0x10080ab66*/
      v23 = *a2; /*0x10080ab6a*/
      v27 = a2[1]; /*0x10080ab71*/
      v26 = v23; /*0x10080ab75*/
      v22 = v12[3]; /*0x10080ab79*/
      if ( v16 > v22 ) /*0x10080ab80*/
        alloc::vec::Vec$LT$T$C$A$GT$::insert_mut::assert_failed::h5a99f51db44041ca(v16, v12[3], &off_10197A648); /*0x10080abf4*/
    }
    else
    {
      v29 = a2[3]; /*0x10080ab34*/
      v28 = a2[2]; /*0x10080ab3c*/
      v21 = *a2; /*0x10080ab40*/
      v27 = a2[1]; /*0x10080ab47*/
      v26 = v21; /*0x10080ab4b*/
      v22 = 0; /*0x10080ab4f*/
      v16 = 0; /*0x10080ab51*/
    }
    if ( v22 == v12[1] ) /*0x10080ab86*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v12 + 1); /*0x10080ab8f*/
    v24 = (__int64 *)(v12[2] + 32 * v16); /*0x10080ab9b*/
    if ( v22 > v16 ) /*0x10080aba5*/
      memmove(v24 + 4, (const void *)(v12[2] + 32 * v16), 32 * (v22 - v16)); /*0x10080abb3*/
    v24[3] = v29; /*0x10080abbc*/
    v24[2] = v28; /*0x10080abc5*/
    result = v26; /*0x10080abca*/
    v24[1] = v27; /*0x10080abd2*/
    *v24 = result; /*0x10080abd7*/
    v12[3] = v22 + 1; /*0x10080abde*/
  }
  else
  {
    v29 = a2[3]; /*0x10080aa24*/
    v28 = a2[2]; /*0x10080aa2c*/
    v9 = *a2; /*0x10080aa30*/
    v27 = a2[1]; /*0x10080aa37*/
    v26 = v9; /*0x10080aa3b*/
    return codexmate_lib::core::relay::translator::push_anthropic_message_block::h92463a735672c30c( /*0x10080aa52*/
             (char *)a1,
             (__int64)"assistant",
             9u,
             &v26);
  }
  return result; /*0x10080aa57*/
}