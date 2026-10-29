// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d12720 | name sub_140D12720
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D12720(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = (unsigned int)*(unsigned __int8 *)(a1 + 56) - 3;
  switch ( *(_BYTE *)(a1 + 56) )
  {
    case 3:
    case 6:
      sub_140D127F0(a1 + 64);
      goto LABEL_4;
    case 4:
    case 5:
      sub_140D12D70(a1 + 64);
LABEL_4:
      result = a1;
      v2 = *(_QWORD *)(a1 + 32);
      if ( v2 )
        result = sub_140001660(*(_QWORD *)(a1 + 40), v2, 1);
      break;
    default:
      return result;
  }
  return result;
}
