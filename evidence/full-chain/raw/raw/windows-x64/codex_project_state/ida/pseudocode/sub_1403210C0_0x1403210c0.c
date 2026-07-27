// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x1403210c0
// name: sub_1403210C0
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403210C0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD v7[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v8; // [rsp+38h] [rbp-60h]
  _QWORD v9[11]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    v3 = a1[2];
    v9[1] = 0;
    v9[2] = v1;
    v9[3] = v2;
    v9[5] = 0;
    v9[6] = v1;
    v9[7] = v2;
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v3 = 0;
  }
  v9[0] = v4;
  v9[4] = v4;
  v9[8] = v3;
  sub_140308850(v7, v9);
  for ( result = v7[0]; v7[0]; result = v7[0] )
  {
    v6 = *(_QWORD *)(result + 24 * v8 + 8);
    if ( v6 )
      sub_140001660(*(_QWORD *)(result + 24 * v8 + 16), v6, 1);
    sub_140308850(v7, v9);
  }
  return result;
}