// aimami 1.2.7 mac truly_undone deep reverse — cluster core/account_io/verify_saved_oauth_credentials
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::account_io::verify_saved_oauth_credentials::hf73e83f68d4bbe60 @ 0x100c3ad70 size=1784 lines=286 =====
_QWORD *__fastcall codexmate_lib::core::account_io::verify_saved_oauth_credentials::hf73e83f68d4bbe60(
        char *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r13
  _QWORD *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r12
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rbx
  int *v27; // rsi
  _QWORD *v28; // rdx
  bool v29; // zf
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v33; // rdi
  char v34; // al
  void *v35; // rax
  void *v36; // r14
  _QWORD v37[12]; // [rsp+10h] [rbp-2E0h] BYREF
  _BYTE v38[104]; // [rsp+70h] [rbp-280h] BYREF
  _BYTE v39[72]; // [rsp+D8h] [rbp-218h] BYREF
  _BYTE v40[104]; // [rsp+120h] [rbp-1D0h] BYREF
  _QWORD v41[9]; // [rsp+188h] [rbp-168h] BYREF
  int v42[2]; // [rsp+1D0h] [rbp-120h] BYREF
  _OWORD v43[6]; // [rsp+1D8h] [rbp-118h] BYREF
  _QWORD v44[9]; // [rsp+238h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+280h] [rbp-70h]
  __int64 v46; // [rsp+288h] [rbp-68h]
  __int64 v47; // [rsp+290h] [rbp-60h]
  size_t __n; // [rsp+298h] [rbp-58h]
  _QWORD *v49; // [rsp+2A0h] [rbp-50h]
  __int128 v50; // [rsp+2A8h] [rbp-48h]
  _QWORD *v51; // [rsp+2B8h] [rbp-38h]
  __int64 v52; // [rsp+2C0h] [rbp-30h]

  v4 = a1;
  codexmate_lib::core::auth::make_auth_snapshot::hd5fe074b9b8a26b8(v42, a3, &unk_1018DC9A0, 16);
  if ( v42[0] == 2 )
  {
    v5 = *(_QWORD *)&v43[1];
    v6 = *((_QWORD *)&v43[2] + 1);
    v7 = *(_QWORD *)&v43[4];
    v8 = *((_QWORD *)&v43[5] + 1);
    v9 = *(_OWORD *)((char *)&v43[1] + 8);
    v10 = v43[3];
    v11 = *(_OWORD *)((char *)&v43[4] + 8);
    *(_OWORD *)a1 = v43[0];
    *((_QWORD *)a1 + 2) = v5;
    *(_OWORD *)(a1 + 24) = v9;
    *((_QWORD *)a1 + 5) = v6;
    *((_OWORD *)a1 + 3) = v10;
    *((_QWORD *)a1 + 8) = v7;
    *(_OWORD *)(a1 + 72) = v11;
    *((_QWORD *)a1 + 11) = v8;
    return v4;
  }
  v49 = a2;
  v47 = a3;
  v51 = a1;
  v50 = v43[2];
  v12 = *((_QWORD *)&v43[3] + 1);
  __n = *(_QWORD *)&v43[3];
  v13 = *(_QWORD *)&v43[4];
  v46 = *((_QWORD *)&v43[5] + 1);
  v14 = *(_QWORD *)&v43[5];
  v15 = v44[1];
  v45 = v44[2];
  v16 = v44[4];
  v52 = v44[5];
  if ( *((_QWORD *)&v43[0] + 1) )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v43[1], *((_QWORD *)&v43[0] + 1), 1);
  if ( v12 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1);
  if ( !(2 * v14) )
  {
    v17 = v50;
    if ( !(2 * v15) )
      goto LABEL_9;
LABEL_21:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v15, 1);
    if ( !(2 * v16) )
      goto LABEL_10;
    goto LABEL_22;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v14, 1);
  v17 = v50;
  if ( 2 * v15 )
    goto LABEL_21;
LABEL_9:
  if ( !(2 * v16) )
    goto LABEL_10;
