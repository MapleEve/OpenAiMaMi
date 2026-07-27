// module: codexmate_lib/core/relay/router_unlock_auth
// addr: 0x14048fe80
// name: sub_14048FE80
// win 1.2.1 | module src/core/relay/router_unlock_auth.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14048FE80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int128 v9; // [rsp+28h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h]
  _QWORD v11[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[4]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[4]; // [rsp+70h] [rbp-10h] BYREF

  v13[1] = -2;
  v11[0] = a4;
  v11[1] = a5;
  result = sub_141485EF0(a2, a3);
  if ( result )
  {
    v7 = result;
    if ( (unsigned __int8)sub_140476D40(result) )
    {
      v13[0] = v7;
      v12[0] = v11;
      v12[1] = sub_14041F680;
      v12[2] = v13;
      v12[3] = sub_141490720;
      sub_14149C0F0(&v9, &unk_14175A0F4, v12);
      *(_QWORD *)(a1 + 24) = v10;
      *(_OWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = 10;
      v8 = v13;
    }
    else
    {
      v12[0] = v7;
      *(_QWORD *)a1 = -1;
      v8 = v12;
    }
    return sub_140018650(v8);
  }
  else
  {
    *(_QWORD *)a1 = -1;
  }
  return result;
}