// __ZN13codexmate_lib4core5voice10aliyun_asr16AliyunAsrSession7connect28_$u7b$$u7b$closure$u7d$$u7d$17hbb4b340bd79fba8fE_1 @ 0x10045f2b0
// [FULL — IDA decompiler 全解 92782B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::voice::aliyun_asr | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
char __fastcall codexmate_lib::core::voice::aliyun_asr::AliyunAsrSession::connect::_$u7b$$u7b$closure$u7d$$u7d$::hbb4b340bd79fba8f(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        signed __int64 epi64,
        __m128i a5)
{
  signed __int64 v5; // r12
  unsigned __int64 *v6; // r13
  char *v7; // rbx
  unsigned __int8 v8; // al
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int8 *v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int8 *v16; // r14
  __int64 v17; // rsi
  char result; // al
  const void *v19; // r14
  __int64 v20; // rax
  char v21; // r15
  __int64 v22; // rax
  const void *v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rax
  char *v26; // rsi
  unsigned __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int16 v30; // dx
  __int16 v31; // r14
  __m128i v32; // kr10_16
  __int64 *v33; // rsi
  __int64 v34; // rax
  __int128 v35; // kr20_16
  __int64 v36; // rsi
  char v37; // al
  char v38; // al
  char *v39; // rcx
  __int64 v40; // r15
  char *v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // r14
  __int64 v46; // rax
  __int128 v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r15
  __int8 v51; // r14
  __int64 v52; // rdi
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r11
  __int64 v56; // r10
  int v57; // r15d
  __int32 v58; // eax
  __int64 v59; // r15
  volatile signed __int64 *v60; // r14
  __int64 v61; // rax
  __int64 v62; // rax
  char *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // r15
  __m128i v67; // xmm0
  __int64 v68; // r15
  __int64 v69; // rbx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int16 v73; // ax
  _BYTE *v74; // r14
  __int64 v75; // rax
  unsigned __int64 v76; // r15
  __int64 v77; // r15
  char v78; // al
  int v79; // eax
  char *v80; // r13
  __int64 v81; // rax
  _BYTE *v82; // r15
  __int16 v83; // ax
  __m128i v84; // xmm0
  unsigned __int64 v85; // r13
  __int64 v86; // rdx
  __m128i v87; // xmm0
  __int64 v88; // rsi
  signed __int64 v89; // rcx
  __m128i v90; // xmm0
  __m128i v91; // xmm0
  __m128i v92; // xmm0
  __int64 v93; // rdi
  signed __int64 v94; // r8
  __m128i v95; // xmm0
  __int64 v96; // r9
  signed __int64 v97; // r10
  __m128i v98; // xmm0
  __m128i v99; // xmm0
  __int64 v100; // r11
  __int64 v101; // rax
  unsigned __int128 v102; // kr2F0_16
  const void *v103; // r13
  __int64 v104; // r14
  char v105; // al
  __int64 v106; // r15
  __int64 v107; // rax
  __int64 v108; // r12
  __int64 v109; // r13
  __int64 v110; // r14
  __int64 v111; // rax
  bool v112; // zf
  signed __int64 v113; // rdx
  _BYTE *v114; // rsi
  __int64 v115; // r8
  __int64 v116; // r9
  signed __int64 v117; // rcx
  __int64 v118; // rsi
  unsigned __int64 *v119; // rdx
  unsigned __int64 v120; // rcx
  volatile signed __int64 *v121; // rax
  void *v122; // rax
  __int64 v123; // rt0
  char v124; // of
  __int64 v125; // rdx
  void *v126; // rax
  void *v127; // r14
  unsigned __int8 v128; // al
  __m128i v129; // xmm0
  __int64 v130; // rcx
  __int64 v131; // r14
  unsigned __int64 v132; // rcx
  unsigned __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // r14
  int v136; // edx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // r14
  __int64 v140; // rdx
  signed __int64 v141; // rsi
  __int64 v142; // r14
  char v143; // al
  char v144; // r15
  char v145; // r15
  __int64 v146; // rdi
  __int64 *v147; // r14
  unsigned __int64 v148; // rcx
  __int64 v149; // rax
  unsigned __int64 v150; // rax
  _QWORD *v151; // r15
  char *v152; // rdx
  signed __int64 v153; // rax
  signed __int64 v154; // rtt
  __int64 v155; // rdi
  __int64 v156; // rdi
  __int64 v157; // rax
  __int64 v158; // rcx
  char v159; // al
  unsigned __int64 v160; // rdx
  __int64 v161; // rdi
  __int64 v162; // rdi
  void *v163; // rdi
  __int64 v164; // r8
  volatile signed __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rdx
  __int64 v168; // rax
  __int64 v169; // r9
  __int64 v170; // r11
  __int64 v171; // r13
  __int64 v172; // r12
  __int64 v173; // r14
  __int64 v174; // r8
  __int64 v175; // r10
  char *v176; // rdx
  __int64 v177; // rcx
  void *v178; // rcx
  __int128 v179; // kr230_16
  __int64 *v180; // rax
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rsi
  __int64 v184; // rax
  __int128 v185; // kr240_16
  unsigned __int64 v186; // r9
  unsigned __int64 v187; // r10
  __int64 v188; // rsi
  volatile signed __int64 *v189; // rax
  unsigned __int64 v190; // r14
  __int16 v191; // r13
  __int64 v192; // rsi
  __int64 v193; // rcx
  __int64 v194; // rdx
  __int64 v195; // rax
  __int128 v196; // kr330_16
  unsigned __int64 v197; // r8
  unsigned __int64 v198; // r9
  __int64 v199; // rcx
  _QWORD v200[143]; // [rsp+0h] [rbp-63C0h] BYREF
  _BYTE v201[1144]; // [rsp+478h] [rbp-5F48h] BYREF
  _BYTE v202[1144]; // [rsp+8F0h] [rbp-5AD0h] BYREF
  _BYTE v203[1144]; // [rsp+D68h] [rbp-5658h] BYREF
  _QWORD v204[143]; // [rsp+11E0h] [rbp-51E0h] BYREF
  _BYTE v205[1144]; // [rsp+1658h] [rbp-4D68h] BYREF
  _BYTE v206[952]; // [rsp+1AD0h] [rbp-48F0h] BYREF
  _BYTE __src[232]; // [rsp+1E88h] [rbp-4538h] BYREF
  _BYTE v208[224]; // [rsp+1F70h] [rbp-4450h] BYREF
  _QWORD v209[143]; // [rsp+2050h] [rbp-4370h] BYREF
  _BYTE v210[141]; // [rsp+24CBh] [rbp-3EF5h] BYREF
  _BYTE v211[1144]; // [rsp+2558h] [rbp-3E68h] BYREF
  _BYTE v212[72]; // [rsp+29D0h] [rbp-39F0h] BYREF
  _BYTE v213[73]; // [rsp+2A18h] [rbp-39A8h] BYREF
  _BYTE v214[141]; // [rsp+2A61h] [rbp-395Fh] BYREF
  _BYTE v215[141]; // [rsp+2AEEh] [rbp-38D2h] BYREF
  _BYTE v216[141]; // [rsp+2B7Bh] [rbp-3845h] BYREF
  _BYTE v217[208]; // [rsp+2C08h] [rbp-37B8h] BYREF
  _BYTE v218[208]; // [rsp+2CD8h] [rbp-36E8h] BYREF
  _BYTE v219[208]; // [rsp+2DA8h] [rbp-3618h] BYREF
  _BYTE v220[128]; // [rsp+2E78h] [rbp-3548h] BYREF
  _BYTE v221[1144]; // [rsp+2EF8h] [rbp-34C8h] BYREF
  _OWORD v222[87]; // [rsp+3370h] [rbp-3050h] BYREF
  _BYTE v223[72]; // [rsp+38E0h] [rbp-2AE0h] BYREF
  _BYTE v224[72]; // [rsp+3928h] [rbp-2A98h] BYREF
  _BYTE v225[72]; // [rsp+3970h] [rbp-2A50h] BYREF
  _BYTE v226[72]; // [rsp+39B8h] [rbp-2A08h] BYREF
  __m128i v227[87]; // [rsp+3A00h] [rbp-29C0h] BYREF
  _BYTE v228[141]; // [rsp+3F73h] [rbp-244Dh] BYREF
  _OWORD __dst[443]; // [rsp+4000h] [rbp-23C0h] BYREF
  __m128i v230[94]; // [rsp+5BB0h] [rbp-810h] BYREF
  _QWORD v231[2]; // [rsp+6198h] [rbp-228h] BYREF
  unsigned __int64 v232; // [rsp+61A8h] [rbp-218h]
  unsigned __int64 v233; // [rsp+61B0h] [rbp-210h]
  unsigned __int64 v234; // [rsp+61B8h] [rbp-208h]
  unsigned __int64 v235; // [rsp+61C0h] [rbp-200h]
  unsigned __int64 v236; // [rsp+61C8h] [rbp-1F8h]
  unsigned __int64 v237; // [rsp+61D0h] [rbp-1F0h]
  char *v238; // [rsp+61D8h] [rbp-1E8h]
  char *v239; // [rsp+61E0h] [rbp-1E0h]
  char *v240; // [rsp+61E8h] [rbp-1D8h]
  char *v241; // [rsp+61F0h] [rbp-1D0h]
  _BYTE *v242; // [rsp+61F8h] [rbp-1C8h]
  char *v243; // [rsp+6200h] [rbp-1C0h]
  unsigned __int64 v244; // [rsp+6208h] [rbp-1B8h]
  __int128 v245; // [rsp+6210h] [rbp-1B0h] BYREF
  __int128 v246; // [rsp+6220h] [rbp-1A0h]
  char *v247; // [rsp+6230h] [rbp-190h]
  _BYTE *v248; // [rsp+6238h] [rbp-188h]
  __m128i si128; // [rsp+6240h] [rbp-180h] BYREF
  __int64 v250; // [rsp+6258h] [rbp-168h]
  const void *v251; // [rsp+6260h] [rbp-160h]
  unsigned __int64 v252; // [rsp+6268h] [rbp-158h]
  __m128i v253; // [rsp+6270h] [rbp-150h] BYREF
  __m128i v254; // [rsp+6280h] [rbp-140h] BYREF
  __m128i v255; // [rsp+6290h] [rbp-130h] BYREF
  __m128i v256; // [rsp+62A0h] [rbp-120h] BYREF
  _BYTE *v257; // [rsp+62B8h] [rbp-108h]
  __m128i v258; // [rsp+62C0h] [rbp-100h] BYREF
  void *v259; // [rsp+62D8h] [rbp-E8h]
  __m128i v260; // [rsp+62E0h] [rbp-E0h] BYREF
  unsigned __int64 v261; // [rsp+62F8h] [rbp-C8h]
  __m128i v262; // [rsp+6300h] [rbp-C0h] BYREF
  __m128i v263; // [rsp+6310h] [rbp-B0h] BYREF
  __int64 v264; // [rsp+6328h] [rbp-98h]
  __m128i v265; // [rsp+6330h] [rbp-90h] BYREF
  __int64 v266; // [rsp+6340h] [rbp-80h]
  __m128i v267; // [rsp+6348h] [rbp-78h]
  __int64 v268; // [rsp+6358h] [rbp-68h]
  __int64 v269; // [rsp+6360h] [rbp-60h]
  __int64 v270; // [rsp+6368h] [rbp-58h]
  __int64 v271; // [rsp+6370h] [rbp-50h]
  __int64 v272; // [rsp+6378h] [rbp-48h]
  const void *v273; // [rsp+6380h] [rbp-40h]
  char *v274; // [rsp+6388h] [rbp-38h]
  unsigned __int64 *v275; // [rsp+6390h] [rbp-30h]

  *((_QWORD *)&__dst[313] + 1) = 0;
  *((_QWORD *)&__dst[57] + 1) = 0;
  *((_QWORD *)&v222[2] + 1) = 0;
  v209[105] = 0;
  v204[55] = 0;
  v200[115] = 0;
  v270 = a3;
  v7 = (char *)a2;
  v275 = a1;
  v237 = 0x8000000000000000LL;
  switch ( *(_BYTE *)(a2 + 476) )
  {
    case 0:
      *(_DWORD *)(a2 + 472) = 0;
      *(_QWORD *)(a2 + 465) = 0;
      *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 456);
      v8 = codexmate_lib::core::voice::aliyun_asr::detect_protocol::hdd7925c717b6bf1a();
      *(_BYTE *)(a2 + 464) = v8;
      v9 = *(_QWORD *)(a2 + 272);
      codexmate_lib::core::voice::aliyun_asr::endpoint_for_protocol::h28bd4e5f51579c02(__dst, v9, v8);
      v10 = _mm_loadu_si128((const __m128i *)((char *)__dst + 8));
      v11 = *((_QWORD *)&__dst[1] + 1);
      if ( LOBYTE(__dst[0]) )
        goto LABEL_173;
      v7[475] = 0;
      v253 = v10;
      v230[0] = v10;
      v230[1].i64[0] = v11;
      _$LT$alloc..string..String$u20$as$u20$tungstenite..client..IntoClientRequest$GT$::into_client_request::h51a72ee641b6515d(
        __dst,
        v230);
      v40 = *(_QWORD *)&__dst[0];
      if ( *(_QWORD *)&__dst[0] == 3 )
      {
        memcpy(v230, (char *)__dst + 8, 0x88u);
        *(_QWORD *)&v222[0] = v230;
        *((_QWORD *)&v222[0] + 1) = _$LT$tungstenite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h43a0d5906e71df33;
        v9 = (__int64)&unk_1017BEAAE;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v227, &unk_1017BEAAE, v222);
        core::ptr::drop_in_place$LT$tungstenite..error..Error$GT$::h50c4b5dc25b39128(v230);
        si128 = _mm_load_si128(v227);
        v11 = v227[1].i64[0];
        goto LABEL_172;
      }
      v5 = *((_QWORD *)&__dst[1] + 1);
      memcpy(v230, &__dst[2], 0xC0u);
      v47 = *(_OWORD *)((char *)__dst + 8);
      v7[466] = 1;
      *(_QWORD *)v7 = v40;
      *(_OWORD *)(v7 + 8) = v47;
      *((_QWORD *)v7 + 3) = v5;
      memcpy(v7 + 32, v230, 0xC0u);
      if ( (unsigned __int8)v7[464] > 1u )
        goto LABEL_70;
      v48 = *((_QWORD *)v7 + 34);
      v9 = *(_QWORD *)(v48 + 40);
      v231[0] = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(v48 + 32), v9);
      v231[1] = v49;
      if ( !v49 )
      {
        _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h61b4f2d3942581ca(__dst);
        si128 = (__m128i)__dst[0];
        v11 = *(_QWORD *)&__dst[1];
        v252 = _mm_load_si128(&v253).u64[0];
        if ( v7[466] )
          goto LABEL_247;
        goto LABEL_172;
      }
      *(_QWORD *)&v222[0] = v231;
      *((_QWORD *)&v222[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::h69ce1ddff65303f5(v227, v222);
      v6 = (unsigned __int64 *)v227[0].i64[1];
      v50 = v227[0].i64[0];
      http::header::value::HeaderValue::try_from_generic::h29077fec4b7827c9(__dst, v227[0].i64[1], v227[1].i64[0]);
      v9 = (__int64)__dst;
      core::result::Result$LT$T$C$E$GT$::map_err::habc414d1c92a2522(v230, __dst);
      v51 = v230[2].i8[0];
      si128 = v230[0];
      v5 = v230[1].i64[0];
      if ( v230[2].i8[0] != 2 )
      {
        v64 = v230[1].i64[1];
        *(_DWORD *)v221 = *(__int32 *)((char *)v230[2].i32 + 1);
        *(_DWORD *)&v221[3] = v230[2].i32[1];
        if ( v50 )
        {
          v65 = v50;
          v66 = v230[1].i64[1];
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v65, 1);
          v64 = v66;
        }
        __dst[0] = si128;
        *(_QWORD *)&__dst[1] = v5;
        *((_QWORD *)&__dst[1] + 1) = v64;
        LOBYTE(__dst[2]) = v51;
        *(_DWORD *)((char *)&__dst[2] + 1) = *(_DWORD *)v221;
        DWORD1(__dst[2]) = *(_DWORD *)&v221[3];
        v227[1] = 0u;
        v227[0].i64[1] = 16;
        v227[0].i64[0] = 0;
        http::header::map::HeaderMap$LT$T$GT$::insert::h0fe91c304b1cb5b8(v230, v7, v227, __dst);
        if ( v230[2].i8[0] != 2 )
          (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v230[0].i64[0] + 32))(
            &v230[1].u64[1],
            v230[0].i64[1],
            v230[1].i64[0]);
        v227[1] = 0u;
        v227[0].i64[1] = 70;
        v227[0].i64[0] = 0;
        *(_QWORD *)&__dst[0] = &off_1019639F8;
        *((_QWORD *)&__dst[0] + 1) = "AiMaMi TypeMami";
        __dst[1] = 0xFu;
        LOBYTE(__dst[2]) = 0;
        http::header::map::HeaderMap$LT$T$GT$::insert::h0fe91c304b1cb5b8(v230, v7, v227, __dst);
        if ( v230[2].i8[0] != 2 )
          (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v230[0].i64[0] + 32))(
            &v230[1].u64[1],
            v230[0].i64[1],
            v230[1].i64[0]);
