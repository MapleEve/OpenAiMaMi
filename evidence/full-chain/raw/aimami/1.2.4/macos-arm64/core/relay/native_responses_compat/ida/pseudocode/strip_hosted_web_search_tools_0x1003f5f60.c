// __ZN13codexmate_lib4core5relay23native_responses_compat29strip_hosted_web_search_tools @ 0x1003f5f60 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::native_responses_compat::strip_hosted_web_search_tools::hee8bf02a99755dfd(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r14
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  size_t v8; // rdx
  size_t v9; // r15
  __int64 v10; // r15
  int v11; // eax
  char v12; // cl
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _BYTE *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // r14
  size_t v25; // rdx
  size_t v26; // r15
  __int64 v27; // r15
  int v28; // eax
  char v29; // cl
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  char *v33; // r14
  __int64 v34; // r12
  __int64 v35; // r13
  __int64 v36; // rbx
  size_t v37; // rdx
  size_t v38; // r15
  __int64 v39; // r15
  int v40; // eax
  char v41; // cl
  char v42; // bl
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __m128i v45; // xmm1
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __m128i v49; // xmm1
  __int64 v50; // rcx
  char *v51; // r14
  __int64 v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // r13
  __int64 v55; // rbx
  __int64 v56; // r12
  size_t v57; // rdx
  size_t v58; // r15
  __int64 v59; // r15
  int v60; // eax
  char v61; // cl
  unsigned __int64 *v62; // rdx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  int v65; // edx
  bool v66; // al
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // r14
  __int64 v71; // rax
  _BYTE v72[32]; // [rsp-90h] [rbp-90h] BYREF
  __int64 v73; // [rsp-70h] [rbp-70h]
  __int64 v74; // [rsp-68h] [rbp-68h] BYREF
  __int64 *v75; // [rsp-60h] [rbp-60h]
  __int64 v76; // [rsp-58h] [rbp-58h]
  int v77; // [rsp-4Ch] [rbp-4Ch]
  __int64 v78; // [rsp-48h] [rbp-48h]
  __int64 v79; // [rsp-40h] [rbp-40h]
  __int64 v80; // [rsp-38h] [rbp-38h]

  if ( *(_BYTE *)a1 != 5 ) /*0x1003f5f63*/
    return 0; /*0x1003f6059*/
  v74 = 0; /*0x1003f5f7a*/
  v1 = *(_QWORD *)(a1 + 8); /*0x1003f5f82*/
  if ( !v1 ) /*0x1003f5f89*/
    return v74; /*0x1003f5f89*/
  v75 = (__int64 *)(a1 + 8); /*0x1003f5f93*/
  v76 = a1; /*0x1003f5f97*/
  v79 = *(_QWORD *)(a1 + 16); /*0x1003f5f9f*/
LABEL_4:
  v2 = v1 + 360; /*0x1003f5fa3*/
  v3 = *(unsigned __int16 *)(v1 + 626); /*0x1003f5faa*/
  v80 = v1; /*0x1003f5fb1*/
  v4 = (_QWORD *)(v1 - 8); /*0x1003f5fb5*/
  v78 = v3; /*0x1003f5fb9*/
  v5 = 3LL * (unsigned int)(8 * v3); /*0x1003f5fc4*/
  v6 = -1; /*0x1003f5fc8*/
  do /*0x1003f6024*/
  {
    if ( !v5 ) /*0x1003f5fd3*/
    {
      v6 = v78; /*0x1003f6030*/
LABEL_14:
      if ( v79 ) /*0x1003f603c*/
      {
        --v79; /*0x1003f6042*/
        v1 = *(_QWORD *)(v80 + 8 * v6 + 632); /*0x1003f604a*/
        goto LABEL_4; /*0x1003f6052*/
      }
LABEL_23:
      v17 = *v75; /*0x1003f60d5*/
      v18 = v76; /*0x1003f60df*/
      if ( !*v75 ) /*0x1003f60e3*/
        return v74; /*0x1003f60e3*/
      v77 = 0; /*0x1003f60e9*/
      goto LABEL_25; /*0x1003f60e9*/
    }
    v7 = v2 + 24; /*0x1003f5fd5*/
    v8 = *(_QWORD *)(v2 + 16); /*0x1003f5fdd*/
    v9 = v8 - 5; /*0x1003f5fe4*/
    if ( v8 >= 5 ) /*0x1003f5fed*/
      v8 = 5; /*0x1003f5fed*/
    v10 = -(__int64)v9; /*0x1003f5ff1*/
    v11 = memcmp("tools", *(const void **)(v2 + 8), v8); /*0x1003f5ffb*/
    if ( v11 ) /*0x1003f6004*/
      v10 = v11; /*0x1003f6004*/
    v12 = (v10 > 0) - (v10 < 0); /*0x1003f6011*/
    v4 += 4; /*0x1003f6013*/
    ++v6; /*0x1003f6017*/
    v5 -= 24; /*0x1003f601a*/
    v2 = v7; /*0x1003f601e*/
  }
  while ( v12 == 1 ); /*0x1003f6024*/
  if ( v12 ) /*0x1003f602b*/
    goto LABEL_14; /*0x1003f602b*/
  if ( *((_BYTE *)v4 - 24) != 4 ) /*0x1003f605f*/
    goto LABEL_23; /*0x1003f605f*/
  v14 = *v4; /*0x1003f6065*/
  alloc::vec::Vec$LT$T$C$A$GT$::retain::ha5e1a0842587b8b4(v4 - 2); /*0x1003f6068*/
  v15 = *v4; /*0x1003f606d*/
  v74 = v14 - *v4; /*0x1003f6076*/
  if ( v15 != 0 || v14 == 0 ) /*0x1003f6083*/
    goto LABEL_23; /*0x1003f6088*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hbb390a8031d3b729(v72, v75, "tools", 5); /*0x1003f60a1*/
  if ( v72[0] != 6 ) /*0x1003f60ad*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v72); /*0x1003f60b6*/
  v16 = (int)v75; /*0x1003f60bb*/
  v17 = *v75; /*0x1003f60bf*/
  LOBYTE(v16) = 1; /*0x1003f60c2*/
  v77 = v16; /*0x1003f60c4*/
  v18 = v76; /*0x1003f60ca*/
  if ( !v17 ) /*0x1003f60ce*/
    goto LABEL_98; /*0x1003f60ce*/
