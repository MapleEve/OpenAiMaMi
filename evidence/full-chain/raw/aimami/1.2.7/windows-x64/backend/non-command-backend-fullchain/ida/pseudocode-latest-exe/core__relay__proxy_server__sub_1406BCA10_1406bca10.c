// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406bca10 | successor of pre-update 0x140d11530 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.524, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1406BCA10(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

  result = *(unsigned __int8 *)(a1 + 898);
  switch ( *(_BYTE *)(a1 + 898) )
  {
    case 0:
      return sub_1406C0ED0(a1);
    case 3:
      if ( *(_BYTE *)(a1 + 976) == 3 )
      {
        sub_1406C1D00(*(_QWORD *)(a1 + 960), *(_QWORD *)(a1 + 968));
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 952)) )
          sub_141258070(a1 + 952);
      }
      goto LABEL_25;
    case 4:
      if ( *(_BYTE *)(a1 + 1569) == 3 )
      {
        if ( *(_BYTE *)(a1 + 1561) == 3 )
        {
          sub_1406B87F0(a1 + 1208);
        }
        else if ( !*(_BYTE *)(a1 + 1561) )
        {
          sub_1406C21E0(a1 + 1072);
        }
      }
      else if ( !*(_BYTE *)(a1 + 1569) )
      {
        sub_14068B4D0(a1 + 912);
        v2 = *(_QWORD **)(a1 + 1040);
        if ( *v2 )
          sub_140001660(v2[1], *v2, 1);
        sub_140001660(v2, 88, 8);
      }
      goto LABEL_22;
    case 5:
      if ( *(_BYTE *)(a1 + 976) == 3 )
      {
        sub_1406C1D00(*(_QWORD *)(a1 + 960), *(_QWORD *)(a1 + 968));
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 952)) )
          sub_141258070(a1 + 952);
      }
      sub_1406C0ED0(a1 + 728);
      goto LABEL_18;
    case 6:
      sub_1406BC500(a1 + 912);
      *(_BYTE *)(a1 + 904) = 0;
      sub_1406C0ED0(a1 + 728);
      if ( *(_DWORD *)(a1 + 760) == -1 )
        sub_14028DCE0(*(_QWORD *)(a1 + 768));
LABEL_18:
      *(_BYTE *)(a1 + 900) = 0;
      v3 = *(_QWORD *)(a1 + 696);
      if ( v3 != -1 && v3 )
        sub_140001660(*(_QWORD *)(a1 + 704), v3, 1);
      *(_BYTE *)(a1 + 901) = 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 664) + 32LL))(
        a1 + 688,
        *(_QWORD *)(a1 + 672),
        *(_QWORD *)(a1 + 680));
      goto LABEL_22;
    case 7:
      sub_1406BC500(a1 + 912);
LABEL_22:
      v4 = *(_QWORD *)(a1 + 640);
      if ( v4 )
        sub_140001660(*(_QWORD *)(a1 + 648), v4, 1);
      sub_1400366B0(a1 + 544);
LABEL_25:
      *(_BYTE *)(a1 + 905) = 0;
      if ( *(_BYTE *)(a1 + 902) )
        sub_1406C4300(a1 + 240);
      *(_BYTE *)(a1 + 902) = 0;
      sub_1406C0ED0(a1 + 208);
      if ( *(_BYTE *)(a1 + 903) )
      {
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 200)) )
          sub_140CA5C00(a1 + 200);
      }
      *(_BYTE *)(a1 + 903) = 0;
      *(_BYTE *)(a1 + 906) = 0;
      result = a1;
      break;
    default:
      return result;
  }
  return result;
}
