// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140230dc0 | name sub_140230DC0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140230DC0(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 result; // rax
  _OWORD v4[6]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v5[6]; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v6[12]; // [rsp+100h] [rbp+80h] BYREF
  _QWORD v7[6]; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v8[2]; // [rsp+190h] [rbp+110h] BYREF
  _QWORD v9[2]; // [rsp+1A0h] [rbp+120h] BYREF
  char v10; // [rsp+1B7h] [rbp+137h] BYREF
  __int64 v11; // [rsp+1B8h] [rbp+138h]

  v11 = -2;
  v9[0] = aNoAccountModel_0;
  v9[1] = 24;
  v1 = a1[1];
  v2 = a1[2];
  result = sub_14023D390((unsigned int)v4, v1, v2, a1[5], a1[6], a1[8], a1[9]);
  if ( LODWORD(v4[0]) != -1 )
  {
    v5[5] = v4[5];
    v5[4] = v4[4];
    v5[3] = v4[3];
    v5[2] = v4[2];
    v5[1] = v4[1];
    v5[0] = v4[0];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v8[0] = v1;
      v8[1] = v2;
      v7[0] = v9;
      v7[1] = sub_140186EE0;
      v7[2] = v8;
      v7[3] = sub_14169F630;
      v7[4] = v5;
      v7[5] = sub_14104A7D0;
      v6[6] = 2;
      v6[7] = aCodexmateLibCo_0;
      v6[8] = 51;
      v6[10] = &unk_1419DE243;
      v6[11] = v7;
      v6[0] = 0;
      v6[1] = aCodexmateLibCo_0;
      v6[2] = 51;
      v6[3] = 0;
      v6[4] = aSrcCoreRelayCo_0;
      v6[5] = 41;
      v6[9] = 0xF4D00000001LL;
      sub_1414D53A0(&v10, v6);
    }
    return sub_1401954F0(v5);
  }
  return result;
}