LABEL_22:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v16, 1);
LABEL_10:
  v18 = v49;
  codexmate_lib::core::account_io::read_registry_for_mutation::h5d56a5bbce183a6e(v42, v49[28], v49[29]);
  v4 = v51;
  v19 = *(_QWORD *)v42;
  qmemcpy(v40, v43, 0x58u);
  if ( *(_QWORD *)v42 != 11 )
  {
    qmemcpy(v51 + 1, v40, 0x58u);
    *v4 = v19;
    goto LABEL_30;
  }
  qmemcpy(v37, v40, 0x58u);
  v20 = v37[0];
  v21 = nullptr;
  if ( !__OFSUB__(-v37[0], 1) )
    v21 = v37;
  codexmate_lib::core::account_io::oauth_snapshot_path::h351a3f5876b75d69(v38, v18, v21, *((_QWORD *)&v50 + 1), __n);
  v22 = *(_QWORD *)v38;
  v23 = *(_QWORD *)&v38[8];
  v24 = *(_QWORD *)&v38[16];
  v25 = *(_QWORD *)&v38[24];
  if ( *(_QWORD *)v38 != 11 )
  {
    v28 = v51;
    v51[11] = *(_QWORD *)&v38[88];
    v28[10] = *(_QWORD *)&v38[80];
    v28[9] = *(_QWORD *)&v38[72];
    v28[8] = *(_QWORD *)&v38[64];
    v28[7] = *(_QWORD *)&v38[56];
    v28[6] = *(_QWORD *)&v38[48];
    v28[5] = *(_QWORD *)&v38[40];
    v28[4] = *(_QWORD *)&v38[32];
    v28[1] = v23;
    v28[2] = v24;
    v28[3] = v25;
    *v28 = v22;
    v29 = v20 == 0x8000000000000000LL;
    v4 = v28;
    if ( !v29 )
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::hcf896bc2be1b9a01(v40);
    goto LABEL_30;
  }
  v52 = *(_QWORD *)&v38[8];
  if ( v20 != 0x8000000000000000LL )
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::hcf896bc2be1b9a01(v40);
  codexmate_lib::core::account_io::ensure_existing_snapshot_owned_by::h3b3526a46f07e5d2(
    (int)v42,
    v24,
    v25,
    v49[31],
    v49[32],
    SDWORD2(v50),
    __n);
  v4 = v51;
  if ( v42[0] != 11 )
  {
    v27 = v42;
    goto LABEL_26;
  }
  codexmate_lib::core::auth::load_auth_file::h3f192b6820e78b1d(v42, v24);
  v26 = *(_QWORD *)v42;
  qmemcpy(v38, v43, 0x60u);
  if ( *(_QWORD *)v42 == 0x8000000000000001LL )
  {
    v27 = (int *)v38;
    v4 = v51;
LABEL_26:
    qmemcpy(v4, v27, 0x60u);
    goto LABEL_27;
  }
  qmemcpy(v41, v44, sizeof(v41));
  qmemcpy(&v40[8], v38, 0x60u);
  *(_QWORD *)v40 = *(_QWORD *)v42;
  codexmate_lib::core::auth::load_auth_file::h3f192b6820e78b1d(v42, v49[4]);
  qmemcpy(v37, v43, sizeof(v37));
  if ( *(_QWORD *)v42 == 0x8000000000000001LL )
  {
    v4 = v51;
    qmemcpy(v51, v37, 0x60u);
LABEL_41:
    v30 = v24;
    if ( v26 != 0x8000000000000000LL && v26 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v40[8], v26, 1);
      v30 = v24;
    }
    if ( *(_QWORD *)&v40[24] != 0x8000000000000000LL && *(_QWORD *)&v40[24] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v40[32], *(_QWORD *)&v40[24], 1);
      v30 = v24;
    }
    if ( *(_QWORD *)&v40[48] != 0x8000000000000000LL && *(_QWORD *)&v40[48] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v40[56], *(_QWORD *)&v40[48], 1);
      v30 = v24;
    }
    if ( *(_QWORD *)&v40[72] != 0x8000000000000000LL && *(_QWORD *)&v40[72] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v40[80], *(_QWORD *)&v40[72], 1);
      v30 = v24;
    }
    if ( *(_QWORD *)&v40[96] != 0x8000000000000000LL && *(_QWORD *)&v40[96] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[0], *(_QWORD *)&v40[96], 1);
      v30 = v24;
    }
    if ( v41[2] != 0x8000000000000000LL && v41[2] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[3], v41[2], 1);
      v30 = v24;
    }
    if ( v41[5] == 0x8000000000000000LL || !v41[5] )
    {
LABEL_28:
      v31 = v52;
      if ( !v52 )
        goto LABEL_30;
      goto LABEL_29;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[6], v41[5], 1);
