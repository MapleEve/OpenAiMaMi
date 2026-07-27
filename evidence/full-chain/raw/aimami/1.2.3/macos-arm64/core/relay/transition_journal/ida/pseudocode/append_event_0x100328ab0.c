// __ZN13codexmate_lib4core5relay18transition_journal12append_event @ 0x100328ab0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::transition_journal::append_event::h7266986f42fdaeea(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const void *a4,
        __int64 a5,
        const void *a6,
        __int64 __n)
{
  size_t v7; // r14
  size_t v8; // r12
  __int64 v9; // r14
  unsigned __int64 v11; // r13
  const void *v12; // rbx
  size_t v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // ebx
  int v17; // edx
  int v18; // r8d
  unsigned int v19; // eax
  size_t v20; // rdi
  __int64 v21; // rsi
  size_t v22; // r13
  __int64 v23; // r12
  size_t v24; // r15
  void *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __m128i si128; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  __m128i v33; // xmm4
  __m128i v34; // xmm5
  __m128i v35; // xmm6
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __m128i v40; // xmm3
  __m128i v41; // xmm4
  _BYTE *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // r12
  __int64 v46; // rsi
  __int64 result; // rax
  __int64 v48; // r14
  __int64 v49; // rbx
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rdx
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 *v59; // rdx
  void *v60; // r15
  __int64 *v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // r14
  __int64 v65; // rsi
  char *v66; // rdi
  __int64 v67; // rsi
  char *v68; // r12
  unsigned __int8 v69; // al
  void *v70; // rax
  size_t v71; // [rsp+0h] [rbp-140h] BYREF
  __int64 v72; // [rsp+8h] [rbp-138h]
  size_t v73; // [rsp+10h] [rbp-130h]
  size_t v74; // [rsp+18h] [rbp-128h] BYREF
  unsigned __int64 v75; // [rsp+20h] [rbp-120h]
  size_t v76; // [rsp+28h] [rbp-118h]
  unsigned __int64 v77; // [rsp+30h] [rbp-110h] BYREF
  char v78; // [rsp+38h] [rbp-108h] BYREF
  char v79[7]; // [rsp+39h] [rbp-107h] BYREF
  void *__src; // [rsp+40h] [rbp-100h]
  __int64 v81; // [rsp+48h] [rbp-F8h] BYREF
  void *v82; // [rsp+50h] [rbp-F0h]
  size_t v83; // [rsp+58h] [rbp-E8h]
  __int64 v84; // [rsp+60h] [rbp-E0h] BYREF
  _QWORD *v85; // [rsp+68h] [rbp-D8h]
  __int64 v86; // [rsp+70h] [rbp-D0h]
  _QWORD *v87; // [rsp+78h] [rbp-C8h]
  __int64 v88; // [rsp+80h] [rbp-C0h]
  _QWORD *v89; // [rsp+88h] [rbp-B8h]
  __int64 v90; // [rsp+90h] [rbp-B0h]
  char v91; // [rsp+98h] [rbp-A8h]
  __int16 v92; // [rsp+A0h] [rbp-A0h]
  int v93; // [rsp+A8h] [rbp-98h]
  int v94; // [rsp+ACh] [rbp-94h]
  __int64 v95; // [rsp+B0h] [rbp-90h]
  __int64 v96; // [rsp+B8h] [rbp-88h]
  size_t v97; // [rsp+C0h] [rbp-80h]
  __int64 v98; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v99; // [rsp+D0h] [rbp-70h]
  _QWORD *v100; // [rsp+D8h] [rbp-68h]
  __int64 v101; // [rsp+E0h] [rbp-60h]
  __int64 v102; // [rsp+E8h] [rbp-58h]
  size_t v103; // [rsp+F0h] [rbp-50h]
  __int64 v104; // [rsp+F8h] [rbp-48h] BYREF
  __int64 *v105; // [rsp+100h] [rbp-40h]
  __int64 v106; // [rsp+108h] [rbp-38h]
  __int64 v107; // [rsp+110h] [rbp-30h]

  v7 = a5; /*0x100328ac4*/
  if ( a5 < 0 ) /*0x100328aca*/
  {
    v8 = a5; /*0x100328acc*/
    v9 = 0; /*0x100328acf*/
    goto LABEL_3; /*0x100328acf*/
  }
  v11 = a3; /*0x100328ae0*/
  v102 = a1; /*0x100328ae3*/
  v107 = a2; /*0x100328ae7*/
  if ( a5 ) /*0x100328aeb*/
  {
    v12 = a4; /*0x100328aed*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100328af0*/
    v13 = v7; /*0x100328af5*/
    v9 = 1; /*0x100328af8*/
    v8 = v13; /*0x100328b03*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 1); /*0x100328b06*/
    if ( !v14 ) /*0x100328b0e*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x100328ad2*/
    v15 = v14; /*0x100328b10*/
    a4 = v12; /*0x100328b13*/
    v7 = v8; /*0x100328b16*/
  }
  else
  {
    v15 = 1; /*0x100328b1b*/
  }
  v95 = v15; /*0x100328b20*/
  memcpy((void *)v15, a4, v7); /*0x100328b2d*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v84); /*0x100328b3c*/
  v16 = v84; /*0x100328b41*/
  v17 = ((int)v84 >> 13) - 1; /*0x100328b4c*/
  v18 = 0; /*0x100328b4f*/
  if ( (int)v84 >> 13 <= 0 ) /*0x100328b54*/
  {
    v19 = (1 - ((int)v84 >> 13)) / 0x190u + 1; /*0x100328b68*/
    v17 += 400 * v19; /*0x100328b70*/
    v18 = -146097 * v19; /*0x100328b72*/
  }
  LODWORD(v101) = v11; /*0x100328b79*/
  v20 = HIDWORD(v84); /*0x100328b87*/
  v21 = (unsigned int)v85; /*0x100328b8d*/
  if ( a6 )
  {
    v22 = __n; /*0x100328b98*/
    if ( __n < 0 ) /*0x100328b9f*/
    {
      v23 = 0; /*0x100328ba1*/
      goto LABEL_13; /*0x100328ba1*/
    }
    v94 = v17; /*0x100328bbc*/
    v93 = v18; /*0x100328bc2*/
    v97 = HIDWORD(v84); /*0x100328bc9*/
    v96 = (unsigned int)v85; /*0x100328bcd*/
    v103 = v7; /*0x100328bd4*/
    if ( __n ) /*0x100328bd8*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(HIDWORD(v84), (unsigned int)v85); /*0x100328bda*/
      v23 = 1; /*0x100328bdf*/
      v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100328bed*/
      if ( !v25 ) /*0x100328bf5*/
        goto LABEL_13; /*0x100328bf5*/
      v26 = (__int64)v25; /*0x100328bfb*/
      memcpy(v25, a6, __n); /*0x100328c07*/
      if ( (unsigned __int64)__n < 8 ) /*0x100328c10*/
      {
        v27 = 0; /*0x100328c12*/
        do /*0x100329538*/
        {
LABEL_91:
          *(_BYTE *)(v26 + v27) |= 32 * ((unsigned __int8)(*(_BYTE *)(v26 + v27) - 65) < 0x1Au); /*0x10032951b*/
          ++v27; /*0x100329532*/
LABEL_92:
          ; /*0x100329535*/
        }
        while ( __n != v27 ); /*0x100329538*/
        goto LABEL_93; /*0x100329538*/
      }
      if ( (unsigned __int64)__n < 0x20 ) /*0x100328c42*/
      {
        v27 = 0; /*0x100328c44*/
        goto LABEL_26; /*0x100328c46*/
      }
      v27 = __n & 0x7FFFFFFFFFFFFFE0LL; /*0x100328c4f*/
      v28 = 0; /*0x100328c52*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x100328c54*/
      v30 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x100328c5c*/
      v31 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x100328c64*/
      do /*0x100328cc9*/
      {
        v32 = _mm_loadu_si128((const __m128i *)(v26 + v28)); /*0x100328c70*/
        v33 = _mm_loadu_si128((const __m128i *)(v26 + v28 + 16)); /*0x100328c76*/
        v34 = _mm_add_epi8(v32, si128); /*0x100328c81*/
        v35 = _mm_add_epi8(v33, si128); /*0x100328c89*/
        *(__m128i *)(v26 + v28) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v34, v30), v34), v31), v32); /*0x100328cb5*/
        *(__m128i *)(v26 + v28 + 16) = _mm_or_si128( /*0x100328cbb*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v35, v30), v35), v31),
                                         v33);
        v28 += 32; /*0x100328cc2*/
      }
      while ( v27 != v28 ); /*0x100328cc9*/
      if ( __n != v27 ) /*0x100328cce*/
      {
        if ( (__n & 0x18) == 0 ) /*0x100328cd8*/
          goto LABEL_91; /*0x100328cd8*/
LABEL_26:
        v36 = v27; /*0x100328cde*/
        v27 = __n & 0x7FFFFFFFFFFFFFF8LL; /*0x100328ce5*/
        v37 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x100328ce8*/
        v38 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x100328cf0*/
        v39 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x100328cf8*/
        do /*0x100328d2f*/
        {
          v40 = _mm_loadl_epi64((const __m128i *)(v26 + v36)); /*0x100328d00*/
          v41 = _mm_add_epi8(v40, v37); /*0x100328d0a*/
          *(_QWORD *)(v26 + v36) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v41, v38), v41), v39), v40).u64[0]; /*0x100328d22*/
          v36 += 8; /*0x100328d28*/
        }
        while ( v27 != v36 ); /*0x100328d2f*/
        goto LABEL_92; /*0x100328d2f*/
      }
    }
    else
    {
      v26 = 1; /*0x100328c19*/
    }
