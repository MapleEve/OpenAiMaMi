// win 1.2.7 | module src/core/analytics/threads.rs | ea 0x140e8b6e0 | name sub_140E8B6E0
// win 1.2.7 | module src/core/analytics/threads.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E8B6E0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD v9[9]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v10[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+0h]
  __int64 v12; // [rsp+88h] [rbp+8h]

  v12 = -2;
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
  result = sub_140E83BE0(v10, v9);
  for ( i = v10[0]; v10[0]; i = v10[0] )
  {
    v7 = v11;
    v8 = *(_QWORD *)(i + 24 * v11 + 2824);
    if ( v8 )
      sub_140001660(*(_QWORD *)(i + 24 * v11 + 2832), v8, 1);
    sub_140DF5980((v7 << 8) + i);
    result = sub_140E83BE0(v10, v9);
  }
  return result;
}
