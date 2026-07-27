// module: codexmate_lib/commands/accounts
// addr: 0x140380210
// name: sub_140380210
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140380210(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  _QWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  __int128 v18; // [rsp+70h] [rbp-10h]
  __int128 v19; // [rsp+80h] [rbp+0h]
  __int128 v20; // [rsp+90h] [rbp+10h]
  __int128 v21; // [rsp+A0h] [rbp+20h]
  __int64 v22; // [rsp+B0h] [rbp+30h]
  __int128 v23; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v24; // [rsp+C8h] [rbp+48h]
  __int128 v25; // [rsp+D8h] [rbp+58h]
  __int128 v26; // [rsp+E8h] [rbp+68h]
  __int128 v27; // [rsp+F8h] [rbp+78h]
  __int64 v28; // [rsp+108h] [rbp+88h]
  __int64 v29; // [rsp+110h] [rbp+90h]
  __int64 v30; // [rsp+118h] [rbp+98h] BYREF
  __int64 v31; // [rsp+120h] [rbp+A0h]
  __int64 v32; // [rsp+128h] [rbp+A8h]

  v32 = -2;
  if ( a2[4] == -1 )
  {
    v9 = a2[1];
    v10 = a2[2];
    sub_141486710(&v23, v9, v10);
    if ( (_DWORD)v23 == 2 )
    {
      *((_QWORD *)&v17 + 1) = *((_QWORD *)&v23 + 1);
      *(_QWORD *)&v17 = 2;
    }
    else
    {
      v17 = v23;
      v22 = v28;
      v21 = v27;
      v20 = v26;
      v19 = v25;
      v18 = v24;
      if ( (_QWORD)v23 != 2 )
      {
        *(_QWORD *)&v17 = v9;
        *((_QWORD *)&v17 + 1) = v10;
        *(_QWORD *)&v23 = &v17;
        *((_QWORD *)&v23 + 1) = sub_14148F3A0;
        return sub_14149C0F0(a1, &unk_14174DF2A, &v23);
      }
    }
    result = sub_140018650((char *)&v17 + 8);
LABEL_12:
    *a1 = -1;
    return result;
  }
  v4 = a2[1];
  v5 = a2[2];
  sub_14148D3C0(&v13, v4, v5);
  v6 = v13;
  v7 = v14;
  if ( v13 == -1 )
  {
    v30 = v14;
    v16[0] = v4;
    v16[1] = v5;
    *(_QWORD *)&v23 = v16;
    *((_QWORD *)&v23 + 1) = sub_14148F3A0;
    *(_QWORD *)&v24 = &v30;
    *((_QWORD *)&v24 + 1) = sub_141490720;
    sub_14149C0F0(&v17, &unk_14174C9F7, &v23);
    sub_140018650(&v30);
    result = v18;
    *(_OWORD *)a1 = v17;
    a1[2] = result;
    return result;
  }
  if ( v15 == a2[6] )
  {
    result = sub_1416847B0(v14, a2[5], v15);
    if ( !(_DWORD)result )
    {
      if ( v6 )
        result = sub_140001660(v7, v6, 1);
      goto LABEL_12;
    }
  }
  v29 = v7;
  v31 = v6;
  *(_QWORD *)&v17 = v4;
  *((_QWORD *)&v17 + 1) = v5;
  *(_QWORD *)&v23 = &v17;
  *((_QWORD *)&v23 + 1) = sub_14148F3A0;
  sub_14149C0F0(&v11, &unk_14174DF4F, &v23);
  result = v12;
  a1[2] = v12;
  *(_OWORD *)a1 = v11;
  if ( v31 )
    return sub_140001660(v29, v31, 1);
  return result;
}