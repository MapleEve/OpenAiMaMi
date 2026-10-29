// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x141934d90 | name sub_141934D90
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141934D90(__int128 *a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+50h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp-8h]

  v4[0] = a2;
  v4[1] = a3;
  v7 = *((_QWORD *)a1 + 2);
  v6 = *a1;
  v5[0] = &v6;
  v5[1] = sub_14163D050;
  v5[2] = v4;
  v5[3] = sub_140C99890;
  return sub_141934BD0(&unk_141CBD8E4, v5);
}
