// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405b02e0
// name: sub_1405B02E0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405B02E0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // [rsp+20h] [rbp-30h]
  _QWORD *v7; // [rsp+28h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]

  result = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v6 = (_QWORD *)(a1 + 8);
    v8 = a1;
    v3 = *(_QWORD **)(a1 + 32);
    v9 = *v3;
    v7 = v3;
    v10 = v3[1];
    if ( *(_QWORD *)v10 )
      (*(void (__fastcall **)(__int64))v10)(v9);
    goto LABEL_11;
  }
  if ( (_DWORD)result != 1 )
    return result;
  result = *(unsigned __int8 *)(a1 + 57);
  if ( (_DWORD)result == 3 )
  {
    v6 = (_QWORD *)(a1 + 8);
    v8 = a1;
    v4 = *(_QWORD **)(a1 + 32);
    v9 = *v4;
    v7 = v4;
    v10 = v4[1];
    if ( *(_QWORD *)v10 )
LABEL_10:
      (*(void (__fastcall **)(__int64, __int64))v10)(v9, a1 + 8);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 57) )
      return result;
    v6 = (_QWORD *)(a1 + 8);
    v8 = a1;
    v2 = *(_QWORD **)(a1 + 32);
    v9 = *v2;
    v7 = v2;
    v10 = v2[1];
    if ( *(_QWORD *)v10 )
      goto LABEL_10;
  }
LABEL_11:
  v5 = *(_QWORD *)(v10 + 8);
  if ( v5 )
    sub_140001660(v9, v5, *(_QWORD *)(v10 + 16));
  result = sub_140001660(v7, 16, 8);
  if ( *v6 )
    return sub_140001660(*(_QWORD *)(v8 + 16), *v6, 1);
  return result;
}