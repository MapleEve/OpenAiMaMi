// __ZN13codexmate_lib4core5relay23codex_thread_visibility32checkpoint_after_committed_write @ 0x100ae4190
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::checkpoint_after_committed_write | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::checkpoint_after_committed_write::h67b31aee3cf0b26a(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  _QWORD v4[12]; // [rsp+0h] [rbp-120h] BYREF
  _QWORD v5[4]; // [rsp+60h] [rbp-C0h] BYREF
  _QWORD v6[8]; // [rsp+80h] [rbp-A0h] BYREF
  _QWORD v7[8]; // [rsp+C0h] [rbp-60h] BYREF
  _QWORD v8[2]; // [rsp+100h] [rbp-20h] BYREF
  _BYTE v9[9]; // [rsp+117h] [rbp-9h] BYREF

  v8[0] = a2; /*0x100ae419f*/
  v8[1] = a3; /*0x100ae41a3*/
  rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v6, a1, "PRAGMA wal_checkpoint(TRUNCATE);", 32); /*0x100ae41bd*/
  result = 0x8000000000000016LL; /*0x100ae41c2*/
  if ( v6[0] != 0x8000000000000016LL ) /*0x100ae41d3*/
  {
    v7[7] = v6[7]; /*0x100ae41dd*/
    v7[6] = v6[6]; /*0x100ae41e5*/
    v7[5] = v6[5]; /*0x100ae41ed*/
    v7[4] = v6[4]; /*0x100ae41f5*/
    v7[3] = v6[3]; /*0x100ae4200*/
    v7[2] = v6[2]; /*0x100ae420b*/
    v7[1] = v6[1]; /*0x100ae421d*/
    v7[0] = v6[0]; /*0x100ae4221*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae4233*/
    {
      v5[0] = v8; /*0x100ae423d*/
      v5[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ae424b*/
      v5[2] = v7; /*0x100ae4256*/
      v5[3] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100ae4264*/
      v4[6] = 2; /*0x100ae426b*/
      v4[7] = &unk_10167D5D6; /*0x100ae427d*/
      v4[8] = 51; /*0x100ae4284*/
      v4[10] = &unk_1017CB1C5; /*0x100ae4296*/
      v4[11] = v5; /*0x100ae42a4*/
      v4[0] = 0; /*0x100ae42ab*/
      v4[1] = &unk_10167D5D6; /*0x100ae42b6*/
      v4[2] = 51; /*0x100ae42bd*/
      v4[3] = 0; /*0x100ae42c8*/
      v4[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae42da*/
      v4[5] = 41; /*0x100ae42e1*/
      v4[9] = 0x3200000001LL; /*0x100ae42f6*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v9, v4); /*0x100ae4308*/
    }
    return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v7); /*0x100ae4311*/
  }
  return result; /*0x100ae4316*/
}