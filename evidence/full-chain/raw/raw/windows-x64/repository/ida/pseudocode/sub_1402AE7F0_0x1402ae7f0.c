// module: codexmate_lib/core/repository
// addr: 0x1402ae7f0
// name: sub_1402AE7F0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_1402AE7F0(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int128 v9; // xmm0
  _OWORD *v10; // [rsp+20h] [rbp-40h]
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int128 *v12; // [rsp+38h] [rbp-28h]
  unsigned __int64 v13; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  result = *(_QWORD *)(a1 + 16);
  v13 = result;
  if ( result >= 2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = 64;
    v4 = 0;
    while ( !(unsigned __int8)sub_1402DDCE0(
                                *(_QWORD *)(v2 + v3 - 24),
                                *(_QWORD *)(v2 + v3 - 16),
                                *(_QWORD *)(v2 + v3 - 56),
                                *(_QWORD *)(v2 + v3 - 48)) )
    {
      v3 += 32;
      v5 = v4 - v13 + 1;
      ++v4;
      result = v5 + 1;
      if ( !result )
        return result;
    }
    v6 = *(_QWORD *)(v2 + v3 - 32);
    if ( v6 )
      sub_140001660(*(_QWORD *)(v2 + v3 - 24), v6, 1);
    v7 = v4 + 1;
    if ( v4 + 2 < v13 )
    {
      v8 = v4 - v13 + 2;
      do
      {
        while ( 1 )
        {
          v11 = v8;
          v12 = (__int128 *)(v2 + v3);
          v15 = v7;
          v10 = (_OWORD *)(v2 + 32 * v7);
          if ( (unsigned __int8)sub_1402DDCE0(
                                  *(_QWORD *)(v2 + v3 + 8),
                                  *(_QWORD *)(v2 + v3 + 16),
                                  *((_QWORD *)v10 - 3),
                                  *((_QWORD *)v10 - 2)) )
            break;
          v9 = *v12;
          v10[1] = v12[1];
          *v10 = v9;
          v7 = v15 + 1;
          v3 += 32;
          ++v8;
          if ( v11 == -1 )
            goto LABEL_15;
        }
        if ( *(_QWORD *)v12 )
          sub_140001660(*((_QWORD *)v12 + 1), *(_QWORD *)v12, 1);
        v7 = v15;
        v3 += 32;
        ++v8;
      }
      while ( v11 != -1 );
    }
LABEL_15:
    *(_QWORD *)(a1 + 16) = v7;
    return a1;
  }
  return result;
}