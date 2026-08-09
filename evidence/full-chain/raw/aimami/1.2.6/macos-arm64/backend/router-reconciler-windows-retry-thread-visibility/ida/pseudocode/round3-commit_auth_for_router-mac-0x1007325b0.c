// round3 (2026-08-07) item1递归展开目标4/4：router_unlock_auth::commit_auth_for_router
// mac addr=0x1007325b0 size=0xe77(3703B) FULL BODY, NO TRUNCATION
// win对应体已确认: 0x140BF4CE0(改名commit_auth_for_router, 'OPENAI_API_KEY'14B字符串+live_auth_state v19==2/4分支错误串长度77B/72B精确匹配)

unsigned __int64 *__fastcall codexmate_lib::core::relay::router_unlock_auth::commit_auth_for_router::hf3f73f5a9c70c848(
        unsigned __int64 *a1,
        _QWORD *a2,
        int a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 *v7; // rdi
  char v8; // r14
  void *v9; // rax
  unsigned __int64 v10; // r14
  __int64 (__fastcall *v11)(); // r15
  unsigned __int64 v12; // r13
  unsigned int v13; // r12d
  _DWORD *v14; // rsi
  _DWORD *v15; // rdi
  __int64 i; // rcx
  __int64 v17; // r15
  __int64 v18; // r12
  char v19; // al
  __int64 v20; // r14
  void *v21; // rax
  unsigned __int64 v22; // r15
  _DWORD *v23; // rdi
  _DWORD *v24; // rsi
  __int64 j; // rcx
  void *v26; // rax
  unsigned __int64 v27; // r15
  __int64 v28; // rsi
  size_t v29; // rdi
  size_t v31; // rdx
  __int64 *v32; // r15
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  size_t v37; // r15
  size_t v38; // rsi
  __int64 v39; // r12
  __int64 v40; // rax
  void *v41; // rax
  __int64 *v42; // r13
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // r15
  __int64 (__fastcall *v46)(); // r13
  __int64 v47; // r12
  __int64 v48; // r14
  char v49; // r13
  unsigned __int64 v50; // r12
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // rsi
  __int64 v55; // r12
  __int64 v56; // rax
  __int64 (__fastcall *v57)(); // rdi
  size_t v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rsi
  _QWORD *v61; // rdi
  unsigned __int64 v62; // r14
  void *v63; // rax
  unsigned __int64 v64; // r14
  _QWORD __dst[22]; // [rsp+0h] [rbp-2A0h] BYREF
  unsigned __int64 __src[22]; // [rsp+B0h] [rbp-1F0h] BYREF
  __int64 v67; // [rsp+160h] [rbp-140h]
  __int64 v68; // [rsp+168h] [rbp-138h] BYREF
  size_t v69; // [rsp+170h] [rbp-130h]
  unsigned __int64 v70; // [rsp+178h] [rbp-128h]
  _QWORD v71[2]; // [rsp+180h] [rbp-120h] BYREF
  __int64 v72; // [rsp+190h] [rbp-110h]
  __int64 v73; // [rsp+198h] [rbp-108h] BYREF
  __int64 v74; // [rsp+1A0h] [rbp-100h]
  __int64 v75; // [rsp+1A8h] [rbp-F8h]
  __int64 v76; // [rsp+1B0h] [rbp-F0h] BYREF
  __int64 v77; // [rsp+1B8h] [rbp-E8h]
  __int64 v78; // [rsp+1C0h] [rbp-E0h]
  __int64 *v79; // [rsp+1C8h] [rbp-D8h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+1D0h] [rbp-D0h]
  __int64 v81; // [rsp+1D8h] [rbp-C8h]
  __int64 v82; // [rsp+1E0h] [rbp-C0h]
  __int64 *v83; // [rsp+1E8h] [rbp-B8h] BYREF
  __int64 (__fastcall *v84)(); // [rsp+1F0h] [rbp-B0h]
  unsigned __int64 v85; // [rsp+1F8h] [rbp-A8h]
  unsigned __int64 v86; // [rsp+200h] [rbp-A0h]
  unsigned __int64 v87; // [rsp+218h] [rbp-88h]
  __int64 v88; // [rsp+230h] [rbp-70h]
  char v89; // [rsp+238h] [rbp-68h]
  __int64 v90; // [rsp+240h] [rbp-60h] BYREF
  __int64 (__fastcall *v91)(_QWORD, _QWORD); // [rsp+248h] [rbp-58h]
  __int64 v92; // [rsp+250h] [rbp-50h]
  unsigned int v93; // [rsp+25Ch] [rbp-44h] BYREF
  size_t v94; // [rsp+260h] [rbp-40h]
  __int64 (__fastcall *v95)(); // [rsp+268h] [rbp-38h]
  unsigned __int64 v96; // [rsp+270h] [rbp-30h]

  if ( a3 )
  {
    v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h11ee5c38df4ac403(a2);
    if ( v5 )
    {
      *a1 = 2;
      a1[1] = v5;
      return a1;
    }
    std::path::Path::_join::hb1a495d4f06b13b8(&v83, a2[25], a2[26], &anon_9d64d47fc319f676115352a1d8325eac_20, 15);
    v11 = v84;
    codexmate_lib::core::account_coordination::FileLock::acquire::h3f3285fd8d177aec(
      __src,
      v84,
      v85,
      &anon_9d64d47fc319f676115352a1d8325eac_21,
      9);
    v12 = __src[0];
    v13 = __src[1];
    if ( __src[0] != 11 )
    {
      v14 = (_DWORD *)&__src[1] + 1;
      v15 = __dst;
      for ( i = 21; i; --i )
        *v15++ = *v14++;
    }
    if ( v83 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v83, 1);
    if ( (_DWORD)v12 == 11 )
    {
      v93 = v13;
      v17 = a2[73];
      v18 = a2[74];
      std::path::Path::_join::hb1a495d4f06b13b8(
        &v68,
        v17,
        v18,
        "router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_authaimami_router_unlock_authrouter unlo"
        "ck missing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][ro"
        "uter-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorph"
        "aned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-"
        "unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
        30);
      std::path::Path::_join::hb1a495d4f06b13b8(&v76, v17, v18, &anon_3f0cee2931c58d8d540c26f0254bc451_336, 30);
      v19 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::hdaad0c777ea3eedd((__int64)a2);
      if ( v19 == 2 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v17);
        v20 = 77;
        v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(77, 1);
        if ( v26 )
        {
          v27 = (unsigned __int64)v26;
          memcpy(v26, &unk_1016F0118, 0x4Du);
          *a1 = 10;
          a1[1] = 77;
          a1[2] = v27;
          a1[3] = 77;
          goto LABEL_48;
        }
LABEL_119:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v20);
      }
      if ( v19 == 4 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v17);
        v20 = 72;
        v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72, 1);
        if ( v21 )
        {
          v22 = (unsigned __int64)v21;
          memcpy(v21, &unk_1016F0165, 0x48u);
          *a1 = 10;
          a1[1] = 72;
          a1[2] = v22;
          a1[3] = 72;
LABEL_48:
          if ( v76 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v76, 1);
          v28 = v68;
          if ( !v68 )
            goto LABEL_53;
          v29 = v69;
LABEL_52:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1);
LABEL_53:
          _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2607c48d289dfc5b(&v93);
          close_NOCANCEL(v93);
          return a1;
        }
        goto LABEL_119;
      }
      v31 = a2[5];
      v95 = (__int64 (__fastcall *)())a2[4];
      v94 = v31;
      codexmate_lib::core::relay::router_unlock_auth::managed_api_key::hd86eba4936c14b58(&v79);
      v32 = v79;
      if ( !__OFSUB__(-(__int64)v79, 1) )
      {
        v46 = v80;
        v47 = v81;
        if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::managed_api_key_marker_matches::h663f48082e16f62d(a2) )
        {
          *a1 = 11;
          if ( v32 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v32, 1);
        }
        else
        {
          v95 = v46;
          v94 = v69;
          v96 = v70;
          v48 = codexmate_lib::core::auth::current_timestamp::h7ac8ea7139164fe4();
          std::sys::fs::metadata::h32fa16d3052ea535(__src, v77, v78);
          v49 = __src[0];
          core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9cabf27c050b892b(
            __src[0],
            __src[1]);
          v83 = v32;
          v84 = v95;
          v85 = v47;
          v86 = 0x8000000000000000LL;
          v87 = 0x8000000000000000LL;
          v88 = v48;
          v89 = v49 ^ 1;
          codexmate_lib::core::relay::router_unlock_auth::write_json::h857fcbc8fa50a106(__dst, v94, v96, &v83);
          if ( LODWORD(__dst[0]) == 11 )
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::h5858cd84978c258b(&v83);
            *a1 = 11;
          }
          else
          {
            qmemcpy(a1, __dst, 0x60u);
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::h5858cd84978c258b(&v83);
          }
        }
        goto LABEL_48;
      }
      std::sys::fs::metadata::h32fa16d3052ea535(__src, v95, v94);
      v33 = __src[0];
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9cabf27c050b892b(
        __src[0],
        __src[1]);
      if ( v33 )
      {
LABEL_57:
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(__src);
        v84 = (__int64 (__fastcall *)())__src[1];
        v83 = (__int64 *)__src[0];
        __src[0] = (unsigned __int64)&off_101A14608;
        __src[1] = (unsigned __int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
        __src[2] = (unsigned __int64)&v83;
        __src[3] = (unsigned __int64)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_10185EFFC, __src);
        v73 = __dst[0];
        v74 = __dst[1];
        v75 = __dst[2];
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v73);
        v96 = __src[0];
        v34 = __src[1];
        v35 = __src[2];
        v36 = codexmate_lib::core::auth::current_timestamp::h7ac8ea7139164fe4();
        __dst[0] = v96;
        __dst[1] = v34;
        __dst[2] = v35;
        __dst[3] = 0x8000000000000000LL;
        __dst[6] = 0x8000000000000000LL;
        __dst[9] = v36;
        LOBYTE(__dst[10]) = v33 ^ 1;
        v37 = v69;
        v38 = v69;
        codexmate_lib::core::relay::router_unlock_auth::write_json::h857fcbc8fa50a106(__src, v69, v70, __dst);
        if ( LODWORD(__src[0]) != 11 )
        {
          qmemcpy(a1, __src, 0x60u);
          goto LABEL_97;
        }
        v96 = v37;
        v71[0] = 0;
        v72 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v38);
        v39 = 9;
        v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
        if ( !v40 )
          goto LABEL_120;
        *(_QWORD *)v40 = 0x646F6D5F68747561LL;
        *(_BYTE *)(v40 + 8) = 101;
        v90 = 9;
        v91 = (__int64 (__fastcall *)(_QWORD, _QWORD))v40;
        v92 = 9;
        serde_json::value::to_value::hd4d7843ebac4228d(__src, &off_101A14618);
        if ( LOBYTE(__src[0]) == 6 )
        {
          v83 = (__int64 *)__src[1];
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016F2295, 43, &v83, &off_101A155F8, &off_101A14628);
        }
        v86 = __src[3];
        v85 = __src[2];
        v84 = (__int64 (__fastcall *)())__src[1];
        v83 = (__int64 *)__src[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8d88b1dc52426012(__src, v71, &v90, &v83);
        if ( LOBYTE(__src[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(__src);
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v71);
        v39 = 14;
        v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1);
        if ( !v41 )
LABEL_120:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v39);
        qmemcpy(v41, "OPENAI_API_KEY", 14);
        v90 = 14;
        v91 = (__int64 (__fastcall *)(_QWORD, _QWORD))v41;
        v92 = 14;
        serde_json::value::to_value::h4c020da1efa6cf6f(__src, &v73);
        if ( LOBYTE(__src[0]) == 6 )
        {
          v83 = (__int64 *)__src[1];
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016F2295, 43, &v83, &off_101A155F8, &off_101A14628);
        }
        v86 = __src[3];
        v85 = __src[2];
        v84 = (__int64 (__fastcall *)())__src[1];
        v83 = (__int64 *)__src[0];
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8d88b1dc52426012(__src, v71, &v90, &v83);
        if ( LOBYTE(__src[0]) != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(__src);
        v80 = (__int64 (__fastcall *)())v71[0];
        v81 = v71[1];
        v82 = v72;
        LOBYTE(v79) = 5;
        serde_json::ser::to_vec_pretty::h4fcf06131523205d(&v83, &v79);
        v42 = v83;
        if ( v83 == (__int64 *)0x8000000000000000LL )
        {
          v71[0] = v84;
          v90 = (__int64)v71;
          v91 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_10185ED0E, &v90);
          v43 = __src[0];
          v44 = __src[1];
          v45 = __src[2];
          core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h8ef5f75d55edeb1e(v71);
        }
        else
        {
          v57 = v95;
          v58 = v94;
          v95 = v84;
          v59 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hf39edbc2f11d2716(
                  v57,
                  v94,
                  (__int64)v84,
                  v85,
                  1);
          if ( !v59 )
          {
            if ( v42 )
            {
              v58 = (size_t)v42;
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v42, 1);
            }
            v61 = a2;
            if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::hdaad0c777ea3eedd((__int64)a2) == 1 )
            {
              v61 = a2;
              if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::managed_api_key_marker_matches::h663f48082e16f62d(a2) )
              {
                *a1 = 11;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v79);
                v62 = v96;
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::h5858cd84978c258b(__dst);
                if ( v73 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v73, 1);
                if ( v76 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v76, 1);
                v28 = v68;
                if ( !v68 )
                  goto LABEL_53;
                v29 = v62;
                goto LABEL_52;
              }
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, v58);
            v63 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(88, 1);
            if ( !v63 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 88);
            v64 = (unsigned __int64)v63;
            memcpy(v63, &unk_1016F00C0, 0x58u);
            *a1 = 10;
            a1[1] = 88;
            a1[2] = v64;
            a1[3] = 88;
            goto LABEL_96;
          }
          v90 = v59;
          v83 = &v90;
          v84 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_10185ECE5, &v83);
          v43 = __src[0];
          v44 = __src[1];
          v45 = __src[2];
          if ( (v90 & 3) == 1 )
          {
            v67 = v90 - 1;
            v94 = *(_QWORD *)(v90 - 1);
            v96 = *(_QWORD *)(v90 + 7);
            if ( *(_QWORD *)v96 )
              (*(void (__fastcall **)(size_t))v96)(v94);
            v60 = *(_QWORD *)(v96 + 8);
            if ( v60 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v60, *(_QWORD *)(v96 + 16));
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 24, 8);
          }
          if ( v42 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v42, 1);
        }
        a1[1] = v43;
        a1[2] = v44;
        a1[3] = v45;
        *a1 = 10;
