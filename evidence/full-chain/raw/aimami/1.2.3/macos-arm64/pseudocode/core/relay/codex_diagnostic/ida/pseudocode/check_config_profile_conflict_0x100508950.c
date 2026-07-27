// __ZN13codexmate_lib4core5relay16codex_diagnostic29check_config_profile_conflict @ 0x100508950 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_config_profile_conflict::h6d9e2a9aff7b2558(
        _QWORD *a1,
        void *a2,
        _BYTE *a3,
        int a4)
{
  char v4; // r12
  bool v5; // r15
  char *v6; // r14
  void *v7; // rcx
  char *v8; // rax
  char *v9; // r14
  char *v10; // rsi
  __int64 v11; // r13
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  bool v14; // al
  __m128i v15; // xmm2
  bool v16; // zf
  size_t v17; // rdx
  const void *v18; // rdi
  const void *v19; // rsi
  unsigned __int8 *v20; // rdi
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // esi
  int v24; // edx
  _BYTE *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  void *v30; // rdx
  unsigned int v31; // ecx
  char v32; // al
  __int64 result; // rax
  const void *v34; // r15
  void *v35; // rbx
  unsigned __int64 v36; // r13
  void *v37; // r12
  void *v38; // rdi
  void *v39; // rax
  char v40; // bl
  size_t v41; // r13
  char *v42; // rsi
  void *v43; // r12
  _BYTE *v44; // r14
  void *v45; // rbx
  void *v46; // rax
  void *v47; // r15
  _QWORD *v48; // rax
  _QWORD v49[2]; // [rsp+0h] [rbp-C0h] BYREF
  unsigned __int64 *v50; // [rsp+10h] [rbp-B0h] BYREF
  _QWORD *v51; // [rsp+18h] [rbp-A8h]
  void *v52; // [rsp+20h] [rbp-A0h]
  _BYTE *v53; // [rsp+28h] [rbp-98h] BYREF
  _BYTE *v54; // [rsp+30h] [rbp-90h]
  void *v55[5]; // [rsp+38h] [rbp-88h] BYREF
  char v56; // [rsp+60h] [rbp-60h]
  __int16 v57; // [rsp+68h] [rbp-58h]
  _BYTE *v58; // [rsp+70h] [rbp-50h]
  void *v59; // [rsp+78h] [rbp-48h]
  unsigned __int64 v60; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-38h]
  void *__dst; // [rsp+90h] [rbp-30h]

  if ( !a2 ) /*0x100508967*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100508d6a*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_608,
             23,
             &unk_1015FDFDF,
             51);
  LODWORD(v59) = a4; /*0x10050896d*/
  v51 = a1; /*0x100508970*/
  v53 = nullptr; /*0x100508977*/
  v54 = a3; /*0x100508982*/
  v55[0] = a2; /*0x100508989*/
  v55[1] = a3; /*0x100508990*/
  v55[2] = nullptr; /*0x100508994*/
  v55[3] = a3; /*0x10050899c*/
  v55[4] = (void *)0xA0000000ALL; /*0x1005089aa*/
  v56 = 1; /*0x1005089ae*/
  v57 = 0; /*0x1005089b2*/
  v4 = 0; /*0x1005089b8*/
  v5 = 0; /*0x1005089c2*/
  while ( 2 ) /*0x1005089df*/
  {
    v6 = (char *)v55[0]; /*0x1005089df*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1005089f1*/
      &v60,
      v55);
    if ( (_DWORD)v60 == 1 ) /*0x1005089fa*/
    {
      v7 = v53; /*0x100508a00*/
      v53 = __dst; /*0x100508a07*/
      v8 = (char *)((_BYTE *)__dst - (_BYTE *)v7); /*0x100508a0e*/
      v9 = &v6[(_QWORD)v7]; /*0x100508a11*/
      if ( __dst == v7 ) /*0x100508a17*/
        goto LABEL_15; /*0x100508a17*/
    }
    else
    {
      if ( HIBYTE(v57) || (HIBYTE(v57) = 1, v8 = (char *)(v54 - v53), ((unsigned __int8)v57 | (v54 != v53)) != 1) ) /*0x100508a48*/
      {
LABEL_67:
        v60 = 0x8000000000000000LL; /*0x100508cfb*/
        return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100508d29*/
                 v51,
                 &anon_92869709a5e99ce1936aa4e326b6c562_608,
                 23,
                 &unk_1015FDF37,
                 25);
      }
      v9 = (char *)v55[0] + (unsigned __int64)v53; /*0x100508a4e*/
      if ( !v8 ) /*0x100508a58*/
        goto LABEL_15; /*0x100508a58*/
    }
    v10 = v8; /*0x100508a60*/
    if ( v8[(_QWORD)v9 - 1] == 10 ) /*0x100508a63*/
    {
      v10 = v8 - 1; /*0x100508a68*/
      if ( v8 != (char *)1 && v8[(_QWORD)v9 - 2] == 13 ) /*0x100508a73*/
      {
        v8 -= 2; /*0x100508a75*/
LABEL_15:
        v10 = v8; /*0x100508a79*/
      }
    }
    v11 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v9, v10); /*0x100508a84*/
    v13 = v12; /*0x100508a87*/
    v14 = 0; /*0x100508a8a*/
    switch ( v12 ) /*0x100508a9d*/
    {
      case 0x1EuLL: /*0x100508a9d*/
        v15 = _mm_or_si128( /*0x100508ac3*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  _mm_loadu_si128((const __m128i *)(v11 + 14))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v11),
                  _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
        v16 = _mm_testz_si128(v15, v15); /*0x100508ac7*/
        goto LABEL_25; /*0x100508acc*/
      case 0x24uLL: /*0x100508a9d*/
        v17 = 36; /*0x100508b08*/
        v18 = (const void *)v11; /*0x100508b0d*/
        v19 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99; /*0x100508b10*/
        goto LABEL_24; /*0x100508b10*/
      case 0x27uLL: /*0x100508a9d*/
        v17 = 39; /*0x100508ace*/
        v18 = (const void *)v11; /*0x100508ad3*/
        v19 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100; /*0x100508ad6*/
LABEL_24:
        v16 = memcmp(v18, v19, v17) == 0; /*0x100508b17*/
LABEL_25:
        v14 = v16; /*0x100508b1e*/
        if ( !(v16 | v4 & 1) ) /*0x100508b24*/
          goto LABEL_26; /*0x100508b28*/
        goto LABEL_3; /*0x100508b28*/
      case 0x37uLL: /*0x100508a9d*/
        if ( !memcmp((const void *)v11, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) ) /*0x100508b56*/
          goto LABEL_32; /*0x100508b5d*/
        goto LABEL_20; /*0x100508b5d*/
      case 0x3CuLL: /*0x100508a9d*/
        if ( !memcmp((const void *)v11, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) ) /*0x100508b76*/
          goto LABEL_32; /*0x100508b7d*/
        goto LABEL_20; /*0x100508b7d*/
      case 0x40uLL: /*0x100508a9d*/
        if ( !memcmp((const void *)v11, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u) ) /*0x100508af5*/
        {
LABEL_32:
          v4 = 1; /*0x100508b5f*/
          goto LABEL_4; /*0x100508b62*/
        }
LABEL_20:
        v14 = 0; /*0x100508af7*/
LABEL_21:
        if ( (v4 & 1) != 0 ) /*0x100508b00*/
        {
LABEL_3:
          v4 = !v14; /*0x1005089d0*/
LABEL_4:
          if ( HIBYTE(v57) ) /*0x1005089d9*/
            goto LABEL_67; /*0x1005089d9*/
          continue; /*0x1005089d9*/
        }
LABEL_26:
        if ( !v13 ) /*0x100508b31*/
        {
          if ( v5 ) /*0x100508b3f*/
            goto LABEL_36; /*0x100508b43*/
          goto LABEL_39; /*0x100508b43*/
        }
        if ( *(_BYTE *)v11 == 91 ) /*0x100508b38*/
        {
          v5 = 1; /*0x100508b3a*/
LABEL_40:
          v4 = 0; /*0x100508bb7*/
          goto LABEL_4; /*0x100508bba*/
        }
        if ( v5 ) /*0x100508b85*/
        {
LABEL_36:
          v5 = v13 != 0; /*0x100508b8b*/
          goto LABEL_40; /*0x100508b92*/
        }
        if ( v13 < 7 || *(_DWORD *)v11 ^ 0x666F7270 | *(_DWORD *)(v11 + 3) ^ 0x656C6966 ) /*0x100508bb0*/
          goto LABEL_39; /*0x100508bb0*/
        v20 = (unsigned __int8 *)(v11 + 7); /*0x100508bc2*/
        if ( v13 != 7 ) /*0x100508bca*/
        {
          v21 = *v20; /*0x100508bcc*/
          if ( (v21 & 0x80u) != 0 ) /*0x100508bd1*/
          {
            v22 = v21 & 0x1F; /*0x100508bd5*/
            v23 = *(_BYTE *)(v11 + 8) & 0x3F; /*0x100508bdd*/
            if ( (unsigned __int8)v21 <= 0xDFu ) /*0x100508be2*/
            {
              v21 = v23 | (v22 << 6); /*0x100508c11*/
            }
            else
            {
              v24 = (v23 << 6) | *(_BYTE *)(v11 + 9) & 0x3F; /*0x100508bef*/
              if ( (unsigned __int8)v21 < 0xF0u ) /*0x100508bf3*/
                v21 = (v22 << 12) | v24; /*0x100508c1a*/
              else
                v21 = ((v21 & 7) << 18) | (v24 << 6) | *(_BYTE *)(v11 + 10) & 0x3F; /*0x100508c08*/
            }
          }
          if ( v21 != 32 && v21 != 61 && v21 - 9 >= 5 ) /*0x100508c2c*/
          {
            if ( v21 < 0x80 ) /*0x100508c80*/
              goto LABEL_39; /*0x100508c80*/
            v31 = v21 >> 8; /*0x100508c88*/
            v5 = 0; /*0x100508c8b*/
            if ( v21 >> 8 > 0x1F ) /*0x100508c91*/
            {
              if ( v31 == 32 ) /*0x100508cb3*/
              {
                v32 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v21] >> 1; /*0x100508cec*/
              }
              else
              {
                v4 = 0; /*0x100508cb5*/
                if ( v31 != 48 ) /*0x100508cbe*/
                  goto LABEL_4; /*0x100508cbe*/
                v32 = v21 == 12288; /*0x100508cc9*/
              }
            }
            else if ( v31 ) /*0x100508c95*/
            {
              v4 = 0; /*0x100508c97*/
              if ( v31 != 22 ) /*0x100508ca0*/
                goto LABEL_4; /*0x100508ca0*/
              v32 = v21 == 5760; /*0x100508cab*/
            }
            else
            {
              v32 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v21]; /*0x100508cd8*/
            }
            if ( (v32 & 1) == 0 ) /*0x100508cf0*/
              goto LABEL_39; /*0x100508cf0*/
          }
        }
        v25 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(v20, v13 - 7); /*0x100508c35*/
        if ( !v26 /*0x100508c70*/
          || *v25 != 61
          || (v27 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v25 + 1, v26 - 1),
              v29 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v27, v28, 34),
              !v30) )
        {
LABEL_39:
          v5 = 0; /*0x100508bb4*/
          goto LABEL_40; /*0x100508bb4*/
        }
        v34 = (const void *)v29; /*0x100508d6f*/
        v35 = v30; /*0x100508d84*/
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v60, v30, 0, 1, 1); /*0x100508d8c*/
        if ( (_DWORD)v60 == 1 ) /*0x100508d95*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v61, __dst); /*0x100508f92*/
        v36 = v61; /*0x100508d9b*/
        v37 = __dst; /*0x100508d9f*/
        v38 = __dst; /*0x100508da3*/
        memcpy(__dst, v34, (size_t)v35); /*0x100508dac*/
        v60 = v36; /*0x100508db1*/
        v61 = (unsigned __int64)v37; /*0x100508db5*/
        __dst = v35; /*0x100508db9*/
        v50 = &v60; /*0x100508dbd*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v34); /*0x100508dc4*/
        v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100508dd3*/
        if ( !v39 ) /*0x100508ddb*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x100508faf*/
        v52 = v39; /*0x100508e07*/
        qmemcpy(v39, "config_profile_conflict", 23); /*0x100508e0e*/
        v40 = (char)v59; /*0x100508e11*/
        v41 = 2LL * (((unsigned __int8)v59 & 1) == 0) + 5; /*0x100508e1e*/
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v53, v41, 0, 1, 1); /*0x100508e3a*/
        if ( (_BYTE)v53 ) /*0x100508e4d*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v54, v55[0]); /*0x100508f9e*/
        v58 = v54; /*0x100508e53*/
        v42 = "warning"; /*0x100508e5e*/
        if ( (v40 & 1) != 0 ) /*0x100508e68*/
          v42 = "error"; /*0x100508e68*/
        v59 = v55[0]; /*0x100508e73*/
        memcpy(v55[0], v42, v41); /*0x100508e7a*/
        v49[0] = &v50; /*0x100508e86*/
        v49[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x100508e94*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v53, &unk_1017C0569, v49); /*0x100508eb0*/
        v43 = v53; /*0x100508eb5*/
        v44 = v54; /*0x100508ebc*/
        v45 = v55[0]; /*0x100508ec3*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v53, &unk_1017C0569); /*0x100508eca*/
        v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(143, 1); /*0x100508ed9*/
        if ( !v46 ) /*0x100508ee1*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 143); /*0x100508fc0*/
        v47 = v46; /*0x100508ee7*/
        memcpy(v46, &unk_1015FDF50, 0x8Fu); /*0x100508ef9*/
        v48 = v51; /*0x100508efe*/
        *v51 = 23; /*0x100508f05*/
        v48[1] = v52; /*0x100508f13*/
        v48[2] = 23; /*0x100508f17*/
        v48[3] = v58; /*0x100508f23*/
        v48[4] = v59; /*0x100508f2b*/
        v48[5] = v41; /*0x100508f2f*/
        v48[6] = v43; /*0x100508f33*/
        v48[7] = v44; /*0x100508f37*/
        v48[8] = v45; /*0x100508f3b*/
        v48[9] = 143; /*0x100508f3f*/
        v48[10] = v47; /*0x100508f47*/
        v48[11] = 143; /*0x100508f4b*/
        *((_BYTE *)v48 + 96) = 1; /*0x100508f53*/
        result = 0x8000000000000000LL; /*0x100508f5b*/
        if ( v60 != 0x8000000000000000LL ) /*0x100508f68*/
        {
          if ( v60 ) /*0x100508f71*/
            return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v60, 1); /*0x100508f80*/
        }
        return result;
      default:
        goto LABEL_21;
    }
  }
}