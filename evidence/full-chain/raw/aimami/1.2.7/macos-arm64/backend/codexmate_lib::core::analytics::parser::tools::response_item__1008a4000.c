// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tools::response_item::h8f740f12f5cc008a; addr: 0x1008a4000; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
double __fastcall codexmate_lib::core::analytics::parser::tools::response_item::h8f740f12f5cc008a(
        _QWORD *a1,
        void *a2,
        void *a3,
        size_t a4,
        __int64 a5,
        _QWORD *a6,
        __m128i a7)
{
  __int64 v7; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int8 v13; // r15
  __int64 v14; // kr00_8
  unsigned __int8 v15; // al
  __m128i v16; // xmm1
  void *v17; // rdx
  __m128i v18; // xmm1
  _QWORD *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // r14
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  bool v30; // cf
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int64 v33; // r15
  void *v34; // rbx
  size_t v35; // r12
  __int64 v36; // r13
  bool v37; // zf
  __int64 v38; // rax
  char *v39; // rdi
  __int64 v40; // rax
  void **v41; // r15
  size_t v42; // rcx
  bool v43; // r12
  _QWORD *v44; // rdi
  char v45; // r15
  __int64 v46; // r13
  _BYTE *v47; // rax
  _BYTE *v48; // rax
  void *v49; // rbx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rsi
  int v52; // edi
  __int64 v53; // rsi
  unsigned __int8 v54; // r14
  __int64 v55; // r13
  size_t v56; // r12
  __int64 v57; // r15
  __int64 v58; // rbx
  __int64 *v59; // rdi
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  _QWORD *v63; // rbx
  __int64 v64; // r12
  __int64 v65; // r13
  unsigned __int64 v66; // r15
  size_t v67; // rdx
  __int64 v68; // r14
  int v69; // eax
  char v70; // cl
  char v71; // r14
  unsigned __int16 *v72; // rcx
  size_t v73; // r12
  char *i; // rcx
  char *v75; // rax
  __int64 v76; // rbx
  __int64 v77; // r13
  char *v78; // r14
  size_t v79; // rdx
  __int64 v80; // r15
  int v81; // eax
  char v82; // cl
  unsigned __int16 **v83; // rsi
  _QWORD *v84; // rax
  _QWORD *v85; // r14
  unsigned __int16 *v86; // rax
  __int64 v87; // r12
  __int64 v88; // r15
  unsigned __int16 *v89; // rbx
  size_t v90; // rdx
  __int64 v91; // r13
  int v92; // eax
  bool v93; // sf
  char v94; // cl
  void *v95; // rbx
  bool v96; // zf
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rdi
  unsigned __int64 *v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // r12
  __int64 v103; // rax
  __int64 v104; // rbx
  size_t v105; // r12
  size_t v106; // rdx
  void *v107; // rbx
  _BYTE *v108; // rax
  _BYTE *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rcx
  const char *v114; // rcx
  __int64 v115; // rsi
  char *v116; // rdx
  __int64 v117; // rbx
  __int64 v118; // r15
  _QWORD *v119; // r12
  __int64 v120; // r13
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v124; // [rsp+0h] [rbp-330h]
  __int64 v125; // [rsp+0h] [rbp-330h]
  _QWORD __src[20]; // [rsp+58h] [rbp-2D8h] BYREF
  _QWORD __dst[23]; // [rsp+F8h] [rbp-238h] BYREF
  unsigned __int16 **v128; // [rsp+1B0h] [rbp-180h] BYREF
  size_t v129; // [rsp+1B8h] [rbp-178h] BYREF
  size_t v130; // [rsp+1C0h] [rbp-170h]
  __int64 v131; // [rsp+1C8h] [rbp-168h]
  __int64 v132; // [rsp+1D0h] [rbp-160h] BYREF
  __int64 v133; // [rsp+1D8h] [rbp-158h]
  __int64 v134; // [rsp+1E0h] [rbp-150h]
  unsigned __int64 v135; // [rsp+1E8h] [rbp-148h] BYREF
  __int64 v136; // [rsp+1F0h] [rbp-140h]
  __int64 v137; // [rsp+1F8h] [rbp-138h]
  __int64 v138; // [rsp+200h] [rbp-130h]
  __int64 v139; // [rsp+208h] [rbp-128h]
  void *v140; // [rsp+210h] [rbp-120h]
  __int64 v141; // [rsp+218h] [rbp-118h] BYREF
  void *v142; // [rsp+220h] [rbp-110h]
  size_t v143; // [rsp+228h] [rbp-108h]
  __int64 v144; // [rsp+230h] [rbp-100h]
  unsigned __int16 **v145; // [rsp+238h] [rbp-F8h] BYREF
  size_t v146; // [rsp+240h] [rbp-F0h]
  size_t v147; // [rsp+248h] [rbp-E8h]
  __int64 v148; // [rsp+250h] [rbp-E0h]
  unsigned __int16 **v149; // [rsp+258h] [rbp-D8h]
  size_t v150; // [rsp+260h] [rbp-D0h]
  unsigned __int64 v151; // [rsp+268h] [rbp-C8h]
  __int64 v152; // [rsp+270h] [rbp-C0h]
  __int64 v153; // [rsp+278h] [rbp-B8h]
  void *v154; // [rsp+280h] [rbp-B0h] BYREF
  void *__s2; // [rsp+288h] [rbp-A8h]
  size_t __n; // [rsp+290h] [rbp-A0h]
  __int64 v157; // [rsp+298h] [rbp-98h] BYREF
  int v158[2]; // [rsp+2A0h] [rbp-90h]
  int v159[2]; // [rsp+2A8h] [rbp-88h]
  int v160[2]; // [rsp+2B0h] [rbp-80h]
  int v161[2]; // [rsp+2B8h] [rbp-78h]
  size_t v162; // [rsp+2C0h] [rbp-70h]
  void *v163; // [rsp+2C8h] [rbp-68h]
  unsigned __int64 v164; // [rsp+2D0h] [rbp-60h]
  size_t v165; // [rsp+2D8h] [rbp-58h]
  unsigned __int16 **v166; // [rsp+2E0h] [rbp-50h]
  void *__s1; // [rsp+2E8h] [rbp-48h]
  size_t v168; // [rsp+2F0h] [rbp-40h]
  void *v169; // [rsp+2F8h] [rbp-38h]
  _QWORD *v170; // [rsp+300h] [rbp-30h]

  v152 = a5; /*0x1008a4017*/
  v163 = a3; /*0x1008a4021*/
  v170 = a1; /*0x1008a4028*/
  v169 = a2; /*0x1008a4038*/
  v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a403c*/
          "typeuserinfoweek_up_",
          4,
          a2);
  if ( v10 && *(_BYTE *)v10 == 3 ) /*0x1008a4049*/
  {
    v11 = *(_QWORD *)(v10 + 16); /*0x1008a404b*/
    v7 = *(_QWORD *)(v10 + 24); /*0x1008a404f*/
  }
  else
  {
    v11 = 0; /*0x1008a4055*/
  }
  if ( !v11 ) /*0x1008a405a*/
    v7 = 0; /*0x1008a405a*/
  v12 = 1; /*0x1008a405e*/
  if ( v11 ) /*0x1008a4063*/
    v12 = v11; /*0x1008a4063*/
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(__dst, v169, "turn_id", 7); /*0x1008a407e*/
  if ( __OFSUB__(0, __dst[0]) ) /*0x1008a4085*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v157, v170 + 26); /*0x1008a40a0*/
    v13 = 0; /*0x1008a40a5*/
    v14 = v7 - 7; /*0x1008a40a8*/
  }
  else
  {
    *(_QWORD *)v159 = __dst[2]; /*0x1008a40e7*/
    *(_QWORD *)v158 = __dst[1]; /*0x1008a40fc*/
    v157 = __dst[0]; /*0x1008a4103*/
    v13 = 0; /*0x1008a410a*/
    v14 = v7 - 7; /*0x1008a4115*/
    if ( (unsigned __int64)(v7 - 7) > 0x10 ) /*0x1008a4115*/
    {
LABEL_15:
      v15 = 0; /*0x1008a4117*/
LABEL_24:
      if ( !v15 ) /*0x1008a4210*/
        goto LABEL_39; /*0x1008a4210*/
      goto LABEL_31; /*0x1008a4210*/
    }
  }
  v15 = 0; /*0x1008a40c0*/
  switch ( v14 ) /*0x1008a40c2*/
  {
    case 0LL: /*0x1008a40c2*/
      if ( !(*(_DWORD *)v12 ^ 0x7373656D | *(_DWORD *)(v12 + 3) ^ 0x65676173) ) /*0x1008a40d3*/
        goto LABEL_19; /*0x1008a40d5*/
      goto LABEL_23; /*0x1008a40d5*/
    case 1LL: /*0x1008a40c2*/
    case 3LL: /*0x1008a40c2*/
    case 4LL: /*0x1008a40c2*/
    case 5LL: /*0x1008a40c2*/
    case 7LL: /*0x1008a40c2*/
    case 10LL: /*0x1008a40c2*/
    case 11LL: /*0x1008a40c2*/
    case 12LL: /*0x1008a40c2*/
    case 14LL: /*0x1008a40c2*/
    case 15LL: /*0x1008a40c2*/
      goto LABEL_24;
    case 2LL: /*0x1008a40c2*/
      if ( *(_QWORD *)v12 ^ 0x6E696E6F73616572LL | *(unsigned __int8 *)(v12 + 8) ^ 0x67LL ) /*0x1008a4171*/
        goto LABEL_23; /*0x1008a4174*/
LABEL_19:
      v17 = *(void **)v158; /*0x1008a417a*/
      v168 = *(_QWORD *)v159; /*0x1008a4188*/
      goto LABEL_20; /*0x1008a4188*/
    case 6LL: /*0x1008a40c2*/
      if ( *(_QWORD *)v12 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v12 + 5) ^ 0x6C6C61635F6E6F69LL ) /*0x1008a41ff*/
        goto LABEL_23; /*0x1008a4202*/
      goto LABEL_27; /*0x1008a4202*/
    case 8LL: /*0x1008a40c2*/
      if ( *(_QWORD *)v12 ^ 0x726165735F626577LL | *(_QWORD *)(v12 + 7) ^ 0x6C6C61635F686372LL ) /*0x1008a4233*/
      {
LABEL_23:
        v13 = 0; /*0x1008a4204*/
        v15 = 0; /*0x1008a4207*/
        goto LABEL_24; /*0x1008a4207*/
      }
