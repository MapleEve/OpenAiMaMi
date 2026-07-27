// __ZN13codexmate_lib4core12debug_bundle26summarize_last_error_value @ 0x1004e45a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::summarize_last_error_value::hbfe17fa9cde4693f(
        const char **a1,
        __int64 a2)
{
  char *v2; // rax
  size_t v3; // rdx
  __int64 v4; // r9
  unsigned __int8 *v5; // r14
  int v6; // ebx
  __int64 v7; // r13
  const char *v8; // r15
  unsigned __int8 *v9; // r12
  _BYTE *v10; // r8
  bool v11; // zf
  int v12; // r13d
  int v13; // ecx
  int v14; // esi
  _BYTE *v15; // rdi
  int v16; // edx
  _BOOL8 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // esi
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  size_t v24; // r15
  const void *v25; // rsi
  __int64 v26; // rax
  int v27; // ecx
  int v28; // edx
  size_t v29; // rax
  __int64 (__fastcall *v30)(); // r13
  __int64 v31; // rdx
  size_t v32; // rsi
  unsigned __int64 *v33; // rdi
  const char *v34; // rsi
  __int64 v35; // r13
  __int64 v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r15
  _BYTE *v42; // rax
  _BYTE *v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rcx
  __m128i si128; // xmm0
  __m128i v48; // xmm1
  __m128i v49; // xmm2
  __m128i v50; // xmm3
  __m128i v51; // xmm4
  __m128i v52; // xmm5
  __m128i v53; // xmm6
  __int64 v54; // rcx
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  __m128i v57; // xmm2
  __m128i v58; // xmm3
  __m128i v59; // xmm4
  const char *v60; // r15
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  const char *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // r14
  const char *v73; // rbx
  __int64 v74; // r14
  _QWORD *v75; // r15
  __int64 v76; // rsi
  __int64 v77; // r14
  _QWORD *v78; // r15
  __int64 v79; // rsi
  __int64 (__fastcall *v80)(); // rax
  __int64 result; // rax
  __int64 (__fastcall *v82)(); // rax
  unsigned __int8 v83; // al
  _QWORD v84[3]; // [rsp+0h] [rbp-150h] BYREF
  _QWORD v85[3]; // [rsp+18h] [rbp-138h] BYREF
  __int64 v86; // [rsp+30h] [rbp-120h] BYREF
  const char *v87; // [rsp+38h] [rbp-118h]
  __int64 v88; // [rsp+40h] [rbp-110h]
  __int64 (__fastcall *v89)(); // [rsp+48h] [rbp-108h]
  size_t v90; // [rsp+50h] [rbp-100h]
  const char **v91; // [rsp+58h] [rbp-F8h]
  __int64 v92; // [rsp+60h] [rbp-F0h]
  size_t v93; // [rsp+68h] [rbp-E8h] BYREF
  __int64 v94; // [rsp+70h] [rbp-E0h]
  size_t v95; // [rsp+78h] [rbp-D8h]
  unsigned __int64 v96; // [rsp+80h] [rbp-D0h] BYREF
  __int64 v97; // [rsp+88h] [rbp-C8h]
  __int64 v98; // [rsp+90h] [rbp-C0h]
  void *__src; // [rsp+98h] [rbp-B8h]
  const char *v100; // [rsp+A0h] [rbp-B0h] BYREF
  __int64 (__fastcall *v101)(); // [rsp+A8h] [rbp-A8h]
  size_t v102; // [rsp+B0h] [rbp-A0h]
  __int64 v103; // [rsp+B8h] [rbp-98h]
  __int64 v104; // [rsp+C0h] [rbp-90h]
  __int64 v105; // [rsp+C8h] [rbp-88h]
  size_t v106; // [rsp+D0h] [rbp-80h]
  __int64 v107; // [rsp+D8h] [rbp-78h]
  size_t v108; // [rsp+E0h] [rbp-70h]
  const void *v109; // [rsp+E8h] [rbp-68h]
  __int64 v110; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v111; // [rsp+F8h] [rbp-58h]
  __int64 v112; // [rsp+100h] [rbp-50h]
  const char *v113; // [rsp+108h] [rbp-48h] BYREF
  __int64 v114; // [rsp+110h] [rbp-40h]
  size_t v115; // [rsp+118h] [rbp-38h]
  size_t __n; // [rsp+120h] [rbp-30h]

  if ( !a2 ) /*0x1004e45b7*/
    goto LABEL_105; /*0x1004e45b7*/
  if ( *(_BYTE *)a2 != 3 ) /*0x1004e45c0*/
    goto LABEL_105; /*0x1004e45c0*/
  v2 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x1004e45d1*/
                 *(_QWORD *)(a2 + 16),
                 *(_QWORD *)(a2 + 24));
  if ( !v3 ) /*0x1004e45d9*/
    goto LABEL_105; /*0x1004e45d9*/
  v91 = a1; /*0x1004e45df*/
  v110 = 0; /*0x1004e45e6*/
  v111 = 8; /*0x1004e45ee*/
  v112 = 0; /*0x1004e45f6*/
  v93 = 0; /*0x1004e45fe*/
  v95 = 0; /*0x1004e4609*/
  v113 = nullptr; /*0x1004e4614*/
  v114 = 1; /*0x1004e461c*/
  v115 = 0; /*0x1004e4624*/
  __n = v3; /*0x1004e462f*/
  v5 = (unsigned __int8 *)&v2[v3]; /*0x1004e4633*/
  v6 = 32; /*0x1004e4636*/
  v7 = 1; /*0x1004e463b*/
  v8 = nullptr; /*0x1004e4641*/
  __src = v2; /*0x1004e4644*/
  v9 = (unsigned __int8 *)v2; /*0x1004e464b*/
  while ( 1 ) /*0x1004e46a8*/
  {
    while ( 1 ) /*0x1004e4677*/
    {
      v10 = (_BYTE *)v7; /*0x1004e4677*/
      if ( v9 == nullptr || v9 == v5 ) /*0x1004e466d*/
        goto LABEL_8; /*0x1004e467a*/
      v12 = *v9; /*0x1004e46a0*/
      if ( (v12 & 0x80u) != 0 ) /*0x1004e46a8*/
        break; /*0x1004e46a8*/
      ++v9; /*0x1004e46aa*/
      if ( (unsigned int)(v12 - 48) < 0xA ) /*0x1004e46b4*/
        goto LABEL_31; /*0x1004e46b4*/
LABEL_5:
      if ( v8 == (const char *)3 ) /*0x1004e4654*/
      {
        v7 = (__int64)v10; /*0x1004e472e*/
        v17 = *v10 == 43; /*0x1004e473a*/
        v18 = (unsigned __int8)v10[v17] - 48; /*0x1004e4742*/
        if ( v18 <= 9 ) /*0x1004e4748*/
        {
          v19 = (unsigned __int8)v10[v17 + 1] - 48; /*0x1004e4754*/
          if ( v19 <= 9 ) /*0x1004e475a*/
          {
            v20 = v19 + 10 * (__int16)v18; /*0x1004e4768*/
            if ( *v10 != 43 ) /*0x1004e476d*/
            {
              v21 = (unsigned __int8)v10[v17 + 2] - 48; /*0x1004e4775*/
              if ( v21 > 9 ) /*0x1004e477b*/
                goto LABEL_36; /*0x1004e477b*/
              v20 = v21 + 10 * (_DWORD)v20; /*0x1004e4786*/
            }
            if ( (unsigned __int16)(v20 - 400) <= 0xC7u ) /*0x1004e4796*/
            {
              v22 = core::fmt::num::imp::_$LT$impl$u20$u16$GT$::_fmt::he37f58232fb48d79(v20, &v96, 5); /*0x1004e47a8*/
              v24 = v23; /*0x1004e47ad*/
              if ( v23 < 0 ) /*0x1004e47b3*/
              {
                v45 = 0; /*0x1004e4a8b*/
                goto LABEL_55; /*0x1004e4a8b*/
              }
              v25 = (const void *)v22; /*0x1004e47b9*/
              v92 = v7; /*0x1004e47bf*/
              if ( v23 ) /*0x1004e47c6*/
              {
                v109 = (const void *)v22; /*0x1004e47c8*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v22); /*0x1004e47cc*/
                v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x1004e47d9*/
                if ( !v26 ) /*0x1004e47e1*/
                {
                  v109 = (const void *)v24; /*0x1004e4bb6*/
                  v45 = 1; /*0x1004e4bba*/
LABEL_55:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45, v109); /*0x1004e4a8d*/
                }
                v25 = v109; /*0x1004e47e7*/
              }
              else
              {
                v26 = 1; /*0x1004e483c*/
              }
              v30 = (__int64 (__fastcall *)())v26; /*0x1004e4844*/
              memcpy((void *)v26, v25, v24); /*0x1004e484a*/
              v100 = (const char *)v24; /*0x1004e484f*/
              v109 = v30; /*0x1004e4856*/
              v101 = v30; /*0x1004e485a*/
              v102 = v24; /*0x1004e4861*/
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5131593e901fe385(&v93, &v100); /*0x1004e4876*/
              v7 = v92; /*0x1004e487b*/
            }
          }
        }
LABEL_36:
        v8 = nullptr; /*0x1004e4882*/
        v115 = 0; /*0x1004e4885*/
      }
      else
      {
        v8 = nullptr; /*0x1004e465a*/
        v7 = (__int64)v10; /*0x1004e465d*/
        v115 = 0; /*0x1004e4660*/
      }
    }
    v13 = v12 & 0x1F; /*0x1004e46be*/
    v14 = v9[1] & 0x3F; /*0x1004e46c7*/
    if ( (unsigned __int8)v12 > 0xDFu ) /*0x1004e46ce*/
      break; /*0x1004e46ce*/
    v9 += 2; /*0x1004e47ed*/
    v27 = v14 | (v13 << 6); /*0x1004e47f4*/
    LOBYTE(v12) = v27; /*0x1004e47f6*/
    if ( (unsigned int)(v27 - 48) >= 0xA ) /*0x1004e4800*/
      goto LABEL_5; /*0x1004e4800*/
