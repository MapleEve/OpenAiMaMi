// module: codexmate_lib/core/voice/runtime
// addr: 0x1401a5e80
// name: sub_1401A5E80
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401A5E80(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  _QWORD v3[12]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v4[2]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v5; // [rsp+90h] [rbp+10h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+20h]
  char v7; // [rsp+B7h] [rbp+37h] BYREF
  __int64 v8; // [rsp+B8h] [rbp+38h]

  v8 = -2;
  v6 = *((_QWORD *)a2 + 2);
  v5 = *a2;
  result = *(_QWORD *)off_141EC8D80;
  if ( *(_QWORD *)off_141EC8D80 )
  {
    v4[0] = &v5;
    v4[1] = sub_140F7EAC0;
    v3[0] = 0;
    v3[1] = aCodexmateLibCo_14;
    v3[2] = 35;
    v3[3] = 0;
    v3[4] = aSrcCoreVoiceRu;
    v3[5] = 29;
    v3[6] = 1;
    v3[7] = aCodexmateLibCo_14;
    v3[8] = 35;
    v3[9] = 0x10BF00000001LL;
    v3[10] = &unk_1416CE53E;
    v3[11] = v4;
    result = sub_1412C36A0(&v7, v3);
  }
  if ( (_QWORD)v5 != -1 )
  {
    if ( (_QWORD)v5 )
      return sub_140001660(*((_QWORD *)&v5 + 1), v5, 1);
  }
  return result;
}