// __ZN13codexmate_lib4core11oauth_login24exchange_code_for_tokens @ 0x1008e6e70 | 基线 same-set
// [FULL IDA decompiler]

__int64 __fastcall codexmate_lib::core::oauth_login::exchange_code_for_tokens::h1913bb75a3d151a4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8)
{
  __int64 v12; // rax
  __m128i si128; // xmm0
  __int64 v14; // rcx
  signed __int64 epi64; // r13
  unsigned __int8 v16; // bl
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r14
  __int64 v19; // r13
  void *v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int128 v22; // kr10_16
  __m128i *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rsi
  void *v29; // rax
  __int64 v30; // rdx
  unsigned __int128 v31; // kr00_16
  __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rbx
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 *v53; // rcx
  unsigned __int64 v54; // rsi
  __m128i *v55; // rdi
  unsigned __int128 *v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r10
  __m128i *v61; // r13
  __int64 *v62; // rbx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rsi
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // rsi
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rcx
  __int64 v83; // rdx
  unsigned __int64 v84; // rdi
  __int64 v85; // r8
  __int64 v86; // rdi
  __m128i *v87; // rdi
  _OWORD *v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rcx
  signed __int64 v91; // r8
  __int64 v92; // rbx
  __int64 v93; // r13
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  __int128 *v96; // r14
  __int64 *v97; // rbx
  __int64 v98; // rax
  unsigned __int64 v99; // rcx
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  unsigned __int64 v102; // rax
  __int64 v103; // rcx
  unsigned __int64 v104; // rsi
  __int64 v105; // rdi
  __int64 v106; // rsi
  __int128 *v107; // rdi
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rax
  __int64 v110; // rdx
  unsigned __int64 v111; // rax
  __int64 v112; // rcx
  unsigned __int64 v113; // rsi
  __int64 v114; // rdi
  __int64 v115; // rsi
  __m128i *v116; // r13
  __m128i *v117; // rbx
  signed __int64 v118; // rsi
  __int64 v119; // rax
  unsigned __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rbx
  unsigned __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // r8
  unsigned __int64 v126; // rdi
  __int64 v127; // rdi
  __m128i v128; // kr90_16
  __int64 v129; // r13
  __int64 v130; // rbx
  __m128i v131; // krA0_16
  __m128i v132; // xmm0
  __int64 v133; // rdx
  __int64 v134; // rax
  unsigned __int64 v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // rbx
  __int64 v138; // rdx
  unsigned __int64 v139; // rcx
  __int64 v140; // rbx
  __int64 v141; // rsi
  __int64 v142; // rdx
  __int64 v143; // r14
  __int64 v144; // rbx
  __int64 v145; // rcx
  unsigned __int64 v146; // rsi
  __int64 v147; // rsi
  int v148; // esi
  int v149; // eax
  unsigned __int128 v150; // rdi
  int v151; // eax
  int v152; // eax
  unsigned __int64 v153; // r14
  __int64 v154; // rbx
  unsigned __int8 *v155; // rbx
  size_t v156; // rdx
  size_t v157; // r14
  __int64 v158; // rax
  __int64 v159; // rcx
  int v160; // edx
  unsigned __int64 v161; // rdx
  __int64 v162; // rbx
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rdi
  __int64 v168; // rax
  __int64 *v169; // rcx
  __int64 v170; // rax
  _OWORD __src[11]; // [rsp+10h] [rbp-6D0h] BYREF
  char *v172; // [rsp+C0h] [rbp-620h]
  __int64 v173; // [rsp+C8h] [rbp-618h]
  char *v174; // [rsp+D0h] [rbp-610h]
  __int64 v175; // [rsp+D8h] [rbp-608h]
  int *v176; // [rsp+E0h] [rbp-600h]
  __int64 v177; // [rsp+E8h] [rbp-5F8h]
  __int64 v178; // [rsp+F0h] [rbp-5F0h]
  __int64 v179; // [rsp+F8h] [rbp-5E8h]
  void *v180; // [rsp+100h] [rbp-5E0h]
  __int64 v181; // [rsp+108h] [rbp-5D8h]
  void *v182; // [rsp+110h] [rbp-5D0h]
  __int64 v183; // [rsp+118h] [rbp-5C8h]
  void *v184; // [rsp+120h] [rbp-5C0h]
  __int64 v185; // [rsp+128h] [rbp-5B8h]
  void *v186; // [rsp+130h] [rbp-5B0h]
  __int64 v187; // [rsp+138h] [rbp-5A8h]
  char *v188; // [rsp+140h] [rbp-5A0h]
  __int64 v189; // [rsp+148h] [rbp-598h]
  __int64 v190; // [rsp+150h] [rbp-590h]
  __int64 v191; // [rsp+158h] [rbp-588h]
  _QWORD v192[3]; // [rsp+160h] [rbp-580h] BYREF
  _QWORD v193[3]; // [rsp+178h] [rbp-568h] BYREF
  __int128 v194; // [rsp+190h] [rbp-550h]
  __int128 v195; // [rsp+1A0h] [rbp-540h]
  __int64 v196; // [rsp+1B0h] [rbp-530h]
  __int64 v197; // [rsp+1B8h] [rbp-528h]
  __int64 v198; // [rsp+1C0h] [rbp-520h]
  __int128 v199; // [rsp+1C8h] [rbp-518h] BYREF
  __int64 v200; // [rsp+1D8h] [rbp-508h]
  unsigned __int128 v201; // [rsp+1E0h] [rbp-500h] BYREF
  __m128i v202; // [rsp+1F0h] [rbp-4F0h]
  unsigned __int64 v203; // [rsp+200h] [rbp-4E0h]
  unsigned __int128 v204; // [rsp+208h] [rbp-4D8h]
  __m128i v205; // [rsp+218h] [rbp-4C8h]
  unsigned __int64 v206; // [rsp+228h] [rbp-4B8h]
  unsigned __int128 v207; // [rsp+230h] [rbp-4B0h]
  __int64 v208; // [rsp+240h] [rbp-4A0h]
  _BYTE v209[72]; // [rsp+248h] [rbp-498h] BYREF
  _OWORD __dst[21]; // [rsp+290h] [rbp-450h] BYREF
  __m128i v211; // [rsp+3E0h] [rbp-300h] BYREF
  __int64 v212; // [rsp+3F0h] [rbp-2F0h]
  unsigned __int128 v213; // [rsp+3F8h] [rbp-2E8h]
  __m128i v214; // [rsp+408h] [rbp-2D8h]
  __int128 v215; // [rsp+418h] [rbp-2C8h] BYREF
  __int64 v216; // [rsp+428h] [rbp-2B8h]
  __int128 v217; // [rsp+430h] [rbp-2B0h]
  __int64 v218; // [rsp+440h] [rbp-2A0h]
  __m128i v219; // [rsp+448h] [rbp-298h]
  unsigned __int64 v220; // [rsp+458h] [rbp-288h]
  unsigned __int128 v221; // [rsp+460h] [rbp-280h]
  __m128i v222; // [rsp+470h] [rbp-270h]
  __int128 *v223; // [rsp+480h] [rbp-260h] BYREF
  char v224; // [rsp+488h] [rbp-258h]
  __m128i v225[11]; // [rsp+490h] [rbp-250h] BYREF
  __int64 v226; // [rsp+540h] [rbp-1A0h]
  __int64 v227; // [rsp+548h] [rbp-198h]
  __int64 v228; // [rsp+5D8h] [rbp-108h]
  unsigned __int128 v229; // [rsp+5E0h] [rbp-100h] BYREF
  __m128i v230; // [rsp+5F0h] [rbp-F0h]
  unsigned __int64 v231; // [rsp+600h] [rbp-E0h]
  unsigned __int128 v232; // [rsp+608h] [rbp-D8h]
  __m128i v233; // [rsp+618h] [rbp-C8h]
  __int64 v234; // [rsp+628h] [rbp-B8h]
  unsigned __int128 v235; // [rsp+630h] [rbp-B0h] BYREF
  __m128i v236; // [rsp+640h] [rbp-A0h]
  unsigned __int64 v237; // [rsp+650h] [rbp-90h]
  unsigned __int128 v238; // [rsp+658h] [rbp-88h]
  __int64 v239; // [rsp+668h] [rbp-78h]
  __int64 v240; // [rsp+670h] [rbp-70h]
  __int64 *v241; // [rsp+678h] [rbp-68h]
  char *v242; // [rsp+680h] [rbp-60h]
  __int64 v243; // [rsp+688h] [rbp-58h]
  char v244; // [rsp+697h] [rbp-49h] BYREF
  signed __int64 v245; // [rsp+698h] [rbp-48h]
  __int64 v246; // [rsp+6A0h] [rbp-40h]
  signed __int64 v247; // [rsp+6A8h] [rbp-38h]
  __int64 v248; // [rsp+6B0h] [rbp-30h]

  codexmate_lib::core::api_client::http_client::hd6199412cc486f7f((__int64)v225, a6, a7, *(double *)a8.i64);
  *(_QWORD *)&__dst[0] = v225[0].i64[1];
  v12 = v225[0].i64[0];
  *(__m128i *)((char *)__dst + 8) = v225[1];
  if ( v225[0].i64[0] != 11 )
  {
    *(__m128i *)(a1 + 88) = v225[5];
    *(__m128i *)(a1 + 72) = v225[4];
    *(__m128i *)(a1 + 56) = v225[3];
    *(__m128i *)(a1 + 40) = v225[2];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&__dst[1];
    *(_OWORD *)(a1 + 16) = __dst[0];
    *(_QWORD *)(a1 + 8) = v12;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    return a1;
  }
  v199 = __dst[0];
  v200 = *(_QWORD *)&__dst[1];
  v172 = "grant_typeauthorization_codecode_verifierhttps://auth.openai.com/oauth/tokenUser-AgentAiMaMi/1.2.3Acceptcodexmate_lib::core::oauth_login";
  v173 = 10;
  v174 = "authorization_codecode_verifierhttps://auth.openai.com/oauth/tokenUser-AgentAiMaMi/1.2.3Acceptcodexmate_lib::core::oauth_login";
  v175 = 18;
  v176 = &anon_155c4da9b5393270cfa7378e2b52c417_159;
  v177 = 4;
  v178 = a2;
  v179 = a3;
  v180 = &anon_155c4da9b5393270cfa7378e2b52c417_168;
  v181 = 12;
  v182 = &anon_155c4da9b5393270cfa7378e2b52c417_169;
  v183 = 35;
  v184 = &anon_155c4da9b5393270cfa7378e2b52c417_166;
  v185 = 9;
  v186 = &anon_155c4da9b5393270cfa7378e2b52c417_167;
  v187 = 28;
  v188 = "code_verifierhttps://auth.openai.com/oauth/tokenUser-AgentAiMaMi/1.2.3Acceptcodexmate_lib::core::oauth_login";
  v189 = 13;
  v190 = a4;
  v191 = a5;
  *(_QWORD *)&__dst[1] = 0x202020202020202LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_101601D20);
  __dst[0] = si128;
  reqwest::blocking::client::Client::request::h7c2f6eecf4bb7488(v225);
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__dst, v225, 0);
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(v225, __dst, 0);
  reqwest::blocking::request::RequestBuilder::timeout::hb8eadb3e43e5e543(__dst, v225);
  reqwest::blocking::request::RequestBuilder::form::hc58fb065f660b593(v225, __dst);
  reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(&v201, v225);
  if ( (_QWORD)v201 == 3 )
  {
    *(_QWORD *)&v215 = *((_QWORD *)&v201 + 1);
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)&__dst[0] = &v215;
      *((_QWORD *)&__dst[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
      v225[3].i64[0] = 2;
      v225[3].i64[1] = (__int64)"codexmate_lib::core::oauth_login";
      v225[4].i64[0] = 32;
      v225[5].i64[0] = (__int64)&unk_1017C707E;
      v225[5].i64[1] = (__int64)__dst;
      v225[0].i64[0] = 0;
      v225[0].i64[1] = (__int64)"codexmate_lib::core::oauth_login";
      v225[1] = (__m128i)0x20uLL;
      v225[2].i64[0] = (__int64)"src/core/oauth_login.rs";
      v225[2].i64[1] = 23;
      v225[4].i64[1] = 0x19100000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v244, v225);
    }
    *(_QWORD *)&__dst[0] = &v215;
    *((_QWORD *)&__dst[0] + 1) = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v225, &unk_1017C70AE, __dst);
    __dst[0] = v225[0];
    *(_QWORD *)&__dst[1] = v225[1].i64[0];
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v215);
    v212 = *(_QWORD *)&__dst[1];
    v219 = (__m128i)__dst[0];
    v220 = *(_QWORD *)&__dst[1];
    v235 = v229;
    v236 = v230;
    v237 = v231;
    v238 = v232;
    v239 = v233.i64[0];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&__dst[1];
    *(__m128i *)(a1 + 16) = v219;
    v14 = *((_QWORD *)&v235 + 1);
    *(_QWORD *)(a1 + 40) = v235;
    *(_QWORD *)(a1 + 48) = v14;
    *(__m128i *)(a1 + 56) = v236;
    *(_QWORD *)(a1 + 72) = v237;
    *(_OWORD *)(a1 + 80) = v238;
    *(_QWORD *)(a1 + 96) = v239;
    *(_QWORD *)(a1 + 8) = 10;
    goto LABEL_20;
  }
  v211 = v202;
  v212 = v203;
  v229 = v204;
  v230 = v205;
  v231 = v206;
  v232 = v207;
  v233.i64[0] = v208;
  qmemcpy((char *)&__src[6] + 8, v209, 0x48u);
  v219 = v202;
  v220 = v203;
  v235 = v204;
  v236 = v205;
  v237 = v206;
  v238 = v207;
  v239 = v208;
  *(_QWORD *)&__src[2] = v203;
  __src[1] = v202;
  *(_QWORD *)&__src[6] = v208;
  __src[5] = v207;
  *((_QWORD *)&__src[4] + 1) = v206;
  *(__m128i *)((char *)&__src[3] + 8) = v205;
  *(_OWORD *)((char *)&__src[2] + 8) = v204;
  __src[0] = v201;
  epi64 = WORD4(__src[6]);
  v16 = reqwest::blocking::response::Response::content_length::hf7ed9fda65e5734e(__src);
  v18 = v17;
  memcpy(__dst, __src, 0xB0u);
  if ( (v16 & (v18 >= 0x40001)) == 1 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src);
    v19 = 47;
    v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1);
    if ( !v20 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47);
    v21 = (unsigned __int64)v20;
    qmemcpy(v20, "token endpoint response exceeded the size limit", 47);
    core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(__dst);
    v22 = __PAIR128__(v21, 47);
    goto LABEL_19;
  }
  *(_QWORD *)&v229 = 0;
  *((_QWORD *)&v229 + 1) = 1;
  v230.i64[0] = 0;
  v23 = v225;
  memcpy(v225, __src, sizeof(v225));
  v226 = 262145;
  v227 = 262145;
  if ( (std::io::default_read_to_end::hea609f3c6996a6a8(v225, &v229, 0) & 1) != 0 )
  {
    v211.i64[0] = v24;
    *(_QWORD *)&v235 = &v211;
    *((_QWORD *)&v235 + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v201, &unk_1017C4EC4, &v235);
    v22 = v201;
    v19 = v202.i64[0];
    if ( (v211.i8[0] & 3) == 1 )
    {
      v234 = v211.i64[0] - 1;
      v240 = *(_QWORD *)(v211.i64[0] - 1);
      v25 = *(_QWORD *)(v211.i64[0] + 7);
      if ( *(_QWORD *)v25 )
        (*(void (__fastcall **)(__int64))v25)(v240);
      v26 = *(_QWORD *)(v25 + 8);
      if ( v26 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v240, v26, *(_QWORD *)(v25 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234, 24, 8);
    }
    core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(v225);
    v27 = v229;
    if ( !(_QWORD)v229 )
      goto LABEL_19;
    goto LABEL_18;
  }
  core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(v225);
  if ( v230.i64[0] >= 0x40001uLL )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v225, &v229);
    v19 = 47;
    v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1);
    if ( !v29 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47);
    qmemcpy(v29, "token endpoint response exceeded the size limit", 47);
    v27 = v229;
    v22 = __PAIR128__((unsigned __int64)v29, 47);
    if ( !(_QWORD)v229 )
      goto LABEL_19;
