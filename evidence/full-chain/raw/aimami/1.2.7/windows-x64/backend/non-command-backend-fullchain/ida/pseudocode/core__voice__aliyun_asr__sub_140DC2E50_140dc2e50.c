// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x140dc2e50 | name sub_140DC2E50
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DC2E50(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v3; // [rsp+20h] [rbp-18h] BYREF
  _QWORD v4[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( *a1 != -1 )
    return (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(a2[1] + 24LL))(*a2, aInterruptedHan, 34);
  v3 = a1 + 2;
  v4[0] = &v3;
  v4[1] = sub_14017EA70;
  return sub_1416B2DC0(*a2, a2[1], &unk_141A482C0, v4);
}