LABEL_70:
        v7[466] = 0;
        v19 = v7 + 480;
        memcpy(v7 + 480, v7, 0xE0u);
        v257 = v7 + 11096;
        v7[11096] = 0;
        v67 = _mm_load_si128(&v253);
        v252 = v67.i64[0];
        v253.i64[0] = _mm_extract_epi64(v67, 1);
LABEL_71:
        v238 = v7 + 704;
        memcpy(v7 + 704, v19, 0xE0u);
        *((_QWORD *)v7 + 116) = 2;
        *((_WORD *)v7 + 5544) = 0;
        si128.i64[0] = (__int64)(v7 + 11089);
        v21 = 0;
        v22 = *((_QWORD *)v7 + 88);
        v23 = v7 + 712;
        if ( v22 == 3 )
        {
LABEL_72:
          memcpy(v7 + 1008, v23, 0x88u);
          *((_QWORD *)v7 + 125) = 3;
          v268 = *((_QWORD *)v7 + 126);
          v68 = *((_QWORD *)v7 + 127);
          v264 = *((_QWORD *)v7 + 128);
          v266 = *((_QWORD *)v7 + 129);
          v271 = *((_QWORD *)v7 + 130);
          v265.i64[0] = *((_QWORD *)v7 + 131);
          v267 = *((__m128i *)v7 + 66);
          v254.i64[0] = *((_QWORD *)v7 + 134);
          v263.i64[0] = *((_QWORD *)v7 + 135);
          v255.i64[0] = *((_QWORD *)v7 + 136);
          v258.i64[0] = *((_QWORD *)v7 + 137);
          v269 = *((_QWORD *)v7 + 138);
          v256.i64[0] = *((_QWORD *)v7 + 139);
          v260.i64[0] = *((_QWORD *)v7 + 140);
          v262.i64[0] = *((_QWORD *)v7 + 141);
          v274 = v7;
          v272 = *((_QWORD *)v7 + 142);
          v69 = 2;
          goto LABEL_181;
        }
LABEL_18:
        v273 = v19;
        *((_QWORD *)v7 + 125) = v22;
        memcpy(v7 + 1008, v23, 0x88u);
        qmemcpy(v7 + 1144, v7 + 848, 0x50u);
        memcpy((char *)__dst + 8, v7 + 1000, 0xE0u);
        memcpy(__src, __dst, sizeof(__src));
        v239 = v7 + 1224;
        *((_QWORD *)v7 + 153) = 0;
        memcpy(v7 + 1232, __src, 0xE8u);
        qmemcpy(v7 + 1464, v7 + 928, 0x48u);
        v7[1890] = v21;
        v274 = v7 + 1891;
        v7[1891] = 0;
        v24 = 0;
LABEL_19:
        v7[1894] = 1;
        memcpy(v7 + 1536, v7 + 1240, 0xE0u);
        qmemcpy(v7 + 1760, v7 + 1464, 0x48u);
        v7[1892] = v21;
        v7[1893] = 1;
        v25 = *((_QWORD *)v7 + 154);
        *((_QWORD *)v7 + 258) = v24;
        *((_QWORD *)v7 + 259) = v25;
        v26 = v7 + 1536;
        tokio_tungstenite::domain::hcc27cd746affd60b(__dst, v7 + 1536);
        LOWORD(v27) = WORD4(__dst[0]);
        v29 = *((_QWORD *)&__dst[1] + 1);
        v28 = *(_QWORD *)&__dst[1];
        if ( *(_QWORD *)&__dst[0] != 15 )
        {
          v266 = *((_QWORD *)&__dst[1] + 1);
          v264 = *(_QWORD *)&__dst[1];
          v268 = *(_QWORD *)&__dst[0];
          v271 = *(_QWORD *)&__dst[2];
          v267 = (__m128i)__dst[3];
          v5 = *((_QWORD *)&__dst[2] + 1);
          v254.i64[0] = *(_QWORD *)&__dst[4];
          v255.i64[0] = *(_QWORD *)&__dst[5];
          v263.i64[0] = *((_QWORD *)&__dst[4] + 1);
          v269 = *(_QWORD *)&__dst[6];
          v258.i64[0] = *((_QWORD *)&__dst[5] + 1);
          v260.i64[0] = *(_QWORD *)&__dst[7];
          v256.i64[0] = *((_QWORD *)&__dst[6] + 1);
          v262.i64[0] = *((_QWORD *)&__dst[7] + 1);
          v45 = *((_QWORD *)&__dst[0] + 1) >> 16;
          v272 = *(_QWORD *)&__dst[8];
          goto LABEL_175;
        }
        *((_QWORD *)v7 + 229) = *((_QWORD *)&__dst[0] + 1);
        *((_QWORD *)v7 + 230) = v28;
        *((_QWORD *)v7 + 231) = v29;
        if ( (http::uri::Uri::port_u16::h0d19b02db5fcef57(v7 + 1632) & 1) != 0 )
        {
          v31 = v30;
          *((_QWORD *)&__dst[0] + 1) = 0x8000000000000003LL;
          *(_QWORD *)&__dst[0] = 12;
          goto LABEL_22;
        }
        if ( (unsigned __int8)v7[1632] < 2u )
        {
LABEL_52:
          v264 = *(_QWORD *)&__dst[1];
          v29 = *(_QWORD *)&__dst[2];
          v266 = *((_QWORD *)&__dst[1] + 1);
          v267 = (__m128i)__dst[3];
          v5 = *((_QWORD *)&__dst[2] + 1);
          v28 = *(_QWORD *)&__dst[4];
          v52 = *(_QWORD *)&__dst[5];
          v36 = *((_QWORD *)&__dst[4] + 1);
          v269 = *(_QWORD *)&__dst[6];
          v53 = *((_QWORD *)&__dst[5] + 1);
          v55 = *(_QWORD *)&__dst[7];
          v54 = *((_QWORD *)&__dst[6] + 1);
          v272 = *(_QWORD *)&__dst[8];
          v56 = *((_QWORD *)&__dst[7] + 1);
          v268 = 12;
          v45 = 0x800000000000LL;
          LOWORD(v27) = 3;
          goto LABEL_269;
        }
        v70 = *((_QWORD *)v7 + 205);
        v71 = *(_QWORD *)(v70 + 8);
        v72 = *(_QWORD *)(v70 + 16);
        if ( v72 == 3 )
        {
          v83 = *(_WORD *)v71 ^ 0x7377 | *(unsigned __int8 *)(v71 + 2) ^ 0x73;
          *((_QWORD *)&__dst[0] + 1) = 0x8000000000000003LL;
          *(_QWORD *)&__dst[0] = 12;
          if ( v83 )
            goto LABEL_52;
          v31 = 443;
        }
        else
        {
          if ( v72 != 2 )
            goto LABEL_52;
          v73 = __ROL2__(*(_WORD *)v71, 8);
          *((_QWORD *)&__dst[0] + 1) = 0x8000000000000003LL;
          *(_QWORD *)&__dst[0] = 12;
          if ( v73 != 30579 )
            goto LABEL_52;
          v31 = 80;
        }
