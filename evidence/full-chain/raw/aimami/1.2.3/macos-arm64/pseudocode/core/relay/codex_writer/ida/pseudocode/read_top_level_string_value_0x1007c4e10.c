// __ZN13codexmate_lib4core5relay12codex_writer27read_top_level_string_value @ 0x1007c4e10 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::core::relay::codex_writer::read_top_level_string_value::h30de29ad5c0062ca(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t a5)
{
  char v5; // r13
  bool v6; // zf
  __int64 v7; // r15
  __int64 v8; // rax
  signed __int64 v9; // rbx
  char *v10; // r15
  __int64 v11; // rax
  _BYTE *v12; // r12
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r14
  __m128i v15; // xmm2
  signed __int64 *v16; // rdi
  signed __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // rsi
  _BYTE *v28; // r14
  unsigned __int64 v29; // rdx
  __int64 *v30; // rbx
  signed __int64 v31; // r12
  unsigned __int64 v32; // rbx
  _QWORD *v33; // r14
  __int64 v34; // rsi
  unsigned __int64 *result; // rax
  __int64 v36; // rbx
  __int64 v37; // r12
  _QWORD *v38; // r14
  unsigned __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // rdi
  void *v43; // [rsp+10h] [rbp-E0h]
  __int64 v44; // [rsp+18h] [rbp-D8h]
  __int64 v46; // [rsp+28h] [rbp-C8h]
  __int64 v47; // [rsp+30h] [rbp-C0h]
  __int64 v49; // [rsp+40h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-A8h]
  __int64 v51; // [rsp+50h] [rbp-A0h]
  __int64 v52; // [rsp+58h] [rbp-98h]
  __int64 v53; // [rsp+60h] [rbp-90h]
  char v54; // [rsp+68h] [rbp-88h]
  __int16 v55; // [rsp+70h] [rbp-80h]
  signed __int64 v56; // [rsp+78h] [rbp-78h] BYREF
  void *__s1; // [rsp+80h] [rbp-70h]
  __int64 v58; // [rsp+88h] [rbp-68h]
  __int64 v59; // [rsp+90h] [rbp-60h]
  unsigned __int64 *v60; // [rsp+98h] [rbp-58h]
  __int64 v61; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-48h]
  __int64 v63; // [rsp+B0h] [rbp-40h]
  __int64 v64; // [rsp+B8h] [rbp-38h]
  signed __int64 v65; // [rsp+C0h] [rbp-30h]

  v60 = a1; /*0x1007c4e32*/
  v61 = 0; /*0x1007c4e36*/
  v62 = 8; /*0x1007c4e3e*/
  v63 = 0; /*0x1007c4e46*/
  v47 = 0; /*0x1007c4e4e*/
  v49 = a2; /*0x1007c4e60*/
  v50 = a3; /*0x1007c4e67*/
  v51 = 0; /*0x1007c4e6e*/
  v52 = a3; /*0x1007c4e79*/
  v53 = 0xA0000000ALL; /*0x1007c4e8a*/
  v54 = 1; /*0x1007c4e91*/
  v55 = 0; /*0x1007c4e98*/
LABEL_2:
  v5 = 0; /*0x1007c4e9e*/
  while ( 2 ) /*0x1007c4ec7*/
  {
    v7 = v49; /*0x1007c4ec7*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1007c4ed9*/
      &v56,
      &v49);
    if ( (_DWORD)v56 == 1 ) /*0x1007c4ee2*/
    {
      v8 = v47; /*0x1007c4ee8*/
      v47 = v58; /*0x1007c4eef*/
      v9 = v58 - v8; /*0x1007c4ef6*/
      v10 = (char *)(v8 + v7); /*0x1007c4ef9*/
      if ( v58 == v8 ) /*0x1007c4eff*/
        goto LABEL_17; /*0x1007c4eff*/
LABEL_11:
      if ( v10[v9 - 1] == 10 ) /*0x1007c4f4f*/
      {
        if ( v9 == 1 ) /*0x1007c4f57*/
        {
          v9 = 0; /*0x1007c4f67*/
        }
        else if ( v10[v9 - 2] == 13 ) /*0x1007c4f5f*/
        {
          v9 -= 2LL; /*0x1007c4f61*/
        }
        else
        {
          --v9; /*0x1007c4f6b*/
        }
      }
      goto LABEL_17; /*0x1007c4f65*/
    }
    if ( HIBYTE(v55) ) /*0x1007c4f14*/
      goto LABEL_46; /*0x1007c4f14*/
    HIBYTE(v55) = 1; /*0x1007c4f1a*/
    v9 = a3 - v47; /*0x1007c4f2c*/
    if ( ((unsigned __int8)v55 | (a3 != v47)) != 1 ) /*0x1007c4f37*/
      goto LABEL_46; /*0x1007c4f37*/
    v10 = (char *)(v49 + v47); /*0x1007c4f3d*/
    if ( v9 ) /*0x1007c4f47*/
      goto LABEL_11; /*0x1007c4f47*/