LABEL_25:
  v80 = *(_QWORD *)(v18 + 16); /*0x1003f60f0*/
  v79 = v17; /*0x1003f60f8*/
  while ( 2 ) /*0x1003f60fc*/
  {
    v19 = v17 + 360; /*0x1003f60fc*/
    v20 = *(unsigned __int16 *)(v17 + 626); /*0x1003f6103*/
    v78 = v17; /*0x1003f610a*/
    v21 = (_BYTE *)(v17 - 32); /*0x1003f610e*/
    v73 = v20; /*0x1003f6112*/
    v22 = 3LL * (unsigned int)(8 * v20); /*0x1003f611d*/
    v23 = -1; /*0x1003f6121*/
    do /*0x1003f6184*/
    {
      if ( !v22 ) /*0x1003f6133*/
      {
        v23 = v73; /*0x1003f618f*/
        goto LABEL_36; /*0x1003f618f*/
      }
      v24 = v19 + 24; /*0x1003f6135*/
      v25 = *(_QWORD *)(v19 + 16); /*0x1003f613d*/
      v26 = v25 - 5; /*0x1003f6144*/
      if ( v25 >= 5 ) /*0x1003f614d*/
        v25 = 5; /*0x1003f614d*/
      v27 = -(__int64)v26; /*0x1003f6151*/
      v28 = memcmp(&unk_1016671C8, *(const void **)(v19 + 8), v25); /*0x1003f615b*/
      if ( v28 ) /*0x1003f6164*/
        v27 = v28; /*0x1003f6164*/
      v29 = (v27 > 0) - (v27 < 0); /*0x1003f6171*/
      v21 += 32; /*0x1003f6173*/
      ++v23; /*0x1003f6177*/
      v22 -= 24; /*0x1003f617a*/
      v19 = v24; /*0x1003f617e*/
    }
    while ( v29 == 1 ); /*0x1003f6184*/
    if ( v29 ) /*0x1003f618b*/
    {
LABEL_36:
      if ( v80 ) /*0x1003f619b*/
      {
        --v80; /*0x1003f619d*/
        v17 = *(_QWORD *)(v78 + 8 * v23 + 632); /*0x1003f61a5*/
        continue; /*0x1003f61ad*/
      }
      goto LABEL_40; /*0x1003f619b*/
    }
    break;
  }
  if ( *v21 == 4 ) /*0x1003f61b7*/
  {
    alloc::vec::Vec$LT$T$C$A$GT$::retain_mut::h8ff2f74599ed1850(v21 + 8, &v74); /*0x1003f61c4*/
    v79 = *v75; /*0x1003f61d0*/
    if ( !v79 ) /*0x1003f61d7*/
    {
LABEL_58:
      if ( (_BYTE)v77 ) /*0x1003f62e8*/
        goto LABEL_98; /*0x1003f62e8*/
      return v74; /*0x1003f62e8*/
    }
  }
LABEL_40:
  v80 = *(_QWORD *)(v76 + 16); /*0x1003f61dd*/
  v30 = v79; /*0x1003f61e9*/
