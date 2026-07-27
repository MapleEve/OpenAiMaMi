// module: codexmate_lib/platform/system_volume_windows
// addr: 0x1401b91a0
// name: sub_1401B91A0
// win 1.2.1 | module src/platform/system_volume_windows.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_1401B91A0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  char v3; // al
  int v4; // esi
  char v5; // al
  __int64 v6; // rsi
  char v7; // al
  _QWORD v8[57]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v9; // [rsp+1F0h] [rbp+170h]
  __int64 v10; // [rsp+1F8h] [rbp+178h]
  __int64 v11; // [rsp+408h] [rbp+388h] BYREF
  __int64 v12; // [rsp+410h] [rbp+390h]
  __int64 v13; // [rsp+418h] [rbp+398h]
  __int64 v14; // [rsp+428h] [rbp+3A8h]
  char v15; // [rsp+437h] [rbp+3B7h] BYREF
  __int64 v16; // [rsp+438h] [rbp+3B8h]

  v16 = -2;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(&byte_141EC9300, 1, 0) )
    sub_1416C15B0(&byte_141EC9300);
  v2 = off_141EC90B8;
  if ( !(2 * *off_141EC90B8) )
  {
    if ( byte_141EC9301 )
    {
LABEL_5:
      if ( 2 * *v2 )
      {
        if ( !(unsigned __int8)sub_1416C2250(a1, a2) )
          byte_141EC9301 = 1;
      }
LABEL_6:
      v3 = byte_141EC9300;
      byte_141EC9300 = 0;
      if ( v3 == 2 )
      {
        WakeByAddressSingle(&byte_141EC9300);
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
          goto LABEL_8;
      }
      else if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
LABEL_8:
        v8[0] = 0;
        v8[1] = aCodexmateLibPl_1;
        v8[2] = 46;
        v8[3] = 0;
        v8[4] = aSrcPlatformSys;
        v8[5] = 37;
        v8[6] = 2;
        v8[7] = aCodexmateLibPl_1;
        v8[8] = 46;
        v8[9] = 0x4100000001LL;
        v8[10] = &unk_14173BD86;
        v8[11] = 133;
        sub_1412C36A0(&v15, v8);
        return;
      }
      return;
    }
    v4 = dword_141EC9304;
    dword_141EC9304 = 0;
LABEL_10:
    if ( 2 * *v2 && !(unsigned __int8)sub_1416C2250(a1, a2) )
      byte_141EC9301 = 1;
    goto LABEL_11;
  }
  v7 = sub_1416C2250(a1, a2);
  a1 = (unsigned __int8)byte_141EC9301;
  if ( byte_141EC9301 )
  {
    if ( !v7 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v4 = dword_141EC9304;
  dword_141EC9304 = 0;
  if ( v7 )
    goto LABEL_10;
LABEL_11:
  v5 = byte_141EC9300;
  byte_141EC9300 = 0;
  if ( v5 == 2 )
  {
    WakeByAddressSingle(&byte_141EC9300);
    if ( !v4 )
      return;
  }
  else if ( !v4 )
  {
    return;
  }
  sub_1401B88C0();
  sub_1407126F0(&v11);
  sub_140714E90(v8, &v11);
  sub_141473FA0((unsigned int)&v11, v9, v10, (unsigned int)&unk_14173BC85, 24);
  sub_140016620(v8);
  v14 = v12;
  v6 = sub_141485EF0(v12, v13);
  if ( v11 )
    sub_140001660(v14, v11, 1);
  v8[0] = v6;
  if ( v6 )
    sub_140018650(v8);
}