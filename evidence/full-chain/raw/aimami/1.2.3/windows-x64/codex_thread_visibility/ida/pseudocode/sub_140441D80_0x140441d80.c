// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140441d80
// name: sub_140441D80
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_140441D80(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int128 *v6; // [rsp+28h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp-8h]

  v9 = -2;
  nullsub_1(a1);
  v4 = sub_140001650(128, 1);
  if ( !v4 )
    sub_1416C2D4B(1, 128);
  *(_QWORD *)&v7 = 128;
  *((_QWORD *)&v7 + 1) = v4;
  v8 = 0;
  v6 = &v7;
  sub_140444020(a2, &v6);
  result = v8;
  *(_QWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  return result;
}