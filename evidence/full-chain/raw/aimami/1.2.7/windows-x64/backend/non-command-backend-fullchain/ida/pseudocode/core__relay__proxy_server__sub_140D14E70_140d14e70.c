// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d14e70 | name sub_140D14E70
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_140D14E70(__int64 a1)
{
  volatile signed __int64 *result; // rax
  _QWORD *v2; // rsi
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  volatile signed __int64 *v5; // rax

  result = (volatile signed __int64 *)*(unsigned __int8 *)(a1 + 420);
  switch ( *(_BYTE *)(a1 + 420) )
  {
    case 0:
      sub_140409B40(a1 + 160);
      result = *(volatile signed __int64 **)(a1 + 280);
      if ( result )
      {
        if ( !_InterlockedDecrement64(result) )
          return sub_1409E5F10((_QWORD *)(a1 + 280));
      }
      return result;
    case 3:
      sub_140D1A820(*(_QWORD *)(a1 + 424), *(_QWORD *)(a1 + 432));
      goto LABEL_18;
    case 4:
      if ( *(_BYTE *)(a1 + 1057) == 3 )
      {
        sub_140D11B60(a1 + 704);
      }
      else if ( !*(_BYTE *)(a1 + 1057) )
      {
        sub_140402120(a1 + 568);
        v2 = *(_QWORD **)(a1 + 696);
        if ( *v2 )
          sub_140001660(v2[1], *v2, 1);
        sub_140001660(v2, 88, 8);
      }
LABEL_18:
      *(_BYTE *)(a1 + 418) = 0;
      goto LABEL_19;
    case 5:
      sub_140D11530(a1 + 432);
      goto LABEL_19;
    case 6:
      if ( *(_BYTE *)(a1 + 913) == 3 )
      {
        sub_140D11B60(a1 + 560);
      }
      else if ( !*(_BYTE *)(a1 + 913) )
      {
        sub_140402120(a1 + 424);
        v3 = *(_QWORD **)(a1 + 552);
        if ( *v3 )
          sub_140001660(v3[1], *v3, 1);
        sub_140001660(v3, 88, 8);
      }
LABEL_19:
      *(_BYTE *)(a1 + 417) = 0;
      if ( *(_BYTE *)(a1 + 415) )
        sub_14029C800(a1 + 64);
      *(_BYTE *)(a1 + 415) = 0;
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 360)) )
        sub_141242F50(a1 + 360);
      sub_140409B40(a1 + 32);
      *(_BYTE *)(a1 + 416) = 0;
      v4 = *(_QWORD *)(a1 + 336);
      if ( v4 )
        sub_140001660(*(_QWORD *)(a1 + 344), v4, 1);
      v5 = *(volatile signed __int64 **)(a1 + 328);
      if ( v5 && !_InterlockedDecrement64(v5) )
        sub_1409E5F10((_QWORD *)(a1 + 328));
      result = (volatile signed __int64 *)a1;
      *(_BYTE *)(a1 + 419) = 0;
      break;
    default:
      return result;
  }
  return result;
}
