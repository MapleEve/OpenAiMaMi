// module: codexmate_lib/core/codex_config
// addr: 0x1409e6c90
// name: sub_1409E6C90
// win 1.2.1 | module src/core/codex_config.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409E6C90(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  int v7; // [rsp+20h] [rbp-60h] BYREF
  __int128 v8; // [rsp+28h] [rbp-58h]
  __int128 v9; // [rsp+38h] [rbp-48h]
  __int128 v10; // [rsp+48h] [rbp-38h]
  __int128 v11; // [rsp+58h] [rbp-28h]
  __int128 v12; // [rsp+68h] [rbp-18h]
  __int128 v13; // [rsp+78h] [rbp-8h]
  __int128 v14; // [rsp+118h] [rbp+98h] BYREF
  __int64 v15; // [rsp+128h] [rbp+A8h]
  __int128 v16; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v17; // [rsp+140h] [rbp+C0h]
  __int128 v18; // [rsp+150h] [rbp+D0h]
  __int128 v19; // [rsp+160h] [rbp+E0h]
  __int128 v20; // [rsp+170h] [rbp+F0h]
  __int128 v21; // [rsp+180h] [rbp+100h]
  _QWORD v22[7]; // [rsp+198h] [rbp+118h] BYREF

  v22[2] = -2;
  sub_140FC4520(&v7);
  if ( v7 == 2 )
  {
    v21 = v13;
    v20 = v12;
    v19 = v11;
    v18 = v10;
    v17 = v9;
    v16 = v8;
    v22[0] = &v16;
    v22[1] = sub_140FCA010;
    sub_14149C0F0(&v14, &unk_1417A4D70, v22);
    *(_QWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 16) = v14;
    if ( *((_QWORD *)&v17 + 1) )
      sub_140001660(v18, *((_QWORD *)&v17 + 1), 1);
    if ( *((_QWORD *)&v20 + 1) != -1 && *((_QWORD *)&v20 + 1) )
      sub_140001660(v21, *((_QWORD *)&v20 + 1), 1);
    v2 = *((_QWORD *)&v19 + 1);
    v3 = v20;
    if ( (_QWORD)v20 )
    {
      v4 = (_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL);
      do
      {
        v5 = *(v4 - 1);
        if ( v5 )
          sub_140001660(*v4, v5, 1);
        v4 += 3;
        --v3;
      }
      while ( v3 );
    }
    if ( (_QWORD)v19 )
      sub_140001660(v2, 24 * v19, 8);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)a1 = 2;
  }
  else
  {
    sub_141684120(a1, &v7, 248);
  }
  return a1;
}