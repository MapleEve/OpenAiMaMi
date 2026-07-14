// parse_aimami_deeplink_core_sys @ 0x140025220 (renamed this session from sub_140025220)
// AiMaMi 1.1.8 win64.exe, session <审计会话>
// Role: REAL business logic for the "aimami://" deeplink parser. Command-specific (xrefs_to confirmed
// 3 call sites, all from parse_aimami_deeplink_owner_sys @ 0x1403d6000 — single caller, not shared).
//
// DELTA FINDING vs AiMaMi 1.1.1 baseline (raw/aimami/1.1.1/windows-x64/parse_aimami_deeplink/interface.md,
// core fn there = parse_aimami_deeplink_core_sys @ 0x1401C7B90):
//   - VA churned (0x1401C7B90 -> 0x140025220) — expected, whole binary relinked.
//   - Validation rule set is IDENTICAL: scheme=="aimami" (6B, DWORD 0x616D6961 + WORD 0x696D at
//     line 157 here vs 1.1.1's 0x1401c7cda DWORD1(v65)==6 check), path requires "/import" (2 segments,
//     len 7, "v1"+"p/im"+"port" pattern, line 183 here vs 1.1.1's 0x1401c7fb5), resource=="provider"
//     (8B literal, aResource key, line 203/225 here vs 1.1.1's 0x1401c8067), app=="codex" (5B literal,
//     aApp key, line 227/241 here vs 1.1.1's 0x1401c8161), name/endpoint/apiKey required query params
//     (aName_0/aEndpoint/aApikey keys, lines 247/264/279 here vs 1.1.1's deeplink_query_param_extract_sys
//     calls), apiKey must start with "http://" or "https://" (byte-identical check at line 293-295:
//     DWORD 0x70747468=="http" + DWORD 0x2F2F3A70=="p://" OR exact QWORD 0x2F2F3A7370747468=="https://",
//     matches 1.1.1's 0x1401c8352 apiKey URL validation table verbatim), model optional param (aModel_0
//     key, 5B, line 310, defaults via sub_140024F30 when absent — matches 1.1.1's
//     deeplink_model_default_none_sys), trailing '/' trimmed off apiKey via sub_1402A1D60(ptr,len,47)
//     at line 348 (47=0x2F='/', matches 1.1.1's str_trim_end_matches_char_sys @ 0x14070B500).
//   - Success response shape byte-identical: tag=2 @ a1+0, "ok" (2B, 0x6B6F LE) @ a1+8/+16,
//     "success" (7B) @ a1+32/+40, int field @ a1+192 = 1, bool field @ a1+196 = 1(true) — matches
//     1.1.1's documented {status:"ok", result:"success"} + int/bool trailer exactly.
//   - Error path still routes through a Display::fmt trampoline (sub_1410958B0 here, mirrors 1.1.1's
//     sub_14124BFE0 panic-on-fmt-failure guard) with the same literal
//     "a Display implementation returned an error unexpectedly" (55B) on Display::fmt failure.
//   - OPEN /  NOT reproduced this round: the 1.1.1 baseline documented a SEPARATE
//     relay_provider_hashmap_insert_sys (@ 0x140730900, TLS[TlsIndex]+584 HashMap, SSE2 Robin-Hood
//     insert) as this command's persistence-adjacent side effect. The complete 46-ref callee
//     enumeration of THIS function (sub_140025220 / parse_aimami_deeplink_core_sys) in 1.1.8 does not
//     contain any SIMD/Robin-Hood-hashmap-shaped callee — only generic alloc/copy/trim/query-extract
//     helpers. Not asserting removal: either (a) genuinely moved out of this function this version, or
//     (b) the owner or a downstream caller performs the insert outside this traced call tree. Recorded
//     as Unknown in evidence.md, not accepted_unknown (no decompile ceiling was hit — full 17KB body
//     decompiled cleanly, no truncation, no basic_blocks chunking needed).
//
// Query-param keys (byte-confirmed via refs, all live "string" hits, not string-pool guesses):
//   aResource="resource"(8B)@0x141313e09, aApp="app"(3B)@0x141313e11, aName_0="name"(4B)@0x1413115be,
//   aEndpoint="endpoint"(8B)@0x1413129e6, aApikey="apiKey"(6B)@0x141311689, aModel_0="model"(5B)@0x1413119c8

