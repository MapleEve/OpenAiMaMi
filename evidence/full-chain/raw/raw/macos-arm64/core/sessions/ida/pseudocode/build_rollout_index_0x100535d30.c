// __ZN13codexmate_lib4core8sessions19build_rollout_index @ 0x100535d30 | 基线 same-set
__int128 *__fastcall codexmate_lib::core::sessions::build_rollout_index::hd09fe8ff8627f787(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // r15
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r9
  __m128i si128; // xmm4
  __m128i v35; // xmm5
  __m128i v36; // xmm6
  __m128i v37; // xmm7
  __int64 v38; // rax
  __int64 v39; // rcx
  __m128i v40; // xmm2
  __m128i v41; // xmm3
  __int64 v42; // rcx
  __m128i v43; // xmm1
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  char v46; // r8
  char v47; // al
  char v48; // al
  char v49; // al
  char v50; // al
  const __m128i *v52; // r8
  __int64 v53; // r10
  __int64 v54; // rax
  unsigned __int64 v55; // r9
  __m128i v56; // xmm1
  void *v57; // rdi
  size_t v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rcx
  __m128i v61; // xmm2
  const __m128i *v63; // r15
  const void *v64; // rsi
  int v65; // eax
  unsigned __int64 v66; // rsi
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r15
  __int64 v72; // r13
  __int64 v73; // r15
  __int64 v74; // rsi
  __int64 v75; // rdi
  char v76; // al
  __int64 v77; // rax
  __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  unsigned __int64 v81; // r14
  _QWORD *v82; // rbx
  __int64 v83; // rsi
  __m128i *v84; // rdx
  __int128 *result; // rax
  __int64 v86; // rbx
  __m128i v87; // [rsp+0h] [rbp-290h] BYREF
  __m128i v88; // [rsp+10h] [rbp-280h] BYREF
  __int64 v89[7]; // [rsp+28h] [rbp-268h] BYREF
  char v90; // [rsp+60h] [rbp-230h]
  __int16 v91; // [rsp+68h] [rbp-228h]
  __int64 v92; // [rsp+70h] [rbp-220h] BYREF
  __int64 v93; // [rsp+78h] [rbp-218h]
  __int64 v94; // [rsp+80h] [rbp-210h]
  __int64 v95; // [rsp+88h] [rbp-208h]
  __int64 v96; // [rsp+108h] [rbp-188h]
  _BYTE v97[8]; // [rsp+110h] [rbp-180h]
  __int64 v98; // [rsp+118h] [rbp-178h]
  char v99; // [rsp+120h] [rbp-170h]
  _QWORD v100[2]; // [rsp+128h] [rbp-168h] BYREF
  __int64 v101; // [rsp+138h] [rbp-158h]
  unsigned __int64 v102; // [rsp+140h] [rbp-150h]
  __int64 v103; // [rsp+148h] [rbp-148h]
  __m128i *v104; // [rsp+150h] [rbp-140h]
  const __m128i *v105; // [rsp+158h] [rbp-138h]
  void *v106; // [rsp+160h] [rbp-130h]
  __int64 v107; // [rsp+168h] [rbp-128h]
  unsigned __int64 v108; // [rsp+170h] [rbp-120h]
  __int64 v109; // [rsp+178h] [rbp-118h]
  unsigned __int64 v110; // [rsp+180h] [rbp-110h]
  __int64 v111; // [rsp+188h] [rbp-108h] BYREF
  __int64 v112; // [rsp+190h] [rbp-100h]
  unsigned __int64 v113; // [rsp+198h] [rbp-F8h]
  __int64 *v114; // [rsp+1A0h] [rbp-F0h]
  __int64 v115; // [rsp+1A8h] [rbp-E8h]
  size_t __n; // [rsp+1B0h] [rbp-E0h]
  __int64 v117; // [rsp+1B8h] [rbp-D8h]
  __int128 *v118; // [rsp+1C0h] [rbp-D0h] BYREF
  __int64 v119; // [rsp+1C8h] [rbp-C8h]
  __m128i v120; // [rsp+1D0h] [rbp-C0h] BYREF
  __int64 v121; // [rsp+1E0h] [rbp-B0h] BYREF
  __int64 v122; // [rsp+1E8h] [rbp-A8h]
  __int64 *v123; // [rsp+1F0h] [rbp-A0h]
  __int64 v124; // [rsp+1F8h] [rbp-98h]
  __int64 v125; // [rsp+200h] [rbp-90h]
  __int64 v126; // [rsp+208h] [rbp-88h]
  __int64 v127; // [rsp+210h] [rbp-80h] BYREF
  char *v128; // [rsp+218h] [rbp-78h]
  unsigned __int64 v129; // [rsp+220h] [rbp-70h]
  __int64 v130; // [rsp+228h] [rbp-68h]
  __int64 v131; // [rsp+230h] [rbp-60h]
  __int64 v132; // [rsp+238h] [rbp-58h] BYREF
  void *__s1; // [rsp+240h] [rbp-50h]
  size_t v134; // [rsp+248h] [rbp-48h]
  unsigned __int64 v135; // [rsp+250h] [rbp-40h]
  unsigned __int64 v136; // [rsp+258h] [rbp-38h]
  __int8 v137; // [rsp+267h] [rbp-29h]

  v104 = a1; /*0x100535d44*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100535d52*/
  v4 = (_QWORD *)v2; /*0x100535d54*/
  if ( *(_BYTE *)(v2 + 16) == 1 ) /*0x100535d5b*/
  {
    v5 = *(_QWORD *)v2; /*0x100535d61*/
    v6 = v4[1]; /*0x100535d64*/
  }
  else
  {
    v86 = v2; /*0x1005367ae*/
    v5 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1005367b1*/
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           a2,
           v3,
           v2);
    v4 = (_QWORD *)v86; /*0x1005367b9*/
    *(_QWORD *)v86 = v5; /*0x1005367bc*/
    *(_QWORD *)(v86 + 8) = v6; /*0x1005367bf*/
    *(_BYTE *)(v86 + 16) = 1; /*0x1005367c3*/
  }
  *v4 = v5 + 1; /*0x100535d76*/
  v120 = 0u; /*0x100535d8e*/
  v119 = 0; /*0x100535d9c*/
  v118 = &xmmword_1015FBEC0; /*0x100535daa*/
  v121 = v5; /*0x100535db1*/
  v122 = v6; /*0x100535db8*/
  v96 = a2 + 120; /*0x100535dca*/
  v97[0] = 0; /*0x100535dd1*/
  v98 = a2 + 144; /*0x100535dd8*/
  v99 = 1; /*0x100535ddf*/
  v102 = 0x8000000000000000LL; /*0x100535df1*/
  v7 = 0; /*0x100535df8*/
  while ( 2 ) /*0x100535e0e*/
  {
    v8 = *(_QWORD *)&v97[v7 - 8]; /*0x100535e0e*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v92, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16)); /*0x100535e21*/
    v9 = v92; /*0x100535e26*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x100535e37*/
      v92,
      v93);
    if ( v9 ) /*0x100535e3f*/
      goto LABEL_4; /*0x100535e3f*/
    v13 = *(_QWORD *)(v8 + 8); /*0x100535e41*/
    v14 = *(_QWORD *)(v8 + 16); /*0x100535e45*/
    v92 = 0; /*0x100535e49*/
    v93 = 8; /*0x100535e54*/
    v94 = 0; /*0x100535e5f*/
    codexmate_lib::core::sessions::walkdir::visit::h035c065a9896c8d4( /*0x100535e6d*/
      v13,
      v14,
      &v92,
      v10,
      v11,
      v12,
      v87.i64[0],
      v87.i64[1],
      v88.i64[0],
      v88.i64[1]);
    v15 = v92; /*0x100535e72*/
    v16 = (__int64 *)v93; /*0x100535e79*/
    v17 = v94; /*0x100535e80*/
    v18 = v93 + 40 * v94; /*0x100535e8b*/
    v92 = v93; /*0x100535e8f*/
    v103 = v15; /*0x100535e9d*/
    v94 = v15; /*0x100535ea4*/
    v123 = (__int64 *)v18; /*0x100535eab*/
    v95 = v18; /*0x100535eb2*/
    v114 = (__int64 *)v93; /*0x100535eb9*/
    if ( !v17 ) /*0x100535ec3*/
      goto LABEL_82; /*0x100535ec3*/
    v115 = v7; /*0x100535ec9*/
    v19 = v114; /*0x100535ed0*/
    do /*0x100535eea*/
    {
      v16 = v19 + 5; /*0x100535ef0*/
      v20 = *v19; /*0x100535ef4*/
      if ( *v19 == v102 ) /*0x100535efe*/
        goto LABEL_81; /*0x100535efe*/
      v21 = v19[1]; /*0x100535f04*/
      v22 = v19[2]; /*0x100535f08*/
      v23 = v19[3]; /*0x100535f0c*/
      v130 = v19[4]; /*0x100535f15*/
      v24 = std::path::Path::file_name::hf6c2daad91e50ebf(v21, v22); /*0x100535f20*/
      if ( !v24 ) /*0x100535f28*/
        goto LABEL_73; /*0x100535f28*/
      core::str::converts::from_utf8::hb32deb9559450f6e(&v127, v24, v25); /*0x100535f35*/
      if ( (unsigned __int8)v127 | (v129 < 8) /*0x100535f7b*/
        || *(_QWORD *)v128 != 0x2D74756F6C6C6F72LL
        || *(_DWORD *)&v128[v129 - 6] ^ 0x6F736A2E | *(unsigned __int16 *)&v128[v129 - 2] ^ 0x6C6E )
      {
        goto LABEL_73; /*0x100535f7d*/
      }
      v26 = v129 - 6; /*0x100535f83*/
      if ( v129 < 0xE || v128[8] < -64 || v128[v26] <= -65 ) /*0x100535f9f*/
      {
        v93 = (__int64)v16; /*0x1005367cc*/
        core::str::slice_error_fail::h480e51fbd8b15eba(v128, v129, 8, v26, &off_101964690); /*0x1005367df*/
      }
      v89[0] = 0; /*0x100535fad*/
      v89[1] = v129 - 14; /*0x100535fb8*/
      v89[2] = (__int64)(v128 + 8); /*0x100535fbf*/
      v89[3] = v129 - 14; /*0x100535fc6*/
      v89[4] = 0; /*0x100535fcd*/
      v89[5] = v129 - 14; /*0x100535fd8*/
      v89[6] = 0x2D0000002DLL; /*0x100535fe9*/
      v90 = 1; /*0x100535ff0*/
      v91 = 1; /*0x100535ff7*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07( /*0x10053600e*/
        &v111,
        v89);
      if ( v113 > 4 ) /*0x10053601e*/
      {
        v124 = v112; /*0x100536047*/
        alloc::str::join_generic_copy::ha9d2732844b8793d( /*0x100536069*/
          &v127,
          v112 + 16 * v113 - 80,
          5,
          "-/payload/timestamp/payload/source/subagent/thread_spawn/parent_thread_id/payload/source/subagent/thread_spawn"
          "/depth/payload/agent_nickname/payload/agent_role",
          1);
        v134 = v129; /*0x100536072*/
        __s1 = v128; /*0x10053607e*/
        v132 = v127; /*0x100536082*/
        alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v100, v21, v22); /*0x100536093*/
        v29 = v100[1]; /*0x100536098*/
        v30 = v101; /*0x10053609f*/
        if ( v101 < 0 ) /*0x1005360a9*/
        {
          v32 = 0; /*0x10053673e*/
        }
        else
        {
          v136 = v101; /*0x1005360af*/
          if ( !v101 ) /*0x1005360b3*/
          {
            v131 = 1; /*0x100536128*/
            goto LABEL_50; /*0x10053612c*/
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v100, v101); /*0x1005360b5*/
          v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v136, 1); /*0x1005360c3*/
          v32 = 1; /*0x1005360c8*/
          v30 = v136; /*0x1005360cd*/
          if ( v31 ) /*0x1005360d4*/
          {
            v33 = v31; /*0x1005360da*/
            si128 = _mm_load_si128((const __m128i *)&xmmword_1015E36D0); /*0x1005360f6*/
            v35 = _mm_load_si128((const __m128i *)&xmmword_1015E36E0); /*0x1005360fe*/
            v36 = _mm_load_si128((const __m128i *)&xmmword_1015E36B0); /*0x100536106*/
            v37 = _mm_load_si128((const __m128i *)&xmmword_1015E36C0); /*0x10053610e*/
            v131 = v31; /*0x100536116*/
            if ( v136 < 8 || (unsigned __int64)(v31 - v29) < 0x20 ) /*0x1005360ee*/
            {
              v38 = 0; /*0x10053611c*/
LABEL_35:
              v44 = v38; /*0x1005361eb*/
              v45 = v30 & 3; /*0x1005361f1*/
              if ( (v30 & 3) != 0 ) /*0x1005361fa*/
              {
                v44 = v38; /*0x1005361fc*/
                do /*0x100536217*/
                {
                  v46 = *(_BYTE *)(v29 + v44); /*0x100536200*/
                  if ( v46 == 92 ) /*0x100536209*/
                    v46 = 47; /*0x100536209*/
                  *(_BYTE *)(v33 + v44++) = v46; /*0x10053620d*/
                  --v45; /*0x100536214*/
                }
                while ( v45 ); /*0x100536217*/
              }
              if ( v38 - v30 <= 0xFFFFFFFFFFFFFFFCLL ) /*0x100536225*/
              {
                do /*0x100536275*/
                {
                  v47 = *(_BYTE *)(v29 + v44); /*0x100536230*/
                  if ( v47 == 92 ) /*0x100536237*/
                    v47 = 47; /*0x100536237*/
                  *(_BYTE *)(v33 + v44) = v47; /*0x10053623a*/
                  v48 = *(_BYTE *)(v29 + v44 + 1); /*0x10053623e*/
                  if ( v48 == 92 ) /*0x100536246*/
                    v48 = 47; /*0x100536246*/
                  *(_BYTE *)(v33 + v44 + 1) = v48; /*0x100536249*/
                  v49 = *(_BYTE *)(v29 + v44 + 2); /*0x10053624e*/
                  if ( v49 == 92 ) /*0x100536256*/
                    v49 = 47; /*0x100536256*/
                  *(_BYTE *)(v33 + v44 + 2) = v49; /*0x100536259*/
                  v50 = *(_BYTE *)(v29 + v44 + 3); /*0x10053625e*/
                  if ( v50 == 92 ) /*0x100536266*/
                    v50 = 47; /*0x100536266*/
                  *(_BYTE *)(v33 + v44 + 3) = v50; /*0x100536269*/
                  v44 += 4; /*0x10053626e*/
                }
                while ( v30 != v44 ); /*0x100536275*/
              }
              goto LABEL_50; /*0x100536275*/
            }
            if ( v136 >= 0x20 ) /*0x100536135*/
            {
              v38 = v136 & 0x7FFFFFFFFFFFFFE0LL; /*0x100536148*/
              v39 = 0; /*0x10053614b*/
              do /*0x10053618f*/
              {
                v40 = _mm_loadu_si128((const __m128i *)(v29 + v39)); /*0x100536150*/
                v41 = _mm_loadu_si128((const __m128i *)(v29 + v39 + 16)); /*0x100536156*/
                *(__m128i *)(v33 + v39) = _mm_blendv_epi8(v40, v37, _mm_cmpeq_epi8(v40, v36)); /*0x10053617b*/
                *(__m128i *)(v33 + v39 + 16) = _mm_blendv_epi8(v41, v37, _mm_cmpeq_epi8(v41, v36)); /*0x100536181*/
                v39 += 32; /*0x100536188*/
              }
              while ( v38 != v39 ); /*0x10053618f*/
              if ( v30 == v38 ) /*0x100536194*/
                goto LABEL_50; /*0x100536194*/
              if ( (v30 & 0x18) == 0 ) /*0x10053619e*/
                goto LABEL_35; /*0x10053619e*/
            }
            else
            {
              v38 = 0; /*0x100536137*/
            }
            v42 = v38; /*0x1005361a0*/
            v38 = v30 & 0x7FFFFFFFFFFFFFF8LL; /*0x1005361b1*/
            do /*0x1005361e0*/
            {
              v43 = _mm_loadl_epi64((const __m128i *)(v29 + v42)); /*0x1005361c0*/
              *(_QWORD *)(v33 + v42) = _mm_blendv_epi8(v43, v35, _mm_cmpeq_epi8(v43, si128)).u64[0]; /*0x1005361d3*/
              v42 += 8; /*0x1005361d9*/
            }
            while ( v38 != v42 ); /*0x1005361e0*/
            if ( v30 != v38 ) /*0x1005361e5*/
              goto LABEL_35; /*0x1005361e5*/
LABEL_50:
            v137 = v97[v115]; /*0x100536277*/
            v135 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v121, &v132); /*0x100536299*/
            if ( !v120.i64[0] ) /*0x1005362a5*/
              hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h935c410c969819e9(&v118, 1, &v121, 1); /*0x10053666c*/
            v52 = (const __m128i *)v118; /*0x1005362ab*/
            v53 = v119; /*0x1005362b2*/
            v54 = v135; /*0x1005362b9*/
            v55 = v135 >> 57; /*0x1005362c0*/
            v56 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v135 >> 57), (__m128i)0LL); /*0x1005362cd*/
            v57 = __s1; /*0x1005362d2*/
            v58 = v134; /*0x1005362d6*/
            v126 = 0; /*0x1005362da*/
            v59 = 0; /*0x1005362e5*/
            v60 = v131; /*0x1005362e7*/
            while ( 1 ) /*0x1005362eb*/
            {
              v117 = v59; /*0x1005362eb*/
              v135 = v53 & v54; /*0x1005362f5*/
              v61 = _mm_loadu_si128((const __m128i *)((char *)v52 + (v53 & v54))); /*0x1005362f9*/
              _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v61, v56)); /*0x100536307*/
              if ( (_DWORD)_RAX ) /*0x10053630d*/
              {
                v125 = v29; /*0x100536313*/
                v108 = v55; /*0x10053631a*/
                v109 = v53; /*0x100536321*/
                v110 = _R11; /*0x100536328*/
                v87 = v56; /*0x10053632f*/
                v88 = v61; /*0x100536337*/
                while ( 1 ) /*0x10053633f*/
                {
                  v107 = _RAX; /*0x10053633f*/
                  __asm { tzcnt eax, eax } /*0x100536346*/
                  if ( v58 == v52[-5 * (v53 & (v135 + _RAX)) - 4].i64[0] ) /*0x100536361*/
                  {
                    v63 = &v52[-5 * (v53 & (v135 + _RAX))]; /*0x100536363*/
                    v64 = (const void *)v63[-5].i64[1]; /*0x100536366*/
                    __n = v58; /*0x10053636a*/
                    v105 = v52; /*0x100536378*/
                    v106 = v57; /*0x10053637f*/
                    v65 = memcmp(v57, v64, v58); /*0x100536386*/
                    v58 = __n; /*0x10053638b*/
                    v57 = v106; /*0x100536392*/
                    v52 = v105; /*0x100536399*/
                    v60 = v131; /*0x1005363a0*/
                    v66 = v136; /*0x1005363a4*/
                    if ( !v65 ) /*0x1005363aa*/
                      break; /*0x1005363aa*/
                  }
                  _RAX = (unsigned int)(v107 - 1); /*0x1005363b7*/
                  LOWORD(_RAX) = v107 & (v107 - 1); /*0x1005363ba*/
                  v29 = v125; /*0x1005363bd*/
                  v55 = v108; /*0x1005363c4*/
                  v53 = v109; /*0x1005363cb*/
                  _R11 = v110; /*0x1005363d2*/
                  v56 = _mm_load_si128(&v87); /*0x1005363d9*/
                  v61 = _mm_load_si128(&v88); /*0x1005363e1*/
                  if ( !(_WORD)_RAX ) /*0x1005363e9*/
                    goto LABEL_58; /*0x1005363e9*/
                }
                v68 = v63[-4].i64[1]; /*0x100536454*/
                v69 = v63[-3].i64[1]; /*0x100536458*/
                v70 = v63[-2].i64[0]; /*0x10053645c*/
                v63[-4].i64[1] = 1; /*0x100536460*/
                v63[-3].i64[0] = v23; /*0x100536468*/
                v63[-3].i64[1] = v66; /*0x10053646c*/
                v63[-2].i64[0] = v60; /*0x100536470*/
                v63[-2].i64[1] = v66; /*0x100536474*/
                v63[-1].i64[0] = v130; /*0x10053647d*/
                v63[-1].i8[8] = v137; /*0x100536487*/
                if ( v132 ) /*0x100536492*/
                {
                  v130 = v68; /*0x100536498*/
                  v71 = v69; /*0x1005364a1*/
                  v72 = v70; /*0x1005364a4*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v132, 1); /*0x1005364a7*/
                  v68 = v130; /*0x1005364ac*/
                  v70 = v72; /*0x1005364b0*/
                  v69 = v71; /*0x1005364b3*/
                }
                v28 = v124; /*0x1005364ba*/
                v29 = v125; /*0x1005364c1*/
                if ( v68 != 2 && (v69 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005364db*/
                {
                  v73 = v124; /*0x1005364e2*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x1005364eb*/
                  v28 = v73; /*0x1005364f0*/
                  v29 = v125; /*0x1005364f3*/
                }
                v74 = v100[0]; /*0x1005364fa*/
                if ( 2LL * v100[0] ) /*0x100536501*/
                  goto LABEL_78; /*0x10053650c*/
                goto LABEL_71; /*0x10053650c*/
              }
LABEL_58:
              if ( v126 != 1 ) /*0x1005363f8*/
              {
                if ( !_mm_movemask_epi8(v61) ) /*0x1005363fa*/
                {
                  v126 = 0; /*0x100536430*/
                  goto LABEL_64; /*0x100536430*/
                }
                __asm { tzcnt r11d, eax } /*0x100536402*/
                _R11 = v53 & (v135 + _R11); /*0x10053640b*/
              }
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v61, (__m128i)-1LL)) ) /*0x100536416*/
              {
                v75 = v60; /*0x10053654e*/
                v76 = v52->i8[_R11]; /*0x100536551*/
                if ( v76 >= 0 ) /*0x100536558*/
                {
                  _EAX = _mm_movemask_epi8(_mm_load_si128(v52)); /*0x10053667b*/
                  __asm { tzcnt r11d, eax } /*0x10053667f*/
                  v76 = v52->i8[_R11]; /*0x100536684*/
                }
                v129 = v134; /*0x100536562*/
                v128 = (char *)__s1; /*0x10053656e*/
                v127 = v132; /*0x100536572*/
                v52->i8[_R11] = v55; /*0x100536582*/
                v52[1].i8[v53 & (_R11 - 16)] = v55; /*0x100536586*/
                v120 = _mm_sub_epi64( /*0x1005365a6*/
                         _mm_loadu_si128(&v120),
                         _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v76 & 1, 0));
                v77 = 0xFFFFFFFFFFFFFFBLL * _R11; /*0x1005365b5*/
                v52[v77 - 4].i64[0] = v129; /*0x1005365bd*/
                v78 = v127; /*0x1005365c2*/
                *((_QWORD *)&v52[v77 - 4] - 1) = v128; /*0x1005365ca*/
                v52[v77 - 5].i64[0] = v78; /*0x1005365cf*/
                *((_QWORD *)&v52[v77 - 3] - 1) = 1; /*0x1005365d4*/
                v52[v77 - 3].i64[0] = v23; /*0x1005365dd*/
                v79 = v136; /*0x1005365e2*/
                *((_QWORD *)&v52[v77 - 2] - 1) = v136; /*0x1005365e6*/
                v52[v77 - 2].i64[0] = v75; /*0x1005365eb*/
                *((_QWORD *)&v52[v77 - 1] - 1) = v79; /*0x1005365f0*/
                v52[v77 - 1].i64[0] = v130; /*0x1005365fa*/
                v52[v77 - 1].i8[8] = v137; /*0x100536605*/
                v28 = v124; /*0x10053660a*/
                v74 = v100[0]; /*0x100536611*/
                if ( 2LL * v100[0] ) /*0x100536618*/
                {
LABEL_78:
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v74, 1); /*0x100536629*/
                  v27 = v111; /*0x10053663f*/
                  if ( v111 ) /*0x100536649*/
                    goto LABEL_72; /*0x100536649*/
                  goto LABEL_73; /*0x100536649*/
                }
