// __ZN13codexmate_lib4core5voice9workspace17upsert_vocabulary @ 0x100b00360 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::upsert_vocabulary::h5d64180514dcd824(
        _QWORD *__dst,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // r12
  char v7; // r13
  unsigned __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 *v10; // rsi
  char v11; // r14
  int v12; // edx
  __int64 v13; // r12
  size_t v14; // rdx
  size_t v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  const void *v19; // r14
  size_t v20; // r13
  __int64 v21; // rax
  size_t v22; // r14
  __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r13
  size_t v28; // r12
  size_t v29; // r13
  __int64 v30; // r12
  __int64 v31; // rsi
  size_t v32; // r13
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // r12
  __int64 *v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rcx
  char v45; // r12
  _QWORD *v46; // rsi
  __int64 v47; // r14
  __int64 v48; // r12
  void *v49; // rax
  __int64 v50; // rdi
  void *v51; // r14
  __int64 *v52; // r13
  void *v53; // rax
  void *v54; // rax
  void *v55; // r12
  void *v56; // rsi
  __int64 *v57; // rdi
  size_t v58; // rdx
  __int64 v59; // r12
  void *v60; // rax
  void *v61; // r14
  void *v62; // rdi
  void *v63; // rsi
  size_t v64; // r13
  __int64 v65; // rax
  size_t v66; // rsi
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rsi
  void *v74; // rax
  void *v75; // r12
  char v76; // al
  __int64 v77; // r14
  int v78; // edx
  __int64 v79; // rax
  __int64 *v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rsi
  _BYTE __dsta[160]; // [rsp+8h] [rbp-3E8h] BYREF
  _BYTE v84[16]; // [rsp+A8h] [rbp-348h] BYREF
  __int64 v85; // [rsp+B8h] [rbp-338h] BYREF
  _QWORD v86[12]; // [rsp+C0h] [rbp-330h] BYREF
  _QWORD v87[3]; // [rsp+120h] [rbp-2D0h] BYREF
  __int64 v88; // [rsp+138h] [rbp-2B8h]
  __int64 v89; // [rsp+140h] [rbp-2B0h]
  __int64 v90[36]; // [rsp+148h] [rbp-2A8h] BYREF
  _QWORD v91[2]; // [rsp+268h] [rbp-188h] BYREF
  _QWORD *v92; // [rsp+278h] [rbp-178h] BYREF
  __int64 v93; // [rsp+280h] [rbp-170h]
  void *v94; // [rsp+288h] [rbp-168h]
  void *v95; // [rsp+290h] [rbp-160h]
  __int64 *v96; // [rsp+298h] [rbp-158h]
  __int64 v97; // [rsp+2A0h] [rbp-150h]
  _QWORD v98[20]; // [rsp+2A8h] [rbp-148h] BYREF
  size_t v99; // [rsp+348h] [rbp-A8h] BYREF
  __int64 v100; // [rsp+350h] [rbp-A0h]
  __int64 v101; // [rsp+358h] [rbp-98h]
  __int64 v102; // [rsp+360h] [rbp-90h]
  size_t v103; // [rsp+368h] [rbp-88h] BYREF
  __int64 v104; // [rsp+370h] [rbp-80h]
  __int64 v105; // [rsp+378h] [rbp-78h]
  unsigned __int64 v106; // [rsp+380h] [rbp-70h] BYREF
  void *v107; // [rsp+388h] [rbp-68h]
  size_t v108; // [rsp+390h] [rbp-60h]
  size_t v109; // [rsp+398h] [rbp-58h]
  _QWORD *v110; // [rsp+3A0h] [rbp-50h]
  __int64 v111; // [rsp+3A8h] [rbp-48h]
  size_t __n; // [rsp+3B0h] [rbp-40h]
  void *__s2; // [rsp+3B8h] [rbp-38h]
  char v114; // [rsp+3C7h] [rbp-29h]

  v102 = a2; /*0x100b00377*/
  codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119(v90); /*0x100b0038b*/
  v5 = v90[0]; /*0x100b00390*/
  v6 = v90[1]; /*0x100b00397*/
  v7 = v90[2]; /*0x100b0039e*/
  if ( v90[0] != 11 ) /*0x100b003aa*/
  {
    memcpy((char *)__dst + 25, (char *)&v90[2] + 1, 0x4Fu); /*0x100b00424*/
    __dst[1] = v5; /*0x100b00429*/
    __dst[2] = v6; /*0x100b0042d*/
    *((_BYTE *)__dst + 24) = v7; /*0x100b00431*/
    *__dst = 0x8000000000000000LL; /*0x100b0043f*/
    v11 = 1; /*0x100b00442*/
    goto LABEL_80; /*0x100b00445*/
  }
  v114 = v90[2]; /*0x100b003ac*/
  v110 = (_QWORD *)v90[1]; /*0x100b003b0*/
  codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v90, v102); /*0x100b003c5*/
  qmemcpy(v98, &v90[1], 0x60u); /*0x100b003e4*/
  v8 = 0x8000000000000000LL; /*0x100b003e7*/
  if ( v90[0] == 0x8000000000000000LL ) /*0x100b003f4*/
  {
    qmemcpy(__dst + 1, v98, 0x60u); /*0x100b00406*/
    v10 = &v98[12]; /*0x100b00406*/
    v9 = __dst + 13; /*0x100b00406*/
    *__dst = 0x8000000000000000LL; /*0x100b00409*/
    v11 = 1; /*0x100b0040c*/
    goto LABEL_77; /*0x100b0040f*/
  }
  v89 = v90[17]; /*0x100b00451*/
  v88 = v90[16]; /*0x100b0045f*/
  v87[2] = v90[15]; /*0x100b0046d*/
  v87[1] = v90[14]; /*0x100b00482*/
  v87[0] = v90[13]; /*0x100b00489*/
  qmemcpy(v86, v98, sizeof(v86)); /*0x100b004a3*/
  v85 = v90[0]; /*0x100b004a6*/
  v98[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v87, &v98[12]); /*0x100b004b2*/
  LODWORD(v98[1]) = v12; /*0x100b004b9*/
  std::time::SystemTime::duration_since::had059553cab94f96(v90, v98, 0, 0); /*0x100b004d1*/
  if ( LOBYTE(v90[0]) ) /*0x100b004dd*/
    v13 = 0; /*0x100b004e8*/
  else
    v13 = v90[1]; /*0x100b004df*/
  v94 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3[1], a3[2]); /*0x100b004f8*/
  __n = v14; /*0x100b004ff*/
  v95 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3[4], a3[5]); /*0x100b00510*/
  v109 = v15; /*0x100b00517*/
  if ( a3[15] == 0x8000000000000000LL /*0x100b0054d*/
    || (v16 = a3[16],
        v17 = a3[17],
        v19 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v16, v17),
        v20 = v18,
        v19 == nullptr || v18 == 0) )
  {
    v106 = 0x8000000000000000LL; /*0x100b00562*/
    goto LABEL_11; /*0x100b00562*/
  }
  if ( v18 < 0 ) /*0x100b009ec*/
  {
    v50 = 0; /*0x100b009f2*/
    goto LABEL_46; /*0x100b009f2*/
  }
  v111 = v13; /*0x100b00b44*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v17); /*0x100b00b48*/
  v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v20, 1); /*0x100b00b55*/
  v50 = 1; /*0x100b00b5a*/
  if ( !v54 ) /*0x100b00b62*/
