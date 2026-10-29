// win 1.2.7 | module src/platform/system_volume_windows.rs | ea 0x14021bf70 | name sub_14021BF70
// win 1.2.7 | module src/platform/system_volume_windows.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_14021BF70(__int64 a1)
{
  __int64 *v1; // rdi
  char v2; // al
  int v3; // esi
  char v4; // al
  __int64 v5; // rsi
  char v6; // al
  __int64 v7; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v8[56]; // [rsp+30h] [rbp-50h] BYREF
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
  if ( _InterlockedCompareExchange8(&byte_1421E7490, 1, 0) )
    sub_141937480(&byte_1421E7490);
  v1 = off_1421E7210;
  if ( !(2 * *off_1421E7210) )
  {
    if ( byte_1421E7491 )
    {
LABEL_5:
      if ( 2 * *v1 )
      {
        if ( !(unsigned __int8)sub_141938160(a1) )
          byte_1421E7491 = 1;
      }
LABEL_6:
      v2 = byte_1421E7490;
      byte_1421E7490 = 0;
      if ( v2 == 2 )
      {
        WakeByAddressSingle(&byte_1421E7490);
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          goto LABEL_8;
      }
      else if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
LABEL_8:
        v8[5] = 2;
        v8[6] = aCodexmateLibPl_1;
        v8[7] = 46;
        v8[9] = &unk_1419DC8B6;
        v8[10] = 133;
        v7 = 0;
        v8[0] = aCodexmateLibPl_1;
        v8[1] = 46;
        v8[2] = 0;
        v8[3] = aSrcPlatformSys;
        v8[4] = 37;
        v8[8] = 0x4100000001LL;
        sub_1414D53A0(&v15, &v7);
        return;
      }
      return;
    }
    v3 = dword_1421E7494;
    dword_1421E7494 = 0;
LABEL_10:
    if ( 2 * *v1 && !(unsigned __int8)sub_141938160(a1) )
      byte_1421E7491 = 1;
    goto LABEL_11;
  }
  v6 = sub_141938160(a1);
  a1 = (unsigned __int8)byte_1421E7491;
  if ( byte_1421E7491 )
  {
    if ( !v6 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v3 = dword_1421E7494;
  dword_1421E7494 = 0;
  if ( v6 )
    goto LABEL_10;
LABEL_11:
  v4 = byte_1421E7490;
  byte_1421E7490 = 0;
  if ( v4 == 2 )
  {
    WakeByAddressSingle(&byte_1421E7490);
    if ( !v3 )
      return;
  }
  else if ( !v3 )
  {
    return;
  }
  sub_14021B600();
  sub_1401B6ED0((__int64)&v11);
  sub_1401B9830((__int64)&v7, (__int64)&v11);
  sub_1416828D0((unsigned int)&v11, v9, v10, (unsigned int)&unk_1419DC7B8, 24);
  sub_140034990(&v7);
  v14 = v12;
  v5 = sub_141695140(v12, v13);
  if ( v11 )
    sub_140001660(v14, v11, 1);
  if ( v5 && (unsigned int)(v5 & 3) - 2 >= 2 && (v5 & 3) != 0 )
  {
    v8[0] = v5 - 1;
    LOBYTE(v7) = 3;
    sub_1416BCB00(v8);
  }
}
