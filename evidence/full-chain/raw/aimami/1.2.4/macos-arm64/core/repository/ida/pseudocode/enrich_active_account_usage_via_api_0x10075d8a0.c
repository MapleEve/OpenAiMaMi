// __ZN13codexmate_lib4core10repository35enrich_active_account_usage_via_api @ 0x10075d8a0 | 1.2.4 NEW-delta
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::repository::enrich_active_account_usage_via_api::h8086f267d225332e(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // ecx
  int v6; // esi
  int v7; // edx
  unsigned __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r10
  unsigned __int8 *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  char v21; // r15
  unsigned __int64 v22; // r12
  signed __int64 v23; // rax
  __int64 v24; // r12
  const void *v25; // r15
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  const void *v29; // rsi
  __int64 v30; // rdx
  signed __int64 v31; // rax
  __int64 v32; // r12
  const void *v33; // r15
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r15
  unsigned __int64 *v38; // rbx
  unsigned __int64 *v39; // r15
  unsigned __int64 v40; // r12
  size_t v41; // rbx
  __int64 v42; // r15
  size_t v43; // r14
  __int64 v44; // r12
  char v45; // r12
  int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r13
  signed __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // rsi
  _QWORD *v56; // rdx
  _QWORD *v57; // rax
  __int64 v58; // rsi
  _QWORD *v59; // rdx
  _QWORD *v60; // rax
  unsigned __int64 v61; // rbx
  char v62; // r12
  unsigned __int64 v63; // rsi
  __int64 v64; // r14
  void *v65; // rax
  __int64 v66; // rsi
  void *v67; // rbx
  __int64 v68; // rcx
  char v69; // bl
  unsigned __int64 v70; // rsi
  _QWORD *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // rsi
  int v78; // edx
  __int64 v79; // rbx
  __int64 v80; // rsi
  _QWORD *v81; // rdx
  _QWORD *v82; // rax
  __int64 v83; // rsi
  _QWORD *v84; // rdx
  _QWORD *v85; // rax
  char v86; // r12
  unsigned __int64 v87; // r13
  unsigned __int64 v88; // r8
  __int64 v89; // rbx
  unsigned __int64 *v90; // r15
  __int64 v91; // rsi
  _QWORD *v92; // rbx
  __int64 v93; // rsi
  unsigned __int64 v94; // r12
  __int64 v95; // r13
  __int64 v96; // r12
  __int64 v97; // r13
  __int64 v98; // r12
  int v99; // edx
  int v100; // ecx
  unsigned int v101; // ecx
  __int64 v102; // r15
  __int64 v103; // r13
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rsi
  bool v108; // zf
  __int64 v109; // rbx
  __int64 v110; // r14
  __int64 v111; // r14
  __int64 v112; // r15
  _QWORD *v113; // r12
  __int64 v114; // rsi
  size_t v115; // rsi
  int v116; // edx
  unsigned __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rdi
  _QWORD *v120; // rbx
  __int64 v121; // rsi
  __int64 result; // rax
  _QWORD __dst[43]; // [rsp+30h] [rbp-670h] BYREF
  unsigned __int64 v124; // [rsp+188h] [rbp-518h] BYREF
  _QWORD __src[43]; // [rsp+190h] [rbp-510h] BYREF
  _QWORD v126[12]; // [rsp+2E8h] [rbp-3B8h] BYREF
  _QWORD v127[4]; // [rsp+348h] [rbp-358h] BYREF
  __int64 v128; // [rsp+368h] [rbp-338h] BYREF
  __int64 v129; // [rsp+370h] [rbp-330h]
  __int64 v130; // [rsp+380h] [rbp-320h]
  __int64 v131; // [rsp+388h] [rbp-318h]
  __int64 v132; // [rsp+398h] [rbp-308h]
  __int64 v133; // [rsp+3A0h] [rbp-300h]
  __int64 v134; // [rsp+3B0h] [rbp-2F0h]
  __int64 v135; // [rsp+3B8h] [rbp-2E8h]
  __int64 v136; // [rsp+3C0h] [rbp-2E0h]
  __int64 v137; // [rsp+3C8h] [rbp-2D8h]
  __int64 v138; // [rsp+3D0h] [rbp-2D0h]
  __int64 v139; // [rsp+3E0h] [rbp-2C0h]
  __int64 v140; // [rsp+3E8h] [rbp-2B8h]
  __int64 v141; // [rsp+3F8h] [rbp-2A8h]
  __int64 v142; // [rsp+400h] [rbp-2A0h]
  unsigned __int64 *v143; // [rsp+418h] [rbp-288h]
  __int64 v144; // [rsp+420h] [rbp-280h]
  __int64 v145; // [rsp+428h] [rbp-278h]
  __int64 v146; // [rsp+430h] [rbp-270h]
  __int64 v147; // [rsp+438h] [rbp-268h]
  __int64 v148; // [rsp+440h] [rbp-260h]
  __int64 v149; // [rsp+448h] [rbp-258h]
  unsigned __int64 v150; // [rsp+450h] [rbp-250h]
  __int64 v151; // [rsp+458h] [rbp-248h]
  __int64 v152; // [rsp+460h] [rbp-240h]
  _QWORD v153[12]; // [rsp+468h] [rbp-238h] BYREF
  __int64 v154; // [rsp+4C8h] [rbp-1D8h]
  __int64 v155; // [rsp+4D0h] [rbp-1D0h]
  char v156; // [rsp+4D8h] [rbp-1C8h]
  _QWORD *v157; // [rsp+4E0h] [rbp-1C0h]
  __int64 v158; // [rsp+4E8h] [rbp-1B8h]
  __int64 v159; // [rsp+4F0h] [rbp-1B0h]
  __int64 v160; // [rsp+4F8h] [rbp-1A8h]
  char v161; // [rsp+500h] [rbp-1A0h]
  unsigned __int64 v162; // [rsp+508h] [rbp-198h] BYREF
  __int64 v163; // [rsp+510h] [rbp-190h]
  __int64 v164; // [rsp+518h] [rbp-188h]
  char v165; // [rsp+520h] [rbp-180h]
  __int64 v166; // [rsp+528h] [rbp-178h] BYREF
  __int64 v167; // [rsp+530h] [rbp-170h]
  __int64 v168; // [rsp+540h] [rbp-160h] BYREF
  unsigned __int64 *v169; // [rsp+548h] [rbp-158h]
  __int64 v170; // [rsp+550h] [rbp-150h]
  __int64 v171; // [rsp+558h] [rbp-148h]
  __int64 v172; // [rsp+560h] [rbp-140h]
  __int64 v173; // [rsp+568h] [rbp-138h]
  __int64 v174; // [rsp+570h] [rbp-130h]
  _QWORD *v175; // [rsp+578h] [rbp-128h] BYREF
  __int64 v176; // [rsp+580h] [rbp-120h]
  __int64 v177; // [rsp+588h] [rbp-118h]
  __int64 v178; // [rsp+590h] [rbp-110h] BYREF
  __int64 v179; // [rsp+598h] [rbp-108h]
  __int64 v180; // [rsp+5A0h] [rbp-100h]
  int v181; // [rsp+5ACh] [rbp-F4h] BYREF
  int v182; // [rsp+5B0h] [rbp-F0h]
  int v183; // [rsp+5B4h] [rbp-ECh]
  __int64 v184; // [rsp+5B8h] [rbp-E8h]
  __int64 v185; // [rsp+5C0h] [rbp-E0h]
  __int64 v186; // [rsp+5C8h] [rbp-D8h]
  unsigned __int64 *v187; // [rsp+5D0h] [rbp-D0h]
  __int64 v188; // [rsp+5D8h] [rbp-C8h]
  __int64 v189; // [rsp+5E0h] [rbp-C0h]
  _QWORD *v190; // [rsp+5E8h] [rbp-B8h]
  int v191; // [rsp+5F0h] [rbp-B0h]
  int v192; // [rsp+5F4h] [rbp-ACh]
  __int64 v193; // [rsp+5F8h] [rbp-A8h]
  _QWORD *v194; // [rsp+600h] [rbp-A0h]
  __int64 v195; // [rsp+608h] [rbp-98h]
  unsigned __int64 *v196; // [rsp+610h] [rbp-90h]
  int v197; // [rsp+618h] [rbp-88h]
  int v198; // [rsp+61Ch] [rbp-84h]
  size_t __n; // [rsp+620h] [rbp-80h]
  size_t v200; // [rsp+628h] [rbp-78h]
  _QWORD *v201; // [rsp+630h] [rbp-70h] BYREF
  __int64 v202; // [rsp+638h] [rbp-68h]
  __int64 v203; // [rsp+640h] [rbp-60h]
  char v204; // [rsp+64Fh] [rbp-51h]
  _QWORD *v205; // [rsp+650h] [rbp-50h] BYREF
  __int64 v206; // [rsp+658h] [rbp-48h]
  __int64 v207; // [rsp+660h] [rbp-40h]
  unsigned __int64 v208; // [rsp+668h] [rbp-38h]
  __int64 v209; // [rsp+670h] [rbp-30h]

  v146 = a3;
  v147 = a2;
  v209 = a1;
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v124);
  v3 = ((int)v124 >> 13) - 1;
  v4 = 0;
  if ( (int)v124 >> 13 <= 0 )
  {
    v5 = (1 - ((int)v124 >> 13)) / 0x190u + 1;
    v3 += 400 * v5;
    v4 = -146097 * v5;
  }
  v6 = v3;
  v7 = v3 / 100;
  v8 = LODWORD(__src[0]);
  v9 = v4 + (((unsigned int)v124 >> 4) & 0x1FF) - v7;
  v10 = (unsigned int)(v7 >> 2);
  v11 = HIDWORD(v124) + 86400LL * (int)(v10 + ((1461 * v6) >> 2) + v9 - 719163);
  v12 = *(_QWORD *)(v209 + 824);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v209 + 816);
    v10 = *(_QWORD *)(v209 + 824) & 3LL;
    if ( v12 >= 4 )
    {
      v12 &= 0xFFFFFFFFFFFFFFFCLL;
      v15 = (unsigned __int8 *)(v13 + 1393);
      v8 = 0;
      v14 = 0;
      do
      {
        v14 += *(v15 - 1056) + *(v15 - 704) + (unsigned __int64)*(v15 - 352) + *v15;
        v8 += 4LL;
        v15 += 1408;
      }
      while ( v12 != v8 );
    }
    else
    {
      v8 = 0;
      v14 = 0;
    }
    if ( v10 )
    {
      v16 = 352 * v8 + v13 + 337;
      v10 *= 352;
      v12 = 0;
      do
      {
        v8 = *(unsigned __int8 *)(v16 + v12);
        v14 += v8;
        v12 += 352LL;
      }
      while ( v10 != v12 );
    }
  }
  else
  {
    v14 = 0;
  }
  v195 = v14;
  v17 = 1000 * v11;
  v18 = LODWORD(__src[0]) / 0xF4240uLL;
  v19 = 0x8000000000000000LL;
  v20 = v209;
  v21 = *(_BYTE *)(v209 + 136);
  if ( !__OFSUB__(0, *(_QWORD *)(v209 + 112)) )
  {
    v12 = v209 + 112;
    v8 = (unsigned __int64)&v124;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v124, v209 + 112);
    v19 = v124;
    __dst[0] = __src[0];
    __dst[1] = __src[1];
  }
  v22 = v18 + v17;
  v165 = v21;
  v162 = v19;
  v163 = __dst[0];
  v164 = __dst[1];
  v23 = *(_QWORD *)(v20 + 568);
  __n = v23;
  if ( v23 < 0 )
  {
    v24 = 0;
    goto LABEL_16;
  }
  v25 = *(const void **)(v20 + 560);
  if ( v23 )
  {
    v26 = v22;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v12, v10, __dst[1]);
    v24 = 1;
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    if ( !v27 )
LABEL_16:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, __n);
    v28 = v27;
    v22 = v26;
  }
  else
  {
    v28 = 1;
  }
  v188 = v28;
  v29 = v25;
  memcpy((void *)v28, v25, __n);
  v31 = *(_QWORD *)(v209 + 544);
  v200 = v31;
  if ( v31 < 0 )
  {
    v32 = 0;
    goto LABEL_23;
  }
  v33 = *(const void **)(v209 + 536);
  if ( v31 )
  {
    v34 = v22;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v29, v30, v209);
    v32 = 1;
    v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v200, 1);
    if ( !v35 )
