// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14043bd60
// name: sub_14043BD60
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14043BD60(_QWORD *a1)
{
  void (__fastcall *v1)(__int64); // rax
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  v4 = a1[2];
  v5 = a1[3];
  v1 = *(void (__fastcall **)(__int64))v5;
  if ( *a1 )
  {
    if ( (unsigned int)*a1 == 1 )
    {
      if ( !v1 )
        goto LABEL_9;
    }
    else if ( !v1 )
    {
      goto LABEL_9;
    }
  }
  else if ( !v1 )
  {
    goto LABEL_9;
  }
  v1(v4);
LABEL_9:
  result = v5;
  v3 = *(_QWORD *)(v5 + 8);
  if ( v3 )
    return sub_140001660(v4, v3, *(_QWORD *)(v5 + 16));
  return result;
}