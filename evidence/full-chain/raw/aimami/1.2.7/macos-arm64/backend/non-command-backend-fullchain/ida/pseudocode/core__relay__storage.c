// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/storage
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::storage::preflight_save::hbc9e84ee879b9b57 @ 0x10087b3f0 size=1270 lines=231 =====
_QWORD *__fastcall codexmate_lib::core::relay::storage::preflight_save::hbc9e84ee879b9b57(
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
  __int64 v30; // rdx
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

  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h388e0ba1cfe56cce(a2);
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
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &unk_101A3A939, v39);
    *a1 = 10;
    return a1;
  }
  std::sys::fs::metadata::h32fa16d3052ea535(v39, v6, v7);
  if ( LODWORD(v39[0]) == 1 )
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hdef24fa1b6e82a06(
      1,
      *((_QWORD *)&v39[0] + 1));
    goto LABEL_19;
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hdef24fa1b6e82a06(
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
    serde_json::ser::to_vec_pretty::h867d44453d07fc16(v39, a3);
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
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v40, &unk_101A3A91C, v39);
        v48 = v21;
        v27 = v41;
        std::path::Path::_join::hb1a495d4f06b13b8(&v43, v25, v26, v41, v42);
        if ( v40 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v40, 1);
        v28 = __src;
        v29 = __n;
        v21 = v48;
        if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hcd723884b82d3047(
                __src,
                __n,
                v47,
                v22)
            & 1) != 0 )
        {
          *(_QWORD *)v50 = v30;
          *(_QWORD *)v49 = v50;
          *(_QWORD *)&v49[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_101A3A9CF, v49);
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
          codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hb1198e95828e3009(v30);
          v37 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v28, v29);
          if ( v37 )
          {
            codexmate_lib::core::relay::storage::preflight_save::_$u7b$$u7b$closure$u7d$$u7d$::hc40f4b629fe1b67a(
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
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23);
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
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v49, &unk_101A3A970, v39);
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
        &unk_101A3A970,
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

