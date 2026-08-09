// __ZN13codexmate_lib4core5voice10aliyun_asr16AliyunAsrSession7connect28_$u7b$$u7b$closure$u7d$$u7d$17hbb4b340bd79fba8fE_0 @ 0x100285c80
// [FULL — hexrays 全解 90937B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::voice::aliyun_asr | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
char __fastcall codexmate_lib::core::voice::aliyun_asr::AliyunAsrSession::connect::_$u7b$$u7b$closure$u7d$$u7d$::hbb4b340bd79fba8f(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __m128i a4)
{
  __int64 v4; // r12
  _BYTE *v5; // r13
  _BYTE *v6; // r15
  char *v7; // rbx
  unsigned __int8 v8; // al
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v11; // r14
  unsigned __int8 *v12; // rax
  int v13; // r14d
  unsigned __int8 *v14; // r14
  char result; // al
  _BYTE *v16; // r14
  __int64 v17; // rax
  char v18; // r15
  __int64 v19; // rax
  const void *v20; // rsi
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // dx
  __int16 v27; // r14
  __int128 v28; // kr10_16
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int128 v31; // kr20_16
  __int64 v32; // rsi
  char v33; // al
  char v34; // al
  __int64 v35; // r15
  _QWORD *v36; // rax
  _QWORD *v37; // r14
  __int64 v38; // r14
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r15
  char v44; // r14
  __int64 v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r11
  __int64 v49; // r10
  int v50; // r15d
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // r14
  __int32 v54; // ecx
  __int64 v55; // r15
  _QWORD *v56; // r14
  __int64 v57; // rax
  _BYTE *v58; // r12
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // r15
  __m128i v62; // xmm0
  __int64 v63; // r15
  __int64 v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int16 v68; // ax
  _BYTE *v69; // r14
  __int64 v70; // rax
  void *v71; // r12
  _BYTE *v72; // r13
  __int64 v73; // r15
  char v74; // al
  char *v75; // rcx
  int v76; // eax
  _BYTE *v77; // r12
  char v78; // r11
  __int64 v79; // rax
  _BYTE *v80; // r15
  __int64 v81; // r13
  __int16 v82; // ax
  __m128i v83; // xmm0
  unsigned __int64 v84; // r12
  __int64 v85; // rdx
  __m128i v86; // xmm0
  __int64 v87; // rsi
  signed __int64 v88; // rcx
  __m128i v89; // xmm0
  __m128i v90; // xmm0
  __m128i v91; // xmm0
  __int64 v92; // rdi
  signed __int64 v93; // r8
  __m128i v94; // xmm0
  __int64 v95; // r9
  signed __int64 v96; // r10
  __m128i v97; // xmm0
  signed __int64 v98; // r11
  __m128i v99; // xmm0
  __int64 v100; // rax
  unsigned __int128 v101; // kr1D0_16
  const void *v102; // r13
  __int64 v103; // r14
  char v104; // al
  __int64 v105; // r13
  __int64 v106; // r12
  __int64 v107; // r13
  __int64 v108; // r14
  signed __int64 v109; // r12
  __int64 v110; // r13
  __int64 v111; // r14
  __int64 v112; // rax
  bool v113; // zf
  signed __int64 v114; // rcx
  __int64 v115; // rdx
  _QWORD *v116; // rsi
  __int64 v117; // rax
  __int64 v118; // r12
  __int64 v119; // r9
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rsi
  _Unwind_Exception *v123; // rdx
  void (__cdecl *v124)(_Unwind_Reason_Code, _Unwind_Exception *); // rcx
  volatile signed __int64 *v125; // rax
  void *v126; // rax
  __int64 v127; // rt0
  char v128; // of
  __int64 v129; // rdx
  void *v130; // rax
  void *v131; // r14
  unsigned __int8 v132; // al
  __m128i v133; // xmm0
  __int64 v134; // rdx
  __int64 *v135; // r14
  __int64 v136; // r15
  __int64 v137; // rsi
  unsigned __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // r14
  int v141; // edx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // r14
  __int64 v145; // rdx
  signed __int64 v146; // rsi
  __int64 v147; // r14
  char v148; // al
  char v149; // r15
  char v150; // r15
  __int64 v151; // rdi
  __int64 *v152; // r14
  unsigned __int64 v153; // rcx
  __int64 v154; // rax
  _Unwind_Exception_Class v155; // rax
  _QWORD *v156; // r15
  _BYTE *v157; // rdx
  signed __int64 v158; // rax
  signed __int64 v159; // rtt
  __int64 v160; // rdi
  __int64 v161; // rdi
  __int64 v162; // rax
  __int64 v163; // rcx
  char v164; // al
  unsigned __int64 v165; // rdx
  __int64 v166; // rdi
  __int64 v167; // rax
  _BYTE *v168; // r13
  __int64 v169; // r14
  __int64 v170; // r15
  __int64 v171; // rsi
  __int64 v172; // rax
  __int64 v173; // rdi
  void *v174; // r8
  __int64 v175; // r9
  __int64 v176; // rax
  __int64 v177; // rcx
  __int64 v178; // rdx
  __int64 v179; // rax
  signed __int64 v180; // r10
  __int64 v181; // r15
  signed __int64 v182; // r13
  __int64 v183; // r14
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // r11
  __int64 v187; // rcx
  void *v188; // rcx
  __int64 v189; // rdx
  unsigned __int64 v190; // r13
  __int128 v191; // kr110_16
  __int64 *v192; // rax
  __int64 v193; // rcx
  __int64 v194; // rdx
  __int64 v195; // rsi
  __int64 v196; // rax
  __int128 v197; // kr120_16
  unsigned __int64 v198; // r9
  unsigned __int64 v199; // r10
  volatile signed __int64 *v200; // rax
  _BYTE *v201; // r13
  unsigned __int64 v202; // r14
  __int16 v203; // r12
  __int16 v204; // r15
  __int64 v205; // rsi
  __int64 v206; // r14
  __int64 v207; // r13
  __int64 v208; // rsi
  __int64 v209; // rcx
  __int64 v210; // rdx
  __int64 v211; // rax
  __int128 v212; // kr210_16
  unsigned __int64 v213; // r8
  unsigned __int64 v214; // r9
  __int64 v215; // rcx
  _QWORD v216[143]; // [rsp+0h] [rbp-63A0h] BYREF
  _BYTE v217[1144]; // [rsp+478h] [rbp-5F28h] BYREF
  _BYTE v218[1144]; // [rsp+8F0h] [rbp-5AB0h] BYREF
  _BYTE v219[1144]; // [rsp+D68h] [rbp-5638h] BYREF
  _QWORD v220[143]; // [rsp+11E0h] [rbp-51C0h] BYREF
  _BYTE v221[1144]; // [rsp+1658h] [rbp-4D48h] BYREF
  _BYTE v222[952]; // [rsp+1AD0h] [rbp-48D0h] BYREF
  _BYTE __src[232]; // [rsp+1E88h] [rbp-4518h] BYREF
  _BYTE v224[224]; // [rsp+1F70h] [rbp-4430h] BYREF
  _QWORD v225[143]; // [rsp+2050h] [rbp-4350h] BYREF
  _BYTE v226[141]; // [rsp+24CBh] [rbp-3ED5h] BYREF
  _BYTE v227[1144]; // [rsp+2558h] [rbp-3E48h] BYREF
  _BYTE v228[1144]; // [rsp+29D0h] [rbp-39D0h] BYREF
  _BYTE v229[72]; // [rsp+2E48h] [rbp-3558h] BYREF
  _BYTE v230[73]; // [rsp+2E90h] [rbp-3510h] BYREF
  _BYTE v231[141]; // [rsp+2ED9h] [rbp-34C7h] BYREF
  _BYTE v232[141]; // [rsp+2F66h] [rbp-343Ah] BYREF
  _BYTE v233[141]; // [rsp+2FF3h] [rbp-33ADh] BYREF
  _BYTE v234[208]; // [rsp+3080h] [rbp-3320h] BYREF
  _BYTE v235[208]; // [rsp+3150h] [rbp-3250h] BYREF
  _BYTE v236[208]; // [rsp+3220h] [rbp-3180h] BYREF
  _BYTE v237[128]; // [rsp+32F0h] [rbp-30B0h] BYREF
  _OWORD v238[87]; // [rsp+3370h] [rbp-3030h] BYREF
  _BYTE v239[72]; // [rsp+38E0h] [rbp-2AC0h] BYREF
  _BYTE v240[72]; // [rsp+3928h] [rbp-2A78h] BYREF
  _BYTE v241[72]; // [rsp+3970h] [rbp-2A30h] BYREF
  _BYTE v242[72]; // [rsp+39B8h] [rbp-29E8h] BYREF
  _BYTE v243[141]; // [rsp+3A03h] [rbp-299Dh] BYREF
  __m128i v244[87]; // [rsp+3A90h] [rbp-2910h] BYREF
  _OWORD __dst[443]; // [rsp+4000h] [rbp-23A0h] BYREF
  _BYTE v246[1504]; // [rsp+5BB0h] [rbp-7F0h] BYREF
  _QWORD v247[2]; // [rsp+6190h] [rbp-210h] BYREF
  _Unwind_Exception_Class v248; // [rsp+61A0h] [rbp-200h]
  void (__cdecl *v249)(_Unwind_Reason_Code, _Unwind_Exception *); // [rsp+61A8h] [rbp-1F8h]
  uintptr_t v250; // [rsp+61B0h] [rbp-1F0h]
  uintptr_t v251; // [rsp+61B8h] [rbp-1E8h]
  _Unwind_Exception_Class v252; // [rsp+61C0h] [rbp-1E0h]
  _Unwind_Exception_Class v253; // [rsp+61C8h] [rbp-1D8h]
  _BYTE *v254; // [rsp+61D0h] [rbp-1D0h]
  _BYTE *v255; // [rsp+61D8h] [rbp-1C8h]
  char *v256; // [rsp+61E0h] [rbp-1C0h]
  _BYTE *v257; // [rsp+61E8h] [rbp-1B8h]
  void *v258; // [rsp+61F0h] [rbp-1B0h]
  _BYTE *v259; // [rsp+61F8h] [rbp-1A8h]
  __int128 v260; // [rsp+6200h] [rbp-1A0h] BYREF
  __int128 v261; // [rsp+6210h] [rbp-190h]
  _BYTE *v262; // [rsp+6220h] [rbp-180h]
  char *v263; // [rsp+6228h] [rbp-178h]
  __m128i si128; // [rsp+6230h] [rbp-170h] BYREF
  __int64 v265; // [rsp+6248h] [rbp-158h]
  unsigned __int64 v266; // [rsp+6250h] [rbp-150h]
  _BYTE *v267; // [rsp+6258h] [rbp-148h]
  __m128i v268; // [rsp+6260h] [rbp-140h] BYREF
  _BYTE *v269; // [rsp+6270h] [rbp-130h]
  const void *v270; // [rsp+6278h] [rbp-128h]
  __m128i v271; // [rsp+6280h] [rbp-120h] BYREF
  __m128i v272; // [rsp+6290h] [rbp-110h] BYREF
  __m128i v273; // [rsp+62A0h] [rbp-100h] BYREF
  __m128i v274; // [rsp+62B0h] [rbp-F0h] BYREF
  __m128i v275; // [rsp+62C0h] [rbp-E0h] BYREF
  __m128i v276; // [rsp+62D0h] [rbp-D0h] BYREF
  void *v277; // [rsp+62E8h] [rbp-B8h]
  signed __int64 v278; // [rsp+62F0h] [rbp-B0h]
  __int64 v279; // [rsp+62F8h] [rbp-A8h]
  __m128i v280; // [rsp+6300h] [rbp-A0h] BYREF
  signed __int64 v281; // [rsp+6310h] [rbp-90h]
  __int64 v282; // [rsp+6318h] [rbp-88h]
  unsigned __int64 v283; // [rsp+6320h] [rbp-80h]
  signed __int64 v284; // [rsp+6328h] [rbp-78h]
  __int64 v285; // [rsp+6330h] [rbp-70h]
  unsigned __int64 epi64; // [rsp+6338h] [rbp-68h]
  __m128i v287; // [rsp+6340h] [rbp-60h] BYREF
  __int64 v288; // [rsp+6350h] [rbp-50h]
  __int64 v289; // [rsp+6358h] [rbp-48h]
  _BYTE *v290; // [rsp+6360h] [rbp-40h]
  char *v291; // [rsp+6368h] [rbp-38h]
  _Unwind_Exception *exception_object; // [rsp+6370h] [rbp-30h]

  *((_QWORD *)&__dst[311] + 1) = 0;
  *((_QWORD *)&__dst[55] + 1) = 0;
  *((_QWORD *)&v238[0] + 1) = 0;
  v225[101] = 0;
  v220[51] = 0;
  v216[111] = 0;
  v6 = (_BYTE *)a3;
  v7 = (char *)a2;
  exception_object = a1;
  v253 = 0x8000000000000000LL;
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
        goto LABEL_160;
      v289 = (__int64)v6;
      v7[475] = 0;
      v268 = v10;
      *(__m128i *)v246 = v10;
      *(_QWORD *)&v246[16] = v11;
      _$LT$alloc..string..String$u20$as$u20$tungstenite..client..IntoClientRequest$GT$::into_client_request::h51a72ee641b6515d(
        __dst,
        v246);
      v35 = *(_QWORD *)&__dst[0];
      if ( *(_QWORD *)&__dst[0] == 3 )
      {
        memcpy(v246, (char *)__dst + 8, 0x88u);
        *(_QWORD *)&v238[0] = v246;
        *((_QWORD *)&v238[0] + 1) = _$LT$tungstenite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h43a0d5906e71df33;
        v9 = (__int64)&unk_1017BEAAE;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v244, &unk_1017BEAAE, v238);
        core::ptr::drop_in_place$LT$tungstenite..error..Error$GT$::h50c4b5dc25b39128(v246);
        si128 = _mm_load_si128(v244);
        v11 = v244[1].i64[0];
        goto LABEL_159;
      }
      v4 = *((_QWORD *)&__dst[1] + 1);
      memcpy(v246, &__dst[2], 0xC0u);
      v40 = *(_OWORD *)((char *)__dst + 8);
      v7[466] = 1;
      *(_QWORD *)v7 = v35;
      *(_OWORD *)(v7 + 8) = v40;
      *((_QWORD *)v7 + 3) = v4;
      memcpy(v7 + 32, v246, 0xC0u);
      if ( (unsigned __int8)v7[464] > 1u )
        goto LABEL_60;
      v41 = *((_QWORD *)v7 + 34);
      v9 = *(_QWORD *)(v41 + 40);
      v247[0] = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(v41 + 32), v9);
      v247[1] = v42;
      if ( !v42 )
      {
        _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h61b4f2d3942581ca(__dst);
        si128 = (__m128i)__dst[0];
        v11 = *(_QWORD *)&__dst[1];
        v266 = _mm_load_si128(&v268).u64[0];
        if ( v7[466] )
          goto LABEL_225;
        goto LABEL_159;
      }
      *(_QWORD *)&v238[0] = v247;
      *((_QWORD *)&v238[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::h69ce1ddff65303f5(v244, &unk_1017BEA82, v238);
      v5 = (_BYTE *)v244[0].i64[1];
      v43 = v244[0].i64[0];
      http::header::value::HeaderValue::try_from_generic::h29077fec4b7827c9(__dst, v244[0].i64[1], v244[1].i64[0]);
      v9 = (__int64)__dst;
      core::result::Result$LT$T$C$E$GT$::map_err::habc414d1c92a2522(v246, __dst);
      v44 = v246[32];
      si128 = *(__m128i *)v246;
      v4 = *(_QWORD *)&v246[16];
      if ( v246[32] != 2 )
      {
        v59 = *(_QWORD *)&v246[24];
        *(_DWORD *)v228 = *(_DWORD *)&v246[33];
        *(_DWORD *)&v228[3] = *(_DWORD *)&v246[36];
        if ( v43 )
        {
          v60 = v43;
          v61 = *(_QWORD *)&v246[24];
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v60, 1);
          v59 = v61;
        }
        __dst[0] = si128;
        *(_QWORD *)&__dst[1] = v4;
        *((_QWORD *)&__dst[1] + 1) = v59;
        LOBYTE(__dst[2]) = v44;
        *(_DWORD *)((char *)&__dst[2] + 1) = *(_DWORD *)v228;
        DWORD1(__dst[2]) = *(_DWORD *)&v228[3];
        v244[1] = 0u;
        v244[0].i64[1] = 16;
        v244[0].i64[0] = 0;
        http::header::map::HeaderMap$LT$T$GT$::insert::h0fe91c304b1cb5b8(v246, v7, v244, __dst);
        if ( v246[32] != 2 )
          (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v246 + 32LL))(
            &v246[24],
            *(_QWORD *)&v246[8],
            *(_QWORD *)&v246[16]);
        v244[1] = 0u;
        v244[0].i64[1] = 70;
        v244[0].i64[0] = 0;
        *(_QWORD *)&__dst[0] = &anon_39a6e93098609d65551b0fc4eadbbbd9_846;
        *((_QWORD *)&__dst[0] + 1) = "AiMaMi TypeMami";
        __dst[1] = 0xFu;
        LOBYTE(__dst[2]) = 0;
        http::header::map::HeaderMap$LT$T$GT$::insert::h0fe91c304b1cb5b8(v246, v7, v244, __dst);
        if ( v246[32] != 2 )
          (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v246 + 32LL))(
            &v246[24],
            *(_QWORD *)&v246[8],
            *(_QWORD *)&v246[16]);
