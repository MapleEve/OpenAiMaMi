// win 1.2.7 | module src/core/repository.rs | ea 0x140fa5f10 | name sub_140FA5F10
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FA5F10(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  _QWORD v10[4]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]
  unsigned __int64 v13; // [rsp+50h] [rbp-10h]
  char v14; // [rsp+5Fh] [rbp-1h] BYREF
  __int64 v15; // [rsp+60h] [rbp+0h]

  v15 = -2;
  v3 = *a2;
  v4 = a2[1];
  v5 = 32 * a2[2];
  v10[0] = v4;
  v10[1] = v4;
  v10[2] = v3;
  v10[3] = v4 + v5;
  sub_1403E98E0(&v11, v10);
  v10[0] = &v14;
  if ( v13 >= 2 )
  {
    if ( v13 >= 0x15 )
      sub_14065AD00(v12, v13, v10);
    else
      ((void (__fastcall *)(__int64, unsigned __int64, __int64, _QWORD *))sub_140DFF1B0)(v12, v13, 1, v10);
  }
  sub_14037B7C0(&v11);
  sub_14019A650(a1, v12, v12 + 32 * v13);
  v6 = v13;
  if ( v13 )
  {
    v7 = (_QWORD *)(v12 + 8);
    do
    {
      v8 = *(v7 - 1);
      if ( v8 )
        sub_140001660(*v7, v8, 1);
      v7 += 4;
      --v6;
    }
    while ( v6 );
  }
  if ( v11 )
    sub_140001660(v12, 32 * v11, 8);
  return a1;
}