LABEL_31:
    v29 = (size_t)v8; /*0x1004e4820*/
    if ( v113 == v8 ) /*0x1004e4827*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v113, v8, 1, 1, 1, v4); /*0x1004e48a5*/
      v10 = (_BYTE *)v114; /*0x1004e48aa*/
      v29 = v115; /*0x1004e48ae*/
    }
    v10[v29] = v12; /*0x1004e4829*/
    v7 = (__int64)v10; /*0x1004e482d*/
    v115 = (size_t)++v8; /*0x1004e4833*/
  }
  v16 = (v14 << 6) | v9[2] & 0x3F; /*0x1004e46e5*/
  if ( (unsigned __int8)v12 < 0xF0u ) /*0x1004e46eb*/
  {
    v28 = (v13 << 12) | v16; /*0x1004e480b*/
    LOBYTE(v12) = v28; /*0x1004e480d*/
    v9 += 3; /*0x1004e4810*/
    if ( (unsigned int)(v28 - 48) < 0xA ) /*0x1004e481a*/
      goto LABEL_31; /*0x1004e481a*/
    goto LABEL_5; /*0x1004e481a*/
  }
  v15 = v9 + 3; /*0x1004e46d4*/
  if ( (((v12 & 7) << 18) | (v16 << 6) | v9[3] & 0x3F) != 0x110000 ) /*0x1004e470a*/
  {
    v9 += 4; /*0x1004e4710*/
    v12 = ((v12 & 7) << 18) | (v16 << 6) | *v15 & 0x3F; /*0x1004e471e*/
LABEL_9:
    if ( (unsigned int)(v12 - 48) < 0xA ) /*0x1004e4697*/
      goto LABEL_31; /*0x1004e4697*/
    goto LABEL_5; /*0x1004e4697*/
  }