LABEL_93:
    v66 = (char *)&unk_1015E44DF; /*0x10032953a*/
    v67 = 18; /*0x100329541*/
    v68 = "db_locktransition completed or already stableclearedaimai1"; /*0x100329551*/
    v24 = 7; /*0x100329558*/
    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             &unk_1015E44DF,
                             0x12u,
                             (void *)v26) )
    {
      v66 = (char *)&unk_1015E3B44; /*0x100329566*/
      v67 = 4; /*0x10032956d*/
      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                               &unk_1015E3B44,
                               4u,
                               (void *)v26) )
      {
        v66 = (char *)&unk_1015E44F1; /*0x100329585*/
        v67 = 9; /*0x10032958c*/
        if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                 &unk_1015E44F1,
                                 9u,
                                 (void *)v26) )
        {
          v66 = (char *)&unk_1015E44FA; /*0x1003295a4*/
          v67 = 7; /*0x1003295ab*/
          if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                   &unk_1015E44FA,
                                   7u,
                                   (void *)v26) )
          {
            v66 = (char *)&unk_1015E4501; /*0x1003295c3*/
            v67 = 6; /*0x1003295ca*/
            v68 = "thread_reconcileimage generationconnection resetreasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id"; /*0x1003295da*/
            v24 = 16; /*0x1003295e1*/
            if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                     &unk_1015E4501,
                                     6u,
                                     (void *)v26) )
            {
              v66 = (char *)&unk_1015E4507; /*0x1003295ef*/
              v67 = 7; /*0x1003295f6*/
              if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                       &unk_1015E4507,
                                       7u,
                                       (void *)v26) )
              {
                v66 = (char *)&unk_1015E450E; /*0x10032960e*/
                v67 = 6; /*0x100329615*/
                v68 = "config_syncrouter reconcile did not become effective: missing active provider, proxy, or catalogmodel_restore";
                v24 = 11; /*0x10032962c*/
                if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                         &unk_1015E450E,
                                         6u,
                                         (void *)v26) )
                {
                  v66 = (char *)&unk_1015E3B48; /*0x10032963a*/
                  v67 = 4; /*0x100329641*/
                  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                           &unk_1015E3B48,
                                           4u,
                                           (void *)v26) )
                  {
                    v66 = (char *)&unk_1015E4514; /*0x100329659*/
                    v67 = 13; /*0x100329660*/
                    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                                             &unk_1015E4514,
                                             0xDu,
                                             (void *)v26) )
                    {
                      v66 = "takeoverexceeded"; /*0x100329678*/
                      v67 = 8; /*0x10032967f*/
                      v68 = "config_takeoverproject_statewriting_configconfig_syncrouter reconcile did not become effecti"
                            "ve: missing active provider, proxy, or catalogmodel_restore";
                      v24 = 15; /*0x100329696*/
                      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10032968a*/
                                               "takeoverexceeded",
                                               8u,
                                               (void *)v26) )
                      {
                        v66 = (char *)&anon_b0ee9adff4519c22b647af231a5a39fa_277; /*0x1003296a4*/
                        v67 = 6; /*0x1003296ab*/
                        if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1003296b6*/
                                                 &anon_b0ee9adff4519c22b647af231a5a39fa_277,
                                                 6u,
                                                 (void *)v26) )
                        {
                          v68 = (char *)&unk_1015E3B4C; /*0x1003296c3*/
                          v24 = 4; /*0x1003296ca*/
                          v67 = 4; /*0x1003296d0*/
                          v66 = (char *)&unk_1015E3B4C; /*0x1003296d5*/
                          if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1003296de*/
                                                   &unk_1015E3B4C,
                                                   4u,
                                                   (void *)v26) )
                          {
                            v66 = (char *)&unk_1015E4527; /*0x1003296eb*/
                            v67 = 5; /*0x1003296f2*/
                            if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1003296fd*/
                                                     &unk_1015E4527,
                                                     5u,
                                                     (void *)v26) )
                            {
                              v66 = (char *)&anon_b0ee9adff4519c22b647af231a5a39fa_280; /*0x10032970a*/
                              v67 = 5; /*0x100329711*/
                              if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10032971c*/
                                                       &anon_b0ee9adff4519c22b647af231a5a39fa_280,
                                                       5u,
                                                       (void *)v26) )
                              {
                                v66 = (char *)&unk_1015E4531; /*0x100329729*/
                                v67 = 7; /*0x100329730*/
                                v68 = "state_persistdb_locktransition completed or already stableclearedaimai1"; /*0x100329740*/
                                v24 = 13; /*0x100329747*/
                                if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10032973b*/
                                                         &unk_1015E4531,
                                                         7u,
                                                         (void *)v26) )
                                {
                                  v66 = (char *)&unk_1015E4538; /*0x100329755*/
                                  v67 = 11; /*0x10032975c*/
                                  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100329767*/
                                                           &unk_1015E4538,
                                                           0xBu,
                                                           (void *)v26) )
                                  {
                                    v68 = (char *)&anon_b0ee9adff4519c22b647af231a5a39fa_283; /*0x100329774*/
                                    v24 = 5; /*0x10032977b*/
                                    v67 = 5; /*0x100329781*/
                                    v66 = (char *)&anon_b0ee9adff4519c22b647af231a5a39fa_283; /*0x100329786*/
                                    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10032978f*/
                                                             &anon_b0ee9adff4519c22b647af231a5a39fa_283,
                                                             5u,
                                                             (void *)v26) )
                                    {
                                      v66 = (char *)&anon_b0ee9adff4519c22b647af231a5a39fa_284; /*0x100329798*/
                                      v67 = 4; /*0x10032979f*/
                                      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1003297aa*/
                                                               &anon_b0ee9adff4519c22b647af231a5a39fa_284,
                                                               4u,
                                                               (void *)v26) )
                                      {
                                        v68 = "completedalready stablestate_persistdb_locktransition completed or already" /*0x1003297b3*/
                                              " stableclearedaimai1";
                                        v24 = 9; /*0x1003297ba*/
                                        v67 = 9; /*0x1003297c0*/
                                        v66 = "completedalready stablestate_persistdb_locktransition completed or already" /*0x1003297c5*/
                                              " stableclearedaimai1";
                                        if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1003297ce*/
                                                                 "completedalready stablestate_persistdb_locktransition c"
                                                                 "ompleted or already stableclearedaimai1",
                                                                 9u,
                                                                 (void *)v26) )
                                        {
                                          v66 = "already stablestate_persistdb_locktransition completed or already stableclearedaimai1"; /*0x1003297d7*/
                                          v67 = 14; /*0x1003297de*/
                                          v69 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1003297e9*/
                                                  "already stablestate_persistdb_locktransition completed or already stableclearedaimai1",
                                                  0xEu,
                                                  (void *)v26);
                                          v24 = 2LL * v69 + 7; /*0x1003297f1*/
                                          v68 = (char *)&anon_b0ee9adff4519c22b647af231a5a39fa_50; /*0x1003297fd*/
                                          if ( v69 ) /*0x100329806*/
                                            v68 = "completedalready stablestate_persistdb_locktransition completed or alr" /*0x100329806*/
                                                  "eady stableclearedaimai1";
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    __src = v68; /*0x10032980a*/
    if ( __n ) /*0x100329814*/
    {
      v66 = (char *)v26; /*0x10032981b*/
      v67 = __n; /*0x10032981e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, __n, 1); /*0x100329821*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, v67); /*0x100329826*/
    v23 = 1; /*0x10032982b*/
    v70 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1); /*0x100329839*/
    if ( v70 ) /*0x100329841*/
    {
      v11 = (unsigned __int64)v70; /*0x100329843*/
      memcpy(v70, __src, v24); /*0x100329853*/
      v7 = v103; /*0x100329858*/
      v21 = v96; /*0x100329863*/
      v20 = v97; /*0x10032986a*/
      v18 = v93; /*0x10032986e*/
      v17 = v94; /*0x100329875*/
      goto LABEL_29; /*0x10032987b*/
    }
    v22 = v24; /*0x100329880*/
