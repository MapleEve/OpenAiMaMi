// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bbe8e0 | name sub_140BBE8E0
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BBE8E0(char a1, int a2, int a3, _QWORD *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[4]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v11[2]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v12; // [rsp+78h] [rbp-8h]
  __int64 v13; // [rsp+80h] [rbp+0h]
  char v14; // [rsp+8Fh] [rbp+Fh] BYREF
  __int64 v15; // [rsp+90h] [rbp+10h]

  v15 = -2;
  v14 = a1;
  v6 = a4[1];
  v12 = a4;
  v7 = a4[2];
  v13 = v6;
  v11[0] = v6;
  v11[1] = v7;
  v10[0] = &v14;
  v10[1] = sub_140C98D50;
  v10[2] = v11;
  v10[3] = sub_140186EE0;
  sub_1416ABFD0(v9, &unk_141A39D2E, v10);
  sub_14019B500((unsigned int)aRouterTransiti_1, 17, a2, a3, (__int64)v9);
  result = (__int64)v12;
  if ( *v12 )
    return sub_140001660(v13, *v12, 1);
  return result;
}
