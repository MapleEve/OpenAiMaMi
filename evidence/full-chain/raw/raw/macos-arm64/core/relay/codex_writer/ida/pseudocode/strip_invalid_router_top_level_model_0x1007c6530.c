// __ZN13codexmate_lib4core5relay12codex_writer36strip_invalid_router_top_level_model @ 0x1007c6530
__int64 __fastcall codexmate_lib::core::relay::codex_writer::strip_invalid_router_top_level_model::he0dd77d4066d2a83(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5)
{
  __int64 v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r12
  _BYTE *v11; // rdi
  char v12; // r14
  __int64 v13; // r13
  size_t v14; // rax
  size_t v15; // r12
  char *v16; // r13
  _BYTE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE *v22; // rbx
  __int64 v23; // r15
  __int64 v24; // r14
  unsigned __int64 v25; // rbx
  __int64 v26; // r9
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rcx
  __int64 v29; // r14
  unsigned __int64 v30; // rbx
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // rsi
  void *v34; // rdi
  __int64 v35; // r14
  unsigned __int64 v36; // rbx
  __int64 v37; // r9
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rcx
  __int64 v40; // rbx
  void *v41; // rsi
  unsigned __int64 v42; // r14
  __m128i v43; // xmm1
  unsigned __int64 v44; // r14
  __m128i v46; // xmm2
  __int64 v48; // rax
  int v49; // eax
  unsigned __int64 v50; // rax
  char v51; // cl
  char v52; // dl
  int v53; // edx
  unsigned int v54; // ecx
  __int64 *v55; // rdx
  __int64 result; // rax
  __m128i i; // [rsp+0h] [rbp-130h] BYREF
  __m128i v58; // [rsp+10h] [rbp-120h] BYREF
  __int64 *v59; // [rsp+20h] [rbp-110h]
  __int64 v60; // [rsp+28h] [rbp-108h]
  _QWORD *v61; // [rsp+30h] [rbp-100h]
  __int64 v62; // [rsp+38h] [rbp-F8h]
  size_t __n; // [rsp+40h] [rbp-F0h]
  size_t v64; // [rsp+48h] [rbp-E8h]
  __int64 v65; // [rsp+50h] [rbp-E0h]
  _QWORD v66[5]; // [rsp+58h] [rbp-D8h] BYREF
  char v67; // [rsp+80h] [rbp-B0h]
  __int16 v68; // [rsp+88h] [rbp-A8h]
  __int64 v69; // [rsp+90h] [rbp-A0h]
  __int64 v70; // [rsp+98h] [rbp-98h]
  __int64 v71; // [rsp+A0h] [rbp-90h]
  __int64 v72; // [rsp+A8h] [rbp-88h] BYREF
  _DWORD *v73; // [rsp+B0h] [rbp-80h]
  size_t v74; // [rsp+B8h] [rbp-78h]
  __int64 v75; // [rsp+C0h] [rbp-70h]
  void *__s1; // [rsp+C8h] [rbp-68h]
  int v77; // [rsp+D4h] [rbp-5Ch]
  _BYTE *v78; // [rsp+D8h] [rbp-58h]
  __int64 v79; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v81; // [rsp+F0h] [rbp-40h]
  unsigned __int64 v82; // [rsp+F8h] [rbp-38h]
  char v83; // [rsp+107h] [rbp-29h]

  if ( a3 < 0 ) /*0x1007c654a*/
  {
    v6 = 0; /*0x1007c654c*/
    goto LABEL_3; /*0x1007c654c*/
  }
  v77 = a4; /*0x1007c655a*/
  v59 = a1; /*0x1007c655d*/
  if ( a3 ) /*0x1007c6564*/
  {
    v7 = a5; /*0x1007c6569*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1007c656c*/
    v6 = 1; /*0x1007c6571*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1007c657f*/
    if ( !v8 ) /*0x1007c6587*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, a3); /*0x1007c654f*/
    a5 = v7; /*0x1007c6589*/
  }
  else
  {
    v8 = 1; /*0x1007c6591*/
  }
  v79 = a3; /*0x1007c6596*/
  v80 = v8; /*0x1007c659a*/
  v81 = 0; /*0x1007c659e*/
  v64 = 0; /*0x1007c65a6*/
  v65 = a3; /*0x1007c65b1*/
  v66[0] = a2; /*0x1007c65b8*/
  v66[1] = a3; /*0x1007c65bf*/
  v66[2] = 0; /*0x1007c65c6*/
  v66[3] = a3; /*0x1007c65d1*/
  v66[4] = 0xA0000000ALL; /*0x1007c65e2*/
  v67 = 1; /*0x1007c65e9*/
  v68 = 0; /*0x1007c65f0*/
  v62 = a5[3]; /*0x1007c65fd*/
  v61 = a5 + 4; /*0x1007c660f*/
  v9 = *a5; /*0x1007c6616*/
  v69 = a5[1]; /*0x1007c661d*/
  v60 = v9; /*0x1007c6624*/
  v70 = v9 - 24; /*0x1007c662f*/
  v83 = v77 & (v62 != 0); /*0x1007c663a*/
  v10 = 0; /*0x1007c663e*/
  v11 = (_BYTE *)v8; /*0x1007c6641*/
  v12 = 0; /*0x1007c6644*/
  do /*0x1007c6afc*/
  {
    while ( 1 ) /*0x1007c6739*/
    {
      while ( 1 ) /*0x1007c6650*/
      {
        v82 = v10; /*0x1007c6650*/
        v75 = v8; /*0x1007c6654*/
        v78 = v11; /*0x1007c6658*/
        v13 = v66[0]; /*0x1007c665c*/
        _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c6671*/
          &v72,
          v66);
        if ( (_DWORD)v72 == 1 ) /*0x1007c667d*/
        {
          v14 = v64; /*0x1007c6683*/
          v64 = v74; /*0x1007c668a*/
          v15 = v74 - v14; /*0x1007c6691*/
          v16 = (char *)(v14 + v13); /*0x1007c6694*/
          if ( v74 == v14 ) /*0x1007c669a*/
            goto LABEL_21; /*0x1007c669a*/
LABEL_15:
          if ( v16[v15 - 1] == 10 ) /*0x1007c66e8*/
          {
            if ( v15 == 1 ) /*0x1007c66f0*/
            {
              v15 = 0; /*0x1007c6700*/
            }
            else if ( v16[v15 - 2] == 13 ) /*0x1007c66f8*/
            {
              v15 -= 2LL; /*0x1007c66fa*/
            }
            else
            {
              --v15; /*0x1007c6705*/
            }
          }
          goto LABEL_21; /*0x1007c66fe*/
        }
        if ( HIBYTE(v68) || (HIBYTE(v68) = 1, v15 = v65 - v64, ((unsigned __int8)v68 | (v65 != v64)) != 1) ) /*0x1007c66d0*/
        {
          v11 = v78; /*0x1007c6bf1*/
          v10 = v82; /*0x1007c6bf5*/
          goto LABEL_77; /*0x1007c6bf9*/
        }
        v16 = (char *)(v66[0] + v64); /*0x1007c66d6*/
        if ( v15 ) /*0x1007c66e0*/
          goto LABEL_15; /*0x1007c66e0*/
LABEL_21:
        v17 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v16, v15); /*0x1007c6716*/
        v22 = v17; /*0x1007c671b*/
        v23 = v18; /*0x1007c671e*/
        if ( !v18 || *v17 != 91 || v17[v18 - 1] != 93 ) /*0x1007c6739*/
          break; /*0x1007c6739*/
        if ( v18 == 1 || (char)v17[1] <= -65 ) /*0x1007c674d*/
          core::str::slice_error_fail::h480e51fbd8b15eba( /*0x1007c6cea*/
            v17,
            v18,
            1,
            v18 - 1,
            &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
        v24 = v79; /*0x1007c6753*/
        if ( v15 > v79 - v82 ) /*0x1007c6761*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c6bcf*/
            &v79,
            v82,
            v15,
            1,
            1,
            v21);
          v82 = v81; /*0x1007c6bd8*/
          v24 = v79; /*0x1007c6bdc*/
          v75 = v80; /*0x1007c6be4*/
          v78 = (_BYTE *)v80; /*0x1007c6be8*/
        }
        v25 = v82; /*0x1007c676b*/
        memcpy(&v78[v82], v16, v15); /*0x1007c6778*/
        v27 = v25 + v15; /*0x1007c677d*/
        v81 = v27; /*0x1007c6780*/
        v28 = v27; /*0x1007c6784*/
        v8 = v75; /*0x1007c678a*/
        if ( v24 == v27 ) /*0x1007c678e*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c67a7*/
            &v79,
            v24,
            1,
            1,
            1,
            v26);
          v8 = v80; /*0x1007c67ac*/
          v28 = v81; /*0x1007c67b0*/
        }
