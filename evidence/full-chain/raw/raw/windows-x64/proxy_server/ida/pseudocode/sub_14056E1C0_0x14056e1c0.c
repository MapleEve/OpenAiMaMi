// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14056e1c0
// name: sub_14056E1C0
__int64 __fastcall sub_14056E1C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int128 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // rsi
  __int64 v16; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v17[44]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v18; // [rsp+190h] [rbp+110h] BYREF
  __int128 v19; // [rsp+1A0h] [rbp+120h]
  __int128 v20; // [rsp+1B0h] [rbp+130h]
  __int128 v21; // [rsp+1C0h] [rbp+140h]
  __int128 v22; // [rsp+1D0h] [rbp+150h]
  __int128 v23; // [rsp+1E0h] [rbp+160h]
  __int128 v24; // [rsp+1F0h] [rbp+170h]
  __int128 v25; // [rsp+200h] [rbp+180h]
  __int128 v26; // [rsp+210h] [rbp+190h]
  __int128 v27; // [rsp+220h] [rbp+1A0h]
  __int128 v28; // [rsp+230h] [rbp+1B0h]
  char v29; // [rsp+240h] [rbp+1C0h]
  __int128 v30; // [rsp+300h] [rbp+280h]
  __int128 v31; // [rsp+310h] [rbp+290h]
  __int128 v32; // [rsp+320h] [rbp+2A0h]
  __int128 v33; // [rsp+330h] [rbp+2B0h]
  __int128 v34; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v35; // [rsp+350h] [rbp+2D0h]
  __int128 v36; // [rsp+360h] [rbp+2E0h]
  __int128 v37; // [rsp+370h] [rbp+2F0h]
  char v38; // [rsp+387h] [rbp+307h]
  __int64 v39; // [rsp+388h] [rbp+308h]

  v39 = -2;
  v2 = sub_141470CD0(a1, a2);
  if ( *(_BYTE *)(v2 + 16) == 1 )
  {
    v3 = *(_QWORD *)v2;
    v4 = *(_QWORD *)(v2 + 8);
  }
  else
  {
    v15 = v2;
    v3 = sub_141486EF0();
    v2 = v15;
    *(_QWORD *)v15 = v3;
    *(_QWORD *)(v15 + 8) = v4;
    *(_BYTE *)(v15 + 16) = 1;
  }
  *(_QWORD *)v2 = v3 + 1;
  v19 = xmmword_141760A70;
  v18 = *(_OWORD *)&off_141760A60;
  *(_QWORD *)&v20 = v3;
  *((_QWORD *)&v20 + 1) = v4;
  v32 = v20;
  v31 = xmmword_141760A70;
  v30 = *(_OWORD *)&off_141760A60;
  *(_QWORD *)&v33 = sub_140582190();
  DWORD2(v33) = 0;
  v7 = sub_141470CD0(v6, v5);
  v8 = v7;
  if ( *(_BYTE *)(v7 + 16) == 1 )
  {
    v9 = *(_OWORD *)v7;
  }
  else
  {
    *(_QWORD *)&v9 = sub_141486EF0();
    *(_OWORD *)v8 = v9;
    *(_BYTE *)(v8 + 16) = 1;
  }
  *(_QWORD *)v8 = v9 + 1;
  v19 = xmmword_141760A70;
  v18 = *(_OWORD *)&off_141760A60;
  v20 = v9;
  v10 = sub_140582190();
  v36 = v20;
  v35 = v19;
  v34 = v18;
  *(_QWORD *)&v37 = v10;
  DWORD2(v37) = 0;
  v17[0] = 0;
  v17[1] = 1;
  v17[2] = &unk_1417B34B8;
  v16 = -1;
  v38 = 1;
  sub_140B9DC80((char *)&v18 + 8, v17, &off_141763278);
  *(_QWORD *)&v18 = -1;
  v38 = 1;
  sub_1405718D0(&v34, asc_141761160, 1, &v18);
  sub_141684120(&v18, &v16, 360);
  v38 = 0;
  sub_1405718D0(&v34, aPrivateAxumFal, 26, &v18);
  v28 = v37;
  v27 = v36;
  v26 = v35;
  v25 = v34;
  *(_QWORD *)&v20 = 1;
  *((_QWORD *)&v20 + 1) = &unk_1417B34B8;
  v21 = v30;
  v22 = v31;
  v23 = v32;
  v24 = v33;
  *(_QWORD *)&v18 = 1;
  *((_QWORD *)&v18 + 1) = 1;
  v19 = 0u;
  v29 = 1;
  nullsub_1(v11);
  v12 = sub_140001650(184, 8);
  if ( !v12 )
    sub_1416C2D31(8, 184);
  v13 = v12;
  sub_141684120(v12, &v18, 184);
  return v13;
}