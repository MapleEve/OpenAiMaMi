// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14025c170 | name sub_14025C170
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
unsigned __int64 __fastcall sub_14025C170(int a1, int a2)
{
  __int64 v2; // rdi
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  _QWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v11[11]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v12[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+48h]
  __int64 v15; // [rsp+D0h] [rbp+50h]
  unsigned __int64 v16; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v17; // [rsp+E8h] [rbp+68h]
  char v18; // [rsp+F7h] [rbp+77h] BYREF
  __int64 v19; // [rsp+F8h] [rbp+78h]

  v19 = -2;
  sub_1416828D0((unsigned int)&v13, a1, a2, (unsigned int)&unk_1419DFCCD, 36);
  v2 = v15;
  v17 = v14;
  result = sub_141695140(v14, v15);
  v6 = result;
  if ( result )
  {
    v16 = result;
    switch ( result & 3 )
    {
      case 0uLL:
        if ( *(_BYTE *)(result + 16) )
          goto LABEL_10;
        goto LABEL_13;
      case 1uLL:
        if ( *(_BYTE *)(result + 31) )
          goto LABEL_10;
        goto LABEL_13;
      case 2uLL:
        v7 = sub_1416B3F10(v5, v4);
        LOBYTE(v8) = (*(__int64 (__fastcall **)(unsigned __int64))(v7 + 8))(HIDWORD(v6));
        goto LABEL_7;
      case 3uLL:
        v8 = HIDWORD(result);
LABEL_7:
        if ( !(_BYTE)v8 )
          goto LABEL_13;
LABEL_10:
        if ( *(_QWORD *)off_1421E6EC0 < 2u )
        {
LABEL_13:
          result = v6 & 3;
          if ( (unsigned int)(result - 2) < 2 )
            break;
        }
        else
        {
          v12[0] = v17;
          v12[1] = v2;
          v9[0] = v12;
          v9[1] = sub_14169F630;
          v9[2] = &v16;
          v9[3] = sub_1416BB0B0;
          v11[5] = 2;
          v11[6] = aCodexmateLibCo_0;
          v11[7] = 51;
          v11[9] = &unk_1419E02BA;
          v11[10] = v9;
          v10 = 0;
          v11[0] = aCodexmateLibCo_0;
          v11[1] = 51;
          v11[2] = 0;
          v11[3] = aSrcCoreRelayCo_0;
          v11[4] = 41;
          v11[8] = 0xB6B00000001LL;
          sub_1414D53A0(&v18, &v10);
          v6 = v16;
          result = v16 & 3;
          if ( (unsigned int)(result - 2) < 2 )
            break;
        }
        if ( result )
        {
          v11[0] = v6 - 1;
          LOBYTE(v10) = 3;
          result = sub_1416BCB00(v11);
        }
        break;
    }
  }
  if ( v13 )
    return sub_140001660(v17, v13, 1);
  return result;
}
