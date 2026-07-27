// module: codexmate_lib/core/relay/manager
// addr: 0x1407dc3a0
// name: sub_1407DC3A0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407DC3A0(unsigned __int8 a1, int a2, int a3, _QWORD *a4)
{
  void *v5; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  _BYTE v10[24]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+70h] [rbp-10h] BYREF
  _QWORD *v14; // [rsp+80h] [rbp+0h]
  __int64 v15; // [rsp+88h] [rbp+8h]
  __int64 v16; // [rsp+90h] [rbp+10h]

  v16 = -2;
  v5 = &unk_141792760;
  if ( a1 )
    v5 = &unk_141792768;
  v13[0] = v5;
  v13[1] = a1 | 8LL;
  v7 = a4[1];
  v14 = a4;
  v8 = a4[2];
  v15 = v7;
  v12[0] = v7;
  v12[1] = v8;
  v11[0] = v13;
  v11[1] = sub_14041F680;
  v11[2] = v12;
  v11[3] = sub_14041F680;
  sub_14149C0F0(v10, &unk_141792771, v11);
  sub_1403565C0((unsigned int)aRouterToggle, 13, a2, a3, (__int64)v10);
  result = (__int64)v14;
  if ( *v14 )
    return sub_140001660(v15, *v14, 1);
  return result;
}