LABEL_60:
        v7[466] = 0;
        v16 = v7 + 480;
        memcpy(v7 + 480, v7, 0xE0u);
        v269 = v7 + 11096;
        v7[11096] = 0;
        v62 = _mm_load_si128(&v268);
        v266 = v62.i64[0];
        v268.i64[0] = _mm_extract_epi64(v62, 1);
        v254 = v7 + 704;
        memcpy(v7 + 704, v7 + 480, 0xE0u);
        *((_QWORD *)v7 + 116) = 2;
        *((_WORD *)v7 + 5544) = 0;
        si128.i64[0] = (__int64)(v7 + 11089);
        v18 = 0;
        v19 = *((_QWORD *)v7 + 88);
        v20 = v7 + 712;
        if ( v19 == 3 )
        {
LABEL_61:
          memcpy(v7 + 1008, v20, 0x88u);
          *((_QWORD *)v7 + 125) = 3;
          v287.i64[0] = *((_QWORD *)v7 + 126);
          v63 = *((_QWORD *)v7 + 127);
          v283 = *((_QWORD *)v7 + 128);
          v278 = *((_QWORD *)v7 + 129);
          v282 = *((_QWORD *)v7 + 130);
          v281 = *((_QWORD *)v7 + 131);
          v279 = *((_QWORD *)v7 + 132);
          v284 = *((_QWORD *)v7 + 133);
          v276.i64[0] = *((_QWORD *)v7 + 134);
          v280.i64[0] = *((_QWORD *)v7 + 135);
          v271.i64[0] = *((_QWORD *)v7 + 136);
          v274.i64[0] = *((_QWORD *)v7 + 137);
          v285 = *((_QWORD *)v7 + 138);
          v272.i64[0] = *((_QWORD *)v7 + 139);
          v273.i64[0] = *((_QWORD *)v7 + 140);
          v275.i64[0] = *((_QWORD *)v7 + 141);
          v291 = v7;
          v288 = *((_QWORD *)v7 + 142);
          v64 = 2;
          goto LABEL_168;
        }
LABEL_16:
        v290 = v16;
        *((_QWORD *)v7 + 125) = v19;
        memcpy(v7 + 1008, v20, 0x88u);
        qmemcpy(v7 + 1144, v7 + 848, 0x50u);
        memcpy((char *)__dst + 8, v7 + 1000, 0xE0u);
        memcpy(__src, __dst, sizeof(__src));
        v255 = v7 + 1224;
        *((_QWORD *)v7 + 153) = 0;
        memcpy(v7 + 1232, __src, 0xE8u);
        qmemcpy(v7 + 1464, v7 + 928, 0x48u);
        v7[1890] = v18;
        v291 = v7 + 1891;
        v7[1891] = 0;
        v21 = 0;
LABEL_17:
        v7[1894] = 1;
        memcpy(v7 + 1536, v7 + 1240, 0xE0u);
        qmemcpy(v7 + 1760, v7 + 1464, 0x48u);
        v7[1892] = v18;
        v7[1893] = 1;
        v22 = *((_QWORD *)v7 + 154);
        *((_QWORD *)v7 + 258) = v21;
        *((_QWORD *)v7 + 259) = v22;
        v23 = v7 + 1536;
        tokio_tungstenite::domain::hcc27cd746affd60b(__dst, v7 + 1536);
        LOWORD(v21) = WORD4(__dst[0]);
        v25 = *((_QWORD *)&__dst[1] + 1);
        v24 = *(_QWORD *)&__dst[1];
        v6 = (_BYTE *)v289;
        if ( *(_QWORD *)&__dst[0] != 15 )
        {
          v278 = *((_QWORD *)&__dst[1] + 1);
          v283 = *(_QWORD *)&__dst[1];
          v287.i64[0] = *(_QWORD *)&__dst[0];
          v282 = *(_QWORD *)&__dst[2];
          v279 = *(_QWORD *)&__dst[3];
          v281 = *((_QWORD *)&__dst[2] + 1);
          v276.i64[0] = *(_QWORD *)&__dst[4];
          v284 = *((_QWORD *)&__dst[3] + 1);
          v271.i64[0] = *(_QWORD *)&__dst[5];
          v280.i64[0] = *((_QWORD *)&__dst[4] + 1);
          v285 = *(_QWORD *)&__dst[6];
          v274.i64[0] = *((_QWORD *)&__dst[5] + 1);
          v273.i64[0] = *(_QWORD *)&__dst[7];
          v272.i64[0] = *((_QWORD *)&__dst[6] + 1);
          v275.i64[0] = *((_QWORD *)&__dst[7] + 1);
          v38 = *((_QWORD *)&__dst[0] + 1) >> 16;
          v288 = *(_QWORD *)&__dst[8];
          goto LABEL_162;
        }
        *((_QWORD *)v7 + 229) = *((_QWORD *)&__dst[0] + 1);
        *((_QWORD *)v7 + 230) = v24;
        *((_QWORD *)v7 + 231) = v25;
        if ( (http::uri::Uri::port_u16::h0d19b02db5fcef57(v7 + 1632) & 1) != 0 )
        {
          v27 = v26;
          *((_QWORD *)&__dst[0] + 1) = 0x8000000000000003LL;
          *(_QWORD *)&__dst[0] = 12;
          goto LABEL_20;
        }
        if ( (unsigned __int8)v7[1632] < 2u )
        {
LABEL_42:
          v283 = *(_QWORD *)&__dst[1];
          v282 = *(_QWORD *)&__dst[2];
          v278 = *((_QWORD *)&__dst[1] + 1);
          v279 = *(_QWORD *)&__dst[3];
          v281 = *((_QWORD *)&__dst[2] + 1);
          v24 = *(_QWORD *)&__dst[4];
          v284 = *((_QWORD *)&__dst[3] + 1);
          v45 = *(_QWORD *)&__dst[5];
          v32 = *((_QWORD *)&__dst[4] + 1);
          v285 = *(_QWORD *)&__dst[6];
          v46 = *((_QWORD *)&__dst[5] + 1);
          v48 = *(_QWORD *)&__dst[7];
          v47 = *((_QWORD *)&__dst[6] + 1);
          v288 = *(_QWORD *)&__dst[8];
          v49 = *((_QWORD *)&__dst[7] + 1);
          v25 = 12;
          v38 = 0x800000000000LL;
          LOWORD(v21) = 3;
          goto LABEL_246;
        }
        v65 = *((_QWORD *)v7 + 205);
        v66 = *(_QWORD *)(v65 + 8);
        v67 = *(_QWORD *)(v65 + 16);
        if ( v67 == 3 )
        {
          v82 = *(_WORD *)v66 ^ 0x7377 | *(unsigned __int8 *)(v66 + 2) ^ 0x73;
          *((_QWORD *)&__dst[0] + 1) = 0x8000000000000003LL;
          *(_QWORD *)&__dst[0] = 12;
          if ( v82 )
            goto LABEL_42;
          v27 = 443;
        }
        else
        {
          if ( v67 != 2 )
            goto LABEL_42;
          v68 = __ROL2__(*(_WORD *)v66, 8);
          *((_QWORD *)&__dst[0] + 1) = 0x8000000000000003LL;
          *(_QWORD *)&__dst[0] = 12;
          if ( v68 != 30579 )
            goto LABEL_42;
          v27 = 80;
        }