LABEL_22:
        core::ptr::drop_in_place$LT$tungstenite..error..Error$GT$::h50c4b5dc25b39128(__dst);
        *((_WORD *)v7 + 944) = v31;
        *(_QWORD *)&__dst[0] = v7 + 1832;
        *((_QWORD *)&__dst[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&__dst[1] = v7 + 1888;
        *((_QWORD *)&__dst[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v230, &unk_1017B8B96, __dst);
        *(_QWORD *)&v221[16] = v230[1].i64[0];
        v32 = v230[0];
        *(__m128i *)v221 = v230[0];
        v33 = (__int64 *)(v7 + 1896);
        *((_QWORD *)v7 + 239) = v230[1].i64[0];
        *(__m128i *)(v7 + 1896) = v32;
        v263.i64[0] = (__int64)(v7 + 1920);
        v7[1920] = 0;
        v19 = v273;
LABEL_23:
        *(_WORD *)(v7 + 1921) = 0;
        *(_QWORD *)&v222[1] = v33[2];
        v34 = *v33;
        v265.i64[0] = (__int64)v33;
        *((_QWORD *)&v222[0] + 1) = v33[1];
        *(_QWORD *)&v222[0] = v34;
        v273 = v19;
        tokio::net::addr::_$LT$impl$u20$tokio..net..addr..sealed..ToSocketAddrsPriv$u20$for$u20$alloc..string..String$GT$::to_socket_addrs::h69df7fb618e4d9b2(
          __dst,
          v222);
        if ( *(_QWORD *)&v222[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v222[0] + 1), *(_QWORD *)&v222[0], 1);
        v230[1] = (__m128i)__dst[1];
        v35 = __dst[0];
        v230[0] = (__m128i)__dst[0];
        *(_OWORD *)(v7 + 1944) = __dst[1];
        *(_OWORD *)(v7 + 1928) = v35;
LABEL_26:
        v36 = (__int64)(v7 + 1928);
        _$LT$tokio..net..addr..sealed..MaybeReady$u20$as$u20$core..future..future..Future$GT$::poll::h0b82923473ad9b89(
          __dst,
          v7 + 1928,
          v270);
        if ( LODWORD(__dst[0]) == 3 )
        {
          v37 = 3;
          goto LABEL_28;
        }
        v258.i32[0] = __dst[0];
        v57 = DWORD1(__dst[0]);
        v262.i64[0] = *((_QWORD *)&__dst[0] + 1);
        v272 = *((_QWORD *)&__dst[1] + 1);
        a5 = _mm_loadu_si128((const __m128i *)&__dst[1]);
        v5 = *(_QWORD *)&__dst[2];
        if ( *((_WORD *)v7 + 964) == 3 )
        {
          v260 = a5;
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf01894121b818ffa(v7 + 1936);
          a5 = _mm_load_si128(&v260);
        }
        v58 = v258.i32[0];
        if ( v258.i32[0] == 2 )
        {
          v59 = 2;
          v27 = v262.i64[0];
          v60 = (volatile signed __int64 *)v265.i64[0];
          goto LABEL_308;
        }
        *(_WORD *)(v7 + 1921) = 1;
        *((_QWORD *)v7 + 241) = 0;
        *((_DWORD *)v7 + 484) = v58;
        *((_DWORD *)v7 + 485) = v57;
        *((_QWORD *)v7 + 243) = v262.i64[0];
        *((__m128i *)v7 + 122) = a5;
        *((_QWORD *)v7 + 246) = v5;
        while ( 1 )
        {
          v36 = (__int64)(v7 + 1936);
          _$LT$tokio..net..addr..sealed..OneOrMore$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75fe33042c2bb470(
            v227,
            v7 + 1936);
          if ( v227[0].i16[0] == 2 )
          {
            if ( *((_DWORD *)v7 + 484) )
            {
              v36 = *((_QWORD *)v7 + 245);
              if ( v36 )
              {
                v36 *= 32;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 243), v36, 4);
              }
            }
            v7[1921] = 0;
            v27 = *((_QWORD *)v7 + 241);
            v60 = (volatile signed __int64 *)v265.i64[0];
            if ( !v27 )
            {
              v36 = (__int64)&unk_1015FB823;
              v27 = std::io::error::Error::new::h2838dbd593bc6ec9(20, &unk_1015FB823, 32);
            }
            v7[1921] = 0;
            v59 = 2;
LABEL_308:
            v7[1922] = 0;
            v7[1920] = 1;
            v52 = (__int64)v60;
            core::ptr::drop_in_place$LT$tokio..net..tcp..stream..TcpStream..connect$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h23ef4e8a5da47869(
              v60,
              *(double *)a5.i64);
            if ( v59 != 2 )
            {
              v5 = (signed __int64)(v7 + 1856);
              *((_QWORD *)v7 + 232) = v59;
              *((_QWORD *)v7 + 233) = v27;
              *((__m128i *)v7 + 117) = _mm_load_si128(&v260);
              if ( v7[1892] == 1 )
              {
                v36 = 1;
                v27 = tokio::net::tcp::stream::TcpStream::set_nodelay::hee8c521071681384(v7 + 1856, 1);
                if ( v27 )
                {
                  _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(v7 + 1856);
                  v162 = *((unsigned int *)v7 + 470);
                  if ( (_DWORD)v162 != -1 )
                    close_NOCANCEL(v162);
                  v52 = (__int64)(v7 + 1856);
                  core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(v7 + 1856);
                  goto LABEL_314;
                }
              }
              v7[1894] = 0;
              memcpy(v208, v7 + 1536, sizeof(v208));
              qmemcpy(v212, v7 + 1760, sizeof(v212));
              v7[1893] = 0;
              v163 = *((void **)v7 + 258);
              v164 = *((_QWORD *)v7 + 259);
              v165 = *(_QWORD *)v5;
              v166 = *((_QWORD *)v7 + 233);
              v167 = *((_QWORD *)v7 + 234);
              *((_QWORD *)v60 + 3) = *((_QWORD *)v7 + 235);
              *((_QWORD *)v60 + 2) = v167;
              *((_QWORD *)v60 + 1) = v166;
              *v60 = v165;
              v259 = v163;
              *((_QWORD *)v7 + 241) = v163;
              v271 = v164;
              *((_QWORD *)v7 + 242) = v164;
              memcpy(v7 + 1944, v208, 0xE0u);
              qmemcpy(v7 + 2168, v212, 0x48u);
              v247 = v7 + 2584;
              v7[2584] = 0;
              v63 = v7 + 1896;
LABEL_316:
              v7[2585] = 0;
              v168 = *((_QWORD *)v7 + 243);
              v169 = *((_QWORD *)v7 + 244);
              v261 = *((_QWORD *)v7 + 245);
              v170 = *((_QWORD *)v7 + 246);
              v266 = *((_QWORD *)v7 + 247);
              v171 = *((_QWORD *)v7 + 248);
              v265.i64[0] = *((_QWORD *)v7 + 249);
              v172 = *((_QWORD *)v7 + 250);
              v76 = *((_QWORD *)v7 + 251);
              v173 = *((_QWORD *)v7 + 252);
              v263.i64[0] = *((_QWORD *)v7 + 253);
              v174 = *((_QWORD *)v7 + 254);
              v258.i64[0] = *((_QWORD *)v7 + 255);
              v269 = *((_QWORD *)v7 + 256);
              v175 = *((_QWORD *)v7 + 257);
              v260.i64[0] = *((_QWORD *)v7 + 258);
              v262.i64[0] = *((_QWORD *)v7 + 259);
              v272 = *((_QWORD *)v7 + 260);
              v7[2587] = 1;
              v176 = v63;
              v246 = *((_OWORD *)v63 + 1);
              v177 = *(_QWORD *)v63;
              v240 = v176;
              *((_QWORD *)&v245 + 1) = *((_QWORD *)v176 + 1);
              *(_QWORD *)&v245 = v177;
              qmemcpy(v7 + 2240, v7 + 2168, 0x48u);
              v7[2586] = 1;
              v178 = v259;
              *((_QWORD *)v7 + 289) = v259;
              *((_QWORD *)v7 + 290) = v271;
              if ( v168 == 3 )
              {
                v256.i64[0] = v175;
                v255.i64[0] = v174;
                v254.i64[0] = v173;
                v267.i64[1] = v76;
                v267.i64[0] = v172;
                v271 = v171;
                v264 = v170;
                v268 = v169;
                LOBYTE(v76) = v261;
                v85 = v261 >> 8;
                v19 = v273;
                v5 = v265.i64[0];
LABEL_329:
                if ( v178 )
                {
                  if ( v7[2586] )
                  {
                    v189 = *((volatile signed __int64 **)v7 + 290);
                    if ( v189 )
                    {
                      if ( !_InterlockedDecrement64(v189) )
                        ((void (*)(void))alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h3a9626c44d95f7f7)();
                    }
                  }
                }
                v7[2586] = 0;
                if ( v7[2587] )
                {
                  _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(&v245);
                  if ( DWORD2(v246) != -1 )
                    close_NOCANCEL(DWORD2(v246));
                  core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(&v245);
                }
                v7[2587] = 0;
                v259 = (void *)2;
LABEL_339:
                v273 = v19;
                memcpy(v203, v202, sizeof(v203));
                qmemcpy(v224, v223, sizeof(v224));
                memcpy(v215, v214, sizeof(v215));
                *v247 = 1;
                core::ptr::drop_in_place$LT$tokio_tungstenite..tls..client_async_tls_with_config$LT$http..request..Request$LT$$LP$$RP$$GT$$C$tokio..net..tcp..stream..TcpStream$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h81011bdb67a3e796(v240);
                v190 = v85 & 0xFFFFFFFFFFFF00LL;
                v191 = (_WORD)v85 << 8;
                v192 = *((_QWORD *)v7 + 229);
                if ( v192 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 230), v192, 1);
                LOWORD(v27) = (unsigned __int8)v76 | v191;
                v45 = v190 >> 8;
                v7[1893] = 0;
LABEL_180:
                v7[1894] = 0;
                memcpy(v204, v203, sizeof(v204));
                qmemcpy(v225, v224, sizeof(v225));
                memcpy(v216, v215, sizeof(v216));
                v274 = v7;
                v7[1891] = 1;
                core::ptr::drop_in_place$LT$tokio_tungstenite..connect..connect..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc2ce571355b33957(v239);
                v265.i64[0] = v5;
                v68 = (v45 << 16) | (unsigned __int16)v27;
                v69 = (__int64)v259;
LABEL_181:
                memcpy(v200, v204, sizeof(v200));
                v6 = (unsigned __int64 *)v213;
                qmemcpy(v213, v225, 0x48u);
                v5 = (signed __int64)v210;
                memcpy(v210, v216, sizeof(v210));
                *(_BYTE *)si128.i64[0] = 1;
                *v257 = 1;
                memcpy(v205, v200, sizeof(v205));
                qmemcpy(v226, v213, sizeof(v226));
                memcpy(v228, v210, sizeof(v228));
                if ( (_DWORD)v69 == 2 )
                {
                  *(_QWORD *)&__dst[0] = v268;
                  *((_QWORD *)&__dst[0] + 1) = v68;
                  *(_QWORD *)&__dst[1] = v264;
                  *((_QWORD *)&__dst[1] + 1) = v266;
                  *(_QWORD *)&__dst[2] = v271;
                  *((_QWORD *)&__dst[2] + 1) = v265.i64[0];
                  __dst[3] = v267;
                  *(_QWORD *)&__dst[4] = v254.i64[0];
                  *((_QWORD *)&__dst[4] + 1) = v263.i64[0];
                  *(_QWORD *)&__dst[5] = v255.i64[0];
                  *((_QWORD *)&__dst[5] + 1) = v258.i64[0];
                  *(_QWORD *)&__dst[6] = v269;
                  *((_QWORD *)&__dst[6] + 1) = v256.i64[0];
                  *(_QWORD *)&__dst[7] = v260.i64[0];
                  *((_QWORD *)&__dst[7] + 1) = v262.i64[0];
                  *(_QWORD *)&__dst[8] = v272;
                  v227[0].i64[0] = (__int64)__dst;
                  v227[0].i64[1] = (__int64)_$LT$tungstenite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h43a0d5906e71df33;
                  v9 = (__int64)&unk_1017B89A7;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v230, &unk_1017B89A7, v227);
                  v7 = v274;
                  core::ptr::drop_in_place$LT$tungstenite..error..Error$GT$::h50c4b5dc25b39128(__dst);
                  si128 = _mm_load_si128(v230);
                  v11 = v230[1].i64[0];
                  if ( v7[466] )
                    goto LABEL_247;
                  goto LABEL_172;
                }
                memcpy(&v230[9].u64[1], v205, 0x478u);
                qmemcpy(&v230[81], v226, 0x48u);
                v230[0].i64[0] = v69;
                v230[0].i64[1] = v268;
                v230[1].i64[0] = v68;
                v230[1].i64[1] = v264;
                v230[2].i64[0] = v266;
                v230[2].i64[1] = v271;
                v230[3].i64[0] = v265.i64[0];
                *(__m128i *)((char *)&v230[3] + 8) = v267;
                v230[4].i64[1] = v254.i64[0];
                v230[5].i64[0] = v263.i64[0];
                v230[5].i64[1] = v255.i64[0];
                v230[6].i64[0] = v258.i64[0];
                v230[6].i64[1] = v269;
                v230[7].i64[0] = v256.i64[0];
                v230[7].i64[1] = v260.i64[0];
                v230[8].i64[0] = v262.i64[0];
                v230[8].i64[1] = v272;
                v230[9].i64[0] = v250;
                v230[85].i16[4] = 0;
                v230[85].i8[10] = 1;
                v230[85].i8[15] = v228[4];
                *(__int32 *)((char *)&v230[85].i32[2] + 3) = *(_DWORD *)v228;
                v7 = v274;
                memcpy(v274 + 280, &v228[5], 0x88u);
                v7[474] = 0;
                memcpy((char *)&__dst[1] + 8, v230, 0x560u);
                *(_QWORD *)&__dst[0] = 1;
                *((_QWORD *)&__dst[0] + 1) = 1;
                *(_QWORD *)&__dst[1] = 1;
                *((_QWORD *)&__dst[87] + 1) = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2((char *)&__dst[1] + 8, v230);
                v122 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1408, 8);
                if ( !v122 )
                  alloc::alloc::handle_alloc_error::h450e44845847d219(8, 1408);
                v5 = (signed __int64)v122;
                memcpy(v122, __dst, 0x580u);
                v123 = _InterlockedIncrement64((volatile signed __int64 *)v5);
                if ( (v123 < 0) ^ v124 | (v123 == 0) )
                  goto LABEL_271;
                v7[473] = 1;
                *((_QWORD *)v7 + 28) = 0x8000000000000005LL;
                *((_QWORD *)v7 + 33) = v5;
                v7[472] = 1;
                v209[0] = v5;
                tokio::sync::batch_semaphore::Semaphore::new::h75e4ddfd8dfcbd5f(__dst, 128);
                *(_QWORD *)&__dst[3] = 128;
                v6 = (unsigned __int64 *)tokio::sync::mpsc::chan::channel::h7310d122627450af(__dst);
                v7[471] = 1;
                *(_QWORD *)v211 = v6;
                v7[470] = 1;
                *((_QWORD *)v7 + 52) = v125;
                *(_QWORD *)&__dst[0] = 1;
                *((_QWORD *)&__dst[0] + 1) = 1;
                *(_QWORD *)&__dst[3] = 0;
                *((_QWORD *)&__dst[3] + 1) = 0x8000000000000001LL;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, 128);
                v126 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 8);
                if ( !v126 )
                  alloc::alloc::handle_alloc_error::h450e44845847d219(8, 80);
                v127 = v126;
                qmemcpy(v126, __dst, 0x50u);
                if ( _InterlockedIncrement64((volatile signed __int64 *)v126) <= 0 )
