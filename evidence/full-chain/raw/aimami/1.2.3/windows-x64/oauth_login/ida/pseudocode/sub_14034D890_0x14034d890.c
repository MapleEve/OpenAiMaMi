// module: codexmate_lib/core/oauth_login
// addr: 0x14034d890
// name: sub_14034D890
// win 1.2.1 | module src/core/oauth_login.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_14034D890(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  volatile signed __int64 *result; // rax
  __int64 v11; // [rsp+20h] [rbp-20h]
  __int64 v12; // [rsp+20h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+30h] [rbp-10h]

  sub_14034FA40(a1);
  v4 = a1;
  v5 = a1[12];
  if ( v5 )
  {
    v14 = a1[12];
    sub_14067E8F0(v5, v1, v2, v3);
    sub_140001660(v14, 32, 8);
    v4 = a1;
  }
  v15 = v4[14];
  v11 = v4[15];
  if ( *(_QWORD *)v11 )
    (*(void (__fastcall **)(__int64))v11)(v15);
  v6 = *(_QWORD *)(v11 + 8);
  if ( v6 )
    sub_140001660(v15, v6, *(_QWORD *)(v11 + 16));
  v7 = a1;
  v8 = (_QWORD *)a1[16];
  if ( *v8 )
    sub_140001660(v8[1], *v8, 1);
  sub_140001660(v8, 88, 8);
  v16 = a1[19];
  if ( v16 )
  {
    v12 = a1[20];
    if ( *(_QWORD *)v12 )
      (*(void (__fastcall **)(__int64))v12)(v16);
    v9 = *(_QWORD *)(v12 + 8);
    v7 = a1;
    if ( v9 )
      sub_140001660(v16, v9, *(_QWORD *)(v12 + 16));
  }
  result = (volatile signed __int64 *)v7[21];
  if ( result )
  {
    if ( !_InterlockedDecrement64(result) )
      return (volatile signed __int64 *)sub_141018DA0(v7 + 21);
  }
  return result;
}