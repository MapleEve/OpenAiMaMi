// module: codexmate_lib/commands/accounts
// addr: 0x14037ff70
// name: sub_14037FF70
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14037FF70(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r14
  __int128 *v8; // rdi
  __int128 *v9; // rcx
  __int128 *v10; // r14
  __int64 v11; // rax
  __int128 **v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  __int128 *v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  __int128 v18; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int128 *v20; // [rsp+70h] [rbp-10h] BYREF
  __int64 (__fastcall *v21)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp-8h]
  __int64 *v22; // [rsp+80h] [rbp+0h]
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // [rsp+88h] [rbp+8h]
  _QWORD v24[2]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v26[7]; // [rsp+A8h] [rbp+28h] BYREF

  v26[1] = -2;
  v4 = a2[1];
  v5 = a2[2];
  result = sub_14148D3C0(&v15, v4, v5);
  v7 = v15;
  if ( a2[4] == -1 )
  {
    if ( v15 != -1 )
      goto LABEL_8;
    v10 = v16;
    if ( !(unsigned __int8)sub_1403887F0(v16) )
    {
      v20 = v10;
      *(_BYTE *)(a1 + 8) = 1;
      *(_QWORD *)a1 = -1;
      v12 = &v20;
      return sub_140018650(v12);
    }
  }
  else
  {
    if ( v15 != -1 )
    {
      if ( v17 == a2[6] )
      {
        v8 = v16;
        result = sub_1416847B0(v16, a2[5], v17);
        if ( !(_DWORD)result )
        {
          *(_BYTE *)(a1 + 8) = 1;
          *(_QWORD *)a1 = -1;
          if ( !v7 )
            return result;
          v9 = v8;
          return sub_140001660(v9, v7, 1);
        }
      }
LABEL_8:
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = -1;
      if ( !v7 )
        return result;
      v9 = v16;
      return sub_140001660(v9, v7, 1);
    }
    v10 = v16;
    if ( !(unsigned __int8)sub_1403887F0(v16) )
    {
      v26[0] = v10;
      v11 = sub_1408726C0(v4, v5, a2[5], a2[6]);
      if ( v11 )
      {
        v25 = v11;
        v24[0] = v4;
        v24[1] = v5;
        v20 = (__int128 *)v24;
        v21 = sub_14148F3A0;
        v22 = &v25;
        v23 = sub_141490720;
        sub_14149C0F0(&v18, &unk_14174C9DE, &v20);
        sub_140018650(&v25);
        *(_QWORD *)(a1 + 16) = v19;
        *(_OWORD *)a1 = v18;
      }
      else
      {
        *(_BYTE *)(a1 + 8) = 1;
        *(_QWORD *)a1 = -1;
      }
      v12 = (__int128 **)v26;
      return sub_140018650(v12);
    }
  }
  v24[0] = v10;
  *(_QWORD *)&v18 = v4;
  *((_QWORD *)&v18 + 1) = v5;
  v20 = &v18;
  v21 = sub_14148F3A0;
  v22 = v24;
  v23 = sub_141490720;
  sub_14149C0F0(&v13, &unk_14174DF01, &v20);
  *(_QWORD *)(a1 + 16) = v14;
  *(_OWORD *)a1 = v13;
  v12 = (__int128 **)v24;
  return sub_140018650(v12);
}