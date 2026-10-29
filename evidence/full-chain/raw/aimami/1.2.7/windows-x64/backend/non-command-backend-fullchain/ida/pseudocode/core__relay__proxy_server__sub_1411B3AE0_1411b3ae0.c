// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1411b3ae0 | name sub_1411B3AE0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1411B3AE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 8) == -1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v5 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)v5 )
      (*(void (__fastcall **)(__int64))v5)(v3);
    result = v5;
    v2 = *(_QWORD *)(v5 + 8);
    if ( v2 )
      return sub_140001660(v3, v2, *(_QWORD *)(v5 + 16));
  }
  else
  {
    sub_140299EE0((__int64 *)(a1 + 8));
    sub_140299EE0((__int64 *)(a1 + 40));
    sub_140299EE0((__int64 *)(a1 + 72));
    sub_140299EE0((__int64 *)(a1 + 104));
    sub_140299EE0((__int64 *)(a1 + 136));
    sub_140299EE0((__int64 *)(a1 + 168));
    sub_140299EE0((__int64 *)(a1 + 200));
    sub_140299EE0((__int64 *)(a1 + 232));
    sub_140299EE0((__int64 *)(a1 + 264));
    sub_140299810((_QWORD *)(a1 + 296));
    result = a1;
    if ( *(_DWORD *)(a1 + 328) >= 2u )
      return sub_1416547E0(a1 + 336);
  }
  return result;
}