LABEL_46:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v50, v20); /*0x100b009f4*/
  v55 = v54; /*0x100b00b68*/
  memcpy(v54, v19, v20); /*0x100b00b74*/
  v106 = v20; /*0x100b00b79*/
  v107 = v55; /*0x100b00b7d*/
  v108 = v20; /*0x100b00b81*/
  v13 = v111; /*0x100b00b85*/
LABEL_11:
  v90[2] = a3[11]; /*0x100b00566*/
  v21 = a3[9]; /*0x100b00571*/
  v90[1] = a3[10]; /*0x100b00579*/
  v90[0] = v21; /*0x100b00580*/
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(&v99, v90); /*0x100b00595*/
  v22 = v109; /*0x100b0059a*/
  v90[2] = a3[14]; /*0x100b005a2*/
  v23 = a3[12]; /*0x100b005a9*/
  v90[1] = a3[13]; /*0x100b005b1*/
  v90[0] = v23; /*0x100b005b8*/
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(&v103, v90); /*0x100b005cd*/
  if ( !__n ) /*0x100b005d7*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v103, v90); /*0x100b00964*/
    v47 = 33; /*0x100b00969*/
    v48 = 1; /*0x100b0096f*/
    v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x100b0097f*/
    if ( !v49 ) /*0x100b00987*/
      goto LABEL_132; /*0x100b00987*/
    qmemcpy(v49, "Vocabulary source cannot be empty", 33); /*0x100b009c1*/
    __dst[1] = 9; /*0x100b009c8*/
    __dst[2] = 33; /*0x100b009d0*/
    __dst[3] = v49; /*0x100b009d8*/
    __dst[4] = 33; /*0x100b009dc*/
    goto LABEL_66; /*0x100b009e4*/
  }
  if ( !v22 ) /*0x100b005e0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v103, v90); /*0x100b00ab5*/
    v47 = 38; /*0x100b00aba*/
    v48 = 1; /*0x100b00ac0*/
    v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(38, 1); /*0x100b00ad0*/
    if ( !v53 ) /*0x100b00ad8*/
      goto LABEL_132; /*0x100b00ad8*/
    qmemcpy(v53, "Vocabulary replacement cannot be empty", 38); /*0x100b00b20*/
    __dst[1] = 9; /*0x100b00b23*/
    __dst[2] = 38; /*0x100b00b2b*/
    __dst[3] = v53; /*0x100b00b33*/
    __dst[4] = 38; /*0x100b00b37*/
    goto LABEL_66; /*0x100b00b3f*/
  }
  v24 = a3[6] == 0x8000000000000000LL; /*0x100b005f4*/
  v96 = a3 + 6; /*0x100b005f8*/
  if ( !v24 ) /*0x100b005ff*/
  {
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3[7], a3[8]); /*0x100b0060d*/
    if ( v25 ) /*0x100b00615*/
    {
      v111 = v13; /*0x100b0061b*/
      v92 = a3 + 6; /*0x100b0061f*/
      if ( v86[4] ) /*0x100b00630*/
      {
        v26 = v86[3]; /*0x100b00636*/
        v27 = 160LL * v86[4]; /*0x100b00641*/
        __s2 = (void *)a3[7]; /*0x100b00649*/
        v28 = a3[8]; /*0x100b0064d*/
        while ( *(_QWORD *)(v26 + 16) != v28 || memcmp(*(const void **)(v26 + 8), __s2, v28) ) /*0x100b0068c*/
        {
          v26 += 160; /*0x100b00660*/
          v27 -= 160; /*0x100b00667*/
          if ( !v27 ) /*0x100b0066e*/
            goto LABEL_65; /*0x100b0066e*/
        }
        v29 = __n; /*0x100b006a0*/
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v90, __n, 0, 1, 1); /*0x100b006a9*/
        __s2 = (void *)v90[1]; /*0x100b006b5*/
        if ( !LOBYTE(v90[0]) ) /*0x100b006c0*/
        {
          v30 = v90[2]; /*0x100b006c6*/
          memcpy((void *)v90[2], v94, v29); /*0x100b006da*/
          v31 = *(_QWORD *)(v26 + 24); /*0x100b006df*/
          if ( v31 ) /*0x100b006e6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v26 + 32), v31, 1); /*0x100b006f1*/
          *(_QWORD *)(v26 + 24) = __s2; /*0x100b006fa*/
          *(_QWORD *)(v26 + 32) = v30; /*0x100b006fe*/
          *(_QWORD *)(v26 + 40) = __n; /*0x100b00706*/
          v32 = v109; /*0x100b0071c*/
          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v90, v109, 0, 1, 1); /*0x100b00725*/
          __s2 = (void *)v90[1]; /*0x100b00731*/
          if ( LODWORD(v90[0]) != 1 ) /*0x100b0073c*/
          {
            v33 = v90[2]; /*0x100b00742*/
            memcpy((void *)v90[2], v95, v32); /*0x100b00756*/
            v34 = *(_QWORD *)(v26 + 48); /*0x100b0075b*/
            if ( v34 ) /*0x100b00762*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v26 + 56), v34, 1); /*0x100b0076d*/
            *(_QWORD *)(v26 + 48) = __s2; /*0x100b00776*/
            *(_QWORD *)(v26 + 56) = v33; /*0x100b0077a*/
            *(_QWORD *)(v26 + 64) = v109; /*0x100b00782*/
            *(_BYTE *)(v26 + 152) = *((_BYTE *)a3 + 144); /*0x100b0078d*/
            v35 = 0x8000000000000000LL; /*0x100b0079e*/
            v36 = v96; /*0x100b007a8*/
            if ( v99 != 0x8000000000000000LL ) /*0x100b007af*/
            {
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v90, &v99); /*0x100b007bf*/
              v35 = v90[0]; /*0x100b007c4*/
              v98[0] = v90[1]; /*0x100b007d2*/
              v98[1] = v90[2]; /*0x100b007e0*/
            }
            v37 = *(_QWORD *)(v26 + 72); /*0x100b007e7*/
            if ( v37 != 0x8000000000000000LL && v37 ) /*0x100b007fd*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v26 + 80), v37, 1); /*0x100b00808*/
            *(_QWORD *)(v26 + 72) = v35; /*0x100b0080d*/
            v38 = v98[0]; /*0x100b00811*/
            *(_QWORD *)(v26 + 88) = v98[1]; /*0x100b0081f*/
            *(_QWORD *)(v26 + 80) = v38; /*0x100b00823*/
            v39 = 0x8000000000000000LL; /*0x100b00831*/
            if ( v103 != 0x8000000000000000LL ) /*0x100b0083b*/
            {
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v90, &v103); /*0x100b0084b*/
              v39 = v90[0]; /*0x100b00850*/
              v98[0] = v90[1]; /*0x100b0085e*/
              v98[1] = v90[2]; /*0x100b0086c*/
            }
            v40 = *(_QWORD *)(v26 + 96); /*0x100b00873*/
            if ( v40 != 0x8000000000000000LL && v40 ) /*0x100b00889*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v26 + 104), v40, 1); /*0x100b00894*/
            *(_QWORD *)(v26 + 96) = v39; /*0x100b00899*/
            v41 = v98[0]; /*0x100b0089d*/
            *(_QWORD *)(v26 + 112) = v98[1]; /*0x100b008ab*/
            *(_QWORD *)(v26 + 104) = v41; /*0x100b008af*/
            v42 = 0x8000000000000000LL; /*0x100b008bd*/
            if ( v106 != 0x8000000000000000LL ) /*0x100b008c4*/
            {
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v90, &v106); /*0x100b008d1*/
              v42 = v90[0]; /*0x100b008d6*/
              v98[0] = v90[1]; /*0x100b008e4*/
              v98[1] = v90[2]; /*0x100b008f2*/
            }
            v43 = *(_QWORD *)(v26 + 120); /*0x100b008f9*/
            if ( v43 != 0x8000000000000000LL && v43 ) /*0x100b0090f*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v26 + 128), v43, 1); /*0x100b0091d*/
            *(_QWORD *)(v26 + 120) = v42; /*0x100b00922*/
            v44 = v98[1]; /*0x100b0092d*/
            *(_QWORD *)(v26 + 128) = v98[0]; /*0x100b00934*/
            *(_QWORD *)(v26 + 136) = v44; /*0x100b0093b*/
            *(_QWORD *)(v26 + 144) = v111; /*0x100b00946*/
            v45 = 1; /*0x100b0094d*/
            v46 = (_QWORD *)v26; /*0x100b00957*/
            _$LT$codexmate_lib..core..models..VoiceVocabularyEntry$u20$as$u20$core..clone..Clone$GT$::clone::h053f5d9150e9cca1( /*0x100b0095a*/
              __dsta,
              v26);
            goto LABEL_103; /*0x100b0095f*/
          }
        }
        v47 = v90[2]; /*0x100b012b2*/
        v48 = (__int64)__s2; /*0x100b012b9*/
