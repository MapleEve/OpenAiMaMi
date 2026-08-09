// round3 (2026-08-07) item1递归展开目标1/4：codex_config_reconciler::reconcile_inner
// mac addr=0x1002e6840 size=0xa0c(2572B) FULL BODY, NO TRUNCATION
// 生成方式：mcp__ida-pro-mcp-mac(经tools/ida.sh) decompile()直调，无截断标记
// 已同步 append_comments 写回中文函数级注释至 mac IDB 并 idb_save() 确认落盘

void __fastcall codexmate_lib::core::relay::codex_config_reconciler::reconcile_inner::ha48d63df54fced37(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  char v9; // al
  char v10; // al
  void *v11; // rax
  __int64 v12; // r14
  char v13; // dl
  unsigned __int64 v14; // rcx
  char v15; // r12
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // rsi
  _QWORD *v28; // rax
  unsigned __int64 v29; // rsi
  _QWORD *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // r8
  _QWORD v35[12]; // [rsp+20h] [rbp-200h] BYREF
  _QWORD v36[12]; // [rsp+80h] [rbp-1A0h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-140h]
  _QWORD v38[14]; // [rsp+E8h] [rbp-138h] BYREF
  _QWORD v39[14]; // [rsp+158h] [rbp-C8h] BYREF
  _QWORD *v40; // [rsp+1C8h] [rbp-58h]
  __int64 v41; // [rsp+1D0h] [rbp-50h]
  __int64 v42; // [rsp+1D8h] [rbp-48h]
  int v43; // [rsp+1E4h] [rbp-3Ch]
  unsigned __int64 v44; // [rsp+1E8h] [rbp-38h]
  char v45; // [rsp+1F6h] [rbp-2Ah] BYREF
  char v46; // [rsp+1F7h] [rbp-29h]

  v40 = a1;
  v7 = a3[3];
  v8 = a3[5];
  v9 = a3[8] & (v7 != 0);
  v42 = a2;
  if ( v9 != 1 )
    goto LABEL_8;
  if ( !v8 )
  {
    v8 = 0;
LABEL_8:
    v12 = *a3;
    v13 = *((_BYTE *)a3 + 65);
    v43 = 0;
    v14 = 0x8000000000000000LL;
    v15 = 0;
    goto LABEL_30;
  }
  v10 = *((_BYTE *)a3 + 65) ^ 1;
  v46 = *((_BYTE *)a3 + 65);
  if ( a4 )
  {
    if ( v10 != *(_BYTE *)(a4 + 104) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1);
      if ( !v11 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 60);
      qmemcpy(v11, "prepared Codex catalog mode does not match the config target", 60);
      v35[0] = 9;
      v35[1] = 60;
      v35[2] = v11;
      v35[3] = 60;
      goto LABEL_25;
    }
    codexmate_lib::core::relay::codex_catalog::write_prepared_catalog::hf2ea3d7a010811e0(v35, a2, a4);
    if ( LODWORD(v35[0]) == 11 )
    {
LABEL_13:
      v41 = v35[2];
      v16 = v35[3];
      v37 = v35[3];
      v12 = *a3;
      LOBYTE(v16) = *a3 != 0;
      v44 = v35[1];
      if ( ((v35[1] != 0x8000000000000000LL) & (unsigned __int8)v16) == 0 )
      {
        LOBYTE(v16) = 1;
        v43 = v16;
        v15 = 0;
        goto LABEL_29;
      }
      codexmate_lib::core::relay::config_takeover::inspect::he64ac2d79174fefa(v39, v42);
      v17 = v39[0];
      v38[0] = v39[1];
      v38[1] = v39[2];
      v38[2] = v39[3];
      v38[3] = v39[4];
      v38[4] = v39[5];
      v38[5] = v39[6];
      v38[6] = v39[7];
      if ( v39[0] == 11 )
      {
        v35[0] = v38[0];
        v35[1] = v38[1];
        v35[2] = v38[2];
        v35[3] = v38[3];
        v35[4] = v38[4];
        v35[5] = v38[5];
        v35[6] = v38[6];
        if ( !(v38[5] | v38[2]) )
        {
LABEL_23:
          v19 = core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverInspection$GT$::he0660f9430b10dcb(v35);
          LOBYTE(v19) = 1;
          v43 = v19;
          v15 = 1;
LABEL_29:
          v14 = v44;
          a5 = v41;
          a2 = v42;
          v13 = v46;
          a6 = v37;
          goto LABEL_30;
        }
        codexmate_lib::core::relay::config_takeover::takeover::h211aae70da9a8385(v39, v42);
        v18 = v39[0];
        qmemcpy(v38, &v39[1], 0x50u);
        if ( v39[0] == 11 )
        {
          qmemcpy(v36, v38, 0x50u);
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h32065c0261359cc1(v38);
          if ( v36[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36[1], 24LL * v36[0], 8);
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h32065c0261359cc1(&v36[3]);
          if ( v36[3] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36[4], 24LL * v36[3], 8);
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h32065c0261359cc1(&v36[6]);
          if ( v36[6] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36[7], 24LL * v36[6], 8);
          goto LABEL_23;
        }
        v33 = v39[11];
        v34 = v40;
        qmemcpy(v40 + 1, v38, 0x50u);
        *v34 = v18;
        v34[11] = v33;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverInspection$GT$::he0660f9430b10dcb(v35);
        v29 = v44;
        if ( !v44 )
          return;
      }
      else
      {
        v30 = v40;
        v40[11] = v39[11];
        v30[10] = v39[10];
        v31 = v39[8];
        v30[9] = v39[9];
        v30[8] = v31;
        v30[7] = v38[6];
        v30[6] = v38[5];
        v30[5] = v38[4];
        v30[4] = v38[3];
        v30[3] = v38[2];
        v32 = v38[0];
        v30[2] = v38[1];
        v30[1] = v32;
        *v30 = v17;
        v29 = v44;
        if ( !v44 )
          return;
      }
LABEL_49:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v29, 1);
      return;
    }
  }
  else
  {
    codexmate_lib::core::relay::codex_catalog::prepare_router_catalog::h26790cae2666606c(
      (unsigned int)v39,
      a2,
      a3[2],
      v7,
      a3[4],
      v8,
      v10,
      a3[6],
      a3[7]);
    qmemcpy(v36, &v39[1], sizeof(v36));
    if ( v39[0] == 0x8000000000000000LL )
    {
      qmemcpy(v35, v36, sizeof(v35));
      if ( LODWORD(v35[0]) == 11 )
        goto LABEL_13;
    }
    else
    {
      qmemcpy(&v38[1], v36, 0x60u);
      v38[0] = v39[0];
      v38[13] = v39[13];
      codexmate_lib::core::relay::codex_catalog::write_prepared_catalog::hf2ea3d7a010811e0(v35, a2, v38);
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_catalog..PreparedRouterCatalog$GT$::hd63470662830d861(v38);
      if ( LODWORD(v35[0]) == 11 )
        goto LABEL_13;
    }
  }
