// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14043c0f0
// name: sub_14043C0F0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14043C0F0(__int64 *a1)
{
  __int64 result; // rax
  void (__fastcall *v2)(__int64); // rdx
  __int64 v3; // [rsp+28h] [rbp-18h]
  void (__fastcall **v4)(__int64); // [rsp+30h] [rbp-10h]

  result = *a1;
  if ( *a1 )
  {
    if ( (_DWORD)result == 1 )
    {
      v3 = a1[2];
      v4 = (void (__fastcall **)(__int64))a1[3];
      if ( !*v4 )
        goto LABEL_7;
    }
    else
    {
      v3 = a1[2];
      v4 = (void (__fastcall **)(__int64))a1[3];
      if ( !*v4 )
        goto LABEL_7;
    }
    (*v4)(v3);
LABEL_7:
    result = (__int64)v4;
    v2 = v4[1];
    if ( v2 )
      return sub_140001660(v3, v2, v4[2]);
  }
  return result;
}