LABEL_132:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v48, v47); /*0x100b012bd*/
      }
LABEL_65:
      v98[0] = &v92; /*0x100b00c8c*/
      v98[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x100b00ca1*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v90[1], &unk_1017CBF57, v98); /*0x100b00cbd*/
      v90[0] = 8; /*0x100b00cc2*/
      v65 = v90[1]; /*0x100b00ccd*/
      qmemcpy(__dst + 3, &v90[2], 0x50u); /*0x100b00ce4*/
      __dst[1] = 8; /*0x100b00ce7*/
      __dst[2] = v65; /*0x100b00cef*/
LABEL_66:
      *__dst = 0x8000000000000000LL; /*0x100b00cf3*/
      goto LABEL_67; /*0x100b00cfd*/
    }
  }
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v84); /*0x100b00a08*/
  v98[0] = 0; /*0x100b00a0d*/
  v98[1] = 1; /*0x100b00a18*/
  v98[2] = 0; /*0x100b00a23*/
  v90[2] = 1610612768; /*0x100b00a2e*/
  v90[0] = (__int64)v98; /*0x100b00a40*/
  v90[1] = (__int64)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100b00a4e*/
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x100b00a63*/
                          v84,
                          v90) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100b012ab*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v91,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v51 = (void *)v98[0]; /*0x100b00a70*/
  v52 = (__int64 *)v98[1]; /*0x100b00a77*/
  if ( v98[2] <= 8u ) /*0x100b00a89*/
  {
    if ( v98[2] != 8 ) /*0x100b00b8e*/
LABEL_50:
      core::str::slice_error_fail::h480e51fbd8b15eba(v98[1], v98[2], 0, 8, &off_101974A80); /*0x100b00a9a*/
  }
  else if ( *(char *)(v98[1] + 8LL) < -64 ) /*0x100b00a94*/
  {
    goto LABEL_50; /*0x100b00a94*/
  }
  v91[0] = v98[1]; /*0x100b00b94*/
  v91[1] = 8; /*0x100b00b9b*/
  v98[0] = v91; /*0x100b00bad*/
  v98[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100b00bbb*/
  v56 = &unk_1017CBF7C; /*0x100b00bc2*/
  v57 = v90; /*0x100b00bc9*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v90, &unk_1017CBF7C, v98); /*0x100b00bd7*/
  if ( v51 ) /*0x100b00bdf*/
  {
    v57 = v52; /*0x100b00be6*/
    v56 = v51; /*0x100b00be9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x100b00bec*/
  }
  __s2 = (void *)v90[0]; /*0x100b00bf8*/
  v58 = __n; /*0x100b00c03*/
  v97 = v90[1]; /*0x100b00c0a*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100b00c11*/
  {
    v59 = 0; /*0x100b00c13*/
    goto LABEL_60; /*0x100b00c13*/
  }
  v111 = v13; /*0x100b00c26*/
  v93 = v90[2]; /*0x100b00c31*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v57, v56); /*0x100b00c38*/
  v59 = 1; /*0x100b00c3d*/
  v60 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100b00c4c*/
  v58 = __n; /*0x100b00c51*/
  if ( !v60 ) /*0x100b00c58*/
LABEL_60:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v59, v58); /*0x100b00c16*/
  v61 = v60; /*0x100b00c5a*/
  v62 = v60; /*0x100b00c5d*/
  v63 = v94; /*0x100b00c60*/
  memcpy(v60, v94, __n); /*0x100b00c67*/
  v64 = v109; /*0x100b00c6c*/
  if ( (v109 & 0x8000000000000000LL) != 0LL ) /*0x100b00c73*/
  {
    v59 = 0; /*0x100b00c79*/
    goto LABEL_64; /*0x100b00c79*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v63); /*0x100b00eaf*/
  v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v64, 1); /*0x100b00ebc*/
  if ( !v74 ) /*0x100b00ec4*/
