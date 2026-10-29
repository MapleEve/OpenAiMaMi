// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d127f0 | name sub_140D127F0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D127F0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v5; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 197);
  switch ( *(_BYTE *)(a1 + 197) )
  {
    case 0:
      sub_140409B40(a1 + 64);
      return sub_140409B40(a1 + 96);
    case 3:
      v5 = a1;
      sub_140D13C20(a1 + 200);
      goto LABEL_18;
    case 4:
      v5 = a1;
      sub_140D1A820(*(_QWORD *)(a1 + 200), *(_QWORD *)(a1 + 208));
      goto LABEL_15;
    case 5:
      v5 = a1;
      if ( *(_BYTE *)(a1 + 857) == 3 )
      {
        sub_140D11B60(a1 + 504);
      }
      else if ( !*(_BYTE *)(a1 + 857) )
      {
        sub_140402120(a1 + 368);
        v2 = *(_QWORD **)(v5 + 496);
        if ( *v2 )
          sub_140001660(v2[1], *v2, 1);
        sub_140001660(v2, 88, 8);
      }
      v3 = *(_QWORD *)(v5 + 344);
      if ( v3 != -1 && v3 )
        sub_140001660(*(_QWORD *)(v5 + 352), v3, 1);
      *(_BYTE *)(v5 + 193) = 0;
LABEL_15:
      *(_BYTE *)(v5 + 195) = 0;
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v5 + 160)) )
        sub_141242F50(v5 + 160);
      *(_BYTE *)(v5 + 196) = 0;
LABEL_18:
      sub_140409B40(v5 + 32);
      if ( *(_BYTE *)(v5 + 194) )
        sub_140409B40(v5);
      *(_BYTE *)(v5 + 194) = 0;
      result = v5;
      break;
    default:
      return result;
  }
  return result;
}
