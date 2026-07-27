// __ZN13codexmate_lib4core5relay16codex_diagnostic32check_router_unlock_auth_residue @ 0x10050e800 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_diagnostic::check_router_unlock_auth_residue::he3db2ed88eec02b5(
        __int64 a1,
        __int64 a2,
        char a3)
{
  char v4; // r15
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // al
  void *v7; // rax
  void *v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // r15
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  _QWORD *result; // rax
  void *v14; // rax
  void *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r15
  _QWORD *v18; // rax
  _QWORD *v19; // r12
  void *v20; // rax
  void *v21; // r13
  void *v22; // rcx
  __int64 v23; // r8
  void *v24; // rax
  void *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r12
  void *v30; // rax
  void *v31; // r13
  void *v32; // rax
  void *v33; // rbx
  _DWORD *v34; // rax
  _DWORD *v35; // r15
  _QWORD *v36; // rax
  _QWORD *v37; // r12
  void *v38; // rax
  void *v39; // r13

  v4 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(a2); /*0x10050e81f*/
  v5 = codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163(a2); /*0x10050e82a*/
  v6 = codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::h09278a33efdd7fab(a2); /*0x10050e82f*/
  if ( (a3 & 1) == 0 ) /*0x10050e838*/
  {
    if ( v4 == 1 ) /*0x10050ea18*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x10050ea1e*/
      v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x10050ea2d*/
      if ( v14 ) /*0x10050ea35*/
      {
        v15 = v14; /*0x10050ea3b*/
        qmemcpy(v14, "router_unlock_auth_residue", 26); /*0x10050ea64*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(26, 1); /*0x10050ea6d*/
        v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10050ea7c*/
        if ( !v16 ) /*0x10050ea84*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10050ef4a*/
        v17 = v16; /*0x10050ea8a*/
        *(_BYTE *)(v16 + 4) = 114; /*0x10050ea8d*/
        *(_DWORD *)v16 = 1869771365; /*0x10050ea91*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x10050ea97*/
        v18 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x10050eaa6*/
        if ( !v18 ) /*0x10050eaae*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45); /*0x10050ef72*/
        v19 = v18; /*0x10050eab4*/
        *(_QWORD *)((char *)v18 + 37) = 0x9995E78BAEE68DBBLL; /*0x10050eac1*/
        v18[4] = 0xE68DBBE420687475LL; /*0x10050ead0*/
        v18[3] = 0x6120B78FE5A6B4E8LL; /*0x10050eadf*/
        v18[2] = 0x9F8BE69A99E886BDLL; /*0x10050eaee*/
        v18[1] = 0xE4AD97E9B385E5B2LL; /*0x10050eafd*/
        *v18 = 0xB7E5B194E7AFB7E8LL; /*0x10050eb0c*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(45, 1); /*0x10050eb10*/
        v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(122, 1); /*0x10050eb1f*/
        if ( !v20 ) /*0x10050eb27*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 122); /*0x10050ef97*/
        v21 = v20; /*0x10050eb2d*/
        result = memcpy(v20, &unk_1015FE41B, 0x7Au); /*0x10050eb3f*/
        *(_QWORD *)a1 = 26; /*0x10050eb44*/
        *(_QWORD *)(a1 + 8) = v15; /*0x10050eb4b*/
        *(_QWORD *)(a1 + 16) = 26; /*0x10050eb4f*/
        *(_QWORD *)(a1 + 24) = 5; /*0x10050eb57*/
        *(_QWORD *)(a1 + 32) = v17; /*0x10050eb5f*/
        *(_QWORD *)(a1 + 40) = 5; /*0x10050eb63*/
        *(_QWORD *)(a1 + 48) = 45; /*0x10050eb6b*/
        *(_QWORD *)(a1 + 56) = v19; /*0x10050eb73*/
        *(_QWORD *)(a1 + 64) = 45; /*0x10050eb77*/
        *(_QWORD *)(a1 + 72) = 122; /*0x10050eb7f*/
        *(_QWORD *)(a1 + 80) = v21; /*0x10050eb87*/
        *(_QWORD *)(a1 + 88) = 122; /*0x10050eb8b*/
        goto LABEL_28; /*0x10050eb93*/
      }
      goto LABEL_31; /*0x10050ea35*/
    }
    if ( v6 | v5 ) /*0x10050ebc0*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x10050ebc8*/
      v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x10050ebd7*/
      if ( v24 ) /*0x10050ebdf*/
      {
        v25 = v24; /*0x10050ebe5*/
        qmemcpy(v24, "router_unlock_auth_residue", 26); /*0x10050ec0e*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(26, 1); /*0x10050ec17*/
        v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10050ec26*/
        if ( !v26 ) /*0x10050ec2e*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10050efa8*/
        v27 = v26; /*0x10050ec34*/
        *(_BYTE *)(v26 + 4) = 114; /*0x10050ec37*/
        *(_DWORD *)v26 = 1869771365; /*0x10050ec3b*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x10050ec41*/
        v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1); /*0x10050ec50*/
        if ( !v28 ) /*0x10050ec58*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 51); /*0x10050efb9*/
        v29 = v28; /*0x10050ec5e*/
        *(_QWORD *)(v28 + 40) = 0x8BAEE68DBBE4B6BBLL; /*0x10050ec6b*/
        *(_QWORD *)(v28 + 32) = 0xE48796E68DA4E5A2LL; /*0x10050ec7a*/
        *(_QWORD *)(v28 + 24) = 0x81E6B78FE5A6B4E8LL; /*0x10050ec89*/
        *(_QWORD *)(v28 + 16) = 0x9F8BE69A99E886BDLL; /*0x10050ec98*/
        *(_QWORD *)(v28 + 8) = 0xE4AD97E9B385E5B2LL; /*0x10050eca7*/
        *(_QWORD *)v28 = 0xB7E5B194E7AFB7E8LL; /*0x10050ecb6*/
        *(_DWORD *)(v28 + 47) = -1718229109; /*0x10050ecba*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(51, 1); /*0x10050ecc3*/
        v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(130, 1); /*0x10050ecd2*/
        if ( !v30 ) /*0x10050ecda*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 130); /*0x10050efca*/
        v31 = v30; /*0x10050ece0*/
        result = memcpy(v30, &unk_1015FE394, 0x82u); /*0x10050ecf2*/
        *(_QWORD *)a1 = 26; /*0x10050ecf7*/
        *(_QWORD *)(a1 + 8) = v25; /*0x10050ecfe*/
        *(_QWORD *)(a1 + 16) = 26; /*0x10050ed02*/
        *(_QWORD *)(a1 + 24) = 5; /*0x10050ed0a*/
        *(_QWORD *)(a1 + 32) = v27; /*0x10050ed12*/
        *(_QWORD *)(a1 + 40) = 5; /*0x10050ed16*/
        *(_QWORD *)(a1 + 48) = 51; /*0x10050ed1e*/
        *(_QWORD *)(a1 + 56) = v29; /*0x10050ed26*/
        *(_QWORD *)(a1 + 64) = 51; /*0x10050ed2a*/
        *(_QWORD *)(a1 + 72) = 130; /*0x10050ed32*/
        *(_QWORD *)(a1 + 80) = v31; /*0x10050ed3a*/
        *(_QWORD *)(a1 + 88) = 130; /*0x10050ed3e*/
        goto LABEL_28; /*0x10050ed46*/
      }
      goto LABEL_31; /*0x10050ebdf*/
    }