LABEL_41:
  v31 = v30 + 360; /*0x1003f61ed*/
  v32 = *(unsigned __int16 *)(v30 + 626); /*0x1003f61f4*/
  v79 = v30; /*0x1003f61fb*/
  v33 = (char *)(v30 - 32); /*0x1003f61ff*/
  v78 = v32; /*0x1003f6203*/
  v34 = 3LL * (unsigned int)(8 * v32); /*0x1003f620e*/
  v35 = -1; /*0x1003f6212*/
  do /*0x1003f6274*/
  {
    if ( !v34 ) /*0x1003f6223*/
    {
      v35 = v78; /*0x1003f627f*/
LABEL_51:
      if ( !v80 ) /*0x1003f628b*/
        goto LABEL_58; /*0x1003f628b*/
      --v80; /*0x1003f628d*/
      v30 = *(_QWORD *)(v79 + 8 * v35 + 632); /*0x1003f6295*/
      goto LABEL_41; /*0x1003f629d*/
    }
    v36 = v31 + 24; /*0x1003f6225*/
    v37 = *(_QWORD *)(v31 + 16); /*0x1003f622d*/
    v38 = v37 - 11; /*0x1003f6234*/
    if ( v37 >= 0xB ) /*0x1003f623d*/
      v37 = 11; /*0x1003f623d*/
    v39 = -(__int64)v38; /*0x1003f6241*/
    v40 = memcmp("tool_choice", *(const void **)(v31 + 8), v37); /*0x1003f624b*/
    if ( v40 ) /*0x1003f6254*/
      v39 = v40; /*0x1003f6254*/
    v41 = (v39 > 0) - (v39 < 0); /*0x1003f6261*/
    v33 += 32; /*0x1003f6263*/
    ++v35; /*0x1003f6267*/
    v34 -= 24; /*0x1003f626a*/
    v31 = v36; /*0x1003f626e*/
  }
  while ( v41 == 1 ); /*0x1003f6274*/
  if ( v41 ) /*0x1003f627b*/
    goto LABEL_51; /*0x1003f627b*/
  v42 = *v33; /*0x1003f62a2*/
  if ( *v33 == 3 ) /*0x1003f62a9*/
  {
    v43 = *((_QWORD *)v33 + 2); /*0x1003f62af*/
    v44 = *((_QWORD *)v33 + 3); /*0x1003f62b3*/
    if ( v44 == 18 ) /*0x1003f62bb*/
    {
      v45 = _mm_or_si128( /*0x1003f630f*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v43 + 16)), (__m128i)xmmword_101665F50),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v43), (__m128i)xmmword_101665F40));
      if ( _mm_testz_si128(v45, v45) ) /*0x1003f6313*/
        goto LABEL_98; /*0x1003f6318*/
    }
    else
    {
      if ( v44 == 10 ) /*0x1003f62c1*/
      {
        if ( !(*(_QWORD *)v43 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v43 + 8) ^ 0x6863LL) ) /*0x1003f62da*/
          goto LABEL_98; /*0x1003f62dd*/
        goto LABEL_64; /*0x1003f62dd*/
      }
      if ( v44 <= 0xA ) /*0x1003f631f*/
        goto LABEL_64; /*0x1003f631f*/
    }
    if ( !(*(_QWORD *)v43 ^ 0x726165735F626577LL | *(_QWORD *)(v43 + 3) ^ 0x5F6863726165735FLL) ) /*0x1003f633f*/
      goto LABEL_98; /*0x1003f633f*/
  }
LABEL_64:
  v46 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("typechoices", 4, v33); /*0x1003f6345*/
  if ( v46 && *(_BYTE *)v46 == 3 ) /*0x1003f6365*/
  {
    v47 = *(_QWORD *)(v46 + 16); /*0x1003f636b*/
    v48 = *(_QWORD *)(v46 + 24); /*0x1003f636f*/
    if ( v48 == 18 ) /*0x1003f6377*/
    {
      v49 = _mm_or_si128( /*0x1003f63bd*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v47 + 16)), (__m128i)xmmword_101665F50),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v47), (__m128i)xmmword_101665F40));
      if ( _mm_testz_si128(v49, v49) ) /*0x1003f63c1*/
        goto LABEL_98; /*0x1003f63c6*/
    }
    else
    {
      if ( v48 == 10 ) /*0x1003f637d*/
      {
        if ( !(*(_QWORD *)v47 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v47 + 8) ^ 0x6863LL) ) /*0x1003f6397*/
          goto LABEL_98; /*0x1003f639a*/
        goto LABEL_74; /*0x1003f639a*/
      }
      if ( v48 <= 0xA ) /*0x1003f63cd*/
        goto LABEL_74; /*0x1003f63cd*/
    }
    if ( !(*(_QWORD *)v47 ^ 0x726165735F626577LL | *(_QWORD *)(v47 + 3) ^ 0x5F6863726165735FLL) ) /*0x1003f63ed*/
      goto LABEL_98; /*0x1003f63ed*/
LABEL_74:
    v42 = *v33; /*0x1003f63f3*/
  }
  if ( v42 != 5 ) /*0x1003f63fa*/
    goto LABEL_96; /*0x1003f63fa*/
  v50 = *((_QWORD *)v33 + 1); /*0x1003f6400*/
  if ( !v50 ) /*0x1003f6407*/
    goto LABEL_96; /*0x1003f6407*/
  v80 = *((_QWORD *)v33 + 2); /*0x1003f6411*/
  v51 = v33 + 8; /*0x1003f6415*/