LABEL_13:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, v22); /*0x100328ba4*/
  }
  v24 = 0x8000000000000000LL; /*0x100328bb4*/
LABEL_29:
  v79[0] = 1; /*0x100328d5a*/
  v78 = v101; /*0x100328dbf*/
  v71 = v7; /*0x100328dc5*/
  v72 = v95; /*0x100328dd3*/
  v73 = v7; /*0x100328dda*/
  v77 = 1000 /*0x100328de1*/
      * (v20
       + 86400LL * (int)(((v17 / 100) >> 2) + ((1461 * v17) >> 2) + v18 + ((v16 >> 4) & 0x1FF) - v17 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v21) >> 50);
  v74 = v24; /*0x100328de8*/
  v75 = v11; /*0x100328def*/
  v76 = v24; /*0x100328df6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v21); /*0x100328dfd*/
  v42 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100328e0c*/
  if ( !v42 ) /*0x100328e14*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100329389*/
  v84 = 128; /*0x100328e21*/
  v85 = v42; /*0x100328e2c*/
  v98 = (__int64)&v84; /*0x100328e33*/
  *v42 = 123; /*0x100328e37*/
  v86 = 1; /*0x100328e3a*/
  LOWORD(v104) = 256; /*0x100328e45*/
  v105 = &v98; /*0x100328e4f*/
  v45 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::hb0a7272cd279ba7d( /*0x100328e68*/
                    &v104,
                    &anon_b0ee9adff4519c22b647af231a5a39fa_26,
                    13,
                    v79);
  if ( v45 ) /*0x100328e6e*/
    goto LABEL_34; /*0x100328e6e*/
  if ( (_BYTE)v104 ) /*0x100328e74*/
    goto LABEL_32; /*0x100328e74*/
  v45 = (_QWORD *)((__int64 (__fastcall *)(__int64 *, void *, __int64, char *, __int64, __int64, size_t, __int64, size_t, size_t, unsigned __int64, size_t, unsigned __int64))serde_core::ser::SerializeMap::serialize_entry::h268b9824d67d7ede)( /*0x100328e9c*/
                    &v104,
                    &anon_b0ee9adff4519c22b647af231a5a39fa_253,
                    6,
                    &v78,
                    v43,
                    v44,
                    v71,
                    v72,
                    v73,
                    v74,
                    v75,
                    v76,
                    v77);
  if ( v45 ) /*0x100328ea2*/
    goto LABEL_34; /*0x100328ea2*/
  if ( (_BYTE)v104 ) /*0x100328f59*/
    goto LABEL_32; /*0x100328f59*/
  v45 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100328f7b*/
                    &v104,
                    &anon_b0ee9adff4519c22b647af231a5a39fa_254,
                    5,
                    &v71);
  if ( v45 ) /*0x100328f81*/
    goto LABEL_34; /*0x100328f81*/
  if ( (_BYTE)v104 ) /*0x100328f8b*/
    goto LABEL_32; /*0x100328f8b*/
  v45 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x100328fad*/
                    &v104,
                    &anon_b0ee9adff4519c22b647af231a5a39fa_255,
                    12,
                    &v77);
  if ( v45 ) /*0x100328fb3*/
    goto LABEL_34; /*0x100328fb3*/
  if ( (_BYTE)v104 ) /*0x100328fbd*/
  {
LABEL_32:
    v45 = (_QWORD *)serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100328e76*/
    goto LABEL_34; /*0x100328e7e*/
  }
  v45 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100328fdf*/
                    &v104,
                    &anon_b0ee9adff4519c22b647af231a5a39fa_256,
                    6,
                    &v74);
  if ( v45 ) /*0x100328fe5*/
  {
LABEL_34:
    if ( v84 ) /*0x100328eb2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v84, 1); /*0x100328ec0*/
    goto LABEL_36; /*0x100328ec0*/
  }
  if ( (v104 & 1) == 0 && BYTE1(v104) ) /*0x100328ff5*/
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10032900a*/
      *v105,
      &anon_b0ee9adff4519c22b647af231a5a39fa_15,
      1);
  v45 = v85; /*0x100329016*/
  v101 = v84; /*0x100329027*/
  if ( v84 != 0x8000000000000000LL ) /*0x10032902e*/
  {
    v97 = v24; /*0x100329034*/
    v103 = v7; /*0x100329038*/
    v96 = v86; /*0x100329043*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v81, v102, v107, &anon_b0ee9adff4519c22b647af231a5a39fa_246, 19); /*0x100329066*/
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v98, v82, v83); /*0x10032907d*/
    v48 = v99; /*0x100329086*/
    if ( v98 == 0x8000000000000000LL ) /*0x100329097*/
      goto LABEL_60; /*0x100329097*/
    v49 = v98; /*0x10032909d*/
    v84 = 0; /*0x1003290a4*/
    v85 = v100; /*0x1003290af*/
    v86 = v99; /*0x1003290b6*/
    v87 = v100; /*0x1003290bd*/
    v88 = 0; /*0x1003290c4*/
    v89 = v100; /*0x1003290cf*/
    v90 = 0xA0000000ALL; /*0x1003290e0*/
    v91 = 1; /*0x1003290e7*/
    v92 = 0; /*0x1003290ee*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h5bf706d538935385( /*0x100329102*/
      &v104,
      &v84);
    if ( v49 ) /*0x10032910a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v49, 1); /*0x100329117*/
    v50 = v104; /*0x10032911c*/
    v48 = (__int64)v105; /*0x100329120*/
    if ( v104 == 0x8000000000000000LL ) /*0x100329131*/
    {
LABEL_60:
      v98 = 0; /*0x100329133*/
      v99 = 8; /*0x10032913b*/
      v100 = nullptr; /*0x100329143*/
      if ( (v48 & 3) != 1 ) /*0x100329154*/
      {
        v50 = 0; /*0x100329156*/
LABEL_69:
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v98); /*0x1003291c4*/
        v51 = v50; /*0x1003291cd*/
LABEL_70:
        v54 = v99; /*0x1003291d0*/
        v55 = 3 * v51; /*0x1003291d4*/
        *(_QWORD *)(v99 + 8 * v55) = v101; /*0x1003291dc*/
        *(_QWORD *)(v54 + 8 * v55 + 8) = v45; /*0x1003291e0*/
        *(_QWORD *)(v54 + 8 * v55 + 16) = v96; /*0x1003291ec*/
        v56 = (_QWORD *)(v51 + 1); /*0x1003291f1*/
        v100 = (_QWORD *)(v51 + 1); /*0x1003291f5*/
        if ( (unsigned __int64)(v51 + 1) >= 0xC9 ) /*0x100329200*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::drain::h004b7b766a73918f(&v84, &v98, 0, v51 - 199); /*0x100329216*/
          _$LT$alloc..vec..drain..Drain$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he2fe1c7c6f42dfa0(&v84); /*0x100329222*/
          v56 = v100; /*0x100329227*/
        }
        alloc::str::join_generic_copy::heca7a5e86402c6b6(&v84, v99, v56, "\n", 1); /*0x100329243*/
        v106 = v86; /*0x10032924f*/
        v105 = v85; /*0x100329261*/
        v104 = v84; /*0x100329265*/
        v58 = v86; /*0x100329269*/
        if ( v84 == v86 ) /*0x10032926f*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003293a7*/
            &v104,
            v86,
            1,
            1,
            1,
            v57);
          v58 = v106; /*0x1003293ac*/
        }
        v59 = v105; /*0x100329275*/
        *((_BYTE *)v105 + v58) = 10; /*0x100329279*/
        v60 = v82; /*0x10032928e*/
        v61 = v59; /*0x100329291*/
        v62 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v82, v83); /*0x10032929a*/
        if ( (v62 & 3) == 1 ) /*0x1003292a7*/
        {
          v102 = v62 - 1; /*0x100329326*/
          v107 = *(_QWORD *)(v62 - 1); /*0x10032932e*/
          v64 = *(_QWORD *)(v62 + 7); /*0x100329332*/
          if ( *(_QWORD *)v64 ) /*0x100329336*/
            (*(void (__fastcall **)(__int64))v64)(v107); /*0x100329342*/
          v65 = *(_QWORD *)(v64 + 8); /*0x100329344*/
          if ( v65 ) /*0x10032934b*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v65, *(_QWORD *)(v64 + 16)); /*0x100329355*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, 24, 8); /*0x100329368*/
          v63 = v104; /*0x10032936d*/
          if ( !v104 ) /*0x100329374*/
          {
LABEL_77:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v98); /*0x1003292bf*/
            result = v98; /*0x1003292c8*/
            if ( v98 ) /*0x1003292cf*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, 24 * v98, 8); /*0x1003292e2*/
            if ( v81 ) /*0x1003292f1*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v81, 1); /*0x1003292fb*/
            v7 = v103; /*0x100329300*/
            v24 = v97; /*0x100329304*/
            if ( v103 ) /*0x100329315*/
              goto LABEL_42; /*0x100329315*/
            goto LABEL_43; /*0x100329315*/
          }
        }
        else
        {
          v63 = v104; /*0x1003292a9*/
          if ( !v104 ) /*0x1003292b0*/
            goto LABEL_77; /*0x1003292b0*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v63, 1); /*0x1003292ba*/
        goto LABEL_77; /*0x1003292ba*/
      }
      v102 = v48 - 1; /*0x100329170*/
      v107 = *(_QWORD *)(v48 - 1); /*0x100329178*/
      v52 = *(_QWORD *)(v48 + 7); /*0x10032917c*/
      if ( *(_QWORD *)v52 ) /*0x100329180*/
        (*(void (__fastcall **)(__int64))v52)(v107); /*0x10032918c*/
      v53 = *(_QWORD *)(v52 + 8); /*0x10032918e*/
      if ( v53 ) /*0x100329195*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v53, *(_QWORD *)(v52 + 16)); /*0x10032919f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, 24, 8); /*0x1003291b2*/
      v50 = v98; /*0x1003291b7*/
      v51 = (__int64)v100; /*0x1003291bb*/
    }
    else
    {
      v51 = v106; /*0x10032915a*/
      v98 = v104; /*0x10032915e*/
      v99 = (__int64)v105; /*0x100329162*/
      v100 = (_QWORD *)v106; /*0x100329166*/
    }
    if ( v51 != v50 ) /*0x1003291c2*/
      goto LABEL_70; /*0x1003291c2*/
    goto LABEL_69; /*0x1003291c2*/
  }
LABEL_36:
  if ( *v45 == 1 ) /*0x100328ecd*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v45 + 1); /*0x100328ef4*/
  }
  else if ( !*v45 ) /*0x100328ec5*/
  {
    v46 = v45[2]; /*0x100328ed4*/
    if ( v46 ) /*0x100328edc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45[1], v46, 1); /*0x100328ee8*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 40, 8); /*0x100328f06*/
  if ( v7 ) /*0x100328f18*/
LABEL_42:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v7, 1); /*0x100328f1a*/
LABEL_43:
  if ( v24 != 0x8000000000000000LL ) /*0x100328f31*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v24, 1); /*0x100328f3e*/
  return result; /*0x100328f43*/
}