LABEL_71:
                v27 = v111; /*0x100536512*/
                if ( !v111 ) /*0x10053651c*/
                  goto LABEL_73; /*0x10053651c*/
                goto LABEL_72; /*0x10053651c*/
              }
              v126 = 1; /*0x100536427*/
LABEL_64:
              v54 = v117 + v135 + 16; /*0x10053643b*/
              v59 = v117 + 16; /*0x10053644b*/
            }
          }
        }
        v93 = (__int64)v16; /*0x100536740*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, v30); /*0x100536747*/
      }
      v27 = v111; /*0x100536020*/
      if ( v111 ) /*0x10053602a*/
      {
        v28 = v112; /*0x100536030*/
LABEL_72:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 16 * v27, 8); /*0x10053651e*/
      }
LABEL_73:
      if ( v20 ) /*0x100536533*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x100536544*/
      v19 = v16; /*0x100535ee0*/
    }
    while ( v16 != v123 ); /*0x100535eea*/
    v16 = v123; /*0x10053668e*/
LABEL_81:
    v93 = (__int64)v16; /*0x100536695*/
    v7 = v115; /*0x1005366a3*/
LABEL_82:
    if ( v123 != v16 ) /*0x1005366c7*/
    {
      v81 = ((char *)v123 - (char *)v16) / 0x28uLL; /*0x1005366cc*/
      v82 = v16 + 1; /*0x1005366d0*/
      do /*0x1005366e7*/
      {
        v83 = *(v82 - 1); /*0x1005366e9*/
        if ( v83 ) /*0x1005366f0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v82, v83, 1); /*0x1005366fa*/
        v82 += 5; /*0x1005366e0*/
        --v81; /*0x1005366e4*/
      }
      while ( v81 ); /*0x1005366e7*/
    }
    if ( v103 ) /*0x10053671a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, 40 * v103, 8); /*0x100536734*/
LABEL_4:
    v7 += 16; /*0x100535e00*/
    if ( v7 != 32 ) /*0x100535e08*/
      continue; /*0x100535e08*/
    break;
  }
  v84 = v104; /*0x100536758*/
  v104[2].i64[1] = v122; /*0x10053675f*/
  v84[2].i64[0] = v121; /*0x10053676a*/
  v84[1] = v120; /*0x100536780*/
  result = v118; /*0x100536784*/
  v84->i64[1] = v119; /*0x100536792*/
  v84->i64[0] = (__int64)result; /*0x100536796*/
  return result; /*0x100536799*/
}