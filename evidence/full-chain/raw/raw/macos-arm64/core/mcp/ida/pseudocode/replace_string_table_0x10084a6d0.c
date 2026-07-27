// __ZN13codexmate_lib4core3mcp20replace_string_table @ 0x10084a6d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::mcp::replace_string_table::h9fa9a983a0d54fdf(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r12
  __int64 result; // rax
  __int64 v9; // rbx
  const __m128i *v10; // rsi
  __m128i si128; // xmm0
  __int64 *v12; // rdi
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned __int64 v17; // rbx
  __m128i v18; // xmm1
  const void *v19; // r15
  size_t v20; // r14
  __int64 i; // rcx
  unsigned __int64 v22; // rbx
  __m128i v24; // xmm2
  const __m128i *v26; // r13
  __int64 *v27; // r13
  _DWORD __dst[44]; // [rsp+8h] [rbp-2F8h] BYREF
  _BYTE v29[168]; // [rsp+B8h] [rbp-248h] BYREF
  _QWORD __src[22]; // [rsp+160h] [rbp-1A0h] BYREF
  __m128i v31; // [rsp+210h] [rbp-F0h] BYREF
  __m128i v32; // [rsp+220h] [rbp-E0h] BYREF
  _QWORD v33[3]; // [rsp+230h] [rbp-D0h] BYREF
  __int16 v34; // [rsp+248h] [rbp-B8h]
  __int64 v35; // [rsp+250h] [rbp-B0h]
  __int64 v36; // [rsp+258h] [rbp-A8h] BYREF
  __int64 *v37; // [rsp+260h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+268h] [rbp-98h]
  __int64 v39; // [rsp+270h] [rbp-90h]
  __int64 v40; // [rsp+278h] [rbp-88h]
  __int64 *v41; // [rsp+280h] [rbp-80h]
  __int64 v42; // [rsp+288h] [rbp-78h]
  __int64 v43; // [rsp+290h] [rbp-70h]
  __int64 v44; // [rsp+298h] [rbp-68h]
  __int64 v45; // [rsp+2A0h] [rbp-60h]
  __int64 *v46; // [rsp+2A8h] [rbp-58h]
  const __m128i *v47; // [rsp+2B0h] [rbp-50h]
  __int64 v48; // [rsp+2B8h] [rbp-48h]
  __int64 *v49; // [rsp+2C0h] [rbp-40h]
  __int64 v50; // [rsp+2C8h] [rbp-38h]
  __int64 v51; // [rsp+2D0h] [rbp-30h]

  v7 = a1; /*0x10084a6ed*/
  result = toml_edit::table::Table::remove::hc792c60f6bbc5b1e(__src); /*0x10084a700*/
  if ( LODWORD(__src[0]) != 12 ) /*0x10084a70c*/
    result = core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(__src); /*0x10084a715*/
  v9 = *(_QWORD *)(a4 + 24); /*0x10084a71a*/
  if ( v9 ) /*0x10084a721*/
  {
    toml_edit::table::Table::new::hdf053039c5dc4b42(v29, a1); /*0x10084a72e*/
    v10 = *(const __m128i **)a4; /*0x10084a733*/
    v48 = *(_QWORD *)(a4 + 8); /*0x10084a73b*/
    si128 = _mm_load_si128(v10); /*0x10084a744*/
    v47 = v10; /*0x10084a752*/
    v33[0] = v10; /*0x10084a756*/
    v33[1] = v10 + 1; /*0x10084a75d*/
    v33[2] = (char *)v10->i64 + v48 + 1; /*0x10084a764*/
    v34 = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x10084a76b*/
    v35 = v9; /*0x10084a772*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he07c4365ace7a405( /*0x10084a787*/
      &v36,
      v33);
    v12 = v37; /*0x10084a78c*/
    v13 = v38; /*0x10084a793*/
    if ( v38 >= 2 ) /*0x10084a79e*/
    {
      v50 = a4; /*0x10084aa1b*/
      v27 = v37; /*0x10084aa1f*/
      if ( v38 >= 0x15 ) /*0x10084aa26*/
        core::slice::sort::stable::driftsort_main::hfe65d5b0347d955f(v37, v38, __src); /*0x10084aa5f*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::hfaeeae3887c66215(v37, v38, 1, __src); /*0x10084aa3a*/
      v14 = v36; /*0x10084aa3f*/
      v12 = v27; /*0x10084aa46*/
      a4 = v50; /*0x10084aa49*/
    }
    else
    {
      v14 = v36; /*0x10084a7a4*/
      if ( !v38 ) /*0x10084a7ae*/
      {
LABEL_20:
        if ( v14 ) /*0x10084a9a5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 8 * v14, 8); /*0x10084a9b0*/
        memcpy(&__src[1], v29, 0xA8u); /*0x10084a9c8*/
        __src[0] = 10; /*0x10084a9cd*/
        result = toml_edit::table::Table::insert::hb018739605f59eb7(__dst, v7, a2, a3, __src); /*0x10084a9ef*/
        if ( __dst[0] != 12 ) /*0x10084a9fb*/
          return core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(__dst); /*0x10084aa04*/
        return result; /*0x10084aa04*/
      }
    }
    v51 = v14; /*0x10084a7b4*/
    v45 = v7; /*0x10084a7b8*/
    v44 = a2; /*0x10084a7bc*/
    v43 = a3; /*0x10084a7c0*/
    v41 = &v12[v13]; /*0x10084a7c8*/
    v15 = a4 + 32; /*0x10084a7cc*/
    v49 = v12; /*0x10084a7d0*/
    v50 = v15; /*0x10084a7d4*/
    do /*0x10084a7e8*/
    {
      v46 = v12; /*0x10084a7ee*/
      v16 = *v12; /*0x10084a7f2*/
      v39 = *(_QWORD *)(*v12 + 8); /*0x10084a7fa*/
      v40 = *(_QWORD *)(v16 + 16); /*0x10084a806*/
      v17 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v15, v16); /*0x10084a818*/
      ++v46; /*0x10084a81b*/
      v18 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v17 >> 57), (__m128i)0LL); /*0x10084a82c*/
      v19 = *(const void **)(v16 + 8); /*0x10084a831*/
      v20 = *(_QWORD *)(v16 + 16); /*0x10084a836*/
      for ( i = 0; ; i += 16 ) /*0x10084a83b*/
      {
        v22 = v48 & v17; /*0x10084a83d*/
        HIDWORD(_RAX) = HIDWORD(v47); /*0x10084a841*/
        v24 = _mm_loadu_si128((const __m128i *)((char *)v47 + v22)); /*0x10084a845*/
        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v24, v18)); /*0x10084a852*/
        if ( _R12D ) /*0x10084a85a*/
          break; /*0x10084a85a*/
