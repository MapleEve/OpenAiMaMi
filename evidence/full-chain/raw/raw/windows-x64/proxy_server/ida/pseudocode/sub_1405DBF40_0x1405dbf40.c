// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dbf40
// name: sub_1405DBF40
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DBF40(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v4; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 197);
  switch ( *(_BYTE *)(a1 + 197) )
  {
    case 0:
      sub_1400104F0(a1 + 64);
      return sub_1400104F0(a1 + 96);
    case 3:
      v4 = a1;
      sub_1405DD460(a1 + 200);
      goto LABEL_12;
    case 4:
      v4 = a1;
      sub_1405E6830(a1 + 200);
      goto LABEL_9;
    case 5:
      v4 = a1;
      sub_1405DA6C0(a1 + 368);
      v2 = *(_QWORD *)(v4 + 344);
      if ( v2 != -1 && v2 )
        sub_140001660(*(_QWORD *)(v4 + 352), v2, 1);
      *(_BYTE *)(v4 + 193) = 0;
LABEL_9:
      *(_BYTE *)(v4 + 195) = 0;
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v4 + 160)) )
        sub_141018B80(v4 + 160);
      *(_BYTE *)(v4 + 196) = 0;
LABEL_12:
      sub_1400104F0(v4 + 32);
      if ( *(_BYTE *)(v4 + 194) )
        sub_1400104F0(v4);
      *(_BYTE *)(v4 + 194) = 0;
      result = v4;
      break;
    default:
      return result;
  }
  return result;
}