LABEL_271:
                  BUG();
                v7[469] = 1;
                *(_QWORD *)v221 = v126;
                v7[465] = 1;
                *((_QWORD *)v7 + 60) = v126;
                codexmate_lib::core::voice::aliyun_asr::task_id::hdb787e4ae21a4b97(v7 + 424);
                v7[468] = 1;
                v128 = v7[464];
                *(_WORD *)(v7 + 471) = 0;
                v7[469] = 0;
                LOWORD(__dst[27]) = v128;
                *(_QWORD *)&__dst[1] = v5;
                *((_QWORD *)&__dst[1] + 1) = v6;
                *(_QWORD *)&__dst[0] = 1;
                *((_QWORD *)&__dst[0] + 1) = v127;
                *((_QWORD *)v7 + 56) = tokio::task::spawn::spawn::h798cd94cec7d838e(__dst);
                codexmate_lib::core::voice::aliyun_asr::start_message::ha72d0125791303c6(
                  __dst,
                  *((_QWORD *)v7 + 34),
                  *((unsigned int *)v7 + 116),
                  *((_QWORD *)v7 + 54),
                  *((_QWORD *)v7 + 55));
                v129 = _mm_loadu_si128((const __m128i *)((char *)__dst + 8));
                v130 = *((_QWORD *)&__dst[1] + 1);
                if ( LOBYTE(__dst[0]) )
                {
                  si128 = v129;
                  v270 = *((_QWORD *)&__dst[1] + 1);
                  goto LABEL_216;
                }
                v7[467] = 0;
                v5 = (signed __int64)(v7 + 488);
                v12 = 0x8000000000000000LL;
                *((_QWORD *)v7 + 61) = 0x8000000000000000LL;
                *((__m128i *)v7 + 31) = v129;
                *((_QWORD *)v7 + 64) = v130;
                *((_QWORD *)v7 + 66) = v7 + 224;
                v13 = v129.i64[0];
                epi64 = _mm_extract_epi64(v129, 1);
LABEL_191:
                v265.i64[0] = epi64;
                v257 = (_BYTE *)v13;
                v6 = *((unsigned __int64 **)v7 + 66);
                _$LT$futures_util..stream..stream..split..SplitSink$LT$S$C$Item$GT$$u20$as$u20$futures_sink..Sink$LT$Item$GT$$GT$::poll_ready::hbdfee71fd94796e1(
                  __dst,
                  v6,
                  v270);
                v131 = *(_QWORD *)&__dst[0];
                if ( *(_QWORD *)&__dst[0] == 16 )
                  goto LABEL_199;
                if ( LODWORD(__dst[0]) != 15 )
                  goto LABEL_198;
                *((_QWORD *)v7 + 61) = 0x8000000000000005LL;
                if ( *v6 != 0x8000000000000005LL )
                  core::ptr::drop_in_place$LT$tungstenite..protocol..message..Message$GT$::h66f842c93ca2a22b(v6);
                *v6 = v12;
                v132 = *((_QWORD *)v7 + 63);
                v6[1] = *((_QWORD *)v7 + 62);
                v6[2] = v132;
                v6[3] = *((_QWORD *)v7 + 64);
                v6[4] = *((_QWORD *)v7 + 65);
LABEL_196:
                _$LT$futures_util..stream..stream..split..SplitSink$LT$S$C$Item$GT$$u20$as$u20$futures_sink..Sink$LT$Item$GT$$GT$::poll_flush::h0d8b7922a14e1609(
                  __dst,
                  v6,
                  v270);
                v131 = *(_QWORD *)&__dst[0];
                if ( *(_QWORD *)&__dst[0] == 15 )
                {
                  v131 = 15;
                }
                else
                {
                  if ( LODWORD(__dst[0]) != 16 )
LABEL_198:
                    qmemcpy(v227, (char *)__dst + 8, 0x80u);
LABEL_199:
                  if ( (_DWORD)v131 == 16 )
                  {
                    *v275 = 0x8000000000000001LL;
                    result = 4;
                    goto LABEL_174;
                  }
                }
                qmemcpy(v220, v227, sizeof(v220));
                v17 = *(_QWORD *)v5;
                if ( *(_QWORD *)v5 != 0x8000000000000005LL )
                {
                  v133 = 5;
                  if ( v17 < 0 )
                    v133 = v17 ^ 0x8000000000000000LL;
                  if ( v133 >= 4 )
                  {
                    v134 = 488;
                    if ( v133 != 4 )
                      goto LABEL_209;
                    v17 = *((_QWORD *)v7 + 62);
                    v134 = 496;
                    if ( v17 >= (__int64)0x8000000000000002LL )
                      goto LABEL_209;
                  }
                  else
                  {
                    v17 = *((_QWORD *)v7 + 62);
                    v134 = 496;
LABEL_209:
                    if ( v17 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v7[v134 + 8], v17, 1);
                  }
                }
                if ( (_DWORD)v131 == 15 )
                {
                  if ( (unsigned __int8)v7[464] <= 1u )
                  {
                    v7[465] = 0;
                    v135 = *((_QWORD *)v7 + 60);
                    *(_QWORD *)&v222[0] = v135;
                    *(_QWORD *)&__dst[0] = tokio::time::instant::Instant::now::hb197b9d27ed5a60e();
                    DWORD2(__dst[0]) = v136;
                    v137 = tokio::time::instant::Instant::checked_add::h14afb9ac0530500d(__dst, 15, 0);
                    if ( (_DWORD)v138 == 1000000000 )
                      tokio::time::sleep::Sleep::far_future::h3ad30ca2bf953234(__dst, 0);
                    else
                      tokio::time::sleep::Sleep::new_timeout::h447fa92ddc264ff1(__dst, v137, v138, 0, &off_1019637A8);
                    qmemcpy(v227, __dst, 0x70u);
                    qmemcpy(v7 + 480, v227, 0x70u);
                    *((_QWORD *)v7 + 74) = v135;
LABEL_6:
                    v6 = (unsigned __int64 *)(v7 + 480);
                    tokio::runtime::context::CONTEXT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::hd549691ed52f2726();
                    v15 = v14[72];
                    if ( (_DWORD)v15 == 1 )
                    {
LABEL_9:
                      v15 = (unsigned int)tokio::task::coop::Budget::has_remaining::hf5eee7a33ec48d18(v14[68], v14[69]);
                    }
                    else if ( (_DWORD)v15 != 2 )
                    {
                      v16 = v14;
                      std::sys::thread_local::destructors::list::register::haf51cfcb91ad50b1(
                        v14,
                        std::sys::thread_local::native::eager::destroy::hb6557d45c448cf0f);
                      v14 = v16;
                      v16[72] = 1;
                      goto LABEL_9;
                    }
                    v17 = (__int64)(v7 + 592);
                    _$LT$tokio..sync..oneshot..Receiver$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hef5bc442aadbfcea(
                      __dst,
                      v7 + 592,
                      v270);
                    v5 = *(_QWORD *)&__dst[0];
                    if ( *(_QWORD *)&__dst[0] == 0x8000000000000002LL )
                    {
                      v17 = (__int64)(v7 + 480);
                      if ( (unsigned __int8)tokio::time::timeout::poll_delay::hc2f55ce65cc3e270(
                                              (unsigned __int8)v15 & 1u | ((_BYTE)v15 == 2),
                                              v7 + 480,
                                              v270) )
                      {
                        *v275 = 0x8000000000000001LL;
                        result = 5;
                        goto LABEL_174;
                      }
                    }
                    else
                    {
                      v15 = *((_QWORD *)&__dst[0] + 1);
                      v270 = *(_QWORD *)&__dst[1];
                    }
                    v41 = v7 + 480;
                    core::ptr::drop_in_place$LT$tokio..time..timeout..Timeout$LT$tokio..sync..oneshot..Receiver$LT$core..result..Result$LT$$LP$$RP$$C$alloc..string..String$GT$$GT$$GT$$GT$::haf642095255c9e6b(v7 + 480);
                    switch ( v5 )
                    {
                      case 0x8000000000000001LL:
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v17);
                        v5 = 31;
                        v44 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(31, 1);
                        if ( !v44 )
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 31);
                        v15 = (unsigned __int64)v44;
                        *(_QWORD *)((char *)v44 + 23) = 0xAD97E9B385E5B2B7LL;
                        v44[2] = 0xB7E5AC90E5919BE7LL;
                        v44[1] = 0xA88AE5AF90E5A18ALL;
                        *v44 = 0xE5BBBBE420525341LL;
                        v43 = 31;
LABEL_37:
                        v270 = v43;
                        break;
                      case 0x8000000000000002LL:
                        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v17);
                        v5 = 22;
                        v42 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1);
                        if ( !v42 )
                          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22);
                        v15 = (unsigned __int64)v42;
                        *(_QWORD *)((char *)v42 + 14) = 0xB697E685B6E8A88ALL;
                        v42[1] = 0xA88AE5AF90E5A18ALL;
                        *v42 = 0xE5BBBBE420525341LL;
                        v43 = 22;
                        goto LABEL_37;
                      case 0x8000000000000000LL:
                        LOBYTE(v257) = v7[464];
                        goto LABEL_249;
                    }
                    tokio::runtime::task::harness::_$LT$impl$u20$tokio..runtime..task..raw..RawTask$GT$::remote_abort::h92cb223c45223ef6(v7 + 448);
                    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)v15);
                    goto LABEL_216;
                  }
                  LOBYTE(v257) = 2;
