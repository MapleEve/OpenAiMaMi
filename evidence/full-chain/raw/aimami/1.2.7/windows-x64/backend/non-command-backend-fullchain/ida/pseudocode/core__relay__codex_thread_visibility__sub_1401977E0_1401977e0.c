// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1401977e0 | name sub_1401977E0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401977E0(_QWORD *a1, __int64 a2)
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
    sub_141938D2B(1, 128);
  *(_QWORD *)&v7 = 128;
  *((_QWORD *)&v7 + 1) = v4;
  v8 = 0;
  v6 = &v7;
  result = sub_1401A5DE0(a2, &v6);
  if ( result )
  {
    a1[1] = result;
    *a1 = -1;
    if ( (_QWORD)v7 )
      return sub_140001660(*((_QWORD *)&v7 + 1), v7, 1);
  }
  else
  {
    result = v8;
    a1[2] = v8;
    *(_OWORD *)a1 = v7;
  }
  return result;
}
