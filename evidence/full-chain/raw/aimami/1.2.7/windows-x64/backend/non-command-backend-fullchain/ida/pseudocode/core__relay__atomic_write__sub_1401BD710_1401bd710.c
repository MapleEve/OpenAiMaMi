// win 1.2.7 | module src/core/relay/atomic_write.rs | ea 0x1401bd710 | name sub_1401BD710
// win 1.2.7 | module src/core/relay/atomic_write.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_1401BD710(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v7[11]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[3]; // [rsp+88h] [rbp+8h] BYREF
  char v9; // [rsp+A6h] [rbp+26h] BYREF
  char v10; // [rsp+A7h] [rbp+27h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+28h]

  v11 = -2;
  if ( a1 )
  {
    v8[2] = a1;
    v3 = a1 & 3;
    if ( *(_QWORD *)off_1421E6EC0 > 1u )
    {
      switch ( a1 & 3 )
      {
        case 0uLL:
          LOBYTE(v4) = *(_BYTE *)(a1 + 16);
          break;
        case 1uLL:
          LOBYTE(v4) = *(_BYTE *)(a1 + 31);
          break;
        case 2uLL:
          v5 = sub_1416B3F10(a1, a2);
          LOBYTE(v4) = (*(__int64 (__fastcall **)(unsigned __int64))(v5 + 8))(HIDWORD(a1));
          break;
        case 3uLL:
          v4 = HIDWORD(a1);
          break;
      }
      v10 = v4;
      v8[0] = &v10;
      v8[1] = sub_140291D40;
      v7[5] = 2;
      v7[6] = aCodexmateLibCo_20;
      v7[7] = 40;
      v7[9] = &unk_1419D8B56;
      v7[10] = v8;
      v6 = 0;
      v7[0] = aCodexmateLibCo_20;
      v7[1] = 40;
      v7[2] = 0;
      v7[3] = aSrcCoreRelayAt;
      v7[4] = 30;
      v7[8] = 0x2300000001LL;
      sub_1414D53A0(&v9, &v6);
    }
    if ( (unsigned int)(v3 - 2) >= 2 )
    {
      if ( v3 )
      {
        v7[0] = a1 - 1;
        LOBYTE(v6) = 3;
        sub_1416BCB00(v7);
      }
    }
  }
}
