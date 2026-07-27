// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
int __fastcall sub_1407A0A20(void *Buf, unsigned int MaxCharCount)
{
  int result; // eax
  int FileHandle[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v4; // [rsp+50h] [rbp-30h]
  __int128 v5; // [rsp+60h] [rbp-20h]
  __int128 v6; // [rsp+70h] [rbp-10h]
  __int128 v7; // [rsp+80h] [rbp+0h]
  __int128 v8; // [rsp+90h] [rbp+10h]
  _OWORD v9[6]; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v10[12]; // [rsp+100h] [rbp+80h] BYREF
  _QWORD v11[2]; // [rsp+160h] [rbp+E0h] BYREF
  char v12; // [rsp+177h] [rbp+F7h] BYREF
  __int64 v13; // [rsp+178h] [rbp+F8h]

  v13 = -2; /*0x1407a0a30*/
  result = write((int)FileHandle, Buf, MaxCharCount); /*0x1407a0a5c*/
  if ( FileHandle[0] != -1 ) /*0x1407a0a65*/
  {
    v9[5] = v8; /*0x1407a0a6f*/
    v9[4] = v7; /*0x1407a0a77*/
    v9[3] = v6; /*0x1407a0a8b*/
    v9[2] = v5; /*0x1407a0a8f*/
    v9[1] = v4; /*0x1407a0a93*/
    v9[0] = *(_OWORD *)FileHandle; /*0x1407a0a97*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1407a0aa9*/
    {
      v11[0] = v9; /*0x1407a0ab3*/
      v11[1] = sub_140B036A0; /*0x1407a0ac1*/
      v10[0] = 0; /*0x1407a0ac8*/
      v10[1] = aCodexmateLibCo_27; /*0x1407a0ada*/
      v10[2] = 45; /*0x1407a0ae1*/
      v10[3] = 0; /*0x1407a0aec*/
      v10[4] = aSrcCoreRelayRo_1; /*0x1407a0afe*/
      v10[5] = 35; /*0x1407a0b05*/
      v10[6] = 2; /*0x1407a0b10*/
      v10[7] = aCodexmateLibCo_27; /*0x1407a0b1b*/
      v10[8] = 45; /*0x1407a0b22*/
      v10[9] = 0x15F00000001LL; /*0x1407a0b37*/
      v10[10] = &unk_14178FCF6; /*0x1407a0b45*/
      v10[11] = v11; /*0x1407a0b53*/
      sub_1412C36A0(&v12, v10); /*0x1407a0b68*/
    }
    return sub_1406CDA20(v9); /*0x1407a0b72*/
  }
  return result; /*0x1407a0b78*/
}