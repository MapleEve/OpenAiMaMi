// __ZN13codexmate_lib4core5relay8dialects7generic15apply_reasoning @ 0x100331f20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::dialects::generic::apply_reasoning::h4b2b11b022265863(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  size_t v12; // r15
  __int64 v13; // r12
  const void *v14; // r14
  void *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // r12
  __int64 v21; // rdx
  __m128i si128; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __m128i v27; // xmm5
  __m128i v28; // xmm6
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm3
  __m128i v34; // xmm4
  __int64 result; // rax
  char v36; // r14
  __int64 v37; // rcx
  int v38; // eax
  int v39; // ecx
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rsi
  __int64 *v43; // rbx
  __int64 v44; // [rsp+0h] [rbp-60h]
  __int64 v45; // [rsp+8h] [rbp-58h]
  __int64 v46; // [rsp+10h] [rbp-50h]
  __int64 v47; // [rsp+18h] [rbp-48h] BYREF
  __int64 v48; // [rsp+20h] [rbp-40h]
  __int64 v49; // [rsp+28h] [rbp-38h]
  __int64 v50; // [rsp+30h] [rbp-30h]

  v10 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3, a4); /*0x100331f43*/
  v12 = v11; /*0x100331f48*/
  if ( v11 < 0 ) /*0x100331f4e*/
  {
    v13 = 0; /*0x100331f50*/
    goto LABEL_3; /*0x100331f50*/
  }
  v45 = a3; /*0x100331f5e*/
  v44 = a2; /*0x100331f62*/
  v50 = a1; /*0x100331f66*/
  if ( !v11 ) /*0x100331f6a*/
  {
    v16 = 1; /*0x100331fb1*/
    v12 = 0; /*0x100331fc6*/
    v20 = 0; /*0x100331fc9*/
    v18 = a4; /*0x100331fcc*/
    v19 = a3; /*0x100331fcf*/
    goto LABEL_23; /*0x100331fd3*/
  }
  v14 = (const void *)v10; /*0x100331f6c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a4); /*0x100331f6f*/
  v13 = 1; /*0x100331f74*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x100331f82*/
  if ( !v15 ) /*0x100331f8a*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x100331f53*/
  v16 = (__int64)v15; /*0x100331f8c*/
  memcpy(v15, v14, v12); /*0x100331f98*/
  if ( v12 < 8 ) /*0x100331fa1*/
  {
    v17 = 0; /*0x100331fa3*/
    v18 = a4; /*0x100331fa5*/
    v19 = v45; /*0x100331fa8*/
    do /*0x1003320fc*/
    {
LABEL_18:
      *(_BYTE *)(v16 + v17) |= 32 * ((unsigned __int8)(*(_BYTE *)(v16 + v17) - 65) < 0x1Au); /*0x1003320e1*/
      ++v17; /*0x1003320f6*/
LABEL_19:
      ; /*0x1003320f9*/
    }
    while ( v12 != v17 ); /*0x1003320fc*/
    goto LABEL_20; /*0x1003320fc*/
  }
  v18 = a4; /*0x100331fe6*/
  if ( v12 < 0x20 ) /*0x100331fe9*/
  {
    v17 = 0; /*0x100331feb*/
    v19 = v45; /*0x100331fed*/
    goto LABEL_15; /*0x100331ff1*/
  }
  v17 = v12 & 0x7FFFFFFFFFFFFFE0LL; /*0x100331ff9*/
  v21 = 0; /*0x100331ffc*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100331ffe*/
  v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100332006*/
  v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10033200e*/
  v19 = v45; /*0x100332016*/
  do /*0x100332075*/
  {
    v25 = _mm_loadu_si128((const __m128i *)(v16 + v21)); /*0x100332020*/
    v26 = _mm_loadu_si128((const __m128i *)(v16 + v21 + 16)); /*0x100332025*/
    v27 = _mm_add_epi8(v25, si128); /*0x10033202f*/
    v28 = _mm_add_epi8(v26, si128); /*0x100332037*/
    *(__m128i *)(v16 + v21) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v27, v23), v27), v24), v25); /*0x100332063*/
    *(__m128i *)(v16 + v21 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v28, v23), v28), v24), v26); /*0x100332068*/
    v21 += 32; /*0x10033206e*/
  }
  while ( v17 != v21 ); /*0x100332075*/
  if ( v12 != v17 ) /*0x10033207a*/
  {
    if ( (v12 & 0x18) == 0 ) /*0x100332084*/
      goto LABEL_18; /*0x100332084*/
LABEL_15:
    v29 = v17; /*0x100332086*/
    v17 = v12 & 0x7FFFFFFFFFFFFFF8LL; /*0x100332090*/
    v30 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100332093*/
    v31 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10033209b*/
    v32 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x1003320a3*/
    do /*0x1003320dd*/
    {
      v33 = _mm_loadl_epi64((const __m128i *)(v16 + v29)); /*0x1003320b0*/
      v34 = _mm_add_epi8(v33, v30); /*0x1003320b9*/
      *(_QWORD *)(v16 + v29) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v34, v31), v34), v32), v33).u64[0]; /*0x1003320d1*/
      v29 += 8; /*0x1003320d6*/
    }
    while ( v17 != v29 ); /*0x1003320dd*/
    goto LABEL_19; /*0x1003320dd*/
  }