LABEL_23:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, v200);
    v36 = v35;
    v22 = v34;
  }
  else
  {
    v36 = 1;
  }
  v189 = v36;
  memcpy((void *)v36, v33, v200);
  codexmate_lib::core::repository::collect_account_api_contexts::hd1c4fac389fa537c(&v168, v209, 1);
  v37 = v170;
  v38 = v169;
  v187 = &v169[36 * v170];
  v208 = v19;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hdea8d306e35d8abc(&v178);
  v181 = v195;
  v182 = 0;
  v183 = v195 - v37;
  v184 = 0;
  v185 = 0;
  v186 = 0;
  if ( !v37 )
  {
    v124 = 0x8000000000000000LL;
    codexmate_lib::core::repository::finish_refresh_report::hb34fa1ee83dfe100(v209, 1, &v124, v22, &v181);
    v111 = v179;
    v112 = v180;
    if ( v180 )
    {
      v113 = (_QWORD *)(v179 + 8);
      do
      {
        v114 = *(v113 - 1);
        if ( v114 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v113, v114, 1);
        v113 += 3;
        --v112;
      }
      while ( v112 );
    }
    if ( v178 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, 24 * v178, 8);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb97ab2f20ed093e4(&v168);
    if ( v168 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, 288 * v168, 8);
    v115 = v200;
    if ( v200 )
      goto LABEL_228;
    goto LABEL_229;
  }
  v195 = (unsigned int)(v195 - v37);
  v150 = v22;
  v39 = v38;
  v127[0] = v38;
  v127[2] = v168;
  v127[3] = v187;
  v194 = (_QWORD *)(v209 + 856);
  v190 = (_QWORD *)(v209 + 880);
  v151 = v209 + 768;
  v193 = 0;
  v197 = 0;
  v198 = 0;
  v191 = 0;
  v192 = 0;
  while ( 1 )
  {
    v143 = v39 + 36;
    v127[1] = v39 + 36;
    v40 = *v39;
    memcpy(__dst, v39 + 1, 0x118u);
    if ( v40 == 2 )
      break;
    v196 = v39;
    v124 = v40;
    memcpy(__src, __dst, 0x118u);
    _$LT$codexmate_lib..core..auth..AuthFile$u20$as$u20$core..clone..Clone$GT$::clone::h1f3264a3588b060b(
      &v128,
      &__src[12]);
    v41 = __n;
    v42 = v188;
    v43 = v200;
    v144 = __src[10];
    v145 = __src[11];
    v44 = v189;
    codexmate_lib::core::oauth_refresh::refresh_token_with_policy::h13eeb2db000f5370(
      (unsigned int)&v166,
      __src[10],
      __src[11],
      (unsigned int)&v128,
      (unsigned int)&v162,
      v189,
      v200,
      v188,
      __n,
      0);
    codexmate_lib::core::repository::fetch_usage_with_one_auth_retry::h5cdfaa48ff1b9de0(
      (unsigned int)v153,
      v144,
      v145,
      (unsigned int)&v128,
      (unsigned int)&v166,
      (unsigned int)&v162,
      v44,
      v43,
      v42,
      v41,
      1);
    qmemcpy(v126, v153, sizeof(v126));
    v45 = v154;
    codexmate_lib::core::repository::log_token_refresh_outcome::h9930e2f2da352166("active_usage", 12, &v166);
    v205 = (_QWORD *)std::time::SystemTime::now::h1fe79e41f9d5677f();
    LODWORD(v206) = v46;
    std::time::SystemTime::duration_since::had059553cab94f96(v153, &v205, 0, 0);
    v48 = 0;
    v49 = 0;
    if ( !LOBYTE(v153[0]) )
      v49 = v153[1];
    if ( v134 != 0x8000000000000000LL )
    {
      if ( (codexmate_lib::core::oauth_refresh::token_remaining_seconds::h5df20d6491bf45d9(v135, v136) & 1) != 0 )
      {
        v47 += v49;
        v48 = 1;
      }
      else
      {
        v48 = 0;
      }
    }
    v50 = v166;
    v51 = 4;
    if ( v166 < 0 )
      v51 = (unsigned int)v166;
    if ( v166 < (__int64)0x8000000000000002LL )
    {
      v198 = ++v191;
      v52 = __src[34];
      if ( __src[34] >= *(_QWORD *)(v209 + 824) )
        goto LABEL_45;
LABEL_44:
      v53 = *(_QWORD *)(v209 + 816);
      v54 = 352 * v52;
      *(_QWORD *)(v53 + v54 + 160) = v48;
      *(_QWORD *)(v53 + v54 + 168) = v47;
      *(_BYTE *)(v53 + v54 + 176) = v51;
      goto LABEL_45;
    }
    v195 = (unsigned int)(v195 + 1);
    v52 = __src[34];
    if ( __src[34] < *(_QWORD *)(v209 + 824) )
      goto LABEL_44;
LABEL_45:
    if ( v45 )
    {
      ++v197;
      ++*(_DWORD *)(v209 + 904);
      if ( v50 >= (__int64)0x8000000000000002LL )
      {
        v193 = (unsigned int)(v193 + 1);
        if ( LODWORD(v126[0]) == 11 )
          goto LABEL_97;
        v205 = nullptr;
        v206 = 1;
        v207 = 0;
        v153[2] = 1610612768;
        v153[0] = &v205;
        v153[1] = &anon_968df7ff55cc5af6b8e31bcf74ad2104_1170;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b(
                                v126,
                                v153) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Resul"
            "t::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-encod"
            "ingaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-al"
            "low-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-requ"
            "est-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dis"
            "positioncontent-rangecontent-security-policycontent-security-policy-report-onlycontent-typedntexpiresforward"
            "edif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardsoriginpragmapublic-key-pinspubli"
            "c-key-pins-report-onlyrangerefererreferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensi"
            "onssec-websocket-keysec-websocket-protocolsec-websocket-versionserverset-cookiestrict-transport-securitytrai"
            "leruser-agentupgrade-insecure-requestsviax-content-type-optionsx-dns-prefetch-controlx-frame-options",
            55,
            &v175,
            &anon_968df7ff55cc5af6b8e31bcf74ad2104_1187,
            &anon_968df7ff55cc5af6b8e31bcf74ad2104_1173);
        v201 = v205;
        v202 = v206;
        v203 = v207;
        v55 = *v194;
        if ( *v194 != 0x8000000000000000LL && v55 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v209 + 864), v55, 1);
        v56 = v194;
        v194[2] = v203;
        v57 = v201;
        v56[1] = v202;
        *v56 = v57;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v153, &__src[3]);
        v207 = v153[2];
        v206 = v153[1];
        v205 = (_QWORD *)v153[0];
        v58 = *v190;
        if ( *v190 != 0x8000000000000000LL && v58 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v209 + 888), v58, 1);
        v59 = v190;
        v190[2] = v207;
        v60 = v205;
        v59[1] = v206;
        *v59 = v60;
        v61 = __src[34];
        v62 = 1;
        if ( LODWORD(v126[0]) != 6 )
          goto LABEL_87;
        if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v126[1])
          || (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v126[1]) )
        {
          v62 = 2;
        }
        if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v126[1])
          || (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v126[1]) )
        {
          v205 = nullptr;
          v206 = 1;
          v207 = 0;
          v153[2] = 1610612768;
          v153[0] = &v205;
          v153[1] = &anon_968df7ff55cc5af6b8e31bcf74ad2104_1170;
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b(
                                  v126,
                                  v153) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(
              "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Res"
              "ult::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-e"
              "ncodingaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-cont"
              "rol-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-cont"
              "rol-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlc"
              "ontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlycontent-typedntex"
              "piresforwardedif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardsoriginpragmapublic"
              "-key-pinspublic-key-pins-report-onlyrangerefererreferrer-policyrefreshretry-aftersec-websocket-acceptsec-w"
              "ebsocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverset-cookiestrict-tran"
              "sport-securitytraileruser-agentupgrade-insecure-requestsviax-content-type-optionsx-dns-prefetch-controlx-frame-options",
              55,
              &v175,
              &anon_968df7ff55cc5af6b8e31bcf74ad2104_1187,
              &anon_968df7ff55cc5af6b8e31bcf74ad2104_1173);
          v63 = (unsigned __int64)v205;
          v172 = v206;
          v149 = v207;
          v64 = v209;
          if ( v61 >= *(_QWORD *)(v209 + 824) )
          {
LABEL_94:
            if ( !(2 * v63) )
              goto LABEL_95;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v63, 1);
            if ( v126[0] != 11 )
              goto LABEL_96;
            goto LABEL_97;
          }
        }
        else
        {
LABEL_87:
          v63 = 0x8000000000000000LL;
          v64 = v209;
          if ( v61 >= *(_QWORD *)(v209 + 824) )
            goto LABEL_94;
        }
        if ( *(_BYTE *)(*(_QWORD *)(v64 + 816) + 352 * v61 + 337) )
        {
          *(_BYTE *)(v64 + 1064) = v62;
          v74 = *(_QWORD *)(v64 + 912);
          if ( v74 != 0x8000000000000000LL && v74 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v64 + 920), *(_QWORD *)(v64 + 912), 1);
          *(_QWORD *)(v64 + 912) = v63;
          *(_QWORD *)(v64 + 920) = v172;
          *(_QWORD *)(v64 + 928) = v149;
          if ( v126[0] == 11 )
            goto LABEL_97;
          goto LABEL_96;
        }
        goto LABEL_94;
      }
      v183 = v195;
      v182 = v198;
      HIDWORD(v185) = v197;
      HIDWORD(v186) = v193;
      if ( LODWORD(v126[0]) != 11 )
      {
        qmemcpy(v153, v126, sizeof(v153));
        v193 = (unsigned int)(v193 + 1);
        HIDWORD(v186) = v193;
        v201 = nullptr;
        v202 = 1;
        v203 = 0;
        v207 = 1610612768;
        v205 = &v201;
        v206 = (__int64)&anon_968df7ff55cc5af6b8e31bcf74ad2104_1170;
        if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b(
                                v153,
                                &v205) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Resul"
            "t::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-encod"
            "ingaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-al"
            "low-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-requ"
            "est-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dis"
            "positioncontent-rangecontent-security-policycontent-security-policy-report-onlycontent-typedntexpiresforward"
            "edif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardsoriginpragmapublic-key-pinspubli"
            "c-key-pins-report-onlyrangerefererreferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensi"
            "onssec-websocket-keysec-websocket-protocolsec-websocket-versionserverset-cookiestrict-transport-securitytrai"
            "leruser-agentupgrade-insecure-requestsviax-content-type-optionsx-dns-prefetch-controlx-frame-options",
            55,
            &v175,
            &anon_968df7ff55cc5af6b8e31bcf74ad2104_1187,
            &anon_968df7ff55cc5af6b8e31bcf74ad2104_1173);
        v175 = v201;
        v176 = v202;
        v177 = v203;
        v80 = *v194;
        if ( *v194 != 0x8000000000000000LL && v80 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v209 + 864), v80, 1);
        v81 = v194;
        v194[2] = v177;
        v82 = v175;
        v81[1] = v176;
        *v81 = v82;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v205, &__src[3]);
        v203 = v207;
        v202 = v206;
        v201 = v205;
        v83 = *v190;
        if ( *v190 != 0x8000000000000000LL && v83 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v209 + 888), v83, 1);
        v84 = v190;
        v190[2] = v203;
        v85 = v201;
        v84[1] = v202;
        *v84 = v85;
        if ( LODWORD(v153[0]) == 6 )
        {
          if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v153[1])
            || (v86 = 1, (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v153[1])) )
          {
            v86 = 2;
          }
          v87 = __src[34];
          if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v153[1])
            || (unsigned __int8)reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v153[1]) )
          {
            v201 = nullptr;
            v202 = 1;
            v203 = 0;
            v207 = 1610612768;
            v205 = &v201;
            v206 = (__int64)&anon_968df7ff55cc5af6b8e31bcf74ad2104_1170;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b(
                                    v153,
                                    &v205) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(
                "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `R"
                "esult::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-charsetacce"
                "pt-encodingaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersacces"
                "s-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageacc"
                "ess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cach"
                "e-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlyconte"
                "nt-typedntexpiresforwardedif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardsorig"
                "inpragmapublic-key-pinspublic-key-pins-report-onlyrangerefererreferrer-policyrefreshretry-aftersec-webso"
                "cket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverset"
                "-cookiestrict-transport-securitytraileruser-agentupgrade-insecure-requestsviax-content-type-optionsx-dns"
                "-prefetch-controlx-frame-options",
                55,
                &v175,
                &anon_968df7ff55cc5af6b8e31bcf74ad2104_1187,
                &anon_968df7ff55cc5af6b8e31bcf74ad2104_1173);
            v88 = (unsigned __int64)v201;
            v173 = v202;
            v152 = v203;
LABEL_158:
            v92 = (_QWORD *)v209;
            if ( v87 < *(_QWORD *)(v209 + 824) && *(_BYTE *)(*(_QWORD *)(v209 + 816) + 352 * v87 + 337) )
            {
              *(_BYTE *)(v209 + 1064) = v86;
              v93 = v92[114];
              if ( v93 != 0x8000000000000000LL && v93 )
              {
                v94 = v88;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92[115], v93, 1);
                v88 = v94;
              }
              v92[114] = v88;
              v92[115] = v173;
              v92[116] = v152;
            }
            else if ( 2 * v88 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173, v88, 1);
            }
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v153);
            if ( v166 >= (__int64)0x8000000000000004LL )
            {
              v90 = v196;
              if ( v166 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v167, v166, 1);
              goto LABEL_177;
            }
            goto LABEL_176;
          }
        }
        else
        {
          v86 = 1;
          v87 = __src[34];
        }
        v88 = 0x8000000000000000LL;
        goto LABEL_158;
      }
      v75 = v126[1];
      LODWORD(v186) = ++v192;
      v76 = v209;
      ++*(_DWORD *)(v209 + 908);
      if ( v75 == 3 )
      {
        if ( __src[34] < *(_QWORD *)(v76 + 824) && *(_BYTE *)(*(_QWORD *)(v76 + 816) + 352LL * __src[34] + 337) == 1 )
        {
          *(_BYTE *)(v76 + 1064) = 1;
          v77 = *(_QWORD *)(v76 + 912);
          if ( v77 != 0x8000000000000000LL && v77 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v76 + 920), v77, 1);
          *(_QWORD *)(v76 + 912) = 0x8000000000000000LL;
        }
        v205 = (_QWORD *)std::time::SystemTime::now::h1fe79e41f9d5677f();
        LODWORD(v206) = v78;
        std::time::SystemTime::duration_since::had059553cab94f96(v153, &v205, 0, 0);
        if ( LOBYTE(v153[0]) )
          v79 = 0;
        else
          v79 = v153[1];
        if ( __src[34] < *(_QWORD *)(v209 + 824) )
        {
          v95 = *(_QWORD *)(v209 + 816);
          v96 = 352LL * __src[34];
          *(_QWORD *)(v95 + v96 + 80) = 2;
          *(_QWORD *)(v95 + v96 + 120) = 2;
          *(_BYTE *)(v95 + v96 + 338) = 1;
          *(_QWORD *)(v95 + v96 + 64) = 1;
          *(_QWORD *)(v95 + v96 + 72) = v79;
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v205, &__src[3]);
          v97 = v96 + v95;
          v98 = *(_QWORD *)(v97 + 160);
          if ( v98 != 2 )
          {
            v204 = *(_BYTE *)(v97 + 176);
            v174 = *(_QWORD *)(v97 + 168);
          }
          chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v201);
          v99 = ((int)v201 >> 13) - 1;
          v100 = 0;
          if ( (int)v201 >> 13 <= 0 )
          {
            v101 = (1 - ((int)v201 >> 13)) / 0x190u + 1;
            v99 += 400 * v101;
            v100 = -146097 * v101;
          }
          v159 = v207;
          v158 = v206;
          v157 = v205;
          v160 = v79;
          v161 = 1;
          v153[2] = 2;
          v153[7] = 2;
          v154 = v98;
          v155 = v174;
          v156 = v204;
          v153[0] = 1;
          v153[1] = 1000
                  * (HIDWORD(v201)
                   + 86400LL
                   * (int)(((v99 / 100) >> 2)
                         + ((1461 * v99) >> 2)
                         + v100
                         + (((unsigned int)v201 >> 4) & 0x1FF)
                         - v99 / 100
                         - 719163))
                  + (unsigned int)v202 / 0xF4240uLL;
          codexmate_lib::core::quota_store::upsert_item::h0b472d279fde3374(v151, v153, v79);
        }
      }
      else
      {
        codexmate_lib::core::repository::apply_usage_result::hee190e965eb56d35(v76, v147, v146, &v124, &v126[1]);
        v89 = v209;
        if ( __src[34] < *(_QWORD *)(v209 + 824) )
        {
          v90 = v196;
          if ( *(_BYTE *)(*(_QWORD *)(v209 + 816) + 352LL * __src[34] + 337) == 1 )
          {
            *(_BYTE *)(v209 + 1064) = 1;
            v91 = *(_QWORD *)(v89 + 912);
            if ( v91 != 0x8000000000000000LL && v91 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v89 + 920), v91, 1);
            *(_QWORD *)(v89 + 912) = 0x8000000000000000LL;
          }
          goto LABEL_177;
        }
      }
