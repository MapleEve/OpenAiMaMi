// __ZN13codexmate_lib4core16account_metadata27fetch_subscription_metadata @ 0x10024eea0
_QWORD *__fastcall codexmate_lib::core::account_metadata::fetch_subscription_metadata::h596dc23d37c0ec18(
        _QWORD *a1,
        __int64 a2,
        size_t a3)
{
  __int64 *v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  size_t v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // r13
  const void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  const void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // rdx
  char v22; // al
  bool v23; // zf
  char v24; // al
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rcx
  __int16 v28; // dx
  _QWORD *v29; // rsi
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r13
  size_t v37; // rdx
  int v38; // eax
  char v39; // cl
  __int64 *v40; // rdx
  _QWORD *v41; // rax
  __int64 *v42; // rdi
  int v43; // edx
  _QWORD *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  char v47; // r8
  char v48; // si
  _QWORD *v49; // rdi
  __int64 v50; // rcx
  __int64 *v51; // rsi
  char *v52; // r10
  _BYTE *v53; // rbx
  char *v54; // r11
  size_t v55; // rdx
  char v56; // al
  char v57; // al
  __int64 *v58; // r9
  _QWORD *v59; // r10
  _QWORD v60[12]; // [rsp+0h] [rbp-240h] BYREF
  _QWORD v61[2]; // [rsp+60h] [rbp-1E0h] BYREF
  __int64 v62; // [rsp+70h] [rbp-1D0h]
  __int64 v63; // [rsp+78h] [rbp-1C8h]
  __int64 v64; // [rsp+80h] [rbp-1C0h]
  __int64 v65; // [rsp+88h] [rbp-1B8h]
  __int64 v66; // [rsp+90h] [rbp-1B0h]
  __int64 v67; // [rsp+98h] [rbp-1A8h]
  __int64 v68; // [rsp+A0h] [rbp-1A0h]
  __int64 v69; // [rsp+A8h] [rbp-198h]
  __int64 v70; // [rsp+B0h] [rbp-190h]
  __int64 v71; // [rsp+B8h] [rbp-188h]
  __int64 v72; // [rsp+C0h] [rbp-180h]
  _QWORD v73[12]; // [rsp+C8h] [rbp-178h] BYREF
  _QWORD v74[12]; // [rsp+128h] [rbp-118h] BYREF
  __int64 v75; // [rsp+188h] [rbp-B8h]
  __int64 v76; // [rsp+190h] [rbp-B0h]
  __int64 v77; // [rsp+198h] [rbp-A8h] BYREF
  _QWORD v78[2]; // [rsp+1A0h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+1B0h] [rbp-90h] BYREF
  __int64 v80; // [rsp+1B8h] [rbp-88h] BYREF
  __int64 v81; // [rsp+1C0h] [rbp-80h]
  __int64 v82; // [rsp+1C8h] [rbp-78h] BYREF
  __int64 v83; // [rsp+1D0h] [rbp-70h]
  __int64 v84; // [rsp+1D8h] [rbp-68h]
  __int64 v85; // [rsp+1E0h] [rbp-60h]
  __int64 v86; // [rsp+1E8h] [rbp-58h]
  int v87; // [rsp+1F0h] [rbp-50h]
  char v88; // [rsp+1F4h] [rbp-4Ch]
  __int64 v89; // [rsp+1F8h] [rbp-48h]
  _QWORD *v90; // [rsp+200h] [rbp-40h]
  size_t __n; // [rsp+208h] [rbp-38h]
  void *__s2; // [rsp+210h] [rbp-30h]

  v6 = a2; /*0x10024eeb7*/
  v90 = a1; /*0x10024eeba*/
  __n = a3; /*0x10024eed4*/
  v7 = codexmate_lib::core::account_metadata::fetch_json::h0f198d6016886ca2( /*0x10024eede*/
         (__int64)v73,
         (__int64)&unk_1015DD17C,
         45,
         a2,
         a3,
         1);
  if ( LODWORD(v73[0]) == 11 ) /*0x10024eeea*/
  {
    v85 = v73[4]; /*0x10024eef3*/
    v84 = v73[3]; /*0x10024eefe*/
    LOBYTE(v4) = v73[1]; /*0x10024ef02*/
    v83 = v73[2]; /*0x10024ef10*/
    v82 = v73[1]; /*0x10024ef14*/
    __s2 = *(void **)(a2 + 32); /*0x10024ef1c*/
    v81 = a2; /*0x10024ef20*/
    v8 = *(_QWORD *)(a2 + 40); /*0x10024ef24*/
    if ( LOBYTE(v73[1]) == 4 ) /*0x10024ef2c*/
    {
      v9 = &v82; /*0x10024ef2e*/
LABEL_9:
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h6c7023f5a49f9681( /*0x10024ef9a*/
        v61,
        v9[2],
        v9[2] + 32 * v9[3]);
      v10 = (__int64 *)v61[1]; /*0x10024efb5*/
      if ( v62 ) /*0x10024efc6*/
      {
        v86 = v62; /*0x10024efcc*/
        v4 = 8 * v62; /*0x10024efd0*/
        v5 = 0; /*0x10024efd8*/
        while ( 1 ) /*0x10024efed*/
        {
          v3 = *(__int64 **)((char *)v10 + v5); /*0x10024efed*/
          v11 = (const void *)codexmate_lib::core::account_metadata::subscription_account_id::h5ebd39dd2fc4bd2f((__int64)v3); /*0x10024eff5*/
          if ( v11 != nullptr && v12 == v8 && !memcmp(v11, __s2, v8) ) /*0x10024f017*/
            break; /*0x10024f017*/
          v5 += 8; /*0x10024efe0*/
          if ( v4 == v5 ) /*0x10024efe7*/
          {
            if ( v86 != 1 || codexmate_lib::core::account_metadata::subscription_account_id::h5ebd39dd2fc4bd2f(*v10) ) /*0x10024f1be*/
              goto LABEL_42; /*0x10024f1c6*/
            v3 = (__int64 *)*v10; /*0x10024f894*/
            v13 = v61[0]; /*0x10024f898*/
            if ( !v61[0] ) /*0x10024f8a2*/
            {
LABEL_16:
              LOBYTE(v4) = *(_BYTE *)v3; /*0x10024f03d*/
              goto LABEL_21; /*0x10024f042*/
            }
LABEL_15:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 8 * v13, 8); /*0x10024f02c*/
            goto LABEL_16; /*0x10024f038*/
          }
        }
        v13 = v61[0]; /*0x10024f020*/
        if ( !v61[0] ) /*0x10024f02a*/
          goto LABEL_16; /*0x10024f02a*/
        goto LABEL_15; /*0x10024f02a*/
      }
LABEL_42:
      if ( v61[0] ) /*0x10024f1d6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 8LL * v61[0], 8); /*0x10024f1e4*/
      goto LABEL_44; /*0x10024f1e4*/
    }
    v9 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10024ef83*/
                      &unk_1015DD013,
                      13,
                      &v82);
    if ( v9 && *(_BYTE *)v9 == 4 ) /*0x10024ef94*/
      goto LABEL_9; /*0x10024ef94*/
    v3 = &v82; /*0x10024f050*/
    v14 = (const void *)codexmate_lib::core::account_metadata::subscription_account_id::h5ebd39dd2fc4bd2f((__int64)&v82); /*0x10024f057*/
    if ( !v14 || (v16 = 2, v15 == v8) && !memcmp(v14, __s2, v8) ) /*0x10024f07a*/
    {
LABEL_21:
      if ( (_BYTE)v4 != 5 ) /*0x10024f08b*/
        goto LABEL_44; /*0x10024f08b*/
      v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10024f0a0*/
              &unk_1015DCFB2,
              9,
              v3);
      if ( !v17 /*0x10024f0c1*/
        || *(_BYTE *)v17 != 3
        || (LOBYTE(v4) = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(
                           *(_QWORD *)(v17 + 16),
                           *(_QWORD *)(v17 + 24)),
            (_BYTE)v4 == 8) )
      {
        v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10024f0d2*/
                "plannonehosttoolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
                4,
                v3);
        if ( !v18 /*0x10024f0f3*/
          || *(_BYTE *)v18 != 3
          || (LOBYTE(v4) = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(
                             *(_QWORD *)(v18 + 16),
                             *(_QWORD *)(v18 + 24)),
              (_BYTE)v4 == 8) )
        {
          v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10024f104*/
                  &unk_1015DCFBB,
                  3,
                  v3);
          if ( !v19 /*0x10024f125*/
            || *(_BYTE *)v19 != 3
            || (LOBYTE(v4) = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(
                               *(_QWORD *)(v19 + 16),
                               *(_QWORD *)(v19 + 24)),
                (_BYTE)v4 == 8) )
          {
            LOBYTE(v4) = 8; /*0x10024f127*/
          }
        }
      }
      v20 = codexmate_lib::core::account_metadata::timestamp_at::h176b86e27b6b7357((__int64)v3, (__int64)&off_10195D380); /*0x10024f134*/
      __s2 = v21; /*0x10024f139*/
      v16 = v20; /*0x10024f13d*/
      LOBYTE(v8) = codexmate_lib::core::account_metadata::bool_at::hfd041bb751a2046b(v3, &off_10195D3B0, 2); /*0x10024f154*/
      if ( (_BYTE)v8 == 2 ) /*0x10024f158*/
      {
        v22 = codexmate_lib::core::account_metadata::bool_at::hfd041bb751a2046b(v3, &off_10195D3D0, 2); /*0x10024f169*/
        v23 = v22 == 2; /*0x10024f173*/
        v24 = v22 ^ 1; /*0x10024f175*/
        LOBYTE(v8) = 2; /*0x10024f178*/
        if ( !v23 ) /*0x10024f17d*/
          LOBYTE(v8) = v24; /*0x10024f17d*/
      }
      LOBYTE(v5) = codexmate_lib::core::account_metadata::infer_active_subscription::h655272301867166e( /*0x10024f18f*/
                     (__int64)v3,
                     v16,
                     (__int64)__s2);
      if ( (_BYTE)v4 != 8 ) /*0x10024f196*/
      {
        v3 = (__int64 *)__s2; /*0x10024f8f2*/
        goto LABEL_45; /*0x10024f8f6*/
      }
      v3 = (__int64 *)__s2; /*0x10024f1a0*/
      if ( v16 != 1 && (_BYTE)v8 == 2 && (_BYTE)v5 == 2 ) /*0x10024f1af*/
