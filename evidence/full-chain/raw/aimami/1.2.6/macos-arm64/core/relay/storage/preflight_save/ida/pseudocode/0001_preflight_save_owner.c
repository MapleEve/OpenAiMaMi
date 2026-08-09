// codexmate_lib::core::relay::storage::preflight_save
// owner_ea: 0x100773b70, size: 0x4f5
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// DESTRUCTIVE SIDE EFFECTS: remove_file_cleanup_on_failure, atomic_write
// notes: Relay state preflight: ensure_dirs->is_dir->metadata->serde_json->uuid temp->atomic_write->cleanup

// 1.2.4→1.2.6 delta 新增函数: relay 状态持久化写盘前预检查+原子写入。ensure_directories→metadata 探测→serde_json::to_vec_pretty→uuid v4 临时文件名→write_atomic_with_mode 原子写入。失败时 remove_file 清理临时文件。caller: RelayManager::preflight_repair_state_write/reconcile_current_mode_locked。A-level owner for storage::preflight_save
_QWORD *__fastcall codexmate_lib::core::relay::storage::preflight_save::h947fb87b5cf1099b(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  void *v6; // r15
  size_t v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r12d
  __int64 v12; // rcx
  char *v13; // r14
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rsi
  _DWORD *v17; // rdi
  _DWORD *v18; // rsi
  __int64 i; // rcx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r13
  void *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // r14
  void *v28; // r12
  size_t v29; // r15
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rax
  void *v36; // rax
  __int64 v37; // rax
  _OWORD v39[9]; // [rsp+0h] [rbp-130h] BYREF
  __int64 v40; // [rsp+98h] [rbp-98h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-90h]
  __int64 v42; // [rsp+A8h] [rbp-88h]
  __int64 v43; // [rsp+B0h] [rbp-80h] BYREF
  void *__src; // [rsp+B8h] [rbp-78h]
  size_t __n; // [rsp+C0h] [rbp-70h]
  char *v46; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-60h]
  __int64 v48; // [rsp+D8h] [rbp-58h]
  _BYTE v49[24]; // [rsp+E0h] [rbp-50h] BYREF
  _BYTE v50[10]; // [rsp+F8h] [rbp-38h] BYREF
  __int16 v51; // [rsp+102h] [rbp-2Eh]

  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h11ee5c38df4ac403(a2);
  if ( v5 )
  {
    *a1 = 2;
    a1[1] = v5;
    return a1;
  }
  v6 = *(void **)(a2 + 608);
  v7 = *(_QWORD *)(a2 + 616);
  if ( (unsigned __int8)std::path::Path::is_dir::h7ca012509d3e379e(v6, v7) )
  {
    *(_QWORD *)v49 = v6;
    *(_QWORD *)&v49[8] = v7;
    *(_QWORD *)&v39[0] = v49;
    *((_QWORD *)&v39[0] + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &unk_101861A70, v39);
    *a1 = 10;
    return a1;
  }
  std::sys::fs::metadata::h32fa16d3052ea535(v39, v6, v7);
  if ( LODWORD(v39[0]) == 1 )
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9cabf27c050b892b(
      1,
      *((_QWORD *)&v39[0] + 1));
    goto LABEL_19;
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9cabf27c050b892b(
    0,
    *((_QWORD *)&v39[0] + 1));
  *(_DWORD *)v50 = 0;
  *(_WORD *)&v50[4] = 438;
  *(_DWORD *)&v50[6] = 256;
  v51 = 0;
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v43, v50, v6, v7);
  if ( (_DWORD)v43 != 1 )
  {
    close_NOCANCEL(HIDWORD(v43));
LABEL_19:
    serde_json::ser::to_vec_pretty::hfd88d93f8b96c545(v39, a3);
    v20 = *((_QWORD *)&v39[0] + 1);
    v21 = *(_QWORD *)&v39[0];
    if ( __OFSUB__(-*(_QWORD *)&v39[0], 1) )
    {
      *a1 = 3;
      a1[1] = v20;
    }
    else
    {
      v47 = *((_QWORD *)&v39[0] + 1);
      v22 = *(_QWORD *)&v39[1];
      v23 = v6;
      v25 = std::path::Path::parent::h4c3ac26770731fbb(v6, v7);
      if ( v25 )
      {
        v26 = v24;
        *(_DWORD *)v50 = std::process::id::ha72f58ec62264e78();
        uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v39);
        *(_OWORD *)v49 = v39[0];
        *(_QWORD *)&v39[0] = v50;
        *((_QWORD *)&v39[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
        *(_QWORD *)&v39[1] = v49;
        *((_QWORD *)&v39[1] + 1) = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v40, &unk_101861A53, v39);
        v48 = v21;
        v27 = v41;
        std::path::Path::_join::hb1a495d4f06b13b8(&v43, v25, v26, v41, v42);
        if ( v40 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v40, 1);
        v28 = __src;
        v29 = __n;
        v21 = v48;
        v30 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hf39edbc2f11d2716(
                __src,
                __n,
                v47,
                v22,
                1);
        if ( v30 )
        {
          *(_QWORD *)v50 = v30;
          *(_QWORD *)v49 = v50;
          *(_QWORD *)&v49[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_101861AA7, v49);
          *(_OWORD *)v49 = v39[0];
          *(_QWORD *)&v49[16] = *(_QWORD *)&v39[1];
          if ( (v50[0] & 3) == 1 )
          {
            v31 = *(_QWORD *)v50 - 1LL;
            v32 = *(_QWORD *)(*(_QWORD *)v50 - 1LL);
            v33 = *(_QWORD *)(*(_QWORD *)v50 + 7LL);
            if ( *(_QWORD *)v33 )
              (*(void (__fastcall **)(__int64))v33)(v32);
            v34 = *(_QWORD *)(v33 + 8);
            if ( v34 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v34, *(_QWORD *)(v33 + 16));
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 24, 8);
            v21 = v48;
          }
          a1[3] = *(_QWORD *)&v49[16];
          v35 = *(_QWORD *)v49;
          a1[2] = *(_QWORD *)&v49[8];
          a1[1] = v35;
          *a1 = 10;
        }
        else
        {
          v37 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v28, v29);
          if ( v37 )
          {
            codexmate_lib::core::relay::storage::preflight_save::_$u7b$$u7b$closure$u7d$$u7d$::hc4a2b8e39e0de2a7(
              v39,
              v28,
              v29,
              v37);
            qmemcpy(a1, v39, 0x60u);
          }
          else
          {
            *a1 = 11;
          }
        }
        if ( v43 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v43, 1);
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v7);
        v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1);
        if ( !v36 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40);
        qmemcpy(v36, "relay state path has no parent directory", 40);
        *a1 = 10;
        a1[1] = 40;
        a1[2] = v36;
        a1[3] = 40;
      }
      if ( v21 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v21, 1);
    }
    return a1;
  }
  v46 = (char *)__src;
  *(_QWORD *)&v39[0] = &v46;
  *((_QWORD *)&v39[0] + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v49, &unk_101861ACE, v39);
  v11 = *(_DWORD *)v49;
  v39[0] = *(_OWORD *)&v49[4];
  LODWORD(v39[1]) = *(_DWORD *)&v49[20];
  v12 = (unsigned __int8)v46 & 3;
  if ( (_DWORD)v12 == 1 )
  {
    v13 = v46 - 1;
    v14 = *(_QWORD *)(v46 - 1);
    v15 = *(_QWORD *)(v46 + 7);
    if ( *(_QWORD *)v15 )
      (*(void (__fastcall **)(__int64, void *, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _DWORD))v15)(
        v14,
        &unk_101861ACE,
        v8,
        v12,
        v9,
        v10,
        *(_QWORD *)&v39[0],
        *((_QWORD *)&v39[0] + 1),
        v39[1]);
    v16 = *(_QWORD *)(v15 + 8);
    if ( v16 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8);
  }
  v17 = (_DWORD *)a1 + 3;
  v18 = v39;
  for ( i = 21; i; --i )
    *v17++ = *v18++;
  *a1 = 10;
  *((_DWORD *)a1 + 2) = v11;
  return a1;
}

