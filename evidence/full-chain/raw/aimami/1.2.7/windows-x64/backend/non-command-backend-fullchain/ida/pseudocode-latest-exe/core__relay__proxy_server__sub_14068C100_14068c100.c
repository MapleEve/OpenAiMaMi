// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x14068c100 | successor of pre-update 0x140cf4600 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.508, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_14068C100(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r9
  __int64 v3; // rsi
  __int64 v4; // rsi
  double result; // xmm0_8
  __int64 v6; // rdx
  _QWORD *v7; // [rsp+20h] [rbp-10h]
  __int64 v8; // [rsp+28h] [rbp-8h]

  if ( !*(_QWORD *)a1 )
  {
    sub_1406C4B40(a1 + 8);
    return result;
  }
  if ( (unsigned int)*(_QWORD *)a1 != 1 )
    return result;
  if ( !*(_BYTE *)(a1 + 169) )
  {
    if ( *(_QWORD *)(a1 + 32) != -2 )
    {
      v3 = a1;
      sub_1406C48B0(a1 + 32);
      a1 = v3;
    }
    v2 = *(_QWORD **)(a1 + 144);
    if ( *v2 != 1 )
    {
      if ( !*v2 )
        goto LABEL_9;
LABEL_15:
      v4 = a1;
      goto LABEL_18;
    }
LABEL_16:
    v8 = a1;
    v7 = v2;
    sub_14069BB20(v2 + 1);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a1 + 169) != 3 )
    return result;
  if ( *(_QWORD *)(a1 + 32) != -2 )
  {
    v1 = a1;
    sub_1406C48B0(a1 + 32);
    a1 = v1;
  }
  v2 = *(_QWORD **)(a1 + 144);
  if ( *v2 == 1 )
    goto LABEL_16;
  if ( *v2 )
    goto LABEL_15;
LABEL_9:
  v8 = a1;
  v7 = v2;
  sub_1406C4A40(v2 + 1);
LABEL_17:
  v4 = v8;
  v2 = v7;
LABEL_18:
  result = sub_140001660(v2, 64, 8);
  v6 = *(_QWORD *)(v4 + 8);
  if ( v6 )
    return sub_140001660(*(_QWORD *)(v4 + 16), v6, 1);
  return result;
}