LABEL_20:
  if ( v12 >= 4 && *(_DWORD *)v16 == 762605671 ) /*0x10033210a*/
  {
    if ( v12 == 4 ) /*0x10033219a*/
    {
      v12 = 4; /*0x10033219c*/
      v20 = 0; /*0x1003321a2*/
    }
    else
    {
      v38 = *(unsigned __int8 *)(v16 + 4); /*0x1003321aa*/
      if ( (v38 & 0x80u) != 0 ) /*0x1003321b0*/
      {
        v39 = v38 & 0x1F; /*0x1003321b8*/
        v40 = *(_BYTE *)(v16 + 5) & 0x3F; /*0x1003321c0*/
        if ( (unsigned __int8)v38 <= 0xDFu ) /*0x1003321c6*/
        {
          v38 = v40 | (v39 << 6); /*0x1003322ca*/
        }
        else
        {
          v41 = (v40 << 6) | *(_BYTE *)(v16 + 6) & 0x3F; /*0x1003321d7*/
          if ( (unsigned __int8)v38 < 0xF0u ) /*0x1003321dc*/
            v38 = (v39 << 12) | v41; /*0x1003322d3*/
          else
            v38 = ((v38 & 7) << 18) | (v41 << 6) | *(_BYTE *)(v16 + 7) & 0x3F; /*0x1003321f4*/
        }
      }
      v20 = (unsigned int)(v38 - 53) < 5; /*0x1003322db*/
    }
  }
  else
  {
    v20 = 0; /*0x100332110*/
  }
LABEL_23:
  result = codexmate_lib::core::relay::dialects::generic::is_openai_o_series::h79a14a2f0cc4992a(v19, v18); /*0x100332113*/
  v36 = v20 | result; /*0x10033211b*/
  if ( v12 ) /*0x100332121*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v12, 1); /*0x10033212e*/
  if ( (v36 & 1) != 0 ) /*0x10033213b*/
  {
    result = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v44, "/reasoning/effort", 17); /*0x10033214d*/
    if ( result ) /*0x100332155*/
    {
      switch ( *(_BYTE *)result ) /*0x10033216c*/
      {
        case 0: /*0x10033216c*/
          LOBYTE(v46) = 0; /*0x100332215*/
          break; /*0x10033221d*/
        case 1: /*0x10033216c*/
        case 2: /*0x10033216c*/
          v49 = *(_QWORD *)(result + 24); /*0x100332172*/
          v48 = *(_QWORD *)(result + 16); /*0x10033217a*/
          v37 = *(_QWORD *)result; /*0x10033217e*/
          v47 = *(_QWORD *)(result + 8); /*0x100332185*/
          v46 = v37; /*0x100332189*/
          break; /*0x100332191*/
        case 3: /*0x10033216c*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v47, result + 8); /*0x10033222a*/
          LOBYTE(v46) = 3; /*0x10033222f*/
          break; /*0x100332237*/
        case 4: /*0x10033216c*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x100332206*/
            &v47,
            result + 8);
          LOBYTE(v46) = 4; /*0x10033220b*/
          break; /*0x100332213*/
        case 5: /*0x10033216c*/
          if ( *(_QWORD *)(result + 24) ) /*0x100332239*/
          {
            v42 = *(_QWORD *)(result + 8); /*0x100332244*/
            if ( !v42 ) /*0x10033224b*/
              core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x1003322eb*/
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x10033225c*/
              &v47,
              v42,
              *(_QWORD *)(result + 16));
          }
          else
          {
            v47 = 0; /*0x100332266*/
            v49 = 0; /*0x10033226e*/
          }
          LOBYTE(v46) = 5; /*0x100332276*/
          break; /*0x100332276*/
        case 6: /*0x10033216c*/
          _Unwind_Resume((_Unwind_Exception *)v16); /*0x100b74262*/
          return result; /*0x100b74262*/
      }
      v43 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10033228b*/
                         "reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
                         0x10u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v43); /*0x100332291*/
      v43[3] = v49; /*0x10033229a*/
      v43[2] = v48; /*0x1003322a2*/
      result = v46; /*0x1003322a6*/
      v43[1] = v47; /*0x1003322ae*/
      *v43 = v46; /*0x1003322b2*/
    }
  }
  return result; /*0x1003322b5*/
}