LABEL_176:
      v90 = v196;
LABEL_177:
      if ( v128 != 0x8000000000000000LL && v128 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v128, 1);
      if ( v130 != 0x8000000000000000LL && v130 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v131, v130, 1);
      if ( v132 != 0x8000000000000000LL && v132 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v132, 1);
      if ( v134 != 0x8000000000000000LL && v134 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v134, 1);
      if ( v137 != 0x8000000000000000LL && v137 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, v137, 1);
      if ( v139 != 0x8000000000000000LL && v139 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, v139, 1);
      if ( v141 != 0x8000000000000000LL && v141 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, v141, 1);
      v39 = v90 + 36;
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::h540b6d169a39bb9c(&v124);
      if ( v39 == v187 )
        break;
    }
    else
    {
      if ( v50 < (__int64)0x8000000000000002LL )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, 0x8000000000000002LL, v47, v50);
        v65 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1);
        if ( !v65 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 53);
        qmemcpy(v65, "refreshed account snapshot has no API request context", 53);
        v66 = *v194;
        if ( *v194 != 0x8000000000000000LL && v66 )
        {
          v67 = v65;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v209 + 864), v66, 1);
          v65 = v67;
        }
        v68 = v209;
        *(_QWORD *)(v209 + 856) = 53;
        *(_QWORD *)(v68 + 864) = v65;
        *(_QWORD *)(v68 + 872) = 53;
        if ( v126[0] == 11 )
          goto LABEL_97;