LABEL_27:
      v13 = 1; /*0x1008a4238*/
      break; /*0x1008a423b*/
    case 9LL: /*0x1008a40c2*/
      a7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1016F1130); /*0x1008a4241*/
      v13 = 1; /*0x1008a4249*/
      if ( _mm_testz_si128(a7, a7) ) /*0x1008a4251*/
        break; /*0x1008a4251*/
      a7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1016F1140); /*0x1008a4257*/
      if ( _mm_testz_si128(a7, a7) ) /*0x1008a4264*/
        break; /*0x1008a4264*/
      a7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1016F2410); /*0x1008a426a*/
      v13 = _mm_testz_si128(a7, a7); /*0x1008a4277*/
      v15 = 0; /*0x1008a427b*/
      if ( v13 ) /*0x1008a4280*/
        break; /*0x1008a4280*/
      goto LABEL_24; /*0x1008a4280*/
    case 13LL: /*0x1008a40c2*/
      a7 = _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(v12 + 16)), (__m128i)xmmword_1016F2420); /*0x1008a412c*/
      v16 = _mm_or_si128(_mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1016F2430), a7); /*0x1008a4140*/
      v13 = 0; /*0x1008a4144*/
      v15 = 0; /*0x1008a414c*/
      if ( _mm_testz_si128(v16, v16) ) /*0x1008a4147*/
        break; /*0x1008a4151*/
      goto LABEL_24; /*0x1008a4151*/
    case 16LL: /*0x1008a40c2*/
      a7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v12 + 7)), (__m128i)xmmword_1016F2400); /*0x1008a41b0*/
      v18 = _mm_or_si128(_mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1016F1130), a7); /*0x1008a41c4*/
      v15 = _mm_testz_si128(v18, v18); /*0x1008a41cd*/
      v13 = 0; /*0x1008a41d0*/
      goto LABEL_24; /*0x1008a41d6*/
    default:
      goto LABEL_15;
  }
