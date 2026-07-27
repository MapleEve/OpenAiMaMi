// module: codexmate_lib/core/sessions
// addr: 0x141474040
// name: sub_141474040
// win 1.2.1 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_141474040(__int64 a1, __int64 a2)
{
  int v3; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v4[8]; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+74h] [rbp-Ch]
  int v6; // [rsp+78h] [rbp-8h]

  sub_141486710(&v3, a1, a2);
  if ( v3 != 2 )
    return ((v5 & 0x400) == 0 || (v6 & 0x20000000) == 0) & ((unsigned __int8)(v5 & 0x10) >> 4);
  LOBYTE(v3) = 1;
  sub_14146D880(v4);
  return 0;
}