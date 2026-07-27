// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405de4e0
// name: sub_1405DE4E0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DE4E0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  result = *(unsigned __int8 *)(a1 + 697);
  v2 = a1;
  switch ( *(_BYTE *)(a1 + 697) )
  {
    case 0:
      sub_140017140(a1);
      return sub_1400104F0(a1 + 96);
    case 3:
      if ( *(_BYTE *)(a1 + 753) == 3 )
      {
        sub_1405E6830(a1 + 712);
        v2 = a1;
        *(_BYTE *)(a1 + 752) = 0;
      }
      sub_1400104F0(v2 + 760);
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 704)) )
        sub_141018B80(a1 + 704);
      goto LABEL_13;
    case 4:
      sub_1405DD9A0(a1 + 1168);
      *(_WORD *)(a1 + 700) = 0;
      goto LABEL_12;
    case 5:
      if ( *(_BYTE *)(a1 + 753) == 3 )
      {
        sub_1405E6830(a1 + 712);
        v2 = a1;
        *(_BYTE *)(a1 + 752) = 0;
      }
      sub_1400104F0(v2 + 760);
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 704)) )
        sub_141018B80(a1 + 704);
LABEL_12:
      sub_1400104F0(a1 + 664);
LABEL_13:
      sub_1405E7AE0(a1 + 368);
      v3 = *(_QWORD *)(a1 + 344);
      if ( v3 )
        sub_140001660(*(_QWORD *)(a1 + 352), v3, 1);
      if ( *(_BYTE *)(a1 + 698) )
      {
        v4 = *(_QWORD *)(a1 + 320);
        if ( v4 )
          sub_140001660(*(_QWORD *)(a1 + 328), v4, 1);
      }
      *(_BYTE *)(a1 + 698) = 0;
      if ( *(_BYTE *)(a1 + 699) )
        sub_1400104F0(a1 + 272);
      *(_BYTE *)(a1 + 699) = 0;
      result = sub_140017140(a1 + 176);
      break;
    default:
      return result;
  }
  return result;
}