LABEL_31:
  v168 = *(_QWORD *)v159; /*0x1008a4282*/
  if ( !*(_QWORD *)v159 ) /*0x1008a4290*/
  {
LABEL_38:
    v19 = v170; /*0x1008a4354*/
    *((_BYTE *)v170 + 505) = 1; /*0x1008a4358*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v19 + 50, 7); /*0x1008a436b*/
    goto LABEL_39; /*0x1008a436b*/
  }
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(__dst, v169, &unk_10178B9C1, 7); /*0x1008a42ad*/
  if ( __dst[0] == 0x8000000000000000LL ) /*0x1008a42c3*/
  {
    codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b( /*0x1008a42dc*/
      __src,
      v169,
      &anon_0868f19ff3e9f3569e732f60bdb020cc_26,
      2);
  }
  else
  {
    __src[2] = __dst[2]; /*0x1008a42ea*/
    __src[1] = __dst[1]; /*0x1008a42ff*/
    __src[0] = __dst[0]; /*0x1008a4306*/
  }
  v139 = __src[0]; /*0x1008a4314*/
  if ( __src[0] != 0x8000000000000000LL ) /*0x1008a4328*/
  {
    __dst[0] = v163; /*0x1008a43b8*/
    __dst[1] = a4; /*0x1008a43bf*/
    __s1 = *(void **)v158; /*0x1008a43c6*/
    __dst[2] = *(_QWORD *)v158; /*0x1008a43ca*/
    __dst[3] = v168; /*0x1008a43d5*/
    *(_QWORD *)v160 = __src[1]; /*0x1008a43dc*/
    __dst[4] = __src[1]; /*0x1008a43e0*/
    *(_QWORD *)v161 = __src[2]; /*0x1008a43e7*/
    __dst[5] = __src[2]; /*0x1008a43eb*/
    codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db((__int64)&v154, (__int64)__dst, 3); /*0x1008a4405*/
    v153 = (__int64)a6; /*0x1008a440a*/
    v165 = a4; /*0x1008a4414*/
    if ( v13 ) /*0x1008a4418*/
    {
      v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a442d*/
              "nameshelltool_searchweb_searchcalled",
              4,
              v169);
      if ( v20 && *(_BYTE *)v20 == 3 ) /*0x1008a443e*/
      {
        v22 = *(_QWORD *)(v20 + 16); /*0x1008a4444*/
        v21 = *(_QWORD *)(v20 + 24); /*0x1008a4448*/
      }
      else
      {
        v22 = 0; /*0x1008a455d*/
      }
      if ( v7 == 16 ) /*0x1008a4563*/
      {
        a7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_1016F1140); /*0x1008a4738*/
        if ( _mm_testz_si128(a7, a7) ) /*0x1008a4745*/
        {
          v53 = (__int64)"tool_searchweb_searchcalled"; /*0x1008a483f*/
          v38 = 11; /*0x1008a4846*/
          goto LABEL_92; /*0x1008a4846*/
        }
        v50 = 0x6C6F63616C5F7368LL; /*0x1008a474b*/
        v51 = _byteswap_uint64(*(_QWORD *)v12); /*0x1008a4758*/
        if ( v51 != 0x6C6F63616C5F7368LL /*0x1008a4776*/
          || (v50 = 0x656C6C5F63616C6CLL,
              v51 = _byteswap_uint64(*(_QWORD *)(v12 + 8)),
              v52 = 0,
              v51 != 0x656C6C5F63616C6CLL) )
        {
          v52 = 2 * (v51 >= v50) - 1; /*0x1008a4781*/
        }
        v37 = v52 == 0; /*0x1008a4787*/
        v38 = 2LL * (v52 != 0) + 5; /*0x1008a478c*/
        v39 = "shelltool_searchweb_searchcalled"; /*0x1008a4791*/
      }
      else
      {
        if ( v7 != 15 ) /*0x1008a456d*/
        {
          v53 = (__int64)&unk_10178B9C8; /*0x1008a47a8*/
          v38 = 7; /*0x1008a47af*/
          goto LABEL_92; /*0x1008a47b4*/
        }
        v37 = (*(_QWORD *)v12 ^ 0x726165735F626577LL | *(_QWORD *)(v12 + 7) ^ 0x6C6C61635F686372LL) == 0; /*0x1008a4590*/
        v38 = 3LL * v37 + 7; /*0x1008a4597*/
        v39 = "web_searchcalled"; /*0x1008a459c*/
      }
      v53 = (__int64)&unk_10178B9C8; /*0x1008a4798*/
      if ( v37 ) /*0x1008a479f*/
        v53 = (__int64)v39; /*0x1008a479f*/