LABEL_36:
        *(_BYTE *)(v8 + v28) = 10; /*0x1007c6807*/
        v10 = v27 + 1; /*0x1007c680b*/
        v81 = v10; /*0x1007c680e*/
        v12 = 1; /*0x1007c6812*/
        v11 = (_BYTE *)v8; /*0x1007c6815*/
        if ( HIBYTE(v68) ) /*0x1007c681f*/
          goto LABEL_77; /*0x1007c681f*/
      }
      if ( (v12 & 1) != 0 ) /*0x1007c67c4*/
      {
        v29 = v79; /*0x1007c67c6*/
        if ( v15 > v79 - v82 ) /*0x1007c67d4*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c6b1d*/
            &v79,
            v82,
            v15,
            1,
            1,
            v21);
          v82 = v81; /*0x1007c6b26*/
          v29 = v79; /*0x1007c6b2a*/
          v78 = (_BYTE *)v80; /*0x1007c6b32*/
        }
        v30 = v82; /*0x1007c67de*/
        memcpy(&v78[v82], v16, v15); /*0x1007c67eb*/
        v27 = v30 + v15; /*0x1007c67f0*/
        v81 = v27; /*0x1007c67f3*/
        v28 = v27; /*0x1007c67f7*/
        if ( v29 == v27 ) /*0x1007c67fd*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c6b52*/
            &v79,
            v29,
            1,
            1,
            1,
            v31);
          v28 = v81; /*0x1007c6b57*/
        }
        v8 = v80; /*0x1007c6803*/
        goto LABEL_36; /*0x1007c6803*/
      }
      codexmate_lib::core::relay::codex_writer::top_level_assignment_key::h4b08cede7acc5496( /*0x1007c683d*/
        &v72,
        v17,
        v18,
        v19,
        v20,
        v21,
        i.i64[0],
        i.i64[1],
        v58.i64[0],
        v58.i64[1]);
      v33 = v72; /*0x1007c6842*/
      if ( v72 == 0x8000000000000000LL ) /*0x1007c6856*/
        goto LABEL_43; /*0x1007c6856*/
      v34 = v73; /*0x1007c6858*/
      if ( v74 == 5 && !(*v73 ^ 0x65646F6D | *((unsigned __int8 *)v73 + 4) ^ 0x6C) ) /*0x1007c6873*/
        break; /*0x1007c6873*/
      if ( v72 ) /*0x1007c687a*/
        goto LABEL_42; /*0x1007c687a*/
