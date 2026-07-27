// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140ea5ae0
// name: sub_140EA5AE0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EA5AE0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 != -1 )
  {
    v3 = *(_QWORD *)(result + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) )
    {
      v4 = (v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v4 )
        return sub_140001660(v2, v4, 8);
    }
  }
  return result;
}