LABEL_78:
  v52 = v50 + 360; /*0x1003f6419*/
  v53 = *(unsigned __int16 *)(v50 + 626); /*0x1003f6420*/
  v78 = v50; /*0x1003f6427*/
  v54 = (_QWORD *)(v50 - 8); /*0x1003f642b*/
  v76 = v53; /*0x1003f642f*/
  v55 = 3LL * (unsigned int)(8 * v53); /*0x1003f643a*/
  v56 = -1; /*0x1003f643e*/
  do /*0x1003f64a9*/
  {
    if ( !v55 ) /*0x1003f6453*/
    {
      v56 = v76; /*0x1003f64b4*/
LABEL_88:
      if ( !v80 ) /*0x1003f64c0*/
        goto LABEL_96; /*0x1003f64c0*/
      --v80; /*0x1003f64c2*/
      v50 = *(_QWORD *)(v78 + 8 * v56 + 632); /*0x1003f64ca*/
      goto LABEL_78; /*0x1003f64d2*/
    }
    v79 = v52 + 24; /*0x1003f6459*/
    v57 = *(_QWORD *)(v52 + 16); /*0x1003f6461*/
    v58 = v57 - 4; /*0x1003f6468*/
    if ( v57 >= 4 ) /*0x1003f6471*/
      v57 = 4; /*0x1003f6471*/
    v59 = -(__int64)v58; /*0x1003f6475*/
    v60 = memcmp("typechoices", *(const void **)(v52 + 8), v57); /*0x1003f647f*/
    if ( v60 ) /*0x1003f6488*/
      v59 = v60; /*0x1003f6488*/
    v61 = (v59 > 0) - (v59 < 0); /*0x1003f6495*/
    v54 += 4; /*0x1003f6497*/
    ++v56; /*0x1003f649b*/
    v55 -= 24; /*0x1003f649e*/
    v52 = v79; /*0x1003f64a2*/
  }
  while ( v61 == 1 ); /*0x1003f64a9*/
  if ( v61 ) /*0x1003f64b0*/
    goto LABEL_88; /*0x1003f64b0*/
  if ( *((_BYTE *)v54 - 24) != 3 || *v54 != 13 ) /*0x1003f64e3*/
    goto LABEL_96; /*0x1003f64e3*/
  v62 = (unsigned __int64 *)*(v54 - 1); /*0x1003f64e5*/
  v63 = 0x616C6C6F7765645FLL; /*0x1003f64e9*/
  v64 = _byteswap_uint64(*v62); /*0x1003f64f6*/
  if ( v64 != 0x616C6C6F7765645FLL /*0x1003f6514*/
    || (v63 = 0x65645F746F6F6C73LL,
        v64 = _byteswap_uint64(*(unsigned __int64 *)((char *)v62 + 5)),
        v65 = 0,
        v64 != 0x65645F746F6F6C73LL) )
  {
    v65 = 2 * (v64 >= v63) - 1; /*0x1003f651e*/
  }
  if ( !v65 /*0x1003f6595*/
    && (v68 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get_mut::h691b7f52e1b51328(v51, "tools", 5)) != 0
    && *(_BYTE *)v68 == 4 )
  {
    v69 = *(_QWORD *)(v68 + 24); /*0x1003f659e*/
    v70 = v68; /*0x1003f65a2*/
    alloc::vec::Vec$LT$T$C$A$GT$::retain::ha5e1a0842587b8b4(v68 + 8); /*0x1003f65a5*/
    v71 = *(_QWORD *)(v70 + 24); /*0x1003f65aa*/
    v67 = v69 - v71; /*0x1003f65b1*/
    v66 = v71 == 0 && v69 != 0; /*0x1003f65c0*/
  }
  else
  {
LABEL_96:
    v66 = 0; /*0x1003f6526*/
    v67 = 0; /*0x1003f6528*/
  }
  v74 += v67; /*0x1003f652a*/
  if ( !(v66 | (unsigned __int8)v77) ) /*0x1003f6533*/
    return v74; /*0x1003f6533*/
LABEL_98:
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hbb390a8031d3b729(v72, v75, "tool_choice", 11); /*0x1003f6535*/
  if ( v72[0] != 6 ) /*0x1003f6558*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v72); /*0x1003f6561*/
  return v74; /*0x1003f6059*/
}