LABEL_20:
        core::ptr::drop_in_place$LT$tungstenite..error..Error$GT$::h50c4b5dc25b39128(__dst);
        *((_WORD *)v7 + 944) = v27;
        *(_QWORD *)&__dst[0] = v7 + 1832;
        *((_QWORD *)&__dst[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        *(_QWORD *)&__dst[1] = v7 + 1888;
        *((_QWORD *)&__dst[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v246, &unk_1017B8B96, __dst);
        *(_QWORD *)&v228[16] = *(_QWORD *)&v246[16];
        v28 = *(_OWORD *)v246;
        *(_OWORD *)v228 = *(_OWORD *)v246;
        v29 = (__int64 *)(v7 + 1896);
        *((_QWORD *)v7 + 239) = *(_QWORD *)&v246[16];
        *(_OWORD *)(v7 + 1896) = v28;
        v280.i64[0] = (__int64)(v7 + 1920);
        v7[1920] = 0;
        v16 = v290;
LABEL_21:
        *(_WORD *)(v7 + 1921) = 0;
        *(_QWORD *)&v238[1] = v29[2];
        v30 = *v29;
        v287.i64[0] = (__int64)v29;
        *((_QWORD *)&v238[0] + 1) = v29[1];
        *(_QWORD *)&v238[0] = v30;
        v290 = v16;
        tokio::net::addr::_$LT$impl$u20$tokio..net..addr..sealed..ToSocketAddrsPriv$u20$for$u20$alloc..string..String$GT$::to_socket_addrs::h69df7fb618e4d9b2(
          __dst,
          v238);
        if ( *(_QWORD *)&v238[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v238[0] + 1), *(_QWORD *)&v238[0], 1);
        *(_OWORD *)&v246[16] = __dst[1];
        v31 = __dst[0];
        *(_OWORD *)v246 = __dst[0];
        *(_OWORD *)(v7 + 1944) = __dst[1];
        *(_OWORD *)(v7 + 1928) = v31;
LABEL_24:
        v32 = (__int64)(v7 + 1928);
        _$LT$tokio..net..addr..sealed..MaybeReady$u20$as$u20$core..future..future..Future$GT$::poll::h0b82923473ad9b89(
          __dst,
          v7 + 1928,
          v6);
        if ( LODWORD(__dst[0]) == 3 )
        {
          v33 = 3;
          goto LABEL_26;
        }
        v275.i32[0] = __dst[0];
        v289 = (__int64)v6;
        v50 = DWORD1(__dst[0]);
        v51 = *((_QWORD *)&__dst[0] + 1);
        v288 = *((_QWORD *)&__dst[1] + 1);
        a4 = _mm_loadu_si128((const __m128i *)&__dst[1]);
        v52 = *(_QWORD *)&__dst[2];
        if ( *((_WORD *)v7 + 964) == 3 )
        {
          v53 = *((_QWORD *)&__dst[0] + 1);
          v274 = a4;
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf01894121b818ffa(v7 + 1936);
          a4 = _mm_load_si128(&v274);
          v51 = v53;
        }
        v54 = v275.i32[0];
        if ( v275.i32[0] == 2 )
        {
          v55 = 2;
          v21 = v51;
          v56 = (_QWORD *)v287.i64[0];
          goto LABEL_289;
        }
        *(_WORD *)(v7 + 1921) = 1;
        *((_QWORD *)v7 + 241) = 0;
        *((_DWORD *)v7 + 484) = v54;
        *((_DWORD *)v7 + 485) = v50;
        v276.i64[0] = v51;
        *((_QWORD *)v7 + 243) = v51;
        *((__m128i *)v7 + 122) = a4;
        *((_QWORD *)v7 + 246) = v52;
        v6 = (_BYTE *)v289;
        while ( 1 )
        {
          v32 = (__int64)(v7 + 1936);
          _$LT$tokio..net..addr..sealed..OneOrMore$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75fe33042c2bb470(
            v244,
            v7 + 1936);
          if ( v244[0].i16[0] == 2 )
          {
            if ( *((_DWORD *)v7 + 484) )
            {
              v32 = *((_QWORD *)v7 + 245);
              if ( v32 )
              {
                v32 *= 32;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 243), v32, 4);
              }
            }
            v7[1921] = 0;
            v21 = *((_QWORD *)v7 + 241);
            v56 = (_QWORD *)v287.i64[0];
            if ( !v21 )
            {
              v32 = (__int64)&unk_1015E2908;
              v21 = std::io::error::Error::new::h2838dbd593bc6ec9(20, &unk_1015E2908, 32);
            }
            v289 = (__int64)v6;
            v7[1921] = 0;
            v55 = 2;
LABEL_289:
            v7[1922] = 0;
            v7[1920] = 1;
            v45 = (__int64)v56;
            core::ptr::drop_in_place$LT$tokio..net..tcp..stream..TcpStream..connect$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h23ef4e8a5da47869(
              v56,
              *(double *)a4.i64);
            if ( v55 == 2 )
            {
              v38 = v21 >> 16;
              v25 = 5;
              v6 = (_BYTE *)v289;
              goto LABEL_246;
            }
            *((_QWORD *)v7 + 232) = v55;
            *((_QWORD *)v7 + 233) = v21;
            *((__m128i *)v7 + 117) = _mm_load_si128(&v273);
            if ( v7[1892] == 1 )
            {
              v32 = 1;
              v21 = tokio::net::tcp::stream::TcpStream::set_nodelay::hee8c521071681384(v7 + 1856, 1);
              if ( v21 )
              {
                _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(v7 + 1856);
                v173 = *((unsigned int *)v7 + 470);
                v6 = (_BYTE *)v289;
                if ( (_DWORD)v173 != -1 )
                  close_NOCANCEL(v173);
                v45 = (__int64)(v7 + 1856);
                core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(v7 + 1856);
                v38 = v21 >> 16;
                v25 = 5;
LABEL_246:
                v273.i64[0] = v48;
                v275.i64[0] = v49;
                v272.i64[0] = v47;
                v274.i64[0] = v46;
                v271.i64[0] = v45;
                v280.i64[0] = v32;
                v276.i64[0] = v24;
                v287.i64[0] = v25;
                v23 = *((_BYTE **)v7 + 229);
                if ( v23 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 230), v23, 1);
LABEL_162:
                if ( *((_QWORD *)v7 + 258) )
                {
                  v125 = *((volatile signed __int64 **)v7 + 259);
                  if ( v125 )
                  {
                    if ( !_InterlockedDecrement64(v125) )
                      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h3a9626c44d95f7f7(v7 + 2072, v23, v24, v25);
                  }
                }
                v7[1893] = 0;
                core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v7 + 1536);
                v277 = (void *)2;
LABEL_167:
                v289 = (__int64)v6;
                v7[1894] = 0;
                memcpy(v220, v219, sizeof(v220));
                qmemcpy(v241, v240, sizeof(v241));
                memcpy(v233, v232, sizeof(v233));
                v291 = v7;
                v7[1891] = 1;
                core::ptr::drop_in_place$LT$tokio_tungstenite..connect..connect..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc2ce571355b33957(v255);
                v63 = (v38 << 16) | (unsigned __int16)v21;
                v64 = (__int64)v277;
LABEL_168:
                memcpy(v216, v220, sizeof(v216));
                v5 = v230;
                qmemcpy(v230, v241, 0x48u);
                v4 = (__int64)v226;
                memcpy(v226, v233, sizeof(v226));
                *(_BYTE *)si128.i64[0] = 1;
                *v269 = 1;
                memcpy(v221, v216, sizeof(v221));
                qmemcpy(v242, v230, sizeof(v242));
                memcpy(v243, v226, sizeof(v243));
                if ( (_DWORD)v64 == 2 )
                {
                  *(_QWORD *)&__dst[0] = v287.i64[0];
                  *((_QWORD *)&__dst[0] + 1) = v63;
                  *(_QWORD *)&__dst[1] = v283;
                  *((_QWORD *)&__dst[1] + 1) = v278;
                  *(_QWORD *)&__dst[2] = v282;
                  *((_QWORD *)&__dst[2] + 1) = v281;
                  *(_QWORD *)&__dst[3] = v279;
                  *((_QWORD *)&__dst[3] + 1) = v284;
                  *(_QWORD *)&__dst[4] = v276.i64[0];
                  *((_QWORD *)&__dst[4] + 1) = v280.i64[0];
                  *(_QWORD *)&__dst[5] = v271.i64[0];
                  *((_QWORD *)&__dst[5] + 1) = v274.i64[0];
                  *(_QWORD *)&__dst[6] = v285;
                  *((_QWORD *)&__dst[6] + 1) = v272.i64[0];
                  *(_QWORD *)&__dst[7] = v273.i64[0];
                  *((_QWORD *)&__dst[7] + 1) = v275.i64[0];
                  *(_QWORD *)&__dst[8] = v288;
                  v244[0].i64[0] = (__int64)__dst;
                  v244[0].i64[1] = (__int64)_$LT$tungstenite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h43a0d5906e71df33;
                  v9 = (__int64)&unk_1017B89A7;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v246, &unk_1017B89A7, v244);
                  v7 = v291;
                  core::ptr::drop_in_place$LT$tungstenite..error..Error$GT$::h50c4b5dc25b39128(__dst);
                  si128 = _mm_load_si128((const __m128i *)v246);
                  v11 = *(_QWORD *)&v246[16];
                  if ( v7[466] )
                    goto LABEL_225;
                  goto LABEL_159;
                }
                memcpy(&v246[152], v221, 0x478u);
                qmemcpy(&v246[1296], v242, 0x48u);
                *(_QWORD *)v246 = v64;
                *(_QWORD *)&v246[8] = v287.i64[0];
                *(_QWORD *)&v246[16] = v63;
                *(_QWORD *)&v246[24] = v283;
                *(_QWORD *)&v246[32] = v278;
                *(_QWORD *)&v246[40] = v282;
                *(_QWORD *)&v246[48] = v281;
                *(_QWORD *)&v246[56] = v279;
                *(_QWORD *)&v246[64] = v284;
                *(_QWORD *)&v246[72] = v276.i64[0];
                *(_QWORD *)&v246[80] = v280.i64[0];
                *(_QWORD *)&v246[88] = v271.i64[0];
                *(_QWORD *)&v246[96] = v274.i64[0];
                *(_QWORD *)&v246[104] = v285;
                *(_QWORD *)&v246[112] = v272.i64[0];
                *(_QWORD *)&v246[120] = v273.i64[0];
                *(_QWORD *)&v246[128] = v275.i64[0];
                *(_QWORD *)&v246[136] = v288;
                *(_QWORD *)&v246[144] = v265;
                *(_WORD *)&v246[1368] = 0;
                v246[1370] = 1;
                v246[1375] = v243[4];
                *(_DWORD *)&v246[1371] = *(_DWORD *)v243;
                v7 = v291;
                memcpy(v291 + 280, &v243[5], 0x88u);
                v7[474] = 0;
                memcpy((char *)&__dst[1] + 8, v246, 0x560u);
                *(_QWORD *)&__dst[0] = 1;
                *((_QWORD *)&__dst[0] + 1) = 1;
                *(_QWORD *)&__dst[1] = 1;
                *((_QWORD *)&__dst[87] + 1) = 0;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2((char *)&__dst[1] + 8, v246);
                v126 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1408, 8);
                if ( !v126 )
                  alloc::alloc::handle_alloc_error::h450e44845847d219(8, 1408);
                v4 = (__int64)v126;
                memcpy(v126, __dst, 0x580u);
                v127 = _InterlockedIncrement64((volatile signed __int64 *)v4);
                v6 = (_BYTE *)v289;
                if ( (v127 < 0) ^ v128 | (v127 == 0) )
                  goto LABEL_248;
                v7[473] = 1;
                *((_QWORD *)v7 + 28) = 0x8000000000000005LL;
                *((_QWORD *)v7 + 33) = v4;
                v7[472] = 1;
                v225[0] = v4;
                tokio::sync::batch_semaphore::Semaphore::new::h75e4ddfd8dfcbd5f(__dst, 128);
                *(_QWORD *)&__dst[3] = 128;
                v5 = (_BYTE *)tokio::sync::mpsc::chan::channel::h7310d122627450af(__dst);
                v7[471] = 1;
                *(_QWORD *)v227 = v5;
                v7[470] = 1;
                *((_QWORD *)v7 + 52) = v129;
                *(_QWORD *)&__dst[0] = 1;
                *((_QWORD *)&__dst[0] + 1) = 1;
                *(_QWORD *)&__dst[3] = 0;
                *((_QWORD *)&__dst[3] + 1) = 0x8000000000000001LL;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, 128);
                v130 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(80, 8);
                if ( !v130 )
                  alloc::alloc::handle_alloc_error::h450e44845847d219(8, 80);
                v131 = v130;
                qmemcpy(v130, __dst, 0x50u);
                if ( _InterlockedIncrement64((volatile signed __int64 *)v130) <= 0 )
