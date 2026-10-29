// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e8cb20 | name sub_140E8CB20
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E8CB20(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD v9[9]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v10[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v11; // [rsp+78h] [rbp-8h]
  __int64 v12; // [rsp+80h] [rbp+0h]
  __int64 v13; // [rsp+88h] [rbp+8h]
  _QWORD *v14; // [rsp+90h] [rbp+10h]
  __int64 v15; // [rsp+98h] [rbp+18h]
  __int64 v16; // [rsp+A0h] [rbp+20h]

  v16 = -2;
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
  sub_140E84780(v10, v9);
  for ( result = v10[0]; v10[0]; result = v10[0] )
  {
    v14 = (_QWORD *)(result + 24 * v11 + 96);
    v6 = *(_QWORD *)(result + 24 * v11 + 104);
    v13 = *(_QWORD *)(result + 24 * v11 + 112);
    v12 = v6;
    v7 = v6;
    v15 = 0;
    while ( v13 != v15 )
    {
      ++v15;
      v8 = v7 + 32;
      sub_1403880E0(v7);
      v7 = v8;
    }
    if ( *v14 )
      sub_140001660(v14[1], 32LL * *v14, 8);
    sub_140E84780(v10, v9);
  }
  return result;
}
