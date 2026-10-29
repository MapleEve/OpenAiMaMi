// win 1.2.7 | module src/core/analytics/threads.rs | ea 0x140e60e00 | name sub_140E60E00
// win 1.2.7 | module src/core/analytics/threads.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E60E00(_QWORD *a1)
{
  _QWORD v2[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( *a1 == -1 )
    return a1[1] + 8LL * a1[3] + 272;
  sub_140E667D0(v2, a1, 0);
  return v2[0] + 8LL * v2[2] + 272;
}