LABEL_29:
    v22 = &unk_1015FE37C; /*0x10050eeee*/
    v23 = 21; /*0x10050ef01*/
    return (_QWORD *)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x10050ef01*/
                       a1,
                       &anon_92869709a5e99ce1936aa4e326b6c562_610,
                       26,
                       v22,
                       v23);
  }
  if ( v6 ) /*0x10050e840*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x10050e846*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x10050e855*/
    if ( v7 ) /*0x10050e85d*/
    {
      v8 = v7; /*0x10050e863*/
      qmemcpy(v7, "router_unlock_auth_residue", 26); /*0x10050e88c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(26, 1); /*0x10050e895*/
      v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10050e8a4*/
      if ( !v9 ) /*0x10050e8ac*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10050ef36*/
      v10 = v9; /*0x10050e8b2*/
      *(_DWORD *)((char *)v9 + 3) = 1735289198; /*0x10050e8b5*/
      *v9 = 1852989815; /*0x10050e8bc*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x10050e8c2*/
      v11 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x10050e8d1*/
      if ( !v11 ) /*0x10050e8d9*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45); /*0x10050ef5e*/
      v12 = v11; /*0x10050e8df*/
      *(_QWORD *)((char *)v11 + 37) = 0x9995E78BAEE6B6BBLL; /*0x10050e8ec*/
      v11[4] = 0xE6B6BBE48796E68DLL; /*0x10050e8fb*/
      v11[3] = 0xA4E5A281E6B78FE5LL; /*0x10050e90a*/
      v11[2] = 0xA6B4E89F8BE69A99LL; /*0x10050e919*/
      v11[1] = 0xE88889E7A797E6B0LL; /*0x10050e928*/
      *v11 = 0x88E58BB5E680A3E6LL; /*0x10050e937*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(45, 1); /*0x10050e93b*/
      result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1); /*0x10050e94a*/
      if ( !result ) /*0x10050e952*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 60); /*0x10050ef86*/
      result[6] = 0x80E6B68AE781AFE8LL; /*0x10050e962*/
      result[5] = 0xA4AEE880B8E49FBBLL; /*0x10050e970*/
      result[4] = 0xE7B088E5BBA7E781LL; /*0x10050e97e*/
      result[3] = 0xBFE8B6B9E58FBCE5LL; /*0x10050e98c*/
      result[2] = 0xA1A8E695BDE5BB99LL; /*0x10050e99a*/
      result[1] = 0xE78D89E593BDE581LL; /*0x10050e9a8*/
      *result = 0x8CE69DBFE486B0E5LL; /*0x10050e9b6*/
      *((_DWORD *)result + 14) = -2105482367; /*0x10050e9b9*/
      *(_QWORD *)a1 = 26; /*0x10050e9c0*/
      *(_QWORD *)(a1 + 8) = v8; /*0x10050e9c7*/
      *(_QWORD *)(a1 + 16) = 26; /*0x10050e9cb*/
      *(_QWORD *)(a1 + 24) = 7; /*0x10050e9d3*/
      *(_QWORD *)(a1 + 32) = v10; /*0x10050e9db*/
      *(_QWORD *)(a1 + 40) = 7; /*0x10050e9df*/
      *(_QWORD *)(a1 + 48) = 45; /*0x10050e9e7*/
      *(_QWORD *)(a1 + 56) = v12; /*0x10050e9ef*/
      *(_QWORD *)(a1 + 64) = 45; /*0x10050e9f3*/
      *(_QWORD *)(a1 + 72) = 60; /*0x10050e9fb*/
      *(_QWORD *)(a1 + 80) = result; /*0x10050ea03*/
      *(_QWORD *)(a1 + 88) = 60; /*0x10050ea07*/
