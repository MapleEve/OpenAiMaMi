// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406bc500 | successor of pre-update 0x140d14e70 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.553, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
volatile signed __int64 *__fastcall sub_1406BC500(__int64 a1)
{
  volatile signed __int64 *result; // rax
  __int64 *v2; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  result = (volatile signed __int64 *)*(unsigned __int8 *)(a1 + 1499);
  if ( *(_BYTE *)(a1 + 1499) )
  {
    if ( (_DWORD)result != 3 )
      return result;
    if ( *(_BYTE *)(a1 + 1489) == 3 )
    {
      if ( *(_BYTE *)(a1 + 1481) == 3 )
      {
        sub_1406B87F0(a1 + 1128);
        goto LABEL_17;
      }
      if ( !*(_BYTE *)(a1 + 1481) )
      {
        sub_14068B4D0(a1 + 992);
        v2 = *(__int64 **)(a1 + 1120);
        v3 = *v2;
        if ( !*v2 )
          goto LABEL_7;
        goto LABEL_6;
      }
    }
    else if ( !*(_BYTE *)(a1 + 1489) )
    {
      sub_14068B4D0(a1 + 832);
      v2 = *(__int64 **)(a1 + 960);
      v3 = *v2;
      if ( !*v2 )
      {
LABEL_7:
        sub_140001660(v2, 88, 8);
        goto LABEL_17;
      }
LABEL_6:
      sub_140001660(v2[1], v3, 1);
      goto LABEL_7;
    }
LABEL_17:
    v5 = *(_QWORD *)(a1 + 808);
    if ( v5 )
      sub_140001660(*(_QWORD *)(a1 + 816), v5, 1);
    v6 = *(_QWORD *)(a1 + 784);
    if ( v6 )
      sub_140001660(*(_QWORD *)(a1 + 792), v6, 1);
    sub_1400366B0(a1 + 688);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 680)) )
      sub_140CA5C00(a1 + 680);
    *(_BYTE *)(a1 + 1501) = 0;
    sub_1406C4300(a1 + 512);
    *(_WORD *)(a1 + 1502) = 0;
    return (volatile signed __int64 *)a1;
  }
  sub_14068B4D0(a1);
  v4 = *(_QWORD **)(a1 + 128);
  if ( *v4 )
    sub_140001660(v4[1], *v4, 1);
  sub_140001660(v4, 88, 8);
  sub_1406C4300(a1 + 136);
  result = *(volatile signed __int64 **)(a1 + 336);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_140CA5C00(a1 + 336);
  return result;
}
