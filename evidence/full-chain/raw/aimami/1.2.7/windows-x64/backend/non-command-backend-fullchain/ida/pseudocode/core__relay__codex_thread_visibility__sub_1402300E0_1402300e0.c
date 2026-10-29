// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1402300e0 | name sub_1402300E0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402300E0(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]
  unsigned __int64 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+38h] [rbp-18h]

  v4 = 0;
  v5 = a4 - a3;
  if ( a4 < a3 )
    v5 = 0;
  if ( v5 < 0 )
LABEL_4:
    sub_141938D2B(v4, v5);
  v16 = 1;
  if ( a4 > a3 )
  {
    v8 = a4;
    v9 = a3;
    nullsub_1(a1);
    v4 = 1;
    v16 = sub_140001680(v5, 1);
    if ( !v16 )
      goto LABEL_4;
    a3 = v9;
    a4 = v8;
  }
  v14 = a4;
  v15 = a3;
  if ( sub_1416A17E0(a2, 0) != 1 )
  {
    v13 = sub_140BB1420(a2, v16, v5);
    if ( !v13 )
    {
      a1[1] = v5;
      a1[2] = v16;
      a1[3] = v5;
      *a1 = -1;
      return v5;
    }
    *a1 = 2;
    a1[1] = v13;
    v11 = v5;
    result = v15;
    if ( v14 <= v15 )
      return result;
    return sub_140001660(v16, v11, 1);
  }
  *a1 = 2;
  a1[1] = v10;
  v11 = v5;
  result = v15;
  if ( v14 > v15 )
    return sub_140001660(v16, v11, 1);
  return result;
}
