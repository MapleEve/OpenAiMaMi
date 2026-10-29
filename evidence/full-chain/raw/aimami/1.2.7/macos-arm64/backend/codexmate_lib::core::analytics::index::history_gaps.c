// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::history_gaps::hee098c9e2ae81a21; addr: 0x10089a590; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int64 __fastcall codexmate_lib::core::analytics::index::history_gaps::hee098c9e2ae81a21(
        __int64 a1,
        __int64 a2,
        double a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __m128i v8; // kr00_16
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  bool v13; // zf
  __int64 *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v18; // r12
  const __m128i *v19; // r14
  __m128i si128; // xmm0
  int v21; // eax
  int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // r13
  __m128i v28; // xmm2
  size_t v30; // rdx
  __int64 v31; // r15
  const void *v32; // rsi
  const void *v33; // rdi
  int v34; // eax
  __int64 v35; // rcx
  __m128i v36; // xmm1
  __int64 v37; // rsi
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD v41[8]; // [rsp+0h] [rbp-2F0h] BYREF
  __m128i v42; // [rsp+40h] [rbp-2B0h] BYREF
  __m128i v43; // [rsp+50h] [rbp-2A0h] BYREF
  __int128 *v44; // [rsp+68h] [rbp-288h] BYREF
  __m128i v45; // [rsp+70h] [rbp-280h]
  __int64 v46; // [rsp+80h] [rbp-270h]
  __int64 v47; // [rsp+88h] [rbp-268h]
  __int64 v48; // [rsp+90h] [rbp-260h]
  __int64 v49; // [rsp+98h] [rbp-258h]
  __int64 v50; // [rsp+A0h] [rbp-250h]
  __m128i v51; // [rsp+A8h] [rbp-248h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-238h]
  __int64 v53; // [rsp+C0h] [rbp-230h]
  __int64 v54; // [rsp+C8h] [rbp-228h]
  __int64 v55; // [rsp+D0h] [rbp-220h]
  __int64 v56; // [rsp+D8h] [rbp-218h]
  sqlite3_stmt *v57; // [rsp+E0h] [rbp-210h]
  __m128i v58; // [rsp+E8h] [rbp-208h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-1F8h]
  __int64 v60; // [rsp+100h] [rbp-1F0h]
  __int64 v61; // [rsp+108h] [rbp-1E8h]
  __int64 v62; // [rsp+110h] [rbp-1E0h]
  __int64 v63; // [rsp+118h] [rbp-1D8h]
  __int64 v64; // [rsp+120h] [rbp-1D0h]
  size_t v65; // [rsp+128h] [rbp-1C8h]
  __int64 v66; // [rsp+130h] [rbp-1C0h]
  __int64 v67; // [rsp+138h] [rbp-1B8h]
  __int64 v68; // [rsp+140h] [rbp-1B0h]
  __int64 v69; // [rsp+148h] [rbp-1A8h]
  __int64 v70; // [rsp+150h] [rbp-1A0h]
  __m128i v71; // [rsp+158h] [rbp-198h] BYREF
  __int64 v72; // [rsp+168h] [rbp-188h]
  __m128i v73; // [rsp+170h] [rbp-180h] BYREF
  __int64 v74; // [rsp+180h] [rbp-170h]
  __int64 v75; // [rsp+188h] [rbp-168h]
  _QWORD v76[2]; // [rsp+190h] [rbp-160h] BYREF
  __int64 v77; // [rsp+1A0h] [rbp-150h]
  __int64 v78; // [rsp+1A8h] [rbp-148h]
  __m128i v79; // [rsp+1B0h] [rbp-140h] BYREF
  __int128 *v80; // [rsp+1C0h] [rbp-130h] BYREF
  __m128i v81; // [rsp+1C8h] [rbp-128h]
  __int64 v82; // [rsp+1D8h] [rbp-118h]
  __int64 v83; // [rsp+1E0h] [rbp-110h]
  __int64 v84; // [rsp+1E8h] [rbp-108h]
  __int64 v85; // [rsp+1F0h] [rbp-100h]
  __int64 v86; // [rsp+1F8h] [rbp-F8h]
  sqlite3_stmt *v87; // [rsp+200h] [rbp-F0h]
  __m128i v88; // [rsp+208h] [rbp-E8h] BYREF
  __int64 v89; // [rsp+218h] [rbp-D8h]
  __int64 v90; // [rsp+220h] [rbp-D0h]
  __int64 v91; // [rsp+228h] [rbp-C8h]
  __int64 v92; // [rsp+230h] [rbp-C0h]
  __m128i v93; // [rsp+238h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+248h] [rbp-A8h]
  __int64 v95; // [rsp+250h] [rbp-A0h]
  __int64 v96; // [rsp+258h] [rbp-98h]
  __int64 v97; // [rsp+260h] [rbp-90h]
  __int64 v98; // [rsp+268h] [rbp-88h]
  sqlite3_stmt *v99; // [rsp+270h] [rbp-80h]
  __int64 *v100; // [rsp+278h] [rbp-78h]
  __m128i v101; // [rsp+280h] [rbp-70h] BYREF
  __int64 v102; // [rsp+290h] [rbp-60h]
  __int64 v103; // [rsp+298h] [rbp-58h]
  __int64 v104; // [rsp+2A0h] [rbp-50h]
  __int64 v105; // [rsp+2A8h] [rbp-48h]
  __int64 v106; // [rsp+2B0h] [rbp-40h]
  sqlite3_stmt *v107; // [rsp+2B8h] [rbp-38h]

  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10089a5bd*/
    &v80,
    a2,
    "SELECT rollout_id,json_extract(state,'$.history_base.rollout_id') FROM filesSELECT fingerprint,state,offset,ordinal,"
    "complete FROM files WHERE path=?1",
    76);
  if ( (_DWORD)v80 == 1 ) /*0x10089a5c9*/
  {
    v57 = v87; /*0x10089a5d3*/
    v56 = v86; /*0x10089a5de*/
    v55 = v85; /*0x10089a5e9*/
    v54 = v84; /*0x10089a5f4*/
    v53 = v83; /*0x10089a5ff*/
    v52 = v82; /*0x10089a60a*/
    v51 = v81; /*0x10089a620*/
    v88.i64[0] = (__int64)&v51; /*0x10089a62e*/
    v88.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089a63c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v58, &unk_101902300, &v88); /*0x10089a658*/
    v93 = v58; /*0x10089a66b*/
    v94 = v59; /*0x10089a680*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v51); /*0x10089a68e*/
    v106 = v98; /*0x10089a69a*/
    v4 = v97; /*0x10089a69e*/
    v105 = v97; /*0x10089a6a5*/
    v5 = v96; /*0x10089a6a9*/
    v104 = v96; /*0x10089a6b0*/
    v6 = v95; /*0x10089a6b4*/
    v103 = v95; /*0x10089a6bb*/
    v7 = v94; /*0x10089a6bf*/
    v102 = v94; /*0x10089a6c6*/
    v8 = v93; /*0x10089a6d1*/
    v101 = v93; /*0x10089a6dc*/
    v107 = v99; /*0x10089a6e4*/
    *(_QWORD *)(a1 + 56) = v98; /*0x10089a6e8*/
    *(_QWORD *)(a1 + 48) = v4; /*0x10089a6ec*/
    *(_QWORD *)(a1 + 40) = v5; /*0x10089a6f0*/
    *(_QWORD *)(a1 + 32) = v6; /*0x10089a6f4*/
    *(_QWORD *)(a1 + 24) = v7; /*0x10089a6f8*/
    *(__m128i *)(a1 + 8) = v8; /*0x10089a700*/
    result = (__int64)v107; /*0x10089a704*/
    *(_QWORD *)(a1 + 64) = v107; /*0x10089a708*/
    *(_QWORD *)a1 = 10; /*0x10089a70c*/
  }
  else
  {
    v99 = v87; /*0x10089a71c*/
    v98 = v86; /*0x10089a724*/
    v101 = v81; /*0x10089a751*/
    v102 = v82; /*0x10089a759*/
    v103 = v83; /*0x10089a75d*/
    v104 = v84; /*0x10089a761*/
    v105 = v85; /*0x10089a765*/
    v106 = v86; /*0x10089a769*/
    v107 = v87; /*0x10089a76d*/
    v97 = v85; /*0x10089a788*/
    v96 = v84; /*0x10089a793*/
    v95 = v83; /*0x10089a79e*/
    v94 = v82; /*0x10089a7a9*/
    v93 = v81; /*0x10089a7bf*/
    v10 = sqlite3_bind_parameter_count(v87); /*0x10089a7ca*/
    if ( v10 ) /*0x10089a7d4*/
    {
      v41[0] = 0x8000000000000013LL; /*0x10089a7e8*/
      v41[1] = 0; /*0x10089a7ef*/
      v41[2] = v10; /*0x10089a7fa*/
      v71.i64[0] = (__int64)v41; /*0x10089a808*/
      v71.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089a816*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v101, &unk_101902300, &v71); /*0x10089a82f*/
      v79 = _mm_load_si128(&v101); /*0x10089a839*/
      v11 = v102; /*0x10089a841*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v41); /*0x10089a84c*/
      *(_QWORD *)a1 = 10; /*0x10089a851*/
      *(__m128i *)(a1 + 8) = _mm_load_si128(&v79); /*0x10089a860*/
      *(_QWORD *)(a1 + 24) = v11; /*0x10089a866*/
    }
    else
    {
      core::iter::adapters::try_process::he8a9b623cf07ee16(&v80, &v93, 0); /*0x10089a87d*/
      if ( v80 == (__int128 *)0x8000000000000016LL ) /*0x10089a897*/
      {
        v70 = a1; /*0x10089a89d*/
        v62 = v85; /*0x10089a8ab*/
        v61 = v84; /*0x10089a8b9*/
        v88 = v81; /*0x10089a8dc*/
        v89 = v82; /*0x10089a8ea*/
        v90 = v83; /*0x10089a8f1*/
        v91 = v84; /*0x10089a8f8*/
        v92 = v85; /*0x10089a8ff*/
        v76[1] = v85; /*0x10089a906*/
        v76[0] = v84; /*0x10089a90d*/
        v75 = v83; /*0x10089a914*/
        v74 = v82; /*0x10089a91b*/
        v73 = v81; /*0x10089a929*/
        std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10089a937*/
        v13 = *(_BYTE *)(v12 + 16) == 1; /*0x10089a939*/
        v100 = (__int64 *)v12; /*0x10089a93d*/
        if ( v13 ) /*0x10089a941*/
        {
          v14 = (__int64 *)v12; /*0x10089a947*/
          v15 = *(_QWORD *)v12; /*0x10089a94a*/
          v16 = v14[1]; /*0x10089a94d*/
        }
        else
        {
          v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(a3); /*0x10089aede*/
          v14 = v100; /*0x10089aee3*/
          *v100 = v15; /*0x10089aee7*/
          v14[1] = v16; /*0x10089aeea*/
          *((_BYTE *)v14 + 16) = 1; /*0x10089aeee*/
        }
        *v14 = v15 + 1; /*0x10089a955*/
        v103 = 0; /*0x10089a95f*/
        v102 = 0; /*0x10089a96a*/
        v101.i64[1] = 0; /*0x10089a975*/
        v101.i64[0] = (__int64)&xmmword_1016F24C0; /*0x10089a980*/
        v104 = v15; /*0x10089a984*/
        v105 = v16; /*0x10089a988*/
        _RCX = v75; /*0x10089a98c*/
        if ( v75 ) /*0x10089a996*/
        {
          v18 = v73.i64[0]; /*0x10089a99c*/
          v19 = (const __m128i *)(v73.i64[0] + 16); /*0x10089a9a3*/
          si128 = _mm_load_si128((const __m128i *)v73.i64[0]); /*0x10089a9a8*/
          v21 = ~_mm_movemask_epi8(si128); /*0x10089a9b2*/
          do /*0x10089a9cf*/
          {
            v64 = _RCX; /*0x10089a9d5*/
            _EBX = v21; /*0x10089a9dc*/
            if ( !(_WORD)v21 ) /*0x10089a9e1*/
            {
              do /*0x10089aa0a*/
              {
                si128 = _mm_load_si128(v19); /*0x10089a9f0*/
                v23 = _mm_movemask_epi8(si128); /*0x10089a9f5*/
                v18 -= 768; /*0x10089a9f9*/
                ++v19; /*0x10089aa00*/
              }
              while ( v23 == 0xFFFF ); /*0x10089aa0a*/
              _EBX = ~v23; /*0x10089aa0c*/
            }
            if ( *((_BYTE *)v14 + 16) == 1 ) /*0x10089aa13*/
            {
              v24 = *v14; /*0x10089aa19*/
              v25 = v14[1]; /*0x10089aa1c*/
            }
            else
            {
              v24 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)si128.i64); /*0x10089acf4*/
              *v14 = v24; /*0x10089acf9*/
              v14[1] = v25; /*0x10089acfc*/
              *((_BYTE *)v14 + 16) = 1; /*0x10089ad00*/
            }
            __asm { tzcnt ecx, ebx } /*0x10089aa20*/
            v26 = v18 - 48 * _RCX - 48; /*0x10089aa2f*/
            *v14 = v24 + 1; /*0x10089aa38*/
            v82 = 0; /*0x10089aa42*/
            v81 = 0u; /*0x10089aa5e*/
            v80 = &xmmword_1016F24C0; /*0x10089aa6c*/
            v83 = v24; /*0x10089aa73*/
            v84 = v25; /*0x10089aa7a*/
            v78 = v26; /*0x10089aa89*/
            if ( v75 ) /*0x10089aa90*/
            {
              v77 = v73.i64[1]; /*0x10089aaa4*/
              v66 = v73.i64[0] - 48; /*0x10089aaaf*/
              v63 = v73.i64[0]; /*0x10089aab6*/
              v67 = v73.i64[0] - 24; /*0x10089aac1*/
              while ( 1 ) /*0x10089abfe*/
              {
                v79.i64[0] = v26; /*0x10089abfe*/
                if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hd468f8929e3859b0(&v80) ) /*0x10089ac05*/
                  break; /*0x10089ac05*/
                v38 = core::hash::BuildHasher::hash_one::hf33ca4e30edf6c31(v76, v79.i64[0]); /*0x10089ac21*/
                v36 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v38 >> 57), (__m128i)0LL); /*0x10089ac30*/
                v37 = 0; /*0x10089ac35*/
                v35 = v79.i64[0]; /*0x10089ac37*/
                while ( 1 ) /*0x10089aad0*/
                {
                  v27 = v77 & v38; /*0x10089aad0*/
                  v28 = _mm_loadu_si128((const __m128i *)(v63 + v27)); /*0x10089aade*/
                  si128 = _mm_cmpeq_epi8(v28, v36); /*0x10089aae8*/
                  _RAX = (unsigned int)_mm_movemask_epi8(si128); /*0x10089aaec*/
                  if ( (_DWORD)_RAX ) /*0x10089aaf2*/
                    break; /*0x10089aaf2*/
LABEL_23:
                  si128.i64[0] = -1; /*0x10089aba0*/
                  if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v28, (__m128i)-1LL)) ) /*0x10089aba8*/
                    goto LABEL_29; /*0x10089abae*/
                  v38 = v27 + v37 + 16; /*0x10089abb4*/
                  v37 += 16; /*0x10089abb9*/
                }
                v30 = *(_QWORD *)(v35 + 16); /*0x10089aaf8*/
                v42 = v36; /*0x10089aafc*/
                v69 = v37; /*0x10089ab04*/
                v43 = v28; /*0x10089ab0b*/
                while ( 1 ) /*0x10089ab13*/
                {
                  v68 = _RAX; /*0x10089ab13*/
                  __asm { tzcnt eax, eax } /*0x10089ab1a*/
                  v31 = -48LL * (v77 & (v27 + _RAX)); /*0x10089ab2f*/
                  if ( v30 == *(_QWORD *)(v66 - 48 * (v77 & (v27 + _RAX)) + 16) ) /*0x10089ab3f*/
                  {
                    v32 = *(const void **)(v31 + v66 + 8); /*0x10089ab44*/
                    v33 = *(const void **)(v35 + 8); /*0x10089ab48*/
                    v65 = v30; /*0x10089ab4c*/
                    v34 = memcmp(v33, v32, v30); /*0x10089ab53*/
                    v30 = v65; /*0x10089ab58*/
                    v35 = v79.i64[0]; /*0x10089ab5f*/
                    if ( !v34 ) /*0x10089ab68*/
                      break; /*0x10089ab68*/
                  }
                  _RAX = (unsigned int)(v68 - 1); /*0x10089ab71*/
                  LOWORD(_RAX) = v68 & (v68 - 1); /*0x10089ab74*/
                  v14 = v100; /*0x10089ab77*/
                  v36 = _mm_load_si128(&v42); /*0x10089ab7b*/
                  v37 = v69; /*0x10089ab83*/
                  v28 = _mm_load_si128(&v43); /*0x10089ab8a*/
                  if ( !(_WORD)_RAX ) /*0x10089ab92*/
                    goto LABEL_23; /*0x10089ab92*/
                }
                v26 = v67 + v31; /*0x10089abd7*/
                v13 = *(_QWORD *)(v67 + v31) == 0x8000000000000000LL; /*0x10089abe9*/
                v14 = v100; /*0x10089abed*/
                if ( v13 ) /*0x10089abf1*/
                  goto LABEL_30; /*0x10089abf1*/
              }
            }
            else
            {
              hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hd468f8929e3859b0(&v80); /*0x10089ac57*/
            }