LABEL_8:
  v9 = nullptr; /*0x1004e467c*/
  v11 = v6 == 1114112; /*0x1004e467f*/
  v12 = v6; /*0x1004e4685*/
  v6 = 1114112; /*0x1004e4688*/
  if ( !v11 ) /*0x1004e468a*/
    goto LABEL_9; /*0x1004e468a*/
  v31 = 0; /*0x1004e48c5*/
  v32 = v93; /*0x1004e48c7*/
  if ( v93 ) /*0x1004e48d1*/
    v32 = v95; /*0x1004e48d3*/
  LOBYTE(v31) = v93 != 0; /*0x1004e48da*/
  v100 = (const char *)v31; /*0x1004e48dd*/
  v101 = nullptr; /*0x1004e48e4*/
  v102 = v93; /*0x1004e48ef*/
  v103 = v94; /*0x1004e48f6*/
  v104 = v31; /*0x1004e48fd*/
  v105 = 0; /*0x1004e4904*/
  v106 = v93; /*0x1004e490f*/
  v107 = v94; /*0x1004e4913*/
  v108 = v32; /*0x1004e4917*/
  v33 = &v96; /*0x1004e491e*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4181bc325cef7513( /*0x1004e492c*/
    &v96,
    &v100,
    v31,
    v94,
    (__int64)v10,
    v4);
  v34 = v113; /*0x1004e4931*/
  if ( v113 ) /*0x1004e4938*/
  {
    v33 = (unsigned __int64 *)v114; /*0x1004e493a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1); /*0x1004e4943*/
  }
  v35 = v98; /*0x1004e4948*/
  v36 = __n; /*0x1004e4952*/
  if ( v98 )
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6(&v100, v97, v98, ",;  header(s): ", 1);
    v115 = v102; /*0x1004e4986*/
    v114 = (__int64)v101; /*0x1004e4998*/
    v113 = v100; /*0x1004e499c*/
    v100 = (const char *)&v113; /*0x1004e49a4*/
    v101 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004e49b2*/
    v33 = (unsigned __int64 *)&v86; /*0x1004e49c0*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v86, &unk_1017BF63E, &v100); /*0x1004e49ce*/
    if ( v113 ) /*0x1004e49da*/
    {
      v33 = (unsigned __int64 *)v114; /*0x1004e49dc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1); /*0x1004e49e5*/
    }
    v37 = v112; /*0x1004e49ea*/
    if ( v112 == v110 ) /*0x1004e49f2*/
    {
      v33 = (unsigned __int64 *)&v110; /*0x1004e49f4*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v110); /*0x1004e49f8*/
    }
    v38 = v111; /*0x1004e49fd*/
    v39 = 3 * v37; /*0x1004e4a01*/
    *(_QWORD *)(v111 + 8 * v39 + 16) = v88; /*0x1004e4a0c*/
    v40 = v86; /*0x1004e4a11*/
    v34 = v87; /*0x1004e4a18*/
    *(_QWORD *)(v38 + 8 * v39 + 8) = v87; /*0x1004e4a1f*/
    *(_QWORD *)(v38 + 8 * v39) = v40; /*0x1004e4a24*/
    v112 = v37 + 1; /*0x1004e4a2b*/
  }
  if ( v36 < 0 ) /*0x1004e4a32*/
  {
    v41 = 0; /*0x1004e4a34*/
    goto LABEL_49; /*0x1004e4a34*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v34); /*0x1004e4a4c*/
  v41 = 1; /*0x1004e4a51*/
  v42 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v36, 1); /*0x1004e4a5f*/
  if ( !v42 ) /*0x1004e4a67*/