LABEL_92:
      if ( v22 ) /*0x1008a484e*/
        v53 = v22; /*0x1008a4852*/
      else
        v21 = v38; /*0x1008a484e*/
      v59 = __dst; /*0x1008a4856*/
      codexmate_lib::core::analytics::parser::tools::canonical_tool::h59eff20a10b07782((__int64)__dst, v53, v21); /*0x1008a485d*/
      v143 = __dst[2]; /*0x1008a4869*/
      v142 = (void *)__dst[1]; /*0x1008a487e*/
      v141 = __dst[0]; /*0x1008a4885*/
      v140 = (void *)__dst[3]; /*0x1008a4893*/
      v162 = __dst[4]; /*0x1008a48a1*/
      v61 = v170[59]; /*0x1008a48a9*/
      if ( v61 ) /*0x1008a48b3*/
      {
        v166 = (unsigned __int16 **)v170[60]; /*0x1008a48c4*/
        while ( 1 ) /*0x1008a48c8*/
        {
          v62 = v61 + 360; /*0x1008a48c8*/
          v60 = *(unsigned __int16 *)(v61 + 626); /*0x1008a48cf*/
          v164 = v61; /*0x1008a48d6*/
          v63 = (_QWORD *)(v61 - 32); /*0x1008a48da*/
          v144 = v60; /*0x1008a48de*/
          v64 = 3LL * (unsigned int)(8 * v60); /*0x1008a48ec*/
          v65 = -1; /*0x1008a48f0*/
          do /*0x1008a494c*/
          {
            if ( !v64 ) /*0x1008a4903*/
            {
              v65 = v144; /*0x1008a4957*/
              goto LABEL_107; /*0x1008a4957*/
            }
            v66 = v62 + 24; /*0x1008a4905*/
            v53 = *(_QWORD *)(v62 + 8); /*0x1008a4909*/
            v67 = *(_QWORD *)(v62 + 16); /*0x1008a490d*/
            v68 = v168 - v67; /*0x1008a4918*/
            if ( v168 < v67 ) /*0x1008a491b*/
              v67 = v168; /*0x1008a491b*/
            v59 = (__int64 *)__s1; /*0x1008a491f*/
            v69 = memcmp(__s1, (const void *)v53, v67); /*0x1008a4923*/
            if ( v69 ) /*0x1008a492c*/
              v68 = v69; /*0x1008a492c*/
            v70 = (v68 > 0) - (v68 < 0); /*0x1008a4939*/
            v63 += 4; /*0x1008a493b*/
            ++v65; /*0x1008a493f*/
            v64 -= 24; /*0x1008a4942*/
            v62 = v66; /*0x1008a4946*/
          }
          while ( v70 == 1 ); /*0x1008a494c*/
          if ( !v70 ) /*0x1008a4953*/
            goto LABEL_110; /*0x1008a4953*/
LABEL_107:
          if ( !v166 ) /*0x1008a496a*/
            break; /*0x1008a496a*/
          v166 = (unsigned __int16 **)((char *)v166 - 1); /*0x1008a496c*/
          v61 = *(_QWORD *)(v164 + 8 * v65 + 632); /*0x1008a4970*/
        }
      }
      v63 = v170 + 46; /*0x1008a4981*/
LABEL_110:
      v46 = v165; /*0x1008a4988*/
      if ( *v63 == 0x8000000000000000LL ) /*0x1008a4999*/
      {
        v135 = 0x8000000000000000LL; /*0x1008a499b*/
        if ( v143 != 11 ) /*0x1008a49aa*/
          goto LABEL_115; /*0x1008a49aa*/
      }
      else
      {
        v71 = *((_BYTE *)v63 + 24); /*0x1008a49ae*/
        v59 = __dst; /*0x1008a49b3*/
        v53 = (__int64)v63; /*0x1008a49ba*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(__dst, v63); /*0x1008a49bd*/
        v137 = __dst[2]; /*0x1008a49c9*/
        v136 = __dst[1]; /*0x1008a49de*/
        v135 = __dst[0]; /*0x1008a49e5*/
        LOBYTE(v138) = v71; /*0x1008a49ec*/
        if ( v143 != 11 ) /*0x1008a49fb*/
          goto LABEL_115; /*0x1008a49fb*/
      }
      v60 = *(_QWORD *)v142 ^ 0x61705F796C707061LL | *(_QWORD *)((char *)v142 + 3) ^ 0x68637461705F796CLL; /*0x1008a4a1f*/
      if ( !v60 ) /*0x1008a4a22*/
      {
        v100 = &v135; /*0x1008a4cf9*/
        if ( v135 == 0x8000000000000000LL ) /*0x1008a4d00*/
          LODWORD(v100) = 0; /*0x1008a4d00*/
        v59 = &v132; /*0x1008a4d15*/
        v53 = (__int64)v170; /*0x1008a4d1c*/
        codexmate_lib::core::analytics::parser::tools::patch_changes::h00bc85811a10d9ab( /*0x1008a4d2b*/
          &v132,
          (__int64)v170,
          (__int64)v169,
          (int)v100,
          (int)v163,
          v46,
          (__int64)__s1,
          v168);
        goto LABEL_116; /*0x1008a4d30*/
      }
LABEL_115:
      v132 = 0; /*0x1008a4a28*/
      v133 = 8; /*0x1008a4a33*/
      v134 = 0; /*0x1008a4a3e*/