// ===== codexmate_lib::core::relay::storage::verify_router_commit::hd5492fcc8b34678e @ 0x10087c600 size=922 lines=152 =====
__int64 __fastcall codexmate_lib::core::relay::storage::verify_router_commit::hd5492fcc8b34678e(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  void *v7; // rax
  void *v8; // r14
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  void (__fastcall *v12)(__int64); // rax
  __int64 v13; // rsi
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // r14
  void *v17; // rax
  void *v18; // r15
  char v19; // dl
  void *v20; // rax
  void *v21; // r14
  __int64 v23; // [rsp+8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+10h] [rbp-60h]
  __int64 v25; // [rsp+18h] [rbp-58h]
  __int64 v26; // [rsp+20h] [rbp-50h]
  __int64 v27; // [rsp+28h] [rbp-48h]
  int v28; // [rsp+30h] [rbp-40h]
  _BYTE v29[21]; // [rsp+38h] [rbp-38h] BYREF
  char v30; // [rsp+4Dh] [rbp-23h]
  char v31; // [rsp+4Eh] [rbp-22h]

  *(_DWORD *)v29 = 0;
  *(_WORD *)&v29[4] = 438;
  *(_DWORD *)&v29[6] = 1;
  *(_WORD *)&v29[10] = 0;
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v23, v29, *(_QWORD *)(a2 + 608), *(_QWORD *)(a2 + 616));
  if ( (_DWORD)v23 != 1 )
  {
    v14 = HIDWORD(v23);
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v23);
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1);
    if ( !v15 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000);
    v23 = v15;
    v24 = 0x2000;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = v14;
    serde_json::de::from_reader::h2297b33eebc02e68(v29, &v23);
    if ( v31 == 2 )
    {
      v16 = *(_QWORD *)v29;
      v23 = *(_QWORD *)v29;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29);
      v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(139, 1);
      if ( !v17 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 139);
      v18 = v17;
      memcpy(v17, &unk_1018CE84B, 0x8Bu);
      core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::hcd642d706d35d819(v16);
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 40, 8);
      *(_QWORD *)a1 = 10;
      *(_DWORD *)(a1 + 8) = 139;
      *(_BYTE *)(a1 + 12) = 0;
      *(_BYTE *)(a1 + 15) = 0;
      *(_WORD *)(a1 + 13) = 0;
      *(_QWORD *)(a1 + 16) = v18;
      *(_BYTE *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 24) = 139;
      *(_WORD *)(a1 + 29) = 0;
      *(_BYTE *)(a1 + 31) = 0;
      return a1;
    }
    if ( *(_DWORD *)v29 != *(_DWORD *)(a3 + 360) )
      goto LABEL_22;
    v19 = *(_BYTE *)(a3 + 365);
    if ( (v29[4] & 1) != 0 )
    {
      if ( !v19 )
      {
LABEL_22:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29);
        v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(139, 1);
        if ( !v20 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 139);
        v21 = v20;
        memcpy(v20, &unk_1018CE84B, 0x8Bu);
        *(_QWORD *)a1 = 10;
        *(_QWORD *)(a1 + 8) = 139;
        *(_QWORD *)(a1 + 16) = v21;
        *(_QWORD *)(a1 + 24) = 139;
        return a1;
      }
      v19 = *(_OWORD *)(a3 + 366) != *(_OWORD *)&v29[5];
    }
    if ( !v19 && v30 == *(_BYTE *)(a3 + 364) && ((v30 & 1) == 0 || v31 == *(_BYTE *)(a3 + 382)) )
    {
      *(_QWORD *)a1 = 11;
      return a1;
    }
    goto LABEL_22;
  }
  v5 = v24;
  v6 = v24;
  if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v24)
    && !*(_BYTE *)(a3 + 365)
    && !*(_BYTE *)(a3 + 364) )
  {
    *(_QWORD *)a1 = 11;
    if ( (v5 & 3) != 1 )
      return a1;
    v9 = v5 - 1;
    v10 = *(_QWORD *)(v5 - 1);
    v11 = *(_QWORD *)(v5 + 7);
    v12 = *(void (__fastcall **)(__int64))v11;
    if ( !*(_QWORD *)v11 )
      goto LABEL_7;
    goto LABEL_6;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6);
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(139, 1);
  if ( !v7 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 139);
  v8 = v7;
  memcpy(v7, &unk_1018CE84B, 0x8Bu);
  *(_QWORD *)a1 = 10;
  *(_QWORD *)(a1 + 8) = 139;
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 24) = 139;
  if ( (v5 & 3) == 1 )
  {
    v9 = v5 - 1;
    v10 = *(_QWORD *)(v5 - 1);
    v11 = *(_QWORD *)(v5 + 7);
    v12 = *(void (__fastcall **)(__int64))v11;
    if ( !*(_QWORD *)v11 )
    {
LABEL_7:
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v13, *(_QWORD *)(v11 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8);
      return a1;
    }
LABEL_6:
    v12(v10);
    goto LABEL_7;
  }
  return a1;
}

// ===== codexmate_lib::core::relay::storage::no_account_router_active::hf62a5809d871f80a @ 0x10087ccf0 size=645 lines=127 =====
__int64 __fastcall codexmate_lib::core::relay::storage::no_account_router_active::hf62a5809d871f80a(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  char v12; // r13
  __int64 v13; // r12
  char v14; // cl
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r14
  _QWORD v21[3]; // [rsp+0h] [rbp-D0h] BYREF
  _BYTE __src[86]; // [rsp+18h] [rbp-B8h] BYREF
  _BYTE v23[24]; // [rsp+70h] [rbp-60h] BYREF
  __int64 v24; // [rsp+88h] [rbp-48h] BYREF
  _QWORD v25[2]; // [rsp+90h] [rbp-40h] BYREF
  char v26; // [rsp+A7h] [rbp-29h]

  std::fs::read::inner::h6a30c15c40add28b(__src, *(_QWORD *)(a2 + 608), *(_QWORD *)(a2 + 616));
  v3 = *(_QWORD *)__src;
  v4 = *(_QWORD *)&__src[8];
  if ( !__OFSUB__(-*(_QWORD *)__src, 1) )
  {
    *(_OWORD *)__src = *(_OWORD *)&__src[8];
    *(_QWORD *)&__src[16] = 0;
    *(_QWORD *)&__src[24] = 0;
    serde_json::de::from_trait::h10bc31cb50c6cc49(v25, __src);
    if ( LOBYTE(v25[0]) == 1 )
    {
      v24 = v25[1];
      *(_QWORD *)__src = &v24;
      *(_QWORD *)&__src[8] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v23, &unk_101A3AB0A, __src);
      v12 = v23[0];
      v26 = v23[1];
      *(_OWORD *)__src = *(_OWORD *)&v23[2];
      *(_QWORD *)&__src[14] = *(_QWORD *)&v23[16];
      v13 = v24;
      core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::hcd642d706d35d819(v24);
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 40, 8);
      memcpy((void *)(a1 + 10), __src, 0x56u);
      *(_QWORD *)a1 = 9;
      *(_BYTE *)(a1 + 8) = v12;
      *(_BYTE *)(a1 + 9) = v26;
      if ( !v3 )
        return a1;
    }
    else
    {
      v14 = 0;
      if ( BYTE1(v25[0]) )
        v14 = BYTE2(v25[0]);
      *(_BYTE *)(a1 + 8) = v14;
      *(_QWORD *)a1 = 11;
      if ( !v3 )
        return a1;
    }
    v15 = 1;
    v16 = v4;
    v17 = v3;
