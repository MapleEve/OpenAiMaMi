// module: codexmate_lib/commands
// addr: 0x1401940d0
// name: write_client_debug_log
// win 1.2.1 | tauri command handler = write_client_debug_log | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall write_client_debug_log(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v8; // [rsp+20h] [rbp-60h]
  _BYTE v9[520]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v10[144]; // [rsp+238h] [rbp+1B8h] BYREF
  _BYTE v11[384]; // [rsp+2C8h] [rbp+248h] BYREF
  __int64 v12; // [rsp+448h] [rbp+3C8h]
  int v13; // [rsp+450h] [rbp+3D0h]
  int v14; // [rsp+454h] [rbp+3D4h]
  _QWORD v15[50]; // [rsp+458h] [rbp+3D8h] BYREF
  __int64 v16; // [rsp+5E8h] [rbp+568h] BYREF
  __int128 v17; // [rsp+5F0h] [rbp+570h]
  __int128 v18; // [rsp+600h] [rbp+580h]
  __int64 v19; // [rsp+678h] [rbp+5F8h] BYREF
  __int128 v20; // [rsp+680h] [rbp+600h]
  __int128 v21; // [rsp+690h] [rbp+610h]
  __int128 v22; // [rsp+6A0h] [rbp+620h] BYREF
  __int64 v23; // [rsp+6B0h] [rbp+630h]
  __int64 v24; // [rsp+6C0h] [rbp+640h]
  __int64 v25; // [rsp+6C8h] [rbp+648h]
  __int128 v26; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v27; // [rsp+6E0h] [rbp+660h]
  __int64 v28; // [rsp+6F0h] [rbp+670h]
  char v29; // [rsp+6FFh] [rbp+67Fh]
  __int64 v30; // [rsp+700h] [rbp+680h]

  v30 = -2;
  sub_141684120(v9, a1, 520);
  sub_141684120(v11, a1 + 520, 400);
  v27 = *(_QWORD *)(a1 + 936);
  v26 = *(_OWORD *)(a1 + 920);
  v15[6] = 0;
  v15[0] = aWriteClientDeb;
  v15[1] = 22;
  v15[2] = aEvent;
  v15[3] = 5;
  v15[4] = v9;
  v15[5] = &v26;
  v29 = 1;
  sub_140B964C0(&v16, v15);
  if ( v16 == -1 )
  {
    v21 = v18;
    v20 = v17;
    sub_141684120(v15, a1 + 520, 360);
    v22 = *(_OWORD *)(a1 + 880);
    v23 = *(_QWORD *)(a1 + 896);
    v19 = 1;
    v29 = 0;
    sub_14047E370((unsigned int)v15, v12, (unsigned int)&v19, (unsigned int)&v22, v13, v14);
  }
  else
  {
    sub_141684120(v10, &v16, 144);
    v29 = 1;
    sub_140B94940(v10);
    sub_141684120(v15, a1 + 520, 400);
    LOBYTE(v16) = -1;
    v29 = 0;
    sub_14043A970(v15, &v16);
  }
  if ( (_QWORD)v26 != -1 )
  {
    v5 = *((_QWORD *)&v26 + 1);
    v25 = v27;
    v28 = 0;
    v24 = *((_QWORD *)&v26 + 1);
    while ( v25 != v28 )
    {
      ++v28;
      v6 = v5 + 96;
      sub_1402C7520(v5, v2, v3, v4, v8);
      v5 = v6;
    }
    if ( (_QWORD)v26 )
      sub_140001660(*((_QWORD *)&v26 + 1), 96 * v26, 8);
  }
  return sub_140014270(v9);
}