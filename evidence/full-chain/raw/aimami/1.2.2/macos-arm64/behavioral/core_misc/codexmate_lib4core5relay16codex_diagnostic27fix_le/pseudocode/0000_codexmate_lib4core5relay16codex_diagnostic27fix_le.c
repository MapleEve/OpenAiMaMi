// mac 1.2.2 NEW codexmate_lib4core5relay16codex_diagnostic27fix_le 0x1009f3d70 d=0
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_legacy_migrated_threads::hd83dd1030c4bee57(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r14
  void *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // r14
  void *v9; // rax
  void *v10; // r15
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  size_t v14; // rdi
  signed __int64 v16; // r12
  size_t v17; // r15
  __int64 v18; // r13
  const void *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // r14
  void *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int128 v27; // kr20_16
  size_t v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // r14
  void *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // r14
  size_t v34; // rax
  size_t v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rax
  _QWORD *v41; // r15
  void *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // r15
  size_t v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rax
  _QWORD *v52; // r14
  void *v53; // rax
  __int64 v54; // rax
  size_t v55[3]; // [rsp+8h] [rbp-1E8h] BYREF
  size_t v56[3]; // [rsp+20h] [rbp-1D0h] BYREF
  size_t v57[3]; // [rsp+38h] [rbp-1B8h] BYREF
  __int128 v58; // [rsp+50h] [rbp-1A0h] BYREF
  _OWORD v59[9]; // [rsp+68h] [rbp-188h] BYREF
  const void *v60; // [rsp+100h] [rbp-F0h]
  size_t v61[12]; // [rsp+108h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+168h] [rbp-88h]
  __int64 v63; // [rsp+170h] [rbp-80h]
  __int64 v64; // [rsp+178h] [rbp-78h]
  __int128 v65; // [rsp+180h] [rbp-70h]
  __int64 v66; // [rsp+190h] [rbp-60h]
  __int128 v67; // [rsp+198h] [rbp-58h] BYREF
  __int64 v68; // [rsp+1A8h] [rbp-48h]
  __int64 (__fastcall *v69)(); // [rsp+1B0h] [rbp-40h]
  __int64 v70; // [rsp+1B8h] [rbp-38h]
  __int64 v71; // [rsp+1C0h] [rbp-30h]

  if ( (a3 & 1) != 0 ) /*0x1009f3d8a*/
  {
    *(_QWORD *)&v67 = 0; /*0x1009f3d90*/
    *((_QWORD *)&v67 + 1) = 8; /*0x1009f3d98*/
    v68 = 0; /*0x1009f3da0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f3da8*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f3db7*/
    if ( !v4 ) /*0x1009f3dbf*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f4702*/
    v5 = (_QWORD *)v4; /*0x1009f3dc5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f3dc8*/
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x17u, 1u); /*0x1009f3dd7*/
    if ( !v6 ) /*0x1009f3ddf*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009f47c2*/
    qmemcpy(v6, "legacy_migrated_threads", 23); /*0x1009f3e0b*/
    *v5 = 23; /*0x1009f3e0e*/
    v5[1] = v6; /*0x1009f3e15*/
    v5[2] = 23; /*0x1009f3e19*/
    v61[0] = 1; /*0x1009f3e21*/
    v61[1] = (size_t)v5; /*0x1009f3e2c*/
    v61[2] = 1; /*0x1009f3e33*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f3e3e*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f3e4d*/
    if ( !v7 ) /*0x1009f3e55*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f4716*/
    v8 = (_QWORD *)v7; /*0x1009f3e5b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f3e5e*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x71u, 1u); /*0x1009f3e6d*/
    if ( !v9 ) /*0x1009f3e75*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009f47d3*/
    v10 = v9; /*0x1009f3e7b*/
    memcpy(v9, &unk_1015A1B14, 0x71u); /*0x1009f3e8d*/
    *v8 = 113; /*0x1009f3e92*/
    v8[1] = v10; /*0x1009f3e99*/
    v8[2] = 113; /*0x1009f3e9d*/
    v12 = *((_QWORD *)&v67 + 1); /*0x1009f3ea9*/
    result = v67; /*0x1009f3ea9*/
    v59[0] = v67; /*0x1009f3ead*/
    v13 = v68; /*0x1009f3ebb*/
    *(_QWORD *)&v59[1] = v68; /*0x1009f3ebf*/
    v14 = v61[0]; /*0x1009f3ed4*/
    v59[2] = *(_OWORD *)&v61[1]; /*0x1009f3ee2*/
    *((_QWORD *)&v59[1] + 1) = v61[0]; /*0x1009f3ee9*/
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v61[1]; /*0x1009f3ef4*/
    *(_QWORD *)(a1 + 32) = v14; /*0x1009f3ef8*/
    *(_QWORD *)(a1 + 24) = v13; /*0x1009f3efc*/
    *(_OWORD *)(a1 + 8) = __PAIR128__(v12, result); /*0x1009f3f04*/
LABEL_25:
    *(_QWORD *)(a1 + 56) = 1; /*0x1009f4190*/
    *(_QWORD *)(a1 + 64) = v8; /*0x1009f4198*/
    *(_QWORD *)(a1 + 72) = 1; /*0x1009f419c*/
    *(_QWORD *)a1 = 10; /*0x1009f41a4*/
    return result; /*0x1009f41a4*/
  }
  if ( __OFSUB__(0, *(_QWORD *)(a2 + 720)) ) /*0x1009f3f12*/
  {
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::hf2d8723635f4afeb( /*0x1009f3f2a*/
      v61,
      *(const void **)(a2 + 8),
      *(_QWORD *)(a2 + 16));
    v16 = v61[2]; /*0x1009f3f36*/
    v17 = v61[1]; /*0x1009f3f36*/
    goto LABEL_17; /*0x1009f3f3d*/
  }
  v16 = *(_QWORD *)(a2 + 736); /*0x1009f3f3f*/
  if ( v16 < 0 ) /*0x1009f3f49*/
  {
    v18 = 0; /*0x1009f3f4b*/
    goto LABEL_11; /*0x1009f3f4b*/
  }
  v19 = *(const void **)(a2 + 728); /*0x1009f3f59*/
  if ( v16 ) /*0x1009f3f60*/
  {
    v60 = *(const void **)(a2 + 728); /*0x1009f3f62*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f3f69*/
    v18 = 1; /*0x1009f3f6e*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1u); /*0x1009f3f7c*/
    if ( !v20 ) /*0x1009f3f84*/
LABEL_11:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18); /*0x1009f3f4e*/
    v17 = v20; /*0x1009f3f86*/
    v19 = v60; /*0x1009f3f89*/
  }
  else
  {
    v17 = 1; /*0x1009f3f92*/
  }
  v61[0] = v16; /*0x1009f3f98*/
  memcpy((void *)v17, v19, v16); /*0x1009f3fa5*/
