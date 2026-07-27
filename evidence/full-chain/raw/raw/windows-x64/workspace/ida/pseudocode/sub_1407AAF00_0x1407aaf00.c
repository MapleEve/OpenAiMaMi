// module: codexmate_lib/core/voice/workspace
// addr: 0x1407aaf00
// name: sub_1407AAF00
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407AAF00(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // [rsp+20h] [rbp-10h]
  __int64 v12; // [rsp+28h] [rbp-8h]

  result = *a2;
  if ( *a2 == -1 )
  {
LABEL_12:
    *a1 = -1;
    return result;
  }
  v11 = *a2;
  v12 = a2[1];
  result = sub_14033BC10(v12, a2[2]);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( !v4 )
  {
    if ( v11 )
      result = sub_140001660(v12, v11, 1);
    goto LABEL_12;
  }
  v8 = result;
  nullsub_1(v5);
  v7 = 1;
  v9 = sub_140001650(v6, 1);
  if ( !v9 )
LABEL_4:
    sub_1416C2D4B(v7, v6);
  v10 = v9;
  result = sub_141684120(v9, v8, v6);
  if ( v11 )
    result = sub_140001660(v12, v11, 1);
  *a1 = v6;
  a1[1] = v10;
  a1[2] = v6;
  return result;
}