LABEL_248:
                  BUG();
                v7[469] = 1;
                *(_QWORD *)v228 = v130;
                v7[465] = 1;
                *((_QWORD *)v7 + 60) = v130;
                codexmate_lib::core::voice::aliyun_asr::task_id::hdb787e4ae21a4b97(v7 + 424);
                v7[468] = 1;
                v132 = v7[464];
                *(_WORD *)(v7 + 471) = 0;
                v7[469] = 0;
                LOWORD(__dst[27]) = v132;
                *(_QWORD *)&__dst[1] = v4;
                *((_QWORD *)&__dst[1] + 1) = v5;
                *(_QWORD *)&__dst[0] = 1;
                *((_QWORD *)&__dst[0] + 1) = v131;
                *((_QWORD *)v7 + 56) = tokio::task::spawn::spawn::h798cd94cec7d838e(__dst);
                codexmate_lib::core::voice::aliyun_asr::start_message::ha72d0125791303c6(
                  __dst,
                  *((_QWORD *)v7 + 34),
                  *((unsigned int *)v7 + 116),
                  *((_QWORD *)v7 + 54),
                  *((_QWORD *)v7 + 55));
                v133 = _mm_loadu_si128((const __m128i *)((char *)__dst + 8));
                v134 = *((_QWORD *)&__dst[1] + 1);
                if ( LOBYTE(__dst[0]) )
                {
                  si128 = v133;
                  v289 = *((_QWORD *)&__dst[1] + 1);
                  goto LABEL_194;
                }
                v7[467] = 0;
                *((_QWORD *)v7 + 61) = 0x8000000000000000LL;
                *((__m128i *)v7 + 31) = v133;
                *((_QWORD *)v7 + 64) = v134;
                *((_QWORD *)v7 + 66) = v7 + 224;
                v269 = (_BYTE *)v133.i64[0];
                v287.i64[0] = _mm_extract_epi64(v133, 1);
LABEL_178:
                v135 = (__int64 *)(v7 + 488);
                v4 = (__int64)__dst;
                v5 = v6;
                _$LT$futures_util..sink..send..Send$LT$Si$C$Item$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h2e9a0cd0bf28ee2f(
                  __dst,
                  v7 + 488,
                  v6);
                v136 = *(_QWORD *)&__dst[0];
                if ( *(_QWORD *)&__dst[0] == 16 )
                {
                  exception_object->exception_class = 0x8000000000000001LL;
                  result = 4;
                  goto LABEL_161;
                }
                qmemcpy(v237, (char *)__dst + 8, sizeof(v237));
                v137 = *v135;
                if ( *v135 != 0x8000000000000005LL )
                {
                  v138 = 5;
                  if ( v137 < 0 )
                    v138 = v137 ^ 0x8000000000000000LL;
                  if ( v138 >= 4 )
                  {
                    v139 = 488;
                    if ( v138 != 4 )
                      goto LABEL_187;
                    v137 = *((_QWORD *)v7 + 62);
                    v139 = 496;
                    if ( v137 >= (__int64)0x8000000000000002LL )
                      goto LABEL_187;
                  }
                  else
                  {
                    v137 = *((_QWORD *)v7 + 62);
                    v139 = 496;
LABEL_187:
                    if ( v137 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v7[v139 + 8], v137, 1);
                  }
                }
                if ( (_DWORD)v136 == 15 )
                {
                  if ( (unsigned __int8)v7[464] > 1u )
                  {
                    LOBYTE(v289) = 2;
                    v7[473] = 0;
                    v11 = *((_QWORD *)v7 + 28);
                    v155 = *((_QWORD *)v7 + 29);
                    v252 = *((_QWORD *)v7 + 33);
                    v251 = *((_QWORD *)v7 + 32);
                    v250 = *((_QWORD *)v7 + 31);
                    v249 = *((void (__cdecl **)(_Unwind_Reason_Code, _Unwind_Exception *))v7 + 30);
                    v248 = v155;
                    v5 = *((_BYTE **)v7 + 52);
                    v269 = *((_BYTE **)v7 + 53);
                    si128 = _mm_loadu_si128((const __m128i *)v7 + 27);
                    v7[470] = 0;
                    v4 = *((_QWORD *)v7 + 56);
                    *(_WORD *)(v7 + 467) = 0;
                    if ( v7[465] )
                    {
                      v156 = *((_QWORD **)v7 + 60);
                      if ( v156 )
                      {
                        v157 = v7 + 480;
                        v158 = v156[6];
                        do
                        {
                          v159 = v158;
                          v158 = _InterlockedCompareExchange64(v156 + 6, v158 | 4, v158);
                        }
                        while ( v159 != v158 );
                        v287.i64[0] = (__int64)(v7 + 480);
                        v280.i64[0] = v158;
                        if ( (v158 & 0xA) == 8 )
                        {
                          (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(v156[2] + 16LL))(v156[3], v137, v157);
                          LOBYTE(v158) = v280.i8[0];
                        }
                        if ( (v158 & 3) == 1 )
                        {
                          _InterlockedAnd64(v156 + 6, 0xFFFFFFFFFFFFFFFELL);
                          tokio::sync::oneshot::Task::drop_task::hb112efae565ccdfd(v156 + 4, v137, v157);
                          LOBYTE(v158) = v280.i8[0];
                        }
                        if ( (v158 & 2) != 0 )
                        {
                          v137 = v156[7];
                          v160 = v156[8];
                          v156[7] = 0x8000000000000001LL;
                          if ( v137 >= (__int64)0x8000000000000002LL )
                          {
                            if ( v137 )
                              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, v137, 1);
                          }
                        }
                        v161 = v287.i64[0];
                        if ( *(_QWORD *)v287.i64[0]
                          && !_InterlockedDecrement64(*(volatile signed __int64 **)v287.i64[0]) )
                        {
                          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde30840f551911cc(v161, v137, v157);
                        }
                      }
                    }
                    v7[465] = 0;
                    *(_DWORD *)(v7 + 469) = 0;
                    v7[473] = 0;
                    core::ptr::drop_in_place$LT$http..response..Response$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$$GT$::h0533a8ba1061ed83(v7 + 280);
                    v7[474] = 0;
                    v253 = (_Unwind_Exception_Class)v269;
                    LOBYTE(v9) = v289;
                    goto LABEL_159;
                  }
                  v7[465] = 0;
                  v140 = *((_QWORD *)v7 + 60);
                  *(_QWORD *)&v238[0] = v140;
                  v6 = v5;
                  *(_QWORD *)&__dst[0] = tokio::time::instant::Instant::now::hb197b9d27ed5a60e();
                  DWORD2(__dst[0]) = v141;
                  v142 = tokio::time::instant::Instant::checked_add::h14afb9ac0530500d(__dst, 15, 0);
                  if ( (_DWORD)v143 == 1000000000 )
                    tokio::time::sleep::Sleep::far_future::h3ad30ca2bf953234(__dst, 0);
                  else
                    tokio::time::sleep::Sleep::new_timeout::h447fa92ddc264ff1(__dst, v142, v143, 0, &off_10195DE70);
                  qmemcpy(v244, __dst, 0x70u);
                  qmemcpy(v7 + 480, v244, 0x70u);
                  *((_QWORD *)v7 + 74) = v140;
LABEL_4:
                  v5 = v7 + 480;
                  tokio::runtime::context::CONTEXT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::hd549691ed52f2726();
                  v13 = v12[72];
                  if ( v13 == 1 )
                  {
LABEL_7:
                    LOBYTE(v13) = tokio::task::coop::Budget::has_remaining::hf5eee7a33ec48d18(v12[68], v12[69]);
                  }
                  else if ( v13 != 2 )
                  {
                    v14 = v12;
                    std::sys::thread_local::destructors::list::register::haf51cfcb91ad50b1(
                      v12,
                      std::sys::thread_local::native::eager::destroy::hb6557d45c448cf0f);
                    v12 = v14;
                    v14[72] = 1;
                    goto LABEL_7;
                  }
                  _$LT$tokio..sync..oneshot..Receiver$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hef5bc442aadbfcea(
                    __dst,
                    v7 + 592,
                    v6);
                  if ( *(_QWORD *)&__dst[0] != 0x8000000000000002LL )
                    JUMPOUT(0x100285E78LL);
                  if ( (unsigned __int8)tokio::time::timeout::poll_delay::hc2f55ce65cc3e270(
                                          (unsigned __int8)v13 & 1u | ((_BYTE)v13 == 2),
                                          v7 + 480,
                                          v6) )
                  {
                    exception_object->exception_class = 0x8000000000000001LL;
                    result = 5;
                    goto LABEL_161;
                  }
                  core::ptr::drop_in_place$LT$tokio..time..timeout..Timeout$LT$tokio..sync..oneshot..Receiver$LT$core..result..Result$LT$$LP$$RP$$C$alloc..string..String$GT$$GT$$GT$$GT$::haf642095255c9e6b(v7 + 480);
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7 + 480, v7 + 480);
                  v4 = 22;
                  v36 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1);
                  if ( !v36 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22);
                  v37 = v36;
                  *(_QWORD *)((char *)v36 + 14) = 0xB697E685B6E8A88ALL;
                  v36[1] = 0xA88AE5AF90E5A18ALL;
                  *v36 = 0xE5BBBBE420525341LL;
                  v289 = 22;
                  tokio::runtime::task::harness::_$LT$impl$u20$tokio..runtime..task..raw..RawTask$GT$::remote_abort::h92cb223c45223ef6(v7 + 448);
                  si128 = _mm_unpacklo_epi64((__m128i)0x16uLL, (__m128i)(unsigned __int64)v37);
                }
                else
                {
                  *(_QWORD *)&__dst[0] = v136;
                  qmemcpy((char *)__dst + 8, v237, 0x80u);
                  tokio::runtime::task::harness::_$LT$impl$u20$tokio..runtime..task..raw..RawTask$GT$::remote_abort::h92cb223c45223ef6(v7 + 448);
                  *(_QWORD *)&v238[0] = __dst;
                  *((_QWORD *)&v238[0] + 1) = _$LT$tungstenite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h43a0d5906e71df33;
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(v244, &unk_1017BEA8C, v238);
                  si128 = _mm_load_si128(v244);
                  v289 = v244[1].i64[0];
                  core::ptr::drop_in_place$LT$tungstenite..error..Error$GT$::h50c4b5dc25b39128(__dst);
                }