LABEL_116:
      v166 = (unsigned __int16 **)(v170 + 53); /*0x1008a4a49*/
      v72 = (unsigned __int16 *)v170[53]; /*0x1008a4a58*/
      if ( v170[55] >= 0x800u ) /*0x1008a4a6a*/
      {
        v169 = (void *)v170[53]; /*0x1008a4a70*/
        if ( v72 ) /*0x1008a4a77*/
        {
          __s1 = (void *)v170[54]; /*0x1008a4a88*/
          v168 = (size_t)__s2; /*0x1008a4a93*/
          v73 = __n; /*0x1008a4a97*/
          for ( i = (char *)v169; ; i = *(char **)(v164 + 8 * v77 + 2040) ) /*0x1008a4a9e*/
          {
            v75 = i + 1768; /*0x1008a4aa2*/
            v164 = (unsigned __int64)i; /*0x1008a4aa9*/
            v144 = *((unsigned __int16 *)i + 1017); /*0x1008a4ab4*/
            v76 = 3LL * (unsigned int)(8 * v144); /*0x1008a4ac2*/
            v77 = -1; /*0x1008a4ac6*/
            do /*0x1008a4b14*/
            {
              if ( !v76 ) /*0x1008a4ad3*/
              {
                v77 = v144; /*0x1008a4b1f*/
                goto LABEL_129; /*0x1008a4b1f*/
              }
              v78 = v75 + 24; /*0x1008a4ad5*/
              v53 = *((_QWORD *)v75 + 1); /*0x1008a4ad9*/
              v79 = *((_QWORD *)v75 + 2); /*0x1008a4add*/
              v80 = v73 - v79; /*0x1008a4ae4*/
              if ( v73 < v79 ) /*0x1008a4ae7*/
                v79 = v73; /*0x1008a4ae7*/
              v59 = (__int64 *)v168; /*0x1008a4aeb*/
              v81 = memcmp((const void *)v168, (const void *)v53, v79); /*0x1008a4aef*/
              if ( v81 ) /*0x1008a4af8*/
                v80 = v81; /*0x1008a4af8*/
              v82 = (v80 > 0) - (v80 < 0); /*0x1008a4b05*/
              ++v77; /*0x1008a4b07*/
              v76 -= 24; /*0x1008a4b0a*/
              v75 = v78; /*0x1008a4b0e*/
            }
            while ( v82 == 1 ); /*0x1008a4b14*/
            if ( !v82 ) /*0x1008a4b1b*/
            {
              v46 = v165; /*0x1008a4b45*/
              v72 = (unsigned __int16 *)v169; /*0x1008a4b49*/
              goto LABEL_132; /*0x1008a4b4d*/
            }
LABEL_129:
            if ( !__s1 ) /*0x1008a4b2e*/
              break; /*0x1008a4b2e*/
            __s1 = (char *)__s1 - 1; /*0x1008a4b30*/
          }
        }
        v83 = v166; /*0x1008a4b56*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::pop_first::h24b62ca4640f83fd(__dst); /*0x1008a4b5a*/
        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$alloc..string..String$C$codexmate_lib..core..analytics..parser..tools..PendingCall$RP$$GT$$GT$::h1437c802a6cbfc2d( /*0x1008a4b66*/
          __dst,
          v83);
        v84 = v170; /*0x1008a4b6b*/
        *((_BYTE *)v170 + 505) = 1; /*0x1008a4b6f*/
        v59 = v84 + 50; /*0x1008a4b76*/
        v53 = 7; /*0x1008a4b7d*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v84 + 50, 7); /*0x1008a4b82*/
        v72 = *v166; /*0x1008a4b8b*/
        v46 = v165; /*0x1008a4b8e*/
      }
LABEL_132:
      __s1 = v154; /*0x1008a4b92*/
      v168 = (size_t)__s2; /*0x1008a4ba4*/
      v85 = (_QWORD *)__n; /*0x1008a4ba8*/
      if ( v72 ) /*0x1008a4bb2*/
      {
        v170 = (_QWORD *)v170[54]; /*0x1008a4bc3*/
        while ( 2 ) /*0x1008a4bc7*/
        {
          v86 = v72 + 884; /*0x1008a4bc7*/
          v169 = v72; /*0x1008a4bce*/
          v164 = v72[1017]; /*0x1008a4bd9*/
          v87 = 3LL * (unsigned int)(8 * v164); /*0x1008a4be4*/
          v88 = -1; /*0x1008a4be8*/
          do /*0x1008a4c38*/
          {
            if ( !v87 ) /*0x1008a4bf3*/
            {
              v88 = v164; /*0x1008a4c43*/
              goto LABEL_144; /*0x1008a4c43*/
            }
            v89 = v86 + 12; /*0x1008a4bf5*/
            v53 = *((_QWORD *)v86 + 1); /*0x1008a4bf9*/
            v90 = *((_QWORD *)v86 + 2); /*0x1008a4bfd*/
            v91 = (__int64)v85 - v90; /*0x1008a4c04*/
            if ( (unsigned __int64)v85 < v90 ) /*0x1008a4c07*/
              v90 = (size_t)v85; /*0x1008a4c07*/
            v59 = (__int64 *)v168; /*0x1008a4c0b*/
            v92 = memcmp((const void *)v168, (const void *)v53, v90); /*0x1008a4c0f*/
            if ( v92 ) /*0x1008a4c18*/
              v91 = v92; /*0x1008a4c18*/
            v37 = v91 == 0; /*0x1008a4c1c*/
            v93 = v91 < 0; /*0x1008a4c1c*/
            v46 = v165; /*0x1008a4c1f*/
            v94 = (!v93 && !v37) - v93; /*0x1008a4c29*/
            ++v88; /*0x1008a4c2b*/
            v87 -= 24; /*0x1008a4c2e*/
            v86 = v89; /*0x1008a4c32*/
          }
          while ( v94 == 1 ); /*0x1008a4c38*/
          if ( !v94 ) /*0x1008a4c3f*/
          {
            v53 = (__int64)__s1; /*0x1008a4c6a*/
            v95 = v169; /*0x1008a4c71*/
            if ( __s1 ) /*0x1008a4c75*/
            {
              v59 = (__int64 *)v168; /*0x1008a4c7c*/
              *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v168, __s1, 1); /*0x1008a4c80*/
            }
            v85 = v170; /*0x1008a4c85*/
            v168 = (size_t)v95; /*0x1008a4c89*/
            __s1 = (void *)0x8000000000000000LL; /*0x1008a4c97*/
            v96 = v46 == 0; /*0x1008a4c9b*/
            if ( v46 < 0 ) /*0x1008a4c9e*/
            {
LABEL_149:
              v97 = 0; /*0x1008a4ca0*/
              goto LABEL_150; /*0x1008a4ca0*/
            }
            goto LABEL_152; /*0x1008a4c9e*/
          }
LABEL_144:
          if ( v170 ) /*0x1008a4c53*/
          {
            v170 = (_QWORD *)((char *)v170 - 1); /*0x1008a4c59*/
            v72 = *((unsigned __int16 **)v169 + v88 + 255); /*0x1008a4c5d*/
            continue; /*0x1008a4c65*/
          }
          break;
        }
        v164 = v88; /*0x1008a511f*/
        v88 = (__int64)v166; /*0x1008a5123*/
        v166 = (unsigned __int16 **)v169; /*0x1008a5127*/
        v96 = v46 == 0; /*0x1008a512b*/
        if ( v46 < 0 ) /*0x1008a512e*/
          goto LABEL_149; /*0x1008a512e*/
      }
      else
      {
        v88 = (__int64)v166; /*0x1008a4cb2*/
        v166 = nullptr; /*0x1008a4cb6*/
        v96 = v46 == 0; /*0x1008a4cbe*/
        if ( v46 < 0 ) /*0x1008a4cc1*/
          goto LABEL_149; /*0x1008a4cc1*/
      }