__int64 __fastcall parse_aimami_deeplink_core_sys(__int64 a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r14
  char v12; // al
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rbx
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rbx
  const __m128i *v26; // r15
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int64 v37; // [rsp+20h] [rbp-60h]
  __int64 v38; // [rsp+28h] [rbp-58h] BYREF
  __int64 v39; // [rsp+30h] [rbp-50h]
  __int64 v40; // [rsp+38h] [rbp-48h]
  __int64 v41; // [rsp+48h] [rbp-38h]
  _QWORD v42[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v43[3]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v44[3]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v45[3]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v46; // [rsp+B0h] [rbp+30h]
  __int64 v47; // [rsp+C0h] [rbp+40h]
  __int128 v48; // [rsp+D0h] [rbp+50h]
  __int64 v49; // [rsp+E0h] [rbp+60h]
  __int128 v50; // [rsp+E8h] [rbp+68h]
  __int128 v51; // [rsp+F8h] [rbp+78h]
  __int128 v52; // [rsp+108h] [rbp+88h]
  __int128 v53; // [rsp+118h] [rbp+98h]
  __m256i v54; // [rsp+128h] [rbp+A8h]
  __int128 v55; // [rsp+148h] [rbp+C8h]
  __int64 v56; // [rsp+158h] [rbp+D8h]
  _QWORD v57[2]; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v58[2]; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v59; // [rsp+180h] [rbp+100h] BYREF
  __int128 v60; // [rsp+190h] [rbp+110h]
  __int64 v61; // [rsp+1A0h] [rbp+120h]
  __int128 v62; // [rsp+1A8h] [rbp+128h]
  __int128 v63; // [rsp+1B8h] [rbp+138h]
  __int128 v64; // [rsp+1C8h] [rbp+148h]
  _BYTE v65[24]; // [rsp+1D8h] [rbp+158h] BYREF
  _BYTE v66[24]; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v67; // [rsp+208h] [rbp+188h]
  __int128 v68; // [rsp+218h] [rbp+198h]
  __int128 v69; // [rsp+228h] [rbp+1A8h]
  __int128 v70; // [rsp+238h] [rbp+1B8h]
  _QWORD v71[6]; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v72; // [rsp+278h] [rbp+1F8h]
  __int128 v73; // [rsp+280h] [rbp+200h] BYREF
  __int64 v74; // [rsp+290h] [rbp+210h]
  __int64 *v75; // [rsp+2A0h] [rbp+220h]
  __int64 v76; // [rsp+2A8h] [rbp+228h]
  __int128 v77; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v78; // [rsp+2C0h] [rbp+240h]
  __int64 v79; // [rsp+2D0h] [rbp+250h]
  __int64 v80; // [rsp+2D8h] [rbp+258h] BYREF
  __int128 v81; // [rsp+2E0h] [rbp+260h]
  _BYTE v82[40]; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v83; // [rsp+318h] [rbp+298h]
  __int128 v84; // [rsp+328h] [rbp+2A8h]
  __int128 v85; // [rsp+338h] [rbp+2B8h]
  __int64 v86; // [rsp+348h] [rbp+2C8h]
  __int64 v87; // [rsp+350h] [rbp+2D0h]
  __int64 v88; // [rsp+358h] [rbp+2D8h]
  char v89; // [rsp+367h] [rbp+2E7h] BYREF
  _WORD *v90; // [rsp+368h] [rbp+2E8h]
  __int64 v91; // [rsp+370h] [rbp+2F0h]
  char v92; // [rsp+37Ch] [rbp+2FCh]
  char v93; // [rsp+37Dh] [rbp+2FDh]
  char v94; // [rsp+37Eh] [rbp+2FEh]
  char v95; // [rsp+37Fh] [rbp+2FFh]
  __int64 v96; // [rsp+380h] [rbp+300h]

  v96 = -2; /*0x14002523b*/
  v3 = a2[1]; /*0x140025249*/
  v75 = a2; /*0x14002524d*/
  v4 = a2[2]; /*0x140025254*/
  v41 = 0; /*0x140025258*/
  v38 = 0; /*0x140025260*/
  v40 = 0; /*0x140025268*/
  v72 = v3; /*0x14002527b*/
  sub_14103B190(v82, &v38, v3, v4); /*0x140025282*/  // str::from_utf8 / URL-slice validate on "url" bytes
  if ( __OFSUB__(-*(_QWORD *)v82, 1) ) /*0x140025292*/
  {
    // v82 Result==Err -> format+return "URL parse failed"-shaped error via Display trampoline
    LOBYTE(v73) = v82[8]; /*0x14002529e*/
    v71[0] = &v73; /*0x1400252ab*/
    v71[1] = sub_1410489C0; /*0x1400252b9*/
    sub_14108F360(&v66[8], &unk_141313EC2, v71); /*0x1400252d5*/
    v5 = *(_QWORD *)&v66[8]; /*0x1400252db*/
    v6 = *(_QWORD *)&v66[16]; /*0x1400252e2*/
    v7 = v67; /*0x1400252e9*/
    v8 = 0; /*0x1400252f0*/
LABEL_18:
    v9 = v8; /*0x14002544c*/
    v10 = v6; /*0x14002544f*/
    v11 = v7; /*0x140025452*/
    goto LABEL_19; /*0x140025452*/
  }
  v62 = v83; /*0x140025313*/
  v63 = v84; /*0x140025321*/
  v64 = v85; /*0x14002532f*/
  v60 = *(_OWORD *)&v82[16]; /*0x140025344*/
  v61 = *(_QWORD *)&v82[32]; /*0x14002534b*/
  v90 = *(_WORD **)v82; /*0x140025352*/
  v59 = *(_OWORD *)v82; /*0x140025359*/
  if ( !DWORD1(v83) ) /*0x14002536a*/
  {
LABEL_14:
    *(_QWORD *)v66 = *(_QWORD *)&v82[8]; /*0x1400253de*/
    *(_QWORD *)&v66[8] = DWORD1(v83); /*0x1400253e5*/
    *(_QWORD *)v82 = v66; /*0x1400253f3*/
    *(_QWORD *)&v82[8] = sub_1405906F0; /*0x140025401*/
    sub_14108F360(v45, &unk_141313E9E, v82); /*0x14002541a*/  // "scheme must be aimami" style error
    v5 = v45[0]; /*0x140025420*/
    v6 = v45[1]; /*0x140025424*/
    v7 = v45[2]; /*0x140025428*/
LABEL_15:
    v8 = 0; /*0x14002542c*/
LABEL_16:
    if ( v90 ) /*0x140025438*/
      sub_140001370(*((_QWORD *)&v59 + 1), v90, 1); /*0x140025447*/
    goto LABEL_18; /*0x140025447*/
  }
  if ( *(_QWORD *)&v82[16] <= (unsigned __int64)DWORD1(v83) ) /*0x14002536f*/
  {
    if ( *(_QWORD *)&v82[16] != DWORD1(v83) ) /*0x140025392*/
LABEL_6:
      sub_1412AD680(*(_DWORD *)&v82[8], *(_DWORD *)&v82[16], 0, DWORD1(v83), (__int64)&off_141316268); /*0x140025378*/  // bounds-check panic (slice index)
  }
  else if ( *(char *)(*(_QWORD *)&v82[8] + DWORD1(v83)) <= -65 ) /*0x140025376*/
  {
    goto LABEL_6; /*0x140025376*/
  }
  // scheme check: 6 bytes == "aimami" (DWORD 0x616D6961 "aimA"? LE-reversed=="aima" + WORD 0x696D=="mi")
  if ( DWORD1(v83) != 6 || **(_DWORD **)&v82[8] ^ 0x616D6961 | *(unsigned __int16 *)(*(_QWORD *)&v82[8] + 4LL) ^ 0x696D ) /*0x1400253ad*/
  {
    if ( *(_QWORD *)&v82[16] <= (unsigned __int64)DWORD1(v83) ) /*0x1400253b9*/
    {
      if ( *(_QWORD *)&v82[16] != DWORD1(v83) ) /*0x1400253dc*/
LABEL_12:
        sub_1412AD680(*(_DWORD *)&v82[8], *(_DWORD *)&v82[16], 0, DWORD1(v83), (__int64)&off_141316268); /*0x1400253c2*/
    }
    else if ( *(char *)(*(_QWORD *)&v82[8] + DWORD1(v83)) <= -65 ) /*0x1400253c0*/
    {
      goto LABEL_12; /*0x1400253c0*/
    }
    goto LABEL_14; /*0x1400253c0*/  // scheme != "aimami" -> error
  }
  v15 = sub_14103EAE0(&v59, *(_QWORD *)&v82[16]); /*0x1400255cf*/  // skip scheme prefix, get path+query slice
  v17 = v16; /*0x1400255d5*/
  v18 = 1; /*0x1400255db*/
  if ( v15 ) /*0x1400255e0*/
    v18 = v15; /*0x1400255e0*/
  else
    v17 = 0; /*0x1400255e4*/
  v58[0] = v18; /*0x1400255e8*/
  v58[1] = v17; /*0x1400255ef*/
  v19 = (_DWORD *)sub_14103E880(&v59); /*0x1400255fd*/  // path-segment iterator step
  v57[0] = v19; /*0x140025603*/
  v57[1] = v20; /*0x14002560a*/
  // path check: exactly 2 segments, len(seg1)==7, seg bytes == "v1" + "/import" pattern
  if ( v17 != 2 || v20 != 7 || *(_WORD *)v18 != 12662 || *v19 ^ 0x706D692F | *(_DWORD *)((char *)v19 + 3) ^ 0x74726F70 ) /*0x140025639*/
  {
    *(_QWORD *)v82 = v58; /*0x140025644*/
    *(_QWORD *)&v82[8] = sub_1405906F0; /*0x140025652*/
    *(_QWORD *)&v82[16] = v57; /*0x140025660*/
    *(_QWORD *)&v82[24] = sub_1405906F0; /*0x140025667*/
    sub_14108F360(v44, &unk_141313E77, v82); /*0x14002567f*/  // "path must be /import" style error
    v5 = v44[0]; /*0x140025685*/
    v6 = v44[1]; /*0x140025689*/
    v7 = v44[2]; /*0x14002568d*/
    goto LABEL_15; /*0x140025691*/
  }
  v21 = sub_14103E940(&v59); /*0x14002569d*/  // extract query-string slice
  v23 = v22; /*0x1400256a3*/
  v24 = 1; /*0x1400256a9*/
  if ( v21 ) /*0x1400256ae*/
    v24 = v21; /*0x1400256ae*/
  else
    v23 = 0; /*0x1400256b2*/
  sub_1405BB790(v71, v24, v23); /*0x1400256bd*/  // parse query string into key/value pairs
  sub_14022B000(v82, v71, aResource, 8); /*0x1400256de*/  // extract "resource" param
  if ( __OFSUB__(0, *(_QWORD *)v82) ) /*0x1400256e6*/
  {
    *(_QWORD *)&v77 = 0; /*0x1400256ef*/
    *((_QWORD *)&v77 + 1) = 1; /*0x1400256fa*/
    v78 = 0; /*0x140025705*/
LABEL_42:
    *(_QWORD *)v82 = &v77; /*0x14002574a*/
    *(_QWORD *)&v82[8] = sub_1400017A0; /*0x14002575f*/
    sub_14108F360(v43, &unk_141313E4F, v82); /*0x140025778*/  // "resource param required/invalid" error
    v5 = v43[0]; /*0x14002577e*/
    v6 = v43[1]; /*0x140025782*/
    v7 = v43[2]; /*0x140025786*/
    v8 = 0; /*0x14002578a*/
LABEL_43:
    if ( (_QWORD)v77 ) /*0x140025796*/
      sub_140001370(*((_QWORD *)&v77 + 1), v77, 1); /*0x1400257a5*/
    sub_140874CE0(v71); /*0x1400257b2*/  // drop query-param map
    goto LABEL_16; /*0x1400257b8*/
  }
  v77 = *(_OWORD *)v82; /*0x140025719*/
  v78 = *(_QWORD *)&v82[16]; /*0x140025727*/
  // resource == "provider" (8B literal 0x72656469766F7270 LE == "provider")
  if ( *(_QWORD *)&v82[16] != 8 || **((_QWORD **)&v77 + 1) != 0x72656469766F7270LL ) /*0x140025748*/
    goto LABEL_42; /*0x140025748*/
  sub_14022B000(v82, v71, aApp, 3); /*0x1400257d8*/  // extract "app" param
  v5 = *(_QWORD *)v82; /*0x1400257de*/
  if ( __OFSUB__(-*(_QWORD *)v82, 1) ) /*0x1400257e8*/
  {
    v6 = 1; /*0x1400257ed*/
    v7 = 0; /*0x1400257f3*/
    v5 = 0; /*0x1400257f6*/
    v8 = 1; /*0x1400257f9*/
    goto LABEL_43; /*0x1400257fe*/
  }
  v6 = *(_QWORD *)&v82[8]; /*0x140025831*/
  v7 = *(_QWORD *)&v82[16]; /*0x140025838*/
  v8 = 1; /*0x14002583f*/
  // app == "codex" (DWORD 0x65646F63=="code" + BYTE 0x78=='x')
  if ( *(_QWORD *)&v82[16] != 5
    || **(_DWORD **)&v82[8] ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)&v82[8] + 4LL) ^ 0x78 ) /*0x14002585e*/
  {
    goto LABEL_43; /*0x140025860*/
  }
  v76 = *(_QWORD *)&v82[8]; /*0x140025866*/
  v86 = *(_QWORD *)v82; /*0x14002586d*/
  sub_140024F90(v82, v71, aName_0, 4); /*0x14002588f*/  // extract required "name" param
  v91 = *(_QWORD *)&v82[8]; /*0x1400258a3*/
  v8 = *(_QWORD *)v82; /*0x1400258a3*/
  v5 = *(_QWORD *)&v82[24]; /*0x1400258b8*/
  v87 = *(_QWORD *)&v82[16]; /*0x1400258b8*/
  if ( *(_QWORD *)v82 != 2 ) /*0x1400258c3*/  // Option::None (name missing) -> error
  {
    v7 = *(_QWORD *)&v82[24]; /*0x140025a3d*/
    v6 = v87; /*0x140025a40*/
    v25 = v91; /*0x140025a47*/
LABEL_67:
    if ( v86 ) /*0x140025aa7*/
      sub_140001370(v76, v86, 1); /*0x140025abd*/
    v5 = v25; /*0x140025ac2*/
    goto LABEL_43; /*0x140025ac5*/
  }
  v93 = 1; /*0x1400258c9*/
  sub_140024F90(v82, v71, aEndpoint, 8); /*0x1400258eb*/  // extract required "endpoint" param
  v25 = *(_QWORD *)&v82[8]; /*0x1400258f8*/
  v8 = *(_QWORD *)v82; /*0x1400258f8*/
  v7 = *(_QWORD *)&v82[24]; /*0x140025906*/
  v6 = *(_QWORD *)&v82[16]; /*0x140025906*/
  if ( *(_QWORD *)v82 != 2 ) /*0x140025911*/  // endpoint missing -> error
  {
LABEL_65:
    if ( v91 ) /*0x140025a84*/
      sub_140001370(v87, v91, 1); /*0x140025a9a*/
    goto LABEL_67; /*0x140025a9a*/
  }
  v80 = *(_QWORD *)&v82[8]; /*0x140025917*/
  v81 = *(_OWORD *)&v82[16]; /*0x14002591e*/
  v92 = 1; /*0x14002592c*/
  sub_140024F90(v82, v71, aApikey, 6); /*0x14002594e*/  // extract required "apiKey" param
  v88 = *(_QWORD *)&v82[8]; /*0x140025962*/
  v8 = *(_QWORD *)v82; /*0x140025962*/
  v7 = *(_QWORD *)&v82[24]; /*0x140025977*/
  v79 = *(_QWORD *)&v82[16]; /*0x140025977*/
  if ( *(_QWORD *)v82 != 2 ) /*0x140025982*/  // apiKey missing -> error
  {
    v6 = v79; /*0x140025a50*/
    v25 = v88; /*0x140025a57*/
LABEL_63:
    if ( v80 ) /*0x140025a68*/
      sub_140001370(v81, v80, 1); /*0x140025a77*/
    goto LABEL_65; /*0x140025a77*/
  }
  // apiKey URL validation: len>=7 AND (starts "http://" (DWORD"http"+DWORD"p://") OR is exactly
  // "https://" (QWORD 0x2F2F3A7370747468))
  if ( *((_QWORD *)&v81 + 1) < 7u
    || *(_DWORD *)v81 ^ 0x70747468 | *(_DWORD *)(v81 + 3) ^ 0x2F2F3A70
    && (*((_QWORD *)&v81 + 1) == 7 || *(_QWORD *)v81 != 0x2F2F3A7370747468LL) ) /*0x1400259c9*/
  {
    *(_QWORD *)v82 = &v80; /*0x1400259d6*/
    *(_QWORD *)&v82[8] = sub_140001000; /*0x1400259e4*/
    v95 = 1; /*0x1400259eb*/
    sub_14108F360(v42, &unk_141313E14, v82); /*0x140025a04*/  // "apiKey must be http(s) URL" error
    v25 = v42[0]; /*0x140025a0a*/
    v6 = v42[1]; /*0x140025a0e*/
    v7 = v42[2]; /*0x140025a12*/
    if ( v88 ) /*0x140025a1e*/
      sub_140001370(v79, v88, 1); /*0x140025a34*/
    v8 = 0; /*0x140025a39*/
    goto LABEL_63; /*0x140025a3b*/
  }
  v95 = 1; /*0x140025aca*/
  sub_14022B000(v82, v71, aModel_0, 5); /*0x140025aec*/  // extract OPTIONAL "model" param
  if ( __OFSUB__(-*(_QWORD *)v82, 1) ) /*0x140025afc*/
    goto LABEL_71; /*0x140025aff*/
  if ( !*(_QWORD *)&v82[16] ) /*0x140025b1f*/
  {
    if ( *(_QWORD *)v82 ) /*0x140025f02*/
      sub_140001370(*(_QWORD *)&v82[8], *(_QWORD *)v82, 1); /*0x140025f15*/
LABEL_71:
    v95 = 1; /*0x140025b01*/
    sub_140024F30(v65); /*0x140025b0f*/  // model absent -> default (matches 1.1.1 deeplink_model_default_none_sys)
    goto LABEL_74; /*0x140025b15*/
  }
  *(_OWORD *)&v65[8] = *(_OWORD *)&v82[8]; /*0x140025b2c*/
  *(_QWORD *)v65 = *(_QWORD *)v82; /*0x140025b33*/
