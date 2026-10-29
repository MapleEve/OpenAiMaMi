// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tools::patch_changes::h00bc85811a10d9ab; addr: 0x1008a3790; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
__int64 __fastcall codexmate_lib::core::analytics::parser::tools::patch_changes::h00bc85811a10d9ab(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rax
  _BYTE *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // r12
  const __m128i *v17; // rcx
  unsigned __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __int64 v21; // rdi
  __int64 *v22; // rdx
  __int64 result; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  const __m128i *v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int8 *v31; // r13
  __int64 v32; // rax
  bool v33; // cf
  unsigned __int64 v34; // rax
  unsigned __int8 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __m128i v39; // xmm2
  __m128i v40; // xmm1
  int v41; // eax
  __m128i v42; // xmm1
  char **v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  char *v48; // rbx
  char *v49; // r14
  __int64 v50; // r12
  _BOOL8 v51; // r13
  unsigned __int32 v52; // eax
  unsigned int v53; // ecx
  int v54; // edx
  __int64 v55; // rbx
  __int64 v56; // r14
  _QWORD *v57; // rbx
  __int64 v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // rax
  bool v61; // zf
  __int64 *v62; // rdx
  int v63; // [rsp+10h] [rbp-110h]
  int v64; // [rsp+18h] [rbp-108h]
  int v65; // [rsp+20h] [rbp-100h]
  __int64 v66; // [rsp+28h] [rbp-F8h] BYREF
  __int64 v67; // [rsp+30h] [rbp-F0h] BYREF
  unsigned __int64 v68; // [rsp+38h] [rbp-E8h]
  const __m128i *v69; // [rsp+40h] [rbp-E0h] BYREF
  unsigned __int64 v70; // [rsp+48h] [rbp-D8h]
  __int64 v71; // [rsp+50h] [rbp-D0h]
  unsigned __int64 v72; // [rsp+58h] [rbp-C8h]
  __int64 v73; // [rsp+60h] [rbp-C0h]
  char v74; // [rsp+68h] [rbp-B8h]
  __int16 v75; // [rsp+70h] [rbp-B0h]
  _QWORD v76[4]; // [rsp+78h] [rbp-A8h] BYREF
  __int64 v77; // [rsp+98h] [rbp-88h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-78h]
  __int64 v80; // [rsp+B0h] [rbp-70h]
  __int64 *v81; // [rsp+B8h] [rbp-68h]
  __int64 v82; // [rsp+C0h] [rbp-60h]
  __int64 v83; // [rsp+C8h] [rbp-58h]
  __int64 v84; // [rsp+D0h] [rbp-50h]
  __int64 v85; // [rsp+D8h] [rbp-48h]
  __int64 v86; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v87; // [rsp+E8h] [rbp-38h]
  __int64 v88; // [rsp+F0h] [rbp-30h]

  v85 = a2; /*0x1008a37b0*/
  v81 = a1; /*0x1008a37b4*/
  v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("argumentsinput", 9, a3); /*0x1008a37c4*/
  v13 = (_BYTE *)v12; /*0x1008a37c9*/
  if ( v12 && *(_BYTE *)v12 == 3 ) /*0x1008a37d5*/
  {
    v14 = *(_QWORD *)(v12 + 24); /*0x1008a37db*/
    v66 = *(_QWORD *)(v12 + 16); /*0x1008a37df*/
    v67 = v14; /*0x1008a37e6*/
    v68 = 0; /*0x1008a37ed*/
    v69 = nullptr; /*0x1008a37f8*/
    v70 = v66; /*0x1008a3803*/
    v71 = v14; /*0x1008a380a*/
    serde_json::de::from_trait::hb66530a7a5e497bc(&v77, &v66); /*0x1008a381f*/
    if ( (_BYTE)v77 == 6 ) /*0x1008a382b*/
    {
      LOBYTE(v76[0]) = 6; /*0x1008a3831*/
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc62c3b2945dfda16(&v78); /*0x1008a383c*/
    }
    else
    {
      v76[3] = v80; /*0x1008a3f73*/
      v76[2] = v79; /*0x1008a3f7e*/
      v76[1] = v78; /*0x1008a3f90*/
      v76[0] = v77; /*0x1008a3f97*/
    }
  }
  else
  {
    LOBYTE(v76[0]) = 6; /*0x1008a3843*/
  }
  v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("input", 5, a3); /*0x1008a3859*/
  if ( !v15 || *(_BYTE *)v15 != 3 ) /*0x1008a3866*/
  {
    v16 = v76[0]; /*0x1008a386c*/
    if ( LOBYTE(v76[0]) == 6 /*0x1008a38bc*/
      || ((v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("input", 5, v76)) == 0
       || *(_BYTE *)v15 != 3)
      && ((v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &unk_10178B99E,
                   5,
                   v76)) == 0
       || *(_BYTE *)v15 != 3) )
    {
      if ( !v13 /*0x1008a390a*/
        || ((v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "input",
                     5,
                     v13)) == 0
         || *(_BYTE *)v15 != 3)
        && ((v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     &unk_10178B99E,
                     5,
                     v13)) == 0
         || *(_BYTE *)v15 != 3)
        && (v15 = (__int64)v13, *v13 != 3) )
      {
        v24 = v85; /*0x1008a39e1*/
        *(_BYTE *)(v85 + 505) = 1; /*0x1008a39e5*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v24 + 400, 8); /*0x1008a39f8*/
        result = (__int64)v81; /*0x1008a39fd*/
        *v81 = 0; /*0x1008a3a01*/
        *(_QWORD *)(result + 8) = 8; /*0x1008a3a08*/
        *(_QWORD *)(result + 16) = 0; /*0x1008a3a10*/
        if ( v16 == 6 ) /*0x1008a3a1c*/
          return result; /*0x1008a3a1c*/
        return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v76); /*0x1008a3a1c*/
      }
    }
  }
  v17 = *(const __m128i **)(v15 + 16); /*0x1008a3910*/
  v18 = *(_QWORD *)(v15 + 24); /*0x1008a3914*/
  v86 = 0; /*0x1008a3918*/
  v87 = 8; /*0x1008a3920*/
  v88 = 0; /*0x1008a3928*/
  if ( v18 < 0x10 /*0x1008a3978*/
    || (v19 = _mm_xor_si128(_mm_loadu_si128(v17), (__m128i)xmmword_101786970), !_mm_testz_si128(v19, v19))
    && (v18 == 16
     || (v20 = _mm_or_si128(
                 _mm_xor_si128(_mm_cvtsi32_si128(v17[1].u8[0]), (__m128i)xmmword_101786990),
                 _mm_xor_si128(_mm_loadu_si128(v17), (__m128i)xmmword_101786980)),
         !_mm_testz_si128(v20, v20))) )
  {
    v21 = v85; /*0x1008a397e*/
    *(_BYTE *)(v85 + 505) = 1; /*0x1008a3982*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v21 + 400, 8); /*0x1008a3995*/
    v22 = v81; /*0x1008a399e*/
    v81[2] = v88; /*0x1008a39a2*/
    result = v86; /*0x1008a39a6*/
    v22[1] = v87; /*0x1008a39ae*/
    *v22 = result; /*0x1008a39b2*/
    if ( LOBYTE(v76[0]) == 6 ) /*0x1008a39c1*/
      return result; /*0x1008a39c1*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v76); /*0x1008a39c1*/
  }
  v65 = a4; /*0x1008a3a20*/
  v64 = a5; /*0x1008a3a27*/
  v63 = a6; /*0x1008a3a2e*/
  v66 = 1; /*0x1008a3a35*/
  v67 = 0; /*0x1008a3a40*/
  v68 = v18; /*0x1008a3a4b*/
  v69 = v17; /*0x1008a3a59*/
  v70 = v18; /*0x1008a3a60*/
  v71 = 0; /*0x1008a3a67*/
  v72 = v18; /*0x1008a3a72*/
  v73 = 0xA0000000ALL; /*0x1008a3a83*/
  v74 = 1; /*0x1008a3a8a*/
  v75 = 0; /*0x1008a3a91*/
  v83 = v85 + 400; /*0x1008a3aa4*/
  v25 = 1; /*0x1008a3aa8*/
  while ( 1 ) /*0x1008a3b13*/
  {
    if ( !v25 ) /*0x1008a3b16*/
    {
      if ( HIBYTE(v75) ) /*0x1008a3b23*/
        break; /*0x1008a3b23*/
      v28 = v69; /*0x1008a3b29*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1008a3b36*/
        &v77,
        &v69);
      if ( (_DWORD)v77 == 1 ) /*0x1008a3b42*/
      {
        v29 = v67; /*0x1008a3b48*/
        v67 = v79; /*0x1008a3b4f*/
        v30 = v79 - v29; /*0x1008a3b56*/
        v31 = &v28->u8[v29]; /*0x1008a3b59*/
        v32 = v79 - v29; /*0x1008a3b5c*/
        v33 = v32 == 0; /*0x1008a3b5f*/
        v34 = v32 - 1; /*0x1008a3b5f*/
        if ( v33 ) /*0x1008a3b63*/
          goto LABEL_46; /*0x1008a3b63*/
      }
      else
      {
        if ( HIBYTE(v75) ) /*0x1008a3b77*/
          break; /*0x1008a3b77*/
        HIBYTE(v75) = 1; /*0x1008a3b7d*/
        v30 = v68 - v67; /*0x1008a3b92*/
        if ( ((unsigned __int8)v75 | (v68 != v67)) != 1 ) /*0x1008a3ba0*/
          break; /*0x1008a3ba0*/
        v31 = &v69->u8[v67]; /*0x1008a3ba6*/
        v34 = v30 - 1; /*0x1008a3bb0*/
        if ( !v30 ) /*0x1008a3bb4*/
        {
LABEL_46:
          if ( v30 >= 0xE ) /*0x1008a3be3*/
            goto LABEL_54; /*0x1008a3be3*/
          goto LABEL_47; /*0x1008a3be3*/
        }
      }
      if ( v31[v34] == 10 ) /*0x1008a3bbc*/
      {
        v30 -= 2LL; /*0x1008a3bbe*/
        if ( !v34 || (v35 = v31, v31[v30] != 13) ) /*0x1008a3bd0*/
          v35 = nullptr; /*0x1008a3bd2*/
        if ( v35 ) /*0x1008a3bd7*/
          v31 = v35; /*0x1008a3bdb*/
        else
          v30 = v34; /*0x1008a3bd7*/
      }
      goto LABEL_46; /*0x1008a3bdb*/
    }
    v66 = 0; /*0x1008a3c30*/
    if ( core::iter::traits::iterator::Iterator::try_fold::ha4005dd9aa97240e(&v67) ) /*0x1008a3c42*/
      break; /*0x1008a3c42*/
    v37 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h55a85aaadafca3c6(&v67); /*0x1008a3c57*/
    if ( !v37 ) /*0x1008a3c5f*/
      break; /*0x1008a3c5f*/
    v31 = (unsigned __int8 *)_$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h7f8f3f85e69d757b( /*0x1008a3c70*/
                               v37,
                               v38);
    if ( v30 >= 0xE ) /*0x1008a3c77*/
    {
LABEL_54:
      if ( *(_QWORD *)v31 ^ 0x20646441202A2A2ALL | *(_QWORD *)(v31 + 6) ^ 0x203A656C69462064LL ) /*0x1008a3ca2*/
      {
        if ( v30 < 0x11 ) /*0x1008a3caf*/
          goto LABEL_58; /*0x1008a3caf*/
        v39 = _mm_cvtsi32_si128(0x20u); /*0x1008a3cc8*/
        v40 = _mm_or_si128( /*0x1008a3cd4*/
                _mm_xor_si128(_mm_cvtsi32_si128(v31[16]), v39),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v31), (__m128i)xmmword_1017869A0));
        v41 = 17; /*0x1008a3cd8*/
        if ( !_mm_testz_si128(v40, v40) ) /*0x1008a3ce2*/
        {
          v42 = _mm_or_si128( /*0x1008a3d03*/
                  _mm_xor_si128(_mm_cvtsi32_si128(v31[16]), v39),
                  _mm_xor_si128(_mm_loadu_si128((const __m128i *)v31), (__m128i)xmmword_1017869C0));
          v43 = (char **)&off_101AB6D30; /*0x1008a3d0c*/
          if ( _mm_testz_si128(v42, v42) ) /*0x1008a3d13*/
            goto LABEL_68; /*0x1008a3d13*/
          goto LABEL_58; /*0x1008a3d13*/
        }
        v43 = (char **)&off_101AB6D10; /*0x1008a3d95*/
      }
      else
      {
        v41 = 14; /*0x1008a3d6c*/
        v43 = &off_101AB6CF0; /*0x1008a3d71*/
      }
