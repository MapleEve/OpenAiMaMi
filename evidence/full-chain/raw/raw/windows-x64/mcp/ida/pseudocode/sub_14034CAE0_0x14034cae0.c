// module: codexmate_lib/core/mcp
// addr: 0x14034cae0
// name: sub_14034CAE0
// win 1.2.1 | module src/core/mcp.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14034CAE0(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+38h] [rbp-8h]

  result = *a1;
  if ( (unsigned int)(result - 1) < 4 )
    return result;
  if ( !*a1 )
  {
    v4 = *((_QWORD *)a1 + 1);
    if ( !v4 )
      return result;
    v5 = *((_QWORD *)a1 + 2);
    v6 = 1;
    return sub_140001660(v5, v4, v6);
  }
  if ( (_DWORD)result != 5 )
    return sub_1403211A0(a1 + 8);
  v8 = *((_QWORD *)a1 + 3);
  v10 = 0;
  v11 = *((_QWORD *)a1 + 2);
  v2 = v11;
  while ( v8 != v10 )
  {
    ++v10;
    v3 = v2 + 32;
    sub_1402C3000();
    v2 = v3;
  }
  result = (__int64)a1;
  v7 = *((_QWORD *)a1 + 1);
  if ( v7 )
  {
    v4 = 32 * v7;
    v6 = 8;
    v5 = v11;
    return sub_140001660(v5, v4, v6);
  }
  return result;
}