LABEL_43:
      v35 = v79; /*0x1007c6886*/
      if ( v15 > v79 - v82 ) /*0x1007c6894*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1007c6b76*/
          &v79,
          v82,
          v15,
          1,
          1,
          v32);
        v82 = v81; /*0x1007c6b7f*/
        v35 = v79; /*0x1007c6b83*/
        v78 = (_BYTE *)v80; /*0x1007c6b8b*/
      }
      v36 = v82; /*0x1007c689e*/
      memcpy(&v78[v82], v16, v15); /*0x1007c68ab*/
      v38 = v36 + v15; /*0x1007c68b0*/
      v81 = v38; /*0x1007c68b3*/
      v39 = v38; /*0x1007c68b7*/
      if ( v35 == v38 ) /*0x1007c68bd*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v79, v35, 1, 1, 1, v37); /*0x1007c6bab*/
        v39 = v81; /*0x1007c6bb0*/
      }
      v8 = v80; /*0x1007c68c3*/
      *(_BYTE *)(v80 + v39) = 10; /*0x1007c68c7*/
      v10 = v38 + 1; /*0x1007c68cb*/
      v81 = v10; /*0x1007c68ce*/
      v12 = 0; /*0x1007c68d2*/
      v11 = (_BYTE *)v8; /*0x1007c68d5*/
      if ( HIBYTE(v68) ) /*0x1007c68df*/
        goto LABEL_77; /*0x1007c68df*/
    }
    if ( v72 ) /*0x1007c68ed*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v72, 1); /*0x1007c68f4*/
    codexmate_lib::core::relay::codex_writer::extract_toml_string_value::h9ef7877f06eef4d8(&v72, v22, v23); /*0x1007c6906*/
    v40 = v72; /*0x1007c690b*/
    if ( v72 == 0x8000000000000000LL ) /*0x1007c691f*/
      goto LABEL_43; /*0x1007c691f*/
    v41 = v73; /*0x1007c6925*/
    if ( v74 == 12 ) /*0x1007c6931*/
    {
      if ( *(_QWORD *)v73 ^ 0x725F696D616D6961LL | (unsigned int)v73[2] ^ 0x79616C65LL ) /*0x1007c694d*/
        goto LABEL_69; /*0x1007c6950*/
      if ( v83 ) /*0x1007c695a*/
      {
LABEL_60:
        __s1 = v73; /*0x1007c69b0*/
        __n = v74; /*0x1007c69bb*/
        v42 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v61, v73, v74); /*0x1007c69c7*/
        v43 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v42 >> 57), (__m128i)0LL); /*0x1007c69d6*/
        v71 = 0; /*0x1007c69db*/
        for ( i = v43; ; v43 = _mm_load_si128(&i) ) /*0x1007c69e6*/
        {
          v44 = v69 & v42; /*0x1007c69ee*/
          HIDWORD(_RAX) = HIDWORD(v60); /*0x1007c69f5*/
          v46 = _mm_loadu_si128((const __m128i *)(v60 + v44)); /*0x1007c69fc*/
          _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v46, v43)); /*0x1007c6a0a*/
          if ( _R15D ) /*0x1007c6a12*/
            break; /*0x1007c6a12*/
