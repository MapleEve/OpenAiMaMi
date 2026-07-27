// module: codexmate_lib/commands/accounts
// addr: 0x1403c86d0
// name: sub_1403C86D0
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1403C86D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rdx
  _BYTE v10[1056]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v11; // [rsp+448h] [rbp+3C8h] BYREF
  _QWORD *v12; // [rsp+450h] [rbp+3D0h] BYREF
  __int64 v13; // [rsp+458h] [rbp+3D8h]
  _QWORD v14[2]; // [rsp+870h] [rbp+7F0h] BYREF
  __int128 v15; // [rsp+880h] [rbp+800h]
  _QWORD *v16; // [rsp+890h] [rbp+810h]
  __int64 v17; // [rsp+898h] [rbp+818h]
  _QWORD *v18; // [rsp+8A0h] [rbp+820h]
  __int64 v19; // [rsp+8A8h] [rbp+828h]
  _QWORD *v20; // [rsp+8B0h] [rbp+830h]
  __int64 v21; // [rsp+8B8h] [rbp+838h]

  v21 = -2;
  sub_14148D130(&v11, a2, a3);
  if ( v11 == -1 )
  {
    sub_140018650(&v12);
    goto LABEL_11;
  }
  v19 = v11;
  v14[0] = v12;
  v14[1] = v13;
  v15 = 0;
  v18 = v12;
  v16 = v12;
  v17 = v13;
  sub_1408A6A90(&v11, v14);
  v4 = v11;
  if ( v11 != 2 )
  {
    sub_141684120(v10, &v12, 1056);
    v8 = v19;
    if ( !v19 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v5 = *v12;
  v6 = *v12 == 1;
  v20 = v12;
  if ( v6 )
  {
    sub_140018650(v12 + 1);
  }
  else if ( !v5 )
  {
    v7 = v20[2];
    if ( v7 )
      sub_140001660(v20[1], v7, 1);
  }
  sub_140001660(v20, 40, 8);
  v8 = v19;
  if ( v19 )
LABEL_9:
    sub_140001660(v18, v8, 1);
LABEL_10:
  if ( (_DWORD)v4 != 2 )
  {
    sub_141684120(a1 + 1, v10, 1048);
    *a1 = v4;
    return a1;
  }
LABEL_11:
  *a1 = 0;
  a1[2] = -1;
  a1[104] = -1;
  a1[116] = -1;
  a1[124] = -1;
  return a1;
}