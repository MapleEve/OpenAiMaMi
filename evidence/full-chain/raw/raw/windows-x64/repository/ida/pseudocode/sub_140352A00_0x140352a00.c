// module: codexmate_lib/core/repository
// addr: 0x140352a00
// name: sub_140352A00
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140352A00(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  _QWORD v11[4]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  unsigned __int64 v14; // [rsp+50h] [rbp-10h]
  char v15; // [rsp+5Fh] [rbp-1h] BYREF
  __int64 v16; // [rsp+60h] [rbp+0h]

  v16 = -2;
  v3 = *a2;
  v4 = a2[1];
  v5 = 32 * a2[2];
  v11[0] = v4;
  v11[1] = v4;
  v11[2] = v3;
  v11[3] = v4 + v5;
  sub_1403274E0(&v12, v11);
  v11[0] = &v15;
  if ( v14 >= 2 )
  {
    if ( v14 >= 0x15 )
      sub_140B58650(v13, v14, v11);
    else
      ((void (__fastcall *)(__int64, unsigned __int64, __int64, _QWORD *))sub_140555E10)(v13, v14, 1, v11);
  }
  sub_1402AE7F0((__int64)&v12);
  v6 = v13;
  v7 = v14;
  result = sub_140987FC0(a1, v13, v13 + 32 * v14);
  if ( v7 )
  {
    v9 = (_QWORD *)(v6 + 8);
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
        result = sub_140001660(*v9, v10, 1);
      v9 += 4;
      --v7;
    }
    while ( v7 );
  }
  if ( v12 )
    return sub_140001660(v6, 32 * v12, 8);
  return result;
}