LABEL_17:
  std::sys::fs::metadata::h32fa16d3052ea535((__int64 *)v59, (const void *)v17, v16); /*0x1009f3faa*/
  v21 = *(_QWORD *)&v59[0]; /*0x1009f3fbc*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x1009f3fcd*/
    *(__int64 *)&v59[0],
    *((__int64 *)&v59[0] + 1));
  if ( v21 ) /*0x1009f3fd5*/
  {
    if ( v61[0] ) /*0x1009f3fe5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f3fef*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f3ff4*/
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f4003*/
    if ( !v22 ) /*0x1009f400b*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f472a*/
    v23 = (_QWORD *)v22; /*0x1009f4011*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f4014*/
    v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x17u, 1u); /*0x1009f4023*/
    if ( !v24 ) /*0x1009f402b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009f47e4*/
    qmemcpy(v24, "legacy_migrated_threads", 23); /*0x1009f4057*/
    *v23 = 23; /*0x1009f405a*/
    v23[1] = v24; /*0x1009f4061*/
    v23[2] = 23; /*0x1009f4065*/
    *(_QWORD *)&v67 = 1; /*0x1009f406d*/
    *((_QWORD *)&v67 + 1) = v23; /*0x1009f4075*/
    v68 = 1; /*0x1009f4079*/
    v61[0] = 0; /*0x1009f4081*/
    *(_OWORD *)&v61[1] = 8u; /*0x1009f408c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f40a2*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f40b1*/
    if ( !v25 ) /*0x1009f40b9*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f4739*/
    v8 = (_QWORD *)v25; /*0x1009f40bf*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f40c2*/
    v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x21u, 1u); /*0x1009f40d1*/
    if ( !v26 ) /*0x1009f40d9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009f47f5*/
    *(_QWORD *)(v26 + 24) = 0xA4E5AEBFE4809CE9LL; /*0x1009f40e9*/
    *(_QWORD *)(v26 + 16) = 0xA097E68CBCEFA89CLL; /*0x1009f40f7*/
    *(_QWORD *)(v26 + 8) = 0xE598ADE58DB8E493LL; /*0x1009f4105*/
    *(_QWORD *)v26 = 0xBAE5AE8DE6B095E6LL; /*0x1009f4113*/
    *(_BYTE *)(v26 + 32) = -115; /*0x1009f4116*/
    *v8 = 33; /*0x1009f411a*/
    v8[1] = v26; /*0x1009f4121*/
    v8[2] = 33; /*0x1009f4125*/
    result = v68; /*0x1009f412d*/
    *(_QWORD *)&v59[1] = v68; /*0x1009f4131*/
    v27 = v67; /*0x1009f413c*/
    v59[0] = v67; /*0x1009f4147*/
    v28 = v61[0]; /*0x1009f414e*/
    *((_QWORD *)&v59[1] + 1) = v61[0]; /*0x1009f415c*/
    v59[2] = *(_OWORD *)&v61[1]; /*0x1009f416a*/
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v61[1]; /*0x1009f417c*/
    *(_QWORD *)(a1 + 32) = v28; /*0x1009f4180*/
    *(_QWORD *)(a1 + 24) = result; /*0x1009f4184*/
    *(_OWORD *)(a1 + 8) = v27; /*0x1009f418c*/
    goto LABEL_25; /*0x1009f418c*/
  }
  if ( v61[0] ) /*0x1009f41c7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f41d1*/
  codexmate_lib::core::relay::codex_thread_visibility::cleanup_orphan_router_threads_strict::h35a35bee9102817b(v61, a2); /*0x1009f41e0*/
  if ( LODWORD(v61[0]) == 10 ) /*0x1009f41ec*/
  {
    v58 = *(_OWORD *)&v61[1]; /*0x1009f41f9*/
    codexmate_lib::core::relay::codex_diagnostic::check_legacy_migrated_threads::h90f2c01bdd99f59f(v59, a2, 0); /*0x1009f420c*/
    if ( *((_QWORD *)&v59[2] + 1) == 2 && **(_WORD **)&v59[2] == 27503 ) /*0x1009f4227*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f45d6*/
      v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f45e5*/
      if ( !v51 ) /*0x1009f45ed*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f479d*/
      v52 = (_QWORD *)v51; /*0x1009f45f3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f45f6*/
      v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x17u, 1u); /*0x1009f4605*/
      if ( !v53 ) /*0x1009f460d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009f4828*/
      qmemcpy(v53, "legacy_migrated_threads", 23); /*0x1009f4639*/
      *v52 = 23; /*0x1009f463c*/
      v52[1] = v53; /*0x1009f4643*/
      v52[2] = 23; /*0x1009f4647*/
      *(_QWORD *)&v65 = 1; /*0x1009f464f*/
      *((_QWORD *)&v65 + 1) = v52; /*0x1009f4657*/
      v66 = 1; /*0x1009f465b*/
      v62 = 0; /*0x1009f4663*/
      v63 = 8; /*0x1009f466e*/
      v64 = 0; /*0x1009f4676*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f467e*/
      v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f468d*/
      if ( !v54 ) /*0x1009f4695*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f47b1*/
      v33 = (_QWORD *)v54; /*0x1009f469b*/
      *(_QWORD *)&v67 = &v58; /*0x1009f46ac*/
      *((_QWORD *)&v67 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1009f46b7*/
      v68 = (__int64)&v58 + 8; /*0x1009f46bb*/
      v69 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1009f46bf*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v57, byte_1016FC6E4, (unsigned __int64)&v67); /*0x1009f46d5*/
      v33[2] = v57[2]; /*0x1009f46e1*/
      v34 = v57[0]; /*0x1009f46e5*/
      v35 = v57[1]; /*0x1009f46ec*/
    }
    else
    {
      *(_QWORD *)&v65 = 0; /*0x1009f422d*/
      *((_QWORD *)&v65 + 1) = 8; /*0x1009f4235*/
      v66 = 0; /*0x1009f423d*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f4245*/
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f4254*/
      if ( !v29 ) /*0x1009f425c*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f4775*/
      v30 = (_QWORD *)v29; /*0x1009f4262*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f4265*/
      v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x17u, 1u); /*0x1009f4274*/
      if ( !v31 ) /*0x1009f427c*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009f4817*/
      qmemcpy(v31, "legacy_migrated_threads", 23); /*0x1009f42a8*/
      *v30 = 23; /*0x1009f42ab*/
      v30[1] = v31; /*0x1009f42b2*/
      v30[2] = 23; /*0x1009f42b6*/
      v62 = 1; /*0x1009f42be*/
      v63 = (__int64)v30; /*0x1009f42c9*/
      v64 = 1; /*0x1009f42cd*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f42d5*/
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f42e4*/
      if ( !v32 ) /*0x1009f42ec*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f4789*/
      v33 = (_QWORD *)v32; /*0x1009f42f2*/
      *(_QWORD *)&v67 = &v59[3]; /*0x1009f42fc*/
      *((_QWORD *)&v67 + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1009f4307*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v56, byte_1016FC6B4, (unsigned __int64)&v67); /*0x1009f431d*/
      v33[2] = v56[2]; /*0x1009f4329*/
      v34 = v56[0]; /*0x1009f432d*/
      v35 = v56[1]; /*0x1009f4334*/
    }
    v33[1] = v35; /*0x1009f433b*/
    *v33 = v34; /*0x1009f433f*/
    v36 = *((_QWORD *)&v65 + 1); /*0x1009f4346*/
    result = v65; /*0x1009f4346*/
    v67 = v65; /*0x1009f434a*/
    v37 = v66; /*0x1009f4352*/
    v68 = v66; /*0x1009f4356*/
    v38 = v62; /*0x1009f435a*/
    v39 = v63; /*0x1009f4361*/
    v69 = (__int64 (__fastcall *)())v62; /*0x1009f4365*/
    v70 = v63; /*0x1009f4369*/
    v71 = v64; /*0x1009f4371*/
    *(_QWORD *)(a1 + 48) = v64; /*0x1009f4375*/
    *(_QWORD *)(a1 + 40) = v39; /*0x1009f4379*/
    *(_QWORD *)(a1 + 32) = v38; /*0x1009f437d*/
    *(_QWORD *)(a1 + 24) = v37; /*0x1009f4381*/
    *(_OWORD *)(a1 + 8) = __PAIR128__(v36, result); /*0x1009f4389*/
    *(_QWORD *)(a1 + 56) = 1; /*0x1009f438d*/
    *(_QWORD *)(a1 + 64) = v33; /*0x1009f4395*/
    *(_QWORD *)(a1 + 72) = 1; /*0x1009f4399*/
    *(_QWORD *)a1 = 10; /*0x1009f43a1*/
    if ( *(_QWORD *)&v59[0] ) /*0x1009f43b2*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f43c0*/
    if ( *((_QWORD *)&v59[1] + 1) ) /*0x1009f43cf*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f43dd*/
    if ( *(_QWORD *)&v59[3] ) /*0x1009f43f6*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f4404*/
    if ( *((_QWORD *)&v59[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&v59[4] + 1) ) /*0x1009f441c*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f442e*/
  }
  else
  {
    qmemcpy(v59, v61, 0x60u); /*0x1009f444e*/
    *(_QWORD *)&v65 = 0; /*0x1009f4451*/
    *((_QWORD *)&v65 + 1) = 8; /*0x1009f4459*/
    v66 = 0; /*0x1009f4461*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f4469*/
    v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f4478*/
    if ( !v40 ) /*0x1009f4480*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f474d*/
    v41 = (_QWORD *)v40; /*0x1009f4486*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f4489*/
    v42 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x17u, 1u); /*0x1009f4498*/
    if ( !v42 ) /*0x1009f44a0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009f4806*/
    qmemcpy(v42, "legacy_migrated_threads", 23); /*0x1009f44cc*/
    *v41 = 23; /*0x1009f44cf*/
    v41[1] = v42; /*0x1009f44d6*/
    v41[2] = 23; /*0x1009f44da*/
    v62 = 1; /*0x1009f44e2*/
    v63 = (__int64)v41; /*0x1009f44ed*/
    v64 = 1; /*0x1009f44f1*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f44f9*/
    v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009f4508*/
    if ( !v43 ) /*0x1009f4510*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009f4761*/
    v44 = (_QWORD *)v43; /*0x1009f4516*/
    *(_QWORD *)&v67 = v59; /*0x1009f4519*/
    *((_QWORD *)&v67 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1; /*0x1009f4524*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v55, byte_1016FC730, (unsigned __int64)&v67); /*0x1009f453a*/
    v44[2] = v55[2]; /*0x1009f4546*/
    v45 = v55[0]; /*0x1009f454a*/
    v44[1] = v55[1]; /*0x1009f4558*/
    *v44 = v45; /*0x1009f455c*/
    v47 = *((_QWORD *)&v65 + 1); /*0x1009f4563*/
    v46 = v65; /*0x1009f4563*/
    v67 = v65; /*0x1009f4567*/
    v48 = v66; /*0x1009f456f*/
    v68 = v66; /*0x1009f4573*/
    v49 = v62; /*0x1009f4577*/
    v50 = v63; /*0x1009f457e*/
    v69 = (__int64 (__fastcall *)())v62; /*0x1009f4582*/
    v70 = v63; /*0x1009f4586*/
    v71 = v64; /*0x1009f458e*/
    *(_QWORD *)(a1 + 48) = v64; /*0x1009f4592*/
    *(_QWORD *)(a1 + 40) = v50; /*0x1009f4596*/
    *(_QWORD *)(a1 + 32) = v49; /*0x1009f459a*/
    *(_QWORD *)(a1 + 24) = v48; /*0x1009f459e*/
    *(_OWORD *)(a1 + 8) = __PAIR128__(v47, v46); /*0x1009f45a6*/
    *(_QWORD *)(a1 + 56) = 1; /*0x1009f45aa*/
    *(_QWORD *)(a1 + 64) = v44; /*0x1009f45b2*/
    *(_QWORD *)(a1 + 72) = 1; /*0x1009f45b6*/
    *(_QWORD *)a1 = 10; /*0x1009f45be*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc((__int64 **)v59); /*0x1009f45cc*/
  }
  return result; /*0x1009f41ab*/
}