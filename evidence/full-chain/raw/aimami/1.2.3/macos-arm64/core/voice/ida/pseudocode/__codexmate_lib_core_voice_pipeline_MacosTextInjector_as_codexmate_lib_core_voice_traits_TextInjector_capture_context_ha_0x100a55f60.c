// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::voice::pipeline::MacosTextInjector as codexmate_lib::core::voice::traits::TextInjector>::capture_context::haf45d58c36b65040 @ 0x100a55f60 | full-body via IDA Python(IDA decompiler.decompile direct write)
_QWORD *__fastcall _$LT$codexmate_lib..core..voice..pipeline..MacosTextInjector$u20$as$u20$codexmate_lib..core..voice..traits..TextInjector$GT$::capture_context::haf45d58c36b65040(
        _QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD v6[13]; // [rsp+8h] [rbp-68h] BYREF

  codexmate_lib::platform::text_injection::capture_context::h2b395969184e0cdc((__int64)v6);
  a1[2] = v6[2];
  v1 = v6[0];
  a1[1] = v6[1];
  *a1 = v1;
  a1[5] = v6[5];
  v2 = v6[3];
  a1[4] = v6[4];
  a1[3] = v2;
  v3 = v6[7];
  a1[6] = v6[6];
  a1[7] = v3;
  a1[8] = v6[8];
  v4 = v6[10];
  a1[9] = v6[9];
  a1[11] = v6[11];
  a1[10] = v4;
  return a1;
}
