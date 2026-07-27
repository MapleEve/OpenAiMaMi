// module: codexmate_lib/core/relay/manager
// addr: 0x140872f90
// name: sub_140872F90
// win 1.2.3 | module core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_140872F90(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int128 *v4; // [rsp+30h] [rbp-50h] BYREF
  __int128 v5; // [rsp+38h] [rbp-48h]
  __int128 v6; // [rsp+48h] [rbp-38h]
  __int128 v7; // [rsp+58h] [rbp-28h]
  __int128 v8; // [rsp+68h] [rbp-18h]
  __int128 v9; // [rsp+78h] [rbp-8h]
  __int64 v10; // [rsp+88h] [rbp+8h]
  __int128 *v11; // [rsp+90h] [rbp+10h] BYREF
  __int128 v12; // [rsp+98h] [rbp+18h]
  __int128 v13; // [rsp+A8h] [rbp+28h]
  __int128 v14; // [rsp+B8h] [rbp+38h]
  __int128 v15; // [rsp+C8h] [rbp+48h]
  __int128 v16; // [rsp+D8h] [rbp+58h]
  __int64 v17; // [rsp+E8h] [rbp+68h]
  __int128 v18; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v19; // [rsp+100h] [rbp+80h]
  char v20; // [rsp+10Fh] [rbp+8Fh] BYREF
  __int64 v21; // [rsp+110h] [rbp+90h]

  v21 = -2;
  sub_1403B6530(&v11, a2);
  result = (__int64)v11;
  if ( v11 == (__int128 *)-1LL )
  {
    *a1 = -1;
  }
  else
  {
    v10 = v17;
    v9 = v16;
    v8 = v15;
    v7 = v14;
    v6 = v13;
    v5 = v12;
    v4 = v11;
    *(_QWORD *)&v18 = 0;
    *((_QWORD *)&v18 + 1) = 1;
    v19 = 0;
    *((_QWORD *)&v12 + 1) = 1610612768;
    v11 = &v18;
    *(_QWORD *)&v12 = &off_141799500;
    if ( (unsigned __int8)sub_140B036A0(&v4, &v11) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v20,
        (unsigned int)&unk_141796270,
        (__int64)&off_1417995B8);
    a1[2] = v19;
    *(_OWORD *)a1 = v18;
    return sub_1407DA310(&v4);
  }
  return result;
}