LABEL_152:
      if ( v96 ) /*0x1008a4cc3*/
      {
        v99 = 1; /*0x1008a4d35*/
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, v53, v60); /*0x1008a4cc5*/
        v97 = 1; /*0x1008a4cca*/
        v98 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v46, 1); /*0x1008a4cd7*/
        if ( !v98 ) /*0x1008a4cdf*/
LABEL_150:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v97, v46); /*0x1008a4ca2*/
        v99 = v98; /*0x1008a4ce1*/
      }
      v169 = (void *)v99; /*0x1008a4d3a*/
      memcpy((void *)v99, v163, v46); /*0x1008a4d45*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v145, &v157); /*0x1008a4d58*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, &v141); /*0x1008a4d6b*/
      if ( (v162 & 0x8000000000000000LL) != 0LL ) /*0x1008a4d75*/
      {
        v102 = 0; /*0x1008a4d77*/
        goto LABEL_161; /*0x1008a4d77*/
      }
      if ( v162 ) /*0x1008a4d88*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, &v141, v101); /*0x1008a4d8a*/
        v102 = 1; /*0x1008a4d8f*/
        v103 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v162, 1); /*0x1008a4d9e*/
        if ( !v103 ) /*0x1008a4da6*/
LABEL_161:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v102, v162); /*0x1008a4d7a*/
        v104 = v103; /*0x1008a4da8*/
      }
      else
      {
        v104 = 1; /*0x1008a4dad*/
      }
      v105 = v162; /*0x1008a4dbc*/
      memcpy((void *)v104, v140, v162); /*0x1008a4dc3*/
      __src[12] = v132; /*0x1008a4dd6*/
      __src[13] = v133; /*0x1008a4ddd*/
      __src[14] = v134; /*0x1008a4deb*/
      __src[15] = v135; /*0x1008a4e00*/
      __src[16] = v136; /*0x1008a4e07*/
      __src[17] = v137; /*0x1008a4e15*/
      __src[18] = v138; /*0x1008a4e23*/
      __src[0] = v46; /*0x1008a4e2a*/
      __src[1] = v169; /*0x1008a4e35*/
      __src[2] = v46; /*0x1008a4e3c*/
      __src[5] = v147; /*0x1008a4e4a*/
      __src[4] = v146; /*0x1008a4e5f*/
      __src[3] = v145; /*0x1008a4e66*/
      __src[6] = __dst[0]; /*0x1008a4e7b*/
      __src[7] = __dst[1]; /*0x1008a4e82*/
      __src[8] = __dst[2]; /*0x1008a4e90*/
      __src[9] = v105; /*0x1008a4e97*/
      __src[10] = v104; /*0x1008a4e9e*/
      __src[11] = v105; /*0x1008a4ea5*/
      __src[19] = v152; /*0x1008a4eb3*/
      if ( __s1 == (void *)0x8000000000000000LL ) /*0x1008a4ecb*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..tools..PendingCall$GT$::hc68bf139b01b8fe2(__src); /*0x1008a4ed4*/
        v106 = 160 * v88 + v168; /*0x1008a4ee5*/
      }
      else
      {
        v145 = (unsigned __int16 **)__s1; /*0x1008a4eed*/
        v146 = v168; /*0x1008a4ef8*/
        v147 = (size_t)v85; /*0x1008a4eff*/
        v148 = v88; /*0x1008a4f06*/
        v149 = v166; /*0x1008a4f11*/
        v150 = 0; /*0x1008a4f18*/
        v151 = v164; /*0x1008a4f27*/
        memcpy(__dst, __src, 0xA0u); /*0x1008a4f44*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h0813873b25140a7f( /*0x1008a4f5a*/
          &v128,
          &v145,
          __dst,
          *(double *)a7.i64);
        v106 = (size_t)&v128[20 * v130]; /*0x1008a4f6e*/
      }
      v107 = v142; /*0x1008a4f8a*/
      v125 = *(_QWORD *)(v106 + 152); /*0x1008a4fcf*/
      __s1 = *(void **)v158; /*0x1008a4ff3*/
      v168 = *(_QWORD *)v159; /*0x1008a4ffa*/
      codexmate_lib::core::analytics::parser::tools::tool_fact::hd4f5ab2826a4f3a1( /*0x1008a5006*/
        (int)v163,
        v46,
        v158[0],
        v159[0],
        v160[0],
        v161[0],
        v125,
        v142,
        v143,
        v140,
        v162,
        "called",
        6,
        2,
        10,
        v153);
      if ( v141 ) /*0x1008a5015*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v141, 1); /*0x1008a501f*/
        __s1 = *(void **)v158; /*0x1008a502b*/
        v168 = *(_QWORD *)v159; /*0x1008a5036*/
      }
      v45 = 0; /*0x1008a503a*/
