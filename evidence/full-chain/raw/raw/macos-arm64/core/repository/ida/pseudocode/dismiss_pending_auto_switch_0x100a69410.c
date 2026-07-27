// __ZN13codexmate_lib4core10repository10Repository27dismiss_pending_auto_switch @ 0x100a69410 | 基线 same-set
_BYTE *__fastcall codexmate_lib::core::repository::Repository::dismiss_pending_auto_switch::hbe709b7ea92e35cc(
        _BYTE *a1,
        __int64 a2,
        double a3)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned int v7; // r15d
  _DWORD *v8; // rsi
  __int64 **v9; // rdi
  __int64 i; // rcx
  _DWORD *v11; // rdi
  __int64 **v12; // rsi
  __int64 j; // rcx
  __int64 v14; // r15
  __int64 v15; // rbx
  int v16; // edx
  void *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r14
  _BYTE *v22; // rax
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 **v29; // r13
  __int64 v30; // rbx
  __int64 *v31; // r15
  __int64 *v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // rsi
  _QWORD __dst[91]; // [rsp+0h] [rbp-450h] BYREF
  __int64 *v41; // [rsp+2D8h] [rbp-178h] BYREF
  void *v42; // [rsp+2E0h] [rbp-170h]
  __int64 v43; // [rsp+2E8h] [rbp-168h]
  __int64 v44; // [rsp+2F0h] [rbp-160h]
  char v45; // [rsp+2F8h] [rbp-158h]
  __int64 v46; // [rsp+330h] [rbp-120h]
  __int64 v47; // [rsp+338h] [rbp-118h]
  __int64 v48; // [rsp+340h] [rbp-110h]
  __int64 v49; // [rsp+348h] [rbp-108h]
  __int64 v50; // [rsp+350h] [rbp-100h]
  __int64 v51; // [rsp+358h] [rbp-F8h]
  __int64 v52; // [rsp+360h] [rbp-F0h]
  __int64 v53; // [rsp+368h] [rbp-E8h]
  __int64 v54; // [rsp+370h] [rbp-E0h]
  __int64 v55; // [rsp+378h] [rbp-D8h]
  __int64 v56; // [rsp+380h] [rbp-D0h]
  __int64 v57; // [rsp+388h] [rbp-C8h]
  __int64 *v58; // [rsp+390h] [rbp-C0h]
  __int16 v59; // [rsp+398h] [rbp-B8h] BYREF
  __int64 **v60; // [rsp+3A0h] [rbp-B0h]
  __int64 v61; // [rsp+3A8h] [rbp-A8h]
  __int64 v62; // [rsp+3B0h] [rbp-A0h]
  __int64 v63; // [rsp+3B8h] [rbp-98h]
  __int64 v64; // [rsp+3C0h] [rbp-90h]
  __int64 v65; // [rsp+3C8h] [rbp-88h]
  __int64 v66; // [rsp+3D0h] [rbp-80h]
  __int64 v67; // [rsp+3D8h] [rbp-78h]
  __int64 v68; // [rsp+3E0h] [rbp-70h]
  __int64 v69; // [rsp+3E8h] [rbp-68h] BYREF
  _BYTE *v70; // [rsp+3F0h] [rbp-60h]
  __int64 v71; // [rsp+3F8h] [rbp-58h]
  __int64 v72; // [rsp+400h] [rbp-50h]
  __int64 v73; // [rsp+408h] [rbp-48h]
  __int64 v74; // [rsp+410h] [rbp-40h]
  __int64 v75; // [rsp+418h] [rbp-38h]
  unsigned int v76[11]; // [rsp+424h] [rbp-2Ch] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100a69449*/
    &v69,
    *(_QWORD *)(a2 + 200),
    *(_QWORD *)(a2 + 208),
    &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51,
    20);
  v5 = (__int64)v70; /*0x100a6944e*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a6946d*/
    (__int64)__dst,
    (__int64)v70,
    v71,
    (__int64)"account state.oauth-refresh.lock",
    13);
  v6 = __dst[0]; /*0x100a69472*/
  v7 = __dst[1]; /*0x100a69479*/
  if ( __dst[0] != 11 ) /*0x100a69484*/
  {
    v8 = (_DWORD *)&__dst[1] + 1; /*0x100a69486*/
    v9 = &v41; /*0x100a6948d*/
    for ( i = 21; i; --i ) /*0x100a69494*/
    {
      *(_DWORD *)v9 = *v8++; /*0x100a69499*/
      v9 = (__int64 **)((char *)v9 + 4); /*0x100a69499*/
    }
  }
  if ( v69 ) /*0x100a694a2*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v69, 1); /*0x100a694ac*/
  if ( (_DWORD)v6 == 11 ) /*0x100a694b5*/
  {
    v76[0] = v7; /*0x100a694b7*/
    codexmate_lib::core::repository::Repository::load_pending_auto_switch::h6842d236c81b2905(__dst, a2); /*0x100a694c5*/
    if ( LODWORD(__dst[0]) == 2 ) /*0x100a694d1*/
    {
      a1[8] = 0; /*0x100a694d3*/
      *(_QWORD *)a1 = 11; /*0x100a694d9*/
LABEL_45:
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v76); /*0x100a69923*/
      close_NOCANCEL(v76[0]); /*0x100a6992f*/
      return a1; /*0x100a6992f*/
    }
    v61 = __dst[23]; /*0x100a6950e*/
    v46 = __dst[24]; /*0x100a6951c*/
    v14 = __dst[25]; /*0x100a69523*/
    v65 = __dst[26]; /*0x100a69531*/
    v51 = __dst[27]; /*0x100a6953f*/
    v64 = __dst[29]; /*0x100a6954d*/
    v50 = __dst[30]; /*0x100a6955b*/
    v68 = __dst[32]; /*0x100a69569*/
    v57 = __dst[33]; /*0x100a69574*/
    v67 = __dst[35]; /*0x100a69582*/
    v56 = __dst[36]; /*0x100a6958d*/
    v66 = __dst[38]; /*0x100a6959b*/
    v55 = __dst[39]; /*0x100a695a6*/
    v72 = __dst[67]; /*0x100a695b4*/
    v47 = __dst[68]; /*0x100a695bf*/
    v15 = __dst[69]; /*0x100a695c6*/
    v63 = __dst[70]; /*0x100a695d4*/
    v49 = __dst[71]; /*0x100a695e2*/
    v62 = __dst[73]; /*0x100a695f0*/
    v48 = __dst[74]; /*0x100a695fe*/
    v73 = __dst[76]; /*0x100a6960c*/
    v54 = __dst[77]; /*0x100a69617*/
    v75 = __dst[79]; /*0x100a69625*/
    v53 = __dst[80]; /*0x100a69630*/
    v74 = __dst[82]; /*0x100a6963e*/
    v52 = __dst[83]; /*0x100a69649*/
    v69 = std::time::SystemTime::now::h1fe79e41f9d5677f(__dst, a2); /*0x100a69655*/
    LODWORD(v70) = v16; /*0x100a69659*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v41, &v69, 0, 0); /*0x100a6966e*/
    if ( (_BYTE)v41 ) /*0x100a6967a*/
      v17 = nullptr; /*0x100a69685*/
    else
      v17 = v42; /*0x100a6967c*/
    __dst[0] = v61; /*0x100a69692*/
    __dst[1] = v46; /*0x100a696a0*/
    __dst[2] = v14; /*0x100a696a7*/
    __dst[3] = v72; /*0x100a696ae*/
    __dst[4] = v47; /*0x100a696bc*/
    __dst[5] = v15; /*0x100a696c3*/
    __dst[6] = v17; /*0x100a696ca*/
    v18 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820((_QWORD *)a2); /*0x100a696d9*/
    v19 = 2; /*0x100a696dc*/
    if ( v18 ) /*0x100a696e4*/
      goto LABEL_18; /*0x100a696e4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, &v69); /*0x100a696f3*/
    v22 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100a69702*/
    if ( !v22 ) /*0x100a6970a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100a69db7*/
    v69 = 128; /*0x100a69710*/
    v70 = v22; /*0x100a69718*/
    v41 = &v69; /*0x100a6971c*/
    v42 = &unk_10167BCD0; /*0x100a6972a*/
    v43 = 2; /*0x100a69731*/
    v44 = 1; /*0x100a6973c*/
    v45 = 0; /*0x100a69747*/
    *v22 = 123; /*0x100a6974e*/
    v71 = 1; /*0x100a69751*/
    v59 = 256; /*0x100a69759*/
    v60 = &v41; /*0x100a69769*/
    v18 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a6978f*/
            &v59,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_272,
            17,
            __dst);
    if ( v18 ) /*0x100a69795*/
      goto LABEL_24; /*0x100a69795*/
    if ( (_BYTE)v59 ) /*0x100a6979e*/
      goto LABEL_22; /*0x100a6979e*/
    v18 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a697c9*/
            &v59,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_273,
            19,
            &__dst[3]);
    if ( v18 ) /*0x100a697cf*/
      goto LABEL_24; /*0x100a697cf*/
    if ( (_BYTE)v59 ) /*0x100a69a25*/
    {
LABEL_22:
      v18 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100a697a5*/
LABEL_24:
      v20 = v74; /*0x100a697d5*/
      v21 = v75; /*0x100a697e0*/
      if ( v69 ) /*0x100a697e4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x100a697ef*/
      v19 = 3; /*0x100a697f4*/
      goto LABEL_27; /*0x100a697f4*/
    }
    v18 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100a69a4a*/
            &v59,
            &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_274,
            11,
            &__dst[6]);
    if ( v18 ) /*0x100a69a50*/
      goto LABEL_24; /*0x100a69a50*/
    if ( (v59 & 1) == 0 && HIBYTE(v59) ) /*0x100a69a6a*/
    {
      v29 = v60; /*0x100a69a6c*/
      v58 = *v60; /*0x100a69a77*/
      v30 = (__int64)v60[3] - 1; /*0x100a69a82*/
      v60[3] = (__int64 *)v30; /*0x100a69a85*/
      if ( *((_BYTE *)v29 + 32) == 1 ) /*0x100a69a8e*/
      {
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100a69aa3*/
          v58,
          "\n"
          "struct RegistryFilestruct RegistryItemstruct HotspotConfigstruct AutoSwitchConfigstruct CodexMateSettingsstruc"
          "t MysteryRouteGrantstruct AutoSwitchSnoozeRecordstruct VoiceWorkspaceFilestruct RuntimeCache",
          1);
        if ( v30 ) /*0x100a69aab*/
        {
          v31 = v29[1]; /*0x100a69aad*/
          v32 = v29[2]; /*0x100a69ab1*/
          do /*0x100a69aca*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(v58, v31, v32); /*0x100a69ac2*/
            --v30; /*0x100a69ac7*/
          }
          while ( v30 ); /*0x100a69aca*/
        }
      }
      alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100a69adf*/
        v58,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_2,
        1);
    }
    v33 = v69; /*0x100a69ae4*/
    v34 = (__int64)v70; /*0x100a69ae8*/
    if ( __OFSUB__(-v69, 1) ) /*0x100a69aef*/
    {
      v18 = (__int64)v70; /*0x100a69af4*/
      v19 = 3; /*0x100a69af7*/
LABEL_18:
      v20 = v74; /*0x100a696e6*/
      v21 = v75; /*0x100a696ea*/
      goto LABEL_27; /*0x100a696ee*/
    }
    v18 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100a69b21*/
            *(void **)(a2 + 512),
            *(_QWORD *)(a2 + 520),
            (__int64)v70,
            v71,
            1);
    if ( v18 ) /*0x100a69b27*/
    {
      if ( v33 ) /*0x100a69b2c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x100a69b39*/
      v20 = v74; /*0x100a69b3e*/
      v21 = v75; /*0x100a69b42*/
      v19 = 2; /*0x100a69b46*/
LABEL_27:
      *(_QWORD *)a1 = v19; /*0x100a697f9*/
      *((_QWORD *)a1 + 1) = v18; /*0x100a697fd*/
      if ( v61 ) /*0x100a6980c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v61, 1); /*0x100a6981a*/
      v23 = v73; /*0x100a69826*/
      if ( v72 ) /*0x100a6982a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v72, 1); /*0x100a69838*/
      v24 = v65; /*0x100a6983d*/
      if ( v65 ) /*0x100a69847*/
        goto LABEL_32; /*0x100a69847*/
      goto LABEL_33; /*0x100a69847*/
    }
    if ( v33 ) /*0x100a69b53*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x100a69b60*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AutoSwitchSnoozeRecord$GT$::hd2d18ac97487a16f(__dst); /*0x100a69b6c*/
    codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request::heb8bdf3af6a6b862( /*0x100a69b86*/
      __dst,
      *(void **)(a2 + 488),
      *(_QWORD *)(a2 + 496));
    if ( LODWORD(__dst[0]) != 11 ) /*0x100a69b92*/
    {
      qmemcpy(a1, __dst, 0x60u); /*0x100a69cb5*/
      v20 = v74; /*0x100a69cb8*/
      v21 = v75; /*0x100a69cbc*/
      v23 = v73; /*0x100a69cc0*/
      v24 = v65; /*0x100a69cc4*/
      if ( v65 ) /*0x100a69cce*/
LABEL_32:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v24, 1); /*0x100a69849*/
LABEL_33:
      if ( v64 ) /*0x100a69864*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v64, 1); /*0x100a69872*/
      if ( 2 * v68 ) /*0x100a6987b*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v68, 1); /*0x100a69955*/
        v25 = v67; /*0x100a6995a*/
        if ( !(2 * v67) ) /*0x100a69969*/
        {
LABEL_37:
          v26 = v66; /*0x100a698a1*/
          if ( !(2 * v66) ) /*0x100a698a5*/
            goto LABEL_38; /*0x100a698b0*/
          goto LABEL_49; /*0x100a698b0*/
        }
      }
      else
      {
        v25 = v67; /*0x100a6988c*/
        if ( !(2 * v67) ) /*0x100a69890*/
          goto LABEL_37; /*0x100a6989b*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v25, 1); /*0x100a6997b*/
      v26 = v66; /*0x100a69980*/
      if ( !(2 * v66) ) /*0x100a6998f*/
      {
LABEL_38:
        v27 = v63; /*0x100a698b6*/
        if ( !v63 ) /*0x100a698c0*/
          goto LABEL_40; /*0x100a698c0*/
        goto LABEL_39; /*0x100a698c0*/
      }
LABEL_49:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v26, 1); /*0x100a69995*/
      v27 = v63; /*0x100a699a6*/
      if ( !v63 ) /*0x100a699b0*/
      {
LABEL_40:
        if ( v62 ) /*0x100a698dd*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v62, 1); /*0x100a698eb*/
        if ( 2 * v23 ) /*0x100a698f0*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v23, 1); /*0x100a699ca*/
          if ( !(2 * v21) ) /*0x100a699da*/
          {
LABEL_44:
            if ( !(2 * v20) ) /*0x100a69912*/
              goto LABEL_45; /*0x100a6991d*/
LABEL_53:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v20, 1); /*0x100a69a05*/
            goto LABEL_45; /*0x100a69a19*/
          }
        }
        else if ( !(2 * v21) ) /*0x100a69901*/
        {
          goto LABEL_44; /*0x100a6990c*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v21, 1); /*0x100a699ef*/
        if ( !(2 * v20) ) /*0x100a699ff*/
          goto LABEL_45; /*0x100a699ff*/
        goto LABEL_53; /*0x100a699ff*/
      }
