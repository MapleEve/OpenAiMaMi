// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x140320da0
// name: sub_140320DA0
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_140320DA0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 *result; // rax
  __int64 i; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD v10[2]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v11; // [rsp+38h] [rbp-70h]
  __int64 v12[13]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    v3 = a1[2];
    v12[1] = 0;
    v12[2] = v1;
    v12[3] = v2;
    v12[5] = 0;
    v12[6] = v1;
    v12[7] = v2;
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v3 = 0;
  }
  v12[0] = v4;
  v12[4] = v4;
  v12[8] = v3;
  result = sub_140308470(v10, v12);
  for ( i = v10[0]; v10[0]; i = v10[0] )
  {
    v7 = 3 * v11;
    v8 = *(_QWORD *)(i + 24 * v11 + 8);
    if ( v8 )
      sub_140001660(*(_QWORD *)(i + 24 * v11 + 16), v8, 1);
    v9 = *(_QWORD *)(i + 8 * v7 + 272);
    if ( v9 )
      sub_140001660(*(_QWORD *)(i + 8 * v7 + 280), v9, 1);
    result = sub_140308470(v10, v12);
  }
  return result;
}