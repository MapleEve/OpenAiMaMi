// module: codexmate_lib/core/voice/runtime
// addr: 0x14019d5f0
// name: sub_14019D5F0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14019D5F0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD v5[12]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v6[2]; // [rsp+88h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+98h] [rbp+18h]
  char v8; // [rsp+A7h] [rbp+27h] BYREF
  __int64 v9; // [rsp+A8h] [rbp+28h]

  v9 = -2;
  v2 = a2;
  result = *(_QWORD *)off_141EC8D80;
  if ( *(_QWORD *)off_141EC8D80 )
  {
    v7 = a2;
    v6[0] = a2;
    v6[1] = sub_140F7EAC0;
    v5[0] = 0;
    v5[1] = aCodexmateLibCo_14;
    v5[2] = 35;
    v5[3] = 0;
    v5[4] = aSrcCoreVoiceRu;
    v5[5] = 29;
    v5[6] = 1;
    v5[7] = aCodexmateLibCo_14;
    v5[8] = 35;
    v5[9] = 0x10BF00000001LL;
    v5[10] = &unk_1416CE53E;
    v5[11] = v6;
    result = sub_1412C36A0(&v8, v5);
    v2 = v7;
  }
  v4 = *v2;
  if ( *v2 != -1 )
  {
    if ( v4 )
      return sub_140001660(v2[1], v4, 1);
  }
  return result;
}