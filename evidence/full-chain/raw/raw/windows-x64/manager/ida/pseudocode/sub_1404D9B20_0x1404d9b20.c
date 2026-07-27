// module: codexmate_lib/core/relay/manager
// addr: 0x1404d9b20
// name: sub_1404D9B20
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404D9B20(__int64 a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int128 v8; // xmm0
  __int128 v10; // [rsp+28h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+58h] [rbp-8h]

  v14 = -2;
  sub_140AE73A0((__int64)&v12, a3, a4);
  if ( (_QWORD)v12 == -1 )
  {
    sub_1404D9E90((unsigned int)&v10, *(_QWORD *)(a2 + 776), *(_QWORD *)(a2 + 784), (_DWORD)a3, a4);
    sub_1404DA3F0(&v12, a3, a4);
    if ( (_QWORD)v12 != -1 && (_QWORD)v12 )
      sub_140001660(*((_QWORD *)&v12 + 1), v12, 1);
    *(_QWORD *)(a1 + 16) = v11;
    v8 = v10;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v13;
    v8 = v12;
  }
  *(_OWORD *)a1 = v8;
  return a1;
}