LABEL_18:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v229 + 1), v27, 1);
LABEL_19:
    *(_QWORD *)(a1 + 8) = 10;
    *(_OWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 32) = v19;
LABEL_20:
    *(_QWORD *)a1 = 0x8000000000000001LL;
    goto LABEL_21;
  }
  v30 = *((_QWORD *)&v229 + 1);
  v31 = v229;
  v240 = v31 >> 64;
  v234 = v31;
  if ( (unsigned __int16)(epi64 - 200) >= 0x64u )
  {
    v236.i64[1] = *((_QWORD *)&v229 + 1);
    v237 = v230.i64[0];
    *(_QWORD *)&v235 = 0;
    v238 = 0u;
    *((_QWORD *)&v235 + 1) = 1;
    v236.i64[0] = 0;
    LOBYTE(v239) = 0x80;
    if ( !v230.i64[0] )
    {
LABEL_42:
      v225[0].i64[0] = 5;
      v45 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(&v235, v225);
      goto LABEL_43;
    }
    v41 = 1;
    v42 = 0x100002600LL;
    while ( 1 )
    {
      v43 = *(unsigned __int8 *)(v30 + v41 - 1);
      if ( v43 > 0x20 || !_bittest64(&v42, v43) )
        break;
      *(_QWORD *)&v238 = v41;
      v44 = v41 - v230.i64[0] + 1;
      ++v41;
      v36 = v44 == 1;
      v30 = v240;
      if ( v36 )
        goto LABEL_42;
    }
    if ( (_DWORD)v43 != 91 )
    {
      if ( (_DWORD)v43 == 123 )
      {
        LOBYTE(v239) = 127;
        *(_QWORD *)&v238 = v41;
        v223 = (__int128 *)&v235;
        v224 = 1;
        v95 = 0x8000000000000001LL;
        v248 = 0x8000000000000003LL;
        *(_QWORD *)&__dst[0] = 0x8000000000000003LL;
        v246 = *((_QWORD *)&__dst[0] + 1);
        v242 = (char *)&unk_101676EC8;
        while ( 1 )
        {
          v247 = v95;
          while ( 1 )
          {
            _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::hcaedb3085ebd9c68(
              v225,
              &v223);
            if ( v225[0].i8[0] == 1 )
            {
              *(_QWORD *)&__dst[0] = v248;
              *((_QWORD *)&__dst[0] + 1) = v246;
              v98 = v225[0].i64[1];
              goto LABEL_205;
            }
            if ( v225[0].i8[1] != 1 )
            {
              *(_QWORD *)&__dst[0] = v248;
              *((_QWORD *)&__dst[0] + 1) = v246;
              if ( v248 == 0x8000000000000003LL )
              {
                v248 = 0x8000000000000002LL;
              }
              else
              {
                v196 = *((_QWORD *)&__dst[2] + 1);
                v195 = *(_OWORD *)((char *)&__dst[1] + 8);
                v194 = *(_OWORD *)((char *)__dst + 8);
              }
              v42 = 0x100002600LL;
              v98 = v245;
              v107 = (__int128 *)v243;
              v139 = 0x8000000000000000LL;
              if ( v247 != 0x8000000000000001LL )
                v139 = v247;
              v138 = v248;
              goto LABEL_254;
            }
            v96 = v223;
            v97 = (__int64 *)v223 + 3;
            ++*((_QWORD *)v223 + 5);
            *((_QWORD *)v96 + 2) = 0;
            _$LT$serde_json..read..SliceRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hbdd8f4e603095713(
              v225,
              v97,
              v96);
            v98 = v225[0].i64[1];
            if ( v225[0].i64[0] == 2 )
              goto LABEL_198;
            if ( v225[1].i64[0] != 10 )
              break;
            if ( *(_QWORD *)v225[0].i64[1] ^ 0x6F635F726F727265LL | *(unsigned __int16 *)(v225[0].i64[1] + 8) ^ 0x6564LL )
            {
LABEL_118:
              v98 = serde_core::de::MapAccess::next_value::he286195e39f1c57c(v96);
              if ( v98 )
              {
LABEL_198:
                *(_QWORD *)&__dst[0] = v248;
                *((_QWORD *)&__dst[0] + 1) = v246;
                goto LABEL_205;
              }
            }
            else
            {
              if ( v247 != 0x8000000000000001LL )
              {
                v170 = 10;
                v242 = "error_codegrant_typeauthorization_codecode_verifierhttps://auth.openai.com/oauth/tokenUser-AgentAiMaMi/1.2.3Acceptcodexmate_lib::core::oauth_login";
                goto LABEL_345;
              }
              v99 = *((_QWORD *)v96 + 4);
              v100 = *((_QWORD *)v96 + 5);
              if ( v100 >= v99 )
              {
LABEL_325:
                *(_QWORD *)&__dst[0] = v248;
                *((_QWORD *)&__dst[0] + 1) = v246;
                v225[0].i64[0] = 3;
                v247 = 0x8000000000000001LL;
                v241 = (__int64 *)v248;
                v107 = v96;
                v98 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v96, v225);
                goto LABEL_208;
              }
              v101 = *v97;
              v102 = v100 + 1;
              v103 = -(__int64)v99;
              while ( 1 )
              {
                v104 = *(unsigned __int8 *)(v101 + v102 - 1);
                if ( v104 > 0x3A )
                  goto LABEL_346;
                v105 = 0x100002600LL;
                if ( !_bittest64(&v105, v104) )
                  break;
                *((_QWORD *)v96 + 5) = v102;
                v106 = v103 + v102++ + 1;
                if ( v106 == 1 )
                  goto LABEL_325;
              }
              if ( v104 != 58 )
              {
LABEL_346:
                *(_QWORD *)&__dst[0] = v248;
                *((_QWORD *)&__dst[0] + 1) = v246;
                v225[0].i64[0] = 6;
                v247 = 0x8000000000000001LL;
                v241 = (__int64 *)v248;
                v107 = v96;
                v98 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v96, v225);
LABEL_208:
                v42 = 0x100002600LL;
LABEL_209:
                v138 = v248;
                if ( (unsigned __int64)(v248 + 0x7FFFFFFFFFFFFFFELL) < 2 )
                {
                  v139 = 0x8000000000000001LL;
                  goto LABEL_254;
                }
                v139 = 0x8000000000000001LL;
                if ( v248 == 0x8000000000000001LL )
                {
                  if ( *((_QWORD *)&__dst[0] + 1) )
                  {
                    v107 = *(__int128 **)&__dst[1];
                    v140 = v98;
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[1], *((_QWORD *)&__dst[0] + 1), 1);
                    goto LABEL_218;
                  }
                }
                else
                {
                  v107 = __dst;
                  v140 = v98;
                  core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_login..TokenErrorDetail$GT$::h46abd59075110172(__dst);
LABEL_218:
                  v98 = v140;
                  v42 = 0x100002600LL;
                  v139 = 0x8000000000000001LL;
                }
LABEL_254:
                LOBYTE(v239) = v239 + 1;
                *(_QWORD *)&__dst[0] = v139;
                *((_QWORD *)&__dst[0] + 1) = v98;
                *(_QWORD *)&__dst[1] = v107;
                *((_QWORD *)&__dst[1] + 1) = v138;
                __dst[2] = v194;
                __dst[3] = v195;
                *(_QWORD *)&__dst[4] = v196;
                v143 = serde_json::de::Deserializer$LT$R$GT$::end_map::hfa6c06df85b8f99a(&v235);
                qmemcpy(v225, __dst, 0x48u);
                v225[4].i64[1] = v143;
                v248 = v225[0].i64[0];
                if ( v225[0].i64[0] == 0x8000000000000001LL )
                {
                  v144 = v225[0].i64[1];
                  if ( v143 )
                    goto LABEL_256;
                  goto LABEL_257;
                }
LABEL_258:
                v247 = v143;
                if ( v143 )
                {
                  core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_login..TokenErrorResponse$GT$::h1038f0bfa0caf66d(v225);
                  v248 = 0x8000000000000001LL;
                }
                else
                {
                  v247 = v225[0].i64[1];
                  v211 = v225[1];
                  v212 = v225[2].i64[0];
                  v213 = *(unsigned __int128 *)((char *)&v225[2] + 8);
                  v214 = *(__m128i *)((char *)&v225[3] + 8);
                }
                goto LABEL_261;
              }
              *((_QWORD *)v96 + 5) = v102;
              v107 = &v215;
              _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8f1c815668dccad0(
                &v215,
                v96);
              v245 = *((_QWORD *)&v215 + 1);
              v247 = v215;
              if ( (_QWORD)v215 == 0x8000000000000001LL )
              {
                *(_QWORD *)&__dst[0] = v248;
                *((_QWORD *)&__dst[0] + 1) = v246;
                v98 = v245;
                goto LABEL_208;
              }
              v243 = v216;
            }
          }
          if ( v225[1].i64[0] != 5
            || *(_DWORD *)v225[0].i64[1] ^ 0x6F727265 | *(unsigned __int8 *)(v225[0].i64[1] + 4) ^ 0x72 )
          {
            goto LABEL_118;
          }
          v241 = (__int64 *)0x8000000000000003LL;
          if ( v248 != 0x8000000000000003LL )
          {
            v170 = 5;
LABEL_345:
            *(_QWORD *)&__dst[0] = v248;
            *((_QWORD *)&__dst[0] + 1) = v246;
            *(_QWORD *)&v215 = v242;
            *((_QWORD *)&v215 + 1) = v170;
            v225[0].i64[0] = (__int64)&v215;
            v225[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            v241 = (__int64 *)v248;
            v98 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_12);
            goto LABEL_205;
          }
          v108 = *((_QWORD *)v96 + 4);
          v109 = *((_QWORD *)v96 + 5);
          if ( v109 >= v108 )
          {
LABEL_323:
            *(_QWORD *)&__dst[0] = v248;
            *((_QWORD *)&__dst[0] + 1) = v246;
            *(_QWORD *)&v215 = 3;
            v98 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v96, &v215);
            goto LABEL_324;
          }
          v110 = *v97;
          v111 = v109 + 1;
          v112 = -(__int64)v108;
          while ( 1 )
          {
            v113 = *(unsigned __int8 *)(v110 + v111 - 1);
            if ( v113 > 0x3A )
              goto LABEL_347;
            v114 = 0x100002600LL;
            if ( !_bittest64(&v114, v113) )
              break;
            *((_QWORD *)v96 + 5) = v111;
            v115 = v112 + v111++ + 1;
            if ( v115 == 1 )
              goto LABEL_323;
          }
          if ( v113 != 58 )
          {
LABEL_347:
            *(_QWORD *)&__dst[0] = v248;
            *((_QWORD *)&__dst[0] + 1) = v246;
            *(_QWORD *)&v215 = 6;
            v98 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v96, &v215);
