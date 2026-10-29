// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1411b9c50 | name sub_1411B9C50
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1411B9C50(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = 3;
  if ( *a2 >= 2u )
    v2 = *a2 - 2LL;
  switch ( v2 )
  {
    case 0LL:
      sub_1411B9E70(a1, a2[1], a2[2]);
      result = a1;
      break;
    case 1LL:
      sub_1411B9D60(a1, a2[1], a2[2]);
      result = a1;
      break;
    case 2LL:
      sub_1411BE1A0(a1, aExpectedReques, 54);
      *(_WORD *)(a1 + 104) = 415;
      result = a1;
      break;
    case 3LL:
      sub_1411BF060(a1, a2);
      result = a1;
      break;
  }
  return result;
}