LABEL_96:
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v126);
        goto LABEL_97;
      }
      codexmate_lib::core::api_client::test_api_connectivity::h8cf88c1487cf34c2(v153, &v162, 0);
      v69 = v153[7];
      v70 = 0x8000000000000000LL;
      if ( !LOBYTE(v153[7]) )
      {
        v148 = v153[5];
        v171 = v153[4];
        v70 = v153[3];
      }
      v71 = (_QWORD *)v209;
      if ( __src[34] < *(_QWORD *)(v209 + 824) && *(_BYTE *)(*(_QWORD *)(v209 + 816) + 352LL * __src[34] + 337) )
      {
        *(_BYTE *)(v209 + 1064) = 2 - LOBYTE(v153[7]);
        v72 = v71[114];
        if ( v72 != 0x8000000000000000LL && v72 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71[115], v71[114], 1);
        v71[114] = v70;
        v71[115] = v171;
        v71[116] = v148;
        v73 = v153[0];
        if ( !v153[0] )
          goto LABEL_83;
LABEL_82:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v153[1], v73, 1);
        goto LABEL_83;
      }
      if ( !(2 * v70) )
      {
        v73 = v153[0];
        if ( !v153[0] )
          goto LABEL_83;
        goto LABEL_82;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v171, v70, 1);
      v73 = v153[0];
      if ( v153[0] )
        goto LABEL_82;