LABEL_324:
            v248 = 0x8000000000000003LL;
LABEL_205:
            v42 = 0x100002600LL;
            v107 = (__int128 *)v245;
            if ( v247 >= (__int64)0x8000000000000002LL && v247 )
            {
              v137 = v98;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v245, v247, 1);
              v98 = v137;
              goto LABEL_208;
            }
            goto LABEL_209;
          }
          *((_QWORD *)v96 + 5) = v111;
          v241 = (__int64 *)0x8000000000000003LL;
          _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h7cdc38e5cb15f77e(
            v225,
            v96);
          v98 = v225[0].i64[1];
          if ( v225[0].i64[0] == 0x8000000000000003LL )
          {
            *(_QWORD *)&__dst[0] = v248;
            *((_QWORD *)&__dst[0] + 1) = v246;
            v248 = 0x8000000000000003LL;
            goto LABEL_205;
          }
          *((_QWORD *)&__dst[2] + 1) = v225[2].i64[1];
          *(__m128i *)((char *)&__dst[1] + 8) = *(__m128i *)((char *)&v225[1] + 8);
          *(_QWORD *)&__dst[1] = v225[1].i64[0];
          v246 = v225[0].i64[1];
          v248 = v225[0].i64[0];
          v95 = v247;
        }
      }
      v247 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h4ef594b3fffe3a76(&v235, &v244, &unk_10196F138);
      goto LABEL_332;
    }
    LOBYTE(v239) = 127;
    *(_QWORD *)&v238 = v41;
    v223 = (__int128 *)&v235;
    v224 = 1;
    v134 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::he7294f6e650d0ace(
             v225,
             &v223);
    if ( v225[0].i8[0] == 1 )
    {
      v18 = v225[0].u64[1];
      v135 = 0x8000000000000001LL;
LABEL_251:
      LOBYTE(v239) = v239 + 1;
      *(_QWORD *)&__dst[0] = v135;
      *((_QWORD *)&__dst[0] + 1) = v18;
      *(_QWORD *)&__dst[1] = v134;
      *(_OWORD *)((char *)&__dst[1] + 8) = v215;
      *((_QWORD *)&__dst[2] + 1) = v216;
      __dst[3] = v217;
      *(_QWORD *)&__dst[4] = v218;
      v143 = serde_json::de::Deserializer$LT$R$GT$::end_seq::hb489422c1c9c692e(&v235);
      qmemcpy(v225, __dst, 0x48u);
      v225[4].i64[1] = v143;
      v248 = v225[0].i64[0];
      if ( v225[0].i64[0] != 0x8000000000000001LL )
        goto LABEL_258;
      v144 = v225[0].i64[1];
      if ( v143 )
      {
LABEL_256:
        core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v143);
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, 40, 8);
      }