LABEL_249:
                  v7[473] = 0;
                  v11 = *((_QWORD *)v7 + 28);
                  v150 = *((_QWORD *)v7 + 29);
                  v236 = *((_QWORD *)v7 + 33);
                  v235 = *((_QWORD *)v7 + 32);
                  v234 = *((_QWORD *)v7 + 31);
                  v233 = *((_QWORD *)v7 + 30);
                  v232 = v150;
                  v6 = *((unsigned __int64 **)v7 + 52);
                  v270 = *((_QWORD *)v7 + 53);
                  si128 = _mm_loadu_si128((const __m128i *)v7 + 27);
                  v7[470] = 0;
                  v5 = *((_QWORD *)v7 + 56);
                  *(_WORD *)(v7 + 467) = 0;
                  if ( v7[465] )
                  {
                    v151 = *((_QWORD **)v7 + 60);
                    if ( v151 )
                    {
                      v152 = v7 + 480;
                      v153 = v151[6];
                      do
                      {
                        v154 = v153;
                        v153 = _InterlockedCompareExchange64(v151 + 6, v153 | 4, v153);
                      }
                      while ( v154 != v153 );
                      v265.i64[0] = (__int64)(v7 + 480);
                      v263.i64[0] = v153;
                      if ( (v153 & 0xA) == 8 )
                      {
                        (*(void (__fastcall **)(_QWORD, __int64, char *))(v151[2] + 16LL))(v151[3], v17, v152);
                        LOBYTE(v153) = v263.i8[0];
                      }
                      if ( (v153 & 3) == 1 )
                      {
                        _InterlockedAnd64(v151 + 6, 0xFFFFFFFFFFFFFFFELL);
                        tokio::sync::oneshot::Task::drop_task::hb112efae565ccdfd(v151 + 4, v17, v152);
                        LOBYTE(v153) = v263.i8[0];
                      }
                      if ( (v153 & 2) != 0 )
                      {
                        v17 = v151[7];
                        v155 = v151[8];
                        v151[7] = 0x8000000000000001LL;
                        if ( v17 >= (__int64)0x8000000000000002LL )
                        {
                          if ( v17 )
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v17, 1);
                        }
                      }
                      v156 = v265.i64[0];
                      if ( *(_QWORD *)v265.i64[0] && !_InterlockedDecrement64(*(volatile signed __int64 **)v265.i64[0]) )
                        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde30840f551911cc(v156, v17, v152);
                    }
                  }
                  v7[465] = 0;
                  *(_DWORD *)(v7 + 469) = 0;
                  v7[473] = 0;
                  core::ptr::drop_in_place$LT$http..response..Response$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$$GT$::h0533a8ba1061ed83(v7 + 280);
                  v7[474] = 0;
                  v237 = v270;
                  LOBYTE(v9) = (_BYTE)v257;
                  goto LABEL_172;
                }
                *(_QWORD *)&__dst[0] = v131;
                qmemcpy((char *)__dst + 8, v220, 0x80u);
                tokio::runtime::task::harness::_$LT$impl$u20$tokio..runtime..task..raw..RawTask$GT$::remote_abort::h92cb223c45223ef6(v7 + 448);
                *(_QWORD *)&v222[0] = __dst;
                *((_QWORD *)&v222[0] + 1) = _$LT$tungstenite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h43a0d5906e71df33;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v227, &unk_1017BEA8C, v222);
                si128 = _mm_load_si128(v227);
                v270 = v227[1].i64[0];
                core::ptr::drop_in_place$LT$tungstenite..error..Error$GT$::h50c4b5dc25b39128(__dst);