LABEL_44:
        v16 = 2; /*0x10024f1e9*/
    }
LABEL_45:
    v25 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v82); /*0x10024f1ef*/
    v60[1] = v16; /*0x10024f1f8*/
    v60[2] = v3; /*0x10024f1ff*/
    LOBYTE(v60[3]) = v8; /*0x10024f206*/
    BYTE1(v60[3]) = v5; /*0x10024f20c*/
    BYTE2(v60[3]) = v4; /*0x10024f213*/
    v60[0] = 11; /*0x10024f21a*/
    v6 = v81; /*0x10024f225*/
    LOBYTE(v25) = 1; /*0x10024f229*/
    LODWORD(v86) = v25; /*0x10024f22b*/
    if ( v16 == 1 ) /*0x10024f232*/
      goto LABEL_46; /*0x10024f232*/
    goto LABEL_47; /*0x10024f232*/
  }
  qmemcpy(v60, v73, sizeof(v60)); /*0x10024ef47*/
  if ( v60[0] == 11 ) /*0x10024ef52*/
  {
    LOBYTE(v7) = 1; /*0x10024ef5f*/
    LODWORD(v86) = v7; /*0x10024ef61*/
    if ( v60[1] == 1 ) /*0x10024ef68*/
    {
LABEL_46:
      v26 = BYTE2(v60[3]); /*0x10024f234*/
      v27 = v60[2]; /*0x10024f23b*/
      v28 = v60[3]; /*0x10024f242*/
      v29 = v90; /*0x10024f249*/
      v90[1] = 1; /*0x10024f24d*/
      v29[2] = v27; /*0x10024f255*/
      *((_WORD *)v29 + 12) = v28; /*0x10024f259*/
      *((_BYTE *)v29 + 26) = v26; /*0x10024f25d*/
      *v29 = 11; /*0x10024f263*/
      return v29; /*0x10024f26a*/
    }
  }
  else
  {
    LODWORD(v86) = 0; /*0x10024f044*/
  }