LABEL_257:
      v248 = 0x8000000000000001LL;
      v247 = v144;
      v42 = 0x100002600LL;
LABEL_261:
      if ( v248 == 0x8000000000000001LL )
      {
LABEL_332:
        v45 = serde_json::error::Error::fix_position::h534e7659efc88742(v247, &v235);
LABEL_43:
        v46 = v45;
        v47 = v235;
        if ( !(_QWORD)v235 )
        {
LABEL_45:
          core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v46);
          v48 = 40;
          v49 = 8;
          v50 = v46;
          goto LABEL_46;
        }
LABEL_44:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v235 + 1), v47, 1);
        goto LABEL_45;
      }
      v222 = v214;
      v221 = v213;
      v220 = v212;
      v219 = v211;
      *(_QWORD *)&v201 = v248;
      *((_QWORD *)&v201 + 1) = v247;
      v205 = v214;
      v204 = v213;
      v203 = v212;
      v202 = v211;
      if ( (unsigned __int64)v238 < v237 )
      {
        v145 = v238 + 1;
        while ( 1 )
        {
          v146 = *(unsigned __int8 *)(v236.i64[1] + v145 - 1);
          if ( v146 > 0x20 || !_bittest64(&v42, v146) )
            break;
          *(_QWORD *)&v238 = v145;
          v147 = v145 - v237 + 1;
          ++v145;
          if ( v147 == 1 )
            goto LABEL_267;
        }
        v225[0].i64[0] = 22;
        v46 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(&v235, v225);
        core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_login..TokenErrorResponse$GT$::h1038f0bfa0caf66d(&v201);
        v47 = v235;
        if ( !(_QWORD)v235 )
          goto LABEL_45;
        goto LABEL_44;
      }
