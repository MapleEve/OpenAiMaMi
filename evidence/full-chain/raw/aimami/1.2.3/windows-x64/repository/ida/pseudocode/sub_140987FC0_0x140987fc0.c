// module: codexmate_lib/core/repository
// addr: 0x140987fc0
// name: sub_140987FC0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140987FC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 v7; // rdx
  HANDLE *v8; // r14
  HANDLE *v9; // r14
  _OWORD v11[6]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v12[3]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v13; // [rsp+98h] [rbp+18h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+28h]
  HANDLE *v15; // [rsp+B0h] [rbp+30h]
  __int64 v16; // [rsp+B8h] [rbp+38h]
  __int64 v17; // [rsp+C0h] [rbp+40h]
  HANDLE *v18; // [rsp+C8h] [rbp+48h]
  char v19; // [rsp+D7h] [rbp+57h]
  __int64 v20; // [rsp+D8h] [rbp+58h]

  v20 = -2;
  *(_QWORD *)&v11[0] = -1;
  v12[0] = a2;
  v12[1] = a3;
  v12[2] = v11;
  v19 = 1;
  sub_14030E290(&v13, v12);
  if ( LODWORD(v11[0]) == -1 )
  {
    *(_QWORD *)(a1 + 24) = v14;
    *(_OWORD *)(a1 + 8) = v13;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v11[5];
    *(_OWORD *)(a1 + 64) = v11[4];
    v4 = v11[0];
    v5 = v11[1];
    v6 = v11[2];
    *(_OWORD *)(a1 + 48) = v11[3];
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    v18 = *((HANDLE **)&v13 + 1);
    if ( v14 )
    {
      v7 = 0;
      v8 = v18;
      v16 = v14;
      do
      {
        v17 = v7;
        v15 = v8;
        v12[0] = sub_1412018B0(v8);
        if ( v12[0] )
          sub_140018650(v12);
        v9 = v15;
        CloseHandle(*v15);
        v7 = v17 - 1;
        v8 = v9 + 1;
      }
      while ( v17 - 1 + v16 );
    }
    if ( (_QWORD)v13 )
      sub_140001660(v18, 8 * v13, 8);
  }
  return a1;
}