LABEL_216:
                v7[467] = 0;
                v139 = *((_QWORD *)v7 + 56);
                if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v139) )
                  tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v139);
                v141 = *((_QWORD *)v7 + 53);
                if ( v141 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 54), v141, 1);
                v7[468] = 0;
                if ( v7[465] )
                {
                  v142 = *((_QWORD *)v7 + 60);
                  if ( v142 )
                  {
                    v5 = (signed __int64)(v7 + 480);
                    v143 = _InterlockedOr64((volatile signed __int64 *)(v142 + 48), 4u);
                    if ( (v143 & 0xA) == 8 )
                    {
                      v144 = v143;
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v142 + 16) + 16LL))(*(_QWORD *)(v142 + 24));
                      v143 = v144;
                    }
                    if ( (v143 & 3) == 1 )
                    {
                      _InterlockedAnd64((volatile signed __int64 *)(v142 + 48), 0xFFFFFFFFFFFFFFFELL);
                      v145 = v143;
                      tokio::sync::oneshot::Task::drop_task::hb112efae565ccdfd(v142 + 32, v141, v140);
                      v143 = v145;
                    }
                    if ( (v143 & 2) != 0 )
                    {
                      v141 = *(_QWORD *)(v142 + 56);
                      v146 = *(_QWORD *)(v142 + 64);
                      *(_QWORD *)(v142 + 56) = 0x8000000000000001LL;
                      if ( v141 >= (__int64)0x8000000000000002LL )
                      {
                        if ( v141 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, v141, 1);
                      }
                    }
                    if ( *(_QWORD *)v5 && !_InterlockedDecrement64(*(volatile signed __int64 **)v5) )
                      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde30840f551911cc(v7 + 480, v141, v140);
                  }
                }
                v7[465] = 0;
                v7[469] = 0;
                _$LT$tokio..sync..mpsc..chan..Rx$LT$T$C$S$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc6e728fbea7ca2d8(v7 + 416);
                if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v7 + 52)) )
                  alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h27faf00dded5e896(v7 + 416);
                *((_WORD *)v7 + 235) = 0;
                v7[472] = 0;
                v147 = (__int64 *)(v7 + 224);
                if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v7 + 33)) )
                  alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h57ffbf3b6d0b5b2e(v7 + 264);
                v9 = *v147;
                if ( *v147 != 0x8000000000000005LL )
                {
                  v148 = 5;
                  if ( v9 < 0 )
                    v148 = v9 ^ 0x8000000000000000LL;
                  if ( v148 >= 4 )
                  {
                    v149 = 224;
                    if ( v148 != 4 )
                      goto LABEL_244;
                    v9 = *((_QWORD *)v7 + 29);
                    v149 = 232;
                    if ( v9 >= (__int64)0x8000000000000002LL )
                      goto LABEL_244;
                  }
                  else
                  {
                    v9 = *((_QWORD *)v7 + 29);
                    v149 = 232;
LABEL_244:
                    if ( v9 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v7[v149 + 8], v9, 1);
                  }
                }
                v7[473] = 0;
                core::ptr::drop_in_place$LT$http..response..Response$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$$GT$::h0533a8ba1061ed83(v7 + 280);
                v7[474] = 0;
                v11 = v270;
                if ( v7[466] )
                  goto LABEL_247;
                goto LABEL_172;
              }
              *((_QWORD *)v7 + 291) = v168;
              *((_QWORD *)v7 + 292) = v169;
              *((_QWORD *)v7 + 293) = v261;
              *((_QWORD *)v7 + 294) = v170;
              *((_QWORD *)v7 + 295) = v266;
              *((_QWORD *)v7 + 296) = v171;
              *((_QWORD *)v7 + 297) = v265.i64[0];
              *((_QWORD *)v7 + 298) = v172;
              *((_QWORD *)v7 + 299) = v76;
              *((_QWORD *)v7 + 300) = v173;
              *((_QWORD *)v7 + 301) = v263.i64[0];
              *((_QWORD *)v7 + 302) = v174;
              *((_QWORD *)v7 + 303) = v258.i64[0];
              *((_QWORD *)v7 + 304) = v269;
              *((_QWORD *)v7 + 305) = v175;
              *((_QWORD *)v7 + 306) = v260.i64[0];
              *((_QWORD *)v7 + 307) = v262.i64[0];
              *((_QWORD *)v7 + 308) = v272;
              qmemcpy(v7 + 2472, v7 + 2088, 0x50u);
              v19 = v273;
              tokio_tungstenite::domain::hcc27cd746affd60b(__dst, v7 + 2328);
              v76 = *((_QWORD *)&__dst[0] + 1);
              v179 = __dst[1];
              if ( *(_QWORD *)&__dst[0] == 15 )
              {
                v7[2585] = 1;
                *((_QWORD *)v7 + 319) = v76;
                *((_OWORD *)v7 + 160) = v179;
                tungstenite::client::uri_mode::h312479bf66973cce(__dst, v7 + 2424);
                v86 = *(_QWORD *)&__dst[0];
                LOBYTE(v76) = BYTE8(__dst[0]);
                if ( *(_QWORD *)&__dst[0] == 15 )
                {
                  v180 = (__int64 *)(v7 + 2552);
                  if ( *((_DWORD *)v7 + 578) == 1 )
                  {
                    v7[2586] = 0;
                    v181 = *((_QWORD *)v7 + 290);
                    *((_QWORD *)v7 + 322) = v181;
                    if ( v181 )
                    {
                      v7[2587] = 0;
                      __dst[1] = v246;
                      __dst[0] = v245;
                      v7[2585] = 0;
                      v182 = *((_QWORD *)v7 + 321);
                      v183 = *v180;
                      v184 = *((_QWORD *)v7 + 320);
                      v185 = __dst[0];
                      v230[0] = (__m128i)__dst[0];
                      __SET_PAIR__(v187, v186, __dst[1]);
                      v230[1] = (__m128i)__dst[1];
                      v230[2].i64[0] = v183;
                      v230[2].i64[1] = v184;
                      v230[3].i64[0] = v182;
                      *((_QWORD *)v7 + 330) = v182;
                      *((_QWORD *)v7 + 329) = v184;
                      *((_QWORD *)v7 + 328) = v183;
                      *((_OWORD *)v7 + 163) = __PAIR128__(v187, v186);
                      *((_OWORD *)v7 + 162) = v185;
                      *((_QWORD *)v7 + 331) = v181;
                      v7[3792] = v76;
                      v7[3793] = 0;
LABEL_82:
                      tokio_tungstenite::tls::encryption::rustls::wrap_stream::_$u7b$$u7b$closure$u7d$$u7d$::h739dbe0ed0b129e7(
                        __dst,
                        v7 + 2592,
                        v270);
                      v77 = *(_QWORD *)&__dst[0];
                      if ( *(_QWORD *)&__dst[0] == 4 )
                      {
                        v78 = 3;
                        goto LABEL_106;
                      }
                      goto LABEL_94;
                    }
                    v7[2587] = 0;
                    v80 = v7 + 2592;
                    v199 = *((_QWORD *)&v245 + 1);
                    *((_QWORD *)v7 + 324) = v245;
                    *((_QWORD *)v7 + 325) = v199;
                    *((_OWORD *)v7 + 163) = v246;
                    v7[2624] = v76;
                    v7[2625] = 0;
LABEL_86:
                    __dst[1] = *((_OWORD *)v80 + 1);
                    v81 = *(_QWORD *)v80;
                    *((_QWORD *)&__dst[0] + 1) = *((_QWORD *)v80 + 1);
                    *(_QWORD *)&__dst[0] = v81;
                    if ( (v76 & 1) != 0 )
                    {
                      _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(__dst);
                      if ( DWORD2(__dst[1]) != -1 )
                        close_NOCANCEL(DWORD2(__dst[1]));
                      core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(__dst);
                      v265 = (__m128i)xmmword_1015DB9E0;
                      v77 = 3;
                    }
                    else
                    {
                      v265 = (__m128i)__dst[0];
                      v263 = *((__m128i *)v7 + 163);
                      v77 = 2;
                    }
                    v7[2625] = 1;
                  }
                  else
                  {
                    v7[2587] = 0;
                    __dst[1] = v246;
                    __dst[0] = v245;
                    v7[2585] = 0;
                    v193 = *((_QWORD *)v7 + 321);
                    v194 = *v180;
                    v195 = *((_QWORD *)v7 + 320);
                    v196 = __dst[0];
                    v230[0] = (__m128i)__dst[0];
                    __SET_PAIR__(v198, v197, __dst[1]);
                    v230[1] = (__m128i)__dst[1];
                    v230[2].i64[0] = v194;
                    v230[2].i64[1] = v195;
                    v230[3].i64[0] = v193;
                    *((_QWORD *)v7 + 330) = v193;
                    *((_QWORD *)v7 + 329) = v195;
                    *((_QWORD *)v7 + 328) = v194;
                    *((_OWORD *)v7 + 163) = __PAIR128__(v198, v197);
                    *((_OWORD *)v7 + 162) = v196;
                    *((_QWORD *)v7 + 331) = 0;
                    v7[3792] = v76;
                    v7[3793] = 0;
LABEL_80:
                    tokio_tungstenite::tls::encryption::rustls::wrap_stream::_$u7b$$u7b$closure$u7d$$u7d$::h739dbe0ed0b129e7(
                      __dst,
                      v7 + 2592,
                      v270);
                    v77 = *(_QWORD *)&__dst[0];
                    if ( *(_QWORD *)&__dst[0] == 4 )
                    {
                      v78 = 5;
LABEL_106:
                      v39 = v274;
                      *v247 = v78;
                      v38 = 4;
                      goto LABEL_107;
                    }
LABEL_94:
                    v265 = *(__m128i *)((char *)__dst + 8);
                    v263 = *(__m128i *)((char *)&__dst[1] + 8);
                    v260 = *(__m128i *)((char *)&__dst[2] + 8);
                    v254 = *(__m128i *)((char *)&__dst[3] + 8);
                    v255 = *(__m128i *)((char *)&__dst[4] + 8);
                    v256 = *(__m128i *)((char *)&__dst[5] + 8);
                    v258 = *(__m128i *)((char *)&__dst[6] + 8);
                    v262 = _mm_loadu_si128((const __m128i *)((char *)&__dst[7] + 8));
                    v272 = *((_QWORD *)&__dst[8] + 1);
                    memcpy(v206, &__dst[9], sizeof(v206));
                    core::ptr::drop_in_place$LT$tokio_tungstenite..tls..encryption..rustls..wrap_stream$LT$tokio..net..tcp..stream..TcpStream$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6bbfed6c0bce5ff4(v7 + 2592);
                  }
                  if ( (_DWORD)v77 == 3 )
                  {
                    v84 = _mm_load_si128(&v265);
                    v76 = _mm_extract_epi64(v84, 1);
                    v85 = v76 >> 8;
                    v86 = v84.i64[0];
                    v87 = _mm_load_si128(&v263);
                    v88 = v87.i64[0];
                    v89 = _mm_extract_epi64(v87, 1);
                    v90 = _mm_load_si128(&v260);
                    v5 = _mm_extract_epi64(v90, 1);
                    v271 = v90.i64[0];
                    v91 = _mm_load_si128(&v254);
                    v267.i64[0] = v91.i64[0];
                    v267.i64[1] = _mm_extract_epi64(v91, 1);
                    v92 = _mm_load_si128(&v255);
                    v93 = v92.i64[0];
                    v94 = _mm_extract_epi64(v92, 1);
                    v95 = _mm_load_si128(&v256);
                    v96 = v95.i64[0];
                    v97 = _mm_extract_epi64(v95, 1);
                    v98 = _mm_load_si128(&v258);
                    v256.i64[0] = _mm_extract_epi64(v98, 1);
                    v269 = v98.i64[0];
                    v99 = _mm_load_si128(&v262);
                    v100 = v99.i64[0];
                    v262.i64[0] = _mm_extract_epi64(v99, 1);
                    v101 = v272;
                    v102 = __PAIR128__(v96, v94);
                    goto LABEL_325;
                  }
                  v273 = v19;
                  memcpy(v7 + 2592, v7 + 2328, 0xE0u);
                  *((_QWORD *)v7 + 352) = v77;
                  v76 = (unsigned __int64)(v7 + 2592);
                  *(__m128i *)(v7 + 2824) = v265;
                  *(__m128i *)(v7 + 2840) = v263;
                  *(__m128i *)(v7 + 2856) = v260;
                  *(__m128i *)(v7 + 2872) = v254;
                  *(__m128i *)(v7 + 2888) = v255;
                  *(__m128i *)(v7 + 2904) = v256;
                  *(__m128i *)(v7 + 2920) = v258;
                  *(__m128i *)(v7 + 2936) = _mm_load_si128(&v262);
                  *((_QWORD *)v7 + 369) = v272;
                  memcpy(v7 + 2960, v206, 0x3B8u);
                  qmemcpy(v7 + 3912, v7 + 2240, 0x48u);
                  v242 = v7 + 11080;
                  v7[11080] = 0;
LABEL_101:
                  memcpy(v230, (const void *)v76, 0xE0u);
                  memcpy(__dst, v7 + 2816, 0x448u);
                  qmemcpy(&v230[14], v7 + 3912, 0x48u);
                  memcpy((char *)&__dst[68] + 8, v230, 0x128u);
                  v103 = v7 + 3984;
                  memcpy(v7 + 3984, __dst, 0x1BB0u);
                  v248 = v7 + 11072;
                  v7[11072] = 0;
LABEL_102:
                  memcpy(v230, v103, 0x448u);
                  memcpy(&v230[68].u64[1], v7 + 5080, 0x128u);
                  memcpy(v222, v230, sizeof(v222));
                  memcpy(v7 + 5376, v222, 0x570u);
                  v241 = v7 + 6768;
                  v7[6768] = 0;
                  v251 = v103;
                  v243 = v7 + 5376;
                  memcpy(&v227[18].u64[1], v7 + 5376, 0x448u);
                  memcpy(v227, v7 + 6472, 0x128u);
                  memcpy(v7 + 6776, v227, 0x570u);
LABEL_103:
                  _$LT$tokio_tungstenite..handshake..StartedHandshakeFuture$LT$F$C$S$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h6ace7df104b9f189(
                    v230,
                    v7 + 6776,
                    v270);
                  v104 = v230[0].i64[0];
                  if ( v230[0].i64[0] == 4 )
                  {
                    v105 = 3;
LABEL_105:
                    *v241 = v105;
                    *v248 = 3;
                    *v242 = 3;
                    v78 = 6;
                    goto LABEL_106;
                  }
                  v268 = v230[0].i64[1];
                  v264 = v230[1].i64[1];
                  v261 = v230[1].u64[0];
                  v271 = v230[2].i64[1];
                  v266 = v230[2].i64[0];
                  v267 = *(__m128i *)((char *)&v230[3] + 8);
                  v5 = v230[3].i64[0];
                  v254.i64[0] = v230[4].i64[1];
                  v255.i64[0] = v230[5].i64[1];
                  v263.i64[0] = v230[5].i64[0];
                  v269 = v230[6].i64[1];
                  v258.i64[0] = v230[6].i64[0];
                  v260.i64[0] = v230[7].i64[1];
                  v256.i64[0] = v230[7].i64[0];
                  v272 = v230[8].i64[1];
                  v262.i64[0] = v230[8].i64[0];
                  v250 = v230[9].i64[0];
                  memcpy(v211, &v230[9].u64[1], sizeof(v211));
                  memcpy(v218, &v230[81], sizeof(v218));
                  if ( *((_DWORD *)v7 + 1694) != 3 )
                  {
                    core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v7 + 6776);
                    core::ptr::drop_in_place$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$::h96ec2d68c3075927(v7 + 7072);
                  }
                  if ( (_DWORD)v104 == 3 )
                  {
                    *((_QWORD *)v7 + 1197) = v268;
                    *((_QWORD *)v7 + 1198) = v261;
                    *((_QWORD *)v7 + 1199) = v264;
                    *((_QWORD *)v7 + 1200) = v266;
                    *((_QWORD *)v7 + 1201) = v271;
                    *((_QWORD *)v7 + 1202) = v5;
                    *(__m128i *)(v7 + 9624) = v267;
                    *((_QWORD *)v7 + 1205) = v254.i64[0];
                    *((_QWORD *)v7 + 1206) = v263.i64[0];
                    *((_QWORD *)v7 + 1207) = v255.i64[0];
                    *((_QWORD *)v7 + 1208) = v258.i64[0];
                    *((_QWORD *)v7 + 1209) = v269;
                    *((_QWORD *)v7 + 1210) = v256.i64[0];
                    *((_QWORD *)v7 + 1211) = v260.i64[0];
                    *((_QWORD *)v7 + 1212) = v262.i64[0];
                    *((_QWORD *)v7 + 1213) = v272;
                    *((_QWORD *)v7 + 1214) = v250;
                    memcpy(v7 + 9720, v211, 0x478u);
                    *((_QWORD *)v7 + 1196) = 3;
                    memcpy(v221, v211, sizeof(v221));
                    v259 = (void *)2;
                  }
                  else
                  {
                    v244 = v76;
                    v259 = v7 + 9568;
                    *((_QWORD *)v7 + 1196) = v104;
                    v106 = v268;
                    *((_QWORD *)v7 + 1197) = v268;
                    *((_QWORD *)v7 + 1198) = v261;
                    v107 = v5;
                    v108 = v264;
                    *((_QWORD *)v7 + 1199) = v264;
                    v109 = v266;
                    *((_QWORD *)v7 + 1200) = v266;
                    *((_QWORD *)v7 + 1201) = v271;
                    v265.i64[0] = v107;
                    *((_QWORD *)v7 + 1202) = v107;
                    *(__m128i *)(v7 + 9624) = v267;
                    *((_QWORD *)v7 + 1205) = v254.i64[0];
                    *((_QWORD *)v7 + 1206) = v263.i64[0];
                    *((_QWORD *)v7 + 1207) = v255.i64[0];
                    *((_QWORD *)v7 + 1208) = v258.i64[0];
                    *((_QWORD *)v7 + 1209) = v269;
                    *((_QWORD *)v7 + 1210) = v256.i64[0];
                    *((_QWORD *)v7 + 1211) = v260.i64[0];
                    *((_QWORD *)v7 + 1212) = v262.i64[0];
                    v110 = v272;
                    *((_QWORD *)v7 + 1213) = v272;
                    *((_QWORD *)v7 + 1214) = v250;
                    memcpy(v7 + 9720, v211, 0x478u);
                    memcpy(v7 + 10864, v218, 0xD0u);
                    memcpy(v7 + 8064, v259, 0x5E0u);
                    v259 = *((void **)v7 + 1008);
                    if ( v259 == (void *)2 )
                    {
                      *((_QWORD *)v7 + 847) = v106;
                      *((_QWORD *)v7 + 848) = v261;
                      *((_QWORD *)v7 + 849) = v108;
                      *((_QWORD *)v7 + 850) = v109;
                      *((_QWORD *)v7 + 851) = v271;
                      *((_QWORD *)v7 + 852) = v265.i64[0];
                      *(__m128i *)(v7 + 6824) = v267;
                      *((_QWORD *)v7 + 855) = v254.i64[0];
                      *((_QWORD *)v7 + 856) = v263.i64[0];
                      *((_QWORD *)v7 + 857) = v255.i64[0];
                      *((_QWORD *)v7 + 858) = v258.i64[0];
                      *((_QWORD *)v7 + 859) = v269;
                      *((_QWORD *)v7 + 860) = v256.i64[0];
                      *((_QWORD *)v7 + 861) = v260.i64[0];
                      *((_QWORD *)v7 + 862) = v262.i64[0];
                      *((_QWORD *)v7 + 863) = v110;
                      *((_QWORD *)v7 + 864) = v250;
                      memcpy(v7 + 6920, v211, 0x478u);
                      v19 = v273;
                      v76 = v244;
LABEL_121:
                      _$LT$tokio_tungstenite..handshake..MidHandshake$LT$Role$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hb89dbe6500577c81(
                        v230,
                        v7 + 6776);
                      if ( v230[0].i64[0] == 3 )
                      {
                        v105 = 4;
                        goto LABEL_105;
                      }
                      v268 = v230[0].i64[1];
                      v259 = (void *)v230[0].i64[0];
                      v264 = v230[1].i64[1];
                      v261 = v230[1].u64[0];
                      v271 = v230[2].i64[1];
                      v266 = v230[2].i64[0];
                      v267 = *(__m128i *)((char *)&v230[3] + 8);
                      v5 = v230[3].i64[0];
                      v254.i64[0] = v230[4].i64[1];
                      v255.i64[0] = v230[5].i64[1];
                      v263.i64[0] = v230[5].i64[0];
                      v269 = v230[6].i64[1];
                      v258.i64[0] = v230[6].i64[0];
                      v260.i64[0] = v230[7].i64[1];
                      v256.i64[0] = v230[7].i64[0];
                      v272 = v230[8].i64[1];
                      v262.i64[0] = v230[8].i64[0];
                      v250 = v230[9].i64[0];
                      memcpy(v221, &v230[9].u64[1], sizeof(v221));
                      memcpy(v217, &v230[81], sizeof(v217));
                      v112 = *((_DWORD *)v7 + 1694) == 3;
                      v273 = v19;
                      if ( !v112 )
                        core::ptr::drop_in_place$LT$tungstenite..handshake..MidHandshake$LT$tungstenite..handshake..client..ClientHandshake$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$$GT$$GT$::h62b41b07c8db71c8(v7 + 6776);
                    }
                    else
                    {
                      memcpy(v221, v211, sizeof(v221));
                      memcpy(v217, v218, sizeof(v217));
                      v5 = v265.i64[0];
                      v76 = v244;
                    }
                  }
                  memcpy(v201, v221, sizeof(v201));
                  memcpy(v219, v217, sizeof(v219));
                  *v241 = 1;
                  core::ptr::drop_in_place$LT$tokio_tungstenite..handshake..handshake$LT$tungstenite..handshake..client..ClientHandshake$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$$C$tokio_tungstenite..client_async_with_config$LT$http..request..Request$LT$$LP$$RP$$GT$$C$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$C$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h31f5139c756066b1(v243);
                  memcpy(v209, v201, sizeof(v209));
                  v19 = v273;
                  if ( (_DWORD)v259 == 2 )
                  {
                    *v248 = 1;
                    v114 = (_BYTE *)v267.i64[1];
                    v113 = v267.i64[0];
                    v115 = v263.i64[0];
                    v116 = v255.i64[0];
                    if ( v268 == 3 )
                    {
                      v268 = v261;
                      v117 = v5;
                      v261 = v264;
                      v264 = v266;
                      v244 = v76;
                      v265.i64[0] = v272;
                      v266 = v271;
                      v271 = v5;
                      v267.i64[0] = v267.i64[1];
                      v267.i64[1] = v254.i64[0];
                      v254.i64[0] = v263.i64[0];
                      v263.i64[0] = v255.i64[0];
                      v255.i64[0] = v258.i64[0];
                      v258.i64[0] = v269;
                      v269 = v256.i64[0];
                      v19 = v273;
                      v256.i64[0] = v260.i64[0];
                      v5 = v113;
                      v260.i64[0] = v262.i64[0];
                      v262.i64[0] = v272;
                      v272 = v250;
                    }
                    else
                    {
                      v230[0].i64[0] = v268;
                      v230[0].i64[1] = v261;
                      v230[1].i64[0] = v264;
                      v230[1].i64[1] = v266;
                      v230[2].i64[0] = v271;
                      v230[2].i64[1] = v5;
                      v230[3] = v267;
                      v230[4].i64[0] = v254.i64[0];
                      v230[4].i64[1] = v263.i64[0];
                      v230[5].i64[0] = v255.i64[0];
                      v230[5].i64[1] = v258.i64[0];
                      v230[6].i64[0] = v269;
                      v230[6].i64[1] = v256.i64[0];
                      v230[7].i64[0] = v260.i64[0];
                      v230[7].i64[1] = v262.i64[0];
                      v230[8].i64[0] = v272;
                      v230[8].i64[1] = v250;
                      memcpy(&v230[9], v209, 0x478u);
                      *(_QWORD *)&v222[0] = 0;
                      *((_QWORD *)&v222[0] + 1) = 1;
                      *(_QWORD *)&v222[1] = 0;
                      v227[1].i64[0] = 1610612768;
                      v227[0].i64[0] = (__int64)v222;
                      v227[0].i64[1] = (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_394;
                      if ( (unsigned __int8)_$LT$tungstenite..handshake..HandshakeError$LT$Role$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha185a1ea43aad16e(
                                              v230,
                                              v227) )
                        core::result::unwrap_failed::h855bccc0ecc45c4f(
                          &anon_4fd0d0f33f5bcd90fdaba20400e954f2_395,
                          55,
                          v221,
                          &anon_4fd0d0f33f5bcd90fdaba20400e954f2_406,
                          &anon_4fd0d0f33f5bcd90fdaba20400e954f2_397);
                      *(_OWORD *)v221 = v222[0];
                      *(_QWORD *)&v221[16] = *(_QWORD *)&v222[1];
                      v114 = v221;
                      v261 = std::io::error::Error::new::hed5795277fd2c277(40, v221);
                      if ( v230[0].i32[0] == 3 )
                        core::ptr::drop_in_place$LT$tungstenite..error..Error$GT$::h50c4b5dc25b39128(&v230[0].u64[1]);
                      else
                        core::ptr::drop_in_place$LT$tungstenite..handshake..MidHandshake$LT$tungstenite..handshake..client..ClientHandshake$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$$GT$$GT$::h62b41b07c8db71c8(v230);
                      v268 = 5;
                    }
                  }
                  else
                  {
                    qmemcpy(v223, v219, sizeof(v223));
                    memcpy(&v214[5], &v219[72], 0x88u);
                    *v248 = 1;
                    v114 = v209;
                    memcpy(v202, v209, sizeof(v202));
                  }
                  *v242 = 1;
                  core::ptr::drop_in_place$LT$tokio_tungstenite..client_async_with_config$LT$http..request..Request$LT$$LP$$RP$$GT$$C$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::he71a8e8fe0e8f320(
                    v76,
                    v114,
                    v113,
                    v117,
                    v115,
                    v116);
                  LOBYTE(v76) = v261;
                  v85 = v261 >> 8;
                  if ( v7[2585] )
                  {
                    v118 = *((_QWORD *)v7 + 319);
                    if ( v118 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 320), v118, 1);
                  }
                  *(_WORD *)(v7 + 2585) = 0;
                  v7[2587] = 0;
                  goto LABEL_339;
                }
                v85 = ((unsigned __int64)((HIBYTE(__dst[0]) << 16)
                                        | (unsigned int)*(unsigned __int16 *)((char *)__dst + 13)) << 32)
                    | *(unsigned int *)((char *)__dst + 9);
                v88 = *(_QWORD *)&__dst[1];
                v271 = *(_QWORD *)&__dst[2];
                v89 = *((_QWORD *)&__dst[1] + 1);
                v267 = (__m128i)__dst[3];
                v5 = *((_QWORD *)&__dst[2] + 1);
                v93 = *(_QWORD *)&__dst[4];
                v102 = *(_OWORD *)((char *)&__dst[4] + 8);
                v269 = *(_QWORD *)&__dst[6];
                v97 = *((_QWORD *)&__dst[5] + 1);
                v100 = *(_QWORD *)&__dst[7];
                v256.i64[0] = *((_QWORD *)&__dst[6] + 1);
                v101 = *(_QWORD *)&__dst[8];
                v262.i64[0] = *((_QWORD *)&__dst[7] + 1);
