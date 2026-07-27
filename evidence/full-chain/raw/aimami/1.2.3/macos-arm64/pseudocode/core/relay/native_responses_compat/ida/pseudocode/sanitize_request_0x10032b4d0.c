// __ZN13codexmate_lib4core5relay23native_responses_compat16sanitize_request @ 0x10032b4d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::native_responses_compat::sanitize_request::h10e5ccc177246441(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rbx
  size_t v9; // rdx
  size_t v10; // r15
  __int64 v11; // r15
  int v12; // eax
  char v13; // cl
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _BYTE *v22; // r12
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // r13
  size_t v26; // rdx
  size_t v27; // r15
  __int64 v28; // r15
  int v29; // eax
  char v30; // cl
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  char *v34; // r14
  __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // rbx
  size_t v38; // rdx
  size_t v39; // r15
  __int64 v40; // r15
  int v41; // eax
  char v42; // cl
  char v43; // bl
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __m128i v46; // xmm1
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __m128i v50; // xmm1
  __int64 v51; // rcx
  char *v52; // r14
  __int64 v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // r13
  __int64 v56; // rbx
  __int64 v57; // r12
  size_t v58; // rdx
  size_t v59; // r15
  __int64 v60; // r15
  int v61; // eax
  char v62; // cl
  unsigned __int64 *v63; // rdx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // r14
  __int64 v70; // rax
  _BYTE v71[32]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v72; // [rsp+28h] [rbp-68h]
  __int64 v73; // [rsp+30h] [rbp-60h] BYREF
  __int64 *v74; // [rsp+38h] [rbp-58h]
  __int64 v75; // [rsp+40h] [rbp-50h]
  int v76; // [rsp+4Ch] [rbp-44h]
  __int64 v77; // [rsp+50h] [rbp-40h]
  __int64 v78; // [rsp+58h] [rbp-38h]
  __int64 v79; // [rsp+60h] [rbp-30h]

  if ( !(unsigned __int8)codexmate_lib::core::relay::native_responses_compat::rejects_hosted_web_search::haed7022df3fa3273( /*0x10032b503*/
                           a1,
                           *(_QWORD *)(a1 + 104),
                           *(_QWORD *)(a1 + 112),
                           *(unsigned __int8 *)(a1 + 230))
    || *(_BYTE *)a2 != 5 )
  {
    return 0; /*0x10032b5e8*/
  }
  v73 = 0; /*0x10032b509*/
  v2 = *(_QWORD *)(a2 + 8); /*0x10032b511*/
  if ( !v2 ) /*0x10032b518*/
    return v73; /*0x10032b518*/
  v74 = (__int64 *)(a2 + 8); /*0x10032b522*/
  v75 = a2; /*0x10032b526*/
  v78 = *(_QWORD *)(a2 + 16); /*0x10032b52e*/
LABEL_5:
  v3 = v2 + 360; /*0x10032b532*/
  v4 = *(unsigned __int16 *)(v2 + 626); /*0x10032b539*/
  v79 = v2; /*0x10032b540*/
  v5 = (_QWORD *)(v2 - 8); /*0x10032b544*/
  v77 = v4; /*0x10032b548*/
  v6 = 3LL * (unsigned int)(8 * v4); /*0x10032b553*/
  v7 = -1; /*0x10032b557*/
  do /*0x10032b5b4*/
  {
    if ( !v6 ) /*0x10032b563*/
    {
      v7 = v77; /*0x10032b5bf*/
LABEL_15:
      if ( v78 ) /*0x10032b5cb*/
      {
        --v78; /*0x10032b5d1*/
        v2 = *(_QWORD *)(v79 + 8 * v7 + 632); /*0x10032b5d9*/
        goto LABEL_5; /*0x10032b5e1*/
      }
      goto LABEL_24; /*0x10032b5cb*/
    }
    v8 = v3 + 24; /*0x10032b565*/
    v9 = *(_QWORD *)(v3 + 16); /*0x10032b56d*/
    v10 = v9 - 5; /*0x10032b574*/
    if ( v9 >= 5 ) /*0x10032b57d*/
      v9 = 5; /*0x10032b57d*/
    v11 = -(__int64)v10; /*0x10032b581*/
    v12 = memcmp(&anon_b0ee9adff4519c22b647af231a5a39fa_169, *(const void **)(v3 + 8), v9); /*0x10032b58b*/
    if ( v12 ) /*0x10032b594*/
      v11 = v12; /*0x10032b594*/
    v13 = (v11 > 0) - (v11 < 0); /*0x10032b5a1*/
    v5 += 4; /*0x10032b5a3*/
    ++v7; /*0x10032b5a7*/
    v6 -= 24; /*0x10032b5aa*/
    v3 = v8; /*0x10032b5ae*/
  }
  while ( v13 == 1 ); /*0x10032b5b4*/
  if ( v13 ) /*0x10032b5bb*/
    goto LABEL_15; /*0x10032b5bb*/
  if ( *((_BYTE *)v5 - 24) != 4 /*0x10032b616*/
    || (v15 = *v5,
        alloc::vec::Vec$LT$T$C$A$GT$::retain::he33ab006cffd2b88(v5 - 2),
        v16 = *v5,
        v73 = v15 - *v5,
        v16 != 0 || v15 == 0) )
  {
LABEL_24:
    v18 = *v74; /*0x10032b668*/
    v19 = v75; /*0x10032b672*/
    if ( !*v74 ) /*0x10032b676*/
      return v73; /*0x10032b676*/
    v76 = 0; /*0x10032b67c*/
    goto LABEL_26; /*0x10032b67c*/
  }
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d( /*0x10032b634*/
    v71,
    v74,
    &anon_b0ee9adff4519c22b647af231a5a39fa_169,
    5);
  if ( v71[0] != 6 ) /*0x10032b640*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v71); /*0x10032b649*/
  v17 = (int)v74; /*0x10032b64e*/
  v18 = *v74; /*0x10032b652*/
  LOBYTE(v17) = 1; /*0x10032b655*/
  v76 = v17; /*0x10032b657*/
  v19 = v75; /*0x10032b65d*/
  if ( !v18 ) /*0x10032b661*/
  {
LABEL_98:
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d(v71, v74, &unk_1015E461C, 11); /*0x10032bac5*/
    if ( v71[0] != 6 ) /*0x10032bae8*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v71); /*0x10032baf1*/
    return v73; /*0x10032baf1*/
  }
