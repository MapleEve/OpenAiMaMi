// module: codexmate_lib/commands/accounts
// addr: 0x1408a9120
// name: sub_1408A9120
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int128 *__fastcall sub_1408A9120(__int128 *a1, __int128 *a2)
{
  __int128 *v2; // rsi
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // rax
  _OWORD v13[5]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+80h] [rbp+0h]
  __int64 v15[3]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+30h]
  __int64 v18; // [rsp+B8h] [rbp+38h]
  __int128 v19; // [rsp+C0h] [rbp+40h]
  __int128 v20; // [rsp+D0h] [rbp+50h]
  char v21; // [rsp+E0h] [rbp+60h]
  __int128 *v22; // [rsp+E8h] [rbp+68h]
  __int64 v23; // [rsp+F0h] [rbp+70h]

  v23 = -2;
  v2 = a1;
  v3 = *a2;
  v20 = a2[1];
  v19 = v3;
  v16 = 0;
  v17 = 1;
  v18 = 0;
  v21 = 0x80;
  sub_140946540(a1, &v16);
  if ( *(_QWORD *)v2 != -1 )
  {
    v14 = *((_QWORD *)v2 + 10);
    v13[4] = v2[4];
    v4 = *v2;
    v5 = v2[1];
    v6 = v2[2];
    v13[3] = v2[3];
    v13[2] = v6;
    v13[1] = v5;
    v13[0] = v4;
    if ( (unsigned __int64)v20 < *((_QWORD *)&v19 + 1) )
    {
      v7 = v20 + 1;
      v8 = 0x100002600LL;
      while ( 1 )
      {
        v9 = *(unsigned __int8 *)(v19 + v7 - 1);
        if ( v9 > 0x20 || !_bittest64(&v8, v9) )
          break;
        *(_QWORD *)&v20 = v7;
        v10 = v7 - *((_QWORD *)&v19 + 1) + 1;
        ++v7;
        if ( v10 == 1 )
          goto LABEL_9;
      }
      v22 = v2;
      v15[0] = 22;
      v11 = sub_14169AEA0(&v16, v15, 0x100002600LL);
      v2 = v22;
      *((_QWORD *)v22 + 1) = v11;
      *(_QWORD *)v2 = -1;
      sub_140015340(v13);
    }
  }
LABEL_9:
  if ( v16 )
    sub_140001660(v17, v16, 1);
  return v2;
}