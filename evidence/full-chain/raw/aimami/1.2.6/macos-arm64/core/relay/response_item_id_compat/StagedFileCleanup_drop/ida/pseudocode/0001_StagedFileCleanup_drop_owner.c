// <codexmate_lib::core::relay::response_item_id_compat::StagedFileCleanup as core::ops::drop::Drop>::drop
// owner_ea: 0x100229840, size: 0x186
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// DESTRUCTIVE SIDE EFFECTS: remove_file
// notes: Drop trait: deletes staged temp file via remove_file, checks Error::kind, ignores NotFound

// 1.2.4→1.2.6 delta 新增函数: StagedFileCleanup Drop 实现。⚠ 破坏性副作用: 调用 std::sys::fs::remove_file 删除临时分阶段文件。Error::kind 检查后忽略 NotFound。caller: repair_invalid_ids_in_rollout。A-level owner for response_item_id_compat::StagedFileCleanup::drop
double __fastcall _$LT$codexmate_lib..core..relay..response_item_id_compat..StagedFileCleanup$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8c876022fcbc6409(
        __int64 a1)
{
  void *v1; // rbx
  size_t v2; // r15
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  double result; // xmm0_8
  _QWORD v9[12]; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-60h] BYREF
  _QWORD v11[2]; // [rsp+80h] [rbp-40h] BYREF
  __int64 v12; // [rsp+90h] [rbp-30h] BYREF
  _BYTE v13[33]; // [rsp+9Fh] [rbp-21h] BYREF

  if ( *(_BYTE *)(a1 + 24) == 1 )
  {
    v1 = *(void **)(a1 + 8);
    v2 = *(_QWORD *)(a1 + 16);
    v3 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v1, v2);
    if ( v3 )
    {
      v4 = v3;
      v12 = v3;
      if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v3)
        && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
      {
        v11[0] = v1;
        v11[1] = v2;
        v10[0] = v11;
        v10[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
        v10[2] = &v12;
        v10[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
        v9[6] = 2;
        v9[7] = "codexmate_lib::core::relay::response_item_id_compataimami-accounts-export";
        v9[8] = 51;
        v9[10] = &unk_1018589E4;
        v9[11] = v10;
        v9[0] = 0;
        v9[1] = "codexmate_lib::core::relay::response_item_id_compataimami-accounts-export";
        v9[2] = 51;
        v9[3] = 0;
        v9[4] = "src/core/relay/response_item_id_compat.rs";
        v9[5] = 41;
        v9[9] = 0xB300000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v13, v9);
        v4 = v12;
      }
      if ( (v4 & 3) == 1 )
      {
        v5 = *(_QWORD *)(v4 - 1);
        v6 = *(_QWORD *)(v4 + 7);
        if ( *(_QWORD *)v6 )
          (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v4 - 1));
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16));
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4 - 1, 24, 8);
      }
    }
  }
  return result;
}