LABEL_26:
  v79 = *(_QWORD *)(v19 + 16); /*0x10032b683*/
  v78 = v18; /*0x10032b68b*/
  while ( 2 ) /*0x10032b68f*/
  {
    v20 = v18 + 360; /*0x10032b68f*/
    v21 = *(unsigned __int16 *)(v18 + 626); /*0x10032b696*/
    v77 = v18; /*0x10032b69d*/
    v22 = (_BYTE *)(v18 - 32); /*0x10032b6a1*/
    v72 = v21; /*0x10032b6a5*/
    v23 = 3LL * (unsigned int)(8 * v21); /*0x10032b6b0*/
    v24 = -1; /*0x10032b6b4*/
    while ( 2 ) /*0x10032b6c3*/
    {
      if ( !v23 ) /*0x10032b6c3*/
      {
        v24 = v72; /*0x10032b71f*/
        goto LABEL_37; /*0x10032b71f*/
      }
      v25 = v20 + 24; /*0x10032b6c5*/
      v26 = *(_QWORD *)(v20 + 16); /*0x10032b6cd*/
      v27 = v26 - 5; /*0x10032b6d4*/
      if ( v26 >= 5 ) /*0x10032b6dd*/
        v26 = 5; /*0x10032b6dd*/
      v28 = -(__int64)v27; /*0x10032b6e1*/
      v29 = memcmp(&anon_b0ee9adff4519c22b647af231a5a39fa_170, *(const void **)(v20 + 8), v26); /*0x10032b6eb*/
      if ( v29 ) /*0x10032b6f4*/
        v28 = v29; /*0x10032b6f4*/
      v30 = (v28 > 0) - (v28 < 0); /*0x10032b701*/
      v22 += 32; /*0x10032b703*/
      ++v24; /*0x10032b707*/
      v23 -= 24; /*0x10032b70a*/
      v20 = v25; /*0x10032b70e*/
      if ( v30 == 1 ) /*0x10032b714*/
        continue; /*0x10032b714*/
      break;
    }
    if ( v30 ) /*0x10032b71b*/
    {
LABEL_37:
      if ( v79 ) /*0x10032b72b*/
      {
        --v79; /*0x10032b72d*/
        v18 = *(_QWORD *)(v77 + 8 * v24 + 632); /*0x10032b735*/
        continue; /*0x10032b73d*/
      }
      goto LABEL_41; /*0x10032b72b*/
    }
    break;
  }
  if ( *v22 == 4 ) /*0x10032b747*/
  {
    alloc::vec::Vec$LT$T$C$A$GT$::retain_mut::h19d79a95d431387c(v22 + 8, &v73); /*0x10032b754*/
    v78 = *v74; /*0x10032b760*/
    if ( !v78 ) /*0x10032b767*/
    {
LABEL_59:
      if ( (_BYTE)v76 ) /*0x10032b878*/
        goto LABEL_98; /*0x10032b878*/
      return v73; /*0x10032b878*/
    }
  }
LABEL_41:
  v79 = *(_QWORD *)(v75 + 16); /*0x10032b76d*/
  v31 = v78; /*0x10032b779*/