LABEL_68:
      v48 = v43[2]; /*0x1008a3d9c*/
      v49 = v43[3]; /*0x1008a3da0*/
      codexmate_lib::core::analytics::parser::paths::file_identity::ha6c3f7873b75f8ca( /*0x1008a3dd6*/
        (unsigned int)&v77,
        v41 + (_DWORD)v31,
        v30 - v41,
        v65,
        v64,
        v63,
        a7,
        a8);
      v84 = v77; /*0x1008a3de2*/
      v82 = v78; /*0x1008a3dea*/
      v50 = v79; /*0x1008a3dee*/
      if ( !(_BYTE)v80 ) /*0x1008a3df6*/
      {
        *(_BYTE *)(v85 + 505) = 1; /*0x1008a3dfc*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v83, 9); /*0x1008a3e0c*/
      }
      v51 = 1; /*0x1008a3e11*/
      if ( v49 == (char *)6 ) /*0x1008a3e1b*/
      {
        v52 = _byteswap_ulong(*(_DWORD *)v48); /*0x1008a3e1f*/
        v53 = 1684368485; /*0x1008a3e21*/
        if ( v52 != 1684368485 /*0x1008a3e44*/
          || (v52 = (unsigned __int16)__ROL2__(*((_WORD *)v48 + 2), 8),
              v53 = 29797,
              v54 = 0,
              (unsigned __int16)v52 != 29797) )
        {
          v54 = 2 * (v52 >= v53) - 1; /*0x1008a3e4d*/
        }
        v51 = v54 != 0; /*0x1008a3e56*/
      }
      v55 = v88; /*0x1008a3e5a*/
      if ( v88 == v86 ) /*0x1008a3e62*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hee0e70b5f45a4e45(&v86); /*0x1008a3e6c*/
      v26 = v87; /*0x1008a3ac0*/
      v27 = 56 * v55; /*0x1008a3ac4*/
      *(_QWORD *)(v87 + v27) = 1; /*0x1008a3ac8*/
      *(_QWORD *)(v26 + v27 + 8) = 0; /*0x1008a3ad0*/
      *(_QWORD *)(v26 + v27 + 16) = v51; /*0x1008a3ad9*/
      *(_QWORD *)(v26 + v27 + 24) = 0; /*0x1008a3ade*/
      *(_QWORD *)(v26 + v27 + 32) = v84; /*0x1008a3aeb*/
      *(_QWORD *)(v26 + v27 + 40) = v82; /*0x1008a3af4*/
      *(_QWORD *)(v26 + v27 + 48) = v50; /*0x1008a3af9*/
      v88 = v55 + 1; /*0x1008a3b01*/
      goto LABEL_30; /*0x1008a3b01*/
    }