LABEL_267:
      v148 = v235;
      if ( (_QWORD)v235 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v235 + 1), v235, 1);
      v230 = v219;
      v231 = v220;
      v232 = v221;
      v233 = v222;
      *(_QWORD *)&v229 = v248;
      *((_QWORD *)&v229 + 1) = v247;
      if ( v219.i64[1] == 0x8000000000000001LL )
      {
        v151 = v231;
        v246 = v231;
        v150 = v232;
        LOBYTE(v151) = 1;
        LODWORD(v243) = v151;
        LODWORD(v241) = 0;
        LOBYTE(v151) = 1;
        LODWORD(v245) = v151;
      }
      else
      {
        LOBYTE(v148) = 1;
        if ( v219.i64[1] == 0x8000000000000002LL )
        {
LABEL_271:
          v149 = 0;
          if ( v248 == 0x8000000000000000LL )
            goto LABEL_47;
          LODWORD(v243) = v148;
          *((_QWORD *)&v150 + 1) = v230.i64[0];
          LOBYTE(v149) = 1;
          LODWORD(v241) = v149;
          LODWORD(v245) = 0;
          *(_QWORD *)&v150 = v247;
          v246 = v248;
          goto LABEL_286;
        }
        v152 = DWORD2(v232);
        *(_QWORD *)&v150 = v233.i64[0];
        if ( v219.i64[1] == 0x8000000000000000LL )
        {
          if ( *((_QWORD *)&v232 + 1) == 0x8000000000000000LL )
          {
            v148 = 0;
            goto LABEL_271;
          }
          *((_QWORD *)&v150 + 1) = v233.i64[1];
          v246 = *((_QWORD *)&v232 + 1);
        }
        else
        {
          v246 = v219.i64[1];
          v153 = v231;
          *((_QWORD *)&v150 + 1) = v232;
          if ( 2LL * *((_QWORD *)&v232 + 1) )
          {
            v154 = v232;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v233.i64[0], *((_QWORD *)&v232 + 1), 1);
            *((_QWORD *)&v150 + 1) = v154;
          }
          *(_QWORD *)&v150 = v153;
        }
        LOBYTE(v152) = 1;
        LODWORD(v241) = v152;
        if ( 2 * v248 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v247, v248, 1);
        LODWORD(v243) = 0;
        LODWORD(v245) = 0;
      }
