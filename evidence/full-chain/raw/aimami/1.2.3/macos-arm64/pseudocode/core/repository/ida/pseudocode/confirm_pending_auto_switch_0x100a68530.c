// __ZN13codexmate_lib4core10repository10Repository27confirm_pending_auto_switch @ 0x100a68530 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::h2b185c86ff3a49b4(
        _QWORD *a1,
        __int64 *a2,
        double a3,
        double a4,
        double a5)
{
  __int64 *v5; // r12
  void *v7; // rax
  double v8; // xmm0_8
  __int64 v9; // rsi
  void *v10; // r14
  void *v11; // r15
  __int64 v12; // r14
  __int64 v13; // r14
  void *v14; // rax
  void *v15; // r15
  void *v16; // rax
  void *v17; // r15
  __int64 v18; // rax
  void *v19; // r14
  void *v20; // r15
  __int64 v21; // rax
  void *v22; // rax
  void *v23; // r15
  __int64 v24; // rax
  void *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r14
  void *v30; // rax
  void *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // rax
  char v35; // r15
  char *v37; // rdi
  char v38; // r15
  __int64 v39; // r14
  void *v40; // rax
  void *v41; // rax
  void *v42; // r15
  __int64 v43; // rax
  __int64 v44; // [rsp+28h] [rbp-D38h] BYREF
  _BYTE v45[96]; // [rsp+30h] [rbp-D30h] BYREF
  void *v46[121]; // [rsp+90h] [rbp-CD0h] BYREF
  __int64 v47; // [rsp+458h] [rbp-908h] BYREF
  __int128 v48; // [rsp+460h] [rbp-900h]
  __int64 v49; // [rsp+470h] [rbp-8F0h]
  __int64 v50; // [rsp+478h] [rbp-8E8h]
  __int64 v51; // [rsp+480h] [rbp-8E0h]
  __int64 v52; // [rsp+488h] [rbp-8D8h]
  __int64 v53; // [rsp+490h] [rbp-8D0h]
  __int64 v54; // [rsp+498h] [rbp-8C8h]
  __int64 v55; // [rsp+4A0h] [rbp-8C0h]
  __int64 v56; // [rsp+4A8h] [rbp-8B8h]
  __int64 v57; // [rsp+4B0h] [rbp-8B0h]
  __int64 v58; // [rsp+4B8h] [rbp-8A8h]
  void *__dst[78]; // [rsp+4C0h] [rbp-8A0h] BYREF
  _BYTE v60[1072]; // [rsp+730h] [rbp-630h] BYREF
  _QWORD v61[22]; // [rsp+B60h] [rbp-200h] BYREF
  _QWORD v62[12]; // [rsp+C10h] [rbp-150h] BYREF
  _QWORD v63[3]; // [rsp+C70h] [rbp-F0h] BYREF
  _QWORD v64[3]; // [rsp+C88h] [rbp-D8h] BYREF
  _QWORD v65[3]; // [rsp+CA0h] [rbp-C0h] BYREF
  _QWORD v66[3]; // [rsp+CB8h] [rbp-A8h] BYREF
  _QWORD v67[2]; // [rsp+CD0h] [rbp-90h] BYREF
  __int64 v68; // [rsp+CE0h] [rbp-80h] BYREF
  __int64 v69; // [rsp+CE8h] [rbp-78h]
  void *v70; // [rsp+D00h] [rbp-60h]
  signed __int64 v71; // [rsp+D08h] [rbp-58h] BYREF
  __int64 v72; // [rsp+D10h] [rbp-50h]
  char *v73; // [rsp+D20h] [rbp-40h]
  size_t v74; // [rsp+D28h] [rbp-38h]
  __int64 v75; // [rsp+D30h] [rbp-30h]

  v5 = a2; /*0x100a68544*/
  codexmate_lib::core::repository::Repository::load_pending_auto_switch::h6842d236c81b2905(v60, (__int64)a2); /*0x100a68551*/
  if ( *(_QWORD *)v60 != 2 ) /*0x100a68561*/
  {
    v51 = *(_QWORD *)&v60[40]; /*0x100a685f4*/
    v52 = *(_QWORD *)&v60[48]; /*0x100a68602*/
    v53 = *(_QWORD *)&v60[56]; /*0x100a68610*/
    v54 = *(_QWORD *)&v60[64]; /*0x100a6861e*/
    v55 = *(_QWORD *)&v60[72]; /*0x100a6862c*/
    v56 = *(_QWORD *)&v60[80]; /*0x100a6863a*/
    v57 = *(_QWORD *)&v60[88]; /*0x100a68648*/
    v58 = *(_QWORD *)&v60[96]; /*0x100a68656*/
    memcpy(__dst, &v60[104], sizeof(__dst)); /*0x100a68670*/
    v8 = *(double *)&v60[8]; /*0x100a68675*/
    v47 = *(_QWORD *)v60; /*0x100a6867c*/
    v48 = *(_OWORD *)&v60[8]; /*0x100a68683*/
    v49 = *(_QWORD *)&v60[24]; /*0x100a6868a*/
    v50 = *(_QWORD *)&v60[32]; /*0x100a68691*/
    codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(v60, a2); /*0x100a686a5*/
    qmemcpy(v61, &v60[8], 0x60u); /*0x100a686c4*/
    if ( *(_QWORD *)v60 == 2 ) /*0x100a686cb*/
    {
      qmemcpy(a1 + 1, v61, 0x60u); /*0x100a686dd*/
      v9 = (__int64)&v61[12]; /*0x100a686dd*/
      *a1 = 2; /*0x100a686e0*/
LABEL_49:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(&v47, v9); /*0x100a68e6c*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(&__dst[31], v9); /*0x100a68e7f*/
      return a1; /*0x100a68e7f*/
    }
    memcpy(v46, &v60[104], sizeof(v46)); /*0x100a686ff*/
    qmemcpy(v45, v61, sizeof(v45)); /*0x100a68717*/
    v44 = *(_QWORD *)v60; /*0x100a6871a*/
    if ( LODWORD(v46[6]) == 2 /*0x100a6874e*/
      || (v10 = v46[31], v46[31] != __dst[12])
      || (v11 = __dst[11], memcmp(v46[30], __dst[11], (size_t)v46[31])) )
    {
      codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request_if_current::hdb169447adbd04ff( /*0x100a6876c*/
        v60,
        (__int64)a2,
        (__int64)&v47);
      v12 = *(_QWORD *)v60; /*0x100a68771*/
      if ( *(_QWORD *)v60 == 11 ) /*0x100a6877c*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, a2); /*0x100a68782*/
        v13 = 73; /*0x100a68787*/
        v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(73, 1); /*0x100a68797*/
        if ( v14 ) /*0x100a6879f*/
        {
          v15 = v14; /*0x100a687a5*/
          v9 = (__int64)"The automatic switch request is stale because the active account changed."; /*0x100a687a8*/
          memcpy(v14, "The automatic switch request is stale because the active account changed.", 0x49u); /*0x100a687b7*/
          a1[1] = 10; /*0x100a687bc*/
          a1[2] = 73; /*0x100a687c4*/
          a1[3] = v15; /*0x100a687cc*/
          a1[4] = 73; /*0x100a687d0*/
LABEL_47:
          *a1 = 2; /*0x100a68e59*/
          goto LABEL_48; /*0x100a68e59*/
        }
        goto LABEL_76; /*0x100a6879f*/
      }
LABEL_46:
      v35 = v60[8]; /*0x100a68e34*/
      v9 = (__int64)&v60[9]; /*0x100a68e3c*/
      memcpy((char *)a1 + 17, &v60[9], 0x57u); /*0x100a68e4c*/
      a1[1] = v12; /*0x100a68e51*/
      *((_BYTE *)a1 + 16) = v35; /*0x100a68e55*/
      goto LABEL_47; /*0x100a68e55*/
    }
    if ( LOBYTE(v46[80]) == 2 /*0x100a68928*/
      || ((__int64)v46[80] & 1) == 0
      || (v70 = v46[78], v46[78] != __dst[76])
      || !BYTE2(v46[48])
      || (LODWORD(v46[16]) == 2 || SLODWORD(v46[20]) > SLODWORD(v46[79]))
      && (LODWORD(v46[21]) == 2 || SLODWORD(v46[25]) > SHIDWORD(v46[79]))
      || (v73 = (char *)v46[89],
          v75 = (__int64)v46[90],
          (v18 = codexmate_lib::core::repository::select_rotation_candidate::hfc64782647f30fde(
                   v46[89],
                   v46[90],
                   v11,
                   v10,
                   &v46[78],
                   0,
                   v8,
                   a4,
                   a5)) == 0)
      || (v19 = *(void **)(v18 + 200), v19 != __dst[56])
      || (v20 = __dst[55], memcmp(*(const void **)(v18 + 192), __dst[55], *(_QWORD *)(v18 + 200))) )
    {
      codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request_if_current::hdb169447adbd04ff( /*0x100a687f7*/
        v61,
        (__int64)a2,
        (__int64)&v47);
      if ( LODWORD(v61[0]) == 11 ) /*0x100a68803*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, a2); /*0x100a68809*/
        v13 = 78; /*0x100a6880e*/
        v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(78, 1); /*0x100a6881e*/
        if ( v16 ) /*0x100a68826*/
        {
          v17 = v16; /*0x100a6882c*/
          v9 = (__int64)"The automatic switch request no longer matches the current settings or quotas.The automatic switch request is stale because the active account changed."; /*0x100a6882f*/
          memcpy( /*0x100a6883e*/
            v16,
            "The automatic switch request no longer matches the current settings or quotas.The automatic switch request is stale because the active account changed.",
            0x4Eu);
          a1[1] = 10; /*0x100a68843*/
          a1[2] = 78; /*0x100a6884b*/
          a1[3] = v17; /*0x100a68853*/
          a1[4] = 78; /*0x100a68857*/
          goto LABEL_47; /*0x100a6885f*/
        }
LABEL_76:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13); /*0x100a69265*/
      }
      qmemcpy(v60, v61, 0x60u); /*0x100a68a14*/
      v62[0] = v60; /*0x100a68a17*/
      v62[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a68a25*/
      v9 = (__int64)&unk_1017C96D6; /*0x100a68a2c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v66, &unk_1017C96D6, v62); /*0x100a68a41*/
      a1[4] = v66[2]; /*0x100a68a4d*/
      v24 = v66[0]; /*0x100a68a51*/
      a1[3] = v66[1]; /*0x100a68a5f*/
      a1[2] = v24; /*0x100a68a63*/
      a1[1] = 10; /*0x100a68a67*/
      *a1 = 2; /*0x100a68a6f*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v60); /*0x100a68a7d*/
LABEL_48:
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7(&v44); /*0x100a68e60*/
      goto LABEL_49; /*0x100a68e67*/
    }
    *(_QWORD *)v60 = v73; /*0x100a68944*/
    *(_QWORD *)&v60[8] = &v73[352 * v75]; /*0x100a6894b*/
    v21 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hef60bb9dff567a93( /*0x100a6895b*/
            v60,
            v20,
            v19);
    if ( !v21 ) /*0x100a68963*/
    {
      codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request_if_current::hdb169447adbd04ff( /*0x100a68a98*/
        v61,
        (__int64)a2,
        (__int64)&v47);
      if ( LODWORD(v61[0]) == 11 ) /*0x100a68aa4*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, a2); /*0x100a68aaa*/
        v13 = 42; /*0x100a68aaf*/
        v9 = 1; /*0x100a68aba*/
        v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x100a68abf*/
        if ( v25 ) /*0x100a68ac7*/
        {
          qmemcpy(v25, "Candidate account no longer exists locally", 42); /*0x100a68b0f*/
          a1[1] = 8; /*0x100a68b18*/
          a1[2] = 42; /*0x100a68b20*/
          a1[3] = v25; /*0x100a68b28*/
          a1[4] = 42; /*0x100a68b2c*/
          goto LABEL_47; /*0x100a68b34*/
        }
        goto LABEL_76; /*0x100a68ac7*/
      }
      qmemcpy(v60, v61, 0x60u); /*0x100a68c7e*/
      v62[0] = v60; /*0x100a68c81*/
      v62[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a68c8f*/
      v9 = (__int64)&unk_1017C95ED; /*0x100a68c96*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v65, &unk_1017C95ED, v62); /*0x100a68cab*/
      a1[4] = v65[2]; /*0x100a68cb7*/
      v32 = v65[0]; /*0x100a68cbb*/
      a1[3] = v65[1]; /*0x100a68cc9*/
      a1[2] = v32; /*0x100a68ccd*/
      a1[1] = 10; /*0x100a68cd1*/
      *a1 = 2; /*0x100a68cd9*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v60); /*0x100a68ce7*/
      goto LABEL_48; /*0x100a68cec*/
    }
    if ( *(_DWORD *)(v21 + 160) != 2 && (*(_BYTE *)(v21 + 176) & 0xFE) == 2 ) /*0x100a68981*/
    {
      codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request_if_current::hdb169447adbd04ff( /*0x100a68998*/
        v61,
        (__int64)a2,
        (__int64)&v47);
      if ( LODWORD(v61[0]) == 11 ) /*0x100a689a4*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, a2); /*0x100a689aa*/
        v13 = 72; /*0x100a689af*/
        v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72, 1); /*0x100a689bf*/
        if ( v22 ) /*0x100a689c7*/
        {
          v23 = v22; /*0x100a689cd*/
          v9 = (__int64)"Candidate account credentials have expired since the suggestion was madeThe automatic switch request no longer matches the current settings or quotas.The automatic switch request is stale because the active account changed."; /*0x100a689d0*/
          memcpy( /*0x100a689df*/
            v22,
            "Candidate account credentials have expired since the suggestion was madeThe automatic switch request no longer matches the current settings or quotas.The automatic switch request is stale because the active account changed.",
            0x48u);
          a1[1] = 10; /*0x100a689e4*/
          a1[2] = 72; /*0x100a689ec*/
          a1[3] = v23; /*0x100a689f4*/
          a1[4] = 72; /*0x100a689f8*/
          goto LABEL_47; /*0x100a68a00*/
        }
        goto LABEL_76; /*0x100a689c7*/
      }
      qmemcpy(v60, v61, 0x60u); /*0x100a68d00*/
      v62[0] = v60; /*0x100a68d03*/
      v62[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a68d11*/
      v9 = (__int64)&unk_1017C9689; /*0x100a68d18*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v64, &unk_1017C9689, v62); /*0x100a68d2d*/
      a1[4] = v64[2]; /*0x100a68d39*/
      v33 = v64[0]; /*0x100a68d3d*/
      a1[3] = v64[1]; /*0x100a68d4b*/
      a1[2] = v33; /*0x100a68d4f*/
      a1[1] = 10; /*0x100a68d53*/
      *a1 = 2; /*0x100a68d5b*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v60); /*0x100a68d69*/
      goto LABEL_48; /*0x100a68d6e*/
    }
    v61[0] = v46[73]; /*0x100a68b4e*/
    v61[1] = (char *)v46[73] + 424 * (__int64)v46[74]; /*0x100a68b55*/
    v26 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h256c129994be08e2( /*0x100a68b69*/
            v61,
            v20,
            v19);
    if ( !v26 ) /*0x100a68b71*/
    {
      codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request_if_current::hdb169447adbd04ff( /*0x100a68d84*/
        v60,
        (__int64)a2,
        (__int64)&v47);
      v12 = *(_QWORD *)v60; /*0x100a68d89*/
      if ( *(_QWORD *)v60 == 11 ) /*0x100a68d94*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, a2); /*0x100a68d9a*/
        v13 = 50; /*0x100a68d9f*/
        v9 = 1; /*0x100a68daa*/
        v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(50, 1); /*0x100a68daf*/
        if ( v34 ) /*0x100a68db7*/
        {
          qmemcpy(v34, "Candidate account snapshot is no longer registered", 50); /*0x100a68e0d*/
          a1[1] = 8; /*0x100a68e16*/
          a1[2] = 50; /*0x100a68e1e*/
          a1[3] = v34; /*0x100a68e26*/
          a1[4] = 50; /*0x100a68e2a*/
          goto LABEL_47; /*0x100a68e32*/
        }
        goto LABEL_76; /*0x100a68db7*/
      }
      goto LABEL_46; /*0x100a68d94*/
    }
    codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::_$u7b$$u7b$closure$u7d$$u7d$::hbb0f7df2484972fe( /*0x100a68b8c*/
      (signed __int64 *)v60,
      *(const void **)(v26 + 224),
      *(_QWORD *)(v26 + 232));
    v75 = *(_QWORD *)v60; /*0x100a68b98*/
    v27 = a2[31]; /*0x100a68baa*/
    v28 = a2[32]; /*0x100a68bb2*/
    v73 = *(char **)&v60[8]; /*0x100a68bc5*/
    v74 = *(_QWORD *)&v60[16]; /*0x100a68bc9*/
    codexmate_lib::core::repository::load_refreshable_account_auth::h454e81b51b38cf4c( /*0x100a68bd0*/
      v60,
      *(void **)&v60[8],
      *(size_t *)&v60[16],
      v27,
      v28,
      v20,
      (size_t)v19);
    if ( *(_QWORD *)v60 == 0x8000000000000001LL ) /*0x100a68be6*/
    {
      codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request_if_current::hdb169447adbd04ff( /*0x100a68bfd*/
        v60,
        (__int64)a2,
        (__int64)&v47);
      v29 = *(_QWORD *)v60; /*0x100a68c02*/
      if ( *(_QWORD *)v60 == 11 ) /*0x100a68c0d*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, a2); /*0x100a68c13*/
        v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(88, 1); /*0x100a68c22*/
        if ( !v30 ) /*0x100a68c2a*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 88); /*0x100a6928d*/
        v31 = v30; /*0x100a68c30*/
        memcpy( /*0x100a68c42*/
          v30,
          "Candidate account snapshot is missing, unsafe, unreadable, or belongs to another accountCandidate account credentials have expired since the suggestion was madeThe automatic switch request no longer matches the current settings or quotas.The automatic switch request is stale because the active account changed.",
          0x58u);
        a1[1] = 9; /*0x100a68c47*/
        a1[2] = 88; /*0x100a68c4f*/
        a1[3] = v31; /*0x100a68c57*/
        a1[4] = 88; /*0x100a68c5b*/
        *a1 = 2; /*0x100a68c63*/
      }
      else
      {
        v38 = v60[8]; /*0x100a69008*/
        memcpy((char *)a1 + 17, &v60[9], 0x57u); /*0x100a69020*/
        a1[1] = v29; /*0x100a69025*/
        *((_BYTE *)a1 + 16) = v38; /*0x100a69029*/
        *a1 = 2; /*0x100a6902d*/
      }
