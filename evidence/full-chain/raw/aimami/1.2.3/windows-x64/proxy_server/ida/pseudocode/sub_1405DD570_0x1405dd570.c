// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dd570
// name: sub_1405DD570
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DD570(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+38h] [rbp-8h]
  __int64 v12; // [rsp+38h] [rbp-8h]
  __int64 v13; // [rsp+38h] [rbp-8h]

  result = *((unsigned __int8 *)a1 + 90);
  if ( *((_BYTE *)a1 + 90) )
  {
    if ( (_DWORD)result == 3 )
    {
      v8 = a1[8];
      v2 = a1[7] + 24;
      v11 = 0;
      while ( v8 != v11 )
      {
        ++v11;
        v3 = v2 + 32;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v2 - 24) + 32LL))(
          v2,
          *(_QWORD *)(v2 - 16),
          *(_QWORD *)(v2 - 8));
        v2 = v3;
      }
      v5 = a1[6];
      if ( v5 )
        sub_140001660(a1[7], 32 * v5, 8);
      *((_BYTE *)a1 + 89) = 0;
      v13 = *a1;
      v10 = a1[1];
      if ( *(_QWORD *)v10 )
        (*(void (__fastcall **)(__int64))v10)(v13);
      v6 = *(_QWORD *)(v10 + 8);
      if ( v6 )
        sub_140001660(v13, v6, *(_QWORD *)(v10 + 16));
      *((_BYTE *)a1 + 88) = 0;
      return (__int64)a1;
    }
  }
  else
  {
    v12 = a1[2];
    v9 = a1[3];
    if ( *(_QWORD *)v9 )
      (*(void (__fastcall **)(__int64))v9)(v12);
    result = v9;
    v4 = *(_QWORD *)(v9 + 8);
    if ( v4 )
      return sub_140001660(v12, v4, *(_QWORD *)(v9 + 16));
  }
  return result;
}