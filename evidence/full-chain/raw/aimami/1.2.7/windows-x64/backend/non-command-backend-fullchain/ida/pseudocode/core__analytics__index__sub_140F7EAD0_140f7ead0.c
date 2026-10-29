// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140f7ead0 | name sub_140F7EAD0
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 sub_140F7EAD0()
{
  int v0; // edx
  int v1; // ecx
  unsigned int v2; // ecx
  _DWORD v4[3]; // [rsp+2Ch] [rbp-Ch] BYREF

  sub_141406CE0(v4);
  v0 = (v4[0] >> 13) - 1;
  v1 = 0;
  if ( v4[0] >> 13 <= 0 )
  {
    v2 = (1 - (v4[0] >> 13)) / 0x190u + 1;
    v0 += 400 * v2;
    v1 = -146097 * v2;
  }
  return v4[1] + 86400LL * (((v0 / 100) >> 2) + ((1461 * v0) >> 2) + v1 + ((v4[0] >> 4) & 0x1FF) - v0 / 100 - 719163);
}