LABEL_14:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v24, (__m128i)-1LL)) ) /*0x10084a8d8*/
          core::option::expect_failed::ha75f8bdcbd673567( /*0x10084a987*/
            "no entry found for keychange MCP server state",
            22,
            &off_10196C758);
        v17 = v22 + i + 16; /*0x10084a8e4*/
      }
      v31 = v18; /*0x10084a85c*/
      v42 = i; /*0x10084a864*/
      v32 = v24; /*0x10084a868*/
      while ( 1 ) /*0x10084a870*/
      {
        __asm { tzcnt eax, r12d } /*0x10084a870*/
        if ( v20 == v47[-3 * (v48 & (v22 + _RAX)) - 2].i64[0] ) /*0x10084a890*/
        {
          v26 = &v47[-3 * (v48 & (v22 + _RAX))]; /*0x10084a892*/
          if ( !memcmp(v19, (const void *)v26[-3].i64[1], v20) ) /*0x10084a89f*/
            break; /*0x10084a89f*/
        }
        _RAX = (unsigned int)(_R12D - 1); /*0x10084a8a8*/
        LOWORD(_RAX) = _R12D & (_R12D - 1); /*0x10084a8ad*/
        _R12D = _RAX; /*0x10084a8b1*/
        v18 = _mm_load_si128(&v31); /*0x10084a8b4*/
        i = v42; /*0x10084a8bc*/
        v24 = _mm_load_si128(&v32); /*0x10084a8c0*/
        if ( !(_WORD)_RAX ) /*0x10084a8c8*/
          goto LABEL_14; /*0x10084a8c8*/
      }
      _$LT$toml_edit..value..Value$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h9b73b1de15a8cca9( /*0x10084a90f*/
        __src,
        v26[-1].i64[0],
        v26[-1].i64[1]);
      v15 = v50; /*0x10084a914*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x10084a931*/
      toml_edit::table::Table::insert::hb018739605f59eb7(__src, v29, v39, v40, __dst); /*0x10084a951*/
      if ( LODWORD(__src[0]) != 12 ) /*0x10084a95d*/
        core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(__src); /*0x10084a96a*/
      v12 = v46; /*0x10084a7e0*/
    }
    while ( v46 != v41 ); /*0x10084a7e8*/
    a3 = v43; /*0x10084a98e*/
    a2 = v44; /*0x10084a992*/
    v7 = v45; /*0x10084a996*/
    v12 = v49; /*0x10084a99a*/
    v14 = v51; /*0x10084a99e*/
    goto LABEL_20; /*0x10084a99e*/
  }
  return result; /*0x10084aa09*/
}