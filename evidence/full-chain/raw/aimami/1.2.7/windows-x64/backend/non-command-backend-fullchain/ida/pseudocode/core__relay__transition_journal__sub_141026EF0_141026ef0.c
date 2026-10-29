// win 1.2.7 | module src/core/relay/transition_journal.rs | ea 0x141026ef0 | name sub_141026EF0
// win 1.2.7 | module src/core/relay/transition_journal.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_141026EF0(__int64 a1)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  _OWORD v6[6]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v7[12]; // [rsp+88h] [rbp+8h] BYREF
  _BYTE v8[80]; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v9; // [rsp+138h] [rbp+B8h]
  _QWORD v10[2]; // [rsp+148h] [rbp+C8h] BYREF
  char v11; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v12; // [rsp+160h] [rbp+E0h]

  v12 = -2;
  sub_1410257E0(v8);
  if ( *(_DWORD *)v8 == -1 )
  {
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v8[72];
    v2 = *(_OWORD *)&v8[8];
    v3 = *(_OWORD *)&v8[24];
    v4 = *(_OWORD *)&v8[40];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v8[56];
    *(_OWORD *)(a1 + 32) = v4;
    *(_OWORD *)(a1 + 16) = v3;
    *(_OWORD *)a1 = v2;
  }
  else
  {
    v6[5] = v9;
    v6[4] = *(_OWORD *)&v8[64];
    v6[3] = *(_OWORD *)&v8[48];
    v6[2] = *(_OWORD *)&v8[32];
    v6[1] = *(_OWORD *)&v8[16];
    v6[0] = *(_OWORD *)v8;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v10[0] = v6;
      v10[1] = sub_14104A7D0;
      v7[6] = 2;
      v7[7] = aCodexmateLibCo_11;
      v7[8] = 46;
      v7[10] = &unk_141A70316;
      v7[11] = v10;
      v7[0] = 0;
      v7[1] = aCodexmateLibCo_11;
      v7[2] = 46;
      v7[3] = 0;
      v7[4] = aSrcCoreRelayTr;
      v7[5] = 36;
      v7[9] = 0x12B00000001LL;
      sub_1414D53A0(&v11, v7);
    }
    *(_QWORD *)a1 = -1;
    sub_140FA5040(v6);
  }
  return a1;
}
