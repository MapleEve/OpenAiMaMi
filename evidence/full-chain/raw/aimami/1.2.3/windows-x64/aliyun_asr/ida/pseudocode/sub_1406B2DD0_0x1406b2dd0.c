// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1406b2dd0
// name: sub_1406B2DD0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406B2DD0(_DWORD *a1, _QWORD *a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  _QWORD v4[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( *a1 != -1 )
    return (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64))(a2[1] + 24LL))(*a2, &xmmword_141782D85, 34);
  v4[0] = &v3;
  v4[1] = sub_14041F650;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, _QWORD *, _DWORD *))sub_1414A2FC0)(
           *a2,
           a2[1],
           &unk_141782DA7,
           v4,
           a1 + 2);
}