LABEL_194:
                v7[467] = 0;
                v144 = *((_QWORD *)v7 + 56);
                if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v144) )
                  tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v144);
                v146 = *((_QWORD *)v7 + 53);
                if ( v146 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 54), v146, 1);
                v7[468] = 0;
                if ( v7[465] )
                {
                  v147 = *((_QWORD *)v7 + 60);
                  if ( v147 )
                  {
                    v4 = (__int64)(v7 + 480);
                    v148 = _InterlockedOr64((volatile signed __int64 *)(v147 + 48), 4u);
                    if ( (v148 & 0xA) == 8 )
                    {
                      v149 = v148;
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v147 + 16) + 16LL))(*(_QWORD *)(v147 + 24));
                      v148 = v149;
                    }
                    if ( (v148 & 3) == 1 )
                    {
                      _InterlockedAnd64((volatile signed __int64 *)(v147 + 48), 0xFFFFFFFFFFFFFFFELL);
                      v150 = v148;
                      tokio::sync::oneshot::Task::drop_task::hb112efae565ccdfd(v147 + 32, v146, v145);
                      v148 = v150;
                    }
                    if ( (v148 & 2) != 0 )
                    {
                      v146 = *(_QWORD *)(v147 + 56);
                      v151 = *(_QWORD *)(v147 + 64);
                      *(_QWORD *)(v147 + 56) = 0x8000000000000001LL;
                      if ( v146 >= (__int64)0x8000000000000002LL )
                      {
                        if ( v146 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v151, v146, 1);
                      }
                    }
                    if ( *(_QWORD *)v4 && !_InterlockedDecrement64(*(volatile signed __int64 **)v4) )
                      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde30840f551911cc(v7 + 480, v146, v145);
                  }
                }
                v7[465] = 0;
                v7[469] = 0;
                _$LT$tokio..sync..mpsc..chan..Rx$LT$T$C$S$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc6e728fbea7ca2d8(v7 + 416);
                if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v7 + 52)) )
                  alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h27faf00dded5e896(v7 + 416);
                *((_WORD *)v7 + 235) = 0;
                v7[472] = 0;
                v152 = (__int64 *)(v7 + 224);
                if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v7 + 33)) )
                  alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h57ffbf3b6d0b5b2e(v7 + 264);
                v9 = *v152;
                if ( *v152 != 0x8000000000000005LL )
                {
                  v153 = 5;
                  if ( v9 < 0 )
                    v153 = v9 ^ 0x8000000000000000LL;
                  if ( v153 >= 4 )
                  {
                    v154 = 224;
                    if ( v153 != 4 )
                      goto LABEL_222;
                    v9 = *((_QWORD *)v7 + 29);
                    v154 = 232;
                    if ( v9 >= (__int64)0x8000000000000002LL )
                      goto LABEL_222;
                  }
                  else
                  {
                    v9 = *((_QWORD *)v7 + 29);
                    v154 = 232;
LABEL_222:
                    if ( v9 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v7[v154 + 8], v9, 1);
                  }
                }
                v7[473] = 0;
                core::ptr::drop_in_place$LT$http..response..Response$LT$core..option..Option$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$$GT$::h0533a8ba1061ed83(v7 + 280);
                v7[474] = 0;
                v11 = v289;
                if ( v7[466] )
                  goto LABEL_225;
                goto LABEL_159;
              }
            }
            v7[1894] = 0;
            memcpy(v224, v7 + 1536, sizeof(v224));
            qmemcpy(v229, v7 + 1760, sizeof(v229));
            v7[1893] = 0;
            v174 = *((void **)v7 + 258);
            v175 = *((_QWORD *)v7 + 259);
            v176 = *((_QWORD *)v7 + 232);
            v177 = *((_QWORD *)v7 + 233);
            v178 = *((_QWORD *)v7 + 234);
            v56[3] = *((_QWORD *)v7 + 235);
            v56[2] = v178;
            v56[1] = v177;
            *v56 = v176;
            v277 = v174;
            *((_QWORD *)v7 + 241) = v174;
            v276.i64[0] = v175;
            *((_QWORD *)v7 + 242) = v175;
            memcpy(v7 + 1944, v224, 0xE0u);
            qmemcpy(v7 + 2168, v229, 0x48u);
            v263 = v7 + 2584;
            v7[2584] = 0;
            v58 = v7 + 1896;
LABEL_297:
            v7[2585] = 0;
            v179 = *((_QWORD *)v7 + 243);
            v287.i64[0] = *((_QWORD *)v7 + 244);
            epi64 = *((_QWORD *)v7 + 245);
            v283 = *((_QWORD *)v7 + 246);
            v180 = *((_QWORD *)v7 + 247);
            v181 = *((_QWORD *)v7 + 248);
            v182 = *((_QWORD *)v7 + 249);
            v183 = *((_QWORD *)v7 + 250);
            v284 = *((_QWORD *)v7 + 251);
            v184 = *((_QWORD *)v7 + 252);
            v280.i64[0] = *((_QWORD *)v7 + 253);
            v185 = *((_QWORD *)v7 + 254);
            v274.i64[0] = *((_QWORD *)v7 + 255);
            v285 = *((_QWORD *)v7 + 256);
            v186 = *((_QWORD *)v7 + 257);
            v273.i64[0] = *((_QWORD *)v7 + 258);
            v275.i64[0] = *((_QWORD *)v7 + 259);
            v288 = *((_QWORD *)v7 + 260);
            v7[2587] = 1;
            v261 = *((_OWORD *)v58 + 1);
            v187 = *(_QWORD *)v58;
            *((_QWORD *)&v260 + 1) = *((_QWORD *)v58 + 1);
            *(_QWORD *)&v260 = v187;
            qmemcpy(v7 + 2240, v7 + 2168, 0x48u);
            v87 = (__int64)(v7 + 2240);
            v7[2586] = 1;
            v188 = v277;
            *((_QWORD *)v7 + 289) = v277;
            v189 = v276.i64[0];
            *((_QWORD *)v7 + 290) = v276.i64[0];
            v267 = v58;
            if ( v179 == 3 )
            {
              v272.i64[0] = v186;
              v271.i64[0] = v185;
              v276.i64[0] = v184;
              v279 = v183;
              v282 = v181;
              v281 = v182;
              v278 = v180;
              v190 = epi64;
              v84 = epi64 >> 8;
              v16 = v290;
LABEL_311:
              if ( v188 )
              {
                if ( v7[2586] )
                {
                  v200 = *((volatile signed __int64 **)v7 + 290);
                  if ( v200 )
                  {
                    if ( !_InterlockedDecrement64(v200) )
                      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h3a9626c44d95f7f7(v7 + 2320, v87, v189, v188);
                  }
                }
              }
              epi64 = v190;
              v7[2586] = 0;
              v6 = (_BYTE *)v289;
              if ( v7[2587] )
              {
                _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(&v260);
                if ( DWORD2(v261) != -1 )
                  close_NOCANCEL(DWORD2(v261));
                core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(&v260);
              }
              v7[2587] = 0;
              v277 = (void *)2;
LABEL_321:
              v201 = v6;
              v290 = v16;
              memcpy(v219, v218, sizeof(v219));
              qmemcpy(v240, v239, sizeof(v240));
              memcpy(v232, v231, sizeof(v232));
              *v263 = 1;
              core::ptr::drop_in_place$LT$tokio_tungstenite..tls..client_async_tls_with_config$LT$http..request..Request$LT$$LP$$RP$$GT$$C$tokio..net..tcp..stream..TcpStream$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h81011bdb67a3e796(v267);
              v202 = v84 & 0xFFFFFFFFFFFF00LL;
              v203 = (_WORD)v84 << 8;
              v204 = (unsigned __int8)epi64;
              v205 = *((_QWORD *)v7 + 229);
              if ( v205 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 230), v205, 1);
              LOWORD(v21) = v204 | v203;
              v38 = v202 >> 8;
              v7[1893] = 0;
              v6 = v201;
              goto LABEL_167;
            }
            *((_QWORD *)v7 + 291) = v179;
            *((_QWORD *)v7 + 292) = v287.i64[0];
            *((_QWORD *)v7 + 293) = epi64;
            *((_QWORD *)v7 + 294) = v283;
            *((_QWORD *)v7 + 295) = v180;
            *((_QWORD *)v7 + 296) = v181;
            *((_QWORD *)v7 + 297) = v182;
            *((_QWORD *)v7 + 298) = v183;
            *((_QWORD *)v7 + 299) = v284;
            *((_QWORD *)v7 + 300) = v184;
            *((_QWORD *)v7 + 301) = v280.i64[0];
            *((_QWORD *)v7 + 302) = v185;
            *((_QWORD *)v7 + 303) = v274.i64[0];
            *((_QWORD *)v7 + 304) = v285;
            *((_QWORD *)v7 + 305) = v186;
            *((_QWORD *)v7 + 306) = v273.i64[0];
            *((_QWORD *)v7 + 307) = v275.i64[0];
            *((_QWORD *)v7 + 308) = v288;
            qmemcpy(v7 + 2472, v7 + 2088, 0x50u);
            v87 = (__int64)(v7 + 2328);
            v16 = v290;
            tokio_tungstenite::domain::hcc27cd746affd60b(__dst, v7 + 2328);
            v190 = *((_QWORD *)&__dst[0] + 1);
            v191 = __dst[1];
            v6 = (_BYTE *)v289;
            if ( *(_QWORD *)&__dst[0] != 15 )
            {
              v278 = *((_QWORD *)&__dst[1] + 1);
              v283 = *(_QWORD *)&__dst[1];
              v287.i64[0] = *(_QWORD *)&__dst[0];
              v282 = *(_QWORD *)&__dst[2];
              v279 = *(_QWORD *)&__dst[3];
              v281 = *((_QWORD *)&__dst[2] + 1);
              v276.i64[0] = *(_QWORD *)&__dst[4];
              v284 = *((_QWORD *)&__dst[3] + 1);
              v271.i64[0] = *(_QWORD *)&__dst[5];
              v280.i64[0] = *((_QWORD *)&__dst[4] + 1);
              v285 = *(_QWORD *)&__dst[6];
              v274.i64[0] = *((_QWORD *)&__dst[5] + 1);
              v273.i64[0] = *(_QWORD *)&__dst[7];
              v272.i64[0] = *((_QWORD *)&__dst[6] + 1);
              v275.i64[0] = *((_QWORD *)&__dst[7] + 1);
              v84 = *((_QWORD *)&__dst[0] + 1) >> 8;
              v288 = *(_QWORD *)&__dst[8];
              goto LABEL_310;
            }
            v7[2585] = 1;
            *((_QWORD *)v7 + 319) = v190;
            *((_OWORD *)v7 + 160) = v191;
            tungstenite::client::uri_mode::h312479bf66973cce(__dst, v7 + 2424);
            v85 = *(_QWORD *)&__dst[0];
            v78 = BYTE8(__dst[0]);
            if ( *(_QWORD *)&__dst[0] != 15 )
            {
              epi64 = BYTE8(__dst[0]);
              v84 = ((unsigned __int64)((HIBYTE(__dst[0]) << 16)
                                      | (unsigned int)*(unsigned __int16 *)((char *)__dst + 13)) << 32)
                  | *(unsigned int *)((char *)__dst + 9);
              v87 = *(_QWORD *)&__dst[1];
              v282 = *(_QWORD *)&__dst[2];
              v88 = *((_QWORD *)&__dst[1] + 1);
              v279 = *(_QWORD *)&__dst[3];
              v281 = *((_QWORD *)&__dst[2] + 1);
              v92 = *(_QWORD *)&__dst[4];
              v284 = *((_QWORD *)&__dst[3] + 1);
              v101 = *(_OWORD *)((char *)&__dst[4] + 8);
              v285 = *(_QWORD *)&__dst[6];
              v96 = *((_QWORD *)&__dst[5] + 1);
              v273.i64[0] = *(_QWORD *)&__dst[7];
              v98 = *((_QWORD *)&__dst[6] + 1);
              v100 = *(_QWORD *)&__dst[8];
              v275.i64[0] = *((_QWORD *)&__dst[7] + 1);
              goto LABEL_306;
            }
            v192 = (__int64 *)(v7 + 2552);
            if ( *((_DWORD *)v7 + 578) != 1 )
            {
              v7[2587] = 0;
              __dst[1] = v261;
              __dst[0] = v260;
              v7[2585] = 0;
              v209 = *((_QWORD *)v7 + 321);
              v210 = *v192;
              v211 = *((_QWORD *)v7 + 320);
              v212 = __dst[0];
              *(_OWORD *)v246 = __dst[0];
              __SET_PAIR__(v214, v213, __dst[1]);
              *(_OWORD *)&v246[16] = __dst[1];
              *(_QWORD *)&v246[32] = v210;
              *(_QWORD *)&v246[40] = v211;
              *(_QWORD *)&v246[48] = v209;
              *((_QWORD *)v7 + 330) = v209;
              *((_QWORD *)v7 + 329) = v211;
              *((_QWORD *)v7 + 328) = v210;
              *((_OWORD *)v7 + 163) = __PAIR128__(v214, v213);
              *((_OWORD *)v7 + 162) = v212;
              *((_QWORD *)v7 + 331) = 0;
              v7[3792] = v78;
              v7[3793] = 0;
LABEL_71:
              v72 = v6;
              tokio_tungstenite::tls::encryption::rustls::wrap_stream::_$u7b$$u7b$closure$u7d$$u7d$::h739dbe0ed0b129e7(
                __dst,
                v7 + 2592,
                v6);
              v73 = *(_QWORD *)&__dst[0];
              if ( *(_QWORD *)&__dst[0] == 4 )
              {
                v74 = 5;
                goto LABEL_76;
              }
              goto LABEL_87;
            }
            v7[2586] = 0;
            v193 = *((_QWORD *)v7 + 290);
            *((_QWORD *)v7 + 322) = v193;
            if ( v193 )
            {
              v7[2587] = 0;
              __dst[1] = v261;
              __dst[0] = v260;
              v7[2585] = 0;
              v194 = *((_QWORD *)v7 + 321);
              v195 = *v192;
              v196 = *((_QWORD *)v7 + 320);
              v197 = __dst[0];
              *(_OWORD *)v246 = __dst[0];
              __SET_PAIR__(v199, v198, __dst[1]);
              *(_OWORD *)&v246[16] = __dst[1];
              *(_QWORD *)&v246[32] = v195;
              *(_QWORD *)&v246[40] = v196;
              *(_QWORD *)&v246[48] = v194;
              *((_QWORD *)v7 + 330) = v194;
              *((_QWORD *)v7 + 329) = v196;
              *((_QWORD *)v7 + 328) = v195;
              *((_OWORD *)v7 + 163) = __PAIR128__(v199, v198);
              *((_OWORD *)v7 + 162) = v197;
              *((_QWORD *)v7 + 331) = v193;
              v7[3792] = v78;
              v7[3793] = 0;
LABEL_74:
              v72 = v6;
              tokio_tungstenite::tls::encryption::rustls::wrap_stream::_$u7b$$u7b$closure$u7d$$u7d$::h739dbe0ed0b129e7(
                __dst,
                v7 + 2592,
                v6);
              v73 = *(_QWORD *)&__dst[0];
              if ( *(_QWORD *)&__dst[0] == 4 )
              {
                v74 = 3;
LABEL_76:
                v75 = v263;
LABEL_99:
                *v75 = v74;
                v34 = 4;
                goto LABEL_100;
              }
LABEL_87:
              v287 = *(__m128i *)((char *)__dst + 8);
              v280 = *(__m128i *)((char *)&__dst[1] + 8);
              v273 = *(__m128i *)((char *)&__dst[2] + 8);
              v276 = *(__m128i *)((char *)&__dst[3] + 8);
              v271 = *(__m128i *)((char *)&__dst[4] + 8);
              v272 = *(__m128i *)((char *)&__dst[5] + 8);
              v274 = *(__m128i *)((char *)&__dst[6] + 8);
              v275 = _mm_loadu_si128((const __m128i *)((char *)&__dst[7] + 8));
              v288 = *((_QWORD *)&__dst[8] + 1);
              memcpy(v222, &__dst[9], sizeof(v222));
              core::ptr::drop_in_place$LT$tokio_tungstenite..tls..encryption..rustls..wrap_stream$LT$tokio..net..tcp..stream..TcpStream$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6bbfed6c0bce5ff4(v7 + 2592);
            }
            else
            {
              v7[2587] = 0;
              v77 = v7 + 2592;
              v215 = *((_QWORD *)&v260 + 1);
              *((_QWORD *)v7 + 324) = v260;
              *((_QWORD *)v7 + 325) = v215;
              *((_OWORD *)v7 + 163) = v261;
              v7[2624] = v78;
              v7[2625] = 0;
LABEL_79:
              __dst[1] = *((_OWORD *)v77 + 1);
              v79 = *(_QWORD *)v77;
              *((_QWORD *)&__dst[0] + 1) = *((_QWORD *)v77 + 1);
              *(_QWORD *)&__dst[0] = v79;
              if ( (v78 & 1) != 0 )
              {
                _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(__dst);
                if ( DWORD2(__dst[1]) != -1 )
                  close_NOCANCEL(DWORD2(__dst[1]));
                v72 = v6;
                core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(__dst);
                v287 = (__m128i)xmmword_1015DB9E0;
                v73 = 3;
              }
              else
              {
                v72 = v6;
                v287 = (__m128i)__dst[0];
                v280 = *((__m128i *)v7 + 163);
                v73 = 2;
              }
              v7[2625] = 1;
            }
            if ( (_DWORD)v73 == 3 )
            {
              v83 = _mm_load_si128(&v287);
              epi64 = _mm_extract_epi64(v83, 1);
              v84 = epi64 >> 8;
              v85 = v83.i64[0];
              v86 = _mm_load_si128(&v280);
              v87 = v86.i64[0];
              v88 = _mm_extract_epi64(v86, 1);
              v89 = _mm_load_si128(&v273);
              v281 = _mm_extract_epi64(v89, 1);
              v282 = v89.i64[0];
              v90 = _mm_load_si128(&v276);
              v279 = v90.i64[0];
              v284 = _mm_extract_epi64(v90, 1);
              v91 = _mm_load_si128(&v271);
              v92 = v91.i64[0];
              v93 = _mm_extract_epi64(v91, 1);
              v94 = _mm_load_si128(&v272);
              v95 = v94.i64[0];
              v96 = _mm_extract_epi64(v94, 1);
              v97 = _mm_load_si128(&v274);
              v98 = _mm_extract_epi64(v97, 1);
              v285 = v97.i64[0];
              v99 = _mm_load_si128(&v275);
              v273.i64[0] = v99.i64[0];
              v275.i64[0] = _mm_extract_epi64(v99, 1);
              v6 = v72;
              v100 = v288;
              v101 = __PAIR128__(v95, v93);
LABEL_306:
              v283 = v87;
              v278 = v88;
              v288 = v100;
              v113 = v7[2585] == 0;
              v287.i64[0] = v85;
              v276.i64[0] = v92;
              v271.i64[0] = v101 >> 64;
              v280.i64[0] = v101;
              v274.i64[0] = v96;
              v272.i64[0] = v98;
              if ( v113 )
              {
                v190 = epi64;
              }
              else
              {
                v87 = *((_QWORD *)v7 + 319);
                v190 = epi64;
                if ( v87 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 320), v87, 1);
              }