LABEL_49:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v41, v36); /*0x1004e4a37*/
  v43 = v42; /*0x1004e4a69*/
  memcpy(v42, __src, v36); /*0x1004e4a79*/
  if ( (unsigned __int64)v36 < 8 ) /*0x1004e4a82*/
  {
    v44 = 0; /*0x1004e4a84*/
    goto LABEL_66; /*0x1004e4a86*/
  }
  if ( (unsigned __int64)v36 < 0x20 ) /*0x1004e4a9f*/
  {
    v44 = 0; /*0x1004e4aa1*/
    goto LABEL_62; /*0x1004e4aa3*/
  }
  v44 = v36 & 0x7FFFFFFFFFFFFFE0LL; /*0x1004e4ab5*/
  v46 = 0; /*0x1004e4ab8*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x1004e4aba*/
  v48 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x1004e4ac2*/
  v49 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x1004e4aca*/
  do /*0x1004e4b39*/
  {
    v50 = _mm_loadu_si128((const __m128i *)&v43[v46]); /*0x1004e4ae0*/
    v51 = _mm_loadu_si128((const __m128i *)&v43[v46 + 16]); /*0x1004e4ae6*/
    v52 = _mm_add_epi8(v50, si128); /*0x1004e4af1*/
    v53 = _mm_add_epi8(v51, si128); /*0x1004e4af9*/
    *(__m128i *)&v43[v46] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v52, v48), v52), v49), v50); /*0x1004e4b25*/
    *(__m128i *)&v43[v46 + 16] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v53, v48), v53), v49), v51); /*0x1004e4b2b*/
    v46 += 32; /*0x1004e4b32*/
  }
  while ( v44 != v46 ); /*0x1004e4b39*/
  if ( v36 != v44 ) /*0x1004e4b3e*/
  {
    if ( (v36 & 0x18) != 0 ) /*0x1004e4b48*/
    {
LABEL_62:
      v54 = v44; /*0x1004e4b4e*/
      v44 = v36 & 0x7FFFFFFFFFFFFFF8LL; /*0x1004e4b5f*/
      v55 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x1004e4b62*/
      v56 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x1004e4b6a*/
      v57 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x1004e4b72*/
      do /*0x1004e4baf*/
      {
        v58 = _mm_loadl_epi64((const __m128i *)&v43[v54]); /*0x1004e4b80*/
        v59 = _mm_add_epi8(v58, v55); /*0x1004e4b8a*/
        *(_QWORD *)&v43[v54] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v59, v56), v59), v57), v58).u64[0]; /*0x1004e4ba2*/
        v54 += 8; /*0x1004e4ba8*/
      }
      while ( v44 != v54 ); /*0x1004e4baf*/
      goto LABEL_67; /*0x1004e4baf*/
    }
    do /*0x1004e4c64*/
    {
LABEL_66:
      v43[v44] |= 32 * ((unsigned __int8)(v43[v44] - 65) < 0x1Au); /*0x1004e4c47*/
      ++v44; /*0x1004e4c5e*/
LABEL_67:
      ; /*0x1004e4c61*/
    }
    while ( v36 != v44 ); /*0x1004e4c64*/
  }
  v60 = (const char *)&unk_1015FC0A6; /*0x1004e4c66*/
  v61 = 7; /*0x1004e4c6d*/
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e4c9f*/
                           &unk_1015FC0A6,
                           7u,
                           v43)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &unk_1015FC0AD,
                           9u,
                           v43) )
  {
    v60 = (const char *)&anon_92869709a5e99ce1936aa4e326b6c562_71; /*0x1004e4cac*/
    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e4d1e*/
                             &anon_92869709a5e99ce1936aa4e326b6c562_71,
                             7u,
                             v43)
      && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             &unk_1015FC0BD,
                             3u,
                             v43)
      && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             &unk_1015FC0C0,
                             7u,
                             v43)
      && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             &unk_1015FC0C7,
                             0xFu,
                             v43) )
    {
      v60 = (const char *)&unk_1015E3B4C; /*0x1004e4d42*/
      v61 = 4; /*0x1004e4d49*/
      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e4d87*/
                               &unk_1015FC0D6,
                               3u,
                               v43)
        && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                               &unk_1015FC0D9,
                               3u,
                               v43)
        && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                               &unk_1015FC0DC,
                               0xCu,
                               v43) )
      {
        if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e4da6*/
                                &unk_1015FC0E8,
                                3u,
                                v43) )
        {
          v60 = "model"; /*0x1004e4daf*/
          v61 = 5; /*0x1004e4db6*/
          goto LABEL_83; /*0x1004e4dbb*/
        }
        v60 = "model"; /*0x1004e4dbd*/
        v61 = 5; /*0x1004e4dc4*/
        if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e4dd7*/
                                 "model",
                                 5u,
                                 v43) )
        {
          v60 = (const char *)&unk_1015FC103; /*0x1004e4df7*/
          v61 = 10; /*0x1004e4dfe*/
          if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e4e1d*/
                                  &unk_1015FC0EB,
                                  3u,
                                  v43)
            || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                  &unk_1015FFB38,
                                  4u,
                                  v43) )
          {
LABEL_82:
            v36 = __n; /*0x1004e4e2a*/
          }
          else
          {
            v36 = __n; /*0x1004e50ef*/
            if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e50f6*/
                                     &unk_1015FC0EE,
                                     5u,
                                     v43) )
            {
              v60 = "upstreammismatch[event][previousarchivedAuthFile~/.codexsessionsccswitchorphaned"; /*0x1004e511a*/
              v61 = 8; /*0x1004e5121*/
              if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e5115*/
                                      &unk_1015FC0F3,
                                      3u,
                                      v43) )
                goto LABEL_82; /*0x1004e5128*/
              v36 = __n; /*0x1004e513d*/
              if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e5144*/
                                       &unk_1015FC0F6,
                                       3u,
                                       v43) )
              {
                v83 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004e5163*/
                        &unk_1015FC0F9,
                        3u,
                        v43);
                v61 = v83 + 7LL; /*0x1004e516b*/
                v60 = (const char *)&unk_1015FC0FC; /*0x1004e5176*/
                if ( v83 ) /*0x1004e517f*/
                  v60 = "upstreammismatch[event][previousarchivedAuthFile~/.codexsessionsccswitchorphaned"; /*0x1004e517f*/
              }
            }
          }
        }
      }
    }
  }
