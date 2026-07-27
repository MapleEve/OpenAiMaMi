// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405de130
// name: sub_1405DE130
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DE130(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 432);
  switch ( *(_BYTE *)(a1 + 432) )
  {
    case 0:
      result = sub_1400104F0(a1 + 64);
      break;
    case 3:
      v3 = a1;
      sub_1405E6830(a1 + 440);
      goto LABEL_5;
    case 4:
    case 5:
      v3 = a1;
      sub_1405DA6C0(a1 + 440);
LABEL_5:
      *(_BYTE *)(v3 + 429) = 0;
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v3 + 240)) )
        sub_141018B80(v3 + 240);
      *(_BYTE *)(v3 + 430) = 0;
      result = sub_1400104F0(v3 + 32);
      v2 = *(_QWORD *)(v3 + 216);
      if ( v2 )
        result = sub_140001660(*(_QWORD *)(v3 + 224), v2, 1);
      *(_BYTE *)(v3 + 431) = 0;
      break;
    default:
      return result;
  }
  return result;
}