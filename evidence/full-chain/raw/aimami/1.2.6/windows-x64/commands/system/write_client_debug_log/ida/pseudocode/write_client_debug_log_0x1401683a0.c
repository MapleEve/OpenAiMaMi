// Pseudocode for write_client_debug_log (EA: 0x1401683a0, size: 0x285)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 write_client_debug_log 处理器（commands::debug_bundle，argKeys: event）。写入客户端调试日志。⚠副作用：写日志文件。
// Tauri 命令 write_client_debug_log 处理器（commands::debug_bundle，argKeys: event）。写入客户端调试日志。⚠副作用：写日志文件。
__int64 __fastcall write_client_debug_log(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  _BYTE v5[520]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v6[144]; // [rsp+238h] [rbp+1B8h] BYREF
  _BYTE v7[384]; // [rsp+2C8h] [rbp+248h] BYREF
  __int64 v8; // [rsp+448h] [rbp+3C8h]
  int v9; // [rsp+450h] [rbp+3D0h]
  int v10; // [rsp+454h] [rbp+3D4h]
  _QWORD v11[50]; // [rsp+458h] [rbp+3D8h] BYREF
  __int64 v12; // [rsp+5E8h] [rbp+568h] BYREF
  __int128 v13; // [rsp+5F0h] [rbp+570h]
  __int128 v14; // [rsp+600h] [rbp+580h]
  __int64 v15; // [rsp+678h] [rbp+5F8h] BYREF
  __int128 v16; // [rsp+680h] [rbp+600h]
  __int128 v17; // [rsp+690h] [rbp+610h]
  __int128 v18; // [rsp+6A0h] [rbp+620h] BYREF
  __int64 v19; // [rsp+6B0h] [rbp+630h]
  __int64 v20; // [rsp+6C0h] [rbp+640h]
  __int64 v21; // [rsp+6C8h] [rbp+648h]
  __int128 v22; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v23; // [rsp+6E0h] [rbp+660h]
  __int64 v24; // [rsp+6F0h] [rbp+670h]
  char v25; // [rsp+6FFh] [rbp+67Fh]
  __int64 v26; // [rsp+700h] [rbp+680h]

  v26 = -2;
  sub_14172B820(v5, a1, 520);
  sub_14172B820(v7, a1 + 520, 400);
  v23 = *(_QWORD *)(a1 + 936);
  v22 = *(_OWORD *)(a1 + 920);
  v11[6] = 0;
  v11[0] = aWriteClientDeb;
  v11[1] = 22;
  v11[2] = aEvent;
  v11[3] = 5;
  v11[4] = v5;
  v11[5] = &v22;
  v25 = 1;
  sub_140955D20(&v12, v11);
  if ( v12 == -1 )
  {
    v17 = v14;
    v16 = v13;
    sub_14172B820(v11, a1 + 520, 360);
    v18 = *(_OWORD *)(a1 + 880);
    v19 = *(_QWORD *)(a1 + 896);
    v15 = 1;
    v25 = 0;
    sub_140AFFC30((__int64)v11, v8, (__int64)&v15, &v18, v9, v10);
  }
  else
  {
    sub_14172B820(v6, &v12, 144);
    v25 = 1;
    sub_14094E5D0(v6);
    sub_14172B820(v11, a1 + 520, 400);
    LOBYTE(v12) = -1;
    v25 = 0;
    sub_140A9A020(v11, &v12);
  }
  if ( (_QWORD)v22 != -1 )
  {
    v2 = *((_QWORD *)&v22 + 1);
    v21 = v23;
    v24 = 0;
    v20 = *((_QWORD *)&v22 + 1);
    while ( v21 != v24 )
    {
      ++v24;
      v3 = v2 + 96;
      sub_140401FB0();
      v2 = v3;
    }
    if ( (_QWORD)v22 )
      sub_140001660(*((_QWORD *)&v22 + 1), 96 * v22, 8);
  }
  return sub_140043900(v5);
}