LABEL_310:
              v289 = (__int64)v6;
              v7[2585] = 0;
              core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v7 + 2328);
              v188 = *((void **)v7 + 289);
              goto LABEL_311;
            }
            v290 = v16;
            v71 = v7 + 2592;
            memcpy(v7 + 2592, v7 + 2328, 0xE0u);
            *((_QWORD *)v7 + 352) = v73;
            *(__m128i *)(v7 + 2824) = v287;
            *(__m128i *)(v7 + 2840) = v280;
            *(__m128i *)(v7 + 2856) = v273;
            *(__m128i *)(v7 + 2872) = v276;
            *(__m128i *)(v7 + 2888) = v271;
            *(__m128i *)(v7 + 2904) = v272;
            *(__m128i *)(v7 + 2920) = v274;
            *(__m128i *)(v7 + 2936) = _mm_load_si128(&v275);
            *((_QWORD *)v7 + 369) = v288;
            memcpy(v7 + 2960, v222, 0x3B8u);
            qmemcpy(v7 + 3912, v7 + 2240, 0x48u);
            v257 = v7 + 11080;
            v7[11080] = 0;
            v6 = v72;
LABEL_94:
            v258 = v71;
            memcpy(v246, v71, 0xE0u);
            memcpy(__dst, v7 + 2816, 0x448u);
            qmemcpy(&v246[224], v7 + 3912, 0x48u);
            memcpy((char *)&__dst[68] + 8, v246, 0x128u);
            v102 = v7 + 3984;
            memcpy(v7 + 3984, __dst, 0x1BB0u);
            v262 = v7 + 11072;
            v7[11072] = 0;
LABEL_95:
            memcpy(v246, v102, 0x448u);
            memcpy(&v246[1096], v7 + 5080, 0x128u);
            memcpy(v238, v246, sizeof(v238));
            memcpy(v7 + 5376, v238, 0x570u);
            v256 = v7 + 6768;
            v7[6768] = 0;
            v259 = v7 + 5376;
            memcpy(&v246[296], v7 + 5376, 0x448u);
            memcpy(v246, v7 + 6472, 0x128u);
            memcpy(v244, v246, sizeof(v244));
            memcpy(v7 + 6776, v244, 0x570u);