LABEL_83:
      if ( !v69 || !v153[3] )
      {
LABEL_95:
        if ( v126[0] == 11 )
          goto LABEL_97;
        goto LABEL_96;
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v153[4], v153[3], 1);
      if ( v126[0] != 11 )
        goto LABEL_96;
LABEL_97:
      if ( v166 >= (__int64)0x8000000000000004LL && v166 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v167, v166, 1);
      if ( v128 != 0x8000000000000000LL && v128 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v128, 1);
      if ( v130 != 0x8000000000000000LL && v130 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v131, v130, 1);
      if ( v132 != 0x8000000000000000LL && v132 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v132, 1);
      if ( v134 != 0x8000000000000000LL && v134 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v134, 1);
      if ( v137 != 0x8000000000000000LL && v137 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, v137, 1);
      if ( v139 != 0x8000000000000000LL && v139 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, v139, 1);
      if ( v141 != 0x8000000000000000LL && v141 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, v141, 1);
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::h540b6d169a39bb9c(&v124);
      v39 = v143;
      if ( v143 == v187 )
        break;
    }
  }
  v183 = v195;
  v182 = v198;
  HIDWORD(v185) = v197;
  HIDWORD(v186) = v193;
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he26f45e4b53073f3(v127);
  v102 = v179;
  v103 = v180;
  codexmate_lib::core::repository::sync_token_status_to_quota_store::h24c451f74bbb7254(v209, v179, v180);
  v105 = *(_QWORD *)(v209 + 816) - 352LL;
  v106 = 352LL * *(_QWORD *)(v209 + 824);
  while ( v106 )
  {
    v107 = v105 + 352;
    v106 -= 352;
    v108 = *(_BYTE *)(v105 + 689) == 1;
    v105 += 352;
    if ( v108 )
    {
      _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::ha356b051e79eb358(
        &v124,
        v107,
        v104,
        v106);
      v109 = v124;
      memcpy(__dst, __src, sizeof(__dst));
      v110 = v209;
      if ( *(_DWORD *)(v209 + 152) == 2 )
        goto LABEL_217;
      goto LABEL_216;
    }
  }
  v109 = 2;
  v110 = v209;
  if ( *(_DWORD *)(v209 + 152) == 2 )
    goto LABEL_217;
