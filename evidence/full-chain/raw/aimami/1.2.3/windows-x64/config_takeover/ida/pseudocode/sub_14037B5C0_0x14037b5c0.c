// module: codexmate_lib/core/relay/config_takeover
// addr: 0x14037b5c0
// name: sub_14037B5C0
// win 1.2.1 | module src/core/relay/config_takeover.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14037B5C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h]
  _QWORD v7[4]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+58h] [rbp-8h] BYREF

  v8[1] = -2;
  v8[0] = a3;
  v7[0] = a2;
  v7[1] = sub_14041F680;
  v7[2] = v8;
  v7[3] = sub_141490720;
  sub_14149C0F0(&v5, &unk_14174C972, v7);
  *(_QWORD *)(a1 + 24) = v6;
  *(_OWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = 10;
  return sub_140018650(v8);
}