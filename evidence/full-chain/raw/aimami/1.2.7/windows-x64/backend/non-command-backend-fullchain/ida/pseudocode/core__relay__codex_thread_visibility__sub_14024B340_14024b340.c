// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14024b340 | name sub_14024B340
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14024B340(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r15
  _OWORD v7[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v8[6]; // [rsp+88h] [rbp+8h] BYREF
  __int128 v9; // [rsp+E8h] [rbp+68h] BYREF
  _QWORD v10[12]; // [rsp+F8h] [rbp+78h] BYREF
  _QWORD v11[4]; // [rsp+158h] [rbp+D8h] BYREF
  char v12; // [rsp+17Fh] [rbp+FFh] BYREF
  __int64 v13; // [rsp+180h] [rbp+100h]

  v13 = -2;
  if ( !a2 )
    return 0;
  v3 = 88 * a2;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      sub_140248260((__int64)v8, a1);
      if ( LODWORD(v8[0]) != -1 )
        break;
      v4 += BYTE8(v8[0]);
      a1 += 88;
      v3 -= 88;
      if ( !v3 )
        return v4;
    }
    v7[5] = v8[5];
    v7[4] = v8[4];
    v7[3] = v8[3];
    v7[2] = v8[2];
    v7[1] = v8[1];
    v7[0] = v8[0];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v9 = *(_OWORD *)(a1 + 32);
      v11[0] = &v9;
      v11[1] = sub_14169F630;
      v11[2] = v7;
      v11[3] = sub_14104A7D0;
      v10[6] = 2;
      v10[7] = aCodexmateLibCo_0;
      v10[8] = 51;
      v10[10] = &unk_1419D6931;
      v10[11] = v11;
      v10[0] = 0;
      v10[1] = aCodexmateLibCo_0;
      v10[2] = 51;
      v10[3] = 0;
      v10[4] = aSrcCoreRelayCo_0;
      v10[5] = 41;
      v10[9] = 0x255800000001LL;
      sub_1414D53A0(&v12, v10);
    }
    ++v5;
    sub_1401954F0(v7);
    a1 += 88;
    v3 -= 88;
  }
  while ( v3 );
  return v4;
}
