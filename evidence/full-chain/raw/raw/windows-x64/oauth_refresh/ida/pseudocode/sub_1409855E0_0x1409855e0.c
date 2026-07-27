// module: codexmate_lib/core/oauth_refresh
// addr: 0x1409855e0
// name: sub_1409855E0
// win 1.2.1 | module src/core/oauth_refresh.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409855E0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[4]; // [rsp+28h] [rbp-48h] BYREF
  char v7; // [rsp+48h] [rbp-28h]
  __int128 v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h]
  __int64 v10; // [rsp+68h] [rbp-8h]

  v10 = -2;
  nullsub_1(a1);
  v4 = sub_140001650(128, 1);
  if ( !v4 )
    sub_1416C2D4B(1, 128);
  *(_QWORD *)&v8 = 128;
  *((_QWORD *)&v8 + 1) = v4;
  v9 = 0;
  v6[0] = &v8;
  v6[1] = asc_1417A3BD8;
  v6[2] = 2;
  v6[3] = 0;
  v7 = 0;
  result = sub_140371720(a2, v6);
  if ( result )
  {
    a1[1] = result;
    *a1 = -1;
    if ( (_QWORD)v8 )
      return sub_140001660(*((_QWORD *)&v8 + 1), v8, 1);
  }
  else
  {
    result = v9;
    a1[2] = v9;
    *(_OWORD *)a1 = v8;
  }
  return result;
}