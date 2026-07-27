// win 1.2.1 | module src/core/relay/atomic_write.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140892BD0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rax
  _QWORD v4[12]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+88h] [rbp+8h] BYREF
  _QWORD v6[2]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v7; // [rsp+B8h] [rbp+38h] BYREF
  char v8; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+48h]

  v9 = -2; /*0x140892be2*/
  if ( *(_BYTE *)(a1 + 32) == 1 ) /*0x140892bee*/
  {
    v1 = *(_QWORD *)(a1 + 8); /*0x140892bf4*/
    v2 = *(_QWORD *)(a1 + 16); /*0x140892bf8*/
    v3 = sub_141485EF0(v1, v2); /*0x140892c02*/
    if ( v3 ) /*0x140892c0a*/
    {
      v7 = v3; /*0x140892c10*/
      if ( (unsigned __int8)sub_140841290(v3) ) /*0x140892c17*/
      {
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140892c32*/
        {
          v6[0] = v1; /*0x140892c38*/
          v6[1] = v2; /*0x140892c3c*/
          v5[0] = v6; /*0x140892c44*/
          v5[1] = sub_14148F3A0; /*0x140892c4f*/
          v5[2] = &v7; /*0x140892c57*/
          v5[3] = sub_141490720; /*0x140892c62*/
          v4[0] = 0; /*0x140892c66*/
          v4[1] = aCodexmateLibCo_33; /*0x140892c75*/
          v4[2] = 40; /*0x140892c79*/
          v4[3] = 0; /*0x140892c81*/
          v4[4] = aSrcCoreRelayAt; /*0x140892c90*/
          v4[5] = 30; /*0x140892c94*/
          v4[6] = 2; /*0x140892c9c*/
          v4[7] = aCodexmateLibCo_33; /*0x140892ca4*/
          v4[8] = 40; /*0x140892ca8*/
          v4[9] = 0x2900000001LL; /*0x140892cba*/
          v4[10] = &unk_141799688; /*0x140892cc5*/
          v4[11] = v5; /*0x140892ccd*/
          sub_1412C36A0(&v8, v4); /*0x140892cd9*/
        }
      }
      sub_140018650(&v7); /*0x140892ce3*/
    }
  }
}