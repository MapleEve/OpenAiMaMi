// __ZN13codexmate_lib8platform7process34is_codex_related_command_with_main @ 0x1003688f0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::is_codex_related_command_with_main::h90488d9238bc6272(
        _BYTE *a1,
        size_t a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // al
  int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  void *v13; // rbx
  size_t v14; // r14
  size_t v15; // r12
  _BYTE *v16; // r15
  bool v17; // r14
  void *v18; // rbx
  char v19; // al
  int v20; // ecx
  void *v22; // r15
  size_t v23; // r12
  char *v24; // r13
  const void *v25; // rbx
  char *v26; // rdx
  char *v27; // r14
  __int64 v28; // rax
  size_t v29; // rdx
  size_t v30; // r15
  __int64 v31; // r14
  const void *v32; // r13
  _BYTE *v33; // rax
  _BYTE *v34; // r12
  __int64 v35; // rax
  void *v36; // rdi
  size_t v37; // r8
  char *v38; // r9
  __int64 v39; // rdx
  __m128i si128; // xmm0
  __m128i v41; // xmm1
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  __m128i v44; // xmm4
  __m128i v45; // xmm5
  __m128i v46; // xmm6
  __int64 v47; // rdx
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  __m128i v52; // xmm4
  int v53; // eax
  __int64 v54; // rsi
  size_t v55; // rax
  char *v56; // rdx
  size_t v57; // rbx
  char *v58; // r14
  __int64 v59; // rax
  char *v60; // rdx
  bool v61; // zf
  _QWORD v62[7]; // [rsp+0h] [rbp-E0h] BYREF
  __int16 v63; // [rsp+38h] [rbp-A8h]
  __int64 v64; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+48h] [rbp-98h]
  unsigned __int64 v66; // [rsp+50h] [rbp-90h]
  __int64 v67; // [rsp+58h] [rbp-88h] BYREF
  void *__s1; // [rsp+60h] [rbp-80h]
  size_t __n; // [rsp+68h] [rbp-78h]
  size_t v70; // [rsp+70h] [rbp-70h]
  void *v71; // [rsp+78h] [rbp-68h]
  char *v72; // [rsp+80h] [rbp-60h]
  __int64 v73; // [rsp+88h] [rbp-58h]
  __int16 v74; // [rsp+90h] [rbp-50h]
  __int16 v75; // [rsp+98h] [rbp-48h]
  size_t v76; // [rsp+A0h] [rbp-40h]
  void *__s2; // [rsp+A8h] [rbp-38h]
  char *v78; // [rsp+B0h] [rbp-30h]

  if ( (unsigned __int8)codexmate_lib::platform::process::is_protected_process_command::h47b2ccc8c4a05c1c(a1, a2) ) /*0x100368910*/
    goto LABEL_2; /*0x100368917*/
  v76 = a2; /*0x100368925*/
  __s2 = a1; /*0x100368929*/
  if ( !a3 ) /*0x100368930*/
    goto LABEL_20; /*0x100368930*/
  v6 = codexmate_lib::platform::process::command_runs_executable::h592cda2c9961586f( /*0x100368944*/
         (unsigned __int8 *)__s2,
         v76,
         a3,
         a4);
  LOBYTE(v7) = 1; /*0x100368949*/
  LODWORD(v78) = v7; /*0x10036894b*/
  if ( !v6 ) /*0x100368950*/
  {
    while ( 1 ) /*0x10036897a*/
    {
      v8 = std::path::Path::parent::h4c3ac26770731fbb(a3, a4); /*0x10036897a*/
      v10 = v9; /*0x10036897d*/
      v11 = std::path::Path::extension::hbb56a39ecf8d3771(a3, a4); /*0x100368986*/
      if ( v11 ) /*0x10036898e*/
      {
        core::str::converts::from_utf8::hb32deb9559450f6e(&v67, v11, v12); /*0x100368996*/
        if ( (_DWORD)v67 != 1 /*0x1003689f1*/
          && __n == 3
          && (*(_BYTE *)__s1 | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)__s1 - 65) < 0x1Au))) == 97
          && (*((_BYTE *)__s1 + 1) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 1) - 65) < 0x1Au))) == 112
          && (*((_BYTE *)__s1 + 2) | (unsigned __int8)(32 * ((unsigned __int8)(*((_BYTE *)__s1 + 2) - 65) < 0x1Au))) == 112 )
        {
          break; /*0x1003689f1*/
        }
      }
      a3 = v8; /*0x100368960*/
      a4 = v10; /*0x100368963*/
      if ( !v8 ) /*0x100368969*/
        goto LABEL_20; /*0x100368969*/
    }
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v67, a3, a4); /*0x100368a04*/
    v13 = __s1; /*0x100368a09*/
    v14 = __n; /*0x100368a0d*/
    v15 = v76; /*0x100368a11*/
    v17 = v76 >= __n && (v16 = __s2, ((v15 != v14) & (memcmp(__s1, __s2, __n) == 0)) != 0) && v16[v14] == 47; /*0x100368a45*/
    if ( 2 * v67 ) /*0x100368a50*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v67, 1); /*0x100368a65*/
    if ( !v17 ) /*0x100368a6d*/
    {
LABEL_20:
      v18 = __s2; /*0x100368a6f*/
      v19 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100368a89*/
              "Codex.app/Codex Helper-t",
              0xAu,
              __s2);
      LOBYTE(v20) = 1; /*0x100368a8e*/
      LODWORD(v78) = v20; /*0x100368a90*/
      if ( v19 /*0x100368aa9*/
        || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                              "Codex Helper-t",
                              0xCu,
                              v18) )
      {
        return (unsigned int)v78; /*0x100368ab0*/
      }
      v22 = __s2; /*0x100368ac7*/
      v23 = v76; /*0x100368acb*/
      v24 = (char *)__s2 + v76; /*0x100368acf*/
      v67 = 0; /*0x100368ad3*/
      __s1 = (void *)v76; /*0x100368ade*/
      __n = (size_t)__s2; /*0x100368ae2*/
      v70 = v76; /*0x100368ae6*/
      v71 = __s2; /*0x100368aea*/
      v72 = (char *)__s2 + v76; /*0x100368aee*/
      v73 = 0; /*0x100368af2*/
      v74 = 1; /*0x100368afa*/
      v25 = (const void *)core::iter::traits::iterator::Iterator::try_fold::h476eff2b16756c7b(&v67); /*0x100368b0c*/
      v27 = v26; /*0x100368b0f*/
      if ( !v25 ) /*0x100368b15*/
      {
        v27 = (char *)v23; /*0x100368b15*/
        v25 = v22; /*0x100368b19*/
      }
      v67 = 0; /*0x100368b1d*/
      __s1 = v27; /*0x100368b28*/
      __n = (size_t)v25; /*0x100368b2c*/
      v70 = (size_t)v27; /*0x100368b30*/
      v71 = nullptr; /*0x100368b34*/
      v72 = v27; /*0x100368b3c*/
      v73 = 0x2F0000002FLL; /*0x100368b4a*/
      LOBYTE(v74) = 1; /*0x100368b4e*/
      v75 = 1; /*0x100368b52*/
      v28 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(&v67); /*0x100368b5f*/
      v30 = v29; /*0x100368b64*/
      if ( !v28 ) /*0x100368b6a*/
        v30 = (size_t)v27; /*0x100368b6a*/
      if ( (v30 & 0x8000000000000000LL) != 0LL ) /*0x100368b71*/
      {
        v31 = 0; /*0x100368b73*/
        goto LABEL_29; /*0x100368b73*/
      }
      if ( !v30 ) /*0x100368b81*/
      {
LABEL_2:
        LODWORD(v78) = 0; /*0x100368919*/
        return (unsigned int)v78; /*0x100368920*/
      }
      v78 = v24; /*0x100368b83*/
      v32 = (const void *)v28; /*0x100368b87*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v67, 12); /*0x100368b8a*/
      v31 = 1; /*0x100368b8f*/
      v33 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1); /*0x100368b9d*/
      if ( !v33 ) /*0x100368ba5*/