LABEL_47:
    if ( v30 == 13 ) /*0x1008a3bed*/
    {
      if ( !(*(_QWORD *)v31 ^ 0x20646E45202A2A2ALL | *(_QWORD *)(v31 + 5) ^ 0x686374615020646ELL) ) /*0x1008a3c18*/
        goto LABEL_86; /*0x1008a3c18*/
      v36 = v88; /*0x1008a3c1e*/
      if ( v88 ) /*0x1008a3c25*/
        goto LABEL_60; /*0x1008a3c25*/
LABEL_30:
      v25 = v66; /*0x1008a3b0c*/
    }
    else
    {
LABEL_58:
      v36 = v88; /*0x1008a3d20*/
      if ( !v88 || !v30 ) /*0x1008a3d30*/
        goto LABEL_30; /*0x1008a3d30*/
LABEL_60:
      v44 = v87 + 56 * v36; /*0x1008a3d36*/
      v45 = *v31; /*0x1008a3d3e*/
      if ( (_DWORD)v45 == 45 ) /*0x1008a3d46*/
      {
        if ( *(_DWORD *)(v44 - 40) == 1 ) /*0x1008a3d7e*/
        {
          v45 = *(_QWORD *)(v44 - 32) + 1LL; /*0x1008a3d88*/
          v47 = 1; /*0x1008a3d8b*/
        }
        else
        {
          v47 = 0; /*0x1008a3e8c*/
        }
        *(_QWORD *)(v44 - 40) = v47; /*0x1008a3e8e*/
        *(_QWORD *)(v44 - 32) = v45; /*0x1008a3e92*/
        v25 = v66; /*0x1008a3e96*/
      }
      else
      {
        if ( (_DWORD)v45 != 43 ) /*0x1008a3d4b*/
          goto LABEL_30; /*0x1008a3d4b*/
        if ( *(_BYTE *)(v44 - 56) ) /*0x1008a3d51*/
        {
          v45 = *(_QWORD *)(v44 - 48) + 1LL; /*0x1008a3d5f*/
          v46 = 1; /*0x1008a3d62*/
        }
        else
        {
          v46 = 0; /*0x1008a3e76*/
        }
        *(_QWORD *)(v44 - 56) = v46; /*0x1008a3e78*/
        *(_QWORD *)(v44 - 48) = v45; /*0x1008a3e7c*/
        v25 = v66; /*0x1008a3e80*/
      }
    }
  }
  *(_BYTE *)(v85 + 505) = 1; /*0x1008a3ea2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v83, 8); /*0x1008a3eb6*/
  v56 = v88; /*0x1008a3ebf*/
  v88 = 0; /*0x1008a3ec3*/
  if ( v56 ) /*0x1008a3ece*/
  {
    v57 = (_QWORD *)(v87 + 40); /*0x1008a3ed0*/
    do /*0x1008a3ee7*/
    {
      v58 = *(v57 - 1); /*0x1008a3ee9*/
      if ( v58 ) /*0x1008a3ef0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v57, v58, 1); /*0x1008a3efa*/
      v57 += 7; /*0x1008a3ee0*/
      --v56; /*0x1008a3ee4*/
    }
    while ( v56 ); /*0x1008a3ee7*/
  }
LABEL_86:
  v59 = v87; /*0x1008a3f01*/
  v60 = 56 * v88; /*0x1008a3f05*/
  while ( v60 ) /*0x1008a3f13*/
  {
    if ( *(_QWORD *)v59 ) /*0x1008a3f15*/
    {
      v60 -= 56; /*0x1008a3f1b*/
      v61 = (*(_BYTE *)(v59 + 16) & 1) == 0; /*0x1008a3f1f*/
      v59 += 56; /*0x1008a3f23*/
      if ( !v61 ) /*0x1008a3f27*/
        continue; /*0x1008a3f27*/
    }
    *(_BYTE *)(v85 + 505) = 1; /*0x1008a3f2d*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v83, 8); /*0x1008a3f3d*/
    break; /*0x1008a3f3d*/
  }
  v62 = v81; /*0x1008a3f42*/
  v81[2] = v88; /*0x1008a3f4a*/
  result = v86; /*0x1008a3f4e*/
  v62[1] = v87; /*0x1008a3f56*/
  *v62 = result; /*0x1008a3f5a*/
  if ( LOBYTE(v76[0]) != 6 ) /*0x1008a3f64*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v76); /*0x1008a39c3*/
  return result; /*0x1008a39cf*/
}