LABEL_286:
      v242 = (char *)v150;
      v155 = (unsigned __int8 *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                                  v150,
                                  *((_QWORD *)&v150 + 1));
      v157 = v156;
      if ( v156 - 65 > 0xFFFFFFFFFFFFFFBFLL )
      {
        v158 = 0;
        v159 = 0x4000000000003LL;
        do
        {
          v160 = v155[v158];
          if ( (unsigned __int8)(v160 - 48) >= 0xAu && (unsigned __int8)((v160 & 0xDF) - 65) >= 0x1Au )
          {
            v161 = (unsigned int)(v160 - 45);
            if ( (unsigned int)v161 > 0x32 || !_bittest64(&v159, v161) )
              goto LABEL_287;
          }
          ++v158;
        }
        while ( v157 != v158 );
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v225, v157, 0, 1, 1);
        v228 = v225[0].i64[1];
        if ( v225[0].i32[0] == 1 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v228, v225[1].i64[0]);
        v243 = v225[1].i64[0];
        memcpy((void *)v225[1].i64[0], v155, v157);
        if ( v246 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v242, v246, 1);
        v162 = v228;
        if ( !(((v248 & 0x7FFFFFFFFFFFFFFFLL) == 0) | (unsigned __int8)v245 ^ 1) )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v247, v248, 1);
        if ( v162 != 0x8000000000000000LL )
        {
          v163 = v243;
          *(_QWORD *)&v201 = v243;
          *((_QWORD *)&v201 + 1) = v157;
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
          {
            LOWORD(v229) = epi64;
            *(_QWORD *)&__dst[0] = &v229;
            *((_QWORD *)&__dst[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0;
            *(_QWORD *)&__dst[1] = &v201;
            *((_QWORD *)&__dst[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
            v225[0].i64[0] = (__int64)"codexmate_lib::core::oauth_login";
            v225[0].i64[1] = 32;
            v225[1].i64[0] = (__int64)"codexmate_lib::core::oauth_login";
            v225[1].i64[1] = 32;
            v225[2].i64[0] = (__int64)&off_10196D9B8;
            log::__private_api::log::h719f4907c7336ae9(&unk_1017C7050, __dst, 2, v225);
            v163 = v243;
          }
          v225[0].i64[1] = v163;
          v225[1].i64[0] = v157;
          v225[0].i64[0] = v162;
          *(_QWORD *)&v229 = v225;
          *((_QWORD *)&v229 + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C4E75, &v229);
          if ( v225[0].i64[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225[0].i64[1], v225[0].i64[0], 1);
          v201 = __dst[0];
          v202.i64[0] = *(_QWORD *)&__dst[1];
          goto LABEL_50;
        }
LABEL_47:
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
        {
          LOWORD(v201) = epi64;
          *(_QWORD *)&__dst[0] = &v201;
          *((_QWORD *)&__dst[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0;
          v225[0].i64[0] = (__int64)"codexmate_lib::core::oauth_login";
          v225[0].i64[1] = 32;
          v225[1].i64[0] = (__int64)"codexmate_lib::core::oauth_login";
          v225[1].i64[1] = 32;
          v225[2].i64[0] = (__int64)&off_10196D9A0;
          log::__private_api::log::h719f4907c7336ae9(&unk_1017C7010, __dst, 2, v225);
        }
        *(_QWORD *)&v201 = 0;
        *((_QWORD *)&v201 + 1) = 1;
        v202.i64[0] = 0;
LABEL_50:
        LOWORD(__dst[0]) = epi64;
        v225[0].i64[0] = (__int64)__dst;
        v225[0].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0;
        v225[1].i64[0] = (__int64)&v201;
        v225[1].i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v193, &unk_1017C4E5D, v225);
        *(_QWORD *)(a1 + 32) = v193[2];
        v51 = v193[0];
        *(_QWORD *)(a1 + 24) = v193[1];
        *(_QWORD *)(a1 + 16) = v51;
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)a1 = 0x8000000000000001LL;
        if ( (_QWORD)v201 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v201 + 1), v201, 1);
        goto LABEL_181;
      }
LABEL_287:
      if ( v246 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v242, v246, 1);
      v48 = v248;
      if ( (((v248 & 0x7FFFFFFFFFFFFFFFLL) != 0) & (unsigned __int8)v245) == 0 )
        goto LABEL_47;
      v49 = 1;
      v50 = v247;
LABEL_46:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v48, v49);
      goto LABEL_47;
    }
    if ( v225[0].i8[1] == 1 )
    {
      _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h7cdc38e5cb15f77e(
        v225,
        v223);
      v18 = v225[0].u64[1];
      v136 = v225[0].i64[0];
      v135 = 0x8000000000000001LL;
      v134 = 0x8000000000000003LL;
      if ( v225[0].i64[0] == 0x8000000000000003LL )
      {
LABEL_250:
        v42 = 0x100002600LL;
        goto LABEL_251;
      }
      *((_QWORD *)&__dst[2] + 1) = v225[2].i64[1];
      *(__m128i *)((char *)&__dst[1] + 8) = *(__m128i *)((char *)&v225[1] + 8);
      *(_QWORD *)&__dst[1] = v225[1].i64[0];
      *((_QWORD *)&__dst[0] + 1) = v225[0].i64[1];
      v248 = v225[0].i64[1];
    }
    else
    {
      v136 = 0x8000000000000002LL;
    }
    *(_QWORD *)&__dst[0] = v136;
    v134 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::he7294f6e650d0ace(
             v225,
             &v223);
    if ( v225[0].i8[0] == 1 )
    {
      v18 = v225[0].u64[1];
LABEL_230:
      v134 = 0x8000000000000002LL;
      if ( v136 != 0x8000000000000002LL )
      {
        v134 = 0x8000000000000001LL;
        if ( v136 == 0x8000000000000001LL )
        {
          if ( v248 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[1], v248, 1);
        }
        else
        {
          v134 = core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_login..TokenErrorDetail$GT$::h46abd59075110172(__dst);
        }
      }
      v135 = 0x8000000000000001LL;
      goto LABEL_250;
    }
    if ( v225[0].i8[1] == 1 )
    {
      _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8f1c815668dccad0(
        v225,
        v223);
      v18 = v225[0].u64[1];
      v142 = v225[0].i64[0];
      if ( v225[0].i64[0] == 0x8000000000000001LL )
        goto LABEL_230;
      v134 = v225[1].i64[0];
    }
    else
    {
      v142 = 0x8000000000000001LL;
    }
    v42 = 0x100002600LL;
    v135 = 0x8000000000000000LL;
    if ( v142 != 0x8000000000000001LL )
      v135 = v142;
    v218 = *((_QWORD *)&__dst[2] + 1);
    v217 = *(_OWORD *)((char *)&__dst[1] + 8);
    v216 = *(_QWORD *)&__dst[1];
    v215 = __dst[0];
    goto LABEL_251;
  }
  v202.i64[1] = *((_QWORD *)&v229 + 1);
  v203 = v230.i64[0];
  *(_QWORD *)&v201 = 0;
  v204 = 0u;
  *((_QWORD *)&v201 + 1) = 1;
  v202.i64[0] = 0;
  v205.i8[0] = 0x80;
  if ( !v230.i64[0] )
  {
LABEL_34:
    v225[0].i64[0] = 5;
    v37 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(&v201, v225);
    goto LABEL_35;
  }
  v32 = 1;
  v33 = 0x100002600LL;
  while ( 1 )
  {
    v34 = *(unsigned __int8 *)(v30 + v32 - 1);
    if ( v34 > 0x20 || !_bittest64(&v33, v34) )
      break;
    *(_QWORD *)&v204 = v32;
    v35 = v32 - v230.i64[0] + 1;
    ++v32;
    v36 = v35 == 1;
    v30 = v240;
    if ( v36 )
      goto LABEL_34;
  }
  if ( (_DWORD)v34 == 91 )
  {
    v205.i8[0] = 127;
    *(_QWORD *)&v204 = v32;
    *(_QWORD *)&__dst[0] = &v201;
    BYTE8(__dst[0]) = 1;
    v87 = v225;
    v88 = __dst;
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::he7294f6e650d0ace(
      v225,
      __dst);
    if ( v225[0].i8[0] == 1 )
    {
      v92 = v225[0].i64[1];
LABEL_155:
      v94 = 0x8000000000000001LL;
      goto LABEL_156;
    }
    if ( v225[0].i8[1] != 1 )
    {
      v88 = &off_10196E0E8;
      v87 = nullptr;
      v92 = serde_core::de::Error::invalid_length::ha846d443e92fc6f9(0, &off_10196E0E8, &unk_10196DFD8);
      goto LABEL_155;
    }
    v88 = *(_OWORD **)&__dst[0];
    v87 = v225;
    _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::hf41df19c612237cc(
      v225,
      *(_QWORD *)&__dst[0]);
    v92 = v225[0].i64[1];
    v93 = v225[0].i64[0];
    v94 = 0x8000000000000001LL;
    v90 = 0x8000000000000000LL;
    if ( v225[0].i64[0] == 0x8000000000000000LL )
    {
LABEL_156:
      v93 = 0x8000000000000000LL;
      goto LABEL_157;
    }
    v248 = 0x8000000000000000LL;
    v247 = v225[1].i64[0];
    v87 = v225;
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::he7294f6e650d0ace(
      v225,
      __dst);
    if ( v225[0].i8[0] == 1 )
    {
      v88 = (_OWORD *)v225[0].i64[1];
      goto LABEL_224;
    }
    if ( v225[0].i8[1] == 1 )
    {
      v87 = v225;
      _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8f1c815668dccad0(
        v225,
        *(_QWORD *)&__dst[0]);
      v88 = (_OWORD *)v225[0].i64[1];
      v90 = v225[0].i64[0];
      if ( v225[0].i64[0] == 0x8000000000000001LL )
      {
LABEL_224:
        v94 = 0x8000000000000001LL;
        if ( v93 )
        {
          v18 = (unsigned __int64)v88;
          v87 = (__m128i *)v92;
          v141 = v93;
          v93 = 0x8000000000000000LL;
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v141, 1);
          v88 = (_OWORD *)v18;
          v92 = v18;
        }
        else
        {
          v92 = (__int64)v88;
          v93 = 0x8000000000000000LL;
        }
        goto LABEL_157;
      }
      v246 = v225[0].i64[1];
      v248 = v225[0].i64[0];
      v245 = v225[1].i64[0];
    }
    v87 = v225;
    v94 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::he7294f6e650d0ace(
            v225,
            __dst);
    if ( v225[0].i8[0] == 1 )
    {
      v18 = v225[0].u64[1];
LABEL_221:
      if ( 2 * v248 )
      {
        v87 = (__m128i *)v246;
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v246, v248, 1);
      }
      v88 = (_OWORD *)v18;
      goto LABEL_224;
    }
    if ( v225[0].i8[1] == 1 )
    {
      v87 = v225;
      _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8f1c815668dccad0(
        v225,
        *(_QWORD *)&__dst[0]);
      v18 = v225[0].u64[1];
      v89 = v225[0].i64[0];
      if ( v225[0].i64[0] == 0x8000000000000001LL )
        goto LABEL_221;
      v94 = v225[1].i64[0];
    }
    else
    {
      v89 = 0x8000000000000001LL;
    }
    v90 = 0x8000000000000000LL;
    if ( v89 != 0x8000000000000001LL )
      v90 = v89;
    v89 = v248;
    v88 = (_OWORD *)v246;
    v87 = (__m128i *)v247;
    v91 = v245;
LABEL_157:
    ++v205.i8[0];
    *(_QWORD *)&__dst[0] = v93;
    *((_QWORD *)&__dst[0] + 1) = v92;
    *(_QWORD *)&__dst[1] = v87;
    *((_QWORD *)&__dst[1] + 1) = v89;
    *(_QWORD *)&__dst[2] = v88;
    *((_QWORD *)&__dst[2] + 1) = v91;
    *(_QWORD *)&__dst[3] = v90;
    *((_QWORD *)&__dst[3] + 1) = v18;
    *(_QWORD *)&__dst[4] = v94;
    v122 = serde_json::de::Deserializer$LT$R$GT$::end_seq::hb489422c1c9c692e(&v201);
    qmemcpy(v225, __dst, 0x48u);
    v225[4].i64[1] = v122;
    v123 = v225[0].i64[0];
    if ( v225[0].i64[0] == 0x8000000000000000LL )
    {
      epi64 = v225[0].i64[1];
      if ( v122 )
        goto LABEL_159;
      goto LABEL_160;
    }
    goto LABEL_161;
  }
  if ( (_DWORD)v34 != 123 )
  {
    v167 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h4ef594b3fffe3a76(&v201, &v244, &unk_10196F618);
    goto LABEL_328;
  }
  v205.i8[0] = 127;
  *(_QWORD *)&v204 = v32;
  *(_QWORD *)&v229 = &v201;
  BYTE8(v229) = 1;
  v52 = 0x8000000000000000LL;
  v53 = &anon_155c4da9b5393270cfa7378e2b52c417_180;
  v241 = &anon_155c4da9b5393270cfa7378e2b52c417_180;
  v54 = 0x8000000000000001LL;
  v245 = 0x8000000000000001LL;
LABEL_55:
  v242 = (char *)v53;
  v248 = v52;