LABEL_28:
      *(_BYTE *)(a1 + 96) = 1; /*0x10050eeda*/
      return result; /*0x10050eeed*/
    }
    goto LABEL_31; /*0x10050e85d*/
  }
  if ( v4 != 1 ) /*0x10050eb9c*/
  {
    if ( v5 ) /*0x10050ed4d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x10050ed53*/
      v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x10050ed62*/
      if ( v32 ) /*0x10050ed6a*/
      {
        v33 = v32; /*0x10050ed70*/
        qmemcpy(v32, "router_unlock_auth_residue", 26); /*0x10050ed99*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(26, 1); /*0x10050eda2*/
        v34 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10050edb1*/
        if ( !v34 ) /*0x10050edb9*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10050efdb*/
        v35 = v34; /*0x10050edbf*/
        *(_DWORD *)((char *)v34 + 3) = 1735289198; /*0x10050edc2*/
        *v34 = 1852989815; /*0x10050edc9*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x10050edcf*/
        v36 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1); /*0x10050edde*/
        if ( !v36 ) /*0x10050ede6*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 53); /*0x10050efec*/
        v37 = v36; /*0x10050edec*/
        *(_QWORD *)((char *)v36 + 45) = 0x968CE5988FE5B2B7LL; /*0x10050edf9*/
        v36[5] = 0xE5B2B7E5206E6F73LL; /*0x10050ee08*/
        v36[4] = 0x6A2E687475612086LL; /*0x10050ee17*/
        v36[3] = 0xBDE49995E78BAEE6LL; /*0x10050ee26*/
        v36[2] = 0xB6BBE48796E68DA4LL; /*0x10050ee35*/
        v36[1] = 0xE5A281E6B78FE5A6LL; /*0x10050ee44*/
        *v36 = 0xB4E89F8BE69A99E8LL; /*0x10050ee53*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(53, 1); /*0x10050ee57*/
        v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(69, 1); /*0x10050ee66*/
        if ( !v38 ) /*0x10050ee6e*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 69); /*0x10050effd*/
        v39 = v38; /*0x10050ee74*/
        result = memcpy(v38, &unk_1015FE49A, 0x45u); /*0x10050ee86*/
        *(_QWORD *)a1 = 26; /*0x10050ee8b*/
        *(_QWORD *)(a1 + 8) = v33; /*0x10050ee92*/
        *(_QWORD *)(a1 + 16) = 26; /*0x10050ee96*/
        *(_QWORD *)(a1 + 24) = 7; /*0x10050ee9e*/
        *(_QWORD *)(a1 + 32) = v35; /*0x10050eea6*/
        *(_QWORD *)(a1 + 40) = 7; /*0x10050eeaa*/
        *(_QWORD *)(a1 + 48) = 53; /*0x10050eeb2*/
        *(_QWORD *)(a1 + 56) = v37; /*0x10050eeba*/
        *(_QWORD *)(a1 + 64) = 53; /*0x10050eebe*/
        *(_QWORD *)(a1 + 72) = 69; /*0x10050eec6*/
        *(_QWORD *)(a1 + 80) = v39; /*0x10050eece*/
        *(_QWORD *)(a1 + 88) = 69; /*0x10050eed2*/
        goto LABEL_28; /*0x10050eed2*/
      }
LABEL_31:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x10050ef1d*/
    }
    goto LABEL_29; /*0x10050ed4d*/
  }
  v22 = &unk_1015FE4DF; /*0x10050eba9*/
  v23 = 30; /*0x10050ebb5*/
  return (_QWORD *)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x10050eee3*/
                     a1,
                     &anon_92869709a5e99ce1936aa4e326b6c562_610,
                     26,
                     v22,
                     v23);
}