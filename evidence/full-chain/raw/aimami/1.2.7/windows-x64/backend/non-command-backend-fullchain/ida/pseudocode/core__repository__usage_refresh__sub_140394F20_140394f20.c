// win 1.2.7 | module src/core/repository/usage_refresh.rs | ea 0x140394f20 | name sub_140394F20
// win 1.2.7 | module src/core/repository/usage_refresh.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_140394F20(_QWORD *a1, _QWORD *a2)
{
  __int128 *v2; // rbx
  __int128 *v3; // r14
  __int64 v4; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *result; // rax
  int v9; // [rsp+28h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h]
  __int128 v11; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v12; // [rsp+F0h] [rbp+70h]
  _QWORD *i; // [rsp+1A0h] [rbp+120h]
  _QWORD *v14; // [rsp+1A8h] [rbp+128h]
  __int64 v15; // [rsp+1B0h] [rbp+130h]

  v15 = -2;
  v2 = (__int128 *)a1[1];
  v3 = (__int128 *)a1[3];
  v14 = a2;
  v4 = a2[2];
  for ( i = a1; v2 != v3; a1 = i )
  {
    v12 = *((_QWORD *)v2 + 2);
    v11 = *v2;
    v2 = (__int128 *)((char *)v2 + 24);
    a1[1] = v2;
    sub_14016C260(&v9, &v11);
    if ( v9 == 2 )
    {
      v11 = v10;
      sub_141939040(
        (unsigned int)aUsageRefreshWo,
        29,
        (unsigned int)&v11,
        (unsigned int)&off_1419ED418,
        (__int64)&off_1419ECB98);
    }
    sub_1418F44E0(&v11, &v9, 184);
    v6 = a2[1];
    sub_1418F44E0(v4 + 184 * v6, &v11, 184);
    a2[1] = v6 + 1;
  }
  v7 = a1[2];
  if ( v7 )
    sub_140001660(*a1, 24 * v7, 8);
  result = (_QWORD *)*v14;
  *(_QWORD *)*v14 = v14[1];
  return result;
}