LABEL_47:
  codexmate_lib::core::account_metadata::fetch_json::h0f198d6016886ca2( /*0x10024f26f*/
    (__int64)v73,
    (__int64)&unk_1015DD1A9,
    60,
    v6,
    __n,
    0);
  v81 = v73[0]; /*0x10024f2a2*/
  if ( v73[0] == 11 ) /*0x10024f2aa*/
  {
    v85 = v73[4]; /*0x10024f2b4*/
    v84 = v73[3]; /*0x10024f2bc*/
    v83 = v73[2]; /*0x10024f2c7*/
    v82 = v73[1]; /*0x10024f2cb*/
    __s2 = *(void **)(v6 + 32); /*0x10024f2d3*/
    __n = *(_QWORD *)(v6 + 40); /*0x10024f2db*/
    v32 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10024f2ef*/
            "accountstrailersno-cacheidentityusernamepasswordfragmentif-matchif-rangelocationNoParentUnixTimeContinueexpectedsegmentsoriginalBorrowed",
            8,
            &v82);
    if ( v32 && *(_BYTE *)v32 == 5 && (v33 = *(_QWORD *)(v32 + 8)) != 0 ) /*0x10024f30d*/
    {
      v89 = 2; /*0x10024f318*/
      v75 = *(_QWORD *)(v32 + 16); /*0x10024f320*/
LABEL_52:
      v34 = v33 + 360; /*0x10024f327*/
      v35 = *(unsigned __int16 *)(v33 + 626); /*0x10024f32e*/
      v71 = v33; /*0x10024f335*/
      v3 = (__int64 *)(v33 - 32); /*0x10024f33c*/
      v72 = v35; /*0x10024f340*/
      v5 = 3LL * (unsigned int)(8 * v35); /*0x10024f34e*/
      v36 = -1; /*0x10024f352*/
      do /*0x10024f3ac*/
      {
        if ( !v5 ) /*0x10024f363*/
        {
          v36 = v72; /*0x10024f3ba*/
LABEL_62:
          if ( !v75 ) /*0x10024f3d3*/
            goto LABEL_66; /*0x10024f3d3*/
          --v75; /*0x10024f3d9*/
          v33 = *(_QWORD *)(v71 + 8 * v36 + 632); /*0x10024f3e0*/
          goto LABEL_52; /*0x10024f3e8*/
        }
        v6 = v34 + 24; /*0x10024f365*/
        v37 = *(_QWORD *)(v34 + 16); /*0x10024f36d*/
        v4 = __n - v37; /*0x10024f378*/
        if ( __n < v37 ) /*0x10024f37b*/
          v37 = __n; /*0x10024f37b*/
        v38 = memcmp(__s2, *(const void **)(v34 + 8), v37); /*0x10024f383*/
        if ( v38 ) /*0x10024f38c*/
          v4 = v38; /*0x10024f38c*/
        v39 = (v4 > 0) - (v4 < 0); /*0x10024f399*/
        v3 += 4; /*0x10024f39b*/
        ++v36; /*0x10024f39f*/
        v5 -= 24; /*0x10024f3a2*/
        v34 = v6; /*0x10024f3a6*/
      }
      while ( v39 == 1 ); /*0x10024f3ac*/
      if ( v39 ) /*0x10024f3b3*/
        goto LABEL_62; /*0x10024f3b3*/
      if ( codexmate_lib::core::account_metadata::is_usable_account::h7ea1f4a56bd308a2(v3) ) /*0x10024f6ef*/
      {
        __s2 = (void *)codexmate_lib::core::account_metadata::timestamp_at::h176b86e27b6b7357( /*0x10024f712*/
                         (__int64)v3,
                         (__int64)&off_10195D3F0);
        __n = v55; /*0x10024f716*/
        LOBYTE(v4) = codexmate_lib::core::account_metadata::bool_at::hfd041bb751a2046b(v3, &off_10195D420, 3); /*0x10024f72e*/
        if ( (_BYTE)v4 == 2 ) /*0x10024f733*/
        {
          v56 = codexmate_lib::core::account_metadata::bool_at::hfd041bb751a2046b(v3, &off_10195D450, 2); /*0x10024f744*/
          v23 = v56 == 2; /*0x10024f74e*/
          v57 = v56 ^ 1; /*0x10024f750*/
          LOBYTE(v4) = 2; /*0x10024f753*/
          if ( !v23 ) /*0x10024f759*/
            LOBYTE(v4) = v57; /*0x10024f759*/
        }
        LOBYTE(v5) = codexmate_lib::core::plan_mapping::parse_plan_from_account_entry::h806c03ceb68a3b81(v3); /*0x10024f765*/
        if ( (unsigned __int8)v5 >= 8u ) /*0x10024f76a*/
        {
          LOBYTE(v6) = codexmate_lib::core::account_metadata::infer_active_subscription::h655272301867166e( /*0x10024f8bd*/
                         (__int64)v3,
                         (__int64)__s2,
                         __n);
          if ( __s2 == (void *)1 || ((unsigned __int8)v4 ^ 2 | (unsigned __int8)v6 ^ 2) != 0 ) /*0x10024f8d7*/
          {
            LOBYTE(v5) = 8; /*0x10024f8e2*/
            v89 = (__int64)__s2; /*0x10024f8e5*/
            v3 = (__int64 *)__n; /*0x10024f8e9*/
          }
        }
        else
        {
          LOBYTE(v6) = codexmate_lib::core::account_metadata::infer_active_subscription::h655272301867166e( /*0x10024f780*/
                         (__int64)v3,
                         (__int64)__s2,
                         __n);
          v89 = (__int64)__s2; /*0x10024f786*/
          v3 = (__int64 *)__n; /*0x10024f78a*/
        }
      }
    }
    else
    {
      v89 = 2; /*0x10024f49c*/
    }
