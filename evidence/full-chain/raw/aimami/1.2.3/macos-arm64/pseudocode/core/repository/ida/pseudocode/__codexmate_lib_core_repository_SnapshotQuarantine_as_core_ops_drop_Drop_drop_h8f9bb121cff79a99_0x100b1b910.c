// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::repository::SnapshotQuarantine as core::ops::drop::Drop>::drop::h8f9bb121cff79a99 @ 0x100b1b910 | full-body via IDA decompiler
void __fastcall _$LT$codexmate_lib..core..repository..SnapshotQuarantine$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f9bb121cff79a99(
        __int64 a1)
{
  _BYTE v1[96]; // [rsp+0h] [rbp-140h] BYREF
  _QWORD v2[12]; // [rsp+60h] [rbp-E0h] BYREF
  _QWORD v3[12]; // [rsp+C0h] [rbp-80h] BYREF
  _QWORD v4[2]; // [rsp+120h] [rbp-20h] BYREF
  _BYTE v5[9]; // [rsp+137h] [rbp-9h] BYREF

  if ( *(_BYTE *)(a1 + 48) )
  {
    codexmate_lib::core::repository::SnapshotQuarantine::rollback::hdc6c3f38e5ff4899(v2, a1);
    if ( LODWORD(v2[0]) != 11 )
    {
      qmemcpy(v1, v2, sizeof(v1));
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 )
      {
        v4[0] = v1;
        v4[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        v3[6] = 1;
        v3[7] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        v3[8] = 31;
        v3[10] = &unk_1017CC531;
        v3[11] = v4;
        v3[0] = 0;
        v3[1] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.";
        v3[2] = 31;
        v3[3] = 0;
        v3[4] = "src/core/repository.rs";
        v3[5] = 22;
        v3[9] = 0x16B00000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v5, v3);
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v1);
    }
  }
}
