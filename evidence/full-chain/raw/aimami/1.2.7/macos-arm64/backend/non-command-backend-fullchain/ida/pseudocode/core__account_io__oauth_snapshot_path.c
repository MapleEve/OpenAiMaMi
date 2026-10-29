// aimami 1.2.7 mac truly_undone deep reverse — cluster core/account_io/oauth_snapshot_path
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::account_io::oauth_snapshot_path::h351a3f5876b75d69 @ 0x100c35a70 size=430 lines=111 =====
_QWORD *__fastcall codexmate_lib::core::account_io::oauth_snapshot_path::h351a3f5876b75d69(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t a5)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbx
  const void *v11; // rdi
  signed __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // r14
  signed __int64 v17; // rdx
  _QWORD *v18; // rbx
  signed __int64 v19; // rax
  const void *v21; // r12
  signed __int64 v22; // r14
  __int64 v23; // rax
  const void *v24; // rsi
  signed __int64 v25; // r12
  _DWORD v26[24]; // [rsp+0h] [rbp-B0h] BYREF
  _QWORD *v27; // [rsp+60h] [rbp-50h]
  __int64 v28; // [rsp+68h] [rbp-48h]
  signed __int64 v29; // [rsp+70h] [rbp-40h] BYREF
  __int64 v30; // [rsp+78h] [rbp-38h]
  signed __int64 v31; // [rsp+80h] [rbp-30h]

  v28 = a2;
  v27 = a1;
  if ( a3 && (v7 = *(_QWORD *)(a3 + 16)) != 0 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    v9 = 424 * v7;
    v10 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v8 + v10 + 208) == a5 )
      {
        v11 = *(const void **)(v8 + v10 + 200);
        if ( !memcmp(v11, a4, a5) )
          break;
      }
      v10 += 424;
      if ( v9 == v10 )
        goto LABEL_10;
    }
    v12 = *(_QWORD *)(v8 + v10 + 232);
    if ( v12 < 0 )
    {
      v13 = 0;
      goto LABEL_9;
    }
    v21 = *(const void **)(v8 + v10 + 224);
    if ( v12 )
    {
      v22 = *(_QWORD *)(v8 + v10 + 232);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11);
      v13 = 1;
      v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1);
      v12 = v22;
      if ( !v23 )
LABEL_9:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12);
      v16 = v23;
    }
    else
    {
      v16 = 1;
    }
    v24 = v21;
    v25 = v12;
    memcpy((void *)v16, v24, v12);
    v17 = v25;
    v29 = v25;
    v30 = v16;
    v31 = v25;
    v14 = *(_QWORD *)(v28 + 248);
    v15 = *(_QWORD *)(v28 + 256);
  }
  else
  {
LABEL_10:
    v14 = *(_QWORD *)(v28 + 248);
    v15 = *(_QWORD *)(v28 + 256);
    codexmate_lib::core::auth::account_snapshot_path::h321912d5c2a039db(&v29, v14, v15, a4, a5);
    v16 = v30;
    v17 = v31;
  }
  codexmate_lib::core::auth::ensure_managed_account_snapshot_location::h5e97988fa1010acc(v26, v16, v17, v14, v15);
  v18 = v27;
  if ( v26[0] == 11 )
  {
    v27[3] = v31;
    v19 = v29;
    v18[2] = v30;
    v18[1] = v19;
    *v18 = 11;
  }
  else
  {
    qmemcpy(v27, v26, 0x60u);
    if ( v29 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v29, 1);
  }
  return v18;
}