LABEL_66:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v73[1]); /*0x10024f4a0*/
    v40 = (__int64 *)v89; /*0x10024f4ac*/
  }
  else
  {
    v40 = (__int64 *)v73[1]; /*0x10024f3ed*/
    v3 = (__int64 *)v73[2]; /*0x10024f3f4*/
    LOBYTE(v4) = v73[3]; /*0x10024f3fb*/
    LOBYTE(v6) = BYTE1(v73[3]); /*0x10024f403*/
    LOBYTE(v5) = BYTE2(v73[3]); /*0x10024f40a*/
    v87 = *(_DWORD *)((char *)&v73[3] + 3); /*0x10024f418*/
    v88 = HIBYTE(v73[3]); /*0x10024f422*/
    v63 = v73[4]; /*0x10024f42c*/
    v64 = v73[5]; /*0x10024f43a*/
    v65 = v73[6]; /*0x10024f448*/
    v66 = v73[7]; /*0x10024f456*/
    v67 = v73[8]; /*0x10024f464*/
    v68 = v73[9]; /*0x10024f472*/
    v69 = v73[10]; /*0x10024f480*/
    v70 = v73[11]; /*0x10024f48e*/
  }
  v41 = v74; /*0x10024f4b0*/
  qmemcpy(v74, v60, sizeof(v74)); /*0x10024f4c6*/
  v73[0] = v81; /*0x10024f4cd*/
  v42 = v40; /*0x10024f4d4*/
  v73[1] = v40; /*0x10024f4d7*/
  v73[2] = v3; /*0x10024f4de*/
  LOBYTE(v73[3]) = v4; /*0x10024f4e5*/
  BYTE1(v73[3]) = v6; /*0x10024f4ec*/
  BYTE2(v73[3]) = v5; /*0x10024f4f2*/
  *(_DWORD *)((char *)&v73[3] + 3) = v87; /*0x10024f4fc*/
  HIBYTE(v73[3]) = v88; /*0x10024f506*/
  v73[4] = v63; /*0x10024f51a*/
  v73[5] = v64; /*0x10024f521*/
  v73[6] = v65; /*0x10024f52f*/
  v73[7] = v66; /*0x10024f53d*/
  v73[8] = v67; /*0x10024f54b*/
  v73[9] = v68; /*0x10024f559*/
  v73[10] = v69; /*0x10024f567*/
  v73[11] = v70; /*0x10024f575*/
  v43 = v74[0]; /*0x10024f57c*/
  if ( v81 != 11 ) /*0x10024f587*/
  {
    if ( LODWORD(v74[0]) == 11 && LODWORD(v74[1]) != 2 ) /*0x10024f5da*/
    {
      v44 = v90; /*0x10024f5e3*/
      v90[3] = v60[3]; /*0x10024f5e7*/
      v45 = v60[1]; /*0x10024f5eb*/
      v44[2] = v60[2]; /*0x10024f5f9*/
      v44[1] = v45; /*0x10024f5fd*/
      *v44 = 11; /*0x10024f601*/
      v41 = v73; /*0x10024f608*/
      goto LABEL_101; /*0x10024f60b*/
    }
    qmemcpy(v90, v73, 0x60u); /*0x10024f620*/
LABEL_100:
    if ( v43 == 11 ) /*0x10024f874*/
      return v90; /*0x10024f874*/
LABEL_101:
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v41); /*0x10024f876*/
    return v90; /*0x10024f879*/
  }
  if ( LODWORD(v74[0]) == 11 ) /*0x10024f58c*/
  {
    v80 = v73[3]; /*0x10024f633*/
    v46 = v73[1]; /*0x10024f63a*/
    v79 = v73[2]; /*0x10024f641*/
    v78[1] = v73[1]; /*0x10024f648*/
    v47 = v60[1]; /*0x10024f64f*/
    v76 = v60[1]; /*0x10024f65d*/
    v77 = v60[2]; /*0x10024f664*/
    v48 = v60[3]; /*0x10024f66b*/
    v78[0] = v60[3]; /*0x10024f672*/
    if ( v73[1] == 2 ) /*0x10024f67d*/
    {
      if ( v60[1] == 2 ) /*0x10024f683*/
      {
        v46 = 2; /*0x10024f689*/
LABEL_99:
        v59 = v90; /*0x10024f83c*/
        v90[1] = v46; /*0x10024f840*/
        v59[2] = v31; /*0x10024f844*/
        *((_BYTE *)v59 + 24) = v48; /*0x10024f848*/
        *((_BYTE *)v59 + 25) = v47; /*0x10024f84c*/
        *((_BYTE *)v59 + 26) = (_BYTE)v42; /*0x10024f850*/
        *(_DWORD *)((char *)v59 + 27) = v82; /*0x10024f857*/
        *((_BYTE *)v59 + 31) = BYTE4(v82); /*0x10024f85f*/
        *v59 = 11; /*0x10024f863*/
        goto LABEL_100; /*0x10024f863*/
      }
      v51 = &v77; /*0x10024f793*/
      v42 = v78; /*0x10024f79a*/
      v52 = (char *)v78 + 1; /*0x10024f7a1*/
      v53 = (char *)v78 + 2; /*0x10024f7a8*/
      v54 = (char *)v78 + 3; /*0x10024f7af*/
      v46 = v60[1]; /*0x10024f7b6*/
    }
    else
    {
      if ( v60[1] != 2 ) /*0x10024f6be*/
      {
        v58 = &v77; /*0x10024f7e7*/
        v48 = v78[0]; /*0x10024f7ee*/
        LOBYTE(v42) = BYTE2(v80); /*0x10024f7f8*/
        if ( BYTE2(v78[0]) != 8 ) /*0x10024f7ff*/
          LOBYTE(v42) = BYTE2(v78[0]); /*0x10024f7ff*/
        if ( (v60[1] & 1) != 0 ) /*0x10024f80d*/
          v46 = 1; /*0x10024f80d*/
        v47 = BYTE1(v78[0]); /*0x10024f811*/
        if ( (v60[1] & 1) == 0 ) /*0x10024f819*/
          v58 = &v79; /*0x10024f819*/
        if ( LOBYTE(v78[0]) == 2 ) /*0x10024f821*/
          v48 = v80; /*0x10024f823*/
        v31 = *v58; /*0x10024f829*/
        if ( BYTE1(v78[0]) == 2 ) /*0x10024f838*/
          v47 = BYTE1(v80); /*0x10024f838*/
        goto LABEL_99; /*0x10024f838*/
      }
      v51 = &v79; /*0x10024f6c4*/
      v42 = &v80; /*0x10024f6cb*/
      v52 = (char *)&v80 + 1; /*0x10024f6d2*/
      v53 = (char *)&v80 + 2; /*0x10024f6d9*/
      v54 = (char *)&v80 + 3; /*0x10024f6e0*/
    }
    v31 = *v51; /*0x10024f7b9*/
    v48 = *(_BYTE *)v42; /*0x10024f7bc*/
    v47 = *v52; /*0x10024f7bf*/
    LOBYTE(v42) = *v53; /*0x10024f7c3*/
    BYTE4(v82) = v54[4]; /*0x10024f7cb*/
    LODWORD(v82) = *(_DWORD *)v54; /*0x10024f7d2*/
    goto LABEL_99; /*0x10024f7d6*/
  }
  if ( v42 != (__int64 *)2 ) /*0x10024f59d*/
  {
    v49 = v90; /*0x10024f697*/
    v90[3] = v73[3]; /*0x10024f69b*/
    v50 = v73[1]; /*0x10024f69f*/
    v49[2] = v73[2]; /*0x10024f6a6*/
    v49[1] = v50; /*0x10024f6aa*/
    *v49 = 11; /*0x10024f6ae*/
    goto LABEL_100; /*0x10024f6b5*/
  }
  qmemcpy(v90, v60, 0x60u); /*0x10024f5b3*/
  return v90; /*0x10024f882*/
}