// module: codexmate_lib/core/sessions
// addr: 0x1409929d0
// name: sub_1409929D0
// win 1.2.1 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409929D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h]
  __int128 v9; // [rsp+30h] [rbp-50h]
  __int128 v10; // [rsp+40h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v13[24]; // [rsp+68h] [rbp-18h]
  __int128 v14; // [rsp+80h] [rbp+0h]
  __int128 v15; // [rsp+90h] [rbp+10h]
  __int128 v16; // [rsp+A0h] [rbp+20h]
  __int128 v17; // [rsp+B0h] [rbp+30h]
  __int128 v18; // [rsp+C0h] [rbp+40h]
  __int64 v19; // [rsp+D0h] [rbp+50h] BYREF
  _QWORD v20[9]; // [rsp+D8h] [rbp+58h] BYREF

  v20[1] = -2;
  v19 = a1;
  v20[0] = a2;
  while ( 1 )
  {
    sub_140A67BD0(&v7, &v19);
    v4 = v7;
    if ( v7 != -1 )
    {
      v5 = v8;
      v15 = v11;
      v14 = v10;
      *(_OWORD *)&v13[8] = v9;
      v12 = v7;
      *(_QWORD *)v13 = v8;
      v18 = v9;
      v16 = v10;
      v17 = v11;
      goto LABEL_7;
    }
    if ( !v20[0] )
      break;
    sub_14042B0E0(&v12, v20, 1);
    v4 = v12;
    v5 = *(_QWORD *)v13;
    v18 = *(_OWORD *)&v13[8];
    v17 = v15;
    v16 = v14;
    if ( v12 == -2 )
      break;
LABEL_7:
    v15 = v17;
    v14 = v16;
    v12 = v4;
    *(_QWORD *)v13 = v5;
    *(_OWORD *)&v13[8] = v18;
    if ( v4 == -1 )
    {
      if ( v5 != -1 )
      {
        *(_OWORD *)v13 = v18;
        v12 = v5;
        sub_140474440(a3, &v12);
      }
    }
    else
    {
      sub_140982F30(&v12);
    }
  }
  return sub_140982E20(&v19);
}