LABEL_325:
                v264 = v88;
                v266 = v89;
                v268 = v86;
                v272 = v101;
                v112 = v7[2585] == 0;
                v254.i64[0] = v93;
                v255.i64[0] = v102 >> 64;
                v263.i64[0] = v102;
                v258.i64[0] = v97;
                v260.i64[0] = v100;
                if ( !v112 )
                {
                  v188 = *((_QWORD *)v7 + 319);
                  if ( v188 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 320), v188, 1);
                }
              }
              else
              {
                v266 = *((_QWORD *)&__dst[1] + 1);
                v264 = *(_QWORD *)&__dst[1];
                v268 = *(_QWORD *)&__dst[0];
                v271 = *(_QWORD *)&__dst[2];
                v267 = (__m128i)__dst[3];
                v5 = *((_QWORD *)&__dst[2] + 1);
                v254.i64[0] = *(_QWORD *)&__dst[4];
                v255.i64[0] = *(_QWORD *)&__dst[5];
                v263.i64[0] = *((_QWORD *)&__dst[4] + 1);
                v269 = *(_QWORD *)&__dst[6];
                v258.i64[0] = *((_QWORD *)&__dst[5] + 1);
                v260.i64[0] = *(_QWORD *)&__dst[7];
                v256.i64[0] = *((_QWORD *)&__dst[6] + 1);
                v262.i64[0] = *((_QWORD *)&__dst[7] + 1);
                v85 = *((_QWORD *)&__dst[0] + 1) >> 8;
                v272 = *(_QWORD *)&__dst[8];
              }
              v7[2585] = 0;
              core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v7 + 2328);
              v178 = *((void **)v7 + 289);
              goto LABEL_329;
            }
LABEL_314:
            v45 = v27 >> 16;
            v268 = 5;
LABEL_269:
            v260.i64[0] = v55;
            v262.i64[0] = v56;
            v256.i64[0] = v54;
            v258.i64[0] = v53;
            v255.i64[0] = v52;
            v263.i64[0] = v36;
            v254.i64[0] = v28;
            v271 = v29;
            v26 = *((char **)v7 + 229);
            if ( v26 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 230), v26, 1);
LABEL_175:
            if ( *((_QWORD *)v7 + 258) )
            {
              v121 = *((volatile signed __int64 **)v7 + 259);
              if ( v121 )
              {
                if ( !_InterlockedDecrement64(v121) )
                  alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h3a9626c44d95f7f7(v7 + 2072, v26, v28, v29);
              }
            }
            v7[1893] = 0;
            core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v7 + 1536);
            v259 = (void *)2;
            goto LABEL_180;
          }
          *(__m128i *)(v7 + 1992) = v227[1];
          *(__m128i *)(v7 + 1976) = v227[0];
          v74 = v7 + 2056;
          v7[2056] = 0;