LABEL_212:
      *(double *)a7.i64 = codexmate_lib::core::analytics::parser::activity::h5533b66eb59dc9f2( /*0x1008a52f4*/
                            (__int64)v163,
                            v46,
                            (__int64)__s1,
                            v168,
                            v152,
                            (_QWORD *)v153);
      if ( v45 && v154 ) /*0x1008a5325*/
        *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v154, 1); /*0x1008a5333*/
      if ( v139 ) /*0x1008a5342*/
        *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v160, v139, 1); /*0x1008a5351*/
      goto LABEL_39; /*0x1008a5356*/
    }
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hf978e924c77e5a4e( /*0x1008a446d*/
      __src,
      v170 + 53,
      &v154,
      *(double *)a7.i64);
    if ( __src[0] == 0x8000000000000000LL ) /*0x1008a4483*/
    {
      v23 = v170[32]; /*0x1008a448d*/
      if ( v23 ) /*0x1008a4497*/
      {
        v24 = v170[31]; /*0x1008a44a1*/
        v25 = v170[29]; /*0x1008a44a8*/
        v26 = v170[30]; /*0x1008a44af*/
        v27 = v25; /*0x1008a44bb*/
        if ( v24 < v25 ) /*0x1008a44be*/
          v27 = 0; /*0x1008a44be*/
        v28 = v25 - (v24 - v27); /*0x1008a44cb*/
        v29 = v24 - v27 + v23; /*0x1008a44ce*/
        if ( v28 < v23 ) /*0x1008a44d5*/
          v29 = v170[29]; /*0x1008a44d5*/
        v164 = v170[32]; /*0x1008a44d9*/
        v166 = (unsigned __int16 **)(v25 - (v24 - v27)); /*0x1008a44dd*/
        v30 = v23 < v28; /*0x1008a44e1*/
        v31 = v23 - v28; /*0x1008a44e1*/
        if ( v30 ) /*0x1008a44e4*/
          v31 = 0; /*0x1008a44e4*/
        *(_QWORD *)v161 = v31; /*0x1008a44e8*/
        v32 = v29 - (v24 - v27); /*0x1008a44ec*/
        if ( v32 ) /*0x1008a44ef*/
        {
          v55 = 24 * v32; /*0x1008a47c5*/
          v169 = __s2; /*0x1008a47d0*/
          v56 = __n; /*0x1008a47d4*/
          v57 = 24 * v24 - 24 * v27 + v26 + 16; /*0x1008a47ee*/
          v58 = 0; /*0x1008a47f3*/
          while ( *(_QWORD *)(v57 + v58) != v56 || memcmp(*(const void **)(v57 + v58 - 8), v169, v56) ) /*0x1008a4826*/
          {
            v58 += 24; /*0x1008a4800*/
            if ( v55 == v58 ) /*0x1008a4807*/
              goto LABEL_55; /*0x1008a4807*/
          }
          goto LABEL_89; /*0x1008a4826*/
        }
LABEL_55:
        if ( (unsigned __int64)v166 < v164 ) /*0x1008a44fd*/
        {
          v33 = 24LL * *(_QWORD *)v161; /*0x1008a450b*/
          v34 = __s2; /*0x1008a450f*/
          v35 = __n; /*0x1008a4516*/
          v36 = 0; /*0x1008a451d*/
          while ( *(_QWORD *)(v26 + v36 + 16) != v35 || memcmp(*(const void **)(v26 + v36 + 8), v34, v35) ) /*0x1008a4556*/
          {
            v36 += 24; /*0x1008a4530*/
            if ( v33 == v36 ) /*0x1008a4537*/
              goto LABEL_69; /*0x1008a4537*/
          }
LABEL_89:
          v45 = 1; /*0x1008a4828*/
LABEL_211:
          v46 = v165; /*0x1008a52f0*/
          goto LABEL_212; /*0x1008a52f0*/
        }
      }
LABEL_69:
      v44 = v170; /*0x1008a469d*/
      *((_BYTE *)v170 + 505) = 1; /*0x1008a46a1*/
      v45 = 1; /*0x1008a46af*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v44 + 50, 7); /*0x1008a46b7*/
      v46 = v165; /*0x1008a46bc*/
      goto LABEL_212; /*0x1008a46c0*/
    }
    memcpy(__dst, __src, 0xA0u); /*0x1008a45bb*/
    v147 = __n; /*0x1008a45c7*/
    v146 = (size_t)__s2; /*0x1008a45dc*/
    v145 = (unsigned __int16 **)v154; /*0x1008a45e3*/
    codexmate_lib::core::analytics::parser::tools::remember_completion::hcd4c85c9e51e1361(v170, &v145); /*0x1008a45f5*/
    v40 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a460a*/
            "output/metadata/exit_codeisError",
            6,
            v169);
    v41 = (void **)v40; /*0x1008a460f*/
    if ( !v40 ) /*0x1008a4615*/
    {
      v54 = 2; /*0x1008a47b9*/
LABEL_197:
      v114 = (const char *)&unk_10178B9CF; /*0x1008a5199*/
      if ( (v54 & 1) != 0 ) /*0x1008a51ab*/
        v114 = "completed"; /*0x1008a51ab*/
      v115 = 7; /*0x1008a51bc*/
      if ( v54 != 2 ) /*0x1008a51c1*/
        v115 = 3LL * v54 + 6; /*0x1008a51c1*/
      v116 = (char *)&unk_10178B9C8; /*0x1008a51c5*/
      if ( v54 != 2 ) /*0x1008a51cc*/
        v116 = (char *)v114; /*0x1008a51cc*/
      v117 = __dst[4]; /*0x1008a51d0*/
      v118 = __dst[5]; /*0x1008a51d7*/
      v119 = (_QWORD *)__dst[7]; /*0x1008a51e5*/
      v120 = __dst[8]; /*0x1008a51ec*/
      codexmate_lib::core::analytics::parser::tools::tool_fact::hd4f5ab2826a4f3a1( /*0x1008a5251*/
        (int)v163,
        v165,
        __dst[4],
        __dst[5],
        v160[0],
        v161[0],
        __dst[19],
        (void *)__dst[7],
        __dst[8],
        (void *)__dst[10],
        __dst[11],
        v116,
        v115,
        v54,
        50,
        v153);
      if ( v120 == 11 && !(*v119 ^ 0x61705F796C707061LL | *(_QWORD *)((char *)v119 + 3) ^ 0x68637461705F796CLL) ) /*0x1008a527d*/
      {
        v121 = 0; /*0x1008a5282*/
        if ( (v54 & 1) != 0 ) /*0x1008a5288*/
          v121 = __dst[14]; /*0x1008a5288*/
        v122 = 8; /*0x1008a5290*/
        if ( (v54 & 1) != 0 ) /*0x1008a5295*/
          v122 = __dst[13]; /*0x1008a5295*/
        codexmate_lib::core::analytics::parser::tools::change_facts::ha218b024c7f82f59( /*0x1008a52dc*/
          v163,
          v165,
          v117,
          v118,
          *(__int64 *)v160,
          *(__int64 *)v161,
          v152,
          v122,
          v121,
          50,
          (_QWORD *)v153);
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..tools..PendingCall$GT$::hc68bf139b01b8fe2( /*0x1008a52e8*/
        __src,
        *(double *)a7.i64);
      v45 = 0; /*0x1008a52ed*/
      goto LABEL_211; /*0x1008a52ed*/
    }
    if ( *(_BYTE *)v40 == 3 ) /*0x1008a461f*/
    {
      v42 = *(_QWORD *)(v40 + 24); /*0x1008a4629*/
      v145 = *(unsigned __int16 ***)(v40 + 16); /*0x1008a462d*/
      v146 = v42; /*0x1008a4634*/
      v147 = 0; /*0x1008a463b*/
      v148 = 0; /*0x1008a4646*/
      v149 = v145; /*0x1008a4651*/
      v150 = v42; /*0x1008a4658*/
      serde_json::de::from_trait::hb66530a7a5e497bc(&v128, &v145); /*0x1008a4670*/
      if ( (_BYTE)v128 == 6 ) /*0x1008a467c*/
      {
        LOBYTE(v145) = 6; /*0x1008a4682*/
        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc62c3b2945dfda16(&v129); /*0x1008a4690*/
        v43 = 1; /*0x1008a4695*/
      }
      else
      {
        v148 = v131; /*0x1008a5049*/
        v147 = v130; /*0x1008a5057*/
        v146 = v129; /*0x1008a506c*/
        v145 = v128; /*0x1008a5073*/
        v43 = (_BYTE)v128 == 6; /*0x1008a507c*/
        v41 = (void **)&v145; /*0x1008a5080*/
      }
    }
    else
    {
      LOBYTE(v145) = 6; /*0x1008a4830*/
      v43 = 1; /*0x1008a4837*/
    }
    v108 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a5093*/
                      "successexit_codestarted_at_msunified_diffcontentoutput/metadata/exit_codeisError",
                      7,
                      v41);
    if ( v108 && *v108 == 1 ) /*0x1008a50a0*/
    {
      v54 = v108[1]; /*0x1008a50a2*/
      goto LABEL_195; /*0x1008a50a7*/
    }
    v109 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a50bb*/
                      "is_errorcompletesubagentcodex.dbaionsaleHTTPPortcommand=-extract/.volta//AiMaMi \b",
                      8,
                      v41);
    if ( (v109 /*0x1008a50e1*/
       || (v109 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                             "isError",
                             7,
                             v41)) != nullptr)
      && *v109 == 1 )
    {
      v54 = v109[1] ^ 1; /*0x1008a50e8*/
      goto LABEL_195; /*0x1008a50ec*/
    }
    v110 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a5100*/
             "exit_codestarted_at_msunified_diffcontentoutput/metadata/exit_codeisError",
             9,
             v41);
    if ( v110 && *(_BYTE *)v110 == 2 ) /*0x1008a510d*/
    {
      v111 = *(_QWORD *)(v110 + 8); /*0x1008a510f*/
      if ( v111 ) /*0x1008a5116*/
      {
        if ( (_DWORD)v111 == 1 ) /*0x1008a511b*/
        {
LABEL_192:
          v112 = *(_QWORD *)(v110 + 16); /*0x1008a5172*/
          goto LABEL_194; /*0x1008a5176*/
        }
      }
      else
      {
        v112 = *(_QWORD *)(v110 + 16); /*0x1008a5139*/
        if ( v112 >= 0 ) /*0x1008a5140*/
        {
LABEL_194:
          v54 = v112 == 0; /*0x1008a5181*/
          goto LABEL_195; /*0x1008a5184*/
        }
      }
    }
    v110 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v41, "/metadata/exit_codeisError", 19); /*0x1008a5151*/
    v54 = 2; /*0x1008a5156*/
    if ( !v110 || *(_BYTE *)v110 != 2 || (v113 = *(_QWORD *)(v110 + 8), v113 == 2) ) /*0x1008a516b*/
    {
LABEL_195:
      if ( !v43 ) /*0x1008a518b*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v145); /*0x1008a5194*/
      goto LABEL_197; /*0x1008a5194*/
    }
    if ( (_DWORD)v113 != 1 ) /*0x1008a5170*/
    {
      v112 = *(_QWORD *)(v110 + 16); /*0x1008a5178*/
      if ( v112 < 0 ) /*0x1008a517f*/
        goto LABEL_195; /*0x1008a517f*/
      goto LABEL_194; /*0x1008a517f*/
    }
    goto LABEL_192; /*0x1008a5170*/
  }
  if ( v7 != 15 ) /*0x1008a432e*/
    goto LABEL_38; /*0x1008a432e*/
  if ( *(_QWORD *)v12 ^ 0x726165735F626577LL | *(_QWORD *)(v12 + 7) ^ 0x6C6C61635F686372LL ) /*0x1008a434b*/
    goto LABEL_38; /*0x1008a434b*/
  v47 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a46d5*/
                   &unk_10178B9C1,
                   7,
                   v169);
  if ( v47 ) /*0x1008a46dd*/
  {
    if ( *v47 ) /*0x1008a46df*/
      goto LABEL_38; /*0x1008a46df*/
  }
  v48 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a46f8*/
                   &anon_0868f19ff3e9f3569e732f60bdb020cc_26,
                   2,
                   v169);
  if ( v48 ) /*0x1008a4700*/
  {
    if ( *v48 ) /*0x1008a4702*/
      goto LABEL_38; /*0x1008a4705*/
  }
  v49 = *(void **)v158; /*0x1008a470b*/
  codexmate_lib::core::analytics::parser::tools::web_search_evidence::h8639673e27ccb0d0( /*0x1008a4727*/
    v170,
    (__int64)v163,
    a4,
    *(size_t *)v158,
    v168,
    0,
    v124);
  v17 = v49; /*0x1008a472c*/
LABEL_20:
  *(double *)a7.i64 = codexmate_lib::core::analytics::parser::activity::h5533b66eb59dc9f2( /*0x1008a418c*/
                        (__int64)v163,
                        a4,
                        (__int64)v17,
                        v168,
                        v152,
                        a6);
LABEL_39:
  if ( v157 ) /*0x1008a437a*/
    *(double *)a7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v158, v157, 1); /*0x1008a4388*/
  return *(double *)a7.i64; /*0x1008a438d*/
}