LABEL_74:
  v94 = 1; /*0x140025b3a*/
  sub_14103B190(v66, &v38, v81, *((_QWORD *)&v81 + 1)); /*0x140025b5a*/  // re-validate apiKey slice as UTF-8/URL
  if ( __OFSUB__(-*(_QWORD *)v66, 1) ) /*0x140025b6d*/
    goto LABEL_76; /*0x140025b6d*/
  v85 = v70; /*0x140025b76*/
  v84 = v69; /*0x140025b99*/
  v83 = v68; /*0x140025ba0*/
  *(_OWORD *)&v82[24] = v67; /*0x140025ba7*/
  *(_OWORD *)&v82[8] = *(_OWORD *)&v66[8]; /*0x140025bae*/
  *(_QWORD *)v82 = *(_QWORD *)v66; /*0x140025bb5*/
  v94 = 1; /*0x140025bbc*/
  sub_140024E10(v66, v82); /*0x140025bd1*/  // parse apiKey as a Url (scheme/host structural check)
  if ( __OFSUB__(0, *(_QWORD *)v66) ) /*0x140025bd9*/
  {
LABEL_76:
    v94 = 1; /*0x140025be2*/
    sub_14108F780((unsigned __int64 *)&v73, (__int64)&v80); /*0x140025bf7*/
  }
  else
  {
    v74 = *(_QWORD *)&v66[16]; /*0x140025c06*/
    v73 = *(_OWORD *)v66; /*0x140025c14*/
  }
  v26 = (const __m128i *)sub_1402A1D60(v81, *((_QWORD *)&v81 + 1), 47); /*0x140025c34*/  // trim trailing '/' (47) off apiKey
  v28 = v27; /*0x140025c37*/
  sub_1400DEBD0((unsigned int)v82, v27, 0, 1, 1); /*0x140025c53*/  // alloc buffer for owned copy of trimmed apiKey (generic RawVec grow helper — NOT the hashmap insert)
  v10 = *(_QWORD *)&v82[8]; /*0x140025c58*/
  if ( v82[0] ) /*0x140025c66*/
    sub_1412AD46B(*(_QWORD *)&v82[8], *(_QWORD *)&v82[16]); /*0x140025f29*/  // alloc-error abort
  v11 = *(_QWORD *)&v82[16]; /*0x140025c6c*/
  if ( v28 ) /*0x140025c76*/
    sub_1412762D0(*(__m128i **)&v82[16], v26, v28); /*0x140025c81*/  // memcpy trimmed apiKey into new buffer
  v47 = *(_QWORD *)&v65[16]; /*0x140025c8d*/
  v46 = *(_OWORD *)v65; /*0x140025c98*/
  v48 = v73; /*0x140025ca3*/
  v49 = v74; /*0x140025cae*/
  // teardown temporaries (name/endpoint/apiKey/query-map/original url slice)
  if ( v80 ) /*0x140025cbc*/
    sub_140001370(v81, v80, 1); /*0x140025ccb*/
  if ( v86 ) /*0x140025cd8*/
    sub_140001370(v76, v86, 1); /*0x140025cee*/
  if ( (_QWORD)v77 ) /*0x140025cfd*/
    sub_140001370(*((_QWORD *)&v77 + 1), v77, 1); /*0x140025d0c*/
  sub_140874CE0(v71); /*0x140025d19*/
  if ( v90 ) /*0x140025d27*/
    sub_140001370(*((_QWORD *)&v59 + 1), v90, 1); /*0x140025d3d*/
  if ( !__OFSUB__(-v91, 1) ) /*0x140025d4c*/
  {
    // === SUCCESS: build response struct directly into a1 ===
    *(_QWORD *)&v50 = v91; /*0x140025d61*/
    *((_QWORD *)&v50 + 1) = v87; /*0x140025d6c*/
    *(_QWORD *)&v51 = v5; /*0x140025d70*/
    *((_QWORD *)&v51 + 1) = v10; /*0x140025d74*/
    *(_QWORD *)&v52 = v11; /*0x140025d7b*/
    *((_QWORD *)&v52 + 1) = v28; /*0x140025d82*/
    *(_QWORD *)&v53 = v88; /*0x140025d90*/
    *((_QWORD *)&v53 + 1) = v79; /*0x140025d9e*/
    v54.m256i_i64[0] = v7; /*0x140025da5*/
    *(_OWORD *)&v54.m256i_u64[1] = v46; /*0x140025db0*/
    v54.m256i_i64[3] = v47; /*0x140025dbb*/
    v55 = v48; /*0x140025dc6*/
    v56 = v49; /*0x140025dd1*/
    nullsub_1(v30, v29); /*0x140025dd8*/
    v90 = (_WORD *)sub_140001360(2, 1); /*0x140025dec*/  // alloc 2B for "ok"
    if ( !v90 ) /*0x140025df6*/
      sub_1412AD46B(1, 2); /*0x140025f3b*/
    *v90 = 27503; /*0x140025e03*/  // 0x6B6F LE == "ok"
    nullsub_1(v32, v31); /*0x140025e08*/
    v33 = (_DWORD *)sub_140001360(7, 1); /*0x140025e17*/  // alloc 7B for "success"
    if ( !v33 ) /*0x140025e1f*/
      sub_1412AD46B(1, 7); /*0x140025f4d*/
    *(_DWORD *)((char *)v33 + 3) = 1936942435; /*0x140025e25*/  // "cess" tail
    *v33 = 1667462483; /*0x140025e2c*/  // "suc" + high byte -> "success"(7B)
    *(_QWORD *)(a1 + 184) = v56; /*0x140025e39*/  // name/endpoint/apiKey/model fields, offsets 72..196
    *(_OWORD *)(a1 + 168) = v55; /*0x140025e47*/
    *(__m256i *)(a1 + 136) = v54; /*0x140025e55*/
    v34 = v50; /*0x140025e6a*/
    v35 = v51; /*0x140025e6e*/
    v36 = v52; /*0x140025e72*/
    *(_OWORD *)(a1 + 120) = v53; /*0x140025e80*/
    *(_OWORD *)(a1 + 104) = v36; /*0x140025e84*/
    *(_OWORD *)(a1 + 88) = v35; /*0x140025e88*/
    *(_OWORD *)(a1 + 72) = v34; /*0x140025e8c*/
    *(_QWORD *)a1 = 2; /*0x140025e90*/  // tag=2 (Ok / success response variant)
    *(_QWORD *)(a1 + 8) = v90; /*0x140025e9e*/   // "ok" ptr
    *(_QWORD *)(a1 + 16) = 2; /*0x140025ea2*/    // "ok" len=2
    *(_QWORD *)(a1 + 24) = 7; /*0x140025eaa*/    // (padding/cap)
    *(_QWORD *)(a1 + 32) = v33; /*0x140025eb2*/  // "success" ptr
    *(_QWORD *)(a1 + 40) = 7; /*0x140025eb6*/    // "success" len=7
    *(_QWORD *)(a1 + 48) = 0; /*0x140025ebe*/
    *(_QWORD *)(a1 + 56) = 8; /*0x140025ec6*/
    *(_QWORD *)(a1 + 64) = 0; /*0x140025ece*/
    *(_DWORD *)(a1 + 192) = 1; /*0x140025ed6*/    // int field = 1
    *(_BYTE *)(a1 + 196) = 1; /*0x140025ee0*/     // bool field = true
    v13 = *v75; /*0x140025eee*/
    if ( *v75 ) /*0x140025eee*/
      goto LABEL_26; /*0x140025ef4*/
    return a1; /*0x140025ef4*/
  }
  v9 = v87; /*0x140025d4e*/
