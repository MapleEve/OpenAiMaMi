// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility3 @ 0x140542290
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility3 | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_140542290(int a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rsi
  _QWORD v5[12]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v6[4]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v7[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v8; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+48h]
  __int64 v10; // [rsp+D0h] [rbp+50h]
  __int64 v11; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v12; // [rsp+E8h] [rbp+68h]
  char v13; // [rsp+F7h] [rbp+77h] BYREF
  __int64 v14; // [rsp+F8h] [rbp+78h]

  v14 = -2;
  sub_1414E1440((unsigned int)&v8, a1, a2, (unsigned int)&unk_1417E69C7, 36);
  v2 = v10;
  v12 = v9;
  result = sub_1414F3390(v9, v10);
  v4 = result;
  if ( result )
  {
    v11 = result;
    if ( (unsigned __int8)sub_1404BC190(result) && *(_QWORD *)off_141F53DF0 >= 2u )
    {
      v7[0] = v12;
      v7[1] = v2;
      v6[0] = v7;
      v6[1] = sub_1414FC840;
      v6[2] = &v11;
      v6[3] = sub_1414FDBC0;
      v5[0] = 0;
      v5[1] = aCodexmateLibCo_16;
      v5[2] = 51;
      v5[3] = 0;
      v5[4] = aSrcCoreRelayCo_9;
      v5[5] = 41;
      v5[6] = 2;
      v5[7] = aCodexmateLibCo_16;
      v5[8] = 51;
      v5[9] = 0x66D00000001LL;
      v5[10] = &unk_1417E6E32;
      v5[11] = v6;
      sub_141330DD0(&v13, v5);
      v4 = v11;
    }
    result = sub_14049AA50(v4);
  }
  if ( v8 )
    return sub_140001660(v12, v8, 1);
  return result;
}
