// module: codexmate_lib/core/relay/legacy_virtual_auth
// addr: 0x140579700
// name: sub_140579700
// win 1.2.1 | module src/core/relay/legacy_virtual_auth.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140579700(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  __int128 v8; // [rsp+28h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h]
  _QWORD v10[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v11[4]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v12[4]; // [rsp+70h] [rbp-10h] BYREF

  v12[1] = -2;
  v10[0] = a4;
  v10[1] = 26;
  result = sub_141485EF0(a2, a3);
  if ( result )
  {
    v6 = result;
    if ( (unsigned __int8)sub_140570640(result) )
    {
      v12[0] = v6;
      v11[0] = v10;
      v11[1] = sub_14041F680;
      v11[2] = v12;
      v11[3] = sub_141490720;
      sub_14149C0F0(&v8, &unk_1417623C2, v11);
      *(_QWORD *)(a1 + 24) = v9;
      *(_OWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = 10;
      v7 = v12;
    }
    else
    {
      v11[0] = v6;
      *(_QWORD *)a1 = -1;
      v7 = v11;
    }
    return sub_140018650(v7);
  }
  else
  {
    *(_QWORD *)a1 = -1;
  }
  return result;
}