LABEL_42:
  v32 = v31 + 360; /*0x10032b77d*/
  v33 = *(unsigned __int16 *)(v31 + 626); /*0x10032b784*/
  v78 = v31; /*0x10032b78b*/
  v34 = (char *)(v31 - 32); /*0x10032b78f*/
  v77 = v33; /*0x10032b793*/
  v35 = 3LL * (unsigned int)(8 * v33); /*0x10032b79e*/
  v36 = -1; /*0x10032b7a2*/
  do /*0x10032b804*/
  {
    if ( !v35 ) /*0x10032b7b3*/
    {
      v36 = v77; /*0x10032b80f*/
LABEL_52:
      if ( !v79 ) /*0x10032b81b*/
        goto LABEL_59; /*0x10032b81b*/
      --v79; /*0x10032b81d*/
      v31 = *(_QWORD *)(v78 + 8 * v36 + 632); /*0x10032b825*/
      goto LABEL_42; /*0x10032b82d*/
    }
    v37 = v32 + 24; /*0x10032b7b5*/
    v38 = *(_QWORD *)(v32 + 16); /*0x10032b7bd*/
    v39 = v38 - 11; /*0x10032b7c4*/
    if ( v38 >= 0xB ) /*0x10032b7cd*/
      v38 = 11; /*0x10032b7cd*/
    v40 = -(__int64)v39; /*0x10032b7d1*/
    v41 = memcmp(&unk_1015E461C, *(const void **)(v32 + 8), v38); /*0x10032b7db*/
    if ( v41 ) /*0x10032b7e4*/
      v40 = v41; /*0x10032b7e4*/
    v42 = (v40 > 0) - (v40 < 0); /*0x10032b7f1*/
    v34 += 32; /*0x10032b7f3*/
    ++v36; /*0x10032b7f7*/
    v35 -= 24; /*0x10032b7fa*/
    v32 = v37; /*0x10032b7fe*/
  }
  while ( v42 == 1 ); /*0x10032b804*/
  if ( v42 ) /*0x10032b80b*/
    goto LABEL_52; /*0x10032b80b*/
  v43 = *v34; /*0x10032b832*/
  if ( *v34 == 3 ) /*0x10032b839*/
  {
    v44 = *((_QWORD *)v34 + 2); /*0x10032b83f*/
    v45 = *((_QWORD *)v34 + 3); /*0x10032b843*/
    if ( v45 == 18 ) /*0x10032b84b*/
    {
      v46 = _mm_or_si128( /*0x10032b89f*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v44 + 16)), (__m128i)xmmword_1015E35E0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v44), (__m128i)xmmword_1015E35D0));
      if ( _mm_testz_si128(v46, v46) ) /*0x10032b8a3*/
        goto LABEL_98; /*0x10032b8a8*/
    }
    else
    {
      if ( v45 == 10 ) /*0x10032b851*/
      {
        if ( !(*(_QWORD *)v44 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v44 + 8) ^ 0x6863LL) ) /*0x10032b86a*/
          goto LABEL_98; /*0x10032b86d*/
        goto LABEL_65; /*0x10032b86d*/
      }
      if ( v45 <= 0xA ) /*0x10032b8af*/
        goto LABEL_65; /*0x10032b8af*/
    }
    if ( !(*(_QWORD *)v44 ^ 0x726165735F626577LL | *(_QWORD *)(v44 + 3) ^ 0x5F6863726165735FLL) ) /*0x10032b8cf*/
      goto LABEL_98; /*0x10032b8cf*/
  }
LABEL_65:
  v47 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10032b8d5*/
          "typefullargsopenwithkindsavetrueuuidemitshowhide",
          4,
          v34);
  if ( v47 && *(_BYTE *)v47 == 3 ) /*0x10032b8f5*/
  {
    v48 = *(_QWORD *)(v47 + 16); /*0x10032b8fb*/
    v49 = *(_QWORD *)(v47 + 24); /*0x10032b8ff*/
    if ( v49 == 18 ) /*0x10032b907*/
    {
      v50 = _mm_or_si128( /*0x10032b94d*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v48 + 16)), (__m128i)xmmword_1015E35E0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v48), (__m128i)xmmword_1015E35D0));
      if ( _mm_testz_si128(v50, v50) ) /*0x10032b951*/
        goto LABEL_98; /*0x10032b956*/
    }
    else
    {
      if ( v49 == 10 ) /*0x10032b90d*/
      {
        if ( !(*(_QWORD *)v48 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v48 + 8) ^ 0x6863LL) ) /*0x10032b927*/
          goto LABEL_98; /*0x10032b92a*/
        goto LABEL_75; /*0x10032b92a*/
      }
      if ( v49 <= 0xA ) /*0x10032b95d*/
        goto LABEL_75; /*0x10032b95d*/
    }
    if ( !(*(_QWORD *)v48 ^ 0x726165735F626577LL | *(_QWORD *)(v48 + 3) ^ 0x5F6863726165735FLL) ) /*0x10032b97d*/
      goto LABEL_98; /*0x10032b97d*/
LABEL_75:
    v43 = *v34; /*0x10032b983*/
  }
  if ( v43 != 5 ) /*0x10032b98a*/
    goto LABEL_97; /*0x10032b98a*/
  v51 = *((_QWORD *)v34 + 1); /*0x10032b990*/
  if ( !v51 ) /*0x10032b997*/
    goto LABEL_97; /*0x10032b997*/
  v79 = *((_QWORD *)v34 + 2); /*0x10032b9a1*/
  v52 = v34 + 8; /*0x10032b9a5*/
