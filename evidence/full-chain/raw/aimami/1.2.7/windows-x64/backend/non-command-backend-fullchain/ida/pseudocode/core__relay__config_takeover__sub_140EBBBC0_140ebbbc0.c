// win 1.2.7 | module src/core/relay/config_takeover.rs | ea 0x140ebbbc0 | name sub_140EBBBC0
// win 1.2.7 | module src/core/relay/config_takeover.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EBBBC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h]
  __int64 v7; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+58h] [rbp-8h] BYREF

  v9[1] = -2;
  v9[0] = a3;
  v7 = a2;
  v8[0] = sub_140186EE0;
  v8[1] = v9;
  v8[2] = sub_1416BB0B0;
  sub_1416ABFD0(&v5, &unk_141A56F5C, &v7);
  *(_QWORD *)(a1 + 24) = v6;
  *(_OWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = 10;
  result = v9[0];
  if ( (v9[0] & 3) - 2 >= 2 && (v9[0] & 3) != 0 )
  {
    v8[0] = v9[0] - 1LL;
    LOBYTE(v7) = 3;
    return sub_1416BCB00(v8);
  }
  return result;
}
