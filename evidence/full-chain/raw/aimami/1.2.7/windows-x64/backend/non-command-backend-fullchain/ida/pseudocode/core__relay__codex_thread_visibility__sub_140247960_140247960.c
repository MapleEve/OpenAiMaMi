// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140247960 | name sub_140247960
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140247960(__int64 a1)
{
  __int64 result; // rax
  _OWORD v3[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v4[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v5; // [rsp+E8h] [rbp+68h] BYREF
  _QWORD v6[12]; // [rsp+F8h] [rbp+78h] BYREF
  _QWORD v7[6]; // [rsp+158h] [rbp+D8h] BYREF
  _QWORD v8[2]; // [rsp+188h] [rbp+108h] BYREF
  char v9; // [rsp+19Fh] [rbp+11Fh] BYREF
  __int64 v10; // [rsp+1A0h] [rbp+120h]

  v10 = -2;
  v8[0] = aProviderNormal;
  v8[1] = 18;
  result = sub_1402490C0(v3, a1);
  if ( LODWORD(v3[0]) != -1 )
  {
    v4[5] = v3[5];
    v4[4] = v3[4];
    v4[3] = v3[3];
    v4[2] = v3[2];
    v4[1] = v3[1];
    v4[0] = v3[0];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v5 = *(_OWORD *)(a1 + 8);
      v7[0] = v8;
      v7[1] = sub_140186EE0;
      v7[2] = &v5;
      v7[3] = sub_14169F630;
      v7[4] = v4;
      v7[5] = sub_14104A7D0;
      v6[6] = 2;
      v6[7] = aCodexmateLibCo_0;
      v6[8] = 51;
      v6[10] = &unk_1419DF270;
      v6[11] = v7;
      v6[0] = 0;
      v6[1] = aCodexmateLibCo_0;
      v6[2] = 51;
      v6[3] = 0;
      v6[4] = aSrcCoreRelayCo_0;
      v6[5] = 41;
      v6[9] = 0xFA200000001LL;
      sub_1414D53A0(&v9, v6);
    }
    return sub_1401954F0(v4);
  }
  return result;
}