LABEL_66:
          v41 = __s1; /*0x1007c6a7c*/
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v46, (__m128i)-1LL)) ) /*0x1007c6a84*/
            goto LABEL_71; /*0x1007c6a8e*/
          v42 = v44 + v71 + 16; /*0x1007c6a97*/
          v71 += 16; /*0x1007c6aa0*/
        }
        v58 = v46; /*0x1007c6a14*/
        while ( 1 ) /*0x1007c6a1c*/
        {
          __asm { tzcnt eax, r15d } /*0x1007c6a1c*/
          v48 = -3LL * (v69 & (v44 + _RAX)); /*0x1007c6a2e*/
          if ( __n == *(_QWORD *)(v70 + 8 * v48 + 16) ) /*0x1007c6a49*/
          {
            v49 = memcmp(__s1, *(const void **)(v70 + 8 * v48 + 8), __n); /*0x1007c6a5a*/
            v41 = __s1; /*0x1007c6a5f*/
            if ( !v49 ) /*0x1007c6a65*/
              break; /*0x1007c6a65*/
          }
          _RAX = (unsigned int)(_R15D - 1); /*0x1007c6a67*/
          LOWORD(_RAX) = _R15D & (_R15D - 1); /*0x1007c6a6b*/
          _R15D = _RAX; /*0x1007c6a6f*/
          v46 = _mm_load_si128(&v58); /*0x1007c6a72*/
          if ( !(_WORD)_RAX ) /*0x1007c6a7a*/
            goto LABEL_66; /*0x1007c6a7a*/
        }