LABEL_274:
          v230[1] = *(__m128i *)(v7 + 1992);
          v157 = *((_QWORD *)v7 + 247);
          v230[0].i64[1] = *((_QWORD *)v7 + 248);
          v230[0].i64[0] = v157;
          mio::net::tcp::stream::TcpStream::connect::h56531c687664e5c2(__dst, v230);
          if ( LOBYTE(__dst[0]) )
          {
            v27 = *((_QWORD *)&__dst[0] + 1);
            *v74 = 1;
            goto LABEL_289;
          }
          v36 = DWORD1(__dst[0]);
          *((_DWORD *)v7 + 512) = DWORD1(__dst[0]);
          v82 = v7 + 2052;
          v7[2052] = 0;
          v5 = (signed __int64)(v7 + 2008);
LABEL_277:
          tokio::net::tcp::stream::TcpStream::new::h8b0bf129f7cd5bf3(__dst, v36);
          v27 = *((_QWORD *)&__dst[0] + 1);
          if ( *(_QWORD *)&__dst[0] == 2 )
            goto LABEL_287;
          *(_OWORD *)v211 = __dst[1];
          *(_OWORD *)(v7 + 2008) = __dst[0];
          v158 = *(_QWORD *)&v211[8];
          *((_QWORD *)v7 + 253) = *(_QWORD *)v211;
          *((_QWORD *)v7 + 254) = v158;
          *((_QWORD *)v7 + 255) = v5;
          v36 = v5;
LABEL_279:
          tokio::runtime::io::registration::Registration::poll_write_ready::h61860f0cf20e20cb(__dst, v36, v270);
          if ( BYTE9(__dst[0]) == 3 )
          {
            *v82 = 3;
LABEL_301:
            *v74 = 3;
            v37 = 4;
LABEL_28:
            *(_BYTE *)v263.i64[0] = v37;
            v38 = 3;
            v39 = v274;
LABEL_107:
            *v39 = v38;
            *(_BYTE *)si128.i64[0] = 3;
            *v257 = 3;
            *v275 = 0x8000000000000001LL;
            result = 3;
            goto LABEL_174;
          }
          v27 = *(_QWORD *)&__dst[0];
          if ( BYTE9(__dst[0]) == 2 )
            break;
          if ( *(_DWORD *)(v5 + 24) == -1 )
          {
            v274 = v7;
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1246);
          }
          v159 = mio::net::tcp::stream::TcpStream::take_error::hd43ec3f4a96db8aa(v5 + 24);
          v27 = v160;
          if ( (v159 & 1) != 0 || v160 )
            break;
          v59 = *((_QWORD *)v7 + 251);
          v27 = *((_QWORD *)v7 + 252);
          a5 = _mm_loadu_si128((const __m128i *)(v7 + 2024));
          v260 = a5;
          v7[2052] = 1;
          if ( v59 == 3 )
            goto LABEL_301;
LABEL_288:
          core::ptr::drop_in_place$LT$tokio..net..tcp..stream..TcpStream..connect_mio..$u7b$$u7b$closure$u7d$$u7d$$GT$::h663528cf95402ffc(v5);
          *v74 = 1;
          if ( v59 != 2 )
          {
            v60 = (volatile signed __int64 *)v265.i64[0];
            if ( *((_DWORD *)v7 + 484) )
            {
              v36 = *((_QWORD *)v7 + 245);
              if ( v36 )
              {
                v36 *= 32;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 243), v36, 4);
              }
            }
            if ( *((_QWORD *)v7 + 241) )
              core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v7 + 1928);
            v7[1921] = 0;
            goto LABEL_308;
          }
LABEL_289:
          if ( *((_QWORD *)v7 + 241) )
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v7 + 1928);
          v7[1921] = 1;
          *((_QWORD *)v7 + 241) = v27;
        }
        _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(v5);
        v161 = *((unsigned int *)v7 + 508);
        if ( (_DWORD)v161 != -1 )
          close_NOCANCEL(v161);
        core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(v5);
LABEL_287:
        *v82 = 1;
        v59 = 2;
        goto LABEL_288;
      }
      if ( v50 )
      {
        LOBYTE(v9) = v50;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v50, 1);
      }
      v252 = _mm_load_si128(&v253).u64[0];
      v11 = v5;
      if ( v7[466] )
LABEL_247:
        core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v7);
LABEL_172:
      v7[466] = 0;
      v10 = _mm_load_si128(&si128);
LABEL_173:
      v7[475] = 0;
      v119 = v275;
      *v275 = v237;
      *(__m128i *)(v119 + 1) = v10;
      v119[3] = v11;
      v120 = v233;
      v119[4] = v232;
      v119[5] = v120;
      v119[6] = v234;
      v119[7] = v235;
      v119[8] = v236;
      v119[9] = v5;
      v119[10] = 0;
      *((_BYTE *)v119 + 88) = 0;
      v119[12] = (unsigned __int64)v6;
      *((_BYTE *)v119 + 104) = v9;
      result = 1;
LABEL_174:
      v7[476] = result;
      return result;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101963778);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101963778);
    case 3:
      v257 = (_BYTE *)(a2 + 11096);
      v19 = (const void *)(a2 + 480);
      switch ( *(_BYTE *)(a2 + 11096) )
      {
        case 0:
          goto LABEL_71;
        case 1:
          v274 = (char *)a2;
          v273 = (const void *)(a2 + 480);
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101963850);
        case 2:
          v274 = (char *)a2;
          v273 = (const void *)(a2 + 480);
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101963850);
        case 3:
          si128.i64[0] = a2 + 11089;
          v20 = *(unsigned __int8 *)(a2 + 11089);
          v238 = (char *)(a2 + 704);
          switch ( v20 )
          {
            case 0LL:
              v21 = *(_BYTE *)(a2 + 11088);
              v22 = *(_QWORD *)(a2 + 704);
              v23 = (const void *)(a2 + 712);
              if ( v22 != 3 )
                goto LABEL_18;
              goto LABEL_72;
            case 1LL:
              v274 = (char *)a2;
              v273 = (const void *)(a2 + 480);
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101963868);
            case 2LL:
              v274 = (char *)a2;
              v273 = (const void *)(a2 + 480);
              JUMPOUT(0x1004614C7LL);
            case 3LL:
              v274 = (char *)(a2 + 1891);
              v46 = *(unsigned __int8 *)(a2 + 1891);
              v239 = (char *)(a2 + 1224);
              switch ( v46 )
              {
                case 0LL:
                  v273 = (const void *)(a2 + 480);
                  v21 = *(_BYTE *)(a2 + 1890);
                  v24 = *(_QWORD *)(a2 + 1224);
                  break;
                case 1LL:
                  v274 = (char *)a2;
                  v273 = (const void *)(a2 + 480);
                  core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101963880);
                case 2LL:
                  v274 = (char *)a2;
                  v273 = (const void *)(a2 + 480);
                  JUMPOUT(0x1004614F9LL);
                case 3LL:
                  v263.i64[0] = a2 + 1920;
                  v61 = *(unsigned __int8 *)(a2 + 1920);
                  v265.i64[0] = a2 + 1896;
                  switch ( v61 )
                  {
                    case 0LL:
                      v33 = (__int64 *)v265.i64[0];
                      goto LABEL_23;
                    case 1LL:
                      JUMPOUT(0x100461558LL);
                    case 2LL:
                      v273 = (const void *)(a2 + 480);
                      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101963AE0);
                    case 3LL:
                      v273 = (const void *)(a2 + 480);
                      goto LABEL_26;
                    case 4LL:
                      v273 = (const void *)(a2 + 480);
                      v74 = (_BYTE *)(a2 + 2056);
                      switch ( *(_BYTE *)(a2 + 2056) )
                      {
                        case 0:
                          goto LABEL_274;
                        case 1:
                          v274 = (char *)a2;
                          JUMPOUT(0x1004615CELL);
                        case 2:
                          JUMPOUT(0x1004615AELL);
                        case 3:
                          v82 = (_BYTE *)(a2 + 2052);
                          v5 = a2 + 2008;
                          switch ( *(_BYTE *)(a2 + 2052) )
                          {
                            case 0:
                              v36 = *(unsigned int *)(a2 + 2048);
                              goto LABEL_277;
                            case 1:
                              v274 = (char *)a2;
                              JUMPOUT(0x100461619LL);
                            case 2:
                              v274 = (char *)a2;
                              JUMPOUT(0x100461604LL);
                            case 3:
                              v36 = *(_QWORD *)(a2 + 2040);
                              goto LABEL_279;
                          }
                      }
                      goto LABEL_274;
                  }
                case 4LL:
                  v247 = (char *)(a2 + 2584);
                  v62 = *(unsigned __int8 *)(a2 + 2584);
                  v240 = (char *)(a2 + 1896);
                  switch ( v62 )
                  {
                    case 0LL:
                      v273 = (const void *)(a2 + 480);
                      v259 = *(void **)(a2 + 1928);
                      v271 = *(_QWORD *)(a2 + 1936);
                      v63 = v240;
                      goto LABEL_316;
                    case 1LL:
                      v273 = (const void *)(a2 + 480);
                      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101963820);
                    case 2LL:
                      JUMPOUT(0x100461570LL);
                    case 3LL:
                      goto LABEL_82;
                    case 4LL:
                      v79 = *(unsigned __int8 *)(a2 + 2625);
                      v80 = (char *)(a2 + 2592);
                      if ( *(_BYTE *)(a2 + 2625) )
                      {
                        v273 = (const void *)(a2 + 480);
                        if ( v79 == 1 )
                          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019637F0);
                        core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019637F0);
                      }
                      LOBYTE(v76) = *(_BYTE *)(a2 + 2624);
                      goto LABEL_86;
                    case 5LL:
                      goto LABEL_80;
                    case 6LL:
                      v242 = (_BYTE *)(a2 + 11080);
                      v75 = *(unsigned __int8 *)(a2 + 11080);
                      v76 = a2 + 2592;
                      v273 = (const void *)(a2 + 480);
                      switch ( v75 )
                      {
                        case 0LL:
                          goto LABEL_101;
                        case 1LL:
                          JUMPOUT(0x1004615EFLL);
                        case 2LL:
                          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019637D8);
                        case 3LL:
                          v248 = (_BYTE *)(a2 + 11072);
                          v103 = (const void *)(a2 + 3984);
                          switch ( *(_BYTE *)(a2 + 11072) )
                          {
                            case 0:
                              goto LABEL_102;
                            case 1:
                              v251 = (const void *)(a2 + 3984);
                              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101963898);
                            case 2:
                              v251 = (const void *)(a2 + 3984);
                              JUMPOUT(0x100461634LL);
                            case 3:
                              v241 = (char *)(a2 + 6768);
                              v111 = *(unsigned __int8 *)(a2 + 6768);
                              v243 = (char *)(a2 + 5376);
                              switch ( v111 )
                              {
                                case 0LL:
                                  JUMPOUT(0x100460EFALL);
                                case 1LL:
                                  v251 = (const void *)(a2 + 3984);
                                  core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019638B0);
                                case 2LL:
                                  v251 = (const void *)(a2 + 3984);
                                  JUMPOUT(0x10046166ALL);
                                case 3LL:
                                  v251 = (const void *)(a2 + 3984);
                                  goto LABEL_103;
                                case 4LL:
                                  v251 = (const void *)(a2 + 3984);
                                  goto LABEL_121;
                              }
                          }
                          goto LABEL_102;
                      }
                  }
              }
              goto LABEL_19;
          }
      }
      goto LABEL_71;
    case 4:
      v5 = a2 + 488;
      v12 = *(_QWORD *)(a2 + 488);
      v13 = 0x8000000000000005LL;
      if ( v12 != 0x8000000000000005LL )
        goto LABEL_191;
      v6 = *(unsigned __int64 **)(a2 + 528);
      goto LABEL_196;
    case 5:
      goto LABEL_6;
  }
}