LABEL_17:
    v11 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v10, v9); /*0x1007c4f76*/
    v12 = (_BYTE *)v11; /*0x1007c4f7b*/
    v14 = v13; /*0x1007c4f7e*/
    switch ( v13 ) /*0x1007c4f99*/
    {
      case 0uLL: /*0x1007c4f99*/
        goto LABEL_3;
      case 0x1EuLL: /*0x1007c4f99*/
        v15 = _mm_or_si128( /*0x1007c4fc0*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  _mm_loadu_si128((const __m128i *)(v11 + 14))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v11),
                  _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
        if ( _mm_testz_si128(v15, v15) ) /*0x1007c4fc4*/
          goto LABEL_4; /*0x1007c4fc9*/
        goto LABEL_29; /*0x1007c4fc9*/
      case 0x24uLL: /*0x1007c4f99*/
        if ( !memcmp((const void *)v11, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99, 0x24u) ) /*0x1007c5021*/
          goto LABEL_4; /*0x1007c5028*/
        goto LABEL_29; /*0x1007c5028*/
      case 0x27uLL: /*0x1007c4f99*/
        if ( !memcmp((const void *)v11, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100, 0x27u) ) /*0x1007c503e*/
          goto LABEL_4; /*0x1007c5045*/
        goto LABEL_29; /*0x1007c5045*/
      case 0x37uLL: /*0x1007c4f99*/
        if ( memcmp((const void *)v11, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) ) /*0x1007c505b*/
          goto LABEL_29; /*0x1007c5062*/
        goto LABEL_4; /*0x1007c5062*/
      case 0x3CuLL: /*0x1007c4f99*/
        if ( !memcmp((const void *)v11, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) ) /*0x1007c4fe3*/
          goto LABEL_4; /*0x1007c4fea*/
        goto LABEL_29; /*0x1007c4fea*/
      case 0x40uLL: /*0x1007c4f99*/
        if ( !memcmp((const void *)v11, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u) ) /*0x1007c5004*/
          goto LABEL_4; /*0x1007c500b*/
        goto LABEL_29; /*0x1007c500b*/
      default:
LABEL_29:
        if ( *v12 == 91 && v12[v14 - 1] == 93 ) /*0x1007c5081*/
        {
          if ( v14 == 1 || (v5 = 1, (char)v12[1] <= -65) ) /*0x1007c509a*/
            core::str::slice_error_fail::h480e51fbd8b15eba( /*0x1007c5433*/
              v12,
              v14,
              1,
              v14 - 1,
              &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
          goto LABEL_4; /*0x1007c509a*/
        }
LABEL_3:
        v6 = (v5 & 1) == 0; /*0x1007c4eb0*/
        v5 = 1; /*0x1007c4eb4*/
        if ( !v6 ) /*0x1007c4eb7*/
        {
LABEL_4:
          if ( HIBYTE(v55) ) /*0x1007c4ec1*/
            goto LABEL_46; /*0x1007c4ec1*/
          continue; /*0x1007c4ec1*/
        }
        v16 = &v56; /*0x1007c50b0*/
        codexmate_lib::core::relay::codex_writer::top_level_assignment_key::h4b08cede7acc5496(&v56, v12, v14); /*0x1007c50ba*/
        v17 = v56; /*0x1007c50bf*/
        if ( !__OFSUB__(-v56, 1) ) /*0x1007c50c9*/
        {
          if ( v56 ) /*0x1007c50cf*/
          {
            v16 = (signed __int64 *)__s1; /*0x1007c50d1*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v56, 1); /*0x1007c50da*/
          }
          if ( v9 < 0 ) /*0x1007c50e2*/
          {
            v41 = 0; /*0x1007c5335*/
LABEL_67:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v41, v65); /*0x1007c5337*/
          }
          if ( v9 ) /*0x1007c50e8*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v17); /*0x1007c50ea*/
            v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1007c50f7*/
            if ( !v18 ) /*0x1007c50ff*/
            {
              v65 = v9; /*0x1007c543a*/
              v41 = 1; /*0x1007c543e*/
              goto LABEL_67; /*0x1007c5443*/
            }
          }
          else
          {
            v18 = 1; /*0x1007c5106*/
          }
          v65 = v18; /*0x1007c510b*/
          memcpy((void *)v18, v10, v9); /*0x1007c5118*/
          v19 = v63; /*0x1007c511d*/
          if ( v63 == v61 ) /*0x1007c5125*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v61); /*0x1007c512b*/
          v20 = v62; /*0x1007c5130*/
          v21 = 3 * v19; /*0x1007c5134*/
          *(_QWORD *)(v62 + 8 * v21) = v9; /*0x1007c5138*/
          *(_QWORD *)(v20 + 8 * v21 + 8) = v65; /*0x1007c5140*/
          *(_QWORD *)(v20 + 8 * v21 + 16) = v9; /*0x1007c5145*/
          v63 = v19 + 1; /*0x1007c514d*/
        }
        if ( !HIBYTE(v55) ) /*0x1007c5155*/
          goto LABEL_2; /*0x1007c5155*/
LABEL_46:
        v22 = v62; /*0x1007c515b*/
        v59 = 24 * v63; /*0x1007c5173*/
        v23 = v62 + 24 * v63; /*0x1007c5177*/
        v46 = v61; /*0x1007c5182*/
        v49 = v61; /*0x1007c5189*/
        v50 = v23; /*0x1007c5190*/
        v24 = v62; /*0x1007c5197*/
        if ( v63 ) /*0x1007c519d*/
        {
          v44 = v62 + 24 * v63; /*0x1007c51a3*/
          v25 = 0; /*0x1007c51aa*/
          v64 = v62; /*0x1007c51ad*/
          while ( 1 ) /*0x1007c51d2*/
          {
            v26 = *(_QWORD *)(v22 + v25); /*0x1007c51d2*/
            if ( v26 == 0x8000000000000000LL ) /*0x1007c51e3*/
            {
              v24 = v22 + v25 + 24; /*0x1007c5289*/
              v23 = v44; /*0x1007c528e*/
              break; /*0x1007c528e*/
            }
            v27 = *(_QWORD *)(v22 + v25 + 16); /*0x1007c51ee*/
            v65 = *(_QWORD *)(v22 + v25 + 8); /*0x1007c51f3*/
            v28 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v65, v27); /*0x1007c51fc*/
            v30 = (__int64 *)v29; /*0x1007c51ff*/
            codexmate_lib::core::relay::codex_writer::top_level_assignment_key::h4b08cede7acc5496(&v56, v28, v29); /*0x1007c5209*/
            v31 = v56; /*0x1007c520e*/
            if ( v56 != 0x8000000000000000LL ) /*0x1007c5226*/
            {
              if ( v58 == a5 ) /*0x1007c522c*/
              {
                v43 = __s1; /*0x1007c5232*/
                if ( !memcmp(__s1, a4, a5) ) /*0x1007c524e*/
                {
                  if ( v31 ) /*0x1007c535f*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v31, 1); /*0x1007c5369*/
                  codexmate_lib::core::relay::codex_writer::extract_toml_string_value::h9ef7877f06eef4d8( /*0x1007c5378*/
                    v60,
                    (__int64)v28,
                    v30);
                  v36 = v59 - 24; /*0x1007c5381*/
                  v37 = v64; /*0x1007c5388*/
                  if ( v26 ) /*0x1007c538c*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v26, 1); /*0x1007c539a*/
                  if ( v36 != v25 ) /*0x1007c53a2*/
                  {
                    v38 = (_QWORD *)(v37 + v25 + 32); /*0x1007c53af*/
                    v39 = (v59 - v25 - 24) / 0x18uLL; /*0x1007c53c4*/
                    do /*0x1007c53d7*/
                    {
                      v40 = *(v38 - 1); /*0x1007c53d9*/
                      if ( v40 ) /*0x1007c53e0*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v38, v40, 1); /*0x1007c53ea*/
                      v38 += 3; /*0x1007c53d0*/
                      --v39; /*0x1007c53d4*/
                    }
                    while ( v39 ); /*0x1007c53d7*/
                  }
                  if ( v46 ) /*0x1007c53fb*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 24 * v46, 8); /*0x1007c540d*/
                  return v60; /*0x1007c5416*/
                }
              }
              if ( v31 ) /*0x1007c5257*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v31, 1); /*0x1007c5265*/
            }
            if ( v26 ) /*0x1007c526d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v26, 1); /*0x1007c527f*/
            v25 += 24; /*0x1007c51c0*/
            v22 = v64; /*0x1007c51c8*/
            if ( v59 == v25 ) /*0x1007c51cc*/
              goto LABEL_63; /*0x1007c51cc*/
          }
        }
        if ( v23 != v24 ) /*0x1007c52b2*/
        {
          v32 = (v23 - v24) / 0x18uLL; /*0x1007c52b7*/
          v33 = (_QWORD *)(v24 + 8); /*0x1007c52bb*/
          do /*0x1007c52d7*/
          {
            v34 = *(v33 - 1); /*0x1007c52d9*/
            if ( v34 ) /*0x1007c52e0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, v34, 1); /*0x1007c52ea*/
            v33 += 3; /*0x1007c52d0*/
            --v32; /*0x1007c52d4*/
          }
          while ( v32 ); /*0x1007c52d7*/
        }
LABEL_63:
        if ( v46 ) /*0x1007c52fb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24 * v46, 8); /*0x1007c530d*/
        result = v60; /*0x1007c5312*/
        *v60 = 0x8000000000000000LL; /*0x1007c5320*/
        return result;
    }
  }
}