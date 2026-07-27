// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dbd60
// name: sub_1405DBD60
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DBD60(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = (unsigned int)*(unsigned __int8 *)(a1 + 32) - 3;
  switch ( *(_BYTE *)(a1 + 32) )
  {
    case 3:
    case 7:
      sub_1405DBF40(a1 + 64);
      goto LABEL_4;
    case 4:
    case 5:
    case 6:
      sub_1405DC430(a1 + 64);
LABEL_4:
      result = a1;
      v2 = *(_QWORD *)(a1 + 40);
      if ( v2 )
        result = sub_140001660(*(_QWORD *)(a1 + 48), v2, 1);
      break;
    default:
      return result;
  }
  return result;
}