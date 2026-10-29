// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d154e0 | name sub_140D154E0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D154E0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // [rsp+28h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 649);
  v2 = a1;
  switch ( *(_BYTE *)(a1 + 649) )
  {
    case 0:
      sub_14029C800(a1);
      return sub_140409B40(a1 + 96);
    case 3:
      v7 = a1;
      if ( *(_BYTE *)(a1 + 800) == 3 && *(_BYTE *)(a1 + 753) == 3 )
      {
        sub_140D1A820(*(_QWORD *)(a1 + 680), *(_QWORD *)(a1 + 688));
        v2 = v7;
        *(_BYTE *)(v7 + 752) = 0;
      }
      sub_140409B40(v2 + 808);
      if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v7 + 656)) )
        goto LABEL_14;
      goto LABEL_13;
    case 4:
      v7 = a1;
      sub_140D14680(a1 + 656);
      *(_WORD *)(v7 + 653) = 0;
      goto LABEL_14;
    case 5:
      v7 = a1;
      if ( *(_BYTE *)(a1 + 800) == 3 && *(_BYTE *)(a1 + 753) == 3 )
      {
        sub_140D1A820(*(_QWORD *)(a1 + 680), *(_QWORD *)(a1 + 688));
        v2 = v7;
        *(_BYTE *)(v7 + 752) = 0;
      }
      sub_140409B40(v2 + 808);
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v7 + 656)) )
LABEL_13:
        sub_141242F50(v7 + 656);
LABEL_14:
      v3 = *(_QWORD *)(v7 + 624);
      if ( v3 )
        sub_140001660(*(_QWORD *)(v7 + 632), v3, 1);
      if ( *(_QWORD *)(v7 + 368) != -1 && *(_BYTE *)(v7 + 650) )
        sub_14038CFC0(v7 + 368);
      *(_BYTE *)(v7 + 650) = 0;
      v4 = *(_QWORD *)(v7 + 344);
      if ( v4 )
        sub_140001660(*(_QWORD *)(v7 + 352), v4, 1);
      if ( *(_BYTE *)(v7 + 651) )
      {
        v5 = *(_QWORD *)(v7 + 320);
        if ( v5 )
          sub_140001660(*(_QWORD *)(v7 + 328), v5, 1);
      }
      *(_WORD *)(v7 + 651) = 0;
      result = sub_14029C800(v7 + 176);
      break;
    default:
      return result;
  }
  return result;
}