LABEL_56:
  v247 = v54;
  v243 = (__int64)v23;
  v246 = v18;
  while ( 1 )
  {
    v55 = v225;
    v56 = &v229;
    _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::hcaedb3085ebd9c68(
      v225,
      &v229);
    if ( v225[0].i8[0] == 1 )
    {
      v18 = v225[0].u64[1];
      goto LABEL_141;
    }
    if ( v225[0].i8[1] != 1 )
      break;
    v61 = (__m128i *)v229;
    v62 = (__int64 *)(v229 + 24);
    ++*(_QWORD *)(v229 + 40);
    v61[1].i64[0] = 0;
    v55 = v225;
    _$LT$serde_json..read..SliceRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hbdd8f4e603095713(v225, v62, v61);
    v18 = v225[0].u64[1];
    v57 = v225[0].i64[0];
    if ( v225[0].i64[0] == 2 )
      goto LABEL_141;
    if ( v225[1].i64[0] == 8 )
    {
      if ( *(_QWORD *)v225[0].i64[1] != 0x6E656B6F745F6469LL )
        goto LABEL_68;
      if ( v245 != 0x8000000000000001LL )
      {
        v168 = 8;
        v169 = &anon_155c4da9b5393270cfa7378e2b52c417_182;
LABEL_337:
        v241 = v169;
        goto LABEL_338;
      }
      v63 = v61[2].u64[0];
      v64 = v61[2].u64[1];
      if ( v64 >= v63 )
      {
LABEL_316:
        v225[0].i64[0] = 3;
        v245 = 0x8000000000000001LL;
        v55 = v61;
        v165 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v61, v225);
LABEL_317:
        v18 = v165;
LABEL_318:
        v116 = (__m128i *)v242;
        v117 = (__m128i *)v246;
        v118 = v247;
        if ( v247 < (__int64)0x8000000000000002LL )
          goto LABEL_148;
        goto LABEL_146;
      }
      v65 = *v62;
      v66 = v64 + 1;
      v67 = -(__int64)v63;
      while ( 1 )
      {
        v68 = *(unsigned __int8 *)(v65 + v66 - 1);
        if ( v68 > 0x3A )
          goto LABEL_342;
        v69 = 0x100002600LL;
        if ( !_bittest64(&v69, v68) )
          break;
        v61[2].i64[1] = v66;
        v70 = v67 + v66++ + 1;
        if ( v70 == 1 )
          goto LABEL_316;
      }
      if ( v68 != 58 )
      {
LABEL_342:
        v225[0].i64[0] = 6;
        v245 = 0x8000000000000001LL;
        v55 = v61;
        v165 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v61, v225);
        goto LABEL_317;
      }
      v61[2].i64[1] = v66;
      v55 = (__m128i *)__dst;
      _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8f1c815668dccad0(
        __dst,
        v61);
      v18 = *((_QWORD *)&__dst[0] + 1);
      v57 = *(_QWORD *)&__dst[0];
      v245 = *(_QWORD *)&__dst[0];
      if ( *(_QWORD *)&__dst[0] == 0x8000000000000001LL )
        goto LABEL_318;
      v243 = *((_QWORD *)&__dst[0] + 1);
      v197 = *(_QWORD *)&__dst[1];
    }
    else
    {
      if ( v225[1].i64[0] != 13 )
      {
        if ( v225[1].i64[0] != 12
          || *(_QWORD *)v225[0].i64[1] ^ 0x745F737365636361LL | *(unsigned int *)(v225[0].i64[1] + 8) ^ 0x6E656B6FLL )
        {
          goto LABEL_68;
        }
        if ( v248 != 0x8000000000000000LL )
        {
          v168 = 12;
LABEL_338:
          *(_QWORD *)&__dst[0] = v241;
          *((_QWORD *)&__dst[0] + 1) = v168;
          v225[0].i64[0] = (__int64)__dst;
          v225[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
          v55 = (__m128i *)&anon_a8580c566d8025b0f516de1c9be9088f_12;
          v116 = (__m128i *)v242;
          v18 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_12);
          goto LABEL_142;
        }
        v79 = v61[2].u64[0];
        v80 = v61[2].u64[1];
        if ( v80 >= v79 )
        {
LABEL_313:
          v225[0].i64[0] = 3;
          v248 = 0x8000000000000000LL;
          v55 = v61;
          v164 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v61, v225);
LABEL_314:
          v18 = v164;
LABEL_315:
          v248 = 0x8000000000000000LL;
LABEL_141:
          v116 = (__m128i *)v242;
LABEL_142:
          v117 = (__m128i *)v246;
          if ( v245 >= (__int64)0x8000000000000002LL && v245 )
          {
            v55 = (__m128i *)v243;
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v243, v245, 1);
          }
          v118 = v247;
          if ( v247 < (__int64)0x8000000000000002LL )
          {
LABEL_148:
            v56 = (unsigned __int128 *)v248;
            v119 = 2 * v248;
            if ( 2 * v248 )
            {
              v55 = v116;
              *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v116, v248, 1);
            }
            v120 = 0x8000000000000000LL;
            goto LABEL_151;
          }
LABEL_146:
          if ( v118 )
          {
            v55 = v117;
            *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117, v118, 1);
          }
          goto LABEL_148;
        }
        v81 = *v62;
        v82 = v80 + 1;
        v83 = -(__int64)v79;
        while ( 1 )
        {
          v84 = *(unsigned __int8 *)(v81 + v82 - 1);
          if ( v84 > 0x3A )
            goto LABEL_340;
          v85 = 0x100002600LL;
          if ( !_bittest64(&v85, v84) )
            break;
          v61[2].i64[1] = v82;
          v86 = v83 + v82++ + 1;
          if ( v86 == 1 )
            goto LABEL_313;
        }
        if ( v84 != 58 )
        {
LABEL_340:
          v225[0].i64[0] = 6;
          v248 = 0x8000000000000000LL;
          v55 = v61;
          v164 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v61, v225);
          goto LABEL_314;
        }
        v61[2].i64[1] = v82;
        v55 = (__m128i *)__dst;
        _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::hf41df19c612237cc(
          __dst,
          v61);
        v18 = *((_QWORD *)&__dst[0] + 1);
        v52 = *(_QWORD *)&__dst[0];
        v54 = v247;
        if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL )
          goto LABEL_315;
        v198 = *(_QWORD *)&__dst[1];
        v53 = *((__int64 **)&__dst[0] + 1);
        v18 = v246;
        v23 = (__m128i *)v243;
        goto LABEL_55;
      }
      if ( !(*(_QWORD *)v225[0].i64[1] ^ 0x5F68736572666572LL | *(_QWORD *)(v225[0].i64[1] + 5) ^ 0x6E656B6F745F6873LL) )
      {
        if ( v247 != 0x8000000000000001LL )
        {
          v168 = 13;
          v169 = &anon_155c4da9b5393270cfa7378e2b52c417_181;
          goto LABEL_337;
        }
        v71 = v61[2].u64[0];
        v72 = v61[2].u64[1];
        if ( v72 >= v71 )
        {
LABEL_320:
          v225[0].i64[0] = 3;
          v247 = 0x8000000000000001LL;
          v55 = v61;
          v166 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v61, v225);
LABEL_321:
          v18 = v166;
LABEL_322:
          v247 = 0x8000000000000001LL;
          goto LABEL_141;
        }
        v73 = *v62;
        v74 = v72 + 1;
        v75 = -(__int64)v71;
        while ( 1 )
        {
          v76 = *(unsigned __int8 *)(v73 + v74 - 1);
          v23 = (__m128i *)v243;
          if ( v76 > 0x3A )
            goto LABEL_341;
          v77 = 0x100002600LL;
          if ( !_bittest64(&v77, v76) )
            break;
          v61[2].i64[1] = v74;
          v78 = v75 + v74++ + 1;
          if ( v78 == 1 )
            goto LABEL_320;
        }
        if ( v76 != 58 )
        {
LABEL_341:
          v225[0].i64[0] = 6;
          v247 = 0x8000000000000001LL;
          v55 = v61;
          v166 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(v61, v225);
          goto LABEL_321;
        }
        v61[2].i64[1] = v74;
        v55 = (__m128i *)__dst;
        _$LT$core..marker..PhantomData$LT$T$GT$$u20$as$u20$serde_core..de..DeserializeSeed$GT$::deserialize::h8f1c815668dccad0(
          __dst,
          v61);
        v18 = *((_QWORD *)&__dst[0] + 1);
        v54 = *(_QWORD *)&__dst[0];
        if ( *(_QWORD *)&__dst[0] == 0x8000000000000001LL )
          goto LABEL_322;
        v228 = *(_QWORD *)&__dst[1];
        goto LABEL_56;
      }