LABEL_79:
  v53 = v51 + 360; /*0x10032b9a9*/
  v54 = *(unsigned __int16 *)(v51 + 626); /*0x10032b9b0*/
  v77 = v51; /*0x10032b9b7*/
  v55 = (_QWORD *)(v51 - 8); /*0x10032b9bb*/
  v75 = v54; /*0x10032b9bf*/
  v56 = 3LL * (unsigned int)(8 * v54); /*0x10032b9ca*/
  v57 = -1; /*0x10032b9ce*/
  do /*0x10032ba39*/
  {
    if ( !v56 ) /*0x10032b9e3*/
    {
      v57 = v75; /*0x10032ba44*/
LABEL_89:
      if ( !v79 ) /*0x10032ba50*/
        goto LABEL_97; /*0x10032ba50*/
      --v79; /*0x10032ba52*/
      v51 = *(_QWORD *)(v77 + 8 * v57 + 632); /*0x10032ba5a*/
      goto LABEL_79; /*0x10032ba62*/
    }
    v78 = v53 + 24; /*0x10032b9e9*/
    v58 = *(_QWORD *)(v53 + 16); /*0x10032b9f1*/
    v59 = v58 - 4; /*0x10032b9f8*/
    if ( v58 >= 4 ) /*0x10032ba01*/
      v58 = 4; /*0x10032ba01*/
    v60 = -(__int64)v59; /*0x10032ba05*/
    v61 = memcmp("typefullargsopenwithkindsavetrueuuidemitshowhide", *(const void **)(v53 + 8), v58); /*0x10032ba0f*/
    if ( v61 ) /*0x10032ba18*/
      v60 = v61; /*0x10032ba18*/
    v62 = (v60 > 0) - (v60 < 0); /*0x10032ba25*/
    v55 += 4; /*0x10032ba27*/
    ++v57; /*0x10032ba2b*/
    v56 -= 24; /*0x10032ba2e*/
    v53 = v78; /*0x10032ba32*/
  }
  while ( v62 == 1 ); /*0x10032ba39*/
  if ( v62 ) /*0x10032ba40*/
    goto LABEL_89; /*0x10032ba40*/
  if ( *((_BYTE *)v55 - 24) != 3 || *v55 != 13 ) /*0x10032ba73*/
    goto LABEL_97; /*0x10032ba73*/
  v63 = (unsigned __int64 *)*(v55 - 1); /*0x10032ba75*/
  v64 = 0x616C6C6F7765645FLL; /*0x10032ba79*/
  v65 = _byteswap_uint64(*v63); /*0x10032ba86*/
  if ( v65 != 0x616C6C6F7765645FLL /*0x10032baa4*/
    || (v64 = 0x65645F746F6F6C73LL,
        v65 = _byteswap_uint64(*(unsigned __int64 *)((char *)v63 + 5)),
        v66 = 0,
        v65 != 0x65645F746F6F6C73LL) )
  {
    v66 = 2 * (v65 >= v64) - 1; /*0x10032baae*/
  }
  if ( v66 /*0x10032bb25*/
    || (v67 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get_mut::h729a1977df2f647e(
                v52,
                &anon_b0ee9adff4519c22b647af231a5a39fa_169,
                5)) == 0
    || *(_BYTE *)v67 != 4 )
  {
LABEL_97:
    if ( !(_BYTE)v76 ) /*0x10032bac3*/
      return v73; /*0x10032bac3*/
    goto LABEL_98; /*0x10032bac3*/
  }
  v68 = *(_QWORD *)(v67 + 24); /*0x10032bb2e*/
  v69 = v67; /*0x10032bb32*/
  alloc::vec::Vec$LT$T$C$A$GT$::retain::he33ab006cffd2b88(v67 + 8); /*0x10032bb35*/
  v70 = *(_QWORD *)(v69 + 24); /*0x10032bb3a*/
  v73 += v68 - v70; /*0x10032bb52*/
  if ( (v70 == 0 && v68 != 0) | (unsigned __int8)v76 ) /*0x10032bb59*/
    goto LABEL_98; /*0x10032bb5b*/
  return v73; /*0x10032bafa*/
}