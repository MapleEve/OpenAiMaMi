// module: codexmate_lib/commands/analytics
// addr: 0x140be6930
// name: sub_140BE6930
// win 1.2.1 | module src/commands/analytics.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BE6930(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // [rsp+20h] [rbp-30h]
  __int64 *v14; // [rsp+30h] [rbp-20h]
  __int64 v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+40h] [rbp-10h]
  _QWORD *v19; // [rsp+48h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 3792);
  if ( !*(_BYTE *)(a1 + 3792) )
  {
    v19 = (_QWORD *)a1;
    sub_140BF0DE0(a1);
    result = (__int64)v19;
    if ( v19[65] == -1 )
      return result;
    v14 = v19 + 65;
    v6 = v19[66];
    v15 = v19[67];
    v17 = 0;
    while ( v15 != v17 )
    {
      ++v17;
      v7 = v6 + 96;
      sub_1402C7520(v6, v3, v4, v5, v13);
      v6 = v7;
    }
    goto LABEL_16;
  }
  if ( (_DWORD)result != 3 )
    return result;
  v19 = (_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 3784) == 3 )
  {
    v2 = a1 + 2704;
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(a1 + 3784) )
  {
    v2 = a1 + 1624;
LABEL_11:
    sub_140BEDB50(v2);
  }
  sub_140BF0DE0(v19);
  result = (__int64)v19;
  if ( v19[65] == -1 )
    return result;
  v14 = v19 + 65;
  v11 = v19[66];
  v16 = v19[67];
  v18 = 0;
  while ( v16 != v18 )
  {
    ++v18;
    v12 = v11 + 96;
    sub_1402C7520(v11, v8, v9, v10, v13);
    v11 = v12;
  }
LABEL_16:
  result = *v14;
  if ( *v14 )
    return sub_140001660(v19[66], 96 * result, 8);
  return result;
}