LABEL_216:
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::ha9ef2ee67a69a95e(v110 + 152);
LABEL_217:
  *(_QWORD *)(v110 + 152) = v109;
  memcpy((void *)(v110 + 160), __dst, 0x158u);
  __dst[0] = std::time::SystemTime::now::h1fe79e41f9d5677f();
  LODWORD(__dst[1]) = v116;
  std::time::SystemTime::duration_since::had059553cab94f96(&v124, __dst, 0, 0);
  v117 = v150;
  if ( (_BYTE)v124 )
    v118 = 0;
  else
    v118 = __src[0];
  v119 = v209;
  *(_QWORD *)(v209 + 1056) = v118;
  v124 = 0x8000000000000000LL;
  codexmate_lib::core::repository::finish_refresh_report::hb34fa1ee83dfe100(v119, 1, &v124, v117, &v181);
  if ( v103 )
  {
    v120 = (_QWORD *)(v102 + 8);
    do
    {
      v121 = *(v120 - 1);
      if ( v121 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v120, v121, 1);
      v120 += 3;
      --v103;
    }
    while ( v103 );
  }
  if ( v178 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, 24 * v178, 8);
  v115 = v200;
  v19 = v208;
  if ( v200 )
LABEL_228:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189, v115, 1);
LABEL_229:
  if ( __n )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v188, __n, 1);
  result = 0x8000000000000000LL;
  if ( v19 != 0x8000000000000000LL )
  {
    if ( v19 )
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v163, v19, 1);
  }
  return result;
}
