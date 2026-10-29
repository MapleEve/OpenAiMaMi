// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140290020 | name sub_140290020
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140290020(__int64 a1, __int64 a2)
{
  _OWORD v4[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v5[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v6; // [rsp+E8h] [rbp+68h] BYREF
  _QWORD v7[12]; // [rsp+F8h] [rbp+78h] BYREF
  _QWORD v8[4]; // [rsp+158h] [rbp+D8h] BYREF
  char v9; // [rsp+17Fh] [rbp+FFh] BYREF
  __int64 v10; // [rsp+180h] [rbp+100h]

  v10 = -2;
  sub_140248260((__int64)v4, a2);
  if ( LODWORD(v4[0]) == -1 )
    return BYTE8(v4[0]);
  v5[5] = v4[5];
  v5[4] = v4[4];
  v5[3] = v4[3];
  v5[2] = v4[2];
  v5[1] = v4[1];
  v5[0] = v4[0];
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v6 = *(_OWORD *)(a2 + 32);
    v8[0] = &v6;
    v8[1] = sub_14169F630;
    v8[2] = v5;
    v8[3] = sub_14104A7D0;
    v7[6] = 2;
    v7[7] = aCodexmateLibCo_0;
    v7[8] = 51;
    v7[10] = &unk_1419D6931;
    v7[11] = v8;
    v7[0] = 0;
    v7[1] = aCodexmateLibCo_0;
    v7[2] = 51;
    v7[3] = 0;
    v7[4] = aSrcCoreRelayCo_0;
    v7[5] = 41;
    v7[9] = 0x257A00000001LL;
    sub_1414D53A0(&v9, v7);
  }
  sub_1401954F0(v5);
  return 0;
}
