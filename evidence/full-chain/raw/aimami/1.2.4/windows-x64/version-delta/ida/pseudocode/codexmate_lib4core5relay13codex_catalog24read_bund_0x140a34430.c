// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog24read_bund @ 0x140a34430
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog24read_bund | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140A34430(_DWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h]
  __int64 v9; // [rsp+30h] [rbp-50h]
  __int64 v10; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v11; // [rsp+E0h] [rbp+60h]
  __int128 v12; // [rsp+F0h] [rbp+70h]
  __int128 v13; // [rsp+100h] [rbp+80h]
  __int64 v14; // [rsp+110h] [rbp+90h]
  __int128 v15; // [rsp+118h] [rbp+98h]
  __int128 v16; // [rsp+128h] [rbp+A8h]
  __int128 v17; // [rsp+138h] [rbp+B8h]
  __int64 v18; // [rsp+148h] [rbp+C8h]
  __int64 v19; // [rsp+150h] [rbp+D0h]

  v19 = -2;
  sub_1414E8BC0(&v7);
  sub_1414E8AA0(&v7, aVersion_6, 9);
  sub_1414EE9D0(&v10, &v7);
  v2 = v10;
  if ( v10 == -1 )
  {
    sub_14049AA50(v11);
    *a1 = 0;
    return sub_1403C96C0(&v7);
  }
  v17 = v13;
  v16 = v12;
  v15 = v11;
  v14 = v10;
  result = sub_1403C96C0(&v7);
  if ( DWORD2(v17) )
  {
    *a1 = 0;
    if ( v2 )
      result = sub_140001660(v15, v2, 1);
    v4 = v16;
    if ( (_QWORD)v16 )
    {
      v5 = *((_QWORD *)&v16 + 1);
      return sub_140001660(v5, v4, 1);
    }
  }
  else
  {
    v6 = v15;
    sub_1415073A0(&v7, v15, *((_QWORD *)&v15 + 1));
    v18 = v8;
    result = sub_140A38500(a1, v8, v9);
    if ( v2 )
      result = sub_140001660(v6, v2, 1);
    if ( (_QWORD)v16 )
      result = sub_140001660(*((_QWORD *)&v16 + 1), v16, 1);
    v4 = v7;
    if ( v7 > 0 )
    {
      v5 = v18;
      return sub_140001660(v5, v4, 1);
    }
  }
  return result;
}
