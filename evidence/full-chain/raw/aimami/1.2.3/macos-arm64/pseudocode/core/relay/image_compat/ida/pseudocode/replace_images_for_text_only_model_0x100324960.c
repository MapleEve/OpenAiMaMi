// __ZN13codexmate_lib4core5relay12image_compat34replace_images_for_text_only_model @ 0x100324960 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::image_compat::replace_images_for_text_only_model::h88c9639ba908dac6(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  size_t v8; // rbx
  __int64 v9; // r13
  const void *v10; // r12
  void *v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i si128; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __m128i v21; // xmm6
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  _QWORD *v28; // r12
  size_t v29; // rdx
  size_t v30; // r13
  char *v31; // rsi
  bool v32; // r12
  _QWORD v34[7]; // [rsp+0h] [rbp-70h] BYREF
  char v35; // [rsp+38h] [rbp-38h]
  __int16 v36; // [rsp+40h] [rbp-30h]

  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10032497a*/
  v8 = v7; /*0x10032497f*/
  if ( v7 < 0 ) /*0x100324985*/
  {
    v9 = 0; /*0x100324987*/
    goto LABEL_3; /*0x100324987*/
  }
  if ( !v7 ) /*0x100324995*/
  {
    v12 = 1; /*0x1003249d5*/
    goto LABEL_18; /*0x1003249eb*/
  }
  v10 = (const void *)v6; /*0x100324997*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x10032499a*/
  v9 = 1; /*0x10032499f*/
  v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1003249ad*/
  if ( !v11 ) /*0x1003249b5*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x10032498a*/
  v12 = (__int64)v11; /*0x1003249b7*/
  memcpy(v11, v10, v8); /*0x1003249c3*/
  if ( v8 < 8 ) /*0x1003249cc*/
  {
    v13 = 0; /*0x1003249ce*/
    goto LABEL_42; /*0x1003249d0*/
  }
  if ( v8 < 0x20 ) /*0x1003249fe*/
  {
    v13 = 0; /*0x100324a00*/
    goto LABEL_15; /*0x100324a02*/
  }
  v13 = v8 & 0x7FFFFFFFFFFFFFE0LL; /*0x100324a0a*/
  v14 = 0; /*0x100324a0d*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100324a0f*/
  v16 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100324a17*/
  v17 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100324a1f*/
  do /*0x100324a89*/
  {
    v18 = _mm_loadu_si128((const __m128i *)(v12 + v14)); /*0x100324a30*/
    v19 = _mm_loadu_si128((const __m128i *)(v12 + v14 + 16)); /*0x100324a36*/
    v20 = _mm_add_epi8(v18, si128); /*0x100324a41*/
    v21 = _mm_add_epi8(v19, si128); /*0x100324a49*/
    *(__m128i *)(v12 + v14) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v16), v20), v17), v18); /*0x100324a75*/
    *(__m128i *)(v12 + v14 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v16), v21), v17), v19); /*0x100324a7b*/
    v14 += 32; /*0x100324a82*/
  }
  while ( v13 != v14 ); /*0x100324a89*/
  if ( v8 == v13 ) /*0x100324a8e*/
    goto LABEL_18; /*0x100324a8e*/
  if ( (v8 & 0x18) != 0 ) /*0x100324a93*/
  {
LABEL_15:
    v22 = v13; /*0x100324a99*/
    v13 = v8 & 0x7FFFFFFFFFFFFFF8LL; /*0x100324aa3*/
    v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100324aa6*/
    v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100324aae*/
    v25 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100324ab6*/
    do /*0x100324aef*/
    {
      v26 = _mm_loadl_epi64((const __m128i *)(v12 + v22)); /*0x100324ac0*/
      v27 = _mm_add_epi8(v26, v23); /*0x100324aca*/
      *(_QWORD *)(v12 + v22) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v27, v24), v27), v25), v26).u64[0]; /*0x100324ae2*/
      v22 += 8; /*0x100324ae8*/
    }
    while ( v13 != v22 ); /*0x100324aef*/
    goto LABEL_41; /*0x100324aef*/
  }
  do /*0x100324cbe*/
  {
LABEL_42:
    *(_BYTE *)(v12 + v13) |= 32 * ((unsigned __int8)(*(_BYTE *)(v12 + v13) - 65) < 0x1Au); /*0x100324cc4*/
    ++v13; /*0x100324cdb*/
LABEL_41:
    ; /*0x100324cbb*/
  }
  while ( v8 != v13 ); /*0x100324cbe*/
