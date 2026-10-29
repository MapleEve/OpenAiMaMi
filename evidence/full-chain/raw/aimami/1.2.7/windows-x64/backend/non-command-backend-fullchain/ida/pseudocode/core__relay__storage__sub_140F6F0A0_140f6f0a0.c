// win 1.2.7 | module src/core/relay/storage.rs | ea 0x140f6f0a0 | name sub_140F6F0A0
// win 1.2.7 | module src/core/relay/storage.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F6F0A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // esi
  char v7; // r12
  _OWORD v9[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v10[6]; // [rsp+88h] [rbp+8h] BYREF
  _QWORD v11[2]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v12; // [rsp+F8h] [rbp+78h] BYREF
  const char *v13; // [rsp+100h] [rbp+80h]
  __int64 v14; // [rsp+108h] [rbp+88h]
  __int64 v15; // [rsp+110h] [rbp+90h]
  const char *v16; // [rsp+118h] [rbp+98h]
  __int64 v17; // [rsp+120h] [rbp+A0h]
  __int64 v18; // [rsp+128h] [rbp+A8h]
  const char *v19; // [rsp+130h] [rbp+B0h]
  __int64 v20; // [rsp+138h] [rbp+B8h]
  __int64 v21; // [rsp+140h] [rbp+C0h]
  const char *v22; // [rsp+148h] [rbp+C8h]
  __int64 v23; // [rsp+150h] [rbp+D0h]
  char v24; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v25; // [rsp+160h] [rbp+E0h]

  v25 = -2;
  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v5 = v2 << 8;
    v6 = 0;
    do
    {
      v7 = *(_BYTE *)(v4 + 252);
      sub_140F6F360(v10, a1, v4);
      if ( LODWORD(v10[0]) == -1 )
      {
        if ( BYTE8(v10[0]) )
        {
          LOBYTE(v6) = ~v7 | v6;
        }
        else if ( v7 && !*(_QWORD *)(v4 + 88) && *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v18 = 2;
          v19 = aCodexmateLibCo_47;
          v20 = 35;
          v22 = aAimamiSavedRel;
          v23 = 71;
          v12 = 0;
          v13 = aCodexmateLibCo_47;
          v14 = 35;
          v15 = 0;
          v16 = aSrcCoreRelaySt;
          v17 = 25;
          v21 = 0x29900000001LL;
          sub_1414D53A0(&v24, &v12);
        }
      }
      else
      {
        v9[5] = v10[5];
        v9[4] = v10[4];
        v9[3] = v10[3];
        v9[2] = v10[2];
        v9[1] = v10[1];
        v9[0] = v10[0];
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v11[0] = v9;
          v11[1] = sub_14104A7D0;
          v18 = 2;
          v19 = aCodexmateLibCo_47;
          v20 = 35;
          v22 = (const char *)&unk_141A634B2;
          v23 = (__int64)v11;
          v12 = 0;
          v13 = aCodexmateLibCo_47;
          v14 = 35;
          v15 = 0;
          v16 = aSrcCoreRelaySt;
          v17 = 25;
          v21 = 0x29C00000001LL;
          sub_1414D53A0(&v24, &v12);
        }
        sub_140E97700(v9);
      }
      v4 += 256;
      v5 -= 256;
    }
    while ( v5 );
  }
  else
  {
    v6 = 0;
  }
  LOBYTE(v6) = v6 & 1;
  return v6;
}
