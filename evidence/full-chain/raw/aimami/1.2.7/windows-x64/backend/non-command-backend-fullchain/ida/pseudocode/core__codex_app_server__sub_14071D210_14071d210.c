// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x14071d210 | name sub_14071D210
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_14071D210(_QWORD *a1, __int64 a2)
{
  char v3; // al
  __int128 v4; // xmm1
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v8; // rdi
  char v9; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v10[31]; // [rsp+21h] [rbp-4Fh]
  char v11; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v12[15]; // [rsp+41h] [rbp-2Fh]
  __int128 v13; // [rsp+50h] [rbp-20h]
  char v14; // [rsp+67h] [rbp-9h] BYREF
  __int64 v15; // [rsp+68h] [rbp-8h]

  v15 = -2;
  v3 = *(_BYTE *)(a2 + 72);
  *(_BYTE *)(a2 + 72) = -1;
  if ( v3 == -1 )
  {
    a1[1] = sub_141911F40(aValueIsMissing, 16);
    goto LABEL_9;
  }
  v9 = v3;
  v4 = *(_OWORD *)(a2 + 88);
  *(_OWORD *)v10 = *(_OWORD *)(a2 + 73);
  *(_OWORD *)&v10[15] = v4;
  if ( !v3 )
  {
    *a1 = -1;
    sub_14002F9D0(&v9);
    return a1;
  }
  v11 = v9;
  *(_QWORD *)v12 = *(_QWORD *)v10;
  *(_DWORD *)&v12[8] = *(_DWORD *)&v10[8];
  *(_WORD *)&v12[12] = *(_WORD *)&v10[12];
  v12[14] = v10[14];
  v13 = *(_OWORD *)&v10[15];
  if ( v9 != 3 )
  {
    v8 = sub_14190A750(&v11, &v14, &unk_1419EFEA8);
    sub_140409B40(&v11);
    a1[1] = v8;
    goto LABEL_9;
  }
  v5 = v13;
  if ( *(_QWORD *)&v12[7] == -1 )
  {
    a1[1] = v13;
LABEL_9:
    *a1 = -2;
    return a1;
  }
  v6 = *((_QWORD *)&v13 + 1);
  *a1 = *(_QWORD *)&v12[7];
  a1[1] = v5;
  a1[2] = v6;
  return a1;
}