LABEL_96:
            _$LT$tokio_tungstenite..handshake..StartedHandshakeFuture$LT$F$C$S$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h6ace7df104b9f189(
              v246,
              v7 + 6776,
              v6);
            v103 = *(_QWORD *)v246;
            if ( *(_QWORD *)v246 == 4 )
            {
              v104 = 3;
LABEL_98:
              v75 = v263;
              *v256 = v104;
              *v262 = 3;
              *v257 = 3;
              v74 = 6;
              goto LABEL_99;
            }
            v270 = v102;
            v287.i64[0] = *(_QWORD *)&v246[8];
            epi64 = *(_QWORD *)&v246[16];
            v283 = *(_QWORD *)&v246[24];
            v278 = *(_QWORD *)&v246[32];
            v105 = *(_QWORD *)&v246[40];
            v281 = *(_QWORD *)&v246[48];
            v279 = *(_QWORD *)&v246[56];
            v284 = *(_QWORD *)&v246[64];
            v276.i64[0] = *(_QWORD *)&v246[72];
            v280.i64[0] = *(_QWORD *)&v246[80];
            v271.i64[0] = *(_QWORD *)&v246[88];
            v274.i64[0] = *(_QWORD *)&v246[96];
            v285 = *(_QWORD *)&v246[104];
            v272.i64[0] = *(_QWORD *)&v246[112];
            v273.i64[0] = *(_QWORD *)&v246[120];
            v275.i64[0] = *(_QWORD *)&v246[128];
            v288 = *(_QWORD *)&v246[136];
            v265 = *(_QWORD *)&v246[144];
            memcpy(v227, &v246[152], sizeof(v227));
            memcpy(v235, &v246[1296], sizeof(v235));
            if ( *((_DWORD *)v7 + 1694) != 3 )
            {
              core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v7 + 6776);
              core::ptr::drop_in_place$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$::h96ec2d68c3075927(v7 + 7072);
            }
            if ( (_DWORD)v103 == 3 )
            {
              *((_QWORD *)v7 + 1197) = v287.i64[0];
              *((_QWORD *)v7 + 1198) = epi64;
              *((_QWORD *)v7 + 1199) = v283;
              *((_QWORD *)v7 + 1200) = v278;
              v106 = v105;
              *((_QWORD *)v7 + 1201) = v105;
              *((_QWORD *)v7 + 1202) = v281;
              *((_QWORD *)v7 + 1203) = v279;
              *((_QWORD *)v7 + 1204) = v284;
              *((_QWORD *)v7 + 1205) = v276.i64[0];
              *((_QWORD *)v7 + 1206) = v280.i64[0];
              *((_QWORD *)v7 + 1207) = v271.i64[0];
              *((_QWORD *)v7 + 1208) = v274.i64[0];
              *((_QWORD *)v7 + 1209) = v285;
              *((_QWORD *)v7 + 1210) = v272.i64[0];
              *((_QWORD *)v7 + 1211) = v273.i64[0];
              *((_QWORD *)v7 + 1212) = v275.i64[0];
              *((_QWORD *)v7 + 1213) = v288;
              v107 = v265;
              *((_QWORD *)v7 + 1214) = v265;
              memcpy(v7 + 9720, v227, 0x478u);
              *((_QWORD *)v7 + 1196) = 3;
              memcpy(v228, v227, sizeof(v228));
              v108 = 2;
            }
            else
            {
              v277 = v7 + 9568;
              *((_QWORD *)v7 + 1196) = v103;
              *((_QWORD *)v7 + 1197) = v287.i64[0];
              *((_QWORD *)v7 + 1198) = epi64;
              *((_QWORD *)v7 + 1199) = v283;
              v109 = v278;
              *((_QWORD *)v7 + 1200) = v278;
              v282 = v105;
              *((_QWORD *)v7 + 1201) = v105;
              *((_QWORD *)v7 + 1202) = v281;
              v110 = v279;
              *((_QWORD *)v7 + 1203) = v279;
              *((_QWORD *)v7 + 1204) = v284;
              *((_QWORD *)v7 + 1205) = v276.i64[0];
              *((_QWORD *)v7 + 1206) = v280.i64[0];
              *((_QWORD *)v7 + 1207) = v271.i64[0];
              *((_QWORD *)v7 + 1208) = v274.i64[0];
              *((_QWORD *)v7 + 1209) = v285;
              *((_QWORD *)v7 + 1210) = v272.i64[0];
              *((_QWORD *)v7 + 1211) = v273.i64[0];
              *((_QWORD *)v7 + 1212) = v275.i64[0];
              v111 = v288;
              *((_QWORD *)v7 + 1213) = v288;
              *((_QWORD *)v7 + 1214) = v265;
              memcpy(v7 + 9720, v227, 0x478u);
              memcpy(v7 + 10864, v235, 0xD0u);
              memcpy(v7 + 8064, v277, 0x5E0u);
              v277 = *((void **)v7 + 1008);
              if ( v277 == (void *)2 )
              {
                *((_QWORD *)v7 + 847) = v287.i64[0];
                *((_QWORD *)v7 + 848) = epi64;
                *((_QWORD *)v7 + 849) = v283;
                *((_QWORD *)v7 + 850) = v109;
                *((_QWORD *)v7 + 851) = v282;
                *((_QWORD *)v7 + 852) = v281;
                *((_QWORD *)v7 + 853) = v110;
                *((_QWORD *)v7 + 854) = v284;
                *((_QWORD *)v7 + 855) = v276.i64[0];
                *((_QWORD *)v7 + 856) = v280.i64[0];
                *((_QWORD *)v7 + 857) = v271.i64[0];
                *((_QWORD *)v7 + 858) = v274.i64[0];
                *((_QWORD *)v7 + 859) = v285;
                *((_QWORD *)v7 + 860) = v272.i64[0];
                *((_QWORD *)v7 + 861) = v273.i64[0];
                *((_QWORD *)v7 + 862) = v275.i64[0];
                *((_QWORD *)v7 + 863) = v111;
                *((_QWORD *)v7 + 864) = v265;
                memcpy(v7 + 6920, v227, 0x478u);
                v16 = v290;
                v102 = v270;
LABEL_111:
                _$LT$tokio_tungstenite..handshake..MidHandshake$LT$Role$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hb89dbe6500577c81(
                  v246,
                  v7 + 6776);
                v277 = *(void **)v246;
                if ( *(_QWORD *)v246 == 3 )
                {
                  v104 = 4;
                  goto LABEL_98;
                }
                v270 = v102;
                v287.i64[0] = *(_QWORD *)&v246[8];
                epi64 = *(_QWORD *)&v246[16];
                v283 = *(_QWORD *)&v246[24];
                v278 = *(_QWORD *)&v246[32];
                v282 = *(_QWORD *)&v246[40];
                v281 = *(_QWORD *)&v246[48];
                v279 = *(_QWORD *)&v246[56];
                v284 = *(_QWORD *)&v246[64];
                v276.i64[0] = *(_QWORD *)&v246[72];
                v280.i64[0] = *(_QWORD *)&v246[80];
                v271.i64[0] = *(_QWORD *)&v246[88];
                v274.i64[0] = *(_QWORD *)&v246[96];
                v285 = *(_QWORD *)&v246[104];
                v272.i64[0] = *(_QWORD *)&v246[112];
                v273.i64[0] = *(_QWORD *)&v246[120];
                v275.i64[0] = *(_QWORD *)&v246[128];
                v288 = *(_QWORD *)&v246[136];
                v107 = *(_QWORD *)&v246[144];
                memcpy(v228, &v246[152], sizeof(v228));
                memcpy(v234, &v246[1296], sizeof(v234));
                v113 = *((_DWORD *)v7 + 1694) == 3;
                v290 = v16;
                if ( !v113 )
                {
                  core::ptr::drop_in_place$LT$tungstenite..handshake..client..ClientHandshake$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$$GT$::h7543d5687e683bef(v7 + 6776);
                  core::ptr::drop_in_place$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$::h0662d2b5c4ad7939(v7 + 6896);
                  core::ptr::drop_in_place$LT$tungstenite..handshake..machine..HandshakeState$GT$::hc3a3b7f9acc6a720(v7 + 8008);
                }
                v106 = v282;
              }
              else
              {
                memcpy(v228, v227, sizeof(v228));
                memcpy(v234, v235, sizeof(v234));
                v106 = v282;
                v107 = v265;
              }
              v108 = (__int64)v277;
            }
            memcpy(v217, v228, sizeof(v217));
            memcpy(v236, v234, sizeof(v236));
            *v256 = 1;
            core::ptr::drop_in_place$LT$tokio_tungstenite..handshake..handshake$LT$tungstenite..handshake..client..ClientHandshake$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$$C$tokio_tungstenite..client_async_with_config$LT$http..request..Request$LT$$LP$$RP$$GT$$C$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$C$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h31f5139c756066b1(v259);
            memcpy(v225, v217, sizeof(v225));
            v277 = (void *)v108;
            v113 = (_DWORD)v108 == 2;
            v16 = v290;
            if ( v113 )
            {
              *v262 = 1;
              v114 = v281;
              v115 = v279;
              v116 = (_QWORD *)v284;
              if ( v287.i64[0] == 3 )
              {
                v287.i64[0] = epi64;
                v265 = v107;
                epi64 = v283;
                v283 = v278;
                v117 = v106;
                v289 = (__int64)v6;
                v118 = v275.i64[0];
                v275.i64[0] = v288;
                v278 = v117;
                v281 = v279;
                v279 = v284;
                v284 = v276.i64[0];
                v276.i64[0] = v280.i64[0];
                v280.i64[0] = v271.i64[0];
                v271.i64[0] = v274.i64[0];
                v274.i64[0] = v285;
                v285 = v272.i64[0];
                v16 = v290;
                v272.i64[0] = v273.i64[0];
                v273.i64[0] = v118;
                v106 = v114;
                v288 = v107;
              }
              else
              {
                *(_QWORD *)v246 = v287.i64[0];
                *(_QWORD *)&v246[8] = epi64;
                *(_QWORD *)&v246[16] = v283;
                *(_QWORD *)&v246[24] = v278;
                *(_QWORD *)&v246[32] = v106;
                *(_QWORD *)&v246[40] = v281;
                *(_QWORD *)&v246[48] = v279;
                *(_QWORD *)&v246[56] = v284;
                *(_QWORD *)&v246[64] = v276.i64[0];
                *(_QWORD *)&v246[72] = v280.i64[0];
                *(_QWORD *)&v246[80] = v271.i64[0];
                *(_QWORD *)&v246[88] = v274.i64[0];
                *(_QWORD *)&v246[96] = v285;
                *(_QWORD *)&v246[104] = v272.i64[0];
                *(_QWORD *)&v246[112] = v273.i64[0];
                *(_QWORD *)&v246[120] = v275.i64[0];
                *(_QWORD *)&v246[128] = v288;
                *(_QWORD *)&v246[136] = v107;
                memcpy(&v246[144], v225, 0x478u);
                v244[0].i64[0] = 0;
                v244[0].i64[1] = 1;
                v244[1].i64[0] = 0;
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                  v244,
                  0,
                  34,
                  1,
                  1,
                  v119);
                v120 = v244[0].i64[1];
                v121 = v244[1].i64[0];
                *(_QWORD *)(v244[0].i64[1] + v244[1].i64[0] + 24) = 0x636F6C42646C756FLL;
                qmemcpy((void *)(v120 + v121), "Interrupted handshake (W", 24);
                *(_WORD *)(v120 + v121 + 32) = 10603;
                *(_QWORD *)&v238[1] = v121 + 34;
                v238[0] = v244[0];
                v116 = v238;
                v106 = std::io::error::Error::new::hed5795277fd2c277(40, v238);
                core::ptr::drop_in_place$LT$tungstenite..handshake..HandshakeError$LT$tungstenite..handshake..client..ClientHandshake$LT$tokio_tungstenite..compat..AllowStd$LT$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$$GT$$GT$$GT$::h006789a62a65d984(v246);
                epi64 = v106;
                v287.i64[0] = 5;
              }
            }
            else
            {
              qmemcpy(v239, v236, sizeof(v239));
              memcpy(&v231[5], &v236[72], 0x88u);
              *v262 = 1;
              v116 = v225;
              memcpy(v218, v225, sizeof(v218));
            }
            v282 = v106;
            *v257 = 1;
            core::ptr::drop_in_place$LT$tokio_tungstenite..client_async_with_config$LT$http..request..Request$LT$$LP$$RP$$GT$$C$tokio_tungstenite..stream..MaybeTlsStream$LT$tokio..net..tcp..stream..TcpStream$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::he71a8e8fe0e8f320(
              v258,
              v116,
              v115);
            v265 = v107;
            v84 = epi64 >> 8;
            if ( v7[2585] )
            {
              v122 = *((_QWORD *)v7 + 319);
              if ( v122 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 320), v122, 1);
            }
            *(_WORD *)(v7 + 2585) = 0;
            v7[2587] = 0;
            goto LABEL_321;
          }
          *(__m128i *)(v7 + 1992) = v244[1];
          *(__m128i *)(v7 + 1976) = v244[0];
          v69 = v7 + 2056;
          v7[2056] = 0;
LABEL_251:
          *(_QWORD *)&v246[24] = *((_QWORD *)v7 + 250);
          *(_QWORD *)&v246[16] = *((_QWORD *)v7 + 249);
          v162 = *((_QWORD *)v7 + 247);
          *(_QWORD *)&v246[8] = *((_QWORD *)v7 + 248);
          *(_QWORD *)v246 = v162;
          mio::net::tcp::stream::TcpStream::connect::h56531c687664e5c2(__dst, v246);
          if ( LOBYTE(__dst[0]) )
          {
            v21 = *((_QWORD *)&__dst[0] + 1);
            *v69 = 1;
            goto LABEL_267;
          }
          v289 = (__int64)v6;
          v32 = DWORD1(__dst[0]);
          *((_DWORD *)v7 + 512) = DWORD1(__dst[0]);
          v80 = v7 + 2052;
          v7[2052] = 0;
          v81 = (__int64)(v7 + 2008);
