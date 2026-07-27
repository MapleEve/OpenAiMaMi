// module: codexmate_lib/commands/accounts
// addr: 0x140343d80
// name: sub_140343D80
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140343D80(__int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  _BYTE v12[24]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[6]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int128 v15; // [rsp+80h] [rbp+0h] BYREF
  _QWORD *v16; // [rsp+90h] [rbp+10h]
  __int64 v17; // [rsp+98h] [rbp+18h]

  v17 = -2;
  v16 = a4;
  v7 = sub_141471AC0(a1 + 16);
  v15 = 0x3E8 * (unsigned __int128)(unsigned __int64)v7 + v8 / 0xF4240uLL;
  v9 = v16[1];
  v10 = v16[2];
  v14[0] = v9;
  v14[1] = v10;
  v13[0] = a1;
  v13[1] = sub_141356790;
  v13[2] = &v15;
  v13[3] = sub_1414A9600;
  v13[4] = v14;
  v13[5] = sub_14041F680;
  sub_14149C0F0(v12, &unk_1417493E8, v13);
  sub_1403565C0((unsigned int)aAccountSwitch, 14, a2, a3, (__int64)v12);
  result = (__int64)v16;
  if ( *v16 )
    return sub_140001660(v9, *v16, 1);
  return result;
}