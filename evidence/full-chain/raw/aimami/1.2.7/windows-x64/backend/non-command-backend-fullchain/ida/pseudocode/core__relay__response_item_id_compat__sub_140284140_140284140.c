// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | ea 0x140284140 | name sub_140284140
// win 1.2.7 | module src/core/relay/response_item_id_compat.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140284140(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  _QWORD v10[4]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[11]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int64 v14; // [rsp+B0h] [rbp+30h] BYREF
  char v15; // [rsp+BFh] [rbp+3Fh] BYREF
  __int64 v16; // [rsp+C0h] [rbp+40h]

  v16 = -2;
  if ( *(_BYTE *)(a1 + 32) == 1 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    v2 = *(_QWORD *)(a1 + 16);
    v3 = sub_141695140(v1, v2);
    if ( v3 )
    {
      v6 = v3;
      v14 = v3;
      switch ( v3 & 3 )
      {
        case 0uLL:
          if ( *(_BYTE *)(v3 + 16) )
            goto LABEL_11;
          goto LABEL_14;
        case 1uLL:
          if ( *(_BYTE *)(v3 + 31) )
            goto LABEL_11;
          goto LABEL_14;
        case 2uLL:
          v7 = sub_1416B3F10(v5, v4);
          LOBYTE(v8) = (*(__int64 (__fastcall **)(unsigned __int64))(v7 + 8))(HIDWORD(v6));
          goto LABEL_8;
        case 3uLL:
          v8 = HIDWORD(v3);
LABEL_8:
          if ( !(_BYTE)v8 )
            goto LABEL_14;
LABEL_11:
          if ( *(_QWORD *)off_1421E6EC0 < 2u )
          {
LABEL_14:
            v9 = v6 & 3;
            if ( (unsigned int)(v9 - 2) < 2 )
              return;
          }
          else
          {
            v13[0] = v1;
            v13[1] = v2;
            v10[0] = v13;
            v10[1] = sub_14169F630;
            v10[2] = &v14;
            v10[3] = sub_1416BB0B0;
            v12[5] = 2;
            v12[6] = aCodexmateLibCo_1;
            v12[7] = 51;
            v12[9] = &unk_1419E1C98;
            v12[10] = v10;
            v11 = 0;
            v12[0] = aCodexmateLibCo_1;
            v12[1] = 51;
            v12[2] = 0;
            v12[3] = aSrcCoreRelayRe;
            v12[4] = 41;
            v12[8] = 0xE200000001LL;
            sub_1414D53A0(&v15, &v11);
            v6 = v14;
            v9 = v14 & 3;
            if ( (unsigned int)(v9 - 2) < 2 )
              return;
          }
          if ( v9 )
          {
            v12[0] = v6 - 1;
            LOBYTE(v11) = 3;
            sub_1416BCB00(v12);
          }
          break;
      }
    }
  }
}