LABEL_83:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v36, 1); /*0x1004e4e2e*/
  v113 = v60; /*0x1004e4e3e*/
  v114 = v61; /*0x1004e4e42*/
  v100 = (const char *)&v113; /*0x1004e4e4a*/
  v101 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004e4e58*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v85, "\tcategory=\xC0src/commands/debug_report.rs", &v100); /*0x1004e4e74*/
  v62 = v112; /*0x1004e4e79*/
  if ( v112 == v110 ) /*0x1004e4e81*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v110); /*0x1004e4e87*/
  v63 = v111; /*0x1004e4e8c*/
  v64 = 3 * v62; /*0x1004e4e90*/
  *(_QWORD *)(v111 + 8 * v64 + 16) = v85[2]; /*0x1004e4e9b*/
  v65 = v85[0]; /*0x1004e4ea0*/
  *(_QWORD *)(v63 + 8 * v64 + 8) = v85[1]; /*0x1004e4eae*/
  *(_QWORD *)(v63 + 8 * v64) = v65; /*0x1004e4eb3*/
  v112 = v62 + 1; /*0x1004e4eba*/
  v66 = (const char *)codexmate_lib::core::relay::models::error_hint::h00c6a6a07ccdc6a6((__int64)__src, __n); /*0x1004e4ec9*/
  if ( v66 ) /*0x1004e4ed1*/
  {
    v113 = v66; /*0x1004e4ed3*/
    v114 = v67; /*0x1004e4ed7*/
    v100 = (const char *)&v113; /*0x1004e4edf*/
    v101 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004e4ee6*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v84, &unk_1017BF648, &v100); /*0x1004e4f02*/
    v68 = v112; /*0x1004e4f07*/
    if ( v112 == v110 ) /*0x1004e4f0f*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v110); /*0x1004e4f15*/
    v69 = v111; /*0x1004e4f1a*/
    v70 = 3 * v68; /*0x1004e4f1e*/
    *(_QWORD *)(v111 + 8 * v70 + 16) = v84[2]; /*0x1004e4f29*/
    v71 = v84[0]; /*0x1004e4f2e*/
    *(_QWORD *)(v69 + 8 * v70 + 8) = v84[1]; /*0x1004e4f3c*/
    *(_QWORD *)(v69 + 8 * v70) = v71; /*0x1004e4f41*/
    v72 = v68 + 1; /*0x1004e4f45*/
    v112 = v72; /*0x1004e4f48*/
  }
  else
  {
    v72 = v112; /*0x1004e4f4e*/
  }
  alloc::str::join_generic_copy::heca7a5e86402c6b6(&v100, v111, v72, ";  header(s): ", 2);
  v73 = v100; /*0x1004e4f72*/
  v89 = v101; /*0x1004e4f80*/
  v90 = v102; /*0x1004e4f8e*/
  v74 = v97; /*0x1004e4f95*/
  if ( v35 ) /*0x1004e4f9f*/
  {
    v75 = (_QWORD *)(v97 + 8); /*0x1004e4fa1*/
    do /*0x1004e4fb7*/
    {
      v76 = *(v75 - 1); /*0x1004e4fb9*/
      if ( v76 ) /*0x1004e4fc0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v75, v76, 1); /*0x1004e4fca*/
      v75 += 3; /*0x1004e4fb0*/
      --v35; /*0x1004e4fb4*/
    }
    while ( v35 ); /*0x1004e4fb7*/
  }
  if ( v96 ) /*0x1004e4fdb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, 24 * v96, 8); /*0x1004e4fed*/
  v77 = v112; /*0x1004e4ff2*/
  if ( v112 ) /*0x1004e4ff9*/
  {
    v78 = (_QWORD *)(v111 + 8); /*0x1004e4fff*/
    do /*0x1004e5017*/
    {
      v79 = *(v78 - 1); /*0x1004e5019*/
      if ( v79 ) /*0x1004e5020*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v78, v79, 1); /*0x1004e502a*/
      v78 += 3; /*0x1004e5010*/
      --v77; /*0x1004e5014*/
    }
    while ( v77 ); /*0x1004e5017*/
  }
  if ( v110 ) /*0x1004e5038*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, 24 * v110, 8); /*0x1004e504b*/
  a1 = v91; /*0x1004e5061*/
  if ( v73 == (const char *)0x8000000000000000LL ) /*0x1004e5068*/
  {
LABEL_105:
    LOBYTE(v100) = 0; /*0x1004e506a*/
    a1[3] = (const char *)v103; /*0x1004e5078*/
    v80 = v101; /*0x1004e507c*/
    a1[2] = (const char *)v102; /*0x1004e508a*/
    a1[1] = (const char *)v80; /*0x1004e508e*/
    result = (__int64)v100; /*0x1004e5092*/
    *a1 = v100; /*0x1004e5099*/
  }
  else
  {
    v82 = v89; /*0x1004e50ae*/
    v91[3] = (const char *)v90; /*0x1004e50bc*/
    a1[2] = (const char *)v82; /*0x1004e50c0*/
    LOBYTE(v100) = 0; /*0x1004e50c4*/
    *(_BYTE *)a1 = 3; /*0x1004e50cb*/
    a1[1] = v73; /*0x1004e50ce*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004e50d9*/
  }
  return result; /*0x1004e509c*/
}