LABEL_29:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v58, v78); /*0x10089ac90*/
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he08410f8bb39a3b4(&v101, &v58); /*0x10089acad*/
LABEL_30:
            if ( v81.i64[0] ) /*0x10089acbc*/
            {
              v39 = (8 * v81.i64[0] + 23) & 0xFFFFFFFFFFFFFFF0LL; /*0x10089acca*/
              if ( v39 + v81.i64[0] != -17 ) /*0x10089acd5*/
                *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x10089acea*/
                                         (char *)v80 - v39,
                                         v39 + v81.i64[0] + 17,
                                         16);
            }
            v21 = _EBX & (_EBX - 1); /*0x10089a9c3*/
            _RCX = v64 - 1; /*0x10089a9cc*/
          }
          while ( v64 != 1 ); /*0x10089a9cf*/
        }
        v40 = v70; /*0x10089ae7a*/
        *(_QWORD *)(v70 + 48) = v105; /*0x10089ae81*/
        *(_QWORD *)(v40 + 40) = v104; /*0x10089ae89*/
        *(_QWORD *)(v40 + 32) = v103; /*0x10089ae91*/
        *(_QWORD *)(v40 + 24) = v102; /*0x10089ae99*/
        *(__m128i *)(v40 + 8) = v101; /*0x10089aea9*/
        *(_QWORD *)v40 = 11; /*0x10089aead*/
        _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h30aa1b9ba4341ee9(&v73); /*0x10089aebb*/
      }
      else
      {
        v50 = v86; /*0x10089ad11*/
        v49 = v85; /*0x10089ad1f*/
        v48 = v84; /*0x10089ad2d*/
        v47 = v83; /*0x10089ad3b*/
        v46 = v82; /*0x10089ad49*/
        v45 = v81; /*0x10089ad6c*/
        v44 = v80; /*0x10089ad73*/
        v101.i64[0] = (__int64)&v44; /*0x10089ad81*/
        v101.i64[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089ad8c*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v71, &unk_101902300, &v101); /*0x10089ada2*/
        v101 = v71; /*0x10089adb5*/
        v102 = v72; /*0x10089adc4*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v44); /*0x10089adcf*/
        v59 = v102; /*0x10089add8*/
        v60 = v103; /*0x10089ade3*/
        v61 = v104; /*0x10089adee*/
        v88 = v101; /*0x10089ae01*/
        v89 = v102; /*0x10089ae0f*/
        v90 = v103; /*0x10089ae16*/
        v91 = v104; /*0x10089ae1d*/
        v92 = v105; /*0x10089ae24*/
        *(_QWORD *)(a1 + 48) = v105; /*0x10089ae32*/
        *(_QWORD *)(a1 + 40) = v91; /*0x10089ae3d*/
        *(_QWORD *)(a1 + 32) = v90; /*0x10089ae48*/
        *(_QWORD *)(a1 + 24) = v89; /*0x10089ae53*/
        *(__m128i *)(a1 + 8) = v88; /*0x10089ae69*/
        *(_QWORD *)a1 = 10; /*0x10089ae6d*/
      }
    }
    return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(&v93); /*0x10089aec7*/
  }
  return result; /*0x10089aecc*/
}