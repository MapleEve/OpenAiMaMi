// win 1.2.7 | module src/core/relay/keychain/revisions.rs | ea 0x141059250 | name sub_141059250
// win 1.2.7 | module src/core/relay/keychain/revisions.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_141059250(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v8[11]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v9[3]; // [rsp+88h] [rbp+8h] BYREF
  char v10; // [rsp+A6h] [rbp+26h] BYREF
  char v11; // [rsp+A7h] [rbp+27h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h]

  v12 = -2;
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v1 = sub_140281370(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a1 + 56);
    if ( v1 )
    {
      v4 = v1;
      v9[2] = v1;
      v5 = v1 & 3;
      if ( *(_QWORD *)off_1421E6EC0 > 1u )
      {
        switch ( v1 & 3 )
        {
          case 0uLL:
            LOBYTE(v1) = *(_BYTE *)(v1 + 16);
            break;
          case 1uLL:
            LOBYTE(v1) = *(_BYTE *)(v1 + 31);
            break;
          case 2uLL:
            v6 = sub_1416B3F10(v3, v2);
            LOBYTE(v1) = (*(__int64 (__fastcall **)(unsigned __int64))(v6 + 8))(HIDWORD(v4));
            break;
          case 3uLL:
            v1 >>= 32;
            break;
        }
        v11 = v1;
        v9[0] = &v11;
        v9[1] = sub_1410593E0;
        v8[5] = 2;
        v8[6] = aCodexmateLibCo_12;
        v8[7] = 47;
        v8[9] = &unk_141A72898;
        v8[10] = v9;
        v7 = 0;
        v8[0] = aCodexmateLibCo_12;
        v8[1] = 47;
        v8[2] = 0;
        v8[3] = aSrcCoreRelayKe_0;
        v8[4] = 36;
        v8[8] = 0x5200000001LL;
        sub_1414D53A0(&v10, &v7);
      }
      if ( (unsigned int)(v5 - 2) >= 2 && (v4 & 3) != 0 )
      {
        v8[0] = v4 - 1;
        LOBYTE(v7) = 3;
        sub_1416BCB00(v8);
      }
    }
  }
}