LABEL_18:
  v34[0] = 0; /*0x100324af6*/
  v34[1] = v8; /*0x100324afe*/
  v34[2] = v12; /*0x100324b02*/
  v34[3] = v8; /*0x100324b06*/
  v34[4] = 0; /*0x100324b0a*/
  v34[5] = v8; /*0x100324b12*/
  v34[6] = 0x2F0000002FLL; /*0x100324b20*/
  v35 = 1; /*0x100324b24*/
  v36 = 1; /*0x100324b28*/
  v28 = (_QWORD *)core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(v34); /*0x100324b37*/
  v30 = v29; /*0x100324b3a*/
  if ( !v28 ) /*0x100324b40*/
  {
    v28 = (_QWORD *)v12; /*0x100324b40*/
    v30 = v8; /*0x100324b44*/
  }
  switch ( __ROR8__(v30 - 7, 1) ) /*0x100324b67*/
  {
    case 0LL: /*0x100324b67*/
      if ( !memcmp(v28, "glm-5.1glm-5.2mimo-v2.5-pro", v30) ) /*0x100324b7d*/
        goto LABEL_38; /*0x100324b7d*/
      v31 = "glm-5.2mimo-v2.5-pro"; /*0x100324b83*/
      break; /*0x100324b8a*/
    case 3LL: /*0x100324b67*/
      if ( !memcmp( /*0x100324ba9*/
              v28,
              "deepseek-chatdeepseek-reasonerdeepseek-v4-flashdeepseek-v4-proglm-5.1glm-5.2mimo-v2.5-pro",
              v30) )
        goto LABEL_38; /*0x100324ba9*/
      v31 = "mimo-v2.5-pro"; /*0x100324baf*/
      break; /*0x100324bb6*/
    case 4LL: /*0x100324b67*/
      v31 = "deepseek-v4-proglm-5.1glm-5.2mimo-v2.5-pro"; /*0x100324b8c*/
      break; /*0x100324b93*/
    case 5LL: /*0x100324b67*/
      if ( !memcmp(v28, "deepseek-reasonerdeepseek-v4-flashdeepseek-v4-proglm-5.1glm-5.2mimo-v2.5-pro", v30) ) /*0x100324bcc*/
        goto LABEL_38; /*0x100324bcc*/
      v31 = "deepseek-v4-flashdeepseek-v4-proglm-5.1glm-5.2mimo-v2.5-pro"; /*0x100324bd2*/
      break; /*0x100324bd2*/
    default:
      goto LABEL_29;
  }
  if ( !memcmp(v28, v31, v30) ) /*0x100324be6*/
    goto LABEL_38; /*0x100324be6*/
LABEL_29:
  if ( v30 >= 0xC ) /*0x100324bf0*/
  {
    if ( *v28 ^ 0x2D78616D696E696DLL | *((unsigned int *)v28 + 2) ^ 0x372E326DLL ) /*0x100324c1c*/
    {
LABEL_34:
      v32 = (*v28 ^ 0x6F632D336E657771LL | *(_QWORD *)((char *)v28 + 3) ^ 0x7265646F632D336ELL) == 0; /*0x100324c21*/
      if ( !v8 ) /*0x100324c48*/
        goto LABEL_36; /*0x100324c48*/
      goto LABEL_35; /*0x100324c48*/
    }
LABEL_38:
    if ( v8 ) /*0x100324c73*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v8, 1); /*0x100324c80*/
    return codexmate_lib::core::relay::image_compat::replace_image_blocks::h897a652ad53a8f18(a1); /*0x100324c80*/
  }
  if ( v30 == 11 ) /*0x100324bf6*/
    goto LABEL_34; /*0x100324bf6*/
  v32 = 0; /*0x100324bf8*/
  if ( v8 ) /*0x100324bfe*/
LABEL_35:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v8, 1); /*0x100324c4a*/
LABEL_36:
  if ( !v32 ) /*0x100324c5d*/
    return 0; /*0x100324c6f*/
  return codexmate_lib::core::relay::image_compat::replace_image_blocks::h897a652ad53a8f18(a1); /*0x100324c61*/
}