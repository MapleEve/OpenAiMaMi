// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog19read_bund @ 0x140a2b420
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay13codex_catalog19read_bund | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140A2B420(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // [rsp+28h] [rbp-58h] BYREF
  __int128 v8; // [rsp+38h] [rbp-48h]
  _BYTE v9[40]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v10; // [rsp+108h] [rbp+88h]
  char v11; // [rsp+118h] [rbp+98h] BYREF
  _BYTE v12[31]; // [rsp+119h] [rbp+99h]
  __int64 v13; // [rsp+138h] [rbp+B8h]
  __int128 v14; // [rsp+140h] [rbp+C0h]
  __int128 v15; // [rsp+150h] [rbp+D0h]
  __int128 v16; // [rsp+160h] [rbp+E0h]
  __int64 v17; // [rsp+170h] [rbp+F0h]
  __int64 v18; // [rsp+178h] [rbp+F8h]
  __int64 v19; // [rsp+180h] [rbp+100h]

  v19 = -2;
  sub_1414E8BC0(&v7);
  sub_1414E8AA0(&v7, aDebug, 5);
  sub_1414E8AA0(&v7, aModels_3, 6);
  sub_1414E8AA0(&v7, aBundled, 9);
  sub_1414EE9D0(v9, &v7);
  v2 = *(_QWORD *)v9;
  if ( *(_QWORD *)v9 == -1 )
  {
    sub_14049AA50(*(_QWORD *)&v9[8]);
    *a1 = -1;
    return sub_1403C96C0(&v7);
  }
  v16 = v10;
  v15 = *(_OWORD *)&v9[24];
  v14 = *(_OWORD *)&v9[8];
  v13 = *(_QWORD *)v9;
  result = sub_1403C96C0(&v7);
  if ( !DWORD2(v16) )
  {
    result = *((_QWORD *)&v14 + 1);
    if ( *((_QWORD *)&v14 + 1) <= 0x800000u )
    {
      v4 = v14;
      v7 = v14;
      v8 = 0;
      sub_1406DAAA0(v9, &v7);
      if ( v9[0] != 0xFF )
      {
        *(_OWORD *)&v12[15] = *(_OWORD *)&v9[16];
        *(_OWORD *)v12 = *(_OWORD *)&v9[1];
        v11 = v9[0];
        v5 = sub_14149A8D0(aModels_3, 6, &v11);
        if ( v5 && *(_BYTE *)v5 == 4 )
        {
          sub_14029ABD0(&v7, *(_QWORD *)(v5 + 16), *(_QWORD *)(v5 + 24));
          if ( (_QWORD)v8 )
          {
            a1[2] = v8;
            *(_OWORD *)a1 = v7;
          }
          else
          {
            v17 = *((_QWORD *)&v7 + 1);
            v18 = v7;
            *a1 = -1;
            sub_14031D130(&v7);
            if ( v18 )
              sub_140001660(v17, 32 * v18, 8);
          }
        }
        else
        {
          *a1 = -1;
        }
        result = sub_14003DCD0(&v11);
        if ( !v2 )
          goto LABEL_17;
        v6 = v4;
        goto LABEL_16;
      }
      result = sub_140492F10(v9);
    }
  }
  *a1 = -1;
  if ( !v2 )
    goto LABEL_17;
  v6 = v14;
LABEL_16:
  result = sub_140001660(v6, v2, 1);
LABEL_17:
  if ( (_QWORD)v15 )
    return sub_140001660(*((_QWORD *)&v15 + 1), v15, 1);
  return result;
}
