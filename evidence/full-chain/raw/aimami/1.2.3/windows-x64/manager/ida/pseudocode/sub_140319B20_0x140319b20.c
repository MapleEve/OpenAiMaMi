// module: codexmate_lib/core/relay/manager
// addr: 0x140319b20
// name: sub_140319B20
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140319B20(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 i; // r15
  _QWORD v11[29]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v12[29]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v13; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v14; // [rsp+208h] [rbp+188h]
  __int64 v15; // [rsp+210h] [rbp+190h]

  v15 = -2;
  if ( a2 == a3 || (v5 = a2, sub_1404DFAF0(v12, a2), v12[0] == -1) )
  {
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
  }
  else
  {
    nullsub_1(v6);
    v7 = sub_140001650(928, 8);
    if ( !v7 )
      sub_1416C2D4B(8, 928);
    v8 = v7;
    sub_141684120(v7, v12, 232);
    *(_QWORD *)&v13 = 4;
    *((_QWORD *)&v13 + 1) = v8;
    for ( i = 1; ; ++i )
    {
      v14 = i;
      v5 += 232;
      if ( v5 == a3 )
        break;
      sub_1404DFAF0(v11, v5);
      if ( v11[0] == -1 )
        break;
      if ( i == (_QWORD)v13 )
      {
        sub_141688D30((unsigned int)&v13, i, 1, 8, 232);
        v8 = *((_QWORD *)&v13 + 1);
      }
      sub_141684120(v8 + 232 * i, v11, 232);
    }
    a1[2] = v14;
    *(_OWORD *)a1 = v13;
  }
  return a1;
}