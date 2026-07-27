// module: codexmate_lib/core/relay/manager
// addr: 0x1407dc4c0
// name: sub_1407DC4C0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407DC4C0(unsigned __int8 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  void *v9; // rcx
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  int v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int128 v16; // [rsp+70h] [rbp-10h]
  unsigned __int128 *v17; // [rsp+80h] [rbp+0h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+88h] [rbp+8h]
  unsigned __int128 *v19; // [rsp+90h] [rbp+10h]
  __int64 (__fastcall *v20)(); // [rsp+98h] [rbp+18h]
  unsigned __int128 v21; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+38h]
  __int64 v23; // [rsp+C0h] [rbp+40h]

  v23 = -2;
  v13 = a2;
  v14 = a3;
  v7 = sub_141471AC0(&v13);
  v21 = 0x3E8 * (unsigned __int128)(unsigned __int64)v7 + v8 / 0xF4240uLL;
  v11[0] = a4;
  v11[1] = a5;
  v17 = &v21;
  v18 = sub_1414A9600;
  v19 = (unsigned __int128 *)v11;
  v20 = sub_14041F680;
  sub_14149C0F0(&v15, &unk_14179278B, &v17);
  v9 = &unk_141792760;
  if ( a1 )
    v9 = &unk_141792768;
  v12[0] = v9;
  v12[1] = a1 | 8LL;
  v22 = v16;
  v21 = v16;
  v17 = (unsigned __int128 *)v12;
  v18 = sub_14041F680;
  v19 = &v21;
  v20 = sub_14041F680;
  sub_14149C0F0(v11, &unk_141792771, &v17);
  result = sub_1403565C0((unsigned int)aRouterToggle, 13, (unsigned int)aTotal_0, 5, (__int64)v11);
  if ( v15 )
    return sub_140001660(v22, v15, 1);
  return result;
}