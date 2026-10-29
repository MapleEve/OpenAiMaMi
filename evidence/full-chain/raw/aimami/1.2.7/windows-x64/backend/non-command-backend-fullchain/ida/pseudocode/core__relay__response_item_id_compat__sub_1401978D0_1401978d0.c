// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | ea 0x1401978d0 | name sub_1401978D0
// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401978D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  __int128 *v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-8h]
  __int64 v12; // [rsp+40h] [rbp+0h]

  v12 = -2;
  nullsub_1(a1);
  v6 = sub_140001650(128, 1);
  if ( !v6 )
    sub_141938D2B(1, 128);
  *(_QWORD *)&v10 = 128;
  *((_QWORD *)&v10 + 1) = v6;
  v11 = 0;
  v9 = &v10;
  v7 = sub_140BAD6C0(&v9, &v10, a2, a3);
  if ( v7 )
  {
    result = sub_141934C60(v7);
    a1[1] = result;
    *a1 = -1;
    if ( (_QWORD)v10 )
      return sub_140001660(*((_QWORD *)&v10 + 1), v10, 1);
  }
  else
  {
    result = v11;
    a1[2] = v11;
    *(_OWORD *)a1 = v10;
  }
  return result;
}
