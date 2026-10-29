// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d387e0 | name sub_140D387E0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D387E0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    sub_140D73B40(v6, a2, a3);
    return (*(__int64 (__fastcall **)(__int64, _BYTE *))(v4 + 40))(v3, v6);
  }
  return result;
}
