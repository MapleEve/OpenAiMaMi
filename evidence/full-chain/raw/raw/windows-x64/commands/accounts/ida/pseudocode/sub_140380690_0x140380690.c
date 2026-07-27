// module: codexmate_lib/commands/accounts
// addr: 0x140380690
// name: sub_140380690
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140380690(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int128 *v8; // r14
  __int128 v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+30h] [rbp-50h]
  __int128 v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-38h]
  __int128 *v13; // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // [rsp+58h] [rbp-28h]
  _QWORD *v15; // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // [rsp+68h] [rbp-18h]
  _QWORD v17[2]; // [rsp+70h] [rbp-10h] BYREF
  _QWORD v18[6]; // [rsp+80h] [rbp+0h] BYREF

  v18[1] = -2;
  if ( a2[4] == -1 )
  {
    v6 = a2[1];
    v7 = a2[2];
    result = sub_141485EF0(v6, v7);
    if ( result )
    {
      v8 = (__int128 *)result;
      if ( (unsigned __int8)sub_1403887F0(result) )
      {
        v17[0] = v8;
        *(_QWORD *)&v11 = v6;
        *((_QWORD *)&v11 + 1) = v7;
        v13 = &v11;
        v14 = sub_14148F3A0;
        v15 = v17;
        v16 = sub_141490720;
        sub_14149C0F0(&v9, &unk_14174DFAB, &v13);
        *(_QWORD *)(a1 + 16) = v10;
        *(_OWORD *)a1 = v9;
        return sub_140018650(v17);
      }
      v13 = v8;
      result = sub_140018650(&v13);
    }
  }
  else
  {
    v3 = a2[1];
    v4 = a2[2];
    result = sub_1408726C0(v3, v4, a2[5], a2[6]);
    if ( result )
    {
      v18[0] = result;
      v17[0] = v3;
      v17[1] = v4;
      v13 = (__int128 *)v17;
      v14 = sub_14148F3A0;
      v15 = v18;
      v16 = sub_141490720;
      sub_14149C0F0(&v11, &unk_14174C9DE, &v13);
      sub_140018650(v18);
      result = v12;
      *(_QWORD *)(a1 + 16) = v12;
      *(_OWORD *)a1 = v11;
      return result;
    }
  }
  *(_QWORD *)a1 = -1;
  return result;
}