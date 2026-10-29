// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e8ad60 | name sub_140E8AD60
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E8AD60(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD v9[9]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v10[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v11; // [rsp+78h] [rbp-8h]
  _QWORD *v12; // [rsp+80h] [rbp+0h]
  __int64 v13; // [rsp+88h] [rbp+8h]

  v13 = -2;
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
  result = sub_140E820F0(v10, v9);
  for ( i = v10[0]; v10[0]; i = v10[0] )
  {
    v7 = v11;
    v12 = v9;
    v8 = *(_QWORD *)(i + 24 * v11 + 360);
    if ( v8 )
      sub_140001660(*(_QWORD *)(i + 24 * v11 + 368), v8, 1);
    sub_140DF44E0(32 * v7 + i);
    result = sub_140E820F0(v10, v9);
  }
  return result;
}