LABEL_22:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v17, v15);
    return a1;
  }
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(*(_QWORD *)&__src[8]) )
  {
    v25[0] = v4;
    *(_QWORD *)v23 = v25;
    *(_QWORD *)&v23[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v21, &unk_101A3AAEE, v23);
    *(_QWORD *)(a1 + 24) = v21[2];
    v5 = v21[0];
    *(_QWORD *)(a1 + 16) = v21[1];
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 10;
    if ( (v25[0] & 3) == 1 )
    {
      v6 = v25[0] - 1LL;
      v7 = *(_QWORD *)(v25[0] - 1LL);
      v8 = *(_QWORD *)(v25[0] + 7LL);
      if ( *(_QWORD *)v8 )
        (*(void (__fastcall **)(__int64))v8)(v7);
      v9 = *(_QWORD *)(v8 + 8);
      if ( !v9 )
        goto LABEL_21;
      v10 = *(_QWORD *)(v8 + 16);
      v11 = v7;
LABEL_20:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v9, v10);
LABEL_21:
      v17 = 24;
      v15 = 8;
      v16 = v6;
      goto LABEL_22;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 11;
    if ( (v4 & 3) == 1 )
    {
      v6 = v4 - 1;
      v18 = *(_QWORD *)(v4 - 1);
      v19 = *(_QWORD *)(v4 + 7);
      if ( *(_QWORD *)v19 )
        (*(void (__fastcall **)(__int64))v19)(v18);
      v9 = *(_QWORD *)(v19 + 8);
      if ( !v9 )
        goto LABEL_21;
      v10 = *(_QWORD *)(v19 + 16);
      v11 = v18;
      goto LABEL_20;
    }
  }
  return a1;
}