LABEL_25:
  qmemcpy(v38, v35, 0x60u);
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
  {
    v36[0] = v38;
    v36[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
    v39[6] = 2;
    v39[7] = &unk_10166EE9A;
    v39[8] = 51;
    v39[10] = &unk_10185A547;
    v39[11] = v36;
    v39[0] = 0;
    v39[1] = &unk_10166EE9A;
    v39[2] = 51;
    v39[3] = 0;
    v39[4] = "src/core/relay/codex_config_reconciler.rs";
    v39[5] = 41;
    v39[9] = 0x4200000001LL;
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v45, v39);
  }
  v20 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v38);
  v12 = *a3;
  LOBYTE(v20) = 1;
  v43 = v20;
  v15 = 0;
  v14 = 0x8000000000000000LL;
  a2 = v42;
  v13 = v46;
LABEL_30:
  v38[4] = a3[2];
  v38[5] = v7;
  v38[6] = a3[4];
  v38[7] = v8;
  v38[0] = v12;
  v38[1] = a3[1];
  LOBYTE(v38[10]) = v15;
  BYTE1(v38[10]) = v13;
  v38[8] = a3[6];
  v38[9] = a3[7];
  v21 = 0;
  v44 = v14;
  v41 = a5;
  if ( v14 != 0x8000000000000000LL )
    v21 = a5;
  v38[2] = v21;
  v38[3] = a6;
  v22 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h11ee5c38df4ac403(a2);
  if ( v22 )
  {
    v39[0] = 2;
    v39[1] = v22;
LABEL_46:
    qmemcpy(v40, v39, 0x60u);
    goto LABEL_47;
  }
  codexmate_lib::core::codex_config::update_text::h9073855187835857(
    v39,
    *(_QWORD *)(v42 + 56),
    *(_QWORD *)(v42 + 64),
    &anon_597a1ab5dc54f5a7c7ef0ba6972bc544_252,
    23,
    v38);
  if ( v39[0] != 11 )
    goto LABEL_46;
  if ( !(_BYTE)v43 )
  {
    v23 = codexmate_lib::core::relay::codex_catalog::remove_catalog::hc87545952d901462(v42);
    if ( v23 )
    {
      v36[0] = v23;
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        v38[0] = v36;
        v38[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
        v39[6] = 2;
        v39[7] = &unk_10166EE9A;
        v39[8] = 51;
        v39[10] = &unk_10185A5C8;
        v39[11] = v38;
        v39[0] = 0;
        v39[1] = &unk_10166EE9A;
        v39[2] = 51;
        v39[3] = 0;
        v39[4] = "src/core/relay/codex_config_reconciler.rs";
        v39[5] = 41;
        v39[9] = 0x6700000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v45, v39);
        v23 = v36[0];
      }
      if ( (v23 & 3) == 1 )
      {
        v24 = v23 - 1;
        v25 = *(_QWORD *)(v23 - 1);
        v26 = *(_QWORD *)(v23 + 7);
        if ( *(_QWORD *)v26 )
          (*(void (__fastcall **)(__int64))v26)(v25);
        v27 = *(_QWORD *)(v26 + 8);
        if ( v27 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v27, *(_QWORD *)(v26 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 24, 8);
      }
    }
  }
  v28 = v40;
  *((_BYTE *)v40 + 8) = v15;
  *v28 = 11;
LABEL_47:
  v29 = v44;
  if ( v44 != 0x8000000000000000LL && v44 )
    goto LABEL_49;
}