LABEL_254:
          tokio::net::tcp::stream::TcpStream::new::h8b0bf129f7cd5bf3(__dst, v32);
          v21 = *((_QWORD *)&__dst[0] + 1);
          if ( *(_QWORD *)&__dst[0] != 2 )
          {
            *(_OWORD *)v227 = __dst[1];
            *(_OWORD *)(v7 + 2008) = __dst[0];
            v163 = *(_QWORD *)&v227[8];
            *((_QWORD *)v7 + 253) = *(_QWORD *)v227;
            *((_QWORD *)v7 + 254) = v163;
            *((_QWORD *)v7 + 255) = v81;
            v32 = v81;
LABEL_256:
            tokio::runtime::io::registration::Registration::poll_write_ready::h61860f0cf20e20cb(__dst, v32, v289);
            if ( BYTE9(__dst[0]) == 3 )
            {
              *v80 = 3;
LABEL_282:
              *v69 = 3;
              v33 = 4;
LABEL_26:
              *(_BYTE *)v280.i64[0] = v33;
              v34 = 3;
LABEL_100:
              *v291 = v34;
              *(_BYTE *)si128.i64[0] = 3;
              *v269 = 3;
              exception_object->exception_class = 0x8000000000000001LL;
              result = 3;
              goto LABEL_161;
            }
            v21 = *(_QWORD *)&__dst[0];
            if ( BYTE9(__dst[0]) != 2 )
            {
              if ( *(_DWORD *)(v81 + 24) == -1 )
              {
                v291 = v7;
                core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1246);
              }
              v164 = mio::net::tcp::stream::TcpStream::take_error::hd43ec3f4a96db8aa(v81 + 24);
              v21 = v165;
              if ( (v164 & 1) == 0 && !v165 )
              {
                v55 = *((_QWORD *)v7 + 251);
                v21 = *((_QWORD *)v7 + 252);
                a4 = _mm_loadu_si128((const __m128i *)(v7 + 2024));
                v273 = a4;
                v7[2052] = 1;
                if ( v55 == 3 )
                  goto LABEL_282;
                goto LABEL_265;
              }
            }
            _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(v81);
            v166 = *((unsigned int *)v7 + 508);
            if ( (_DWORD)v166 != -1 )
              close_NOCANCEL(v166);
            core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(v81);
          }
          *v80 = 1;
          v55 = 2;
LABEL_265:
          core::ptr::drop_in_place$LT$tokio..net..tcp..stream..TcpStream..connect_mio..$u7b$$u7b$closure$u7d$$u7d$$GT$::h663528cf95402ffc(v81);
          *v69 = 1;
          if ( v55 != 2 )
          {
            v56 = (_QWORD *)v287.i64[0];
            if ( *((_DWORD *)v7 + 484) )
            {
              v32 = *((_QWORD *)v7 + 245);
              if ( v32 )
              {
                v32 *= 32;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v7 + 243), v32, 4);
              }
            }
            v172 = *((_QWORD *)v7 + 241);
            if ( (*((_DWORD *)v7 + 482) & 3) == 1 )
            {
              v280.i64[0] = v172 - 1;
              v206 = *(_QWORD *)(v172 - 1);
              v207 = *(_QWORD *)(v172 + 7);
              if ( *(_QWORD *)v207 )
                (*(void (__fastcall **)(__int64))v207)(v206);
              v208 = *(_QWORD *)(v207 + 8);
              if ( v208 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v206, v208, *(_QWORD *)(v207 + 16));
              v32 = 24;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v280.i64[0], 24, 8);
              v56 = (_QWORD *)v287.i64[0];
            }
            v7[1921] = 0;
            goto LABEL_289;
          }
          v6 = (_BYTE *)v289;
LABEL_267:
          v167 = *((_QWORD *)v7 + 241);
          if ( (*((_DWORD *)v7 + 482) & 3) == 1 )
          {
            v168 = v6;
            v274.i64[0] = v167 - 1;
            v169 = *(_QWORD *)(v167 - 1);
            v170 = *(_QWORD *)(v167 + 7);
            if ( *(_QWORD *)v170 )
              (*(void (__fastcall **)(__int64))v170)(v169);
            v171 = *(_QWORD *)(v170 + 8);
            if ( v171 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v169, v171, *(_QWORD *)(v170 + 16));
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v274.i64[0], 24, 8);
            v6 = v168;
          }
          v7[1921] = 1;
          *((_QWORD *)v7 + 241) = v21;
        }
      }
      if ( v43 )
      {
        LOBYTE(v9) = v43;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v43, 1);
      }
      v266 = _mm_load_si128(&v268).u64[0];
      v11 = v4;
      if ( v7[466] )
LABEL_225:
        core::ptr::drop_in_place$LT$http..request..Parts$GT$::h8de5979c17c50e06(v7);
LABEL_159:
      v7[466] = 0;
      v10 = _mm_load_si128(&si128);
LABEL_160:
      v7[475] = 0;
      v123 = exception_object;
      exception_object->exception_class = v253;
      *(__m128i *)&v123->exception_cleanup = v10;
      v123->private_2 = v11;
      v124 = v249;
      v123[1].exception_class = v248;
      v123[1].exception_cleanup = v124;
      v123[1].private_1 = v250;
      v123[1].private_2 = v251;
      v123[2].exception_class = v252;
      v123[2].exception_cleanup = (void (__cdecl *)(_Unwind_Reason_Code, _Unwind_Exception *))v4;
      v123[2].private_1 = 0;
      LOBYTE(v123[2].private_2) = 0;
      v123[3].exception_class = (_Unwind_Exception_Class)v5;
      LOBYTE(v123[3].exception_cleanup) = v9;
      result = 1;
LABEL_161:
      v7[476] = result;
      return result;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DE40);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195DE40);
    case 3:
      v269 = (_BYTE *)(a2 + 11096);
      v16 = (_BYTE *)(a2 + 480);
      switch ( *(_BYTE *)(a2 + 11096) )
      {
        case 0:
          v289 = a3;
          JUMPOUT(0x100285E73LL);
        case 1:
          v291 = (char *)a2;
          v290 = (_BYTE *)(a2 + 480);
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DF60);
        case 2:
          v291 = (char *)a2;
          v290 = (_BYTE *)(a2 + 480);
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195DF60);
        case 3:
          si128.i64[0] = a2 + 11089;
          v17 = *(unsigned __int8 *)(a2 + 11089);
          v254 = (_BYTE *)(a2 + 704);
          switch ( v17 )
          {
            case 0LL:
              v289 = a3;
              v18 = *(_BYTE *)(a2 + 11088);
              v19 = *(_QWORD *)(a2 + 704);
              v20 = (const void *)(a2 + 712);
              if ( v19 != 3 )
                goto LABEL_16;
              goto LABEL_61;
            case 1LL:
              v291 = (char *)a2;
              v290 = (_BYTE *)(a2 + 480);
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DF78);
            case 2LL:
              v291 = (char *)a2;
              v290 = (_BYTE *)(a2 + 480);
              JUMPOUT(0x100287EF1LL);
            case 3LL:
              v291 = (char *)(a2 + 1891);
              v39 = *(unsigned __int8 *)(a2 + 1891);
              v255 = (_BYTE *)(a2 + 1224);
              switch ( v39 )
              {
                case 0LL:
                  v289 = a3;
                  v290 = (_BYTE *)(a2 + 480);
                  v18 = *(_BYTE *)(a2 + 1890);
                  v21 = *(_QWORD *)(a2 + 1224);
                  break;
                case 1LL:
                  v291 = (char *)a2;
                  v290 = (_BYTE *)(a2 + 480);
                  core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DF90);
                case 2LL:
                  v291 = (char *)a2;
                  v290 = (_BYTE *)(a2 + 480);
                  JUMPOUT(0x100287F23LL);
                case 3LL:
                  v280.i64[0] = a2 + 1920;
                  v57 = *(unsigned __int8 *)(a2 + 1920);
                  v287.i64[0] = a2 + 1896;
                  switch ( v57 )
                  {
                    case 0LL:
                      v29 = (__int64 *)v287.i64[0];
                      goto LABEL_21;
                    case 1LL:
                      JUMPOUT(0x100287F82LL);
                    case 2LL:
                      v290 = (_BYTE *)(a2 + 480);
                      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195F758);
                    case 3LL:
                      v290 = (_BYTE *)(a2 + 480);
                      goto LABEL_24;
                    case 4LL:
                      v290 = (_BYTE *)(a2 + 480);
                      v69 = (_BYTE *)(a2 + 2056);
                      switch ( *(_BYTE *)(a2 + 2056) )
                      {
                        case 0:
                          goto LABEL_251;
                        case 1:
                          v291 = (char *)a2;
                          JUMPOUT(0x100288006LL);
                        case 2:
                          JUMPOUT(0x100287FE6LL);
                        case 3:
                          v289 = a3;
                          v80 = (_BYTE *)(a2 + 2052);
                          v81 = a2 + 2008;
                          switch ( *(_BYTE *)(a2 + 2052) )
                          {
                            case 0:
                              v32 = *(unsigned int *)(a2 + 2048);
                              goto LABEL_254;
                            case 1:
                              v291 = (char *)a2;
                              JUMPOUT(0x100288051LL);
                            case 2:
                              v291 = (char *)a2;
                              JUMPOUT(0x10028803CLL);
                            case 3:
                              v32 = *(_QWORD *)(a2 + 2040);
                              goto LABEL_256;
                          }
                      }
                      goto LABEL_251;
                  }
                case 4LL:
                  v263 = (char *)(a2 + 2584);
                  v58 = (_BYTE *)(a2 + 1896);
                  switch ( *(_BYTE *)(a2 + 2584) )
                  {
                    case 0:
                      v289 = a3;
                      v290 = (_BYTE *)(a2 + 480);
                      v277 = *(void **)(a2 + 1928);
                      v276.i64[0] = *(_QWORD *)(a2 + 1936);
                      goto LABEL_297;
                    case 1:
                      v267 = (_BYTE *)(a2 + 1896);
                      v290 = (_BYTE *)(a2 + 480);
                      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DF30);
                    case 2:
                      v267 = (_BYTE *)(a2 + 1896);
                      JUMPOUT(0x100287FA1LL);
                    case 3:
                      v267 = (_BYTE *)(a2 + 1896);
                      goto LABEL_74;
                    case 4:
                      v267 = (_BYTE *)(a2 + 1896);
                      v76 = *(unsigned __int8 *)(a2 + 2625);
                      v77 = (_BYTE *)(a2 + 2592);
                      if ( *(_BYTE *)(a2 + 2625) )
                      {
                        v290 = (_BYTE *)(a2 + 480);
                        if ( v76 == 1 )
                          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DF00);
                        core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195DF00);
                      }
                      v78 = *(_BYTE *)(a2 + 2624);
                      goto LABEL_79;
                    case 5:
                      v267 = (_BYTE *)(a2 + 1896);
                      goto LABEL_71;
                    case 6:
                      v257 = (_BYTE *)(a2 + 11080);
                      v70 = *(unsigned __int8 *)(a2 + 11080);
                      v258 = (void *)(a2 + 2592);
                      v290 = (_BYTE *)(a2 + 480);
                      v267 = (_BYTE *)(a2 + 1896);
                      switch ( v70 )
                      {
                        case 0LL:
                          v71 = v258;
                          goto LABEL_94;
                        case 1LL:
                          JUMPOUT(0x100288027LL);
                        case 2LL:
                          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_10195DEE8);
                        case 3LL:
                          v262 = (_BYTE *)(a2 + 11072);
                          v102 = (const void *)(a2 + 3984);
                          switch ( *(_BYTE *)(a2 + 11072) )
                          {
                            case 0:
                              goto LABEL_95;
                            case 1:
                              v270 = (const void *)(a2 + 3984);
                              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DFA8);
                            case 2:
                              v270 = (const void *)(a2 + 3984);
                              JUMPOUT(0x10028806CLL);
                            case 3:
                              v256 = (char *)(a2 + 6768);
                              v112 = *(unsigned __int8 *)(a2 + 6768);
                              v259 = (_BYTE *)(a2 + 5376);
                              switch ( v112 )
                              {
                                case 0LL:
                                  JUMPOUT(0x100287909LL);
                                case 1LL:
                                  v270 = (const void *)(a2 + 3984);
                                  core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_10195DFC0);
                                case 2LL:
                                  v270 = (const void *)(a2 + 3984);
                                  JUMPOUT(0x1002880A2LL);
                                case 3LL:
                                  goto LABEL_96;
                                case 4LL:
                                  goto LABEL_111;
                              }
                          }
                          goto LABEL_95;
                      }
                  }
              }
              goto LABEL_17;
          }
      }
    case 4:
      goto LABEL_178;
    case 5:
      goto LABEL_4;
  }
}
