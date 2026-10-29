// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x14023d8c0 | name sub_14023D8C0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14023D8C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _OWORD v4[4]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v5[4]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v6[12]; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v7[4]; // [rsp+100h] [rbp+80h] BYREF
  _QWORD v8[2]; // [rsp+120h] [rbp+A0h] BYREF
  char v9; // [rsp+137h] [rbp+B7h] BYREF
  __int64 v10; // [rsp+138h] [rbp+B8h]

  v10 = -2;
  v8[0] = a2;
  v8[1] = a3;
  result = sub_1414039F0(v4, a1, aPragmaWalCheck_0, 32);
  if ( *(_QWORD *)&v4[0] != -1 )
  {
    v5[3] = v4[3];
    v5[2] = v4[2];
    v5[1] = v4[1];
    v5[0] = v4[0];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v7[0] = v8;
      v7[1] = sub_140186EE0;
      v7[2] = v5;
      v7[3] = sub_141404740;
      v6[6] = 2;
      v6[7] = aCodexmateLibCo_0;
      v6[8] = 51;
      v6[10] = &unk_1419DEE08;
      v6[11] = v7;
      v6[0] = 0;
      v6[1] = aCodexmateLibCo_0;
      v6[2] = 51;
      v6[3] = 0;
      v6[4] = aSrcCoreRelayCo_0;
      v6[5] = 41;
      v6[9] = 0x5000000001LL;
      sub_1414D53A0(&v9, v6);
    }
    return sub_140193AA0(v5);
  }
  return result;
}