LABEL_29:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v30); /*0x100368b76*/
      v34 = v33; /*0x100368ba7*/
      if ( v32 ) /*0x100368bad*/
        v25 = v32; /*0x100368bad*/
      memcpy(v33, v25, v30); /*0x100368bba*/
      if ( v30 <= 7 ) /*0x100368bc3*/
      {
        v35 = 0; /*0x100368bc5*/
        v36 = __s2; /*0x100368bc7*/
        v37 = v76; /*0x100368bcb*/
        v38 = v78; /*0x100368bcf*/
        goto LABEL_46; /*0x100368bd3*/
      }
      v36 = __s2; /*0x100368c02*/
      v37 = v76; /*0x100368c06*/
      v38 = v78; /*0x100368c0a*/
      if ( v30 >= 0x20 ) /*0x100368c0e*/
      {
        v35 = v30 & 0x7FFFFFFFFFFFFFE0LL; /*0x100368c1a*/
        v39 = 0; /*0x100368c1d*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100368c1f*/
        v41 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100368c27*/
        v42 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100368c2f*/
        do /*0x100368c99*/
        {
          v43 = _mm_loadu_si128((const __m128i *)&v34[v39]); /*0x100368c40*/
          v44 = _mm_loadu_si128((const __m128i *)&v34[v39 + 16]); /*0x100368c46*/
          v45 = _mm_add_epi8(v43, si128); /*0x100368c51*/
          v46 = _mm_add_epi8(v44, si128); /*0x100368c59*/
          *(__m128i *)&v34[v39] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v45, v41), v45), v42), v43); /*0x100368c85*/
          *(__m128i *)&v34[v39 + 16] = _mm_or_si128( /*0x100368c8b*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v46, v41), v46), v42),
                                         v44);
          v39 += 32; /*0x100368c92*/
        }
        while ( v35 != v39 ); /*0x100368c99*/
        if ( v30 == v35 ) /*0x100368c9e*/
          goto LABEL_48; /*0x100368c9e*/
        if ( (v30 & 0x18) == 0 ) /*0x100368ca8*/
        {
          do /*0x100368d20*/
          {
LABEL_46:
            v34[v35] |= 32 * ((unsigned __int8)(v34[v35] - 65) < 0x1Au); /*0x100368d03*/
            ++v35; /*0x100368d1a*/
LABEL_47:
            ; /*0x100368d1d*/
          }
          while ( v30 != v35 ); /*0x100368d20*/
LABEL_48:
          if ( v30 == 5 ) /*0x100368d26*/
          {
            v53 = *(_DWORD *)v34 ^ 0x65646F63; /*0x100368d2d*/
            v30 = 5; /*0x100368d3a*/
            if ( v53 | (unsigned __int8)v34[4] ^ 0x78 ) /*0x100368d40*/
            {
              v54 = 5; /*0x100368d44*/
              goto LABEL_69; /*0x100368d49*/
            }
            goto LABEL_58; /*0x100368d42*/
          }
          if ( v30 > 5 ) /*0x100368d4e*/
          {
            v53 = 1701080931; /*0x100368d50*/
            if ( !(*(_DWORD *)v34 ^ 0x65646F63 | *((unsigned __int16 *)v34 + 2) ^ 0x2D78) /*0x100368d7b*/
              || (v53 = *(_DWORD *)v34 ^ 0x65646F63, !(v53 | *((unsigned __int16 *)v34 + 2) ^ 0x5F78)) )
            {
LABEL_58:
              LOBYTE(v53) = 1; /*0x100368da4*/
              LODWORD(v78) = v53; /*0x100368da6*/
LABEL_80:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v30, 1); /*0x100368f27*/
              return (unsigned int)v78; /*0x100368f37*/
            }
          }
          if ( v30 == 8 ) /*0x100368d83*/
          {
            v54 = 8; /*0x100368dae*/
            if ( *(_QWORD *)v34 != 0x6578652E65646F6ELL ) /*0x100368dc1*/
              goto LABEL_69; /*0x100368dc1*/
          }
          else
          {
            if ( v30 != 4 ) /*0x100368d89*/
            {
              v54 = v30; /*0x100368ec3*/
              goto LABEL_69; /*0x100368ec3*/
            }
            v54 = 4; /*0x100368d8f*/
            if ( *(_DWORD *)v34 != 1701080942 ) /*0x100368d9c*/
            {
LABEL_69:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v54, 1); /*0x100368ec6*/
              goto LABEL_2; /*0x100368ed3*/
            }
          }
          v62[0] = 0; /*0x100368dc7*/
          v62[1] = v37; /*0x100368dd2*/
          v62[2] = v36; /*0x100368dd9*/
          v62[3] = v37; /*0x100368de0*/
          v62[4] = v36; /*0x100368de7*/
          v62[5] = v38; /*0x100368dee*/
          v62[6] = 0; /*0x100368df5*/
          v63 = 1; /*0x100368e00*/
          if ( !core::iter::traits::iterator::Iterator::try_fold::h476eff2b16756c7b(v62) /*0x100368e2d*/
            || (v55 = core::iter::traits::iterator::Iterator::try_fold::h476eff2b16756c7b(v62)) == 0 )
          {
            LODWORD(v57) = 0; /*0x100368ed8*/
LABEL_79:
            LODWORD(v78) = v57; /*0x100368f24*/
            goto LABEL_80; /*0x100368f24*/
          }
          v57 = v55; /*0x100368e33*/
          v58 = v56; /*0x100368e36*/
          v67 = 0; /*0x100368e39*/
          __s1 = v56; /*0x100368e44*/
          __n = v55; /*0x100368e48*/
          v70 = (size_t)v56; /*0x100368e4c*/
          v71 = nullptr; /*0x100368e50*/
          v72 = v56; /*0x100368e58*/
          v73 = 0x2F0000002FLL; /*0x100368e66*/
          LOBYTE(v74) = 1; /*0x100368e6a*/
          v75 = 1; /*0x100368e6e*/
          v59 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h3733e925f64ab029(&v67); /*0x100368e7b*/
          if ( v59 ) /*0x100368e83*/
            v57 = v59; /*0x100368e83*/
          else
            v60 = v58; /*0x100368e87*/
          alloc::str::_$LT$impl$u20$str$GT$::to_ascii_lowercase::h0a527fd5b7c7287b(&v64, v57, v60); /*0x100368e95*/
          if ( v66 == 5 ) /*0x100368eac*/
          {
            v61 = (*(_DWORD *)v65 ^ 0x65646F63 | *(unsigned __int8 *)(v65 + 4) ^ 0x78) == 0; /*0x100368ebc*/
LABEL_67:
            LOBYTE(v57) = v61; /*0x100368ebe*/
            goto LABEL_77; /*0x100368ec1*/
          }
          if ( v66 > 5 ) /*0x100368edc*/
          {
            if ( !(*(_DWORD *)v65 ^ 0x65646F63 | *(unsigned __int16 *)(v65 + 4) ^ 0x2D78) ) /*0x100368ef1*/
            {
              LOBYTE(v57) = 1; /*0x100368f0c*/
LABEL_77:
              if ( v64 ) /*0x100368f18*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x100368f1f*/
              goto LABEL_79; /*0x100368f1f*/
            }
            if ( v66 == 8 ) /*0x100368ef7*/
            {
              v61 = *(_QWORD *)v65 == 0x736A2E7865646F63LL; /*0x100368f03*/
              goto LABEL_67; /*0x100368f06*/
            }
          }
          LODWORD(v57) = 0; /*0x100368f08*/
          goto LABEL_77; /*0x100368f0a*/
        }
      }
      else
      {
        v35 = 0; /*0x100368c10*/
      }
      v47 = v35; /*0x100368caa*/
      v35 = v30 & 0x7FFFFFFFFFFFFFF8LL; /*0x100368cb4*/
      v48 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100368cb7*/
      v49 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100368cbf*/
      v50 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100368cc7*/
      do /*0x100368cff*/
      {
        v51 = _mm_loadl_epi64((const __m128i *)&v34[v47]); /*0x100368cd0*/
        v52 = _mm_add_epi8(v51, v48); /*0x100368cda*/
        *(_QWORD *)&v34[v47] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v52, v49), v52), v50), v51).u64[0]; /*0x100368cf2*/
        v47 += 8; /*0x100368cf8*/
      }
      while ( v35 != v47 ); /*0x100368cff*/
      goto LABEL_47; /*0x100368cff*/
    }
  }
  return (unsigned int)v78; /*0x100368ab5*/
}