// win 1.2.7 latest-exe | module src/platform/system_volume_windows.rs | ea 0x140d4b9b0 | successor of pre-update 0x14021bf70 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
void __fastcall sub_140D4B9B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  char v4; // al
  int v5; // esi
  char v6; // al
  __int64 v7; // rsi
  char v8; // al
  __int64 v9; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v10[56]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+1F0h] [rbp+170h]
  __int64 v12; // [rsp+1F8h] [rbp+178h]
  __int64 v13; // [rsp+408h] [rbp+388h] BYREF
  __int64 v14; // [rsp+410h] [rbp+390h]
  __int64 v15; // [rsp+418h] [rbp+398h]
  __int64 v16; // [rsp+428h] [rbp+3A8h]
  char v17; // [rsp+437h] [rbp+3B7h] BYREF
  __int64 v18; // [rsp+438h] [rbp+3B8h]

  v18 = -2;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(&byte_1422404C8, 1, 0) )
    sub_141969A30(&byte_1422404C8);
  v3 = off_142240260;
  if ( !(2 * *off_142240260) )
  {
    if ( byte_1422404C9 )
    {
LABEL_5:
      if ( 2 * *v3 )
      {
        if ( !(unsigned __int8)sub_14196A710(a1, a2, a3) )
          byte_1422404C9 = 1;
      }
LABEL_6:
      v4 = byte_1422404C8;
      byte_1422404C8 = 0;
      if ( v4 == 2 )
      {
        WakeByAddressSingle(&byte_1422404C8);
        if ( *(_QWORD *)off_14223FF10 >= 2u )
          goto LABEL_8;
      }
      else if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
LABEL_8:
        v10[5] = 2;
        v10[6] = aCodexmateLibPl_2;
        v10[7] = 46;
        v10[9] = &unk_141A97336;
        v10[10] = 133;
        v9 = 0;
        v10[0] = aCodexmateLibPl_2;
        v10[1] = 46;
        v10[2] = 0;
        v10[3] = aSrcPlatformSys;
        v10[4] = 37;
        v10[8] = 0x4100000001LL;
        sub_141503E20(&v17, &v9);
        return;
      }
      return;
    }
    v5 = dword_1422404CC;
    dword_1422404CC = 0;
LABEL_10:
    if ( 2 * *v3 && !(unsigned __int8)sub_14196A710(a1, a2, a3) )
      byte_1422404C9 = 1;
    goto LABEL_11;
  }
  v8 = sub_14196A710(a1, a2, a3);
  a1 = (unsigned __int8)byte_1422404C9;
  if ( byte_1422404C9 )
  {
    if ( !v8 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v5 = dword_1422404CC;
  dword_1422404CC = 0;
  if ( v8 )
    goto LABEL_10;
LABEL_11:
  v6 = byte_1422404C8;
  byte_1422404C8 = 0;
  if ( v6 == 2 )
  {
    WakeByAddressSingle(&byte_1422404C8);
    if ( !v5 )
      return;
  }
  else if ( !v5 )
  {
    return;
  }
  sub_140D4B050();
  sub_140A2C320(&v13);
  sub_140A2EC60(&v9, &v13);
  sub_1416B18A0((unsigned int)&v13, v11, v12, (unsigned int)&unk_141A97232, 24);
  sub_140038710(&v9);
  v16 = v14;
  v7 = sub_1416C4110(v14, v15);
  if ( v13 )
    sub_140001660(v16, v13, 1);
  if ( v7 && (unsigned int)(v7 & 3) - 2 >= 2 && (v7 & 3) != 0 )
  {
    v10[0] = v7 - 1;
    LOBYTE(v9) = 3;
    sub_1416EBAD0(v10);
  }
}