LABEL_96:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v79);
LABEL_97:
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::h5858cd84978c258b(__dst);
        if ( v73 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v73, 1);
        goto LABEL_48;
      }
      std::fs::read::inner::h6a30c15c40add28b(__dst, v95, v94);
      v96 = __dst[0];
      if ( __dst[0] == 0x8000000000000000LL )
      {
        v79 = (__int64 *)__dst[1];
        v83 = (__int64 *)&v79;
        v84 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_10185F03D, &v83);
        v50 = __src[0];
        v51 = __src[1];
        v52 = __src[2];
        if ( ((unsigned __int8)v79 & 3) == 1 )
        {
          v94 = (size_t)v79 - 1;
          v95 = *(__int64 (__fastcall **)())((char *)v79 - 1);
          v53 = *(__int64 *)((char *)v79 + 7);
          if ( *(_QWORD *)v53 )
            (*(void (__fastcall **)(__int64 (__fastcall *)()))v53)(v95);
          v54 = *(_QWORD *)(v53 + 8);
          if ( v54 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v54, *(_QWORD *)(v53 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, 24, 8);
        }
        a1[1] = v50;
        a1[2] = v51;
        a1[3] = v52;
        *a1 = 10;
        goto LABEL_48;
      }
      v55 = __dst[1];
      codexmate_lib::core::relay::router_unlock_auth::validate_user_owned_auth_backup::h267bdba2690d7dfe(
        &v83,
        __dst[1],
        __dst[2]);
      if ( v83 == (__int64 *)0x8000000000000000LL )
      {
        v56 = codexmate_lib::core::relay::atomic_write::copy_atomic_private::hf366372ef8e48a5a(v95, v94, v77, v78);
        if ( !v56 )
        {
          if ( v96 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v96, 1);
          goto LABEL_57;
        }
        codexmate_lib::core::relay::router_unlock_auth::install_managed_api_key_auth_unlocked::_$u7b$$u7b$closure$u7d$$u7d$::h2a3754408834fff8(
          __src,
          v56);
      }
      else
      {
        __dst[2] = v85;
        __dst[1] = v84;
        __dst[0] = v83;
        ((void (__fastcall *)(unsigned __int64 *, _QWORD *))codexmate_lib::core::relay::router_unlock_auth::install_managed_api_key_auth_unlocked::_$u7b$$u7b$closure$u7d$$u7d$::h3c1d71bfdfa8a9f9)(
          __src,
          __dst);
      }
      qmemcpy(a1, __src, 0x60u);
      if ( v96 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v96, 1);
      goto LABEL_48;
    }
    v23 = (_DWORD *)a1 + 3;
    v24 = __dst;
    for ( j = 21; j; --j )
      *v23++ = *v24++;
    *a1 = v12;
    *((_DWORD *)a1 + 2) = v13;
  }
  else
  {
    v6 = a2[4];
    codexmate_lib::core::auth::load_auth_file::h6b566352357bd168(__src);
    if ( __src[0] == 0x8000000000000001LL )
    {
      v7 = &__src[1];
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(&__src[1]);
    }
    else
    {
      memcpy(__dst, __src, sizeof(__dst));
      v7 = __dst;
      v8 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::hef58baffdf27106d(__dst);
      if ( __dst[0] != 0x8000000000000000LL && __dst[0] )
      {
        v7 = (unsigned __int64 *)__dst[1];
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1);
      }
      if ( __dst[3] != 0x8000000000000000LL && __dst[3] )
      {
        v7 = (unsigned __int64 *)__dst[4];
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1);
      }
      if ( __dst[6] != 0x8000000000000000LL && __dst[6] )
      {
        v7 = (unsigned __int64 *)__dst[7];
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1);
      }
      if ( __dst[9] != 0x8000000000000000LL && __dst[9] )
      {
        v7 = (unsigned __int64 *)__dst[10];
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1);
      }
      if ( __dst[12] != 0x8000000000000000LL && __dst[12] )
      {
        v7 = (unsigned __int64 *)__dst[13];
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1);
      }
      if ( __dst[15] != 0x8000000000000000LL && __dst[15] )
      {
        v7 = (unsigned __int64 *)__dst[16];
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1);
      }
      v6 = __dst[18];
      if ( __dst[18] != 0x8000000000000000LL && __dst[18] )
      {
        v7 = (unsigned __int64 *)__dst[19];
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1);
      }
      if ( v8 )
      {
        *a1 = 11;
        return a1;
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6);
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(84, 1);
    if ( !v9 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 84);
    v10 = (unsigned __int64)v9;
    memcpy(v9, &unk_1016EFC44, 0x54u);
    *a1 = 10;
    a1[1] = 84;
    a1[2] = v10;
    a1[3] = 84;
  }
  return a1;
}