LABEL_69:
        if ( !v40 ) /*0x1007c6abb*/
          goto LABEL_43; /*0x1007c6abb*/
        v34 = v41; /*0x1007c6ac6*/
        v33 = v40; /*0x1007c6ac9*/
LABEL_42:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x1007c6881*/
        goto LABEL_43; /*0x1007c6881*/
      }
    }
    else
    {
      if ( v74 <= 0xC ) /*0x1007c6961*/
        goto LABEL_69; /*0x1007c6961*/
      if ( !(_BYTE)v77 || *(_QWORD *)v73 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v73 + 5) ^ 0x5F79616C65725F69LL ) /*0x1007c698a*/
      {
        if ( *(_QWORD *)v73 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v73 + 5) ^ 0x5F79616C65725F69LL ) /*0x1007c698a*/
          goto LABEL_69; /*0x1007c6ab6*/
      }
      else if ( v62 ) /*0x1007c69aa*/
      {
        goto LABEL_60; /*0x1007c69aa*/
      }
    }
LABEL_71:
    if ( v40 ) /*0x1007c6ad4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x1007c6ae1*/
    v12 = 0; /*0x1007c6ae6*/
    v11 = v78; /*0x1007c6ae9*/
    v8 = v75; /*0x1007c6aed*/
    v10 = v82; /*0x1007c6af1*/
  }
  while ( !HIBYTE(v68) ); /*0x1007c6afc*/
LABEL_77:
  while ( v10 >= 2 ) /*0x1007c6c07*/
  {
    if ( *(_WORD *)&v11[v10 - 2] != 2570 ) /*0x1007c6c15*/
      goto LABEL_92; /*0x1007c6c15*/
    v50 = -1; /*0x1007c6c1b*/
    if ( (char)v11[v10 - 1] < 0 ) /*0x1007c6c28*/
    {
      v51 = v11[v10 - 2]; /*0x1007c6c2a*/
      if ( v51 > -65 ) /*0x1007c6c33*/
      {
        v54 = v51 & 0x1F; /*0x1007c6c53*/
        if ( v54 < 2 ) /*0x1007c6c59*/
          goto LABEL_76; /*0x1007c6c59*/
LABEL_87:
        v50 = -2; /*0x1007c6c6d*/
        if ( v54 >= 0x20 ) /*0x1007c6c77*/
          v50 = (v54 < 0x400) | 0xFFFFFFFFFFFFFFFCLL; /*0x1007c6c84*/
        goto LABEL_76; /*0x1007c6c88*/
      }
      v52 = v11[v10 - 3]; /*0x1007c6c35*/
      if ( v52 > -65 ) /*0x1007c6c3e*/
        v53 = v52 & 0xF; /*0x1007c6c5d*/
      else
        v53 = ((v11[v10 - 4] & 7) << 6) | v52 & 0x3F; /*0x1007c6c4f*/
      v54 = (v53 << 6) | v51 & 0x3F; /*0x1007c6c66*/
      if ( v54 >= 2 ) /*0x1007c6c6b*/
        goto LABEL_87; /*0x1007c6c6b*/
    }
LABEL_76:
    v10 += v50; /*0x1007c6c00*/
  }
  v81 = v10; /*0x1007c6c8d*/
  if ( v10 && *v11 == 10 ) /*0x1007c6c99*/
  {
    v10 = 0; /*0x1007c6c9b*/
LABEL_92:
    v81 = v10; /*0x1007c6c9e*/
  }
  v55 = v59; /*0x1007c6ca2*/
  v59[2] = v81; /*0x1007c6cad*/
  result = v79; /*0x1007c6cb1*/
  v55[1] = v80; /*0x1007c6cb9*/
  *v55 = result; /*0x1007c6cbd*/
  return result; /*0x1007c6cc0*/
}