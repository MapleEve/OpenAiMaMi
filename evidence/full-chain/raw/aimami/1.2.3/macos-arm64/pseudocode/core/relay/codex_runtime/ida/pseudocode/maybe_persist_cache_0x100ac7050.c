// __ZN13codexmate_lib4core5relay13codex_runtime19maybe_persist_cache @ 0x100ac7050 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_runtime::maybe_persist_cache::h21efd8099eef9b8c(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 **a4,
        int a5,
        double result)
{
  __int64 v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // r15
  __int64 (__fastcall **v16)(); // r12
  __int64 v17; // r13
  _QWORD *v18; // r14
  __int64 v19; // rsi
  _QWORD *v20; // rsi
  __int64 **v21; // rdi
  __int64 **v22; // r12
  __int64 *v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r9
  size_t v26; // r12
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 **v30; // r15
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 *v35; // [rsp+8h] [rbp-B8h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+10h] [rbp-B0h]
  __int64 v37; // [rsp+18h] [rbp-A8h]
  __int64 v38; // [rsp+20h] [rbp-A0h]
  char v39; // [rsp+28h] [rbp-98h]
  __int64 v40; // [rsp+30h] [rbp-90h] BYREF
  __int64 v41; // [rsp+38h] [rbp-88h]
  __int64 v42; // [rsp+40h] [rbp-80h]
  int v43; // [rsp+48h] [rbp-78h] BYREF
  __int64 v44; // [rsp+50h] [rbp-70h] BYREF
  void *__src; // [rsp+58h] [rbp-68h]
  _QWORD *v46; // [rsp+60h] [rbp-60h] BYREF
  __int64 **v47; // [rsp+68h] [rbp-58h]
  size_t v48; // [rsp+70h] [rbp-50h]
  __int64 *v49; // [rsp+78h] [rbp-48h]
  __int64 v50; // [rsp+80h] [rbp-40h] BYREF
  __int64 v51; // [rsp+88h] [rbp-38h]
  __int64 v52; // [rsp+90h] [rbp-30h]

  if ( !a5 ) /*0x100ac706a*/
  {
    *a1 = 11; /*0x100ac708f*/
    return result; /*0x100ac708f*/
  }
  v9 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x100ac7078*/
  if ( v9 ) /*0x100ac7080*/
  {
    *a1 = 2; /*0x100ac7082*/
    a1[1] = v9; /*0x100ac7089*/
    return result; /*0x100ac708d*/
  }
  v46 = a3; /*0x100ac70a8*/
  v47 = a4; /*0x100ac70ac*/
  v50 = 0; /*0x100ac70b0*/
  v51 = 1; /*0x100ac70b8*/
  v52 = 0; /*0x100ac70c0*/
  v37 = 1610612768; /*0x100ac70c8*/
  v35 = &v50; /*0x100ac70d7*/
  v36 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100ac70e5*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v46, &v35) ) /*0x100ac70fa*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100ac7537*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      &v44,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v40 = v50; /*0x100ac710f*/
  v41 = v51; /*0x100ac7116*/
  v42 = v52; /*0x100ac7121*/
  v43 = 1; /*0x100ac7125*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v46, &v35); /*0x100ac712c*/
  v10 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100ac713b*/
  if ( !v10 ) /*0x100ac7143*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100ac7548*/
  v50 = 128; /*0x100ac714d*/
  v51 = (__int64)v10; /*0x100ac7155*/
  v35 = &v50; /*0x100ac7159*/
  v36 = (__int64 (__fastcall **)())&unk_10167BCD0; /*0x100ac7167*/
  v37 = 2; /*0x100ac716e*/
  v38 = 1; /*0x100ac7179*/
  v39 = 0; /*0x100ac7184*/
  *v10 = 123; /*0x100ac718b*/
  v52 = 1; /*0x100ac718e*/
  LOWORD(v46) = 256; /*0x100ac7196*/
  v47 = &v35; /*0x100ac719c*/
  v11 = serde_core::ser::SerializeMap::serialize_entry::hfdca63bb8e825f2c( /*0x100ac71b8*/
          &v46,
          &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_218,
          13,
          &v43);
  if ( v11 ) /*0x100ac71be*/
    goto LABEL_12; /*0x100ac71be*/
  if ( (_BYTE)v46 == 1 ) /*0x100ac71c4*/
  {
    v11 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(result); /*0x100ac71cb*/
    goto LABEL_12; /*0x100ac71ce*/
  }
  v11 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100ac71ec*/
          &v46,
          "stateDbthread_sourcepreviewrecency_atrecency_at_mshistory_modePRAGMA table_info(threads)",
          7,
          &v40);
  if ( v11 ) /*0x100ac71f2*/
  {
LABEL_12:
    if ( v50 ) /*0x100ac71ff*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x100ac720a*/
    goto LABEL_14; /*0x100ac720a*/
  }
  if ( ((unsigned __int8)v46 & 1) == 0 && BYTE1(v46) ) /*0x100ac72db*/
  {
    v22 = v47; /*0x100ac72e1*/
    v23 = *v47; /*0x100ac72e5*/
    v24 = (__int64)v47[3] - 1; /*0x100ac72ee*/
    v47[3] = (__int64 *)v24; /*0x100ac72f1*/
    if ( *((_BYTE *)v22 + 32) == 1 ) /*0x100ac72fc*/
    {
      v49 = v23; /*0x100ac730e*/
      alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100ac7312*/
        v23,
        "\n"
        "struct RegistryFilestruct RegistryItemstruct HotspotConfigstruct AutoSwitchConfigstruct CodexMateSettingsstruct "
        "MysteryRouteGrantstruct AutoSwitchSnoozeRecordstruct VoiceWorkspaceFilestruct RuntimeCache",
        1);
      v23 = v49; /*0x100ac731a*/
      if ( v24 ) /*0x100ac731e*/
      {
        __src = v22[1]; /*0x100ac7325*/
        v26 = (size_t)v22[2]; /*0x100ac7329*/
        v27 = v49[2]; /*0x100ac732e*/
        do /*0x100ac7362*/
        {
          if ( v26 > *v23 - v27 ) /*0x100ac733b*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100ac7377*/
              v23,
              v27,
              v26,
              1,
              1,
              v25);
            v27 = v49[2]; /*0x100ac7380*/
          }
          memcpy((void *)(v27 + v49[1]), __src, v26); /*0x100ac734f*/
          v23 = v49; /*0x100ac7354*/
          v27 += v26; /*0x100ac7358*/
          v49[2] = v27; /*0x100ac735b*/
          --v24; /*0x100ac735f*/
        }
        while ( v24 ); /*0x100ac7362*/
      }
    }
    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(v23, &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_2, 1); /*0x100ac7392*/
  }
  v28 = v50; /*0x100ac739b*/
  v11 = v51; /*0x100ac739f*/
  if ( __OFSUB__(-v50, 1) ) /*0x100ac73a9*/
  {
LABEL_14:
    v46 = (_QWORD *)v11; /*0x100ac720f*/
    v50 = (__int64)&v46; /*0x100ac7213*/
    v51 = (__int64)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100ac721e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v35, &unk_1017C9F3E, &v50); /*0x100ac7234*/
    v15 = v35; /*0x100ac7239*/
    v16 = v36; /*0x100ac7240*/
    v17 = v37; /*0x100ac7247*/
    v18 = v46; /*0x100ac724e*/
    if ( *v46 == 1 ) /*0x100ac7259*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v46 + 1, &unk_1017C9F3E, v12, v13, v14); /*0x100ac727d*/
    }
    else if ( !*v46 ) /*0x100ac7252*/
    {
      v19 = v46[2]; /*0x100ac7260*/
      if ( v19 ) /*0x100ac7267*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46[1], v19, 1); /*0x100ac7272*/
    }
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 40, 8); /*0x100ac728f*/
    *a1 = 10; /*0x100ac7294*/
    a1[1] = v15; /*0x100ac729b*/
    a1[2] = v16; /*0x100ac729f*/
    a1[3] = v17; /*0x100ac72a3*/
    v20 = (_QWORD *)v40; /*0x100ac72a7*/
    if ( v40 ) /*0x100ac72b1*/
    {
      v21 = (__int64 **)v41; /*0x100ac72b7*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x100ac72c8*/
    }
    return result; /*0x100ac72b1*/
  }
  v29 = v52; /*0x100ac73af*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v46, a2[73], a2[74], &unk_10167CEE7, 25); /*0x100ac73d2*/
  v30 = v47; /*0x100ac73d7*/
  v31 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v47, v48, v11, v29, 1); /*0x100ac73ee*/
  if ( v31 ) /*0x100ac73f6*/
  {
    v44 = v31; /*0x100ac73fc*/
    v50 = (__int64)&v44; /*0x100ac7404*/
    v51 = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100ac740f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v35, &unk_1017C9F6E, &v50); /*0x100ac7425*/
    v50 = (__int64)v35; /*0x100ac7438*/
    v51 = (__int64)v36; /*0x100ac743c*/
    v52 = v37; /*0x100ac7447*/
    if ( (v44 & 3) == 1 ) /*0x100ac7457*/
    {
      __src = (void *)(v44 - 1); /*0x100ac745d*/
      v49 = *(__int64 **)(v44 - 1); /*0x100ac7465*/
      v32 = *(_QWORD *)(v44 + 7); /*0x100ac7469*/
      if ( *(_QWORD *)v32 ) /*0x100ac746d*/
        (*(void (__fastcall **)(__int64 *))v32)(v49); /*0x100ac747a*/
      v33 = *(_QWORD *)(v32 + 8); /*0x100ac7480*/
      if ( v33 ) /*0x100ac7487*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v33, *(_QWORD *)(v32 + 16)); /*0x100ac748d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, 24, 8); /*0x100ac74a0*/
    }
    *a1 = 10; /*0x100ac74a5*/
    v34 = v51; /*0x100ac74b0*/
    a1[1] = v50; /*0x100ac74b4*/
    a1[2] = v34; /*0x100ac74b8*/
    a1[3] = v52; /*0x100ac74c0*/
  }
  else
  {
    *a1 = 11; /*0x100ac74c6*/
  }
  if ( v28 ) /*0x100ac74d0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v28, 1); /*0x100ac74dd*/
  if ( v40 ) /*0x100ac74ec*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x100ac74fa*/
  v20 = v46; /*0x100ac74ff*/
  if ( v46 ) /*0x100ac7506*/
  {
    v21 = v30; /*0x100ac7511*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x100ac7514*/
  }
  return result; /*0x100ac7096*/
}