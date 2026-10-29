// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | ea 0x14026d740 | name sub_14026D740
// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | attributed via panic-Location xref (win-native)
unsigned __int64 __fastcall sub_14026D740(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  _QWORD v10[4]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[11]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int64 v14; // [rsp+B0h] [rbp+30h] BYREF
  char v15; // [rsp+BFh] [rbp+3Fh] BYREF
  __int64 v16; // [rsp+C0h] [rbp+40h]

  v16 = -2;
  result = sub_141695140(a1, a2);
  if ( result )
  {
    v7 = result;
    v14 = result;
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
        v8 = sub_1416B3F10(v6, v5);
        LOBYTE(v9) = (*(__int64 (__fastcall **)(unsigned __int64))(v8 + 8))(HIDWORD(v7));
        goto LABEL_7;
      case 3uLL:
        v9 = HIDWORD(result);
LABEL_7:
        if ( !(_BYTE)v9 )
          goto LABEL_13;
LABEL_10:
        if ( *(_QWORD *)off_1421E6EC0 < 2u )
        {
LABEL_13:
          result = v7 & 3;
          if ( (unsigned int)(result - 2) < 2 )
            return result;
        }
        else
        {
          v13[0] = a1;
          v13[1] = a2;
          v10[0] = v13;
          v10[1] = sub_14169F630;
          v10[2] = &v14;
          v10[3] = sub_1416BB0B0;
          v12[5] = 2;
          v12[6] = aCodexmateLibCo_1;
          v12[7] = 51;
          v12[9] = &unk_1419E0BB9;
          v12[10] = v10;
          v11 = 0;
          v12[0] = aCodexmateLibCo_1;
          v12[1] = 51;
          v12[2] = 0;
          v12[3] = aSrcCoreRelayRe;
          v12[4] = 41;
          v12[8] = 0x1EF00000001LL;
          sub_1414D53A0(&v15, &v11);
          v7 = v14;
          result = v14 & 3;
          if ( (unsigned int)(result - 2) < 2 )
            return result;
        }
        if ( result )
        {
          v12[0] = v7 - 1;
          LOBYTE(v11) = 3;
          result = sub_1416BCB00(v12);
        }
        break;
    }
  }
  return result;
}