LABEL_27:
    v30 = v24;
    goto LABEL_28;
  }
  qmemcpy(v39, v44, sizeof(v39));
  qmemcpy(&v38[8], v37, 0x60u);
  *(_QWORD *)v38 = *(_QWORD *)v42;
  v33 = v24;
  v34 = codexmate_lib::core::account_io::verify_saved_oauth_credentials::_$u7b$$u7b$closure$u7d$$u7d$::hc7b89f13f3347265(
          v24,
          v25,
          v40,
          v47);
  v4 = v51;
  if ( !v34
    || (v33 = v24,
        !(unsigned __int8)codexmate_lib::core::account_io::verify_saved_oauth_credentials::_$u7b$$u7b$closure$u7d$$u7d$::hc7b89f13f3347265(
                            v24,
                            v25,
                            v38,
                            v40)) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33);
    v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(96, 1);
    if ( !v35 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 96);
    v36 = v35;
    memcpy(
      v35,
      "OAUTH_CREDENTIAL_VERIFY_FAILED: saved and live credentials do not match the committed generationExisting account snapshot is not a switchable ChatGPT OAuth credential",
      0x60u);
    *v4 = 10;
    v4[1] = 96;
    v4[2] = v36;
    v4[3] = 96;
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v38);
    goto LABEL_41;
  }
  *v4 = 11;
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v38);
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::h02c32842b896f398(v40);
  v31 = v52;
  if ( v52 )
  {
    v30 = v24;
LABEL_29:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v31, 1);
  }
LABEL_30:
  if ( v17 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v50 + 1), v17, 1);
  return v4;
}

// ===== codexmate_lib::core::account_io::verify_saved_oauth_credentials::_$u7b$$u7b$closure$u7d$$u7d$::hc7b89f13f3347265 @ 0x100c3b4f0 size=361 lines=77 =====
char __fastcall codexmate_lib::core::account_io::verify_saved_oauth_credentials::_$u7b$$u7b$closure$u7d$$u7d$::hc7b89f13f3347265(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  char result; // al
  size_t v12; // rdx
  size_t v13; // rdx
  size_t v14; // rdx
  size_t v15; // rdx

  if ( !(unsigned __int8)codexmate_lib::core::auth::same_real_account_identity::ha93420aaed3a27c7(a3, a4, a1, a2) )
    return 0;
  v6 = *(_QWORD *)(a4 + 48);
  if ( __OFSUB__(0, *(_QWORD *)(a3 + 48)) )
  {
    if ( v6 != 0x8000000000000000LL )
      return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
  }
  else
  {
    if ( v6 == 0x8000000000000000LL )
      return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
    v12 = *(_QWORD *)(a3 + 64);
    if ( v12 != *(_QWORD *)(a4 + 64) || memcmp(*(const void **)(a3 + 56), *(const void **)(a4 + 56), v12) )
      return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
  }
  v7 = *(_QWORD *)(a4 + 72);
  if ( *(_QWORD *)(a3 + 72) == 0x8000000000000000LL )
  {
    if ( v7 != 0x8000000000000000LL )
      return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
  }
  else
  {
    if ( v7 == 0x8000000000000000LL )
      return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
    v13 = *(_QWORD *)(a3 + 88);
    if ( v13 != *(_QWORD *)(a4 + 88) || memcmp(*(const void **)(a3 + 80), *(const void **)(a4 + 80), v13) )
      return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
  }
  v8 = *(_QWORD *)(a4 + 96);
  if ( *(_QWORD *)(a3 + 96) == 0x8000000000000000LL )
  {
    if ( v8 == 0x8000000000000000LL )
      goto LABEL_8;
    return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
  }
  if ( v8 == 0x8000000000000000LL )
    return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
  v14 = *(_QWORD *)(a3 + 112);
  if ( v14 != *(_QWORD *)(a4 + 112) || memcmp(*(const void **)(a3 + 104), *(const void **)(a4 + 104), v14) )
    return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
LABEL_8:
  v9 = *(_QWORD *)(a3 + 120);
  v10 = *(_QWORD *)(a4 + 120);
  if ( v9 == 0x8000000000000000LL || v10 == 0x8000000000000000LL )
  {
    result = 1;
    if ( v10 ^ 0x8000000000000000LL | v9 ^ 0x8000000000000000LL )
      return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
  }
  else
  {
    v15 = *(_QWORD *)(a3 + 136);
    if ( v15 != *(_QWORD *)(a4 + 136) || memcmp(*(const void **)(a3 + 128), *(const void **)(a4 + 128), v15) )
      return codexmate_lib::core::oauth_refresh::auth_is_newer::h24f28c8ae0f93a3b(a3, a4);
    return 1;
  }
  return result;
}