LABEL_39:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v27, 1); /*0x100a698c2*/
      goto LABEL_40; /*0x100a698ce*/
    }
    a1[8] = 1; /*0x100a69b98*/
    *(_QWORD *)a1 = 11; /*0x100a69b9e*/
    if ( v65 ) /*0x100a69bb0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v65, 1); /*0x100a69bbe*/
    if ( v64 ) /*0x100a69bcd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v64, 1); /*0x100a69bdb*/
    if ( 2 * v68 ) /*0x100a69be4*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v68, 1); /*0x100a69ce5*/
      v35 = v67; /*0x100a69cea*/
      if ( !(2 * v67) ) /*0x100a69cf9*/
      {
LABEL_78:
        v36 = v66; /*0x100a69c0a*/
        if ( !(2 * v66) ) /*0x100a69c0e*/
          goto LABEL_79; /*0x100a69c19*/
        goto LABEL_91; /*0x100a69c19*/
      }
    }
    else
    {
      v35 = v67; /*0x100a69bf5*/
      if ( !(2 * v67) ) /*0x100a69bf9*/
        goto LABEL_78; /*0x100a69c04*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v35, 1); /*0x100a69d0b*/
    v36 = v66; /*0x100a69d10*/
    if ( !(2 * v66) ) /*0x100a69d1f*/
    {
LABEL_79:
      v37 = v63; /*0x100a69c1f*/
      if ( !v63 ) /*0x100a69c29*/
        goto LABEL_81; /*0x100a69c29*/
      goto LABEL_80; /*0x100a69c29*/
    }
LABEL_91:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v36, 1); /*0x100a69d25*/
    v37 = v63; /*0x100a69d36*/
    if ( !v63 ) /*0x100a69d40*/
    {
LABEL_81:
      if ( v62 ) /*0x100a69c46*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v62, 1); /*0x100a69c54*/
      if ( 2 * v73 ) /*0x100a69c5d*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v73, 1); /*0x100a69d57*/
        v38 = v75; /*0x100a69d5c*/
        if ( !(2 * v75) ) /*0x100a69d6b*/
        {
LABEL_85:
          v39 = v74; /*0x100a69c83*/
          if ( !(2 * v74) ) /*0x100a69c87*/
            goto LABEL_45; /*0x100a69c92*/
          goto LABEL_95; /*0x100a69c92*/
        }
      }
      else
      {
        v38 = v75; /*0x100a69c6e*/
        if ( !(2 * v75) ) /*0x100a69c72*/
          goto LABEL_85; /*0x100a69c7d*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v38, 1); /*0x100a69d7d*/
      v39 = v74; /*0x100a69d82*/
      if ( !(2 * v74) ) /*0x100a69d91*/
        goto LABEL_45; /*0x100a69d91*/
LABEL_95:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v39, 1); /*0x100a69d97*/
      goto LABEL_45; /*0x100a69da8*/
    }
LABEL_80:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v37, 1); /*0x100a69c2b*/
    goto LABEL_81; /*0x100a69c37*/
  }
  v11 = a1 + 12; /*0x100a694e6*/
  v12 = &v41; /*0x100a694eb*/
  for ( j = 21; j; --j ) /*0x100a694f2*/
  {
    *v11 = *(_DWORD *)v12; /*0x100a694f7*/
    v12 = (__int64 **)((char *)v12 + 4); /*0x100a694f7*/
    ++v11; /*0x100a694f7*/
  }
  *(_QWORD *)a1 = v6; /*0x100a694f9*/
  *((_DWORD *)a1 + 2) = v7; /*0x100a694fd*/
  return a1; /*0x100a69937*/
}