LABEL_64:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v59, v64); /*0x100b00c7c*/
  v75 = v74; /*0x100b00ed7*/
  memcpy(v74, v95, v64); /*0x100b00eda*/
  v76 = *((_BYTE *)a3 + 144); /*0x100b00edf*/
  v98[9] = v99; /*0x100b00ef4*/
  v98[10] = v100; /*0x100b00efb*/
  v98[11] = v101; /*0x100b00f09*/
  v98[14] = v105; /*0x100b00f14*/
  v98[13] = v104; /*0x100b00f26*/
  v98[12] = v103; /*0x100b00f2d*/
  v98[17] = v108; /*0x100b00f38*/
  v98[16] = v107; /*0x100b00f47*/
  v98[15] = v106; /*0x100b00f4e*/
  v98[0] = __s2; /*0x100b00f59*/
  v98[1] = v97; /*0x100b00f67*/
  v98[2] = v93; /*0x100b00f75*/
  v98[3] = __n; /*0x100b00f80*/
  v98[4] = v61; /*0x100b00f87*/
  v98[5] = __n; /*0x100b00f8e*/
  v98[6] = v64; /*0x100b00f95*/
  v98[7] = v75; /*0x100b00f9c*/
  v98[8] = v64; /*0x100b00fa3*/
  LOBYTE(v98[19]) = v76; /*0x100b00faa*/
  v98[18] = v111; /*0x100b00fb4*/
  _$LT$codexmate_lib..core..models..VoiceVocabularyEntry$u20$as$u20$core..clone..Clone$GT$::clone::h053f5d9150e9cca1( /*0x100b00fc9*/
    v90,
    v98);
  v77 = v86[4]; /*0x100b00fce*/
  v36 = v96; /*0x100b00fdc*/
  if ( v86[4] == v86[2] ) /*0x100b00fe3*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h483ed231e2079eb6(&v86[2]); /*0x100b00fec*/
  memcpy((void *)(v86[3] + 160 * v77), v90, 0xA0u); /*0x100b0100c*/
  v86[4] = v77 + 1; /*0x100b01014*/
  v46 = v98; /*0x100b01022*/
  memcpy(__dsta, v98, sizeof(__dsta)); /*0x100b0102e*/
  v45 = 0; /*0x100b01033*/