// ===== codexmate_lib::core::relay::storage::cache_loaded_api_key::he067dd4765fea3c3 @ 0x10087c1c0 size=603 lines=83 =====
void __fastcall codexmate_lib::core::relay::storage::cache_loaded_api_key::he067dd4765fea3c3(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r13
  const void *v6; // r14
  size_t v7; // r15
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // [rsp+0h] [rbp-90h]
  __int64 v12; // [rsp+8h] [rbp-88h]
  void *__s2; // [rsp+10h] [rbp-80h]
  void *v15; // [rsp+20h] [rbp-70h]
  void *v16; // [rsp+28h] [rbp-68h]
  void *v17; // [rsp+30h] [rbp-60h]
  size_t __n; // [rsp+38h] [rbp-58h]
  size_t v19; // [rsp+40h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-48h]
  size_t v21; // [rsp+50h] [rbp-40h]
  size_t v22; // [rsp+58h] [rbp-38h]
  char v23; // [rsp+66h] [rbp-2Ah]
  char v24; // [rsp+67h] [rbp-29h]

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = v3 << 8;
    v6 = *(const void **)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)(a2 + 232);
    v12 = *(_QWORD *)(a2 + 240);
    __n = *(_QWORD *)(a2 + 64);
    __s2 = *(void **)(a2 + 56);
    v19 = *(_QWORD *)(a2 + 160);
    v23 = *(_BYTE *)(a2 + 253);
    v24 = *(_BYTE *)(a2 + 252);
    v8 = *(_QWORD *)(a2 + 192) ^ 0x8000000000000000LL;
    if ( *(__int64 *)(a2 + 192) >= 0 )
      v8 = 2;
    v20 = v8;
    v15 = *(void **)(a2 + 152);
    v22 = *(_QWORD *)(a2 + 208);
    v17 = *(void **)(a2 + 200);
    v21 = *(_QWORD *)(a2 + 88);
    v16 = *(void **)(a2 + 80);
    v9 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v4 + v9 + 16) == v7
        && !memcmp(*(const void **)(v4 + v9 + 8), v6, v7)
        && *(_QWORD *)(v4 + v9 + 232) == v11
        && *(_QWORD *)(v4 + v9 + 240) == v12
        && *(_QWORD *)(v4 + v9 + 64) == __n
        && !memcmp(*(const void **)(v4 + v9 + 56), __s2, __n)
        && *(_QWORD *)(v4 + v9 + 160) == v19
        && !memcmp(*(const void **)(v4 + v9 + 152), v15, v19)
        && *(_BYTE *)(v4 + v9 + 253) == v23
        && *(_BYTE *)(v4 + v9 + 252) == v24 )
      {
        v10 = *(_QWORD *)(v4 + v9 + 192) ^ 0x8000000000000000LL;
        if ( *(__int64 *)(v4 + v9 + 192) >= 0 )
          v10 = 2;
        if ( v10 == v20
          && (v20 != 2 || *(_QWORD *)(v4 + v9 + 208) == v22 && !memcmp(*(const void **)(v4 + v9 + 200), v17, v22))
          && *(_QWORD *)(v4 + v9 + 88) == v21
          && !memcmp(*(const void **)(v4 + v9 + 80), v16, v21) )
        {
          break;
        }
      }
      v9 += 256;
      if ( v5 == v9 )
        return;
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone_from::h2e3c7b2510630605(v4 + v9 + 72, a3 + 72);
    *(_BYTE *)(v4 + v9 + 252) = *(_BYTE *)(a3 + 252);
  }
}

// ===== codexmate_lib::core::relay::storage::save_with_publication::h39ec4a80d39f6cb3 @ 0x10087c9e0 size=497 lines=78 =====
_QWORD *__fastcall codexmate_lib::core::relay::storage::save_with_publication::h39ec4a80d39f6cb3(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  void *v5; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  _QWORD v11[16]; // [rsp+0h] [rbp-80h] BYREF

  codexmate_lib::core::relay::storage::validate_credentials::h5612ddb7aa9c9284(v11, a3);
  if ( LODWORD(v11[0]) == 11 )
  {
    v4 = *(_DWORD *)(a3 + 360);
    if ( v4 > 16 || v4 <= 14 && *(_BYTE *)(a3 + 365) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11);
      v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(62, 1);
      if ( !v5 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 62);
      qmemcpy(v5, "relay state schema cannot represent this router commit receipt", 62);
      *a1 = 9;
      a1[1] = 62;
      a1[2] = v5;
      a1[3] = 62;
    }
    else
    {
      v7 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h388e0ba1cfe56cce(a2);
      if ( v7 )
      {
        *a1 = 2;
        a1[1] = v7;
      }
      else
      {
        serde_json::ser::to_vec_pretty::h867d44453d07fc16(v11, a3);
        v8 = v11[0];
        v9 = v11[1];
        if ( __OFSUB__(-v11[0], 1) )
        {
          *a1 = 3;
          a1[1] = v9;
        }
        else
        {
          if ( (codexmate_lib::core::relay::atomic_write::write_atomic_report::hf58adb6e14d92ad5(
                  *(void **)(a2 + 608),
                  *(_QWORD *)(a2 + 616),
                  v11[1],
                  v11[2])
              & 1) != 0 )
          {
            codexmate_lib::core::relay::storage::save_with_publication::_$u7b$$u7b$closure$u7d$$u7d$::h685c374fb9ce9dac(
              v11,
              v10);
            qmemcpy(a1, v11, 0x60u);
          }
          else
          {
            a1[1] = v10;
            *a1 = 11;
          }
          if ( v8 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1);
        }
      }
    }
  }
  else
  {
    qmemcpy(a1, v11, 0x60u);
  }
  return a1;
}

