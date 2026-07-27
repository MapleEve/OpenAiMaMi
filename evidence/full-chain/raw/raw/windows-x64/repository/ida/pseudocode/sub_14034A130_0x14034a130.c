// module: codexmate_lib/core/repository
// addr: 0x14034a130
// name: sub_14034A130
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14034A130(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  HANDLE *v3; // rbx
  HANDLE *v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-30h] BYREF
  HANDLE *v7; // [rsp+28h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-20h]
  _QWORD *v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  HANDLE *v11; // [rsp+48h] [rbp-8h]
  __int64 v12; // [rsp+50h] [rbp+0h]

  v12 = -2;
  v11 = (HANDLE *)a1[1];
  v9 = a1;
  v1 = a1[2];
  if ( v1 )
  {
    v2 = 0;
    v3 = v11;
    v8 = v1;
    do
    {
      v10 = v2;
      v7 = v3;
      v6 = sub_1412018B0(v3);
      if ( v6 )
        sub_140018650(&v6);
      v4 = v7;
      CloseHandle(*v7);
      v2 = v10 - 1;
      v3 = v4 + 1;
    }
    while ( v10 - 1 + v8 );
  }
  result = (__int64)v9;
  if ( *v9 )
    return sub_140001660(v11, 8LL * *v9, 8);
  return result;
}