LABEL_103:
  LODWORD(v89) = 1; /*0x100b01036*/
  v98[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(__dsta, v46); /*0x100b01045*/
  LODWORD(v98[1]) = v78; /*0x100b0104c*/
  std::time::SystemTime::duration_since::had059553cab94f96(v90, v98, 0, 0); /*0x100b01064*/
  if ( LOBYTE(v90[0]) ) /*0x100b01070*/
    v79 = 0; /*0x100b0107b*/
  else
    v79 = v90[1]; /*0x100b01072*/
  v88 = v79; /*0x100b0107d*/
  codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(&v85); /*0x100b0108b*/
  codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v90, v102, &v85); /*0x100b010a5*/
  if ( LODWORD(v90[0]) != 11 ) /*0x100b010b1*/
  {
    qmemcpy(__dst + 1, v90, 0x60u); /*0x100b01246*/
    v10 = &v90[12]; /*0x100b01246*/
    *__dst = 0x8000000000000000LL; /*0x100b01253*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceVocabularyEntry$GT$::h34eaa804dcf1652a(__dsta); /*0x100b0125d*/
    if ( !v45 ) /*0x100b01265*/
    {
LABEL_76:
      v11 = 0; /*0x100b00d8c*/
      v9 = &v85; /*0x100b00d8f*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v85); /*0x100b00d96*/
LABEL_77:
      if ( (v114 & 1) == 0 /*0x100b01270*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v9,
                               v10,
                               v8,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v110 + 8) = 1; /*0x100b01281*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v110); /*0x100b00dc8*/
LABEL_80:
      v67 = a3[6]; /*0x100b00dcd*/
      if ( v67 != 0x8000000000000000LL && v67 ) /*0x100b00de3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[7], v67, 1); /*0x100b00dee*/
      if ( *a3 ) /*0x100b00df3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], *a3, 1); /*0x100b00e04*/
      v68 = a3[3]; /*0x100b00e09*/
      if ( v68 ) /*0x100b00e10*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[4], v68, 1); /*0x100b00e1b*/
      if ( v11 ) /*0x100b00e23*/
      {
        v69 = a3[9]; /*0x100b00e25*/
        if ( v69 != 0x8000000000000000LL && v69 ) /*0x100b00e3b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[10], v69, 1); /*0x100b00e46*/
        v70 = a3[12]; /*0x100b00e4b*/
        if ( v70 != 0x8000000000000000LL ) /*0x100b00e5c*/
        {
          if ( v70 ) /*0x100b00e61*/
          {
            v71 = a3[13]; /*0x100b00e63*/
LABEL_94:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v70, 1); /*0x100b00e67*/
            goto LABEL_95; /*0x100b00e6c*/
          }
        }
      }
      goto LABEL_95; /*0x100b00e61*/
    }
LABEL_67:
    if ( 2 * v103 ) /*0x100b00d07*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v103, 1); /*0x100b00d35*/
      v66 = v99; /*0x100b00d3a*/
      if ( v99 == 0x8000000000000000LL ) /*0x100b00d4e*/
      {
LABEL_73:
        v10 = (__int64 *)v106; /*0x100b00d66*/
        if ( v106 != 0x8000000000000000LL && v106 ) /*0x100b00d7c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v106, 1); /*0x100b00d87*/
        goto LABEL_76; /*0x100b00d87*/
      }
    }
    else
    {
      v66 = v99; /*0x100b00d14*/
      if ( v99 == 0x8000000000000000LL ) /*0x100b00d28*/
        goto LABEL_73; /*0x100b00d28*/
    }
    if ( v66 ) /*0x100b00d53*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v66, 1); /*0x100b00d61*/
    goto LABEL_73; /*0x100b00d61*/
  }
  codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47( /*0x100b010da*/
    v98,
    *(_QWORD *)(v102 + 536),
    *(_QWORD *)(v102 + 544),
    (__int64)&v85);
  memcpy(&v90[16], __dsta, 0xA0u); /*0x100b010f2*/
  qmemcpy(v90, v98, 0x80u); /*0x100b0110d*/
  v80 = v90; /*0x100b01118*/
  memcpy(__dst, v90, 0x120u); /*0x100b0111b*/
  if ( v45 ) /*0x100b01123*/
  {
    if ( v103 != 0x8000000000000000LL && v103 ) /*0x100b0113e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v103, 1); /*0x100b01149*/
    if ( v99 != 0x8000000000000000LL && v99 ) /*0x100b01167*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v99, 1); /*0x100b01175*/
    v80 = (__int64 *)v106; /*0x100b0117a*/
    if ( v106 != 0x8000000000000000LL && v106 ) /*0x100b01190*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v106, 1); /*0x100b0119b*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v85); /*0x100b011aa*/
  if ( (v114 & 1) == 0 /*0x100b012cd*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           &v85,
                           v80,
                           v81,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v110 + 8) = 1; /*0x100b012de*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v110); /*0x100b011df*/
  v82 = *v36; /*0x100b011e4*/
  if ( *v36 != 0x8000000000000000LL && v82 ) /*0x100b011fa*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[7], v82, 1); /*0x100b01205*/
  if ( *a3 ) /*0x100b0120a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], *a3, 1); /*0x100b0121b*/
  v70 = a3[3]; /*0x100b01220*/
  if ( v70 ) /*0x100b01227*/
  {
    v71 = a3[4]; /*0x100b0122d*/
    goto LABEL_94; /*0x100b01231*/
  }
LABEL_95:
  v72 = a3[15]; /*0x100b00e71*/
  if ( v72 != 0x8000000000000000LL && v72 ) /*0x100b00e87*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[16], v72, 1); /*0x100b00e95*/
  return __dst; /*0x100b00e9d*/
}