// ===== codexmate_lib::core::relay::storage::validate_credentials::h5612ddb7aa9c9284 @ 0x10087c420 size=473 lines=107 =====
_QWORD *__fastcall codexmate_lib::core::relay::storage::validate_credentials::h5612ddb7aa9c9284(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  _QWORD *result; // rax
  void *v10; // rax
  void *v11; // r14
  _QWORD *v12; // rdx
  _QWORD v13[3]; // [rsp+8h] [rbp-48h] BYREF
  _QWORD *v14; // [rsp+20h] [rbp-30h]

  v14 = a1;
  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    v4 = v2 << 8;
    if ( *(int *)(a2 + 360) >= 16 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(v3 + v7 + 192) ^ 0x8000000000000000LL;
        if ( *(__int64 *)(v3 + v7 + 192) >= 0 )
          v8 = 2;
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            if ( *(_BYTE *)(v3 + v7 + 252) )
              goto LABEL_22;
          }
          else
          {
            a1 = v13;
            codexmate_lib::core::relay::models::validate_relay_provider_id::h454a96d8efa4a017(
              v13,
              *(_QWORD *)(v3 + v7 + 8),
              *(_QWORD *)(v3 + v7 + 16));
            if ( v13[0] != 0x8000000000000000LL )
              goto LABEL_24;
            if ( *(_BYTE *)(v3 + v7 + 252) != 1 )
              goto LABEL_22;
          }
        }
        v7 += 256;
        if ( v4 == v7 )
          goto LABEL_19;
      }
    }
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + v5 + 192) ^ 0x8000000000000000LL;
      if ( *(__int64 *)(v3 + v5 + 192) >= 0 )
        v6 = 2;
      if ( v6 )
        break;
      v5 += 256;
      if ( v4 == v5 )
        goto LABEL_19;
    }
    if ( v6 == 1
      || (a1 = v13,
          codexmate_lib::core::relay::models::validate_relay_provider_id::h454a96d8efa4a017(
            v13,
            *(_QWORD *)(v3 + v5 + 8),
            *(_QWORD *)(v3 + v5 + 16)),
          v13[0] == 0x8000000000000000LL) )
    {
LABEL_22:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1);
      v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(71, 1);
      if ( !v10 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 71);
      v11 = v10;
      memcpy(v10, "relay credential reference conflicts with state schema or presence flag", 0x47u);
      result = v14;
      *v14 = 9;
      result[1] = 71;
      result[2] = v11;
      result[3] = 71;
    }
    else
    {
LABEL_24:
      v12 = v14;
      v14[3] = v13[2];
      result = (_QWORD *)v13[0];
      v12[2] = v13[1];
      v12[1] = result;
      *v12 = 9;
    }
  }
  else
  {
LABEL_19:
    result = v14;
    *v14 = 11;
  }
  return result;
}

// ===== codexmate_lib::core::relay::storage::save_with_publication::_$u7b$$u7b$closure$u7d$$u7d$::h685c374fb9ce9dac @ 0x10087cbe0 size=186 lines=38 =====
__int64 __fastcall codexmate_lib::core::relay::storage::save_with_publication::_$u7b$$u7b$closure$u7d$$u7d$::h685c374fb9ce9dac(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  _QWORD v8[3]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF

  v10 = a2;
  v9[0] = &v10;
  v9[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &unk_101A3AAD1, v9);
  a1[3] = v8[2];
  v2 = v8[0];
  a1[2] = v8[1];
  a1[1] = v2;
  *a1 = 10;
  result = v10;
  if ( (v10 & 3) == 1 )
  {
    v4 = v10 - 1;
    v5 = *(_QWORD *)(v10 - 1);
    v6 = *(_QWORD *)(v10 + 7);
    if ( *(_QWORD *)v6 )
      (*(void (__fastcall **)(__int64))v6)(v5);
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16));
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8);
  }
  return result;
}