LABEL_72:
      v9 = v75; /*0x100a69236*/
      if ( !v75 ) /*0x100a6923d*/
        goto LABEL_48; /*0x100a6923d*/
      v37 = v73; /*0x100a69248*/
LABEL_74:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v9, 1); /*0x100a6924c*/
      goto LABEL_48; /*0x100a69251*/
    }
    memcpy(v61, v60, sizeof(v61)); /*0x100a68eac*/
    codexmate_lib::core::repository::Repository::api_proxy_config::hda00ad3920525b25(&v68, (__int64)a2); /*0x100a68eb8*/
    codexmate_lib::core::oauth_refresh::refresh_token_with_policy::h554e0eb1f76208d0( /*0x100a68f04*/
      &v71,
      v73,
      v74,
      v61,
      (__int64)&v68,
      a2[25],
      a2[26],
      (void *)a2[4],
      a2[5],
      0);
    codexmate_lib::core::repository::log_token_refresh_outcome::h6593a802355651d2("pending_auto_switch", 19, &v71); /*0x100a68f19*/
    v74 = v71; /*0x100a68f25*/
    if ( v71 >= (__int64)0x8000000000000002LL ) /*0x100a68f2c*/
    {
      codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request_if_current::hdb169447adbd04ff( /*0x100a6904a*/
        v62,
        (__int64)a2,
        (__int64)&v47);
      if ( LODWORD(v62[0]) != 11 ) /*0x100a69056*/
      {
        qmemcpy(v60, v62, 0x60u); /*0x100a69190*/
        v67[0] = v60; /*0x100a69193*/
        v67[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a691a1*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v63, &unk_1017C963F, v67); /*0x100a691bd*/
        a1[4] = v63[2]; /*0x100a691c9*/
        v43 = v63[0]; /*0x100a691cd*/
        a1[3] = v63[1]; /*0x100a691db*/
        a1[2] = v43; /*0x100a691df*/
        a1[1] = 10; /*0x100a691e3*/
        *a1 = 2; /*0x100a691eb*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v60); /*0x100a691f9*/
        goto LABEL_69; /*0x100a691f9*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, a2); /*0x100a6905c*/
      v39 = 62; /*0x100a69061*/
      v40 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(62, 1); /*0x100a69071*/
      if ( v40 ) /*0x100a69079*/
      {
        qmemcpy(v40, "Candidate token is no longer valid, please try another account", 62); /*0x100a690eb*/
        a1[1] = 10; /*0x100a690ee*/
        a1[2] = 62; /*0x100a690f6*/
        a1[3] = v40; /*0x100a690fe*/
        a1[4] = 62; /*0x100a69102*/
LABEL_67:
        *a1 = 2; /*0x100a6916e*/
LABEL_69:
        core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenRefreshOutcome$GT$::h2a61db83e9800a58( /*0x100a691fe*/
          v74,
          v72);
        if ( 2 * v68 ) /*0x100a6920f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x100a69225*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v61); /*0x100a69231*/
        goto LABEL_72; /*0x100a69231*/
      }
    }
    else
    {
      codexmate_lib::core::repository::Repository::auto_switch_config::hb0e53217ed18b987((__int64)v62, (__int64)a2); /*0x100a68f3c*/
      codexmate_lib::core::repository::Repository::load_pending_auto_switch::h6842d236c81b2905(v60, (__int64)a2); /*0x100a68f4b*/
      if ( *(_DWORD *)v60 == 2 /*0x100a68f6b*/
        || (a2 = &v47,
            !(unsigned __int8)_$LT$codexmate_lib..core..models..PendingAutoSwitchPayload$u20$as$u20$core..cmp..PartialEq$GT$::eq::h79305f4849ee247c(
                                v60,
                                &v47)) )
      {
        core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..PendingAutoSwitchPayload$GT$$GT$::h015598a2929d143c(v60); /*0x100a69113*/
      }
      else
      {
        core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..PendingAutoSwitchPayload$GT$$GT$::h015598a2929d143c(v60); /*0x100a68f7f*/
        if ( LOBYTE(v62[2]) == 1 && (void *)v62[0] == v70 ) /*0x100a68f9c*/
        {
          codexmate_lib::core::repository::Repository::switch_account::h8da8a6a163d67813(a1, v5, v20, (size_t)v19); /*0x100a68fae*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..oauth_refresh..TokenRefreshOutcome$GT$::h2a61db83e9800a58( /*0x100a68fbb*/
            v74,
            v72);
          v9 = v68; /*0x100a68fc0*/
          if ( 2 * v68 ) /*0x100a68fc4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x100a68fda*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v61); /*0x100a68fe6*/
          if ( !v75 ) /*0x100a68ff0*/
            goto LABEL_48; /*0x100a68ff0*/
          v37 = v73; /*0x100a68ffb*/
          v9 = v75; /*0x100a68fff*/
          goto LABEL_74; /*0x100a69003*/
        }
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, a2); /*0x100a69118*/
      v39 = 66; /*0x100a6911d*/
      v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1); /*0x100a6912d*/
      if ( v41 ) /*0x100a69135*/
      {
        v42 = v41; /*0x100a6913b*/
        memcpy( /*0x100a6914d*/
          v41,
          "The automatic switch request changed while it was being confirmed.Candidate account snapshot is missing, unsaf"
          "e, unreadable, or belongs to another accountCandidate account credentials have expired since the suggestion wa"
          "s madeThe automatic switch request no longer matches the current settings or quotas.The automatic switch reque"
          "st is stale because the active account changed.",
          0x42u);
        a1[1] = 10; /*0x100a69152*/
        a1[2] = 66; /*0x100a6915a*/
        a1[3] = v42; /*0x100a69162*/
        a1[4] = 66; /*0x100a69166*/
        goto LABEL_67; /*0x100a69166*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v39); /*0x100a6927c*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, a2); /*0x100a68563*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100a68572*/
  if ( !v7 ) /*0x100a6857a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x100a69260*/
  qmemcpy(v7, "No pending auto-switch request", 30); /*0x100a685b4*/
  a1[1] = 8; /*0x100a685b7*/
  a1[2] = 30; /*0x100a685bf*/
  a1[3] = v7; /*0x100a685c7*/
  a1[4] = 30; /*0x100a685cb*/
  *a1 = 2; /*0x100a685d3*/
  return a1; /*0x100a68e87*/
}