// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x1419120f0 | name sub_1419120F0
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1419120F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = a1;
  v5[0] = a2;
  v5[1] = a3;
  v6[0] = &v4;
  v6[1] = sub_1416BCB10;
  v6[2] = v5;
  v6[3] = sub_140C99890;
  return sub_141911DB0(&xmmword_141A50685, (unsigned __int64)v6);
}