LABEL_68:
      v55 = v61;
      v18 = serde_core::de::MapAccess::next_value::he286195e39f1c57c(v61);
      if ( v18 )
        goto LABEL_141;
    }
  }
  v119 = 0x8000000000000000LL;
  v120 = v248;
  if ( v248 == 0x8000000000000000LL )
  {
    *(_QWORD *)&__dst[0] = &anon_155c4da9b5393270cfa7378e2b52c417_180;
    *((_QWORD *)&__dst[0] + 1) = 12;
    v225[0].i64[0] = (__int64)__dst;
    v225[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    v248 = 0x8000000000000000LL;
    v55 = (__m128i *)&anon_a8580c566d8025b0f516de1c9be9088f_8;
    v116 = (__m128i *)v242;
    v18 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_8);
    v248 = 0x8000000000000000LL;
    goto LABEL_142;
  }
  v55 = (__m128i *)v247;
  if ( v247 == 0x8000000000000001LL )
    v55 = (__m128i *)0x8000000000000000LL;
  v18 = (unsigned __int64)v242;
  if ( v245 == 0x8000000000000001LL )
  {
    v57 = v246;
    v58 = v228;
  }
  else
  {
    v119 = v245;
    v57 = v246;
    v56 = (unsigned __int128 *)v243;
    v58 = v228;
    v59 = v197;
  }
  v60 = v198;
LABEL_151:
  ++v205.i8[0];
  *(_QWORD *)&__dst[0] = v120;
  *((_QWORD *)&__dst[0] + 1) = v18;
  *(_QWORD *)&__dst[1] = v60;
  *((_QWORD *)&__dst[1] + 1) = v55;
  *(_QWORD *)&__dst[2] = v57;
  *((_QWORD *)&__dst[2] + 1) = v58;
  *(_QWORD *)&__dst[3] = v119;
  *((_QWORD *)&__dst[3] + 1) = v56;
  *(_QWORD *)&__dst[4] = v59;
  v122 = serde_json::de::Deserializer$LT$R$GT$::end_map::hfa6c06df85b8f99a(&v201);
  qmemcpy(v225, __dst, 0x48u);
  v225[4].i64[1] = v122;
  v123 = v225[0].i64[0];
  if ( v225[0].i64[0] != 0x8000000000000000LL )
  {
LABEL_161:
    if ( v122 )
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenEndpointSuccess$GT$::h714cb0582227d62f(
        v225,
        *(double *)si128.i64);
      v123 = 0x8000000000000000LL;
      epi64 = v122;
    }
    else
    {
      epi64 = v225[0].i64[1];
      si128 = _mm_loadu_si128(&v225[1]);
      v248 = v225[2].i64[0];
      a8 = _mm_loadu_si128((const __m128i *)&v225[2].u64[1]);
      v121 = v225[4].i64[0];
      v245 = v225[3].i64[1];
    }
    goto LABEL_164;
  }
  epi64 = v225[0].i64[1];
  if ( v122 )
  {
LABEL_159:
    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v122);
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, 40, 8);
  }
LABEL_160:
  v123 = 0x8000000000000000LL;
LABEL_164:
  v39 = 0x8000000000000000LL;
  if ( v123 == 0x8000000000000000LL )
  {
    v167 = epi64;
LABEL_328:
    v37 = serde_json::error::Error::fix_position::h534e7659efc88742(v167, &v201);
LABEL_35:
    v38 = v37;
    v39 = 0x8000000000000000LL;
    v40 = v201;
    if ( !(_QWORD)v201 )
      goto LABEL_172;
    goto LABEL_171;
  }
  v225[0].i64[0] = v123;
  v38 = epi64;
  v225[0].i64[1] = epi64;
  v225[1] = si128;
  v225[2].i64[0] = v248;
  *(__m128i *)((char *)&v225[2] + 8) = a8;
  v225[3].i64[1] = v245;
  v242 = (char *)v121;
  v225[4].i64[0] = v121;
  v243 = si128.i64[0];
  epi64 = _mm_extract_epi64(si128, 1);
  v246 = a8.i64[0];
  v247 = _mm_extract_epi64(a8, 1);
  if ( (unsigned __int64)v204 >= v203 )
  {
LABEL_170:
    v39 = v123;
    v40 = v201;
    if ( !(_QWORD)v201 )
      goto LABEL_172;
    goto LABEL_171;
  }
  v124 = v204 + 1;
  v125 = 0x100002600LL;
  while ( 1 )
  {
    v126 = *(unsigned __int8 *)(v202.i64[1] + v124 - 1);
    if ( v126 > 0x20 || !_bittest64(&v125, v126) )
      break;
    *(_QWORD *)&v204 = v124;
    v127 = v124 - v203 + 1;
    ++v124;
    if ( v127 == 1 )
      goto LABEL_170;
  }
  *(_QWORD *)&__dst[0] = 22;
  v38 = serde_json::de::Deserializer$LT$R$GT$::peek_error::ha33f4f1a46381c8e(&v201, __dst);
  core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenEndpointSuccess$GT$::h714cb0582227d62f(
    v225,
    *(double *)si128.i64);
  v40 = v201;
  if ( (_QWORD)v201 )
LABEL_171:
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v201 + 1), v40, 1);
LABEL_172:
  if ( v39 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v201 = v38;
    *(_QWORD *)&__dst[0] = &v201;
    *((_QWORD *)&__dst[0] + 1) = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v225, &unk_1017C70F3, __dst);
    v128 = v225[0];
    v129 = v225[1].i64[0];
    v130 = v201;
    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v201);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130, 40, 8);
    *(_QWORD *)(a1 + 8) = 9;
    *(__m128i *)(a1 + 16) = v128;
    *(_QWORD *)(a1 + 32) = v129;
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  else
  {
    if ( epi64 != 0x8000000000000000LL )
    {
      v40 = v246;
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v248, v246);
      if ( v133 )
      {
        v192[0] = epi64;
        v192[1] = v248;
        v192[2] = v246;
        *(_QWORD *)&__dst[0] = v247;
        *((_QWORD *)&__dst[0] + 1) = v245;
        *(_QWORD *)&__dst[1] = v242;
        v225[0].i64[0] = v39;
        v225[0].i64[1] = v38;
        v225[1].i64[0] = v243;
        codexmate_lib::core::auth::build_chatgpt_auth_from_oauth_tokens::hbd4d54c82ae8ddd2(
          a1,
          __dst,
          v225,
          v192,
          *(double *)si128.i64);
        goto LABEL_181;
      }
      if ( epi64 )
      {
        v40 = epi64;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v248, epi64, 1);
      }
    }
    codexmate_lib::core::oauth_login::exchange_code_for_tokens::_$u7b$$u7b$closure$u7d$$u7d$::hf590a120a5083734(
      v225,
      v40);
    v131 = v225[1];
    *(__m128i *)(a1 + 88) = v225[5];
    *(__m128i *)(a1 + 72) = v225[4];
    *(_QWORD *)(a1 + 64) = v225[3].i64[1];
    *(__m128i *)(a1 + 48) = *(__m128i *)((char *)&v225[2] + 8);
    *(_QWORD *)(a1 + 40) = v225[2].i64[0];
    v132 = _mm_load_si128(v225);
    *(__m128i *)(a1 + 24) = v131;
    *(__m128i *)(a1 + 8) = v132;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    if ( v39 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v39, 1);
    if ( 2 * v247 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v245, v247, 1);
  }
LABEL_181:
  if ( v234 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v240, v234, 1);
LABEL_21:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v199) )
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v199);
  return a1;
}
