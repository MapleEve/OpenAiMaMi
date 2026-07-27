// module: codexmate_lib/core/repository
// addr: 0x1403cc8d0
// name: hashed_account_snapshot_path
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::auth::hashed_account_snapshot_path | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall hashed_account_snapshot_path(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  char v9; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v10[31]; // [rsp+29h] [rbp-57h] BYREF
  __int128 v11; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]
  __int128 v17; // [rsp+80h] [rbp+0h] BYREF
  __int64 v18; // [rsp+90h] [rbp+10h]
  __int128 v19; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+30h]
  __int64 v21; // [rsp+B8h] [rbp+38h]

  v21 = -2;
  sub_14036E120(&v9, a4, a5);
  *(_QWORD *)&v17 = &v9;
  *(_QWORD *)&v19 = &v17;
  *((_QWORD *)&v19 + 1) = sub_14041F760;
  sub_14149C0F0(&v11, &unk_14179FE90, &v19);
  if ( (_QWORD)v11 == -1 )
  {
    *(_QWORD *)&v17 = 0;
    *((_QWORD *)&v17 + 1) = 1;
    v18 = 0;
  }
  else
  {
    v20 = v12;
    v19 = v11;
    sub_140996680(v10, &v11, &v19);
    v18 = v20;
    v17 = v19;
  }
  *(_QWORD *)&v19 = &v17;
  *((_QWORD *)&v19 + 1) = sub_1400015F0;
  sub_14149C0F0(&v13, &unk_141751018, &v19);
  v16 = v14;
  result = sub_141473FA0(a1, a2, a3, v14, v15);
  if ( v13 )
    result = sub_140001660(v16, v13, 1);
  if ( (_QWORD)v17 )
    return sub_140001660(*((_QWORD *)&v17 + 1), v17, 1);
  return result;
}