LABEL_19:
  // === ERROR: fmt::Display the accumulated error fragments into a single message via
  //     sub_1410958B0 (Display trampoline; panics with the well-known 55B message on Display::fmt
  //     failure — mirrors sub_1412794B0/sub_140E156C0 used elsewhere in this same command) ===
  *(_QWORD *)v82 = v9; /*0x140025455*/
  *(_QWORD *)&v82[8] = v5; /*0x140025463*/
  *(_QWORD *)&v82[16] = v10; /*0x14002546a*/
  *(_QWORD *)&v82[24] = v11; /*0x140025471*/
  *(_QWORD *)v66 = 0; /*0x140025478*/
  *(_QWORD *)&v66[8] = 1; /*0x140025483*/
  *(_QWORD *)&v66[16] = 0; /*0x14002548e*/
  v71[0] = &v82[8]; /*0x14002549f*/
  *(_QWORD *)&v59 = v71; /*0x1400254ad*/
  if ( v9 == 1 ) /*0x14002549d*/
  {
    *((_QWORD *)&v59 + 1) = sub_140590650; /*0x1400254bb*/
    v12 = sub_1410958B0(v66, &off_141314DA0, &unk_1413164F9, &v59, v37, v38, v39); /*0x1400254de*/
  }
  else
  {
    *((_QWORD *)&v59 + 1) = sub_140360B90; /*0x140025502*/
    v12 = sub_1410958B0(v66, &off_141314DA0, &unk_1413164E4, &v59, v37, v38, v39); /*0x140025525*/
  }
  if ( v12 ) /*0x14002552d*/
    sub_1412AD780( /*0x140025826*/
      (unsigned int)aADisplayImplem,
      55,
      (unsigned int)&v89,
      (unsigned int)&unk_141314FC8,
      (__int64)&off_141314E58);
  *(_QWORD *)&v60 = *(_QWORD *)&v66[16]; /*0x14002553a*/
  v59 = *(_OWORD *)v66; /*0x140025548*/
  if ( *(_QWORD *)&v82[8] ) /*0x140025559*/
    sub_140001370(*(_QWORD *)&v82[16], *(_QWORD *)&v82[8], 1); /*0x140025568*/
  *(_QWORD *)(a1 + 24) = v60; /*0x140025574*/
  *(_OWORD *)(a1 + 8) = v59; /*0x14002557f*/
  *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x14002558d*/  // niche-encoded Err discriminant
  v13 = *v75; /*0x140025597*/
  if ( *v75 ) /*0x140025597*/
LABEL_26:
    sub_140001370(v72, v13, 1); /*0x14002559f*/  // dealloc original "url" string buffer
  return a1; /*0x1400255b4*/
}
