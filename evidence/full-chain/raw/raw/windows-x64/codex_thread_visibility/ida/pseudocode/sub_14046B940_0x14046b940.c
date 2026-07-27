// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x14046b940
// name: sub_14046B940
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_14046B940(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-10h]
  __int64 v5; // [rsp+38h] [rbp-8h]

  v5 = -2;
  v4 = a2;
  v3[0] = a2;
  v3[1] = sub_140B036A0;
  sub_14149C0F0(a1, &unk_141757D53, v3);
  return sub_14043E650(v4);
}